// libs/oldscape/rs2lib/util/CoordGrid.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

#include "CoordGrid.h"

namespace jag::oldscape::rs2lib {
    // 0x100fc9240, 16 bytes, __common; set at startup by ___cxx_global_var_init.13
    CoordGrid CoordGrid::CoordGridNull = CoordGrid(-1, -1, -1);

    // 0x100024170: the linker folded this into option::IScriptOption::GetId() const, which has identical code
    CoordGrid::GetZ() const;

    // 0x100073980: the linker folded this into jag::math::Rect<int>::MinY() const, which has identical code
    CoordGrid::GetX() const;

    // 0x1000b9960: the linker folded this into ScriptVarType::GetID() const, which has identical code
    CoordGrid::GetLevel() const;

    // 0x1001fbad0, 16 bytes, complete-object constructor, placed by class name and debug map
    // CoordGrid::CoordGrid(int, int, int): jumps straight to the base-object constructor

    // 0x1001fbae0, 16 bytes, base-object constructor, placed by class name and debug map
    // CoordGrid::CoordGrid()
    void CoordGrid::CoordGrid() {
        Unset(this);
    }

    // 0x1001fbaf0, 16 bytes, complete-object constructor, placed by class name and debug map
    // CoordGrid::CoordGrid(): jumps straight to the base-object constructor

    // 0x1001fbb00, 16 bytes, base-object constructor, placed by class name and debug map
    // CoordGrid::CoordGrid(int, int, int)
    void CoordGrid::CoordGrid(int param_1, int param_2, int param_3) {
        field_0 = param_1;
        field_4 = param_2;
        field_8 = param_3;
    }

    // 0x1001fbb10, 32 bytes, base-object constructor, placed by class name and debug map
    // CoordGrid::CoordGrid(CoordGrid const&)
    void CoordGrid::CoordGrid(CoordGrid* param_1) {
        field_0 = param_1->field_0;
        field_4 = param_1->field_4;
        field_8 = param_1->field_8;
    }

    // 0x1001fbb30, 16 bytes, complete-object constructor, placed by class name and debug map
    // CoordGrid::CoordGrid(CoordGrid const&): jumps straight to the base-object constructor

    // 0x1001fbb40, 64 bytes, base-object constructor, placed by class name and debug map
    // CoordGrid::CoordGrid(int)
    void CoordGrid::CoordGrid(int param_1) {
        if (param_1 == -1) {
            Unset(this);
            return;
        }
        field_0 = (uint)param_1 >> 28 & 3;
        field_4 = (uint)param_1 >> 14 & 16383;
        field_8 = param_1 & 16383;
    }

    // 0x1001fbb80, 16 bytes, complete-object constructor, placed by class name and debug map
    // CoordGrid::CoordGrid(int): jumps straight to the base-object constructor

    // 0x1001fbb90, 48 bytes, base-object constructor, placed by class name and debug map
    // CoordGrid::CoordGrid(int, CoordMapSquare const&)
    void CoordGrid::CoordGrid(int param_1, CoordMapSquare* param_2) {
        uint uVar1;

        field_0 = param_1;
        uVar1 = param_2->GetX();
        field_4 = uVar1;
        uVar1 = param_2->GetZ();
        field_8 = uVar1;
    }

    // 0x1001fbbc0, 16 bytes, complete-object constructor, placed by class name and debug map
    // CoordGrid::CoordGrid(int, CoordMapSquare const&): jumps straight to the base-object constructor

    // 0x1001fbbd0, 80 bytes, base-object constructor, placed by class name and debug map
    // CoordGrid::CoordGrid(eastl::string)
    void CoordGrid::CoordGrid(undefined8 param_1, basic_string* param_2) {
        CoordGrid local_40;
        eastl::string local_30[32];

        eastl::string::basic_string(local_30, param_2);
        CoordGrid(&local_40, local_30, 44);
        eastl::string::~basic_string(local_30);
    }

    // 0x1001fbc20, 16 bytes, complete-object constructor, placed by class name and debug map
    // CoordGrid::CoordGrid(eastl::string, char): jumps straight to the base-object constructor

