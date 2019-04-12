#
#   Основное приложение
#

cmake_minimum_required(VERSION 3.10)
project(client)

set(
        CLIENT_SRC_DIR
        ${CMAKE_CURRENT_SOURCE_DIR}/src
)

set(
        CLIENT_H

        ${CLIENT_SRC_DIR}/application/application.h
)

set(
        CLIENT_SRC

        ${CLIENT_SRC_DIR}/main.cpp
        ${CLIENT_SRC_DIR}/application/application.cpp
)

add_executable(client ${CLIENT_SRC})
target_link_libraries(client ${QT_LIBS})