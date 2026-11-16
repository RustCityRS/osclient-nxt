// libs/oldscape/jagex3/sound/mixer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "mixer.h"

namespace jag::oldscape::sound {
    // 0x1016c1db9, 7 bytes, __common; zero-initialised
    Mixer::m_repriAlreadyWarned;

    // 0x1000694d0: the linker folded this into MinimapElement::~MinimapElement(), which has identical code
    Mixer::QueuedOp::~QueuedOp();

    // 0x1000782e0: the linker folded this into MinimapElement::~MinimapElement(), which has identical code
    Mixer::QueuedOp::~QueuedOp();

    // 0x1000b7900: the linker folded this into minimenu::MinimenuEntry::GetSubjectType() const, which has identical code
    Mixer::GetStreamCountLastMix() const;

    // 0x10029d6f0, 96 bytes, placed by class name and debug map
    // Mixer::QueueStopStream(shared_ptr<PCMStream> const&)
    void Mixer::QueueStopStream(shared_ptr* param_1) {
        QueuedOp* pQVar1;

        pQVar1 = operator_new(32);
        QueuedOp::QueuedOp(pQVar1, 0, param_1);
        (&field_144, pQVar1)->PushHead();
    }

    // 0x10029d7d0, 96 bytes, placed by class name and debug map
    // Mixer::QueuePlayStream(shared_ptr<PCMStream> const&)
    void Mixer::QueuePlayStream(shared_ptr* param_1) {
        QueuedOp* pQVar1;

        pQVar1 = operator_new(32);
        QueuedOp::QueuedOp(pQVar1, 1, param_1);
        (&field_144, pQVar1)->PushHead();
    }

