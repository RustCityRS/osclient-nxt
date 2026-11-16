// libs/game/runetek5/scene/RemoveRoof.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "RemoveRoof.h"

namespace jag::game {
    // 0x10047e280
    RemoveRoof::RemoveRoof() {
        ___bzero(this, 589864);
        new (&field_589864) eastl::fixed_vector<math::Rect<int>, 4ul>(4);
        field_589968 = nullptr;
        field_589976 = nullptr;
    }

    // 0x10047e2e0
    bool RemoveRoof::SetCurrentTick(const LinkMap& linkMap, unsigned int arg2, const World* world) {
        GridRect* pGVar2;
        GridRect* this_00;

        unsigned int uVar1 = field_0;
        if (uVar1 != arg2) {
            Setup(linkMap, world);
            field_0 = arg2;
            field_36 = 0;
            this_00 = (GridRect*)field_589864.HeapBeginPtr();
            pGVar2 = (GridRect*)field_589864.end();
            for (; this_00 != pGVar2; this_00 = (GridRect*)&this_00->field_16) {
                new (this_00) oldscape::dash3d::GridRect(0, 0, 0, 0);
            }
        }
        return uVar1 != arg2;
    }

    // 0x10047e360
    void RemoveRoof::Setup(const LinkMap& linkMap, const World* world) {
        field_589968 = linkMap;
        field_589976 = world;
        auto piVar4 = world->GetCentreSquarePosition();
        int iVar5 = *piVar4;
        int iVar1 = iVar5 - 1;
        field_4 = iVar1;
        iVar5 = iVar5 + 1;
        field_8 = iVar5;
        int iVar3 = piVar4[1];
        int iVar2 = iVar3 - 1;
        field_12 = iVar2;
        iVar3 = iVar3 + 1;
        field_16 = iVar3;
        field_20 = iVar1 * 64;
        field_24 = iVar2 * 64;
        field_28 = iVar5 * 64 + 64;
        field_32 = iVar3 * 64 + 64;
    }

    // 0x10047e3e0
    void RemoveRoof::SetRoofRemoved(int arg1, unsigned int arg2, unsigned int arg3, RemoveRoof::Type arg4) {
        int iVar1;
        array<std::array<unsigned int, 192ul>, 192ul>* this_00;
        array<unsigned int, 192ul>* this_01;
        unsigned int* puVar2;
        GridRect* this_02;
        int* piVar3;
        long* plVar4;
        float* pfVar5;
        char* str;
        int iVar6;
        PlaneT<float> local_1c8;
        eastl::string local_1b8;
        uint8_t local_190[16];
        ColourHSL local_180;
        unsigned int local_170;
        int local_168;
        float local_164;
        GridRect local_160;

        if ((field_0 != 0) && (arg1 != -1)) {
            if (3 < (unsigned int)arg1) {
                LogAssert("level >= 0 && level < constants::MapConstants::LEVELS",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                          "RemoveRoof.cpp",
                          64, nullptr);
            }
            iVar6 = field_20;
            if ((((iVar6 <= (int)arg2) && ((int)arg2 < field_28)) && (iVar1 = field_24, iVar1 <= (int)arg3)) &&
                ((int)arg3 < field_32)) {
                local_170 = field_0;
                local_190._8_8_ = (int64_t)arg1;
                local_164 = (float)arg4;
                this_00 = &field_40[local_190._8_8_];
                this_01 = (array<unsigned int, 192ul>*)(*this_00)[(unsigned long)(arg2 - iVar6)];
                puVar2 = (unsigned int*)(*this_01)[(unsigned long)(arg3 - iVar1)];
                *puVar2 = local_170;
                field_36 = field_36 + 1;
                if (local_164 == 0.0) {
                    this_02 = &field_589864[local_190._8_8_];
                    piVar3 = (int*)this_02->second();
                    if (*piVar3 == 0) {
                        new (this_02) oldscape::dash3d::GridRect(arg2, arg3, 1, 1);
                    } else {
                        local_160 = oldscape::dash3d::GridRect(arg2, arg3, 1, 1);
                        this_02->Union(local_160);
                    }
                }
                if (World::m_debugRemoveRoof != '\0') {
                    field_589976->GetHeightMap()->GetTileHeight(local_168, arg1, arg2, arg3, false, 0);
                    local_180 = math::ColourHSL((float)(arg2 << 7) + 64.0, 0.0, (float)(arg3 << 7) + 64.0);
                    local_1c8 = math::PlaneT<float>(PTR_UP_100ee66d0, (float)-local_168);
                    plVar4 = DebugPrimitiveCollectorBasic::GetCollector("");
                    if (plVar4 != nullptr) {
                        iVar6 = 1090486400;
                        if (local_164 == 1.4013e-45) {
                            iVar6 = 1077969151;
                        }
                        local_160 = oldscape::sidebars::SideBarData(iVar6, 5);
                        (**(void (**)(...))(*plVar4 + 104))(plVar4, &local_180, &local_1c8, 124, 124, &local_160);
                    }
                    if (World::m_debugRemoveRoofLabels != '\0') {
                        local_160 = eastl::fixed_string<char, 256>();
                        local_160.sprintf("Remove(%d, %u, %u, %u, %u)", (unsigned long)(unsigned int)arg1,
                                          (unsigned long)(arg2 >> 6), (unsigned long)(arg3 >> 6),
                                          (unsigned long)(arg2 & 63), arg3 & 63);
                        local_164 = (float)local_168;
                        pfVar5 = (float*)local_180.y();
                        *pfVar5 = local_164 + *pfVar5;
                        plVar4 = DebugPrimitiveCollectorBasic::GetCollector("");
                        if (plVar4 != nullptr) {
                            str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                            local_1b8 = eastl::string(str);
                            new (local_190) oldscape::sidebars::SideBarData(-1, 1);
                            (**(void (**)(...))(*plVar4 + 136))(plVar4, &local_180, &local_1b8, local_190);
                        }
                    }
                }
            }
        }
    }

