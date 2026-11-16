add_library(libs.hal.filesystem STATIC
    ${ROOT}/_unplaced/libs/hal/filesystem/unity_0.cpp
    FileSystem.cpp
    native/FileSystem_native_posix_listfiles.cpp
    sqlite/FileSystem_SQLite.cpp
)
set_target_properties(libs.hal.filesystem PROPERTIES UNITY_BUILD ON)
