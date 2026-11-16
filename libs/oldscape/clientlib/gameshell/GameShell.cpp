// libs/oldscape/clientlib/gameshell/GameShell.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.clientlib

#include "GameShell.h"

namespace jag::oldscape::javapal {
    // 0x100f37f28, 4 bytes, __data
    GameShell::m_delTime = 16666667;

    // 0x100f37f2c, 4 bytes, __data
    GameShell::m_minDel = 1000000;

    // 0x100f37f30, 8 bytes, __data
    GameShell::m_lastLogoFrameTime = -1;

    // 0x100f37f38, 4 bytes, __data
    GameShell::m_fullRedrawForce = 500;

    // 0x100f37f3c, 1 bytes, __data
    GameShell::m_focusIn = 1;

    // 0x100f37f3d, 1 bytes, __data
    GameShell::m_focus = 1;

    // 0x103992770, 4 bytes, __common; zero-initialised
    GameShell::m_fps;

    // 0x103992774, 4 bytes, __common; zero-initialised
    GameShell::m_lps;

    // 0x103992778, 8 bytes, __common; zero-initialised
    GameShell::m_activeShell;

    // 0x103992780, 8 bytes, __common; zero-initialised
    GameShell::m_reloadCount;

    // 0x103992788, 8 bytes, __common; zero-initialised
    GameShell::m_killTime;

    // 0x103992790, 4 bytes, __common; zero-initialised
    GameShell::m_shutdown;

    // 0x103992794, 4 bytes, __common; zero-initialised
    GameShell::m_updateCount;

    // 0x103992798, 256 bytes, __common; zero-initialised
    GameShell::m_drawTime;

    // 0x103992898, 8 bytes, __common; zero-initialised
    GameShell::m_drawPos;

    // 0x1039928a0, 256 bytes, __common; zero-initialised
    GameShell::m_updateTime;

    // 0x1039929a0, 8 bytes, __common; zero-initialised
    GameShell::m_updatePos;

    // 0x1039929a8, 8 bytes, __common; zero-initialised
    GameShell::m_lastGameLoopTimeMillis;

    // 0x1039929b0, 4 bytes, __common; zero-initialised
    GameShell::m_sWid;

    // 0x1039929b4, 4 bytes, __common; zero-initialised
    GameShell::m_sHei;

    // 0x1039929b8, 4 bytes, __common; zero-initialised
    GameShell::m_logoFrame;

    // 0x1039929bc, 4 bytes, __common; zero-initialised
    GameShell::m_forceCrashQueued;

    // 0x1039929c0, 32 bytes, __common; set at startup by ___cxx_global_var_init.51
    eastl::string GameShell::m_osName = eastl::string();

    // 0x1039929e0, 16 bytes, __common; set at startup by ___cxx_global_var_init.52
    shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> GameShell::m_pApplicationContext;

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    GameShell::ShowBasicPercentTidy();

    // 0x1003913e0, 320 bytes, placed by class name and debug map
    // GameShell::GetOSName()
    GameShell* GameShell::GetOSName() {
        undefined4 uVar1;
        char* pcVar2;
        allocator local_20[8];

        uVar1 = rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2::GetID();
        switch (uVar1) {
        case 0:
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            pcVar2 = "JavaDesktop";
            break;
        default:
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            pcVar2 = "Unknown_Platform";
            break;
        case 4:
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            pcVar2 = "Windows";
            break;
        case 5:
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            pcVar2 = "OSX";
            break;
        case 7:
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            pcVar2 = "Android";
            break;
        case 8:
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            pcVar2 = "IOS";
            break;
        case 10:
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            pcVar2 = "Linux";
        }
        new (this) eastl::string(pcVar2, local_20);
        return this;
    }

