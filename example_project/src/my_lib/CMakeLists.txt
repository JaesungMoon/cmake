# target 1 - library
add_library(${LIBRARY_NAME} STATIC my_lib.cc)
target_include_directories(${LIBRARY_NAME} PUBLIC 
    "./"
    "${CMAKE_BINARY_DIR}/configured_files/include"
    )