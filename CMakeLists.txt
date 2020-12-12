cmake_minimum_required(VERSION 3.0)
project(debug_PROJECT VERSION 0.1)

set(CMAKE_CXX_STANDARD 11)
find_package(pybind11 REQUIRED)

pybind11_add_module(debug debug.cpp )
target_include_directories(debug SYSTEM PRIVATE ${PROJECT_SOURCE_DIR} )

add_executable(debug1 debug_pure_cpp.cpp)