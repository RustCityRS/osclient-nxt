// libs/game/runetek5/config/objtype/ObjType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "ObjType.h"

namespace jag::game {
    // 0x1039bbbf8
    int64_t ObjType::m_lastType;

    // 0x100106540: ObjType::GetManAppearance() const has the same machine code as oldscape::ClientInputHandler::GetKeysDown() const

    // 0x10031b0b0: ObjType::GetCost() const has the same machine code as oldscape::dash3d::NXTRenderer::LogicThread_GetRenderCanvas()

    // 0x10036db80: ObjType::GetRecolourDest() const has the same machine code as graphics::GeometryBatchInstance::GetSourceModelExternalIndexList()

    // 0x1003dad60: ObjType::GetAngle2D() const has the same machine code as PathingEntity::GetAnimatedModel() const

    // 0x10042f3e0: ObjType::GetOffset2D() const has the same machine code as LocType::GetVFXAttachmentsRawData() const

    // 0x1005056f0: ObjType::GetWomanAppearance() const has the same machine code as NPCType::GetRematerialDest() const

    // 0x100505ce0
    ObjType::ObjType(BaseTemplateConfigTypeList<ObjType>* baseTemplateConfigTypeList, int arg2)
        : ConfigType<ObjType>(baseTemplateConfigTypeList, arg2), MakeSharedPool<ObjType, 96>(), m_members(0),
          m_stackable(0), field_585(1), m_hasRandomPosition(0), m_cost(1) {
        array<eastl::string, _6ul>* strs;
        array<eastl::string, _5ul>* strs_00;

        m_team = '\0';
        m_isStockmarket = false;
        field_652 = 100;
        m_isTradeable = false;
        field_657 = 0;
        field_658 = 0;
        field_659 = 0;
        field_660 = 0;
        field_664 = 65535;
        field_666 = 1;
        field_668 = 4294967295;
        new (&field_672) Array<unsigned short>();
        new (&field_696) Array<unsigned short>();
        new (&field_720) Array<unsigned char>();
        new (&field_744) Array<signed char>();
        new (&field_768) Array<unsigned short>();
        new (&field_792) Array<unsigned short>();
        new (&field_816) Array<signed char>();
        field_840 = 0;
        field_842 = 0;
        field_844 = 0;
        new (&field_848) math::Vector3T();
        field_860 = 0;
        m_zoom2D = 2000;
        new (&field_864) math::Vector3T();
        new (&field_872) math::Vector3T();
        field_884 = 255;
        field_885 = 255;
        field_886 = 255;
        new (&field_888) ObjAppearanceData();
        new (&field_920) ObjAppearanceData();
        field_952 = 65535;
        field_954 = 65535;
        field_956 = 65535;
        field_958 = 65535;
        field_960 = 65535;
        field_962 = 65535;
        field_964 = 65535;
        field_966 = 65535;
        field_968 = 0;
        new (&field_976) eastl::string();
        if (baseTemplateConfigTypeList != nullptr) {
            strs = (array<eastl::string, _6ul>*)baseTemplateConfigTypeList->GetDefaultOps();
            field_56 = *strs;
            strs_00 = (array<eastl::string, _5ul>*)baseTemplateConfigTypeList->GetDefaultIops();
            field_248 = *strs_00;
        }
    }

