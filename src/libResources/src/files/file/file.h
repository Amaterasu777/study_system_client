#ifndef LIB_RESOURCES_FILE_H
#define LIB_RESOURCES_FILE_H

#include <QtCore/QString>
#include <QtCore/QFile>

namespace libResources {
    namespace files {
        /**
         * Класс, реализующий взаимодействие с файлами
         */
        class File {
        public:
            /**
             * Конструктор класса
             * @param path - путь до файла
             * @param isBin - если истина - то это бинарный файл
             */
            explicit File(const QString& path, bool isBin = false);

            File() = default;
            ~File() = default;

        private:
            /**
             * Манипулятор доступа к файлам
             */
            QFile _file;
            /**
             * Содержимое файла в виде контейнера строк
             */
            QStringList _lines;

            /**
             * Метод инициализирующий текстовый файл
             */
            void initTextFile();
            /**
             * Метод, инициализирующий бинарный файл
             */
            void initBinFile();
        };
    }
}

#endif //LIB_RESOURCES_FILE_H
