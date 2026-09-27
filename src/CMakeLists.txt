# main executales


add_executable(TPS-main
    main.cpp
)

# target_include_directories(TPS-main
#     PUBLIC
#         ../lib/core/
#         ../lib/models/
#         ../lib/utils/
# )

target_link_libraries(TPS-main
    PUBLIC
        core_lib
        models_lib
        utils_lib
)
