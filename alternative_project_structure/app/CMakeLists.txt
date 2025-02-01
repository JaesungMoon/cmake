# target 2 - executable
add_executable(Executable main.cc)

# PUBLIC / PRIVATE / INTERFACE
target_link_libraries(Executable PUBLIC MyLibrary)