// libs/graphics/runetek7/gui/debug/sections/DebugOverlayGUI.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.graphics

namespace jag {
    class DebugOverlayGUI {
    public:
        // virtual methods in vtable order
        virtual ~DebugOverlayGUI();
        virtual void RegisterTweakyVars(tweak::Container& container);
        virtual void SetHeight(int arg1);
        virtual void DrawImpl(int arg1, int arg2);
        virtual uint64_t UpdateImpl(unsigned long long arg1);
        DebugOverlayGUI(DebugOverlay& debugOverlay, bool arg2);

    private:
        vector<oldscape::dash3d::EntityHighlight*>* field_8;
        uint8_t _unknown_16[96];
        int field_112;
        int field_116;
        bool field_120;
        uint8_t _unknown_121[7];
        TimedGraph field_128;
        uint8_t _unknown_98600[56];
        long field_98656;
        uint64_t field_98664;
        unsigned int field_98672;
        uint8_t _unknown_98676[4];
    };

    // 0x1008cfe90: DebugOverlayGUI::~DebugOverlayGUI() has the same machine code as DebugOverlayLPS::~DebugOverlayLPS()

    // 0x1008fdc80
    DebugOverlayGUI::DebugOverlayGUI(DebugOverlay& debugOverlay, bool arg2)
        : DebugOverlayGraphSection(debugOverlay, 24, arg2, 0, 1.0), field_98656(0), field_98664(250000000) {}

    // 0x1008fdce0
    void DebugOverlayGUI::DrawImpl(int arg1, int arg2) {
        auto this_00 = GraphicsApp::Instance();
        long lVar2 = ((FPSCounter*)this_00->GetFPSCounter())->GetLastFrameDurationNS();
        lVar2 = field_98656 - lVar2;
        field_98656 = lVar2;
        if (lVar2 < 1) {
            field_98656 = field_98664;
        }
        Callstack local_268;
        local_268 = math::ColourStorage8888<math::RGBA8StorageLayout>::SetRedGreenGradient(field_98672, 0, 60);
        unsigned int uVar1 = local_268.GetX();
        new (&local_268[0].field_8) eastl::fixed_string<char, 512>();
        local_268[0].field_8.sprintf("GUI Render Calls : <col=%X>%u", (unsigned long)(uVar1 | 16777216),
                                     (unsigned long)field_98672);
        DrawTextString((int)&local_268 + 8, arg1, arg2, 1090470143, 255);
        local_268[0].field_8.~fixed_string();
    }

    // 0x1008fde20
    uint64_t DebugOverlayGUI::UpdateImpl(unsigned long long arg1) {
        unsigned int arg2 = (((RT7Core*)field_8->end())->GetGUIManager())->RenderCallsThisFrame();
        field_98672 = arg2;
        field_128->RecordValue(arg1, arg2);
        field_128->SetMaximum(50);
        return 1;
    }

    // 0x1008fde90
    void DebugOverlayGUI::SetHeight(int arg1) {
        float local_14;

        field_112 = arg1 + 2;
        field_56.SetValue(local_14, 0, 0);
        field_116 = field_112 * 4 + 2;
    }

    // 0x1008fded0
    void DebugOverlayGUI::RegisterTweakyVars(tweak::Container& container) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.AddGroup(container);
        ((Container*)local_28.operator->())->AddCheckBox("Display GUI Render Calls", field_120);
    }

    // 0x1008fdf70: DebugOverlayRenderFPS::~DebugOverlayRenderFPS() has the same machine code as DebugOverlayMainFPS::~DebugOverlayMainFPS()

    // 0x1008fdfa0
    uint8_t* DebugOverlayMainFPS::GetTitle() const {
        return &DAT_100e61991;
    }

    // 0x1008fdfb0
    char* DebugOverlayRenderFPS::GetTitle() const {
        return "Render";
    }

    // 0x1008fec00
    ConfigDecoderInfo::ConfigDecoderInfo() : field_0(0) {}

    // 0x1008fecf0
    ConfigDecoderInfo::~ConfigDecoderInfo() {
        field_40.~function();
        field_8.~function();
    }

} // namespace jag

