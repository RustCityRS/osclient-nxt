// libs/graphics/runetek7/gui/debug/sections/DebugOverlayGUI.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.graphics

namespace jag {
    class DebugOverlayGUI {
    public:
        // virtual methods in vtable order
        virtual ~DebugOverlayGUI();
        virtual void RegisterTweakyVars(tweak::Container&);
        virtual void SetHeight(int);
        virtual void DrawImpl(int, int);
        virtual UpdateImpl(unsigned long long);
        DebugOverlayGUI(DebugOverlay&, bool);

        // data members, from how the methods use this: 98680 bytes
        undefined** field_0;                                                       // offset 0, vtable pointer
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* field_8; // offset 8
        char _unknown_16[96];
        int field_112;  // offset 112
        int field_116;  // offset 116
        bool field_120; // offset 120
        char _unknown_121[7];
        TimedGraph field_128; // offset 128
        char _unknown_98600[56];
        long field_98656;       // offset 98656
        undefined8 field_98664; // offset 98664
        uint field_98672;       // offset 98672
        char _unknown_98676[4];
    };

    // 0x1008cc420: the linker folded this into DebugOverlayLPS::~DebugOverlayLPS(), which has identical code
    DebugOverlayGUI::~DebugOverlayGUI();

    // 0x1008cc430: the linker folded this into DebugOverlayLPS::~DebugOverlayLPS(), which has identical code
    DebugOverlayGUI::~DebugOverlayGUI();

    // 0x1008cfe90: the linker folded this into DebugOverlayLPS::~DebugOverlayLPS(), which has identical code
    DebugOverlayGUI::~DebugOverlayGUI();

    // 0x1008fdc80, 80 bytes, base-object constructor, placed by class name
    // DebugOverlayGUI::DebugOverlayGUI(DebugOverlay&, bool)
    void DebugOverlayGUI::DebugOverlayGUI(DebugOverlay* param_1, bool param_2) {
        undefined7 in_register_00000011;

        new (1065353216)
            DebugOverlayGraphSection(this, param_1, 24, CONCAT71(in_register_00000011, param_2) & 4294967295, 0);
        field_0 = &PTR__DebugOverlayMemory_100f189f8;
        field_98656 = 0;
        field_98664 = 250000000;
    }

    // 0x1008fdcd0, 16 bytes, complete-object constructor, placed by class name
    // DebugOverlayGUI::DebugOverlayGUI(DebugOverlay&, bool): jumps straight to the base-object constructor

    // 0x1008fdce0, 320 bytes, placed by class name
    // DebugOverlayGUI::DrawImpl(int, int)
    void DebugOverlayGUI::DrawImpl(int param_1, int param_2) {
        uint uVar1;
        GraphicsApp* this_00;
        FPSCounter* this_01;
        long lVar2;
        Callstack local_268[35];
        undefined8 local_38;

        local_38 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        this_00 = (GraphicsApp*)Instance();
        this_01 = (FPSCounter*)this_00->GetFPSCounter();
        lVar2 = this_01->GetLastFrameDurationNS();
        lVar2 = field_98656 - lVar2;
        field_98656 = lVar2;
        if (lVar2 < 1) {
            field_98656 = field_98664;
        }
        callstack::Callstack::Callstack(local_268);
        local_268->SetRedGreenGradient(field_98672, 0, 60);
        uVar1 = local_268->GetX();
        new (&local_268[0].field_8) eastl::fixed_string<char, 512, true, eastl::allocator>();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::sprintf(
            &local_268[0].field_8, "GUI Render Calls : <col=%X>%u", (ulong)(uVar1 | 16777216), (ulong)field_98672);
        (*(code*)field_0[7])(this, &local_268[0].field_8, param_1, param_2, 1090470143, 255, 2);
        /* WARNING: Subroutine does not return */
        local_268[0].field_8.~fixed_string();
    }

