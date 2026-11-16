add_library(libs.image STATIC
    ${ROOT}/_unplaced/libs/image/unity_0.cpp
    PNGDecoding.cpp
    PNGEncoding.cpp
    PNGHelpers.cpp
    RAWDecoding.cpp
    RGBAImage.cpp
)
set_target_properties(libs.image PROPERTIES UNITY_BUILD ON)