namespace jag::graphics {
    class RuntimeGeneratedFontMetrics {
    public:
        ~RuntimeGeneratedFontMetrics();
        RuntimeGeneratedFontMetrics();

        uint8_t _unknown_0[13672];
    };

    // 0x1008fea00
    auto TextFlags::ClearFlag(TextFlags::Flag flag) {
        auto result;
        result = result & ~(uint8_t)flag;
        return result;
    }

    // 0x1008ff640
    RuntimeGeneratedFontMetrics::~RuntimeGeneratedFontMetrics() {
        field_13664.~unique_ptr();
        field_12344.~fixed_vector();
    }

    // 0x1008ff770
    TextRunSlice::TextRunSlice(const TextRun& textRun, const TextRunCharacter* textRunCharacter1,
                               const TextRunCharacter* textRunCharacter2, bool arg4)
        : field_0(textRun), field_8(textRunCharacter1), field_16(textRunCharacter2), field_24(arg4) {}

    // 0x1008ffac0
    RuntimeGeneratedFontMetrics::RuntimeGeneratedFontMetrics()
        : eastl::fixed_vector<eastl::fixed_vector<unsigned short, 4ul>, 256ul>() {
        field_13664.unique_ptr<true, void>();
    }

} // namespace jag::graphics

namespace jag::graphics {
    namespace {
        // 0x1008ff850
        unsigned long GetLineStartIndex(const eastl::vector<TextRunCharacter, BucketAllocatorEASTL>& textRunCharacters,
                                        unsigned long arg2, bool arg3) {
            long lVar2;
            int iVar3;

            unsigned long uVar1 = textRunCharacters.size();
            if ((arg2 < uVar1) && (lVar2 = textRunCharacters[arg2], arg2 != 0)) {
                iVar3 = *(int*)(lVar2 + 8);
                do {
                    uVar1 = arg2 - 1;
                    lVar2 = textRunCharacters[uVar1];
                    if (*(int*)(lVar2 + 8) < iVar3) {
                        if (arg3 == false) {
                            return arg2;
                        }
                        lVar2 = textRunCharacters[uVar1];
                        iVar3 = *(int*)(lVar2 + 8);
                        arg3 = false;
                    }
                    arg2 = uVar1;
                } while (uVar1 != 0);
            }
            return 0;
        }

        // 0x1008ff8e0
        unsigned long GetLineEndIndex(const eastl::vector<TextRunCharacter, BucketAllocatorEASTL>& textRunCharacters,
                                      unsigned long arg2, bool arg3) {
            long lVar2;
            int iVar3;

            unsigned long uVar1 = textRunCharacters.size();
            if (arg2 < uVar1) {
                lVar2 = textRunCharacters[arg2];
                iVar3 = *(int*)(lVar2 + 8);
                lVar2 = textRunCharacters.size();
                if (arg2 < lVar2 - 1U) {
                    do {
                        uVar1 = arg2 + 1;
                        lVar2 = textRunCharacters[uVar1];
                        if (iVar3 < *(int*)(lVar2 + 8)) {
                            if (arg3 == false) {
                                return arg2;
                            }
                            lVar2 = textRunCharacters[uVar1];
                            iVar3 = *(int*)(lVar2 + 8);
                            arg3 = false;
                        }
                        lVar2 = textRunCharacters.size();
                        arg2 = uVar1;
                    } while (uVar1 < lVar2 - 1U);
                }
            }
            uVar1 = textRunCharacters.size();
            return uVar1;
        }

    } // namespace

} // namespace jag::graphics

namespace jag::graphics::internal {
    // 0x1008ffc90
    VertexSetupDynamic::VertexSetupDynamic() : shared_ptr() {}

} // namespace jag::graphics::internal
