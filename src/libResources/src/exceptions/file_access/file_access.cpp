#include "file_access.h"

using namespace libResources::exceptions;

/**
 * Конструктор класса
 * @param filePath
 */
FileAccessException::FileAccessException(const QString &filePath)
                    :Exception("[FILE ACCESS ERROR] " + filePath)
{}