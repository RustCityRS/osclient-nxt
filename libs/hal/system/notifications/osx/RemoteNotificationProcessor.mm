// libs/hal/system/notifications/osx/RemoteNotificationProcessor.mm
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.system.notifications

// 0x100ce8ac0, 10 bytes, inline, placed by debug map only (low confidence)
// __clang_at_available_requires_core_foundation_framework
void ___clang_at_available_requires_core_foundation_framework() {
    code* pcVar1;

    _CFBundleGetVersionNumber(0);
    /* WARNING: Does not return */
    pcVar1 = (code*)invalidInstructionException();
    (*pcVar1)();
}

@interface RemoteNotificationProcessor : NSObject
- (id)receivedRemoteNotification:(id)arg1;
@end

@implementation RemoteNotificationProcessor

// 0x1003adf80, 16 bytes, placed by class name and debug map
// -[RemoteNotificationProcessor receivedRemoteNotification:]
/* Function Stack Size: 24 bytes */

void RemoteNotificationProcessor::receivedRemoteNotification_(ID param_1, SEL param_2, ID param_3) {}

@end
