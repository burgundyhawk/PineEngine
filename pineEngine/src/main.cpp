#include "libs.h"


int main(void)
{
    glfwInit();
    GLFWwindow* win = makeMainWin();
    glfwMakeContextCurrent(win);
    glewExperimental = GL_TRUE;
    if (glewInit() != GLEW_OK)
    {
        std::cout << "Glew Error\n";
        glfwTerminate();
    }
    std::cout << "OpenGL Version: " << glGetString(GL_VERSION) << "\n";
    
    while (!glfwWindowShouldClose(win))
    {
        glfwPollEvents();
        
        glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);
        glClear(GL_DEPTH_BUFFER_BIT);
        glClear(GL_STENCIL_BUFFER_BIT);
        
        glfwSwapBuffers(win);
        glFlush();
    }
    
    glfwTerminate();
}
