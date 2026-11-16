// libs/hal/system/notifications/osx/NotificationUtils_OSX.mm
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.system.notifications

@interface NotificationUtils : NSObject
+ (id)processDeviceToken:(id)arg1;
+ (id)processRemoteNotification:(id)arg1;
@end

@implementation NotificationUtils

// 0x1003accd0
void NotificationUtils::processDeviceToken_(ID param_1, SEL param_2, ID param_3) {
    ID IVar2 = (*(void (*)(...))PTR__objc_retain_100ee9e68)(param_3);
    uint64_t uVar3 = (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(&objc::class_t::DeviceTokenProcessor, "alloc");
    ID IVar4 = (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(uVar3, "init");
    DeviceTokenProcessor::registerDeviceTokenWithFirebase_(IVar4, "registerDeviceTokenWithFirebase:", IVar2);
    uint8_t* puVar1 = PTR__objc_release_100ee9e60;
    (*(void (*)(...))PTR__objc_release_100ee9e60)(IVar4);
    (*(void (*)(...))puVar1)(IVar2);
}

// 0x1003acd60
void NotificationUtils::processRemoteNotification_(ID param_1, SEL param_2, ID param_3) {
    ID IVar2 = (*(void (*)(...))PTR__objc_retain_100ee9e68)(param_3);
    uint64_t uVar3 =
        (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(&objc::class_t::RemoteNotificationProcessor, "alloc");
    ID IVar4 = (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(uVar3, "init");
    RemoteNotificationProcessor::receivedRemoteNotification_(IVar4, "receivedRemoteNotification:", IVar2);
    uint8_t* puVar1 = PTR__objc_release_100ee9e60;
    (*(void (*)(...))PTR__objc_release_100ee9e60)(IVar4);
    (*(void (*)(...))puVar1)(IVar2);
}

@end
