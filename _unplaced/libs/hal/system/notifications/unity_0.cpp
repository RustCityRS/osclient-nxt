// _unplaced/libs/hal/system/notifications/unity_0.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.system.notifications

namespace jag::notifications {
    // 0x1003ad1a0, 160 bytes, placed by nothing (unplaced)
    // IsLocalNotificationScheduled(int)
    undefined4 IsLocalNotificationScheduled(int param_1) {
        undefined* puVar1;
        undefined4 uVar2;
        ID IVar3;
        undefined8 uVar4;
        undefined8 uVar5;

        puVar1 = PTR__objc_msgSend_100ee9e50;
        IVar3 = NSApplication::sharedApplication((ID)&_OBJC_CLASS___NSApplication, "sharedApplication");
        uVar4 = _objc_retainAutoreleasedReturnValue(IVar3);
        uVar5 = (*(code*)puVar1)(uVar4, "delegate");
        uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
        (*(code*)PTR__objc_release_100ee9e60)(uVar4);
        uVar2 = (*(code*)PTR__objc_msgSend_100ee9e50)(uVar5, "getLocalNotificationScheduled");
        (*(code*)PTR__objc_release_100ee9e60)(uVar5);
        return uVar2;
    }

    // 0x1003ad240, 16 bytes, placed by nothing (unplaced)
    // SetNotificationUserID(unsigned long long)
    void SetNotificationUserID(ulonglong param_1) {}

    // 0x1003ad250, 96 bytes, placed by nothing (unplaced)
    // OpenNotificationSettings()
    void OpenNotificationSettings() {
        ID IVar1;

        IVar1 = OsxNotifications::alloc((ID)&objc::class_t::OsxNotifications, "alloc");
        IVar1 = OsxNotifications::init(IVar1, "init");
        OsxNotifications::openNotificationSettings(IVar1, "openNotificationSettings");
        (*(code*)PTR__objc_release_100ee9e60)(IVar1);
    }

    // 0x1003ad2b0, 16 bytes, placed by nothing (unplaced)
    // DestroyNotificationSystem()
    void DestroyNotificationSystem() {}

} // namespace jag::notifications
