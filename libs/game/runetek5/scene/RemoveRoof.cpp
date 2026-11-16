// libs/game/runetek5/scene/RemoveRoof.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "RemoveRoof.h"

namespace jag::game {
    // 0x10047e280, 64 bytes, base-object constructor, placed by class name and debug map
    // RemoveRoof::RemoveRoof()
    void RemoveRoof::RemoveRoof() {
        ___bzero(this, 589864);
        eastl::fixed_vector<math::Rect<int>, 4ul, true, eastl::allocator>::fixed_vector((ulong)&field_589864);
        field_589968 = (LinkMap*)0;
        field_589976 = (World*)0;
    }

    // 0x10047e2d0, 16 bytes, complete-object constructor, placed by class name and debug map
    // RemoveRoof::RemoveRoof(): jumps straight to the base-object constructor

    // 0x10047e2e0, 128 bytes, placed by class name and debug map
    // RemoveRoof::SetCurrentTick(LinkMap const&, unsigned int, World const*)
    bool RemoveRoof::SetCurrentTick(LinkMap* param_1, uint param_2, World* param_3) {
        uint uVar1;
        GridRect* pGVar2;
        GridRect* this_00;

        uVar1 = field_0;
        if (uVar1 != param_2) {
            Setup(this, param_1, param_3);
            field_0 = param_2;
            field_36 = 0;
            this_00 = (GridRect*)(&field_589864)->HeapBeginPtr();
            pGVar2 = (GridRect*)(&field_589864)->end();
            for (; this_00 != pGVar2; this_00 = (GridRect*)&this_00->field_16) {
                oldscape::dash3d::GridRect::GridRect(this_00, 0, 0, 0, 0);
            }
        }
        return uVar1 != param_2;
    }

    // 0x10047e360, 112 bytes, placed by class name and debug map
    // RemoveRoof::Setup(LinkMap const&, World const*)
    void RemoveRoof::Setup(LinkMap* param_1, World* param_2) {
        int iVar1;
        int iVar2;
        int iVar3;
        int* piVar4;
        int iVar5;

        field_589968 = param_1;
        field_589976 = param_2;
        piVar4 = (int*)param_2->GetCentreSquarePosition();
        iVar5 = *piVar4;
        iVar1 = iVar5 + -1;
        field_4 = iVar1;
        iVar5 = iVar5 + 1;
        field_8 = iVar5;
        iVar3 = piVar4[1];
        iVar2 = iVar3 + -1;
        field_12 = iVar2;
        iVar3 = iVar3 + 1;
        field_16 = iVar3;
        field_20 = iVar1 * 64;
        field_24 = iVar2 * 64;
        field_28 = iVar5 * 64 + 64;
        field_32 = iVar3 * 64 + 64;
    }

