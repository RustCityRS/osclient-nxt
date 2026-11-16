// libs/graphics/runetek7/gui/debug/sections/DebugOverlayAllocations.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.graphics

namespace jag {
    class DebugOverlayAllocations {
    public:
        // virtual methods in vtable order
        virtual ~DebugOverlayAllocations();
        virtual void UpdateOnMainLogic(unsigned long long);
        virtual void RegisterTweakyVars(tweak::Container&);
        virtual void DrawImpl(int, int);
        virtual UpdateImpl(unsigned long long);
        DebugOverlayAllocations(DebugOverlay&, bool);

        // data members, from how the methods use this: 98696 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[104];
        int field_112; // offset 112
        char _unknown_116[4];
        bool field_120; // offset 120
        char _unknown_121[7];
        TimedGraph field_128; // offset 128
        char _unknown_98600[56];
        int field_98656; // offset 98656
        char _unknown_98660[4];
        int field_98664; // offset 98664
        char _unknown_98668[4];
        uint field_98672; // offset 98672
        uint field_98676; // offset 98676
        int field_98680;  // offset 98680
        char _unknown_98684[12];
    };

    // 0x1008fc0c0, 112 bytes, base-object constructor, placed by class name
    // DebugOverlayAllocations::DebugOverlayAllocations(DebugOverlay&, bool)
    void DebugOverlayAllocations::DebugOverlayAllocations(DebugOverlay* param_1, bool param_2) {
        undefined7 in_register_00000011;

        new (1065353216)
            DebugOverlayGraphSection(this, param_1, 11, CONCAT71(in_register_00000011, param_2) & 4294967295, 0);
        field_0 = &PTR__DebugOverlayAllocations_100f187f0;
        *(undefined8*)&field_98656 = 0;
        *(undefined8*)&field_98664 = 0;
        *(undefined8*)&field_98668 = 0;
        field_98676 = 0;
        field_98680 = 0;
        new (&field_98688, 60, 5.0) DataRecorder<unsigned long long>();
    }

    // 0x1008fc170, 16 bytes, complete-object constructor, placed by class name
    // DebugOverlayAllocations::DebugOverlayAllocations(DebugOverlay&, bool): jumps straight to the base-object constructor

    // 0x1008fc180, 592 bytes, placed by class name
    // DebugOverlayAllocations::DrawImpl(int, int)
    void DebugOverlayAllocations::DrawImpl(int param_1, int param_2) {
        undefined1* this_00;
        undefined4 uVar1;
        uint uVar2;
        uint uVar3;
        int iVar4;
        Callstack local_268[35];
        undefined8 local_38;

        local_38 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        callstack::Callstack::Callstack(local_268);
        new (&local_268[0].field_8) eastl::fixed_string<char, 512, true, eastl::allocator>();
        uVar2 = field_98672;
        this_00 = field_128;
        this_00->GetMean();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::sprintf(
            &local_268[0].field_8, "Alloc/tick : %d (%d avg)", (ulong)uVar2);
        local_268->SetRedGreenGradient(field_98672, 500, 0);
        uVar1 = local_268->GetX();
        (*(code*)field_0[7])(this, &local_268[0].field_8, param_1, param_2, uVar1, 255, 2);
        uVar2 = (*(code*)field_0[8])(this, 1);
        if (uVar2 != 0) {
            local_268->SetRedGreenGradient(field_98676, 500, 0);
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                sprintf(&local_268[0].field_8, "Total : Alloc: %llu, Free: %llu", *(undefined8*)&field_98656,
                        *(undefined8*)&field_98664);
            iVar4 = field_112;
            uVar3 = local_268->GetX();
            (*(code*)field_0[7])(this, &local_268[0].field_8, param_1, param_2 - iVar4, uVar2 | uVar3 & 4294967040,
                                 uVar2, 2);
            uVar2 = (*(code*)field_0[8])(this, 2);
            if (uVar2 != 0) {
                iVar4 = this_00->GetMax();
                local_268->SetRedGreenGradient(iVar4, 500, 0);
                uVar3 = this_00->GetMax();
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                    sprintf(&local_268[0].field_8, "Peak : %d/tick", (ulong)uVar3);
                iVar4 = field_112;
                uVar3 = local_268->GetX();
                (*(code*)field_0[7])(this, &local_268[0].field_8, param_1, param_2 + iVar4 * -2,
                                     uVar2 | uVar3 & 4294967040, uVar2, 2);
            }
        }
        /* WARNING: Subroutine does not return */
        local_268[0].field_8.~fixed_string();
    }

    // 0x1008fc3d0, 192 bytes, placed by class name
    // DebugOverlayAllocations::UpdateOnMainLogic(unsigned long long)
    void DebugOverlayAllocations::UpdateOnMainLogic(ulonglong param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        uint uVar3;
        GraphicsApp* pGVar5;

        pGVar5 = (GraphicsApp*)Instance();
        uVar3 = pGVar5->GetLogicTick();
        if (field_98680 + 5U <= uVar3) {
            pGVar5 = (GraphicsApp*)pGVar5->Instance();
            field_98680 = pGVar5->GetLogicTick();
            uVar1 = HeapAllocatorMonitorProxy::m_allocations;
            uVar3 = (uint)((int)HeapAllocatorMonitorProxy::m_allocations - field_98656) / 5;
            field_98672 = uVar3;
            uVar2 = HeapAllocatorMonitorProxy::m_frees;
            field_98676 = (uint)((int)HeapAllocatorMonitorProxy::m_frees - field_98664) / 5;
            *(undefined8*)&field_98656 = uVar1;
            *(undefined8*)&field_98664 = uVar2;
            (field_128, param_1, uVar3)->RecordValue();
            (field_128, 500)->SetMaximum();
        }
    }

    // 0x1008fc4c0, 16 bytes, placed by class name
    // DebugOverlayAllocations::UpdateImpl(unsigned long long)
    undefined1 DebugOverlayAllocations::UpdateImpl(ulonglong param_1) {
        return 1;
    }

    // 0x1008fc4d0, 32 bytes, placed by class name
    // DebugOverlayAllocations::RegisterTweakyVars(tweak::Container&)
    void DebugOverlayAllocations::RegisterTweakyVars(Container* param_1) {
        param_1->AddCheckBox("Display Allocations", &field_120);
    }

    // 0x1008fdfc0, 16 bytes, complete-object destructor, inline, placed by class name
    // DebugOverlayAllocations::~DebugOverlayAllocations(): jumps straight to the base-object destructor

    // 0x1008fdfd0, 32 bytes, deleting destructor, inline, placed by class name
    // DebugOverlayAllocations::~DebugOverlayAllocations()
    void DebugOverlayAllocations::~DebugOverlayAllocations() {
        ~DebugOverlayAllocations(this);
        operator_delete(this);
    }

    // 0x100904f40, 48 bytes, base-object destructor, inline, placed by class name
    // DebugOverlayAllocations::~DebugOverlayAllocations()
    void DebugOverlayAllocations::~DebugOverlayAllocations() {
        field_0 = &PTR__DebugOverlayAllocations_100f187f0;
        (&field_98688)->~DataRecorder();
        ~DebugOverlayGraphSection();
    }

} // namespace jag
