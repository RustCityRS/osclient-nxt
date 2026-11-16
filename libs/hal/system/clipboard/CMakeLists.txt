add_library(libs.hal.system.clipboard STATIC
    ${ROOT}/_unplaced/libs/hal/system/clipboard/unity_0.cpp
    osx/Clipboard_OSX.cpp
)
set_target_properties(libs.hal.system.clipboard PROPERTIES UNITY_BUILD ON)
