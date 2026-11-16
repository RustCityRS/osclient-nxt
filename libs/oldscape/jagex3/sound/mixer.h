// libs/oldscape/jagex3/sound/mixer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::sound {
    class Mixer {
    public:
        class QueuedOp;
        // virtual methods in vtable order
        virtual ~Mixer();
        virtual auto SubstreamStart();
        virtual auto SubstreamNext();
        virtual uint64_t SelfMixCost();
        virtual void DoMix(Array<int>& arg1, int arg2, int arg3);
        virtual void PretendToMix(int arg1);
        virtual void QueueStopStream(const shared_ptr<PCMStream>& pcmStream);
        virtual void QueuePlayStream(const shared_ptr<PCMStream>& pcmStream);
        int GetStreamCountLastMix() const;
        Mixer();
        void SyncWithMainThread();
        void StopStream(const shared_ptr<PCMStream>& pcmStream);
        void PlayStream(const shared_ptr<PCMStream>& pcmStream);
        void PlaystreamDelayedMillis(shared_ptr<PCMStream>& pcmStream, int arg2);
        void PlayWaveRatePercent(shared_ptr<Wave>& wave, int arg2, int arg3);
        void PlayWaveRatePercent(shared_ptr<Wave>& wave, int arg2, int arg3, int arg4);
        void PlayWaveRatePercentFineVolPan(shared_ptr<Wave>& wave, int arg2, int arg3, int arg4);
        void PlayWaveRateRaw(shared_ptr<Wave>& wave, int arg2, int arg3);
        void PlayWaveRateRaw(shared_ptr<Wave>& wave, int arg2, int arg3, int arg4);
        void PlayWaveRatePercentDelayedMillis(shared_ptr<Wave>& wave, int arg2, int arg3, int arg4);
        void PlayWaveRatePercentDelayedMillis(shared_ptr<Wave>& wave, int arg2, int arg3, int arg4, int arg5);
        void PlayWaveRateRawDelayedMillis(shared_ptr<Wave>& wave, int arg2, int arg3, int arg4);
        void PlayWaveRateRawDelayedMillis(shared_ptr<Wave>& wave, int arg2, int arg3, int arg4, int arg5);
        void FixMixerWait();
        void AddController(shared_ptr<MixerController>& mixerController, ErrorCapture& errorCapture);
        void SortController(SharedPtrList<MixerController>::obj_iterator obj_iterator,
                            MixerController& mixerController);
        void RemoveController(const shared_ptr<MixerController>& mixerController, ErrorCapture& errorCapture);
        void UnlinkController(MixerController& mixerController);
        void DoMixLoop(Array<int>& arg1, int arg2, int arg3);
        int Mix2(Array<int>& arg1, int arg2, int arg3);
        void PretendToMix2(int arg1);
        static bool m_repriAlreadyWarned;

    private:
        uint8_t _unknown_8[40];
        uint32_t field_48;
        uint8_t field_52;
        uint8_t _unknown_53[19];
        uint8_t** field_72;
        long field_80;
        int m_streamCountLastMix;
        uint8_t _unknown_92[44];
        int field_136;
        int field_140;
        uint8_t _unknown_144[8];
    };

    class Mixer::QueuedOp {
    public:
        ~QueuedOp();
        QueuedOp(Type arg1, const shared_ptr<PCMStream>& pcmStream);

    private:
        uint8_t _unknown_0[8];
        Type field_8;
        uint8_t _unknown_12[20];
    };

    class MixerMainThread {
    public:
        MixerMainThread();
    };

    // 0x10013d620
    Mixer::Mixer() : PCMStream() {
        field_72 = &PTR_QueueStopStream_100ef9dd8;
        m_streamCountLastMix = 0;
        new (&field_96) SharedPtrList<PCMStream>();
        new (&field_112) jag::math::Vector2T();
        new (&field_120) SharedPtrList<MixerController>();
        field_136 = 0;
        field_140 = -1;
        new (&field_144) jagex3::LockFreeStack<Mixer::QueuedOp>();
    }

    // 0x1002a7e80
    Mixer::QueuedOp::QueuedOp(Mixer::QueuedOp::Type arg1, const shared_ptr<PCMStream>& pcmStream)
        : field_8(arg1), field_16(pcmStream) {}

    // 0x1002ab1c0
    uint32_t Mixer::SortController(SharedPtrList<MixerController>::obj_iterator,
                                   MixerController&)::$_0::operator()(const MixerController& mixerController) const {
        return *(int*)(*(long*)this + 32) < *(int*)(mixerController + 32);
    }

    // 0x1002db590
    Mixer::~Mixer() {
        field_72 = &PTR_QueueStopStream_100ef9dd8;
        field_120.~SharedPtrList();
        field_96.~SharedPtrList();
    }

} // namespace jag::oldscape::sound
