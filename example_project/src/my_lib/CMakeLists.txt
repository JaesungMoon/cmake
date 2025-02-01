# target 1 - library
add_library(MyLibrary STATIC my_lib.cc)
target_include_directories(MyLibrary PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})