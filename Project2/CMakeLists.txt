file(GLOB Project2_SRC "src/*.cpp")
include_directories(. ../Project1)
add_library(Project2 STATIC ${Project2_SRC})
target_link_libraries(Project2 LINK_PUBLIC Project1)
set_property(TARGET Project2 PROPERTY POSITION_INDEPENDENT_CODE ON)
add_executable(Project2Exec "main.cpp")
target_link_libraries(Project2Exec PRIVATE Project2)