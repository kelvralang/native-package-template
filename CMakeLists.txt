cmake_minimum_required(VERSION 3.16)
project(kelvra_native_package_template LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(kelvra_native_package_template MODULE src/package.cpp)
target_include_directories(kelvra_native_package_template PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}")
set_target_properties(kelvra_native_package_template PROPERTIES PREFIX "" OUTPUT_NAME "package")
