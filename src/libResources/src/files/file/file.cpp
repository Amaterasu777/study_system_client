#include "file.h"

#include <QtCore/QTextStream>
#include <exceptions/file_access/file_access.h>

using namespace libResources::files;

/**
 * Конструктор класса
 * @param path
 * @param isBin
 */
File::File(const QString &path, bool isBin) : _file(path), _isBin(isBin) {
    //  Если это бинарный файл - то нужна отдельная инициализация
    (_isBin) ? initBinFile() : initTextFile();
}

/**
 * Метод, инициализирующий текстовый файл
 */
void File::initTextFile() {
    if(!_file.open(QIODevice::ReadOnly))
        throw exceptions::FileAccessException(_file.fileName());

    QTextStream stream(&_file);
    while(!stream.atEnd())
        _lines.push_back(stream.readLine());

    _file.close();
}

/**
 * Метод, инициализирующий бинарный файл
 */
void File::initBinFile() {}