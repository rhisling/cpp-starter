cmake_minimum_required(VERSION 3.14...3.26)
project(
        proj
        VERSION 1.0
        LANGUAGES CXX
        )

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(src)
add_subdirectory(test)
add_subdirectory(external/stanford_cpp_lib)
add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} deq)

