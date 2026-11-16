// libs/graphics/runetek7/gui/debug/Graph.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.graphics

namespace jag {
    class FlameGraph {
    public:
        void DrawEntry(graphics::GUIManager&, int, int, int, unsigned int, char const*, unsigned int, unsigned int);
        FlameGraph* SkipTopLevelNamespaces(char const*);

        // data members, from how the methods use this: 40 bytes
        int field_0;           // offset 0
        int field_4;           // offset 4
        uint field_8;          // offset 8
        uint field_12;         // offset 12
        FontHelpers* field_16; // offset 16
        shared_ptr field_24;   // offset 24
    };

    class Graph {
    public:
        Graph(unsigned long);
        ulong RecordValue(int);
        void ClearValues();
        void Draw(graphics::GUIManager&, int, int, int, int, unsigned int);

        // data members, from how the methods use this: 60 bytes
        undefined1 field_0; // offset 0
        char _unknown_1[7];
        undefined1 field_8; // offset 8
        char _unknown_9[31];
        undefined1 field_40; // offset 40
        char _unknown_41[3];
        int field_44; // offset 44
        int field_48; // offset 48
        int field_52; // offset 52
        char _unknown_56[4];
    };

    // 0x1008faf70, 96 bytes, base-object constructor, placed by class name
    // Graph::Graph(unsigned long)
    void Graph::Graph(ulong param_1) {
        field_0 = 0;
        new (&field_8) eastl::vector<int, eastl::allocator>();
        field_40 = 0;
        field_44 = 0;
        field_48 = 0;
        *(undefined8*)&field_52 = 18446744069414584320;
        eastl::vector<int, eastl::allocator>::resize((ulong)&field_8);
    }

    // 0x1008fafd0, 16 bytes, complete-object constructor, placed by class name
    // Graph::Graph(unsigned long): jumps straight to the base-object constructor

    // 0x1008fafe0, 80 bytes, placed by class name
    // Graph::RecordValue(int)
    ulong Graph::RecordValue(int param_1) {
        int iVar1;
        int* piVar2;
        int iVar3;

        piVar2 = (int*)eastl::vector<int, eastl::allocator>::operator[]((vector<int, eastl::allocator>*)&field_8,
                                                                        (long)field_52);
        *piVar2 = param_1;
        iVar3 = field_52 + 1;
        iVar1 = (&field_8)->size();
        field_52 = iVar3 % iVar1;
        return (long)iVar3 / (long)iVar1 & 4294967295;
    }

    // 0x1008fb030, 64 bytes, placed by class name
    // Graph::ClearValues()
    void Graph::ClearValues() {
        undefined8 uVar1;
        long lVar2;

        uVar1 = (&field_8)->HeapBeginPtr();
        lVar2 = (&field_8)->size();
        ___bzero(uVar1, lVar2 * 4);
    }