    // 0x10047e8f0
    bool RemoveRoof::IsRoofRemoved(int arg1, unsigned int arg2, unsigned int arg3) const {
        int iVar1;
        int iVar2;
        bool bVar3;
        uint8_t bVar4;
        unsigned int uVar5;
        array<std::array<unsigned int, 192ul>, 192ul>* this_00;
        array<unsigned int, 192ul>* this_01;
        unsigned int* puVar6;
        unsigned int uVar7;

        if (((field_0 != 0) && (arg1 != -1)) && (0 < field_36)) {
            uVar5 = field_589968->GetTileLinkZero(arg1, arg2, arg3);
            bVar4 = (uint8_t)((uVar5 & 8) >> 3) & 0 < arg1;
            uVar5 = (unsigned int)bVar4;
            uVar7 = arg1 - (unsigned int)bVar4;
            if (3 < uVar7) {
                LogAssert("level >= 0 && level < constants::MapConstants::LEVELS",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                          "RemoveRoof.cpp",
                          132, nullptr);
            }
            iVar1 = field_20;
            bVar3 = true;
            if (((iVar1 <= (int)arg2) && ((int)arg2 < field_28)) &&
                ((iVar2 = field_24, iVar2 <= (int)arg3 && ((int)arg3 < field_32)))) {
                this_00 = &field_40[(long)(int)uVar7];
                this_01 = (array<unsigned int, 192ul>*)(*this_00)[(unsigned long)(arg2 - iVar1)];
                puVar6 = (unsigned int*)(*this_01)[(unsigned long)(arg3 - iVar2)];
                uVar5 = (((uint32_t)((int32_t)(*puVar6 >> 8)) << 8) | (uint8_t)(*puVar6 == field_0));
                bVar3 = false;
            }
            if (!bVar3) {
                return uVar5;
            }
        }
        return 0;
    }

