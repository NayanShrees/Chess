set(CHESS_LIB ChessLib)

set(INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include)

set(SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/src/ChessLib.cpp
)

add_library(${CHESS_LIB} SHARED ${SOURCES})
target_include_directories(${CHESS_LIB} PUBLIC ${INCLUDE_DIR})
