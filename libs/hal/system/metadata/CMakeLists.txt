add_library(libs.hal.system.metadata STATIC
    ${ROOT}/_unplaced/libs/hal/system/metadata/unity_0.cpp
    MetaData.cpp
)
set_target_properties(libs.hal.system.metadata PROPERTIES UNITY_BUILD ON)
