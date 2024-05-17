cmake_minimum_required(VERSION 3.10)
project(glfw_glad_project)

set(CMAKE_CXX_STANDARD 11)

find_package(OpenGL REQUIRED)

# Include directories
include_directories(include)

include_directories(/opt/homebrew/Cellar/glfw/3.4/include /opt/homebrew/Cellar/glew/2.2.0_1/include)
link_directories(/opt/homebrew/Cellar/glfw/3.4/lib /opt/homebrew/Cellar/glew/2.2.0_1/lib)

add_executable(glfw_glad_project src/main.cpp)
target_link_libraries(glfw_glad_project ${OPENGL_LIBRARIES} glfw GLEW)

# Add the glad.c file
add_library(glad src/glad.c)