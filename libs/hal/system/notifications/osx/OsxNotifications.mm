// libs/hal/system/notifications/osx/OsxNotifications.mm
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.system.notifications

// 0x1003ad4c0, 144 bytes, placed by neighbouring functions
// __44-[OsxNotifications registerForNotifications]_block_invoke
void ___44__OsxNotifications_registerForNotifications__block_invoke(undefined8 param_1, undefined8 param_2,
                                                                    undefined8 param_3) {
    long lVar1;
    undefined8 uVar2;

    lVar1 = (*(code*)PTR__objc_retain_100ee9e68)(param_3);
    if (lVar1 != 0) {
        uVar2 = (*(code*)PTR__objc_msgSend_100ee9e50)(lVar1, "localizedDescription");
        uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
        _NSLog(&cf_ErrorRegisteringdevice___, uVar2);
        (*(code*)PTR__objc_release_100ee9e60)(uVar2);
    }
    (*(code*)PTR__objc_release_100ee9e60)(lVar1);
}

// 0x1003ad550, 96 bytes, placed by neighbouring functions
// __44-[OsxNotifications registerForNotifications]_block_invoke_2
void ___44__OsxNotifications_registerForNotifications__block_invoke_2() {
    undefined* puVar1;
    ID IVar2;
    undefined8 uVar3;

    puVar1 = PTR__objc_msgSend_100ee9e50;
    IVar2 = NSApplication::sharedApplication((ID)&_OBJC_CLASS___NSApplication, "sharedApplication");
    uVar3 = _objc_retainAutoreleasedReturnValue(IVar2);
    (*(code*)puVar1)(uVar3, "registerForRemoteNotifications");
    (*(code*)PTR__objc_release_100ee9e60)(uVar3);
}

// 0x1003ad710, 96 bytes, placed by neighbouring functions
// __43-[OsxNotifications getNotificationSetting:]_block_invoke
void ___43__OsxNotifications_getNotificationSetting___block_invoke(long param_1, undefined8 param_2) {
    long lVar1;
    undefined8 uVar2;
    long lVar3;

    uVar2 = (*(code*)PTR__objc_retain_100ee9e68)(param_2);
    lVar1 = *(long*)(param_1 + 32);
    lVar3 = (*(code*)PTR__objc_msgSend_100ee9e50)(uVar2, "authorizationStatus");
    (**(code**)(lVar1 + 16))(lVar1, lVar3 == 2);
    (*(code*)PTR__objc_release_100ee9e60)(uVar2);
}

// 0x1003ad770, 32 bytes, inline, placed by debug map only (low confidence)
// __copy_helper_block_ea8_32b
void ___copy_helper_block_ea8_32b(long param_1, long param_2) {
    __Block_object_assign((void*)(param_1 + 32), *(void**)(param_2 + 32), 7);
}

// 0x1003ada30, 80 bytes, placed by neighbouring functions
// __61-[OsxNotifications sendLocalNotification:body:timeInSeconds:]_block_invoke
void ___61__OsxNotifications_sendLocalNotification_body_timeInSeconds___block_invoke(undefined8 param_1,
                                                                                     undefined8 param_2) {
    long lVar1;

    lVar1 = (*(code*)PTR__objc_retain_100ee9e68)(param_2);
    if (lVar1 != 0) {
        _NSLog(&cf_FailedtoscheduleaLocalNotification___, lVar1);
    }
    (*(code*)PTR__objc_release_100ee9e60)(lVar1);
}

