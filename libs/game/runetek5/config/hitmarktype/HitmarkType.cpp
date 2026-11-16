// libs/game/runetek5/config/hitmarktype/HitmarkType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "HitmarkType.h"

namespace jag::game {
    // 0x1039bbc40, set at startup by ___cxx_global_var_init.17
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> HitmarkType::NullHitmarkType =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x1003cf2c0: HitmarkType::GetOverride() const has the same machine code as MapElementType::GetTextRGBA() const

    // 0x1003f65a0: HitmarkType::GetDuration() const has the same machine code as EntityRoute::GetStalledTickCount() const

    // 0x100544e30
    HitmarkType::HitmarkType(BaseTemplateConfigTypeList<HitmarkType>* baseTemplateConfigTypeList, int arg2)
        : ConfigType<HitmarkType>(baseTemplateConfigTypeList, arg2), MakeSharedPool<HitmarkType, 32>(), field_56(0),
          field_60(4294967295), field_64(16777215), m_duration(70), field_72(4294967295), field_76(4294967295),
          field_80(4294967295), field_84(4294967295), field_88(0), field_92(0), field_96(4294967295),
          m_override(4294967295), field_132(0), field_136(0), field_140(0), field_168(4294967295),
          field_172(4294967295), field_176(1), field_180(1) {}

