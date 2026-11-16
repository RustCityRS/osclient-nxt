add_library(libs.oldscape.clientlib STATIC
    ClientKeys.cpp
    OldscapeClientError.cpp
    applicationcontext/ApplicationContext.cpp
    auth/AuthLibWrapper.cpp
    auth/DesktopAuthLibWrapper.cpp
    auth/SteamAuthLibWrapper.cpp
    gameshell/GameShell.cpp
    gameshell/GameShell3Cache.cpp
    input/InputEventQueue.cpp
    input/InputListener.cpp
    input/keyboard/ClientKeyboardListener.cpp
    input/mouse/ClientMouseListener.cpp
)
set_target_properties(libs.oldscape.clientlib PROPERTIES UNITY_BUILD ON)