// 0x1003adce0, 560 bytes, placed by debug map only (low confidence)
// __54-[OsxNotifications isNotificationScheduled:onSuccess:]_block_invoke
void ___54__OsxNotifications_isNotificationScheduled_onSuccess___block_invoke(long param_1, undefined8 param_2) {
    undefined* puVar1;
    char cVar2;
    undefined8 uVar3;
    ulong uVar4;
    ulong uVar5;
    undefined8 local_118;
    undefined8 uStack_100;
    undefined8 local_f8;
    undefined8 uStack_f0;
    undefined8 local_e8;
    undefined8 uStack_e0;
    char* local_d8;
    long local_d0;
    undefined8 local_c0;
    undefined1 local_b8[128];
    long local_38;

    puVar1 = PTR__objc_retain_100ee9e68;
    local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
    uVar3 = (*(code*)PTR__objc_retain_100ee9e68)(param_2);
    local_118 = 0;
    uStack_100 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    uVar3 = (*(code*)puVar1)(uVar3);
    local_c0 = uVar3;
    uVar4 = (*(code*)PTR__objc_msgSend_100ee9e50)(uVar3, "countByEnumeratingWithState:objects:count:", &local_118,
                                                  local_b8, 16);
    if (uVar4 != 0) {
        local_d0 = *(long*)0;
        do {
            local_d8 = "identifier";
            if (uVar4 < 2) {
                uVar4 = 1;
            }
            uVar5 = 0;
            do {
                if (*(long*)0 != local_d0) {
                    _objc_enumerationMutation(local_c0);
                }
                uVar3 = (*(code*)PTR__objc_msgSend_100ee9e50)(*(undefined8*)(0 + uVar5 * 8), local_d8);
                uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
                cVar2 = (*(code*)PTR__objc_msgSend_100ee9e50)(uVar3, "isEqualToString:", *(undefined8*)(param_1 + 32));
                (*(code*)PTR__objc_release_100ee9e60)(uVar3);
                uVar3 = local_c0;
                if (cVar2 != '\0') {
                    (**(code**)(*(long*)(param_1 + 40) + 16))(*(long*)(param_1 + 40), 1);
                    (*(code*)PTR__objc_release_100ee9e60)(uVar3);
                    goto LAB_1003ade9d;
                }
                uVar5 = uVar5 + 1;
            } while (uVar4 != uVar5);
            uVar4 = (*(code*)PTR__objc_msgSend_100ee9e50)(
                local_c0, "countByEnumeratingWithState:objects:count:", &local_118, local_b8, 16);
        } while (uVar4 != 0);
    }
    (*(code*)PTR__objc_release_100ee9e60)(uVar3);
    (**(code**)(*(long*)(param_1 + 40) + 16))(*(long*)(param_1 + 40), 0);
LAB_1003ade9d:
    (*(code*)PTR__objc_release_100ee9e60)(uVar3);
    if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
        /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
    }
}

// 0x1003adf10, 64 bytes, inline, placed by debug map only (low confidence)
// __copy_helper_block_ea8_32s40b
void ___copy_helper_block_ea8_32s40b(long param_1, long param_2) {
    (*(code*)PTR__objc_retain_100ee9e68)(*(undefined8*)(param_2 + 32));
    __Block_object_assign((void*)(param_1 + 40), *(void**)(param_2 + 40), 7);
}

