add_library(libs.hal.taskrunner STATIC
    ${ROOT}/_unplaced/libs/hal/taskrunner/unity_0.cpp
    task.cpp
    taskrunner.cpp
)
set_target_properties(libs.hal.taskrunner PROPERTIES UNITY_BUILD ON)
