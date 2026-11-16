// libs/graphics/runetek7/gui/debug/sections/DebugOverlayDiskCache.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.graphics

namespace jag {
    class DebugOverlayDiskCache {
    public:
        // virtual methods in vtable order
        virtual ~DebugOverlayDiskCache();
        virtual void UpdateOnMainLogic(unsigned long long);
        virtual void RegisterTweakyVars(tweak::Container&);
        virtual void DrawImpl(int, int);
        virtual UpdateImpl(unsigned long long);
        DebugOverlayDiskCache(DebugOverlay&, bool);

        // data members, from how the methods use this: 98680 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[104];
        int field_112; // offset 112
        char _unknown_116[4];
        bool field_120; // offset 120
        char _unknown_121[7];
        TimedGraph field_128; // offset 128
        char _unknown_98600[56];
        LayeredAnimationStateMachineLayerDescriptor* field_98656; // offset 98656
        uint field_98664;                                         // offset 98664
        uint field_98668;                                         // offset 98668
        float field_98672;                                        // offset 98672
        char _unknown_98676[4];
    };

    // 0x1008cc420: the linker folded this into DebugOverlayLPS::~DebugOverlayLPS(), which has identical code
    DebugOverlayDiskCache::~DebugOverlayDiskCache();

    // 0x1008cc430: the linker folded this into DebugOverlayLPS::~DebugOverlayLPS(), which has identical code
    DebugOverlayDiskCache::~DebugOverlayDiskCache();

    // 0x1008cfe90: the linker folded this into DebugOverlayLPS::~DebugOverlayLPS(), which has identical code
    DebugOverlayDiskCache::~DebugOverlayDiskCache();

    // 0x1008fc4f0, 96 bytes, base-object constructor, placed by class name
    // DebugOverlayDiskCache::DebugOverlayDiskCache(DebugOverlay&, bool)
    void DebugOverlayDiskCache::DebugOverlayDiskCache(DebugOverlay* param_1, bool param_2) {
        FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData,
                 unsigned long>* this_00;
        LayeredAnimationStateMachineLayerDescriptor* pLVar1;
        undefined7 in_register_00000011;

        new (1065353216)
            DebugOverlayGraphSection(this, param_1, 10, CONCAT71(in_register_00000011, param_2) & 4294967295, 0);
        field_0 = &PTR__DebugOverlayMemory_100f18858;
        this_00 = (FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData,
                            unsigned long>*)param_1->end();
        pLVar1 = (LayeredAnimationStateMachineLayerDescriptor*)
            FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData,
                     unsigned long>::capacity(this_00);
        field_98656 = pLVar1;
        field_98664 = 0;
    }

    // 0x1008fc550, 16 bytes, complete-object constructor, placed by class name
    // DebugOverlayDiskCache::DebugOverlayDiskCache(DebugOverlay&, bool): jumps straight to the base-object constructor

