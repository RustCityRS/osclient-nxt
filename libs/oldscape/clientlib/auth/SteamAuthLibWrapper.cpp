// libs/oldscape/clientlib/auth/SteamAuthLibWrapper.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.clientlib

#include "SteamAuthLibWrapper.h"

namespace jag::oldscape::auth {
    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    SteamAuthLibWrapper::RequestOAuth2Tokens(eastl::string const&, eastl::string const&, eastl::string const&,
                                             eastl::string const&);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    SteamAuthLibWrapper::InvalidateRefreshToken();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    SteamAuthLibWrapper::AuthenticateWithGameCenter();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    SteamAuthLibWrapper::AuthenticateWithGooglePlay();

    // 0x100029ea0: the linker folded this into InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    SteamAuthLibWrapper::RequestGameToken();

    // 0x100029ea0: the linker folded this into InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    SteamAuthLibWrapper::IsRefreshTokenAvailable();

    // 0x10002d860: the linker folded this into option::Option<int>::IsValidValue(int const&) const, which has identical code
    SteamAuthLibWrapper::SupportsSteamLogin();

    // 0x100390d10, 256 bytes, placed by class name and debug map
    // SteamAuthLibWrapper::AuthenticateWithFederated(jag::auth::AuthAccountHint, jag::auth::SocialLoginPartners)
    void SteamAuthLibWrapper::AuthenticateWithFederated(undefined4 param_2, int param_3) {
        int iVar2;
        undefined8 uVar3;
        TokenAuthLoginHandler* pTVar4;
        unique_ptr local_38[12];
        undefined4 local_2c;

        if (param_3 != 10) {
            uVar3 = logger::default_logger();
            logger::Logger::Log(uVar3, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                "clientlib/auth/SteamAuthLibWrapper.cpp",
                                15, "SteamAuthLibWrapper is only capable of logging in with Steam, was given %i",
                                param_3);
        }
        iVar2 = (*(code*)field_0[64])(this);
        if ((jag::auth::TokenAuthLoginHandler::IsFinished(iVar2) == '\0') && (iVar2 != 0)) {
            uVar3 = logger::default_logger();
            logger::Logger::Log(uVar3, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                "clientlib/auth/SteamAuthLibWrapper.cpp",
                                19,
                                "SteamAuthLibWrapper login was interrupted by another incoming request! First request "
                                "will never complete.");
        }
        local_2c = 0;
        std::make_unique<jag::auth::TokenAuthLoginHandler, std::unique_ptr<Steam, std::default_delete<Steam>>&,
                         eastl::string&, int>(local_38, (basic_string*)field_176, &field_8);
        std::unique_ptr<jag::auth::TokenAuthLoginHandler, std::default_delete<jag::auth::TokenAuthLoginHandler>>::
        operator=((unique_ptr<jag::auth::TokenAuthLoginHandler,
                              std::default_delete<jag::auth::TokenAuthLoginHandler>>*)&field_184,
                  local_38);
        local_38->~unique_ptr();
        pTVar4 = (TokenAuthLoginHandler*)std::unique_ptr<jag::auth::TokenAuthLoginHandler,
                                                         std::default_delete<jag::auth::TokenAuthLoginHandler>>::
                 operator->((unique_ptr<jag::auth::TokenAuthLoginHandler,
                                        std::default_delete<jag::auth::TokenAuthLoginHandler>>*)&field_184);
        pTVar4->Init(param_2, 10);
    }

    // 0x100390ed0, 368 bytes, placed by class name and debug map
    // SteamAuthLibWrapper::MainLogic()
    void SteamAuthLibWrapper::MainLogic() {
        undefined1* this_00;
        undefined4 uVar4;
        TokenAuthLoginHandler* this_01;
        CoordMapSquare* this_02;
        undefined8 uVar5;
        _func_decltype_nullptr* in_RSI;
        undefined1* this_03;
        eastl::string local_68[32];
        GameToken local_48;

        this_00 = &field_184;
        if (std::operator!=((unique_ptr*)this_00, in_RSI)) {
            this_01 = (TokenAuthLoginHandler*)std::unique_ptr<jag::auth::TokenAuthLoginHandler,
                                                              std::default_delete<jag::auth::TokenAuthLoginHandler>>::
                      operator->((unique_ptr<jag::auth::TokenAuthLoginHandler,
                                             std::default_delete<jag::auth::TokenAuthLoginHandler>>*)this_00);
            this_01->MainLogic();
            this_03 = m_gameToken;
            if (this_03->GetStatus() == -2) {
                this_02 = (CoordMapSquare*)std::unique_ptr<jag::auth::TokenAuthLoginHandler,
                                                           std::default_delete<jag::auth::TokenAuthLoginHandler>>::
                          operator->((unique_ptr<jag::auth::TokenAuthLoginHandler,
                                                 std::default_delete<jag::auth::TokenAuthLoginHandler>>*)this_00);
                uVar4 = this_02->GetX();
                if (jag::auth::TokenAuthLoginHandler::IsFinished(uVar4) != '\0') {
                    switch (uVar4) {
                    case 20:
                        std::unique_ptr<jag::auth::TokenAuthLoginHandler,
                                        std::default_delete<jag::auth::TokenAuthLoginHandler>>::
                        operator->((unique_ptr<jag::auth::TokenAuthLoginHandler,
                                               std::default_delete<jag::auth::TokenAuthLoginHandler>>*)this_00);
                        local_68->GetToken();
                        new (&local_48) GameToken(local_68, 0);
                        GameToken::operator=((GameToken*)this_03, &local_48);
                        eastl::destruct<eastl::pair<eastl::string, option::IOption*>>((eastl*)&local_48,
                                                                                      (pair*)&local_48);
                        eastl::string::~basic_string(local_68);
                        break;
                    case 21:
                    case 22:
                        this_03->Reset(1401);
                        break;
                    case 23:
                    case 24:
                    case 25:
                    case 26:
                        this_03->Reset(4294967295);
                        break;
                    default:
                        uVar5 = logger::default_logger();
                        logger::Logger::Log(uVar5, 0, 3,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "oldscape/clientlib/auth/SteamAuthLibWrapper.cpp",
                                            65, "Unknown TokenAuthLoginState: %i", uVar4);
                    }
                }
            }
        }
    }

