# cmake

```shell
cmake --version                                             (git)-[main]
cmake version 3.30.3
```

```shell
touch main.cc
touch CMakeLists.txt
```

```shell
mkdir build && cd build
cmake .. # - Generating the build files / configure the project
cmake --build .
./Executable
```

```shell
cmake [<options>] -S <path-to-source> -B <path-to-build>
```

```shell
mkdir build
cd build
cmake -S .. -B . # Option 1
cmake .. # Option 2

```

```shell
cd build
cmake --build . # Option 1
make # Option 2 (Unix Makefiles)
```

## Generator for GCC and Clang

```shell
cd build
cmake -S .. -B . -G "Unix Makefiles" # Options
cmake ..
```

```shell
cmake .. -G "Xcode"
```

```shell
# build all
cmake --build .

# only build library
cmake --build . --target Library 
```

Added in version 3.15: Added Swift support.
Added in version 3.16: Added OBJC and OBJCXX support.

## clean build

clean build. from 3.24 version
**--fresh**

or old version
**rm CMakeCache.txt**
> Perform a fresh configuration of the build tree. This removes any existing CMakeCache.txt file and associated CMakeFiles/ directory, and recreates them from scratch.

## Version

```cmake
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

enable_language(Swift)
enable_language(C)
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

```
