add_library(libs.hal.paths STATIC
    ${ROOT}/_unplaced/libs/hal/paths/unity_0.cpp
    SystemPaths.cpp
    linux/SystemPaths_Linux.cpp
)
set_target_properties(libs.hal.paths PROPERTIES UNITY_BUILD ON)
