// libs/hal/system/bootstrap/osx/main.mm
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.system.osclient

// 0x100009450
void _RunMainBootstrap(void) {
    jag::LogAssertAlways(
        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/bootstrap/osx/main.mm", 27,
        nullptr);
}

// 0x100009750
void entry(int param_1, char** param_2) {
    jag::callstack::g_mainPtr = entry;
    jag::this_thread::SetThreadName("OS Main");
    SystemInitParams local_68(param_1, param_2);
    g_initParams = local_68;
    _objc_autoreleasePoolPush();
    uint8_t* puVar1 = PTR__objc_msgSend_100ee9e50;
    auto IVar2 = NSApplication::sharedApplication((ID)&_OBJC_CLASS___NSApplication, "sharedApplication");
    uint64_t uVar3 = _objc_retainAutoreleasedReturnValue(IVar2);
    uint64_t uVar4 = (*(void (*)(...))puVar1)(&objc::class_t::AppDelegate, "alloc");
    (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(uVar3, "setDelegate:", uVar4);
    uVar4 = (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(&objc::class_t::AppMonitor, "alloc");
    IVar2 = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter, "defaultCenter");
    uint64_t uVar5 = _objc_retainAutoreleasedReturnValue(IVar2);
    char* thread = "addObserver:selector:name:object:";
    (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(
        uVar5, "addObserver:selector:name:object:", uVar4,
        "applicationWillTerminate:", *(uint64_t*)PTR__NSApplicationWillTerminateNotification_100ee4010, 0);
    (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar5);
    std::make_unique<std::thread, void (&)()>(&local_68);
    local_68 = *thread;
    (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(uVar3, "run");
    jag::LogAssertAlways(
        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/bootstrap/osx/main.mm", 127,
        nullptr);
}

@interface AppMonitor : NSObject
- (id)applicationWillTerminate:(id)arg1;
@end

@implementation AppMonitor

// 0x100009490
void AppMonitor::applicationWillTerminate_(ID param_1, SEL param_2, ID param_3) {
    function<void_(jag::BaseApp*), _128ul, _16ul, _(jag::fixedfunction::Methods) 0> local_c8[168];

    (*(void (*)(...))PTR__objc_retain_100ee9e68)();
    BaseApp* baseApp = g_pApp;
    if (g_pApp != nullptr) {
        __ZN3jag13fixedfunction8functionIFvPNS_7BaseAppEELm128ELm16ELNS0_7MethodsE0EEC1IZ39__AppMonitor_applicationWillTerminate__E3__0vEEOT_(
            local_c8);
        baseApp->QueueMainThreadEvent(*local_c8);
        param_3 = (ID)local_c8;
        param_3->~function();
    }
    if (param_3->operator_cast_to_bool()) {
        (*param_3).operator->();
        std::thread::join();
    }
    _exit(g_exitCode);
}

@end
