// libs/graphics/runetek7/gui/debug/Graph.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.graphics

namespace jag {
    class FlameGraph {
    public:
        void DrawEntry(graphics::GUIManager& guiManager, int arg2, int arg3, int arg4, unsigned int arg5,
                       const char* str, unsigned int arg7, unsigned int arg8);
        StringView SkipTopLevelNamespaces(const char* str);

    private:
        int field_0;
        int field_4;
        unsigned int field_8;
        unsigned int field_12;
        FontHelpers* field_16;
        shared_ptr field_24;
    };

    class Graph {
    public:
        Graph(unsigned long arg1);
        unsigned long RecordValue(int arg1);
        void ClearValues();
        void Draw(graphics::GUIManager& guiManager, int arg2, int arg3, int arg4, int arg5, unsigned int arg6);

    private:
        uint8_t field_0;
        uint8_t _unknown_1[39];
        uint8_t field_40;
        uint8_t _unknown_41[3];
        uint64_t field_44;
        int field_52;
        uint8_t _unknown_56[4];
    };

    // 0x1008faf70
    Graph::Graph(unsigned long arg1) : field_0(0), field_40(0), field_44(0) {
        *(uint64_t*)&field_52 = 18446744069414584320;
        field_8.resize(arg1);
    }

    // 0x1008fafe0
    unsigned long Graph::RecordValue(int arg1) {
        int* piVar2 = &field_8[(long)field_52];
        *piVar2 = arg1;
        int iVar3 = field_52 + 1;
        int iVar1 = field_8.size();
        field_52 = iVar3 % iVar1;
        return (long)iVar3 / (long)iVar1 & 4294967295;
    }

    // 0x1008fb030
    void Graph::ClearValues() {
        uint64_t uVar1 = field_8.HeapBeginPtr();
        long lVar2 = field_8.size();
        ___bzero(uVar1, lVar2 * 4);
    }

