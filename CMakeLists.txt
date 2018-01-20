cmake_minimum_required(VERSION 3.5)
project(CmakeSubprojects)


set(CMAKE_CXX_STANDARD 11)
add_definitions(-fpermissive)

# Setup some build definitions for VC2012.
IF( MSVC )
    ADD_DEFINITIONS( -D_VARIADIC_MAX=10 -D_WIN32_WINNT=0x0501 /MP)
    set(CMAKE_CONFIGURATION_TYPES Debug Release)
ENDIF(MSVC)

include_directories(
        .
        ..
)

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
file(GLOB CmakeSubprojects_SRC
        "main.cpp"
        )
add_executable(CMakeMainSubproject
        ${CmakeSubprojects_SRC})
target_include_directories(CMakeMainSubproject PUBLIC Project1/include Project2/include Project3/include)

target_link_libraries(CMakeMainSubproject LINK_PUBLIC Project1 Project2 Project3)

