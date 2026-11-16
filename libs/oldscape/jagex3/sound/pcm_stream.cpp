// libs/oldscape/jagex3/sound/pcm_stream.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "pcm_stream.h"

namespace jag::oldscape::sound {
    // 0x10029f690, 32 bytes, placed by class name and debug map
    // PCMStream::MaybeMix(Array<int, eastl::allocator>&, int, int)
    void PCMStream::MaybeMix(Array* param_1, int param_2, int param_3) {
        if (field_52 == '\0') {
            (**(code**)(field_0 + 48))(this, param_3);
            return;
        }
        (**(code**)(field_0 + 40))();
    }

    // 0x1002a0530, 32 bytes, inline, placed by debug map only (low confidence)
    // SetWorkerThread()
    void SetWorkerThread() {
        g_idWorkerThread = std::this_thread::get_id();
    }

    // 0x1002a0550, 48 bytes, inline, placed by debug map only (low confidence)
    // ClearWorkerThread()
    void ClearWorkerThread() {
        undefined8 local_10;

        new (&local_10) std::__thread_id();
        g_idWorkerThread = local_10;
    }

    // 0x1002a0620, 16 bytes, placed by class name and debug map
    // PCMStream::RemoveFromMixer()
    void PCMStream::RemoveFromMixer() {
        Unlink();
    }

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    PCMStream::~PCMStream();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    PCMStream::~PCMStream();

} // namespace jag::oldscape::sound

namespace jag {
    // 0x10029fdf0, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::sound::PCMPlayer::PlayerTask>::type make_shared<oldscape::sound::PCMPlayer::PlayerTask, oldscape::sound::PCMPlayer&>(oldscape::sound::PCMPlayer&)
    jag* make_shared<oldscape::sound::PCMPlayer::PlayerTask, oldscape::sound::PCMPlayer&>(PCMPlayer* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        PlayerTask* local_30[2];

        pvVar1 = (void*)aligned_alloc(488, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] = placement_new<oldscape::sound::PCMPlayer::PlayerTask, oldscape::sound::PCMPlayer&>(
                (void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::sound::PCMPlayer::PlayerTask>, int,
                                   oldscape::sound::PCMPlayer::PlayerTask*&>(pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

} // namespace jag