    // 0x1001fbc30, 16 bytes, complete-object constructor, placed by class name and debug map
    // CoordGrid::CoordGrid(eastl::string): jumps straight to the base-object constructor

    // 0x1001fbc40, 880 bytes, base-object constructor, placed by class name and debug map
    // CoordGrid::CoordGrid(eastl::string, char)
    /* WARNING: Removing unreachable block (ram,4297047337) */
    /* WARNING: Removing unreachable block (ram,4297047477) */
    /* CoordGrid::CoordGrid(eastl::string, char) */

    void CoordGrid::CoordGrid(basic_string* param_2, char param_3) {
        bool bVar1;
        char cVar2;
        uint uVar3;
        int iVar4;
        int iVar5;
        long lVar6;
        basic_string* pbVar7;
        eastl::string local_100[32];
        eastl::string local_e0[32];
        eastl::string local_c0[32];
        eastl::string local_a0[32];
        eastl::string local_80[32];
        eastl::string local_60[32];
        Array<eastl::string, eastl::allocator> local_40[24];

        Array<eastl::string, eastl::allocator>::Array(local_40);
        core::stringtools::general::StringTools::SplitByChar(param_2, param_3, (Array*)local_40);
        lVar6 = local_40->end();
        if (lVar6 == 3) {
            pbVar7 = (basic_string*)Array<eastl::string, eastl::allocator>::operator[](local_40, 0);
            eastl::string::basic_string(local_a0, pbVar7);
            cVar2 = core::stringtools::general::StringTools::IsInt(local_a0);
            if (cVar2 == '\0') {
                bVar1 = false;
            LAB_1001fbe8c:
                cVar2 = '\0';
            } else {
                pbVar7 = (basic_string*)Array<eastl::string, eastl::allocator>::operator[](local_40, 1);
                eastl::string::basic_string(local_80, pbVar7);
                cVar2 = core::stringtools::general::StringTools::IsInt(local_80);
                if (cVar2 == '\0') {
                    bVar1 = true;
                    goto LAB_1001fbe8c;
                }
                pbVar7 = (basic_string*)Array<eastl::string, eastl::allocator>::operator[](local_40, 2);
                eastl::string::basic_string(local_60, pbVar7);
                cVar2 = core::stringtools::general::StringTools::IsInt(local_60);
                bVar1 = true;
                eastl::string::~basic_string(local_60);
            }
            if (bVar1) {
                eastl::string::~basic_string(local_80);
            }
            eastl::string::~basic_string(local_a0);
            if (cVar2 != '\0') {
                pbVar7 = (basic_string*)Array<eastl::string, eastl::allocator>::operator[](local_40, 0);
                uVar3 = core::stringtools::general::StringTools::ParseInt(pbVar7);
                field_0 = uVar3;
                pbVar7 = (basic_string*)Array<eastl::string, eastl::allocator>::operator[](local_40, 1);
                iVar4 = core::stringtools::general::StringTools::ParseInt(pbVar7);
                field_4 = iVar4 << 6 | 32;
                pbVar7 = (basic_string*)Array<eastl::string, eastl::allocator>::operator[](local_40, 2);
                iVar4 = core::stringtools::general::StringTools::ParseInt(pbVar7);
                field_8 = iVar4 << 6 | 32;
                goto LAB_1001fbf1c;
            }
        } else if (lVar6 == 5) {
            pbVar7 = (basic_string*)Array<eastl::string, eastl::allocator>::operator[](local_40, 0);
            eastl::string::basic_string(local_100, pbVar7);
            cVar2 = core::stringtools::general::StringTools::IsInt(local_100);
            if (cVar2 == '\0') {
                bVar1 = false;
            LAB_1001fbdc7:
                cVar2 = '\0';
            } else {
                pbVar7 = (basic_string*)Array<eastl::string, eastl::allocator>::operator[](local_40, 1);
                eastl::string::basic_string(local_e0, pbVar7);
                cVar2 = core::stringtools::general::StringTools::IsInt(local_e0);
                if (cVar2 == '\0') {
                    bVar1 = true;
                    goto LAB_1001fbdc7;
                }
                pbVar7 = (basic_string*)Array<eastl::string, eastl::allocator>::operator[](local_40, 2);
                eastl::string::basic_string(local_c0, pbVar7);
                cVar2 = core::stringtools::general::StringTools::IsInt(local_c0);
                bVar1 = true;
                eastl::string::~basic_string(local_c0);
            }
            if (bVar1) {
                eastl::string::~basic_string(local_e0);
            }
            eastl::string::~basic_string(local_100);
            if (cVar2 != '\0') {
                pbVar7 = (basic_string*)Array<eastl::string, eastl::allocator>::operator[](local_40, 0);
                uVar3 = core::stringtools::general::StringTools::ParseInt(pbVar7);
                field_0 = uVar3;
                pbVar7 = (basic_string*)Array<eastl::string, eastl::allocator>::operator[](local_40, 1);
                iVar4 = core::stringtools::general::StringTools::ParseInt(pbVar7);
                pbVar7 = (basic_string*)Array<eastl::string, eastl::allocator>::operator[](local_40, 3);
                iVar5 = core::stringtools::general::StringTools::ParseInt(pbVar7);
                field_4 = iVar5 + iVar4 * 64;
                pbVar7 = (basic_string*)Array<eastl::string, eastl::allocator>::operator[](local_40, 2);
                iVar4 = core::stringtools::general::StringTools::ParseInt(pbVar7);
                pbVar7 = (basic_string*)Array<eastl::string, eastl::allocator>::operator[](local_40, 4);
                iVar5 = core::stringtools::general::StringTools::ParseInt(pbVar7);
                field_8 = iVar5 + iVar4 * 64;
                goto LAB_1001fbf1c;
            }
        }
        Unset(this);
    LAB_1001fbf1c:
        local_40->~Array();
    }