    // 0x100391520, 272 bytes, placed by class name and debug map
    // GameShell::QuickResize()
    void GameShell::QuickResize() {
        int iVar1;
        int iVar2;
        int iVar3;
        undefined1 uVar4;
        int* piVar5;
        undefined1 local_28[16];

        GetTopSize((GameShell*)local_28);
        piVar5 = (int*)local_28->second();
        piVar5 = std::max<int>(piVar5, &m_minimumCanvasWidth);
        m_frameWidth = *piVar5;
        piVar5 = (int*)local_28->qw();
        piVar5 = std::max<int>(piVar5, &field_124);
        iVar1 = *piVar5;
        m_frameHeight = iVar1;
        if (m_frameWidth < 1) {
            m_frameWidth = 1;
        }
        if (iVar1 < 1) {
            m_frameHeight = 1;
        }
        iVar1 = m_desiredCanvasSize;
        iVar2 = field_8112;
        iVar3 = m_frameWidth;
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
        UpdatePixToolKitViewport(this);
        field_128 = 1;
        uVar4 = ResizeSafeArea(this);
        (**(code**)(*(long*)this + 56))(this, uVar4);
    }

    // 0x1003916b0, 464 bytes, placed by class name and debug map
    // GameShell::LoadJavConfigFromUrl()
    int GameShell::LoadJavConfigFromUrl() {
        bool bVar2;
        int iVar3;
        JavConfigReader* pJVar4;
        long lVar5;
        basic_string* pbVar6;
        hashtable_iterator_base* extraout_RDX;
        _func_decltype_nullptr* in_RSI;
        undefined1 auVar7[16];
        allocator local_68[8];
        eastl local_60[32];
        hashtable_iterator_base local_40[16];

        if (field_8096 == 0) {
            bVar2 = std::operator==((unique_ptr*)&field_8032, in_RSI);
            if (bVar2) {
                return 3;
            }
            field_8096 = 1;
            iVar3 = field_8096;
        } else {
            iVar3 = field_8096;
        }
        if (iVar3 == 1) {
            pJVar4 =
                (JavConfigReader*)std::unique_ptr<JavConfigReader, std::default_delete<JavConfigReader>>::operator->(
                    (unique_ptr<JavConfigReader, std::default_delete<JavConfigReader>>*)&field_8032);
            if (pJVar4->Process(0) != '\0') {
                pJVar4 = (JavConfigReader*)
                             std::unique_ptr<JavConfigReader, std::default_delete<JavConfigReader>>::operator->(
                                 (unique_ptr<JavConfigReader, std::default_delete<JavConfigReader>>*)&field_8032);
                lVar5 = pJVar4->GetUniversalConfig();
                local_60._0_16_ =
                    eastl::hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                                     eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                     eastl::prime_rehash_policy, false, true, true>::begin();
                local_40 = (hashtable_iterator_base[16])((lVar5 + 88))->end();
                bVar2 = eastl::operator!=(local_60, local_40, local_40._8_8_);
                if (bVar2) {
                    do {
                        pbVar6 = (basic_string*)local_60->HeapBeginPtr();
                        iVar3 = eastl::stoi<eastl::string>(pbVar6, 10);
                        SetParameter(this, iVar3, pbVar6 + 32);
                        eastl::hashtable_iterator<eastl::pair<unsigned long long const,
                                                              LRUHashCacheWrapper<DBTableIndex, unsigned long long>>,
                                                  false, false>::
                        operator++(
                            (hashtable_iterator<eastl::pair<unsigned long long const,
                                                            LRUHashCacheWrapper<DBTableIndex, unsigned long long>>,
                                                false, false>*)local_60);
                        bVar2 = eastl::operator!=(local_60, local_40, extraout_RDX);
                    } while (bVar2);
                }
                eastl::allocator::allocator(local_68, "EASTL basic_string");
                new (local_60) eastl::string("codebase", local_68);
                auVar7 = ((lVar5 + 32))->find(local_60);
                local_40 = (hashtable_iterator_base[16])auVar7;
                local_60->~basic_string();
                auVar7 = ((lVar5 + 32))->end();
                local_60._0_16_ = auVar7;
                bVar2 = eastl::operator==((eastl*)local_40, (hashtable_iterator_base*)local_60, auVar7._8_8_);
                if (bVar2) {
                    iVar3 = 3;
                } else {
                    lVar5 = local_40->HeapBeginPtr();
                    SetCodeBase(this, (basic_string*)(lVar5 + 32));
                    iVar3 = 2;
                }
                field_8096 = iVar3;
            }
        }
        return field_8096;
    }