    // 0x1008fc560, 768 bytes, placed by class name
    // DebugOverlayDiskCache::DrawImpl(int, int)
    void DebugOverlayDiskCache::DrawImpl(int param_1, int param_2) {
        int iVar1;
        undefined4 uVar2;
        uint uVar3;
        uint uVar4;
        Js5DiskCache* this_00;
        ulonglong uVar5;
        ulonglong uVar6;
        char* pcVar7;
        float fVar8;
        float fVar9;
        Callstack local_2b0[5];
        fixed_string<char, 512, true, eastl::allocator> local_260[552];
        undefined8 local_38;

        local_38 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        this_00 = (Js5DiskCache*)field_98656->GetTransitionOutTime();
        if (this_00 == (Js5DiskCache*)0) {
            eastl::fixed_string<char, 512, true, eastl::allocator>::fixed_string(local_260, "Disk Cache Not Available");
            (*(code*)field_0[7])(this, local_260, param_1, param_2, 4278190335, 255, 2);
            /* WARNING: Subroutine does not return */
            local_260->~fixed_string();
        }
        callstack::Callstack::Callstack(local_2b0);
        eastl::fixed_string<char, 512, true, eastl::allocator>::fixed_string(local_260);
        new (&local_2b0[0].field_8) eastl::fixed_string<char, 32, true, eastl::allocator>();
        uVar5 = this_00->GetUsageBytes();
        uVar6 = this_00->GetQuotaBytes();
        fVar8 = Bytes2Megabytes<unsigned long long>(uVar5);
        fVar9 = Bytes2Megabytes<unsigned long long>(uVar6);
        pcVar7 = DataSizeString<eastl::fixed_string<char, 32, true, eastl::allocator>>(
            (fixed_string*)&local_2b0[0].field_8, uVar5);
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::sprintf(
            (char*)local_260, "Disk Cache : %s", pcVar7);
        local_2b0->SetRedGreenGradient((int)fVar8, 0, (int)fVar9);
        uVar2 = local_2b0->GetX();
        (*(code*)field_0[7])(this, local_260, param_1, param_2, uVar2, 255, 2);
        uVar3 = (*(code*)field_0[8])(this, 1);
        if (uVar3 != 0) {
            local_2b0->SetRedGreenGradient(field_98668, 1000, 0);
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                sprintf((char*)local_260, "Queue : %u", (ulong)field_98668);
            iVar1 = field_112;
            uVar4 = local_2b0->GetX();
            (*(code*)field_0[7])(this, local_260, param_1, param_2 - iVar1, uVar3 | uVar4 & 4294967040, uVar3, 2);
            uVar3 = (*(code*)field_0[8])(this, 2);
            if (uVar3 != 0) {
                local_2b0->SetRedGreenGradient((int)field_98672, 1000, 0);
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                    sprintf((char*)local_260, (double)field_98672, "Activity/Tick : %.3f");
                iVar1 = field_112;
                uVar4 = local_2b0->GetX();
                (*(code*)field_0[7])(this, local_260, param_1, param_2 + iVar1 * -2, uVar3 | uVar4 & 4294967040, uVar3,
                                     2);
            }
        }
        /* WARNING: Subroutine does not return */
        local_2b0[0].field_8.~fixed_string();
    }

    // 0x1008fc910, 144 bytes, placed by class name
    // DebugOverlayDiskCache::UpdateOnMainLogic(unsigned long long)
    void DebugOverlayDiskCache::UpdateOnMainLogic(ulonglong param_1) {
        int iVar1;
        Js5DiskCache* this_00;
        uint uVar2;

        this_00 = (Js5DiskCache*)field_98656->GetTransitionOutTime();
        uVar2 = field_98664 + 1;
        field_98664 = uVar2;
        if ((9 < uVar2) && (this_00 != (Js5DiskCache*)0)) {
            field_98664 = 0;
            iVar1 = this_00->GetActivity();
            (field_128, param_1, iVar1)->RecordValue();
            (field_128, 1000)->SetMaximum();
            field_98672 = (float)iVar1 * 0.1;
        }
    }

    // 0x1008fc9c0, 64 bytes, placed by class name
    // DebugOverlayDiskCache::UpdateImpl(unsigned long long)
    undefined4 DebugOverlayDiskCache::UpdateImpl(ulonglong param_1) {
        Js5DiskCache* this_00;

        this_00 = (Js5DiskCache*)field_98656->GetTransitionOutTime();
        if (this_00 != (Js5DiskCache*)0) {
            field_98668 = this_00->GetQueueSize();
        }
        return 1;
    }

    // 0x1008fca20, 32 bytes, placed by class name
    // DebugOverlayDiskCache::RegisterTweakyVars(tweak::Container&)
    void DebugOverlayDiskCache::RegisterTweakyVars(Container* param_1) {
        param_1->AddCheckBox("Display Disk Cache", &field_120);
    }

} // namespace jag