    // 0x10047ea30
    bool RemoveRoof::IsRoofRemovedInRange(const CoordGrid& coordGrid1, const CoordGrid& coordGrid2) const {
        int iVar2;
        unsigned int uVar3;
        ShaderVariablePrecision shaderVariablePrecision2;
        EnumOptionToggle enumOptionToggle2;
        EnumOptionToggle EVar4;
        int iVar5;
        int iVar6;
        array<std::array<unsigned int, 192ul>, 192ul>* this_00;
        array<unsigned int, 192ul>* this_01;
        unsigned int* puVar7;
        int iVar8;
        long lVar9;
        bool bVar10;
        bool bVar11;

        unsigned int uVar1 = coordGrid1.field_0;
        if (coordGrid2.field_0 != uVar1) {
            LogAssert("end.m_level == level",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "RemoveRoof.cpp",
                      148, nullptr);
        }
        if (3 < uVar1) {
            LogAssert("level >= 0 && level < constants::MapConstants::LEVELS",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "RemoveRoof.cpp",
                      149, nullptr);
        }
        if (((field_0 != 0) && (0 < (int)uVar1)) && (0 < field_36)) {
            shaderVariablePrecision2 = eastl::min<unsigned int>(coordGrid1.field_4, coordGrid2.field_4);
            eastl::max<unsigned int>(coordGrid1.field_4, coordGrid2.field_4);
            eastl::min<unsigned int>(coordGrid1.field_8, coordGrid2.field_8);
            eastl::max<unsigned int>(coordGrid1.field_8, coordGrid2.field_8);
            enumOptionToggle2 = eastl::max<int>(field_20, shaderVariablePrecision2);
            EVar4 = eastl::min<graphics::GraphicsQuality>(field_28, enumOptionToggle2);
            iVar5 = eastl::max<int>(field_24, enumOptionToggle2);
            iVar6 = eastl::min<graphics::GraphicsQuality>(field_32, enumOptionToggle2);
            if ((int)enumOptionToggle2 <= (int)EVar4) {
                do {
                    iVar8 = 5;
                    bVar11 = iVar6 < iVar5;
                    if (iVar5 <= iVar6) {
                        this_00 = &field_40[(long)(int)uVar1];
                        this_01 =
                            (array<unsigned int, 192ul>*)(*this_00)[(long)(int)enumOptionToggle2 - (long)field_20];
                        iVar2 = field_24;
                        uVar3 = field_0;
                        puVar7 = (unsigned int*)(*this_01)[(long)iVar5 - (long)iVar2];
                        iVar8 = 1;
                        if (*puVar7 == uVar3) {
                            bVar11 = false;
                        } else {
                            lVar9 = (long)iVar5;
                            iVar8 = iVar6 - iVar5;
                            do {
                                bVar11 = iVar6 <= lVar9;
                                bVar10 = iVar8 == 0;
                                iVar8 = iVar8 - 1;
                                if (bVar10) {
                                    iVar8 = 5;
                                    goto LAB_10047ec60;
                                }
                                puVar7 = (unsigned int*)(*this_01)[lVar9 + (1 - (long)iVar2)];
                                lVar9 = lVar9 + 1;
                            } while (*puVar7 != uVar3);
                            iVar8 = 1;
                        }
                    }
                LAB_10047ec60:
                    if (!bVar11)
                        goto LAB_10047ec81;
                    bVar11 = enumOptionToggle2 != EVar4;
                    enumOptionToggle2 = enumOptionToggle2 + 1;
                } while (bVar11);
            }
            iVar8 = 2;
        LAB_10047ec81:
            if (iVar8 != 2) {
                return 1;
            }
        }
        return 0;
    }

    // 0x10047eca0
    RemoveRoofPaintingProgress::RemoveRoofPaintingProgress() : field_0(-1), field_4(-1), field_8(-1), field_12(-1) {}

