#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>

const unsigned int WIN_W=300;
const unsigned int WIN_H=300;

int main() {
    
    glfwInit();
    GLFWwindow* window = glfwCreateWindow(WIN_W, WIN_H, "hellow", NULL, NULL);
    glfwMakeContextCurrent(window);

    glewInit();
    while(!glfwWindowShouldClose(window))
    {
        glClear(GL_COLOR_BUFFER_BIT);
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}
