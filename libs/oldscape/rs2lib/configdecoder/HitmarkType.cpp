// libs/oldscape/rs2lib/configdecoder/HitmarkType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

#include "HitmarkType.h"

namespace jag::oldscape::configdecoder {
    // 0x1016bbd80, 8 bytes, __common; zero-initialised
    HitmarkType::m_pConfigClient;

    // 0x1016bbd88, 8 bytes, __common; zero-initialised
    HitmarkType::m_pSprites;

    // 0x1016bbd90, 8 bytes, __common; zero-initialised
    HitmarkType::m_pFontMetrics;

    // 0x1016bbd98, 8 bytes, __common; zero-initialised
    HitmarkType::m_numDefinitions;

    // 0x1016bbda0, 5376 bytes, __common; zero-initialised
    HitmarkType::m_recentUse;

    // 0x1016bd2a0, 5376 bytes, __common; set at startup by ___cxx_global_var_init.1121
    LRUHashCache<graphics::Pix32, 64ul, 65ul, false, unsigned long long> HitmarkType::m_spriteCache =
        LRUHashCache<graphics::Pix32, 64ul, 65ul, false, unsigned long long>(64, "LRUHashCache");

    // 0x1016be7a0, 1856 bytes, __common; zero-initialised
    HitmarkType::m_fontCache;

    // 0x1016beee0, 8 bytes, __common; zero-initialised
    HitmarkType::m_dataNotReady;

    // 0x1002679c0, 32 bytes, placed by class name and debug map
    // HitmarkType::Init(jagex3::Js5*, jagex3::Js5*, jagex3::Js5*)
    void HitmarkType::Init(Js5* param_1, Js5* param_2, Js5* param_3) {
        m_pConfigClient = param_1;
        m_pSprites = param_2;
        m_pFontMetrics = param_3;
    }

    // 0x1002679e0, 288 bytes, placed by class name and debug map
    // HitmarkType::List(int)
    HitmarkType* HitmarkType::List(int param_1) {
        bool bVar1;
        shared_ptr* psVar2;
        HitmarkType* this_00;
        PacketJ* pPVar3;
        shared_ptr local_40;
        shared_ptr local_30;

        local_30._0_8_ = (long)param_1;
        psVar2 = (shared_ptr*)LRUHashCache<HitmarkType, 64ul, 65ul, false, unsigned long long>::Find(
            (ulonglong*)&m_recentUse);
        new (this) shared_ptr<dash3d::Decor>(psVar2);
        bVar1 = operator!=((shared_ptr*)this, (_func_decltype_nullptr*)0);
        if (!bVar1) {
            new (&local_30) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            m_pConfigClient->GetFile((int)&local_30, 32, (array*)(ulong)(uint)param_1);
            make_shared<HitmarkType>((jag*)&local_40);
            shared_ptr<HitmarkType>::operator=((shared_ptr<HitmarkType>*)this, &local_40);
            local_40.~shared_ptr();
            bVar1 = operator!=(&local_30, (_func_decltype_nullptr*)0);
            if (bVar1) {
                this_00 = (HitmarkType*)shared_ptr<HitmarkType>::operator->((shared_ptr<HitmarkType>*)this);
                pPVar3 = (PacketJ*)shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator*(
                    (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)&local_30);
                Decode(this_00, pPVar3);
            }
            local_40._0_8_ = (long)param_1;
            m_recentUse.Put(this, 1, (ulonglong*)&local_40);
            local_30.~shared_ptr();
        }
        return this;
    }

    // 0x100267c30, 64 bytes, placed by class name and debug map
    // HitmarkType::Decode(PacketJ<Array<unsigned char, eastl::allocator> >&)
    void HitmarkType::Decode(PacketJ* param_1) {
        byte bVar1;

        while (true) {
            bVar1 = param_1->g1();
            if (bVar1 == 0)
                break;
            Decode(this, param_1, (uint)bVar1);
        }
    }

