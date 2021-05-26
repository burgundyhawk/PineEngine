#include "libs.h"

void framebuffer_resize_callback(GLFWwindow* window, int fbW, int fbH)
{
    glViewport(0, 0, fbW, fbH);
}
GLFWwindow* makeMainWin()
{
    int fbw = 0;
    int fbh = 0;
    static GLFWwindow* editor = glfwCreateWindow(1920, 1080, "PINE EDITOR", NULL, NULL);
    glfwSetFramebufferSizeCallback(editor, framebuffer_resize_callback);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 4);
    glfwWindowHint(GLFW_RESIZABLE, GL_TRUE);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
    glfwGetFramebufferSize(editor, &fbw, &fbh);
    glViewport(0, 0, fbw, fbh);
    return editor;
}
