add_library(libs.console STATIC
    ${ROOT}/_unplaced/libs/console/unity_0.cpp
    Command.cpp
    CommandLine.cpp
    Console.cpp
    Snow.cpp
)
set_target_properties(libs.console PROPERTIES UNITY_BUILD ON)