// 0x1003adf50, 48 bytes, inline, placed by debug map only (low confidence)
// __destroy_helper_block_ea8_32s40s
void ___destroy_helper_block_ea8_32s40s(long param_1) {
    undefined* puVar1;

    puVar1 = PTR__objc_release_100ee9e60;
    (*(code*)PTR__objc_release_100ee9e60)(*(undefined8*)(param_1 + 40));
    (*(code*)puVar1)(*(undefined8*)(param_1 + 32));
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

// 0x1003ad2c0, 144 bytes, placed by class name and debug map
// +[OsxNotifications checkIfRunningApp]
/* Function Stack Size: 16 bytes */

char OsxNotifications::checkIfRunningApp(ID param_1, SEL param_2) {
    char cVar1;
    long in_RAX;
    undefined8 uVar2;
    long local_18;

    local_18 = in_RAX;
    uVar2 = _CFBundleGetMainBundle();
    uVar2 = _CFBundleCopyBundleURL(uVar2);
    cVar1 = _CFURLCopyResourcePropertyForKey(uVar2, *(undefined8*)PTR__kCFURLTypeIdentifierKey_100ee9de0, &local_18, 0);
    if (((cVar1 == '\0') || (local_18 == 0)) ||
        (cVar1 = _UTTypeConformsTo(local_18, *(undefined8*)PTR__kUTTypeApplicationBundle_100ee9df8), cVar1 == '\0')) {
        uVar2 = jag::logger::default_logger();
        jag::logger::Logger::Log(uVar2, 0, 3,
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/"
                                 "notifications/osx/OsxNotifications.mm",
                                 37, "OsxNotifications: Currently running MAC client as an executable");
        return '\0';
    }
    return '\x01';
}

// 0x1003ad350, 80 bytes, placed by class name and debug map
// +[OsxNotifications alloc]
/* Function Stack Size: 16 bytes */

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

// 0x1003ad3a0, 48 bytes, placed by class name and debug map
// -[OsxNotifications init]
/* Function Stack Size: 16 bytes */

ID OsxNotifications::init(ID param_1, SEL param_2) {
    ID local_18;
    class_t* local_10;

    local_10 = &objc::class_t::OsxNotifications;
    local_18 = param_1;
    return NSObject::init((ID)&local_18, "init");
}

// 0x1003ad3d0, 240 bytes, placed by class name and debug map
// -[OsxNotifications registerForNotifications]
/* Function Stack Size: 16 bytes */

void OsxNotifications::registerForNotifications(ID param_1, SEL param_2) {
    undefined* puVar1;
    int iVar2;
    ID IVar3;
    undefined8 uVar4;

    iVar2 = ___isPlatformVersionAtLeast(1, 10, 14, 0);
    puVar1 = PTR__objc_msgSend_100ee9e50;
    if (iVar2 != 0) {
        IVar3 = UNUserNotificationCenter::currentNotificationCenter((ID)&_OBJC_CLASS___UNUserNotificationCenter,
                                                                    "currentNotificationCenter");
        uVar4 = _objc_retainAutoreleasedReturnValue(IVar3);
        (*(code*)puVar1)(uVar4, "setDelegate:", param_1);
        (*(code*)PTR__objc_release_100ee9e60)(uVar4);
        IVar3 = UNUserNotificationCenter::currentNotificationCenter((ID)&_OBJC_CLASS___UNUserNotificationCenter,
                                                                    "currentNotificationCenter");
        uVar4 = _objc_retainAutoreleasedReturnValue(IVar3);
        (*(code*)puVar1)(uVar4, "requestAuthorizationWithOptions:completionHandler:", 71, &___block_literal_global);
        (*(code*)PTR__objc_release_100ee9e60)(uVar4);
        puVar1 = PTR___dispatch_main_q_100ee9db8;
        _objc_retainAutorelease(PTR___dispatch_main_q_100ee9db8);
        _dispatch_async(puVar1, &___block_literal_global_54);
    }
}

// 0x1003ad5b0, 48 bytes, placed by class name and debug map
// -[OsxNotifications getLatestDeviceToken:onFailure:]
/* Function Stack Size: 32 bytes */

void OsxNotifications::getLatestDeviceToken_onFailure_(ID param_1, SEL param_2, ID param_3, undefined4 param_4,
                                                       ID param_5, undefined4 param_6) {
    undefined8 uVar1;

    uVar1 = jag::logger::default_logger();
    jag::logger::Logger::Log(uVar1, 0, 5,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/"
                             "notifications/osx/OsxNotifications.mm",
                             80, "OSX getLatestDeviceToken NYI");
}

// 0x1003ad5e0, 48 bytes, placed by class name and debug map
// -[OsxNotifications openNotificationSettings]
/* Function Stack Size: 16 bytes */

void OsxNotifications::openNotificationSettings(ID param_1, SEL param_2) {
    undefined8 uVar1;

    uVar1 = jag::logger::default_logger();
    jag::logger::Logger::Log(uVar1, 0, 5,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/"
                             "notifications/osx/OsxNotifications.mm",
                             87, "OSX openNotificationSettings NYI");
}

// 0x1003ad610, 256 bytes, placed by class name and debug map
// -[OsxNotifications getNotificationSetting:]
/* Function Stack Size: 24 bytes */

void OsxNotifications::getNotificationSetting_(ID param_1, SEL param_2, ID param_3, undefined4 param_4) {
    undefined* puVar1;
    undefined8 uVar3;
    ID IVar4;
    undefined8 uVar5;
    undefined* local_50;
    undefined8 local_48;
    code* local_40;
    undefined* local_38;
    undefined8 local_30;

    uVar3 = (*(code*)PTR__objc_retain_100ee9e68)(param_3);
    if (___isPlatformVersionAtLeast(1, 10, 14, 0) != 0) {
        IVar4 = UNUserNotificationCenter::currentNotificationCenter((ID)&_OBJC_CLASS___UNUserNotificationCenter,
                                                                    "currentNotificationCenter");
        uVar5 = _objc_retainAutoreleasedReturnValue(IVar4);
        local_50 = PTR___NSConcreteStackBlock_100ee4038;
        local_48 = 3254779904;
        local_40 = ___43__OsxNotifications_getNotificationSetting___block_invoke;
        local_38 = &___block_descriptor_40_ea8_32bs_e32_v16__0__UNNotificationSettings_8l;
        local_30 = (*(code*)PTR__objc_retain_100ee9e68)(uVar3);
        (*(code*)PTR__objc_msgSend_100ee9e50)(uVar5, "getNotificationSettingsWithCompletionHandler:", &local_50);
        puVar1 = PTR__objc_release_100ee9e60;
        (*(code*)PTR__objc_release_100ee9e60)(uVar5);
        (*(code*)puVar1)(local_30);
    }
    (*(code*)PTR__objc_release_100ee9e60)(uVar3);
}

// 0x1003ad790, 672 bytes, placed by class name and debug map
// -[OsxNotifications sendLocalNotification:body:timeInSeconds:]
/* Function Stack Size: 36 bytes */

int OsxNotifications::sendLocalNotification_body_timeInSeconds_(ID param_1, SEL param_2, ID param_3, ID param_4,
                                                                int param_5) {
    undefined* puVar1;
    u_int32_t uVar2;
    int iVar4;
    undefined8 uVar5;
    undefined8 uVar6;
    ID IVar7;
    ID IVar8;
    undefined8 uVar9;
    undefined8 uVar10;
    undefined8 uVar11;
    undefined8 uVar12;

    puVar1 = PTR__objc_retain_100ee9e68;
    uVar5 = (*(code*)PTR__objc_retain_100ee9e68)(param_3);
    uVar6 = (*(code*)puVar1)(param_4);
    uVar2 = _arc4random_uniform(2147483647);
    if (___isPlatformVersionAtLeast(1, 10, 14, 0) != 0) {
        IVar7 = UNMutableNotificationContent::alloc((ID)&_OBJC_CLASS___UNMutableNotificationContent, "alloc");
        IVar7 = UNMutableNotificationContent::init(IVar7, "init");
        IVar8 = NSString::localizedUserNotificationStringForKey_arguments_(
            (ID)&_OBJC_CLASS___NSString, "localizedUserNotificationStringForKey:arguments:", uVar5, 0);
        uVar9 = _objc_retainAutoreleasedReturnValue(IVar8);
        UNMutableNotificationContent::setTitle_(IVar7, "setTitle:", uVar9);
        (*(code*)PTR__objc_release_100ee9e60)(uVar9);
        IVar8 = NSString::localizedUserNotificationStringForKey_arguments_(
            (ID)&_OBJC_CLASS___NSString, "localizedUserNotificationStringForKey:arguments:", uVar6, 0);
        uVar9 = _objc_retainAutoreleasedReturnValue(IVar8);
        UNMutableNotificationContent::setBody_(IVar7, "setBody:", uVar9);
        (*(code*)PTR__objc_release_100ee9e60)(uVar9);
        iVar4 = 1;
        if (0 < (int)param_5) {
            iVar4 = param_5;
        }
        uVar9 =
            (*(code*)PTR__objc_msgSend_100ee9e50)((double)(int)iVar4, &_OBJC_CLASS___UNTimeIntervalNotificationTrigger,
                                                  "triggerWithTimeInterval:repeats:", 0);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        IVar8 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString, "stringWithFormat:", &cf__d, (ulong)uVar2);
        uVar10 = _objc_retainAutoreleasedReturnValue(IVar8);
        IVar8 = UNNotificationRequest::requestWithIdentifier_content_trigger_(
            (ID)&_OBJC_CLASS___UNNotificationRequest, "requestWithIdentifier:content:trigger:", uVar10, IVar7, uVar9);
        uVar11 = _objc_retainAutoreleasedReturnValue(IVar8);
        IVar8 = UNUserNotificationCenter::currentNotificationCenter((ID)&_OBJC_CLASS___UNUserNotificationCenter,
                                                                    "currentNotificationCenter");
        uVar12 = _objc_retainAutoreleasedReturnValue(IVar8);
        (*(code*)PTR__objc_msgSend_100ee9e50)(uVar12, "addNotificationRequest:withCompletionHandler:", uVar11,
                                              &___block_literal_global_82);
        puVar1 = PTR__objc_release_100ee9e60;
        (*(code*)PTR__objc_release_100ee9e60)(uVar12);
        (*(code*)puVar1)(uVar11);
        (*(code*)puVar1)(uVar10);
        (*(code*)puVar1)(uVar9);
        (*(code*)puVar1)(IVar7);
    }
    puVar1 = PTR__objc_release_100ee9e60;
    (*(code*)PTR__objc_release_100ee9e60)(uVar6);
    (*(code*)puVar1)(uVar5);
    return uVar2;
}

