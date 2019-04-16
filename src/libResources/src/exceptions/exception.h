#ifndef LIB_RESOURCES_EXCEPTION_H
#define LIB_RESOURCES_EXCEPTION_H

#include <QtCore/QException>
#include <QtCore/QString>

#ifdef QT_DEBUG
    #include <QtCore/QDebug>
    #define logException(msg) qDebug() << msg;
#else
    //ToDo: добавить вывод обработки экцепшенов
    #define logException(msg)
#endif

namespace libResources {
    /**
     * Прототип классов исключений
     */
    class Exception : public QException {
    public:
        explicit Exception(const QString& message) : _message(message) {};
        Exception(const Exception& copy) : _message(copy._message) {};

        Exception() = default;
        ~Exception() override = default;

        void raise() const override { throw *this; }
        Exception *clone() const override { return new Exception(*this); }

        /**
         * Метод доступа к сообщению
         * @return QString
         */
        QString what() { return _message; }
        
    private:
        /**
         * Сообщение исключения
         */
        QString _message;
    };
}

#endif //LIB_RESOURCES_EXCEPTION_H
