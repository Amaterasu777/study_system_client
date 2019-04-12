#ifndef LIB_RESOURCES_STYLES_H
#define LIB_RESOURCES_STYLES_H

#include <export_resources.h>
#include <singleton.h>

namespace libResources {
    /**
     * Класс доступа к стилям среды
     */
    class EXPORT_LIB_RES Styles : public Singleton<Styles> {
    public:
        explicit Styles(singleton) {}
    };
}

#endif //LIB_RESOURCES_STYLES_H
