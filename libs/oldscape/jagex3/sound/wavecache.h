// libs/oldscape/jagex3/sound/wavecache.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::sound {
    class WaveCache {
    public:
        GetJagFx(int, int, Array<int, eastl::allocator>&);
        ulong HashAudioID(int, int, bool);
        GetJagVorbis(int, int, Array<int, eastl::allocator>&);
        GetJagVorbisLazy(int, int);
        WaveCache* GetJagFx(char const*, char const*, Array<int, eastl::allocator>&);
        WaveCache* GetJagVorbis(char const*, char const*, Array<int, eastl::allocator>&);
        GetJagFx(int, Array<int, eastl::allocator>&, ErrorCapture&);
        GetJagVorbis(int, Array<int, eastl::allocator>&, ErrorCapture&);
        GetJagVorbisLazy(int, ErrorCapture&);
        WaveCache* GetJagFx(char const*, Array<int, eastl::allocator>&);
        WaveCache* GetJagVorbis(char const*, Array<int, eastl::allocator>&);
        WaveCache(jagex3::Js5&, jagex3::Js5&);
        ~WaveCache();
        WaveCache* GetJagFx(int, ErrorCapture&);

        // data members, from how the methods use this: 136 bytes
        Js5* field_0; // offset 0
        Js5* field_8; // offset 8
        char _unknown_16[120];
    };

    // 0x1002a87e0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // WaveCache::WaveCache(jagex3::Js5&, jagex3::Js5&): jumps straight to the base-object constructor

    // 0x1002a87f0, 160 bytes, base-object constructor, inline, placed by class name and debug map
    // WaveCache::WaveCache(jagex3::Js5&, jagex3::Js5&)
    void WaveCache::WaveCache(Js5* param_1, Js5* param_2) {
        allocator local_30[8];

        field_0 = param_1;
        field_8 = param_2;
        eastl::allocator::allocator(local_30, "EASTL hash_map");
        new (&field_16, local_30) eastl::hash_map<long long, shared_ptr<JagVorbis>, eastl::hash<long long>,
                                                  eastl::equal_to<long long>, eastl::allocator, false>();
        eastl::allocator::allocator(local_30, "EASTL hash_map");
        new (&field_72, local_30) eastl::hash_map<long long, LazyWave, eastl::hash<long long>,
                                                  eastl::equal_to<long long>, eastl::allocator, false>();
        new (&field_128) Array<int, eastl::allocator>();
    }

    // 0x1002a8d00, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // WaveCache::~WaveCache(): jumps straight to the base-object destructor

    // 0x1002a8d10, 64 bytes, base-object destructor, inline, placed by class name and debug map
    // WaveCache::~WaveCache()
    void WaveCache::~WaveCache() {
        (&field_128)->~Array();
        (&field_72)->~hash_map();
        (&field_16)->~hash_map();
    }

    // 0x1002d8bc0, 48 bytes, inline, placed by class name
    // WaveCache::GetJagFx(int, ErrorCapture&)
    WaveCache* WaveCache::GetJagFx(int param_1, ErrorCapture* param_2) {
        undefined4 in_register_00000034;

        GetJagFx(this, param_1, (Array*)param_2, (ErrorCapture*)(CONCAT44(in_register_00000034, param_1) + 128));
        return this;
    }

} // namespace jag::oldscape::sound

namespace jag {
    // 0x1002a8c60, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::sound::WaveCache>::ref_counter_shared(unsigned long, oldscape::sound::WaveCache*): jumps straight to the base-object constructor

    // 0x1002a8c70, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::sound::WaveCache>::ref_counter_shared(unsigned long, oldscape::sound::WaveCache*)
    void ref_counter_shared<oldscape::sound::WaveCache>::ref_counter_shared(ulong param_1, WaveCache* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7708 + 16;
        *(ulong*)(this + 16) = param_1;
        *(WaveCache**)(this + 24) = param_2;
    }

    // 0x1002a8cb0, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::sound::WaveCache>::DeleteData()
    void ref_counter_shared<oldscape::sound::WaveCache>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~WaveCache();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 152;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x1002a8dd0, 32 bytes, inline, placed by debug map only (low confidence)
    // eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>, eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave> >* placement_new<eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>, eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave> >>(void*)
    priority_queue* jag::placement_new<
        eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                              eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
                              eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>(void* param_1) {
        eastl::priority_queue<
            oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
            eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
            eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>::priority_queue(param_1);
        return param_1;
    }

    // 0x1002a8df0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>, eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave> > >* placement_new<ref_counter_shared<eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>, eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave> > >, int, eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>, eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave> >*&>(void*, int&&, eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>, eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave> >*&)
    ref_counter_shared* jag::placement_new<
        ref_counter_shared<eastl::priority_queue<
            oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
            eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
            eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>,
        int,
        eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                              eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
                              eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>*&>(
        void* param_1, int* param_2, priority_queue** param_3) {
        ref_counter_shared<eastl::priority_queue<
            oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
            eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
            eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>::ref_counter_shared(param_1,
                                                                                                     (long)*param_2,
                                                                                                     *param_3);
        return param_1;
    }

} // namespace jag
