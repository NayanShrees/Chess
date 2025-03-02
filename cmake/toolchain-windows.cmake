set(CMAKE_GENERATOR_TOOLSET ClangCL)

set(Python_EXECUTABLE ${CMAKE_SOURCE_DIR}/.venv/Scripts/python)
set(Python_SITELIB ${CMAKE_SOURCE_DIR}/.venv/lib/site-packages)

include(${CMAKE_CURRENT_LIST_DIR}/toolchain.cmake)
