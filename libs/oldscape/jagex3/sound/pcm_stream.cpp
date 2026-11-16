// libs/oldscape/jagex3/sound/pcm_stream.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "pcm_stream.h"

namespace jag::oldscape::sound {
    // 0x10029f690
    void PCMStream::MaybeMix(Array<int>& arg1, int arg2, int arg3) {
        if (field_52 == '\0') {
            (*this->_vptr[3]._dtor)(this, (unsigned long)(unsigned int)arg3);
        }
        (*this->_vptr[2]._x7e___2)();
    }

    // 0x1002a0530
    void SetWorkerThread() {
        g_idWorkerThread = std::this_thread::get_id();
    }

    // 0x1002a0550
    void ClearWorkerThread() {
        uint64_t local_10;

        new (&local_10) std::__thread_id();
        g_idWorkerThread = local_10;
    }

    // 0x1002a0620
    void PCMStream::RemoveFromMixer() {
        Unlink();
    }

    // 0x100c92b50: PCMStream::~PCMStream() has the same machine code as InlineFatalBreak()

} // namespace jag::oldscape::sound

namespace jag {
    // 0x10029fdf0
    shared_ptr_if_not_array<oldscape::sound::PCMPlayer::PlayerTask>::type
    make_shared<oldscape::sound::PCMPlayer::PlayerTask, oldscape::sound::PCMPlayer&>(
        oldscape::sound::PCMPlayer& pcmPlayer) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_34;
        PlayerTask* local_30[2];

        auto arg1 = aligned_alloc(488, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::sound::PCMPlayer::PlayerTask>::type result;
        } else {
            local_30[0] = placement_new<oldscape::sound::PCMPlayer::PlayerTask, oldscape::sound::PCMPlayer&>(
                (void*)((long)arg1 + 32), pcmPlayer);
            local_34 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::sound::PCMPlayer::PlayerTask>, int,
                              oldscape::sound::PCMPlayer::PlayerTask*&>(arg1, &local_34, local_30);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_30[0]);
        }
        return result;
    }

} // namespace jag
