// libs/graphics/runetek7/gui/debug/sections/DebugOverlayLPS.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.graphics

namespace jag {
    class DebugOverlayLPS {
    public:
        // virtual methods in vtable order
        virtual ~DebugOverlayLPS();
        virtual void RegisterTweakyVars(tweak::Container&);
        virtual void DrawImpl(int, int);
        virtual UpdateImpl(unsigned long long);
        DebugOverlayLPS(DebugOverlay&, bool);

        // data members, from how the methods use this: 98680 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[104];
        int field_112; // offset 112
        char _unknown_116[4];
        bool field_120; // offset 120
        char _unknown_121[98535];
        ulong field_98656;      // offset 98656
        undefined8 field_98664; // offset 98664
        float field_98672;      // offset 98672
        char _unknown_98676[4];
    };

    // 0x1008a6390, 96 bytes, base-object constructor, placed by class name
    // DebugOverlayLPS::DebugOverlayLPS(DebugOverlay&, bool)
    void DebugOverlayLPS::DebugOverlayLPS(DebugOverlay* param_1, bool param_2) {
        undefined7 in_register_00000011;

        new (1065353216)
            DebugOverlayGraphSection(this, param_1, 2, CONCAT71(in_register_00000011, param_2) & 4294967295, 0);
        field_0 = &PTR__DebugOverlayMemory_100f17f68;
        field_98656 = 0;
        field_98664 = 250000000;
        field_98672 = 0.0;
        (&field_128)->SetHighIsGood();
    }

    // 0x1008a63f0, 16 bytes, complete-object constructor, placed by class name
    // DebugOverlayLPS::DebugOverlayLPS(DebugOverlay&, bool): jumps straight to the base-object constructor

    // 0x1008a6400, 784 bytes, placed by class name
    // DebugOverlayLPS::DrawImpl(int, int)
    void DebugOverlayLPS::DrawImpl(int param_1, int param_2) {
        ulong* puVar1;
        undefined1* this_00;
        ulong uVar2;
        uint uVar3;
        int iVar4;
        uint uVar5;
        undefined4 uVar6;
        uint uVar7;
        GraphicsApp* this_01;
        FPSCounter* this_02;
        float fVar8;
        undefined1 local_270[8];
        Callstack local_268[35];
        undefined8 local_38;

        local_38 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        local_270._4_4_ = param_1;
        this_01 = (GraphicsApp*)Instance();
        this_02 = (FPSCounter*)this_01->GetFPSCounter();
        uVar3 = this_02->GetLastFrameDurationNS();
        puVar1 = &field_98656;
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - (ulong)uVar3;
        if (*puVar1 == 0 || SBORROW8(uVar2, (ulong)uVar3) != (long)*puVar1 < 0) {
            fVar8 = (float)this_02->GetAlpha();
            field_98672 = fVar8;
            field_98656 = field_98664;
        }
        new ((local_270 + 8)) callstack::Callstack();
        new (&local_268[0].field_8) eastl::fixed_string<char, 512, true, eastl::allocator>();
        this_00 = &field_128;
        uVar3 = this_00->GetMean();
        new (local_270) callstack::Callstack();
        iVar4 = this_00->GetMean();
        local_270->SetRedGreenGradient(iVar4, 0, 50);
        fVar8 = field_98672;
        uVar5 = local_270->GetX();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::sprintf(
            &local_268[0].field_8, (double)fVar8, "LPS : %.1f <col=%X>[Mean : %d]", (ulong)uVar5, (ulong)uVar3);
        ((local_270 + 8))->SetRedGreenGradient((int)(long)field_98672, 0, 50);
        uVar6 = ((local_270 + 8))->GetX();
        (*(code*)field_0[7])(this, &local_268[0].field_8, local_270._4_4_, param_2, uVar6, 255, 2);
        uVar3 = (*(code*)field_0[8])(this, 1);
        if (uVar3 != 0) {
            iVar4 = this_00->GetMin();
            if (48 < iVar4) {
                iVar4 = this_00->GetMax();
                if (iVar4 < 52)
                    goto LAB_1008a66bd;
            }
            iVar4 = this_00->GetMax();
            ((local_270 + 8))->SetRedGreenGradient(iVar4, 0, 50);
            uVar5 = ((local_270 + 8))->GetX();
            uVar7 = this_00->GetMax();
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                sprintf(&local_268[0].field_8, "Peak LPS: %d", (ulong)uVar7);
            (*(code*)field_0[7])(this, &local_268[0].field_8, local_270._4_4_, param_2 - field_112,
                                 uVar5 & 4294967040 | uVar3, uVar3, 2);
            uVar3 = (*(code*)field_0[8])(this, 2);
            if (uVar3 != 0) {
                iVar4 = this_00->GetMin();
                ((local_270 + 8))->SetRedGreenGradient(iVar4, 0, 50);
                uVar5 = ((local_270 + 8))->GetX();
                uVar7 = this_00->GetMin();
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                    sprintf(&local_268[0].field_8, "Lowest LPS: %d", (ulong)uVar7);
                (*(code*)field_0[7])(this, &local_268[0].field_8, local_270._4_4_, param_2 + field_112 * -2,
                                     uVar5 & 4294967040 | uVar3, uVar3, 2);
            }
        }
    LAB_1008a66bd:
        /* WARNING: Subroutine does not return */
        local_268[0].field_8.~fixed_string();
    }

