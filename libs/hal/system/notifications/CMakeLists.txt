add_library(libs.hal.system.notifications STATIC
    ${ROOT}/_unplaced/libs/hal/system/notifications/unity_0.cpp
    osx/DeviceTokenProcessor.mm
    osx/NotificationUtils_OSX.mm
    osx/Notifications_OSX.cpp
    osx/OsxNotifications.mm
    osx/RemoteNotificationProcessor.mm
)
set_target_properties(libs.hal.system.notifications PROPERTIES UNITY_BUILD ON)
