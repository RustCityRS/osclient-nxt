add_library(libs.hal.debugoutput STATIC
    ${ROOT}/_unplaced/libs/hal/debugoutput/unity_0.cpp
    DebugOutput.cpp
)
set_target_properties(libs.hal.debugoutput PROPERTIES UNITY_BUILD ON)
