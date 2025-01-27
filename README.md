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
