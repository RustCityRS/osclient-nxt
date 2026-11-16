// libs/game/runetek5/config/objtype/ObjType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "ObjType.h"

namespace jag::game {
    // 0x1039bbbf8, 8 bytes, __common; zero-initialised
    ObjType::m_lastType;

    // 0x100106540: the linker folded this into oldscape::ClientInputHandler::GetKeysDown() const, which has identical code
    ObjType::GetManAppearance() const;

    // 0x10031b0b0: the linker folded this into oldscape::dash3d::NXTRenderer::LogicThread_GetRenderCanvas(), which has identical code
    long ObjType::GetCost() const;

    // 0x10036db80: the linker folded this into graphics::GeometryBatchInstance::GetSourceModelExternalIndexList(), which has identical code
    ObjType::GetRecolourDest() const;

    // 0x1003dad60: the linker folded this into PathingEntity::GetAnimatedModel() const, which has identical code
    ObjType::GetAngle2D() const;

    // 0x10042f3e0: the linker folded this into LocType::GetVFXAttachmentsRawData() const, which has identical code
    ObjType::GetOffset2D() const;

    // 0x1005056f0: the linker folded this into NPCType::GetRematerialDest() const, which has identical code
    ObjType::GetWomanAppearance() const;

    // 0x100505ce0, 960 bytes, base-object constructor, placed by class name and debug map
    // ObjType::ObjType(BaseTemplateConfigTypeList<ObjType>*, int)
    void ObjType::ObjType(BaseTemplateConfigTypeList* param_1, int param_2) {
        array* paVar1;

        new (this) ConfigType<ObjType>(param_1, param_2);
        new (this) MakeSharedPool<ObjType, 96>();
        field_0 = &PTR__ObjType_100f03078;
        new (&field_56) std::array<eastl::string, 6ul>();
        new (&field_248) std::array<eastl::string, 5ul>();
        new (&field_408) eastl::string();
        new (&field_440) eastl::string();
        new (&field_472) eastl::string();
        m_members = 0;
        new (&field_512) Array<int, eastl::allocator>();
        new (&field_536) Array<int, eastl::allocator>();
        new (&field_560) Array<int, eastl::allocator>();
        m_stackable = 0;
        field_585 = 1;
        m_hasRandomPosition = 0;
        m_cost = 1;
        new (&field_600) Array<int, eastl::allocator>();
        new (&field_624) Array<int, eastl::allocator>();
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
        new (&field_672) Array<unsigned short, eastl::allocator>();
        new (&field_696) Array<unsigned short, eastl::allocator>();
        new (&field_720) Array<unsigned char, eastl::allocator>();
        new (&field_744) Array<signed char, eastl::allocator>();
        new (&field_768) Array<unsigned short, eastl::allocator>();
        new (&field_792) Array<unsigned short, eastl::allocator>();
        new (&field_816) Array<signed char, eastl::allocator>();
        field_840 = 0;
        field_842 = 0;
        field_844 = 0;
        new (&field_848) math::Vector3T<int>();
        field_860 = 0;
        m_zoom2D = 2000;
        new (&field_864) math::Vector3T<unsigned short>();
        new (&field_872) math::Vector3T<int>();
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
        if (param_1 != (BaseTemplateConfigTypeList*)0) {
            paVar1 = (array*)param_1->GetDefaultOps();
            std::array<eastl::string, 6ul>::operator=((array<eastl::string, 6ul>*)&field_56, paVar1);
            paVar1 = (array*)param_1->GetDefaultIops();
            std::array<eastl::string, 5ul>::operator=((array<eastl::string, 5ul>*)&field_248, paVar1);
        }
    }

    // 0x100506190, 16 bytes, complete-object constructor, placed by class name and debug map
    // ObjType::ObjType(BaseTemplateConfigTypeList<ObjType>*, int): jumps straight to the base-object constructor

