cmake_minimum_required(VERSION 3.22)

project(CppProjectTemplate VERSION 1.0.0 LANGUAGES C CXX
)

message(STATUS "CMAKE_BUILD_TYPE: ${CMAKE_BUILD_TYPE}")

set(LIBRARY_NAME Library)
set(EXECUTABLE_NAME Executable)

# boolean option
option(COMPILE_EXECUTABLE "Compile the executable" ON)

add_subdirectory(src)
if (COMPILE_EXECUTABLE)
    add_subdirectory(app)
else()
    message("W/o executable. compiling")
endif()

message(STATUS "<<< cmake done")

