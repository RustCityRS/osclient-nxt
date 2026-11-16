// libs/graphics/runetek7/gui/debug/DebugOverlayGraphSection.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "DebugOverlayGraphSection.h"

namespace jag {
    // 0x100f44354
    int32_t DebugOverlayGraphSection::m_graphDuration = 15;

    // 0x100f44358
    int32_t DebugOverlayGraphSection::m_showGraphs = 1;

    // 0x1008f9d70
    void DebugOverlayGraphSection::RegisterGraphTweaks(tweak::Container& container) {
        function<void(tweak::Event const&)> local_58[56];
        long local_20;

        char* arg1 = "Show Graphs";
        container.AddCheckBox("Show Graphs", m_showGraphs);
        std::function<void(tweak::Event const&)>::function<
            DebugOverlayGraphSection::RegisterGraphTweaks(tweak::Container&)::__7, void>(local_58, (__7*)arg1);
        container.AddSlider("Graph Duration", 1.0, 60.0, 1.0, *local_58);
    }

    // 0x1008fa330
    DebugOverlayGraphSection::DebugOverlayGraphSection(DebugOverlay& debugOverlay,
                                                       DebugOverlaySection::SectionType sectionType, bool arg3,
                                                       unsigned int arg4, float arg5)
        : DebugOverlaySection(debugOverlay, sectionType, arg3), field_128(arg4, arg5) {
        float local_28;

        _local_28 = (((uint64_t)arg5 << 32) | (uint32_t)1124073472);
        field_24.SetValue(local_28, 0, 0);
    }

    // 0x1008fa4a0
    void DebugOverlayGraphSection::Draw(unsigned long long arg1, int arg2, int arg3) {
        if (arg1 == 0) {
            return;
        }
        float fVar1 = (float)field_56.GetValue(arg1);
        field_108 = (int)fVar1;
        fVar1 = (float)field_24.GetValue(arg1);
        field_20 = (int)fVar1;
        if (m_showGraphs == '\0') {
            field_98640 = 0;
        } else {
            DrawGraph(arg2, arg3, arg1);
        }
        (*this->_vptr[1]._dtor)(this, (unsigned long)(unsigned int)arg2, (unsigned long)(unsigned int)arg3);
    }

    // 0x1008fa5e0
    void DebugOverlayGraphSection::DrawGraph(int arg1, int arg2, unsigned long long arg3) {
        field_98640 = field_108 * 5;
        GUIManager* guiManager = ((RT7Core*)field_8->end())->GetGUIManager();
        field_128.Draw(*guiManager, arg1 - field_98640, arg2, field_98640, field_108 - 2, arg3, m_graphDuration,
                       field_20);
    }

    // 0x1008fa670
    void DebugOverlayGraphSection::Update(unsigned long long arg1) {
        (*this->_vptr[1]._x7e___2)();
    }

    // 0x1008fada0
    void DebugOverlayGraphSection::DrawTextString(const eastl::fixed_string<char, 512>& str, int arg2, int arg3,
                                                  unsigned int arg4, int arg5, graphics::FontAlign fontAlign) {
        int iVar1 = field_8->DrawString((char*)str.begin(), (arg2 - field_98640) - 2, (arg3 + field_108) - field_112,
                                        arg4, arg5, fontAlign & 255, false);
        iVar1 = iVar1 + 2 + field_98640;
        if ((field_16 != 1) || (field_104 < iVar1)) {
            field_104 = iVar1;
        }
    }

    // 0x1008fae30
    void DebugOverlayGraphSection::SetHeight(int arg1) {
        float local_14;

        field_112 = arg1 + 2;
        field_56.SetValue(local_14, 0, 0);
        field_116 = field_112 * 3 + 2;
    }

    // 0x100912a50
    void
    DebugOverlayGraphSection::RegisterGraphTweaks(tweak::Container&)::$_7::operator()(const tweak::Event& event) const {
        float fVar1;

        auto this_00 = end();
        if (field_16 == 3) {
            fVar1 = (float)this_00->GetCurrentValue();
            m_graphDuration = (int)fVar1;
        } else if (field_16 == 1) {
            this_00->SetSlider<float>((float)m_graphDuration);
        }
    }

    // 0x100c92b50: DebugOverlayGraphSection::~DebugOverlayGraphSection() has the same machine code as InlineFatalBreak()

} // namespace jag