    // 0x100544fc0
    uint8_t* HitmarkType::DecodeType(PacketT<Array<unsigned char>>& arg1, unsigned int arg2) {
        uint8_t bVar1;
        unsigned short uVar2;
        short sVar3;
        unsigned int uVar4;
        uint32_t uVar5;
        unsigned int* puVar6;
        int* piVar7;
        uint32_t* puVar8;
        unsigned long arg1_00;
        uint8_t* this_01;

        switch (arg2) {
        case 1:
            uVar5 = arg1.gSmart2or4s();
            field_60 = uVar5;
            break;
        case 2:
            uVar5 = arg1.g3();
            field_64 = uVar5;
            field_56 = 1;
            break;
        case 3:
            uVar5 = arg1.gSmart2or4s();
            field_72 = uVar5;
            break;
        case 4:
            uVar5 = arg1.gSmart2or4s();
            field_80 = uVar5;
            break;
        case 5:
            uVar5 = arg1.gSmart2or4s();
            field_76 = uVar5;
            break;
        case 6:
            uVar5 = arg1.gSmart2or4s();
            field_84 = uVar5;
            break;
        case 7:
            sVar3 = arg1.g2s();
            field_88 = (int)sVar3;
            break;
        case 8:
            arg1.gStringCP1252ToUTF8<eastl::basic_string<char, BucketAllocatorEASTL>>(&field_104, true);
            break;
        case 9:
            uVar2 = arg1.g2();
            m_duration = (unsigned int)uVar2;
            break;
        case 10:
            sVar3 = arg1.g2s();
            field_92 = (int)sVar3;
            break;
        case 11:
            field_96 = 0;
            break;
        case 12:
            bVar1 = arg1.g1();
            m_override = (unsigned int)bVar1;
            break;
        case 13:
            sVar3 = arg1.g2s();
            field_132 = (int)sVar3;
            break;
        case 14:
            uVar2 = arg1.g2();
            field_96 = (unsigned int)uVar2;
            break;
        default:
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "hitmarktype/HitmarkType.cpp",
                      144, "Unrecognised .hitmark config code: %u", arg2);
            break;
        case 16:
            sVar3 = arg1.g2s();
            field_136 = (int)sVar3;
            sVar3 = arg1.g2s();
            field_140 = (int)sVar3;
            break;
        case 17:
        case 18:
            uVar2 = arg1.g2();
            uVar4 = (unsigned int)uVar2;
            if (uVar2 == 65535) {
                uVar4 = 4294967295;
            }
            field_172 = uVar4;
            uVar2 = arg1.g2();
            uVar4 = (unsigned int)uVar2;
            if (uVar2 == 65535) {
                uVar4 = 4294967295;
            }
            field_168 = uVar4;
            uVar4 = 4294967295;
            if (arg2 == 18) {
                uVar2 = arg1.g2();
                uVar4 = 4294967295;
                if (uVar2 != 65535) {
                    uVar4 = (unsigned int)uVar2;
                }
            }
            bVar1 = arg1.g1();
            this_01 = &field_144;
            arg1_00 = 0;
            this_01->set_max_size((unsigned long)(bVar1 + 2), 0);
            do {
                uVar2 = arg1.g2();
                puVar6 = (unsigned int*)(*this_01)[arg1_00];
                *puVar6 = (unsigned int)uVar2;
                piVar7 = (int*)(*this_01)[arg1_00];
                if (*piVar7 == 65535) {
                    puVar8 = (uint32_t*)(*this_01)[arg1_00];
                    *puVar8 = 4294967295;
                }
                arg1_00 = arg1_00 + 1;
            } while (bVar1 + 1 != arg1_00);
            puVar6 = (unsigned int*)(*this_01)[(unsigned long)(bVar1 + 1)];
            *puVar6 = uVar4;
            break;
        case 19:
            sVar3 = arg1.g2s();
            field_176 = (int)sVar3;
            break;
        case 20:
            sVar3 = arg1.g2s();
            field_180 = (int)sVar3;
        }
        return DataStatus::READY;
    }

    // 0x1005452c0
    void HitmarkType::PostDecode() {}

    // 0x1005452d0
    auto HitmarkType::GetText(int arg1) {
        auto result;
        char* pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        unsigned long uVar4 = field_104.size();
        result.assign(pcVar3, uVar4);
        int iVar1 = field_176;
        int iVar2 = field_180;
        basic_string<char, BucketAllocatorEASTL> local_48;
        local_48.sprintf("%d", (long)(iVar1 * arg1) / (long)iVar2 & 4294967295);
        while (true) {
            uVar4 = result.find("%1", 0);
            if (uVar4 == 18446744073709551615)
                break;
            pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            result.replace(uVar4, 2, pcVar3);
        }
        return result;
    }

    // 0x100545420
    shared_ptr* HitmarkType::GetSpriteInner(graphics::RT7Core& rt7Core, int arg2) {
        HitmarkTypeList* this_00;
        shared_ptr* psVar2;

        if (arg2 < 0) {
            psVar2 = (shared_ptr*)&graphics::SpriteAtlasReference::NullSpriteAtlasReference;
        } else {
            this_00 = (HitmarkTypeList*)field_24;
            psVar2 = (shared_ptr*)this_00->FindCachedSprite(arg2);
            if (shared_ptr::operator_cast_to_bool(psVar2)) {
                if (((SpriteAtlasReference*)(*psVar2).operator->())->IsReady()) {
                    return psVar2;
                }
            }
            CacheSprites(rt7Core);
            psVar2 = (shared_ptr*)this_00->FindCachedSprite(arg2);
        }
        return psVar2;
    }

    // 0x1005454a0
    void HitmarkType::CacheSprites(graphics::RT7Core& rt7Core) {
        CacheSpriteInner(rt7Core, field_72);
        CacheSpriteInner(rt7Core, field_76);
        CacheSpriteInner(rt7Core, field_80);
        CacheSpriteInner(rt7Core, field_84);
    }

    // 0x1005454f0
    void HitmarkType::GetIconSprite(graphics::RT7Core& rt7Core) {
        GetSpriteInner(rt7Core, field_72);
    }

    // 0x100545500
    void HitmarkType::GetBackgroundSprite(graphics::RT7Core& rt7Core) {
        GetSpriteInner(rt7Core, field_76);
    }

    // 0x100545510
    void HitmarkType::GetBackgroundLeftSprite(graphics::RT7Core& rt7Core) {
        GetSpriteInner(rt7Core, field_80);
    }

    // 0x100545520
    void HitmarkType::GetBackgroundRightSprite(graphics::RT7Core& rt7Core) {
        GetSpriteInner(rt7Core, field_84);
    }

    // 0x100545530
    auto HitmarkType::GetMultiHitmark(const PlayerVarDomain* playerVarDomain, ConfigProvider* configProvider) {
        uint8_t uVar3;
        uint32_t extraout_var;
        int iVar4;
        int iVar5;
        int* piVar6;
        long lVar7;
        shared_ptr<oldscape::dash3d::GroundDecor>* groundDecor;
        uint64_t extraout_var_00;
        enable_shared_from_this<PathingEntity> local_50;

        BaseTemplateConfigTypeList<HitmarkType>* local_40 = field_24;
        uint8_t* this_00 = &field_144;
        bool cVar2 = this_00->empty();
        if ((cVar2) || (playerVarDomain == nullptr)) {
            local_50.shared_from_this();
            static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(&result);
            return result;
        }
        if (field_172 == 4294967295) {
            iVar5 = -1;
            if (field_168 != 4294967295) {
                cVar2 = (configProvider->GetVarType(VarDomainType::PLAYER, field_168))->operator_cast_to_bool();
                if (cVar2) {
                    uVar3 = playerVarDomain->GetVarValue();
                    iVar5 = ((VarValue*)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar3))->GetInt();
                }
            }
        } else {
            configProvider->GetVarBitType(field_172);
            uVar3 = playerVarDomain->GetVarBitValue();
            iVar5 = (((uint32_t)extraout_var << 8) | (uint8_t)uVar3);
        }
        if ((iVar5 < 0) || (iVar4 = this_00->end(), iVar4 - 1 <= iVar5)) {
            lVar7 = this_00->end();
            piVar6 = (int*)(*this_00)[lVar7 - 1];
            iVar5 = *piVar6;
            if (iVar5 == -1)
                goto LAB_100545683;
        } else {
            piVar6 = (int*)(*this_00)[(long)iVar5];
            if (*piVar6 == -1) {
            LAB_100545683:
                groundDecor = (shared_ptr<oldscape::dash3d::GroundDecor>*)&NullHitmarkType;
                goto LAB_100545691;
            }
            piVar6 = (int*)(*this_00)[(long)iVar5];
            iVar5 = *piVar6;
        }
        groundDecor = (shared_ptr<oldscape::dash3d::GroundDecor>*)local_40->List(iVar5, nullptr);
    LAB_100545691:
        return auto(groundDecor);
    }

    // 0x1005456c0
    void HitmarkType::CacheSpriteInner(graphics::RT7Core& rt7Core, int arg2) {
        unsigned int uVar2;
        LoginManager* this_04;
        CoordMapSquare* pCVar4;
        PacketView local_a8;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_80;
        shared_ptr<graphics::SpriteAtlasReference> local_70;
        SpriteAtlasManager* local_60;
        uint64_t local_58;
        vector<RGBAImage, BucketAllocatorEASTL> local_50;
        unsigned int local_34;

        EnumType* this_00 = (EnumType*)field_24;
        auto this_01 = this_00->GetOutputType();
        if (-1 < arg2) {
            if (!((this_00->FindCachedSprite(arg2))->operator_cast_to_bool())) {
                local_a8 = PacketView();
                if ((uint8_t*)this_01->GetFile(local_a8, *(Js5Archive::JS5_SPRITES), arg2, 0, (Priority*)Priority::HIGH,
                                               true, false, false) == DataStatus::READY) {
                    local_50 = eastl::vector<RGBAImage, BucketAllocatorEASTL>();
                    if (RAWDecoder::LoadFromPacket(local_50, local_a8)) {
                        local_60 = rt7Core.GetTextureManager()->GetSpriteAtlasManager();
                        this_04 = &local_50[0];
                        local_58 = ((Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)
                                        this_04->GetDevCredentialsOutputDirectory())
                                       ->data();
                        pCVar4 = &local_50[0];
                        local_34 = pCVar4->GetX();
                        pCVar4 = &local_50[0];
                        uVar2 = pCVar4->GetZ();
                        ((compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)local_50[0])
                            ->second();
                        local_80 = shared_ptr();
                        graphics::SpriteAtlasManager::AddRuntimeSprite(
                            &local_70, (unsigned int)local_60, (unsigned int)local_58, local_34,
                            *((fixed_vector<int, _4ul>*)(unsigned long)uVar2), DAT_00000001);
                        this_00->CacheSprite(local_70, arg2);
                    }
                }
            }
        }
    }

} // namespace jag::game
