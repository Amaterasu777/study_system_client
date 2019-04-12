#ifndef LIB_RESOURCES_RESOURCES_H
#define LIB_RESOURCES_RESOURCES_H

#include <export_resources.h>
#include <singleton.h>

namespace libResources {
    /**
     * Класс доступа к ресурсам среды
     */
    class EXPORT_LIB_RES Resources : public Singleton<Resources> {
    public:
        explicit Resources(singleton) {}
    };
}

#endif //LIB_RESOURCES_RESOURCES_H
