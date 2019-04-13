#include "fonts.h"

#include <files/file/file.h>
#include <exceptions/exception.h>

#include <QtCore/QDebug>

using namespace libResources;

/**
 * Метод, инициализирующий шрифты
 */
void Fonts::init() {
    try {
        files::File f("tt.txt");
    } catch(Exception &ex) {
        qDebug() << ex.what();
    }
}