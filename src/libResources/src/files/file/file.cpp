#include "file.h"

#include <QtCore/QTextStream>
#include <exceptions/file_access/file_access.h>

using namespace libResources::files;

/**
 * Конструктор класса
 * @param path
 * @param isBin
 */
File::File(const QString &path, bool isBin) : _file(path), _isBin(isBin), _linesCount(0) {
    //  Если это бинарный файл - то нужна отдельная инициализация
    (_isBin) ? initBinFile() : initTextFile();
}

/**
 * Конструктор копирования
 * @param copy
 */
File::File(const libResources::files::File& copy) : _lines(copy._lines),
                                                    _linesCount(copy._linesCount),
                                                    _isBin(copy._isBin),
                                                    _file(copy._file.fileName())
{}

/**
 * Метод, инициализирующий текстовый файл
 */
void File::initTextFile() {
    if(!_file.open(QIODevice::ReadOnly))
        throw exceptions::FileAccessException(_file.fileName());

    QTextStream stream(&_file);
    while(!stream.atEnd())
        _lines.push_back(stream.readLine());

    _linesCount = _lines.count();
    _file.close();
}

/**
 * Метод, инициализирующий бинарный файл
 */
void File::initBinFile() {}