// 0x1003ada80, 256 bytes, placed by class name and debug map
// -[OsxNotifications cancelNotification:]
/* Function Stack Size: 20 bytes */

void OsxNotifications::cancelNotification_(ID param_1, SEL param_2, int param_3) {
    undefined* puVar1;
    ID IVar3;
    undefined8 uVar4;
    undefined8 uVar5;
    undefined8 uVar6;

    if (___isPlatformVersionAtLeast(1, 10, 14, 0) != 0) {
        IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString, "stringWithFormat:", &cf__d, (ulong)param_3);
        uVar4 = _objc_retainAutoreleasedReturnValue(IVar3);
        IVar3 = UNUserNotificationCenter::currentNotificationCenter((ID)&_OBJC_CLASS___UNUserNotificationCenter,
                                                                    "currentNotificationCenter");
        uVar5 = _objc_retainAutoreleasedReturnValue(IVar3);
        IVar3 = NSArray::arrayWithObject_((ID)&_OBJC_CLASS___NSArray, "arrayWithObject:", uVar4);
        uVar6 = _objc_retainAutoreleasedReturnValue(IVar3);
        (*(code*)PTR__objc_msgSend_100ee9e50)(uVar5, "removePendingNotificationRequestsWithIdentifiers:", uVar6);
        puVar1 = PTR__objc_release_100ee9e60;
        (*(code*)PTR__objc_release_100ee9e60)(uVar6);
        (*(code*)puVar1)(uVar5);
        (*(code*)puVar1)(uVar4);
    }
}

