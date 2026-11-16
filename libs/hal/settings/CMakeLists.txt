add_library(libs.hal.settings STATIC
    ${ROOT}/_unplaced/libs/hal/settings/unity_0.cpp
    file_based/Settings_FileBased.cpp
)
set_target_properties(libs.hal.settings PROPERTIES UNITY_BUILD ON)
