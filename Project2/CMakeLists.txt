file(GLOB Project2_SRC
        "src/*.cpp"
        )
include_directories(.)
add_library(Project2 STATIC ${Project2_SRC})
set_property(TARGET Project2 PROPERTY POSITION_INDEPENDENT_CODE ON)