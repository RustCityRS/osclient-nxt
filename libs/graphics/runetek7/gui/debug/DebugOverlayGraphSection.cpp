// libs/graphics/runetek7/gui/debug/DebugOverlayGraphSection.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "DebugOverlayGraphSection.h"

namespace jag {
    // 0x100f44354, 4 bytes, __data
    DebugOverlayGraphSection::m_graphDuration = 15;

    // 0x100f44358, 4 bytes, __data
    DebugOverlayGraphSection::m_showGraphs = 1;

    // 0x1008f9d70, 160 bytes, placed by class name and debug map
    // DebugOverlayGraphSection::RegisterGraphTweaks(tweak::Container&)
    void DebugOverlayGraphSection::RegisterGraphTweaks(Container* param_1) {
        function local_58[56];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        param_1->AddCheckBox("Show Graphs", (bool*)&m_showGraphs);
        std::function<void(tweak::Event_const&)>::function<
            DebugOverlayGraphSection::RegisterGraphTweaks(tweak::Container&)::__7, void>(local_58);
        param_1->AddSlider("Graph Duration", 1.0, 60.0, 1.0, local_58);
        std::function<void(tweak::Event_const&)>::~function((function<void(tweak::Event_const&)>*)local_58);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1008fa330, 128 bytes, base-object constructor, placed by class name
    // DebugOverlayGraphSection::DebugOverlayGraphSection(DebugOverlay&, DebugOverlaySection::SectionType, bool, unsigned int, float)
    void DebugOverlayGraphSection::DebugOverlayGraphSection(float param_1, DebugOverlayGraphSection* this) {
        uint in_R8D;
        float local_28;

        DebugOverlaySection::DebugOverlaySection();
        field_0 = &PTR__OptionStore_100f18730;
        new (field_128, in_R8D, param_1) TimedGraph();
        _local_28 = CONCAT44(param_1, 1124073472);
        (&field_24, &local_28, 0, 0)->SetValue();
    }

    // 0x1008fa4a0, 176 bytes, placed by class name
    // DebugOverlayGraphSection::Draw(unsigned long long, int, int)
    void DebugOverlayGraphSection::Draw(ulonglong param_1, int param_2, int param_3) {
        float fVar1;

        if (param_1 != 0) {
            fVar1 = (float)(&field_56, param_1)->GetValue();
            field_108 = (int)fVar1;
            fVar1 = (float)(&field_24, param_1)->GetValue();
            field_20 = (int)fVar1;
            if (m_showGraphs == '\0') {
                field_98640 = 0;
            } else {
                DrawGraph(this, param_2, param_3, param_1);
            }
            (*(code*)field_0[9])(this, param_2, param_3);
            new (&field_88, param_2 - field_104, param_3, field_104, field_108 + -1) oldscape::dash3d::GridRect();
            field_98648 = param_1;
        }
    }

    // 0x1008fa5e0, 144 bytes, placed by class name
    // DebugOverlayGraphSection::DrawGraph(int, int, unsigned long long)
    void DebugOverlayGraphSection::DrawGraph(int param_1, int param_2, ulonglong param_3) {
        RT7Core* this_00;
        GUIManager* pGVar1;

        field_98640 = field_108 * 5;
        this_00 = (RT7Core*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(field_8);
        pGVar1 = (GUIManager*)this_00->GetGUIManager();
        (field_128, pGVar1, param_1 - field_98640, param_2, field_98640, field_108 + -2, param_3, m_graphDuration,
         field_20)
            ->Draw();
    }

    // 0x1008fa670, 16 bytes, placed by class name
    // DebugOverlayGraphSection::Update(unsigned long long)
    void DebugOverlayGraphSection::Update(ulonglong param_1) {
        (*(code*)field_0[10])();
    }

    // 0x1008fada0, 144 bytes, placed by class name
    // DebugOverlayGraphSection::DrawTextString(eastl::fixed_string<char, 512, true, eastl::allocator> const&, int, int, unsigned int, int, graphics::FontAlign)
    void DebugOverlayGraphSection::DrawTextString(undefined8 param_2_00, int param_2, int param_3, undefined4 param_4,
                                                  undefined4 param_5, undefined1 param_7) {
        DebugOverlay* pDVar1;
        int iVar2;
        undefined8 uVar3;

        pDVar1 = (DebugOverlay*)field_8;
        uVar3 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::begin();
        iVar2 = pDVar1->DrawString(uVar3, (param_2 - field_98640) + -2, (param_3 + field_108) - field_112, param_4,
                                   param_5, param_7, 0);
        iVar2 = iVar2 + 2 + field_98640;
        if ((field_16 != 1) || (field_104 < iVar2)) {
            field_104 = iVar2;
        }
    }

    // 0x1008fae30, 64 bytes, placed by class name
    // DebugOverlayGraphSection::SetHeight(int)
    void DebugOverlayGraphSection::SetHeight(int param_1) {
        float local_14;

        field_112 = param_1 + 2;
        (&field_56, &local_14, 0, 0)->SetValue();
        field_116 = field_112 * 3 + 2;
    }

    // 0x100912a50, 80 bytes, placed by class name
    // DebugOverlayGraphSection::RegisterGraphTweaks(tweak::Container&)::$_7::operator()(tweak::Event const&) const
    /* DebugOverlayGraphSection::RegisterGraphTweaks(tweak::Container&)::$_7::TEMPNAMEPLACEHOLDERVALUE(tweak::Event
   const&) const */

    void DebugOverlayGraphSection::RegisterGraphTweaks(tweak::Container&)::$_7::operator()(Event* param_1) {
        Slider* this_00;
        float fVar1;

        this_00 = (Slider*)end();
        if (*(int*)(this + 16) == 3) {
            fVar1 = (float)this_00->GetCurrentValue();
            m_graphDuration = (int)fVar1;
        } else if (*(int*)(this + 16) == 1) {
            tweak::Slider::SetSlider<float>(this_00, (float)m_graphDuration);
        }
    }

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    DebugOverlayGraphSection::~DebugOverlayGraphSection();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    DebugOverlayGraphSection::~DebugOverlayGraphSection();

} // namespace jag
