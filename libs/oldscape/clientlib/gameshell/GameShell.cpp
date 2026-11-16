// libs/oldscape/clientlib/gameshell/GameShell.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.clientlib

#include "GameShell.h"

namespace jag::oldscape::javapal {
    // 0x100f37f28
    int32_t GameShell::m_delTime = 16666667;

    // 0x100f37f2c
    int32_t GameShell::m_minDel = 1000000;

    // 0x100f37f30
    int64_t GameShell::m_lastLogoFrameTime = -1;

    // 0x100f37f38
    int32_t GameShell::m_fullRedrawForce = 500;

    // 0x100f37f3c
    bool GameShell::m_focusIn = 1;

    // 0x100f37f3d
    bool GameShell::m_focus = 1;

    // 0x103992770
    int32_t GameShell::m_fps;

    // 0x103992774
    int32_t GameShell::m_lps;

    // 0x103992778
    int64_t GameShell::m_activeShell;

    // 0x103992780
    int64_t GameShell::m_reloadCount;

    // 0x103992788
    int64_t GameShell::m_killTime;

    // 0x103992790
    int32_t GameShell::m_shutdown;

    // 0x103992794
    int32_t GameShell::m_updateCount;

    // 0x103992798
    std::array<long long, 32ul> GameShell::m_drawTime;

    // 0x103992898
    int64_t GameShell::m_drawPos;

    // 0x1039928a0
    std::array<long long, 32ul> GameShell::m_updateTime;

    // 0x1039929a0
    int64_t GameShell::m_updatePos;

    // 0x1039929a8
    int64_t GameShell::m_lastGameLoopTimeMillis;

    // 0x1039929b0
    int32_t GameShell::m_sWid;

    // 0x1039929b4
    int32_t GameShell::m_sHei;

    // 0x1039929b8
    int32_t GameShell::m_logoFrame;

    // 0x1039929bc
    int32_t GameShell::m_forceCrashQueued;

    // 0x1039929c0, set at startup by ___cxx_global_var_init.51
    eastl::string GameShell::m_osName = eastl::string();

    // 0x1039929e0, set at startup by ___cxx_global_var_init.52
    shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> GameShell::m_pApplicationContext =
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100009e70: GameShell::ShowBasicPercentTidy() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x1003913e0
    auto GameShell::GetOSName() {
        char* str;

        switch (result.GetID()) {
        case 0:
            str = "JavaDesktop";
            break;
        default:
            str = "Unknown_Platform";
            break;
        case 4:
            str = "Windows";
            break;
        case 5:
            str = "OSX";
            break;
        case 7:
            str = "Android";
            break;
        case 8:
            str = "IOS";
            break;
        case 10:
            str = "Linux";
        }
        return auto(str);
    }

    // 0x100391520
    void GameShell::QuickResize() {
        uint8_t local_28[16];

        GetTopSize((Margin*)local_28, this);
        auto piVar5 = local_28->second();
        piVar5 = std::max<int>(*piVar5, m_minimumCanvasWidth);
        m_frameWidth = *piVar5;
        piVar5 = (int*)local_28->qw();
        piVar5 = std::max<int>(*piVar5, m_minimumCanvasHeight);
        int iVar1 = *piVar5;
        m_frameHeight = iVar1;
        if (m_frameWidth < 1) {
            m_frameWidth = 1;
        }
        if (iVar1 < 1) {
            m_frameHeight = 1;
        }
        iVar1 = field_8108;
        int iVar2 = field_8112;
        int iVar3 = m_frameWidth;
        m_sWid = iVar1;
        m_sHei = iVar2;
        if (iVar3 < iVar1) {
            m_sHei = (iVar3 * iVar2) / iVar1;
            m_sWid = iVar3;
        }
        iVar3 = m_frameHeight;
        if (iVar3 < m_sHei) {
            m_sWid = (iVar1 * iVar3) / iVar2;
            m_sHei = iVar3;
        }
        UpdatePixToolKitViewport();
        field_128 = 1;
        uint8_t uVar4 = ResizeSafeArea();
        (*(void (*)(...))field_0[7])(this, uVar4);
    }

    // 0x1003916b0
    int GameShell::LoadJavConfigFromUrl() {
        bool cVar1;
        int iVar3;
        JavConfigReader* pJVar4;
        long lVar5;
        eastl::string* str;
        void* in_RSI;
        uint8_t auVar6[16];
        eastl local_60;
        obj_iterator local_40;

        if (field_8096 == 0) {
            if (&field_8032 == in_RSI) {
                return 3;
            }
            field_8096 = 1;
            iVar3 = field_8096;
        } else {
            iVar3 = field_8096;
        }
        if (iVar3 == 1) {
            pJVar4 = (JavConfigReader*)field_8032.operator->();
            cVar1 = pJVar4->Process(0);
            if (cVar1) {
                pJVar4 = (JavConfigReader*)field_8032.operator->();
                lVar5 = pJVar4->GetUniversalConfig();
                local_60._0_16_ = ((lVar5 + 88))->begin();
                &local_40 = (obj_iterator[16])((lVar5 + 88))->end();
                cVar1 = local_60 != local_40;
                if (cVar1) {
                    do {
                        str = (eastl::string*)local_60.HeapBeginPtr();
                        iVar3 = eastl::stoi<eastl::string>(*str, 10);
                        SetParameter(iVar3, *(str + 32));
                        ++local_60;
                        cVar1 = local_60 != local_40;
                    } while (cVar1);
                }
                local_60 = eastl::string("codebase");
                auVar6 = ((lVar5 + 32))->find(local_60);
                &local_40 = (obj_iterator[16])auVar6;
                auVar6 = ((lVar5 + 32))->end();
                local_60._0_16_ = auVar6;
                cVar1 = local_40 == local_60;
                if (!cVar1) {
                    lVar5 = local_40.HeapBeginPtr();
                    SetCodeBase(*((lVar5 + 32)));
                    iVar3 = 2;
                } else {
                    iVar3 = 3;
                }
                field_8096 = iVar3;
            }
        }
        return field_8096;
    }