    // 0x10047e3e0, 976 bytes, placed by class name and debug map
    // RemoveRoof::SetRoofRemoved(int, unsigned int, unsigned int, RemoveRoof::Type)
    void RemoveRoof::SetRoofRemoved(uint param_1, ulong param_3_00, uint param_3, int param_5) {
        int iVar1;
        array<std::array<unsigned int, 192ul>, 192ul>* this_00;
        array<unsigned int, 192ul>* this_01;
        uint* puVar3;
        GridRect* this_02;
        int* piVar4;
        HeightMap* pHVar5;
        long* plVar6;
        float* pfVar7;
        char* pcVar8;
        int iVar9;
        PlaneT<float> local_1c8[16];
        eastl::string local_1b8[32];
        allocator local_198[8];
        undefined1 local_190[16];
        ColourHSL local_180;
        uint local_170;
        int local_168;
        float local_164;
        GridRect local_160[14];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if ((field_0 != 0) && (param_1 != 4294967295)) {
            if (3 < param_1) {
                /* WARNING: Subroutine does not return */
                LogAssert("level >= 0 && level < constants::MapConstants::LEVELS",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                          "RemoveRoof.cpp",
                          64, (char*)0);
            }
            iVar9 = field_20;
            if ((((iVar9 <= (int)(uint)param_3_00) && ((int)(uint)param_3_00 < field_28)) &&
                 (iVar1 = field_24, iVar1 <= (int)param_3)) &&
                ((int)param_3 < field_32)) {
                local_170 = field_0;
                local_190._8_8_ = SEXT48((int)param_1);
                local_164 = (float)param_5;
                this_00 = (array<std::array<unsigned int, 192ul>, 192ul>*)
                    std::array<std::array<std::array<unsigned int, 192ul>, 192ul>, 4ul>::operator[](
                        (array<std::array<std::array<unsigned int, 192ul>, 192ul>, 4ul>*)&field_40, local_190._8_8_);
                this_01 = (array<unsigned int, 192ul>*)std::array<std::array<unsigned int, 192ul>, 192ul>::operator[](
                    this_00, (ulong)((uint)param_3_00 - iVar9));
                puVar3 = (uint*)std::array<unsigned int, 192ul>::operator[](this_01, (ulong)(param_3 - iVar1));
                *puVar3 = local_170;
                field_36 = field_36 + 1;
                if (local_164 == 0.0) {
                    this_02 = (GridRect*)eastl::vector<
                        math::Rect<int>, eastl::fixed_vector_allocator<16ul, 4ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[]((vector<math::Rect<int>, eastl::fixed_vector_allocator<16ul, 4ul, 4ul, 0ul, true,
                                                                                      eastl::allocator>>*)&field_589864,
                               local_190._8_8_);
                    piVar4 = (int*)this_02->second();
                    if (*piVar4 == 0) {
                        oldscape::dash3d::GridRect::GridRect(this_02, (uint)param_3_00, param_3, 1, 1);
                    } else {
                        oldscape::dash3d::GridRect::GridRect(local_160, (uint)param_3_00, param_3, 1, 1);
                        this_02->Union(local_160);
                    }
                }
                if (World::m_debugRemoveRoof != '\0') {
                    pHVar5 = (HeightMap*)field_589976->GetHeightMap();
                    pHVar5->GetTileHeight(&local_168, param_1, param_3_00 & 4294967295, param_3, 0, 0);
                    new (&local_180)
                        math::ColourHSL((float)((uint)param_3_00 << 7) + 64.0, 0.0, (float)(param_3 << 7) + 64.0);
                    math::PlaneT<float>::PlaneT(local_1c8, (Vector3T*)PTR_UP_100ee66d0, (float)-local_168);
                    plVar6 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                    if (plVar6 != (long*)0) {
                        iVar9 = 1090486400;
                        if (local_164 == 1.4013e-45) {
                            iVar9 = 1077969151;
                        }
                        new (local_160) oldscape::sidebars::SideBarData(iVar9, 5);
                        (**(code**)(*plVar6 + 104))(plVar6, &local_180, local_1c8, 124, 124, local_160);
                    }
                    if (World::m_debugRemoveRoofLabels != '\0') {
                        new (local_160) eastl::fixed_string<char, 256, true, eastl::allocator>();
                        eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::
                            sprintf((char*)local_160, "Remove(%d, %u, %u, %u, %u)", (ulong)param_1,
                                    param_3_00 >> 6 & 67108863, (ulong)(param_3 >> 6), (ulong)((uint)param_3_00 & 63),
                                    param_3 & 63);
                        local_164 = (float)local_168;
                        pfVar7 = (float*)local_180.y();
                        *pfVar7 = local_164 + *pfVar7;
                        plVar6 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                        if (plVar6 != (long*)0) {
                            pcVar8 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                            eastl::allocator::allocator(local_198, "EASTL basic_string");
                            eastl::string::basic_string(local_1b8, pcVar8, local_198);
                            new (local_190) oldscape::sidebars::SideBarData(-1, 1);
                            (**(code**)(*plVar6 + 136))(plVar6, &local_180, local_1b8, local_190);
                            eastl::string::~basic_string(local_1b8);
                        }
                        /* WARNING: Subroutine does not return */
                        local_160->~fixed_string();
                    }
                }
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10047e8f0, 240 bytes, placed by class name and debug map
    // RemoveRoof::IsRoofRemoved(int, unsigned int, unsigned int) const
    uint RemoveRoof::IsRoofRemoved(int param_1, uint param_2, uint param_3) {
        int iVar1;
        int iVar2;
        bool bVar3;
        byte bVar4;
        uint uVar5;
        array<std::array<unsigned int, 192ul>, 192ul>* this_00;
        array<unsigned int, 192ul>* this_01;
        uint* puVar6;
        uint uVar7;

        if (((field_0 != 0) && (param_1 != -1)) && (0 < field_36)) {
            uVar5 = (field_589968, param_1, param_2, param_3)->GetTileLinkZero();
            bVar4 = (byte)((uVar5 & 8) >> 3) & 0 < param_1;
            uVar5 = (uint)bVar4;
            uVar7 = param_1 - (uint)bVar4;
            if (3 < uVar7) {
                /* WARNING: Subroutine does not return */
                LogAssert("level >= 0 && level < constants::MapConstants::LEVELS",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                          "RemoveRoof.cpp",
                          132, (char*)0);
            }
            iVar1 = field_20;
            bVar3 = true;
            if (((iVar1 <= (int)param_2) && ((int)param_2 < field_28)) &&
                ((iVar2 = field_24, iVar2 <= (int)param_3 && ((int)param_3 < field_32)))) {
                this_00 = (array<std::array<unsigned int, 192ul>, 192ul>*)
                    std::array<std::array<std::array<unsigned int, 192ul>, 192ul>, 4ul>::operator[](
                        (array<std::array<std::array<unsigned int, 192ul>, 192ul>, 4ul>*)&field_40, (long)(int)uVar7);
                this_01 = (array<unsigned int, 192ul>*)std::array<std::array<unsigned int, 192ul>, 192ul>::operator[](
                    this_00, (ulong)(param_2 - iVar1));
                puVar6 = (uint*)std::array<unsigned int, 192ul>::operator[](this_01, (ulong)(param_3 - iVar2));
                uVar5 = CONCAT31((int3)(*puVar6 >> 8), *puVar6 == field_0);
                bVar3 = false;
            }
            if (!bVar3) {
                return uVar5;
            }
        }
        return 0;
    }

    // 0x10047ea30, 624 bytes, placed by class name and debug map
    // RemoveRoof::IsRoofRemovedInRange(CoordGrid const&, CoordGrid const&) const
    undefined8 RemoveRoof::IsRoofRemovedInRange(CoordGrid* param_1, CoordGrid* param_2) {
        uint uVar1;
        int iVar2;
        uint uVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        array<std::array<unsigned int, 192ul>, 192ul>* this_00;
        array<unsigned int, 192ul>* this_01;
        uint* puVar8;
        int iVar9;
        long lVar10;
        bool bVar11;
        bool bVar12;

        uVar1 = param_1->field_0;
        if (param_2->field_0 != uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssert("end.m_level == level",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "RemoveRoof.cpp",
                      148, (char*)0);
        }
        if (3 < uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssert("level >= 0 && level < constants::MapConstants::LEVELS",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "RemoveRoof.cpp",
                      149, (char*)0);
        }
        if (((field_0 != 0) && (0 < (int)uVar1)) && (0 < field_36)) {
            iVar4 = eastl::min<unsigned int>(param_1->field_4, param_2->field_4);
            eastl::max<unsigned int>(param_1->field_4, param_2->field_4);
            eastl::min<unsigned int>(param_1->field_8, param_2->field_8);
            eastl::max<unsigned int>(param_1->field_8, param_2->field_8);
            iVar4 = eastl::max<int>(field_20, iVar4);
            iVar5 = eastl::min<graphics::GraphicsQuality>(field_28, iVar4);
            iVar6 = eastl::max<int>(field_24, iVar4);
            iVar7 = eastl::min<graphics::GraphicsQuality>(field_32, iVar4);
            if (iVar4 <= iVar5) {
                do {
                    iVar9 = 5;
                    bVar12 = iVar7 < iVar6;
                    if (iVar6 <= iVar7) {
                        this_00 = (array<std::array<unsigned int, 192ul>, 192ul>*)
                            std::array<std::array<std::array<unsigned int, 192ul>, 192ul>, 4ul>::operator[](
                                (array<std::array<std::array<unsigned int, 192ul>, 192ul>, 4ul>*)&field_40,
                                (long)(int)uVar1);
                        this_01 =
                            (array<unsigned int, 192ul>*)std::array<std::array<unsigned int, 192ul>, 192ul>::operator[](
                                this_00, (long)iVar4 - (long)field_20);
                        iVar2 = field_24;
                        uVar3 = field_0;
                        puVar8 = (uint*)std::array<unsigned int, 192ul>::operator[](this_01, (long)iVar6 - (long)iVar2);
                        iVar9 = 1;
                        if (*puVar8 == uVar3) {
                            bVar12 = false;
                        } else {
                            lVar10 = (long)iVar6;
                            iVar9 = iVar7 - iVar6;
                            do {
                                bVar12 = iVar7 <= lVar10;
                                bVar11 = iVar9 == 0;
                                iVar9 = iVar9 + -1;
                                if (bVar11) {
                                    iVar9 = 5;
                                    goto LAB_10047ec60;
                                }
                                puVar8 = (uint*)std::array<unsigned int, 192ul>::operator[](this_01,
                                                                                            lVar10 + (1 - (long)iVar2));
                                lVar10 = lVar10 + 1;
                            } while (*puVar8 != uVar3);
                            iVar9 = 1;
                        }
                    }
                LAB_10047ec60:
                    if (!bVar12)
                        goto LAB_10047ec81;
                    bVar12 = iVar4 != iVar5;
                    iVar4 = iVar4 + 1;
                } while (bVar12);
            }
            iVar9 = 2;
        LAB_10047ec81:
            if (iVar9 != 2) {
                return 1;
            }
        }
        return 0;
    }

    // 0x10047eca0, 16 bytes, base-object constructor, placed by neighbouring functions
    // RemoveRoofPaintingProgress::RemoveRoofPaintingProgress()
    void RemoveRoofPaintingProgress::RemoveRoofPaintingProgress() {
        field_0 = -1;
        field_4 = -1;
        field_8 = -1;
        field_12 = -1;
    }

    // 0x10047ecb0, 16 bytes, complete-object constructor, placed by neighbouring functions
    // RemoveRoofPaintingProgress::RemoveRoofPaintingProgress(): jumps straight to the base-object constructor

    // 0x10047ecc0, 208 bytes, base-object constructor, placed by debug map only (low confidence)
    // RemoveRoofPaintingProgress::RemoveRoofPaintingProgress(int, int, int, int)
    void RemoveRoofPaintingProgress::RemoveRoofPaintingProgress(int param_1, int param_2, int param_3, int param_4) {
        array<unsigned char, 256ul>* this_00;
        array<unsigned char, 256ul>* paVar1;
        uchar local_29;

        field_0 = param_1;
        field_4 = param_2;
        field_8 = param_3;
        field_12 = param_4;
        if (256 < param_3 - param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("maxX - minX <= (int)m_grid.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "RemoveRoof.cpp",
                      190, (char*)0);
        }
        if (256 < param_4 - param_2) {
            /* WARNING: Subroutine does not return */
            LogAssert("maxZ - minZ <= (int)m_grid[0].size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "RemoveRoof.cpp",
                      191, (char*)0);
        }
        this_00 = (array<unsigned char, 256ul>*)(&field_16)->begin();
        paVar1 = (array<unsigned char, 256ul>*)(&field_16)->end();
        if (this_00 != paVar1) {
            do {
                local_29 = '\0';
                std::array<unsigned char, 256ul>::fill(this_00, &local_29);
                this_00 = this_00 + 256;
            } while (this_00 != paVar1);
        }
    }

    // 0x10047edf0, 16 bytes, complete-object constructor, placed by neighbouring functions
    // RemoveRoofPaintingProgress::RemoveRoofPaintingProgress(int, int, int, int): jumps straight to the base-object constructor

    // 0x10047ee00, 96 bytes, placed by neighbouring functions
    // RemoveRoofPaintingProgress::Set(int, int, int)
    void RemoveRoofPaintingProgress::Set(int param_1, int param_2, int param_3) {
        ulong uVar1;
        array<unsigned char, 256ul>* this_00;
        byte* pbVar2;
        ulong uVar3;

        if ((((param_2 < field_8) && (param_3 < field_12)) &&
             (uVar1 = (long)param_2 - (long)field_0, -1 < (int)uVar1)) &&
            (uVar3 = (long)param_3 - (long)field_4, -1 < (int)uVar3)) {
            this_00 = (array<unsigned char, 256ul>*)std::array<std::array<unsigned char, 256ul>, 256ul>::operator[](
                (array<std::array<unsigned char, 256ul>, 256ul>*)&field_16, uVar1);
            pbVar2 = (byte*)std::array<unsigned char, 256ul>::operator[](this_00, uVar3);
            *pbVar2 = *pbVar2 | (byte)(1 << ((byte)param_1 & 31));
        }
    }

    // 0x10047ee70, 96 bytes, placed by neighbouring functions
    // RemoveRoofPaintingProgress::IsSet(int, int, int) const
    bool RemoveRoofPaintingProgress::IsSet(int param_1, int param_2, int param_3) {
        array<unsigned char, 256ul>* this_00;
        byte* pbVar1;
        ulong uVar2;
        ulong uVar3;
        bool bVar4;

        bVar4 = true;
        if ((((param_2 < field_8) && (param_3 < field_12)) &&
             (uVar3 = (long)param_2 - (long)field_0, -1 < (int)uVar3)) &&
            (uVar2 = (long)param_3 - (long)field_4, -1 < (int)uVar2)) {
            this_00 = (array<unsigned char, 256ul>*)std::array<std::array<unsigned char, 256ul>, 256ul>::operator[](
                (array<std::array<unsigned char, 256ul>, 256ul>*)&field_16, uVar3);
            pbVar1 = (byte*)std::array<unsigned char, 256ul>::operator[](this_00, uVar2);
            bVar4 = (*pbVar1 >> (param_1 & 31U) & 1) != 0;
        }
        return bVar4;
    }

    // 0x10047eef0, 352 bytes, placed by class name and debug map
    // RemoveRoof::CalculateMaxRemoveRoofLevel(LinkMap const&, int, int, int, int, int)
    int RemoveRoof::CalculateMaxRemoveRoofLevel(LinkMap* param_1, int param_2, int param_3, int param_4, int param_5,
                                                int param_6) {
        char cVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int local_38;

        do {
            if (param_2 < 1) {
                iVar2 = 2;
                break;
            }
            param_2 = param_2 + -1;
            iVar3 = param_3;
            if (0 < param_5) {
                do {
                    iVar2 = 8;
                    if (param_6 < 1) {
                    joined_r0x00010047ef77:
                        if (0 < param_6)
                            goto LAB_10047ef45;
                    } else {
                        cVar1 = param_1->IsRemoveRoof(param_2, iVar3, param_4);
                        iVar4 = param_4;
                        if (cVar1 != '\0') {
                            iVar2 = 1;
                            local_38 = param_2;
                            goto joined_r0x00010047ef77;
                        }
                        do {
                            iVar4 = iVar4 + 1;
                            if (param_6 + param_4 <= iVar4) {
                                iVar2 = 8;
                                goto joined_r0x00010047f018;
                            }
                            cVar1 = param_1->IsRemoveRoof(param_2, iVar3, iVar4);
                        } while (cVar1 == '\0');
                        iVar2 = 1;
                        local_38 = param_2;
                    joined_r0x00010047f018:
                        if (iVar4 < param_6 + param_4)
                            goto LAB_10047ef45;
                    }
                    iVar3 = iVar3 + 1;
                } while (iVar3 < param_5 + param_3);
            }
            iVar2 = 5;
        LAB_10047ef45:
        } while (iVar2 == 5);
        iVar3 = 4;
        if (iVar2 != 2) {
            iVar3 = local_38;
        }
        return iVar3;
    }

} // namespace jag::game

namespace jag::game::option {
    // 0x1002699e0: the linker folded this into oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetails::GetID() const, which has identical code
    RemoveRoof::GetDefault();

    // 0x10060fdb0: the linker folded this into Option<EnumRemoveRoof>::~Option(), which has identical code
    RemoveRoof::~RemoveRoof();

} // namespace jag::game::option
