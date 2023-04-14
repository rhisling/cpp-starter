Include(FetchContent)

FetchContent_Declare(
        Catch2
        GIT_REPOSITORY https://github.com/catchorg/Catch2.git
        GIT_TAG        v3.0.1 # or a later release
)
# CMake 3.14+
FetchContent_MakeAvailable(Catch2)

add_executable(test test.cpp)
target_link_libraries(test PRIVATE Catch2::Catch2WithMain deq add_two)

list(APPEND CMAKE_MODULE_PATH ${catch2_SOURCE_DIR}/extras)
include(CTest)
include(Catch)
catch_discover_tests(test)