cmake_minimum_required(VERSION 3.10)

set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/externals/sanitizers-cmake/cmake"
                      ${CMAKE_MODULE_PATH})

add_compile_options(-Wall -g -Wextra -Werror -Wno-format)

set(CMAKE_C_COMPILER /usr/bin/clang)

project(cmake-sanitizer LANGUAGES C)

find_package(Sanitizers)

add_executable(test test.c)

add_sanitizers(test)
