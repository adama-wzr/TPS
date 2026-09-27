# core CMake

add_library(core_lib STATIC)

# define source files

target_sources(core_lib
    PRIVATE
        core.cpp
    PUBLIC
        ImportAll_core.h
        core.hpp
)

target_include_directories(core_lib PUBLIC "/lib/${CMAKE_CURRENT_SOURCE_DIR}")

