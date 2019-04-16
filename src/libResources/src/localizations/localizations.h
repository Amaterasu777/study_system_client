#ifndef LIB_RESOURCES_LOCALIZATIONS_H
#define LIB_RESOURCES_LOCALIZATIONS_H

#include <export_resources.h>
#include <singleton.h>

namespace libResources {
    /**
     * Класс доступа к локализациям
     */
    class EXPORT_LIB_RES Localizations : public Singleton<Localizations> {
    public:
        /**
         * Синглтон
         */
        explicit Localizations(singleton) {}

        /**
         * Метод инициализации
         */
        void init();
    private:
    };
}

#endif //LIB_RESOURCES_LOCALIZATIONS_H
