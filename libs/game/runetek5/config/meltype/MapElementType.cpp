// libs/game/runetek5/config/meltype/MapElementType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "MapElementType.h"

namespace jag::game {
    // 0x1039bbc00, set at startup by ___cxx_global_var_init.13
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> MapElementType::NullMapElementType =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x1000fa830: MapElementType::GetMyID() const has the same machine code as oldscape::graphics::NXTPixScreen::GetWidth() const

    // 0x10012f260: MapElementType::GetTextSize() const has the same machine code as oldscape::social::OnlinePlayerData<oldscape::social::FriendChatUser>::GetWorldId() const

    // 0x1001be5d0: MapElementType::GetSpriteID() const has the same machine code as graphics::SunlightOptions::GetShadowQuality() const

    // 0x100515c90
    uint8_t* MapElementType::DecodeType(PacketT<Array<unsigned char>>& arg1, unsigned int arg2) {
        PacketReaderMixin<PacketT<Array<unsigned char>>>* this_00;
        char cVar1;
        uint8_t bVar2;
        unsigned short uVar3;
        short sVar4;
        short sVar5;
        int iVar6;
        unsigned int uVar7;
        uint32_t uVar8;
        fixed_string<char, _8>* str;
        unsigned int* puVar9;
        int* piVar10;
        uint32_t* puVar11;
        vector<math::Point<int>>* pvVar12;
        Layout* this_01;
        Vector2T<int>* this_02;
        Js5RequestKey* this_03;
        Point<int>* point;
        vector<math::Point<int>>* points;
        long lVar13;
        unsigned long uVar14;
        unsigned long uVar15;
        uint8_t* puVar16;
        fixed_string<char, _24>* str_00;
        unique_ptr<MapElementType::Polygon, MakeUniquePool<MapElementType::Polygon, _256>::UniquePoolDeleter> local_48;
        PacketReaderMixin<PacketT<Array<unsigned char>>>* local_40;
        unsigned long local_38;

        switch (arg2) {
        case 1:
            uVar7 = arg1.gSmart2or4s();
            m_spriteID = uVar7;
            break;
        case 2:
            uVar7 = arg1.gSmart2or4s();
            field_60 = uVar7;
            break;
        case 3:
            str_00 = (fixed_string<char, _24>*)&field_64;
            goto LAB_1005162cc;
        case 4:
            iVar6 = arg1.g3();
            m_textRGBA = iVar6 << 8 | 255;
            break;
        case 5:
            iVar6 = arg1.g3();
            m_textMouseOverRGBA = iVar6 << 8 | 255;
            break;
        case 6:
            bVar2 = arg1.g1();
            m_textSize = (unsigned int)bVar2;
            break;
        case 7:
            uVar14 = arg1.g1();
            if ((uVar14 & 1) == 0) {
                m_showOnWorldMap = 0;
            }
            if ((uVar14 & 2) != 0) {
                m_showOnMiniMap = 1;
            }
            break;
        case 8:
            cVar1 = arg1.g1();
            field_150 = cVar1 == '\x01';
            break;
        case 9:
            uVar3 = arg1.g2();
            uVar7 = (unsigned int)uVar3;
            if (uVar3 == 65535) {
                uVar7 = 4294967295;
            }
            field_260 = uVar7;
            uVar3 = arg1.g2();
            uVar7 = (unsigned int)uVar3;
            if (uVar3 == 65535) {
                uVar7 = 4294967295;
            }
            field_264 = uVar7;
            iVar6 = arg1.g4();
            field_252 = iVar6;
            iVar6 = arg1.g4();
            field_256 = iVar6;
            break;
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
            puVar16 = &field_152;
            cVar1 = puVar16->empty();
            if (cVar1) {
                puVar16->resize(5);
            }
            str = (fixed_string<char, _8>*)(*puVar16)[(long)(int)(arg2 - 10)];
            arg1.gStringCP1252ToUTF8<eastl::fixed_string<char, 8>>(*str, false);
            break;
        case 15:
            puVar16 = &field_312;
            cVar1 = puVar16->operator_cast_to_bool();
            if (!cVar1) {
                MakeUniquePool<MapElementType::Polygon, 256>::MakeUnique<>();
                *puVar16 = local_48;
            }
            bVar2 = arg1.g1();
            pvVar12 = (vector<math::Point<int>>*)(*puVar16).operator->();
            uVar14 = (unsigned long)bVar2;
            pvVar12->resize(uVar14);
            if (bVar2 != 0) {
                uVar15 = 0;
                local_40 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)arg1;
                do {
                    this_00 = local_40;
                    sVar5 = local_40->g2s();
                    sVar4 = this_00->g2s();
                    pvVar12 = (vector<math::Point<int>>*)(*puVar16).operator->();
                    this_01 = (Layout*)(*pvVar12)[uVar15];
                    piVar10 = (int*)this_01->SSOBeginPtr();
                    *piVar10 = (int)sVar5 << 7;
                    pvVar12 = (vector<math::Point<int>>*)(*puVar16).operator->();
                    this_02 = (Vector2T<int>*)(*pvVar12)[uVar15];
                    piVar10 = (int*)this_02->y();
                    *piVar10 = (int)sVar4 << 7;
                    uVar15 = uVar15 + 1;
                    arg1 = (PacketT<Array<unsigned char> _>*)local_40;
                } while (uVar14 != uVar15);
            }
            local_38 = uVar14;
            uVar7 = arg1.g4();
            lVar13 = (*puVar16).operator->();
            *(unsigned int*)(lVar13 + 48) = uVar7 << 8 | uVar7 >> 24;
            bVar2 = arg1.g1();
            lVar13 = (*puVar16).operator->();
            ((lVar13 + 64))->set_max_size((unsigned long)bVar2, 0);
            if (bVar2 != 0) {
                uVar14 = 0;
                do {
                    uVar7 = arg1.g4();
                    lVar13 = (*puVar16).operator->();
                    puVar9 = (unsigned int*)(*((lVar13 + 64)))[uVar14];
                    *puVar9 = uVar7 << 8 | uVar7 >> 24;
                    uVar14 = uVar14 + 1;
                } while (bVar2 != uVar14);
            }
            lVar13 = (*puVar16).operator->();
            uVar14 = local_38;
            ((lVar13 + 88))->set_max_size(local_38, 0);
            if (uVar14 != 0) {
                uVar15 = 0;
                do {
                    cVar1 = arg1.g1s();
                    lVar13 = (*puVar16).operator->();
                    piVar10 = (int*)(*((lVar13 + 88)))[uVar15];
                    *piVar10 = (int)cVar1;
                    uVar15 = uVar15 + 1;
                } while (uVar14 != uVar15);
            }
            pvVar12 = (vector<math::Point<int>>*)(*puVar16).operator->();
            this_03 = (Js5RequestKey*)pvVar12->front();
            pvVar12 = (vector<math::Point<int>>*)(*puVar16).operator->();
            point = (Point<int>*)pvVar12->back();
            cVar1 = *this_03 == *point;
            if (cVar1) {
                pvVar12 = (vector<math::Point<int>>*)(*puVar16).operator->();
                pvVar12->pop_back();
            }
            points = (vector<math::Point<int>>*)(*puVar16).operator->();
            Triangulate::ConvertPolygon(*((points + 112)), *points);
            break;
        case 16:
            m_listable = 0;
            break;
        case 17:
            str_00 = (fixed_string<char, _24>*)&field_184;
        LAB_1005162cc:
            arg1.gStringCP1252ToUTF8<eastl::fixed_string<char, 24>>(*str_00, false);
            break;
        case 18:
            uVar8 = arg1.gSmart2or4s();
            field_248 = uVar8;
            break;
        case 19:
            uVar3 = arg1.g2();
            m_category = (unsigned int)uVar3;
            break;
        case 20:
            uVar3 = arg1.g2();
            uVar7 = (unsigned int)uVar3;
            if (uVar3 == 65535) {
                uVar7 = 4294967295;
            }
            field_276 = uVar7;
            uVar3 = arg1.g2();
            uVar7 = (unsigned int)uVar3;
            if (uVar3 == 65535) {
                uVar7 = 4294967295;
            }
            field_280 = uVar7;
            iVar6 = arg1.g4();
            field_268 = iVar6;
            iVar6 = arg1.g4();
            field_272 = iVar6;
            break;
        case 21:
            uVar7 = arg1.g4();
            m_textBackgroundOutlineRGBA = uVar7 << 8 | uVar7 >> 24;
            break;
        case 22:
            uVar7 = arg1.g4();
            m_textBackgroundFillRGBA = uVar7 << 8 | uVar7 >> 24;
            break;
        case 23:
            puVar16 = &field_312;
            cVar1 = puVar16->operator_cast_to_bool();
            if (!cVar1) {
                MakeUniquePool<MapElementType::Polygon, 256>::MakeUnique<>();
                *puVar16 = local_48;
            }
            bVar2 = arg1.g1();
            lVar13 = (*puVar16).operator->();
            *(unsigned int*)(lVar13 + 52) = (unsigned int)bVar2;
            bVar2 = arg1.g1();
            lVar13 = (*puVar16).operator->();
            *(unsigned int*)(lVar13 + 56) = (unsigned int)bVar2;
            bVar2 = arg1.g1();
            lVar13 = (*puVar16).operator->();
            *(unsigned int*)(lVar13 + 60) = (unsigned int)bVar2;
            break;
        case 24:
            sVar5 = arg1.g2s();
            field_320 = (int)sVar5 << 7;
            sVar5 = arg1.g2s();
            field_324 = (int)sVar5 << 7;
            break;
        case 25:
            uVar8 = arg1.gSmart2or4s();
            m_flashSpriteID = uVar8;
            break;
        case 26:
        case 27:
            uVar3 = arg1.g2();
            uVar7 = (unsigned int)uVar3;
            if (uVar3 == 65535) {
                uVar7 = 4294967295;
            }
            field_260 = uVar7;
            uVar3 = arg1.g2();
            uVar7 = (unsigned int)uVar3;
            if (uVar3 == 65535) {
                uVar7 = 4294967295;
            }
            field_264 = uVar7;
            uVar7 = 4294967295;
            if (arg2 == 27) {
                uVar3 = arg1.g2();
                uVar7 = 4294967295;
                if (uVar3 != 65535) {
                    uVar7 = (unsigned int)uVar3;
                }
            }
            local_38 = (((uint64_t)local_38._4_4_ << 32) | (uint32_t)uVar7);
            bVar2 = arg1.g1();
            puVar16 = &field_288;
            uVar14 = 0;
            puVar16->set_max_size((unsigned long)(bVar2 + 2), 0);
            do {
                uVar3 = arg1.g2();
                puVar9 = (unsigned int*)(*puVar16)[uVar14];
                *puVar9 = (unsigned int)uVar3;
                piVar10 = (int*)(*puVar16)[uVar14];
                if (*piVar10 == 65535) {
                    puVar11 = (uint32_t*)(*puVar16)[uVar14];
                    *puVar11 = 4294967295;
                }
                uVar14 = uVar14 + 1;
            } while (bVar2 + 1 != uVar14);
            puVar11 = (uint32_t*)(*puVar16)[(unsigned long)(bVar2 + 1)];
            *puVar11 = (uint32_t)local_38;
            break;
        case 28:
            bVar2 = arg1.g1();
            m_minimapIconScale = (unsigned int)bVar2;
            break;
        case 29:
            bVar2 = arg1.g1();
            m_hAlign = (unsigned int)bVar2;
            break;
        case 30:
            bVar2 = arg1.g1();
            m_vAlign = (unsigned int)bVar2;
            break;
        default:
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "meltype/MapElementType.cpp",
                      262, "Unrecognised .mel config code: %u", arg2);
            break;
        case 249:
            DecodeParams(arg1);
        }
        return DataStatus::READY;
    }

    // 0x100517070
    void MapElementType::PostDecode() {
        int iVar1;
        uint32_t uVar3;
        vector<eastl::pair<int, int>>* pvVar4;
        long lVar5;
        vector<math::Point<int>>* pvVar6;
        Layout* this_00;
        int* piVar7;
        Vector2T<int>* this_01;
        unsigned long uVar8;
        int iVar9;
        unsigned int uVar10;
        int iVar11;
        unsigned long arg1;

        uint8_t* this_02 = &field_312;
        if (this_02->operator_cast_to_bool() != '\0') {
            pvVar4 = (vector<eastl::pair<int, int>>*)(*this_02).operator->();
            lVar5 = pvVar4->size();
            if (lVar5 != 0) {
                uVar10 = 2;
                arg1 = 0;
                do {
                    pvVar6 = (vector<math::Point<int>>*)(*this_02).operator->();
                    this_00 = (Layout*)(*pvVar6)[arg1];
                    piVar7 = (int*)this_00->SSOBeginPtr();
                    iVar1 = *piVar7;
                    iVar9 = iVar1 + 127;
                    if (-1 < iVar1) {
                        iVar9 = iVar1;
                    }
                    pvVar6 = (vector<math::Point<int>>*)(*this_02).operator->();
                    this_01 = (Vector2T<int>*)(*pvVar6)[arg1];
                    piVar7 = (int*)this_01->y();
                    iVar1 = *piVar7;
                    iVar11 = iVar1 + 127;
                    if (-1 < iVar1) {
                        iVar11 = iVar1;
                    }
                    lVar5 = (*this_02).operator->();
                    uVar3 = eastl::min<graphics::GraphicsQuality>(*(EnumOptionToggle*)(lVar5 + 32), iVar9 >> 7);
                    lVar5 = (*this_02).operator->();
                    *(uint32_t*)(lVar5 + 32) = uVar3;
                    lVar5 = (*this_02).operator->();
                    uVar3 = eastl::max<int>(*(ShaderVariablePrecision*)(lVar5 + 40), iVar9 >> 7);
                    lVar5 = (*this_02).operator->();
                    *(uint32_t*)(lVar5 + 40) = uVar3;
                    lVar5 = (*this_02).operator->();
                    uVar3 = eastl::min<graphics::GraphicsQuality>(*(EnumOptionToggle*)(lVar5 + 36), iVar11 >> 7);
                    lVar5 = (*this_02).operator->();
                    *(uint32_t*)(lVar5 + 36) = uVar3;
                    lVar5 = (*this_02).operator->();
                    uVar3 = eastl::max<int>(*(ShaderVariablePrecision*)(lVar5 + 44), iVar11 >> 7);
                    lVar5 = (*this_02).operator->();
                    *(uint32_t*)(lVar5 + 44) = uVar3;
                    arg1 = (unsigned long)uVar10;
                    pvVar4 = (vector<eastl::pair<int, int>>*)(*this_02).operator->();
                    uVar8 = pvVar4->size();
                    uVar10 = uVar10 + 2;
                } while (arg1 < uVar8);
            }
        }
    }

    // 0x1005171d0
    PacketView* MapElementType::GetSprite(graphics::RT7Core& rt7Core, bool arg2) {
        unsigned int arg3;
        bool bVar1;
        unsigned int uVar3;
        LoginManager* this_04;
        CoordMapSquare* pCVar5;
        uint64_t in_register_00000011;
        PacketView local_b0;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_88;
        shared_ptr<graphics::SpriteAtlasReference> local_78;
        SpriteAtlasManager* local_60;
        uint64_t local_58;
        vector<RGBAImage, BucketAllocatorEASTL> local_50;
        unsigned int local_38;
        char local_31;

        if (((int)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2) == 0) ||
            (arg3 = field_60, arg3 == 4294967295)) {
            arg3 = m_spriteID;
        }
        if (arg3 == 4294967295) {
            return (PacketView*)&graphics::SpriteAtlasReference::NullSpriteAtlasReference;
        }
        MapElementTypeList* local_68 = (MapElementTypeList*)field_24;
        auto this_00 = local_68->FindCachedSprite(arg3);
        if (this_00->operator_cast_to_bool()) {
            if (((SpriteAtlasReference*)(*this_00).operator->())->IsReady()) {
                return this_00;
            }
        }
        auto this_02 = field_24->GetOutputType();
        PacketView* this_07 = &local_b0;
        new (this_07) PacketView();
        if ((uint8_t*)this_02->GetFile(*this_07, *(Js5Archive::JS5_SPRITES), arg3, 0, (Priority*)Priority::HIGH, true,
                                       false, false) == DataStatus::READY) {
            local_50 = eastl::vector<RGBAImage, BucketAllocatorEASTL>();
            local_31 = RAWDecoder::LoadFromPacket(local_50, local_b0);
            if (local_31 != '\0') {
                local_60 = rt7Core.GetTextureManager()->GetSpriteAtlasManager();
                this_04 = &local_50[0];
                local_58 = ((Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)
                                this_04->GetDevCredentialsOutputDirectory())
                               ->data();
                pCVar5 = &local_50[0];
                local_38 = pCVar5->GetX();
                pCVar5 = &local_50[0];
                uVar3 = pCVar5->GetZ();
                ((compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)local_50[0])->second();
                local_88 = shared_ptr();
                graphics::SpriteAtlasManager::AddRuntimeSprite(
                    &local_78, (unsigned int)local_60, (unsigned int)local_58, local_38,
                    *((fixed_vector<int, _4ul>*)(unsigned long)uVar3), DAT_00000001);
                this_07 = local_68->CacheSprite(local_78, arg3);
            }
            if (local_31 != '\0') {
                bVar1 = false;
                goto LAB_1005173c6;
            }
        }
        bVar1 = true;
    LAB_1005173c6:
        if (bVar1) {
            return this_00;
        }
        return this_07;
    }

    // 0x1005174a0
    PacketView* MapElementType::GetFlashSprite(graphics::RT7Core& rt7Core) {
        bool bVar1;
        LoginManager* this_04;
        CoordMapSquare* pCVar4;
        PacketView local_b0;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_88;
        shared_ptr<graphics::SpriteAtlasReference> local_78;
        SpriteAtlasManager* local_68;
        uint64_t local_60;
        vector<RGBAImage, BucketAllocatorEASTL> local_58;
        unsigned int local_38;
        unsigned int local_34;

        if (m_flashSpriteID == -1) {
            return (PacketView*)&graphics::SpriteAtlasReference::NullSpriteAtlasReference;
        }
        MapElementTypeList* this_00 = (MapElementTypeList*)field_24;
        auto local_40 = this_00->FindCachedSprite(m_flashSpriteID);
        bool cVar2 = local_40->operator_cast_to_bool();
        if (cVar2) {
            cVar2 = ((SpriteAtlasReference*)(*local_40).operator->())->IsReady();
            if (cVar2) {
                return local_40;
            }
        }
        auto this_02 = field_24->GetOutputType();
        PacketView* this_07 = &local_b0;
        new (this_07) PacketView();
        if ((uint8_t*)this_02->GetFile(*this_07, *(Js5Archive::JS5_SPRITES), m_flashSpriteID, 0,
                                       (Priority*)Priority::HIGH, true, false, false) == DataStatus::READY) {
            local_58 = eastl::vector<RGBAImage, BucketAllocatorEASTL>();
            cVar2 = RAWDecoder::LoadFromPacket(local_58, local_b0);
            if (cVar2) {
                local_68 = rt7Core.GetTextureManager()->GetSpriteAtlasManager();
                this_04 = &local_58[0];
                local_60 = ((Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)
                                this_04->GetDevCredentialsOutputDirectory())
                               ->data();
                pCVar4 = &local_58[0];
                local_38 = pCVar4->GetX();
                pCVar4 = &local_58[0];
                local_34 = pCVar4->GetZ();
                ((compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)local_58[0])->second();
                local_88 = shared_ptr();
                graphics::SpriteAtlasManager::AddRuntimeSprite(
                    &local_78, (unsigned int)local_68, (unsigned int)local_60, local_38,
                    *((fixed_vector<int, _4ul>*)(unsigned long)local_34), DAT_00000001);
                this_07 = this_00->CacheSprite(local_78, m_flashSpriteID);
            }
            if (cVar2) {
                bVar1 = false;
                goto LAB_100517671;
            }
        }
        bVar1 = true;
    LAB_100517671:
        if (bVar1) {
            return local_40;
        }
        return this_07;
    }

    // 0x1005176f0
    auto MapElementType::GetMultiME(const PlayerVarDomain* playerVarDomain, ConfigProvider* configProvider) {
        BaseTemplateConfigTypeList<MapElementType>* this_01;
        uint8_t uVar2;
        uint32_t extraout_var;
        int iVar4;
        uint64_t extraout_var_00;
        int* piVar5;
        shared_ptr<oldscape::dash3d::GroundDecor>* psVar6;
        int* piVar7;
        enable_shared_from_this<PathingEntity> local_40;

        uint8_t* this_00 = &field_288;
        if (this_00->empty() != '\0') {
            local_40.shared_from_this();
            static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(&result);
            return result;
        }
        int iVar3 = -1;
        if (playerVarDomain != nullptr) {
            if (field_260 == 4294967295) {
                if (field_264 != 4294967295) {
                    configProvider->GetVarType(VarDomainType::PLAYER, field_264);
                    uVar2 = playerVarDomain->GetVarValue();
                    iVar3 = ((VarValue*)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar2))->GetInt();
                }
            } else {
                configProvider->GetVarBitType(field_260);
                uVar2 = playerVarDomain->GetVarBitValue();
                iVar3 = (((uint32_t)extraout_var << 8) | (uint8_t)uVar2);
            }
        }
        if ((iVar3 < 0) || (iVar4 = this_00->end(), iVar4 - 1 <= iVar3)) {
            piVar5 = (int*)this_00->data();
            piVar7 = (int*)this_00->end();
            for (; piVar5 != piVar7; piVar5 = piVar5 + 1) {
                if (*piVar5 != -1) {
                    psVar6 = (shared_ptr<oldscape::dash3d::GroundDecor>*)field_24->List(*piVar5, nullptr);
                    return auto(psVar6);
                }
            }
        } else {
            piVar5 = (int*)(*this_00)[(long)iVar3];
            if (*piVar5 != -1) {
                this_01 = field_24;
                piVar5 = (int*)(*this_00)[(long)iVar3];
                psVar6 = (shared_ptr<oldscape::dash3d::GroundDecor>*)this_01->List(*piVar5, nullptr);
                goto LAB_10051784b;
            }
        }
        psVar6 = (shared_ptr<oldscape::dash3d::GroundDecor>*)&NullMapElementType;
    LAB_10051784b:
        new (&result) shared_ptr(psVar6);
        return result;
    }

    // 0x1005178b0
    uint8_t* MapElementType::VariableTest(bool& arg1, const PlayerVarDomain* playerVarDomain,
                                          ConfigProvider* configProvider) {
        uint8_t* this_00;
        uint8_t uVar1;
        bool cVar2;
        int iVar3;
        uint32_t extraout_var;
        int iVar4;
        uint32_t extraout_var_00;
        uint64_t extraout_var_01;
        int* piVar5;
        uint64_t extraout_var_02;
        uint8_t** ppuVar6;

        arg1 = false;
        unsigned int arg2 = field_264;
        if (playerVarDomain == nullptr) {
            ppuVar6 = &DataStatus::MISSING;
            if ((arg2 != 4294967295) || (field_260 != 4294967295))
                goto LAB_100517a82;
        LAB_100517a74:
            arg1 = true;
        } else {
            if (arg2 == 4294967295) {
                if (field_260 == 4294967295)
                    goto LAB_100517a74;
                configProvider->GetVarBitType(field_260);
                uVar1 = playerVarDomain->GetVarBitValue();
                iVar3 = (((uint32_t)extraout_var << 8) | (uint8_t)uVar1);
            } else {
                configProvider->GetVarType(VarDomainType::PLAYER, arg2);
                uVar1 = playerVarDomain->GetVarValue();
                iVar3 = ((VarValue*)(((uint64_t)extraout_var_01 << 8) | (uint8_t)uVar1))->GetInt();
            }
            this_00 = &field_288;
            cVar2 = this_00->empty();
            if (cVar2) {
                ppuVar6 = &DataStatus::READY;
                if ((iVar3 < field_252) || (field_256 < iVar3))
                    goto LAB_100517a82;
            LAB_100517a05:
                if (field_280 == 4294967295) {
                    if (field_276 == 4294967295)
                        goto LAB_100517a74;
                    configProvider->GetVarBitType(field_276);
                    uVar1 = playerVarDomain->GetVarBitValue();
                    iVar3 = (((uint32_t)extraout_var_00 << 8) | (uint8_t)uVar1);
                } else {
                    configProvider->GetVarType(VarDomainType::PLAYER, field_280);
                    uVar1 = playerVarDomain->GetVarValue();
                    iVar3 = ((VarValue*)(((uint64_t)extraout_var_02 << 8) | (uint8_t)uVar1))->GetInt();
                }
                ppuVar6 = &DataStatus::READY;
                if ((iVar3 < field_268) || (field_272 < iVar3))
                    goto LAB_100517a82;
                goto LAB_100517a74;
            }
            if ((iVar3 < 0) || (iVar4 = this_00->end(), iVar4 - 1 <= iVar3)) {
                cVar2 = this_00->empty();
                ppuVar6 = &DataStatus::READY;
                if (((cVar2) || (piVar5 = (int*)this_00->back(), *piVar5 == -1)) ||
                    ((field_252 != -1 && ((field_256 != -1 && ((iVar3 < field_252 || (field_256 < iVar3))))))))
                    goto LAB_100517a82;
            }
            piVar5 = (int*)(*this_00)[(long)iVar3];
            if (*piVar5 != -1)
                goto LAB_100517a05;
        }
        ppuVar6 = &DataStatus::READY;
    LAB_100517a82:
        return *ppuVar6;
    }

} // namespace jag::game
