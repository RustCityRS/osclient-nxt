// libs/oldscape/clientlib/auth/AuthLibWrapper.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.clientlib

#include "AuthLibWrapper.h"

namespace jag::oldscape::auth {
    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    AuthLibWrapper::RequestReview();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    AuthLibWrapper::AuthenticateWithJagexWeb();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    AuthLibWrapper::LaunchAccountCreationFlow();

    // 0x100029ea0: the linker folded this into InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    AuthLibWrapper::SupportsGameCenter();

    // 0x100029ea0: the linker folded this into InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    AuthLibWrapper::SupportsSteamLogin();

    // 0x100029ea0: the linker folded this into InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    AuthLibWrapper::SupportsGoogleLogin();

    // 0x100029ea0: the linker folded this into InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    AuthLibWrapper::SupportsJagexWebLogin();

    // 0x100390a30, 32 bytes, placed by class name and debug map
    // AuthLibWrapper::SendLocalNotification(eastl::string const&, eastl::string const&, int, int)
    void AuthLibWrapper::SendLocalNotification(basic_string* param_1, basic_string* param_2, int param_3, int param_4) {
        notifications::SendLocalNotification(param_1, param_2, param_3, param_4);
    }

    // 0x100390a50, 32 bytes, placed by class name and debug map
    // AuthLibWrapper::SendGroupedLocalNotification(eastl::string const&, eastl::string const&, int, int, eastl::string const&, int)
    void AuthLibWrapper::SendGroupedLocalNotification(basic_string* param_1, basic_string* param_2, int param_3,
                                                      int param_4, basic_string* param_5, int param_6) {
        notifications::SendGroupedLocalNotification(param_1, param_2, param_3, param_4, param_5, param_6);
    }

    // 0x100390a70, 16 bytes, placed by class name and debug map
    // AuthLibWrapper::CancelLocalNotification(int)
    void AuthLibWrapper::CancelLocalNotification(int param_1) {
        notifications::CancelLocalNotification(param_1);
    }

    // 0x100390a80, 16 bytes, placed by class name and debug map
    // AuthLibWrapper::IsLocalNotificationScheduledStart(int)
    void AuthLibWrapper::IsLocalNotificationScheduledStart(int param_1) {
        notifications::IsLocalNotificationScheduledStart(param_1);
    }

    // 0x100390a90, 16 bytes, placed by class name and debug map
    // AuthLibWrapper::IsLocalNotificationScheduled(int)
    void AuthLibWrapper::IsLocalNotificationScheduled(int param_1) {
        notifications::IsLocalNotificationScheduled(param_1);
    }

    // 0x100390aa0, 16 bytes, placed by class name and debug map
    // AuthLibWrapper::GetNotificationEnabled()
    undefined8 AuthLibWrapper::GetNotificationEnabled() {
        return 2;
    }

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    AuthLibWrapper::~AuthLibWrapper();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    AuthLibWrapper::~AuthLibWrapper();

} // namespace jag::oldscape::auth
