// libs/oldscape/rs2lib/configdecoder/HitmarkType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

#include "HitmarkType.h"

namespace jag::oldscape::configdecoder {
    // 0x1016bbd80
    int64_t HitmarkType::m_pConfigClient;

    // 0x1016bbd88
    int64_t HitmarkType::m_pSprites;

    // 0x1016bbd90
    int64_t HitmarkType::m_pFontMetrics;

    // 0x1016bbd98
    int64_t HitmarkType::m_numDefinitions;

    // 0x1016bbda0
    LRUHashCache<HitmarkType, 64ul, 65ul, false, unsigned long long> HitmarkType::m_recentUse;

    // 0x1016bd2a0, set at startup by ___cxx_global_var_init.1121
    LRUHashCache<graphics::Pix32, 64ul, 65ul, false, unsigned long long> HitmarkType::m_spriteCache =
        LRUHashCache<graphics::Pix32, 64ul, 65ul, false, unsigned long long>(64, "LRUHashCache");

    // 0x1016be7a0
    LRUHashCache<jstring::PixfontGeneric, 20ul, 21ul, false, unsigned long long> HitmarkType::m_fontCache;

    // 0x1016beee0
    int64_t HitmarkType::m_dataNotReady;

    // 0x1002679c0
    void HitmarkType::Init(jagex3::Js5* js51, jagex3::Js5* js52, jagex3::Js5* js53) {
        m_pConfigClient = js51;
        m_pSprites = js52;
        m_pFontMetrics = js53;
    }

    // 0x1002679e0
    auto HitmarkType::List(int arg1) {
        HitmarkType* hitmarkType;
        PacketJ<Array<unsigned char> _>* packetJ;
        ReturnValue local_40;
        ReturnValue local_30;

        local_30[0] = (ReturnValue)(long)arg1;
        auto groundDecor = m_recentUse.Find(local_30);
        auto result(groundDecor);
        if (!(result != nullptr)) {
            local_30 = shared_ptr();
            m_pConfigClient->GetFile(local_30, 32, arg1, nullptr);
            make_shared<HitmarkType>(&local_40);
            result = local_40;
            if (local_30 != nullptr) {
                hitmarkType = (HitmarkType*)(result).operator->();
                packetJ = (PacketJ<Array<unsigned char> _>*)*local_30;
                Decode(hitmarkType, packetJ);
            }
            local_40[0] = (ReturnValue)(long)arg1;
            m_recentUse.Put(result, 1, local_40);
        }
        return result;
    }

    // 0x100267c30
    void HitmarkType::Decode(PacketJ<Array<unsigned char>>& packetJ) {
        uint8_t bVar1;

        while (true) {
            bVar1 = packetJ.g1();
            if (bVar1 == 0)
                break;
            Decode(packetJ, (unsigned int)bVar1);
        }
    }

    // 0x100267d60
    void HitmarkType::Decode(PacketJ<Array<unsigned char>>& packetJ, int arg2) {
        uint8_t bVar1;
        short sVar2;
        unsigned short uVar3;
        unsigned int uVar4;
        int iVar6;
        unsigned int* puVar7;
        int* piVar8;
        uint32_t* puVar9;
        unsigned long arg1;
        uint8_t* this_01;
        PacketReaderMixin<PacketT<Array<unsigned char>>> local_58;
        unsigned int local_34;

        switch (arg2) {
        case 1:
            iVar6 = packetJ.gSmart2or4s();
            field_4 = iVar6;
            break;
        case 2:
            field_8 = packetJ.g3();
            break;
        case 3:
            iVar6 = packetJ.gSmart2or4s();
            field_16 = iVar6;
            break;
        case 4:
            iVar6 = packetJ.gSmart2or4s();
            field_24 = iVar6;
            break;
        case 5:
            iVar6 = packetJ.gSmart2or4s();
            field_20 = iVar6;
            break;
        case 6:
            iVar6 = packetJ.gSmart2or4s();
            field_28 = iVar6;
            break;
        case 7:
            sVar2 = packetJ.g2s();
            field_32 = (int)sVar2;
            break;
        case 8:
            PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<eastl::string>(&local_58,
                                                                                                 (uint8_t)packetJ);
            field_48 = &local_58;
            break;
        case 9:
            uVar3 = packetJ.g2();
            field_12 = (unsigned int)uVar3;
            break;
        case 10:
            sVar2 = packetJ.g2s();
            field_36 = (int)sVar2;
            break;
        case 11:
            field_40 = 0;
            break;
        case 12:
            bVar1 = packetJ.g1();
            field_80 = (unsigned int)bVar1;
            break;
        case 13:
            sVar2 = packetJ.g2s();
            field_84 = (int)sVar2;
            break;
        case 14:
            uVar3 = packetJ.g2();
            field_40 = (unsigned int)uVar3;
            break;
        default:
            if (arg2 - 17U < 2) {
                uVar3 = packetJ.g2();
                uVar4 = (unsigned int)uVar3;
                if (uVar3 == 65535) {
                    uVar4 = 4294967295;
                }
                field_112 = uVar4;
                uVar3 = packetJ.g2();
                uVar4 = (unsigned int)uVar3;
                if (uVar3 == 65535) {
                    uVar4 = 4294967295;
                }
                field_116 = uVar4;
                local_34 = 4294967295;
                if (arg2 == 18) {
                    uVar3 = packetJ.g2();
                    local_34 = 4294967295;
                    if (uVar3 != 65535) {
                        local_34 = (unsigned int)uVar3;
                    }
                }
                bVar1 = packetJ.g1();
                this_01 = &field_88;
                this_01->set_max_size((unsigned long)(bVar1 + 2), 5);
                arg1 = 0;
                do {
                    uVar3 = packetJ.g2();
                    puVar7 = (unsigned int*)(*this_01)[arg1];
                    *puVar7 = (unsigned int)uVar3;
                    piVar8 = (int*)(*this_01)[arg1];
                    if (*piVar8 == 65535) {
                        puVar9 = (uint32_t*)(*this_01)[arg1];
                        *puVar9 = 4294967295;
                    }
                    arg1 = arg1 + 1;
                } while (bVar1 + 1 != arg1);
                puVar7 = (unsigned int*)(*this_01)[(unsigned long)(bVar1 + 1)];
                *puVar7 = local_34;
            } else {
                (logger::default_logger())
                    ->Log(false, 8,
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                          "configdecoder/HitmarkType.cpp",
                          178, "Error unrecognised .hitmark config code: %i", arg2);
            }
        }
    }

