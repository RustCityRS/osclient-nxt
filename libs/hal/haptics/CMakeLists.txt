add_library(libs.hal.haptics STATIC
    ${ROOT}/_unplaced/libs/hal/haptics/unity_0.cpp
    Haptics_Other.cpp
)
set_target_properties(libs.hal.haptics PROPERTIES UNITY_BUILD ON)
