cmake_minimum_required(VERSION 3.25)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(Chess VERSION 0.1)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_subdirectory(${CMAKE_SOURCE_DIR}/../lib ${CMAKE_BINARY_DIR}/lib)
add_subdirectory(${CMAKE_SOURCE_DIR}/../src ${CMAKE_BINARY_DIR}/src)
add_subdirectory(${CMAKE_SOURCE_DIR}/../tests ${CMAKE_BINARY_DIR}/tests)
