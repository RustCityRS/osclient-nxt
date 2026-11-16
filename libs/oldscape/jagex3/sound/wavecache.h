// libs/oldscape/jagex3/sound/wavecache.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::sound {
    class WaveCache {
    public:
        auto GetJagFx(int arg1, int arg2, Array<int>& arg3);
        unsigned long HashAudioID(int arg1, int arg2, bool arg3);
        auto GetJagVorbis(int arg1, int arg2, Array<int>& arg3);
        WaveCache* GetJagVorbisLazy(int arg1, int arg2);
        auto GetJagFx(const char* str1, const char* str2, Array<int>& arg3);
        auto GetJagVorbis(const char* str1, const char* str2, Array<int>& arg3);
        auto GetJagFx(int arg1, Array<int>& arg2, ErrorCapture& errorCapture);
        auto GetJagVorbis(int arg1, Array<int>& arg2, ErrorCapture& errorCapture);
        LazyWave GetJagVorbisLazy(int arg1, ErrorCapture& errorCapture);
        auto GetJagFx(const char* str, Array<int>& arg2);
        auto GetJagVorbis(const char* str, Array<int>& arg2);
        WaveCache(jagex3::Js5& js51, jagex3::Js5& js52);
        ~WaveCache();
        WaveCache* GetJagFx(int arg1, ErrorCapture& errorCapture);

    private:
        Js5* field_0;
        Js5* field_8;
        uint8_t _unknown_16[120];
    };

    // 0x1002a87f0
    WaveCache::WaveCache(jagex3::Js5& js51, jagex3::Js5& js52) : field_0(js51), field_8(js52) {

        new (&field_16) eastl::hash_map<long long, shared_ptr<JagVorbis>>(local_30);
        new (&field_72) eastl::hash_map<long long, LazyWave>(local_30);
        new (&field_128) Array<int>();
    }

    // 0x1002a8d10
    WaveCache::~WaveCache() {
        field_128.~Array();
        field_72.~hash_map();
        field_16.~hash_map();
    }

    // 0x1002d8bc0
    WaveCache* WaveCache::GetJagFx(int arg1, ErrorCapture& errorCapture) {
        ErrorCapture* in_RCX;
        uint32_t in_register_00000034;

        *this = ((WaveCache*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1))
                    ->GetJagFx((int)errorCapture,
                               (Array<int>*)((((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1) + 128), in_RCX);
        return this;
    }

} // namespace jag::oldscape::sound

namespace jag {
    // 0x1002a8c70
    ref_counter_shared<oldscape::sound::WaveCache>::ref_counter_shared(unsigned long arg1,
                                                                       oldscape::sound::WaveCache* waveCache)
        : ref_counter_base() {}

    // 0x1002a8cb0
    void ref_counter_shared<oldscape::sound::WaveCache>::DeleteData() {
        ref_counter_shared<oldscape::sound::WaveCache> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((WaveCache*)((long)&(this[3]._vptr)->_dtor + lVar2))->~WaveCache();
                    prVar1 = (ref_counter_shared<oldscape::sound::WaveCache> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 152;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x1002a8dd0
    eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                          eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>*
    placement_new<eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                                        eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>(
        void* arg1) {
        new (arg1) eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                                         eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>();
        return arg1;
    }

    // 0x1002a8df0
    ref_counter_shared<eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                                             eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>*
    placement_new<
        ref_counter_shared<eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                                                 eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>,
        int,
        eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                              eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>*&>(
        void* arg1, int&& arg2,
        eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                              eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>*& arg3) {
        new (arg1) ref_counter_shared<
            eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                                  eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>((long)*arg2,
                                                                                                         arg3);
        return arg1;
    }

} // namespace jag
