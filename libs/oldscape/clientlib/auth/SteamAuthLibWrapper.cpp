// libs/oldscape/clientlib/auth/SteamAuthLibWrapper.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.clientlib

#include "SteamAuthLibWrapper.h"

namespace jag::oldscape::auth {
    // 0x100009e70: SteamAuthLibWrapper::RequestOAuth2Tokens(eastl::string const&, eastl::string const&, eastl::string const&, eastl::string const&) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: SteamAuthLibWrapper::InvalidateRefreshToken() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: SteamAuthLibWrapper::AuthenticateWithGameCenter() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: SteamAuthLibWrapper::AuthenticateWithGooglePlay() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100029ea0: SteamAuthLibWrapper::RequestGameToken() has the same machine code as InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: SteamAuthLibWrapper::IsRefreshTokenAvailable() has the same machine code as InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x10002d860: SteamAuthLibWrapper::SupportsSteamLogin() has the same machine code as option::Option<int>::IsValidValue(int const&) const

    // 0x100390d10
    void SteamAuthLibWrapper::AuthenticateWithFederated(jag::auth::AuthAccountHint authAccountHint,
                                                        jag::auth::SocialLoginPartners socialLoginPartners) {
        Logger* pLVar3;
        uint64_t extraout_var;

        if (socialLoginPartners != 10) {
            pLVar3 = logger::default_logger();
            pLVar3->Log(false, 3,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                        "SteamAuthLibWrapper.cpp",
                        15, "SteamAuthLibWrapper is only capable of logging in with Steam, was given %i",
                        socialLoginPartners);
        }
        uint8_t uVar1 = GetTokenAuthLoginState();
        TokenAuthLoginState tokenAuthLoginState = (TokenAuthLoginState)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1);
        if ((jag::auth::TokenAuthLoginHandler::IsFinished(tokenAuthLoginState) == '\0') && (tokenAuthLoginState != 0)) {
            pLVar3 = logger::default_logger();
            pLVar3->Log(false, 3,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                        "SteamAuthLibWrapper.cpp",
                        19,
                        "SteamAuthLibWrapper login was interrupted by another incoming request! First request will "
                        "never complete.");
        }
        auto local_38 =
            std::make_unique<jag::auth::TokenAuthLoginHandler, std::unique_ptr<Steam>&, eastl::string&, int>(
                *field_176, field_8, 0);
        field_184 = &local_38;
        ((TokenAuthLoginHandler*)field_184.operator->())->Init(authAccountHint, 10);
    }

    // 0x100390ed0
    void SteamAuthLibWrapper::MainLogic() {
        TokenAuthLoginState tokenAuthLoginState;
        TokenAuthLoginHandler* pTVar4;
        void* in_RSI;
        uint8_t* this_02;
        ReturnValue local_68;
        GameToken local_48;

        uint8_t* tokenAuthLoginHandler = &field_184;
        if (tokenAuthLoginHandler != in_RSI) {
            pTVar4 = (TokenAuthLoginHandler*)(*tokenAuthLoginHandler).operator->();
            pTVar4->MainLogic();
            this_02 = m_gameToken;
            if (this_02->GetStatus() == -2) {
                tokenAuthLoginState = ((CoordMapSquare*)(*tokenAuthLoginHandler).operator->())->GetX();
                if (jag::auth::TokenAuthLoginHandler::IsFinished(tokenAuthLoginState) != '\0') {
                    switch (tokenAuthLoginState) {
                    case 20:
                        pTVar4 = (TokenAuthLoginHandler*)(*tokenAuthLoginHandler).operator->();
                        local_68 = pTVar4->GetToken();
                        local_48 = GameToken(local_68, 0);
                        *this_02 = local_48;
                        local_48.destruct<eastl::pair<eastl::string, option::IOption*>>();
                        break;
                    case 21:
                    case 22:
                        this_02->Reset(1401);
                        break;
                    case 23:
                    case 24:
                    case 25:
                    case 26:
                        this_02->Reset(4294967295);
                        break;
                    default:
                        (logger::default_logger())
                            ->Log(false, 3,
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                  "clientlib/auth/SteamAuthLibWrapper.cpp",
                                  65, "Unknown TokenAuthLoginState: %i", tokenAuthLoginState);
                    }
                }
            }
        }
    }

    // 0x1003910e0
    uint64_t SteamAuthLibWrapper::GetTokenAuthLoginState() const {
        void* in_RSI;

        bool bVar1 = &field_184 == in_RSI;
        uint64_t uVar3 = 0;
        if (!bVar1) {
            if (m_gameToken->GetStatus() == 0) {
                uVar3 = 20;
            } else {
                uVar3 = ((CoordMapSquare*)field_184.operator->())->GetX();
            }
        }
        return uVar3;
    }

    // 0x100391140
    unsigned long SteamAuthLibWrapper::ShowFederatedShop(jag::auth::SocialLoginPartners socialLoginPartners,
                                                         const eastl::string& str) {
        ApplicationContext* pAVar1;
        Logger* pLVar4;
        uint64_t uVar5;
        eastl::string* str_00;
        Filename* pFVar6;
        unsigned long uVar7;
        char* pcVar8;
        uint64_t in_stack_fffffffffffffe58;
        eastl::string local_1a0;
        uint8_t local_180[40];
        Filename local_158;

        uint32_t uVar9 = (uint32_t)((unsigned long)in_stack_fffffffffffffe58 >> 32);
        if (socialLoginPartners != 10) {
            pLVar4 = logger::default_logger();
            pLVar4->Log(false, 3,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                        "SteamAuthLibWrapper.cpp",
                        92, "SteamAuthLibWrapper is only capable of logging in with Steam, was given %i",
                        (((uint64_t)uVar9 << 32) | (uint32_t)socialLoginPartners));
        }
        if (m_gameToken->GetStatus() == 0) {
            local_158 = Filename(&field_72);
            new (local_180) eastl::string();
            if (str.empty() == '\0') {
                pcVar8 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            } else {
                pcVar8 = "store/runescape/membership";
            }
            m_gameToken->SSOBeginPtr();
            uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            str_00 = (eastl::string*)local_180->sprintf("%s?steamMode=oldschool&otlToken=%s", pcVar8, uVar5);
            local_1a0 = eastl::string(*str_00);
            local_158 /= &local_1a0;
            pLVar4 = logger::default_logger();
            pcVar8 = local_158.GetName();
            pLVar4->Log(false, 5,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                        "SteamAuthLibWrapper.cpp",
                        107, "Showing Steam Shop: URL %s", pcVar8);
            pAVar1 = field_144;
            pcVar8 = local_158.GetName();
            new ((local_180 + 32)) eastl::allocator("EASTL basic_string");
            new (local_180) eastl::string(pcVar8, (local_180 + 32));
            pFVar6 = (*pAVar1->_vptr[1].GetHomeDirectory)((Filename*)pAVar1, (ApplicationContext*)local_180);
            uVar7 = (unsigned long)pFVar6 & 4294967295;
            ClearTokenAuthLogin();
        } else {
            pLVar4 = logger::default_logger();
            uVar7 = 0;
            pLVar4->Log(false, 3,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                        "SteamAuthLibWrapper.cpp",
                        96, "Attempted to show steam shop, but we had not successfully gotten an OTL code!");
        }
        return uVar7;
    }

    // 0x100395470: SteamAuthLibWrapper::CreateGameTokenFromResult(eastl::string const&, jag::auth::AuthSDKTokenResponse) has the same machine code as DesktopAuthLibWrapper::CreateGameTokenFromResult(eastl::string const&, jag::auth::AuthSDKTokenResponse)

} // namespace jag::oldscape::auth
