#include "localization_file.h"

using namespace libResources::files;

/**
 * Конструктор класса
 * @param path
 */
LocalizationFile::LocalizationFile(const QString &path) : File(path) {
    init();
}

/**
 * Метод инициализации
 */
void LocalizationFile::init() {
    //  Перебираем строки по две
    for(int i = 0; i < count() - 1; i++) {
        //  Первая строка - ключ
        //  Вторая - значение
        auto key = File::operator[](i);
        auto value = File::operator[](i + 1);

        //  Добавляем в хэш таблицу
        _hashTable.insert(key, value);
    }
}

/**
 * Оператор доступа
 * @param key
 * @return QString
 */
QString LocalizationFile::operator[](const QString &key) {
    auto it = _hashTable.find(key);
    if(it != _hashTable.end())
        return *it;
    return QString();
}