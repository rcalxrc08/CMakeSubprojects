cmake_minimum_required(VERSION 3.5)
project(CmakeSubprojects)


set(CMAKE_CXX_STANDARD 11)
add_definitions(-fpermissive)

set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
#####################
# Project1
#####################
add_subdirectory(Project1)

#####################
# Project2
#####################
add_subdirectory(Project2)

#####################
# Project3
#####################
add_subdirectory(Project3)

#####################
# CMakeMainSubproject
#####################
file(GLOB CmakeSubprojects_SRC "main.cpp")
add_executable(CMakeMainSubproject ${CmakeSubprojects_SRC})
target_include_directories(CMakeMainSubproject PUBLIC Project1/include Project2/include Project3/include)

target_link_libraries(CMakeMainSubproject LINK_PUBLIC Project1 Project2 Project3)

