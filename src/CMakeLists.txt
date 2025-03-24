set(TARGET_APP Chess)

set(INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

set(SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/window.cpp
)

add_executable(${TARGET_APP} ${SOURCES})
target_include_directories(${TARGET_APP} PRIVATE ${INCLUDE_DIR})

find_package(OpenGL REQUIRED)

target_link_libraries(${TARGET_APP}
    ChessEngine
    ChessLib
    glfw
    glad
    OpenGL::GL
)

set_target_properties(${TARGET_APP}
    PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)
