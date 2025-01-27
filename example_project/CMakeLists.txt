cmake_minimum_required(VERSION 3.22)

project(
    CppProjectTemplate
    # VERSION 1.2.3.4
    # LANGUAGES C CXX # default languages
    # LANGUAGES Swift C CXX
)

enable_language(Swift)
enable_language(C)

# same as VERSION 1.2.3.4 from project() command
# set(PROJECT_VERSION 1.2.3.4)
# set(PROJECT_VERSION_MAJOR 1)
# set(PROJECT_VERSION_MINOR 2)
# set(PROJECT_VERSION_PATCH 3)
# set(PROJECT_VERSION_TWEAK 4)

message(STATUS "PROJECT_VERSION: ${PROJECT_VERSION}")
message(STATUS "PROJECT_VERSION_MAJOR: ${PROJECT_VERSION_MAJOR}")
message(STATUS "PROJECT_VERSION_MINOR: ${PROJECT_VERSION_MINOR}")
message(STATUS "PROJECT_VERSION_PATCH: ${PROJECT_VERSION_PATCH}")
message(STATUS "PROJECT_VERSION_TWEAK: ${PROJECT_VERSION_TWEAK}")

# not printed
message(STATUS "LANGUAGES: ${LANGUAGES}")
message(STATUS "ENABLED_LANGUAGES: ${ENABLED_LANGUAGES}")

message(STATUS "C Compiler: ${CMAKE_C_COMPILER}")
message(STATUS "C++ Compiler: ${CMAKE_CXX_COMPILER}")

# only supported in CMake 3.15+ and Ninja generator
message(STATUS "Swift Compiler: ${CMAKE_Swift_COMPILER}")

message(STATUS "PROJECT_SOURCE_DIR: ${PROJECT_SOURCE_DIR}")
message(STATUS "PROJECT_BINARY_DIR: ${PROJECT_BINARY_DIR}")

message(STATUS "HEADER_DIRS: ${HEADER_DIRS}")

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(src)
add_subdirectory(app)