    // 0x1008fb070
    void Graph::Draw(graphics::GUIManager& guiManager, int arg2, int arg3, int arg4, int arg5, unsigned int arg6) {
        ProjectionMode* pPVar1;
        EnumOptionToggle enumOptionToggle2;
        int iVar2;
        EnumOptionToggle enumOptionToggle1;
        ShaderVariablePrecision shaderVariablePrecision1;
        int iVar3;
        EnumOptionToggle* pEVar4;
        ShaderVariablePrecision* pSVar5;
        EnumOptionToggle* pEVar6;
        int* piVar8;
        int arg3_00;
        uint32_t in_register_0000000c;
        uint32_t in_register_00000034;
        uint32_t in_register_00000084;
        int iVar12;
        int iVar13;
        unsigned int in_stack_00000008;
        Callstack local_50;

        uint64_t local_68 = (((uint64_t)in_register_00000084 << 32) | (uint32_t)arg5);
        GUIManager* local_78 = (GUIManager*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg2);
        uint64_t local_70 = (((uint64_t)in_register_0000000c << 32) | (uint32_t)arg4);
        local_50._8_8_ = (uint64_t)arg6;
        local_78->AddColouredRectangle(arg3, arg4, arg5, arg6, in_stack_00000008, 1);
        unsigned int uVar9 = *(int*)&guiManager.field_52 - 1;
        GUIManager* local_40 = guiManager;
        if (*(int*)&guiManager.field_52 < 1) {
            iVar2 = guiManager.m_projectionMode.size();
            uVar9 = uVar9 + iVar2;
        }
        unsigned long local_60 = (unsigned long)uVar9;
        unsigned long local_58 = (unsigned long)(unsigned int)arg3;
        if (local_40->field_40 == '\0') {
            pPVar1 = &local_40->m_projectionMode;
            pEVar4 = (EnumOptionToggle*)(*pPVar1)[0];
            enumOptionToggle1 = *pEVar4;
            pSVar5 = (ShaderVariablePrecision*)(*pPVar1)[0];
            shaderVariablePrecision1 = *pSVar5;
            pEVar4 = (EnumOptionToggle*)pPVar1->HeapBeginPtr();
            pEVar6 = (EnumOptionToggle*)pPVar1->end();
            for (; pEVar4 != pEVar6; pEVar4 = pEVar4 + 1) {
                enumOptionToggle2 = *pEVar4;
                enumOptionToggle1 = eastl::min<graphics::GraphicsQuality>(enumOptionToggle1, enumOptionToggle2);
                shaderVariablePrecision1 = eastl::max<int>(shaderVariablePrecision1, enumOptionToggle2);
            }
        } else {
            enumOptionToggle1 = *(EnumOptionToggle*)&local_40->field_44;
            shaderVariablePrecision1 = *(ShaderVariablePrecision*)&local_40->field_48;
        }
        float local_34 = (float)(int)local_68;
        pPVar1 = &local_40->m_projectionMode;
        unsigned long uVar7 = pPVar1->size();
        unsigned long uVar10 = local_58;
        float fVar14 = local_34 / (float)uVar7;
        local_34 = (float)((int)local_68 + (int)local_58);
        iVar2 = math::RoundFloatToInt(fVar14);
        float local_84 = (float)(int)(shaderVariablePrecision1 - enumOptionToggle1);
        float local_80 = (float)local_50._8_4_;
        int local_7c = (int)local_70 + local_50._8_4_;
        int iVar11 = 0;
        uVar7 = local_60;
        do {
            local_60 = uVar7;
            piVar8 = (int*)(*pPVar1)[(long)(int)uVar7];
            local_50.m_stackFrames = (int)((float)*piVar8 / local_84);
            fVar14 = math::Clamp<float>(local_50, 0.0, 1.0);
            iVar3 = math::RoundFloatToInt(fVar14 * local_80);
            iVar12 = (int)local_34 - iVar2;
            local_34 = (float)uVar10;
            iVar13 = iVar12 - (int)local_34;
            if (iVar12 < (int)local_34) {
            } else {
                iVar13 = 0;
                local_34 = (float)iVar12;
            }
            iVar2 = iVar13 + iVar2;
            local_50 = callstack::Callstack();
            iVar13 = local_50._8_4_;
            if (*(char*)&local_40->field_0 == '\0') {
                arg3_00 = 0;
            } else {
                arg3_00 = iVar13;
                iVar13 = 0;
            }
            local_50 = math::ColourStorage8888<math::RGBA8StorageLayout>::SetRedGreenGradient(iVar3, iVar13, arg3_00);
            uVar9 = local_50.GetX();
            local_78->AddColouredRectangle((int)local_34, local_7c, iVar2, -iVar3,
                                           uVar9 & 4294967040 | in_stack_00000008, 1);
            if (iVar11 == *(int*)&local_40->field_56) {
                local_78->AddColouredRectangle((int)local_34, (int)local_70, iVar2, local_50._8_4_, 4294967125, 1);
            }
            uVar9 = (int)local_60 - 1;
            if ((int)local_60 < 1) {
                iVar3 = pPVar1->size();
                uVar9 = uVar9 + iVar3;
            }
            uVar7 = (unsigned long)uVar9;
            iVar11 = iVar11 + 1;
        } while ((uVar9 != *(unsigned int*)&local_40->field_52) && (uVar10 = local_58, (int)local_58 < iVar12));
        if (iVar11 < *(int*)&local_40->field_56) {
            local_78->AddColouredRectangle((int)local_58, (int)local_70, (int)local_68, local_50._8_4_, 4278190114, 1);
        }
    }

