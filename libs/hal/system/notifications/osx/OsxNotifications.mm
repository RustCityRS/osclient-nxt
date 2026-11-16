// libs/hal/system/notifications/osx/OsxNotifications.mm
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.system.notifications

// 0x1003ad4c0
void ___44__OsxNotifications_registerForNotifications__block_invoke(undefined8 param_1, undefined8 param_2,
                                                                    undefined8 param_3) {
    uint64_t uVar2;

    long lVar1 = (*(void (*)(...))PTR__objc_retain_100ee9e68)(param_3);
    if (lVar1 != 0) {
        uVar2 = (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(lVar1, "localizedDescription");
        uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
        _NSLog(&cf_ErrorRegisteringdevice___, uVar2);
        (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar2);
    }
    (*(void (*)(...))PTR__objc_release_100ee9e60)(lVar1);
}

// 0x1003ad550
void ___44__OsxNotifications_registerForNotifications__block_invoke_2(void) {
    uint8_t* puVar1 = PTR__objc_msgSend_100ee9e50;
    uint64_t uVar3 = _objc_retainAutoreleasedReturnValue(
        NSApplication::sharedApplication((ID)&_OBJC_CLASS___NSApplication, "sharedApplication"));
    (*(void (*)(...))puVar1)(uVar3, "registerForRemoteNotifications");
    (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar3);
}

// 0x1003ad710
void ___43__OsxNotifications_getNotificationSetting___block_invoke(long param_1, undefined8 param_2) {
    uint64_t uVar2 = (*(void (*)(...))PTR__objc_retain_100ee9e68)(param_2);
    long lVar1 = *(long*)(param_1 + 32);
    long lVar3 = (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(uVar2, "authorizationStatus");
    (**(void (**)(...))(lVar1 + 16))(lVar1, lVar3 == 2);
    (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar2);
}

// 0x1003ad770
void ___copy_helper_block_ea8_32b(long param_1, long param_2) {
    __Block_object_assign((void*)(param_1 + 32), *(void**)(param_2 + 32), 7);
}

// 0x1003ada30
void ___61__OsxNotifications_sendLocalNotification_body_timeInSeconds___block_invoke(undefined8 param_1,
                                                                                     undefined8 param_2) {
    long lVar1 = (*(void (*)(...))PTR__objc_retain_100ee9e68)(param_2);
    if (lVar1 != 0) {
        _NSLog(&cf_FailedtoscheduleaLocalNotification___, lVar1);
    }
    (*(void (*)(...))PTR__objc_release_100ee9e60)(lVar1);
}

// 0x1003adce0
void ___54__OsxNotifications_isNotificationScheduled_onSuccess___block_invoke(long param_1, undefined8 param_2) {
    bool cVar2;
    unsigned long uVar5;
    char* local_d8;
    long local_d0;
    uint8_t local_b8[128];

    uint8_t* puVar1 = PTR__objc_retain_100ee9e68;
    uint64_t uVar3 = (*(void (*)(...))PTR__objc_retain_100ee9e68)(param_2);
    uint64_t local_118 = 0;
    long* local_108 = nullptr;
    uint64_t uStack_100 = 0;
    uint64_t local_f8 = 0;
    uint64_t uStack_f0 = 0;
    uint64_t local_e8 = 0;
    uint64_t uStack_e0 = 0;
    uVar3 = (*(void (*)(...))puVar1)(uVar3);
    uint64_t local_c0 = uVar3;
    unsigned long uVar4 = (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(
        uVar3, "countByEnumeratingWithState:objects:count:", &local_118, local_b8, 16);
    if (uVar4 != 0) {
        local_d0 = *local_108;
        do {
            local_d8 = "identifier";
            if (uVar4 < 2) {
                uVar4 = 1;
            }
            uVar5 = 0;
            do {
                if (*local_108 != local_d0) {
                    _objc_enumerationMutation(local_c0);
                }
                uVar3 = (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(*(uint64_t*)(0 + uVar5 * 8), local_d8);
                uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
                cVar2 = (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(uVar3,
                                                                      "isEqualToString:", *(uint64_t*)(param_1 + 32));
                (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar3);
                uVar3 = local_c0;
                if (cVar2) {
                    (**(void (**)(...))(*(long*)(param_1 + 40) + 16))(*(long*)(param_1 + 40), 1);
                    (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar3);
                    goto LAB_1003ade9d;
                }
                uVar5 = uVar5 + 1;
            } while (uVar4 != uVar5);
            uVar4 = (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(
                local_c0, "countByEnumeratingWithState:objects:count:", &local_118, local_b8, 16);
        } while (uVar4 != 0);
    }
    (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar3);
    (**(void (**)(...))(*(long*)(param_1 + 40) + 16))(*(long*)(param_1 + 40), 0);
LAB_1003ade9d:
    (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar3);
}

// 0x1003adf10
void ___copy_helper_block_ea8_32s40b(long param_1, long param_2) {
    (*(void (*)(...))PTR__objc_retain_100ee9e68)(*(uint64_t*)(param_2 + 32));
    __Block_object_assign((void*)(param_1 + 40), *(void**)(param_2 + 40), 7);
}

// 0x1003adf50
void ___destroy_helper_block_ea8_32s40s(long param_1) {
    uint8_t* puVar1 = PTR__objc_release_100ee9e60;
    (*(void (*)(...))PTR__objc_release_100ee9e60)(*(uint64_t*)(param_1 + 40));
    (*(void (*)(...))puVar1)(*(uint64_t*)(param_1 + 32));
}

@interface OsxNotifications : NSObject
+ (id)checkIfRunningApp;
+ (id)alloc;
- (id)init;
- (id)registerForNotifications;
- (id)getLatestDeviceToken:(id)arg1 onFailure:(id)arg2;
- (id)openNotificationSettings;
- (id)getNotificationSetting:(id)arg1;
- (id)sendLocalNotification:(id)arg1 body:(id)arg2 timeInSeconds:(id)arg3;
- (id)cancelNotification:(id)arg1;
- (id)isNotificationScheduled:(id)arg1 onSuccess:(id)arg2;
@end

@implementation OsxNotifications

// 0x1003ad2c0
char OsxNotifications::checkIfRunningApp(ID param_1, SEL param_2) {
    long in_RAX;

    long local_18 = in_RAX;
    uint64_t uVar2 = _CFBundleGetMainBundle();
    uVar2 = _CFBundleCopyBundleURL(uVar2);
    bool cVar1 =
        _CFURLCopyResourcePropertyForKey(uVar2, *(uint64_t*)PTR__kCFURLTypeIdentifierKey_100ee9de0, &local_18, 0);
    if (((!cVar1) || (local_18 == 0)) || (cVar1 = _UTTypeConformsTo(), !cVar1)) {
        (jag::logger::default_logger())
            ->Log(false, 3,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/notifications/osx/"
                  "OsxNotifications.mm",
                  37, "OsxNotifications: Currently running MAC client as an executable");
        return '\0';
    }
    return '\x01';
}

// 0x1003ad350
ID OsxNotifications::alloc(ID param_1, SEL param_2) {
    ID IVar2;
    ID local_20;
    class_t* local_18;

    if (checkIfRunningApp(param_1, "checkIfRunningApp") == '\0') {
        IVar2 = 0;
    } else {
        local_18 = &objc::class_t::OsxNotifications;
        local_20 = param_1;
        IVar2 = NSObject::alloc((ID)&local_20, "alloc");
    }
    return IVar2;
}

// 0x1003ad3a0
ID OsxNotifications::init(ID param_1, SEL param_2) {
    class_t* local_10 = &objc::class_t::OsxNotifications;
    ID local_18 = param_1;
    return NSObject::init((ID)&local_18, "init");
}

// 0x1003ad3d0
void OsxNotifications::registerForNotifications(ID param_1, SEL param_2) {
    ID IVar3;
    uint64_t uVar4;

    int iVar2 = ___isPlatformVersionAtLeast(1, 10, 14, 0);
    uint8_t* puVar1 = PTR__objc_msgSend_100ee9e50;
    if (iVar2 != 0) {
        IVar3 = UNUserNotificationCenter::currentNotificationCenter((ID)&_OBJC_CLASS___UNUserNotificationCenter,
                                                                    "currentNotificationCenter");
        uVar4 = _objc_retainAutoreleasedReturnValue(IVar3);
        (*(void (*)(...))puVar1)(uVar4, "setDelegate:", param_1);
        (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar4);
        IVar3 = UNUserNotificationCenter::currentNotificationCenter((ID)&_OBJC_CLASS___UNUserNotificationCenter,
                                                                    "currentNotificationCenter");
        uVar4 = _objc_retainAutoreleasedReturnValue(IVar3);
        (*(void (*)(...))puVar1)(uVar4, "requestAuthorizationWithOptions:completionHandler:", 71,
                                 &___block_literal_global);
        (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar4);
        puVar1 = PTR___dispatch_main_q_100ee9db8;
        _objc_retainAutorelease(PTR___dispatch_main_q_100ee9db8);
        _dispatch_async(puVar1, &___block_literal_global_54);
    }
}

// 0x1003ad5b0
void OsxNotifications::getLatestDeviceToken_onFailure_(ID param_1, SEL param_2, ID param_3, undefined4 param_4,
                                                       ID param_5, undefined4 param_6) {
    (jag::logger::default_logger())
        ->Log(false, 5,
              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/notifications/osx/"
              "OsxNotifications.mm",
              80, "OSX getLatestDeviceToken NYI");
}

// 0x1003ad5e0
void OsxNotifications::openNotificationSettings(ID param_1, SEL param_2) {
    (jag::logger::default_logger())
        ->Log(false, 5,
              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/notifications/osx/"
              "OsxNotifications.mm",
              87, "OSX openNotificationSettings NYI");
}

// 0x1003ad610
void OsxNotifications::getNotificationSetting_(ID param_1, SEL param_2, ID param_3, undefined4 param_4) {
    uint8_t* puVar1;
    uint64_t uVar5;
    uint8_t* local_50;
    uint64_t local_48;
    void* local_40;
    uint8_t* local_38;
    uint64_t local_30;

    uint64_t uVar3 = (*(void (*)(...))PTR__objc_retain_100ee9e68)(param_3);
    if (___isPlatformVersionAtLeast(1, 10, 14, 0) != 0) {
        uVar5 = _objc_retainAutoreleasedReturnValue(UNUserNotificationCenter::currentNotificationCenter(
            (ID)&_OBJC_CLASS___UNUserNotificationCenter, "currentNotificationCenter"));
        local_50 = PTR___NSConcreteStackBlock_100ee4038;
        local_48 = 3254779904;
        local_40 = ___43__OsxNotifications_getNotificationSetting___block_invoke;
        local_38 = &___block_descriptor_40_ea8_32bs_e32_v16__0__UNNotificationSettings_8l;
        local_30 = (*(void (*)(...))PTR__objc_retain_100ee9e68)(uVar3);
        (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(uVar5,
                                                      "getNotificationSettingsWithCompletionHandler:", &local_50);
        puVar1 = PTR__objc_release_100ee9e60;
        (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar5);
        (*(void (*)(...))puVar1)(local_30);
    }
    (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar3);
}

// 0x1003ad790
int OsxNotifications::sendLocalNotification_body_timeInSeconds_(ID param_1, SEL param_2, ID param_3, ID param_4,
                                                                int param_5) {
    int iVar4;
    ID IVar7;
    ID IVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint64_t uVar12;

    uint8_t* puVar1 = PTR__objc_retain_100ee9e68;
    uint64_t uVar5 = (*(void (*)(...))PTR__objc_retain_100ee9e68)(param_3);
    uint64_t uVar6 = (*(void (*)(...))puVar1)(param_4);
    auto uVar2 = _arc4random_uniform(2147483647);
    if (___isPlatformVersionAtLeast(1, 10, 14, 0) != 0) {
        IVar7 = UNMutableNotificationContent::alloc((ID)&_OBJC_CLASS___UNMutableNotificationContent, "alloc");
        IVar7 = UNMutableNotificationContent::init(IVar7, "init");
        IVar8 = NSString::localizedUserNotificationStringForKey_arguments_(
            (ID)&_OBJC_CLASS___NSString, "localizedUserNotificationStringForKey:arguments:", uVar5, 0);
        uVar9 = _objc_retainAutoreleasedReturnValue(IVar8);
        UNMutableNotificationContent::setTitle_(IVar7, "setTitle:", uVar9);
        (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar9);
        IVar8 = NSString::localizedUserNotificationStringForKey_arguments_(
            (ID)&_OBJC_CLASS___NSString, "localizedUserNotificationStringForKey:arguments:", uVar6, 0);
        uVar9 = _objc_retainAutoreleasedReturnValue(IVar8);
        UNMutableNotificationContent::setBody_(IVar7, "setBody:", uVar9);
        (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar9);
        iVar4 = 1;
        if (0 < (int)param_5) {
            iVar4 = param_5;
        }
        uVar9 = (*(void (*)(...))PTR__objc_msgSend_100ee9e50)((double)(int)iVar4,
                                                              &_OBJC_CLASS___UNTimeIntervalNotificationTrigger,
                                                              "triggerWithTimeInterval:repeats:", 0);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        IVar8 =
            NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString, "stringWithFormat:", &cf__d, (unsigned long)uVar2);
        uVar10 = _objc_retainAutoreleasedReturnValue(IVar8);
        IVar8 = UNNotificationRequest::requestWithIdentifier_content_trigger_(
            (ID)&_OBJC_CLASS___UNNotificationRequest, "requestWithIdentifier:content:trigger:", uVar10, IVar7, uVar9);
        uVar11 = _objc_retainAutoreleasedReturnValue(IVar8);
        IVar8 = UNUserNotificationCenter::currentNotificationCenter((ID)&_OBJC_CLASS___UNUserNotificationCenter,
                                                                    "currentNotificationCenter");
        uVar12 = _objc_retainAutoreleasedReturnValue(IVar8);
        (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(uVar12, "addNotificationRequest:withCompletionHandler:", uVar11,
                                                      &___block_literal_global_82);
        puVar1 = PTR__objc_release_100ee9e60;
        (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar12);
        (*(void (*)(...))puVar1)(uVar11);
        (*(void (*)(...))puVar1)(uVar10);
        (*(void (*)(...))puVar1)(uVar9);
        (*(void (*)(...))puVar1)(IVar7);
    }
    puVar1 = PTR__objc_release_100ee9e60;
    (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar6);
    (*(void (*)(...))puVar1)(uVar5);
    return uVar2;
}

// 0x1003ada80
void OsxNotifications::cancelNotification_(ID param_1, SEL param_2, int param_3) {
    uint8_t* puVar1;
    ID IVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    uint64_t uVar6;

    if (___isPlatformVersionAtLeast(1, 10, 14, 0) != 0) {
        IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString, "stringWithFormat:", &cf__d,
                                            (unsigned long)param_3);
        uVar4 = _objc_retainAutoreleasedReturnValue(IVar3);
        IVar3 = UNUserNotificationCenter::currentNotificationCenter((ID)&_OBJC_CLASS___UNUserNotificationCenter,
                                                                    "currentNotificationCenter");
        uVar5 = _objc_retainAutoreleasedReturnValue(IVar3);
        IVar3 = NSArray::arrayWithObject_((ID)&_OBJC_CLASS___NSArray, "arrayWithObject:", uVar4);
        uVar6 = _objc_retainAutoreleasedReturnValue(IVar3);
        (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(uVar5,
                                                      "removePendingNotificationRequestsWithIdentifiers:", uVar6);
        puVar1 = PTR__objc_release_100ee9e60;
        (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar6);
        (*(void (*)(...))puVar1)(uVar5);
        (*(void (*)(...))puVar1)(uVar4);
    }
}

// 0x1003adb80
void OsxNotifications::isNotificationScheduled_onSuccess_(ID param_1, SEL param_2, int param_3, ID param_4,
                                                          undefined4 param_5) {
    uint8_t* puVar1;
    ID IVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint8_t* local_60;
    uint64_t local_58;
    void* local_50;
    uint8_t* local_48;
    uint64_t local_40;
    uint64_t local_38;

    uint64_t uVar3 = (*(void (*)(...))PTR__objc_retain_100ee9e68)(param_4);
    if (___isPlatformVersionAtLeast(1, 10, 14, 0) != 0) {
        IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString, "stringWithFormat:", &cf__d,
                                            (unsigned long)param_3);
        uVar5 = _objc_retainAutoreleasedReturnValue(IVar4);
        IVar4 = UNUserNotificationCenter::currentNotificationCenter((ID)&_OBJC_CLASS___UNUserNotificationCenter,
                                                                    "currentNotificationCenter");
        uVar6 = _objc_retainAutoreleasedReturnValue(IVar4);
        puVar1 = PTR__objc_retain_100ee9e68;
        local_60 = PTR___NSConcreteStackBlock_100ee4038;
        local_58 = 3254779904;
        local_50 = ___54__OsxNotifications_isNotificationScheduled_onSuccess___block_invoke;
        local_48 = &___block_descriptor_48_ea8_32s40bs_e17_v16__0__NSArray_8l;
        uVar5 = (*(void (*)(...))PTR__objc_retain_100ee9e68)(uVar5);
        local_40 = uVar5;
        local_38 = (*(void (*)(...))puVar1)(uVar3);
        (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(
            uVar6, "getPendingNotificationRequestsWithCompletionHandler:", &local_60);
        puVar1 = PTR__objc_release_100ee9e60;
        (*(void (*)(...))PTR__objc_release_100ee9e60)(local_38);
        (*(void (*)(...))puVar1)(local_40);
        (*(void (*)(...))puVar1)(uVar6);
        (*(void (*)(...))puVar1)(uVar5);
    }
    (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar3);
}

@end
