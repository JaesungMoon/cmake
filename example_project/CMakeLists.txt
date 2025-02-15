cmake_minimum_required(VERSION 3.22)

project(CppProjectTemplate VERSION 1.0.0 LANGUAGES C CXX
)

message(STATUS "CMAKE_BUILD_TYPE: ${CMAKE_BUILD_TYPE}")

set(LIBRARY_NAME Library)
set(EXECUTABLE_NAME Executable)

add_subdirectory(configured)
add_subdirectory(src)
add_subdirectory(app)
