add_library(libs.hal.securerandom STATIC
    ${ROOT}/_unplaced/libs/hal/securerandom/unity_0.cpp
    SecureRandom.cpp
    unix/SecureRandom_Unix.cpp
)
set_target_properties(libs.hal.securerandom PROPERTIES UNITY_BUILD ON)
