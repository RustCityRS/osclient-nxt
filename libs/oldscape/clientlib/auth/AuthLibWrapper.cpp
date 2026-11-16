// libs/oldscape/clientlib/auth/AuthLibWrapper.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.clientlib

#include "AuthLibWrapper.h"

namespace jag::oldscape::auth {
    // 0x100009e70: AuthLibWrapper::RequestReview() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: AuthLibWrapper::AuthenticateWithJagexWeb() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: AuthLibWrapper::LaunchAccountCreationFlow() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100029ea0: AuthLibWrapper::SupportsGameCenter() has the same machine code as InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: AuthLibWrapper::SupportsSteamLogin() has the same machine code as InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: AuthLibWrapper::SupportsGoogleLogin() has the same machine code as InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: AuthLibWrapper::SupportsJagexWebLogin() has the same machine code as InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100390a30
    void AuthLibWrapper::SendLocalNotification(const eastl::string& str1, const eastl::string& str2, int arg3,
                                               int arg4) {
        notifications::SendLocalNotification(str1, str2, arg3, arg4);
    }

    // 0x100390a50
    void AuthLibWrapper::SendGroupedLocalNotification(const eastl::string& str1, const eastl::string& str2, int arg3,
                                                      int arg4, const eastl::string& str3, int arg6) {
        notifications::SendGroupedLocalNotification(str1, str2, arg3, arg4, str3, arg6);
    }

    // 0x100390a70
    void AuthLibWrapper::CancelLocalNotification(int arg1) {
        notifications::CancelLocalNotification(arg1);
    }

    // 0x100390a80
    void AuthLibWrapper::IsLocalNotificationScheduledStart(int arg1) {
        notifications::IsLocalNotificationScheduledStart(arg1);
    }

    // 0x100390a90
    void AuthLibWrapper::IsLocalNotificationScheduled(int arg1) {
        notifications::IsLocalNotificationScheduled(arg1);
    }

    // 0x100390aa0
    uint64_t AuthLibWrapper::GetNotificationEnabled() {
        return 2;
    }

    // 0x100c92b50: AuthLibWrapper::~AuthLibWrapper() has the same machine code as InlineFatalBreak()

} // namespace jag::oldscape::auth
