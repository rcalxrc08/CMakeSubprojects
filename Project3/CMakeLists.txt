file(GLOB Project3_SRC
        "src/sin.cpp"
        )
include_directories(.)
add_library(Project3 STATIC ${Project3_SRC})
set_property(TARGET Project3 PROPERTY POSITION_INDEPENDENT_CODE ON)