    // 0x1008fde20, 96 bytes, placed by class name
    // DebugOverlayGUI::UpdateImpl(unsigned long long)
    undefined4 DebugOverlayGUI::UpdateImpl(ulonglong param_1) {
        RT7Core* this_00;
        GUIManager* this_01;
        uint uVar1;

        this_00 = (RT7Core*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(field_8);
        this_01 = (GUIManager*)this_00->GetGUIManager();
        uVar1 = this_01->RenderCallsThisFrame();
        field_98672 = uVar1;
        (field_128, param_1, uVar1)->RecordValue();
        (field_128, 50)->SetMaximum();
        return 1;
    }

    // 0x1008fde90, 64 bytes, placed by class name
    // DebugOverlayGUI::SetHeight(int)
    void DebugOverlayGUI::SetHeight(int param_1) {
        float local_14;

        field_112 = param_1 + 2;
        (&field_56, &local_14, 0, 0)->SetValue();
        field_116 = field_112 * 4 + 2;
    }

    // 0x1008fded0, 112 bytes, placed by class name
    // DebugOverlayGUI::RegisterTweakyVars(tweak::Container&)
    void DebugOverlayGUI::RegisterTweakyVars(Container* param_1) {
        Container* this_00;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28[16];

        local_28->AddGroup(param_1);
        this_00 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)local_28);
        this_00->AddCheckBox("Display GUI Render Calls", &field_120);
        local_28->~shared_ptr();
    }

    // 0x1008fdf70, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // DebugOverlayMainFPS::~DebugOverlayMainFPS(): jumps straight to the base-object destructor

    // 0x1008fdf70: the linker folded this into DebugOverlayMainFPS::~DebugOverlayMainFPS(), which has identical code
    DebugOverlayRenderFPS::~DebugOverlayRenderFPS();

    // 0x1008fdf80, 32 bytes, deleting destructor, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // DebugOverlayMainFPS::~DebugOverlayMainFPS()
    /* DebugOverlayRenderFPS::~DebugOverlayRenderFPS() */

    void DebugOverlayRenderFPS::~DebugOverlayRenderFPS() {
        ~DebugOverlayRenderFPS(this);
        operator_delete(this);
    }

    // 0x1008fdf80: the linker folded this into DebugOverlayMainFPS::~DebugOverlayMainFPS(), which has identical code
    DebugOverlayRenderFPS::~DebugOverlayRenderFPS();

    // 0x1008fdfa0, 16 bytes, inline, placed by debug map only (low confidence)
    // DebugOverlayMainFPS::GetTitle() const
    undefined* DebugOverlayMainFPS::GetTitle() {
        return &DAT_100e61991;
    }

    // 0x1008fdfb0, 16 bytes, inline, placed by debug map only (low confidence)
    // DebugOverlayRenderFPS::GetTitle() const
    char* DebugOverlayRenderFPS::GetTitle() {
        return "Render";
    }

    // 0x1008fec00, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ConfigDecoderInfo::ConfigDecoderInfo()
    void ConfigDecoderInfo::ConfigDecoderInfo() {
        field_0 = 0;
        eastl::function<void(
            unsigned int, unsigned int, unsigned int, unsigned int,
            shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>> const&,
            Array<shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>, eastl::allocator> const*)>::
            function((function<void(unsigned int, unsigned int, unsigned int, unsigned int,
                                    shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>> const&,
                                    Array<shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>,
                                          eastl::allocator> const*)>*)&field_8);
        eastl::function<void()>::function((function<void()>*)&field_40);
    }

    // 0x1008fecf0, 48 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // ConfigDecoderInfo::~ConfigDecoderInfo()
    void ConfigDecoderInfo::~ConfigDecoderInfo() {
        eastl::function<void()>::~function((function<void()>*)&field_40);
        eastl::function<void()>::~function((function<void()>*)&field_8);
    }

} // namespace jag

namespace jag::graphics {
    class RuntimeGeneratedFontMetrics {
    public:
        ~RuntimeGeneratedFontMetrics();
        RuntimeGeneratedFontMetrics();

        // data members, from how the methods use this: 13672 bytes
        char _unknown_0[13672];
    };

    // 0x1008fea00, 16 bytes, inline, placed by debug map only (low confidence)
    // TextFlags::ClearFlag(TextFlags::Flag)
    TextFlags* TextFlags::ClearFlag(byte param_2) {
        *this = (TextFlags)((byte) * this & ~param_2);
        return this;
    }

    // 0x1008ff640, 48 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // RuntimeGeneratedFontMetrics::~RuntimeGeneratedFontMetrics()
    void RuntimeGeneratedFontMetrics::~RuntimeGeneratedFontMetrics() {
        (&field_13664)->~unique_ptr();
        (&field_12344)->~fixed_vector();
        ~fixed_vector();
    }

    // 0x1008ff770, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // TextRunSlice::TextRunSlice(TextRun const&, TextRunCharacter const*, TextRunCharacter const*, bool)
    void TextRunSlice::TextRunSlice(TextRun* param_1, TextRunCharacter* param_2, TextRunCharacter* param_3,
                                    bool param_4) {
        field_0 = param_1;
        field_8 = param_2;
        field_16 = param_3;
        field_24 = param_4;
    }

