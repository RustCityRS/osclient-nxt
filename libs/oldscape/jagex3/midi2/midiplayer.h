// libs/oldscape/jagex3/midi2/midiplayer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::midi2 {
    class MidiPlayer {
    public:
        class ThreadStateTransfer;
        // virtual methods in vtable order
        virtual ~MidiPlayer();
        virtual auto SubstreamStart();
        virtual MidiPlayer* SubstreamNext();
        virtual uint64_t SelfMixCost();
        virtual void DoMix(Array<int>& arg1, int arg2, int arg3);
        virtual void PretendToMix(int arg1);
        virtual void QueueSetGlobalVolume(int arg1);
        virtual ThreadStateTransfer GetGlobalVolume();
        virtual uint8_t
        LoadAndQueuePatches(MidiFile& midiFile, jagex3::Js5& js5, sound::WaveCache& waveCache,
                            eastl::priority_queue<MidiPlayerMainThread::QueuedLazyWave,
                                                  eastl::vector<MidiPlayerMainThread::QueuedLazyWave>>* priority_queue,
                            ErrorCapture& errorCapture);
        virtual void QueueDropWaveIds();
        virtual void QueueDropPatches();
        virtual void QueuePlayFile(MidiFile& midiFile, bool arg2, ErrorCapture& errorCapture);
        virtual void QueueStopFile();
        virtual bool IsPlayingFile();
        virtual unsigned long HasPatchesLoaded();
        virtual void QueueSetDefInst(int arg1, int arg2);
        virtual void QueuePause(bool arg1);
        virtual void SpawnWaveLoadingTask(
            shared_ptr<eastl::priority_queue<MidiPlayerMainThread::QueuedLazyWave,
                                             eastl::vector<MidiPlayerMainThread::QueuedLazyWave>>>&& priority_queue);
        unsigned long UpdateStreamlessNote(MidiNote& midiNote);
        bool UpdateNote(MidiNote& midiNote, Array<int>& arg2, int arg3, int arg4);
        void SetSampleOffset(const MidiNote& midiNote, bool arg2);
        MidiPlayer();
        void Reset2();
        void SetTempoFactor(int arg1);
        void GetTempoFactor();
        void InjectPatch(shared_ptr<Patch>& patch, int arg2);
        void DropPatch(int arg1);
        void PullXferStateIntoWorker();
        void SetDefInst2(int arg1, int arg2);
        void SetInst(int arg1, int arg2);
        void SetInst2(int arg1, int arg2);
        void PlayNote(int arg1, int arg2, int arg3);
        void PlayNote2(int arg1, int arg2, int arg3);
        void StopNote(int arg1, int arg2, int arg3);
        void StopNote2(int arg1, int arg2, int arg3);
        void AfterTouch(int arg1, int arg2, int arg3);
        void AfterTouch2(int arg1, int arg2, int arg3);
        void ChannelPressure(int arg1, int arg2);
        void ChannelPressure2(int arg1, int arg2);
        void PitchWheel(int arg1, int arg2);
        void PitchWheel2(int arg1, int arg2);
        void AllSoundOff(int arg1);
        void AllSoundOff2(int arg1);
        void AllControllersOff(int arg1);
        void AllControllersOff2(int arg1);
        void AllNotesOff(int arg1);
        void AllNotesOff2(int arg1);
        void Reset();
        void ProcessMidi(int arg1);
        void ProcessMidi2(int arg1);
        int GetRateRaw(const MidiNote& midiNote);
        int GetVolume(const MidiNote& midiNote);
        int GetPan(const MidiNote& midiNote);
        void CleanPorta(int arg1);
        void CleanRetrig(int arg1);
        void SetRetrigRate(int arg1, int arg2);
        void UpdateMidi();

    private:
        uint8_t _unknown_8[40];
        uint32_t field_48;
        uint8_t field_52;
        uint8_t _unknown_53[35];
        shared_ptr field_88;
        uint8_t _unknown_104[312];
        int field_416;
        int field_420;
        bool field_424;
        uint8_t _unknown_425[775];
        ThreadStateTransfer m_globalVolume;
        uint8_t _unknown_1448[65600];
        MidiParser field_67048;
        uint8_t field_67232;
        uint8_t _unknown_67233[3];
        int field_67236;
        int field_67240;
        uint8_t _unknown_67244[4];
        unsigned long field_67248;
        uint64_t field_67256;
        uint8_t _unknown_67264[8];
    };

    class MidiPlayer::ThreadStateTransfer {
    public:
        ThreadStateTransfer();
        ~ThreadStateTransfer();

    private:
        uint32_t field_0;
        uint32_t field_4;
        uint32_t field_8;
        uint8_t _unknown_12[4];
        MidiParser field_16;
        uint8_t field_200;
        uint8_t _unknown_201[3];
        uint32_t field_204;
        uint32_t field_208;
        uint8_t _unknown_212[28];
        uint32_t field_240;
        uint8_t _unknown_244[4];
    };

    class MidiPlayerMainThread {
    public:
        class QueuedLazyWave;
        MidiPlayerMainThread();
        ~MidiPlayerMainThread();

    private:
        uint32_t field_8;
        uint8_t _unknown_12[12];
    };

    class MidiPlayerMainThread::QueuedLazyWave {
    public:
        ~QueuedLazyWave();
        QueuedLazyWave(QueuedLazyWave&& queuedLazyWave);
        QueuedLazyWave(const QueuedLazyWave& queuedLazyWave);
        QueuedLazyWave* operator=(const QueuedLazyWave& queuedLazyWave);
        QueuedLazyWave* operator=(QueuedLazyWave&& queuedLazyWave);

    private:
        uint32_t field_0;
        uint8_t _unknown_4[4];
        LazyWave field_8;
    };

    // 0x1002d1480
    MidiPlayerMainThread::MidiPlayerMainThread() {
        field_0 = PTR_vtable_100ee8938 + 16;
        field_8 = 0;
        new (&field_16) shared_ptr();
    }

    // 0x1002d1710
    MidiPlayerMainThread::~MidiPlayerMainThread() {
        field_0 = PTR_vtable_100ee8938 + 16;
        field_16.~shared_ptr();
    }

    // 0x1002d99a0
    void MidiPlayer::QueueSetGlobalVolume(int arg1) {
        *(int*)m_globalVolume = arg1;
    }

    // 0x1002d99b0
    ThreadStateTransfer MidiPlayer::GetGlobalVolume() {
        return *(uint32_t*)m_globalVolume;
    }

    // 0x1002db780
    MidiPlayer::ThreadStateTransfer::ThreadStateTransfer()
        : field_0(256), field_4(0), field_8(0), field_200(0), field_204(0), field_208(0), field_240(0) {}

    // 0x1002dba10
    MidiPlayer::ThreadStateTransfer::~ThreadStateTransfer() {
        field_216.~vector();
        field_16->~MidiParser();
    }

    // 0x1002dbaa0
    MidiPlayer::SpawnWaveLoadingTask(
        shared_ptr<eastl::priority_queue<MidiPlayerMainThread::QueuedLazyWave,
                                         eastl::vector<MidiPlayerMainThread::QueuedLazyWave>>>&&)::$_3::~$_3() {
        ((this + 16))->~shared_ptr();
    }

    // 0x1002dc4b0
    MidiPlayer::~MidiPlayer() {
        *(uint8_t***)&field_72 = &PTR_QueueSetGlobalVolume_100efa248;
        field_67264.~shared_ptr();
        field_67048->~MidiParser();
        field_34280.~array();
        field_1512.~array();
        (&field_1448)->~mutex();
        m_globalVolume->~ThreadStateTransfer();
        (&field_352)->~mutex();
        field_296.~hash_map();
        field_72.~MidiPlayerMainThread();
    }

    // 0x1002e7020
    MidiPlayerMainThread::QueuedLazyWave::QueuedLazyWave(MidiPlayerMainThread::QueuedLazyWave&& queuedLazyWave)
        : field_0(queuedLazyWave.field_0), field_8(queuedLazyWave.field_8) {}

    // 0x1002e7260
    MidiPlayerMainThread::QueuedLazyWave::QueuedLazyWave(const MidiPlayerMainThread::QueuedLazyWave& queuedLazyWave)
        : field_0(queuedLazyWave.field_0), field_8(queuedLazyWave.field_8) {}

    // 0x1002e7340
    QueuedLazyWave*
    MidiPlayerMainThread::QueuedLazyWave::operator=(const MidiPlayerMainThread::QueuedLazyWave& queuedLazyWave) {
        field_0 = queuedLazyWave.field_0;
        *field_8 = queuedLazyWave.field_8;
        return this;
    }

    // 0x1002e7e20
    MidiPlayer::SpawnWaveLoadingTask(
        shared_ptr<eastl::priority_queue<MidiPlayerMainThread::QueuedLazyWave,
                                         eastl::vector<MidiPlayerMainThread::QueuedLazyWave>>>&&)::$_3::$_3($_3&&
                                                                                                                arg1) {
        shared_ptr<FileRSevenDebugPresetProvider, void>(arg1);
        ((this + 16))->shared_ptr<FileRSevenDebugPresetProvider, void>(*((arg1 + 16)));
    }

    // 0x1002e7f40
    void MidiPlayer::SpawnWaveLoadingTask(
        shared_ptr<eastl::priority_queue<MidiPlayerMainThread::QueuedLazyWave,
                                         eastl::vector<MidiPlayerMainThread::QueuedLazyWave>>>&&)::$_3::operator()()
        const {
        priority_queue<MidiPlayerMainThread::QueuedLazyWave, eastl::vector<MidiPlayerMainThread::QueuedLazyWave>>*
            ppVar3;
        long lVar4;
        memory_order memory_order;
        LazyWave* in_RSI;

        stack<jag::math::Rect<int>, eastl::vector<jag::math::Rect<int>>>* psVar2 =
            (stack<jag::math::Rect<int>, eastl::vector<jag::math::Rect<int>>>*)(*this).operator->();
        bool cVar1 = psVar2->empty();
        if (!cVar1) {
            do {
                memory_order = (memory_order)in_RSI;
                cVar1 = ((__atomic_base<bool, false>*)(*((this + 16))).operator->())->load(memory_order);
                if (cVar1) {
                    return;
                }
                ppVar3 = (priority_queue<MidiPlayerMainThread::QueuedLazyWave,
                                         eastl::vector<MidiPlayerMainThread::QueuedLazyWave>>*)(*this)
                             .operator->();
                lVar4 = ppVar3->top();
                in_RSI = (LazyWave*)(lVar4 + 8);
                (in_RSI->TryGet()).~shared_ptr();
                ppVar3 = (priority_queue<MidiPlayerMainThread::QueuedLazyWave,
                                         eastl::vector<MidiPlayerMainThread::QueuedLazyWave>>*)(*this)
                             .operator->();
                ppVar3->pop();
                psVar2 = (stack<jag::math::Rect<int>, eastl::vector<jag::math::Rect<int>>>*)(*this).operator->();
                cVar1 = psVar2->empty();
            } while (!cVar1);
        }
    }

    // 0x1002e81b0
    QueuedLazyWave*
    MidiPlayerMainThread::QueuedLazyWave::operator=(MidiPlayerMainThread::QueuedLazyWave&& queuedLazyWave) {
        field_0 = queuedLazyWave.field_0;
        *field_8 = queuedLazyWave.field_8;
        return this;
    }

} // namespace jag::oldscape::midi2

namespace jag {
    // 0x1002d1500
    shared_ptr_if_not_array<oldscape::midi2::MidiMixer>::type
    make_shared<oldscape::midi2::MidiMixer, oldscape::midi2::MidiPlayer&>(oldscape::midi2::MidiPlayer& midiPlayer) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_34;
        MidiMixer* local_30[2];

        auto arg1 = aligned_alloc(304, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::midi2::MidiMixer>::type result;
        } else {
            local_30[0] = placement_new<oldscape::midi2::MidiMixer, oldscape::midi2::MidiPlayer&>(
                (void*)((long)arg1 + 32), midiPlayer);
            local_34 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::midi2::MidiMixer>, int, oldscape::midi2::MidiMixer*&>(
                    arg1, &local_34, local_30);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_30[0]);
        }
        return result;
    }

} // namespace jag
