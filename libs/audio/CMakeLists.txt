add_library(libs.audio STATIC
    SoundInstance.cpp
    SoundResource.cpp
)
set_target_properties(libs.audio PROPERTIES UNITY_BUILD ON)
