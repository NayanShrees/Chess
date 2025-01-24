set(CHESS_ENGINE ChessEngine)

set(INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include)

set(SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/src/ChessEngine.cpp
)

add_library(${CHESS_ENGINE} SHARED ${SOURCES})
target_include_directories(${CHESS_ENGINE} PUBLIC ${INCLUDE_DIR})
