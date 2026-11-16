add_library(libs.logger STATIC
    ${ROOT}/_unplaced/libs/logger/unity_0.cpp
    Logger.cpp
    LoggerAssertionPresenter.cpp
)
set_target_properties(libs.logger PROPERTIES UNITY_BUILD ON)
