// libs/graphics/runetek7/animation/WalkMergeDataProvider.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.systemheap

namespace jag::graphics {
    class WalkMergeDataProvider {
    public:
        // virtual methods in vtable order
        virtual ~WalkMergeDataProvider();
        WalkMergeDataProvider();
    };

    // 0x100009e70: WalkMergeDataProvider::~WalkMergeDataProvider() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x1005bf7f0
    WalkMergeDataProvider::WalkMergeDataProvider() {}

} // namespace jag::graphics

namespace jag {
    // 0x1005c02d0
    MakeSharedPoolRefCounter<game::SeqGroupType, MakeSharedPool<game::SeqGroupType, 64>>::MakeSharedPoolRefCounter(
        void* arg1, game::SeqGroupType* seqGroupType)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7a18 + 16;
        *(void**)(this + 16) = arg1;
        *(SeqGroupType**)(this + 24) = seqGroupType;
    }

    // 0x1005c0310
    void MakeSharedPoolRefCounter<game::SeqGroupType, MakeSharedPool<game::SeqGroupType, 64>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<game::SeqGroupType, 64>::deallocate(arg1);
    }

} // namespace jag
