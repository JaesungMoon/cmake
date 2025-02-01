# target 2 - executable
add_executable(${EXECUTABLE_NAME} main.cc)

# PUBLIC / PRIVATE / INTERFACE
target_link_libraries(${EXECUTABLE_NAME} PUBLIC ${LIBRARY_NAME})