    // 0x1008a6710, 80 bytes, placed by class name
    // DebugOverlayLPS::UpdateImpl(unsigned long long)
    undefined1 DebugOverlayLPS::UpdateImpl(ulonglong param_1) {
        GraphicsApp* this_00;
        EntityHighlightState* this_01;
        float fVar1;

        this_00 = (GraphicsApp*)Instance();
        this_01 = (EntityHighlightState*)this_00->GetFPSCounter();
        fVar1 = (float)this_01->GetAlpha();
        (&field_128, param_1, (int)(long)fVar1)->RecordValue();
        (&field_128, 60)->SetMaximum();
        return 1;
    }

    // 0x1008a6760, 32 bytes, placed by class name
    // DebugOverlayLPS::RegisterTweakyVars(tweak::Container&)
    void DebugOverlayLPS::RegisterTweakyVars(Container* param_1) {
        param_1->AddCheckBox("Display Logic-Loops-Per-Second", &field_120);
    }

    // 0x1008cc420, 16 bytes, complete-object destructor, inline, placed by class name
    // DebugOverlayLPS::~DebugOverlayLPS(): jumps straight to the base-object destructor

    // 0x1008cc420: the linker folded this into DebugOverlayLPS::~DebugOverlayLPS(), which has identical code
    DebugOverlayMainFPS::~DebugOverlayMainFPS();

    // 0x1008cc420: the linker folded this into DebugOverlayLPS::~DebugOverlayLPS(), which has identical code
    DebugOverlayRenderFPS::~DebugOverlayRenderFPS();

    // 0x1008cc420: the linker folded this into DebugOverlayLPS::~DebugOverlayLPS(), which has identical code
    DebugOverlayParticlesRender::~DebugOverlayParticlesRender();

    // 0x1008cc420: the linker folded this into DebugOverlayLPS::~DebugOverlayLPS(), which has identical code
    DebugOverlayParticlesSimulation::~DebugOverlayParticlesSimulation();

    // 0x1008cc430, 32 bytes, deleting destructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // DebugOverlayLPS::~DebugOverlayLPS()
    /* DebugOverlayMemory::~DebugOverlayMemory() */

    void DebugOverlayMemory::~DebugOverlayMemory() {
        ~DebugOverlayMemory(this);
        operator_delete(this);
    }

    // 0x1008cc430: the linker folded this into DebugOverlayLPS::~DebugOverlayLPS(), which has identical code
    DebugOverlayParticlesRender::~DebugOverlayParticlesRender();

    // 0x1008cc430: the linker folded this into DebugOverlayLPS::~DebugOverlayLPS(), which has identical code
    DebugOverlayParticlesSimulation::~DebugOverlayParticlesSimulation();

    // 0x1008cfe90, 16 bytes, base-object destructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // DebugOverlayLPS::~DebugOverlayLPS()
    /* DebugOverlayMemory::~DebugOverlayMemory() */

    void DebugOverlayMemory::~DebugOverlayMemory() {
        ~DebugOverlayGraphSection();
    }

    // 0x1008cfe90: the linker folded this into DebugOverlayLPS::~DebugOverlayLPS(), which has identical code
    DebugOverlayParticlesRender::~DebugOverlayParticlesRender();

    // 0x1008cfe90: the linker folded this into DebugOverlayLPS::~DebugOverlayLPS(), which has identical code
    DebugOverlayParticlesSimulation::~DebugOverlayParticlesSimulation();

} // namespace jag
