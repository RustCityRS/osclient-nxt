// libs/oldscape/jagex3/sound/wave_stream.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "wave_stream.h"

namespace jag::oldscape::sound {
    // 0x10029ddd0, 160 bytes, placed by class name and debug map
    // WaveStream::NewRatePercent(shared_ptr<Wave>&, int, int)
    WaveStream* WaveStream::NewRatePercent(shared_ptr* param_1, int param_2, int param_3) {
        char cVar1;
        int iVar2;
        long lVar3;
        WaveStream* this_00;

        lVar3 = shared_ptr<Wave>::operator->((shared_ptr<Wave>*)param_1);
        cVar1 = ((lVar3 + 8))->empty();
        if (cVar1 == '\0') {
            this_00 = operator_new(136);
            iVar2 = rateHelper(param_1, param_2);
            WaveStream(this_00, param_1, iVar2, param_3 << 6);
            std::unique_ptr<WaveStream, std::default_delete<WaveStream>>::unique_ptr<true, void>(
                (unique_ptr<WaveStream, std::default_delete<WaveStream>>*)this, this_00);
        } else {
            std::unique_ptr<WaveStream, std::default_delete<WaveStream>>::unique_ptr<true, void>(
                (_func_decltype_nullptr*)this);
        }
        return this;
    }

    // 0x10029dfb0, 160 bytes, placed by class name and debug map
    // WaveStream::NewRatePercent(shared_ptr<Wave>&, int, int, int)
    WaveStream* WaveStream::NewRatePercent(shared_ptr* param_1, int param_2, int param_3, int param_4) {
        char cVar1;
        int iVar2;
        long lVar3;
        WaveStream* this_00;

        lVar3 = shared_ptr<Wave>::operator->((shared_ptr<Wave>*)param_1);
        cVar1 = ((lVar3 + 8))->empty();
        if (cVar1 == '\0') {
            this_00 = operator_new(136);
            iVar2 = rateHelper(param_1, param_2);
            WaveStream(this_00, param_1, iVar2, param_3 << 6, param_4 << 6);
            std::unique_ptr<WaveStream, std::default_delete<WaveStream>>::unique_ptr<true, void>(
                (unique_ptr<WaveStream, std::default_delete<WaveStream>>*)this, this_00);
        } else {
            std::unique_ptr<WaveStream, std::default_delete<WaveStream>>::unique_ptr<true, void>(
                (_func_decltype_nullptr*)this);
        }
        return this;
    }

    // 0x10029e150, 160 bytes, placed by class name and debug map
    // WaveStream::NewRatePercentFineVolPan(shared_ptr<Wave>&, int, int, int)
    WaveStream* WaveStream::NewRatePercentFineVolPan(shared_ptr* param_1, int param_2, int param_3, int param_4) {
        char cVar1;
        int iVar2;
        long lVar3;
        WaveStream* this_00;

        lVar3 = shared_ptr<Wave>::operator->((shared_ptr<Wave>*)param_1);
        cVar1 = ((lVar3 + 8))->empty();
        if (cVar1 == '\0') {
            this_00 = operator_new(136);
            iVar2 = rateHelper(param_1, param_2);
            WaveStream(this_00, param_1, iVar2, param_3, param_4);
            std::unique_ptr<WaveStream, std::default_delete<WaveStream>>::unique_ptr<true, void>(
                (unique_ptr<WaveStream, std::default_delete<WaveStream>>*)this, this_00);
        } else {
            std::unique_ptr<WaveStream, std::default_delete<WaveStream>>::unique_ptr<true, void>(
                (_func_decltype_nullptr*)this);
        }
        return this;
    }

    // 0x10029e2e0, 144 bytes, placed by class name and debug map
    // WaveStream::NewRateRaw(shared_ptr<Wave>&, int, int)
    WaveStream* WaveStream::NewRateRaw(shared_ptr* param_1, int param_2, int param_3) {
        char cVar1;
        long lVar2;
        WaveStream* this_00;

        lVar2 = shared_ptr<Wave>::operator->((shared_ptr<Wave>*)param_1);
        cVar1 = ((lVar2 + 8))->empty();
        if (cVar1 == '\0') {
            this_00 = operator_new(136);
            WaveStream(this_00, param_1, param_2, param_3 << 6);
            std::unique_ptr<WaveStream, std::default_delete<WaveStream>>::unique_ptr<true, void>(
                (unique_ptr<WaveStream, std::default_delete<WaveStream>>*)this, this_00);
        } else {
            std::unique_ptr<WaveStream, std::default_delete<WaveStream>>::unique_ptr<true, void>(
                (_func_decltype_nullptr*)this);
        }
        return this;
    }

    // 0x10029e470, 160 bytes, placed by class name and debug map
    // WaveStream::NewRateRaw(shared_ptr<Wave>&, int, int, int)
    WaveStream* WaveStream::NewRateRaw(shared_ptr* param_1, int param_2, int param_3, int param_4) {
        char cVar1;
        long lVar2;
        WaveStream* this_00;

        lVar2 = shared_ptr<Wave>::operator->((shared_ptr<Wave>*)param_1);
        cVar1 = ((lVar2 + 8))->empty();
        if (cVar1 == '\0') {
            this_00 = operator_new(136);
            WaveStream(this_00, param_1, param_2, param_3 << 6, param_4 << 6);
            std::unique_ptr<WaveStream, std::default_delete<WaveStream>>::unique_ptr<true, void>(
                (unique_ptr<WaveStream, std::default_delete<WaveStream>>*)this, this_00);
        } else {
            std::unique_ptr<WaveStream, std::default_delete<WaveStream>>::unique_ptr<true, void>(
                (_func_decltype_nullptr*)this);
        }
        return this;
    }

    // 0x1002a10a0, 96 bytes, placed by class name
    // WaveStream::Priority()
    int WaveStream::Priority() {
        uint uVar1;
        int iVar2;
        long lVar3;
        int iVar4;

        iVar2 = (int)(field_88 * 3) >> 6;
        iVar4 = -iVar2;
        if (iVar4 < 0) {
            iVar4 = iVar2;
        }
        lVar3 = MyWave(this);
        iVar2 = ((lVar3 + 8))->end();
        if (m_loopCount == 0) {
            uVar1 = field_72;
            iVar2 = iVar2 << 8;
        } else {
            if (m_loopCount < 0)
                goto LAB_1002a10ec;
            uVar1 = field_108;
        }
        iVar4 = iVar4 - (int)(uVar1 * iVar4) / iVar2;
    LAB_1002a10ec:
        iVar2 = 255;
        if (iVar4 < 255) {
            iVar2 = iVar4;
        }
        return iVar2;
    }

    // 0x1002a1100, 16 bytes, placed by class name
    // WaveStream::MyWave()
    void WaveStream::MyWave() {
        shared_ptr<PCMStreamable>::operator*((shared_ptr<PCMStreamable>*)&field_56);
    }

    // 0x1002a1110, 208 bytes, base-object constructor, placed by class name
    // WaveStream::WaveStream(shared_ptr<Wave> const&, int, int)
    void WaveStream::WaveStream(shared_ptr* param_1, int param_2, int param_3) {
        long lVar1;

        new (this) PCMStream();
        field_0 = &PTR__WaveStream_100ef9cf0;
        field_72 = 0;
        field_76 = 0;
        field_80 = 0;
        field_84 = 0;
        field_84 = 0;
        field_88 = 0;
        field_92 = 0;
        field_96 = 0;
        std::atomic<int>::atomic((int)this + 100);
        *(undefined8*)((long)&field_108 + 1) = 0;
        m_loopCount = 0;
        field_108 = 0;
        field_120 = 0;
        field_124 = 0;
        field_128 = 0;
        field_132 = 0;
        shared_ptr<PCMStreamable>::operator=((shared_ptr<PCMStreamable>*)&field_56, param_1);
        lVar1 = shared_ptr<Wave>::operator->((shared_ptr<Wave>*)param_1);
        field_108 = *(int*)(lVar1 + 32);
        lVar1 = shared_ptr<Wave>::operator->((shared_ptr<Wave>*)param_1);
        field_112 = *(int*)(lVar1 + 36);
        lVar1 = shared_ptr<Wave>::operator->((shared_ptr<Wave>*)param_1);
        field_116 = *(bool*)(lVar1 + 40);
        field_76 = param_2;
        field_80 = param_3;
        field_84 = 8192;
        field_72 = 0;
        SetMLRVol(this);
    }

    // 0x1002a11f0, 48 bytes, placed by class name
    // WaveStream::SetMLRVol()
    void WaveStream::SetMLRVol() {
        uint uVar1;

        field_88 = field_80;
        uVar1 = GetLVol(field_80, field_84);
        field_92 = uVar1;
        uVar1 = GetRVol(field_80, field_84);
        field_96 = uVar1;
    }

    // 0x1002a1220, 16 bytes, complete-object constructor, placed by class name
    // WaveStream::WaveStream(shared_ptr<Wave> const&, int, int): jumps straight to the base-object constructor

    // 0x1002a1230, 208 bytes, base-object constructor, placed by class name
    // WaveStream::WaveStream(shared_ptr<Wave> const&, int, int, int)
    void WaveStream::WaveStream(shared_ptr* param_1, int param_2, int param_3, int param_4) {
        long lVar1;

        new (this) PCMStream();
        field_0 = &PTR__WaveStream_100ef9cf0;
        field_72 = 0;
        field_76 = 0;
        field_80 = 0;
        field_84 = 0;
        field_84 = 0;
        field_88 = 0;
        field_92 = 0;
        field_96 = 0;
        std::atomic<int>::atomic((int)this + 100);
        *(undefined8*)((long)&field_108 + 1) = 0;
        m_loopCount = 0;
        field_108 = 0;
        field_120 = 0;
        field_124 = 0;
        field_128 = 0;
        field_132 = 0;
        shared_ptr<PCMStreamable>::operator=((shared_ptr<PCMStreamable>*)&field_56, param_1);
        lVar1 = shared_ptr<Wave>::operator->((shared_ptr<Wave>*)param_1);
        field_108 = *(int*)(lVar1 + 32);
        lVar1 = shared_ptr<Wave>::operator->((shared_ptr<Wave>*)param_1);
        field_112 = *(int*)(lVar1 + 36);
        lVar1 = shared_ptr<Wave>::operator->((shared_ptr<Wave>*)param_1);
        field_116 = *(bool*)(lVar1 + 40);
        field_76 = param_2;
        field_80 = param_3;
        field_84 = param_4;
        field_72 = 0;
        SetMLRVol(this);
    }

    // 0x1002a1300, 16 bytes, complete-object constructor, placed by class name
    // WaveStream::WaveStream(shared_ptr<Wave> const&, int, int, int): jumps straight to the base-object constructor

    // 0x1002a1310, 64 bytes, placed by neighbouring functions
    // rateHelper(shared_ptr<Wave>&, int)
    long rateHelper(shared_ptr* param_1, int param_2) {
        long lVar1;

        lVar1 = shared_ptr<Wave>::operator->((shared_ptr<Wave>*)param_1);
        return ((long)param_2 * (long)*(int*)(lVar1 + 4) * 256) / ((long)PCMPlayer::m_frequency * 100);
    }

    // 0x1002a1370, 144 bytes, placed by class name
    // WaveStream::NewRateRawFineVolPan(shared_ptr<Wave>&, int, int, int)
    WaveStream* WaveStream::NewRateRawFineVolPan(shared_ptr* param_1, int param_2, int param_3, int param_4) {
        char cVar1;
        long lVar2;
        WaveStream* this_00;

        lVar2 = shared_ptr<Wave>::operator->((shared_ptr<Wave>*)param_1);
        cVar1 = ((lVar2 + 8))->empty();
        if (cVar1 == '\0') {
            this_00 = operator_new(136);
            WaveStream(this_00, param_1, param_2, param_3, param_4);
            std::unique_ptr<WaveStream, std::default_delete<WaveStream>>::unique_ptr<true, void>(
                (unique_ptr<WaveStream, std::default_delete<WaveStream>>*)this, this_00);
        } else {
            std::unique_ptr<WaveStream, std::default_delete<WaveStream>>::unique_ptr<true, void>(
                (_func_decltype_nullptr*)this);
        }
        return this;
    }

    // 0x1002a14e0, 48 bytes, placed by class name
    // WaveStream::SkipRampNounLink()
    void WaveStream::SkipRampNounLink() {
        if (field_120 != 0) {
            if (field_80 == 2147483648) {
                field_80 = 0;
            }
            field_120 = 0;
            SetMLRVol(this);
        }
    }

