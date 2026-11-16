add_library(libs.framework.sysinitparams STATIC
    ${ROOT}/_unplaced/libs/framework/sysinitparams/unity_0.cpp
    SystemInitParams.cpp
)
set_target_properties(libs.framework.sysinitparams PROPERTIES UNITY_BUILD ON)
