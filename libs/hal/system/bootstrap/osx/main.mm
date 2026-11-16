// libs/hal/system/bootstrap/osx/main.mm
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.system.osclient

// 0x100009450, 64 bytes, placed by debug map only (low confidence)
// RunMainBootstrap
void _RunMainBootstrap() {
    /* WARNING: Subroutine does not return */
    jag::LogAssertAlways(
        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/bootstrap/osx/main.mm", 27,
        (char*)0);
}

// 0x100009750, 496 bytes, placed by __FILE__ string
// main
void entry(int param_1, char** param_2) {
    undefined* puVar1;
    ID IVar2;
    undefined8 uVar3;
    undefined8 uVar4;
    undefined8 uVar5;
    char* pcVar6;
    SystemInitParams local_68;

    jag::callstack::g_mainPtr = entry;
    jag::this_thread::SetThreadName("OS Main");
    new (&local_68) jag::SystemInitParams(param_1, param_2);
    jag::SystemInitParams::operator=((SystemInitParams*)&_g_initParams, &local_68);
    local_68.~SystemInitParams();
    _objc_autoreleasePoolPush();
    puVar1 = PTR__objc_msgSend_100ee9e50;
    IVar2 = NSApplication::sharedApplication((ID)&_OBJC_CLASS___NSApplication, "sharedApplication");
    uVar3 = _objc_retainAutoreleasedReturnValue(IVar2);
    uVar4 = (*(code*)puVar1)(&objc::class_t::AppDelegate, "alloc");
    (*(code*)PTR__objc_msgSend_100ee9e50)(uVar3, "setDelegate:", uVar4);
    uVar4 = (*(code*)PTR__objc_msgSend_100ee9e50)(&objc::class_t::AppMonitor, "alloc");
    IVar2 = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter, "defaultCenter");
    uVar5 = _objc_retainAutoreleasedReturnValue(IVar2);
    pcVar6 = "addObserver:selector:name:object:";
    (*(code*)PTR__objc_msgSend_100ee9e50)(
        uVar5, "addObserver:selector:name:object:", uVar4,
        "applicationWillTerminate:", *(undefined8*)PTR__NSApplicationWillTerminateNotification_100ee4010, 0);
    (*(code*)PTR__objc_release_100ee9e60)(uVar5);
    std::make_unique<std::thread, void (&)()>((_func_void*)&local_68);
    std::unique_ptr<std::thread, std::default_delete<std::thread>>::operator=(
        (unique_ptr<std::thread, std::default_delete<std::thread>>*)&local_68, (unique_ptr*)pcVar6);
    local_68.~unique_ptr();
    (*(code*)PTR__objc_msgSend_100ee9e50)(uVar3, "run");
    /* WARNING: Subroutine does not return */
    jag::LogAssertAlways(
        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/bootstrap/osx/main.mm", 127,
        (char*)0);
}

@interface AppMonitor : NSObject
- (id)applicationWillTerminate:(id)arg1;
@end

@implementation AppMonitor

// 0x100009490, 160 bytes, placed by debug map only (low confidence)
// -[AppMonitor applicationWillTerminate:]
/* Function Stack Size: 24 bytes */

void AppMonitor::applicationWillTerminate_(ID param_1, SEL param_2, ID param_3) {
    BaseApp* this;
    function local_c8;

    (*(code*)PTR__objc_retain_100ee9e68)();
    this = _g_pApp;
    if (_g_pApp != (BaseApp*)0) {
        __ZN3jag13fixedfunction8functionIFvPNS_7BaseAppEELm128ELm16ELNS0_7MethodsE0EEC1IZ39__AppMonitor_applicationWillTerminate__E3__0vEEOT_(
            &local_c8);
        QueueMainThreadEvent(&local_c8);
        param_3 = (ID)&local_c8;
        jag::fixedfunction::function<void(jag::render::RenderContext&), 128ul, 16ul, (jag::fixedfunction::Methods)0>::
            ~function(
                (function<void(jag::render::RenderContext&), 128ul, 16ul, (jag::fixedfunction::Methods)0>*)param_3);
    }
    if (param_3->operator_cast_to_bool()) {
        std::unique_ptr<std::thread, std::default_delete<std::thread>>::operator->(
            (unique_ptr<std::thread, std::default_delete<std::thread>>*)param_3);
        std::thread::join();
    }
    /* WARNING: Subroutine does not return */
    _exit(_g_exitCode);
}

@end
