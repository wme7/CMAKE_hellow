cmake_minimum_required(VERSION 3.13)
project(Project_HelloWorld VERSION 1.0 LANGUAGES C CXX)

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
add_subdirectory(include)
add_subdirectory(src)
