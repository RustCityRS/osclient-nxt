add_library(libs.core STATIC
    ${ROOT}/_unplaced/libs/core/unity_0.cpp
    ansi/string.cpp
    debug/Analysis.cpp
    debug/Assert.cpp
    error_handling/LogAndAbort.cpp
    utils/CRC.cpp
    utils/Endianness.cpp
)
set_target_properties(libs.core PROPERTIES UNITY_BUILD ON)