    // 0x1003918a0, 128 bytes, placed by class name and debug map
    // GameShell::SetParameter(int, eastl::string const&)
    void GameShell::SetParameter(int param_1, basic_string* param_2) {
        eastl::string* this_00;
        eastl::string local_48[32];

        eastl::string::basic_string(local_48);
        eastl::string::append_sprintf((char*)local_48, "%i", (ulong)(uint)param_1);
        this_00 = (eastl::string*)eastl::hash_map<
            eastl::string, eastl::string, eastl::hash<eastl::string>, eastl::equal_to<eastl::string>, eastl::allocator,
            false>::operator[]((hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>,
                                         eastl::equal_to<eastl::string>, eastl::allocator, false>*)&field_8040,
                               (basic_string*)local_48);
        eastl::string::operator=(this_00, param_2);
        eastl::string::~basic_string(local_48);
    }

    // 0x1003919b0, 32 bytes, placed by class name and debug map
    // GameShell::SetCodeBase(eastl::string const&)
    undefined1 GameShell::SetCodeBase(basic_string* param_1) {
        eastl::string::operator=((eastl::string*)&field_8000, param_1);
        return 1;
    }

    // 0x1003919d0, 80 bytes, placed by class name and debug map
    // GameShell::SetJavConfigReader(eastl::string const&)
    void GameShell::SetJavConfigReader(basic_string* param_1) {
        basic_string local_20[8];

        std::make_unique<JavConfigReader, eastl::stringconst&>(local_20);
        std::unique_ptr<JavConfigReader, std::default_delete<JavConfigReader>>::operator=(
            (unique_ptr<JavConfigReader, std::default_delete<JavConfigReader>>*)(param_1 + 8032),
            (unique_ptr*)local_20);
        local_20->~unique_ptr();
        *(undefined4*)(param_1 + 8096) = 0;
        CheckHost((GameShell*)param_1);
    }

    // 0x100391ac0, 320 bytes, placed by class name and debug map
    // GameShell::CheckHost()
    ulong GameShell::CheckHost() {
        JavConfigReader* pJVar1;
        basic_string* pbVar2;
        long lVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined1* this_00;
        undefined7 uVar7;
        ulong uVar6;
        eastl::string local_38[32];

        this_00 = &field_8032;
        pJVar1 = (JavConfigReader*)std::unique_ptr<JavConfigReader, std::default_delete<JavConfigReader>>::operator->(
            (unique_ptr<JavConfigReader, std::default_delete<JavConfigReader>>*)this_00);
        pbVar2 = (basic_string*)pJVar1->GetUrl();
        eastl::string::basic_string(local_38, pbVar2);
        lVar3 = local_38->find("jagex.com", 0);
        uVar7 = (undefined7)((ulong)this_00 >> 8);
        if (lVar3 == -1) {
            lVar3 = local_38->find("runescape.com", 0);
            if (lVar3 == -1) {
                lVar3 = local_38->find("127.0.0.1", 0);
                uVar6 = CONCAT71(uVar7, 1);
                if (lVar3 == -1) {
                    lVar3 = local_38->find("192.168.1.", 0);
                    if (lVar3 == -1) {
                        uVar4 = logger::default_logger();
                        uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        uVar6 = 0;
                        logger::Logger::Log(uVar4, 0, 3,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "oldscape/clientlib/gameshell/GameShell.cpp",
                                            274, "host %s was rejected! startup will fail.", uVar5);
                    }
                }
            } else {
                pJVar1 = (JavConfigReader*)
                             std::unique_ptr<JavConfigReader, std::default_delete<JavConfigReader>>::operator->(
                                 (unique_ptr<JavConfigReader, std::default_delete<JavConfigReader>>*)this_00);
                pbVar2 = (basic_string*)pJVar1->GetUrl();
                uVar6 = CONCAT71(uVar7, 1);
                OldscapeClientError::SetBaseURL(pbVar2);
            }
        } else {
            pJVar1 =
                (JavConfigReader*)std::unique_ptr<JavConfigReader, std::default_delete<JavConfigReader>>::operator->(
                    (unique_ptr<JavConfigReader, std::default_delete<JavConfigReader>>*)this_00);
            pbVar2 = (basic_string*)pJVar1->GetUrl();
            uVar6 = CONCAT71(uVar7, 1);
            OldscapeClientError::SetBaseURL(pbVar2);
        }
        eastl::string::~basic_string(local_38);
        return uVar6 & 4294967295;
    }

