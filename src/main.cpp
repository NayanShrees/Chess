#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>
#include <glad/gl.h>

#include <iostream>

#include "ChessEngine/ChessEngine.hpp"
#include "ChessLib/ChessLib.hpp"

constexpr int HEIGHT = 512;
constexpr int WIDTH = 512;

int main() {
    ChessEngine engine = ChessEngine();
    ChessLib chess = ChessLib();
    chess.PrintBoard();

    if (!glfwInit()) {
        std::cerr << "Failed to initialise GLFW" << std::endl;
        return -1;
    }
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    std::cout << glfwGetVersionString() << std::endl;

    GLFWwindow *window = glfwCreateWindow(WIDTH, HEIGHT, "Chess", NULL, NULL);
    if (!window) {
        std::cerr << "Failed to initalise GLFW window" << std::endl;
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);

    gladLoadGL(glfwGetProcAddress);

    glViewport(0, 0, WIDTH, HEIGHT);

    while (!glfwWindowShouldClose(window)) {
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwDestroyWindow(window);

    glfwTerminate();

    return 0;
}
