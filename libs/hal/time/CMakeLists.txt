add_library(libs.hal.time STATIC
    DateTools.cpp
    SpikeWarningTimer.cpp
    frametime/FPSCounter.cpp
    frametime/FrameTime.cpp
)
set_target_properties(libs.hal.time PROPERTIES UNITY_BUILD ON)
