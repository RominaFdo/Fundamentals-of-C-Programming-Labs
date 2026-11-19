cmake_minimum_required(VERSION 3.16)
project(c_programming_labs C)

set(CMAKE_C_STANDARD 11)

# Every .c file is a standalone program with its own main(),
# so build each one as a separate executable named <folder>_<file>.
file(GLOB_RECURSE LAB_SOURCES CONFIGURE_DEPENDS
     "${CMAKE_SOURCE_DIR}/0*/*.c"
     "${CMAKE_SOURCE_DIR}/0*/*/*.c"
     "${CMAKE_SOURCE_DIR}/practice/*.c")

foreach(src ${LAB_SOURCES})
    file(RELATIVE_PATH rel "${CMAKE_SOURCE_DIR}" "${src}")
    string(REGEX REPLACE "\.c$" "" target "${rel}")
    string(REGEX REPLACE "[/\-]" "_" target "${target}")
    add_executable(${target} ${src})
    if(NOT WIN32)
        target_link_libraries(${target} m)   # math.h (pow, sqrt)
    endif()
endforeach()
