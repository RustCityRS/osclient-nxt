add_library(libs.hal.system.web STATIC
    ${ROOT}/_unplaced/libs/hal/system/web/unity_0.cpp
    Web.cpp
    osx/Web_OSX.cpp
)
set_target_properties(libs.hal.system.web PROPERTIES UNITY_BUILD ON)
