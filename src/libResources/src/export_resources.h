
#ifndef EXPORT_LIB_RES_H
#define EXPORT_LIB_RES_H

#ifdef RESOURCES_STATIC_DEFINE
#  define EXPORT_LIB_RES
#  define RESOURCES_NO_EXPORT
#else
#  ifndef EXPORT_LIB_RES
#    ifdef Resources_EXPORTS
        /* We are building this library */
#      define EXPORT_LIB_RES 
#    else
        /* We are using this library */
#      define EXPORT_LIB_RES 
#    endif
#  endif

#  ifndef RESOURCES_NO_EXPORT
#    define RESOURCES_NO_EXPORT 
#  endif
#endif

#ifndef RESOURCES_DEPRECATED
#  define RESOURCES_DEPRECATED __declspec(deprecated)
#endif

#ifndef RESOURCES_DEPRECATED_EXPORT
#  define RESOURCES_DEPRECATED_EXPORT EXPORT_LIB_RES RESOURCES_DEPRECATED
#endif

#ifndef RESOURCES_DEPRECATED_NO_EXPORT
#  define RESOURCES_DEPRECATED_NO_EXPORT RESOURCES_NO_EXPORT RESOURCES_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef RESOURCES_NO_DEPRECATED
#    define RESOURCES_NO_DEPRECATED
#  endif
#endif

#endif /* EXPORT_LIB_RES_H */
