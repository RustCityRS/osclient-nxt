add_library(libs.hal.file STATIC
    ${ROOT}/_unplaced/libs/hal/file/unity_0.cpp
    Filename.cpp
    Filename_nonWindows.cpp
    file.cpp
    linux/Filename_Linux.cpp
    osx/Filename_OSX.cpp
)
set_target_properties(libs.hal.file PROPERTIES UNITY_BUILD ON)
