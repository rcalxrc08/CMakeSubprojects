file(GLOB Project1_SRC
        "src/erf.cpp"
        )
include_directories(.)
add_library(Project1 STATIC ${Project1_SRC})
set_property(TARGET Project1 PROPERTY POSITION_INDEPENDENT_CODE ON)