#ifndef LIB_RESOURCES_FILES_LOCALIZATION_FILE_H
#define LIB_RESOURCES_FILES_LOCALIZATION_FILE_H

#include "../file/file.h"
#include <QtCore/QHash>

namespace libResources {
    namespace files {
        /**
         * Класс, реализующий взаимодействие с локализационными файлами
         */
        class LocalizationFile : private File {
        public:
            /**
             * Конструктор класса
             * @param path
             */
            explicit LocalizationFile(const QString& path);
            ~LocalizationFile() = default;

            /**
             * Оператор доступа
             * @param key
             * @return QString
             */
            QString operator[](const QString& key);

        private:
            /**
             * Данные хранятся в виде хэш таблицы
             */
            QHash<QString, QString> _hashTable;

            /**
             * Метод, инициализирующий локализационный файл
             */
            void init();
        };
    }
}

#endif //LIB_RESOURCES_FILES_LOCALIZATION_FILE_H
