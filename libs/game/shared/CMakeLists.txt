add_library(libs.game.shared STATIC
    ${ROOT}/_unplaced/libs/game/shared/unity_0.cpp
    console/ConsoleCommandsDebug.cpp
    console/GameConsole.cpp
    framework/chat/ChatCrownType.cpp
    framework/chat/QuickChatDynamicCommand.cpp
    framework/constants/ModeAccountType.cpp
    framework/gwc/GWCClient.cpp
    framework/input/Mouse.cpp
    framework/input/event/InputEventFactory.cpp
    framework/input/event/KeyHeldInputEvent.cpp
    framework/input/event/KeyPressInputEvent.cpp
    framework/input/event/MouseInputEvent.cpp
    framework/logging/HostPlatformStats.cpp
    framework/utils/Namespacing.cpp
    movement/CoordFine.cpp
    movement/CoordGrid.cpp
)
set_target_properties(libs.game.shared PROPERTIES UNITY_BUILD ON)
