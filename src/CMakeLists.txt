add_library(add_two STATIC add_two.cpp)
target_include_directories(add_two PUBLIC "${PROJECT_SOURCE_DIR}/include")
target_link_libraries(add_two cpp_lib)


add_library(deq INTERFACE)
target_include_directories(deq INTERFACE "${PROJECT_SOURCE_DIR}/include/deque")
