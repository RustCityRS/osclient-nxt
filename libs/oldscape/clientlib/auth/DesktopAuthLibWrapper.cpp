// libs/oldscape/clientlib/auth/DesktopAuthLibWrapper.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.clientlib

#include "DesktopAuthLibWrapper.h"

namespace jag::oldscape::auth {
    // 0x100009e70: DesktopAuthLibWrapper::RequestOAuth2Tokens(eastl::string const&, eastl::string const&, eastl::string const&, eastl::string const&) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: DesktopAuthLibWrapper::InvalidateRefreshToken() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: DesktopAuthLibWrapper::AuthenticateWithGameCenter() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: DesktopAuthLibWrapper::AuthenticateWithGooglePlay() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100029ea0: DesktopAuthLibWrapper::SupportsSteamLogin() has the same machine code as InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: DesktopAuthLibWrapper::IsTwoFactorAuthEnabled() has the same machine code as InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100390ab0
    void DesktopAuthLibWrapper::AuthenticateWithFederated(jag::auth::AuthAccountHint authAccountHint,
                                                          jag::auth::SocialLoginPartners socialLoginPartners) {}

    // 0x100390ac0
    void DesktopAuthLibWrapper::SetOAuth2Credentials(const eastl::string& str1, const eastl::string& str2,
                                                     unsigned long long arg3) {
        jag::auth::SetOAuth2Credentials(str1, str2, arg3);
    }

    // 0x100390ae0
    void DesktopAuthLibWrapper::SetGameSessionCredentials(const eastl::string& str1, const eastl::string& str2) {
        jag::auth::SetGameSessionCredentials(str1, str2);
    }

    // 0x100390b00
    void DesktopAuthLibWrapper::IsRefreshTokenAvailable() {
        jag::auth::IsUserAuthenticated();
    }

    // 0x100390b10
    uint8_t DesktopAuthLibWrapper::RequestGameToken() {

        eastl::string local_70("");
        GameToken local_50(local_70, 4294967293);
        *field_192 = local_50;
        local_50.destruct<eastl::pair<eastl::string, option::IOption*>>();
        jag::auth::RequestGameToken();
        return 1;
    }

    // 0x100390bf0
    void DesktopAuthLibWrapper::MainLogic() {
        jag::auth::MainLogic();
    }

    // 0x100390c00
    uint8_t* DesktopAuthLibWrapper::GetGameToken() {
        AuthSDKTokenResponse authSDKTokenResponse;
        ReturnValue local_68;
        GameToken local_48;

        uint8_t* this_01 = field_192;
        if (this_01->GetStatus() == -3) {
            authSDKTokenResponse = jag::auth::GetResultCode();
            if (authSDKTokenResponse != 4294967294) {
                (logger::default_logger())
                    ->Log(false, 8,
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                          "auth/DesktopAuthLibWrapper.cpp",
                          50, "Game token login result: %i ", authSDKTokenResponse);
                local_68 = jag::auth::GetToken();
                local_48 = GameToken(local_68, authSDKTokenResponse);
                *this_01 = local_48;
                local_48.destruct<eastl::pair<eastl::string, option::IOption*>>();
            }
        }
        return this_01;
    }

    // 0x100390cd0
    uint64_t DesktopAuthLibWrapper::GetTokenAuthLoginState() const {
        return 20;
    }

    // 0x100390ce0
    uint64_t DesktopAuthLibWrapper::ShowFederatedShop(jag::auth::SocialLoginPartners socialLoginPartners,
                                                      const eastl::string& str) {
        if (socialLoginPartners != 10) {
            LogAssert("partner == jag::auth::SocialLoginPartners::STEAM",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                      "DesktopAuthLibWrapper.cpp",
                      69, nullptr);
        }
        return 0;
    }

} // namespace jag::oldscape::auth
