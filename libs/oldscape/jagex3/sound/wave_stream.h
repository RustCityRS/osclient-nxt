// libs/oldscape/jagex3/sound/wave_stream.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::sound {
    class WaveStream {
    public:
        // virtual methods in vtable order
        virtual ~WaveStream();
        virtual WaveStream* SubstreamStart();
        virtual WaveStream* SubstreamNext();
        virtual SelfMixCost();
        virtual void DoMix(Array<int, eastl::allocator>&, int, int);
        virtual void PretendToMix(int);
        WaveStream* NewRatePercent(shared_ptr<Wave>&, int, int);
        WaveStream* NewRatePercent(shared_ptr<Wave>&, int, int, int);
        WaveStream* NewRatePercentFineVolPan(shared_ptr<Wave>&, int, int, int);
        WaveStream* NewRateRaw(shared_ptr<Wave>&, int, int);
        WaveStream* NewRateRaw(shared_ptr<Wave>&, int, int, int);
        int Priority();
        void MyWave();
        WaveStream(shared_ptr<Wave> const&, int, int);
        void SetMLRVol();
        WaveStream(shared_ptr<Wave> const&, int, int, int);
        WaveStream* NewRateRawFineVolPan(shared_ptr<Wave>&, int, int, int);
        int GetLVol(int, int);
        int GetRVol(int, int);
        void SkipRampNounLink();
        void SetLoopCount(int);
        void SetLoopPoints(int, int);
        void QueueVolume(int);
        void ApplyVolume(int);
        void SetVolPanFine(int, int);
        int GetPanFine();
        void SetVolumeFine(int);
        void SetPan(int);
        uint GetVolumeFine();
        void SetPanFine(int);
        void SetVolPan(int, int);
        int GetVolume();
        int GetPan();
        int GetPosition();
        uint GetPositionFine();
        void SetPosition(int);
        void SetPositionFine(int);
        void SetReverse(bool);
        void SetReverseFromEnd();
        void FlipDirection();
        void SetBidirectionalLoop(bool);
        void RampVolume(int, int);
        void RampVolPanFine(int, int, int);
        void RampVolumeFine(int, int);
        void RampVolPan(int, int, int);
        void RampOut(int);
        void SetRateRaw(int);
        int GetRateRaw();
        bool Isfinished();
        bool Isramping();
        void PullQueuedStateIntoWorker();
        ulong MixBackwardSto(Array<int, eastl::allocator>&, int, int, int, int);
        ulong MixForwardSto(Array<int, eastl::allocator>&, int, int, int, int);
        int DoMixForwards1To1RampStereo(int, Array<signed char, eastl::allocator>&, Array<int, eastl::allocator>&, int,
                                        int, int, int, int, int, int, int, int, WaveStream*);
        int DoMixForwards1To1RampMono(Array<signed char, eastl::allocator>&, Array<int, eastl::allocator>&, int, int,
                                      int, int, int, int, int, WaveStream*);
        void DoMixForwardsRampStereo(int, int, Array<signed char, eastl::allocator>&, Array<int, eastl::allocator>&,
                                     int, int, int, int, int, int, int, int, int, WaveStream*, int, int);
        ulong DoMixForwardsRampMono(int, int, Array<signed char, eastl::allocator>&, Array<int, eastl::allocator>&, int,
                                    int, int, int, int, int, int, WaveStream*, int, int);
        FinaliseRamp();
        int DoMixForwards1To1Stereo(int, Array<signed char, eastl::allocator>&, Array<int, eastl::allocator>&, int, int,
                                    int, int, int, int, int, WaveStream*);
        int DoMixForwards1To1Mono(Array<signed char, eastl::allocator>&, Array<int, eastl::allocator>&, int, int, int,
                                  int, int, int, WaveStream*);
        int DoMixForwardsStereo(int, int, Array<signed char, eastl::allocator>&, Array<int, eastl::allocator>&, int,
                                int, int, int, int, int, int, WaveStream*, int, int);
        ulong DoMixForwardsMono(int, int, Array<signed char, eastl::allocator>&, Array<int, eastl::allocator>&, int,
                                int, int, int, int, int, WaveStream*, int, int);
        int DoMixBackwards1To1RampStereo(int, Array<signed char, eastl::allocator>&, Array<int, eastl::allocator>&, int,
                                         int, int, int, int, int, int, int, int, WaveStream*);
        ulong DoMixBackwards1To1RampMono(Array<signed char, eastl::allocator>&, Array<int, eastl::allocator>&, int, int,
                                         int, int, int, int, int, WaveStream*);
        void DoMixBackwardsRampStereo(int, int, Array<signed char, eastl::allocator>&, Array<int, eastl::allocator>&,
                                      int, int, int, int, int, int, int, int, int, WaveStream*, int, int);
        ulong DoMixBackwardsRampMono(int, int, Array<signed char, eastl::allocator>&, Array<int, eastl::allocator>&,
                                     int, int, int, int, int, int, int, WaveStream*, int, int);
        int DoMixBackwards1To1Stereo(int, Array<signed char, eastl::allocator>&, Array<int, eastl::allocator>&, int,
                                     int, int, int, int, int, int, WaveStream*);
        ulong DoMixBackwards1To1Mono(Array<signed char, eastl::allocator>&, Array<int, eastl::allocator>&, int, int,
                                     int, int, int, int, WaveStream*);
        int DoMixBackwardsStereo(int, int, Array<signed char, eastl::allocator>&, Array<int, eastl::allocator>&, int,
                                 int, int, int, int, int, int, WaveStream*, int, int);
        ulong DoMixBackwardsMono(int, int, Array<signed char, eastl::allocator>&, Array<int, eastl::allocator>&, int,
                                 int, int, int, int, int, WaveStream*, int, int);

        // data members, from how the methods use this: 140 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[16];
        long field_24; // offset 24
        char _unknown_32[16];
        undefined4 field_48; // offset 48
        undefined1 field_52; // offset 52
        char _unknown_53[19];
        uint field_72;        // offset 72
        int field_76;         // offset 76
        uint field_80;        // offset 80
        int field_84;         // offset 84
        uint field_88;        // offset 88
        uint field_92;        // offset 92
        uint field_96;        // offset 96
        undefined1 field_100; // offset 100
        char _unknown_101[3];
        int m_loopCount; // offset 104
        int field_108;   // offset 108
        int field_112;   // offset 112
        bool field_116;  // offset 116
        char _unknown_117[3];
        uint field_120; // offset 120
        uint field_124; // offset 124
        uint field_128; // offset 128
        uint field_132; // offset 132
        char _unknown_136[4];
    };

    // 0x1002a1400, 112 bytes, inline, placed by class name and debug map
    // WaveStream::GetLVol(int, int)
    int WaveStream::GetLVol(int param_1, int param_2) {
        float fVar1;
        undefined4 in_XMM1_Db;
        undefined4 in_XMM1_Dc;
        undefined4 in_XMM1_Dd;
        undefined1 in_XMM2[16];
        undefined1 auVar2[16];
        float fVar3;

        if (-1 < param_2) {
            fVar1 = (float)(16384 - param_2) * 0.00012207031;
            auVar2._4_4_ = in_XMM1_Db;
            auVar2._0_4_ = fVar1;
            auVar2._8_4_ = in_XMM1_Dc;
            auVar2._12_4_ = in_XMM1_Dd;
            auVar2 = rsqrtss(in_XMM2, auVar2);
            fVar3 = fVar1 * auVar2._0_4_;
            param_1 = (int)((float)(~-(uint)(ABS(fVar1) < 1.1754944e-38) &
                                    (uint)((fVar3 * auVar2._0_4_ + -3.0) * fVar3 * -0.5)) *
                                (float)param_1 +
                            0.5);
        }
        return param_1;
    }

    // 0x1002a1470, 112 bytes, inline, placed by class name and debug map
    // WaveStream::GetRVol(int, int)
    int WaveStream::GetRVol(int param_1, int param_2) {
        float fVar1;
        undefined4 in_XMM1_Db;
        undefined4 in_XMM1_Dc;
        undefined4 in_XMM1_Dd;
        undefined1 in_XMM2[16];
        undefined1 auVar2[16];
        float fVar3;

        if (param_2 < 0) {
            return -param_1;
        }
        fVar1 = (float)param_2 * 0.00012207031;
        auVar2._4_4_ = in_XMM1_Db;
        auVar2._0_4_ = fVar1;
        auVar2._8_4_ = in_XMM1_Dc;
        auVar2._12_4_ = in_XMM1_Dd;
        auVar2 = rsqrtss(in_XMM2, auVar2);
        fVar3 = fVar1 * auVar2._0_4_;
        return (
            int)((float)(~-(uint)(ABS(fVar1) < 1.1754944e-38) & (uint)((fVar3 * auVar2._0_4_ + -3.0) * fVar3 * -0.5)) *
                     (float)param_1 +
                 0.5);
    }

    // 0x1002a7660, 16 bytes, complete-object destructor, inline, placed by class name
    // WaveStream::~WaveStream(): jumps straight to the base-object destructor

    // 0x1002a7670, 32 bytes, deleting destructor, inline, placed by class name
    // WaveStream::~WaveStream()
    void WaveStream::~WaveStream() {
        ~WaveStream(this);
        operator_delete(this);
    }

    // 0x1002a8690, 16 bytes, base-object destructor, inline, placed by class name
    // WaveStream::~WaveStream()
    void WaveStream::~WaveStream() {
        ~PCMStream();
    }

} // namespace jag::oldscape::sound
