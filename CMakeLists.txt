cmake_minimum_required(VERSION 3.10)
project(glfw_project)

set(CMAKE_CXX_STANDARD 11)

find_package(OpenGL REQUIRED)

include_directories(/opt/homebrew/Cellar/glfw/3.4/include)
link_directories(/opt/homebrew/Cellar/glfw/3.4/lib)

add_executable(glfw_project main.cpp)
target_link_libraries(glfw_project ${OPENGL_LIBRARIES} glfw)