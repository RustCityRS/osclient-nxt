// libs/graphics/runetek7/gui/debug/sections/DebugOverlayMemory.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.graphics

namespace jag {
    class DebugOverlayMemory {
    public:
        // virtual methods in vtable order
        virtual ~DebugOverlayMemory();
        virtual void RegisterTweakyVars(tweak::Container&);
        virtual void DrawImpl(int, int);
        virtual UpdateImpl(unsigned long long);
        DebugOverlayMemory(DebugOverlay&, bool);

        // data members, from how the methods use this: 98672 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[104];
        int field_112; // offset 112
        char _unknown_116[4];
        bool field_120; // offset 120
        char _unknown_121[98535];
        ulong field_98656; // offset 98656
        ulong field_98664; // offset 98664
    };

    // 0x1008a6780, 64 bytes, base-object constructor, placed by class name
    // DebugOverlayMemory::DebugOverlayMemory(DebugOverlay&, bool)
    void DebugOverlayMemory::DebugOverlayMemory(DebugOverlay* param_1, bool param_2) {
        undefined7 in_register_00000011;

        new (1065353216)
            DebugOverlayGraphSection(this, param_1, 8, CONCAT71(in_register_00000011, param_2) & 4294967295, 0);
        field_0 = &PTR__DebugOverlayMemory_100f17fd0;
        field_98656 = 0;
        field_98664 = 0;
    }

    // 0x1008a67c0, 16 bytes, complete-object constructor, placed by class name
    // DebugOverlayMemory::DebugOverlayMemory(DebugOverlay&, bool): jumps straight to the base-object constructor

    // 0x1008a67d0, 480 bytes, placed by class name
    // DebugOverlayMemory::DrawImpl(int, int)
    void DebugOverlayMemory::DrawImpl(int param_1, int param_2) {
        int iVar1;
        undefined4 uVar2;
        uint uVar3;
        uint uVar4;
        char* pcVar5;
        Callstack local_2a0[4];
        fixed_string<char, 512, true, eastl::allocator> local_260[552];
        undefined8 local_38;

        local_38 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        callstack::Callstack::Callstack(local_2a0);
        eastl::fixed_string<char, 512, true, eastl::allocator>::fixed_string(local_260);
        new (&local_2a0[0].field_8) eastl::fixed_string<char, 16, true, eastl::allocator>();
        local_2a0->SetRedGreenGradient((int)(field_98656 >> 10), 2596864, 0);
        pcVar5 = DataSizeString<eastl::fixed_string<char, 16, true, eastl::allocator>>(
            (fixed_string*)&local_2a0[0].field_8, field_98656);
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::sprintf(
            (char*)local_260, "Memory: %s", pcVar5);
        uVar2 = local_2a0->GetX();
        (*(code*)field_0[7])(this, local_260, param_1, param_2, uVar2, 255, 2);
        uVar3 = (*(code*)field_0[8])(this, 1);
        if (uVar3 != 0) {
            local_2a0->SetRedGreenGradient((int)(field_98664 >> 10), 2596864, 0);
            pcVar5 = DataSizeString<eastl::fixed_string<char, 16, true, eastl::allocator>>(
                (fixed_string*)&local_2a0[0].field_8, field_98664);
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                sprintf((char*)local_260, "Peak Memory: %s", pcVar5);
            iVar1 = field_112;
            uVar4 = local_2a0->GetX();
            (*(code*)field_0[7])(this, local_260, param_1, param_2 - iVar1, uVar3 | uVar4 & 4294967040, uVar3, 2);
        }
        /* WARNING: Subroutine does not return */
        local_2a0[0].field_8.~fixed_string();
    }

    // 0x1008a69b0, 128 bytes, placed by class name
    // DebugOverlayMemory::UpdateImpl(unsigned long long)
    undefined4 DebugOverlayMemory::UpdateImpl(ulonglong param_1) {
        undefined4 uVar1;
        ulonglong* puVar2;
        ulong local_30;
        ulong local_28;

        puVar2 = (ulonglong*)Instance();
        uVar1 = hardware::HardwareInfo::GetProcessMemoryBytes(puVar2, &local_30, (ulonglong)&local_28);
        if ((char)uVar1 != '\0') {
            field_98656 = local_30;
            field_98664 = local_28;
            (&field_128, param_1, (int)(local_30 >> 10))->RecordValue();
            (&field_128, 2596864)->SetMaximum();
        }
        return uVar1;
    }

    // 0x1008a6a30, 32 bytes, placed by class name
    // DebugOverlayMemory::RegisterTweakyVars(tweak::Container&)
    void DebugOverlayMemory::RegisterTweakyVars(Container* param_1) {
        param_1->AddCheckBox("Display Memory Usage", &field_120);
    }

    // 0x1008cc420: the linker folded this into DebugOverlayLPS::~DebugOverlayLPS(), which has identical code
    DebugOverlayMemory::~DebugOverlayMemory();

    // 0x1008cc430: the linker folded this into DebugOverlayLPS::~DebugOverlayLPS(), which has identical code
    DebugOverlayMemory::~DebugOverlayMemory();

    // 0x1008cfe90: the linker folded this into DebugOverlayLPS::~DebugOverlayLPS(), which has identical code
    DebugOverlayMemory::~DebugOverlayMemory();

} // namespace jag
