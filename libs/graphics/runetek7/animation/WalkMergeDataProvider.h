// libs/graphics/runetek7/animation/WalkMergeDataProvider.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.systemheap

namespace jag::graphics {
    class WalkMergeDataProvider {
    public:
        // virtual methods in vtable order
        virtual ~WalkMergeDataProvider();
        WalkMergeDataProvider();

        // data members, from how the methods use this: 8 bytes
        undefined* field_0; // offset 0, vtable pointer
    };

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    WalkMergeDataProvider::~WalkMergeDataProvider();

    // 0x1005bf7f0, 32 bytes, base-object constructor, inline, placed by class name and debug map
    // WalkMergeDataProvider::WalkMergeDataProvider()
    void WalkMergeDataProvider::WalkMergeDataProvider() {
        field_0 = PTR_vtable_100ee8840 + 16;
    }

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    WalkMergeDataProvider::~WalkMergeDataProvider();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    WalkMergeDataProvider::~WalkMergeDataProvider();

} // namespace jag::graphics

namespace jag {
    // 0x1005c02c0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::SeqGroupType, MakeSharedPool<game::SeqGroupType, 64> >::MakeSharedPoolRefCounter(void*, game::SeqGroupType*): jumps straight to the base-object constructor

    // 0x1005c02d0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::SeqGroupType, MakeSharedPool<game::SeqGroupType, 64> >::MakeSharedPoolRefCounter(void*, game::SeqGroupType*)
    void
    jag::MakeSharedPoolRefCounter<game::SeqGroupType, MakeSharedPool<game::SeqGroupType, 64>>::MakeSharedPoolRefCounter(
        MakeSharedPoolRefCounter<game::SeqGroupType, MakeSharedPool<game::SeqGroupType, 64>>* this, void* param_1,
        SeqGroupType* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7a18 + 16;
        *(void**)(this + 16) = param_1;
        *(SeqGroupType**)(this + 24) = param_2;
    }

    // 0x1005c0310, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::SeqGroupType, MakeSharedPool<game::SeqGroupType, 64> >::DeleteSelf()
    void jag::MakeSharedPoolRefCounter<game::SeqGroupType, MakeSharedPool<game::SeqGroupType, 64>>::DeleteSelf(
        MakeSharedPoolRefCounter<game::SeqGroupType, MakeSharedPool<game::SeqGroupType, 64>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<game::SeqGroupType, 64>::deallocate(pvVar1);
    }

} // namespace jag
