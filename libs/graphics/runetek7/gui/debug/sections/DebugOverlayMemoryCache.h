// libs/graphics/runetek7/gui/debug/sections/DebugOverlayMemoryCache.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.graphics

namespace jag {
    class DebugOverlayMemoryCache {
    public:
        // virtual methods in vtable order
        virtual ~DebugOverlayMemoryCache();
        virtual void RegisterTweakyVars(tweak::Container&);
        virtual void DrawImpl(int, int);
        virtual UpdateImpl(unsigned long long);
        DebugOverlayMemoryCache(DebugOverlay&, bool);

        // data members, from how the methods use this: 98676 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[104];
        int field_112; // offset 112
        char _unknown_116[4];
        bool field_120; // offset 120
        char _unknown_121[98535];
        Js5ResourceProvider* field_98656; // offset 98656
        float field_98664;                // offset 98664
        uint field_98668;                 // offset 98668
        char _unknown_98672[4];
    };

    // 0x1008a6a50, 96 bytes, base-object constructor, placed by class name
    // DebugOverlayMemoryCache::DebugOverlayMemoryCache(DebugOverlay&, bool)
    void DebugOverlayMemoryCache::DebugOverlayMemoryCache(DebugOverlay* param_1, bool param_2) {
        FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData,
                 unsigned long>* this_00;
        Js5ResourceProvider* pJVar1;
        undefined7 in_register_00000011;

        new (1065353216)
            DebugOverlayGraphSection(this, param_1, 9, CONCAT71(in_register_00000011, param_2) & 4294967295, 0);
        field_0 = &PTR__DebugOverlayMemory_100f18038;
        this_00 = (FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData,
                            unsigned long>*)param_1->end();
        pJVar1 = (Js5ResourceProvider*)
            FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData,
                     unsigned long>::capacity(this_00);
        field_98656 = pJVar1;
        field_98664 = 1.0;
        field_98668 = 1;
    }

    // 0x1008a6ab0, 16 bytes, complete-object constructor, placed by class name
    // DebugOverlayMemoryCache::DebugOverlayMemoryCache(DebugOverlay&, bool): jumps straight to the base-object constructor

    // 0x1008a6ac0, 464 bytes, placed by class name
    // DebugOverlayMemoryCache::DrawImpl(int, int)
    void DebugOverlayMemoryCache::DrawImpl(int param_1, int param_2) {
        uint uVar1;
        undefined4 uVar2;
        int iVar3;
        uint uVar4;
        CoordMapSquare* this_00;
        Js5MemoryCache* this_01;
        Callstack local_260[35];
        undefined8 local_30;

        local_30 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        this_00 = (CoordMapSquare*)field_98656->GetMemoryCache();
        uVar1 = this_00->GetX();
        field_98668 = uVar1 >> 20;
        this_01 = (Js5MemoryCache*)field_98656->GetMemoryCache();
        uVar1 = this_01->GetCacheUsageBytes();
        field_98664 = (float)uVar1 * 9.536743e-07;
        callstack::Callstack::Callstack(local_260);
        new (&local_260[0].field_8) eastl::fixed_string<char, 512, true, eastl::allocator>();
        local_260->SetRedGreenGradient((int)field_98664, field_98668, 0);
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::sprintf(
            &local_260[0].field_8, (double)field_98664, "Memory Cache: %.3fMb / %uMb", (ulong)field_98668);
        uVar2 = local_260->GetX();
        (*(code*)field_0[7])(this, &local_260[0].field_8, param_1, param_2, uVar2, 255, 2);
        uVar1 = (*(code*)field_0[8])(this, 1);
        if (uVar1 != 0) {
            iVar3 = (&field_128)->GetMax();
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                sprintf(&local_260[0].field_8, (double)iVar3 * 9.5367431640625e-07, "Peak Usage : %.3fMb");
            iVar3 = field_112;
            uVar4 = local_260->GetX();
            (*(code*)field_0[7])(this, &local_260[0].field_8, param_1, param_2 - iVar3, uVar1 | uVar4 & 4294967040,
                                 uVar1, 2);
        }
        /* WARNING: Subroutine does not return */
        local_260[0].field_8.~fixed_string();
    }

    // 0x1008a6cb0, 64 bytes, placed by class name
    // DebugOverlayMemoryCache::UpdateImpl(unsigned long long)
    undefined1 DebugOverlayMemoryCache::UpdateImpl(ulonglong param_1) {
        (&field_128, param_1, (int)field_98664)->RecordValue();
        (&field_128, field_98668)->SetMaximum();
        return 1;
    }

    // 0x1008a6cf0, 32 bytes, placed by class name
    // DebugOverlayMemoryCache::RegisterTweakyVars(tweak::Container&)
    void DebugOverlayMemoryCache::RegisterTweakyVars(Container* param_1) {
        param_1->AddCheckBox("Display Memory Cache Usage", &field_120);
    }

    // 0x1008cc420: the linker folded this into DebugOverlayLPS::~DebugOverlayLPS(), which has identical code
    DebugOverlayMemoryCache::~DebugOverlayMemoryCache();

    // 0x1008cc430: the linker folded this into DebugOverlayLPS::~DebugOverlayLPS(), which has identical code
    DebugOverlayMemoryCache::~DebugOverlayMemoryCache();

    // 0x1008cfe90: the linker folded this into DebugOverlayLPS::~DebugOverlayLPS(), which has identical code
    DebugOverlayMemoryCache::~DebugOverlayMemoryCache();

} // namespace jag
