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
cmake .
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