    // 0x10047ecc0
    RemoveRoofPaintingProgress::RemoveRoofPaintingProgress(int arg1, int arg2, int arg3, int arg4)
        : field_0(arg1), field_4(arg2), field_8(arg3), field_12(arg4) {
        if (256 < arg3 - arg1) {
            LogAssert("maxX - minX <= (int)m_grid.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "RemoveRoof.cpp",
                      190, nullptr);
        }
        if (256 < arg4 - arg2) {
            LogAssert("maxZ - minZ <= (int)m_grid[0].size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "RemoveRoof.cpp",
                      191, nullptr);
        }
        array<unsigned char, 256ul>* this_00 =
            (array<unsigned char, 256ul>*)std::array<std::array<unsigned char, 256ul>, 256ul>::begin();
        array<unsigned char, 256ul>* paVar1 =
            (array<unsigned char, 256ul>*)std::array<std::array<unsigned char, 256ul>, 256ul>::end();
        if (this_00 != paVar1) {
            do {
                this_00->fill('\0');
                this_00 = this_00 + 256;
            } while (this_00 != paVar1);
        }
    }

    // 0x10047ee00
    void RemoveRoofPaintingProgress::Set(int arg1, int arg2, int arg3) {
        unsigned long arg1_00;
        array<unsigned char, 256ul>* this_00;
        uint8_t* pbVar1;
        unsigned long arg1_01;

        if ((((arg2 < field_8) && (arg3 < field_12)) && (arg1_00 = (long)arg2 - (long)field_0, -1 < (int)arg1_00)) &&
            (arg1_01 = (long)arg3 - (long)field_4, -1 < (int)arg1_01)) {
            this_00 = &field_16[arg1_00];
            pbVar1 = (uint8_t*)(*this_00)[arg1_01];
            *pbVar1 = *pbVar1 | (uint8_t)(1 << ((uint8_t)arg1 & 31));
        }
    }

    // 0x10047ee70
    bool RemoveRoofPaintingProgress::IsSet(int arg1, int arg2, int arg3) const {
        array<unsigned char, 256ul>* this_00;
        uint8_t* pbVar1;
        unsigned long arg1_00;
        unsigned long arg1_01;

        bool bVar2 = true;
        if ((((arg2 < field_8) && (arg3 < field_12)) && (arg1_01 = (long)arg2 - (long)field_0, -1 < (int)arg1_01)) &&
            (arg1_00 = (long)arg3 - (long)field_4, -1 < (int)arg1_00)) {
            this_00 = &field_16[arg1_01];
            pbVar1 = (uint8_t*)(*this_00)[arg1_00];
            bVar2 = (*pbVar1 >> (arg1 & 31U) & 1) != 0;
        }
        return bVar2;
    }

    // 0x10047eef0
    int RemoveRoof::CalculateMaxRemoveRoofLevel(const LinkMap& linkMap, int arg2, int arg3, int arg4, int arg5,
                                                int arg6) {
        bool cVar1;
        int iVar2;
        int iVar3;
        int arg3_00;
        int local_38;

        do {
            if (arg2 < 1) {
                iVar2 = 2;
                break;
            }
            arg2 = arg2 - 1;
            iVar3 = arg3;
            if (0 < arg5) {
                do {
                    iVar2 = 8;
                    if (arg6 < 1) {
                    joined_r0x00010047ef77:
                        if (0 < arg6)
                            goto LAB_10047ef45;
                    } else {
                        cVar1 = linkMap.IsRemoveRoof(arg2, iVar3, arg4);
                        arg3_00 = arg4;
                        if (cVar1) {
                            iVar2 = 1;
                            local_38 = arg2;
                            goto joined_r0x00010047ef77;
                        }
                        do {
                            arg3_00 = arg3_00 + 1;
                            if (arg6 + arg4 <= arg3_00) {
                                iVar2 = 8;
                                goto joined_r0x00010047f018;
                            }
                            cVar1 = linkMap.IsRemoveRoof(arg2, iVar3, arg3_00);
                        } while (!cVar1);
                        iVar2 = 1;
                        local_38 = arg2;
                    joined_r0x00010047f018:
                        if (arg3_00 < arg6 + arg4)
                            goto LAB_10047ef45;
                    }
                    iVar3 = iVar3 + 1;
                } while (iVar3 < arg5 + arg3);
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
    // 0x1002699e0: RemoveRoof::GetDefault() has the same machine code as oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetails::GetID() const

    // 0x10060fdb0: RemoveRoof::~RemoveRoof() has the same machine code as Option<EnumRemoveRoof>::~Option()

} // namespace jag::game::option
