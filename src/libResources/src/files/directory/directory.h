#ifndef LIB_RESOURCES_DIRECTORY_H
#define LIB_RESOURCES_DIRECTORY_H

#include <QtCore/QString>
#include <QtCore/QDir>
#include <QtCore/QVector>

#include "../file/file.h"

namespace libResources {
    /**
     * Класс, реализующий взаимодействие с директориями
     */
    class Directory {
    public:
        /**
         * Конструктор класса
         * @param dirPath - путь до директории
         */
        explicit Directory(const QString& dirPath);
        /**
         * Конструктор копирования
         * @param copy
         */
        Directory(const Directory& copy) : _qDir(copy._qDir) {}

        Directory() = default;
        ~Directory() = default;

        /**
         * Метод, проверяющий на существование директории
         * @return bool - Результат проверки
         */
        bool isExists() const { return _qDir.exists(); }
        /**
         * Метод, проверяющий на наличие файлов в директории
         * @return bool - Результат проверки
         */
        bool isEmpty()  const;

        /**
         * Метод, возвращающий под-директории
         * @return VecDirs - вектор директорий
         */
        QVector<Directory> subDirs() const;
        /**
         * Метод, возвращающий файлы из директории
         * @return VecFiles - вектор файлов
         */
        QVector<files::File> dirFiles() const;

        /**
         * Метод, возвращающий путь до директории
         * @return QString - путь до директории
         */
        QString path() const { return _qDir.absolutePath(); }
        /**
         * Метод, возвращающий имя директории
         * @return QString - имя директории
         */
        QString name() const { return _qDir.dirName(); }

        /**
         * Метод, создающий директорию
         */
        void create() const { _qDir.mkdir(path()); }

    private:
        /**
         * Манипулятор работы с директорией
         */
        QDir _qDir;

        /**
         * Метод, проверяющий на символические ссылки "." и ".."
         * @param name - имя файла
         * @return bool - Результат проверки
         */
        static bool isDirLinks(const QString& name);
    };
}

#endif //LIB_RESOURCES_DIRECTORY_H
