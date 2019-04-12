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
        ${CLIENT_SRC_DIR}/windows/main_window/main_window.h
)

set(
        CLIENT_SRC

        ${CLIENT_SRC_DIR}/main.cpp
        ${CLIENT_SRC_DIR}/application/application.cpp
        ${CLIENT_SRC_DIR}/windows/main_window/main_window.cpp
)

include_directories(
        ${CLIENT_SRC_DIR}
)

add_executable(client ${CLIENT_SRC})
target_link_libraries(client ${QT_LIBS} Resources)