    // 0x1002a1550, 64 bytes, placed by class name
    // WaveStream::SetLoopCount(int)
    void WaveStream::SetLoopCount(int param_1) {
        char cVar1;

        cVar1 = IsLinked();
        if (cVar1 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!IsLinked()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                      "wave_stream.cpp",
                      156, (char*)0);
        }
        m_loopCount = param_1;
    }

    // 0x1002a1590, 144 bytes, placed by class name
    // WaveStream::SetLoopPoints(int, int)
    void WaveStream::SetLoopPoints(int param_1, int param_2) {
        undefined8 uVar1;
        char cVar2;
        undefined8 uVar3;
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
                          "wave_stream.cpp",
                          164, (char*)0);
            }
        }
        field_108 = param_1;
        field_112 = param_2;
    }

    // 0x1002a1620, 16 bytes, placed by class name
    // WaveStream::QueueVolume(int)
    void WaveStream::QueueVolume(int param_1) {
        std::atomic<int>::operator=((atomic<int>*)&field_100, param_1);
    }

    // 0x1002a1640, 48 bytes, placed by class name
    // WaveStream::ApplyVolume(int)
    void WaveStream::ApplyVolume(int param_1) {
        int iVar1;

        iVar1 = GetPanFine(this);
        SetVolPanFine(this, param_1 << 6, iVar1);
    }

    // 0x1002a1670, 144 bytes, placed by class name
    // WaveStream::SetVolPanFine(int, int)
    void WaveStream::SetVolPanFine(int param_1, int param_2) {
        undefined8 uVar1;
        char cVar2;
        undefined8 uVar3;
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
                          "wave_stream.cpp",
                          215, (char*)0);
            }
        }
        field_80 = param_1;
        field_84 = param_2;
        field_120 = 0;
        SetMLRVol(this);
    }

    // 0x1002a1700, 128 bytes, placed by class name
    // WaveStream::GetPanFine()
    int WaveStream::GetPanFine() {
        undefined8 uVar1;
        char cVar2;
        int iVar3;
        undefined8 uVar4;
        undefined8 local_20;

        uVar4 = std::this_thread::get_id();
        uVar1 = g_idWorkerThread;
        cVar2 = std::operator==(uVar4, g_idWorkerThread);
        if (cVar2 == '\0') {
            new (&local_20) std::__thread_id();
            cVar2 = std::operator==(uVar1, local_20);
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          246, (char*)0);
            }
        }
        iVar3 = -1;
        if (-1 < field_84) {
            iVar3 = field_84;
        }
        return iVar3;
    }

    // 0x1002a1780, 144 bytes, placed by class name
    // WaveStream::SetVolumeFine(int)
    void WaveStream::SetVolumeFine(int param_1) {
        undefined8 uVar1;
        char cVar2;
        int iVar3;
        undefined8 in_RAX;
        undefined8 uVar4;
        undefined8 local_28;

        local_28 = in_RAX;
        uVar4 = std::this_thread::get_id();
        uVar1 = g_idWorkerThread;
        cVar2 = std::operator==(uVar4, g_idWorkerThread);
        if (cVar2 == '\0') {
            new (&local_28) std::__thread_id();
            cVar2 = std::operator==(uVar1, local_28);
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          184, (char*)0);
            }
        }
        iVar3 = GetPanFine(this);
        SetVolPanFine(this, param_1, iVar3);
    }

    // 0x1002a1810, 144 bytes, placed by class name
    // WaveStream::SetPan(int)
    void WaveStream::SetPan(int param_1) {
        undefined8 uVar1;
        char cVar2;
        int iVar3;
        undefined8 in_RAX;
        undefined8 uVar4;
        undefined8 local_28;

        local_28 = in_RAX;
        uVar4 = std::this_thread::get_id();
        uVar1 = g_idWorkerThread;
        cVar2 = std::operator==(uVar4, g_idWorkerThread);
        if (cVar2 == '\0') {
            new (&local_28) std::__thread_id();
            cVar2 = std::operator==(uVar1, local_28);
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          191, (char*)0);
            }
        }
        iVar3 = GetVolumeFine(this);
        SetVolPanFine(this, iVar3, param_1 << 6);
    }

    // 0x1002a18a0, 128 bytes, placed by class name
    // WaveStream::GetVolumeFine()
    uint WaveStream::GetVolumeFine() {
        undefined8 uVar1;
        char cVar2;
        uint uVar3;
        undefined8 uVar4;
        undefined8 local_20;

        uVar4 = std::this_thread::get_id();
        uVar1 = g_idWorkerThread;
        cVar2 = std::operator==(uVar4, g_idWorkerThread);
        if (cVar2 == '\0') {
            new (&local_20) std::__thread_id();
            cVar2 = std::operator==(uVar1, local_20);
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          232, (char*)0);
            }
        }
        uVar3 = 0;
        if (field_80 != 2147483648) {
            uVar3 = field_80;
        }
        return uVar3;
    }

    // 0x1002a1920, 144 bytes, placed by class name
    // WaveStream::SetPanFine(int)
    void WaveStream::SetPanFine(int param_1) {
        undefined8 uVar1;
        char cVar2;
        int iVar3;
        undefined8 in_RAX;
        undefined8 uVar4;
        undefined8 local_28;

        local_28 = in_RAX;
        uVar4 = std::this_thread::get_id();
        uVar1 = g_idWorkerThread;
        cVar2 = std::operator==(uVar4, g_idWorkerThread);
        if (cVar2 == '\0') {
            new (&local_28) std::__thread_id();
            cVar2 = std::operator==(uVar1, local_28);
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          198, (char*)0);
            }
        }
        iVar3 = GetVolumeFine(this);
        SetVolPanFine(this, iVar3, param_1);
    }

    // 0x1002a19b0, 160 bytes, placed by class name
    // WaveStream::SetVolPan(int, int)
    void WaveStream::SetVolPan(int param_1, int param_2) {
        undefined8 uVar1;
        char cVar2;
        undefined8 uVar3;
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
                          "wave_stream.cpp",
                          205, (char*)0);
            }
        }
        field_80 = param_1 << 6;
        field_84 = param_2 << 6;
        field_120 = 0;
        SetMLRVol(this);
    }

    // 0x1002a1a50, 128 bytes, placed by class name
    // WaveStream::GetVolume()
    int WaveStream::GetVolume() {
        undefined8 uVar1;
        char cVar2;
        int iVar3;
        undefined8 uVar4;
        undefined8 local_20;

        uVar4 = std::this_thread::get_id();
        uVar1 = g_idWorkerThread;
        cVar2 = std::operator==(uVar4, g_idWorkerThread);
        if (cVar2 == '\0') {
            new (&local_20) std::__thread_id();
            cVar2 = std::operator==(uVar1, local_20);
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          225, (char*)0);
            }
        }
        iVar3 = 0;
        if (field_80 != 2147483648) {
            iVar3 = (int)(field_80 + 32) >> 6;
        }
        return iVar3;
    }

    // 0x1002a1ad0, 128 bytes, placed by class name
    // WaveStream::GetPan()
    int WaveStream::GetPan() {
        undefined8 uVar1;
        char cVar2;
        int iVar3;
        undefined8 uVar4;
        undefined8 local_20;

        uVar4 = std::this_thread::get_id();
        uVar1 = g_idWorkerThread;
        cVar2 = std::operator==(uVar4, g_idWorkerThread);
        if (cVar2 == '\0') {
            new (&local_20) std::__thread_id();
            cVar2 = std::operator==(uVar1, local_20);
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          239, (char*)0);
            }
        }
        iVar3 = -1;
        if (-1 < field_84) {
            iVar3 = field_84 + 32 >> 6;
        }
        return iVar3;
    }

    // 0x1002a1b50, 112 bytes, placed by class name
    // WaveStream::GetPosition()
    int WaveStream::GetPosition() {
        undefined8 uVar1;
        char cVar2;
        undefined8 uVar3;
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
                          "wave_stream.cpp",
                          253, (char*)0);
            }
        }
        return (int)field_72 >> 8;
    }

    // 0x1002a1bc0, 112 bytes, placed by class name
    // WaveStream::GetPositionFine()
    uint WaveStream::GetPositionFine() {
        undefined8 uVar1;
        char cVar2;
        undefined8 uVar3;
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
                          "wave_stream.cpp",
                          261, (char*)0);
            }
        }
        return field_72;
    }

    // 0x1002a1c30, 160 bytes, placed by class name
    // WaveStream::SetPosition(int)
    void WaveStream::SetPosition(int param_1) {
        undefined8 uVar1;
        char cVar2;
        uint uVar3;
        undefined8 in_RAX;
        undefined8 uVar4;
        long lVar5;
        ulong uVar6;
        undefined8 local_28;

        local_28 = in_RAX;
        uVar4 = std::this_thread::get_id();
        uVar1 = g_idWorkerThread;
        cVar2 = std::operator==(uVar4, g_idWorkerThread);
        if (cVar2 == '\0') {
            new (&local_28) std::__thread_id();
            cVar2 = std::operator==(uVar1, local_28);
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          268, (char*)0);
            }
        }
        lVar5 = MyWave(this);
        uVar6 = ((lVar5 + 8))->end();
        uVar3 = 4294967295;
        if (-1 < param_1 << 8) {
            uVar3 = param_1 << 8;
        }
        if ((int)(uint)(uVar6 < 8) < (int)uVar3) {
            uVar3 = (uint)(uVar6 < 8);
        }
        field_72 = uVar3;
    }

    // 0x1002a1cd0, 160 bytes, placed by class name
    // WaveStream::SetPositionFine(int)
    void WaveStream::SetPositionFine(int param_1) {
        undefined8 uVar1;
        char cVar2;
        int iVar3;
        undefined8 in_RAX;
        undefined8 uVar4;
        long lVar5;
        uint uVar6;
        undefined8 local_28;

        local_28 = in_RAX;
        uVar4 = std::this_thread::get_id();
        uVar1 = g_idWorkerThread;
        cVar2 = std::operator==(uVar4, g_idWorkerThread);
        if (cVar2 == '\0') {
            new (&local_28) std::__thread_id();
            cVar2 = std::operator==(uVar1, local_28);
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          286, (char*)0);
            }
        }
        lVar5 = MyWave(this);
        iVar3 = ((lVar5 + 8))->end();
        uVar6 = 4294967295;
        if (-1 < param_1) {
            uVar6 = param_1;
        }
        if (iVar3 * 256 < (int)uVar6) {
            uVar6 = iVar3 * 256;
        }
        field_72 = uVar6;
    }

    // 0x1002a1d70, 144 bytes, placed by class name
    // WaveStream::SetReverse(bool)
    void WaveStream::SetReverse(bool param_1) {
        undefined8 uVar1;
        char cVar2;
        int iVar3;
        undefined8 in_RAX;
        undefined8 uVar4;
        int iVar5;
        undefined8 local_28;

        local_28 = in_RAX;
        uVar4 = std::this_thread::get_id();
        uVar1 = g_idWorkerThread;
        cVar2 = std::operator==(uVar4, g_idWorkerThread);
        if (cVar2 == '\0') {
            new (&local_28) std::__thread_id();
            cVar2 = std::operator==(uVar1, local_28);
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          302, (char*)0);
            }
        }
        iVar5 = -field_76;
        if (iVar5 < 0) {
            iVar5 = field_76;
        }
        iVar3 = -iVar5;
        if (!param_1) {
            iVar3 = iVar5;
        }
        field_76 = iVar3;
    }

    // 0x1002a1e00, 160 bytes, placed by class name
    // WaveStream::SetReverseFromEnd()
    void WaveStream::SetReverseFromEnd() {
        undefined8 uVar1;
        char cVar2;
        undefined8 uVar3;
        long lVar4;
        int iVar5;
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
                          "wave_stream.cpp",
                          313, (char*)0);
            }
        }
        iVar5 = -field_76;
        if (-1 < iVar5) {
            iVar5 = field_76;
        }
        field_76 = iVar5;
        lVar4 = MyWave(this);
        iVar5 = ((lVar4 + 8))->end();
        field_72 = iVar5 * 256 - 256;
    }

    // 0x1002a1ea0, 112 bytes, placed by class name
    // WaveStream::FlipDirection()
    void WaveStream::FlipDirection() {
        undefined8 uVar1;
        char cVar2;
        undefined8 uVar3;
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
                          "wave_stream.cpp",
                          322, (char*)0);
            }
        }
        field_76 = -field_76;
    }

    // 0x1002a1f10, 128 bytes, placed by class name
    // WaveStream::SetBidirectionalLoop(bool)
    void WaveStream::SetBidirectionalLoop(bool param_1) {
        undefined8 uVar1;
        char cVar2;
        undefined8 in_RAX;
        undefined8 uVar3;
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
                          "wave_stream.cpp",
                          329, (char*)0);
            }
        }
        field_116 = param_1;
    }

    // 0x1002a1f90, 160 bytes, placed by class name
    // WaveStream::RampVolume(int, int)
    void WaveStream::RampVolume(int param_1, int param_2) {
        undefined8 uVar1;
        char cVar2;
        int iVar3;
        undefined8 uVar4;
        undefined8 local_30;

        uVar4 = std::this_thread::get_id();
        uVar1 = g_idWorkerThread;
        cVar2 = std::operator==(uVar4, g_idWorkerThread);
        if (cVar2 == '\0') {
            new (&local_30) std::__thread_id();
            cVar2 = std::operator==(uVar1, local_30);
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          336, (char*)0);
            }
        }
        iVar3 = GetPanFine(this);
        RampVolPanFine(this, param_1, param_2 << 6, iVar3);
    }

    // 0x1002a2030, 320 bytes, placed by class name
    // WaveStream::RampVolPanFine(int, int, int)
    void WaveStream::RampVolPanFine(int param_1, int param_2, int param_3) {
        undefined8 uVar1;
        char cVar2;
        int iVar3;
        uint uVar4;
        undefined8 uVar5;
        uint uVar6;
        uint uVar7;
        uint uVar8;
        uint uVar9;
        undefined8 local_40;

        uVar5 = std::this_thread::get_id();
        uVar1 = g_idWorkerThread;
        cVar2 = std::operator==(uVar5, g_idWorkerThread);
        if (cVar2 == '\0') {
            new (&local_40) std::__thread_id();
            cVar2 = std::operator==(uVar1, local_40);
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          357, (char*)0);
            }
        }
        if (param_1 == 0) {
            SetVolPanFine(this, param_2, param_3);
        } else {
            iVar3 = GetLVol(param_2, param_3);
            uVar4 = GetRVol(param_2, param_3);
            uVar7 = field_92 - iVar3;
            if ((uVar7 == 0) && (field_96 == uVar4)) {
                field_120 = 0;
            } else {
                uVar6 = param_2 - field_88;
                uVar8 = field_88 - param_2;
                if ((int)uVar8 <= (int)uVar6) {
                    uVar8 = uVar6;
                }
                uVar9 = iVar3 - field_92;
                if ((int)uVar8 < (int)uVar9) {
                    uVar8 = uVar9;
                }
                if ((int)uVar8 < (int)uVar7) {
                    uVar8 = uVar7;
                }
                uVar7 = uVar4 - field_96;
                if ((int)uVar8 < (int)uVar7) {
                    uVar8 = uVar7;
                }
                uVar4 = field_96 - uVar4;
                if ((int)uVar4 <= (int)uVar8) {
                    uVar4 = uVar8;
                }
                if (param_1 <= (int)uVar4) {
                    uVar4 = param_1;
                }
                field_120 = uVar4;
                field_80 = param_2;
                field_84 = param_3;
                field_124 = (int)uVar6 / (int)uVar4;
                field_128 = (int)uVar9 / (int)uVar4;
                field_132 = (int)uVar7 / (int)uVar4;
            }
        }
    }

    // 0x1002a2170, 144 bytes, placed by class name
    // WaveStream::RampVolumeFine(int, int)
    void WaveStream::RampVolumeFine(int param_1, int param_2) {
        undefined8 uVar1;
        char cVar2;
        int iVar3;
        undefined8 uVar4;
        undefined8 local_30;

        uVar4 = std::this_thread::get_id();
        uVar1 = g_idWorkerThread;
        cVar2 = std::operator==(uVar4, g_idWorkerThread);
        if (cVar2 == '\0') {
            new (&local_30) std::__thread_id();
            cVar2 = std::operator==(uVar1, local_30);
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          343, (char*)0);
            }
        }
        iVar3 = GetPanFine(this);
        RampVolPanFine(this, param_1, param_2, iVar3);
    }

    // 0x1002a2200, 160 bytes, placed by class name
    // WaveStream::RampVolPan(int, int, int)
    void WaveStream::RampVolPan(int param_1, int param_2, int param_3) {
        undefined8 uVar1;
        char cVar2;
        undefined8 in_RAX;
        undefined8 uVar3;
        undefined8 local_38;

        local_38 = in_RAX;
        uVar3 = std::this_thread::get_id();
        uVar1 = g_idWorkerThread;
        cVar2 = std::operator==(uVar3, g_idWorkerThread);
        if (cVar2 == '\0') {
            new (&local_38) std::__thread_id();
            cVar2 = std::operator==(uVar1, local_38);
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          350, (char*)0);
            }
        }
        RampVolPanFine(this, param_1, param_2 << 6, param_3 << 6);
    }

    // 0x1002a22a0, 288 bytes, placed by class name
    // WaveStream::RampOut(int)
    void WaveStream::RampOut(int param_1) {
        uint uVar1;
        uint uVar2;
        undefined8 uVar3;
        char cVar4;
        undefined8 uVar5;
        uint uVar6;
        uint uVar7;
        uint uVar8;
        __thread_id local_28[8];

        uVar5 = std::this_thread::get_id();
        uVar3 = g_idWorkerThread;
        cVar4 = std::operator==(uVar5);
        if (cVar4 == '\0') {
            std::__thread_id::__thread_id(local_28);
            cVar4 = std::operator==(uVar3);
            if (cVar4 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          412, (char*)0);
            }
        }
        if (param_1 == 0) {
            SetVolumeFine(this, 0);
        } else {
            uVar1 = field_92;
            if ((uVar1 != 0) || (field_96 != 0)) {
                uVar2 = field_88;
                uVar7 = -uVar2;
                if ((int)-uVar2 < 0) {
                    uVar7 = uVar2;
                }
                uVar6 = -uVar1;
                if ((int)-uVar1 <= (int)uVar7) {
                    uVar6 = uVar7;
                }
                uVar7 = field_96;
                if ((int)uVar6 < (int)uVar1) {
                    uVar6 = uVar1;
                }
                uVar8 = -uVar7;
                if ((int)-uVar7 <= (int)uVar6) {
                    uVar8 = uVar6;
                }
                if ((int)uVar8 < (int)uVar7) {
                    uVar8 = uVar7;
                }
                if (param_1 <= (int)uVar8) {
                    uVar8 = param_1;
                }
                field_120 = uVar8;
                field_80 = 2147483648;
                field_124 = -((int)uVar2 / (int)uVar8);
                field_128 = -((int)uVar1 / (int)uVar8);
                field_132 = -((int)uVar7 / (int)uVar8);
                return;
            }
            field_120 = 0;
            field_80 = 0;
            field_88 = 0;
        }
        RemoveFromMixer();
    }

    // 0x1002a23c0, 128 bytes, placed by class name
    // WaveStream::SetRateRaw(int)
    void WaveStream::SetRateRaw(int param_1) {
        undefined8 uVar1;
        char cVar2;
        int iVar3;
        undefined8 in_RAX;
        undefined8 uVar4;
        undefined8 local_28;

        local_28 = in_RAX;
        uVar4 = std::this_thread::get_id();
        uVar1 = g_idWorkerThread;
        cVar2 = std::operator==(uVar4, g_idWorkerThread);
        if (cVar2 == '\0') {
            new (&local_28) std::__thread_id();
            cVar2 = std::operator==(uVar1, local_28);
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          471, (char*)0);
            }
        }
        iVar3 = -param_1;
        if (-1 < field_76) {
            iVar3 = param_1;
        }
        field_76 = iVar3;
    }

    // 0x1002a2440, 128 bytes, placed by class name
    // WaveStream::GetRateRaw()
    int WaveStream::GetRateRaw() {
        undefined8 uVar1;
        char cVar2;
        int iVar3;
        undefined8 uVar4;
        undefined8 local_20;

        uVar4 = std::this_thread::get_id();
        uVar1 = g_idWorkerThread;
        cVar2 = std::operator==(uVar4, g_idWorkerThread);
        if (cVar2 == '\0') {
            new (&local_20) std::__thread_id();
            cVar2 = std::operator==(uVar1, local_20);
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          485, (char*)0);
            }
        }
        iVar3 = -field_76;
        if (iVar3 < 0) {
            iVar3 = field_76;
        }
        return iVar3;
    }

    // 0x1002a24c0, 144 bytes, placed by class name
    // WaveStream::Isfinished()
    bool WaveStream::Isfinished() {
        uint uVar1;
        undefined8 uVar2;
        char cVar3;
        bool bVar4;
        int iVar5;
        undefined8 uVar6;
        long lVar7;
        undefined8 local_20;

        uVar6 = std::this_thread::get_id();
        uVar2 = g_idWorkerThread;
        cVar3 = std::operator==(uVar6, g_idWorkerThread);
        if (cVar3 == '\0') {
            new (&local_20) std::__thread_id();
            cVar3 = std::operator==(uVar2, local_20);
            if (cVar3 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          491, (char*)0);
            }
        }
        uVar1 = field_72;
        if ((int)uVar1 < 0) {
            bVar4 = true;
        } else {
            lVar7 = MyWave(this);
            iVar5 = ((lVar7 + 8))->end();
            bVar4 = iVar5 * 256 <= (int)uVar1;
        }
        return bVar4;
    }

    // 0x1002a2550, 128 bytes, placed by class name
    // WaveStream::Isramping()
    bool WaveStream::Isramping() {
        undefined8 uVar1;
        char cVar2;
        undefined8 uVar3;
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
                          "wave_stream.cpp",
                          496, (char*)0);
            }
        }
        return field_120 != 0;
    }

    // 0x1002a25d0, 32 bytes, placed by class name
    // WaveStream::SubstreamStart()
    WaveStream* WaveStream::SubstreamStart() {
        new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        return this;
    }

    // 0x1002a25f0, 32 bytes, placed by class name
    // WaveStream::SubstreamNext()
    WaveStream* WaveStream::SubstreamNext() {
        new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        return this;
    }

    // 0x1002a2610, 128 bytes, placed by class name
    // WaveStream::SelfMixCost()
    undefined8 WaveStream::SelfMixCost() {
        char cVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 local_20;

        uVar2 = std::this_thread::get_id();
        uVar3 = g_idWorkerThread;
        cVar1 = std::operator==(uVar2, g_idWorkerThread);
        if (cVar1 == '\0') {
            new (&local_20) std::__thread_id();
            cVar1 = std::operator==(uVar3, local_20);
            if (cVar1 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          511, (char*)0);
            }
        }
        if ((field_80 == 0) && (field_120 == 0)) {
            uVar3 = 0;
        } else {
            uVar3 = 1;
        }
        return uVar3;
    }

    // 0x1002a2690, 144 bytes, placed by class name
    // WaveStream::PullQueuedStateIntoWorker()
    void WaveStream::PullQueuedStateIntoWorker() {
        undefined8 uVar1;
        char cVar2;
        int iVar3;
        undefined8 uVar4;
        undefined8 local_20;

        uVar4 = std::this_thread::get_id();
        uVar1 = g_idWorkerThread;
        cVar2 = std::operator==(uVar4, g_idWorkerThread);
        if (cVar2 == '\0') {
            new (&local_20) std::__thread_id();
            cVar2 = std::operator==(uVar1, local_20);
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          521, (char*)0);
            }
        }
        iVar3 = std::__atomic_base<int, false>::exchange(&field_100);
        if (iVar3 != -1) {
            ApplyVolume(this, iVar3);
        }
    }

    // 0x1002a2730, 1504 bytes, placed by class name
    // WaveStream::DoMix(Array<int, eastl::allocator>&, int, int)
    void WaveStream::DoMix(Array* param_1, int param_2, int param_3) {
        uint* puVar1;
        int* piVar2;
        int iVar3;
        uint uVar4;
        int iVar5;
        int iVar6;
        long lVar7;
        char* pcVar8;
        int iVar9;
        int iVar10;
        int iVar11;
        int iVar12;
        Linkable<PCMStream> local_78[16];
        ulong local_68;
        int local_5c;
        int local_4c;
        Array<signed char, eastl::allocator>* local_48;
        uint* local_40;
        int local_34;

        local_34 = param_3;
        local_78->GetLink();
        PullQueuedStateIntoWorker(this);
        if ((field_80 == 0) && (field_120 == 0)) {
            (*(code*)field_0[6])(this, local_34);
        } else {
            lVar7 = MyWave(this);
            iVar6 = field_108;
            local_5c = field_112;
            iVar11 = iVar6 * 256;
            iVar12 = local_5c * 256;
            local_48 = (Array<signed char, eastl::allocator>*)(lVar7 + 8);
            local_4c = iVar6;
            iVar3 = local_48->end();
            iVar9 = iVar12 + iVar6 * -256;
            if (iVar9 == 0 || iVar12 < iVar11) {
                m_loopCount = 0;
            }
            puVar1 = &field_72;
            if ((int)field_72 < 0) {
                if (field_76 < 1) {
                    SkipRampNounLink(this);
                    RemoveFromMixer();
                    goto LAB_1002a2be0;
                }
                *puVar1 = 0;
            }
            uVar4 = iVar3 * 256;
            if ((int)uVar4 <= (int)*puVar1) {
                if (-1 < field_76) {
                    SkipRampNounLink(this);
                    RemoveFromMixer();
                    goto LAB_1002a2be0;
                }
                *puVar1 = uVar4 - 1;
            }
            local_34 = local_34 + param_2;
            local_40 = puVar1;
            if (m_loopCount < 0) {
                if (field_116 == false) {
                    if (field_76 < 0) {
                        while (true) {
                            pcVar8 =
                                (char*)Array<signed char, eastl::allocator>::operator[](local_48, (long)field_112 - 1);
                            param_2 = MixBackwardSto(this, param_1, param_2, iVar11, local_34, (int)*pcVar8);
                            if (iVar11 <= (int)*local_40)
                                break;
                            *local_40 = (iVar12 + -1) - (int)((iVar12 + -1) - *local_40) % iVar9;
                        }
                    } else {
                        while (true) {
                            pcVar8 = (char*)Array<signed char, eastl::allocator>::operator[](local_48, (long)field_108);
                            param_2 = MixForwardSto(this, param_1, param_2, iVar12, local_34, (int)*pcVar8);
                            if ((int)*local_40 < iVar12)
                                break;
                            *local_40 = (int)(*local_40 + iVar6 * -256) % iVar9 + iVar11;
                        }
                    }
                } else {
                    if (field_76 < 0) {
                        pcVar8 = (char*)Array<signed char, eastl::allocator>::operator[](local_48, (long)field_108);
                        param_2 = MixBackwardSto(this, param_1, param_2, iVar11, local_34, (int)*pcVar8);
                        if (iVar11 <= (int)*local_40)
                            goto LAB_1002a2be0;
                        field_72 = ~*local_40 + local_4c * 512;
                        field_76 = -field_76;
                    }
                    local_5c = local_5c << 9;
                    local_4c = local_4c << 9;
                    while (true) {
                        pcVar8 = (char*)Array<signed char, eastl::allocator>::operator[](local_48, (long)field_112 - 1);
                        iVar6 = MixForwardSto(this, param_1, param_2, iVar12, local_34, (int)*pcVar8);
                        if ((int)*local_40 < iVar12)
                            break;
                        field_72 = ~*local_40 + local_5c;
                        field_76 = -field_76;
                        pcVar8 = (char*)Array<signed char, eastl::allocator>::operator[](local_48, (long)field_108);
                        param_2 = MixBackwardSto(this, param_1, iVar6, iVar11, local_34, (int)*pcVar8);
                        if (iVar11 <= (int)*local_40)
                            break;
                        field_72 = ~*local_40 + local_4c;
                        field_76 = -field_76;
                    }
                }
            } else {
                local_68 = (ulong)uVar4;
                if (m_loopCount != 0) {
                    local_4c = local_4c << 9;
                    local_5c = local_5c << 9;
                    do {
                        if (field_116 == false) {
                            if (field_76 < 0) {
                                do {
                                    pcVar8 = (char*)Array<signed char, eastl::allocator>::operator[](
                                        local_48, (long)field_112 - 1);
                                    param_2 = MixBackwardSto(this, param_1, param_2, iVar11, local_34, (int)*pcVar8);
                                    uVar4 = *local_40;
                                    if (iVar11 <= (int)uVar4)
                                        goto LAB_1002a2be0;
                                    iVar5 = (int)(~uVar4 + iVar12) / iVar9;
                                    iVar3 = m_loopCount;
                                    iVar10 = iVar3 - iVar5;
                                    if (iVar10 == 0 || iVar3 < iVar5) {
                                        *local_40 = iVar3 * iVar9 + uVar4;
                                        iVar10 = 0;
                                    } else {
                                        *local_40 = iVar5 * iVar9 + uVar4;
                                    }
                                    m_loopCount = iVar10;
                                } while (iVar5 < iVar3);
                            } else {
                                do {
                                    pcVar8 = (char*)Array<signed char, eastl::allocator>::operator[](local_48,
                                                                                                     (long)field_108);
                                    param_2 = MixForwardSto(this, param_1, param_2, iVar12, local_34, (int)*pcVar8);
                                    uVar4 = *local_40;
                                    if ((int)uVar4 < iVar12)
                                        goto LAB_1002a2be0;
                                    iVar5 = (int)(uVar4 + iVar6 * -256) / iVar9;
                                    iVar3 = m_loopCount;
                                    iVar10 = iVar3 - iVar5;
                                    if (iVar10 == 0 || iVar3 < iVar5) {
                                        *local_40 = uVar4 - iVar3 * iVar9;
                                        iVar10 = 0;
                                    } else {
                                        *local_40 = uVar4 - iVar5 * iVar9;
                                    }
                                    m_loopCount = iVar10;
                                } while (iVar5 < iVar3);
                            }
                        } else {
                            if (field_76 < 0) {
                                pcVar8 =
                                    (char*)Array<signed char, eastl::allocator>::operator[](local_48, (long)field_108);
                                param_2 = MixBackwardSto(this, param_1, param_2, iVar11, local_34, (int)*pcVar8);
                                if (iVar11 <= (int)*local_40)
                                    goto LAB_1002a2be0;
                                field_72 = ~*local_40 + local_4c;
                                field_76 = -field_76;
                                piVar2 = &m_loopCount;
                                *piVar2 = *piVar2 + -1;
                                uVar4 = (uint)local_68;
                                if (*piVar2 == 0)
                                    break;
                            }
                            do {
                                pcVar8 = (char*)Array<signed char, eastl::allocator>::operator[](local_48,
                                                                                                 (long)field_112 - 1);
                                param_2 = MixForwardSto(this, param_1, param_2, iVar12, local_34, (int)*pcVar8);
                                if ((int)*local_40 < iVar12)
                                    goto LAB_1002a2be0;
                                field_72 = ~*local_40 + local_5c;
                                field_76 = -field_76;
                                piVar2 = &m_loopCount;
                                *piVar2 = *piVar2 + -1;
                                if (*piVar2 == 0)
                                    break;
                                pcVar8 =
                                    (char*)Array<signed char, eastl::allocator>::operator[](local_48, (long)field_108);
                                param_2 = MixBackwardSto(this, param_1, param_2, iVar11, local_34, (int)*pcVar8);
                                if (iVar11 <= (int)*local_40)
                                    goto LAB_1002a2be0;
                                field_72 = ~*local_40 + local_4c;
                                field_76 = -field_76;
                                piVar2 = &m_loopCount;
                                *piVar2 = *piVar2 + -1;
                            } while (*piVar2 != 0);
                        }
                        uVar4 = (uint)local_68;
                    } while (0 < m_loopCount);
                }
                if (field_76 < 0) {
                    MixBackwardSto(this, param_1, param_2, 0, local_34, 0);
                    if ((int)*local_40 < 0) {
                        field_72 = 4294967295;
                        SkipRampNounLink(this);
                        RemoveFromMixer();
                    }
                } else {
                    MixForwardSto(this, param_1, param_2, uVar4, local_34, 0);
                    if ((int)(uint)local_68 <= (int)*local_40) {
                        field_72 = (uint)local_68;
                        SkipRampNounLink(this);
                        RemoveFromMixer();
                    }
                }
            }
        }
    LAB_1002a2be0:
        local_78->~shared_ptr();
    }

    // 0x1002a2d50, 896 bytes, placed by class name
    // WaveStream::MixBackwardSto(Array<int, eastl::allocator>&, int, int, int, int)
    ulong WaveStream::MixBackwardSto(Array* param_1, int param_2, int param_3, int param_4, int param_5) {
        uint* puVar1;
        uint uVar2;
        undefined8 uVar3;
        char cVar4;
        byte bVar5;
        uint uVar6;
        undefined8 uVar7;
        long lVar8;
        ulong uVar9;
        WaveStream* pWVar10;
        int iVar11;
        ulong uVar12;
        Array* pAVar13;
        uint in_stack_ffffffffffffff58;
        uint in_stack_ffffffffffffff60;
        int iVar14;
        ulong in_stack_ffffffffffffff68;
        WaveStream* in_stack_ffffffffffffff70;
        ulong in_stack_ffffffffffffff78;
        undefined8 local_58;
        uint local_4c;

        uVar12 = (ulong)(uint)param_5;
        uVar9 = (ulong)(uint)param_3;
        uVar7 = std::this_thread::get_id();
        uVar3 = g_idWorkerThread;
        cVar4 = std::operator==(uVar7, g_idWorkerThread);
        if (cVar4 == '\0') {
            new (&local_58) std::__thread_id();
            cVar4 = std::operator==(uVar3, local_58);
            if (cVar4 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          1097, (char*)0);
            }
        }
        pAVar13 = param_1;
        do {
            cVar4 = PCMPlayer::m_stereo;
            iVar14 = (int)in_stack_ffffffffffffff68;
            iVar11 = (int)uVar12;
            if ((int)field_120 < 1) {
                if ((field_76 == -256) && ((char)field_72 == '\0')) {
                    pWVar10 = this;
                    lVar8 = MyWave(this);
                    if (cVar4 == '\0') {
                        uVar6 = DoMixBackwards1To1Mono((Array*)(lVar8 + 8), pAVar13, field_72, param_2, field_88,
                                                       iVar11, (uint)param_4, (uint)param_3, this);
                    } else {
                        uVar6 = DoMixBackwards1To1Stereo((int)pWVar10, (Array*)(lVar8 + 8), pAVar13, field_72, param_2,
                                                         field_92, field_96, in_stack_ffffffffffffff60, (uint)param_4,
                                                         (uint)param_3, this);
                    }
                } else {
                    pWVar10 = this;
                    lVar8 = MyWave(this);
                    if (cVar4 == '\0') {
                        uVar6 = DoMixBackwardsMono((int)pWVar10, param_5, (Array*)(lVar8 + 8), pAVar13, field_72,
                                                   param_2, field_88, in_stack_ffffffffffffff60, (uint)param_4,
                                                   (uint)param_3, this, field_76, param_5);
                    } else {
                        uVar6 = DoMixBackwardsStereo(param_5, field_96, (Array*)(lVar8 + 8), pAVar13, field_72, param_2,
                                                     field_92, field_96, iVar14, (uint)param_4, (uint)param_3, this,
                                                     field_76, param_5);
                    }
                }
                return (ulong)uVar6;
            }
            in_stack_ffffffffffffff60 = field_120 + param_2;
            field_120 = in_stack_ffffffffffffff60;
            cVar4 = PCMPlayer::m_stereo;
            if ((int)(uint)param_4 < (int)in_stack_ffffffffffffff60) {
                in_stack_ffffffffffffff60 = (uint)param_4;
            }
            local_4c = (uint)uVar9;
            if ((field_76 == -256) && ((char)field_72 == '\0')) {
                lVar8 = MyWave(this);
                pAVar13 = param_1;
                if (cVar4 == '\0') {
                    uVar12 = (ulong)field_124;
                    in_stack_ffffffffffffff68 = (ulong)(uint)param_3;
                    in_stack_ffffffffffffff70 = this;
                    param_2 = DoMixBackwards1To1RampMono((Array*)(lVar8 + 8), param_1, field_72, param_2, field_88,
                                                         field_124, in_stack_ffffffffffffff58,
                                                         in_stack_ffffffffffffff60, (uint)param_3, this);
                } else {
                    uVar12 = (ulong)field_92;
                    in_stack_ffffffffffffff58 = field_96;
                    uVar6 = field_128;
                    uVar2 = field_132;
                    in_stack_ffffffffffffff78 = (ulong)in_stack_ffffffffffffff60;
                    in_stack_ffffffffffffff68 = (ulong)uVar2;
                    param_2 = DoMixBackwards1To1RampStereo(
                        uVar2, (Array*)(lVar8 + 8), param_1, field_72, param_2, field_92, in_stack_ffffffffffffff58,
                        uVar6, uVar2, (int)in_stack_ffffffffffffff70, in_stack_ffffffffffffff60, (uint)param_3, this);
                    in_stack_ffffffffffffff60 = uVar6;
                }
            } else {
                lVar8 = MyWave(this);
                if (cVar4 == '\0') {
                    in_stack_ffffffffffffff58 = field_88;
                    uVar6 = field_124;
                    in_stack_ffffffffffffff78 = (ulong)(uint)param_3;
                    in_stack_ffffffffffffff70 = (WaveStream*)(ulong)in_stack_ffffffffffffff60;
                    uVar12 = (ulong)(uint)param_2;
                    param_2 = DoMixBackwardsRampMono(param_5, uVar6, (Array*)(lVar8 + 8), pAVar13, field_72, param_2,
                                                     in_stack_ffffffffffffff58, uVar6, (int)in_stack_ffffffffffffff68,
                                                     in_stack_ffffffffffffff60, (uint)param_3, this, field_76, param_5);
                    in_stack_ffffffffffffff60 = uVar6;
                } else {
                    in_stack_ffffffffffffff58 = field_92;
                    uVar6 = field_96;
                    uVar2 = field_128;
                    in_stack_ffffffffffffff70 = (WaveStream*)(ulong)field_132;
                    in_stack_ffffffffffffff68 = (ulong)uVar2;
                    uVar12 = (ulong)(uint)param_2;
                    param_2 = DoMixBackwardsRampStereo(uVar2, uVar6, (Array*)(lVar8 + 8), pAVar13, field_72, param_2,
                                                       in_stack_ffffffffffffff58, uVar6, uVar2, field_132,
                                                       (int)in_stack_ffffffffffffff78, in_stack_ffffffffffffff60,
                                                       (uint)param_3, this, field_76, param_5);
                    in_stack_ffffffffffffff60 = uVar6;
                }
            }
            puVar1 = &field_120;
            *puVar1 = *puVar1 - param_2;
            if (*puVar1 == 0) {
                bVar5 = FinaliseRamp(this);
                uVar6 = local_4c;
                if (bVar5 != 0) {
                    uVar6 = (uint)param_4;
                }
                bVar5 = bVar5 ^ 1;
            } else {
                bVar5 = 0;
                uVar6 = param_2;
            }
            uVar9 = (ulong)uVar6;
        } while (bVar5 != 0);
        return uVar9;
    }

    // 0x1002a30d0, 896 bytes, placed by class name
    // WaveStream::MixForwardSto(Array<int, eastl::allocator>&, int, int, int, int)
    ulong WaveStream::MixForwardSto(Array* param_1, int param_2, int param_3, int param_4, int param_5) {
        uint* puVar1;
        uint uVar2;
        undefined8 uVar3;
        char cVar4;
        byte bVar5;
        uint uVar6;
        undefined8 uVar7;
        long lVar8;
        ulong uVar9;
        WaveStream* pWVar10;
        int iVar11;
        ulong uVar12;
        Array* pAVar13;
        uint in_stack_ffffffffffffff58;
        uint in_stack_ffffffffffffff60;
        int iVar14;
        ulong in_stack_ffffffffffffff68;
        WaveStream* in_stack_ffffffffffffff70;
        ulong in_stack_ffffffffffffff78;
        undefined8 local_58;
        uint local_4c;

        uVar12 = (ulong)(uint)param_5;
        uVar9 = (ulong)(uint)param_3;
        uVar7 = std::this_thread::get_id();
        uVar3 = g_idWorkerThread;
        cVar4 = std::operator==(uVar7, g_idWorkerThread);
        if (cVar4 == '\0') {
            new (&local_58) std::__thread_id();
            cVar4 = std::operator==(uVar3, local_58);
            if (cVar4 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          1022, (char*)0);
            }
        }
        pAVar13 = param_1;
        do {
            cVar4 = PCMPlayer::m_stereo;
            iVar14 = (int)in_stack_ffffffffffffff68;
            iVar11 = (int)uVar12;
            if ((int)field_120 < 1) {
                if ((field_76 == 256) && ((char)field_72 == '\0')) {
                    pWVar10 = this;
                    lVar8 = MyWave(this);
                    if (cVar4 == '\0') {
                        uVar6 = DoMixForwards1To1Mono((Array*)(lVar8 + 8), pAVar13, field_72, param_2, field_88, iVar11,
                                                      (uint)param_4, (uint)param_3, this);
                    } else {
                        uVar6 = DoMixForwards1To1Stereo((int)pWVar10, (Array*)(lVar8 + 8), pAVar13, field_72, param_2,
                                                        field_92, field_96, in_stack_ffffffffffffff60, (uint)param_4,
                                                        (uint)param_3, this);
                    }
                } else {
                    pWVar10 = this;
                    lVar8 = MyWave(this);
                    if (cVar4 == '\0') {
                        uVar6 = DoMixForwardsMono((int)pWVar10, param_5, (Array*)(lVar8 + 8), pAVar13, field_72,
                                                  param_2, field_88, in_stack_ffffffffffffff60, (uint)param_4,
                                                  (uint)param_3, this, field_76, param_5);
                    } else {
                        uVar6 = DoMixForwardsStereo(param_5, field_96, (Array*)(lVar8 + 8), pAVar13, field_72, param_2,
                                                    field_92, field_96, iVar14, (uint)param_4, (uint)param_3, this,
                                                    field_76, param_5);
                    }
                }
                return (ulong)uVar6;
            }
            in_stack_ffffffffffffff60 = field_120 + param_2;
            field_120 = in_stack_ffffffffffffff60;
            cVar4 = PCMPlayer::m_stereo;
            if ((int)(uint)param_4 < (int)in_stack_ffffffffffffff60) {
                in_stack_ffffffffffffff60 = (uint)param_4;
            }
            local_4c = (uint)uVar9;
            if ((field_76 == 256) && ((char)field_72 == '\0')) {
                lVar8 = MyWave(this);
                pAVar13 = param_1;
                if (cVar4 == '\0') {
                    uVar12 = (ulong)field_124;
                    in_stack_ffffffffffffff68 = (ulong)(uint)param_3;
                    in_stack_ffffffffffffff70 = this;
                    param_2 = DoMixForwards1To1RampMono((Array*)(lVar8 + 8), param_1, field_72, param_2, field_88,
                                                        field_124, in_stack_ffffffffffffff58, in_stack_ffffffffffffff60,
                                                        (uint)param_3, this);
                } else {
                    uVar12 = (ulong)field_92;
                    in_stack_ffffffffffffff58 = field_96;
                    uVar6 = field_128;
                    uVar2 = field_132;
                    in_stack_ffffffffffffff78 = (ulong)in_stack_ffffffffffffff60;
                    in_stack_ffffffffffffff68 = (ulong)uVar2;
                    param_2 = DoMixForwards1To1RampStereo(
                        uVar2, (Array*)(lVar8 + 8), param_1, field_72, param_2, field_92, in_stack_ffffffffffffff58,
                        uVar6, uVar2, (int)in_stack_ffffffffffffff70, in_stack_ffffffffffffff60, (uint)param_3, this);
                    in_stack_ffffffffffffff60 = uVar6;
                }
            } else {
                lVar8 = MyWave(this);
                if (cVar4 == '\0') {
                    in_stack_ffffffffffffff58 = field_88;
                    uVar6 = field_124;
                    in_stack_ffffffffffffff78 = (ulong)(uint)param_3;
                    in_stack_ffffffffffffff70 = (WaveStream*)(ulong)in_stack_ffffffffffffff60;
                    uVar12 = (ulong)(uint)param_2;
                    param_2 = DoMixForwardsRampMono(param_5, uVar6, (Array*)(lVar8 + 8), pAVar13, field_72, param_2,
                                                    in_stack_ffffffffffffff58, uVar6, (int)in_stack_ffffffffffffff68,
                                                    in_stack_ffffffffffffff60, (uint)param_3, this, field_76, param_5);
                    in_stack_ffffffffffffff60 = uVar6;
                } else {
                    in_stack_ffffffffffffff58 = field_92;
                    uVar6 = field_96;
                    uVar2 = field_128;
                    in_stack_ffffffffffffff70 = (WaveStream*)(ulong)field_132;
                    in_stack_ffffffffffffff68 = (ulong)uVar2;
                    uVar12 = (ulong)(uint)param_2;
                    param_2 = DoMixForwardsRampStereo(uVar2, uVar6, (Array*)(lVar8 + 8), pAVar13, field_72, param_2,
                                                      in_stack_ffffffffffffff58, uVar6, uVar2, field_132,
                                                      (int)in_stack_ffffffffffffff78, in_stack_ffffffffffffff60,
                                                      (uint)param_3, this, field_76, param_5);
                    in_stack_ffffffffffffff60 = uVar6;
                }
            }
            puVar1 = &field_120;
            *puVar1 = *puVar1 - param_2;
            if (*puVar1 == 0) {
                bVar5 = FinaliseRamp(this);
                uVar6 = local_4c;
                if (bVar5 != 0) {
                    uVar6 = (uint)param_4;
                }
                bVar5 = bVar5 ^ 1;
            } else {
                bVar5 = 0;
                uVar6 = param_2;
            }
            uVar9 = (ulong)uVar6;
        } while (bVar5 != 0);
        return uVar9;
    }

    // 0x1002a3450, 1104 bytes, placed by class name
    // WaveStream::PretendToMix(int)
    void WaveStream::PretendToMix(int param_1) {
        int iVar1;
        int iVar2;
        uint uVar3;
        long lVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        int iVar8;
        uint uVar9;
        undefined4 in_register_00000034;
        int iVar10;
        uint uVar11;
        int iVar12;
        int iVar13;
        int iVar14;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_58[16];
        shared_ptr local_48;
        int local_38;
        int local_34;

        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(
            local_58, (_func_decltype_nullptr*)CONCAT44(in_register_00000034, param_1));
        PullQueuedStateIntoWorker(this);
        uVar11 = field_120;
        if (0 < (int)uVar11) {
            if (uVar11 - param_1 == 0 || (int)uVar11 < param_1) {
                if (field_80 == 2147483648) {
                    field_80 = 0;
                    field_96 = 0;
                    field_88 = 0;
                    field_92 = 0;
                    local_48.UnlinkKeepAlive();
                    shared_ptr<PCMStream>::operator=((shared_ptr<PCMStream>*)local_58, &local_48);
                    local_48.~shared_ptr();
                    param_1 = field_120;
                }
                field_120 = 0;
                SetMLRVol(this);
            } else {
                field_88 = field_88 + field_124 * param_1;
                field_92 = field_92 + field_128 * param_1;
                field_96 = field_96 + field_132 * param_1;
                field_120 = uVar11 - param_1;
            }
        }
        lVar4 = MyWave(this);
        iVar6 = field_108;
        iVar1 = field_112;
        iVar13 = iVar6 * 256;
        iVar14 = iVar1 * 256;
        local_34 = iVar6;
        iVar2 = ((lVar4 + 8))->end();
        iVar12 = iVar14 + iVar6 * -256;
        if (iVar12 == 0 || iVar14 < iVar13) {
            m_loopCount = 0;
            uVar11 = field_72;
        } else {
            uVar11 = field_72;
        }
        if ((int)uVar11 < 0) {
            if (field_76 < 1) {
                SkipRampNounLink(this);
                RemoveFromMixer();
                goto LAB_1002a3855;
            }
            field_72 = 0;
        }
        uVar11 = iVar2 * 256;
        if ((int)uVar11 <= (int)field_72) {
            if (-1 < field_76) {
                SkipRampNounLink(this);
                RemoveFromMixer();
                goto LAB_1002a3855;
            }
            field_72 = uVar11 - 1;
        }
        iVar2 = field_76;
        uVar9 = param_1 * iVar2 + field_72;
        field_72 = uVar9;
        if (m_loopCount < 0) {
            if (field_116 == false) {
                if (iVar2 < 0) {
                    if ((int)uVar9 < iVar13) {
                        field_72 = (iVar14 + -1) - (int)((iVar14 + -1) - uVar9) % iVar12;
                    }
                } else if (iVar14 <= (int)uVar9) {
                    field_72 = (int)(uVar9 + iVar6 * -256) % iVar12 + iVar13;
                }
            } else {
                if (iVar2 < 0) {
                    if (iVar13 <= (int)uVar9)
                        goto LAB_1002a3855;
                    field_72 = ~uVar9 + local_34 * 512;
                    field_76 = -iVar2;
                }
                uVar11 = field_72;
                if (iVar14 <= (int)uVar11) {
                    iVar6 = field_76;
                    uVar9 = ~uVar11 + iVar1 * 512;
                    do {
                        if (iVar13 <= (int)uVar9) {
                            iVar6 = -iVar6;
                            field_72 = uVar9;
                            goto LAB_1002a3851;
                        }
                        uVar9 = uVar9 + iVar1 * 512 + local_34 * -512;
                        uVar11 = uVar11 + (local_34 - iVar1) * 512;
                    } while (iVar14 <= (int)uVar11);
                    field_72 = uVar11;
                LAB_1002a3851:
                    field_76 = iVar6;
                }
            }
        } else {
            local_38 = local_34 * 512;
            do {
                iVar2 = m_loopCount;
                if (iVar2 < 1)
                    goto LAB_1002a3743;
                iVar7 = field_76;
                if (field_116 == false) {
                    uVar9 = field_72;
                    iVar8 = 1;
                    if (iVar7 < 0) {
                        if ((int)uVar9 < iVar13) {
                            iVar7 = (int)(~uVar9 + iVar14) / iVar12;
                            iVar5 = iVar2 - iVar7;
                            if (iVar5 == 0 || iVar2 < iVar7) {
                                iVar8 = iVar2 * iVar12;
                                goto LAB_1002a3717;
                            }
                            field_72 = iVar7 * iVar12 + uVar9;
                        LAB_1002a3700:
                            iVar8 = 0;
                            goto LAB_1002a3723;
                        }
                    } else if (iVar14 <= (int)uVar9) {
                        iVar7 = (int)(uVar9 + iVar6 * -256) / iVar12;
                        iVar5 = iVar2 - iVar7;
                        if (iVar5 != 0 && iVar7 <= iVar2) {
                            field_72 = uVar9 - iVar7 * iVar12;
                            goto LAB_1002a3700;
                        }
                        iVar8 = -(iVar2 * iVar12);
                    LAB_1002a3717:
                        field_72 = uVar9 + iVar8;
                        iVar8 = 5;
                        iVar5 = 0;
                    LAB_1002a3723:
                        m_loopCount = iVar5;
                        iVar5 = 1;
                        if (iVar7 < iVar2)
                            goto LAB_1002a35d0;
                    }
                } else {
                    if (iVar7 < 0) {
                        iVar8 = 1;
                        if ((int)field_72 < iVar13) {
                            field_72 = ~field_72 + local_38;
                            field_76 = -iVar7;
                            m_loopCount = iVar2 + -1;
                            if (iVar2 + -1 != 0)
                                goto LAB_1002a3600;
                            iVar8 = 5;
                        }
                        goto LAB_1002a35d3;
                    }
                LAB_1002a3600:
                    do {
                        uVar9 = field_72;
                        iVar8 = 1;
                        if ((int)uVar9 < iVar14)
                            goto LAB_1002a35d3;
                        uVar3 = ~uVar9 + iVar1 * 512;
                        field_72 = uVar3;
                        iVar2 = field_76;
                        iVar7 = m_loopCount;
                        field_76 = -iVar2;
                        iVar5 = 0;
                        iVar10 = iVar7 + -1;
                        m_loopCount = iVar10;
                        if (iVar10 == 0)
                            break;
                        if (iVar13 <= (int)uVar3)
                            goto LAB_1002a35d3;
                        field_72 = uVar9 + (local_34 - iVar1) * 512;
                        field_76 = iVar2;
                        iVar7 = iVar7 + -2;
                        m_loopCount = iVar7;
                    } while (iVar7 != 0);
                LAB_1002a35d0:
                    iVar8 = iVar5;
                }
            LAB_1002a35d3:
            } while (iVar8 == 0);
            if (iVar8 == 5) {
            LAB_1002a3743:
                if (field_76 < 0) {
                    if ((int)field_72 < 0) {
                        field_72 = 4294967295;
                        SkipRampNounLink(this);
                        RemoveFromMixer();
                    }
                } else if ((int)uVar11 <= (int)field_72) {
                    field_72 = uVar11;
                    SkipRampNounLink(this);
                    RemoveFromMixer();
                }
            }
        }
    LAB_1002a3855:
        local_58->~shared_ptr();
    }

    // 0x1002a3920, 1200 bytes, placed by class name
    // WaveStream::DoMixForwards1To1RampStereo(int, Array<signed char, eastl::allocator>&, Array<int, eastl::allocator>&, int, int, int, int, int, int, int, int, int, WaveStream*)
    int WaveStream::DoMixForwards1To1RampStereo(int param_1, Array* param_2, Array* param_3, int param_4, int param_5,
                                                int param_6, int param_7, int param_8, int param_9, int param_10,
                                                int param_11, int param_12, WaveStream* param_13) {
        long lVar1;
        uint uVar2;
        undefined8 uVar3;
        Array* pAVar4;
        ulong uVar5;
        char cVar6;
        undefined8 uVar7;
        char* pcVar8;
        int* piVar9;
        int iVar10;
        ulong uVar11;
        uint uVar12;
        long lVar13;
        undefined4 in_register_00000084;
        int iVar14;
        int iVar15;
        ulong uVar16;
        int iVar17;
        ulong uVar18;
        undefined8 local_f0;
        ulong local_e8;
        ulong local_e0;
        long local_d8;
        ulong local_d0;
        ulong local_c8;
        long local_c0;
        int local_b4;
        int local_b0;
        int local_ac;
        long local_a8;
        long local_a0;
        ulong local_98;
        ulong local_90;
        ulong local_88;
        ulong local_80;
        ulong local_70;
        ulong local_68;
        ulong local_60;
        ulong local_58;
        ulong local_48;
        ulong local_40;
        ulong local_38;

        local_80 = CONCAT44(in_register_00000084, param_5);
        uVar7 = std::this_thread::get_id();
        uVar3 = g_idWorkerThread;
        cVar6 = std::operator==(uVar7, g_idWorkerThread);
        if (cVar6 == '\0') {
            new (&local_f0) std::__thread_id();
            cVar6 = std::operator==(uVar3, local_f0);
            if (cVar6 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          1593, (char*)0);
            }
        }
        uVar12 = param_4 >> 8;
        local_98 = (ulong)uVar12;
        uVar18 = (ulong)(uint)(param_6 << 2);
        uVar16 = (ulong)(uint)(param_7 << 2);
        iVar15 = (int)local_80;
        iVar10 = (iVar15 - uVar12) + (param_12 >> 8);
        if (param_11 < iVar10) {
            iVar10 = param_11;
        }
        iVar14 = iVar10 * 2 + -6;
        local_68 = (ulong)(uint)(param_8 * 4);
        param_13->field_88 = param_13->field_88 + (iVar10 - iVar15) * param_13->field_124;
        local_70 = (ulong)(uint)(param_9 * 4);
        uVar2 = iVar15 * 2;
        uVar11 = (ulong)uVar2;
        iVar15 = iVar10 * 2;
        if ((int)uVar2 < iVar14) {
            local_a0 = (long)(int)uVar12;
            local_c0 = (long)(int)uVar2;
            local_d8 = (long)iVar14;
            local_b4 = param_8 * 12;
            local_d0 = (ulong)(uint)(param_8 << 3);
            local_b0 = param_9 * 12;
            local_c8 = (ulong)(uint)(param_9 << 3);
            lVar13 = 0;
            local_38 = 0;
            local_ac = iVar10 * 2;
            local_80 = uVar11;
            do {
                lVar1 = local_c0;
                local_48 = local_38 + local_c0;
                local_60 = local_a0 + lVar13 + 1;
                local_a8 = lVar13;
                pcVar8 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)param_2, local_a0 + lVar13);
                cVar6 = *pcVar8;
                local_40 = local_38 + lVar1 + 1;
                local_58 = uVar18;
                piVar9 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_3, local_48);
                *piVar9 = *piVar9 + (int)uVar18 * (int)cVar6;
                iVar15 = (int)uVar18 + (int)local_68;
                iVar14 = (int)uVar16;
                local_90 = local_38 + lVar1 + 2;
                piVar9 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_3, local_40);
                *piVar9 = *piVar9 + cVar6 * iVar14;
                local_48 = local_a0 + 2 + local_a8;
                local_40._0_4_ = (int)local_70 + iVar14;
                pcVar8 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)param_2, local_60);
                pAVar4 = param_3;
                cVar6 = *pcVar8;
                local_e0 = local_38 + lVar1 + 3;
                piVar9 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_3, local_90);
                iVar10 = (int)local_40;
                lVar1 = local_c0;
                *piVar9 = *piVar9 + iVar15 * cVar6;
                local_88 = CONCAT44(local_88._4_4_, (int)local_d0 + (int)local_58);
                iVar17 = cVar6 * (int)local_40;
                local_e8 = local_38 + local_c0 + 4;
                local_60._0_4_ = iVar15 + (int)local_68;
                piVar9 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)pAVar4, local_e0);
                *piVar9 = *piVar9 + iVar17;
                local_40._0_4_ = iVar10 + (int)local_70;
                iVar10 = (int)local_c8;
                local_90 = local_a0 + 3 + local_a8;
                pcVar8 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)param_2, local_48);
                pAVar4 = param_3;
                local_48 = CONCAT44(local_48._4_4_, (int)*pcVar8);
                iVar15 = (int)local_88 * *pcVar8;
                local_88 = local_38 + lVar1 + 5;
                piVar9 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_3, local_e8);
                *piVar9 = *piVar9 + iVar15;
                local_60 = CONCAT44(local_60._4_4_, (int)local_60 + (int)local_68);
                local_58 = (ulong)(uint)((int)local_58 + local_b4);
                iVar10 = (iVar10 + iVar14) * (int)local_48;
                local_48 = local_38 + lVar1 + 6;
                piVar9 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)pAVar4, local_88);
                *piVar9 = *piVar9 + iVar10;
                local_40 = CONCAT44(local_40._4_4_, (int)local_40 + (int)local_70);
                iVar14 = iVar14 + local_b0;
                pcVar8 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)param_2, local_90);
                cVar6 = *pcVar8;
                iVar10 = (int)local_58;
                local_58 = local_38 + lVar1 + 7;
                piVar9 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)pAVar4, local_48);
                *piVar9 = *piVar9 + iVar10 * cVar6;
                uVar18 = (ulong)(uint)((int)local_60 + (int)local_68);
                piVar9 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_3, local_58);
                *piVar9 = *piVar9 + iVar14 * cVar6;
                uVar16 = (ulong)(uint)((int)local_40 + (int)local_70);
                lVar1 = lVar1 + local_38;
                local_38 = local_38 + 8;
                lVar13 = local_a8 + 4;
            } while (lVar1 + 8 < local_d8);
            uVar11 = (ulong)(uint)((int)local_80 + (int)local_38);
            local_98 = (ulong)(uint)((int)local_98 + (int)lVar13);
            iVar15 = local_ac;
        }
        uVar12 = (uint)uVar18;
        if ((int)uVar11 < iVar15) {
            local_98 = (ulong)(int)local_98;
            uVar11 = (ulong)(int)uVar11;
            local_40 = (ulong)iVar15;
            lVar13 = uVar11 << 32;
            do {
                uVar5 = local_98;
                local_98 = local_98 + 1;
                local_38 = uVar16;
                pcVar8 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)param_2, uVar5);
                cVar6 = *pcVar8;
                piVar9 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_3, uVar11);
                *piVar9 = *piVar9 + (int)uVar18 * (int)cVar6;
                uVar12 = (int)uVar18 + (int)local_68;
                uVar18 = (ulong)uVar12;
                iVar10 = (int)local_38;
                uVar11 = uVar11 + 2;
                piVar9 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_3,
                                                                        lVar13 >> 32 | 1);
                *piVar9 = *piVar9 + cVar6 * iVar10;
                uVar16 = (ulong)(uint)(iVar10 + (int)local_70);
                lVar13 = lVar13 + 8589934592;
            } while ((long)uVar11 < (long)local_40);
        }
        param_13->field_92 = (int)uVar12 >> 2;
        param_13->field_96 = (int)uVar16 >> 2;
        param_13->field_72 = (int)local_98 << 8;
        return (int)uVar11 >> 1;
    }

    // 0x1002a3dd0, 768 bytes, placed by class name
    // WaveStream::DoMixForwards1To1RampMono(Array<signed char, eastl::allocator>&, Array<int, eastl::allocator>&, int, int, int, int, int, int, int, WaveStream*)
    int WaveStream::DoMixForwards1To1RampMono(Array* param_1, Array* param_2, int param_3, int param_4, int param_5,
                                              int param_6, int param_7, int param_8, int param_9,
                                              WaveStream* param_10) {
        undefined8 uVar1;
        ulong uVar2;
        char cVar3;
        undefined8 uVar4;
        char* pcVar5;
        int* piVar6;
        long lVar7;
        int iVar8;
        uint uVar9;
        Array* this;
        undefined4 in_register_0000008c;
        int iVar10;
        ulong uVar11;
        long lVar12;
        int iVar13;
        int iVar14;
        undefined8 local_a0;
        long local_98;
        long local_90;
        ulong local_88;
        int local_80;
        int local_7c;
        ulong local_78;
        ulong local_70;
        ulong local_68;
        ulong local_60;
        ulong local_48;
        int local_40;
        int local_3c;
        ulong local_38;

        local_68 = CONCAT44(in_register_0000008c, param_6);
        uVar4 = std::this_thread::get_id();
        uVar1 = g_idWorkerThread;
        cVar3 = std::operator==(uVar4, g_idWorkerThread);
        if (cVar3 == '\0') {
            new (&local_a0) std::__thread_id();
            cVar3 = std::operator==(uVar1, local_a0);
            if (cVar3 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          1554, (char*)0);
            }
        }
        local_3c = param_3 >> 8;
        iVar14 = param_5 << 2;
        uVar9 = (param_4 - local_3c) + (param_9 >> 8);
        if (param_8 < (int)uVar9) {
            uVar9 = param_8;
        }
        param_10->field_92 = param_10->field_92 + param_10->field_128 * (uVar9 - param_4);
        param_10->field_96 = param_10->field_96 + (uVar9 - param_4) * param_10->field_132;
        iVar8 = (int)local_68;
        local_60 = (ulong)(uint)(iVar8 * 4);
        if (param_4 < (int)(uVar9 - 3)) {
            local_98 = (long)local_3c;
            local_48 = (ulong)param_4;
            local_90 = (long)(int)(uVar9 - 3);
            local_7c = iVar8 * 12;
            local_68 = (ulong)(uint)(iVar8 << 3);
            lVar12 = 0;
            this = param_1;
            local_88 = (ulong)uVar9;
            local_40 = param_4;
            do {
                uVar11 = local_48;
                lVar7 = local_98;
                local_38 = local_48 + lVar12;
                local_78 = local_98 + lVar12 + 1;
                pcVar5 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)this, local_98 + lVar12);
                cVar3 = *pcVar5;
                local_70 = uVar11 + lVar12 + 1;
                piVar6 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_2, local_38);
                *piVar6 = *piVar6 + cVar3 * iVar14;
                iVar13 = iVar14 + (int)local_60;
                local_38 = lVar7 + lVar12 + 2;
                pcVar5 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)param_1, local_78);
                cVar3 = *pcVar5;
                local_78 = local_48 + lVar12 + 2;
                piVar6 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_2, local_70);
                *piVar6 = *piVar6 + cVar3 * iVar13;
                iVar8 = (int)local_60;
                local_80 = (int)local_68 + iVar14;
                local_70 = lVar7 + 3 + lVar12;
                pcVar5 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)param_1, local_38);
                iVar10 = *pcVar5 * local_80;
                local_38 = local_48 + lVar12 + 3;
                piVar6 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_2, local_78);
                this = param_1;
                *piVar6 = *piVar6 + iVar10;
                iVar14 = iVar14 + local_7c;
                pcVar5 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)param_1, local_70);
                cVar3 = *pcVar5;
                piVar6 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_2, local_38);
                *piVar6 = *piVar6 + cVar3 * iVar14;
                iVar14 = iVar13 + iVar8 * 2 + (int)local_60;
                lVar7 = local_48 + lVar12;
                lVar12 = lVar12 + 4;
            } while (lVar7 + 4 < local_90);
            param_4 = local_40 + (int)lVar12;
            local_3c = local_3c + (int)lVar12;
            uVar9 = (uint)local_88;
        }
        if (param_4 < (int)uVar9) {
            local_48 = (ulong)local_3c;
            iVar8 = 0;
            local_38 = CONCAT44(local_38._4_4_, param_4 - uVar9);
            uVar11 = (long)param_4;
            local_40 = param_4;
            do {
                uVar2 = local_48;
                local_48 = local_48 + 1;
                pcVar5 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)param_1, uVar2);
                cVar3 = *pcVar5;
                piVar6 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_2, uVar11);
                *piVar6 = *piVar6 + cVar3 * iVar14;
                iVar14 = iVar14 + (int)local_60;
                iVar8 = iVar8 + -1;
                uVar11 = uVar11 + 1;
            } while ((int)local_38 != iVar8);
            local_3c = local_3c - iVar8;
            param_4 = local_40 - iVar8;
        }
        param_10->field_88 = iVar14 >> 2;
        param_10->field_72 = local_3c << 8;
        return param_4;
    }

    // 0x1002a40d0, 720 bytes, placed by class name
    // WaveStream::DoMixForwardsRampStereo(int, int, Array<signed char, eastl::allocator>&, Array<int, eastl::allocator>&, int, int, int, int, int, int, int, int, int, WaveStream*, int, int)
    void WaveStream::DoMixForwardsRampStereo(int param_1, int param_2, Array* param_3, Array* param_4, int param_5,
                                             int param_6, int param_7, int param_8, int param_9, int param_10,
                                             int param_11, int param_12, int param_13, WaveStream* param_14,
                                             int param_15, int param_16) {
        uint uVar1;
        undefined8 uVar2;
        uint uVar3;
        uint uVar4;
        char cVar5;
        int iVar6;
        undefined8 uVar7;
        char* pcVar8;
        int* piVar9;
        ulong uVar10;
        int iVar11;
        long lVar12;
        undefined8 local_68;
        ulong local_60;
        long local_58;
        long local_40;
        uint local_38;
        uint local_34;

        uVar7 = std::this_thread::get_id();
        uVar2 = g_idWorkerThread;
        cVar5 = std::operator==(uVar7, g_idWorkerThread);
        if (cVar5 == '\0') {
            new (&local_68) std::__thread_id();
            cVar5 = std::operator==(uVar2, local_68);
            if (cVar5 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          1785, (char*)0);
            }
        }
        param_14->field_88 = param_14->field_88 - param_14->field_124 * param_6;
        if ((param_15 == 0) ||
            (iVar6 = ((param_13 - param_5) + param_15 + -257) / param_15 + param_6, param_12 < iVar6)) {
            iVar6 = param_12;
        }
        uVar1 = param_6 * 2;
        uVar10 = (ulong)uVar1;
        local_34 = param_8;
        if ((int)uVar1 < iVar6 * 2) {
            uVar10 = (ulong)(int)uVar1;
            local_58 = (long)(iVar6 * 2);
            local_40._0_4_ = param_7;
            do {
                local_38 = param_5;
                pcVar8 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)param_3, (long)(param_5 >> 8));
                cVar5 = *pcVar8;
                pcVar8 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)param_3, (long)((param_5 >> 8) + 1));
                uVar1 = (uint)local_40;
                iVar6 = (local_38 & 255) * ((int)*pcVar8 - (int)cVar5) + cVar5 * 256;
                iVar11 = iVar6 * (uint)local_40;
                local_60 = uVar10 + 1;
                piVar9 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_4, uVar10);
                uVar4 = local_34;
                uVar3 = local_38;
                *piVar9 = *piVar9 + (iVar11 >> 6);
                local_40._0_4_ = uVar1 + param_9;
                iVar6 = iVar6 * local_34;
                uVar10 = uVar10 + 2;
                piVar9 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_4, local_60);
                *piVar9 = *piVar9 + (iVar6 >> 6);
                local_34 = uVar4 + param_10;
                param_5 = uVar3 + param_15;
                param_7 = (uint)local_40;
            } while ((long)uVar10 < local_58);
        }
        iVar6 = (int)uVar10;
        if ((param_15 == 0) ||
            (iVar11 = (~param_5 + param_13 + param_15) / param_15 + (iVar6 >> 1), param_12 < iVar11)) {
            iVar11 = param_12;
        }
        if (iVar6 < iVar11 * 2) {
            uVar10 = (ulong)iVar6;
            local_40 = (long)(iVar11 * 2);
            lVar12 = uVar10 << 32;
            do {
                local_38 = param_5;
                pcVar8 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)param_3, (long)(param_5 >> 8));
                iVar6 = (param_5 & 255U) * (param_16 - *pcVar8) + *pcVar8 * 256;
                piVar9 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_4, uVar10);
                uVar1 = local_38;
                *piVar9 = *piVar9 + (iVar6 * param_7 >> 6);
                param_7 = param_7 + param_9;
                iVar6 = iVar6 * local_34;
                uVar10 = uVar10 + 2;
                piVar9 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_4,
                                                                        lVar12 >> 32 | 1);
                *piVar9 = *piVar9 + (iVar6 >> 6);
                local_34 = local_34 + param_10;
                param_5 = uVar1 + param_15;
                lVar12 = lVar12 + 8589934592;
            } while ((long)uVar10 < local_40);
        }
        param_14->field_88 = param_14->field_88 + param_14->field_124 * ((int)uVar10 >> 1);
        param_14->field_92 = param_7;
        param_14->field_96 = local_34;
        param_14->field_72 = param_5;
    }

    // 0x1002a43a0, 544 bytes, placed by class name
    // WaveStream::DoMixForwardsRampMono(int, int, Array<signed char, eastl::allocator>&, Array<int, eastl::allocator>&, int, int, int, int, int, int, int, WaveStream*, int, int)
    ulong WaveStream::DoMixForwardsRampMono(int param_1, int param_2, Array* param_3, Array* param_4, int param_5,
                                            int param_6, int param_7, int param_8, int param_9, int param_10,
                                            int param_11, WaveStream* param_12, int param_13, int param_14) {
        char cVar1;
        undefined8 uVar2;
        char cVar3;
        int iVar4;
        undefined8 uVar5;
        char* pcVar6;
        int* piVar7;
        ulong uVar8;
        uint uVar9;
        ulong uVar10;
        undefined8 local_58;
        ulong local_50;
        int local_38;
        uint local_34;

        uVar8 = (ulong)(uint)param_6;
        uVar5 = std::this_thread::get_id();
        uVar2 = g_idWorkerThread;
        cVar3 = std::operator==(uVar5, g_idWorkerThread);
        if (cVar3 == '\0') {
            new (&local_58) std::__thread_id();
            cVar3 = std::operator==(uVar2, local_58);
            if (cVar3 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          1745, (char*)0);
            }
        }
        param_12->field_92 = param_12->field_92 - param_12->field_128 * param_6;
        param_12->field_96 = param_12->field_96 - param_12->field_132 * param_6;
        if ((param_13 == 0) ||
            (iVar4 = ((param_11 - param_5) + param_13 + -257) / param_13 + param_6, param_10 < iVar4)) {
            iVar4 = param_10;
        }
        if (param_6 < iVar4) {
            uVar8 = (ulong)param_6;
            local_38 = iVar4;
            do {
                local_50 = uVar8;
                local_34 = param_5;
                pcVar6 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)param_3, (long)(param_5 >> 8));
                cVar3 = *pcVar6;
                pcVar6 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)param_3, (long)((param_5 >> 8) + 1));
                cVar1 = *pcVar6;
                uVar9 = local_34 & 255;
                uVar8 = local_50 + 1;
                piVar7 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_4, local_50);
                *piVar7 = *piVar7 + ((int)((uVar9 * ((int)cVar1 - (int)cVar3) + cVar3 * 256) * param_7) >> 6);
                param_7 = param_7 + param_8;
                param_5 = local_34 + param_13;
            } while (local_38 != (int)uVar8);
        }
        iVar4 = (int)uVar8;
        if ((param_13 == 0) ||
            (local_34 = (~param_5 + param_11 + param_13) / param_13 + iVar4, param_10 < (int)local_34)) {
            local_34 = param_10;
        }
        if (iVar4 < (int)local_34) {
            uVar10 = (long)iVar4;
            do {
                pcVar6 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)param_3, (long)(param_5 >> 8));
                cVar3 = *pcVar6;
                uVar8 = uVar10 + 1;
                piVar7 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_4, uVar10);
                *piVar7 = *piVar7 + ((int)(((param_5 & 255U) * (param_14 - cVar3) + cVar3 * 256) * param_7) >> 6);
                param_7 = param_7 + param_8;
                param_5 = param_5 + param_13;
                uVar10 = uVar8;
            } while (local_34 != (int)uVar8);
        }
        param_12->field_92 = param_12->field_92 + param_12->field_128 * (int)uVar8;
        param_12->field_96 = param_12->field_96 + param_12->field_132 * (int)uVar8;
        param_12->field_88 = param_7;
        param_12->field_72 = param_5;
        return uVar8 & 4294967295;
    }

    // 0x1002a45c0, 464 bytes, placed by class name
    // WaveStream::FinaliseRamp()
    undefined8 WaveStream::FinaliseRamp() {
        uint uVar1;
        undefined8 uVar2;
        char cVar3;
        uint uVar4;
        uint uVar5;
        undefined8 in_RAX;
        undefined8 uVar6;
        uint uVar7;
        undefined8 local_28;

        local_28 = in_RAX;
        uVar6 = std::this_thread::get_id();
        uVar2 = g_idWorkerThread;
        cVar3 = std::operator==(uVar6, g_idWorkerThread);
        if (cVar3 == '\0') {
            new (&local_28) std::__thread_id();
            cVar3 = std::operator==(uVar2, local_28);
            if (cVar3 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          1171, (char*)0);
            }
        }
        uVar1 = field_80;
        uVar4 = 0;
        uVar5 = 0;
        uVar7 = 0;
        if (uVar1 != 2147483648) {
            uVar4 = GetLVol(uVar1, field_84);
            uVar5 = GetRVol(uVar1, field_84);
            uVar7 = uVar1;
        }
        uVar1 = field_88;
        if (((uVar1 == uVar7) && (field_92 == uVar4)) && (field_96 == uVar5)) {
            if (field_80 == 2147483648) {
                field_80 = 0;
                field_96 = 0;
                field_88 = 0;
                field_92 = 0;
                RemoveFromMixer();
                return 1;
            }
            SetMLRVol(this);
        } else {
            if ((int)uVar1 < (int)uVar7) {
                field_124 = 1;
                field_120 = uVar7 - uVar1;
            } else if (uVar1 - uVar7 == 0 || (int)uVar1 < (int)uVar7) {
                field_124 = 0;
            } else {
                field_124 = 4294967295;
                field_120 = uVar1 - uVar7;
            }
            uVar1 = field_92;
            uVar7 = uVar1 - uVar4;
            if ((int)uVar1 < (int)uVar4) {
                field_128 = 1;
                if ((field_120 == 0) || ((int)(uVar4 - uVar1) < (int)field_120)) {
                    field_120 = uVar4 - uVar1;
                }
            } else if (uVar7 == 0 || (int)uVar1 < (int)uVar4) {
                field_128 = 0;
            } else {
                field_128 = 4294967295;
                if ((field_120 == 0) || ((int)uVar7 < (int)field_120)) {
                    field_120 = uVar7;
                }
            }
            uVar1 = field_96;
            uVar7 = uVar1 - uVar5;
            if ((int)uVar1 < (int)uVar5) {
                field_132 = 1;
                if ((field_120 == 0) || ((int)(uVar5 - uVar1) < (int)field_120)) {
                    field_120 = uVar5 - uVar1;
                }
            } else if (uVar7 == 0 || (int)uVar1 < (int)uVar5) {
                field_132 = 0;
            } else {
                field_132 = 4294967295;
                if ((field_120 == 0) || ((int)uVar7 < (int)field_120)) {
                    field_120 = uVar7;
                }
            }
        }
        return 0;
    }

    // 0x1002a4790, 752 bytes, placed by class name
    // WaveStream::DoMixForwards1To1Stereo(int, Array<signed char, eastl::allocator>&, Array<int, eastl::allocator>&, int, int, int, int, int, int, int, WaveStream*)
    int WaveStream::DoMixForwards1To1Stereo(int param_1, Array* param_2, Array* param_3, int param_4, int param_5,
                                            int param_6, int param_7, int param_8, int param_9, int param_10,
                                            WaveStream* param_11) {
        ulong uVar1;
        long lVar2;
        char cVar3;
        int iVar4;
        char* pcVar5;
        int* piVar6;
        ulong uVar7;
        uint uVar8;
        long lVar9;
        int iVar10;
        uint uVar11;
        int iVar12;
        long lVar13;
        int iVar14;
        ulong local_38;

        uVar8 = param_4 >> 8;
        local_38 = (ulong)uVar8;
        iVar14 = param_6 * 4;
        iVar12 = param_7 * 4;
        iVar10 = (param_5 - uVar8) + (param_10 >> 8);
        if (param_9 < iVar10) {
            iVar10 = param_9;
        }
        uVar11 = param_5 * 2;
        iVar4 = iVar10 * 2 + -6;
        if ((int)uVar11 < iVar4) {
            local_38 = (ulong)(int)uVar8;
            lVar9 = (long)(int)uVar11;
            lVar13 = 0;
            do {
                pcVar5 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)param_2, local_38);
                cVar3 = *pcVar5;
                piVar6 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_3,
                                                                        lVar13 + lVar9);
                *piVar6 = *piVar6 + iVar14 * cVar3;
                piVar6 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_3,
                                                                        lVar13 + lVar9 + 1);
                *piVar6 = *piVar6 + cVar3 * iVar12;
                pcVar5 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)param_2, local_38 + 1);
                cVar3 = *pcVar5;
                piVar6 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_3,
                                                                        lVar13 + lVar9 + 2);
                *piVar6 = *piVar6 + iVar14 * cVar3;
                piVar6 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_3,
                                                                        lVar13 + lVar9 + 3);
                *piVar6 = *piVar6 + cVar3 * iVar12;
                uVar7 = local_38 + 3;
                pcVar5 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)param_2, local_38 + 2);
                cVar3 = *pcVar5;
                piVar6 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_3,
                                                                        lVar13 + lVar9 + 4);
                *piVar6 = *piVar6 + iVar14 * cVar3;
                piVar6 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_3,
                                                                        lVar13 + lVar9 + 5);
                *piVar6 = *piVar6 + cVar3 * iVar12;
                local_38 = local_38 + 4;
                pcVar5 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)param_2, uVar7);
                cVar3 = *pcVar5;
                piVar6 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_3,
                                                                        lVar13 + lVar9 + 6);
                *piVar6 = *piVar6 + iVar14 * cVar3;
                piVar6 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_3,
                                                                        lVar13 + lVar9 + 7);
                *piVar6 = *piVar6 + cVar3 * iVar12;
                lVar2 = lVar13 + lVar9;
                lVar13 = lVar13 + 8;
            } while (lVar2 + 8 < (long)iVar4);
            uVar11 = uVar11 + (int)lVar13;
        }
        uVar7 = (ulong)uVar11;
        if ((int)uVar11 < iVar10 * 2) {
            uVar7 = (ulong)(int)uVar11;
            lVar9 = uVar7 << 32;
            local_38 = (long)(int)local_38;
            do {
                uVar1 = local_38 + 1;
                pcVar5 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)param_2, local_38);
                cVar3 = *pcVar5;
                piVar6 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_3, uVar7);
                *piVar6 = *piVar6 + iVar14 * cVar3;
                uVar7 = uVar7 + 2;
                piVar6 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_3,
                                                                        lVar9 >> 32 | 1);
                *piVar6 = *piVar6 + cVar3 * iVar12;
                lVar9 = lVar9 + 8589934592;
                local_38 = uVar1;
            } while ((long)uVar7 < (long)(iVar10 * 2));
        }
        param_11->field_72 = (int)local_38 << 8;
        return (int)uVar7 >> 1;
    }

    // 0x1002a4a80, 640 bytes, placed by class name
    // WaveStream::DoMixForwards1To1Mono(Array<signed char, eastl::allocator>&, Array<int, eastl::allocator>&, int, int, int, int, int, int, WaveStream*)
    int WaveStream::DoMixForwards1To1Mono(Array* param_1, Array* param_2, int param_3, int param_4, int param_5,
                                          int param_6, int param_7, int param_8, WaveStream* param_9) {
        long lVar1;
        undefined8 uVar2;
        Array* pAVar3;
        ulong uVar4;
        char cVar5;
        undefined8 uVar6;
        char* pcVar7;
        int* piVar8;
        uint uVar9;
        int iVar10;
        int iVar11;
        ulong uVar12;
        long lVar13;
        undefined8 local_90;
        long local_88;
        long local_80;
        ulong local_78;
        ulong local_70;
        ulong local_68;
        ulong local_50;
        ulong local_48;
        int local_3c;
        int local_38;
        int local_34;

        uVar6 = std::this_thread::get_id();
        uVar2 = g_idWorkerThread;
        cVar5 = std::operator==(uVar6, g_idWorkerThread);
        if (cVar5 == '\0') {
            new (&local_90) std::__thread_id();
            cVar5 = std::operator==(uVar2, local_90);
            if (cVar5 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          1265, (char*)0);
            }
        }
        local_34 = param_3 >> 8;
        local_3c = param_5 << 2;
        uVar9 = (param_4 - local_34) + (param_8 >> 8);
        if (param_7 < (int)uVar9) {
            uVar9 = param_7;
        }
        if (param_4 < (int)(uVar9 - 3)) {
            local_88 = (long)local_34;
            local_50 = (ulong)param_4;
            local_80 = (long)(int)(uVar9 - 3);
            lVar13 = 0;
            local_78 = (ulong)uVar9;
            local_38 = param_4;
            do {
                uVar12 = local_50;
                lVar1 = local_88;
                local_48 = local_50 + lVar13;
                local_70 = local_88 + lVar13 + 1;
                pcVar7 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)param_1, local_88 + lVar13);
                iVar11 = local_3c;
                iVar10 = *pcVar7 * local_3c;
                local_68 = lVar13 + uVar12 + 1;
                piVar8 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_2, local_48);
                pAVar3 = param_1;
                *piVar8 = *piVar8 + iVar10;
                local_48 = lVar1 + lVar13 + 2;
                pcVar7 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)param_1, local_70);
                uVar12 = local_50;
                cVar5 = *pcVar7;
                local_70 = local_50 + lVar13 + 2;
                piVar8 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_2, local_68);
                *piVar8 = *piVar8 + cVar5 * iVar11;
                local_68 = lVar1 + lVar13 + 3;
                pcVar7 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)pAVar3, local_48);
                iVar11 = local_3c;
                pAVar3 = param_2;
                iVar10 = *pcVar7 * local_3c;
                local_48 = uVar12 + lVar13 + 3;
                piVar8 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_2, local_70);
                *piVar8 = *piVar8 + iVar10;
                pcVar7 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)param_1, local_68);
                cVar5 = *pcVar7;
                piVar8 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)pAVar3, local_48);
                *piVar8 = *piVar8 + cVar5 * iVar11;
                lVar1 = uVar12 + lVar13;
                lVar13 = lVar13 + 4;
            } while (lVar1 + 4 < local_80);
            param_4 = local_38 + (int)lVar13;
            local_34 = local_34 + (int)lVar13;
            uVar9 = (uint)local_78;
        }
        if (param_4 < (int)uVar9) {
            local_50 = (ulong)local_34;
            iVar11 = 0;
            uVar12 = (long)param_4;
            local_38 = param_4;
            do {
                uVar4 = local_50;
                local_50 = local_50 + 1;
                pcVar7 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)param_1, uVar4);
                iVar10 = *pcVar7 * local_3c;
                piVar8 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_2, uVar12);
                *piVar8 = *piVar8 + iVar10;
                iVar11 = iVar11 + -1;
                uVar12 = uVar12 + 1;
            } while (param_4 - uVar9 != iVar11);
            local_34 = local_34 - iVar11;
            param_4 = local_38 - iVar11;
        }
        param_9->field_72 = local_34 << 8;
        return param_4;
    }

    // 0x1002a4d00, 592 bytes, placed by class name
    // WaveStream::DoMixForwardsStereo(int, int, Array<signed char, eastl::allocator>&, Array<int, eastl::allocator>&, int, int, int, int, int, int, int, WaveStream*, int, int)
    int WaveStream::DoMixForwardsStereo(int param_1, int param_2, Array* param_3, Array* param_4, int param_5,
                                        int param_6, int param_7, int param_8, int param_9, int param_10, int param_11,
                                        WaveStream* param_12, int param_13, int param_14) {
        uint uVar1;
        undefined8 uVar2;
        Array* pAVar3;
        char cVar4;
        int iVar5;
        int iVar6;
        undefined8 uVar7;
        char* pcVar8;
        int* piVar9;
        ulong uVar10;
        long lVar11;
        undefined8 local_58;
        ulong local_40;
        long local_38;

        uVar7 = std::this_thread::get_id();
        uVar2 = g_idWorkerThread;
        cVar4 = std::operator==(uVar7, g_idWorkerThread);
        if (cVar4 == '\0') {
            new (&local_58) std::__thread_id();
            cVar4 = std::operator==(uVar2, local_58);
            if (cVar4 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          1440, (char*)0);
            }
        }
        if ((param_13 == 0) ||
            (iVar5 = ((param_11 - param_5) + param_13 + -257) / param_13 + param_6, param_10 < iVar5)) {
            iVar5 = param_10;
        }
        uVar1 = param_6 * 2;
        uVar10 = (ulong)uVar1;
        if ((int)uVar1 < iVar5 * 2) {
            uVar10 = (ulong)(int)uVar1;
            local_38 = (long)(iVar5 * 2);
            do {
                pcVar8 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)param_3, (long)(param_5 >> 8));
                cVar4 = *pcVar8;
                pcVar8 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)param_3, (long)((param_5 >> 8) + 1));
                pAVar3 = param_4;
                iVar5 = (param_5 & 255U) * ((int)*pcVar8 - (int)cVar4) + cVar4 * 256;
                local_40 = uVar10 + 1;
                piVar9 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_4, uVar10);
                *piVar9 = *piVar9 + (iVar5 * param_7 >> 6);
                uVar10 = uVar10 + 2;
                piVar9 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)pAVar3, local_40);
                *piVar9 = *piVar9 + (iVar5 * param_8 >> 6);
                param_5 = param_5 + param_13;
            } while ((long)uVar10 < local_38);
        }
        iVar5 = (int)uVar10;
        if ((param_13 == 0) || (iVar6 = (~param_5 + param_11 + param_13) / param_13 + (iVar5 >> 1), param_10 < iVar6)) {
            iVar6 = param_10;
        }
        if (iVar5 < iVar6 * 2) {
            uVar10 = (ulong)iVar5;
            local_38 = (long)(iVar6 * 2);
            lVar11 = uVar10 << 32;
            do {
                local_40 = CONCAT44(local_40._4_4_, param_5);
                pcVar8 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)param_3, (long)(param_5 >> 8));
                pAVar3 = param_4;
                iVar6 = (param_5 & 255U) * (param_14 - *pcVar8) + *pcVar8 * 256;
                piVar9 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_4, uVar10);
                *piVar9 = *piVar9 + (iVar6 * param_7 >> 6);
                uVar10 = uVar10 + 2;
                iVar5 = (int)local_40;
                piVar9 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)pAVar3,
                                                                        lVar11 >> 32 | 1);
                *piVar9 = *piVar9 + (iVar6 * param_8 >> 6);
                param_5 = iVar5 + param_13;
                lVar11 = lVar11 + 8589934592;
            } while ((long)uVar10 < local_38);
        }
        param_12->field_72 = param_5;
        return (int)uVar10 >> 1;
    }

    // 0x1002a4f50, 480 bytes, placed by class name
    // WaveStream::DoMixForwardsMono(int, int, Array<signed char, eastl::allocator>&, Array<int, eastl::allocator>&, int, int, int, int, int, int, WaveStream*, int, int)
    ulong WaveStream::DoMixForwardsMono(int param_1, int param_2, Array* param_3, Array* param_4, int param_5,
                                        int param_6, int param_7, int param_8, int param_9, int param_10,
                                        WaveStream* param_11, int param_12, int param_13) {
        char cVar1;
        undefined8 uVar2;
        uint uVar3;
        char cVar4;
        undefined8 uVar5;
        char* pcVar6;
        int* piVar7;
        int iVar8;
        int iVar9;
        uint uVar10;
        ulong uVar11;
        ulong uVar12;
        undefined8 local_50;
        int local_3c;
        Array<signed char, eastl::allocator>* local_38;

        uVar12 = (ulong)(uint)param_6;
        uVar5 = std::this_thread::get_id();
        uVar2 = g_idWorkerThread;
        cVar4 = std::operator==(uVar5, g_idWorkerThread);
        if (cVar4 == '\0') {
            new (&local_50) std::__thread_id();
            cVar4 = std::operator==(uVar2, local_50);
            if (cVar4 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          1407, (char*)0);
            }
        }
        if ((param_12 == 0) ||
            (iVar9 = ((param_10 - param_5) + param_12 + -257) / param_12 + param_6, param_9 < iVar9)) {
            iVar9 = param_9;
        }
        if (param_6 < iVar9) {
            uVar11 = (long)param_6;
            local_3c = iVar9;
            do {
                local_38 = (Array<signed char, eastl::allocator>*)CONCAT44(local_38._4_4_, param_5);
                pcVar6 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)param_3, (long)(param_5 >> 8));
                cVar4 = *pcVar6;
                pcVar6 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)param_3, (long)((param_5 >> 8) + 1));
                cVar1 = *pcVar6;
                uVar3 = (uint)local_38;
                uVar10 = (uint)local_38 & 255;
                uVar12 = uVar11 + 1;
                piVar7 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_4, uVar11);
                *piVar7 = *piVar7 + ((int)((uVar10 * ((int)cVar1 - (int)cVar4) + cVar4 * 256) * param_7) >> 6);
                param_5 = uVar3 + param_12;
                uVar11 = uVar12;
            } while (local_3c != (int)uVar12);
        }
        iVar9 = (int)uVar12;
        if ((param_12 == 0) || (iVar8 = (~param_5 + param_10 + param_12) / param_12 + iVar9, param_9 < iVar8)) {
            iVar8 = param_9;
        }
        if (iVar9 < iVar8) {
            uVar11 = (long)iVar9;
            local_38 = (Array<signed char, eastl::allocator>*)param_3;
            do {
                pcVar6 = (char*)Array<signed char, eastl::allocator>::operator[](local_38, (long)(param_5 >> 8));
                cVar4 = *pcVar6;
                uVar12 = uVar11 + 1;
                piVar7 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_4, uVar11);
                *piVar7 = *piVar7 + ((int)(((param_5 & 255U) * (param_13 - cVar4) + cVar4 * 256) * param_7) >> 6);
                param_5 = param_5 + param_12;
                uVar11 = uVar12;
            } while (iVar8 != (int)uVar12);
        }
        param_11->field_72 = param_5;
        return uVar12 & 4294967295;
    }

    // 0x1002a5130, 1216 bytes, placed by class name
    // WaveStream::DoMixBackwards1To1RampStereo(int, Array<signed char, eastl::allocator>&, Array<int, eastl::allocator>&, int, int, int, int, int, int, int, int, int, WaveStream*)
    int WaveStream::DoMixBackwards1To1RampStereo(int param_1, Array* param_2, Array* param_3, int param_4, int param_5,
                                                 int param_6, int param_7, int param_8, int param_9, int param_10,
                                                 int param_11, int param_12, WaveStream* param_13) {
        long lVar1;
        uint uVar2;
        undefined8 uVar3;
        Array* pAVar4;
        ulong uVar5;
        char cVar6;
        undefined8 uVar7;
        char* pcVar8;
        int* piVar9;
        ulong uVar10;
        int iVar11;
        long lVar12;
        int iVar13;
        uint uVar14;
        undefined4 in_register_00000084;
        int iVar15;
        ulong uVar16;
        int iVar17;
        ulong uVar18;
        undefined8 local_f0;
        ulong local_e8;
        ulong local_e0;
        long local_d8;
        ulong local_d0;
        ulong local_c8;
        long local_c0;
        int local_b4;
        int local_b0;
        int local_ac;
        long local_a8;
        long local_a0;
        ulong local_98;
        ulong local_90;
        ulong local_88;
        ulong local_80;
        ulong local_70;
        ulong local_68;
        ulong local_60;
        ulong local_58;
        ulong local_48;
        ulong local_40;
        ulong local_38;

        local_80 = CONCAT44(in_register_00000084, param_5);
        uVar7 = std::this_thread::get_id();
        uVar3 = g_idWorkerThread;
        cVar6 = std::operator==(uVar7, g_idWorkerThread);
        if (cVar6 == '\0') {
            new (&local_f0) std::__thread_id();
            cVar6 = std::operator==(uVar3, local_f0);
            if (cVar6 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          1688, (char*)0);
            }
        }
        uVar14 = param_4 >> 8;
        local_98 = (ulong)uVar14;
        uVar18 = (ulong)(uint)(param_6 << 2);
        uVar16 = (ulong)(uint)(param_7 << 2);
        iVar13 = (int)local_80;
        iVar11 = ((iVar13 + uVar14) - (param_12 >> 8)) + 1;
        if (param_11 < iVar11) {
            iVar11 = param_11;
        }
        iVar15 = iVar11 * 2 + -6;
        local_68 = (ulong)(uint)(param_8 * 4);
        param_13->field_88 = param_13->field_88 + (iVar11 - iVar13) * param_13->field_124;
        local_70 = (ulong)(uint)(param_9 * 4);
        uVar2 = iVar13 * 2;
        uVar10 = (ulong)uVar2;
        iVar13 = iVar11 * 2;
        if ((int)uVar2 < iVar15) {
            local_a0 = (long)(int)uVar14;
            local_c0 = (long)(int)uVar2;
            local_d8 = (long)iVar15;
            local_b4 = param_8 * 12;
            local_d0 = (ulong)(uint)(param_8 << 3);
            local_b0 = param_9 * 12;
            local_c8 = (ulong)(uint)(param_9 << 3);
            lVar12 = 0;
            local_38 = 0;
            local_ac = iVar11 * 2;
            local_80 = uVar10;
            do {
                lVar1 = local_c0;
                local_48 = local_38 + local_c0;
                local_60 = (local_a0 + lVar12) - 1;
                local_a8 = lVar12;
                pcVar8 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)param_2, local_a0 + lVar12);
                cVar6 = *pcVar8;
                local_40 = local_38 + lVar1 + 1;
                local_58 = uVar18;
                piVar9 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_3, local_48);
                *piVar9 = *piVar9 + (int)uVar18 * (int)cVar6;
                iVar11 = (int)uVar18 + (int)local_68;
                iVar15 = (int)uVar16;
                local_90 = local_38 + lVar1 + 2;
                piVar9 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_3, local_40);
                *piVar9 = *piVar9 + cVar6 * iVar15;
                local_48 = local_a0 + -2 + local_a8;
                local_40._0_4_ = (int)local_70 + iVar15;
                pcVar8 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)param_2, local_60);
                pAVar4 = param_3;
                cVar6 = *pcVar8;
                local_e0 = local_38 + lVar1 + 3;
                piVar9 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_3, local_90);
                iVar13 = (int)local_40;
                lVar1 = local_c0;
                *piVar9 = *piVar9 + iVar11 * cVar6;
                local_88 = CONCAT44(local_88._4_4_, (int)local_d0 + (int)local_58);
                iVar17 = cVar6 * (int)local_40;
                local_e8 = local_38 + local_c0 + 4;
                local_60._0_4_ = iVar11 + (int)local_68;
                piVar9 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)pAVar4, local_e0);
                *piVar9 = *piVar9 + iVar17;
                local_40._0_4_ = iVar13 + (int)local_70;
                iVar13 = (int)local_c8;
                local_90 = local_a0 + -3 + local_a8;
                pcVar8 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)param_2, local_48);
                pAVar4 = param_3;
                local_48 = CONCAT44(local_48._4_4_, (int)*pcVar8);
                iVar11 = (int)local_88 * *pcVar8;
                local_88 = local_38 + lVar1 + 5;
                piVar9 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_3, local_e8);
                *piVar9 = *piVar9 + iVar11;
                local_60 = CONCAT44(local_60._4_4_, (int)local_60 + (int)local_68);
                local_58 = (ulong)(uint)((int)local_58 + local_b4);
                iVar13 = (iVar13 + iVar15) * (int)local_48;
                local_48 = local_38 + lVar1 + 6;
                piVar9 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)pAVar4, local_88);
                *piVar9 = *piVar9 + iVar13;
                local_40 = CONCAT44(local_40._4_4_, (int)local_40 + (int)local_70);
                iVar15 = iVar15 + local_b0;
                pcVar8 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)param_2, local_90);
                cVar6 = *pcVar8;
                iVar13 = (int)local_58;
                local_58 = local_38 + lVar1 + 7;
                piVar9 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)pAVar4, local_48);
                *piVar9 = *piVar9 + iVar13 * cVar6;
                uVar18 = (ulong)(uint)((int)local_60 + (int)local_68);
                piVar9 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_3, local_58);
                *piVar9 = *piVar9 + iVar15 * cVar6;
                uVar16 = (ulong)(uint)((int)local_40 + (int)local_70);
                lVar1 = lVar1 + local_38;
                local_38 = local_38 + 8;
                lVar12 = local_a8 + -4;
            } while (lVar1 + 8 < local_d8);
            uVar10 = (ulong)(uint)((int)local_80 + (int)local_38);
            local_98 = (ulong)(uint)((int)local_98 + (int)lVar12);
            iVar13 = local_ac;
        }
        uVar14 = (uint)uVar18;
        if ((int)uVar10 < iVar13) {
            local_98 = (ulong)(int)local_98;
            uVar10 = (ulong)(int)uVar10;
            local_40 = (ulong)iVar13;
            lVar12 = uVar10 << 32;
            do {
                uVar5 = local_98;
                local_98 = local_98 - 1;
                local_38 = uVar16;
                pcVar8 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)param_2, uVar5);
                cVar6 = *pcVar8;
                piVar9 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_3, uVar10);
                *piVar9 = *piVar9 + (int)uVar18 * (int)cVar6;
                uVar14 = (int)uVar18 + (int)local_68;
                uVar18 = (ulong)uVar14;
                iVar13 = (int)local_38;
                uVar10 = uVar10 + 2;
                piVar9 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_3,
                                                                        lVar12 >> 32 | 1);
                *piVar9 = *piVar9 + cVar6 * iVar13;
                uVar16 = (ulong)(uint)(iVar13 + (int)local_70);
                lVar12 = lVar12 + 8589934592;
            } while ((long)uVar10 < (long)local_40);
        }
        param_13->field_92 = (int)uVar14 >> 2;
        param_13->field_96 = (int)uVar16 >> 2;
        param_13->field_72 = (int)local_98 << 8;
        return (int)uVar10 >> 1;
    }

    // 0x1002a55f0, 720 bytes, placed by class name
    // WaveStream::DoMixBackwards1To1RampMono(Array<signed char, eastl::allocator>&, Array<int, eastl::allocator>&, int, int, int, int, int, int, int, WaveStream*)
    ulong WaveStream::DoMixBackwards1To1RampMono(Array* param_1, Array* param_2, int param_3, int param_4, int param_5,
                                                 int param_6, int param_7, int param_8, int param_9,
                                                 WaveStream* param_10) {
        undefined8 uVar1;
        Array* pAVar2;
        char cVar3;
        undefined8 uVar4;
        char* pcVar5;
        int* piVar6;
        long lVar7;
        undefined4 in_register_0000000c;
        uint uVar8;
        int iVar9;
        uint uVar10;
        ulong uVar11;
        int iVar12;
        int iVar13;
        ulong uVar14;
        ulong uVar15;
        ulong uVar16;
        long lVar17;
        undefined8 local_a8;
        ulong local_a0;
        long local_98;
        ulong local_90;
        ulong local_88;
        ulong local_80;
        ulong local_78;
        int local_70;
        int local_6c;
        long local_68;
        ulong local_60;
        ulong local_58;
        ulong local_40;
        ulong local_38;

        local_78 = CONCAT44(in_register_0000000c, param_4);
        uVar4 = std::this_thread::get_id();
        uVar1 = g_idWorkerThread;
        cVar3 = std::operator==(uVar4, g_idWorkerThread);
        if (cVar3 == '\0') {
            new (&local_a8) std::__thread_id();
            cVar3 = std::operator==(uVar1, local_a8);
            if (cVar3 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          1650, (char*)0);
            }
        }
        uVar8 = param_3 >> 8;
        uVar15 = (ulong)uVar8;
        iVar12 = param_5 << 2;
        iVar9 = (int)local_78;
        uVar10 = ((iVar9 + uVar8) - (param_9 >> 8)) + 1;
        if (param_8 < (int)uVar10) {
            uVar10 = param_8;
        }
        local_80 = (ulong)uVar10;
        param_10->field_92 = param_10->field_92 + param_10->field_128 * (uVar10 - iVar9);
        param_10->field_96 = param_10->field_96 + (uVar10 - iVar9) * param_10->field_132;
        local_40 = (ulong)(uint)(param_6 * 4);
        uVar11 = local_78;
        if (iVar9 < (int)(uVar10 - 3)) {
            local_68 = (long)iVar9;
            local_98 = (long)(int)(uVar10 - 3);
            uVar11 = (long)(int)uVar8 - 1;
            local_6c = param_6 * 12;
            local_90 = (ulong)(uint)(param_6 << 3);
            lVar17 = 0;
            local_88 = uVar15;
            do {
                pAVar2 = param_1;
                lVar7 = local_68;
                local_38 = lVar17 + local_68;
                local_58 = uVar11;
                pcVar5 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)param_1, uVar11 + 1);
                cVar3 = *pcVar5;
                local_60 = lVar17 + lVar7 + 1;
                piVar6 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_2, local_38);
                *piVar6 = *piVar6 + cVar3 * iVar12;
                iVar13 = iVar12 + (int)local_40;
                local_38 = local_58 - 1;
                pcVar5 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)pAVar2, local_58);
                lVar7 = local_68;
                cVar3 = *pcVar5;
                local_a0 = local_68 + lVar17 + 2;
                piVar6 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_2, local_60);
                *piVar6 = *piVar6 + cVar3 * iVar13;
                iVar13 = iVar13 + (int)local_40;
                local_70 = (int)local_90 + iVar12;
                local_60 = local_58 - 2;
                pcVar5 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)param_1, local_38);
                pAVar2 = param_2;
                iVar9 = *pcVar5 * local_70;
                local_38 = lVar7 + lVar17 + 3;
                piVar6 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_2, local_a0);
                *piVar6 = *piVar6 + iVar9;
                iVar13 = iVar13 + (int)local_40;
                iVar12 = iVar12 + local_6c;
                pcVar5 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)param_1, local_60);
                cVar3 = *pcVar5;
                piVar6 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)pAVar2, local_38);
                *piVar6 = *piVar6 + cVar3 * iVar12;
                iVar12 = iVar13 + (int)local_40;
                lVar7 = local_68 + lVar17;
                lVar17 = lVar17 + 4;
                uVar11 = local_58 - 4;
            } while (lVar7 + 4 < local_98);
            uVar11 = (ulong)(uint)((int)local_78 + (int)lVar17);
            uVar15 = (ulong)(uint)((int)local_88 - (int)lVar17);
            uVar10 = (uint)local_80;
        }
        if ((int)uVar11 < (int)uVar10) {
            uVar14 = (long)(int)uVar15;
            uVar16 = (long)(int)uVar11;
            do {
                uVar15 = uVar14 - 1;
                pcVar5 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)param_1, uVar14);
                cVar3 = *pcVar5;
                uVar11 = uVar16 + 1;
                piVar6 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_2, uVar16);
                *piVar6 = *piVar6 + cVar3 * iVar12;
                iVar12 = iVar12 + (int)local_40;
                uVar14 = uVar15;
                uVar16 = uVar11;
            } while ((int)local_80 != (int)uVar11);
        }
        param_10->field_88 = iVar12 >> 2;
        param_10->field_72 = (int)uVar15 << 8;
        return uVar11 & 4294967295;
    }

    // 0x1002a58c0, 672 bytes, placed by class name
    // WaveStream::DoMixBackwardsRampStereo(int, int, Array<signed char, eastl::allocator>&, Array<int, eastl::allocator>&, int, int, int, int, int, int, int, int, int, WaveStream*, int, int)
    void WaveStream::DoMixBackwardsRampStereo(int param_1, int param_2, Array* param_3, Array* param_4, int param_5,
                                              int param_6, int param_7, int param_8, int param_9, int param_10,
                                              int param_11, int param_12, int param_13, WaveStream* param_14,
                                              int param_15, int param_16) {
        ulong uVar1;
        uint uVar2;
        undefined8 uVar3;
        uint uVar4;
        char cVar5;
        int iVar6;
        undefined8 uVar7;
        char* pcVar8;
        int* piVar9;
        ulong uVar10;
        int iVar11;
        long lVar12;
        undefined8 local_68;
        long local_60;
        undefined8 local_50;
        uint local_3c;
        uint local_38;
        uint local_34;

        uVar7 = std::this_thread::get_id();
        uVar3 = g_idWorkerThread;
        cVar5 = std::operator==(uVar7, g_idWorkerThread);
        if (cVar5 == '\0') {
            new (&local_68) std::__thread_id();
            cVar5 = std::operator==(uVar3, local_68);
            if (cVar5 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          1876, (char*)0);
            }
        }
        param_14->field_88 = param_14->field_88 - param_14->field_124 * param_6;
        if ((param_15 == 0) ||
            (iVar6 = ((param_13 - param_5) + param_15 + 256) / param_15 + param_6, param_12 < iVar6)) {
            iVar6 = param_12;
        }
        local_34 = param_7;
        uVar2 = param_6 * 2;
        uVar10 = (ulong)uVar2;
        local_38 = param_5;
        local_3c = param_8;
        if ((int)uVar2 < iVar6 * 2) {
            uVar10 = (ulong)(int)uVar2;
            local_50 = (long)(iVar6 * 2);
            do {
                local_3c = param_8;
                local_38 = param_5;
                pcVar8 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)param_3, (long)((param_5 >> 8) + -1));
                cVar5 = *pcVar8;
                pcVar8 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)param_3, (long)(param_5 >> 8));
                uVar4 = local_34;
                iVar6 = (local_38 & 255) * ((int)*pcVar8 - (int)cVar5) + cVar5 * 256;
                iVar11 = iVar6 * local_34;
                uVar1 = uVar10 + 1;
                piVar9 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_4, uVar10);
                uVar2 = local_38;
                *piVar9 = *piVar9 + (iVar11 >> 6);
                local_34 = uVar4 + param_9;
                iVar6 = iVar6 * local_3c;
                uVar10 = uVar10 + 2;
                piVar9 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_4, uVar1);
                *piVar9 = *piVar9 + (iVar6 >> 6);
                param_8 = local_3c + param_10;
                param_5 = uVar2 + param_15;
                local_38 = param_5;
                local_3c = param_8;
            } while ((long)uVar10 < local_50);
        }
        uVar1 = (ulong)local_50 >> 32;
        iVar6 = (int)uVar10;
        if ((param_15 == 0) ||
            (iVar11 = (int)((param_13 + param_15) - local_38) / param_15 + (iVar6 >> 1), param_12 < iVar11)) {
            iVar11 = param_12;
        }
        if (iVar6 < iVar11 * 2) {
            local_50 = CONCAT44((int)uVar1, param_16 << 8);
            uVar10 = (ulong)iVar6;
            local_60 = (long)(iVar11 * 2);
            lVar12 = uVar10 << 32;
            do {
                pcVar8 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)param_3, (long)((int)local_38 >> 8));
                uVar4 = local_34;
                iVar11 = (local_38 & 255) * (*pcVar8 - param_16) + (int)local_50;
                iVar6 = iVar11 * local_34;
                piVar9 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_4, uVar10);
                uVar2 = local_3c;
                *piVar9 = *piVar9 + (iVar6 >> 6);
                local_34 = uVar4 + param_9;
                iVar11 = iVar11 * local_3c;
                uVar10 = uVar10 + 2;
                piVar9 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_4,
                                                                        lVar12 >> 32 | 1);
                *piVar9 = *piVar9 + (iVar11 >> 6);
                local_3c = uVar2 + param_10;
                local_38 = local_38 + param_15;
                lVar12 = lVar12 + 8589934592;
            } while ((long)uVar10 < local_60);
        }
        param_14->field_88 = param_14->field_88 + param_14->field_124 * ((int)uVar10 >> 1);
        param_14->field_92 = local_34;
        param_14->field_96 = local_3c;
        param_14->field_72 = local_38;
    }

    // 0x1002a5b60, 544 bytes, placed by class name
    // WaveStream::DoMixBackwardsRampMono(int, int, Array<signed char, eastl::allocator>&, Array<int, eastl::allocator>&, int, int, int, int, int, int, int, WaveStream*, int, int)
    ulong WaveStream::DoMixBackwardsRampMono(int param_1, int param_2, Array* param_3, Array* param_4, int param_5,
                                             int param_6, int param_7, int param_8, int param_9, int param_10,
                                             int param_11, WaveStream* param_12, int param_13, int param_14) {
        char cVar1;
        undefined8 uVar2;
        char cVar3;
        int iVar4;
        undefined8 uVar5;
        char* pcVar6;
        int* piVar7;
        ulong uVar8;
        uint uVar9;
        ulong uVar10;
        undefined8 local_60;
        int local_44;
        ulong local_40;
        uint local_34;

        uVar8 = (ulong)(uint)param_6;
        uVar5 = std::this_thread::get_id();
        uVar2 = g_idWorkerThread;
        cVar3 = std::operator==(uVar5, g_idWorkerThread);
        if (cVar3 == '\0') {
            new (&local_60) std::__thread_id();
            cVar3 = std::operator==(uVar2, local_60);
            if (cVar3 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          1835, (char*)0);
            }
        }
        param_12->field_92 = param_12->field_92 - param_12->field_128 * param_6;
        param_12->field_96 = param_12->field_96 - param_12->field_132 * param_6;
        if ((param_13 == 0) ||
            (iVar4 = ((param_11 - param_5) + param_13 + 256) / param_13 + param_6, param_10 < iVar4)) {
            iVar4 = param_10;
        }
        if (param_6 < iVar4) {
            uVar8 = (ulong)param_6;
            local_44 = iVar4;
            do {
                local_40 = uVar8;
                local_34 = param_5;
                pcVar6 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)param_3, (long)((param_5 >> 8) + -1));
                cVar3 = *pcVar6;
                pcVar6 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)param_3, (long)(param_5 >> 8));
                cVar1 = *pcVar6;
                uVar9 = local_34 & 255;
                uVar8 = local_40 + 1;
                piVar7 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_4, local_40);
                *piVar7 = *piVar7 + ((int)((uVar9 * ((int)cVar1 - (int)cVar3) + cVar3 * 256) * param_7) >> 6);
                param_7 = param_7 + param_8;
                param_5 = local_34 + param_13;
            } while (local_44 != (int)uVar8);
        }
        iVar4 = (int)uVar8;
        if ((param_13 == 0) ||
            (local_34 = ((param_11 + param_13) - param_5) / param_13 + iVar4, param_10 < (int)local_34)) {
            local_34 = param_10;
        }
        if (iVar4 < (int)local_34) {
            local_40 = CONCAT44(local_40._4_4_, param_14 << 8);
            uVar10 = (long)iVar4;
            do {
                pcVar6 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)param_3, (long)(param_5 >> 8));
                iVar4 = (param_5 & 255U) * (*pcVar6 - param_14) + (int)local_40;
                uVar8 = uVar10 + 1;
                piVar7 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_4, uVar10);
                *piVar7 = *piVar7 + (iVar4 * param_7 >> 6);
                param_7 = param_7 + param_8;
                param_5 = param_5 + param_13;
                uVar10 = uVar8;
            } while (local_34 != (int)uVar8);
        }
        param_12->field_92 = param_12->field_92 + param_12->field_128 * (int)uVar8;
        param_12->field_96 = param_12->field_96 + param_12->field_132 * (int)uVar8;
        param_12->field_88 = param_7;
        param_12->field_72 = param_5;
        return uVar8 & 4294967295;
    }

    // 0x1002a5d80, 816 bytes, placed by class name
    // WaveStream::DoMixBackwards1To1Stereo(int, Array<signed char, eastl::allocator>&, Array<int, eastl::allocator>&, int, int, int, int, int, int, int, WaveStream*)
    int WaveStream::DoMixBackwards1To1Stereo(int param_1, Array* param_2, Array* param_3, int param_4, int param_5,
                                             int param_6, int param_7, int param_8, int param_9, int param_10,
                                             WaveStream* param_11) {
        long lVar1;
        uint uVar2;
        undefined8 uVar3;
        Array* pAVar4;
        ulong uVar5;
        char cVar6;
        int iVar7;
        undefined8 uVar8;
        char* pcVar9;
        int* piVar10;
        int iVar11;
        int iVar12;
        ulong uVar13;
        uint uVar14;
        long lVar15;
        undefined8 local_98;
        long local_90;
        ulong local_88;
        int local_74;
        ulong local_70;
        ulong local_68;
        long local_60;
        ulong local_50;
        ulong local_48;
        ulong local_40;
        int local_38;
        int local_34;

        uVar8 = std::this_thread::get_id();
        uVar3 = g_idWorkerThread;
        cVar6 = std::operator==(uVar8, g_idWorkerThread);
        if (cVar6 == '\0') {
            new (&local_98) std::__thread_id();
            cVar6 = std::operator==(uVar3, local_98);
            if (cVar6 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          1365, (char*)0);
            }
        }
        pAVar4 = param_3;
        uVar14 = param_4 >> 8;
        local_48 = (ulong)uVar14;
        local_38 = param_6 << 2;
        local_34 = param_7 << 2;
        iVar11 = ((param_5 + uVar14) - (param_10 >> 8)) + 1;
        if (param_9 < iVar11) {
            iVar11 = param_9;
        }
        uVar2 = param_5 * 2;
        uVar13 = (ulong)uVar2;
        iVar7 = iVar11 * 2 + -6;
        iVar12 = iVar11 * 2;
        if ((int)uVar2 < iVar7) {
            local_48 = (ulong)(int)uVar14;
            local_60 = (long)(int)uVar2;
            local_90 = (long)iVar7;
            lVar15 = 0;
            local_88 = uVar13;
            local_74 = iVar11 * 2;
            do {
                lVar1 = local_60;
                local_50 = local_60 + lVar15;
                local_40 = local_48 - 1;
                pcVar9 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)param_2, local_48);
                cVar6 = *pcVar9;
                iVar11 = local_38 * cVar6;
                local_68 = lVar1 + lVar15 + 1;
                piVar10 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)pAVar4, local_50);
                *piVar10 = *piVar10 + iVar11;
                iVar11 = cVar6 * local_34;
                local_70 = lVar1 + lVar15 + 2;
                piVar10 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)pAVar4, local_68);
                *piVar10 = *piVar10 + iVar11;
                local_50 = local_48 - 2;
                pcVar9 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)param_2, local_40);
                lVar1 = local_60;
                cVar6 = *pcVar9;
                iVar11 = local_38 * cVar6;
                local_40 = local_60 + lVar15 + 3;
                piVar10 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)pAVar4, local_70);
                *piVar10 = *piVar10 + iVar11;
                iVar11 = cVar6 * local_34;
                local_70 = lVar1 + lVar15 + 4;
                piVar10 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)pAVar4, local_40);
                *piVar10 = *piVar10 + iVar11;
                local_40 = local_48 - 3;
                pcVar9 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)param_2, local_50);
                cVar6 = *pcVar9;
                iVar11 = local_38 * cVar6;
                local_68 = lVar1 + lVar15 + 5;
                piVar10 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)pAVar4, local_70);
                *piVar10 = *piVar10 + iVar11;
                iVar11 = cVar6 * local_34;
                local_50 = lVar1 + lVar15 + 6;
                piVar10 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)pAVar4, local_68);
                *piVar10 = *piVar10 + iVar11;
                local_48 = local_48 - 4;
                pcVar9 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)param_2, local_40);
                cVar6 = *pcVar9;
                iVar11 = local_38 * cVar6;
                local_40 = lVar1 + lVar15 + 7;
                piVar10 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)pAVar4, local_50);
                *piVar10 = *piVar10 + iVar11;
                iVar11 = cVar6 * local_34;
                piVar10 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)pAVar4, local_40);
                *piVar10 = *piVar10 + iVar11;
                lVar1 = lVar1 + lVar15;
                lVar15 = lVar15 + 8;
            } while (lVar1 + 8 < local_90);
            uVar13 = (ulong)(uint)((int)local_88 + (int)lVar15);
            iVar12 = local_74;
        }
        pAVar4 = param_3;
        if ((int)uVar13 < iVar12) {
            local_48 = (ulong)(int)local_48;
            uVar13 = (ulong)(int)uVar13;
            local_60 = (long)iVar12;
            lVar15 = uVar13 << 32;
            do {
                uVar5 = local_48;
                local_48 = local_48 - 1;
                pcVar9 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)param_2, uVar5);
                cVar6 = *pcVar9;
                iVar11 = local_38 * cVar6;
                piVar10 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)pAVar4, uVar13);
                *piVar10 = *piVar10 + iVar11;
                iVar11 = cVar6 * local_34;
                uVar13 = uVar13 + 2;
                piVar10 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)pAVar4,
                                                                         lVar15 >> 32 | 1);
                *piVar10 = *piVar10 + iVar11;
                lVar15 = lVar15 + 8589934592;
            } while ((long)uVar13 < local_60);
        }
        param_11->field_72 = (int)local_48 << 8;
        return (int)uVar13 >> 1;
    }

    // 0x1002a60b0, 592 bytes, placed by class name
    // WaveStream::DoMixBackwards1To1Mono(Array<signed char, eastl::allocator>&, Array<int, eastl::allocator>&, int, int, int, int, int, int, WaveStream*)
    ulong WaveStream::DoMixBackwards1To1Mono(Array* param_1, Array* param_2, int param_3, int param_4, int param_5,
                                             int param_6, int param_7, int param_8, WaveStream* param_9) {
        long lVar1;
        undefined8 uVar2;
        Array* pAVar3;
        char cVar4;
        undefined8 uVar5;
        char* pcVar6;
        int* piVar7;
        undefined4 in_register_0000000c;
        uint uVar8;
        int iVar9;
        uint uVar10;
        ulong uVar11;
        ulong uVar12;
        ulong uVar13;
        long lVar14;
        ulong uVar15;
        undefined8 local_98;
        ulong local_90;
        ulong local_88;
        long local_80;
        ulong local_78;
        ulong local_70;
        long local_68;
        ulong local_60;
        ulong local_58;
        ulong local_50;
        int local_34;

        local_60 = CONCAT44(in_register_0000000c, param_4);
        local_34 = param_5;
        uVar5 = std::this_thread::get_id();
        uVar2 = g_idWorkerThread;
        cVar4 = std::operator==(uVar5, g_idWorkerThread);
        if (cVar4 == '\0') {
            new (&local_98) std::__thread_id();
            cVar4 = std::operator==(uVar2, local_98);
            if (cVar4 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          1336, (char*)0);
            }
        }
        uVar10 = param_3 >> 8;
        uVar12 = (ulong)uVar10;
        local_34 = local_34 << 2;
        iVar9 = (int)local_60;
        uVar8 = ((iVar9 + uVar10) - (param_8 >> 8)) + 1;
        if (param_7 < (int)uVar8) {
            uVar8 = param_7;
        }
        uVar13 = local_60;
        if (iVar9 < (int)(uVar8 - 3)) {
            uVar13 = (ulong)(int)uVar10;
            local_68 = (long)iVar9;
            local_80 = (long)(int)(uVar8 - 3);
            lVar14 = 0;
            local_78 = uVar12;
            local_70 = (ulong)uVar8;
            do {
                lVar1 = local_68;
                uVar12 = local_68 + lVar14;
                local_58 = uVar13 - 1;
                pcVar6 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)param_1, uVar13);
                iVar9 = *pcVar6 * local_34;
                local_50 = lVar1 + lVar14 + 1;
                piVar7 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_2, uVar12);
                pAVar3 = param_1;
                *piVar7 = *piVar7 + iVar9;
                local_90 = uVar13 - 2;
                pcVar6 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)param_1, local_58);
                lVar1 = local_68;
                iVar9 = *pcVar6 * local_34;
                local_88 = local_68 + lVar14 + 2;
                piVar7 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_2, local_50);
                *piVar7 = *piVar7 + iVar9;
                local_58 = uVar13 - 3;
                pcVar6 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)pAVar3, local_90);
                pAVar3 = param_2;
                iVar9 = *pcVar6 * local_34;
                local_50 = lVar1 + lVar14 + 3;
                piVar7 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_2, local_88);
                *piVar7 = *piVar7 + iVar9;
                uVar13 = uVar13 - 4;
                pcVar6 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)param_1, local_58);
                iVar9 = *pcVar6 * local_34;
                piVar7 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)pAVar3, local_50);
                *piVar7 = *piVar7 + iVar9;
                lVar1 = lVar1 + lVar14;
                lVar14 = lVar14 + 4;
            } while (lVar1 + 4 < local_80);
            uVar13 = (ulong)(uint)((int)local_60 + (int)lVar14);
            uVar12 = (ulong)(uint)((int)local_78 - (int)lVar14);
            uVar8 = (uint)local_70;
        }
        if ((int)uVar13 < (int)uVar8) {
            uVar11 = (long)(int)uVar12;
            uVar15 = (long)(int)uVar13;
            do {
                uVar12 = uVar11 - 1;
                pcVar6 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)param_1, uVar11);
                iVar9 = *pcVar6 * local_34;
                uVar13 = uVar15 + 1;
                piVar7 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_2, uVar15);
                *piVar7 = *piVar7 + iVar9;
                uVar11 = uVar12;
                uVar15 = uVar13;
            } while (uVar8 != (uint)uVar13);
        }
        param_9->field_72 = (int)uVar12 << 8;
        return uVar13 & 4294967295;
    }

    // 0x1002a6300, 608 bytes, placed by class name
    // WaveStream::DoMixBackwardsStereo(int, int, Array<signed char, eastl::allocator>&, Array<int, eastl::allocator>&, int, int, int, int, int, int, int, WaveStream*, int, int)
    int WaveStream::DoMixBackwardsStereo(int param_1, int param_2, Array* param_3, Array* param_4, int param_5,
                                         int param_6, int param_7, int param_8, int param_9, int param_10, int param_11,
                                         WaveStream* param_12, int param_13, int param_14) {
        uint uVar1;
        undefined8 uVar2;
        ulong uVar3;
        char cVar4;
        int iVar5;
        int iVar6;
        undefined8 uVar7;
        char* pcVar8;
        int* piVar9;
        ulong uVar10;
        Array<signed char, eastl::allocator>* pAVar11;
        long lVar12;
        undefined8 local_60;
        long local_58;
        ulong local_40;
        long local_38;

        uVar7 = std::this_thread::get_id();
        uVar2 = g_idWorkerThread;
        cVar4 = std::operator==(uVar7, g_idWorkerThread);
        if (cVar4 == '\0') {
            new (&local_60) std::__thread_id();
            cVar4 = std::operator==(uVar2, local_60);
            if (cVar4 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          1515, (char*)0);
            }
        }
        if ((param_13 == 0) ||
            (iVar5 = ((param_11 - param_5) + param_13 + 256) / param_13 + param_6, param_10 < iVar5)) {
            iVar5 = param_10;
        }
        uVar1 = param_6 * 2;
        uVar10 = (ulong)uVar1;
        if ((int)uVar1 < iVar5 * 2) {
            uVar10 = (ulong)(int)uVar1;
            local_38 = (long)(iVar5 * 2);
            do {
                pAVar11 = (Array<signed char, eastl::allocator>*)param_3;
                local_40 = uVar10;
                pcVar8 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)param_3, (long)((param_5 >> 8) + -1));
                uVar3 = local_40;
                cVar4 = *pcVar8;
                pcVar8 = (char*)Array<signed char, eastl::allocator>::operator[](pAVar11, (long)(param_5 >> 8));
                iVar5 = (param_5 & 255U) * ((int)*pcVar8 - (int)cVar4) + cVar4 * 256;
                piVar9 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_4, uVar3);
                *piVar9 = *piVar9 + (iVar5 * param_7 >> 6);
                uVar10 = uVar3 + 2;
                piVar9 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_4, uVar3 + 1);
                *piVar9 = *piVar9 + (iVar5 * param_8 >> 6);
                param_5 = param_5 + param_13;
            } while ((long)uVar10 < local_38);
        }
        iVar5 = (int)uVar10;
        if ((param_13 == 0) ||
            (iVar6 = ((param_11 + param_13) - param_5) / param_13 + (iVar5 >> 1), param_10 < iVar6)) {
            iVar6 = param_10;
        }
        if (iVar5 < iVar6 * 2) {
            local_38 = CONCAT44(local_38._4_4_, param_14 << 8);
            uVar10 = (ulong)iVar5;
            local_58 = (long)(iVar6 * 2);
            lVar12 = uVar10 << 32;
            pAVar11 = (Array<signed char, eastl::allocator>*)param_3;
            do {
                local_40 = CONCAT44(local_40._4_4_, param_5);
                pcVar8 = (char*)Array<signed char, eastl::allocator>::operator[](pAVar11, (long)(param_5 >> 8));
                iVar6 = (param_5 & 255U) * (*pcVar8 - param_14) + (int)local_38;
                piVar9 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_4, uVar10);
                pAVar11 = (Array<signed char, eastl::allocator>*)param_3;
                *piVar9 = *piVar9 + (iVar6 * param_7 >> 6);
                iVar5 = (int)local_40;
                uVar10 = uVar10 + 2;
                piVar9 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_4,
                                                                        lVar12 >> 32 | 1);
                *piVar9 = *piVar9 + (iVar6 * param_8 >> 6);
                param_5 = iVar5 + param_13;
                lVar12 = lVar12 + 8589934592;
            } while ((long)uVar10 < local_58);
        }
        param_12->field_72 = param_5;
        return (int)uVar10 >> 1;
    }

    // 0x1002a6560, 464 bytes, placed by class name
    // WaveStream::DoMixBackwardsMono(int, int, Array<signed char, eastl::allocator>&, Array<int, eastl::allocator>&, int, int, int, int, int, int, WaveStream*, int, int)
    ulong WaveStream::DoMixBackwardsMono(int param_1, int param_2, Array* param_3, Array* param_4, int param_5,
                                         int param_6, int param_7, int param_8, int param_9, int param_10,
                                         WaveStream* param_11, int param_12, int param_13) {
        char cVar1;
        undefined8 uVar2;
        uint uVar3;
        char cVar4;
        undefined8 uVar5;
        char* pcVar6;
        int* piVar7;
        int iVar8;
        ulong uVar9;
        int iVar10;
        ulong uVar11;
        undefined8 local_50;
        int local_38;
        uint local_34;

        uVar11 = (ulong)(uint)param_6;
        uVar5 = std::this_thread::get_id();
        uVar2 = g_idWorkerThread;
        cVar4 = std::operator==(uVar5, g_idWorkerThread);
        if (cVar4 == '\0') {
            new (&local_50) std::__thread_id();
            cVar4 = std::operator==(uVar2, local_50);
            if (cVar4 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          1481, (char*)0);
            }
        }
        if ((param_12 == 0) ||
            (iVar8 = ((param_10 - param_5) + param_12 + 256) / param_12 + param_6, param_9 < iVar8)) {
            iVar8 = param_9;
        }
        if (param_6 < iVar8) {
            uVar9 = (long)param_6;
            local_38 = iVar8;
            do {
                local_34 = param_5;
                pcVar6 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)param_3, (long)((param_5 >> 8) + -1));
                uVar3 = local_34;
                cVar4 = *pcVar6;
                pcVar6 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)param_3, (long)(param_5 >> 8));
                cVar1 = *pcVar6;
                uVar11 = uVar9 + 1;
                piVar7 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_4, uVar9);
                *piVar7 = *piVar7 + ((int)(((uVar3 & 255) * ((int)cVar1 - (int)cVar4) + cVar4 * 256) * param_7) >> 6);
                param_5 = uVar3 + param_12;
                uVar9 = uVar11;
            } while (local_38 != (int)uVar11);
        }
        iVar8 = (int)uVar11;
        if ((param_12 == 0) || (iVar10 = ((param_10 + param_12) - param_5) / param_12 + iVar8, param_9 < iVar10)) {
            iVar10 = param_9;
        }
        if (iVar8 < iVar10) {
            local_34 = param_13 << 8;
            uVar9 = (long)iVar8;
            do {
                pcVar6 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)param_3, (long)(param_5 >> 8));
                iVar8 = (param_5 & 255U) * (*pcVar6 - param_13) + local_34;
                uVar11 = uVar9 + 1;
                piVar7 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_4, uVar9);
                *piVar7 = *piVar7 + (iVar8 * param_7 >> 6);
                param_5 = param_5 + param_12;
                uVar9 = uVar11;
            } while (iVar10 != (int)uVar11);
        }
        param_11->field_72 = param_5;
        return uVar11 & 4294967295;
    }

} // namespace jag::oldscape::sound
