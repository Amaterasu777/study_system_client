#include "application.h"

/**
 * Конструктор класса
 * @param argc - кол-во аргументов запуска
 * @param argv - аргументы запуска
 */
Application::Application(int argc, char** argv) : _qApp(argc, argv) {
    _mainWindow.show();
}