// libs/ui/components/Grid.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.ui

#include "Grid.h"

namespace jag::ui {
    // 0x100696e10
    void Grid::MainDraw(const ComponentDependencies& componentDependencies, int arg2, int arg3, float arg4) {
        uint64_t extraout_var;
        uint64_t extraout_var_00;
        uint64_t extraout_var_01;
        uint64_t extraout_var_02;

        uint64_t uVar5 = GetStreamCountLastMix();
        uint64_t uVar6 = GetMinMapX();
        uint8_t uVar2 = GetScrollXPos();
        int iVar7 = arg2 - (int)(((uint64_t)extraout_var << 8) | (uint8_t)uVar2);
        uVar2 = GetScrollYPos();
        int iVar8 = arg3 - (int)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar2);
        uVar2 = GetStaticChildrenWithOptionalRenderOrder();
        if (!(((vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)(((uint64_t)extraout_var_01
                                                                                        << 8) |
                                                                                       (uint8_t)uVar2))
                  ->empty())) {
            (**(void (**)(...))(**(long**)(componentDependencies + 48) + 8))(
                arg4, *(long**)(componentDependencies + 48),
                (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)(((uint64_t)extraout_var_01
                                                                                         << 8) |
                                                                                        (uint8_t)uVar2),
                iVar7, iVar8, arg2, arg3, uVar5, uVar6);
        }
        uVar2 = GetDynamicChildrenWithOptionalRenderOrder();
        if (!(((vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)(((uint64_t)extraout_var_02
                                                                                        << 8) |
                                                                                       (uint8_t)uVar2))
                  ->empty())) {
            (**(void (**)(...))(**(long**)(componentDependencies + 48) + 8))(
                arg4, *(long**)(componentDependencies + 48),
                (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)(((uint64_t)extraout_var_02
                                                                                         << 8) |
                                                                                        (uint8_t)uVar2),
                iVar7, iVar8, arg2, arg3, uVar5, uVar6);
        }
        uint64_t* puVar1 = *(uint64_t**)(componentDependencies + 48);
        uint32_t uVar4 = GetCombinedID();
        (**(void (**)(...))*puVar1)(arg4, puVar1, uVar4, iVar7, iVar8, arg2, arg3, uVar5, uVar6);
    }

    // 0x100696f40
    void Grid::SetGridParams(bool arg1, int arg2, int arg3) {
        if (arg2 < 1) {
            LogAssert("cellDataX > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Grid.cpp",
                      51, nullptr);
        }
        if (arg3 < 1) {
            LogAssert("cellDataY > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Grid.cpp",
                      52, nullptr);
        }
        if (((field_580 != arg1) || (field_572 != arg2)) || (field_576 != arg3)) {
            field_580 = arg1;
            field_572 = arg2;
            field_576 = arg3;
            FlagLayoutDirty();
        }
    }

    // 0x100696ff0
    void Grid::DecodeTypedComponentProperties(PacketT<Array<unsigned char>>& arg1, int arg2) {
        unsigned short uVar3 = arg1.g2();
        field_432 = (unsigned int)uVar3;
        uVar3 = arg1.g2();
        field_436 = (unsigned int)uVar3;
        uint8_t bVar1 = arg1.g1();
        field_568 = (unsigned int)bVar1;
        uVar3 = arg1.g2();
        field_572 = (unsigned int)uVar3;
        uVar3 = arg1.g2();
        field_576 = (unsigned int)uVar3;
        field_580 = arg1.g1() == '\x01';
    }

    // 0x100697070
    uint64_t Grid::UpdateLayout(bool arg1) {
        uint8_t uVar2;
        uint8_t uVar3;
        int arg1_00;
        int arg1_01;
        int iVar4;
        unsigned int arg3;
        Logger* this_00;
        uint64_t extraout_var;
        uint64_t extraout_var_00;
        uint64_t extraout_var_01;
        uint64_t extraout_var_02;
        uint64_t uVar5;
        uint64_t in_register_00000031;
        unsigned int arg8;
        char* pcVar6;
        unsigned int uVar7;
        unsigned int local_58;
        unsigned int local_48;
        int local_3c[3];

        if (((int)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg1) == 0) && (m_layoutDirty == '\0')) {
            uVar5 = 0;
        } else {
            if (field_440.empty()) {
                if (field_504.empty()) {
                    return 1;
                }
            }
            if (((int)field_572 < 1) || ((int)field_576 < 1)) {
                this_00 = logger::default_logger();
                pcVar6 = "cell size";
                if (field_580 == false) {
                    pcVar6 = "cells";
                }
                this_00->Log(
                    false, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Grid.cpp", 89,
                    "Attempting to generate layout for an invalid grid (%dx%d %s) - reverting to a single cell grid",
                    (unsigned long)field_572, (unsigned long)field_576, pcVar6);
                field_572 = 1;
                field_576 = 1;
            }
            arg1_00 = GetStreamCountLastMix();
            arg1_01 = GetMinMapX();
            uVar2 = GetScrollWidth();
            uVar3 = GetScrollHeight();
            iVar4 = (int)(((uint64_t)extraout_var << 8) | (uint8_t)uVar2);
            if (iVar4 != 0) {
                arg1_00 = iVar4;
            }
            iVar4 = (int)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar3);
            if (iVar4 != 0) {
                arg1_01 = iVar4;
            }
            if (field_580 == false) {
                uVar7 = field_568;
                local_3c[2] = field_572;
                local_48 = (anonymous namespace)::GetGridCellSize(arg1_00, uVar7, local_3c[2]);
                arg3 = field_576;
                local_58 = (anonymous namespace)::GetGridCellSize(arg1_01, uVar7, arg3);
            } else {
                uVar7 = field_568;
                local_48 = field_572;
                local_58 = field_576;
                local_3c[2] = (anonymous namespace)::GetGridCellCount(arg1_00, uVar7, local_48);
                arg3 = (anonymous namespace)::GetGridCellCount(arg1_01, uVar7, local_58);
            }
            uVar7 = field_568;
            arg8 = (arg1_00 + uVar7) - (local_48 + uVar7) * local_3c[2] >> 1;
            uVar7 = (arg1_01 + uVar7) - (uVar7 + local_58) * arg3 >> 1;
            local_3c[0] = 0;
            local_3c[1] = 0;
            uVar2 = GetStaticChildrenWithOptionalRenderOrder();
            UpdateComponentListLayout(
                *((vector<ComponentContainer>*)(((uint64_t)extraout_var_01 << 8) | (uint8_t)uVar2)), *local_3c,
                *(local_3c + 1), local_3c[2], arg3, local_48, local_58, arg8, uVar7);
            uVar2 = GetDynamicChildrenWithOptionalRenderOrder();
            UpdateComponentListLayout(
                *((vector<ComponentContainer>*)(((uint64_t)extraout_var_02 << 8) | (uint8_t)uVar2)), *local_3c,
                *(local_3c + 1), local_3c[2], arg3, local_48, local_58, arg8, uVar7);
            m_layoutDirty = 0;
            uVar5 = 1;
        }
        return uVar5;
    }

    // 0x100697310
    void Grid::UpdateComponentListLayout(const eastl::vector<ComponentContainer>& componentContainers, int& arg2,
                                         int& arg3, int arg4, int arg5, int arg6, int arg7, int arg8, int arg9) {
        int iVar1;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;
        Component* this_02;
        uint64_t uVar3;
        float extraout_XMM0_Da;
        float extraout_XMM0_Da_00;
        float extraout_XMM0_Db;
        float extraout_XMM0_Db_00;

        auto this_00 = componentContainers.HeapBeginPtr();
        auto pcVar2 = componentContainers.end();
        if (this_00 != pcVar2) {
            do {
                this_01 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_00->second();
                this_02 = (Component*)this_01->end();
                if (this_02 != nullptr) {
                    if (arg3 == arg5) {
                        this_02->SetCurrentX(0);
                        this_02->SetCurrentY(0);
                        this_02->SetCurrentWidth(100);
                        this_02->SetBottomLine(100);
                    } else {
                        uVar3 = this_02->CalculateSize();
                        this_02->SetCurrentWidth((int)(extraout_XMM0_Da * (float)arg6) + (int)uVar3);
                        this_02->SetBottomLine((int)(extraout_XMM0_Db * (float)arg7) +
                                               (int)((unsigned long)uVar3 >> 32));
                        this_02->ApplyAspectRatioSize();
                        uVar3 = this_02->CalculatePosition();
                        this_02->SetCurrentX((field_568 + arg6) * arg2 + arg8 + (int)uVar3 +
                                             (int)(extraout_XMM0_Da_00 * (float)arg6));
                        this_02->SetCurrentY((int)((unsigned long)uVar3 >> 32) + arg9 +
                                             (int)(extraout_XMM0_Db_00 * (float)arg7) + (field_568 + arg7) * arg3);
                        iVar1 = arg2;
                        arg2 = iVar1 + 1;
                        if (iVar1 + 1 == arg4) {
                            arg2 = 0;
                            arg3 = arg3 + 1;
                        }
                    }
                }
                this_00 = this_00 + 24;
            } while (this_00 != pcVar2);
        }
    }

    // 0x1006974e0
    unsigned long Grid::GetCellWidth() const {
        uint8_t uVar1;
        ShaderVariablePrecision shaderVariablePrecision1;
        int arg1;
        uint64_t extraout_var;
        unsigned long uVar2;

        if (field_580 == false) {
            shaderVariablePrecision1 = GetStreamCountLastMix();
            uVar1 = GetScrollWidth();
            arg1 = eastl::max<int>(shaderVariablePrecision1,
                                   (ShaderVariablePrecision)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1));
            uVar2 = (anonymous namespace)::GetGridCellSize(arg1, field_568, field_572);
        } else {
            uVar2 = (unsigned long)field_572;
        }
        return uVar2;
    }

    // 0x100697540
    unsigned long Grid::GetCellHeight() const {
        uint8_t uVar1;
        ShaderVariablePrecision shaderVariablePrecision1;
        int arg1;
        uint64_t extraout_var;
        unsigned long uVar2;

        if (field_580 == false) {
            shaderVariablePrecision1 = GetMinMapX();
            uVar1 = GetScrollHeight();
            arg1 = eastl::max<int>(shaderVariablePrecision1,
                                   (ShaderVariablePrecision)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1));
            uVar2 = (anonymous namespace)::GetGridCellSize(arg1, field_568, field_576);
        } else {
            uVar2 = (unsigned long)field_576;
        }
        return uVar2;
    }

    // 0x1006975a0
    unsigned long Grid::GetNumRows() const {
        uint8_t uVar1;
        ShaderVariablePrecision shaderVariablePrecision1;
        int arg1;
        uint64_t extraout_var;
        unsigned long uVar2;

        if (field_580 == false) {
            uVar2 = (unsigned long)field_576;
        } else {
            shaderVariablePrecision1 = GetMinMapX();
            uVar1 = GetScrollHeight();
            arg1 = eastl::max<int>(shaderVariablePrecision1,
                                   (ShaderVariablePrecision)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1));
            uVar2 = (anonymous namespace)::GetGridCellCount(arg1, field_568, field_576);
        }
        return uVar2;
    }

    // 0x100697600
    unsigned long Grid::GetNumColumns() const {
        uint8_t uVar1;
        ShaderVariablePrecision shaderVariablePrecision1;
        int arg1;
        uint64_t extraout_var;
        unsigned long uVar2;

        if (field_580 == false) {
            uVar2 = (unsigned long)field_572;
        } else {
            shaderVariablePrecision1 = GetStreamCountLastMix();
            uVar1 = GetScrollWidth();
            arg1 = eastl::max<int>(shaderVariablePrecision1,
                                   (ShaderVariablePrecision)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1));
            uVar2 = (anonymous namespace)::GetGridCellCount(arg1, field_568, field_572);
        }
        return uVar2;
    }

    // 0x100697680
    SeparatedIndexCount Grid::GetSizeEstimate(unsigned short arg1, unsigned short arg2, unsigned char arg3,
                                              unsigned char arg4, unsigned char arg5) {
        uint64_t in_RAX;
        uint64_t in_register_00000009;
        uint64_t in_register_00000011;
        uint64_t in_register_00000032;
        uint64_t in_register_0000003a;

        return local_34 = (uint32_t)((unsigned long)in_RAX >> 32);
        unsigned long uVar5 = (((uint64_t)in_register_00000009 << 8) | (uint8_t)arg4) & 4294967295;
        unsigned long uVar3 = (((uint64_t)in_register_00000011 << 8) | (uint8_t)arg3) & 4294967295;
        unsigned long uVar4 = (((uint64_t)in_register_00000032 << 16) | (uint16_t)arg2) & 4294967295;
        int iVar2 = (int)(((uint64_t)in_register_0000003a << 16) | (uint16_t)arg1);
        if ((((iVar2 == 0) || ((short)uVar4 == 0)) || ((char)uVar3 == '\0')) || ((char)uVar5 == '\0')) {
            (logger::default_logger())
                ->Log(
                    false, 3,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Grid.cpp", 259,
                    "Attempting to estimate size using invalid params (size=(%u,%u) | count=(%u,%u) | spacing=%u)",
                    (((uint64_t)in_register_0000003a << 16) | (uint16_t)arg1) & 4294967295, uVar4, uVar3, uVar5, arg5);
            local_34 = callstack::Callstack();
        } else {
            local_34 = oldscape::dash3d::AnimateBaseOperation::SeparatedIndexCount(
                (iVar2 + (unsigned int)arg5) * (int)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg3) +
                        (unsigned int)arg5 &
                    65535,
                ((int)(((uint64_t)in_register_00000032 << 16) | (uint16_t)arg2) + (unsigned int)arg5) *
                            (int)(((uint64_t)in_register_00000009 << 8) | (uint8_t)arg4) +
                        (unsigned int)arg5 &
                    65535);
        }
        return local_34;
    }

    // 0x100697740
    void Grid::GetCellEstimate(unsigned short arg1, unsigned short arg2, unsigned short arg3, unsigned short arg4,
                               unsigned char arg5) {
        unsigned char arg1_00;
        unsigned char arg2_00;
        uint64_t in_register_0000000a;
        uint64_t in_register_00000012;
        uint64_t in_register_00000032;
        uint64_t in_register_0000003a;
        uint16_t local_32;

        unsigned long uVar1 = (((uint64_t)in_register_00000012 << 16) | (uint16_t)arg3) & 4294967295;
        unsigned long uVar2 = (((uint64_t)in_register_00000032 << 16) | (uint16_t)arg2) & 4294967295;
        int arg1_01 = (int)(((uint64_t)in_register_0000003a << 16) | (uint16_t)arg1);
        if ((((arg1_01 == 0) || ((short)uVar2 == 0)) || ((short)uVar1 == 0)) || (arg4 == 0)) {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Grid.cpp",
                      272,
                      "Attempting to estimate cells using invalid params (grid size=(%u,%u) | cell size=(%u,%u) | "
                      "spacing=%u)",
                      (((uint64_t)in_register_0000003a << 16) | (uint16_t)arg1) & 4294967295, uVar2, uVar1,
                      (((uint64_t)in_register_0000000a << 16) | (uint16_t)arg4), arg5);
            local_32 = math::Vector2T();
        } else {
            arg1_00 = (anonymous namespace)::GetGridCellCount(
                arg1_01, (unsigned int)arg5, (int)(((uint64_t)in_register_00000012 << 16) | (uint16_t)arg3));
            arg2_00 = (anonymous namespace)::GetGridCellCount(
                (int)(((uint64_t)in_register_00000032 << 16) | (uint16_t)arg2), (unsigned int)arg5,
                (int)(((uint64_t)in_register_0000000a << 16) | (uint16_t)arg4));
            local_32 = math::Vector2T(arg1_00, arg2_00);
        }
        return local_32;
    }

    // 0x100697810
    void Grid::LoadStyleSheetVisuals(const StyleSheet& styleSheet) {
        unsigned int* puVar2;
        optional<int> local_20;

        StyleSheet::GetPropertyValue<int>(&local_20, (StyleEntryID)styleSheet, true);
        if (local_20.IsActive() != '\0') {
            puVar2 = (unsigned int*)local_20.value();
            field_568 = *puVar2;
            m_layoutDirty = 1;
        }
    }

} // namespace jag::ui

namespace jag::ui {
    namespace {
        // 0x1006972d0
        int GetGridCellCount(int arg1, int arg2, int arg3) {
            float fVar1 = (float)::floor((float)(arg1 - arg2) / (float)(arg3 + arg2) + 0.001);
            return (int)fVar1;
        }

        // 0x100697300
        int GetGridCellSize(int arg1, int arg2, int arg3) {
            return arg1 / arg3 - arg2;
        }

    } // namespace

} // namespace jag::ui
