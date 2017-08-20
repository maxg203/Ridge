cmake_minimum_required(VERSION 3.9.1)
project (Ridge)
add_executable(/Users/Max/projects/Ridge/deps/glfw-3.2.1 main.cpp)

set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

add_subdirectory(/Users/Max/projects/Ridge/deps/glfw-3.2.1)
target_link_libraries(Ridge glfw-3.2.1)
