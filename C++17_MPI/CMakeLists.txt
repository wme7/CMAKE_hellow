cmake_minimum_required(VERSION 3.13)
project(MPI_HelloWorld LANGUAGES C CXX)

# Default Build Type to be Release
if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE "Release")
endif()

# C++17 for sources
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# For listing all the sources
add_executable(test.run "")
add_subdirectory(app)
# add_subdirectory(include)
# add_subdirectory(src)

# Libraries dependencies
find_package(MPI REQUIRED QUIET)
include_directories(${MPI_INCLUDE_PATH})
target_link_libraries(test.run ${MPI_C_LIBRARIES})