    // 0x1005061a0, 3792 bytes, placed by class name and debug map
    // ObjType::DecodeType(PacketT<Array<unsigned char, eastl::allocator> >&, unsigned int)
    undefined* ObjType::DecodeType(PacketT* param_1, uint param_2) {
        undefined1* this_00;
        uchar uVar1;
        char cVar2;
        byte bVar3;
        undefined1 uVar4;
        ushort uVar5;
        undefined2 uVar6;
        undefined4 uVar7;
        int iVar8;
        int* piVar9;
        int* piVar10;
        basic_string* pbVar11;
        undefined4* puVar12;
        uint* puVar13;
        undefined8 uVar14;
        undefined1* puVar15;
        undefined2* puVar16;
        float* pfVar17;
        long lVar18;
        char* pcVar19;
        uint uVar20;
        char cVar21;
        ulong uVar22;
        ulong uVar23;
        uint uVar24;
        Vector3T<float>* this_01;
        Array<int, eastl::allocator>* this_02;
        __cxx_atomic_base_impl<oldscape::FolderSelection::FolderPathRequestStatus>* p_Var25;
        MinimenuEntry* this_03;
        ServerConnectionWorkItem* pSVar26;
        Minimap* this_04;
        StockPlayerOffer* this_05;
        bool bVar27;
        int local_40[2];
        Array<unsigned short, eastl::allocator>* local_38;

        switch (param_2) {
        case 1:
            uVar7 = param_1->gSmart2or4s();
            field_668 = uVar7;
            break;
        case 2:
            pbVar11 = (basic_string*)&field_408;
            goto LAB_100506b17;
        case 3:
            pbVar11 = (basic_string*)&field_440;
            goto LAB_100506b17;
        case 4:
            uVar6 = param_1->g2();
            m_zoom2D = uVar6;
            break;
        case 5:
            uVar6 = param_1->g2();
            uVar24 = 0;
            goto LAB_1005068b5;
        case 6:
            uVar6 = param_1->g2();
            uVar24 = 1;
            goto LAB_1005068b5;
        case 7:
            uVar5 = param_1->g2();
            puVar13 = (uint*)math::Vector3T<int>::operator[]((Vector3T<int>*)&field_872, 0);
            *puVar13 = (uint)uVar5;
            piVar9 = (int*)math::Vector3T<int>::operator[]((Vector3T<int>*)&field_872, 0);
            if (*piVar9 < 32768) {
                m_lastType = param_2;
                return DataStatus::READY;
            }
            uVar24 = 0;
            goto LAB_1005064f0;
        case 8:
            uVar5 = param_1->g2();
            puVar13 = (uint*)math::Vector3T<int>::operator[]((Vector3T<int>*)&field_872, 1);
            *puVar13 = (uint)uVar5;
            piVar9 = (int*)math::Vector3T<int>::operator[]((Vector3T<int>*)&field_872, 1);
            if (*piVar9 < 32768) {
                m_lastType = param_2;
                return DataStatus::READY;
            }
            uVar24 = 1;
        LAB_1005064f0:
            piVar9 = (int*)math::Vector3T<int>::operator[]((Vector3T<int>*)&field_872, uVar24);
            *piVar9 = *piVar9 + -65536;
            break;
        default:
            uVar14 = logger::default_logger();
            logger::Logger::Log(uVar14, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/objtype/ObjType.cpp",
                                357, "Unrecognised .obj config code: %u (Last type: %d)", param_2, m_lastType);
            break;
        case 11:
            m_stackable = 1;
            break;
        case 12:
            iVar8 = param_1->g4s();
            m_cost = (long)iVar8;
            break;
        case 13:
            uVar4 = param_1->g1();
            field_884 = uVar4;
            break;
        case 14:
            uVar4 = param_1->g1();
            field_885 = uVar4;
            break;
        case 15:
            m_isTradeable = false;
            break;
        case 16:
            m_members = 1;
            break;
        case 23:
            p_Var25 = (__cxx_atomic_base_impl<oldscape::FolderSelection::FolderPathRequestStatus>*)&field_888;
            goto LAB_1005065ba;
        case 24:
            this_03 = (MinimenuEntry*)&field_888;
            goto LAB_1005065d8;
        case 25:
            p_Var25 = (__cxx_atomic_base_impl<oldscape::FolderSelection::FolderPathRequestStatus>*)&field_920;
        LAB_1005065ba:
            uVar7 = param_1->gSmart2or4s();
            std::__cxx_atomic_base_impl<oldscape::FolderSelection::FolderPathRequestStatus>::__cxx_atomic_base_impl(
                p_Var25, uVar7);
            break;
        case 26:
            this_03 = (MinimenuEntry*)&field_920;
        LAB_1005065d8:
            iVar8 = param_1->gSmart2or4s();
            this_03->SetZ(iVar8);
            break;
        case 27:
            uVar4 = param_1->g1();
            field_886 = uVar4;
            break;
        case 30:
        case 31:
        case 32:
        case 33:
        case 34:
            pbVar11 = (basic_string*)std::array<eastl::string, 6ul>::operator[]((array<eastl::string, 6ul>*)&field_56,
                                                                                (ulong)(param_2 - 30));
            goto LAB_100506b17;
        case 35:
        case 36:
        case 37:
        case 38:
        case 39:
            pbVar11 = (basic_string*)std::array<eastl::string, 5ul>::operator[]((array<eastl::string, 5ul>*)&field_248,
                                                                                (ulong)(param_2 - 35));
            goto LAB_100506b17;
        case 40:
            bVar3 = param_1->g1();
            uVar22 = (ulong)bVar3;
            (&field_672, uVar22, 0)->set_max_size();
            (&field_696, uVar22, 0)->set_max_size();
            if (bVar3 != 0) {
                uVar23 = 0;
                local_38 = (Array<unsigned short, eastl::allocator>*)uVar22;
                do {
                    uVar6 = param_1->g2();
                    puVar16 = (undefined2*)Array<unsigned short, eastl::allocator>::operator[](
                        (Array<unsigned short, eastl::allocator>*)&field_672, uVar23);
                    *puVar16 = uVar6;
                    uVar6 = param_1->g2();
                    puVar16 = (undefined2*)Array<unsigned short, eastl::allocator>::operator[](
                        (Array<unsigned short, eastl::allocator>*)&field_696, uVar23);
                    *puVar16 = uVar6;
                    uVar23 = uVar23 + 1;
                } while (local_38 != (Array<unsigned short, eastl::allocator>*)uVar23);
            }
            break;
        case 41:
            bVar3 = param_1->g1();
            local_38 = (Array<unsigned short, eastl::allocator>*)&field_768;
            uVar22 = (ulong)bVar3;
            local_38->set_max_size(uVar22, 0);
            (&field_792, uVar22, 0)->set_max_size();
            if (bVar3 != 0) {
                uVar23 = 0;
                do {
                    uVar6 = param_1->g2();
                    puVar16 = (undefined2*)Array<unsigned short, eastl::allocator>::operator[](local_38, uVar23);
                    *puVar16 = uVar6;
                    uVar6 = param_1->g2();
                    puVar16 = (undefined2*)Array<unsigned short, eastl::allocator>::operator[](
                        (Array<unsigned short, eastl::allocator>*)&field_792, uVar23);
                    *puVar16 = uVar6;
                    uVar23 = uVar23 + 1;
                } while (uVar22 != uVar23);
            }
            break;
        case 42:
            bVar3 = param_1->g1();
            (&field_720, (ulong)bVar3, 0)->set_max_size();
            if (bVar3 != 0) {
                uVar22 = 0;
                do {
                    uVar4 = param_1->g1();
                    puVar15 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](
                        (Array<unsigned char, eastl::allocator>*)&field_720, uVar22);
                    *puVar15 = uVar4;
                    uVar22 = uVar22 + 1;
                } while (bVar3 != uVar22);
            }
            break;
        case 43:
            uVar7 = param_1->g4();
            field_660 = uVar7;
            field_659 = 1;
            break;
        case 44:
            uVar5 = param_1->g2();
            local_38 = (Array<unsigned short, eastl::allocator>*)CONCAT44(local_38._4_4_, (uint)uVar5);
            if (uVar5 == 0) {
                uVar24 = 0;
            } else {
                uVar24 = 0;
                uVar20 = (uint)uVar5;
                do {
                    uVar24 = uVar24 + 1;
                    bVar27 = 1 < uVar20;
                    uVar20 = uVar20 >> 1;
                } while (bVar27);
            }
            (&field_744, (ulong)uVar24, 0)->set_max_size();
            if (uVar24 != 0) {
                uVar22 = 0;
                cVar2 = '\0';
                do {
                    if (((uint)local_38._0_4_ >> ((uint)uVar22 & 31) & 1) == 0) {
                        cVar21 = -1;
                    } else {
                        if (cVar2 == '\x7f') {
                            /* WARNING: Subroutine does not return */
                            LogAssert("active < std::numeric_limits<int8>::max()",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                      "runetek5/config/objtype/ObjType.cpp",
                                      163, (char*)0);
                        }
                        cVar21 = cVar2;
                        cVar2 = cVar2 + '\x01';
                    }
                    pcVar19 = (char*)Array<signed char, eastl::allocator>::operator[](
                        (Array<signed char, eastl::allocator>*)&field_744, uVar22);
                    *pcVar19 = cVar21;
                    uVar22 = uVar22 + 1;
                } while (uVar24 != uVar22);
            }
            break;
        case 45:
            uVar5 = param_1->g2();
            local_38 = (Array<unsigned short, eastl::allocator>*)CONCAT44(local_38._4_4_, (uint)uVar5);
            if (uVar5 == 0) {
                uVar24 = 0;
            } else {
                uVar24 = 0;
                uVar20 = (uint)uVar5;
                do {
                    uVar24 = uVar24 + 1;
                    bVar27 = 1 < uVar20;
                    uVar20 = uVar20 >> 1;
                } while (bVar27);
            }
            (&field_816, (ulong)uVar24, 0)->set_max_size();
            if (uVar24 != 0) {
                uVar22 = 0;
                cVar2 = '\0';
                do {
                    if (((uint)local_38._0_4_ >> ((uint)uVar22 & 31) & 1) == 0) {
                        cVar21 = -1;
                    } else {
                        if (cVar2 == '\x7f') {
                            /* WARNING: Subroutine does not return */
                            LogAssert("active < std::numeric_limits<int8>::max()",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                      "runetek5/config/objtype/ObjType.cpp",
                                      189, (char*)0);
                        }
                        cVar21 = cVar2;
                        cVar2 = cVar2 + '\x01';
                    }
                    pcVar19 = (char*)Array<signed char, eastl::allocator>::operator[](
                        (Array<signed char, eastl::allocator>*)&field_816, uVar22);
                    *pcVar19 = cVar21;
                    uVar22 = uVar22 + 1;
                } while (uVar24 != uVar22);
            }
            break;
        case 65:
            m_isStockmarket = true;
            break;
        case 69:
            uVar7 = param_1->g4s();
            field_652 = uVar7;
            break;
        case 78:
            pSVar26 = (ServerConnectionWorkItem*)&field_888;
            goto LAB_100506822;
        case 79:
            pSVar26 = (ServerConnectionWorkItem*)&field_920;
        LAB_100506822:
            uVar7 = param_1->gSmart2or4s();
            oldscape::ServerConnectionWorkItem::ServerConnectionWorkItem(pSVar26, uVar7);
            break;
        case 90:
            this_04 = (Minimap*)&field_888;
            goto LAB_100506849;
        case 91:
            this_04 = (Minimap*)&field_920;
        LAB_100506849:
            iVar8 = param_1->gSmart2or4s();
            this_04->SetLevel(iVar8);
            break;
        case 92:
            this_05 = (StockPlayerOffer*)&field_888;
            goto LAB_100506870;
        case 93:
            this_05 = (StockPlayerOffer*)&field_920;
        LAB_100506870:
            iVar8 = param_1->gSmart2or4s();
            this_05->SetCompletedCount(iVar8);
            break;
        case 94:
            uVar5 = param_1->g2();
            field_664 = uVar5;
            break;
        case 95:
            uVar6 = param_1->g2();
            uVar24 = 2;
        LAB_1005068b5:
            puVar16 = (undefined2*)math::Vector3T<short>::operator[]((Vector3T<short>*)&field_864, uVar24);
            *puVar16 = uVar6;
            break;
        case 96:
            uVar4 = param_1->g1();
            field_657 = uVar4;
            break;
        case 97:
            uVar5 = param_1->g2();
            field_952 = uVar5;
            break;
        case 98:
            uVar5 = param_1->g2();
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
            puVar15 = &field_600;
            lVar18 = puVar15->end();
            if (lVar18 == 0) {
                puVar15->set_max_size(10, 0);
                this_00 = &field_624;
                this_00->set_max_size(10, 0);
                piVar9 = (int*)puVar15->data();
                piVar10 = (int*)puVar15->end();
                local_40[0] = 0;
                std::fill<int*, int>(piVar9, piVar10, local_40);
                piVar9 = (int*)this_00->data();
                piVar10 = (int*)this_00->end();
                local_40[1] = 0;
                std::fill<int*, int>(piVar9, piVar10, local_40 + 1);
            }
            uVar5 = param_1->g2();
            puVar13 = (uint*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)puVar15,
                                                                      (ulong)(param_2 - 100));
            *puVar13 = (uint)uVar5;
            uVar5 = param_1->g2();
            puVar13 = (uint*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_624,
                                                                      (ulong)(param_2 - 100));
            *puVar13 = (uint)uVar5;
            break;
        case 110:
        case 111:
        case 112:
            if (field_860 == '\0') {
                (&field_848)->SetToOne();
                field_860 = 1;
            }
            uVar5 = param_1->g2();
            local_38 = (Array<unsigned short, eastl::allocator>*)CONCAT44(local_38._4_4_, (float)uVar5 * 0.0078125);
            this_01 = (Vector3T<float>*)&field_848;
            uVar24 = param_2 - 110;
            goto LAB_100506a08;
        case 113:
            cVar2 = param_1->g1s();
            field_840 = (short)cVar2;
            break;
        case 114:
            cVar2 = param_1->g1s();
            field_842 = cVar2 * 5;
            break;
        case 115:
            uVar1 = param_1->g1();
            m_team = uVar1;
            break;
        case 121:
            uVar5 = param_1->g2();
            field_956 = uVar5;
            break;
        case 122:
            uVar5 = param_1->g2();
            field_958 = uVar5;
            break;
        case 125:
            cVar2 = param_1->g1s();
            this_01 = (Vector3T<float>*)&field_908;
            goto LAB_1005069a9;
        case 126:
            cVar2 = param_1->g1s();
            this_01 = (Vector3T<float>*)&field_940;
        LAB_1005069a9:
            local_38._0_4_ = (float)(int)cVar2;
            pfVar17 = (float*)math::Vector3T<float>::operator[](this_01, 0);
            *pfVar17 = local_38._0_4_;
            cVar2 = param_1->g1s();
            local_38._0_4_ = (float)(int)cVar2;
            pfVar17 = (float*)math::Vector3T<float>::operator[](this_01, 1);
            *pfVar17 = local_38._0_4_;
            cVar2 = param_1->g1s();
            local_38 = (Array<unsigned short, eastl::allocator>*)CONCAT44(local_38._4_4_, (float)(int)cVar2);
            uVar24 = 2;
        LAB_100506a08:
            puVar12 = (undefined4*)math::Vector3T<float>::operator[](this_01, uVar24);
            *puVar12 = local_38._0_4_;
            break;
        case 131:
            pbVar11 = (basic_string*)&field_472;
            goto LAB_100506b17;
        case 132:
            bVar3 = param_1->g1();
            (&field_560, (ulong)bVar3, 0)->set_max_size();
            if (bVar3 != 0) {
                uVar22 = 0;
                do {
                    uVar5 = param_1->g2();
                    puVar13 = (uint*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_560,
                                                                              uVar22);
                    *puVar13 = (uint)uVar5;
                    uVar22 = uVar22 + 1;
                } while (bVar3 != uVar22);
            }
            break;
        case 134:
            uVar4 = param_1->g1();
            field_844 = uVar4;
            break;
        case 139:
            uVar5 = param_1->g2();
            field_960 = uVar5;
            break;
        case 140:
            uVar5 = param_1->g2();
            field_962 = uVar5;
            break;
        case 142:
        case 143:
        case 144:
        case 145:
        case 146:
            this_02 = (Array<int, eastl::allocator>*)&field_512;
            lVar18 = this_02->end();
            if (lVar18 == 0) {
                uVar22 = 0;
                this_02->set_max_size(6, 0);
                do {
                    puVar12 = (undefined4*)Array<int, eastl::allocator>::operator[](this_02, uVar22);
                    *puVar12 = 4294967295;
                    uVar22 = uVar22 + 1;
                } while (uVar22 != 6);
            }
            uVar5 = param_1->g2();
            uVar24 = param_2 - 142;
            goto LAB_10050639d;
        case 150:
        case 151:
        case 152:
        case 153:
        case 154:
            this_02 = (Array<int, eastl::allocator>*)&field_536;
            lVar18 = this_02->end();
            if (lVar18 == 0) {
                uVar22 = 0;
                this_02->set_max_size(5, 0);
                do {
                    puVar12 = (undefined4*)Array<int, eastl::allocator>::operator[](this_02, uVar22);
                    *puVar12 = 4294967295;
                    uVar22 = uVar22 + 1;
                } while (uVar22 != 5);
            }
            uVar5 = param_1->g2();
            uVar24 = param_2 - 150;
        LAB_10050639d:
            puVar13 = (uint*)Array<int, eastl::allocator>::operator[](this_02, (ulong)uVar24);
            *puVar13 = (uint)uVar5;
            break;
        case 156:
            field_585 = 0;
            break;
        case 157:
            m_hasRandomPosition = 1;
            break;
        case 161:
            uVar5 = param_1->g2();
            field_964 = uVar5;
            break;
        case 162:
            uVar5 = param_1->g2();
            field_966 = uVar5;
            break;
        case 163:
            uVar6 = param_1->g2();
            field_968 = uVar6;
            break;
        case 164:
            pbVar11 = (basic_string*)&field_976;
        LAB_100506b17:
            PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<eastl::string>(
                (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1, pbVar11, false);
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
            lVar18 = param_1->g8s();
            m_cost = lVar18;
            break;
        case 249:
            DecodeParams(param_1);
        }
        m_lastType = param_2;
        return DataStatus::READY;
    }

    // 0x100507320, 32 bytes, placed by class name and debug map
    // ObjType::PostDecode()
    void ObjType::PostDecode() {
        if (field_657 != '\0') {
            m_isTradeable = false;
        }
    }

    // 0x100507340, 112 bytes, placed by class name and debug map
    // ObjType::GetAppearance(bool, shared_ptr<ObjTypeCustomisation> const&)
    void ObjType::GetAppearance(bool param_1, shared_ptr* param_2) {
        bool bVar1;
        Option<float>* this_00;
        Layout* this_01;
        undefined3 in_register_00000031;
        int iVar2;
        undefined4 in_register_00000034;

        iVar2 = CONCAT31(in_register_00000031, param_1);
        bVar1 = shared_ptr::operator_cast_to_bool(param_2);
        if (CONCAT31(in_register_00000031, param_1) == 0) {
            if (bVar1) {
                this_01 =
                    (Layout*)shared_ptr<ObjTypeCustomisation>::operator->((shared_ptr<ObjTypeCustomisation>*)param_2);
                eastl::string::Layout::SSOBeginPtr(this_01, (type*)CONCAT44(in_register_00000034, iVar2));
            } else {
                GetManAppearance(this);
            }
        } else if (bVar1) {
            this_00 = (Option<float>*)shared_ptr<ObjTypeCustomisation>::operator->(
                (shared_ptr<ObjTypeCustomisation>*)param_2);
            this_00->GetDefaultValue();
        } else {
            GetWomanAppearance(this);
        }
    }

    // 0x1005073f0, 224 bytes, placed by class name and debug map
    // ObjType::GetStackSizeAlt(long long)
    ObjType* ObjType::GetStackSizeAlt(longlong param_1) {
        long lVar1;
        int* piVar2;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        ObjType* pOVar3;
        ulong uVar4;
        int iVar5;

        lVar1 = (&field_600)->end();
        if ((lVar1 != 0) && (1 < param_1)) {
            iVar5 = -1;
            uVar4 = 0;
            do {
                piVar2 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_624, uVar4);
                if ((*piVar2 <= param_1) && (piVar2 = (int*)Array<int, eastl::allocator>::operator[](
                                                 (Array<int, eastl::allocator>*)&field_624, uVar4),
                                             *piVar2 != 0)) {
                    piVar2 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_600,
                                                                            uVar4);
                    iVar5 = *piVar2;
                }
                uVar4 = uVar4 + 1;
            } while (uVar4 != 10);
            if (iVar5 != -1) {
                this_00 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(field_24, iVar5,
                                                                                              (DataStatus**)0)
                              ->List();
                pOVar3 =
                    (ObjType*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
                if (iVar5 != -1) {
                    return pOVar3;
                }
            }
        }
        return this;
    }

    // 0x1005074d0, 2608 bytes, placed by class name and debug map
    // ObjType::GetBodyModel(graphics::RT7Core*, AssetBuilder&, BuildRequest<graphics::Model, BuildModelMain>&, bool, shared_ptr<ObjTypeCustomisation> const&, unsigned short, shared_ptr<PlayerModel> const&)
    undefined* ObjType::GetBodyModel(RT7Core* param_1, AssetBuilder* param_2, BuildRequest* param_3, bool param_4,
                                     shared_ptr* param_5, ushort param_6, shared_ptr* param_7) {
        undefined1* puVar1;
        ObjTypeList* this_00;
        bool bVar2;
        bool bVar3;
        char cVar4;
        byte bVar5;
        byte bVar6;
        int iVar7;
        undefined4 uVar8;
        PlayerModel* pPVar9;
        AssetLRUHashCache<graphics::Model, BuildModelMain, 100ul, 101ul, false>* this_01;
        AssetLRUHashCache<graphics::Model, BuildModelMain, 10ul, 11ul, false>* this_02;
        Js5ArchiveSettings* pJVar10;
        Model* pMVar11;
        CommandLine* this_03;
        long lVar12;
        Js5ArchiveSettings* pJVar13;
        int* piVar14;
        long* plVar15;
        undefined4* puVar16;
        undefined* puVar17;
        undefined** ppuVar18;
        ulong uVar19;
        ulong uVar20;
        Vector3T* pVVar21;
        Js5ResourceProvider* this_04;
        uint* puVar22;
        LoginManager* pLVar23;
        Array<VarValue, eastl::allocator>* pAVar24;
        GeometryBatch* pGVar25;
        BuildModelMain* pBVar26;
        Array* pAVar27;
        WorldmapAreaMetadata* this_05;
        Array* pAVar28;
        Array* pAVar29;
        MapArea* this_06;
        vector* this_07;
        bool bVar30;
        shared_ptr* this_08;
        BuildRequest* this_09;
        Js5ArchiveSettings* pJVar31;
        ObjType* pOVar32;
        undefined1 local_160[72];
        CommandLine* local_110;
        RT7Core* local_108;
        shared_ptr local_100;
        AssetLRUHashCache<graphics::Model, BuildModelMain, 100ul, 101ul, false>* local_f0;
        AssetLRUHashCache<graphics::Model, BuildModelMain, 10ul, 11ul, false>* local_e8;
        vector<int, eastl::allocator> local_e0[32];
        shared_ptr local_b0;
        ObjType* local_a0;
        undefined* local_98;
        ModelConstructedState local_8b;
        bool local_8a;
        bool local_89;
        Js5ArchiveSettings local_88;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = (ObjTypeList*)field_24;
        local_108 = param_1;
        pPVar9 = (PlayerModel*)shared_ptr<PlayerModel>::operator->((shared_ptr<PlayerModel>*)param_7);
        this_01 = (AssetLRUHashCache<graphics::Model, BuildModelMain, 100ul, 101ul, false>*)
                      pPVar9->GetRecolouredModelsCache();
        this_02 = (AssetLRUHashCache<graphics::Model, BuildModelMain, 10ul, 11ul, false>*)this_00->GetModelCache();
        bVar3 = operator!=(param_7, (_func_decltype_nullptr*)0);
        if (bVar3) {
            local_e8 = this_02;
            this_01->UpdateLoadingAssetList(5);
            cVar4 = this_01->IsLoadingAsset((long)field_32);
            if (cVar4 != '\0')
                goto LAB_1005077a0;
            local_88._0_8_ = SEXT48(field_32);
            pJVar31 = &local_88;
            local_f0 = this_01;
            pJVar10 = (Js5ArchiveSettings*)LRUHashCache<graphics::Model, 100ul, 101ul, false, unsigned long long>::Find(
                (ulonglong*)this_01);
            bVar3 = pJVar10->operator_cast_to_bool();
            if (bVar3) {
                pMVar11 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)pJVar10);
                cVar4 = pMVar11->GetConstructedState();
                if (cVar4 != '\x02') {
                    /* WARNING: Subroutine does not return */
                    LogAssert("cachedModel->GetConstructedState() == graphics::ModelConstructedState::DATA_AND_MAT",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "config/objtype/ObjType.cpp",
                              444, (char*)0);
                }
            LAB_100507661:
                param_3->SetConstructedObj(pJVar10);
                pJVar31 = pJVar10;
            }
        LAB_100507670:
            this_09 = param_3;
            cVar4 = param_3->IsTaskDone();
            if ((cVar4 == '\0') && (cVar4 = this_09->IsEmpty(), cVar4 == '\0'))
                goto LAB_1005077a0;
            cVar4 = this_09->IsEmpty();
            if (cVar4 != '\0') {
                cVar4 = graphics::Model::IsReadyToConstruct(local_108);
                if (cVar4 == '\0')
                    goto LAB_1005077a0;
                pJVar31 = (Js5ArchiveSettings*)(ulong)param_4;
                this_03 = (CommandLine*)GetAppearance(this, param_4, param_5);
                iVar7 = this_03->GetX();
                if (iVar7 == -1) {
                    local_98 = DataStatus::READY;
                    bVar5 = 1;
                } else {
                    eastl::vector<int, eastl::allocator>::vector(local_e0);
                    eastl::vector<int, eastl::allocator>::reserve(local_e0, 3);
                    uVar8 = this_03->GetX();
                    local_88.m_archiveID = uVar8;
                    pJVar31 = &local_88;
                    eastl::vector<int, eastl::allocator>::push_back(local_e0, (int*)pJVar31);
                    iVar7 = this_03->GetZ();
                    if (iVar7 != -1) {
                        uVar8 = this_03->GetZ();
                        local_88.m_archiveID = uVar8;
                        pJVar31 = &local_88;
                        eastl::vector<int, eastl::allocator>::push_back(local_e0, (int*)pJVar31);
                        iVar7 = this_03->GetPos();
                        if (iVar7 != -1) {
                            uVar8 = this_03->GetPos();
                            local_88.m_archiveID = uVar8;
                            pJVar31 = &local_88;
                            eastl::vector<int, eastl::allocator>::push_back(local_e0, (int*)pJVar31);
                        }
                    }
                    local_110 = this_03;
                    local_a0 = this;
                    lVar12 = local_e0->size();
                    local_89 = lVar12 != 0;
                    if (lVar12 == 0) {
                        bVar30 = false;
                        bVar3 = true;
                    } else {
                        bVar3 = true;
                        pJVar10 = (Js5ArchiveSettings*)0;
                        bVar30 = false;
                        do {
                            pJVar31 = pJVar10;
                            piVar14 = (int*)eastl::vector<int, eastl::allocator>::operator[](local_e0, (ulong)pJVar10);
                            bVar2 = bVar3;
                            if (*piVar14 != -1) {
                                plVar15 = (long*)local_a0->field_24->GetOutputType();
                                pJVar31 = Js5Archive::JS5_MODELSRT7;
                                puVar16 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](local_e0,
                                                                                                        (ulong)pJVar10);
                                puVar17 = (undefined*)(**(code**)(*plVar15 + 48))(plVar15, pJVar31, *puVar16, 0,
                                                                                  Priority::HIGH, 1);
                                bVar2 = false;
                                if (puVar17 != DataStatus::NOTLOADED) {
                                    bVar2 = bVar3;
                                }
                                bVar30 = true;
                                if (puVar17 == DataStatus::MISSING) {
                                    local_98 = DataStatus::MISSING;
                                    break;
                                }
                            }
                            bVar3 = bVar2;
                            pJVar10 = (Js5ArchiveSettings*)((long)&pJVar10->m_archiveID + 1);
                            pJVar13 = (Js5ArchiveSettings*)local_e0->size();
                            local_89 = pJVar10 < pJVar13;
                        } while (local_89);
                    }
                    bVar5 = 1;
                    if ((local_89 & 1U) == 0) {
                        if (bVar30) {
                            if (bVar3) {
                                new (&local_88) eastl::fixed_vector<PacketView, 1ul, true, eastl::allocator>();
                                new ((local_160 + 40)) eastl::vector<math::Vector3T<float>, eastl::allocator>();
                                pOVar32 = local_a0;
                                uVar19 = local_e0->size();
                                local_88.reserve(uVar19);
                                uVar19 = local_e0->size();
                                ((local_160 + 40))->reserve(uVar19);
                                lVar12 = local_e0->size();
                                if (lVar12 != 0) {
                                    uVar19 = 0;
                                    do {
                                        piVar14 =
                                            (int*)eastl::vector<int, eastl::allocator>::operator[](local_e0, uVar19);
                                        if (*piVar14 != -1) {
                                            pVVar21 = (Vector3T*)local_110->GetOffset();
                                            ((local_160 + 40))->push_back(pVVar21);
                                            new (local_160) PacketView();
                                            this_04 = (Js5ResourceProvider*)pOVar32->field_24->GetOutputType();
                                            pJVar31 = Js5Archive::JS5_MODELSRT7;
                                            puVar22 = (uint*)eastl::vector<int, eastl::allocator>::operator[](local_e0,
                                                                                                              uVar19);
                                            this_04->GetFile(local_160, pJVar31, *puVar22, 0, (Priority*)Priority::HIGH,
                                                             true, false, false);
                                            eastl::fixed_vector<PacketView, 1ul, true, eastl::allocator>::push_back(
                                                (PacketView*)&local_88);
                                            local_160->~PacketView();
                                            pOVar32 = local_a0;
                                        }
                                        uVar19 = uVar19 + 1;
                                        uVar20 = local_e0->size();
                                    } while (uVar19 < uVar20);
                                }
                                this_08 = param_5;
                                bVar5 = 0;
                                bVar3 = operator!=(param_5, (_func_decltype_nullptr*)0);
                                if (bVar3) {
                                    pLVar23 = (LoginManager*)shared_ptr<ObjTypeCustomisation>::operator->(
                                        (shared_ptr<ObjTypeCustomisation>*)this_08);
                                    pAVar24 =
                                        (Array<VarValue, eastl::allocator>*)pLVar23->GetDevCredentialsOutputDirectory();
                                    bVar5 = pAVar24->empty();
                                    bVar5 = bVar5 ^ 1;
                                    this_08 = param_5;
                                }
                                bVar6 = 0;
                                bVar3 = operator!=(this_08, (_func_decltype_nullptr*)0);
                                if (bVar3) {
                                    pGVar25 = (GeometryBatch*)shared_ptr<ObjTypeCustomisation>::operator->(
                                        (shared_ptr<ObjTypeCustomisation>*)param_5);
                                    pAVar24 = (Array<VarValue, eastl::allocator>*)pGVar25->GetBoneIDMap();
                                    bVar6 = pAVar24->empty();
                                    bVar6 = bVar6 ^ 1;
                                }
                                MakeSharedPool<graphics::Model, 3072>::MakeShared<>(
                                    (shared_ptr*)local_160, (MakeSharedPool<graphics::Model, 3072>*)0);
                                pMVar11 = (Model*)shared_ptr<graphics::Model>::operator->(
                                    (shared_ptr<graphics::Model>*)local_160);
                                pMVar11->SetSourceModelIDs(local_e0);
                                local_100._0_4_ = 4096;
                                local_8b = (ModelConstructedState)2;
                                local_8a = true;
                                bucket_make_shared<BuildModelMain, int, graphics::ModelConstructedState, bool,
                                                   graphics::RT7Core*&,
                                                   eastl::fixed_vector<PacketView, 1ul, true, eastl::allocator>,
                                                   shared_ptr<graphics::Model>&>(
                                    (jag*)&local_b0, (int*)&local_100, &local_8b, &local_8a, &local_108,
                                    (fixed_vector*)&local_88, (shared_ptr*)local_160);
                                pBVar26 = (BuildModelMain*)shared_ptr<BuildModelMain>::operator->(
                                    (shared_ptr<BuildModelMain>*)&local_b0);
                                pBVar26->SetOffset((vector*)(local_160 + 40));
                                if (bVar5 == 0) {
                                    pBVar26 = (BuildModelMain*)shared_ptr<BuildModelMain>::operator->(
                                        (shared_ptr<BuildModelMain>*)&local_b0);
                                    pBVar26->SetRecolor((Array*)&local_a0->field_672, (Array*)&local_a0->field_696);
                                } else {
                                    pBVar26 = (BuildModelMain*)shared_ptr<BuildModelMain>::operator->(
                                        (shared_ptr<BuildModelMain>*)&local_b0);
                                    pLVar23 = (LoginManager*)shared_ptr<ObjTypeCustomisation>::operator->(
                                        (shared_ptr<ObjTypeCustomisation>*)param_5);
                                    puVar1 = &local_a0->field_672;
                                    pAVar27 = (Array*)pLVar23->GetDevCredentialsOutputDirectory();
                                    pBVar26->SetCustomRecolor(puVar1, pAVar27);
                                }
                                if (bVar6 == 0) {
                                    pBVar26 = (BuildModelMain*)shared_ptr<BuildModelMain>::operator->(
                                        (shared_ptr<BuildModelMain>*)&local_b0);
                                    pBVar26->SetRematerial((Array*)&local_a0->field_768, (Array*)&local_a0->field_792);
                                } else {
                                    pBVar26 = (BuildModelMain*)shared_ptr<BuildModelMain>::operator->(
                                        (shared_ptr<BuildModelMain>*)&local_b0);
                                    pGVar25 = (GeometryBatch*)shared_ptr<ObjTypeCustomisation>::operator->(
                                        (shared_ptr<ObjTypeCustomisation>*)param_5);
                                    puVar1 = &local_a0->field_768;
                                    pAVar27 = (Array*)pGVar25->GetBoneIDMap();
                                    pBVar26->SetRematerial(puVar1, pAVar27);
                                }
                                bVar3 = operator!=(param_7, (_func_decltype_nullptr*)0);
                                if (bVar3) {
                                    pBVar26 = (BuildModelMain*)shared_ptr<BuildModelMain>::operator->(
                                        (shared_ptr<BuildModelMain>*)&local_b0);
                                    this_05 = (WorldmapAreaMetadata*)shared_ptr<PlayerModel>::operator->(
                                        (shared_ptr<PlayerModel>*)param_7);
                                    pAVar27 = (Array*)this_05->GetOrigin();
                                    pPVar9 = (PlayerModel*)shared_ptr<PlayerModel>::operator->(
                                        (shared_ptr<PlayerModel>*)param_7);
                                    pAVar28 = (Array*)pPVar9->GetPlayerRecolSource();
                                    pPVar9 = (PlayerModel*)shared_ptr<PlayerModel>::operator->(
                                        (shared_ptr<PlayerModel>*)param_7);
                                    pAVar29 = (Array*)pPVar9->GetPlayerRecolDest();
                                    pBVar26->SetPlayerRecolor(pAVar27, pAVar28, pAVar29);
                                    pBVar26 = (BuildModelMain*)shared_ptr<BuildModelMain>::operator->(
                                        (shared_ptr<BuildModelMain>*)&local_b0);
                                    this_06 = (MapArea*)shared_ptr<PlayerModel>::operator->(
                                        (shared_ptr<PlayerModel>*)param_7);
                                    pAVar27 = (Array*)this_06->GetOrigin();
                                    pPVar9 = (PlayerModel*)shared_ptr<PlayerModel>::operator->(
                                        (shared_ptr<PlayerModel>*)param_7);
                                    pAVar28 = (Array*)pPVar9->GetPlayerRematSource();
                                    pPVar9 = (PlayerModel*)shared_ptr<PlayerModel>::operator->(
                                        (shared_ptr<PlayerModel>*)param_7);
                                    pAVar29 = (Array*)pPVar9->GetPlayerRematDest();
                                    pBVar26->SetPlayerRematerial(pAVar27, pAVar28, pAVar29);
                                }
                                pBVar26 = (BuildModelMain*)shared_ptr<BuildModelMain>::operator->(
                                    (shared_ptr<BuildModelMain>*)&local_b0);
                                pBVar26->SetAmbientAdjust(param_6 + local_a0->field_840);
                                new (&local_100) shared_ptr<oldscape::dash3d::Decor>(&local_b0);
                                param_2->SubmitJob(&local_100);
                                local_100.~shared_ptr();
                                bVar3 = operator!=(param_7, (_func_decltype_nullptr*)0);
                                if (bVar3) {
                                    local_f0->AddLoadingAsset((long)local_a0->field_32, &local_b0);
                                } else {
                                    local_e8->AddLoadingAsset((long)local_a0->field_32, &local_b0);
                                }
                                pJVar31 = (Js5ArchiveSettings*)local_160;
                                param_3->SetObjAndTask(pJVar31, &local_b0);
                                bVar6 = param_3->IsTaskDone();
                                bVar5 = bVar6 ^ 1;
                                if (bVar6 == 0) {
                                    local_98 = DataStatus::NOTLOADED;
                                }
                                local_b0.~shared_ptr();
                                local_160->~shared_ptr();
                                ((local_160 + 40))->~vector();
                                local_88.~fixed_vector();
                                goto LAB_100507dbb;
                            }
                            ppuVar18 = &DataStatus::NOTLOADED;
                        } else {
                            ppuVar18 = &DataStatus::READY;
                        }
                        local_98 = *ppuVar18;
                    }
                LAB_100507dbb:
                    eastl::vector<int, eastl::allocator>::~vector(local_e0);
                }
                this_09 = param_3;
                if (bVar5 != 0)
                    goto LAB_100507e1e;
            }
            this_07 = this_09->SSOBeginPtr(pJVar31);
            pMVar11 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)this_07);
            cVar4 = pMVar11->GetConstructedState();
            if (cVar4 != '\x02') {
                /* WARNING: Subroutine does not return */
                LogAssert("model.GetAsset()->GetConstructedState() == graphics::ModelConstructedState::DATA_AND_MAT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "objtype/ObjType.cpp",
                          599, (char*)0);
            }
            ppuVar18 = &DataStatus::READY;
        } else {
            local_f0 = this_01;
            this_02->UpdateLoadingAssetList(5);
            cVar4 = this_02->IsLoadingAsset((long)field_32);
            if (cVar4 == '\0') {
                local_88._0_8_ = SEXT48(field_32);
                pJVar31 = &local_88;
                local_e8 = this_02;
                pJVar10 =
                    (Js5ArchiveSettings*)LRUHashCache<graphics::Model, 10ul, 11ul, false, unsigned long long>::Find(
                        (ulonglong*)this_02);
                bVar3 = pJVar10->operator_cast_to_bool();
                if (bVar3) {
                    pMVar11 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)pJVar10);
                    cVar4 = pMVar11->GetConstructedState();
                    if (cVar4 != '\x02') {
                        /* WARNING: Subroutine does not return */
                        LogAssert("cachedModel->GetConstructedState() == graphics::ModelConstructedState::DATA_AND_MAT",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                  "config/objtype/ObjType.cpp",
                                  458, (char*)0);
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
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return local_98;
    }

    // 0x1005084b0, 2144 bytes, placed by class name and debug map
    // ObjType::GetHeadModel(graphics::RT7Core*, AssetBuilder&, BuildRequest<graphics::Model, BuildModelMain>&, bool, shared_ptr<ObjTypeCustomisation> const&, unsigned short, shared_ptr<PlayerModel> const&)
    undefined* ObjType::GetHeadModel(RT7Core* param_1, AssetBuilder* param_2, BuildRequest* param_3, bool param_4,
                                     shared_ptr* param_5, ushort param_6, shared_ptr* param_7) {
        undefined1* puVar1;
        bool bVar2;
        char cVar3;
        bool bVar4;
        byte bVar5;
        byte bVar6;
        int iVar7;
        Minimap* pMVar8;
        long lVar9;
        RT7Core* pRVar10;
        int* piVar11;
        long* plVar12;
        undefined4* puVar13;
        undefined* puVar14;
        undefined** ppuVar15;
        ulong uVar16;
        ulong uVar17;
        Vector3T* pVVar18;
        Js5ResourceProvider* this_00;
        uint* puVar19;
        LoginManager* pLVar20;
        Array<VarValue, eastl::allocator>* pAVar21;
        GeometryBatch* pGVar22;
        BuildModelMain* pBVar23;
        Array* pAVar24;
        WorldmapAreaMetadata* this_01;
        PlayerModel* pPVar25;
        Array* pAVar26;
        Array* pAVar27;
        MapArea* this_02;
        vector* this_03;
        Model* pMVar28;
        bool bVar29;
        RT7Core* pRVar30;
        shared_ptr* this_05;
        vector<math::Vector3T<float>, eastl::allocator> local_150[32];
        PacketView local_130;
        RT7Core* local_100;
        vector<int, eastl::allocator> local_f8[32];
        shared_ptr local_d8;
        Minimap* local_c0;
        BuildRequest* local_b8;
        shared_ptr local_b0;
        ObjType* local_a0;
        undefined* local_98;
        ModelConstructedState local_8b;
        bool local_8a;
        bool local_89;
        PacketView local_88[2];
        Js5ArchiveSettings* local_38;

        local_38 = *(Js5ArchiveSettings**)PTR____stack_chk_guard_100ee9d98;
        local_100 = param_1;
        local_a0 = this;
        cVar3 = param_3->IsTaskDone();
        if ((cVar3 == '\0') && (cVar3 = param_3->IsEmpty(), cVar3 == '\0')) {
        LAB_1005086c1:
            ppuVar15 = &DataStatus::NOTLOADED;
        } else {
            cVar3 = param_3->IsEmpty();
            if (cVar3 != '\0') {
                local_b8 = param_3;
                cVar3 = graphics::Model::IsReadyToConstruct(local_100);
                if (cVar3 == '\0')
                    goto LAB_1005086c1;
                param_1 = (RT7Core*)(ulong)param_4;
                pMVar8 = (Minimap*)GetAppearance(local_a0, param_4, param_5);
                iVar7 = pMVar8->GetLevel();
                if (iVar7 == -1) {
                    local_98 = DataStatus::READY;
                    bVar5 = 1;
                } else {
                    eastl::vector<int, eastl::allocator>::vector(local_f8);
                    eastl::vector<int, eastl::allocator>::reserve(local_f8, 2);
                    local_88[0].field_0._0_4_ = pMVar8->GetLevel();
                    param_1 = (RT7Core*)local_88;
                    eastl::vector<int, eastl::allocator>::push_back(local_f8, (int*)param_1);
                    iVar7 = pMVar8->GetMaxLineWidth();
                    if (iVar7 != -1) {
                        local_88[0].field_0._0_4_ = pMVar8->GetMaxLineWidth();
                        param_1 = (RT7Core*)local_88;
                        eastl::vector<int, eastl::allocator>::push_back(local_f8, (int*)param_1);
                    }
                    local_c0 = pMVar8;
                    lVar9 = local_f8->size();
                    local_89 = lVar9 != 0;
                    if (lVar9 == 0) {
                        bVar29 = false;
                        bVar4 = true;
                    } else {
                        bVar4 = true;
                        pRVar30 = (RT7Core*)0;
                        bVar29 = false;
                        do {
                            param_1 = pRVar30;
                            piVar11 = (int*)eastl::vector<int, eastl::allocator>::operator[](local_f8, (ulong)pRVar30);
                            bVar2 = bVar4;
                            if (*piVar11 != -1) {
                                plVar12 = (long*)local_a0->field_24->GetOutputType();
                                param_1 = Js5Archive::JS5_MODELSRT7;
                                puVar13 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](local_f8,
                                                                                                        (ulong)pRVar30);
                                puVar14 = (undefined*)(**(code**)(*plVar12 + 48))(plVar12, param_1, *puVar13, 0,
                                                                                  Priority::HIGH, 1);
                                bVar2 = false;
                                if (puVar14 != DataStatus::NOTLOADED) {
                                    bVar2 = bVar4;
                                }
                                bVar29 = true;
                                if (puVar14 == DataStatus::MISSING) {
                                    local_98 = DataStatus::MISSING;
                                    break;
                                }
                            }
                            bVar4 = bVar2;
                            pRVar30 = (RT7Core*)((long)&pRVar30->field_0 + 1);
                            pRVar10 = (RT7Core*)local_f8->size();
                            local_89 = pRVar30 < pRVar10;
                        } while (local_89);
                    }
                    bVar5 = 1;
                    if ((local_89 & 1U) == 0) {
                        if (bVar29) {
                            if (bVar4) {
                                new (local_88) eastl::fixed_vector<PacketView, 1ul, true, eastl::allocator>();
                                eastl::vector<math::Vector3T<float>, eastl::allocator>::vector(local_150);
                                pMVar8 = local_c0;
                                this_05 = param_5;
                                uVar16 = local_f8->size();
                                local_88->reserve(uVar16);
                                uVar16 = local_f8->size();
                                eastl::vector<math::Vector3T<float>, eastl::allocator>::reserve(local_150, uVar16);
                                lVar9 = local_f8->size();
                                if (lVar9 != 0) {
                                    uVar16 = 0;
                                    do {
                                        piVar11 =
                                            (int*)eastl::vector<int, eastl::allocator>::operator[](local_f8, uVar16);
                                        if (*piVar11 != -1) {
                                            pVVar18 = (Vector3T*)pMVar8->GetOffset();
                                            eastl::vector<math::Vector3T<float>, eastl::allocator>::push_back(local_150,
                                                                                                              pVVar18);
                                            new (&local_130) PacketView();
                                            this_00 = (Js5ResourceProvider*)local_a0->field_24->GetOutputType();
                                            pRVar30 = Js5Archive::JS5_MODELSRT7;
                                            puVar19 = (uint*)eastl::vector<int, eastl::allocator>::operator[](local_f8,
                                                                                                              uVar16);
                                            this_00->GetFile(&local_130, pRVar30, *puVar19, 0,
                                                             (Priority*)Priority::HIGH, true, false, false);
                                            eastl::fixed_vector<PacketView, 1ul, true, eastl::allocator>::push_back(
                                                local_88);
                                            local_130.~PacketView();
                                            this_05 = param_5;
                                            pMVar8 = local_c0;
                                        }
                                        uVar16 = uVar16 + 1;
                                        uVar17 = local_f8->size();
                                    } while (uVar16 < uVar17);
                                }
                                bVar5 = 0;
                                bVar4 = operator!=(this_05, (_func_decltype_nullptr*)0);
                                if (bVar4) {
                                    pLVar20 = (LoginManager*)shared_ptr<ObjTypeCustomisation>::operator->(
                                        (shared_ptr<ObjTypeCustomisation>*)this_05);
                                    pAVar21 =
                                        (Array<VarValue, eastl::allocator>*)pLVar20->GetDevCredentialsOutputDirectory();
                                    bVar5 = pAVar21->empty();
                                    bVar5 = bVar5 ^ 1;
                                }
                                bVar6 = 0;
                                bVar4 = operator!=(this_05, (_func_decltype_nullptr*)0);
                                if (bVar4) {
                                    pGVar22 = (GeometryBatch*)shared_ptr<ObjTypeCustomisation>::operator->(
                                        (shared_ptr<ObjTypeCustomisation>*)this_05);
                                    pAVar21 = (Array<VarValue, eastl::allocator>*)pGVar22->GetBoneIDMap();
                                    bVar6 = pAVar21->empty();
                                    bVar6 = bVar6 ^ 1;
                                }
                                MakeSharedPool<graphics::Model, 3072>::MakeShared<>(
                                    (shared_ptr*)&local_130, (MakeSharedPool<graphics::Model, 3072>*)0);
                                pMVar28 = (Model*)shared_ptr<graphics::Model>::operator->(
                                    (shared_ptr<graphics::Model>*)&local_130);
                                pMVar28->SetSourceModelIDs(local_f8);
                                local_d8._0_4_ = 4096;
                                local_8b = (ModelConstructedState)2;
                                local_8a = true;
                                bucket_make_shared<BuildModelMain, int, graphics::ModelConstructedState, bool,
                                                   graphics::RT7Core*&,
                                                   eastl::fixed_vector<PacketView, 1ul, true, eastl::allocator>,
                                                   shared_ptr<graphics::Model>&>(
                                    (jag*)&local_b0, (int*)&local_d8, &local_8b, &local_8a, &local_100,
                                    (fixed_vector*)local_88, (shared_ptr*)&local_130);
                                pBVar23 = (BuildModelMain*)shared_ptr<BuildModelMain>::operator->(
                                    (shared_ptr<BuildModelMain>*)&local_b0);
                                pBVar23->SetOffset(local_150);
                                if (bVar5 == 0) {
                                    pBVar23 = (BuildModelMain*)shared_ptr<BuildModelMain>::operator->(
                                        (shared_ptr<BuildModelMain>*)&local_b0);
                                    pBVar23->SetRecolor((Array*)&local_a0->field_672, (Array*)&local_a0->field_696);
                                } else {
                                    pBVar23 = (BuildModelMain*)shared_ptr<BuildModelMain>::operator->(
                                        (shared_ptr<BuildModelMain>*)&local_b0);
                                    pLVar20 = (LoginManager*)shared_ptr<ObjTypeCustomisation>::operator->(
                                        (shared_ptr<ObjTypeCustomisation>*)this_05);
                                    puVar1 = &local_a0->field_672;
                                    pAVar24 = (Array*)pLVar20->GetDevCredentialsOutputDirectory();
                                    pBVar23->SetCustomRecolor(puVar1, pAVar24);
                                }
                                if (bVar6 == 0) {
                                    pBVar23 = (BuildModelMain*)shared_ptr<BuildModelMain>::operator->(
                                        (shared_ptr<BuildModelMain>*)&local_b0);
                                    pBVar23->SetRematerial((Array*)&local_a0->field_768, (Array*)&local_a0->field_792);
                                } else {
                                    pBVar23 = (BuildModelMain*)shared_ptr<BuildModelMain>::operator->(
                                        (shared_ptr<BuildModelMain>*)&local_b0);
                                    pGVar22 = (GeometryBatch*)shared_ptr<ObjTypeCustomisation>::operator->(
                                        (shared_ptr<ObjTypeCustomisation>*)this_05);
                                    puVar1 = &local_a0->field_768;
                                    pAVar24 = (Array*)pGVar22->GetBoneIDMap();
                                    pBVar23->SetRematerial(puVar1, pAVar24);
                                }
                                bVar4 = operator!=(param_7, (_func_decltype_nullptr*)0);
                                if (bVar4) {
                                    pBVar23 = (BuildModelMain*)shared_ptr<BuildModelMain>::operator->(
                                        (shared_ptr<BuildModelMain>*)&local_b0);
                                    this_01 = (WorldmapAreaMetadata*)shared_ptr<PlayerModel>::operator->(
                                        (shared_ptr<PlayerModel>*)param_7);
                                    pAVar24 = (Array*)this_01->GetOrigin();
                                    pPVar25 = (PlayerModel*)shared_ptr<PlayerModel>::operator->(
                                        (shared_ptr<PlayerModel>*)param_7);
                                    pAVar26 = (Array*)pPVar25->GetPlayerRecolSource();
                                    pPVar25 = (PlayerModel*)shared_ptr<PlayerModel>::operator->(
                                        (shared_ptr<PlayerModel>*)param_7);
                                    pAVar27 = (Array*)pPVar25->GetPlayerRecolDest();
                                    pBVar23->SetPlayerRecolor(pAVar24, pAVar26, pAVar27);
                                    pBVar23 = (BuildModelMain*)shared_ptr<BuildModelMain>::operator->(
                                        (shared_ptr<BuildModelMain>*)&local_b0);
                                    this_02 = (MapArea*)shared_ptr<PlayerModel>::operator->(
                                        (shared_ptr<PlayerModel>*)param_7);
                                    pAVar24 = (Array*)this_02->GetOrigin();
                                    pPVar25 = (PlayerModel*)shared_ptr<PlayerModel>::operator->(
                                        (shared_ptr<PlayerModel>*)param_7);
                                    pAVar26 = (Array*)pPVar25->GetPlayerRematSource();
                                    pPVar25 = (PlayerModel*)shared_ptr<PlayerModel>::operator->(
                                        (shared_ptr<PlayerModel>*)param_7);
                                    pAVar27 = (Array*)pPVar25->GetPlayerRematDest();
                                    pBVar23->SetPlayerRematerial(pAVar24, pAVar26, pAVar27);
                                }
                                pBVar23 = (BuildModelMain*)shared_ptr<BuildModelMain>::operator->(
                                    (shared_ptr<BuildModelMain>*)&local_b0);
                                pBVar23->SetAmbientAdjust(param_6 + local_a0->field_840);
                                new (&local_d8) shared_ptr<oldscape::dash3d::Decor>(&local_b0);
                                param_2->SubmitJob(&local_d8);
                                local_d8.~shared_ptr();
                                param_1 = (RT7Core*)&local_130;
                                local_b8->SetObjAndTask(param_1, &local_b0);
                                bVar6 = local_b8->IsTaskDone();
                                bVar5 = bVar6 ^ 1;
                                if (bVar6 == 0) {
                                    local_98 = DataStatus::NOTLOADED;
                                }
                                local_b0.~shared_ptr();
                                local_130.~shared_ptr();
                                eastl::vector<math::Vector3T<float>, eastl::allocator>::~vector(local_150);
                                local_88->~fixed_vector();
                                goto LAB_100508bd6;
                            }
                            ppuVar15 = &DataStatus::NOTLOADED;
                        } else {
                            ppuVar15 = &DataStatus::READY;
                        }
                        local_98 = *ppuVar15;
                    }
                LAB_100508bd6:
                    eastl::vector<int, eastl::allocator>::~vector(local_f8);
                }
                param_3 = local_b8;
                if (bVar5 != 0)
                    goto LAB_100508c39;
            }
            this_03 = param_3->SSOBeginPtr(param_1);
            pMVar28 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)this_03);
            cVar3 = pMVar28->GetConstructedState();
            if (cVar3 != '\x02') {
                /* WARNING: Subroutine does not return */
                LogAssert("model.GetAsset()->GetConstructedState() == graphics::ModelConstructedState::DATA_AND_MAT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "objtype/ObjType.cpp",
                          736, (char*)0);
            }
            ppuVar15 = &DataStatus::READY;
        }
        local_98 = *ppuVar15;
    LAB_100508c39:
        if (*(Js5ArchiveSettings**)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return local_98;
    }

    // 0x100508d10, 1504 bytes, placed by class name and debug map
    // ObjType::GetModel(graphics::RT7Core*, AssetBuilder&, BuildRequest<graphics::Model, BuildModelMain>&, PlayerModel const*)
    undefined* ObjType::GetModel(RT7Core* param_1, AssetBuilder* param_2, BuildRequest* param_3, PlayerModel* param_4) {
        undefined2 uVar1;
        ObjTypeList* this_00;
        undefined* puVar2;
        char cVar3;
        bool bVar4;
        AssetLRUHashCache<graphics::Model, BuildModelMain, 100ul, 101ul, false>* this_01;
        AssetLRUHashCache<graphics::Model, BuildModelMain, 10ul, 11ul, false>* this_02;
        PacketView* this_03;
        Model* pMVar5;
        long* plVar6;
        undefined* puVar7;
        Js5ResourceProvider* this_04;
        BuildModelMain* pBVar8;
        Array* pAVar9;
        Array* pAVar10;
        vector* this_05;
        undefined** ppuVar11;
        PacketView* pPVar12;
        undefined* puVar13;
        PacketView local_118;
        undefined1 local_e8[24];
        shared_ptr local_d0;
        AssetLRUHashCache<graphics::Model, BuildModelMain, 10ul, 11ul, false>* local_c0;
        BuildRequest* local_b8;
        BuildModelMain* local_b0;
        Array* local_a8;
        shared_ptr local_a0;
        ModelConstructedState local_8a;
        bool local_89;
        PacketView local_88[2];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = (ObjTypeList*)field_24;
        local_e8._16_8_ = param_1;
        this_01 = (AssetLRUHashCache<graphics::Model, BuildModelMain, 100ul, 101ul, false>*)
                      param_4->GetRecolouredModelsCache();
        this_02 = (AssetLRUHashCache<graphics::Model, BuildModelMain, 10ul, 11ul, false>*)this_00->GetModelCache();
        if (param_4 == (PlayerModel*)0) {
            this_02->UpdateLoadingAssetList(5);
            cVar3 = this_02->IsLoadingAsset((long)field_32);
            if (cVar3 == '\0') {
                local_88[0].field_0 = (long)field_32;
                pPVar12 = local_88;
                local_c0 = this_02;
                this_03 = (PacketView*)LRUHashCache<graphics::Model, 10ul, 11ul, false, unsigned long long>::Find(
                    (ulonglong*)this_02);
                bVar4 = this_03->operator_cast_to_bool();
                if (bVar4) {
                    pMVar5 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)this_03);
                    cVar3 = pMVar5->IsLoaded();
                    if (cVar3 == '\0') {
                        /* WARNING: Subroutine does not return */
                        LogAssert("cachedModel->IsLoaded()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                  "config/objtype/ObjType.cpp",
                                  774, (char*)0);
                    }
                    goto LAB_100508e73;
                }
                goto LAB_100508e7e;
            }
        LAB_100509186:
            ppuVar11 = &DataStatus::NOTLOADED;
        } else {
            local_c0 = this_02;
            this_01->UpdateLoadingAssetList(5);
            cVar3 = this_01->IsLoadingAsset((long)field_32);
            if (cVar3 != '\0')
                goto LAB_100509186;
            local_88[0].field_0 = (long)field_32;
            pPVar12 = local_88;
            this_03 = (PacketView*)LRUHashCache<graphics::Model, 100ul, 101ul, false, unsigned long long>::Find(
                (ulonglong*)this_01);
            bVar4 = this_03->operator_cast_to_bool();
            if (bVar4) {
                pMVar5 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)this_03);
                cVar3 = pMVar5->IsLoaded();
                if (cVar3 == '\0') {
                    /* WARNING: Subroutine does not return */
                    LogAssert("cachedModel->IsLoaded()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "config/objtype/ObjType.cpp",
                              760, (char*)0);
                }
            LAB_100508e73:
                param_3->SetConstructedObj(this_03);
                pPVar12 = this_03;
            }
        LAB_100508e7e:
            cVar3 = param_3->IsTaskDone();
            if ((cVar3 == '\0') && (cVar3 = param_3->IsEmpty(), cVar3 == '\0'))
                goto LAB_100509186;
            cVar3 = param_3->IsEmpty();
            if (cVar3 != '\0') {
                local_b8 = param_3;
                cVar3 = graphics::Model::IsReadyToConstruct((RT7Core*)local_e8._16_8_);
                if (cVar3 == '\0')
                    goto LAB_100509186;
                plVar6 = (long*)field_24->GetOutputType();
                puVar7 = (undefined*)(**(code**)(*plVar6 + 48))(plVar6, Js5Archive::JS5_MODELSRT7, field_668, 0,
                                                                Priority::HIGH, 1);
                puVar2 = DataStatus::NOTLOADED;
                puVar13 = DataStatus::MISSING;
                if ((puVar7 == DataStatus::MISSING) ||
                    (puVar13 = DataStatus::NOTLOADED, puVar7 == DataStatus::NOTLOADED))
                    goto LAB_100509254;
                new (local_88) eastl::fixed_vector<PacketView, 1ul, true, eastl::allocator>();
                new (&local_118) PacketView();
                this_04 = (Js5ResourceProvider*)field_24->GetOutputType();
                this_04->GetFile(&local_118, Js5Archive::JS5_MODELSRT7, field_668, 0, (Priority*)Priority::HIGH, true,
                                 false, false);
                pPVar12 = &local_118;
                eastl::fixed_vector<PacketView, 1ul, true, eastl::allocator>::push_back(local_88);
                MakeSharedPool<graphics::Model, 3072>::MakeShared<>((shared_ptr*)local_e8,
                                                                    (MakeSharedPool<graphics::Model, 3072>*)pPVar12);
                pMVar5 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)local_e8);
                pMVar5->SetSourceModelIDs(field_668);
                local_d0._0_4_ = 4096;
                local_8a = (ModelConstructedState)4;
                local_89 = true;
                bucket_make_shared<BuildModelMain, int, graphics::ModelConstructedState, bool, graphics::RT7Core*&,
                                   eastl::fixed_vector<PacketView, 1ul, true, eastl::allocator>,
                                   shared_ptr<graphics::Model>&>((jag*)&local_a0, (int*)(local_e8 + 24), &local_8a,
                                                                 &local_89, (RT7Core**)(local_e8 + 16),
                                                                 (fixed_vector*)local_88, (shared_ptr*)local_e8);
                if (field_860 != '\0') {
                    pBVar8 =
                        (BuildModelMain*)shared_ptr<BuildModelMain>::operator->((shared_ptr<BuildModelMain>*)&local_a0);
                    pBVar8->SetResize((Vector3T*)&field_848);
                }
                pBVar8 =
                    (BuildModelMain*)shared_ptr<BuildModelMain>::operator->((shared_ptr<BuildModelMain>*)&local_a0);
                pBVar8->SetRecolor((Array*)&field_672, (Array*)&field_696);
                pBVar8 =
                    (BuildModelMain*)shared_ptr<BuildModelMain>::operator->((shared_ptr<BuildModelMain>*)&local_a0);
                pBVar8->SetRematerial((Array*)&field_768, (Array*)&field_792);
                if (param_4 != (PlayerModel*)0) {
                    local_b0 =
                        (BuildModelMain*)shared_ptr<BuildModelMain>::operator->((shared_ptr<BuildModelMain>*)&local_a0);
                    local_a8 = (Array*)param_4->GetOrigin();
                    pAVar9 = (Array*)param_4->GetPlayerRecolSource();
                    pAVar10 = (Array*)param_4->GetPlayerRecolDest();
                    local_b0->SetPlayerRecolor(local_a8, pAVar9, pAVar10);
                    local_b0 =
                        (BuildModelMain*)shared_ptr<BuildModelMain>::operator->((shared_ptr<BuildModelMain>*)&local_a0);
                    local_a8 = (Array*)param_4->GetOrigin();
                    pAVar9 = (Array*)param_4->GetPlayerRematSource();
                    pAVar10 = (Array*)param_4->GetPlayerRematDest();
                    local_b0->SetPlayerRematerial(local_a8, pAVar9, pAVar10);
                }
                pBVar8 =
                    (BuildModelMain*)shared_ptr<BuildModelMain>::operator->((shared_ptr<BuildModelMain>*)&local_a0);
                uVar1 = field_840;
                pBVar8->SetAmbientAdjust(uVar1 + 64);
                new ((local_e8 + 24)) shared_ptr<oldscape::dash3d::Decor>(&local_a0);
                param_2->SubmitJob((shared_ptr*)(local_e8 + 24));
                ((local_e8 + 24))->~shared_ptr();
                if (param_4 == (PlayerModel*)0) {
                    local_c0->AddLoadingAsset((long)field_32, &local_a0);
                } else {
                    this_01->AddLoadingAsset((long)field_32, &local_a0);
                }
                pPVar12 = (PacketView*)local_e8;
                local_b8->SetObjAndTask(pPVar12, &local_a0);
                cVar3 = local_b8->IsTaskDone();
                puVar13 = puVar2;
                if (cVar3 == '\0') {
                    puVar13 = DataStatus::NOTLOADED;
                }
                local_a0.~shared_ptr();
                local_e8->~shared_ptr();
                local_118.~PacketView();
                local_88->~fixed_vector();
                param_3 = local_b8;
                if (cVar3 == '\0')
                    goto LAB_100509254;
            }
            this_05 = param_3->SSOBeginPtr(pPVar12);
            pMVar5 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)this_05);
            cVar3 = pMVar5->IsLoaded();
            if (cVar3 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("model.GetAsset()->IsLoaded()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "objtype/ObjType.cpp",
                          852, (char*)0);
            }
            ppuVar11 = &DataStatus::READY;
        }
        puVar13 = *ppuVar11;
    LAB_100509254:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return puVar13;
    }

    // 0x100509370, 1168 bytes, placed by class name and debug map
    // ObjType::SetupDerivedObject(DerivedObjType, shared_ptr<ObjType> const&, shared_ptr<ObjType> const&, char const*)
    void ObjType::SetupDerivedObject(int param_2, shared_ptr<ObjType>* param_3, shared_ptr<ObjType>* param_4,
                                     char* param_5) {
        undefined1* this_00;
        char* pcVar1;
        long lVar2;
        long lVar3;
        undefined8* puVar4;
        eastl::string* pbVar5;
        ulong uVar6;
        shared_ptr<ObjType>* this_01;
        undefined8 local_e8;
        undefined8 uStack_e0;
        undefined8 local_d8;
        undefined8 uStack_d0;
        undefined8 local_c8;
        undefined8 uStack_c0;
        undefined8 local_b8;
        undefined8 uStack_b0;
        undefined8 local_a8;
        undefined8 uStack_a0;
        undefined8 local_98;
        undefined8 uStack_90;
        undefined8 local_88;
        undefined8 uStack_80;
        undefined8 local_78;
        undefined8 uStack_70;
        undefined8 local_68;
        undefined8 uStack_60;
        undefined8 local_58;
        undefined8 uStack_50;
        eastl::string* local_40;

        lVar2 = shared_ptr<ObjType>::operator->(param_3);
        field_668 = *(undefined4*)(lVar2 + 668);
        lVar2 = shared_ptr<ObjType>::operator->(param_3);
        m_zoom2D = *(undefined2*)(lVar2 + 862);
        lVar2 = shared_ptr<ObjType>::operator->(param_3);
        math::Vector3T<short>::operator=((Vector3T<short>*)&field_864, (Vector3T*)(lVar2 + 864));
        lVar2 = shared_ptr<ObjType>::operator->(param_3);
        math::Vector3T<int>::operator=((Vector3T<int>*)&field_872, (Vector3T*)(lVar2 + 872));
        lVar2 = shared_ptr<ObjType>::operator->(param_4);
        local_40 = (eastl::string*)&field_408;
        eastl::string::operator=(local_40, (basic_string*)(lVar2 + 408));
        lVar2 = shared_ptr<ObjType>::operator->(param_4);
        m_members = *(undefined1*)(lVar2 + 504);
        this_01 = param_4;
        if (param_2 == 0) {
            this_01 = param_3;
        }
        lVar2 = shared_ptr<ObjType>::operator->(this_01);
        Array<unsigned short, eastl::allocator>::operator=((Array<unsigned short, eastl::allocator>*)&field_672,
                                                           (Array*)(lVar2 + 672));
        lVar2 = shared_ptr<ObjType>::operator->(this_01);
        Array<unsigned short, eastl::allocator>::operator=((Array<unsigned short, eastl::allocator>*)&field_696,
                                                           (Array*)(lVar2 + 696));
        lVar2 = shared_ptr<ObjType>::operator->(this_01);
        Array<unsigned char, eastl::allocator>::operator=((Array<unsigned char, eastl::allocator>*)&field_720,
                                                          (Array*)(lVar2 + 720));
        lVar2 = shared_ptr<ObjType>::operator->(this_01);
        Array<unsigned short, eastl::allocator>::operator=((Array<unsigned short, eastl::allocator>*)&field_768,
                                                           (Array*)(lVar2 + 768));
        lVar2 = shared_ptr<ObjType>::operator->(this_01);
        Array<unsigned short, eastl::allocator>::operator=((Array<unsigned short, eastl::allocator>*)&field_792,
                                                           (Array*)(lVar2 + 792));
        if (param_2 == 0) {
            lVar2 = shared_ptr<ObjType>::operator->(param_4);
            m_cost = *(long*)(lVar2 + 592);
            m_stackable = 1;
            lVar2 = shared_ptr<ObjType>::operator->(param_4);
            if (*(char*)(lVar2 + 658) == '\0') {
                lVar2 = shared_ptr<ObjType>::operator->(param_4);
                m_isTradeable = *(bool*)(lVar2 + 656);
            } else {
                m_isTradeable = false;
            }
        } else if ((char)param_2 == '\x03') {
            eastl::string::operator=(local_40, (basic_string*)&field_976);
            lVar2 = shared_ptr<ObjType>::operator->(param_4);
            lVar2 = *(long*)(lVar2 + 592);
            lVar3 = shared_ptr<ObjType>::operator->(param_4);
            uVar6 = 18446744073709551615;
            if ((ulong) * (ushort*)(lVar3 + 968) != 65535) {
                uVar6 = (ulong) * (ushort*)(lVar3 + 968);
            }
            m_cost = lVar2 / (long)uVar6;
            m_stackable = 1;
            lVar2 = shared_ptr<ObjType>::operator->(param_4);
            m_isStockmarket = *(bool*)(lVar2 + 649);
            lVar2 = shared_ptr<ObjType>::operator->(param_4);
            m_isTradeable = *(bool*)(lVar2 + 656);
            lVar2 = shared_ptr<ObjType>::operator->(param_3);
            field_664 = *(ushort*)(lVar2 + 664);
            lVar2 = shared_ptr<ObjType>::operator->(param_3);
            Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)&field_512, (Array*)(lVar2 + 512));
            lVar2 = shared_ptr<ObjType>::operator->(param_3);
            Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)&field_536, (Array*)(lVar2 + 536));
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
            std::array<eastl::string, 5ul>::operator=((array<eastl::string, 5ul>*)this_00, (array*)&local_e8);
            local_e8.~array();
            lVar2 = field_24->GetPriority();
            puVar4 = (undefined8*)std::array<char const*, 7ul>::operator[](
                (array<char const*, 7ul>*)&LocalisedText::SHARD_COMBINE_OP, (ulong) * (uint*)(lVar2 + 8));
            pcVar1 = (char*)*puVar4;
            pbVar5 = (eastl::string*)std::array<eastl::string, 5ul>::operator[]((array<eastl::string, 5ul>*)this_00, 0);
            eastl::string::assign(pbVar5, pcVar1);
            pbVar5 = (eastl::string*)std::array<eastl::string, 5ul>::operator[]((array<eastl::string, 5ul>*)this_00, 4);
            eastl::string::assign(pbVar5, param_5);
        } else {
            m_cost = 0;
            m_isTradeable = false;
            lVar2 = shared_ptr<ObjType>::operator->(param_4);
            m_stackable = *(undefined1*)(lVar2 + 584);
            lVar2 = shared_ptr<ObjType>::operator->(param_4);
            field_884 = *(undefined1*)(lVar2 + 884);
            lVar2 = shared_ptr<ObjType>::operator->(param_4);
            field_885 = *(undefined1*)(lVar2 + 885);
            lVar2 = shared_ptr<ObjType>::operator->(param_4);
            field_886 = *(undefined1*)(lVar2 + 886);
            lVar2 = shared_ptr<ObjType>::operator->(param_4);
            ObjAppearanceData::operator=((ObjAppearanceData*)&field_888, (ObjAppearanceData*)(lVar2 + 888));
            lVar2 = shared_ptr<ObjType>::operator->(param_4);
            ObjAppearanceData::operator=((ObjAppearanceData*)&field_920, (ObjAppearanceData*)(lVar2 + 920));
            lVar2 = shared_ptr<ObjType>::operator->(param_4);
            field_664 = *(ushort*)(lVar2 + 664);
            lVar2 = shared_ptr<ObjType>::operator->(param_4);
            m_team = *(uchar*)(lVar2 + 648);
            lVar2 = shared_ptr<ObjType>::operator->(param_4);
            std::array<eastl::string, 6ul>::operator=((array<eastl::string, 6ul>*)&field_56, (array*)(lVar2 + 56));
            lVar2 = shared_ptr<ObjType>::operator->(param_4);
            std::array<eastl::string, 5ul>::operator=((array<eastl::string, 5ul>*)&field_248, (array*)(lVar2 + 248));
            pbVar5 =
                (eastl::string*)std::array<eastl::string, 5ul>::operator[]((array<eastl::string, 5ul>*)&field_248, 4);
            eastl::string::assign(pbVar5, param_5);
            lVar2 = shared_ptr<ObjType>::operator->(param_4);
            shared_ptr<eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                         eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>>::
            operator=(
                (shared_ptr<eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                              eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>>*)field_40,
                (shared_ptr*)(lVar2 + 40));
            field_666 = 0;
        }
    }

    // 0x1005098d0, 560 bytes, placed by class name and debug map
    // ObjType::RemoveAutoDisabledParams(ConfigProvider const&)
    undefined* ObjType::RemoveAutoDisabledParams(ConfigProvider* param_1) {
        shared_ptr<eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                     eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>>* this_00;
        bool bVar1;
        bool bVar2;
        char cVar3;
        vector<DecodedTerrainTile, eastl::allocator>* this_01;
        long lVar4;
        vector_map* pvVar5;
        Layout* this_02;
        int* piVar6;
        shared_ptr* psVar7;
        ParamType* this_03;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_04;
        undefined* puVar8;
        undefined1* this_05;
        shared_ptr local_198;
        ConfigProvider* local_188;
        int* local_180;
        undefined* local_178;
        shared_ptr<eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                     eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>>* local_170;
        shared_ptr local_168[19];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_05 = field_40;
        local_188 = param_1;
        bVar1 = operator!=((shared_ptr*)this_05, (_func_decltype_nullptr*)0);
        if (bVar1) {
            this_01 =
                (vector<DecodedTerrainTile, eastl::allocator>*)
                    shared_ptr<eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                                 eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>>::
                    operator->(
                        (shared_ptr<eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                                      eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>>*)
                            this_05);
            lVar4 = eastl::vector<DecodedTerrainTile, eastl::allocator>::size(this_01);
            if (lVar4 != 0) {
                pvVar5 = (vector_map*)
                    shared_ptr<eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                                 eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>>::
                    operator*(
                        (shared_ptr<eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                                      eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>>*)
                            this_05);
                new (local_168) ScopedContainerElementEraser<
                    eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                      eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>,
                    int>(pvVar5);
                local_170 =
                    (shared_ptr<eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                                  eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>>*)
                        this_05;
                this_02 = (Layout*)
                    shared_ptr<eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                                 eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>>::
                    operator*(
                        (shared_ptr<eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                                      eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>>*)
                            this_05);
                piVar6 = (int*)eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                        eastl::allocator>>::Layout::HeapBeginPtr(this_02);
                local_180 = (int*)this_02->end();
                bVar1 = piVar6 == local_180;
                if (!bVar1) {
                    do {
                        psVar7 = ConfigProvider::GetConfig<ParamType>(local_188, *piVar6, (DataStatus**)0);
                        new (&local_198) shared_ptr<oldscape::dash3d::Decor>(psVar7);
                        bVar2 = shared_ptr::operator_cast_to_bool(&local_198);
                        if (bVar2) {
                            this_03 = (ParamType*)shared_ptr<ParamType>::operator->((shared_ptr<ParamType>*)&local_198);
                            cVar3 = this_03->GetAutoDisable();
                            if (cVar3 != '\0') {
                                ScopedContainerElementEraser<
                                    eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                                      eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>,
                                    int>::erase((int)local_168);
                            }
                        } else {
                            local_178 = DataStatus::NOTLOADED;
                        }
                        local_198.~shared_ptr();
                        if (!bVar2)
                            break;
                        piVar6 = piVar6 + 10;
                        bVar1 = piVar6 == local_180;
                    } while (!bVar1);
                }
                local_168->~ScopedContainerElementEraser();
                this_00 = local_170;
                puVar8 = local_178;
                if (!bVar1)
                    goto LAB_100509a8b;
                this_04 =
                    (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                        shared_ptr<eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                                     eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>>::
                        operator->(local_170);
                cVar3 = eastl::vector<
                    int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(this_04);
                if (cVar3 != '\0') {
                    new (local_168) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
                    shared_ptr<eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                                 eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>>::
                    operator=(this_00, local_168);
                    local_168->~shared_ptr();
                }
            }
        }
        puVar8 = DataStatus::READY;
    LAB_100509a8b:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return puVar8;
    }

} // namespace jag::game
