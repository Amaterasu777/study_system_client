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
        CLIENT_SRC
        ${CLIENT_SRC_DIR}/main.cpp
)

ADD_EXECUTABLE(client ${CLIENT_SRC})