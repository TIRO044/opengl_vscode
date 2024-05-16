#include <GLFW/glfw3.h>
#include <iostream>

const unsigned int WIN_W=300;
const unsigned int WIN_H=300;

int main() {
    
    glfwInit();
    GLFWwindow* window = glfwCreateWindow(WIN_W, WIN_H, "hellow", NULL, NULL);
    glfwMakeContextCurrent(window);

    while(!glfwWindowShouldClose(window))
    {
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}
