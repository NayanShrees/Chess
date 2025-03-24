#define GLFW_INCLUDE_NONE
#include <iostream>

#include "GLFW/glfw3.h"
#include "glad/gl.h"
#include "window.hpp"

Window::Window() : height_{512}, width_{512} { std::cout << "Creating Window" << std::endl; }

Window::~Window() {
    std::cout << "Destructing Window" << std::endl;
    glfwDestroyWindow(this->window_);
    glfwTerminate();
}

int Window::Init(const char* windowName) {
    std::cout << "Initialising Window" << std::endl;
    if (!glfwInit()) {
        std::cerr << "Failed to initialise GLFW" << std::endl;
        this->~Window();
        return -1;
    }
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    std::cout << glfwGetVersionString() << std::endl;

    this->window_ = glfwCreateWindow(this->width_, this->height_, windowName, NULL, NULL);
    if (!this->window_) {
        std::cerr << "Failed to initalise GLFW window" << std::endl;
        this->~Window();
        return -1;
    }
    glfwMakeContextCurrent(this->window_);

    gladLoadGL(glfwGetProcAddress);

    glViewport(0, 0, this->width_, this->height_);

    return 0;
}

int Window::Init(int height, int width, const char* windowName) {
    this->height_ = height;
    this->width_ = width;
    return this->Init(windowName);
}

int Window::Play() {
    std::cout << "Playing Window" << std::endl;
    while (!glfwWindowShouldClose(this->window_)) {
        glfwSwapBuffers(this->window_);
        glfwPollEvents();
    }
    return 0;
}
