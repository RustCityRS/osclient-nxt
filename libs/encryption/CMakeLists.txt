add_library(libs.encryption STATIC
    ${ROOT}/_unplaced/libs/encryption/unity_0.cpp
    Isaac.cpp
    Whirlpool.cpp
)
set_target_properties(libs.encryption PROPERTIES UNITY_BUILD ON)