    // 0x10029d840, 240 bytes, placed by class name and debug map
    // Mixer::SyncWithMainThread()
    void Mixer::SyncWithMainThread() {
        undefined8 uVar1;
        char cVar2;
        undefined8 in_RAX;
        undefined8 uVar3;
        LockFreeStackData<Mixer::QueuedOp>* this_00;
        Mixer* this_01;
        Mixer* pMVar4;
        Mixer* this_02;
        undefined8 local_28;

        local_28 = in_RAX;
        uVar3 = std::this_thread::get_id();
        uVar1 = g_idWorkerThread;
        cVar2 = std::operator==(uVar3, g_idWorkerThread);
        if (cVar2 == '\0') {
            new (&local_28) std::__thread_id();
            cVar2 = std::operator==(uVar1, local_28);
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "mixer.cpp",
                          33, (char*)0);
            }
        }
        this_00 = (LockFreeStackData<Mixer::QueuedOp>*)(&field_144)->TakeStack();
        if (this_00 != (LockFreeStackData<Mixer::QueuedOp>*)0) {
            this_01 = (Mixer*)this_00->Reverse();
            if (this_01 != (Mixer*)0) {
                do {
                    this_02 = this_01;
                    pMVar4 = (Mixer*)this_01->HeapBeginPtr();
                    if (*(int*)&this_01->field_8 == 1) {
                        PlayStream(this, (shared_ptr*)&this_01->field_16);
                    } else if (*(int*)&this_01->field_8 == 0) {
                        StopStream(this_02, (shared_ptr*)&this_01->field_16);
                    }
                    this_01->~InterfaceMouseEvent();
                    operator_delete(this_01);
                    this_01 = pMVar4;
                } while (pMVar4 != (Mixer*)0);
            }
        }
    }

    // 0x10029d960, 128 bytes, placed by class name and debug map
    // Mixer::StopStream(shared_ptr<PCMStream> const&)
    void Mixer::StopStream(shared_ptr* param_1) {
        undefined8 uVar1;
        char cVar2;
        undefined8 uVar3;
        Linkable<PCMStream>* this_00;
        undefined8 local_20;

        uVar3 = std::this_thread::get_id();
        uVar1 = g_idWorkerThread;
        cVar2 = std::operator==(uVar3, g_idWorkerThread);
        if (cVar2 == '\0') {
            new (&local_20) std::__thread_id();
            cVar2 = std::operator==(uVar1, local_20);
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "mixer.cpp",
                          83, (char*)0);
            }
        }
        this_00 = (Linkable<PCMStream>*)shared_ptr<PCMStream>::operator->((shared_ptr<PCMStream>*)param_1);
        this_00->Unlink();
    }

    // 0x10029d9e0, 208 bytes, placed by class name and debug map
    // Mixer::PlayStream(shared_ptr<PCMStream> const&)
    void Mixer::PlayStream(shared_ptr* param_1) {
        char cVar1;
        undefined8 in_RAX;
        undefined8 uVar2;
        Linkable<MixerController>* this_00;
        undefined8 uVar3;
        undefined8 local_28;

        local_28 = in_RAX;
        uVar2 = std::this_thread::get_id();
        uVar3 = g_idWorkerThread;
        cVar1 = std::operator==(uVar2, g_idWorkerThread);
        if (cVar1 == '\0') {
            new (&local_28) std::__thread_id();
            cVar1 = std::operator==(uVar3, local_28);
            if (cVar1 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "mixer.cpp",
                          60, (char*)0);
            }
        }
        if (m_repriAlreadyWarned == '\0') {
            this_00 = (Linkable<MixerController>*)shared_ptr<PCMStream>::operator->((shared_ptr<PCMStream>*)param_1);
            cVar1 = this_00->IsLinked();
            if (cVar1 != '\0') {
                m_repriAlreadyWarned = '\x01';
                uVar3 = logger::default_logger();
                logger::Logger::Log(
                    uVar3, 0, 6,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                    "mixer.cpp",
                    65,
                    "Warning: if you were calling playstream in an attempt to get the stream reprioritised, it "
                    "doesn\'t work that way any more - you should set wantmix instead");
            }
        }
        (&field_96, param_1)->push_front();
    }

    // 0x10029db70, 240 bytes, placed by class name and debug map
    // Mixer::PlaystreamDelayedMillis(shared_ptr<PCMStream>&, int)
    void Mixer::PlaystreamDelayedMillis(shared_ptr* param_1, int param_2) {
        undefined8 uVar1;
        char cVar2;
        undefined8 uVar3;
        shared_ptr in_stack_ffffffffffffffa8;
        shared_ptr<dash3d::Decor> asStack_46[6];
        undefined8 local_40;
        shared_ptr local_38;

        uVar3 = std::this_thread::get_id();
        uVar1 = g_idWorkerThread;
        cVar2 = std::operator==(uVar3, g_idWorkerThread);
        if (cVar2 == '\0') {
            new (&local_40) std::__thread_id();
            cVar2 = std::operator==(uVar1, local_40);
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "mixer.cpp",
                          73, (char*)0);
            }
        }
        if (0 < param_2) {
            shared_ptr<dash3d::Decor>::shared_ptr(asStack_46 + -10, param_1);
            local_38.ByMillis(in_stack_ffffffffffffffa8, (int)(asStack_46 + -10));
            shared_ptr<PCMStream>::operator=((shared_ptr<PCMStream>*)param_1, &local_38);
            local_38.~shared_ptr();
            ((asStack_46 + -10))->~shared_ptr();
        }
        PlayStream(this, param_1);
    }

    // 0x10029dce0, 240 bytes, placed by class name and debug map
    // Mixer::PlayWaveRatePercent(shared_ptr<Wave>&, int, int)
    void Mixer::PlayWaveRatePercent(shared_ptr* param_1, int param_2, int param_3) {
        undefined8 uVar1;
        char cVar2;
        undefined8 uVar3;
        WaveStream* pWVar4;
        undefined8 local_50;
        shared_ptr local_48;
        unique_ptr<WaveStream, std::default_delete<WaveStream>> local_38[8];

        uVar3 = std::this_thread::get_id();
        uVar1 = g_idWorkerThread;
        cVar2 = std::operator==(uVar3, g_idWorkerThread);
        if (cVar2 == '\0') {
            new (&local_50) std::__thread_id();
            cVar2 = std::operator==(uVar1, local_50);
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "mixer.cpp",
                          89, (char*)0);
            }
        }
        local_38->NewRatePercent(param_1, param_2, param_3);
        pWVar4 = (WaveStream*)std::unique_ptr<WaveStream, std::default_delete<WaveStream>>::release(local_38);
        shared_ptr<PCMStream>::shared_ptr<WaveStream, void>((shared_ptr<PCMStream>*)&local_48, pWVar4);
        std::unique_ptr<WaveStream, std::default_delete<WaveStream>>::~unique_ptr(local_38);
        PlayStream(this, &local_48);
        local_48.~shared_ptr();
    }

    // 0x10029deb0, 256 bytes, placed by class name
    // Mixer::PlayWaveRatePercent(shared_ptr<Wave>&, int, int, int)
    void Mixer::PlayWaveRatePercent(shared_ptr* param_1, int param_2, int param_3, int param_4) {
        undefined8 uVar1;
        char cVar2;
        undefined8 uVar3;
        WaveStream* pWVar4;
        undefined8 local_60;
        shared_ptr local_58;
        Mixer* local_48;
        unique_ptr<WaveStream, std::default_delete<WaveStream>> local_40[12];
        int local_34;

        local_48 = this;
        local_34 = param_4;
        uVar3 = std::this_thread::get_id();
        uVar1 = g_idWorkerThread;
        cVar2 = std::operator==(uVar3, g_idWorkerThread);
        if (cVar2 == '\0') {
            new (&local_60) std::__thread_id();
            cVar2 = std::operator==(uVar1, local_60);
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "mixer.cpp",
                          96, (char*)0);
            }
        }
        local_40->NewRatePercent(param_1, param_2, param_3, local_34);
        pWVar4 = (WaveStream*)std::unique_ptr<WaveStream, std::default_delete<WaveStream>>::release(local_40);
        shared_ptr<PCMStream>::shared_ptr<WaveStream, void>((shared_ptr<PCMStream>*)&local_58, pWVar4);
        std::unique_ptr<WaveStream, std::default_delete<WaveStream>>::~unique_ptr(local_40);
        PlayStream(local_48, &local_58);
        local_58.~shared_ptr();
    }

    // 0x10029e050, 256 bytes, placed by class name
    // Mixer::PlayWaveRatePercentFineVolPan(shared_ptr<Wave>&, int, int, int)
    void Mixer::PlayWaveRatePercentFineVolPan(shared_ptr* param_1, int param_2, int param_3, int param_4) {
        undefined8 uVar1;
        char cVar2;
        undefined8 uVar3;
        WaveStream* pWVar4;
        undefined8 local_60;
        shared_ptr local_58;
        Mixer* local_48;
        unique_ptr<WaveStream, std::default_delete<WaveStream>> local_40[12];
        int local_34;

        local_48 = this;
        local_34 = param_4;
        uVar3 = std::this_thread::get_id();
        uVar1 = g_idWorkerThread;
        cVar2 = std::operator==(uVar3, g_idWorkerThread);
        if (cVar2 == '\0') {
            new (&local_60) std::__thread_id();
            cVar2 = std::operator==(uVar1, local_60);
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "mixer.cpp",
                          103, (char*)0);
            }
        }
        local_40->NewRatePercentFineVolPan(param_1, param_2, param_3, local_34);
        pWVar4 = (WaveStream*)std::unique_ptr<WaveStream, std::default_delete<WaveStream>>::release(local_40);
        shared_ptr<PCMStream>::shared_ptr<WaveStream, void>((shared_ptr<PCMStream>*)&local_58, pWVar4);
        std::unique_ptr<WaveStream, std::default_delete<WaveStream>>::~unique_ptr(local_40);
        PlayStream(local_48, &local_58);
        local_58.~shared_ptr();
    }

    // 0x10029e1f0, 240 bytes, placed by class name
    // Mixer::PlayWaveRateRaw(shared_ptr<Wave>&, int, int)
    void Mixer::PlayWaveRateRaw(shared_ptr* param_1, int param_2, int param_3) {
        undefined8 uVar1;
        char cVar2;
        undefined8 uVar3;
        WaveStream* pWVar4;
        undefined8 local_50;
        shared_ptr local_48;
        unique_ptr<WaveStream, std::default_delete<WaveStream>> local_38[8];

        uVar3 = std::this_thread::get_id();
        uVar1 = g_idWorkerThread;
        cVar2 = std::operator==(uVar3, g_idWorkerThread);
        if (cVar2 == '\0') {
            new (&local_50) std::__thread_id();
            cVar2 = std::operator==(uVar1, local_50);
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "mixer.cpp",
                          110, (char*)0);
            }
        }
        local_38->NewRateRaw(param_1, param_2, param_3);
        pWVar4 = (WaveStream*)std::unique_ptr<WaveStream, std::default_delete<WaveStream>>::release(local_38);
        shared_ptr<PCMStream>::shared_ptr<WaveStream, void>((shared_ptr<PCMStream>*)&local_48, pWVar4);
        std::unique_ptr<WaveStream, std::default_delete<WaveStream>>::~unique_ptr(local_38);
        PlayStream(this, &local_48);
        local_48.~shared_ptr();
    }

    // 0x10029e370, 256 bytes, placed by class name
    // Mixer::PlayWaveRateRaw(shared_ptr<Wave>&, int, int, int)
    void Mixer::PlayWaveRateRaw(shared_ptr* param_1, int param_2, int param_3, int param_4) {
        undefined8 uVar1;
        char cVar2;
        undefined8 uVar3;
        WaveStream* pWVar4;
        undefined8 local_60;
        shared_ptr local_58;
        Mixer* local_48;
        unique_ptr<WaveStream, std::default_delete<WaveStream>> local_40[12];
        int local_34;

        local_48 = this;
        local_34 = param_4;
        uVar3 = std::this_thread::get_id();
        uVar1 = g_idWorkerThread;
        cVar2 = std::operator==(uVar3, g_idWorkerThread);
        if (cVar2 == '\0') {
            new (&local_60) std::__thread_id();
            cVar2 = std::operator==(uVar1, local_60);
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "mixer.cpp",
                          117, (char*)0);
            }
        }
        local_40->NewRateRaw(param_1, param_2, param_3, local_34);
        pWVar4 = (WaveStream*)std::unique_ptr<WaveStream, std::default_delete<WaveStream>>::release(local_40);
        shared_ptr<PCMStream>::shared_ptr<WaveStream, void>((shared_ptr<PCMStream>*)&local_58, pWVar4);
        std::unique_ptr<WaveStream, std::default_delete<WaveStream>>::~unique_ptr(local_40);
        PlayStream(local_48, &local_58);
        local_58.~shared_ptr();
    }

    // 0x10029e510, 256 bytes, placed by class name
    // Mixer::PlayWaveRatePercentDelayedMillis(shared_ptr<Wave>&, int, int, int)
    void Mixer::PlayWaveRatePercentDelayedMillis(shared_ptr* param_1, int param_2, int param_3, int param_4) {
        undefined8 uVar1;
        char cVar2;
        undefined8 uVar3;
        WaveStream* pWVar4;
        undefined8 local_60;
        shared_ptr local_58;
        Mixer* local_48;
        unique_ptr<WaveStream, std::default_delete<WaveStream>> local_40[12];
        int local_34;

        local_48 = this;
        local_34 = param_4;
        uVar3 = std::this_thread::get_id();
        uVar1 = g_idWorkerThread;
        cVar2 = std::operator==(uVar3, g_idWorkerThread);
        if (cVar2 == '\0') {
            new (&local_60) std::__thread_id();
            cVar2 = std::operator==(uVar1, local_60);
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "mixer.cpp",
                          124, (char*)0);
            }
        }
        local_40->NewRatePercent(param_1, param_2, param_3);
        pWVar4 = (WaveStream*)std::unique_ptr<WaveStream, std::default_delete<WaveStream>>::release(local_40);
        shared_ptr<PCMStream>::shared_ptr<WaveStream, void>((shared_ptr<PCMStream>*)&local_58, pWVar4);
        std::unique_ptr<WaveStream, std::default_delete<WaveStream>>::~unique_ptr(local_40);
        PlaystreamDelayedMillis(local_48, &local_58, local_34);
        local_58.~shared_ptr();
    }

    // 0x10029e610, 256 bytes, placed by class name
    // Mixer::PlayWaveRatePercentDelayedMillis(shared_ptr<Wave>&, int, int, int, int)
    void Mixer::PlayWaveRatePercentDelayedMillis(shared_ptr* param_1, int param_2, int param_3, int param_4,
                                                 int param_5) {
        undefined8 uVar1;
        char cVar2;
        undefined8 uVar3;
        WaveStream* pWVar4;
        undefined8 local_60;
        shared_ptr local_58;
        Mixer* local_48;
        unique_ptr<WaveStream, std::default_delete<WaveStream>> local_40[8];
        int local_38;
        int local_34;

        local_48 = this;
        local_38 = param_4;
        local_34 = param_5;
        uVar3 = std::this_thread::get_id();
        uVar1 = g_idWorkerThread;
        cVar2 = std::operator==(uVar3, g_idWorkerThread);
        if (cVar2 == '\0') {
            new (&local_60) std::__thread_id();
            cVar2 = std::operator==(uVar1, local_60);
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "mixer.cpp",
                          131, (char*)0);
            }
        }
        local_40->NewRatePercent(param_1, param_2, param_3, local_38);
        pWVar4 = (WaveStream*)std::unique_ptr<WaveStream, std::default_delete<WaveStream>>::release(local_40);
        shared_ptr<PCMStream>::shared_ptr<WaveStream, void>((shared_ptr<PCMStream>*)&local_58, pWVar4);
        std::unique_ptr<WaveStream, std::default_delete<WaveStream>>::~unique_ptr(local_40);
        PlaystreamDelayedMillis(local_48, &local_58, local_34);
        local_58.~shared_ptr();
    }

    // 0x10029e710, 256 bytes, placed by class name
    // Mixer::PlayWaveRateRawDelayedMillis(shared_ptr<Wave>&, int, int, int)
    void Mixer::PlayWaveRateRawDelayedMillis(shared_ptr* param_1, int param_2, int param_3, int param_4) {
        undefined8 uVar1;
        char cVar2;
        undefined8 uVar3;
        WaveStream* pWVar4;
        undefined8 local_60;
        shared_ptr local_58;
        Mixer* local_48;
        unique_ptr<WaveStream, std::default_delete<WaveStream>> local_40[12];
        int local_34;

        local_48 = this;
        local_34 = param_4;
        uVar3 = std::this_thread::get_id();
        uVar1 = g_idWorkerThread;
        cVar2 = std::operator==(uVar3, g_idWorkerThread);
        if (cVar2 == '\0') {
            new (&local_60) std::__thread_id();
            cVar2 = std::operator==(uVar1, local_60);
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "mixer.cpp",
                          138, (char*)0);
            }
        }
        local_40->NewRateRaw(param_1, param_2, param_3);
        pWVar4 = (WaveStream*)std::unique_ptr<WaveStream, std::default_delete<WaveStream>>::release(local_40);
        shared_ptr<PCMStream>::shared_ptr<WaveStream, void>((shared_ptr<PCMStream>*)&local_58, pWVar4);
        std::unique_ptr<WaveStream, std::default_delete<WaveStream>>::~unique_ptr(local_40);
        PlaystreamDelayedMillis(local_48, &local_58, local_34);
        local_58.~shared_ptr();
    }

    // 0x10029e810, 256 bytes, placed by class name
    // Mixer::PlayWaveRateRawDelayedMillis(shared_ptr<Wave>&, int, int, int, int)
    void Mixer::PlayWaveRateRawDelayedMillis(shared_ptr* param_1, int param_2, int param_3, int param_4, int param_5) {
        undefined8 uVar1;
        char cVar2;
        undefined8 uVar3;
        WaveStream* pWVar4;
        undefined8 local_60;
        shared_ptr local_58;
        Mixer* local_48;
        unique_ptr<WaveStream, std::default_delete<WaveStream>> local_40[8];
        int local_38;
        int local_34;

        local_48 = this;
        local_38 = param_4;
        local_34 = param_5;
        uVar3 = std::this_thread::get_id();
        uVar1 = g_idWorkerThread;
        cVar2 = std::operator==(uVar3, g_idWorkerThread);
        if (cVar2 == '\0') {
            new (&local_60) std::__thread_id();
            cVar2 = std::operator==(uVar1, local_60);
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "mixer.cpp",
                          145, (char*)0);
            }
        }
        local_40->NewRateRaw(param_1, param_2, param_3, local_38);
        pWVar4 = (WaveStream*)std::unique_ptr<WaveStream, std::default_delete<WaveStream>>::release(local_40);
        shared_ptr<PCMStream>::shared_ptr<WaveStream, void>((shared_ptr<PCMStream>*)&local_58, pWVar4);
        std::unique_ptr<WaveStream, std::default_delete<WaveStream>>::~unique_ptr(local_40);
        PlaystreamDelayedMillis(local_48, &local_58, local_34);
        local_58.~shared_ptr();
    }

    // 0x10029e910, 256 bytes, placed by class name
    // Mixer::FixMixerWait()
    void Mixer::FixMixerWait() {
        undefined8 uVar1;
        char cVar2;
        bool bVar3;
        undefined8 uVar4;
        long lVar5;
        hashtable_iterator_base* extraout_RDX;
        undefined1 auVar6[16];
        undefined8 local_38;
        undefined8 local_30;
        undefined8 local_28;

        uVar4 = std::this_thread::get_id();
        uVar1 = g_idWorkerThread;
        cVar2 = std::operator==(uVar4, g_idWorkerThread);
        if (cVar2 == '\0') {
            new (&local_38) std::__thread_id();
            cVar2 = std::operator==(uVar1, local_38);
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "mixer.cpp",
                          152, (char*)0);
            }
        }
        if (0 < field_136) {
            local_30 = (&field_120)->begin();
            auVar6 = (&field_120)->end();
            local_28 = auVar6._0_8_;
            bVar3 = eastl::operator!=((eastl*)&local_30, (hashtable_iterator_base*)&local_28, auVar6._8_8_);
            if (bVar3) {
                do {
                    lVar5 = local_30.HeapBeginPtr();
                    *(int*)(lVar5 + 32) = *(int*)(lVar5 + 32) - field_136;
                    SharedPtrList<rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>::obj_iterator::operator++(
                        (obj_iterator*)&local_30);
                    bVar3 = eastl::operator!=((eastl*)&local_30, (hashtable_iterator_base*)&local_28, extraout_RDX);
                } while (bVar3);
            }
            field_140 = field_140 - field_136;
            field_136 = 0;
        }
    }

    // 0x10029ea40, 240 bytes, placed by class name
    // Mixer::AddController(shared_ptr<MixerController>&, ErrorCapture&)
    void Mixer::AddController(shared_ptr* param_1, ErrorCapture* param_2) {
        char cVar1;
        undefined8 uVar2;
        long lVar3;
        long* plVar4;
        undefined8 uVar5;
        undefined8 local_30;

        uVar2 = std::this_thread::get_id();
        uVar5 = g_idWorkerThread;
        cVar1 = std::operator==(uVar2, g_idWorkerThread);
        if (cVar1 == '\0') {
            new (&local_30) std::__thread_id();
            cVar1 = std::operator==(uVar5, local_30);
            if (cVar1 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "mixer.cpp",
                          167, (char*)0);
            }
        }
        lVar3 = shared_ptr<MixerController>::operator->((shared_ptr<MixerController>*)param_1);
        if (*(long*)(lVar3 + 40) == 0) {
            FixMixerWait(this);
            lVar3 = shared_ptr<MixerController>::operator->((shared_ptr<MixerController>*)param_1);
            *(Mixer**)(lVar3 + 40) = this;
            plVar4 = (long*)shared_ptr<MixerController>::operator->((shared_ptr<MixerController>*)param_1);
            (**(code**)(*plVar4 + 16))(plVar4);
            (&field_120, param_1)->push_back();
            uVar5 = (&field_120)->begin();
            uVar2 = shared_ptr<MixerController>::operator*((shared_ptr<MixerController>*)param_1);
            SortController(this, uVar5, uVar2);
        } else {
            param_2->Raise("mixercontroller already attached");
        }
    }

    // 0x10029eb80, 208 bytes, placed by class name
    // Mixer::SortController(SharedPtrList<MixerController>::obj_iterator, MixerController&)
    void Mixer::SortController(undefined8 param_2, MixerController* param_3) {
        undefined1* this_00;
        char cVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        long lVar4;
        undefined8 local_40;
        undefined8 local_38;
        undefined8 local_30;

        uVar2 = std::this_thread::get_id();
        uVar3 = g_idWorkerThread;
        cVar1 = std::operator==(uVar2, g_idWorkerThread);
        if (cVar1 == '\0') {
            new (&local_40) std::__thread_id();
            cVar1 = std::operator==(uVar3, local_40);
            if (cVar1 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "mixer.cpp",
                          183, (char*)0);
            }
        }
        this_00 = &field_120;
        uVar3 = this_00->end();
        local_38 =
            eastl::find_if<SharedPtrList<MixerController>::obj_iterator,
                           (SharedPtrList<MixerController>::obj_iterator)->SortController(MixerController&)::__0>(
                param_2, uVar3, param_3);
        this_00->move(param_3, (obj_iterator*)&local_38);
        local_30 = this_00->begin();
        lVar4 = local_30.HeapBeginPtr();
        field_140 = *(int*)(lVar4 + 32);
    }

    // 0x10029ee40, 208 bytes, placed by class name
    // Mixer::RemoveController(shared_ptr<MixerController> const&, ErrorCapture&)
    void Mixer::RemoveController(shared_ptr* param_1, ErrorCapture* param_2) {
        undefined8 uVar1;
        char cVar2;
        undefined8 uVar3;
        long lVar4;
        MixerController* pMVar5;
        undefined8 local_30;

        uVar3 = std::this_thread::get_id();
        uVar1 = g_idWorkerThread;
        cVar2 = std::operator==(uVar3, g_idWorkerThread);
        if (cVar2 == '\0') {
            new (&local_30) std::__thread_id();
            cVar2 = std::operator==(uVar1, local_30);
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "mixer.cpp",
                          195, (char*)0);
            }
        }
        lVar4 = shared_ptr<MixerController>::operator->((shared_ptr<MixerController>*)param_1);
        if (*(long*)(lVar4 + 40) != 0) {
            lVar4 = shared_ptr<MixerController>::operator->((shared_ptr<MixerController>*)param_1);
            if (*(Mixer**)(lVar4 + 40) == this) {
                FixMixerWait(this);
                pMVar5 =
                    (MixerController*)shared_ptr<MixerController>::operator*((shared_ptr<MixerController>*)param_1);
                UnlinkController(this, pMVar5);
            } else {
                param_2->Raise("mixercontroller attached to a different mixer");
            }
        }
    }

    // 0x10029ef10, 192 bytes, placed by class name
    // Mixer::UnlinkController(MixerController&)
    void Mixer::UnlinkController(MixerController* param_1) {
        undefined8 uVar1;
        char cVar2;
        undefined8 uVar3;
        long lVar4;
        int iVar5;
        undefined8 local_30;
        undefined8 local_28;

        uVar3 = std::this_thread::get_id();
        uVar1 = g_idWorkerThread;
        cVar2 = std::operator==(uVar3, g_idWorkerThread);
        if (cVar2 == '\0') {
            new (&local_30) std::__thread_id();
            cVar2 = std::operator==(uVar1, local_30);
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "mixer.cpp",
                          214, (char*)0);
            }
        }
        (**(code**)(*(long*)param_1 + 24))(param_1);
        *(undefined8*)(param_1 + 40) = 0;
        param_1->Unlink();
        cVar2 = (&field_120)->empty();
        iVar5 = -1;
        if (cVar2 == '\0') {
            local_28 = (&field_120)->begin();
            lVar4 = local_28.HeapBeginPtr();
            iVar5 = *(int*)(lVar4 + 32);
        }
        field_140 = iVar5;
    }

    // 0x10029f040, 208 bytes, placed by class name
    // Mixer::SubstreamStart()
    Mixer* Mixer::SubstreamStart() {
        SharedPtrList<PCMStream>* this_00;
        undefined8 uVar1;
        char cVar2;
        undefined8 uVar3;
        shared_ptr* psVar4;
        long in_RSI;
        __thread_id local_30[8];
        undefined8 local_28;

        uVar3 = std::this_thread::get_id();
        uVar1 = g_idWorkerThread;
        cVar2 = std::operator==(uVar3);
        if (cVar2 == '\0') {
            std::__thread_id::__thread_id(local_30);
            cVar2 = std::operator==(uVar1);
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "mixer.cpp",
                          224, (char*)0);
            }
        }
        this_00 = (SharedPtrList<PCMStream>*)(in_RSI + 96);
        cVar2 = this_00->empty();
        if (cVar2 == '\0') {
            local_28 = this_00->begin();
            eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator=(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const,
                                eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)(in_RSI + 112),
                (rbtree_iterator*)&local_28);
            SharedPtrList<rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>::obj_iterator::operator++(
                (obj_iterator*)(in_RSI + 112));
            psVar4 = (shared_ptr*)this_00->front();
            new (this) shared_ptr<dash3d::Decor>(psVar4);
        } else {
            new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        }
        return this;
    }

    // 0x10029f180, 208 bytes, placed by class name
    // Mixer::SubstreamNext()
    Mixer* Mixer::SubstreamNext() {
        undefined8 uVar1;
        char cVar2;
        undefined8 uVar4;
        shared_ptr* psVar5;
        long in_RSI;
        eastl* this_00;
        undefined1 auVar6[16];
        __thread_id local_30[8];
        undefined8 local_28;

        uVar4 = std::this_thread::get_id();
        uVar1 = g_idWorkerThread;
        cVar2 = std::operator==(uVar4);
        if (cVar2 == '\0') {
            std::__thread_id::__thread_id(local_30);
            cVar2 = std::operator==(uVar1);
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "mixer.cpp",
                          239, (char*)0);
            }
        }
        cVar2 = ((in_RSI + 96))->empty();
        if (cVar2 == '\0') {
            this_00 = (eastl*)(in_RSI + 112);
            auVar6 = ((in_RSI + 96))->end();
            local_28 = auVar6._0_8_;
            if (!eastl::operator==(this_00, (hashtable_iterator_base*)&local_28, auVar6._8_8_)) {
                psVar5 = (shared_ptr*)this_00->shared();
                SharedPtrList<rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>::obj_iterator::operator++(
                    (obj_iterator*)this_00);
                new (this) shared_ptr<dash3d::Decor>(psVar5);
                return this;
            }
        }
        new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        return this;
    }

    // 0x10029f270, 16 bytes, placed by class name
    // Mixer::SelfMixCost()
    undefined8 Mixer::SelfMixCost() {
        return 0;
    }

    // 0x10029f280, 240 bytes, placed by class name
    // Mixer::DoMix(Array<int, eastl::allocator>&, int, int)
    void Mixer::DoMix(Array* param_1, int param_2, int param_3) {
        char cVar1;
        undefined8 uVar3;
        long lVar4;
        undefined8 uVar5;
        undefined8 local_38;

        uVar3 = std::this_thread::get_id();
        uVar5 = g_idWorkerThread;
        cVar1 = std::operator==(uVar3, g_idWorkerThread);
        if (cVar1 == '\0') {
            new (&local_38) std::__thread_id();
            cVar1 = std::operator==(uVar5, local_38);
            if (cVar1 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "mixer.cpp",
                          257, (char*)0);
            }
        }
        SyncWithMainThread(this);
        m_streamCountLastMix = DoMixLoop(this, param_1, param_2, param_3);
        lVar4 = ((Mixer*)this)->CurrentTimeMillis();
        if ((field_80 + 1000 <= lVar4) && (field_80 = lVar4, 500 < m_streamCountLastMix)) {
            uVar5 = logger::default_logger();
            logger::Logger::Log(
                uVar5, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/mixer.cpp",
                270, "MIXER: streams=%d - if this is growing uncontrollably, you are leaking streams!",
                m_streamCountLastMix);
        }
    }

    // 0x10029f370, 464 bytes, placed by class name
    // Mixer::DoMixLoop(Array<int, eastl::allocator>&, int, int)
    void Mixer::DoMixLoop(Array* param_1, int param_2, int param_3) {
        undefined8 uVar1;
        char cVar2;
        undefined8 uVar3;
        int iVar4;
        undefined8 local_60[2];
        undefined1* local_50;
        undefined4 local_38;

        uVar3 = std::this_thread::get_id();
        uVar1 = g_idWorkerThread;
        cVar2 = std::operator==(uVar3, g_idWorkerThread);
        if (cVar2 == '\0') {
            new (local_60) std::__thread_id();
            cVar2 = std::operator==(uVar1, local_60[0]);
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "mixer.cpp",
                          278, (char*)0);
            }
        }
        local_50 = &field_120;
        if (-1 < field_140) {
            iVar4 = field_136 + param_3;
            if (field_140 <= iVar4) {
                local_38 = SUB84(local_50, 0);
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                                "sound/mixer.cpp",
                                296, "didn\'t think this was used");
            }
            field_136 = iVar4;
        }
        Mix2(this, param_1, param_2, param_3);
    }

    // 0x10029f540, 288 bytes, placed by class name
    // Mixer::Mix2(Array<int, eastl::allocator>&, int, int)
    int Mixer::Mix2(Array* param_1, int param_2, int param_3) {
        undefined8 uVar1;
        char cVar2;
        bool bVar3;
        undefined8 uVar4;
        PCMStream* this_00;
        int iVar5;
        undefined1* this_01;
        undefined1 auVar6[16];
        undefined8 local_58;
        SharedPtrList<rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>* local_50;
        undefined8 local_48;
        undefined8 local_38;

        uVar4 = std::this_thread::get_id();
        uVar1 = g_idWorkerThread;
        cVar2 = std::operator==(uVar4, g_idWorkerThread);
        if (cVar2 == '\0') {
            new (&local_58) std::__thread_id();
            cVar2 = std::operator==(uVar1, local_58);
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "mixer.cpp",
                          332, (char*)0);
            }
        }
        this_01 = &field_96;
        local_50 = (SharedPtrList<rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>*)this_01;
        local_48 = this_01->begin();
        auVar6 = this_01->end();
        local_38 = auVar6._0_8_;
        bVar3 = eastl::operator!=((eastl*)&local_48, (hashtable_iterator_base*)&local_38, auVar6._8_8_);
        iVar5 = 0;
        if (bVar3) {
            iVar5 = 0;
            do {
                iVar5 = iVar5 + 1;
                local_38 = local_48.next();
                this_00 = (PCMStream*)local_48.HeapBeginPtr();
                this_00->MaybeMix(param_1, param_2, param_3);
                eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator=(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_48,
                    (rbtree_iterator*)&local_38);
                auVar6 = local_50->end();
                local_38 = auVar6._0_8_;
                bVar3 = eastl::operator!=((eastl*)&local_48, (hashtable_iterator_base*)&local_38, auVar6._8_8_);
            } while (bVar3);
        }
        return iVar5;
    }

    // 0x10029f6b0, 400 bytes, placed by class name
    // Mixer::PretendToMix(int)
    void Mixer::PretendToMix(int param_1) {
        undefined8 uVar1;
        char cVar2;
        undefined8 uVar3;
        int iVar4;
        undefined8 local_48[2];
        undefined1* local_38;

        uVar3 = std::this_thread::get_id();
        uVar1 = g_idWorkerThread;
        cVar2 = std::operator==(uVar3, g_idWorkerThread);
        if (cVar2 == '\0') {
            new (local_48) std::__thread_id();
            cVar2 = std::operator==(uVar1, local_48[0]);
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "mixer.cpp",
                          350, (char*)0);
            }
        }
        SyncWithMainThread(this);
        local_38 = &field_120;
        if (-1 < field_140) {
            iVar4 = field_136 + param_1;
            if (field_140 <= iVar4) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                                "sound/mixer.cpp",
                                373, "didn\'t think this was used");
            }
            field_136 = iVar4;
        }
        PretendToMix2(this, param_1);
    }

    // 0x10029f840, 256 bytes, placed by class name
    // Mixer::PretendToMix2(int)
    void Mixer::PretendToMix2(int param_1) {
        undefined8 uVar1;
        char cVar2;
        bool bVar3;
        undefined8 uVar4;
        long* plVar5;
        hashtable_iterator_base* extraout_RDX;
        int iVar6;
        undefined1 auVar7[16];
        undefined8 local_48;
        undefined8 local_40;
        undefined8 local_38;

        uVar4 = std::this_thread::get_id();
        uVar1 = g_idWorkerThread;
        cVar2 = std::operator==(uVar4, g_idWorkerThread);
        if (cVar2 == '\0') {
            new (&local_48) std::__thread_id();
            cVar2 = std::operator==(uVar1, local_48);
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "mixer.cpp",
                          406, (char*)0);
            }
        }
        local_40 = (&field_96)->begin();
        auVar7 = (&field_96)->end();
        local_38 = auVar7._0_8_;
        bVar3 = eastl::operator!=((eastl*)&local_40, (hashtable_iterator_base*)&local_38, auVar7._8_8_);
        iVar6 = 0;
        if (bVar3) {
            iVar6 = 0;
            do {
                plVar5 = (long*)local_40.HeapBeginPtr();
                (**(code**)(*plVar5 + 48))(plVar5, param_1);
                iVar6 = iVar6 + 1;
                SharedPtrList<rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>::obj_iterator::operator++(
                    (obj_iterator*)&local_40);
                bVar3 = eastl::operator!=((eastl*)&local_40, (hashtable_iterator_base*)&local_38, extraout_RDX);
            } while (bVar3);
        }
        m_streamCountLastMix = iVar6;
    }

} // namespace jag::oldscape::sound
