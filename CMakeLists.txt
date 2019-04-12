#
#   Основной модуль приложения
#

cmake_minimum_required(VERSION 3.10)
project(StudyProgrammingSystem)

set(CMAKE_CXX_STANDARD 17)

#   Библиотеки
add_subdirectory(src/libResources)

#   Исполняемые файлы
add_subdirectory(src/client)