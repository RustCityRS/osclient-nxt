add_library(libs.hal.system.systemdetails STATIC
    ${ROOT}/_unplaced/libs/hal/system/systemdetails/unity_0.cpp
    osx/SystemDetails_OSX.cpp
)
set_target_properties(libs.hal.system.systemdetails PROPERTIES UNITY_BUILD ON)
