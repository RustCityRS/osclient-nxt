add_library(libs.framework.graphicsapp STATIC
    ${ROOT}/_unplaced/libs/framework/graphicsapp/unity_0.cpp
    GraphicsApp.cpp
    MainLoopFrameTimer.cpp
)
set_target_properties(libs.framework.graphicsapp PROPERTIES UNITY_BUILD ON)
