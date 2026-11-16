// libs/oldscape/rs2lib/util/CoordGrid.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

#include "CoordGrid.h"

namespace jag::oldscape::rs2lib {
    // 0x100fc9240, set at startup by ___cxx_global_var_init.13
    CoordGrid CoordGrid::CoordGridNull = CoordGrid(-1, -1, -1);

    // 0x100024170: CoordGrid::GetZ() const has the same machine code as option::IScriptOption::GetId() const

    // 0x100073980: CoordGrid::GetX() const has the same machine code as jag::math::Rect<int>::MinY() const

    // 0x1000b9960: CoordGrid::GetLevel() const has the same machine code as ScriptVarType::GetID() const

    // 0x1001fbae0
    CoordGrid::CoordGrid() {
        Unset();
    }

    // 0x1001fbb00
    CoordGrid::CoordGrid(int arg1, int arg2, int arg3) : m_level(arg1), m_x(arg2), m_z(arg3) {}

    // 0x1001fbb10
    CoordGrid::CoordGrid(const CoordGrid& coordGrid)
        : m_level(coordGrid.m_level), m_x(coordGrid.m_x), m_z(coordGrid.m_z) {}

    // 0x1001fbb40
    CoordGrid::CoordGrid(int arg1) {
        if (arg1 == -1) {
            Unset();
            return;
        }
        m_level = (unsigned int)arg1 >> 28 & 3;
        m_x = (unsigned int)arg1 >> 14 & 16383;
        m_z = arg1 & 16383;
    }

    // 0x1001fbb90
    CoordGrid::CoordGrid(int arg1, const CoordMapSquare& coordMapSquare) : m_level(arg1) {
        unsigned int uVar1 = coordMapSquare.GetX();
        m_x = uVar1;
        uVar1 = coordMapSquare.GetZ();
        m_z = uVar1;
    }

    // 0x1001fbbd0
    CoordGrid::CoordGrid(eastl::string str) {
        CoordGrid local_40;

        eastl::string local_30(*str);
        CoordGrid(&local_40, &local_30, ',');
    }

    // 0x1001fbc40
    CoordGrid::CoordGrid(eastl::string str, char arg2) {
        bool bVar1;
        char cVar2;
        unsigned int uVar3;
        int iVar4;
        int iVar5;
        eastl::string* pbVar7;
        eastl::string local_100;
        eastl::string local_e0;
        eastl::string local_c0;
        eastl::string local_a0;
        eastl::string local_80;
        eastl::string local_60;

        Array<eastl::string> local_40;
        core::stringtools::general::StringTools::SplitByChar(*str, arg2, local_40);
        long lVar6 = local_40.end();
        if (lVar6 == 3) {
            pbVar7 = &local_40[0];
            local_a0 = eastl::string(*pbVar7);
            cVar2 = core::stringtools::general::StringTools::IsInt(&local_a0);
            if (!cVar2) {
                bVar1 = false;
            LAB_1001fbe8c:
                cVar2 = '\0';
            } else {
                pbVar7 = &local_40[1];
                local_80 = eastl::string(*pbVar7);
                cVar2 = core::stringtools::general::StringTools::IsInt(&local_80);
                if (!cVar2) {
                    bVar1 = true;
                    goto LAB_1001fbe8c;
                }
                pbVar7 = &local_40[2];
                local_60 = eastl::string(*pbVar7);
                cVar2 = core::stringtools::general::StringTools::IsInt(&local_60);
                bVar1 = true;
            }
            if (bVar1) {
            }
            if (cVar2) {
                pbVar7 = &local_40[0];
                uVar3 = core::stringtools::general::StringTools::ParseInt(*pbVar7);
                m_level = uVar3;
                pbVar7 = &local_40[1];
                iVar4 = core::stringtools::general::StringTools::ParseInt(*pbVar7);
                m_x = iVar4 << 6 | 32;
                pbVar7 = &local_40[2];
                iVar4 = core::stringtools::general::StringTools::ParseInt(*pbVar7);
                m_z = iVar4 << 6 | 32;
                goto LAB_1001fbf1c;
            }
        } else if (lVar6 == 5) {
            pbVar7 = &local_40[0];
            local_100 = eastl::string(*pbVar7);
            cVar2 = core::stringtools::general::StringTools::IsInt(&local_100);
            if (!cVar2) {
                bVar1 = false;
            LAB_1001fbdc7:
                cVar2 = '\0';
            } else {
                pbVar7 = &local_40[1];
                local_e0 = eastl::string(*pbVar7);
                cVar2 = core::stringtools::general::StringTools::IsInt(&local_e0);
                if (!cVar2) {
                    bVar1 = true;
                    goto LAB_1001fbdc7;
                }
                pbVar7 = &local_40[2];
                local_c0 = eastl::string(*pbVar7);
                cVar2 = core::stringtools::general::StringTools::IsInt(&local_c0);
                bVar1 = true;
            }
            if (bVar1) {
            }
            if (cVar2) {
                pbVar7 = &local_40[0];
                uVar3 = core::stringtools::general::StringTools::ParseInt(*pbVar7);
                m_level = uVar3;
                pbVar7 = &local_40[1];
                iVar4 = core::stringtools::general::StringTools::ParseInt(*pbVar7);
                pbVar7 = &local_40[3];
                iVar5 = core::stringtools::general::StringTools::ParseInt(*pbVar7);
                m_x = iVar5 + iVar4 * 64;
                pbVar7 = &local_40[2];
                iVar4 = core::stringtools::general::StringTools::ParseInt(*pbVar7);
                pbVar7 = &local_40[4];
                iVar5 = core::stringtools::general::StringTools::ParseInt(*pbVar7);
                m_z = iVar5 + iVar4 * 64;
                goto LAB_1001fbf1c;
            }
        }
        Unset();
    LAB_1001fbf1c:
    }

    // 0x1001fc110
    void CoordGrid::Set(int arg1) {
        if (arg1 == -1) {
            Unset();
            return;
        }
        m_level = (unsigned int)arg1 >> 28 & 3;
        m_x = (unsigned int)arg1 >> 14 & 16383;
        m_z = arg1 & 16383;
    }

    // 0x1001fc150
    void CoordGrid::Set(int arg1, int arg2, int arg3) {
        m_level = arg1;
        m_x = arg2;
        m_z = arg3;
    }

    // 0x1001fc160
    void CoordGrid::Set(CoordGrid coordGrid) {
        m_level = coordGrid->m_level;
        m_x = coordGrid->m_x;
        m_z = coordGrid->m_z;
    }

    // 0x1001fc180
    auto CoordGrid::ToString() const {
        auto result;

        eastl::string local_50(",");
        ToString(&result, this, &local_50);
        return result;
    }

    // 0x1001fc200
    auto CoordGrid::ToString(eastl::string str) const {
        auto result;
        uint64_t uVar1 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        result.sprintf("%i%s%i%s%i%s%i%s%i", (unsigned long)m_level, uVar1,
                       (unsigned long)(unsigned int)((int)m_x >> 6), uVar1, (int)m_z >> 6, uVar1, m_x & 63, uVar1,
                       m_z & 63);
        return result;
    }

} // namespace jag::oldscape::rs2lib
