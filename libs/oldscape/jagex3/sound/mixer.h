// libs/oldscape/jagex3/sound/mixer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::sound {
    class Mixer {
    public:
        class QueuedOp;
        // virtual methods in vtable order
        virtual ~Mixer();
        virtual SubstreamStart();
        virtual SubstreamNext();
        virtual SelfMixCost();
        virtual void DoMix(Array<int, eastl::allocator>&, int, int);
        virtual void PretendToMix(int);
        virtual void QueueStopStream(shared_ptr<PCMStream> const&);
        virtual void QueuePlayStream(shared_ptr<PCMStream> const&);
        int GetStreamCountLastMix() const;
        Mixer();
        void SyncWithMainThread();
        void StopStream(shared_ptr<PCMStream> const&);
        void PlayStream(shared_ptr<PCMStream> const&);
        void PlaystreamDelayedMillis(shared_ptr<PCMStream>&, int);
        void PlayWaveRatePercent(shared_ptr<Wave>&, int, int);
        void PlayWaveRatePercent(shared_ptr<Wave>&, int, int, int);
        void PlayWaveRatePercentFineVolPan(shared_ptr<Wave>&, int, int, int);
        void PlayWaveRateRaw(shared_ptr<Wave>&, int, int);
        void PlayWaveRateRaw(shared_ptr<Wave>&, int, int, int);
        void PlayWaveRatePercentDelayedMillis(shared_ptr<Wave>&, int, int, int);
        void PlayWaveRatePercentDelayedMillis(shared_ptr<Wave>&, int, int, int, int);
        void PlayWaveRateRawDelayedMillis(shared_ptr<Wave>&, int, int, int);
        void PlayWaveRateRawDelayedMillis(shared_ptr<Wave>&, int, int, int, int);
        void FixMixerWait();
        void AddController(shared_ptr<MixerController>&, ErrorCapture&);
        void SortController(SharedPtrList<MixerController>::obj_iterator, MixerController&);
        void RemoveController(shared_ptr<MixerController> const&, ErrorCapture&);
        void UnlinkController(MixerController&);
        void DoMixLoop(Array<int, eastl::allocator>&, int, int);
        int Mix2(Array<int, eastl::allocator>&, int, int);
        void PretendToMix2(int);
        static /* 7 bytes */ m_repriAlreadyWarned;

        // data members, from how the methods use this: 152 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[40];
        undefined4 field_48; // offset 48
        undefined1 field_52; // offset 52
        char _unknown_53[19];
        undefined** field_72;     // offset 72
        long field_80;            // offset 80
        int m_streamCountLastMix; // offset 88
        char _unknown_92[44];
        int field_136; // offset 136
        int field_140; // offset 140
        char _unknown_144[8];
    };

    class Mixer::QueuedOp {
    public:
        ~QueuedOp();
        QueuedOp(Type, shared_ptr<PCMStream> const&);

        // data members, from how the methods use this: 32 bytes
        char _unknown_0[8];
        undefined4 field_8; // offset 8
        char _unknown_12[20];
    };

    class MixerMainThread {
    public:
        MixerMainThread();

        // data members, from how the methods use this: 8 bytes
        undefined* field_0; // offset 0, vtable pointer
    };

    // 0x10013d610, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // Mixer::Mixer(): jumps straight to the base-object constructor

    // 0x10013d620, 176 bytes, base-object constructor, inline, placed by class name and debug map
    // Mixer::Mixer()
    void Mixer::Mixer() {
        new (this) PCMStream();
        new (&field_72) MixerMainThread();
        field_0 = &PTR__Mixer_100ef9d80;
        field_72 = &PTR_QueueStopStream_100ef9dd8;
        m_streamCountLastMix = 0;
        new (&field_96) SharedPtrList<PCMStream>();
        new (&field_112) jag::math::Vector2T<int>();
        new (&field_120) SharedPtrList<MixerController>();
        field_136 = 0;
        field_140 = -1;
        new (&field_144) jagex3::LockFreeStack<Mixer::QueuedOp>();
    }

    // 0x10029d750, 16 bytes, complete-object constructor, inline, placed by class name
    // Mixer::QueuedOp::QueuedOp(Mixer::QueuedOp::Type, shared_ptr<PCMStream> const&): jumps straight to the base-object constructor

    // 0x1002a7610, 32 bytes, deleting destructor, inline, placed by class name
    // Mixer::~Mixer()
    void Mixer::~Mixer() {
        ~Mixer(this);
        operator_delete(this);
    }

    // 0x1002a7e80, 32 bytes, base-object constructor, inline, placed by class name
    // Mixer::QueuedOp::QueuedOp(Mixer::QueuedOp::Type, shared_ptr<PCMStream> const&)
    void Mixer::QueuedOp::QueuedOp(undefined4 param_2, shared_ptr* param_3) {
        field_8 = param_2;
        new (&field_16, param_3) shared_ptr<dash3d::Decor>();
    }

    // 0x1002ab1c0, 32 bytes, inline, placed by class name
    // Mixer::SortController(SharedPtrList<MixerController>::obj_iterator, MixerController&)::$_0::operator()(MixerController const&) const
    /* Mixer::SortController(SharedPtrList<MixerController>::obj_iterator,
   MixerController&)::$_0::TEMPNAMEPLACEHOLDERVALUE(MixerController
   const&) const */

    undefined4 Mixer::SortController(SharedPtrList<MixerController>::obj_iterator,
                                     MixerController&)::$_0::operator()(MixerController* param_1) {
        return CONCAT31((int3)((uint) * (int*)(param_1 + 32) >> 8), *(int*)(*(long*)this + 32) < *(int*)(param_1 + 32));
    }

    // 0x1002ce810, 16 bytes, complete-object destructor, inline, placed by class name
    // Mixer::~Mixer(): jumps straight to the base-object destructor

    // 0x1002db590, 64 bytes, base-object destructor, inline, placed by class name
    // Mixer::~Mixer()
    void Mixer::~Mixer() {
        field_0 = &PTR__Mixer_100ef9d80;
        field_72 = &PTR_QueueStopStream_100ef9dd8;
        (&field_120)->~SharedPtrList();
        (&field_96)->~SharedPtrList();
        ~PCMStream();
    }

} // namespace jag::oldscape::sound