    // 0x1001fc110, 64 bytes, placed by class name and debug map
    // CoordGrid::Set(int)
    void CoordGrid::Set(int param_1) {
        if (param_1 == -1) {
            Unset(this);
            return;
        }
        field_0 = (uint)param_1 >> 28 & 3;
        field_4 = (uint)param_1 >> 14 & 16383;
        field_8 = param_1 & 16383;
    }

    // 0x1001fc150, 16 bytes, placed by class name and debug map
    // CoordGrid::Set(int, int, int)
    void CoordGrid::Set(int param_1, int param_2, int param_3) {
        field_0 = param_1;
        field_4 = param_2;
        field_8 = param_3;
    }

    // 0x1001fc160, 32 bytes, placed by class name and debug map
    // CoordGrid::Set(CoordGrid)
    void CoordGrid::Set(CoordGrid param_1) {
        uint* puVar1;

        puVar1 = param_1._0_8_;
        field_0 = *puVar1;
        field_4 = puVar1[1];
        field_8 = puVar1[2];
    }

    // 0x1001fc180, 128 bytes, placed by class name and debug map
    // CoordGrid::ToString() const
    CoordGrid* CoordGrid::ToString() {
        eastl::string local_50[32];
        allocator local_30[8];

        eastl::allocator::allocator(local_30, "EASTL basic_string");
        eastl::string::basic_string(local_50, ",", local_30);
        ToString(this);
        eastl::string::~basic_string(local_50);
        return this;
    }

    // 0x1001fc200, 144 bytes, placed by class name and debug map
    // CoordGrid::ToString(eastl::string) const
    CoordGrid* CoordGrid::ToString(uint* param_2) {
        undefined8 uVar1;

        new (this) eastl::string();
        uVar1 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::string::sprintf((char*)this, "%i%s%i%s%i%s%i%s%i", (ulong)*param_2, uVar1,
                               (ulong)(uint)((int)param_2[1] >> 6), uVar1, (int)param_2[2] >> 6, uVar1, param_2[1] & 63,
                               uVar1, param_2[2] & 63);
        return this;
    }

    // 0x100226580, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.13
    void ___cxx_global_var_init_13() {
        new (&CoordGrid::CoordGridNull) CoordGrid(-1, -1, -1);
    }

} // namespace jag::oldscape::rs2lib