    // 0x100268030
    auto HitmarkType::GetMultiHitmark() {
        int iVar1;
        int iVar2;
        int* piVar4;
        unsigned long arg1;

        if (field_112 == 4294967295) {
            if ((long)(int)field_116 != 18446744073709551615) {
                piVar4 = (int*)(*((Array<int>*)&ClientVarCache::m_var))[(long)(int)field_116];
                iVar1 = *piVar4;
                goto joined_r0x000100268074;
            }
        } else {
            iVar1 = ClientVarCache::GetVarbit(field_112);
        joined_r0x000100268074:
            if ((-1 < iVar1) && (iVar2 = field_88.end(), iVar1 < iVar2 - 1)) {
                arg1 = (unsigned long)iVar1;
                goto LAB_1002680b2;
            }
        }
        arg1 = field_88.end() - 1;
    LAB_1002680b2:
        piVar4 = &field_88[arg1];
        if (*piVar4 == -1) {
            auto result;
        } else {
            List(&result, *piVar4);
        }
        return result;
    }

    // 0x1002680e0
    auto HitmarkType::GetString(int arg1) {
        unsigned long arg2;
        eastl::string local_d8;
        ReturnValue local_b8;
        ReturnValue local_98;
        eastl::string local_78;
        ReturnValue local_58;

        auto result(field_48);
        while (true) {
            arg2 = result.find("%1", 0);
            if (arg2 == 18446744073709551615)
                break;
            local_58 = result.substr(0, arg2);
            local_98 = core::stringtools::general::StringTools::FromInt(arg1, false);
            local_78 + local_58;
            local_b8 = result.substr(arg2 + 2, 18446744073709551615);
            local_d8 + local_78;
            result = &local_d8;
        }
        return result;
    }

    // 0x100268260
    auto HitmarkType::GetIconSprite() {
        shared_ptr<dash3d::GroundDecor>* groundDecor;
        shared_ptr<dash3d::Decor> local_40;
        ReturnValue local_30;

        m_dataNotReady._0_1_ = 0;
        local_30[0] = (ReturnValue)(long)field_16;
        if ((long)local_30[0] < 0) {
            auto result;
        } else {
            groundDecor = (shared_ptr<dash3d::GroundDecor>*)m_spriteCache.Find(local_30);
            local_40 = shared_ptr(groundDecor);
            if (local_40 != nullptr) {
                result.shared_ptr<FileRSevenDebugPresetProvider, void>(local_40);
            } else {
                local_30 = graphics::pixloader::Makepix32(*m_pSprites, field_16, 0);
                local_40 = local_30;
                if (local_40 != nullptr) {
                    local_30[0] = (ReturnValue)(long)field_16;
                    m_spriteCache.Put(local_40, 1, local_30);
                } else {
                    m_dataNotReady._0_1_ = 1;
                }
                result.shared_ptr<FileRSevenDebugPresetProvider, void>(local_40);
            }
        }
        return result;
    }

