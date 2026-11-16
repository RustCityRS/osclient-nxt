// libs/hal/system/notifications/osx/RemoteNotificationProcessor.mm
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.system.notifications

// 0x100ce8ac0
void ___clang_at_available_requires_core_foundation_framework(void) {
    _CFBundleGetVersionNumber(0);
    void* pcVar1 = (void (*)(...))invalidInstructionException();
    (*pcVar1)();
}

@interface RemoteNotificationProcessor : NSObject
- (id)receivedRemoteNotification:(id)arg1;
@end

@implementation RemoteNotificationProcessor

// 0x1003adf80
void RemoteNotificationProcessor::receivedRemoteNotification_(ID param_1, SEL param_2, ID param_3) {}

@end
