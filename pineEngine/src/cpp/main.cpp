#include "glew.h"
#include "glfw3.h"
#include "glm.hpp"
#include <iostream>
#include "SOIL2.h"
int main(void)
{
    GLFWwindow* window;

    if (!glfwInit())
        return -1;

    window = glfwCreateWindow(1920, 1080, "PINE ENGINE: v1.0.0 ", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);
    glewInit();
    std::cout << "OpenGL Version: " << glGetString(GL_VERSION) << std::endl;
    while (!glfwWindowShouldClose(window))
    {
        glfwSwapBuffers(window);

        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}