    // 0x100268380
    auto HitmarkType::GetBackgroundSprite() {
        shared_ptr<dash3d::GroundDecor>* groundDecor;
        shared_ptr<dash3d::Decor> local_40;
        ReturnValue local_30;

        local_30[0] = (ReturnValue)(long)field_20;
        if ((long)local_30[0] < 0) {
            auto result;
        } else {
            groundDecor = (shared_ptr<dash3d::GroundDecor>*)m_spriteCache.Find(local_30);
            local_40 = shared_ptr(groundDecor);
            if (local_40 != nullptr) {
                result.shared_ptr<FileRSevenDebugPresetProvider, void>(local_40);
            } else {
                local_30 = graphics::pixloader::Makepix32(*m_pSprites, field_20, 0);
                local_40 = local_30;
                if (local_40 != nullptr) {
                    local_30[0] = (ReturnValue)(long)field_20;
                    m_spriteCache.Put(local_40, 1, local_30);
                } else {
                    m_dataNotReady._0_1_ = 1;
                }
                result.shared_ptr<FileRSevenDebugPresetProvider, void>(local_40);
            }
        }
        return result;
    }

    // 0x1002684a0
    auto HitmarkType::GetBackgroundLeftSprite() {
        shared_ptr<dash3d::GroundDecor>* groundDecor;
        shared_ptr<dash3d::Decor> local_40;
        ReturnValue local_30;

        local_30[0] = (ReturnValue)(long)field_24;
        if ((long)local_30[0] < 0) {
            auto result;
        } else {
            groundDecor = (shared_ptr<dash3d::GroundDecor>*)m_spriteCache.Find(local_30);
            local_40 = shared_ptr(groundDecor);
            if (local_40 != nullptr) {
                result.shared_ptr<FileRSevenDebugPresetProvider, void>(local_40);
            } else {
                local_30 = graphics::pixloader::Makepix32(*m_pSprites, field_24, 0);
                local_40 = local_30;
                if (local_40 != nullptr) {
                    local_30[0] = (ReturnValue)(long)field_24;
                    m_spriteCache.Put(local_40, 1, local_30);
                } else {
                    m_dataNotReady._0_1_ = 1;
                }
                result.shared_ptr<FileRSevenDebugPresetProvider, void>(local_40);
            }
        }
        return result;
    }

    // 0x1002685c0
    auto HitmarkType::GetBackgroundRightSprite() {
        shared_ptr<dash3d::GroundDecor>* groundDecor;
        shared_ptr<dash3d::Decor> local_40;
        ReturnValue local_30;

        local_30[0] = (ReturnValue)(long)field_28;
        if ((long)local_30[0] < 0) {
            auto result;
        } else {
            groundDecor = (shared_ptr<dash3d::GroundDecor>*)m_spriteCache.Find(local_30);
            local_40 = shared_ptr(groundDecor);
            if (local_40 != nullptr) {
                result.shared_ptr<FileRSevenDebugPresetProvider, void>(local_40);
            } else {
                local_30 = graphics::pixloader::Makepix32(*m_pSprites, field_28, 0);
                local_40 = local_30;
                if (local_40 != nullptr) {
                    local_30[0] = (ReturnValue)(long)field_28;
                    m_spriteCache.Put(local_40, 1, local_30);
                } else {
                    m_dataNotReady._0_1_ = 1;
                }
                result.shared_ptr<FileRSevenDebugPresetProvider, void>(local_40);
            }
        }
        return result;
    }

    // 0x1002686e0
    auto HitmarkType::GetFont() {
        shared_ptr<dash3d::GroundDecor>* groundDecor;
        shared_ptr<dash3d::Decor> local_40;
        ReturnValue local_30;

        m_dataNotReady._0_1_ = 0;
        local_30[0] = (ReturnValue)(long)field_4;
        if (local_30[0] == (ReturnValue)18446744073709551615) {
            auto result;
        } else {
            groundDecor = (shared_ptr<dash3d::GroundDecor>*)m_fontCache.Find(local_30);
            local_40 = shared_ptr(groundDecor);
            if (local_40 != nullptr) {
                result.shared_ptr<FileRSevenDebugPresetProvider, void>(local_40);
            } else {
                local_30 = graphics::pixloader::MakepixfontGeneric(*m_pSprites, *m_pFontMetrics, field_4, 0);
                local_40 = local_30;
                if (local_40 != nullptr) {
                    local_30[0] = (ReturnValue)(long)field_4;
                    m_fontCache.Put(local_40, 1, local_30);
                } else {
                    m_dataNotReady._0_1_ = 1;
                }
                result.shared_ptr<FileRSevenDebugPresetProvider, void>(local_40);
            }
        }
        return result;
    }

    // 0x100268810
    void HitmarkType::ResetCache() {
        m_recentUse.Reset();
        m_spriteCache.Reset();
        m_fontCache.Reset();
    }

} // namespace jag::oldscape::configdecoder

namespace jag {
    // 0x100267ba0
    shared_ptr_if_not_array<oldscape::configdecoder::HitmarkType>::type
    make_shared<oldscape::configdecoder::HitmarkType>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        HitmarkType* local_28[2];

        auto arg1 = aligned_alloc(152, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::configdecoder::HitmarkType>::type result;
        } else {
            local_28[0] = placement_new<oldscape::configdecoder::HitmarkType>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::configdecoder::HitmarkType>, int,
                              oldscape::configdecoder::HitmarkType*&>(arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

} // namespace jag
