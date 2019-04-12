#ifndef CLIENT_APPLICATION_H
#define CLIENT_APPLICATION_H

#include <QtWidgets/QApplication>

/**
 * Основной класс приложения
 */
class Application {
public:
    explicit Application(int argc, char** argv);
    ~Application() = default;

    /**
     * Метод, запускающий поток выполнения приложения
     * @return int
     */
    int exec() const { return _qApp.exec(); };

private:
    /**
     * Qt приложение
     */
    QApplication _qApp;
};

#endif //CLIENT_APPLICATION_H
