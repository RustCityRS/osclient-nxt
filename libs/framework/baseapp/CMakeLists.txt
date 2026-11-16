add_library(libs.framework.baseapp STATIC
    ${ROOT}/_unplaced/libs/framework/baseapp/unity_0.cpp
)
set_target_properties(libs.framework.baseapp PROPERTIES UNITY_BUILD ON)
