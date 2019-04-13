#ifndef LIB_RESOURCES_EXCEPTIONS_FILE_ACCESS_H
#define LIB_RESOURCES_EXCEPTIONS_FILE_ACCESS_H

#include "../exception.h"

namespace libResources {
    namespace exceptions {
        /**
         * Исключение доступа к файлу
         */
        class FileAccessException : public Exception {
        public:
            explicit FileAccessException(const QString& filePath);
            ~FileAccessException() override = default;
        };
    }
}

#endif //LIB_RESOURCES_EXCEPTIONS_FILE_ACCESS_H
