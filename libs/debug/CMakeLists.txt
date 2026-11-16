add_library(libs.debug STATIC
    ${ROOT}/_unplaced/libs/debug/unity_0.cpp
    DebugUIDemo.cpp
    DebugUIElement.cpp
    DebugUIManager.cpp
)
set_target_properties(libs.debug PROPERTIES UNITY_BUILD ON)
