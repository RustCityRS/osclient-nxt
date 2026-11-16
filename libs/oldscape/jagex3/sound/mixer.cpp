// libs/oldscape/jagex3/sound/mixer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "mixer.h"

namespace jag::oldscape::sound {
    // 0x1016c1db9
    bool Mixer::m_repriAlreadyWarned;

    // 0x1000782e0: Mixer::QueuedOp::~QueuedOp() has the same machine code as MinimapElement::~MinimapElement()

    // 0x1000b7900: Mixer::GetStreamCountLastMix() const has the same machine code as minimenu::MinimenuEntry::GetSubjectType() const

    // 0x10029d6f0
    void Mixer::QueueStopStream(const shared_ptr<PCMStream>& pcmStream) {
        QueuedOp* this_00 = (QueuedOp*)operator new(32);
        new (this_00) QueuedOp(0, pcmStream);
        field_144.PushHead(this_00);
    }

    // 0x10029d7d0
    void Mixer::QueuePlayStream(const shared_ptr<PCMStream>& pcmStream) {
        QueuedOp* this_00 = (QueuedOp*)operator new(32);
        new (this_00) QueuedOp(1, pcmStream);
        field_144.PushHead(this_00);
    }

    // 0x10029d840
    void Mixer::SyncWithMainThread() {
        void result;
        __thread_id* in_RAX;
        ReturnValue result;
        Mixer* this_00;
        Mixer* pMVar2;
        Mixer* this_01;

        __thread_id* local_28 = in_RAX;
        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        if (!(thread_id1_00 == g_idWorkerThread)) {
            new (&local_28) std::__thread_id();
            if (!(thread_id1 == local_28)) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "mixer.cpp",
                          33, nullptr);
            }
        }
        &result = (ReturnValue*)field_144.TakeStack();
        if (&result != nullptr) {
            this_00 = (Mixer*)result = jagex3::LockFreeStackData<Mixer::QueuedOp>::Reverse();
            if (this_00 != nullptr) {
                do {
                    this_01 = this_00;
                    pMVar2 = (Mixer*)this_00->HeapBeginPtr();
                    if (*(int*)&this_00->field_8 == 1) {
                        PlayStream(this_00->field_16);
                    } else if (*(int*)&this_00->field_8 == 0) {
                        StopStream(this_01, (shared_ptr<PCMStream>*)&this_00->field_16);
                    }
                    this_00->~InterfaceMouseEvent();
                    operator delete(this_00);
                    this_00 = pMVar2;
                } while (pMVar2 != nullptr);
            }
        }
    }

    // 0x10029d960
    void Mixer::StopStream(const shared_ptr<PCMStream>& pcmStream) {
        __thread_id* local_20;

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        if (!(thread_id1_00 == g_idWorkerThread)) {
            new (&local_20) std::__thread_id();
            if (!(thread_id1 == local_20)) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "mixer.cpp",
                          83, nullptr);
            }
        }
        ((Linkable<PCMStream>*)pcmStream.operator->())->Unlink();
    }

    // 0x10029d9e0
    void Mixer::PlayStream(const shared_ptr<PCMStream>& pcmStream) {
        __thread_id* in_RAX;

        __thread_id* local_28 = in_RAX;
        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        if (!(thread_id1_00 == g_idWorkerThread)) {
            new (&local_28) std::__thread_id();
            if (!(thread_id1 == local_28)) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "mixer.cpp",
                          60, nullptr);
            }
        }
        if (m_repriAlreadyWarned == '\0') {
            if (((Linkable<MixerController>*)pcmStream.operator->())->IsLinked()) {
                m_repriAlreadyWarned = '\x01';
                (logger::default_logger())
                    ->Log(false, 6,
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "mixer.cpp",
                          65,
                          "Warning: if you were calling playstream in an attempt to get the stream reprioritised, it "
                          "doesn\'t work that way any more - you should set wantmix instead");
            }
        }
        field_96.push_front(pcmStream);
    }

    // 0x10029db70
    void Mixer::PlaystreamDelayedMillis(shared_ptr<PCMStream>& pcmStream, int arg2) {
        shared_ptr<dash3d::Decor> local_50;
        __thread_id* local_40;
        ReturnValue local_38;

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        if (!(thread_id1_00 == g_idWorkerThread)) {
            new (&local_40) std::__thread_id();
            if (!(thread_id1 == local_40)) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "mixer.cpp",
                          73, nullptr);
            }
        }
        if (0 < arg2) {
            local_50 = shared_ptr(pcmStream);
            local_38 = DelayedStream::ByMillis(&local_50, arg2);
            pcmStream = local_38;
        }
        PlayStream(pcmStream);
    }

    // 0x10029dce0
    void Mixer::PlayWaveRatePercent(shared_ptr<Wave>& wave, int arg2, int arg3) {
        __thread_id* local_50;
        shared_ptr<PCMStream> local_48;

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        if (!(thread_id1_00 == g_idWorkerThread)) {
            new (&local_50) std::__thread_id();
            if (!(thread_id1 == local_50)) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "mixer.cpp",
                          89, nullptr);
            }
        }
        auto local_38 = WaveStream::NewRatePercent(wave, arg2, arg3);
        WaveStream* waveStream = (WaveStream*)std::unique_ptr<WaveStream>::release();
        local_48.shared_ptr<WaveStream, void>(waveStream);
        PlayStream(local_48);
    }

    // 0x10029deb0
    void Mixer::PlayWaveRatePercent(shared_ptr<Wave>& wave, int arg2, int arg3, int arg4) {
        __thread_id* local_60;
        shared_ptr<PCMStream> local_58;

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        if (!(thread_id1_00 == g_idWorkerThread)) {
            new (&local_60) std::__thread_id();
            if (!(thread_id1 == local_60)) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "mixer.cpp",
                          96, nullptr);
            }
        }
        auto local_40 = WaveStream::NewRatePercent(wave, arg2, arg3, arg4);
        WaveStream* waveStream = (WaveStream*)std::unique_ptr<WaveStream>::release();
        local_58.shared_ptr<WaveStream, void>(waveStream);
        PlayStream(local_58);
    }

    // 0x10029e050
    void Mixer::PlayWaveRatePercentFineVolPan(shared_ptr<Wave>& wave, int arg2, int arg3, int arg4) {
        __thread_id* local_60;
        shared_ptr<PCMStream> local_58;

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        if (!(thread_id1_00 == g_idWorkerThread)) {
            new (&local_60) std::__thread_id();
            if (!(thread_id1 == local_60)) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "mixer.cpp",
                          103, nullptr);
            }
        }
        auto local_40 = WaveStream::NewRatePercentFineVolPan(wave, arg2, arg3, arg4);
        WaveStream* waveStream = (WaveStream*)std::unique_ptr<WaveStream>::release();
        local_58.shared_ptr<WaveStream, void>(waveStream);
        PlayStream(local_58);
    }

    // 0x10029e1f0
    void Mixer::PlayWaveRateRaw(shared_ptr<Wave>& wave, int arg2, int arg3) {
        __thread_id* local_50;
        shared_ptr<PCMStream> local_48;

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        if (!(thread_id1_00 == g_idWorkerThread)) {
            new (&local_50) std::__thread_id();
            if (!(thread_id1 == local_50)) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "mixer.cpp",
                          110, nullptr);
            }
        }
        auto local_38 = WaveStream::NewRateRaw(wave, arg2, arg3);
        WaveStream* waveStream = (WaveStream*)std::unique_ptr<WaveStream>::release();
        local_48.shared_ptr<WaveStream, void>(waveStream);
        PlayStream(local_48);
    }

    // 0x10029e370
    void Mixer::PlayWaveRateRaw(shared_ptr<Wave>& wave, int arg2, int arg3, int arg4) {
        __thread_id* local_60;
        shared_ptr<PCMStream> local_58;

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        if (!(thread_id1_00 == g_idWorkerThread)) {
            new (&local_60) std::__thread_id();
            if (!(thread_id1 == local_60)) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "mixer.cpp",
                          117, nullptr);
            }
        }
        auto local_40 = WaveStream::NewRateRaw(wave, arg2, arg3, arg4);
        WaveStream* waveStream = (WaveStream*)std::unique_ptr<WaveStream>::release();
        local_58.shared_ptr<WaveStream, void>(waveStream);
        PlayStream(local_58);
    }

    // 0x10029e510
    void Mixer::PlayWaveRatePercentDelayedMillis(shared_ptr<Wave>& wave, int arg2, int arg3, int arg4) {
        __thread_id* local_60;
        shared_ptr<PCMStream> local_58;

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        if (!(thread_id1_00 == g_idWorkerThread)) {
            new (&local_60) std::__thread_id();
            if (!(thread_id1 == local_60)) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "mixer.cpp",
                          124, nullptr);
            }
        }
        auto local_40 = WaveStream::NewRatePercent(wave, arg2, arg3);
        WaveStream* waveStream = (WaveStream*)std::unique_ptr<WaveStream>::release();
        local_58.shared_ptr<WaveStream, void>(waveStream);
        PlaystreamDelayedMillis(local_58, arg4);
    }

    // 0x10029e610
    void Mixer::PlayWaveRatePercentDelayedMillis(shared_ptr<Wave>& wave, int arg2, int arg3, int arg4, int arg5) {
        __thread_id* local_60;
        shared_ptr<PCMStream> local_58;

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        if (!(thread_id1_00 == g_idWorkerThread)) {
            new (&local_60) std::__thread_id();
            if (!(thread_id1 == local_60)) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "mixer.cpp",
                          131, nullptr);
            }
        }
        auto local_40 = WaveStream::NewRatePercent(wave, arg2, arg3, arg4);
        WaveStream* waveStream = (WaveStream*)std::unique_ptr<WaveStream>::release();
        local_58.shared_ptr<WaveStream, void>(waveStream);
        PlaystreamDelayedMillis(local_58, arg5);
    }

    // 0x10029e710
    void Mixer::PlayWaveRateRawDelayedMillis(shared_ptr<Wave>& wave, int arg2, int arg3, int arg4) {
        __thread_id* local_60;
        shared_ptr<PCMStream> local_58;

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        if (!(thread_id1_00 == g_idWorkerThread)) {
            new (&local_60) std::__thread_id();
            if (!(thread_id1 == local_60)) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "mixer.cpp",
                          138, nullptr);
            }
        }
        auto local_40 = WaveStream::NewRateRaw(wave, arg2, arg3);
        WaveStream* waveStream = (WaveStream*)std::unique_ptr<WaveStream>::release();
        local_58.shared_ptr<WaveStream, void>(waveStream);
        PlaystreamDelayedMillis(local_58, arg4);
    }

    // 0x10029e810
    void Mixer::PlayWaveRateRawDelayedMillis(shared_ptr<Wave>& wave, int arg2, int arg3, int arg4, int arg5) {
        __thread_id* local_60;
        shared_ptr<PCMStream> local_58;

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        if (!(thread_id1_00 == g_idWorkerThread)) {
            new (&local_60) std::__thread_id();
            if (!(thread_id1 == local_60)) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "mixer.cpp",
                          145, nullptr);
            }
        }
        auto local_40 = WaveStream::NewRateRaw(wave, arg2, arg3, arg4);
        WaveStream* waveStream = (WaveStream*)std::unique_ptr<WaveStream>::release();
        local_58.shared_ptr<WaveStream, void>(waveStream);
        PlaystreamDelayedMillis(local_58, arg5);
    }

    // 0x10029e910
    void Mixer::FixMixerWait() {
        long lVar2;
        __thread_id* local_38;
        uint64_t local_30;
        uint64_t local_28;

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        bool cVar1 = thread_id1_00 == g_idWorkerThread;
        if (!cVar1) {
            new (&local_38) std::__thread_id();
            cVar1 = thread_id1 == local_38;
            if (!cVar1) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "mixer.cpp",
                          152, nullptr);
            }
        }
        if (0 < field_136) {
            local_30 = field_120.begin();
            local_28 = field_120.end();
            cVar1 = local_30 != local_28;
            if (cVar1) {
                do {
                    lVar2 = local_30.HeapBeginPtr();
                    *(int*)(lVar2 + 32) = *(int*)(lVar2 + 32) - field_136;
                    ++local_30;
                    cVar1 = local_30 != local_28;
                } while (cVar1);
            }
            field_140 = field_140 - field_136;
            field_136 = 0;
        }
    }

    // 0x10029ea40
    void Mixer::AddController(shared_ptr<MixerController>& mixerController, ErrorCapture& errorCapture) {
        long* plVar3;
        obj_iterator* obj_iterator;
        MixerController* mixerController_00;
        __thread_id* local_30;

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        if (!(thread_id1_00 == g_idWorkerThread)) {
            new (&local_30) std::__thread_id();
            if (!(thread_id1 == local_30)) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "mixer.cpp",
                          167, nullptr);
            }
        }
        long lVar2 = mixerController.operator->();
        if (*(long*)(lVar2 + 40) == 0) {
            FixMixerWait();
            lVar2 = mixerController.operator->();
            *(Mixer**)(lVar2 + 40) = this;
            plVar3 = (long*)mixerController.operator->();
            (**(void (**)(...))(*plVar3 + 16))(plVar3);
            field_120.push_back(mixerController);
            obj_iterator = (obj_iterator*)field_120.begin();
            mixerController_00 = (MixerController*)mixerController;
            SortController(obj_iterator, *mixerController_00);
        } else {
            errorCapture.Raise("mixercontroller already attached");
        }
    }

    // 0x10029eb80
    void Mixer::SortController(SharedPtrList<MixerController>::obj_iterator obj_iterator,
                               MixerController& mixerController) {
        obj_iterator* obj_iterator2;
        __thread_id* local_40;

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        if (!(thread_id1_00 == g_idWorkerThread)) {
            new (&local_40) std::__thread_id();
            if (!(thread_id1 == local_40)) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "mixer.cpp",
                          183, nullptr);
            }
        }
        uint8_t* this_00 = &field_120;
        obj_iterator2 = (obj_iterator*)this_00->end();
        uint64_t local_38 =
            eastl::find_if<SharedPtrList<MixerController>::obj_iterator,
                           (SharedPtrList<MixerController>::obj_iterator)->SortController(MixerController&)::__0>(
                obj_iterator, obj_iterator2, (__0*)mixerController);
        this_00->move(mixerController, local_38);
        long lVar2 = (this_00->begin()).HeapBeginPtr();
        field_140 = *(int*)(lVar2 + 32);
    }

    // 0x10029ee40
    void Mixer::RemoveController(const shared_ptr<MixerController>& mixerController, ErrorCapture& errorCapture) {
        MixerController* mixerController_00;
        __thread_id* local_30;

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        if (!(thread_id1_00 == g_idWorkerThread)) {
            new (&local_30) std::__thread_id();
            if (!(thread_id1 == local_30)) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "mixer.cpp",
                          195, nullptr);
            }
        }
        long lVar2 = mixerController.operator->();
        if (*(long*)(lVar2 + 40) != 0) {
            lVar2 = mixerController.operator->();
            if (*(Mixer**)(lVar2 + 40) == this) {
                FixMixerWait();
                mixerController_00 = (MixerController*)mixerController;
                UnlinkController(*mixerController_00);
            } else {
                errorCapture.Raise("mixercontroller attached to a different mixer");
            }
        }
    }

    // 0x10029ef10
    void Mixer::UnlinkController(MixerController& mixerController) {
        long lVar2;
        __thread_id* local_30;

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        bool cVar1 = thread_id1_00 == g_idWorkerThread;
        if (!cVar1) {
            new (&local_30) std::__thread_id();
            cVar1 = thread_id1 == local_30;
            if (!cVar1) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "mixer.cpp",
                          214, nullptr);
            }
        }
        (**(void (**)(...))(*(long*)mixerController + 24))(mixerController);
        *(uint64_t*)(mixerController + 40) = 0;
        mixerController.Unlink();
        cVar1 = field_120.empty();
        int iVar3 = -1;
        if (!cVar1) {
            lVar2 = (field_120.begin()).HeapBeginPtr();
            iVar3 = *(int*)(lVar2 + 32);
        }
        field_140 = iVar3;
    }

    // 0x10029f040
    auto Mixer::SubstreamStart() {
        shared_ptr<dash3d::GroundDecor>* groundDecor;
        __thread_id* local_30;

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        if (!(thread_id1_00 == g_idWorkerThread)) {
            new (&local_30) std::__thread_id();
            if (!(thread_id1 == local_30)) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "mixer.cpp",
                          224, nullptr);
            }
        }
        uint8_t* this_00 = &field_96;
        if (!(this_00->empty())) {
            field_112 = this_00->begin();
            ++field_112;
            groundDecor = (shared_ptr<dash3d::GroundDecor>*)this_00->front();
            auto result(groundDecor);
        } else {
            new (&result) shared_ptr();
        }
        return result;
    }

    // 0x10029f180
    auto Mixer::SubstreamNext() {
        shared_ptr<dash3d::GroundDecor>* groundDecor;
        uint8_t* this_00;
        __thread_id* local_30;
        uint64_t local_28;

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        if (!(thread_id1_00 == g_idWorkerThread)) {
            new (&local_30) std::__thread_id();
            if (!(thread_id1 == local_30)) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "mixer.cpp",
                          239, nullptr);
            }
        }
        if (!(field_96.empty())) {
            this_00 = &field_112;
            local_28 = field_96.end();
            if (!(*this_00 == local_28)) {
                groundDecor = (shared_ptr<dash3d::GroundDecor>*)this_00->shared();
                ++*this_00;
                return auto(groundDecor);
            }
        }
        new (&result) shared_ptr();
        return result;
    }

    // 0x10029f270
    uint64_t Mixer::SelfMixCost() {
        return 0;
    }

    // 0x10029f280
    void Mixer::DoMix(Array<int>& arg1, int arg2, int arg3) {
        __thread_id* local_38;

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        if (!(thread_id1_00 == g_idWorkerThread)) {
            new (&local_38) std::__thread_id();
            if (!(thread_id1 == local_38)) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "mixer.cpp",
                          257, nullptr);
            }
        }
        SyncWithMainThread();
        m_streamCountLastMix = DoMixLoop(arg1, arg2, arg3);
        long lVar3 = core::SafeTime::CurrentTimeMillis();
        if ((field_80 + 1000 <= lVar3) && (field_80 = lVar3, 500 < m_streamCountLastMix)) {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                      "mixer.cpp",
                      270, "MIXER: streams=%d - if this is growing uncontrollably, you are leaking streams!",
                      m_streamCountLastMix);
        }
    }

    // 0x10029f370
    void Mixer::DoMixLoop(Array<int>& arg1, int arg2, int arg3) {
        int iVar2;
        __thread_id* local_60[2];
        uint32_t local_38;

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        if (!(thread_id1_00 == g_idWorkerThread)) {
            new (local_60) std::__thread_id();
            if (!(thread_id1 == local_60[0])) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "mixer.cpp",
                          278, nullptr);
            }
        }
        uint8_t* local_50 = &field_120;
        if (-1 < field_140) {
            iVar2 = field_136 + arg3;
            if (field_140 <= iVar2) {
                local_38 = (uint32_t)local_50;
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                                "sound/mixer.cpp",
                                296, "didn\'t think this was used");
            }
            field_136 = iVar2;
        }
        Mix2(arg1, arg2, arg3);
    }

    // 0x10029f540
    int Mixer::Mix2(Array<int>& arg1, int arg2, int arg3) {
        __thread_id* local_58;

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        bool cVar1 = thread_id1_00 == g_idWorkerThread;
        if (!cVar1) {
            new (&local_58) std::__thread_id();
            cVar1 = thread_id1 == local_58;
            if (!cVar1) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "mixer.cpp",
                          332, nullptr);
            }
        }
        uint8_t* this_01 = &field_96;
        SharedPtrList<rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>* local_50 =
            (SharedPtrList<rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>*)this_01;
        uint64_t local_48 = this_01->begin();
        uint64_t local_38 = this_01->end();
        cVar1 = local_48 != local_38;
        int iVar2 = 0;
        if (cVar1) {
            iVar2 = 0;
            do {
                iVar2 = iVar2 + 1;
                local_38 = local_48.next();
                ((PCMStream*)local_48.HeapBeginPtr())->MaybeMix(arg1, arg2, arg3);
                local_48 = local_38;
                local_38 = local_50->end();
                cVar1 = local_48 != local_38;
            } while (cVar1);
        }
        return iVar2;
    }

    // 0x10029f6b0
    void Mixer::PretendToMix(int arg1) {
        int iVar2;
        __thread_id* local_48[2];

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        if (!(thread_id1_00 == g_idWorkerThread)) {
            new (local_48) std::__thread_id();
            if (!(thread_id1 == local_48[0])) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "mixer.cpp",
                          350, nullptr);
            }
        }
        SyncWithMainThread();
        uint8_t* local_38 = &field_120;
        if (-1 < field_140) {
            iVar2 = field_136 + arg1;
            if (field_140 <= iVar2) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                                "sound/mixer.cpp",
                                373, "didn\'t think this was used");
            }
            field_136 = iVar2;
        }
        PretendToMix2(arg1);
    }

    // 0x10029f840
    void Mixer::PretendToMix2(int arg1) {
        long* plVar2;
        __thread_id* local_48;

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        bool cVar1 = thread_id1_00 == g_idWorkerThread;
        if (!cVar1) {
            new (&local_48) std::__thread_id();
            cVar1 = thread_id1 == local_48;
            if (!cVar1) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "mixer.cpp",
                          406, nullptr);
            }
        }
        uint64_t local_40 = field_96.begin();
        uint64_t local_38 = field_96.end();
        cVar1 = local_40 != local_38;
        int iVar3 = 0;
        if (cVar1) {
            iVar3 = 0;
            do {
                plVar2 = (long*)local_40.HeapBeginPtr();
                (**(void (**)(...))(*plVar2 + 48))(plVar2, arg1);
                iVar3 = iVar3 + 1;
                ++local_40;
                cVar1 = local_40 != local_38;
            } while (cVar1);
        }
        m_streamCountLastMix = iVar3;
    }

} // namespace jag::oldscape::sound
