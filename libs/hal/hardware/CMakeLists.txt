add_library(libs.hal.hardware STATIC
    ${ROOT}/_unplaced/libs/hal/hardware/unity_0.cpp
    apple/osx/HardwareInfo_OSX.cpp
)
set_target_properties(libs.hal.hardware PROPERTIES UNITY_BUILD ON)
