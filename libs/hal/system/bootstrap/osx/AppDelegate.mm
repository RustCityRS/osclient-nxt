// libs/hal/system/bootstrap/osx/AppDelegate.mm
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.system.osclient

@interface AppDelegate : NSObject
- (id)applicationShouldTerminateAfterLastWindowClosed:(id)arg1;
- (id)application:(id)arg1 openURLs:(id)arg2;
- (id)getLocalNotificationScheduled;
- (id)setGetLocalNotificationScheduled:(id)arg1;
@end

@implementation AppDelegate

// 0x100009110, 16 bytes, placed by class name and debug map
// -[AppDelegate applicationShouldTerminateAfterLastWindowClosed:]
/* Function Stack Size: 24 bytes */

char AppDelegate::applicationShouldTerminateAfterLastWindowClosed_(ID param_1, SEL param_2, ID param_3) {
    return '\x01';
}

// 0x100009120, 448 bytes, placed by class name and debug map
// -[AppDelegate application:openURLs:]
/* Function Stack Size: 32 bytes */

void AppDelegate::application_openURLs_(ID param_1, SEL param_2, ID param_3, ID param_4) {
    undefined* puVar1;
    uint uVar3;
    undefined8 uVar4;
    undefined8 uVar5;
    char* pcVar6;
    eastl::string* this;
    ulong uVar7;
    Array<eastl::string, eastl::allocator> local_78[24];
    ulong local_60;
    char* local_58;
    char* local_50;
    char* local_48;
    undefined8 local_40;
    undefined8 local_38;

    puVar1 = PTR__objc_retain_100ee9e68;
    local_40 = (*(code*)PTR__objc_retain_100ee9e68)(param_3);
    local_38 = (*(code*)puVar1)(param_4);
    if (_g_pApp != (ButtonElement*)0) {
        if (_g_pApp->IsMouseOver() != '\0') {
            uVar3 = (*(code*)PTR__objc_msgSend_100ee9e50)(local_38, "count");
            local_60 = (ulong)uVar3;
            jag::Array<eastl::string, eastl::allocator>::Array(local_78, local_60);
            puVar1 = PTR__objc_release_100ee9e60;
            if (uVar3 != 0) {
                local_58 = "objectAtIndexedSubscript:";
                local_50 = "absoluteString";
                local_48 = "cStringUsingEncoding:";
                uVar7 = 0;
                do {
                    uVar4 = (*(code*)PTR__objc_msgSend_100ee9e50)(local_38, local_58, uVar7);
                    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
                    uVar5 = (*(code*)PTR__objc_msgSend_100ee9e50)(uVar4, local_50);
                    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
                    uVar5 = _objc_retainAutorelease(uVar5);
                    pcVar6 = (char*)(*(code*)PTR__objc_msgSend_100ee9e50)(uVar5, local_48, 4);
                    this = (eastl::string*)jag::Array<eastl::string, eastl::allocator>::operator[](local_78, uVar7);
                    eastl::string::assign(this, pcVar6);
                    (*(code*)puVar1)(uVar5);
                    (*(code*)puVar1)(uVar4);
                    uVar7 = uVar7 + 1;
                } while (local_60 != uVar7);
            }
            (**(code**)(*(long*)_g_pApp + 168))(_g_pApp, local_78);
            local_78->~Array();
        }
    }
    puVar1 = PTR__objc_release_100ee9e60;
    (*(code*)PTR__objc_release_100ee9e60)(local_38);
    (*(code*)puVar1)(local_40);
}

// 0x1000093c0, 16 bytes, placed by class name
// -[AppDelegate getLocalNotificationScheduled]
/* Function Stack Size: 16 bytes */

int AppDelegate::getLocalNotificationScheduled(ID param_1, SEL param_2) {
    return *(int*)(param_1 + _getLocalNotificationScheduled);
}

// 0x1000093d0, 16 bytes, placed by class name
// -[AppDelegate setGetLocalNotificationScheduled:]
/* Function Stack Size: 20 bytes */

void AppDelegate::setGetLocalNotificationScheduled_(ID param_1, SEL param_2, int param_3) {
    *(int*)(param_1 + _getLocalNotificationScheduled) = param_3;
}

@end