    // 0x1008fb070, 800 bytes, placed by class name
    // Graph::Draw(graphics::GUIManager&, int, int, int, int, unsigned int)
    void Graph::Draw(GUIManager* param_1, int param_2, int param_3, int param_4, int param_5, uint param_6) {
        undefined1* puVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int* piVar5;
        ulong uVar6;
        int* piVar7;
        int iVar8;
        undefined4 in_register_0000000c;
        uint uVar9;
        ulong uVar10;
        undefined4 in_register_00000084;
        int iVar11;
        int iVar12;
        float fVar13;
        float local_8c;
        float local_88;
        float local_84;
        float local_80;
        int local_7c;
        undefined8 local_70;
        undefined8 local_68;
        ulong local_60;
        ulong local_58;
        Callstack local_50;
        Graph* local_40;
        float local_34;

        local_68 = CONCAT44(in_register_00000084, param_4);
        local_70 = CONCAT44(in_register_0000000c, param_3);
        local_50._8_8_ = ZEXT48((uint)param_5);
        param_1->AddColouredRectangle(param_2, param_3, param_4, local_50._8_8_, param_6, 1);
        uVar9 = field_52 - 1;
        local_40 = this;
        if (field_52 < 1) {
            iVar2 = (&field_8)->size();
            uVar9 = uVar9 + iVar2;
        }
        local_60 = (ulong)uVar9;
        local_58 = (ulong)(uint)param_2;
        if (local_40->field_40 == '\0') {
            puVar1 = &local_40->field_8;
            piVar7 = (int*)eastl::vector<int, eastl::allocator>::operator[]((vector<int, eastl::allocator>*)puVar1, 0);
            iVar2 = *piVar7;
            piVar7 = (int*)eastl::vector<int, eastl::allocator>::operator[]((vector<int, eastl::allocator>*)puVar1, 0);
            iVar4 = *piVar7;
            piVar7 = (int*)puVar1->HeapBeginPtr();
            piVar5 = (int*)puVar1->end();
            for (; piVar7 != piVar5; piVar7 = piVar7 + 1) {
                iVar3 = *piVar7;
                iVar2 = eastl::min<graphics::GraphicsQuality>(iVar2, iVar3);
                iVar4 = eastl::max<int>(iVar4, iVar3);
            }
        } else {
            iVar2 = local_40->field_44;
            iVar4 = local_40->field_48;
        }
        local_34 = (float)(int)local_68;
        puVar1 = &local_40->field_8;
        uVar6 = puVar1->size();
        uVar10 = local_58;
        fVar13 = local_34 / (float)uVar6;
        local_34 = (float)((int)local_68 + (int)local_58);
        iVar3 = math::RoundFloatToInt(fVar13);
        local_84 = (float)(iVar4 - iVar2);
        local_80 = (float)local_50._8_4_;
        local_7c = (int)local_70 + local_50._8_4_;
        iVar2 = 0;
        uVar6 = local_60;
        do {
            local_60 = uVar6;
            piVar7 = (int*)eastl::vector<int, eastl::allocator>::operator[]((vector<int, eastl::allocator>*)puVar1,
                                                                            (long)(int)uVar6);
            local_50.m_stackFrames = (int)((float)*piVar7 / local_84);
            local_8c = 0.0;
            local_88 = 1.0;
            fVar13 = math::Clamp<float>((float*)&local_50, &local_8c, &local_88);
            iVar4 = math::RoundFloatToInt(fVar13 * local_80);
            iVar11 = (int)local_34 - iVar3;
            local_34 = (float)uVar10;
            iVar12 = iVar11 - (int)local_34;
            if (iVar11 < (int)local_34) {
            } else {
                iVar12 = 0;
                local_34 = (float)iVar11;
            }
            iVar3 = iVar12 + iVar3;
            new (&local_50) callstack::Callstack();
            iVar12 = local_50._8_4_;
            if (local_40->field_0 == '\0') {
                iVar8 = 0;
            } else {
                iVar8 = iVar12;
                iVar12 = 0;
            }
            local_50.SetRedGreenGradient(iVar4, iVar12, iVar8);
            uVar9 = local_50.GetX();
            param_1->AddColouredRectangle(local_34, local_7c, iVar3, -iVar4, uVar9 & 4294967040 | param_6, 1);
            if (iVar2 == *(int*)&local_40->field_56) {
                param_1->AddColouredRectangle(local_34, local_70, iVar3, local_50._8_8_, 4294967125, 1);
            }
            uVar9 = (int)local_60 - 1;
            if ((int)local_60 < 1) {
                iVar4 = puVar1->size();
                uVar9 = uVar9 + iVar4;
            }
            uVar6 = (ulong)uVar9;
            iVar2 = iVar2 + 1;
        } while ((uVar9 != local_40->field_52) && (uVar10 = local_58, (int)local_58 < iVar11));
        if (iVar2 < *(int*)&local_40->field_56) {
            param_1->AddColouredRectangle(local_58 & 4294967295, local_70, local_68, local_50._8_8_, 4278190114, 1);
        }
    }

    // 0x1008fb450, 544 bytes, placed by debug map only (low confidence)
    // FlameGraph::DrawEntry(graphics::GUIManager&, int, int, int, unsigned int, char const*, unsigned int, unsigned int)
    void FlameGraph::DrawEntry(GUIManager* param_1, int param_2, int param_3, int param_4, uint param_5, char* param_6,
                               uint param_7, uint param_8) {
        undefined1* this_00;
        int iVar1;
        FontHelpers* this_01;
        Layout* this_02;
        vector* this_03;
        uchar* puVar3;
        int* piVar4;
        undefined1 uVar5;
        ulong uVar6;
        uint uVar8;
        StringView SVar9;
        StringView SVar10;
        TextFlags TVar11;
        TextProperties* in_stack_ffffffffffffff48;
        TextProperties local_b0;
        StringView local_88;
        StringView local_78;
        FlameGraph local_68;
        int local_40;
        int local_3c;
        TextFlags local_38[8];

        local_68.field_16 = (FontHelpers*)param_1;
        local_3c = param_4;
        if (0 < field_0) {
            param_1->AddColouredRectangle(param_2, param_3, param_4, field_4, param_5 | 4294967040, 1);
        }
        iVar1 = field_0;
        uVar6 = (ulong)(uint)(local_3c + iVar1 * -2);
        if (param_8 < 2) {
            uVar8 = param_5 | param_7;
        } else {
            uVar8 = field_12;
        }
        TVar11 = (TextFlags)1;
        local_68.field_16->AddColouredRectangle(iVar1 + param_2, iVar1 + param_3, uVar6, field_4 + iVar1 * -2, uVar8);
        uVar5 = (undefined1)uVar6;
        if (field_16 != (FontHelpers*)0) {
            this_00 = field_24;
            if (((this_00->operator_cast_to_bool()) && (param_6 != (char*)0)) && (50 < local_3c)) {
                SkipTopLevelNamespaces(&local_68, param_6);
                new (&local_88) StringView((StringView*)&local_68);
                this_02 = (Layout*)shared_ptr<graphics::Font>::operator->((shared_ptr<graphics::Font>*)this_00);
                this_03 = eastl::string::Layout::SSOBeginPtr(this_02, (type*)&local_68);
                puVar3 =
                    (uchar*)shared_ptr<graphics::FontMetrics>::operator*((shared_ptr<graphics::FontMetrics>*)this_03);
                SVar10.field_8 = puVar3;
                SVar10.field_0 = (ulong)&local_88;
                local_68.field_24._4_4_ =
                    graphics::FontHelpers::GetStringWidth(SVar10, (FontMetrics*)&DAT_00000001, (bool)uVar5);
                if (param_8 < 2) {
                    iVar1 = field_0;
                    local_68.field_24._12_4_ = iVar1 + param_2;
                    local_40 = iVar1 + param_3;
                    piVar4 = std::min<int>(&local_3c, (int*)(local_68.field_24 + 4));
                    TVar11 = (TextFlags)1;
                    local_68.field_16->AddColouredRectangle(local_68.field_24._12_4_, local_40, *piVar4,
                                                            field_4 + iVar1 * -2, 102);
                }
                local_68.field_24._8_4_ = 1;
                graphics::TextFlags::TextFlags(local_38, local_68.field_24 + 8, 1);
                new (&local_b0) graphics::TextProperties(this_00, TVar11);
                local_b0.SetAlignment(0, 1);
                uVar8 = 4294967295;
                if (1 < param_8) {
                    uVar8 = field_8;
                }
                local_b0.SetColour(uVar8);
                this_01 = field_16;
                new (&local_78) StringView((StringView*)&local_68);
                SVar9.field_8._0_4_ = param_2 + field_0;
                SVar9.field_0 = (ulong)&local_78;
                SVar9.field_8._4_4_ = 0;
                this_01->DrawStringMultiline(SVar9, param_3 + field_0, local_3c, field_4, 0, (uint*)&local_b0,
                                             in_stack_ffffffffffffff48);
            }
        }
    }

