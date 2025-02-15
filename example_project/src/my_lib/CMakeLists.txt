# target 1 - library
# add_library(${LIBRARY_NAME} STATIC my_lib.cc)
# target_include_directories(${LIBRARY_NAME} PUBLIC 
#     "./"
#     "${CMAKE_BINARY_DIR}/configured_files/include"
#     )

set(LIBRARY_SOURCES
    "my_lib.cc")
set(LIBRARY_HEADERS
    "my_lib.h")

add_library(${LIBRARY_NAME} STATIC
    ${LIBRARY_SOURCES}
    ${LIBRARY_HEADERS})

target_include_directories(${LIBRARY_NAME} PUBLIC
    "./"
    "${CMAKE_BINARY_DIR}/configured_files/include")