    // 0x1003918a0
    void GameShell::SetParameter(int arg1, const eastl::string& str) {
        eastl::string local_48;
        local_48.append_sprintf("%i", (unsigned long)(unsigned int)arg1);
        eastl::string* this_00 = &field_8040[local_48];
        *this_00 = str;
    }

    // 0x1003919b0
    uint8_t GameShell::SetCodeBase(const eastl::string& str) {
        field_8000 = str;
        return 1;
    }

    // 0x1003919d0
    void GameShell::SetJavConfigReader(const eastl::string& str) {
        auto local_20 = std::make_unique<JavConfigReader, eastl::stringconst&>(str);
        field_8032 = local_20;
        field_8096 = 0;
        CheckHost();
    }

    // 0x100391ac0
    unsigned long GameShell::CheckHost() {
        Logger* this_00;
        uint64_t uVar4;
        unsigned long uVar5;

        uint8_t* this_01 = &field_8032;
        JavConfigReader* pJVar1 = (JavConfigReader*)(*this_01).operator->();
        auto pbVar2 = pJVar1->GetUrl();
        eastl::string local_38(*pbVar2);
        long lVar3 = local_38.find("jagex.com", 0);
        uint64_t uVar6 = (uint64_t)((unsigned long)this_01 >> 8);
        if (lVar3 == -1) {
            lVar3 = local_38.find("runescape.com", 0);
            if (lVar3 == -1) {
                lVar3 = local_38.find("127.0.0.1", 0);
                uVar5 = (((uint64_t)uVar6 << 8) | (uint8_t)1);
                if (lVar3 == -1) {
                    lVar3 = local_38.find("192.168.1.", 0);
                    if (lVar3 == -1) {
                        this_00 = logger::default_logger();
                        uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        uVar5 = 0;
                        this_00->Log(false, 3,
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                     "clientlib/gameshell/GameShell.cpp",
                                     274, "host %s was rejected! startup will fail.", uVar4);
                    }
                }
            } else {
                pJVar1 = (JavConfigReader*)(*this_01).operator->();
                pbVar2 = pJVar1->GetUrl();
                uVar5 = (((uint64_t)uVar6 << 8) | (uint8_t)1);
                OldscapeClientError::SetBaseURL(*pbVar2);
            }
        } else {
            pJVar1 = (JavConfigReader*)(*this_01).operator->();
            pbVar2 = pJVar1->GetUrl();
            uVar5 = (((uint64_t)uVar6 << 8) | (uint8_t)1);
            OldscapeClientError::SetBaseURL(*pbVar2);
        }
        return uVar5 & 4294967295;
    }

    // 0x100391c00
    auto GameShell::GetCodeBaseHost() const {
        ReturnValue local_38;

        auto result(field_8000);
        long lVar1 = result.find("://", 0);
        if (lVar1 != -1) {
            local_38 = result.substr(lVar1 + 3, 18446744073709551615);
            result = &local_38;
        }
        unsigned long uVar2 = result.find("/", 0);
        if (uVar2 != 18446744073709551615) {
            local_38 = result.substr(0, uVar2);
            result = &local_38;
        }
        uVar2 = result.find(":", 0);
        if (uVar2 != 18446744073709551615) {
            local_38 = result.substr(0, uVar2);
            result = &local_38;
        }
        return result;
    }

    // 0x100391d50
    uint8_t* GameShell::GetParameter(const eastl::string& str) {
        uint8_t* puVar3;
        long lVar4;

        if (GetParameter(eastl::stringconst&)::defaultResult == '\0') {
            if (___cxa_guard_acquire(&GetParameter(eastl::stringconst&)::defaultResult) != 0) {
                new ((eastl::string*)&GetParameter(eastl::stringconst&)::defaultResult) eastl::string();
                ___cxa_atexit(PTR__basic_string_100ee6c80, &GetParameter(eastl::stringconst&)::defaultResult,
                              4294967296);
                ___cxa_guard_release(&GetParameter(eastl::stringconst&)::defaultResult);
            }
        }
        auto local_30 = field_8040.find(str);
        auto local_40 = field_8040.end();
        if (local_30 == local_40 == '\0') {
            lVar4 = local_30.HeapBeginPtr();
            puVar3 = (uint8_t*)(lVar4 + 32);
        } else {
            puVar3 = &GetParameter(eastl::stringconst&)::defaultResult;
        }
        return puVar3;
    }

    // 0x100391e30
    unsigned int GameShell::GetAppletConfigString(eastl::string& str1, const eastl::string& str2) {
        obj_iterator local_40;
        eastl local_30;

        long lVar2 = ((JavConfigReader*)field_8032.operator->())->GetUniversalConfig();
        &local_30 = (eastl[16])((lVar2 + 32))->find(str2);
        &local_40 = (obj_iterator[16])((lVar2 + 32))->end();
        unsigned int uVar1 = local_30 == local_40;
        if ((char)uVar1 == '\0') {
            lVar2 = local_30.HeapBeginPtr();
            str1 = ((lVar2 + 32));
        }
        return uVar1 ^ 1;
    }

} // namespace jag::oldscape::javapal
