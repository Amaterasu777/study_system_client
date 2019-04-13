#include "file.h"

#include <exceptions/file_access/file_access.h>

using namespace libResources::files;

/**
 * Конструктор класса
 * @param path
 * @param isBin
 */
File::File(const QString &path, bool isBin) : _file(path) {
    //  Если это бинарный файл - то нужна отдельная инициализация
    (isBin) ? initBinFile() : initTextFile();
}

/**
 * Метод, инициализирующий текстовый файл
 */
void File::initTextFile() {
    if(!_file.isOpen())
        throw exceptions::FileAccessException(_file.fileName());
}

/**
 * Метод, инициализирующий бинарный файл
 */
void File::initBinFile() {}