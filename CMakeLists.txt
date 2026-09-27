# CMake minimum version
cmake_minimum_required(VERSION 3.15)

# Project settings
project(TPS
    VERSION 0.1.0
    LANGUAGES CXX
)

# Global settings and metadata
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(OpenMP REQUIRED)
find_package(CUDA)


#add_subdirectory(tests)
add_subdirectory(lib/utils)
add_subdirectory(lib/core)
#add_subdirectory(lib/gui)
add_subdirectory(lib/models)

#add_subdirectory(lib/solvers)
add_subdirectory(src)

# targets (executables/libraries)

# add_executable(TPS-main
#    src/main.cpp
# )

# Target-specific Properties
# target_link_libraries(TPS-main 
#     PRIVATE
#         utils_lib
#         models_lib
#         core_lib
# )
# target_link_libraries(TPS-main PRIVATE OpenMP::OpenMP_CXX)
