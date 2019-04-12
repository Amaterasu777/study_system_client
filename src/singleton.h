#ifndef GLOBAL_SINGLETON_H
#define GLOBAL_SINGLETON_H

#include <memory>

/**
 * Класс-прототип синглтона
 * @tparam T
 */
template<typename T>
class Singleton {
public:
    /**
     * Метод доступа
     * @return Прототип класса
     */
    static T& instance() {
        static const std::unique_ptr<T> instance{new T{singleton{}}};
        return *instance;
    }

    Singleton(Singleton const&) = delete;
    Singleton& operator=(Singleton const&) = delete;

protected:
    Singleton() = default;
    struct singleton {};
};

#endif //GLOBAL_SINGLETON_H
