#ifndef LIB_RESOURCES_LOCALE_H
#define LIB_RESOURCES_LOCALE_H

#include <QtCore/QString>
#include <files/localization_file/localization_file.h>

namespace libResources {
    /**
     * Класс, реализующий функционал локали
     */
    class Locale {
    public:
        /**
         * Конструктор класса
         * @param locName
         * @param fileName
         */
        explicit Locale(const QString& locName, const QString& fileName);
        /**
         * Конструктор копирования
         * @param copy
         */
        Locale(const Locale& copy) : _name(copy._name), _locFile(copy._locFile) {}

        Locale() = default;
        ~Locale() = default;

        /**
         * Оператор доступа
         * @param key - ключ доступа
         * @return QString - трансляционный текст
         */
        QString operator[](const QString& key) { return _locFile[key]; };

        /**
         * Возвращает имя локализации
         * @return QString - имя локализации
         */
        QString name() const { return _name; };

    private:
        /**
         * Имя локализации
         */
        QString _name;
        /**
         * Локализационный файл
         */
        files::LocalizationFile _locFile;
    };
}

#endif //LIB_RESOURCES_LOCALE_H
