#
#   Библиотека основных ресурсов проекта
#

cmake_minimum_required(VERSION 3.10)
include(GenerateExportHeader)
project(libResources)

set(
        RESOURCES_SRC_DIR
        ${CMAKE_CURRENT_SOURCE_DIR}/src
)

set(
        RESOURCES_H

        ${RESOURCES_SRC_DIR}/export_resources.h

        ${RESOURCES_SRC_DIR}/fonts/fonts.h
        ${RESOURCES_SRC_DIR}/localizations/localizations.h
        ${RESOURCES_SRC_DIR}/resources/resources.h
        ${RESOURCES_SRC_DIR}/styles/styles.h

        ${RESOURCES_SRC_DIR}/exceptions/exception.h
        ${RESOURCES_SRC_DIR}/exceptions/file_access/file_access.h

        ${RESOURCES_SRC_DIR}/files/file/file.h
)

set(
        RESOURCES_SRC

        ${RESOURCES_SRC_DIR}/fonts/fonts.cpp
        ${RESOURCES_SRC_DIR}/localizations/localizations.cpp
        ${RESOURCES_SRC_DIR}/resources/resources.cpp
        ${RESOURCES_SRC_DIR}/styles/styles.cpp

        ${RESOURCES_SRC_DIR}/exceptions/file_access/file_access.cpp

        ${RESOURCES_SRC_DIR}/files/file/file.cpp
)

include_directories(
        ${RESOURCES_SRC_DIR}
        ${GLOBAL_SRC_DIR}
)

add_library( Resources ${RESOURCES_H} ${RESOURCES_SRC} )
target_link_libraries( Resources ${QT_LIBS} )

generate_export_header(
        Resources
        BASE_NAME resources
        EXPORT_MACRO_NAME EXPORT_LIB_RES
        EXPORT_FILE_NAME ${RESOURCES_SRC_DIR}/export_resources.h
)