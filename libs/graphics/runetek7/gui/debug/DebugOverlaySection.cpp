// libs/graphics/runetek7/gui/debug/DebugOverlaySection.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "DebugOverlaySection.h"

namespace jag {
    // 0x100009e70: DebugOverlaySection::UpdateOnMainLogic(unsigned long long) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: DebugOverlaySection::RegisterTweakyVars(tweak::Container&) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: DebugOverlaySection::~DebugOverlaySection() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100029ea0: DebugOverlaySection::Update(unsigned long long) has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x1000dc670: DebugOverlaySection::GetSectionType() has the same machine code as oldscape::javapal::GameShell::GetMinimumCanvasHeight() const

    // 0x1008fa0b0
    void DebugOverlaySection::Expand(unsigned long long arg1) {
        if (field_112 != field_116) {
            field_56.SetValue((float)field_116, 500, arg1);
            field_24.SetValue(255.0, 500, arg1);
            field_16 = 1;
        }
    }

    // 0x1008fa130
    void DebugOverlaySection::Contract(unsigned long long arg1) {
        if (field_16 != 0) {
            field_56.SetValue((float)field_112, 500, arg1);
            field_24.SetValue(128.0, 500, arg1);
            field_16 = 0;
        }
    }

    // 0x1008fa3b0
    DebugOverlaySection::DebugOverlaySection(DebugOverlay& debugOverlay, DebugOverlaySection::SectionType sectionType,
                                             bool arg3)
        : field_8(debugOverlay) {
        *(uint64_t*)&field_16 = 549755813888;
        new (&field_24) math::Transitionable<float>();
        new (&field_56) math::Transitionable<float>();
        new (&field_88) shared_ptr();
        field_104 = 60;
        m_height = 10;
        field_112 = 1;
        field_116 = 1;
        m_show = arg3;
        m_expandedForced = 0;
        m_sectionType = sectionType;
    }

    // 0x1008faea0
    void DebugOverlaySection::DrawTextString(const eastl::fixed_string<char, 512>& str, int arg2, int arg3,
                                             unsigned int arg4, int arg5, graphics::FontAlign fontAlign) {
        field_104 = field_8->DrawString((char*)str.begin(), arg2, arg3, arg4, arg5, fontAlign & 255, false);
    }

    // 0x1008faf10
    long DebugOverlaySection::CalculateLineAlpha(int arg1) {
        float fVar1 = (float)eastl::min<float>(1.0, (float)(m_height - arg1 * field_112) / (float)field_112);
        fVar1 = (float)eastl::max_alt(0.0, fVar1);
        return (long)(fVar1 * 255.0);
    }

    // 0x1008faf60
    void DebugOverlaySection::SetHeight(int arg1) {
        field_112 = arg1;
        field_116 = arg1;
        m_height = arg1;
    }

} // namespace jag
