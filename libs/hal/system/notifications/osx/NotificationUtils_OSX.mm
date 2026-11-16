// libs/hal/system/notifications/osx/NotificationUtils_OSX.mm
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.system.notifications

@interface NotificationUtils : NSObject
+ (id)processDeviceToken:(id)arg1;
+ (id)processRemoteNotification:(id)arg1;
@end

@implementation NotificationUtils

// 0x1003accd0, 144 bytes, placed by class name and debug map
// +[NotificationUtils processDeviceToken:]
/* Function Stack Size: 24 bytes */

void NotificationUtils::processDeviceToken_(ID param_1, SEL param_2, ID param_3) {
    undefined* puVar1;
    ID IVar2;
    undefined8 uVar3;
    ID IVar4;

    IVar2 = (*(code*)PTR__objc_retain_100ee9e68)(param_3);
    uVar3 = (*(code*)PTR__objc_msgSend_100ee9e50)(&objc::class_t::DeviceTokenProcessor, "alloc");
    IVar4 = (*(code*)PTR__objc_msgSend_100ee9e50)(uVar3, "init");
    DeviceTokenProcessor::registerDeviceTokenWithFirebase_(IVar4, "registerDeviceTokenWithFirebase:", IVar2);
    puVar1 = PTR__objc_release_100ee9e60;
    (*(code*)PTR__objc_release_100ee9e60)(IVar4);
    (*(code*)puVar1)(IVar2);
}

// 0x1003acd60, 144 bytes, placed by class name and debug map
// +[NotificationUtils processRemoteNotification:]
/* Function Stack Size: 24 bytes */

void NotificationUtils::processRemoteNotification_(ID param_1, SEL param_2, ID param_3) {
    undefined* puVar1;
    ID IVar2;
    undefined8 uVar3;
    ID IVar4;

    IVar2 = (*(code*)PTR__objc_retain_100ee9e68)(param_3);
    uVar3 = (*(code*)PTR__objc_msgSend_100ee9e50)(&objc::class_t::RemoteNotificationProcessor, "alloc");
    IVar4 = (*(code*)PTR__objc_msgSend_100ee9e50)(uVar3, "init");
    RemoteNotificationProcessor::receivedRemoteNotification_(IVar4, "receivedRemoteNotification:", IVar2);
    puVar1 = PTR__objc_release_100ee9e60;
    (*(code*)PTR__objc_release_100ee9e60)(IVar4);
    (*(code*)puVar1)(IVar2);
}

@end
