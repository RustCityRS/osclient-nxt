add_library(libs.testframework STATIC
    ${ROOT}/_unplaced/libs/testframework/unity_0.cpp
    Test.cpp
    TestResults.cpp
    TestRunner.cpp
    TestVM.cpp
    gaia/GaiaConnection.cpp
    gaia/GaiaSinks.cpp
)
set_target_properties(libs.testframework PROPERTIES UNITY_BUILD ON)
