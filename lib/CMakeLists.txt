add_subdirectory(chessEngine)

add_subdirectory(chessLib)

add_subdirectory(glfw)

add_subdirectory(glad/cmake)
glad_add_library(glad REPRODUCIBLE EXCLUDE_FROM_ALL LOADER API gl:core=4.6)
