#include "directory.h"

#include <QtCore/QDirIterator>

using namespace libResources;
using namespace files;

/**
 * Конструктор класса
 * @param dirPath
 */
Directory::Directory(const QString& dirPath) : _qDir(dirPath) {}

/**
 * Метод, проверяющий на наличие файлов в директории
 * @return bool - Результат проверки
 */
bool Directory::isEmpty() const {
    //Получаем элементы директории
    auto items = _qDir.entryInfoList();

    //Перебираем все элементы
    //Если это не "." и не ".."
    //То директория не пустая
    for (const auto& item : items)
        if(!isDirLinks(item.fileName()))
            return false;

    return true;
}

/**
 * Метод, возвращающий под-директории
 * @return QVector<Directory> - вектор директорий
 */
QVector<Directory> Directory::subDirs() const {
    QVector<Directory> result;
    QDirIterator it(_qDir);

    //Перебираем все вложенные директории
    while(it.hasNext()) {
        auto path = it.next();

        if (!isDirLinks(path))
            result.push_back(Directory(path));
    }

    return result;
}

/**
 * Метод, возвращающий файлы из директории
 * @return QVector<File> - вектор файлов
 */
QVector<File> Directory::dirFiles() const {
    QVector<File> result;

    auto files = _qDir.entryInfoList();
    for (const auto& file : files)
        if (file.isFile())
            result.push_back(File(file.absoluteFilePath()));

    return result;
}

/**
 * Метод, проверяющий на символические ссылки "." и ".."
 * @param name - имя файла
 * @return bool - Результат проверки
 */
bool Directory::isDirLinks(const QString& name) {
    return name.contains("/.")  || name.contains("/..");
}