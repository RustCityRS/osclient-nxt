// libs/hal/system/bootstrap/osx/AppDelegate.mm
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.system.osclient

@interface AppDelegate : NSObject
- (id)applicationShouldTerminateAfterLastWindowClosed:(id)arg1;
- (id)application:(id)arg1 openURLs:(id)arg2;
- (id)getLocalNotificationScheduled;
- (id)setGetLocalNotificationScheduled:(id)arg1;
@end

@implementation AppDelegate

// 0x100009110
char AppDelegate::applicationShouldTerminateAfterLastWindowClosed_(ID param_1, SEL param_2, ID param_3) {
    return '\x01';
}

// 0x100009120
void AppDelegate::application_openURLs_(ID param_1, SEL param_2, ID param_3, ID param_4) {
    unsigned int uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    char* str;
    eastl::string* basic_string;
    unsigned long arg1;
    Array<eastl::string> local_78;
    unsigned long local_60;
    char* local_58;
    char* local_50;
    char* local_48;

    uint8_t* puVar1 = PTR__objc_retain_100ee9e68;
    uint64_t local_40 = (*(void (*)(...))PTR__objc_retain_100ee9e68)(param_3);
    uint64_t local_38 = (*(void (*)(...))puVar1)(param_4);
    if (g_pApp != nullptr) {
        if (g_pApp->IsMouseOver() != '\0') {
            uVar3 = (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(local_38, "count");
            local_60 = (unsigned long)uVar3;
            local_78 = jag::Array<eastl::string>(local_60);
            puVar1 = PTR__objc_release_100ee9e60;
            if (uVar3 != 0) {
                local_58 = "objectAtIndexedSubscript:";
                local_50 = "absoluteString";
                local_48 = "cStringUsingEncoding:";
                arg1 = 0;
                do {
                    uVar4 = (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(local_38, local_58, arg1);
                    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
                    uVar5 = (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(uVar4, local_50);
                    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
                    uVar5 = _objc_retainAutorelease(uVar5);
                    str = (char*)(*(void (*)(...))PTR__objc_msgSend_100ee9e50)(uVar5, local_48, 4);
                    basic_string = &local_78[arg1];
                    eastl::string::assign(basic_string, str);
                    (*(void (*)(...))puVar1)(uVar5);
                    (*(void (*)(...))puVar1)(uVar4);
                    arg1 = arg1 + 1;
                } while (local_60 != arg1);
            }
            (**(void (**)(...))(*(long*)g_pApp + 168))(g_pApp, &local_78);
        }
    }
    puVar1 = PTR__objc_release_100ee9e60;
    (*(void (*)(...))PTR__objc_release_100ee9e60)(local_38);
    (*(void (*)(...))puVar1)(local_40);
}

// 0x1000093c0
int AppDelegate::getLocalNotificationScheduled(ID param_1, SEL param_2) {
    return *(int*)(param_1 + _getLocalNotificationScheduled);
}

// 0x1000093d0
void AppDelegate::setGetLocalNotificationScheduled_(ID param_1, SEL param_2, int param_3) {
    *(int*)(param_1 + _getLocalNotificationScheduled) = param_3;
}

@end
