# models CMake

add_library(models_lib STATIC)

# define source files

target_sources(models_lib
    PRIVATE
    LidDriven.cpp
    PUBLIC
        ImportAll_models.h
        LidDriven.hpp
)

target_include_directories(models_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

