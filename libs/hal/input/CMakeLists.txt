add_library(libs.hal.input STATIC
    ${ROOT}/_unplaced/libs/hal/input/unity_0.cpp
    InputBase.cpp
    InputGestures.cpp
    InputGestures_DoubleTap.cpp
    InputGestures_EmulateMouse.cpp
    InputGestures_Pinch.cpp
    InputGestures_Swipe.cpp
    InputGestures_Tap.cpp
    InputKeyCodes.cpp
    InputState.cpp
)
set_target_properties(libs.hal.input PROPERTIES UNITY_BUILD ON)
