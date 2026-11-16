// libs/oldscape/clientlib/auth/DesktopAuthLibWrapper.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.clientlib

#include "DesktopAuthLibWrapper.h"

namespace jag::oldscape::auth {
    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    DesktopAuthLibWrapper::RequestOAuth2Tokens(eastl::string const&, eastl::string const&, eastl::string const&,
                                               eastl::string const&);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    DesktopAuthLibWrapper::InvalidateRefreshToken();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    DesktopAuthLibWrapper::AuthenticateWithGameCenter();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    DesktopAuthLibWrapper::AuthenticateWithGooglePlay();

    // 0x100029ea0: the linker folded this into InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    DesktopAuthLibWrapper::SupportsSteamLogin();

    // 0x100029ea0: the linker folded this into InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    DesktopAuthLibWrapper::IsTwoFactorAuthEnabled();

    // 0x100390ab0, 16 bytes, placed by class name and debug map
    // DesktopAuthLibWrapper::AuthenticateWithFederated(jag::auth::AuthAccountHint, jag::auth::SocialLoginPartners)
    void DesktopAuthLibWrapper::AuthenticateWithFederated() {}

    // 0x100390ac0, 32 bytes, placed by class name and debug map
    // DesktopAuthLibWrapper::SetOAuth2Credentials(eastl::string const&, eastl::string const&, unsigned long long)
    void DesktopAuthLibWrapper::SetOAuth2Credentials(basic_string* param_1, basic_string* param_2, ulonglong param_3) {
        jag::auth::SetOAuth2Credentials(param_1, param_2, param_3);
    }

    // 0x100390ae0, 32 bytes, placed by class name and debug map
    // DesktopAuthLibWrapper::SetGameSessionCredentials(eastl::string const&, eastl::string const&)
    void DesktopAuthLibWrapper::SetGameSessionCredentials(basic_string* param_1, basic_string* param_2) {
        jag::auth::SetGameSessionCredentials(param_1, param_2);
    }

    // 0x100390b00, 16 bytes, placed by class name and debug map
    // DesktopAuthLibWrapper::IsRefreshTokenAvailable()
    void DesktopAuthLibWrapper::IsRefreshTokenAvailable() {
        jag::auth::IsUserAuthenticated();
    }

    // 0x100390b10, 176 bytes, placed by class name and debug map
    // DesktopAuthLibWrapper::RequestGameToken()
    undefined1 DesktopAuthLibWrapper::RequestGameToken() {
        eastl::string local_70[32];
        GameToken local_50;
        allocator local_28[8];

        eastl::allocator::allocator(local_28, "EASTL basic_string");
        eastl::string::basic_string(local_70, "", local_28);
        new (&local_50) GameToken(local_70, 4294967293);
        GameToken::operator=((GameToken*)field_192, &local_50);
        eastl::destruct<eastl::pair<eastl::string, option::IOption*>>((eastl*)&local_50, (pair*)&local_50);
        eastl::string::~basic_string(local_70);
        jag::auth::RequestGameToken();
        return 1;
    }

    // 0x100390bf0, 16 bytes, placed by class name and debug map
    // DesktopAuthLibWrapper::MainLogic()
    void DesktopAuthLibWrapper::MainLogic() {
        jag::auth::MainLogic();
    }

    // 0x100390c00, 208 bytes, placed by class name and debug map
    // DesktopAuthLibWrapper::GetGameToken()
    undefined1* DesktopAuthLibWrapper::GetGameToken() {
        int iVar1;
        undefined8 uVar2;
        undefined1* this_00;
        auth local_68[32];
        GameToken local_48;

        this_00 = field_192;
        iVar1 = this_00->GetStatus();
        if (iVar1 == -3) {
            iVar1 = jag::auth::GetResultCode();
            if (iVar1 != -2) {
                uVar2 = logger::default_logger();
                logger::Logger::Log(uVar2, 0, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                    "clientlib/auth/DesktopAuthLibWrapper.cpp",
                                    50, "Game token login result: %i ", iVar1);
                local_68->GetToken();
                new (&local_48) GameToken(local_68, iVar1);
                GameToken::operator=((GameToken*)this_00, &local_48);
                eastl::destruct<eastl::pair<eastl::string, option::IOption*>>((eastl*)&local_48, (pair*)&local_48);
                local_68->~basic_string();
            }
        }
        return this_00;
    }

    // 0x100390cd0, 16 bytes, placed by class name and debug map
    // DesktopAuthLibWrapper::GetTokenAuthLoginState() const
    undefined8 DesktopAuthLibWrapper::GetTokenAuthLoginState() {
        return 20;
    }

    // 0x100390ce0, 48 bytes, placed by class name and debug map
    // DesktopAuthLibWrapper::ShowFederatedShop(jag::auth::SocialLoginPartners, eastl::string const&)
    undefined8 DesktopAuthLibWrapper::ShowFederatedShop(undefined8 param_1, int param_2) {
        if (param_2 != 10) {
            /* WARNING: Subroutine does not return */
            LogAssert("partner == jag::auth::SocialLoginPartners::STEAM",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                      "DesktopAuthLibWrapper.cpp",
                      69, (char*)0);
        }
        return 0;
    }

} // namespace jag::oldscape::auth
