// _unplaced/libs/hal/system/notifications/unity_0.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.system.notifications

namespace jag::notifications {
    // 0x1003ad1a0
    void IsLocalNotificationScheduled(int arg1) {
        uint8_t* puVar1 = PTR__objc_msgSend_100ee9e50;
        uint64_t uVar4 = _objc_retainAutoreleasedReturnValue(
            NSApplication::sharedApplication((ID)&_OBJC_CLASS___NSApplication, "sharedApplication"));
        uint64_t uVar5 = (*(void (*)(...))puVar1)(uVar4, "delegate");
        uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
        (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar4);
        uint32_t uVar2 = (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(uVar5, "getLocalNotificationScheduled");
        (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar5);
        return uVar2;
    }

    // 0x1003ad240
    void SetNotificationUserID(unsigned long long arg1) {}

    // 0x1003ad250
    void OpenNotificationSettings() {
        auto IVar1 = OsxNotifications::alloc((ID)&objc::class_t::OsxNotifications, "alloc");
        IVar1 = OsxNotifications::init(IVar1, "init");
        OsxNotifications::openNotificationSettings(IVar1, "openNotificationSettings");
        (*(void (*)(...))PTR__objc_release_100ee9e60)(IVar1);
    }

    // 0x1003ad2b0
    void DestroyNotificationSystem() {}

} // namespace jag::notifications
