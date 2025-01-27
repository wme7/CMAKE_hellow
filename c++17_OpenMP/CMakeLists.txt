cmake_minimum_required(VERSION 3.9)
project(hellow_parallel LANGUAGES CXX)

# Set build options
set(CMAKE_BUILD_TYPE "Release" CACHE STRING "Choose the type of build" FORCE)
set_property(CACHE CMAKE_BUILD_TYPE PROPERTY STRINGS "Debug" "Release")

# Set C++17 standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS False)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Find Packages
find_package(OpenMP) # NON-REQUIRED
if(OpenMP_CXX_FOUND)
    message(STATUS "Compiling with OpenMP")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${OpenMP_CXX_FLAGS}")
    set(DEPENDENCIES OpenMP::OpenMP_CXX)
    add_definitions(-DHAVE_OMP) # to help the code know that OpenMP is enabled
else()
    message(STATUS "OpenMP not found, compiling without OpenMP")
endif()

# Add the executable
add_executable(${PROJECT_NAME} main.cpp)
if(OpenMP_CXX_FOUND)
    target_link_libraries(${PROJECT_NAME} PUBLIC ${DEPENDENCIES})
endif()