cmake_minimum_required(VERSION 3.10)
set (CMAKE_CXX_STANDARD 11)

set (SRC_DIR "../src")
set (SRC_FILES stralg.cpp)
string(REGEX REPLACE "([^;]+)" "${SRC_DIR}/\\1" SRC_DIR_FILES "${SRC_FILES}")

add_subdirectory(googletest)
include_directories(googletest/googlemock/include googletest/googletest/include)

add_executable(runtests test.cpp ${SRC_DIR_FILES})
target_link_libraries(runtests gmock_main)

