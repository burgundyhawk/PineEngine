#include "libs.h"
int getVersion();
GLFWwindow* makeMainWin();

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
        
    }
    
    glfwTerminate();
}