    // 0x1008fb670, 96 bytes, placed by debug map only (low confidence)
    // FlameGraph::SkipTopLevelNamespaces(char const*)
    FlameGraph* FlameGraph::SkipTopLevelNamespaces(char* param_1) {
        char* pcVar1;
        char* pcVar2;
        char* pcVar3;

        pcVar2 = param_1;
        pcVar3 = param_1;
        do {
            pcVar1 = pcVar2;
            if (*param_1 == ':') {
                if (param_1[1] == ':') {
                    pcVar1 = param_1 + 2;
                    param_1 = param_1 + 1;
                    pcVar3 = pcVar2;
                }
            } else if (*param_1 == '\0') {
                new (this) StringView(pcVar3, (long)param_1 - (long)pcVar3);
                return this;
            }
            param_1 = param_1 + 1;
            pcVar2 = pcVar1;
        } while (true);
    }

} // namespace jag

namespace jag::math {
    // 0x1008fb390, 192 bytes, inline, placed by debug map only (low confidence)
    // ColourStorage8888<RGBA8StorageLayout>::SetRedGreenGradient(int, int, int)
    ColourStorage8888<RGBA8StorageLayout>*
    ColourStorage8888<RGBA8StorageLayout>::SetRedGreenGradient(int param_1, int param_2, int param_3) {
        long lVar1;
        ulong uVar2;
        ColourStorage8888<RGBA8StorageLayout> CVar3;
        int iVar4;
        int iVar5;

        iVar5 = param_3 - param_2;
        if (iVar5 == 0 || param_3 < param_2) {
            if (param_2 != 0 || param_3 != 0) {
                SetRedGreenGradient(this, (param_2 - param_1) + param_3, param_3, param_2);
            }
        } else {
            if (param_1 - param_3 == 0 || param_1 < param_3) {
                iVar5 = eastl::max<int>(0, ((param_1 - param_2) * 255) / iVar5);
                if (iVar5 < 128) {
                    this[3] = (ColourStorage8888<RGBA8StorageLayout>)255;
                    this[2] = (ColourStorage8888<RGBA8StorageLayout>)((char)iVar5 * '\x02');
                } else {
                    this[3] = (ColourStorage8888<RGBA8StorageLayout>)((char)iVar5 * '\x02' ^ 254);
                    this[2] = (ColourStorage8888<RGBA8StorageLayout>)255;
                }
                CVar3 = (ColourStorage8888<RGBA8StorageLayout>)64;
            } else {
                lVar1 = (long)((param_1 - param_3) * 255);
                uVar2 = lVar1 / (long)iVar5;
                iVar4 = (int)uVar2;
                CVar3 = (ColourStorage8888<RGBA8StorageLayout>)eastl::min<graphics::GraphicsQuality>(
                    128, uVar2 & 4294967295, lVar1 % (long)iVar5 & 4294967295);
                this[3] = CVar3;
                CVar3 = (ColourStorage8888<RGBA8StorageLayout>)eastl::max<int>(128, iVar4 * -2 + 255);
                this[2] = CVar3;
                CVar3 =
                    (ColourStorage8888<RGBA8StorageLayout>)eastl::min<graphics::GraphicsQuality>(255, iVar4 * 3 + 64);
            }
            this[1] = CVar3;
            *this = (ColourStorage8888<RGBA8StorageLayout>)255;
        }
        return this;
    }

} // namespace jag::math
