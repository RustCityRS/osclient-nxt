// libs/hal/system/notifications/osx/Notifications_OSX.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.system.notifications

namespace jag::notifications {
    // 0x1003acdf0
    void SetAppName(const eastl::string& str1, const eastl::string& str2) {}

    // 0x1003ace00
    int SendLocalNotification(const eastl::string& str1, const eastl::string& str2, int arg3, int arg4) {
        uint8_t* puVar1;
        int iVar2;
        uint64_t uVar4;
        ID IVar5;
        ID IVar6;

        auto IVar3 = OsxNotifications::alloc((ID)&objc::class_t::OsxNotifications, "alloc");
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
                IVar3, "sendLocalNotification:body:timeInSeconds:", IVar5, IVar6, arg4);
            puVar1 = PTR__objc_release_100ee9e60;
            (*(void (*)(...))PTR__objc_release_100ee9e60)(IVar6);
            (*(void (*)(...))puVar1)(IVar5);
        }
        (*(void (*)(...))PTR__objc_release_100ee9e60)(IVar3);
        return iVar2;
    }

    // 0x1003acf30
    void InitialisePushNotificationsService() {
        auto IVar1 = OsxNotifications::alloc((ID)&objc::class_t::OsxNotifications, "alloc");
        IVar1 = OsxNotifications::init(IVar1, "init");
        OsxNotifications::registerForNotifications(IVar1, "registerForNotifications");
        (*(void (*)(...))PTR__objc_release_100ee9e60)(IVar1);
    }

    // 0x1003acf90
    void SendGroupedLocalNotification(const eastl::string& str1, const eastl::string& str2, int arg3, int arg4,
                                      const eastl::string& str3, int arg6) {
        SendLocalNotification(str1, str2, arg3, arg6);
    }

    // 0x1003acfa0
    void CancelLocalNotification(int arg1) {
        auto IVar1 = OsxNotifications::alloc((ID)&objc::class_t::OsxNotifications, "alloc");
        IVar1 = OsxNotifications::init(IVar1, "init");
        OsxNotifications::cancelNotification_(IVar1, "cancelNotification:", arg1);
        (*(void (*)(...))PTR__objc_release_100ee9e60)(IVar1);
    }

    // 0x1003ad010
    void IsLocalNotificationScheduledStart(int arg1) {
        uint32_t in_R8D;

        uint8_t* puVar1 = PTR__objc_msgSend_100ee9e50;
        auto IVar2 = NSApplication::sharedApplication((ID)&_OBJC_CLASS___NSApplication, "sharedApplication");
        uint64_t uVar3 = _objc_retainAutoreleasedReturnValue(IVar2);
        uint64_t uVar4 = (*(void (*)(...))puVar1)(uVar3, "delegate");
        uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
        (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar3);
        (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(uVar4, "setGetLocalNotificationScheduled:", 0);
        IVar2 = OsxNotifications::alloc((ID)&objc::class_t::OsxNotifications, "alloc");
        IVar2 = OsxNotifications::init(IVar2, "init");
        uint8_t* local_50 = PTR___NSConcreteStackBlock_100ee4038;
        uint64_t local_48 = 3254779904;
        void* local_40 = ____ZN3jag13notifications33IsLocalNotificationScheduledStartEi_block_invoke;
        uint8_t* local_38 = &___block_descriptor_40_ea8_32s_e8_v12__0c8l;
        uVar3 = (*(void (*)(...))PTR__objc_retain_100ee9e68)(uVar4);
        uint64_t local_30 = uVar3;
        OsxNotifications::isNotificationScheduled_onSuccess_(IVar2, "isNotificationScheduled:onSuccess:", arg1,
                                                             (ID)&local_50, in_R8D);
        puVar1 = PTR__objc_release_100ee9e60;
        (*(void (*)(...))PTR__objc_release_100ee9e60)(local_30);
        (*(void (*)(...))puVar1)(IVar2);
        (*(void (*)(...))puVar1)(uVar3);
    }

} // namespace jag::notifications

// 0x1003ad150
void ____ZN3jag13notifications33IsLocalNotificationScheduledStartEi_block_invoke(long param_1, char param_2) {
    (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(*(uint64_t*)(param_1 + 32),
                                                  "setGetLocalNotificationScheduled:", (param_2 == '\0') + '\x01');
}