    // 0x1003910e0, 80 bytes, placed by class name and debug map
    // SteamAuthLibWrapper::GetTokenAuthLoginState() const
    undefined8 SteamAuthLibWrapper::GetTokenAuthLoginState() {
        bool bVar1;
        CoordMapSquare* this_00;
        undefined8 uVar3;
        _func_decltype_nullptr* in_RSI;

        bVar1 = std::operator==((unique_ptr*)&field_184, in_RSI);
        uVar3 = 0;
        if (!bVar1) {
            if (m_gameToken->GetStatus() == 0) {
                uVar3 = 20;
            } else {
                this_00 = (CoordMapSquare*)std::unique_ptr<jag::auth::TokenAuthLoginHandler,
                                                           std::default_delete<jag::auth::TokenAuthLoginHandler>>::
                          operator->((unique_ptr<jag::auth::TokenAuthLoginHandler,
                                                 std::default_delete<jag::auth::TokenAuthLoginHandler>>*)&field_184);
                uVar3 = this_00->GetX();
            }
        }
        return uVar3;
    }

    // 0x100391140, 624 bytes, placed by class name and debug map
    // SteamAuthLibWrapper::ShowFederatedShop(jag::auth::SocialLoginPartners, eastl::string const&)
    undefined4 SteamAuthLibWrapper::ShowFederatedShop(int param_2) {
        ApplicationContext* pAVar1;
        undefined4 uVar4;
        undefined8 uVar5;
        basic_string* pbVar6;
        undefined8 uVar7;
        type* ptVar8;
        char* pcVar9;
        undefined8 in_stack_fffffffffffffe58;
        eastl::string local_1a0[32];
        eastl::string local_180[32];
        allocator local_160[8];
        Filename local_158[19];
        long local_28;

        uVar4 = (undefined4)((ulong)in_stack_fffffffffffffe58 >> 32);
        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (param_2 != 10) {
            uVar5 = logger::default_logger();
            logger::Logger::Log(uVar5, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                "clientlib/auth/SteamAuthLibWrapper.cpp",
                                92, "SteamAuthLibWrapper is only capable of logging in with Steam, was given %i",
                                CONCAT44(uVar4, param_2));
        }
        if (m_gameToken->GetStatus() == 0) {
            ptVar8 = (type*)&field_72;
            Filename::Filename(local_158, (basic_string*)ptVar8);
            eastl::string::basic_string(local_180);
            if (eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty() ==
                '\0') {
                pcVar9 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            } else {
                pcVar9 = "store/runescape/membership";
            }
            (m_gameToken, ptVar8)->SSOBeginPtr();
            uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            pbVar6 = (basic_string*)eastl::string::sprintf((char*)local_180, "%s?steamMode=oldschool&otlToken=%s",
                                                           pcVar9, uVar5);
            eastl::string::basic_string(local_1a0, pbVar6);
            eastl::string::~basic_string(local_180);
            Filename::operator/=(local_158, (basic_string*)local_1a0);
            uVar5 = logger::default_logger();
            uVar7 = local_158->GetName();
            logger::Logger::Log(uVar5, 0, 5,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                "clientlib/auth/SteamAuthLibWrapper.cpp",
                                107, "Showing Steam Shop: URL %s", uVar7);
            pAVar1 = field_144;
            pcVar9 = (char*)local_158->GetName();
            eastl::allocator::allocator(local_160, "EASTL basic_string");
            eastl::string::basic_string(local_180, pcVar9, local_160);
            uVar4 = (**(code**)(pAVar1->field_0 + 192))(pAVar1, local_180, 0);
            eastl::string::~basic_string(local_180);
            (*(code*)field_0[65])(this);
            eastl::string::~basic_string(local_1a0);
            local_158->~pair();
        } else {
            uVar5 = logger::default_logger();
            uVar4 = 0;
            logger::Logger::Log(uVar5, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                "clientlib/auth/SteamAuthLibWrapper.cpp",
                                96, "Attempted to show steam shop, but we had not successfully gotten an OTL code!");
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar4;
    }

    // 0x100395470: the linker folded this into DesktopAuthLibWrapper::CreateGameTokenFromResult(eastl::string const&, jag::auth::AuthSDKTokenResponse), which has identical code
    SteamAuthLibWrapper::CreateGameTokenFromResult(eastl::string const&, jag::auth::AuthSDKTokenResponse);

} // namespace jag::oldscape::auth