    // 0x100267d60, 720 bytes, placed by class name and debug map
    // HitmarkType::Decode(PacketJ<Array<unsigned char, eastl::allocator> >&, int)
    void HitmarkType::Decode(PacketJ* param_1, int param_2) {
        byte bVar1;
        short sVar2;
        ushort uVar3;
        uint uVar4;
        undefined4 uVar5;
        uint* puVar6;
        int* piVar7;
        undefined4* puVar8;
        undefined8 uVar9;
        ulong uVar10;
        undefined1* this_00;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>> local_58[36];
        uint local_34;

        switch (param_2) {
        case 1:
            uVar5 = param_1->gSmart2or4s();
            field_4 = uVar5;
            break;
        case 2:
            uVar5 = param_1->g3();
            field_8 = uVar5;
            break;
        case 3:
            uVar5 = param_1->gSmart2or4s();
            field_16 = uVar5;
            break;
        case 4:
            uVar5 = param_1->gSmart2or4s();
            field_24 = uVar5;
            break;
        case 5:
            uVar5 = param_1->gSmart2or4s();
            field_20 = uVar5;
            break;
        case 6:
            uVar5 = param_1->gSmart2or4s();
            field_28 = uVar5;
            break;
        case 7:
            sVar2 = param_1->g2s();
            field_32 = (int)sVar2;
            break;
        case 8:
            PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<eastl::string>(
                local_58, SUB81(param_1, 0));
            eastl::string::operator=((eastl::string*)&field_48, (basic_string*)local_58);
            local_58->~basic_string();
            break;
        case 9:
            uVar3 = param_1->g2();
            field_12 = (uint)uVar3;
            break;
        case 10:
            sVar2 = param_1->g2s();
            field_36 = (int)sVar2;
            break;
        case 11:
            field_40 = 0;
            break;
        case 12:
            bVar1 = param_1->g1();
            field_80 = (uint)bVar1;
            break;
        case 13:
            sVar2 = param_1->g2s();
            field_84 = (int)sVar2;
            break;
        case 14:
            uVar3 = param_1->g2();
            field_40 = (uint)uVar3;
            break;
        default:
            if (param_2 - 17U < 2) {
                uVar3 = param_1->g2();
                uVar4 = (uint)uVar3;
                if (uVar3 == 65535) {
                    uVar4 = 4294967295;
                }
                field_112 = uVar4;
                uVar3 = param_1->g2();
                uVar4 = (uint)uVar3;
                if (uVar3 == 65535) {
                    uVar4 = 4294967295;
                }
                field_116 = uVar4;
                local_34 = 4294967295;
                if (param_2 == 18) {
                    uVar3 = param_1->g2();
                    local_34 = 4294967295;
                    if (uVar3 != 65535) {
                        local_34 = (uint)uVar3;
                    }
                }
                bVar1 = param_1->g1();
                this_00 = &field_88;
                this_00->set_max_size((ulong)(bVar1 + 2), 5);
                uVar10 = 0;
                do {
                    uVar3 = param_1->g2();
                    puVar6 =
                        (uint*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00, uVar10);
                    *puVar6 = (uint)uVar3;
                    piVar7 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00, uVar10);
                    if (*piVar7 == 65535) {
                        puVar8 = (undefined4*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)this_00, uVar10);
                        *puVar8 = 4294967295;
                    }
                    uVar10 = uVar10 + 1;
                } while (bVar1 + 1 != uVar10);
                puVar6 = (uint*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00,
                                                                         (ulong)(bVar1 + 1));
                *puVar6 = local_34;
            } else {
                uVar9 = logger::default_logger();
                logger::Logger::Log(uVar9, 0, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                    "rs2lib/configdecoder/HitmarkType.cpp",
                                    178, "Error unrecognised .hitmark config code: %i", param_2);
            }
        }
    }

    // 0x100268030, 176 bytes, placed by class name and debug map
    // HitmarkType::GetMultiHitmark()
    HitmarkType* HitmarkType::GetMultiHitmark() {
        int iVar1;
        int iVar2;
        long lVar3;
        int* piVar4;
        long in_RSI;
        ulong uVar5;

        if (*(int*)(in_RSI + 112) == -1) {
            if ((long)*(int*)(in_RSI + 116) != 18446744073709551615) {
                piVar4 = (int*)Array<int, eastl::allocator>::operator[](
                    (Array<int, eastl::allocator>*)&ClientVarCache::m_var, (long)*(int*)(in_RSI + 116));
                iVar1 = *piVar4;
                goto joined_r0x000100268074;
            }
        } else {
            iVar1 = ClientVarCache::GetVarbit(*(int*)(in_RSI + 112));
        joined_r0x000100268074:
            if ((-1 < iVar1) && (iVar2 = ((in_RSI + 88))->end(), iVar1 < iVar2 + -1)) {
                uVar5 = (ulong)iVar1;
                goto LAB_1002680b2;
            }
        }
        lVar3 = ((in_RSI + 88))->end();
        uVar5 = lVar3 - 1;
    LAB_1002680b2:
        piVar4 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)(in_RSI + 88), uVar5);
        if (*piVar4 == -1) {
            new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        } else {
            List(this, *piVar4);
        }
        return this;
    }

    // 0x1002680e0, 384 bytes, placed by class name and debug map
    // HitmarkType::GetString(int)
    HitmarkType* HitmarkType::GetString(int param_1) {
        long lVar1;
        int in_EDX;
        undefined4 in_register_00000034;
        eastl local_d8[32];
        basic_string local_b8[32];
        StringTools local_98[32];
        eastl local_78[32];
        basic_string local_58[36];
        int local_34;

        local_34 = in_EDX;
        new (this) eastl::string((basic_string*)(CONCAT44(in_register_00000034, param_1) + 48));
        while (true) {
            lVar1 = find("%1", 0);
            if (lVar1 == -1)
                break;
            eastl::string::substr((ulong)local_58, (ulong)this);
            local_98->FromInt(local_34, false);
            eastl::operator+(local_78, local_58, (basic_string*)local_98);
            eastl::string::substr((ulong)local_b8, (ulong)this);
            eastl::operator+(local_d8, (basic_string*)local_78, local_b8);
            eastl::string::operator=((eastl::string*)this, (basic_string*)local_d8);
            local_d8->~basic_string();
            local_b8->~basic_string();
            local_78->~basic_string();
            local_98->~basic_string();
            local_58->~basic_string();
        }
        return this;
    }

    // 0x100268260, 288 bytes, placed by class name and debug map
    // HitmarkType::GetIconSprite()
    HitmarkType* HitmarkType::GetIconSprite() {
        bool bVar1;
        shared_ptr* psVar2;
        long in_RSI;
        shared_ptr local_40;
        shared_ptr local_30;

        m_dataNotReady._0_1_ = 0;
        local_30._0_8_ = SEXT48(*(int*)(in_RSI + 16));
        if ((long)local_30._0_8_ < 0) {
            new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        } else {
            psVar2 = (shared_ptr*)LRUHashCache<graphics::Pix32, 64ul, 65ul, false, unsigned long long>::Find(
                (ulonglong*)&m_spriteCache);
            new (&local_40) shared_ptr<dash3d::Decor>(psVar2);
            bVar1 = operator!=(&local_40, (_func_decltype_nullptr*)0);
            if (bVar1) {
                shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                    (shared_ptr<RSevenDebugPresetProvider>*)this, &local_40);
            } else {
                local_30.Makepix32(m_pSprites, *(int*)(in_RSI + 16), 0);
                shared_ptr<graphics::Pix32>::operator=((shared_ptr<graphics::Pix32>*)&local_40, &local_30);
                local_30.~shared_ptr();
                bVar1 = operator!=(&local_40, (_func_decltype_nullptr*)0);
                if (bVar1) {
                    local_30._0_8_ = SEXT48(*(int*)(in_RSI + 16));
                    m_spriteCache.Put(&local_40, 1, (ulonglong*)&local_30);
                } else {
                    m_dataNotReady._0_1_ = 1;
                }
                shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                    (shared_ptr<RSevenDebugPresetProvider>*)this, &local_40);
            }
            local_40.~shared_ptr();
        }
        return this;
    }

    // 0x100268380, 288 bytes, placed by class name and debug map
    // HitmarkType::GetBackgroundSprite()
    HitmarkType* HitmarkType::GetBackgroundSprite() {
        bool bVar1;
        shared_ptr* psVar2;
        long in_RSI;
        shared_ptr local_40;
        shared_ptr local_30;

        local_30._0_8_ = SEXT48(*(int*)(in_RSI + 20));
        if ((long)local_30._0_8_ < 0) {
            new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        } else {
            psVar2 = (shared_ptr*)LRUHashCache<graphics::Pix32, 64ul, 65ul, false, unsigned long long>::Find(
                (ulonglong*)&m_spriteCache);
            new (&local_40) shared_ptr<dash3d::Decor>(psVar2);
            bVar1 = operator!=(&local_40, (_func_decltype_nullptr*)0);
            if (bVar1) {
                shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                    (shared_ptr<RSevenDebugPresetProvider>*)this, &local_40);
            } else {
                local_30.Makepix32(m_pSprites, *(int*)(in_RSI + 20), 0);
                shared_ptr<graphics::Pix32>::operator=((shared_ptr<graphics::Pix32>*)&local_40, &local_30);
                local_30.~shared_ptr();
                bVar1 = operator!=(&local_40, (_func_decltype_nullptr*)0);
                if (bVar1) {
                    local_30._0_8_ = SEXT48(*(int*)(in_RSI + 20));
                    m_spriteCache.Put(&local_40, 1, (ulonglong*)&local_30);
                } else {
                    m_dataNotReady._0_1_ = 1;
                }
                shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                    (shared_ptr<RSevenDebugPresetProvider>*)this, &local_40);
            }
            local_40.~shared_ptr();
        }
        return this;
    }

    // 0x1002684a0, 288 bytes, placed by class name and debug map
    // HitmarkType::GetBackgroundLeftSprite()
    HitmarkType* HitmarkType::GetBackgroundLeftSprite() {
        bool bVar1;
        shared_ptr* psVar2;
        long in_RSI;
        shared_ptr local_40;
        shared_ptr local_30;

        local_30._0_8_ = SEXT48(*(int*)(in_RSI + 24));
        if ((long)local_30._0_8_ < 0) {
            new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        } else {
            psVar2 = (shared_ptr*)LRUHashCache<graphics::Pix32, 64ul, 65ul, false, unsigned long long>::Find(
                (ulonglong*)&m_spriteCache);
            new (&local_40) shared_ptr<dash3d::Decor>(psVar2);
            bVar1 = operator!=(&local_40, (_func_decltype_nullptr*)0);
            if (bVar1) {
                shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                    (shared_ptr<RSevenDebugPresetProvider>*)this, &local_40);
            } else {
                local_30.Makepix32(m_pSprites, *(int*)(in_RSI + 24), 0);
                shared_ptr<graphics::Pix32>::operator=((shared_ptr<graphics::Pix32>*)&local_40, &local_30);
                local_30.~shared_ptr();
                bVar1 = operator!=(&local_40, (_func_decltype_nullptr*)0);
                if (bVar1) {
                    local_30._0_8_ = SEXT48(*(int*)(in_RSI + 24));
                    m_spriteCache.Put(&local_40, 1, (ulonglong*)&local_30);
                } else {
                    m_dataNotReady._0_1_ = 1;
                }
                shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                    (shared_ptr<RSevenDebugPresetProvider>*)this, &local_40);
            }
            local_40.~shared_ptr();
        }
        return this;
    }

    // 0x1002685c0, 288 bytes, placed by class name and debug map
    // HitmarkType::GetBackgroundRightSprite()
    HitmarkType* HitmarkType::GetBackgroundRightSprite() {
        bool bVar1;
        shared_ptr* psVar2;
        long in_RSI;
        shared_ptr local_40;
        shared_ptr local_30;

        local_30._0_8_ = SEXT48(*(int*)(in_RSI + 28));
        if ((long)local_30._0_8_ < 0) {
            new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        } else {
            psVar2 = (shared_ptr*)LRUHashCache<graphics::Pix32, 64ul, 65ul, false, unsigned long long>::Find(
                (ulonglong*)&m_spriteCache);
            new (&local_40) shared_ptr<dash3d::Decor>(psVar2);
            bVar1 = operator!=(&local_40, (_func_decltype_nullptr*)0);
            if (bVar1) {
                shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                    (shared_ptr<RSevenDebugPresetProvider>*)this, &local_40);
            } else {
                local_30.Makepix32(m_pSprites, *(int*)(in_RSI + 28), 0);
                shared_ptr<graphics::Pix32>::operator=((shared_ptr<graphics::Pix32>*)&local_40, &local_30);
                local_30.~shared_ptr();
                bVar1 = operator!=(&local_40, (_func_decltype_nullptr*)0);
                if (bVar1) {
                    local_30._0_8_ = SEXT48(*(int*)(in_RSI + 28));
                    m_spriteCache.Put(&local_40, 1, (ulonglong*)&local_30);
                } else {
                    m_dataNotReady._0_1_ = 1;
                }
                shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                    (shared_ptr<RSevenDebugPresetProvider>*)this, &local_40);
            }
            local_40.~shared_ptr();
        }
        return this;
    }

    // 0x1002686e0, 304 bytes, placed by class name and debug map
    // HitmarkType::GetFont()
    HitmarkType* HitmarkType::GetFont() {
        bool bVar1;
        shared_ptr* psVar2;
        long in_RSI;
        shared_ptr local_40;
        shared_ptr local_30;

        m_dataNotReady._0_1_ = 0;
        local_30._0_8_ = SEXT48(*(int*)(in_RSI + 4));
        if (local_30._0_8_ == -1) {
            new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        } else {
            psVar2 = (shared_ptr*)LRUHashCache<jstring::PixfontGeneric, 20ul, 21ul, false, unsigned long long>::Find(
                (ulonglong*)&m_fontCache);
            new (&local_40) shared_ptr<dash3d::Decor>(psVar2);
            bVar1 = operator!=(&local_40, (_func_decltype_nullptr*)0);
            if (bVar1) {
                shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                    (shared_ptr<RSevenDebugPresetProvider>*)this, &local_40);
            } else {
                local_30.MakepixfontGeneric(m_pSprites, m_pFontMetrics, *(int*)(in_RSI + 4), 0);
                shared_ptr<jstring::PixfontGeneric>::operator=((shared_ptr<jstring::PixfontGeneric>*)&local_40,
                                                               &local_30);
                local_30.~shared_ptr();
                bVar1 = operator!=(&local_40, (_func_decltype_nullptr*)0);
                if (bVar1) {
                    local_30._0_8_ = SEXT48(*(int*)(in_RSI + 4));
                    m_fontCache.Put(&local_40, 1, (ulonglong*)&local_30);
                } else {
                    m_dataNotReady._0_1_ = 1;
                }
                shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                    (shared_ptr<RSevenDebugPresetProvider>*)this, &local_40);
            }
            local_40.~shared_ptr();
        }
        return this;
    }

    // 0x100268810, 48 bytes, placed by class name and debug map
    // HitmarkType::ResetCache()
    void HitmarkType::ResetCache() {
        m_recentUse.Reset();
        m_spriteCache.Reset();
        m_fontCache.Reset();
    }

    // 0x100290f80, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.1121
    void ___cxx_global_var_init_1121() {
        new (&HitmarkType::m_spriteCache)
            LRUHashCache<graphics::Pix32, 64ul, 65ul, false, unsigned long long>(64, "LRUHashCache");
        ___cxa_atexit(PTR__LRUHashCache_100ee58f0, &HitmarkType::m_spriteCache, 4294967296);
    }

} // namespace jag::oldscape::configdecoder

namespace jag {
    // 0x100267ba0, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::configdecoder::HitmarkType>::type make_shared<oldscape::configdecoder::HitmarkType>()
    jag* make_shared<oldscape::configdecoder::HitmarkType>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        HitmarkType* local_28[2];

        pvVar1 = (void*)aligned_alloc(152, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<oldscape::configdecoder::HitmarkType>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::configdecoder::HitmarkType>, int,
                                   oldscape::configdecoder::HitmarkType*&>(pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

} // namespace jag
