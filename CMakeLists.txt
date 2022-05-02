cmake_minimum_required(VERSION 3.10)
set (CMAKE_CXX_STANDARD 11)
set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)

#set (SRC_DIR "src")
#set (SRC_FILES main.cpp stralg.cpp)
#string(REGEX REPLACE "([^;]+)" "${SRC_DIR}/\\1" SRC_DIR_FILES "${SRC_FILES}")

#add_executable(main ${SRC_DIR_FILES})

add_executable(pimc.exe src/numeric/pimc.cpp)
target_link_libraries(pimc.exe PRIVATE Threads::Threads)

add_executable(primes.exe src/numeric/primesmain.cpp src/numeric/primes.cpp)


#target_link_libraries(graphdrawer names_of_libraries_here)
