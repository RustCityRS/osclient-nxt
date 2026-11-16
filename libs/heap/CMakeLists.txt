add_library(libs.heap STATIC
    ${ROOT}/_unplaced/libs/heap/unity_0.cpp
    HeapInterface.cpp
    NewCustom.cpp
)
set_target_properties(libs.heap PROPERTIES UNITY_BUILD ON)
