// libs/graphics/runetek7/gui/debug/sections/DebugOverlayRender.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "libs/graphics/runetek7/gui/debug/DebugOverlay.h"

namespace jag {
    class DebugOverlayRenderFPS : public DebugOverlayMainFPS // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~DebugOverlayRenderFPS();
        virtual char* GetTitle() const;
        virtual GetFPSCounter() const;
        DebugOverlayRenderFPS(DebugOverlay&, bool);

        // data members, from how the methods use this: 98600 bytes, the first 98600 are DebugOverlayMainFPS
    };

    // 0x1008a8cd0, 64 bytes, base-object constructor, placed by class name and debug map
    // DebugOverlayRender::DebugOverlayRender(DebugOverlay&, bool)
    void DebugOverlayRender::DebugOverlayRender(DebugOverlay* param_1, bool param_2) {
        undefined7 in_register_00000011;

        new (1065353216)
            DebugOverlayGraphSection(this, param_1, 5, CONCAT71(in_register_00000011, param_2) & 4294967295, 0);
        field_0 = &PTR__DebugOverlayMemory_100f18278;
    }

    // 0x1008a8d10, 16 bytes, complete-object constructor, placed by class name and debug map
    // DebugOverlayRender::DebugOverlayRender(DebugOverlay&, bool): jumps straight to the base-object constructor

    // 0x1008a8d20, 624 bytes, placed by class name and debug map
    // DebugOverlayRender::DrawImpl(int, int)
    void DebugOverlayRender::DrawImpl(int param_1, int param_2) {
        uint uVar1;
        int iVar2;
        uint uVar3;
        uint uVar4;
        RenderContext* this_00;
        Material* pMVar5;
        LightType* this_01;
        TextRun* this_02;
        RT7Core* this_03;
        Callstack local_268[35];
        undefined8 local_38;

        local_38 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        callstack::Callstack::Callstack(local_268);
        this_03 = field_8;
        this_03->end();
        this_00 = (RenderContext*)this_03->GetRenderContext();
        new (&local_268[0].field_8) eastl::fixed_string<char, 512, true, eastl::allocator>();
        pMVar5 = (Material*)this_00->GetStats();
        uVar1 = pMVar5->GetDiffuseAlphaMapSize();
        this_01 = (LightType*)this_00->GetStats();
        this_01->GetAmplitude();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::sprintf(
            &local_268[0].field_8, "Avg Draw Calls : %u Avg Triangles: %u", (ulong)uVar1);
        pMVar5 = (Material*)this_00->GetStats();
        iVar2 = pMVar5->GetDiffuseAlphaMapSize();
        local_268->SetRedGreenGradient(iVar2, 2000, 0);
        uVar1 = local_268->GetX();
        (*(code*)field_0[7])(this, &local_268[0].field_8, param_1, param_2, uVar1, 255, 2);
        uVar3 = (*(code*)field_0[8])(this, 1);
        if (uVar3 != 0) {
            iVar2 = (&field_128)->GetMax();
            local_268->SetRedGreenGradient(iVar2, 2000, 0);
            uVar4 = (&field_128)->GetMax();
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                sprintf(&local_268[0].field_8, "Peak draw calls: %i", (ulong)uVar4);
            iVar2 = field_112;
            uVar4 = local_268->GetX();
            (*(code*)field_0[7])(this, &local_268[0].field_8, param_1, param_2 - iVar2, uVar3 | uVar4 & 4294967040,
                                 uVar3, 2);
            uVar3 = (*(code*)field_0[8])(this, 2);
            if (uVar3 != 0) {
                this_02 = (TextRun*)this_00->GetStats();
                uVar4 = this_02->GetWrapMode();
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                    sprintf(&local_268[0].field_8, "Lines: %u", (ulong)uVar4);
                (*(code*)field_0[7])(this, &local_268[0].field_8, param_1, param_2 + field_112 * -2,
                                     uVar1 & 4294967040 | uVar3, uVar3, 2);
            }
        }
        /* WARNING: Subroutine does not return */
        local_268[0].field_8.~fixed_string();
    }

    // 0x1008a8fa0, 80 bytes, placed by class name and debug map
    // DebugOverlayRender::UpdateImpl(unsigned long long)
    undefined4 DebugOverlayRender::UpdateImpl(ulonglong param_1) {
        RenderContext* this_00;
        Material* this_01;
        int iVar1;
        RT7Core* this_02;

        this_02 = field_8;
        this_02->end();
        this_00 = (RenderContext*)this_02->GetRenderContext();
        this_01 = (Material*)this_00->GetStats();
        iVar1 = this_01->GetDiffuseAlphaMapSize();
        (&field_128, param_1, iVar1)->RecordValue();
        (&field_128, 2000)->SetMaximum();
        return 1;
    }

    // 0x1008a8ff0, 32 bytes, placed by class name and debug map
    // DebugOverlayRender::RegisterTweakyVars(tweak::Container&)
    void DebugOverlayRender::RegisterTweakyVars(Container* param_1) {
        param_1->AddCheckBox("Display Render info", &field_120);
    }

    // 0x1008cc420: the linker folded this into DebugOverlayLPS::~DebugOverlayLPS(), which has identical code
    DebugOverlayRender::~DebugOverlayRender();

    // 0x1008cc430: the linker folded this into DebugOverlayLPS::~DebugOverlayLPS(), which has identical code
    DebugOverlayRender::~DebugOverlayRender();

    // 0x1008cfe90: the linker folded this into DebugOverlayLPS::~DebugOverlayLPS(), which has identical code
    DebugOverlayRender::~DebugOverlayRender();

    // 0x1009117b0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // DebugOverlayRenderFPS::DebugOverlayRenderFPS(DebugOverlay&, bool): jumps straight to the base-object constructor

    // 0x1009117c0, 48 bytes, base-object constructor, inline, placed by class header (inline)
    // DebugOverlayRenderFPS::DebugOverlayRenderFPS(DebugOverlay&, bool)
    void DebugOverlayRenderFPS::DebugOverlayRenderFPS(DebugOverlay* param_1, bool param_2) {
        new (this) DebugOverlayFPS(param_1, true, param_2);
        field_0 = &PTR__DebugOverlayRenderFPS_100f18ad8;
    }

} // namespace jag
