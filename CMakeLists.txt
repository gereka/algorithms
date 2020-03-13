cmake_minimum_required(VERSION 3.10)
set (CMAKE_CXX_STANDARD 11)

set (SRC_DIR "src")
set (SRC_FILES main.cpp stralg.cpp)
string(REGEX REPLACE "([^;]+)" "${SRC_DIR}/\\1" SRC_DIR_FILES "${SRC_FILES}")

add_executable(main ${SRC_DIR_FILES})

#target_link_libraries(graphdrawer names_of_libraries_here)