// 0x1003adb80, 352 bytes, placed by class name and debug map
// -[OsxNotifications isNotificationScheduled:onSuccess:]
/* Function Stack Size: 28 bytes */

void OsxNotifications::isNotificationScheduled_onSuccess_(ID param_1, SEL param_2, int param_3, ID param_4,
                                                          undefined4 param_5) {
    undefined* puVar1;
    undefined8 uVar3;
    ID IVar4;
    undefined8 uVar5;
    undefined8 uVar6;
    undefined* local_60;
    undefined8 local_58;
    code* local_50;
    undefined* local_48;
    undefined8 local_40;
    undefined8 local_38;

    uVar3 = (*(code*)PTR__objc_retain_100ee9e68)(param_4);
    if (___isPlatformVersionAtLeast(1, 10, 14, 0) != 0) {
        IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString, "stringWithFormat:", &cf__d, (ulong)param_3);
        uVar5 = _objc_retainAutoreleasedReturnValue(IVar4);
        IVar4 = UNUserNotificationCenter::currentNotificationCenter((ID)&_OBJC_CLASS___UNUserNotificationCenter,
                                                                    "currentNotificationCenter");
        uVar6 = _objc_retainAutoreleasedReturnValue(IVar4);
        puVar1 = PTR__objc_retain_100ee9e68;
        local_60 = PTR___NSConcreteStackBlock_100ee4038;
        local_58 = 3254779904;
        local_50 = ___54__OsxNotifications_isNotificationScheduled_onSuccess___block_invoke;
        local_48 = &___block_descriptor_48_ea8_32s40bs_e17_v16__0__NSArray_8l;
        uVar5 = (*(code*)PTR__objc_retain_100ee9e68)(uVar5);
        local_40 = uVar5;
        local_38 = (*(code*)puVar1)(uVar3);
        (*(code*)PTR__objc_msgSend_100ee9e50)(uVar6, "getPendingNotificationRequestsWithCompletionHandler:", &local_60);
        puVar1 = PTR__objc_release_100ee9e60;
        (*(code*)PTR__objc_release_100ee9e60)(local_38);
        (*(code*)puVar1)(local_40);
        (*(code*)puVar1)(uVar6);
        (*(code*)puVar1)(uVar5);
    }
    (*(code*)PTR__objc_release_100ee9e60)(uVar3);
}

@end