    // 0x1005061a0
    uint8_t* ObjType::DecodeType(PacketT<Array<unsigned char>>& arg1, unsigned int arg2) {
        uint8_t* this_00;
        char cVar2;
        uint8_t bVar3;
        uint8_t uVar4;
        unsigned short uVar5;
        uint16_t uVar6;
        uint32_t uVar7;
        int iVar8;
        int* piVar9;
        int* piVar10;
        eastl::string* str;
        uint32_t* puVar11;
        unsigned int* puVar12;
        uint8_t* puVar13;
        uint16_t* puVar14;
        float* pfVar15;
        long lVar16;
        char* pcVar17;
        unsigned int uVar18;
        char cVar19;
        unsigned long uVar20;
        unsigned long uVar21;
        unsigned int uVar22;
        Vector3T<float>* this_02;
        Array<int>* this_03;
        __cxx_atomic_base_impl<oldscape::FolderSelection::FolderPathRequestStatus>* this_04;
        MinimenuEntry* this_05;
        ServerConnectionWorkItem* this_06;
        Minimap* this_07;
        StockPlayerOffer* this_08;
        bool bVar23;
        int local_40[2];
        Array<unsigned short>* local_38;

        switch (arg2) {
        case 1:
            uVar7 = arg1.gSmart2or4s();
            field_668 = uVar7;
            break;
        case 2:
            str = (eastl::string*)&field_408;
            goto LAB_100506b17;
        case 3:
            str = (eastl::string*)&field_440;
            goto LAB_100506b17;
        case 4:
            uVar6 = arg1.g2();
            m_zoom2D = uVar6;
            break;
        case 5:
            uVar6 = arg1.g2();
            uVar22 = 0;
            goto LAB_1005068b5;
        case 6:
            uVar6 = arg1.g2();
            uVar22 = 1;
            goto LAB_1005068b5;
        case 7:
            uVar5 = arg1.g2();
            puVar12 = &field_872[0];
            *puVar12 = (unsigned int)uVar5;
            piVar9 = &field_872[0];
            if (*piVar9 < 32768) {
                m_lastType = arg2;
                return DataStatus::READY;
            }
            uVar22 = 0;
            goto LAB_1005064f0;
        case 8:
            uVar5 = arg1.g2();
            puVar12 = &field_872[1];
            *puVar12 = (unsigned int)uVar5;
            piVar9 = &field_872[1];
            if (*piVar9 < 32768) {
                m_lastType = arg2;
                return DataStatus::READY;
            }
            uVar22 = 1;
        LAB_1005064f0:
            piVar9 = (int*)field_872[uVar22];
            *piVar9 = *piVar9 - 65536;
            break;
        default:
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "objtype/ObjType.cpp",
                      357, "Unrecognised .obj config code: %u (Last type: %d)", (unsigned long)arg2,
                      (unsigned long)m_lastType);
            break;
        case 11:
            m_stackable = 1;
            break;
        case 12:
            iVar8 = arg1.g4s();
            m_cost = (long)iVar8;
            break;
        case 13:
            uVar4 = arg1.g1();
            field_884 = uVar4;
            break;
        case 14:
            uVar4 = arg1.g1();
            field_885 = uVar4;
            break;
        case 15:
            m_isTradeable = false;
            break;
        case 16:
            m_members = 1;
            break;
        case 23:
            this_04 = (__cxx_atomic_base_impl<oldscape::FolderSelection::FolderPathRequestStatus>*)&field_888;
            goto LAB_1005065ba;
        case 24:
            this_05 = (MinimenuEntry*)&field_888;
            goto LAB_1005065d8;
        case 25:
            this_04 = (__cxx_atomic_base_impl<oldscape::FolderSelection::FolderPathRequestStatus>*)&field_920;
        LAB_1005065ba:
            iVar8 = arg1.gSmart2or4s();
            new (this_04) std::__cxx_atomic_base_impl(iVar8);
            break;
        case 26:
            this_05 = (MinimenuEntry*)&field_920;
        LAB_1005065d8:
            iVar8 = arg1.gSmart2or4s();
            this_05->SetZ(iVar8);
            break;
        case 27:
            uVar4 = arg1.g1();
            field_886 = uVar4;
            break;
        case 30:
        case 31:
        case 32:
        case 33:
        case 34:
            str = &field_56[(unsigned long)(arg2 - 30)];
            goto LAB_100506b17;
        case 35:
        case 36:
        case 37:
        case 38:
        case 39:
            str = &field_248[(unsigned long)(arg2 - 35)];
            goto LAB_100506b17;
        case 40:
            bVar3 = arg1.g1();
            uVar20 = (unsigned long)bVar3;
            field_672.set_max_size(uVar20, 0);
            field_696.set_max_size(uVar20, 0);
            if (bVar3 != 0) {
                uVar21 = 0;
                local_38 = (Array<unsigned short>*)uVar20;
                do {
                    uVar6 = arg1.g2();
                    puVar14 = &field_672[uVar21];
                    *puVar14 = uVar6;
                    uVar6 = arg1.g2();
                    puVar14 = &field_696[uVar21];
                    *puVar14 = uVar6;
                    uVar21 = uVar21 + 1;
                } while (local_38 != (Array<unsigned short>*)uVar21);
            }
            break;
        case 41:
            bVar3 = arg1.g1();
            local_38 = (Array<unsigned short>*)&field_768;
            uVar20 = (unsigned long)bVar3;
            local_38->set_max_size(uVar20, 0);
            field_792.set_max_size(uVar20, 0);
            if (bVar3 != 0) {
                uVar21 = 0;
                do {
                    uVar6 = arg1.g2();
                    puVar14 = (uint16_t*)(*local_38)[uVar21];
                    *puVar14 = uVar6;
                    uVar6 = arg1.g2();
                    puVar14 = &field_792[uVar21];
                    *puVar14 = uVar6;
                    uVar21 = uVar21 + 1;
                } while (uVar20 != uVar21);
            }
            break;
        case 42:
            bVar3 = arg1.g1();
            field_720.set_max_size((unsigned long)bVar3, 0);
            if (bVar3 != 0) {
                uVar20 = 0;
                do {
                    uVar4 = arg1.g1();
                    puVar13 = &field_720[uVar20];
                    *puVar13 = uVar4;
                    uVar20 = uVar20 + 1;
                } while (bVar3 != uVar20);
            }
            break;
        case 43:
            uVar7 = arg1.g4();
            field_660 = uVar7;
            field_659 = 1;
            break;
        case 44:
            uVar5 = arg1.g2();
            local_38 = (Array<unsigned short>*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)((unsigned int)uVar5));
            if (uVar5 == 0) {
                uVar22 = 0;
            } else {
                uVar22 = 0;
                uVar18 = (unsigned int)uVar5;
                do {
                    uVar22 = uVar22 + 1;
                    bVar23 = 1 < uVar18;
                    uVar18 = uVar18 >> 1;
                } while (bVar23);
            }
            field_744.set_max_size((unsigned long)uVar22, 0);
            if (uVar22 != 0) {
                uVar20 = 0;
                cVar2 = '\0';
                do {
                    if (((unsigned int)local_38._0_4_ >> ((unsigned int)uVar20 & 31) & 1) == 0) {
                        cVar19 = -1;
                    } else {
                        if (cVar2 == '\x7f') {
                            LogAssert("active < std::numeric_limits<int8>::max()",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                      "runetek5/config/objtype/ObjType.cpp",
                                      163, nullptr);
                        }
                        cVar19 = cVar2;
                        cVar2 = cVar2 + '\x01';
                    }
                    pcVar17 = &field_744[uVar20];
                    *pcVar17 = cVar19;
                    uVar20 = uVar20 + 1;
                } while (uVar22 != uVar20);
            }
            break;
        case 45:
            uVar5 = arg1.g2();
            local_38 = (Array<unsigned short>*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)((unsigned int)uVar5));
            if (uVar5 == 0) {
                uVar22 = 0;
            } else {
                uVar22 = 0;
                uVar18 = (unsigned int)uVar5;
                do {
                    uVar22 = uVar22 + 1;
                    bVar23 = 1 < uVar18;
                    uVar18 = uVar18 >> 1;
                } while (bVar23);
            }
            field_816.set_max_size((unsigned long)uVar22, 0);
            if (uVar22 != 0) {
                uVar20 = 0;
                cVar2 = '\0';
                do {
                    if (((unsigned int)local_38._0_4_ >> ((unsigned int)uVar20 & 31) & 1) == 0) {
                        cVar19 = -1;
                    } else {
                        if (cVar2 == '\x7f') {
                            LogAssert("active < std::numeric_limits<int8>::max()",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                      "runetek5/config/objtype/ObjType.cpp",
                                      189, nullptr);
                        }
                        cVar19 = cVar2;
                        cVar2 = cVar2 + '\x01';
                    }
                    pcVar17 = &field_816[uVar20];
                    *pcVar17 = cVar19;
                    uVar20 = uVar20 + 1;
                } while (uVar22 != uVar20);
            }
            break;
        case 65:
            m_isStockmarket = true;
            break;
        case 69:
            uVar7 = arg1.g4s();
            field_652 = uVar7;
            break;
        case 78:
            this_06 = (ServerConnectionWorkItem*)&field_888;
            goto LAB_100506822;
        case 79:
            this_06 = (ServerConnectionWorkItem*)&field_920;
        LAB_100506822:
            iVar8 = arg1.gSmart2or4s();
            new (this_06) oldscape::ServerConnectionWorkItem(iVar8);
            break;
        case 90:
            this_07 = (Minimap*)&field_888;
            goto LAB_100506849;
        case 91:
            this_07 = (Minimap*)&field_920;
        LAB_100506849:
            iVar8 = arg1.gSmart2or4s();
            this_07->SetLevel(iVar8);
            break;
        case 92:
            this_08 = (StockPlayerOffer*)&field_888;
            goto LAB_100506870;
        case 93:
            this_08 = (StockPlayerOffer*)&field_920;
        LAB_100506870:
            iVar8 = arg1.gSmart2or4s();
            this_08->SetCompletedCount(iVar8);
            break;
        case 94:
            uVar5 = arg1.g2();
            field_664 = uVar5;
            break;
        case 95:
            uVar6 = arg1.g2();
            uVar22 = 2;
        LAB_1005068b5:
            puVar14 = &field_864[uVar22];
            *puVar14 = uVar6;
            break;
        case 96:
            uVar4 = arg1.g1();
            field_657 = uVar4;
            break;
        case 97:
            uVar5 = arg1.g2();
            field_952 = uVar5;
            break;
        case 98:
            uVar5 = arg1.g2();
            field_954 = uVar5;
            break;
        case 100:
        case 101:
        case 102:
        case 103:
        case 104:
        case 105:
        case 106:
        case 107:
        case 108:
        case 109:
            puVar13 = &field_600;
            lVar16 = puVar13->end();
            if (lVar16 == 0) {
                puVar13->set_max_size(10, 0);
                this_00 = &field_624;
                this_00->set_max_size(10, 0);
                piVar9 = (int*)puVar13->data();
                piVar10 = (int*)puVar13->end();
                local_40[0] = 0;
                std::fill<int*, int>(piVar9, piVar10, *local_40);
                piVar9 = (int*)this_00->data();
                piVar10 = (int*)this_00->end();
                local_40[1] = 0;
                std::fill<int*, int>(piVar9, piVar10, *(local_40 + 1));
            }
            uVar5 = arg1.g2();
            puVar12 = (unsigned int*)(*puVar13)[(unsigned long)(arg2 - 100)];
            *puVar12 = (unsigned int)uVar5;
            uVar5 = arg1.g2();
            puVar12 = &field_624[(unsigned long)(arg2 - 100)];
            *puVar12 = (unsigned int)uVar5;
            break;
        case 110:
        case 111:
        case 112:
            if (field_860 == '\0') {
                field_848 = math::Vector3T<float>::SetToOne();
                field_860 = 1;
            }
            uVar5 = arg1.g2();
            local_38 =
                (Array<unsigned short>*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)((float)uVar5 * 0.0078125f));
            this_02 = (Vector3T<float>*)&field_848;
            uVar22 = arg2 - 110;
            goto LAB_100506a08;
        case 113:
            cVar2 = arg1.g1s();
            field_840 = (short)cVar2;
            break;
        case 114:
            cVar2 = arg1.g1s();
            field_842 = cVar2 * 5;
            break;
        case 115:
            m_team = arg1.g1();
            break;
        case 121:
            uVar5 = arg1.g2();
            field_956 = uVar5;
            break;
        case 122:
            uVar5 = arg1.g2();
            field_958 = uVar5;
            break;
        case 125:
            cVar2 = arg1.g1s();
            this_02 = (Vector3T<float>*)&field_908;
            goto LAB_1005069a9;
        case 126:
            cVar2 = arg1.g1s();
            this_02 = (Vector3T<float>*)&field_940;
        LAB_1005069a9:
            local_38._0_4_ = (float)(int)cVar2;
            pfVar15 = (float*)(*this_02)[0];
            *pfVar15 = local_38._0_4_;
            cVar2 = arg1.g1s();
            local_38._0_4_ = (float)(int)cVar2;
            pfVar15 = (float*)(*this_02)[1];
            *pfVar15 = local_38._0_4_;
            cVar2 = arg1.g1s();
            local_38 = (Array<unsigned short>*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)((float)(int)cVar2));
            uVar22 = 2;
        LAB_100506a08:
            puVar11 = (uint32_t*)(*this_02)[uVar22];
            *puVar11 = local_38._0_4_;
            break;
        case 131:
            str = (eastl::string*)&field_472;
            goto LAB_100506b17;
        case 132:
            bVar3 = arg1.g1();
            field_560.set_max_size((unsigned long)bVar3, 0);
            if (bVar3 != 0) {
                uVar20 = 0;
                do {
                    uVar5 = arg1.g2();
                    puVar12 = &field_560[uVar20];
                    *puVar12 = (unsigned int)uVar5;
                    uVar20 = uVar20 + 1;
                } while (bVar3 != uVar20);
            }
            break;
        case 134:
            uVar4 = arg1.g1();
            field_844 = uVar4;
            break;
        case 139:
            uVar5 = arg1.g2();
            field_960 = uVar5;
            break;
        case 140:
            uVar5 = arg1.g2();
            field_962 = uVar5;
            break;
        case 142:
        case 143:
        case 144:
        case 145:
        case 146:
            this_03 = (Array<int>*)&field_512;
            lVar16 = this_03->end();
            if (lVar16 == 0) {
                uVar20 = 0;
                this_03->set_max_size(6, 0);
                do {
                    puVar11 = (uint32_t*)(*this_03)[uVar20];
                    *puVar11 = 4294967295;
                    uVar20 = uVar20 + 1;
                } while (uVar20 != 6);
            }
            uVar5 = arg1.g2();
            uVar22 = arg2 - 142;
            goto LAB_10050639d;
        case 150:
        case 151:
        case 152:
        case 153:
        case 154:
            this_03 = (Array<int>*)&field_536;
            lVar16 = this_03->end();
            if (lVar16 == 0) {
                uVar20 = 0;
                this_03->set_max_size(5, 0);
                do {
                    puVar11 = (uint32_t*)(*this_03)[uVar20];
                    *puVar11 = 4294967295;
                    uVar20 = uVar20 + 1;
                } while (uVar20 != 5);
            }
            uVar5 = arg1.g2();
            uVar22 = arg2 - 150;
        LAB_10050639d:
            puVar12 = (unsigned int*)(*this_03)[(unsigned long)uVar22];
            *puVar12 = (unsigned int)uVar5;
            break;
        case 156:
            field_585 = 0;
            break;
        case 157:
            m_hasRandomPosition = 1;
            break;
        case 161:
            uVar5 = arg1.g2();
            field_964 = uVar5;
            break;
        case 162:
            uVar5 = arg1.g2();
            field_966 = uVar5;
            break;
        case 163:
            uVar6 = arg1.g2();
            field_968 = uVar6;
            break;
        case 164:
            str = (eastl::string*)&field_976;
        LAB_100506b17:
            arg1.gStringCP1252ToUTF8<eastl::string>(str, false);
            break;
        case 165:
            m_stackable = 2;
            break;
        case 167:
            field_658 = 1;
            break;
        case 168:
            field_666 = 0;
            break;
        case 178:
            m_stackable = 0;
            break;
        case 181:
            lVar16 = arg1.g8s();
            m_cost = lVar16;
            break;
        case 249:
            DecodeParams(arg1);
        }
        m_lastType = arg2;
        return DataStatus::READY;
    }

    // 0x100507320
    void ObjType::PostDecode() {
        if (field_657 != '\0') {
            m_isTradeable = false;
        }
    }

    // 0x100507340
    void ObjType::GetAppearance(bool arg1, const shared_ptr<ObjTypeCustomisation>& objTypeCustomisation) {
        uint32_t in_register_00000031;

        bool cVar1 = objTypeCustomisation.operator_cast_to_bool();
        if ((((uint32_t)in_register_00000031 << 8) | (uint8_t)arg1) == 0) {
            if (!cVar1) {
                GetManAppearance();
            } else {
                ((Layout*)objTypeCustomisation.operator->())->SSOBeginPtr();
            }
        } else if (!cVar1) {
            GetWomanAppearance();
        } else {
            ((Option<float>*)objTypeCustomisation.operator->())->GetDefaultValue();
        }
    }

    // 0x1005073f0
    ObjType* ObjType::GetStackSizeAlt(long long arg1) {
        int* piVar2;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        ObjType* pOVar3;
        unsigned long arg1_00;
        int arg1_01;

        if ((field_600.end() != 0) && (1 < arg1)) {
            arg1_01 = -1;
            arg1_00 = 0;
            do {
                piVar2 = &field_624[arg1_00];
                if ((*piVar2 <= arg1) && (piVar2 = (int*)field_624[arg1_00], *piVar2 != 0)) {
                    piVar2 = &field_600[arg1_00];
                    arg1_01 = *piVar2;
                }
                arg1_00 = arg1_00 + 1;
            } while (arg1_00 != 10);
            if (arg1_01 != -1) {
                this_00 =
                    (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)field_24->List(arg1_01, nullptr);
                pOVar3 = (ObjType*)this_00->end();
                if (arg1_01 != -1) {
                    return pOVar3;
                }
            }
        }
        return this;
    }

    // 0x1005074d0
    uint8_t* ObjType::GetBodyModel(graphics::RT7Core* rt7Core, AssetBuilder& assetBuilder,
                                   BuildRequest<graphics::Model, BuildModelMain>& buildRequest, bool arg4,
                                   const shared_ptr<ObjTypeCustomisation>& objTypeCustomisation, unsigned short arg6,
                                   const shared_ptr<PlayerModel>& playerModel) {
        uint8_t* puVar1;
        Js5ArchiveSettings* pJVar2;
        bool bVar3;
        char cVar5;
        uint8_t bVar6;
        uint8_t bVar7;
        int iVar8;
        uint32_t uVar9;
        shared_ptr* this_03;
        Model* pMVar11;
        CommandLine* this_04;
        long lVar12;
        unsigned long uVar13;
        int* piVar14;
        long* plVar15;
        uint32_t* puVar16;
        uint8_t* puVar17;
        uint8_t** ppuVar18;
        Vector3T<float>* vector3;
        Js5ResourceProvider* this_05;
        unsigned int* puVar19;
        LoginManager* pLVar20;
        Array<VarValue>* pAVar21;
        GeometryBatch* pGVar22;
        BuildModelMain* pBVar23;
        Array<unsigned short>* pAVar24;
        WorldmapAreaMetadata* this_06;
        Array<unsigned char>* pAVar25;
        Array<Array<unsigned short>>* pAVar26;
        Array<Array<Array<unsigned short>>>* pAVar27;
        MapArea* this_07;
        shared_ptr<graphics::Model>* this_08;
        bool bVar28;
        shared_ptr<ObjTypeCustomisation>* this_09;
        BuildRequest<graphics::Model, BuildModelMain>* this_10;
        unsigned long uVar29;
        ObjType* pOVar30;
        PacketView local_160;
        vector<math::Vector3T<float>> local_138;
        CommandLine* local_110;
        uint32_t local_100[4];
        AssetLRUHashCache<graphics::Model, BuildModelMain, _100ul, _101ul, false>* local_f0;
        AssetLRUHashCache<graphics::Model, BuildModelMain, 10ul, 11ul, false>* local_e8;
        vector<int> local_e0;
        shared_ptr<BuildModelMain> local_b0;
        ObjType* local_a0;
        uint8_t* local_98;
        bool local_8b;
        uint8_t local_8a[2];
        unsigned long long local_88[10];

        ObjTypeList* this_00 = (ObjTypeList*)field_24;
        RT7Core* local_108 = rt7Core;
        auto pPVar10 = playerModel.operator->();
        auto this_01 = pPVar10->GetRecolouredModelsCache();
        auto this_02 = this_00->GetModelCache();
        bool bVar4 = playerModel != nullptr;
        if (bVar4) {
            local_e8 = this_02;
            this_01->UpdateLoadingAssetList(5);
            cVar5 = this_01->IsLoadingAsset((long)field_32);
            if (cVar5)
                goto LAB_1005077a0;
            local_88[0] = (unsigned long long)field_32;
            local_f0 = this_01;
            this_03 = (shared_ptr*)this_01->Find(*local_88);
            cVar5 = shared_ptr::operator_cast_to_bool(this_03);
            if (cVar5) {
                pMVar11 = (Model*)(*this_03).operator->();
                cVar5 = pMVar11->GetConstructedState();
                if (cVar5 != '\x02') {
                    LogAssert("cachedModel->GetConstructedState() == graphics::ModelConstructedState::DATA_AND_MAT",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "config/objtype/ObjType.cpp",
                              444, nullptr);
                }
            LAB_100507661:
                buildRequest.SetConstructedObj(*this_03);
            }
        LAB_100507670:
            this_10 = buildRequest;
            cVar5 = buildRequest.IsTaskDone();
            if ((!cVar5) && (cVar5 = this_10->IsEmpty(), !cVar5))
                goto LAB_1005077a0;
            cVar5 = this_10->IsEmpty();
            if (cVar5) {
                cVar5 = graphics::Model::IsReadyToConstruct(local_108);
                if (!cVar5)
                    goto LAB_1005077a0;
                this_04 = (CommandLine*)GetAppearance(arg4, objTypeCustomisation);
                iVar8 = this_04->GetX();
                if (iVar8 == -1) {
                    local_98 = DataStatus::READY;
                    bVar6 = 1;
                } else {
                    local_e0 = eastl::vector<int>();
                    local_e0.reserve(3);
                    uVar9 = this_04->GetX();
                    local_88[0] = (((uint64_t)local_88[0]._4_4_ << 32) | (uint32_t)uVar9);
                    local_e0.push_back(*local_88);
                    iVar8 = this_04->GetZ();
                    if (iVar8 != -1) {
                        uVar9 = this_04->GetZ();
                        local_88[0] = (((uint64_t)local_88[0]._4_4_ << 32) | (uint32_t)uVar9);
                        local_e0.push_back(*local_88);
                        iVar8 = this_04->GetPos();
                        if (iVar8 != -1) {
                            uVar9 = this_04->GetPos();
                            local_88[0] = (((uint64_t)local_88[0]._4_4_ << 32) | (uint32_t)uVar9);
                            local_e0.push_back(*local_88);
                        }
                    }
                    local_110 = this_04;
                    local_a0 = this;
                    lVar12 = local_e0.size();
                    local_8a[1] = lVar12 != 0;
                    if (lVar12 == 0) {
                        bVar28 = false;
                        bVar4 = true;
                    } else {
                        bVar4 = true;
                        uVar29 = 0;
                        bVar28 = false;
                        do {
                            piVar14 = &local_e0[uVar29];
                            bVar3 = bVar4;
                            if (*piVar14 != -1) {
                                plVar15 = (long*)local_a0->field_24->GetOutputType();
                                pJVar2 = Js5Archive::JS5_MODELSRT7;
                                puVar16 = &local_e0[uVar29];
                                puVar17 = (uint8_t*)(**(void (**)(...))(*plVar15 + 48))(plVar15, pJVar2, *puVar16, 0,
                                                                                        Priority::HIGH, 1);
                                bVar3 = false;
                                if (puVar17 != DataStatus::NOTLOADED) {
                                    bVar3 = bVar4;
                                }
                                bVar28 = true;
                                if (puVar17 == DataStatus::MISSING) {
                                    local_98 = DataStatus::MISSING;
                                    break;
                                }
                            }
                            bVar4 = bVar3;
                            uVar29 = uVar29 + 1;
                            uVar13 = local_e0.size();
                            local_8a[1] = uVar29 < uVar13;
                        } while (local_8a[1]);
                    }
                    bVar6 = 1;
                    if ((local_8a[1] & 1) == 0) {
                        if (bVar28) {
                            if (bVar4) {
                                new (local_88) eastl::fixed_vector<PacketView, 1ul>();
                                local_138 = eastl::vector<math::Vector3T<float>>();
                                pOVar30 = local_a0;
                                uVar29 = local_e0.size();
                                local_88->reserve(uVar29);
                                uVar29 = local_e0.size();
                                local_138.reserve(uVar29);
                                lVar12 = local_e0.size();
                                if (lVar12 != 0) {
                                    uVar29 = 0;
                                    do {
                                        piVar14 = &local_e0[uVar29];
                                        if (*piVar14 != -1) {
                                            vector3 = (Vector3T<float>*)local_110->GetOffset();
                                            local_138.push_back(*vector3);
                                            local_160 = PacketView();
                                            this_05 = (Js5ResourceProvider*)pOVar30->field_24->GetOutputType();
                                            pJVar2 = Js5Archive::JS5_MODELSRT7;
                                            puVar19 = &local_e0[uVar29];
                                            this_05->GetFile(local_160, *pJVar2, *puVar19, 0, (Priority*)Priority::HIGH,
                                                             true, false, false);
                                            local_88->push_back(local_160);
                                            pOVar30 = local_a0;
                                        }
                                        uVar29 = uVar29 + 1;
                                        uVar13 = local_e0.size();
                                    } while (uVar29 < uVar13);
                                }
                                this_09 = objTypeCustomisation;
                                bVar6 = 0;
                                bVar4 = objTypeCustomisation != nullptr;
                                if (bVar4) {
                                    pLVar20 = (LoginManager*)(*this_09).operator->();
                                    pAVar21 = (Array<VarValue>*)pLVar20->GetDevCredentialsOutputDirectory();
                                    bVar6 = pAVar21->empty();
                                    bVar6 = bVar6 ^ 1;
                                    this_09 = objTypeCustomisation;
                                }
                                bVar7 = 0;
                                bVar4 = *this_09 != nullptr;
                                if (bVar4) {
                                    pGVar22 = (GeometryBatch*)objTypeCustomisation.operator->();
                                    pAVar21 = (Array<VarValue>*)pGVar22->GetBoneIDMap();
                                    bVar7 = pAVar21->empty();
                                    bVar7 = bVar7 ^ 1;
                                }
                                MakeSharedPool<graphics::Model, 3072>::MakeShared<>();
                                pMVar11 = (Model*)local_160.operator->();
                                pMVar11->SetSourceModelIDs(&local_e0);
                                local_100[0] = 4096;
                                local_8b = true;
                                local_8a[0] = 1;
                                bucket_make_shared<BuildModelMain, int, graphics::ModelConstructedState, bool,
                                                   graphics::RT7Core*&, eastl::fixed_vector<PacketView, 1ul>,
                                                   shared_ptr<graphics::Model>&>(
                                    &local_b0, (ModelConstructedState*)local_100, &local_8b, (RT7Core**)local_8a,
                                    (fixed_vector<PacketView, _1ul>*)&local_108,
                                    (shared_ptr<graphics::Model>*)local_88);
                                pBVar23 = (BuildModelMain*)local_b0.operator->();
                                pBVar23->SetOffset(local_138);
                                if (bVar6 == 0) {
                                    pBVar23 = (BuildModelMain*)local_b0.operator->();
                                    pBVar23->SetRecolor(local_a0->field_672, local_a0->field_696);
                                } else {
                                    pBVar23 = (BuildModelMain*)local_b0.operator->();
                                    pLVar20 = (LoginManager*)objTypeCustomisation.operator->();
                                    puVar1 = &local_a0->field_672;
                                    pAVar24 = (Array<unsigned short>*)pLVar20->GetDevCredentialsOutputDirectory();
                                    pBVar23->SetCustomRecolor(*puVar1, *pAVar24);
                                }
                                if (bVar7 == 0) {
                                    pBVar23 = (BuildModelMain*)local_b0.operator->();
                                    pBVar23->SetRematerial(local_a0->field_768, local_a0->field_792);
                                } else {
                                    pBVar23 = (BuildModelMain*)local_b0.operator->();
                                    pGVar22 = (GeometryBatch*)objTypeCustomisation.operator->();
                                    puVar1 = &local_a0->field_768;
                                    pAVar24 = (Array<unsigned short>*)pGVar22->GetBoneIDMap();
                                    pBVar23->SetRematerial(*puVar1, *pAVar24);
                                }
                                bVar4 = playerModel != nullptr;
                                if (bVar4) {
                                    pBVar23 = (BuildModelMain*)local_b0.operator->();
                                    this_06 = (WorldmapAreaMetadata*)playerModel.operator->();
                                    pAVar25 = (Array<unsigned char>*)this_06->GetOrigin();
                                    pPVar10 = (PlayerModel*)playerModel.operator->();
                                    pAVar26 = pPVar10->GetPlayerRecolSource();
                                    pPVar10 = (PlayerModel*)playerModel.operator->();
                                    pAVar27 = pPVar10->GetPlayerRecolDest();
                                    pBVar23->SetPlayerRecolor(*pAVar25, *pAVar26, *pAVar27);
                                    pBVar23 = (BuildModelMain*)local_b0.operator->();
                                    this_07 = (MapArea*)playerModel.operator->();
                                    pAVar25 = (Array<unsigned char>*)this_07->GetOrigin();
                                    pPVar10 = (PlayerModel*)playerModel.operator->();
                                    pAVar26 = pPVar10->GetPlayerRematSource();
                                    pPVar10 = (PlayerModel*)playerModel.operator->();
                                    pAVar27 = pPVar10->GetPlayerRematDest();
                                    pBVar23->SetPlayerRematerial(*pAVar25, *pAVar26, *pAVar27);
                                }
                                pBVar23 = (BuildModelMain*)local_b0.operator->();
                                pBVar23->SetAmbientAdjust(arg6 + local_a0->field_840);
                                new (local_100) shared_ptr(&local_b0);
                                assetBuilder.SubmitJob(*local_100);
                                bVar4 = playerModel != nullptr;
                                if (bVar4) {
                                    local_f0->AddLoadingAsset((long)local_a0->field_32, local_b0);
                                } else {
                                    local_e8->AddLoadingAsset((long)local_a0->field_32, local_b0);
                                }
                                buildRequest.SetObjAndTask(local_160, local_b0);
                                bVar7 = buildRequest.IsTaskDone();
                                bVar6 = bVar7 ^ 1;
                                if (bVar7 == 0) {
                                    local_98 = DataStatus::NOTLOADED;
                                }
                                goto LAB_100507dbb;
                            }
                            ppuVar18 = &DataStatus::NOTLOADED;
                        } else {
                            ppuVar18 = &DataStatus::READY;
                        }
                        local_98 = *ppuVar18;
                    }
                LAB_100507dbb:
                }
                this_10 = buildRequest;
                if (bVar6 != 0)
                    goto LAB_100507e1e;
            }
            this_08 = (shared_ptr<graphics::Model>*)this_10->SSOBeginPtr();
            pMVar11 = (Model*)(*this_08).operator->();
            cVar5 = pMVar11->GetConstructedState();
            if (cVar5 != '\x02') {
                LogAssert("model.GetAsset()->GetConstructedState() == graphics::ModelConstructedState::DATA_AND_MAT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "objtype/ObjType.cpp",
                          599, nullptr);
            }
            ppuVar18 = &DataStatus::READY;
        } else {
            local_f0 = this_01;
            this_02->UpdateLoadingAssetList(5);
            cVar5 = this_02->IsLoadingAsset((long)field_32);
            if (!cVar5) {
                local_88[0] = (unsigned long long)field_32;
                local_e8 = this_02;
                this_03 = (shared_ptr*)this_02->Find(*local_88);
                cVar5 = shared_ptr::operator_cast_to_bool(this_03);
                if (cVar5) {
                    pMVar11 = (Model*)(*this_03).operator->();
                    cVar5 = pMVar11->GetConstructedState();
                    if (cVar5 != '\x02') {
                        LogAssert("cachedModel->GetConstructedState() == graphics::ModelConstructedState::DATA_AND_MAT",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                  "config/objtype/ObjType.cpp",
                                  458, nullptr);
                    }
                    goto LAB_100507661;
                }
                goto LAB_100507670;
            }
        LAB_1005077a0:
            ppuVar18 = &DataStatus::NOTLOADED;
        }
        local_98 = *ppuVar18;
    LAB_100507e1e:
        return local_98;
    }

    // 0x1005084b0
    uint8_t* ObjType::GetHeadModel(graphics::RT7Core* rt7Core, AssetBuilder& assetBuilder,
                                   BuildRequest<graphics::Model, BuildModelMain>& buildRequest, bool arg4,
                                   const shared_ptr<ObjTypeCustomisation>& objTypeCustomisation, unsigned short arg6,
                                   const shared_ptr<PlayerModel>& playerModel) {
        uint8_t* puVar1;
        Js5ArchiveSettings* pJVar2;
        bool bVar3;
        bool bVar5;
        uint8_t bVar6;
        uint8_t bVar7;
        int iVar8;
        Minimap* pMVar9;
        long lVar10;
        unsigned long uVar11;
        int* piVar12;
        long* plVar13;
        uint32_t* puVar14;
        uint8_t* puVar15;
        uint8_t** ppuVar16;
        Vector3T<float>* vector3;
        Js5ResourceProvider* this_00;
        unsigned int* puVar17;
        LoginManager* pLVar18;
        Array<VarValue>* pAVar19;
        GeometryBatch* pGVar20;
        BuildModelMain* pBVar21;
        Array<unsigned short>* pAVar22;
        WorldmapAreaMetadata* this_01;
        Array<unsigned char>* pAVar23;
        PlayerModel* pPVar24;
        Array<Array<unsigned short>>* pAVar25;
        Array<Array<Array<unsigned short>>>* pAVar26;
        MapArea* this_02;
        shared_ptr<graphics::Model>* this_03;
        Model* pMVar27;
        bool bVar28;
        unsigned long uVar29;
        shared_ptr<ObjTypeCustomisation>* midiPlayerMainThread;
        vector<math::Vector3T<float>> local_150;
        PacketView local_130;
        vector<int> local_f8;
        uint32_t local_d8[4];
        Minimap* local_c0;
        BuildRequest<graphics::Model, BuildModelMain>* local_b8;
        shared_ptr<BuildModelMain> local_b0;
        uint8_t* local_98;
        bool local_8b;
        uint64_t local_8a;

        RT7Core* local_100 = rt7Core;
        ObjType* local_a0 = this;
        char cVar4 = buildRequest.IsTaskDone();
        if ((!cVar4) && (cVar4 = buildRequest.IsEmpty(), !cVar4)) {
        LAB_1005086c1:
            ppuVar16 = &DataStatus::NOTLOADED;
        } else {
            cVar4 = buildRequest.IsEmpty();
            if (cVar4) {
                local_b8 = buildRequest;
                cVar4 = graphics::Model::IsReadyToConstruct(local_100);
                if (!cVar4)
                    goto LAB_1005086c1;
                pMVar9 = (Minimap*)GetAppearance(local_a0, arg4, objTypeCustomisation);
                iVar8 = pMVar9->GetLevel();
                if (iVar8 == -1) {
                    local_98 = DataStatus::READY;
                    bVar6 = 1;
                } else {
                    local_f8 = eastl::vector<int>();
                    local_f8.reserve(2);
                    local_8a._2_4_ = pMVar9->GetLevel();
                    local_f8.push_back(*((int*)((long)&local_8a + 2)));
                    iVar8 = pMVar9->GetMaxLineWidth();
                    if (iVar8 != -1) {
                        local_8a._2_4_ = pMVar9->GetMaxLineWidth();
                        local_f8.push_back(*((int*)((long)&local_8a + 2)));
                    }
                    local_c0 = pMVar9;
                    lVar10 = local_f8.size();
                    local_8a._1_1_ = lVar10 != 0;
                    if (lVar10 == 0) {
                        bVar28 = false;
                        bVar5 = true;
                    } else {
                        bVar5 = true;
                        uVar29 = 0;
                        bVar28 = false;
                        do {
                            piVar12 = &local_f8[uVar29];
                            bVar3 = bVar5;
                            if (*piVar12 != -1) {
                                plVar13 = (long*)local_a0->field_24->GetOutputType();
                                pJVar2 = Js5Archive::JS5_MODELSRT7;
                                puVar14 = &local_f8[uVar29];
                                puVar15 = (uint8_t*)(**(void (**)(...))(*plVar13 + 48))(plVar13, pJVar2, *puVar14, 0,
                                                                                        Priority::HIGH, 1);
                                bVar3 = false;
                                if (puVar15 != DataStatus::NOTLOADED) {
                                    bVar3 = bVar5;
                                }
                                bVar28 = true;
                                if (puVar15 == DataStatus::MISSING) {
                                    local_98 = DataStatus::MISSING;
                                    break;
                                }
                            }
                            bVar5 = bVar3;
                            uVar29 = uVar29 + 1;
                            uVar11 = local_f8.size();
                            local_8a._1_1_ = uVar29 < uVar11;
                        } while (local_8a._1_1_);
                    }
                    bVar6 = 1;
                    if ((local_8a._1_1_ & 1) == 0) {
                        if (bVar28) {
                            if (bVar5) {
                                new ((fixed_vector<PacketView, 1ul>*)((long)&local_8a + 2))
                                    eastl::fixed_vector<PacketView, 1ul>();
                                local_150 = eastl::vector<math::Vector3T<float>>();
                                pMVar9 = local_c0;
                                midiPlayerMainThread = objTypeCustomisation;
                                uVar29 = local_f8.size();
                                ((vector<PacketView,
                                         eastl::fixed_vector_allocator<40ul, 1ul, 8ul, 0ul, true>>*)((long)&local_8a +
                                                                                                     2))
                                    ->reserve(uVar29);
                                uVar29 = local_f8.size();
                                local_150.reserve(uVar29);
                                lVar10 = local_f8.size();
                                if (lVar10 != 0) {
                                    uVar29 = 0;
                                    do {
                                        piVar12 = &local_f8[uVar29];
                                        if (*piVar12 != -1) {
                                            vector3 = (Vector3T<float>*)pMVar9->GetOffset();
                                            local_150.push_back(*vector3);
                                            local_130 = PacketView();
                                            this_00 = (Js5ResourceProvider*)local_a0->field_24->GetOutputType();
                                            pJVar2 = Js5Archive::JS5_MODELSRT7;
                                            puVar17 = &local_f8[uVar29];
                                            this_00->GetFile(local_130, *pJVar2, *puVar17, 0, (Priority*)Priority::HIGH,
                                                             true, false, false);
                                            ((fixed_vector<PacketView, 1ul>*)((long)&local_8a + 2))
                                                ->push_back(local_130);
                                            midiPlayerMainThread = objTypeCustomisation;
                                            pMVar9 = local_c0;
                                        }
                                        uVar29 = uVar29 + 1;
                                        uVar11 = local_f8.size();
                                    } while (uVar29 < uVar11);
                                }
                                bVar6 = 0;
                                bVar5 = *midiPlayerMainThread != nullptr;
                                if (bVar5) {
                                    pLVar18 = (LoginManager*)(*midiPlayerMainThread).operator->();
                                    pAVar19 = (Array<VarValue>*)pLVar18->GetDevCredentialsOutputDirectory();
                                    bVar6 = pAVar19->empty();
                                    bVar6 = bVar6 ^ 1;
                                }
                                bVar7 = 0;
                                bVar5 = *midiPlayerMainThread != nullptr;
                                if (bVar5) {
                                    pGVar20 = (GeometryBatch*)(*midiPlayerMainThread).operator->();
                                    pAVar19 = (Array<VarValue>*)pGVar20->GetBoneIDMap();
                                    bVar7 = pAVar19->empty();
                                    bVar7 = bVar7 ^ 1;
                                }
                                MakeSharedPool<graphics::Model, 3072>::MakeShared<>();
                                pMVar27 = (Model*)local_130.operator->();
                                pMVar27->SetSourceModelIDs(&local_f8);
                                local_d8[0] = 4096;
                                local_8b = true;
                                local_8a._0_1_ = 1;
                                bucket_make_shared<BuildModelMain, int, graphics::ModelConstructedState, bool,
                                                   graphics::RT7Core*&, eastl::fixed_vector<PacketView, 1ul>,
                                                   shared_ptr<graphics::Model>&>(
                                    &local_b0, (ModelConstructedState*)local_d8, &local_8b, (RT7Core**)&local_8a,
                                    (fixed_vector<PacketView, _1ul>*)&local_100,
                                    (shared_ptr<graphics::Model>*)((long)&local_8a + 2));
                                pBVar21 = (BuildModelMain*)local_b0.operator->();
                                pBVar21->SetOffset(local_150);
                                if (bVar6 == 0) {
                                    pBVar21 = (BuildModelMain*)local_b0.operator->();
                                    pBVar21->SetRecolor(local_a0->field_672, local_a0->field_696);
                                } else {
                                    pBVar21 = (BuildModelMain*)local_b0.operator->();
                                    pLVar18 = (LoginManager*)(*midiPlayerMainThread).operator->();
                                    puVar1 = &local_a0->field_672;
                                    pAVar22 = (Array<unsigned short>*)pLVar18->GetDevCredentialsOutputDirectory();
                                    pBVar21->SetCustomRecolor(*puVar1, *pAVar22);
                                }
                                if (bVar7 == 0) {
                                    pBVar21 = (BuildModelMain*)local_b0.operator->();
                                    pBVar21->SetRematerial(local_a0->field_768, local_a0->field_792);
                                } else {
                                    pBVar21 = (BuildModelMain*)local_b0.operator->();
                                    pGVar20 = (GeometryBatch*)(*midiPlayerMainThread).operator->();
                                    puVar1 = &local_a0->field_768;
                                    pAVar22 = (Array<unsigned short>*)pGVar20->GetBoneIDMap();
                                    pBVar21->SetRematerial(*puVar1, *pAVar22);
                                }
                                bVar5 = playerModel != nullptr;
                                if (bVar5) {
                                    pBVar21 = (BuildModelMain*)local_b0.operator->();
                                    this_01 = (WorldmapAreaMetadata*)playerModel.operator->();
                                    pAVar23 = (Array<unsigned char>*)this_01->GetOrigin();
                                    pPVar24 = (PlayerModel*)playerModel.operator->();
                                    pAVar25 = pPVar24->GetPlayerRecolSource();
                                    pPVar24 = (PlayerModel*)playerModel.operator->();
                                    pAVar26 = pPVar24->GetPlayerRecolDest();
                                    pBVar21->SetPlayerRecolor(*pAVar23, *pAVar25, *pAVar26);
                                    pBVar21 = (BuildModelMain*)local_b0.operator->();
                                    this_02 = (MapArea*)playerModel.operator->();
                                    pAVar23 = (Array<unsigned char>*)this_02->GetOrigin();
                                    pPVar24 = (PlayerModel*)playerModel.operator->();
                                    pAVar25 = pPVar24->GetPlayerRematSource();
                                    pPVar24 = (PlayerModel*)playerModel.operator->();
                                    pAVar26 = pPVar24->GetPlayerRematDest();
                                    pBVar21->SetPlayerRematerial(*pAVar23, *pAVar25, *pAVar26);
                                }
                                pBVar21 = (BuildModelMain*)local_b0.operator->();
                                pBVar21->SetAmbientAdjust(arg6 + local_a0->field_840);
                                new (local_d8) shared_ptr(&local_b0);
                                assetBuilder.SubmitJob(*local_d8);
                                local_b8->SetObjAndTask(local_130, local_b0);
                                bVar7 = local_b8->IsTaskDone();
                                bVar6 = bVar7 ^ 1;
                                if (bVar7 == 0) {
                                    local_98 = DataStatus::NOTLOADED;
                                }
                                ((fixed_vector<PacketView, 1ul>*)((long)&local_8a + 2))->~fixed_vector();
                                goto LAB_100508bd6;
                            }
                            ppuVar16 = &DataStatus::NOTLOADED;
                        } else {
                            ppuVar16 = &DataStatus::READY;
                        }
                        local_98 = *ppuVar16;
                    }
                LAB_100508bd6:
                }
                buildRequest = local_b8;
                if (bVar6 != 0)
                    goto LAB_100508c39;
            }
            this_03 = (shared_ptr<graphics::Model>*)buildRequest.SSOBeginPtr();
            pMVar27 = (Model*)(*this_03).operator->();
            cVar4 = pMVar27->GetConstructedState();
            if (cVar4 != '\x02') {
                LogAssert("model.GetAsset()->GetConstructedState() == graphics::ModelConstructedState::DATA_AND_MAT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "objtype/ObjType.cpp",
                          736, nullptr);
            }
            ppuVar16 = &DataStatus::READY;
        }
        local_98 = *ppuVar16;
    LAB_100508c39:
        return local_98;
    }

    // 0x100508d10
    uint8_t* ObjType::GetModel(graphics::RT7Core* rt7Core, AssetBuilder& assetBuilder,
                               BuildRequest<graphics::Model, BuildModelMain>& buildRequest,
                               const PlayerModel* playerModel) {
        uint8_t* puVar2;
        bool cVar3;
        shared_ptr* this_03;
        Model* pMVar4;
        long* plVar5;
        uint8_t* puVar6;
        BuildModelMain* pBVar7;
        Array<Array<unsigned short>>* pAVar8;
        Array<Array<Array<unsigned short>>>* pAVar9;
        shared_ptr<graphics::Model>* this_05;
        uint8_t** ppuVar10;
        uint8_t* puVar11;
        PacketView local_118;
        shared_ptr<graphics::Model> local_e8;
        uint32_t local_d0[4];
        AssetLRUHashCache<graphics::Model, BuildModelMain, 10ul, 11ul, false>* local_c0;
        BuildRequest<graphics::Model, BuildModelMain>* local_b8;
        BuildModelMain* local_b0;
        Array<unsigned char>* local_a8;
        shared_ptr<BuildModelMain> local_a0;
        bool local_8a;
        uint8_t local_89;
        unsigned long long local_88[10];

        ObjTypeList* this_00 = (ObjTypeList*)field_24;
        RT7Core* local_d8 = rt7Core;
        auto this_01 = playerModel->GetRecolouredModelsCache();
        auto this_02 = this_00->GetModelCache();
        if (playerModel == nullptr) {
            this_02->UpdateLoadingAssetList(5);
            cVar3 = this_02->IsLoadingAsset((long)field_32);
            if (!cVar3) {
                local_88[0] = (unsigned long long)field_32;
                local_c0 = this_02;
                this_03 = (shared_ptr*)this_02->Find(*local_88);
                cVar3 = shared_ptr::operator_cast_to_bool(this_03);
                if (cVar3) {
                    pMVar4 = (Model*)(*this_03).operator->();
                    cVar3 = pMVar4->IsLoaded();
                    if (!cVar3) {
                        LogAssert("cachedModel->IsLoaded()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                  "config/objtype/ObjType.cpp",
                                  774, nullptr);
                    }
                    goto LAB_100508e73;
                }
                goto LAB_100508e7e;
            }
        LAB_100509186:
            ppuVar10 = &DataStatus::NOTLOADED;
        } else {
            local_c0 = this_02;
            this_01->UpdateLoadingAssetList(5);
            cVar3 = this_01->IsLoadingAsset((long)field_32);
            if (cVar3)
                goto LAB_100509186;
            local_88[0] = (unsigned long long)field_32;
            this_03 = (shared_ptr*)this_01->Find(*local_88);
            cVar3 = shared_ptr::operator_cast_to_bool(this_03);
            if (cVar3) {
                pMVar4 = (Model*)(*this_03).operator->();
                cVar3 = pMVar4->IsLoaded();
                if (!cVar3) {
                    LogAssert("cachedModel->IsLoaded()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "config/objtype/ObjType.cpp",
                              760, nullptr);
                }
            LAB_100508e73:
                buildRequest.SetConstructedObj(*this_03);
            }
        LAB_100508e7e:
            cVar3 = buildRequest.IsTaskDone();
            if ((!cVar3) && (cVar3 = buildRequest.IsEmpty(), !cVar3))
                goto LAB_100509186;
            cVar3 = buildRequest.IsEmpty();
            if (cVar3) {
                local_b8 = buildRequest;
                cVar3 = graphics::Model::IsReadyToConstruct(local_d8);
                if (!cVar3)
                    goto LAB_100509186;
                plVar5 = (long*)field_24->GetOutputType();
                puVar6 = (uint8_t*)(**(void (**)(...))(*plVar5 + 48))(plVar5, Js5Archive::JS5_MODELSRT7, field_668, 0,
                                                                      Priority::HIGH, 1);
                puVar2 = DataStatus::NOTLOADED;
                puVar11 = DataStatus::MISSING;
                if ((puVar6 == DataStatus::MISSING) ||
                    (puVar11 = DataStatus::NOTLOADED, puVar6 == DataStatus::NOTLOADED))
                    goto LAB_100509254;
                new (local_88) eastl::fixed_vector<PacketView, 1ul>();
                local_118 = PacketView();
                ((Js5ResourceProvider*)field_24->GetOutputType())
                    ->GetFile(local_118, *(Js5Archive::JS5_MODELSRT7), field_668, 0, (Priority*)Priority::HIGH, true,
                              false, false);
                local_88->push_back(local_118);
                MakeSharedPool<graphics::Model, 3072>::MakeShared<>();
                pMVar4 = (Model*)local_e8.operator->();
                pMVar4->SetSourceModelIDs(field_668);
                local_d0[0] = 4096;
                local_8a = true;
                local_89 = 1;
                bucket_make_shared<BuildModelMain, int, graphics::ModelConstructedState, bool, graphics::RT7Core*&,
                                   eastl::fixed_vector<PacketView, 1ul>, shared_ptr<graphics::Model>&>(
                    &local_a0, (ModelConstructedState*)local_d0, &local_8a, (RT7Core**)&local_89,
                    (fixed_vector<PacketView, _1ul>*)&local_d8, (shared_ptr<graphics::Model>*)local_88);
                if (field_860 != '\0') {
                    pBVar7 = (BuildModelMain*)local_a0.operator->();
                    pBVar7->SetResize(field_848);
                }
                pBVar7 = (BuildModelMain*)local_a0.operator->();
                pBVar7->SetRecolor(field_672, field_696);
                pBVar7 = (BuildModelMain*)local_a0.operator->();
                pBVar7->SetRematerial(field_768, field_792);
                if (playerModel != nullptr) {
                    local_b0 = (BuildModelMain*)local_a0.operator->();
                    local_a8 = (Array<unsigned char>*)playerModel->GetOrigin();
                    pAVar8 = playerModel->GetPlayerRecolSource();
                    pAVar9 = playerModel->GetPlayerRecolDest();
                    local_b0->SetPlayerRecolor(*local_a8, *pAVar8, *pAVar9);
                    local_b0 = (BuildModelMain*)local_a0.operator->();
                    local_a8 = (Array<unsigned char>*)playerModel->GetOrigin();
                    pAVar8 = playerModel->GetPlayerRematSource();
                    pAVar9 = playerModel->GetPlayerRematDest();
                    local_b0->SetPlayerRematerial(*local_a8, *pAVar8, *pAVar9);
                }
                pBVar7 = (BuildModelMain*)local_a0.operator->();
                pBVar7->SetAmbientAdjust(field_840 + 64);
                new (local_d0) shared_ptr(&local_a0);
                assetBuilder.SubmitJob(*local_d0);
                if (playerModel == nullptr) {
                    local_c0->AddLoadingAsset((long)field_32, local_a0);
                } else {
                    this_01->AddLoadingAsset((long)field_32, local_a0);
                }
                local_b8->SetObjAndTask(local_e8, local_a0);
                cVar3 = local_b8->IsTaskDone();
                puVar11 = puVar2;
                if (!cVar3) {
                    puVar11 = DataStatus::NOTLOADED;
                }
                buildRequest = local_b8;
                if (!cVar3)
                    goto LAB_100509254;
            }
            this_05 = (shared_ptr<graphics::Model>*)buildRequest.SSOBeginPtr();
            pMVar4 = (Model*)(*this_05).operator->();
            cVar3 = pMVar4->IsLoaded();
            if (!cVar3) {
                LogAssert("model.GetAsset()->IsLoaded()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "objtype/ObjType.cpp",
                          852, nullptr);
            }
            ppuVar10 = &DataStatus::READY;
        }
        puVar11 = *ppuVar10;
    LAB_100509254:
        return puVar11;
    }

    // 0x100509370
    void ObjType::SetupDerivedObject(DerivedObjType derivedObjType, const shared_ptr<ObjType>& objType1,
                                     const shared_ptr<ObjType>& objType2, const char* str) {
        uint8_t* this_00;
        char* str_00;
        long lVar2;
        uint64_t* puVar3;
        eastl::string* pbVar4;
        unsigned long uVar5;
        uint64_t local_e8;
        uint64_t uStack_e0;
        uint64_t local_d8;
        uint64_t uStack_d0;
        uint64_t local_c8;
        uint64_t uStack_c0;
        uint64_t local_b8;
        uint64_t uStack_b0;
        uint64_t local_a8;
        uint64_t uStack_a0;
        uint64_t local_98;
        uint64_t uStack_90;
        uint64_t local_88;
        uint64_t uStack_80;
        uint64_t local_78;
        uint64_t uStack_70;
        uint64_t local_68;
        uint64_t uStack_60;
        uint64_t local_58;
        uint64_t uStack_50;

        long lVar1 = objType1.operator->();
        field_668 = *(uint32_t*)(lVar1 + 668);
        lVar1 = objType1.operator->();
        m_zoom2D = *(uint16_t*)(lVar1 + 862);
        lVar1 = objType1.operator->();
        field_864 = (*((lVar1 + 864)));
        lVar1 = objType1.operator->();
        field_872 = (*((lVar1 + 872)));
        lVar1 = objType2.operator->();
        eastl::string* local_40 = (eastl::string*)&field_408;
        *local_40 = ((lVar1 + 408));
        lVar1 = objType2.operator->();
        m_members = *(uint8_t*)(lVar1 + 504);
        shared_ptr<ObjType>* this_01 = objType2;
        if (derivedObjType == 0) {
            this_01 = objType1;
        }
        lVar1 = (*this_01).operator->();
        field_672 = (*((lVar1 + 672)));
        lVar1 = (*this_01).operator->();
        field_696 = (*((lVar1 + 696)));
        lVar1 = (*this_01).operator->();
        field_720 = (*((lVar1 + 720)));
        lVar1 = (*this_01).operator->();
        field_768 = (*((lVar1 + 768)));
        lVar1 = (*this_01).operator->();
        field_792 = (*((lVar1 + 792)));
        if (derivedObjType == 0) {
            lVar1 = objType2.operator->();
            m_cost = *(long*)(lVar1 + 592);
            m_stackable = 1;
            lVar1 = objType2.operator->();
            if (*(char*)(lVar1 + 658) == '\0') {
                lVar1 = objType2.operator->();
                m_isTradeable = *(bool*)(lVar1 + 656);
            } else {
                m_isTradeable = false;
            }
        } else if ((char)derivedObjType == '\x03') {
            *local_40 = &field_976;
            lVar1 = objType2.operator->();
            lVar1 = *(long*)(lVar1 + 592);
            lVar2 = objType2.operator->();
            uVar5 = 18446744073709551615;
            if ((unsigned long)*(unsigned short*)(lVar2 + 968) != 65535) {
                uVar5 = (unsigned long)*(unsigned short*)(lVar2 + 968);
            }
            m_cost = lVar1 / (long)uVar5;
            m_stackable = 1;
            lVar1 = objType2.operator->();
            m_isStockmarket = *(bool*)(lVar1 + 649);
            lVar1 = objType2.operator->();
            m_isTradeable = *(bool*)(lVar1 + 656);
            lVar1 = objType1.operator->();
            field_664 = *(unsigned short*)(lVar1 + 664);
            lVar1 = objType1.operator->();
            field_512 = (*((lVar1 + 512)));
            lVar1 = objType1.operator->();
            field_536 = (*((lVar1 + 536)));
            local_58 = 0;
            uStack_50 = 0;
            local_68 = 0;
            uStack_60 = 0;
            local_78 = 0;
            uStack_70 = 0;
            local_88 = 0;
            uStack_80 = 0;
            local_98 = 0;
            uStack_90 = 0;
            local_a8 = 0;
            uStack_a0 = 0;
            local_b8 = 0;
            uStack_b0 = 0;
            local_c8 = 0;
            uStack_c0 = 0;
            local_d8 = 0;
            uStack_d0 = 0;
            local_e8 = 0;
            uStack_e0 = 0;
            new (&local_e8) std::array<eastl::string, 5ul>();
            this_00 = &field_248;
            *this_00 = local_e8;
            lVar1 = field_24->GetPriority();
            puVar3 = (uint64_t*)(*((
                array<char const*, 7ul>*)&LocalisedText::SHARD_COMBINE_OP))[(unsigned long)*(unsigned int*)(lVar1 + 8)];
            str_00 = (char*)*puVar3;
            pbVar4 = (eastl::string*)(*this_00)[0];
            eastl::string::assign(pbVar4, str_00);
            pbVar4 = (eastl::string*)(*this_00)[4];
            eastl::string::assign(pbVar4, str);
        } else {
            m_cost = 0;
            m_isTradeable = false;
            lVar1 = objType2.operator->();
            m_stackable = *(uint8_t*)(lVar1 + 584);
            lVar1 = objType2.operator->();
            field_884 = *(uint8_t*)(lVar1 + 884);
            lVar1 = objType2.operator->();
            field_885 = *(uint8_t*)(lVar1 + 885);
            lVar1 = objType2.operator->();
            field_886 = *(uint8_t*)(lVar1 + 886);
            lVar1 = objType2.operator->();
            field_888 = (*((lVar1 + 888)));
            lVar1 = objType2.operator->();
            field_920 = (*((lVar1 + 920)));
            lVar1 = objType2.operator->();
            field_664 = *(unsigned short*)(lVar1 + 664);
            lVar1 = objType2.operator->();
            m_team = *(unsigned char*)(lVar1 + 648);
            lVar1 = objType2.operator->();
            field_56 = (*((lVar1 + 56)));
            lVar1 = objType2.operator->();
            field_248 = (*((lVar1 + 248)));
            pbVar4 = &field_248[4];
            eastl::string::assign(pbVar4, str);
            lVar1 = objType2.operator->();
            *field_40 = (*((lVar1 + 40)));
            field_666 = 0;
        }
    }

    // 0x1005098d0
    uint8_t* ObjType::RemoveAutoDisabledParams(const ConfigProvider& configProvider) {
        int arg1;
        shared_ptr<eastl::vector_map<int, VarValue>>* this_00;
        bool cVar2;
        vector_map<int, VarValue>* arg1_00;
        Layout* this_02;
        int* piVar5;
        shared_ptr<ParamType>* groundDecor;
        uint8_t* puVar6;
        shared_ptr local_198;
        int* local_180;
        uint8_t* local_178;
        shared_ptr<eastl::vector_map<int, VarValue>>* local_170;
        ScopedContainerElementEraser<eastl::vector_map<int, VarValue>, int> local_168;

        uint8_t* midiPlayerMainThread = field_40;
        bool bVar1 = *midiPlayerMainThread != nullptr;
        if (bVar1) {
            if (((vector<DecodedTerrainTile>*)(*midiPlayerMainThread).operator->())->size() != 0) {
                arg1_00 = (vector_map<int, VarValue>*)**midiPlayerMainThread;
                local_168 = ScopedContainerElementEraser<eastl::vector_map<int, VarValue>, int>(*arg1_00);
                local_170 = (shared_ptr<eastl::vector_map<int, VarValue>>*)midiPlayerMainThread;
                this_02 = (Layout*)**midiPlayerMainThread;
                piVar5 = (int*)this_02->HeapBeginPtr();
                local_180 = (int*)this_02->end();
                bVar1 = piVar5 == local_180;
                if (!bVar1) {
                    do {
                        arg1 = *piVar5;
                        groundDecor = configProvider.GetConfig<ParamType>(arg1, nullptr);
                        local_198 = shared_ptr(groundDecor);
                        cVar2 = shared_ptr::operator_cast_to_bool(&local_198);
                        if (!cVar2) {
                            local_178 = DataStatus::NOTLOADED;
                        } else {
                            if (((ParamType*)local_198.operator->())->GetAutoDisable() != '\0') {
                                local_168.erase(arg1);
                            }
                        }
                        if (!cVar2)
                            break;
                        piVar5 = piVar5 + 10;
                        bVar1 = piVar5 == local_180;
                    } while (!bVar1);
                }
                this_00 = local_170;
                puVar6 = local_178;
                if (!bVar1)
                    goto LAB_100509a8b;
                cVar2 =
                    ((vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)(*local_170).operator->())
                        ->empty();
                if (cVar2) {
                    local_168 = shared_ptr();
                    *this_00 = local_168;
                }
            }
        }
        puVar6 = DataStatus::READY;
    LAB_100509a8b:
        return puVar6;
    }

} // namespace jag::game
