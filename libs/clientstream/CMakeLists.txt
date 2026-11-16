add_library(libs.clientstream STATIC
    ${ROOT}/_unplaced/libs/clientstream/unity_0.cpp
    ClientStream.cpp
)
set_target_properties(libs.clientstream PROPERTIES UNITY_BUILD ON)
