add_library(libs.hal.system.steam STATIC
    ${ROOT}/_unplaced/libs/hal/system/steam/unity_0.cpp
    Steam_Default.cpp
    achievements/SteamAchievements_Default.cpp
    app/SteamApp_Default.cpp
    auth/SteamAuth_Default.cpp
    overlay/SteamOverlay_Default.cpp
    richpresence/SteamRichPresence_Default.cpp
)
set_target_properties(libs.hal.system.steam PROPERTIES UNITY_BUILD ON)
