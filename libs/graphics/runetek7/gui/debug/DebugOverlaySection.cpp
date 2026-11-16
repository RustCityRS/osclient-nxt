// libs/graphics/runetek7/gui/debug/DebugOverlaySection.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "DebugOverlaySection.h"

namespace jag {
    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    DebugOverlaySection::UpdateOnMainLogic(unsigned long long);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    DebugOverlaySection::RegisterTweakyVars(tweak::Container&);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    DebugOverlaySection::~DebugOverlaySection();

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    DebugOverlaySection::Update(unsigned long long);

    // 0x1000dc670: the linker folded this into oldscape::javapal::GameShell::GetMinimumCanvasHeight() const, which has identical code
    DebugOverlaySection::GetSectionType();

    // 0x1008fa0b0, 112 bytes, placed by class name and debug map
    // DebugOverlaySection::Expand(unsigned long long)
    void DebugOverlaySection::Expand(ulonglong param_1) {
        float local_20;
        float local_1c;

        if (field_112 != field_116) {
            local_20 = (float)field_116;
            (&field_56, &local_20, 500, param_1)->SetValue();
            local_1c = 255.0;
            (&field_24, &local_1c, 500, param_1)->SetValue();
            field_16 = 1;
        }
    }

    // 0x1008fa130, 112 bytes, placed by class name and debug map
    // DebugOverlaySection::Contract(unsigned long long)
    void DebugOverlaySection::Contract(ulonglong param_1) {
        float local_20;
        float local_1c;

        if (field_16 != 0) {
            local_20 = (float)field_112;
            (&field_56, &local_20, 500, param_1)->SetValue();
            local_1c = 128.0;
            (&field_24, &local_1c, 500, param_1)->SetValue();
            field_16 = 0;
        }
    }

    // 0x1008fa3b0, 112 bytes, base-object constructor, placed by class name and debug map
    // DebugOverlaySection::DebugOverlaySection(DebugOverlay&, DebugOverlaySection::SectionType, bool)
    void DebugOverlaySection::DebugOverlaySection(DebugOverlay* param_1, undefined4 param_3, undefined1 param_4) {
        field_0 = &PTR__OptionStore_100f18798;
        field_8 = param_1;
        *(undefined8*)&field_16 = 549755813888;
        new (&field_24) math::Transitionable<float>();
        new (&field_56) math::Transitionable<float>();
        new (&field_88, (_func_decltype_nullptr*)param_1)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        field_104 = 60;
        m_height = 10;
        field_112 = 1;
        field_116 = 1;
        m_show = param_4;
        m_expandedForced = 0;
        field_124 = param_3;
    }

    // 0x1008faea0, 112 bytes, placed by class name
    // DebugOverlaySection::DrawTextString(eastl::fixed_string<char, 512, true, eastl::allocator> const&, int, int, unsigned int, int, graphics::FontAlign)
    void DebugOverlaySection::DrawTextString(undefined8 param_2_00, undefined4 param_2, undefined4 param_3,
                                             undefined4 param_4, undefined4 param_5, undefined1 param_7) {
        DebugOverlay* pDVar1;
        undefined8 uVar2;

        pDVar1 = field_8;
        uVar2 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::begin();
        field_104 = pDVar1->DrawString(uVar2, param_2, param_3, param_4, param_5, param_7, 0);
    }

    // 0x1008faf10, 80 bytes, placed by class name
    // DebugOverlaySection::CalculateLineAlpha(int)
    long DebugOverlaySection::CalculateLineAlpha(int param_1) {
        float fVar1;

        fVar1 = (float)eastl::min<float>(1.0, (float)(m_height - param_1 * field_112) / (float)field_112);
        fVar1 = (float)eastl::max_alt(0.0, fVar1);
        return (long)(fVar1 * 255.0);
    }

    // 0x1008faf60, 16 bytes, placed by class name
    // DebugOverlaySection::SetHeight(int)
    void DebugOverlaySection::SetHeight(int param_1) {
        field_112 = param_1;
        field_116 = param_1;
        m_height = param_1;
    }

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    DebugOverlaySection::~DebugOverlaySection();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    DebugOverlaySection::~DebugOverlaySection();

} // namespace jag
