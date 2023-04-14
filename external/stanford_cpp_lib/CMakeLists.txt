file(GLOB SOURCES "src/*.cpp")
add_library(cpp_lib ${SOURCES})
target_include_directories(cpp_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)