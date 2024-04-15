#include <GLFW/glfw3.h>

const unsigned int WIN_W = 300;
const unsigned int WIN_H = 300;

int main(int argc, char** argv) {
    
    glfwInit();
    
glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
#ifdef __APPLE__
glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE); // macOS에서 필요함
#endif
    
    GLFWwindow* window = glfwCreateWindow(WIN_W, WIN_H, "hello glfw", NULL, NULL);
    glfwMakeContextCurrent(window);
    
    while(!glfwWindowShouldClose(window))
    {
        glfwPollEvents();
    }
    
    glfwTerminate();
    
    return 0;
}