    // 0x1008ffac0, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // RuntimeGeneratedFontMetrics::RuntimeGeneratedFontMetrics()
    void RuntimeGeneratedFontMetrics::RuntimeGeneratedFontMetrics() {
        new (this) eastl::fixed_vector<eastl::fixed_vector<unsigned short, 4ul, true, eastl::allocator>, 256ul, true,
                                       eastl::allocator>();
        new (&field_12344) eastl::fixed_vector<FontGlyphInfo, 256ul, true, eastl::allocator>();
        std::unique_ptr<FontKerningData, std::default_delete<FontKerningData>>::unique_ptr<true, void>(
            (unique_ptr<FontKerningData, std::default_delete<FontKerningData>>*)&field_13664);
    }

} // namespace jag::graphics

namespace jag::graphics {
    namespace {
        // 0x1008ff850, 144 bytes, inline, placed by debug map only (low confidence)
        // GetLineStartIndex(eastl::vector<TextRunCharacter, BucketAllocatorEASTL> const&, unsigned long, bool)
        ulong GetLineStartIndex(vector* param_1, ulong param_2, bool param_3) {
            ulong uVar1;
            long lVar2;
            int iVar3;

            uVar1 = param_1->size();
            if ((param_2 < uVar1) && (lVar2 = eastl::vector<TextRunCharacter, BucketAllocatorEASTL>::operator[](
                                          (vector<TextRunCharacter, BucketAllocatorEASTL>*)param_1, param_2),
                                      param_2 != 0)) {
                iVar3 = *(int*)(lVar2 + 8);
                do {
                    uVar1 = param_2 - 1;
                    lVar2 = eastl::vector<TextRunCharacter, BucketAllocatorEASTL>::operator[](
                        (vector<TextRunCharacter, BucketAllocatorEASTL>*)param_1, uVar1);
                    if (*(int*)(lVar2 + 8) < iVar3) {
                        if (param_3 == false) {
                            return param_2;
                        }
                        lVar2 = eastl::vector<TextRunCharacter, BucketAllocatorEASTL>::operator[](
                            (vector<TextRunCharacter, BucketAllocatorEASTL>*)param_1, uVar1);
                        iVar3 = *(int*)(lVar2 + 8);
                        param_3 = false;
                    }
                    param_2 = uVar1;
                } while (uVar1 != 0);
            }
            return 0;
        }

        // 0x1008ff8e0, 176 bytes, inline, placed by debug map only (low confidence)
        // GetLineEndIndex(eastl::vector<TextRunCharacter, BucketAllocatorEASTL> const&, unsigned long, bool)
        ulong GetLineEndIndex(vector* param_1, ulong param_2, bool param_3) {
            ulong uVar1;
            long lVar2;
            int iVar3;

            uVar1 = param_1->size();
            if (param_2 < uVar1) {
                lVar2 = eastl::vector<TextRunCharacter, BucketAllocatorEASTL>::operator[](
                    (vector<TextRunCharacter, BucketAllocatorEASTL>*)param_1, param_2);
                iVar3 = *(int*)(lVar2 + 8);
                lVar2 = param_1->size();
                if (param_2 < lVar2 - 1U) {
                    do {
                        uVar1 = param_2 + 1;
                        lVar2 = eastl::vector<TextRunCharacter, BucketAllocatorEASTL>::operator[](
                            (vector<TextRunCharacter, BucketAllocatorEASTL>*)param_1, uVar1);
                        if (iVar3 < *(int*)(lVar2 + 8)) {
                            if (param_3 == false) {
                                return param_2;
                            }
                            lVar2 = eastl::vector<TextRunCharacter, BucketAllocatorEASTL>::operator[](
                                (vector<TextRunCharacter, BucketAllocatorEASTL>*)param_1, uVar1);
                            iVar3 = *(int*)(lVar2 + 8);
                            param_3 = false;
                        }
                        lVar2 = param_1->size();
                        param_2 = uVar1;
                    } while (uVar1 < lVar2 - 1U);
                }
            }
            uVar1 = param_1->size();
            return uVar1;
        }

    } // namespace

} // namespace jag::graphics

namespace jag::graphics::internal {
    // 0x1008ffc90, 224 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // VertexSetupDynamic::VertexSetupDynamic()
    void VertexSetupDynamic::VertexSetupDynamic() {
        _func_decltype_nullptr* in_RSI;

        new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(in_RSI);
        new (&field_16) render::VertexDeclaration();
        new (field_112) render::InputAssemblerState();
        new (&field_304) eastl::vector<GUIManagerVertexBase<short>, eastl::allocator>();
        new (&field_336) render::DynamicBuffer<render::VertexBuffer>();
        new (&field_424) eastl::vector<unsigned short, eastl::allocator>();
        new (&field_456) render::DynamicBuffer<render::IndexBuffer>();
    }

} // namespace jag::graphics::internal
