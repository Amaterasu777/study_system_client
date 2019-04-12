#ifndef GLOBAL_SINGLETON_H
#define GLOBAL_SINGLETON_H

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
        static T t {singleton {}};
        return t;
    }

    Singleton(Singleton const&) = delete;
    Singleton& operator=(Singleton const&) = delete;

protected:
    Singleton() = default;
    struct singleton {};
};

#endif //GLOBAL_SINGLETON_H
