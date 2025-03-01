add_subdirectory(ChessEngine)

add_subdirectory(ChessLib)

add_subdirectory(glfw)

add_subdirectory(glad/cmake)
glad_add_library(glad REPRODUCIBLE EXCLUDE_FROM_ALL LOADER API gl:core=4.6)