    // 0x1008fb450
    void FlameGraph::DrawEntry(graphics::GUIManager& guiManager, int arg2, int arg3, int arg4, unsigned int arg5,
                               const char* str, unsigned int arg7, unsigned int arg8) {
        uint8_t* this_00;
        FontHelpers* this_01;
        Layout* this_02;
        shared_ptr<graphics::FontMetrics>* this_03;
        FontMetrics* fontMetrics;
        int* piVar3;
        unsigned int uVar4;
        TextProperties local_b0;
        StringView local_88;
        StringView local_78;
        StringView local_68;
        int local_4c;
        uint32_t local_48;
        int local_44;
        int local_40;
        TextFlags local_38;

        if (0 < field_0) {
            guiManager.AddColouredRectangle(arg2, arg3, arg4, field_4, arg5 | 4294967040, 1);
        }
        int iVar1 = field_0;
        if (arg8 < 2) {
            uVar4 = arg5 | arg7;
        } else {
            uVar4 = field_12;
        }
        guiManager.AddColouredRectangle(iVar1 + arg2, iVar1 + arg3, arg4 + iVar1 * -2, field_4 + iVar1 * -2, uVar4, 1);
        if (field_16 != nullptr) {
            this_00 = field_24;
            if (((this_00->operator_cast_to_bool() != '\0') && (str != nullptr)) && (50 < arg4)) {
                SkipTopLevelNamespaces((char*)&local_68);
                local_88 = StringView(local_68);
                this_02 = (Layout*)(*this_00).operator->();
                this_03 = (shared_ptr<graphics::FontMetrics>*)this_02->SSOBeginPtr();
                fontMetrics = (FontMetrics*)**this_03;
                local_4c = graphics::FontHelpers::GetStringWidth(&local_88, *fontMetrics, true);
                if (arg8 < 2) {
                    iVar1 = field_0;
                    local_44 = iVar1 + arg2;
                    local_40 = iVar1 + arg3;
                    piVar3 = std::min<int>(arg4, local_4c);
                    guiManager.AddColouredRectangle(local_44, local_40, *piVar3, field_4 + iVar1 * -2, 102, 1);
                }
                local_48 = 1;
                local_38 = graphics::TextFlags(&local_48);
                local_b0 = graphics::TextProperties(*this_00, local_38[0]);
                local_b0.SetAlignment(0, 1);
                uVar4 = 4294967295;
                if (1 < arg8) {
                    uVar4 = field_8;
                }
                local_b0.SetColour(uVar4);
                this_01 = field_16;
                local_78 = StringView(local_68);
                this_01->DrawStringMultiline(&local_78, arg2 + field_0, arg3 + field_0, arg4, field_4, nullptr,
                                             local_b0);
            }
        }
    }

    // 0x1008fb670
    StringView FlameGraph::SkipTopLevelNamespaces(const char* str) {
        char* pcVar1;
        Particle* extraout_RDX;
        char* in_RSI;
        StringView SVar3;

        char* pcVar2 = in_RSI;
        char* str_00 = in_RSI;
        do {
            pcVar1 = pcVar2;
            if (*in_RSI == ':') {
                if (in_RSI[1] == ':') {
                    pcVar1 = in_RSI + 2;
                    in_RSI = in_RSI + 1;
                    str_00 = pcVar2;
                }
            } else if (*in_RSI == '\0') {
                new (str) StringView(str_00, (long)in_RSI - (long)str_00);
                SVar3.field_8 = extraout_RDX;
                SVar3.field_0 = (unsigned long)str;
                return SVar3;
            }
            in_RSI = in_RSI + 1;
            pcVar2 = pcVar1;
        } while (true);
    }

} // namespace jag

namespace jag::math {
    // 0x1008fb390
    auto ColourStorage8888<RGBA8StorageLayout>::SetRedGreenGradient(int arg1, int arg2, int arg3) {
        auto result;
        uint8_t uVar1;
        EnumOptionToggle enumOptionToggle2;

        int iVar2 = arg3 - arg2;
        if (iVar2 == 0 || arg3 < arg2) {
            if (arg2 != 0 || arg3 != 0) {
                SetRedGreenGradient(&result, (arg2 - arg1) + arg3, arg3, arg2);
            }
        } else {
            if (arg1 - arg3 == 0 || arg1 < arg3) {
                iVar2 = eastl::max<int>(0, ((arg1 - arg2) * 255) / iVar2);
                if (iVar2 < 128) {
                    result.field_3 = 255;
                    result.field_2 = (char)iVar2 * '\x02';
                } else {
                    result.field_3 = (char)iVar2 * '\x02' ^ 254;
                    result.field_2 = 255;
                }
                uVar1 = 64;
            } else {
                enumOptionToggle2 = ((arg1 - arg3) * 255) / iVar2;
                uVar1 = eastl::min<graphics::GraphicsQuality>(128, enumOptionToggle2);
                result.field_3 = uVar1;
                uVar1 = eastl::max<int>(128, enumOptionToggle2 * -2 + 255);
                result.field_2 = uVar1;
                uVar1 = eastl::min<graphics::GraphicsQuality>(255, enumOptionToggle2 * 3 + 64);
            }
            result.field_1 = uVar1;
            result = 255;
        }
        return result;
    }

} // namespace jag::math
