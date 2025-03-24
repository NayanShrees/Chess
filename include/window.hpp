#ifndef WINDOW_HPP_
#define WINDOW_HPP_

#include "GLFW/glfw3.h"

class Window {
   public:
    Window();
    ~Window();

    int Init(const char* windowName);
    int Init(int height, int width, const char* windowName);
    int Play();

   private:
    GLFWwindow* window_;
    int height_;
    int width_;
};
#endif  // WINDOW_HPP_
