#include "locale.h"

using namespace libResources;

/**
 * Конструктор класса
 * @param locName
 * @param fileName
 */
Locale::Locale(const QString& locName, const QString& fileName) : _locFile(fileName), _name(locName) {}