    // 0x100391c00, 288 bytes, placed by class name and debug map
    // GameShell::GetCodeBaseHost() const
    GameShell* GameShell::GetCodeBaseHost() {
        long lVar1;
        long in_RSI;
        basic_string local_38[32];

        new (this) eastl::string((basic_string*)(in_RSI + 8000));
        lVar1 = find("://", 0);
        if (lVar1 != -1) {
            eastl::string::substr((ulong)local_38, (ulong)this);
            eastl::string::operator=((eastl::string*)this, local_38);
            local_38->~basic_string();
        }
        lVar1 = find("/", 0);
        if (lVar1 != -1) {
            eastl::string::substr((ulong)local_38, (ulong)this);
            eastl::string::operator=((eastl::string*)this, local_38);
            local_38->~basic_string();
        }
        lVar1 = find(":", 0);
        if (lVar1 != -1) {
            eastl::string::substr((ulong)local_38, (ulong)this);
            eastl::string::operator=((eastl::string*)this, local_38);
            local_38->~basic_string();
        }
        return this;
    }

    // 0x100391d50, 224 bytes, placed by class name and debug map
    // GameShell::GetParameter(eastl::string const&)
    undefined1* GameShell::GetParameter(basic_string* param_1) {
        int iVar2;
        undefined1* puVar3;
        long lVar4;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_40[16];
        basic_string local_30[16];

        if (GetParameter(eastl::stringconst&)::defaultResult == '\0') {
            iVar2 = ___cxa_guard_acquire(&GetParameter(eastl::stringconst&)::defaultResult);
            if (iVar2 != 0) {
                new (&GetParameter(eastl::stringconst&)::defaultResult) eastl::string();
                ___cxa_atexit(PTR__basic_string_100ee6c80, &GetParameter(eastl::stringconst&)::defaultResult,
                              4294967296);
                ___cxa_guard_release(&GetParameter(eastl::stringconst&)::defaultResult);
            }
        }
        eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, eastl::string>, eastl::allocator,
                         eastl::use_first<eastl::pair<eastl::stringconst, eastl::string>>,
                         eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find(local_30);
        eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator==((eastl*)local_30, local_40, extraout_RDX)) {
            puVar3 = &GetParameter(eastl::stringconst&)::defaultResult;
        } else {
            lVar4 = local_30->HeapBeginPtr();
            puVar3 = (undefined1*)(lVar4 + 32);
        }
        return puVar3;
    }

    // 0x100391e30, 144 bytes, placed by class name and debug map
    // GameShell::GetAppletConfigString(eastl::string&, eastl::string const&)
    ulong GameShell::GetAppletConfigString(basic_string* param_1, basic_string* param_2) {
        bool bVar1;
        JavConfigReader* this_00;
        long lVar2;
        undefined7 extraout_var;
        hashtable_iterator_base local_40[16];
        eastl local_30[16];

        this_00 = (JavConfigReader*)std::unique_ptr<JavConfigReader, std::default_delete<JavConfigReader>>::operator->(
            (unique_ptr<JavConfigReader, std::default_delete<JavConfigReader>>*)&field_8032);
        lVar2 = this_00->GetUniversalConfig();
        local_30 = (eastl[16])((lVar2 + 32))->find(param_2);
        local_40 = (hashtable_iterator_base[16])((lVar2 + 32))->end();
        bVar1 = eastl::operator==(local_30, local_40, local_40._8_8_);
        if (!bVar1) {
            lVar2 = local_30->HeapBeginPtr();
            eastl::string::operator=((eastl::string*)param_1, (basic_string*)(lVar2 + 32));
        }
        return CONCAT71(extraout_var, bVar1) & 4294967295 ^ 1;
    }

    // 0x1003a09d0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.51
    void ___cxx_global_var_init_51() {
        new (&GameShell::m_osName) eastl::string();
        ___cxa_atexit(PTR__basic_string_100ee6c80, &GameShell::m_osName, 4294967296);
    }

    // 0x1003a0a10, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.52
    void ___cxx_global_var_init_52(undefined8 param_1, _func_decltype_nullptr* param_2) {
        new (&GameShell::m_pApplicationContext) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
        ___cxa_atexit(PTR__shared_ptr_100ee54c0, &GameShell::m_pApplicationContext, 4294967296);
    }

} // namespace jag::oldscape::javapal
