// libs/hal/system/notifications/osx/Notifications_OSX.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.system.notifications

namespace jag::notifications {
    // 0x1003acdf0, 16 bytes, placed by class name and debug map
    // SetAppName(eastl::string const&, eastl::string const&)
    void SetAppName(basic_string* param_1, basic_string* param_2) {}

    // 0x1003ace00, 304 bytes, placed by class name and debug map
    // SendLocalNotification(eastl::string const&, eastl::string const&, int, int)
    int SendLocalNotification(basic_string* param_1, basic_string* param_2, int param_3, int param_4) {
        undefined* puVar1;
        int iVar2;
        ID IVar3;
        undefined8 uVar4;
        ID IVar5;
        ID IVar6;

        IVar3 = OsxNotifications::alloc((ID)&objc::class_t::OsxNotifications, "alloc");
        IVar3 = OsxNotifications::init(IVar3, "init");
        if (IVar3 == 0) {
            iVar2 = 4294967295;
        } else {
            InitialisePushNotificationsService();
            uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            IVar5 = NSString::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString, "stringWithUTF8String:", uVar4);
            IVar5 = _objc_retainAutoreleasedReturnValue(IVar5);
            uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            IVar6 = NSString::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString, "stringWithUTF8String:", uVar4);
            IVar6 = _objc_retainAutoreleasedReturnValue(IVar6);
            iVar2 = OsxNotifications::sendLocalNotification_body_timeInSeconds_(
                IVar3, "sendLocalNotification:body:timeInSeconds:", IVar5, IVar6, param_4);
            puVar1 = PTR__objc_release_100ee9e60;
            (*(code*)PTR__objc_release_100ee9e60)(IVar6);
            (*(code*)puVar1)(IVar5);
        }
        (*(code*)PTR__objc_release_100ee9e60)(IVar3);
        return iVar2;
    }

    // 0x1003acf30, 96 bytes, placed by class name and debug map
    // InitialisePushNotificationsService()
    void InitialisePushNotificationsService() {
        ID IVar1;

        IVar1 = OsxNotifications::alloc((ID)&objc::class_t::OsxNotifications, "alloc");
        IVar1 = OsxNotifications::init(IVar1, "init");
        OsxNotifications::registerForNotifications(IVar1, "registerForNotifications");
        (*(code*)PTR__objc_release_100ee9e60)(IVar1);
    }

    // 0x1003acf90, 16 bytes, placed by class name and debug map
    // SendGroupedLocalNotification(eastl::string const&, eastl::string const&, int, int, eastl::string const&, int)
    void SendGroupedLocalNotification(basic_string* param_1, basic_string* param_2, int param_3, int param_4,
                                      basic_string* param_5, int param_6) {
        SendLocalNotification(param_1, param_2, param_3, param_6);
    }

    // 0x1003acfa0, 112 bytes, placed by class name and debug map
    // CancelLocalNotification(int)
    void CancelLocalNotification(int param_1) {
        ID IVar1;

        IVar1 = OsxNotifications::alloc((ID)&objc::class_t::OsxNotifications, "alloc");
        IVar1 = OsxNotifications::init(IVar1, "init");
        OsxNotifications::cancelNotification_(IVar1, "cancelNotification:", param_1);
        (*(code*)PTR__objc_release_100ee9e60)(IVar1);
    }

    // 0x1003ad010, 320 bytes, placed by class name and debug map
    // IsLocalNotificationScheduledStart(int)
    void IsLocalNotificationScheduledStart(int param_1) {
        undefined* puVar1;
        ID IVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined4 in_R8D;
        undefined* local_50;
        undefined8 local_48;
        code* local_40;
        undefined* local_38;
        undefined8 local_30;

        puVar1 = PTR__objc_msgSend_100ee9e50;
        IVar2 = NSApplication::sharedApplication((ID)&_OBJC_CLASS___NSApplication, "sharedApplication");
        uVar3 = _objc_retainAutoreleasedReturnValue(IVar2);
        uVar4 = (*(code*)puVar1)(uVar3, "delegate");
        uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
        (*(code*)PTR__objc_release_100ee9e60)(uVar3);
        (*(code*)PTR__objc_msgSend_100ee9e50)(uVar4, "setGetLocalNotificationScheduled:", 0);
        IVar2 = OsxNotifications::alloc((ID)&objc::class_t::OsxNotifications, "alloc");
        IVar2 = OsxNotifications::init(IVar2, "init");
        local_50 = PTR___NSConcreteStackBlock_100ee4038;
        local_48 = 3254779904;
        local_40 = ____ZN3jag13notifications33IsLocalNotificationScheduledStartEi_block_invoke;
        local_38 = &___block_descriptor_40_ea8_32s_e8_v12__0c8l;
        uVar3 = (*(code*)PTR__objc_retain_100ee9e68)(uVar4);
        local_30 = uVar3;
        OsxNotifications::isNotificationScheduled_onSuccess_(IVar2, "isNotificationScheduled:onSuccess:", param_1,
                                                             (ID)&local_50, in_R8D);
        puVar1 = PTR__objc_release_100ee9e60;
        (*(code*)PTR__objc_release_100ee9e60)(local_30);
        (*(code*)puVar1)(IVar2);
        (*(code*)puVar1)(uVar3);
    }

} // namespace jag::notifications

// 0x1003ad150, 48 bytes, placed by debug map only (low confidence)
// ___ZN3jag13notifications33IsLocalNotificationScheduledStartEi_block_invoke
void ____ZN3jag13notifications33IsLocalNotificationScheduledStartEi_block_invoke(long param_1, char param_2) {
    (*(code*)PTR__objc_msgSend_100ee9e50)(*(undefined8*)(param_1 + 32),
                                          "setGetLocalNotificationScheduled:", (param_2 == '\0') + '\x01');
}
