add_library(libs.hal.system.callstack STATIC
    ${ROOT}/_unplaced/libs/hal/system/callstack/unity_0.cpp
    Callstack.cpp
    JagException.cpp
    posix/Callstack_Posix.cpp
    posix/CrashHandler_Posix.cpp
)
set_target_properties(libs.hal.system.callstack PROPERTIES UNITY_BUILD ON)
