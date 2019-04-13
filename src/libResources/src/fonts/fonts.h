#ifndef LIB_RESOURCES_FONTS_H
#define LIB_RESOURCES_FONTS_H

#include <export_resources.h>
#include <singleton.h>

namespace libResources {
    /**
     * Синглтон класса доступа к шрифтам
     */
    class EXPORT_LIB_RES Fonts : public Singleton<Fonts> {
    public:
        explicit Fonts(singleton) {};

        /**
         * Метод, инициализирующий шрифты
         */
        void init();
    private:
    };
}

#endif //LIB_RESOURCES_FONTS_H
