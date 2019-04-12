#ifndef CLIENT_WINDOWS_MAIN_WINDOW_H
#define CLIENT_WINDOWS_MAIN_WINDOW_H

#include <QtWidgets/QMainWindow>

namespace windows {
    /**
     * Основное окно приложения
     */
    class MainWindow : public QMainWindow {
    public:
        explicit MainWindow(QWidget* parent = nullptr);
        ~MainWindow() = default;
    private:
    };
}

#endif //CLIENT_WINDOWS_MAIN_WINDOW_H
