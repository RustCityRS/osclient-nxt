// libs/oldscape/jagex3/sound/wave_stream.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::sound {
    class WaveStream {
    public:
        // virtual methods in vtable order
        virtual ~WaveStream();
        virtual WaveStream* SubstreamStart();
        virtual WaveStream* SubstreamNext();
        virtual uint64_t SelfMixCost();
        virtual void DoMix(Array<int>& arg1, int arg2, int arg3);
        virtual void PretendToMix(int arg1);
        auto NewRatePercent(shared_ptr<Wave>& wave, int arg2, int arg3);
        auto NewRatePercent(shared_ptr<Wave>& wave, int arg2, int arg3, int arg4);
        auto NewRatePercentFineVolPan(shared_ptr<Wave>& wave, int arg2, int arg3, int arg4);
        auto NewRateRaw(shared_ptr<Wave>& wave, int arg2, int arg3);
        auto NewRateRaw(shared_ptr<Wave>& wave, int arg2, int arg3, int arg4);
        int Priority();
        void MyWave();
        WaveStream(const shared_ptr<Wave>& wave, int arg2, int arg3);
        void SetMLRVol();
        WaveStream(const shared_ptr<Wave>& wave, int arg2, int arg3, int arg4);
        auto NewRateRawFineVolPan(shared_ptr<Wave>& wave, int arg2, int arg3, int arg4);
        int GetLVol(int arg1, int arg2);
        int GetRVol(int arg1, int arg2);
        void SkipRampNounLink();
        void SetLoopCount(int arg1);
        void SetLoopPoints(int arg1, int arg2);
        void QueueVolume(int arg1);
        void ApplyVolume(int arg1);
        void SetVolPanFine(int arg1, int arg2);
        int GetPanFine();
        void SetVolumeFine(int arg1);
        void SetPan(int arg1);
        unsigned int GetVolumeFine();
        void SetPanFine(int arg1);
        void SetVolPan(int arg1, int arg2);
        int GetVolume();
        int GetPan();
        int GetPosition();
        unsigned int GetPositionFine();
        void SetPosition(int arg1);
        void SetPositionFine(int arg1);
        void SetReverse(bool arg1);
        void SetReverseFromEnd();
        void FlipDirection();
        void SetBidirectionalLoop(bool arg1);
        void RampVolume(int arg1, int arg2);
        void RampVolPanFine(int arg1, int arg2, int arg3);
        void RampVolumeFine(int arg1, int arg2);
        void RampVolPan(int arg1, int arg2, int arg3);
        void RampOut(int arg1);
        void SetRateRaw(int arg1);
        int GetRateRaw();
        bool Isfinished();
        bool Isramping();
        void PullQueuedStateIntoWorker();
        unsigned long MixBackwardSto(Array<int>& arg1, int arg2, int arg3, int arg4, int arg5);
        unsigned long MixForwardSto(Array<int>& arg1, int arg2, int arg3, int arg4, int arg5);
        int DoMixForwards1To1RampStereo(int arg1, Array<signed char>& arg2, Array<int>& arg3, int arg4, int arg5,
                                        int arg6, int arg7, int arg8, int arg9, int arg10, int arg11, int arg12,
                                        WaveStream* waveStream);
        int DoMixForwards1To1RampMono(Array<signed char>& arg1, Array<int>& arg2, int arg3, int arg4, int arg5,
                                      int arg6, int arg7, int arg8, int arg9, WaveStream* waveStream);
        void DoMixForwardsRampStereo(int arg1, int arg2, Array<signed char>& arg3, Array<int>& arg4, int arg5, int arg6,
                                     int arg7, int arg8, int arg9, int arg10, int arg11, int arg12, int arg13,
                                     WaveStream* waveStream, int arg15, int arg16);
        unsigned long DoMixForwardsRampMono(int arg1, int arg2, Array<signed char>& arg3, Array<int>& arg4, int arg5,
                                            int arg6, int arg7, int arg8, int arg9, int arg10, int arg11,
                                            WaveStream* waveStream, int arg13, int arg14);
        uint64_t FinaliseRamp();
        int DoMixForwards1To1Stereo(int arg1, Array<signed char>& arg2, Array<int>& arg3, int arg4, int arg5, int arg6,
                                    int arg7, int arg8, int arg9, int arg10, WaveStream* waveStream);
        int DoMixForwards1To1Mono(Array<signed char>& arg1, Array<int>& arg2, int arg3, int arg4, int arg5, int arg6,
                                  int arg7, int arg8, WaveStream* waveStream);
        int DoMixForwardsStereo(int arg1, int arg2, Array<signed char>& arg3, Array<int>& arg4, int arg5, int arg6,
                                int arg7, int arg8, int arg9, int arg10, int arg11, WaveStream* waveStream, int arg13,
                                int arg14);
        unsigned long DoMixForwardsMono(int arg1, int arg2, Array<signed char>& arg3, Array<int>& arg4, int arg5,
                                        int arg6, int arg7, int arg8, int arg9, int arg10, WaveStream* waveStream,
                                        int arg12, int arg13);
        int DoMixBackwards1To1RampStereo(int arg1, Array<signed char>& arg2, Array<int>& arg3, int arg4, int arg5,
                                         int arg6, int arg7, int arg8, int arg9, int arg10, int arg11, int arg12,
                                         WaveStream* waveStream);
        unsigned long DoMixBackwards1To1RampMono(Array<signed char>& arg1, Array<int>& arg2, int arg3, int arg4,
                                                 int arg5, int arg6, int arg7, int arg8, int arg9,
                                                 WaveStream* waveStream);
        void DoMixBackwardsRampStereo(int arg1, int arg2, Array<signed char>& arg3, Array<int>& arg4, int arg5,
                                      int arg6, int arg7, int arg8, int arg9, int arg10, int arg11, int arg12,
                                      int arg13, WaveStream* waveStream, int arg15, int arg16);
        unsigned long DoMixBackwardsRampMono(int arg1, int arg2, Array<signed char>& arg3, Array<int>& arg4, int arg5,
                                             int arg6, int arg7, int arg8, int arg9, int arg10, int arg11,
                                             WaveStream* waveStream, int arg13, int arg14);
        int DoMixBackwards1To1Stereo(int arg1, Array<signed char>& arg2, Array<int>& arg3, int arg4, int arg5, int arg6,
                                     int arg7, int arg8, int arg9, int arg10, WaveStream* waveStream);
        unsigned long DoMixBackwards1To1Mono(Array<signed char>& arg1, Array<int>& arg2, int arg3, int arg4, int arg5,
                                             int arg6, int arg7, int arg8, WaveStream* waveStream);
        int DoMixBackwardsStereo(int arg1, int arg2, Array<signed char>& arg3, Array<int>& arg4, int arg5, int arg6,
                                 int arg7, int arg8, int arg9, int arg10, int arg11, WaveStream* waveStream, int arg13,
                                 int arg14);
        unsigned long DoMixBackwardsMono(int arg1, int arg2, Array<signed char>& arg3, Array<int>& arg4, int arg5,
                                         int arg6, int arg7, int arg8, int arg9, int arg10, WaveStream* waveStream,
                                         int arg12, int arg13);

    private:
        uint8_t _unknown_8[16];
        long field_24;
        uint8_t _unknown_32[16];
        uint32_t field_48;
        uint8_t field_52;
        uint8_t _unknown_53[19];
        unsigned int field_72;
        int field_76;
        unsigned int field_80;
        int field_84;
        unsigned int field_88;
        unsigned int field_92;
        unsigned int field_96;
        uint8_t _unknown_100[4];
        int field_104;
        int field_108;
        int field_112;
        bool field_116;
        uint8_t _unknown_117[3];
        unsigned int field_120;
        unsigned int field_124;
        unsigned int field_128;
        unsigned int field_132;
        uint8_t _unknown_136[4];
    };

    // 0x1002a1400
    int WaveStream::GetLVol(int arg1, int arg2) {
        float fVar1;
        uint32_t in_XMM1_Db;
        uint32_t in_XMM1_Dc;
        uint32_t in_XMM1_Dd;
        uint8_t in_XMM2[16];
        uint8_t auVar2[16];
        float fVar3;

        if (-1 < arg2) {
            fVar1 = (float)(16384 - arg2) * 0.00012207031f;
            auVar2._4_4_ = in_XMM1_Db;
            auVar2._0_4_ = fVar1;
            auVar2._8_4_ = in_XMM1_Dc;
            auVar2._12_4_ = in_XMM1_Dd;
            auVar2 = rsqrtss(in_XMM2, auVar2);
            fVar3 = fVar1 * auVar2._0_4_;
            arg1 = (int)((float)(~-(unsigned int)(ABS(fVar1) < 1.1754944e-38) &
                                 (unsigned int)((fVar3 * auVar2._0_4_ - 3.0) * fVar3 * -0.5)) *
                             (float)arg1 +
                         0.5);
        }
        return arg1;
    }

    // 0x1002a1470
    int WaveStream::GetRVol(int arg1, int arg2) {
        uint32_t in_XMM1_Db;
        uint32_t in_XMM1_Dc;
        uint32_t in_XMM1_Dd;
        uint8_t in_XMM2[16];
        uint8_t auVar2[16];

        if (arg2 < 0) {
            return -arg1;
        }
        float fVar1 = (float)arg2 * 0.00012207031f;
        auVar2._4_4_ = in_XMM1_Db;
        auVar2._0_4_ = fVar1;
        auVar2._8_4_ = in_XMM1_Dc;
        auVar2._12_4_ = in_XMM1_Dd;
        auVar2 = rsqrtss(in_XMM2, auVar2);
        float fVar3 = fVar1 * auVar2._0_4_;
        return (int)((float)(~-(unsigned int)(ABS(fVar1) < 1.1754944e-38) &
                             (unsigned int)((fVar3 * auVar2._0_4_ - 3.0) * fVar3 * -0.5)) *
                         (float)arg1 +
                     0.5);
    }

    // 0x1002a8690
    WaveStream::~WaveStream() {}

} // namespace jag::oldscape::sound
