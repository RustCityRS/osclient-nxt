add_library(libs.hal.system.discord STATIC
    ${ROOT}/_unplaced/libs/hal/system/discord/unity_0.cpp
    DiscordMain_Default.cpp
    richpresence/DiscordRichPresence_Default.cpp
)
set_target_properties(libs.hal.system.discord PROPERTIES UNITY_BUILD ON)
