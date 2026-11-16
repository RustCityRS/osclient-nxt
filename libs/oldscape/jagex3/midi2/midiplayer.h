// libs/oldscape/jagex3/midi2/midiplayer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::midi2 {
    class MidiPlayer {
    public:
        class ThreadStateTransfer;
        // virtual methods in vtable order
        virtual ~MidiPlayer();
        virtual SubstreamStart();
        virtual MidiPlayer* SubstreamNext();
        virtual SelfMixCost();
        virtual void DoMix(Array<int, eastl::allocator>&, int, int);
        virtual void PretendToMix(int);
        virtual void QueueSetGlobalVolume(int);
        virtual int GetGlobalVolume();
        virtual byte
        LoadAndQueuePatches(MidiFile&, jagex3::Js5&, sound::WaveCache&,
                            eastl::priority_queue<MidiPlayerMainThread::QueuedLazyWave,
                                                  eastl::vector<MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
                                                  eastl::less<MidiPlayerMainThread::QueuedLazyWave>>*,
                            ErrorCapture&);
        virtual void QueueDropWaveIds();
        virtual void QueueDropPatches();
        virtual void QueuePlayFile(MidiFile&, bool, ErrorCapture&);
        virtual void QueueStopFile();
        virtual bool IsPlayingFile();
        virtual ulong HasPatchesLoaded();
        virtual void QueueSetDefInst(int, int);
        virtual void QueuePause(bool);
        virtual void SpawnWaveLoadingTask(
            shared_ptr<eastl::priority_queue<MidiPlayerMainThread::QueuedLazyWave,
                                             eastl::vector<MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
                                             eastl::less<MidiPlayerMainThread::QueuedLazyWave>>>&&);
        ulong UpdateStreamlessNote(MidiNote&);
        bool UpdateNote(MidiNote&, Array<int, eastl::allocator>&, int, int);
        void SetSampleOffset(MidiNote const&, bool);
        MidiPlayer();
        void Reset2();
        void SetTempoFactor(int);
        void GetTempoFactor();
        void InjectPatch(shared_ptr<Patch>&, int);
        void DropPatch(int);
        void PullXferStateIntoWorker();
        void SetDefInst2(int, int);
        void SetInst(int, int);
        void SetInst2(int, int);
        void PlayNote(int, int, int);
        void PlayNote2(int, int, int);
        void StopNote(int, int, int);
        void StopNote2(int, int, int);
        void AfterTouch(int, int, int);
        void AfterTouch2(int, int, int);
        void ChannelPressure(int, int);
        void ChannelPressure2(int, int);
        void PitchWheel(int, int);
        void PitchWheel2(int, int);
        void AllSoundOff(int);
        void AllSoundOff2(int);
        void AllControllersOff(int);
        void AllControllersOff2(int);
        void AllNotesOff(int);
        void AllNotesOff2(int);
        void Reset();
        void ProcessMidi(int);
        void ProcessMidi2(int);
        int GetRateRaw(MidiNote const&);
        int GetVolume(MidiNote const&);
        int GetPan(MidiNote const&);
        void CleanPorta(int);
        void CleanRetrig(int);
        void SetRetrigRate(int, int);
        void UpdateMidi();

        // data members, from how the methods use this: 67272 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[40];
        undefined4 field_48; // offset 48
        undefined1 field_52; // offset 52
        char _unknown_53[19];
        undefined** field_72; // offset 72
        char _unknown_80[8];
        shared_ptr field_88; // offset 88
        char _unknown_104[192];
        shared_ptr field_296; // offset 296
        char _unknown_312[104];
        int field_416;  // offset 416
        int field_420;  // offset 420
        bool field_424; // offset 424
        char _unknown_425[775];
        int m_globalVolume;    // offset 1200
        uint field_1204;       // offset 1204
        undefined4 field_1208; // offset 1208
        char _unknown_1212[4];
        MidiParser field_1216; // offset 1216
        bool field_1400;       // offset 1400
        char _unknown_1401[3];
        undefined4 field_1404; // offset 1404
        int field_1408;        // offset 1408
        char _unknown_1412[28];
        undefined4 field_1440; // offset 1440
        char _unknown_1444[65604];
        MidiParser field_67048; // offset 67048
        bool field_67232;       // offset 67232
        char _unknown_67233[3];
        int field_67236; // offset 67236
        int field_67240; // offset 67240
        char _unknown_67244[4];
        ulong field_67248;      // offset 67248
        undefined8 field_67256; // offset 67256
        char _unknown_67264[8];
    };

    class MidiPlayer::ThreadStateTransfer {
    public:
        ThreadStateTransfer();
        ~ThreadStateTransfer();

        // data members, from how the methods use this: 248 bytes
        undefined4 field_0; // offset 0
        undefined4 field_4; // offset 4
        undefined4 field_8; // offset 8
        char _unknown_12[4];
        MidiParser field_16;  // offset 16
        undefined1 field_200; // offset 200
        char _unknown_201[3];
        undefined4 field_204; // offset 204
        undefined4 field_208; // offset 208
        char _unknown_212[28];
        undefined4 field_240; // offset 240
        char _unknown_244[4];
    };

    class MidiPlayerMainThread {
    public:
        class QueuedLazyWave;
        MidiPlayerMainThread();
        ~MidiPlayerMainThread();

        // data members, from how the methods use this: 24 bytes
        undefined* field_0; // offset 0, vtable pointer
        undefined4 field_8; // offset 8
        char _unknown_12[12];
    };

    class MidiPlayerMainThread::QueuedLazyWave {
    public:
        ~QueuedLazyWave();
        QueuedLazyWave(QueuedLazyWave&&);
        QueuedLazyWave(QueuedLazyWave const&);
        QueuedLazyWave* operator=(QueuedLazyWave const&);
        QueuedLazyWave* operator=(QueuedLazyWave&&);

        // data members, from how the methods use this: 24 bytes
        undefined4 field_0; // offset 0
        char _unknown_4[4];
        LazyWave field_8; // offset 8
    };

    // 0x1002d1480, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MidiPlayerMainThread::MidiPlayerMainThread()
    void MidiPlayerMainThread::MidiPlayerMainThread() {
        _func_decltype_nullptr* in_RSI;

        field_0 = PTR_vtable_100ee8938 + 16;
        field_8 = 0;
        new (&field_16, in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
    }

    // 0x1002d14d0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // MidiPlayer::ThreadStateTransfer::ThreadStateTransfer(): jumps straight to the base-object constructor

    // 0x1002d1700, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // MidiPlayer::ThreadStateTransfer::~ThreadStateTransfer(): jumps straight to the base-object destructor

    // 0x1002d1710, 32 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // MidiPlayerMainThread::~MidiPlayerMainThread()
    void MidiPlayerMainThread::~MidiPlayerMainThread() {
        field_0 = PTR_vtable_100ee8938 + 16;
        (&field_16)->~shared_ptr();
    }

    // 0x1002d23e0, 16 bytes, complete-object destructor, inline, placed by class name
    // MidiPlayer::SpawnWaveLoadingTask(shared_ptr<eastl::priority_queue<MidiPlayerMainThread::QueuedLazyWave, eastl::vector<MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>, eastl::less<MidiPlayerMainThread::QueuedLazyWave> > >&&)::$_3::~$_3(): jumps straight to the base-object destructor

    // 0x1002d9970, 16 bytes, complete-object destructor, inline, placed by class name
    // MidiPlayer::~MidiPlayer(): jumps straight to the base-object destructor

    // 0x1002d9980, 32 bytes, deleting destructor, inline, placed by class name
    // MidiPlayer::~MidiPlayer()
    void MidiPlayer::~MidiPlayer() {
        ~MidiPlayer(this);
        operator_delete(this);
    }

    // 0x1002d99a0, 16 bytes, inline, placed by class name
    // MidiPlayer::QueueSetGlobalVolume(int)
    void MidiPlayer::QueueSetGlobalVolume(int param_1) {
        m_globalVolume = param_1;
    }

    // 0x1002d99b0, 16 bytes, inline, placed by class name
    // MidiPlayer::GetGlobalVolume()
    int MidiPlayer::GetGlobalVolume() {
        return m_globalVolume;
    }

    // 0x1002db780, 128 bytes, base-object constructor, inline, placed by class name
    // MidiPlayer::ThreadStateTransfer::ThreadStateTransfer()
    void MidiPlayer::ThreadStateTransfer::ThreadStateTransfer() {
        field_0 = 256;
        field_4 = 0;
        field_8 = 0;
        new (field_16) MidiParser();
        field_200 = 0;
        field_204 = 0;
        field_208 = 0;
        eastl::vector<std::pair<int, int>, BucketAllocatorEASTL>::vector();
        field_240 = 0;
    }

    // 0x1002dba10, 48 bytes, base-object destructor, inline, placed by class name
    // MidiPlayer::ThreadStateTransfer::~ThreadStateTransfer()
    void MidiPlayer::ThreadStateTransfer::~ThreadStateTransfer() {
        (&field_216)->~vector();
        field_16->~MidiParser();
    }

    // 0x1002dbaa0, 48 bytes, base-object destructor, inline, placed by class name
    // MidiPlayer::SpawnWaveLoadingTask(shared_ptr<eastl::priority_queue<MidiPlayerMainThread::QueuedLazyWave, eastl::vector<MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>, eastl::less<MidiPlayerMainThread::QueuedLazyWave> > >&&)::$_3::~$_3()
    /* ~$_3() */

    void MidiPlayer::SpawnWaveLoadingTask(
        shared_ptr<eastl::priority_queue<MidiPlayerMainThread::QueuedLazyWave,
                                         eastl::vector<MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
                                         eastl::less<MidiPlayerMainThread::QueuedLazyWave>>>&&)::$_3::~__3() {
        ((this + 16))->~shared_ptr();
        ~shared_ptr();
    }

    // 0x1002dc4b0, 160 bytes, base-object destructor, inline, placed by class name
    // MidiPlayer::~MidiPlayer()
    void MidiPlayer::~MidiPlayer() {
        field_0 = &PTR__MidiPlayer_100efa1a0;
        field_72 = &PTR_QueueSetGlobalVolume_100efa248;
        (&field_67264)->~shared_ptr();
        field_67048->~MidiParser();
        (&field_34280)->~array();
        (&field_1512)->~array();
        (&field_1448)->~mutex();
        (&m_globalVolume)->~ThreadStateTransfer();
        (&field_352)->~mutex();
        field_296->~hash_map();
        (&field_72)->~MidiPlayerMainThread();
        ~PCMStream();
    }

    // 0x1002e6f30, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // MidiPlayerMainThread::QueuedLazyWave::QueuedLazyWave(MidiPlayerMainThread::QueuedLazyWave&&): jumps straight to the base-object constructor

    // 0x1002e7020, 32 bytes, base-object constructor, inline, placed by class header (inline)
    // MidiPlayerMainThread::QueuedLazyWave::QueuedLazyWave(MidiPlayerMainThread::QueuedLazyWave&&)
    void MidiPlayerMainThread::QueuedLazyWave::QueuedLazyWave(QueuedLazyWave* param_1) {
        field_0 = param_1->field_0;
        new (field_8, (OperationBuffer*)param_1->field_8) dash3d::OperationBuffer();
    }

    // 0x1002e7240, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // MidiPlayerMainThread::QueuedLazyWave::QueuedLazyWave(MidiPlayerMainThread::QueuedLazyWave const&): jumps straight to the base-object constructor

    // 0x1002e7260, 32 bytes, base-object constructor, inline, placed by class header (inline)
    // MidiPlayerMainThread::QueuedLazyWave::QueuedLazyWave(MidiPlayerMainThread::QueuedLazyWave const&)
    void MidiPlayerMainThread::QueuedLazyWave::QueuedLazyWave(QueuedLazyWave* param_1) {
        field_0 = param_1->field_0;
        new (field_8, (OperationBuffer*)param_1->field_8) dash3d::OperationBuffer();
    }

    // 0x1002e7340, 48 bytes, inline, placed by class header (inline)
    // MidiPlayerMainThread::QueuedLazyWave::operator=(MidiPlayerMainThread::QueuedLazyWave const&)
    /* MidiPlayerMainThread::QueuedLazyWave::TEMPNAMEPLACEHOLDERVALUE(MidiPlayerMainThread::QueuedLazyWave
   const&) */

    QueuedLazyWave* MidiPlayerMainThread::QueuedLazyWave::operator=(QueuedLazyWave* param_1) {
        field_0 = param_1->field_0;
        sound::LazyWave::operator=((LazyWave*)field_8, (LazyWave*)param_1->field_8);
        return this;
    }

    // 0x1002e7e10, 16 bytes, complete-object constructor, inline, placed by class name
    // MidiPlayer::SpawnWaveLoadingTask(shared_ptr<eastl::priority_queue<MidiPlayerMainThread::QueuedLazyWave, eastl::vector<MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>, eastl::less<MidiPlayerMainThread::QueuedLazyWave> > >&&)::$_3::$_3($_3&&): jumps straight to the base-object constructor

    // 0x1002e7e20, 64 bytes, base-object constructor, inline, placed by class name
    // MidiPlayer::SpawnWaveLoadingTask(shared_ptr<eastl::priority_queue<MidiPlayerMainThread::QueuedLazyWave, eastl::vector<MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>, eastl::less<MidiPlayerMainThread::QueuedLazyWave> > >&&)::$_3::$_3($_3&&)
    /* $_3($_3&&) */

    void MidiPlayer::SpawnWaveLoadingTask(
        shared_ptr<eastl::priority_queue<
            MidiPlayerMainThread::QueuedLazyWave, eastl::vector<MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
            eastl::less<MidiPlayerMainThread::QueuedLazyWave>>>&&)::$_3::__3(__3* param_1) {
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)this, (shared_ptr*)param_1);
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)(this + 16), (shared_ptr*)(param_1 + 1));
    }

    // 0x1002e7f40, 160 bytes, inline, placed by class name
    // MidiPlayer::SpawnWaveLoadingTask(shared_ptr<eastl::priority_queue<MidiPlayerMainThread::QueuedLazyWave, eastl::vector<MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>, eastl::less<MidiPlayerMainThread::QueuedLazyWave> > >&&)::$_3::operator()() const
    /* MidiPlayer::SpawnWaveLoadingTask(shared_ptr<eastl::priority_queue<MidiPlayerMainThread::QueuedLazyWave,
   eastl::vector<MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
   eastl::less<MidiPlayerMainThread::QueuedLazyWave> >
   >&&)::$_3::TEMPNAMEPLACEHOLDERVALUE() const */

    void MidiPlayer::SpawnWaveLoadingTask(
        shared_ptr<eastl::priority_queue<MidiPlayerMainThread::QueuedLazyWave,
                                         eastl::vector<MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
                                         eastl::less<MidiPlayerMainThread::QueuedLazyWave>>>&&)::$_3::operator()() {
        stack<jag::math::Rect<int>, eastl::vector<jag::math::Rect<int>, eastl::allocator>>* psVar1;
        undefined8 uVar2;
        priority_queue<MidiPlayerMainThread::QueuedLazyWave,
                       eastl::vector<MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
                       eastl::less<MidiPlayerMainThread::QueuedLazyWave>>* ppVar3;
        char cVar4;
        LazyWave local_30;

        psVar1 =
            (stack<jag::math::Rect<int>, eastl::vector<jag::math::Rect<int>, eastl::allocator>>*)shared_ptr<
                eastl::priority_queue<MidiPlayerMainThread::QueuedLazyWave,
                                      eastl::vector<MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
                                      eastl::less<MidiPlayerMainThread::QueuedLazyWave>>>::
            operator->(
                (shared_ptr<eastl::priority_queue<MidiPlayerMainThread::QueuedLazyWave,
                                                  eastl::vector<MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
                                                  eastl::less<MidiPlayerMainThread::QueuedLazyWave>>>*)this);
        cVar4 =
            eastl::stack<jag::math::Rect<int>, eastl::vector<jag::math::Rect<int>, eastl::allocator>>::empty(psVar1);
        if (cVar4 == '\0') {
            do {
                uVar2 = shared_ptr<std::atomic<bool>>::operator->((shared_ptr<std::atomic<bool>>*)(this + 16));
                cVar4 = std::__atomic_base<bool, false>::load(uVar2);
                if (cVar4 != '\0') {
                    return;
                }
                ppVar3 =
                    (priority_queue<MidiPlayerMainThread::QueuedLazyWave,
                                    eastl::vector<MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
                                    eastl::less<MidiPlayerMainThread::QueuedLazyWave>>*)
                        shared_ptr<
                            eastl::priority_queue<MidiPlayerMainThread::QueuedLazyWave,
                                                  eastl::vector<MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
                                                  eastl::less<MidiPlayerMainThread::QueuedLazyWave>>>::
                        operator->((shared_ptr<eastl::priority_queue<
                                        MidiPlayerMainThread::QueuedLazyWave,
                                        eastl::vector<MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
                                        eastl::less<MidiPlayerMainThread::QueuedLazyWave>>>*)this);
                eastl::priority_queue<MidiPlayerMainThread::QueuedLazyWave,
                                      eastl::vector<MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
                                      eastl::less<MidiPlayerMainThread::QueuedLazyWave>>::top(ppVar3);
                local_30.TryGet();
                local_30.~shared_ptr();
                ppVar3 =
                    (priority_queue<MidiPlayerMainThread::QueuedLazyWave,
                                    eastl::vector<MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
                                    eastl::less<MidiPlayerMainThread::QueuedLazyWave>>*)
                        shared_ptr<
                            eastl::priority_queue<MidiPlayerMainThread::QueuedLazyWave,
                                                  eastl::vector<MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
                                                  eastl::less<MidiPlayerMainThread::QueuedLazyWave>>>::
                        operator->((shared_ptr<eastl::priority_queue<
                                        MidiPlayerMainThread::QueuedLazyWave,
                                        eastl::vector<MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
                                        eastl::less<MidiPlayerMainThread::QueuedLazyWave>>>*)this);
                eastl::priority_queue<MidiPlayerMainThread::QueuedLazyWave,
                                      eastl::vector<MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
                                      eastl::less<MidiPlayerMainThread::QueuedLazyWave>>::pop(ppVar3);
                psVar1 =
                    (stack<jag::math::Rect<int>, eastl::vector<jag::math::Rect<int>, eastl::allocator>>*)shared_ptr<
                        eastl::priority_queue<MidiPlayerMainThread::QueuedLazyWave,
                                              eastl::vector<MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
                                              eastl::less<MidiPlayerMainThread::QueuedLazyWave>>>::
                    operator->(
                        (shared_ptr<
                            eastl::priority_queue<MidiPlayerMainThread::QueuedLazyWave,
                                                  eastl::vector<MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
                                                  eastl::less<MidiPlayerMainThread::QueuedLazyWave>>>*)this);
                cVar4 =
                    eastl::stack<jag::math::Rect<int>, eastl::vector<jag::math::Rect<int>, eastl::allocator>>::empty(
                        psVar1);
            } while (cVar4 == '\0');
        }
    }

    // 0x1002e81b0, 48 bytes, inline, placed by class header (inline)
    // MidiPlayerMainThread::QueuedLazyWave::operator=(MidiPlayerMainThread::QueuedLazyWave&&)
    /* MidiPlayerMainThread::QueuedLazyWave::TEMPNAMEPLACEHOLDERVALUE(MidiPlayerMainThread::QueuedLazyWave&&)
    */

    QueuedLazyWave* MidiPlayerMainThread::QueuedLazyWave::operator=(QueuedLazyWave* param_1) {
        field_0 = param_1->field_0;
        sound::LazyWave::operator=((LazyWave*)field_8, (LazyWave*)param_1->field_8);
        return this;
    }

} // namespace jag::oldscape::midi2

namespace jag {
    // 0x1002d1500, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::midi2::MidiMixer>::type make_shared<oldscape::midi2::MidiMixer, oldscape::midi2::MidiPlayer&>(oldscape::midi2::MidiPlayer&)
    jag* make_shared<oldscape::midi2::MidiMixer, oldscape::midi2::MidiPlayer&>(MidiPlayer* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        MidiMixer* local_30[2];

        pvVar1 = (void*)aligned_alloc(304, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] = placement_new<oldscape::midi2::MidiMixer, oldscape::midi2::MidiPlayer&>(
                (void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::midi2::MidiMixer>, int, oldscape::midi2::MidiMixer*&>(
                pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

} // namespace jag
