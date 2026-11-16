// libs/oldscape/jagex3/sound/wave_stream.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "wave_stream.h"

namespace jag::oldscape::sound {
    // 0x10029ddd0
    auto WaveStream::NewRatePercent(shared_ptr<Wave>& wave, int arg2, int arg3) {
        auto result;
        int arg2_00;
        WaveStream* waveStream;

        if (((wave.operator->() + 8))->empty() == '\0') {
            waveStream = (WaveStream*)operator new(136);
            arg2_00 = rateHelper(wave, arg2);
            WaveStream(waveStream, wave, arg2_00, arg3 << 6);
            result.unique_ptr<true, void>(waveStream);
        } else {
            result.unique_ptr<true, void>(wave);
        }
        return result;
    }

    // 0x10029dfb0
    auto WaveStream::NewRatePercent(shared_ptr<Wave>& wave, int arg2, int arg3, int arg4) {
        auto result;
        int arg2_00;
        WaveStream* waveStream;

        if (((wave.operator->() + 8))->empty() == '\0') {
            waveStream = (WaveStream*)operator new(136);
            arg2_00 = rateHelper(wave, arg2);
            WaveStream(waveStream, wave, arg2_00, arg3 << 6, arg4 << 6);
            result.unique_ptr<true, void>(waveStream);
        } else {
            result.unique_ptr<true, void>(wave);
        }
        return result;
    }

    // 0x10029e150
    auto WaveStream::NewRatePercentFineVolPan(shared_ptr<Wave>& wave, int arg2, int arg3, int arg4) {
        auto result;
        int arg2_00;
        WaveStream* waveStream;

        if (((wave.operator->() + 8))->empty() == '\0') {
            waveStream = (WaveStream*)operator new(136);
            arg2_00 = rateHelper(wave, arg2);
            WaveStream(waveStream, wave, arg2_00, arg3, arg4);
            result.unique_ptr<true, void>(waveStream);
        } else {
            result.unique_ptr<true, void>(wave);
        }
        return result;
    }

    // 0x10029e2e0
    auto WaveStream::NewRateRaw(shared_ptr<Wave>& wave, int arg2, int arg3) {
        auto result;
        WaveStream* waveStream;

        if (((wave.operator->() + 8))->empty() == '\0') {
            waveStream = (WaveStream*)operator new(136);
            WaveStream(waveStream, wave, arg2, arg3 << 6);
            result.unique_ptr<true, void>(waveStream);
        } else {
            result.unique_ptr<true, void>(wave);
        }
        return result;
    }

    // 0x10029e470
    auto WaveStream::NewRateRaw(shared_ptr<Wave>& wave, int arg2, int arg3, int arg4) {
        auto result;
        WaveStream* waveStream;

        if (((wave.operator->() + 8))->empty() == '\0') {
            waveStream = (WaveStream*)operator new(136);
            WaveStream(waveStream, wave, arg2, arg3 << 6, arg4 << 6);
            result.unique_ptr<true, void>(waveStream);
        } else {
            result.unique_ptr<true, void>(wave);
        }
        return result;
    }

    // 0x1002a10a0
    int WaveStream::Priority() {
        unsigned int uVar1;

        int iVar2 = (int)(field_88 * 3) >> 6;
        int iVar4 = -iVar2;
        if (iVar4 < 0) {
            iVar4 = iVar2;
        }
        long lVar3 = MyWave();
        iVar2 = ((lVar3 + 8))->end();
        if (field_104 == 0) {
            uVar1 = field_72;
            iVar2 = iVar2 << 8;
        } else {
            if (field_104 < 0)
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

    // 0x1002a1100
    void WaveStream::MyWave() {
        *field_56;
    }

    // 0x1002a1110
    WaveStream::WaveStream(const shared_ptr<Wave>& wave, int arg2, int arg3)
        : PCMStream(), field_72(0), field_76(0), field_80(0), field_84(0), field_84(0), field_88(0), field_92(0),
          field_96(0), field_100(-1) {
        *(uint64_t*)((long)&field_108 + 1) = 0;
        field_104 = 0;
        field_108 = 0;
        field_120 = 0;
        field_124 = 0;
        field_128 = 0;
        field_132 = 0;
        field_56 = wave;
        long lVar1 = wave.operator->();
        field_108 = *(int*)(lVar1 + 32);
        lVar1 = wave.operator->();
        field_112 = *(int*)(lVar1 + 36);
        lVar1 = wave.operator->();
        field_116 = *(bool*)(lVar1 + 40);
        field_76 = arg2;
        field_80 = arg3;
        field_84 = 8192;
        field_72 = 0;
        SetMLRVol();
    }

    // 0x1002a11f0
    void WaveStream::SetMLRVol() {
        field_88 = field_80;
        unsigned int uVar1 = GetLVol(field_80, field_84);
        field_92 = uVar1;
        uVar1 = GetRVol(field_80, field_84);
        field_96 = uVar1;
    }

    // 0x1002a1230
    WaveStream::WaveStream(const shared_ptr<Wave>& wave, int arg2, int arg3, int arg4)
        : PCMStream(), field_72(0), field_76(0), field_80(0), field_84(0), field_84(0), field_88(0), field_92(0),
          field_96(0), field_100(-1) {
        *(uint64_t*)((long)&field_108 + 1) = 0;
        field_104 = 0;
        field_108 = 0;
        field_120 = 0;
        field_124 = 0;
        field_128 = 0;
        field_132 = 0;
        field_56 = wave;
        long lVar1 = wave.operator->();
        field_108 = *(int*)(lVar1 + 32);
        lVar1 = wave.operator->();
        field_112 = *(int*)(lVar1 + 36);
        lVar1 = wave.operator->();
        field_116 = *(bool*)(lVar1 + 40);
        field_76 = arg2;
        field_80 = arg3;
        field_84 = arg4;
        field_72 = 0;
        SetMLRVol();
    }

    // 0x1002a1310
    long rateHelper(shared_ptr<Wave>& wave, int arg2) {
        long lVar1 = wave.operator->();
        return ((long)arg2 * (long)*(int*)(lVar1 + 4) * 256) / ((long)PCMPlayer::m_frequency * 100);
    }

    // 0x1002a1370
    auto WaveStream::NewRateRawFineVolPan(shared_ptr<Wave>& wave, int arg2, int arg3, int arg4) {
        auto result;
        WaveStream* waveStream;

        if (((wave.operator->() + 8))->empty() == '\0') {
            waveStream = (WaveStream*)operator new(136);
            WaveStream(waveStream, wave, arg2, arg3, arg4);
            result.unique_ptr<true, void>(waveStream);
        } else {
            result.unique_ptr<true, void>(wave);
        }
        return result;
    }

    // 0x1002a14e0
    void WaveStream::SkipRampNounLink() {
        if (field_120 != 0) {
            if (field_80 == 2147483648) {
                field_80 = 0;
            }
            field_120 = 0;
            SetMLRVol();
        }
    }

    // 0x1002a1550
    void WaveStream::SetLoopCount(int arg1) {
        if (IsLinked() != '\0') {
            LogAssert("!IsLinked()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                      "wave_stream.cpp",
                      156, nullptr);
        }
        field_104 = arg1;
    }

    // 0x1002a1590
    void WaveStream::SetLoopPoints(int arg1, int arg2) {
        __thread_id* local_30;

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        if (!(thread_id1_00 == g_idWorkerThread)) {
            new (&local_30) std::__thread_id();
            if (!(thread_id1 == local_30)) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          164, nullptr);
            }
        }
        field_108 = arg1;
        field_112 = arg2;
    }

    // 0x1002a1620
    void WaveStream::QueueVolume(int arg1) {
        field_100 = arg1;
    }

    // 0x1002a1640
    void WaveStream::ApplyVolume(int arg1) {
        int arg2 = GetPanFine();
        SetVolPanFine(arg1 << 6, arg2);
    }

    // 0x1002a1670
    void WaveStream::SetVolPanFine(int arg1, int arg2) {
        __thread_id* local_30;

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        if (!(thread_id1_00 == g_idWorkerThread)) {
            new (&local_30) std::__thread_id();
            if (!(thread_id1 == local_30)) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          215, nullptr);
            }
        }
        field_80 = arg1;
        field_84 = arg2;
        field_120 = 0;
        SetMLRVol();
    }

    // 0x1002a1700
    int WaveStream::GetPanFine() {
        __thread_id* local_20;

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        if (!(thread_id1_00 == g_idWorkerThread)) {
            new (&local_20) std::__thread_id();
            if (!(thread_id1 == local_20)) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          246, nullptr);
            }
        }
        int iVar2 = -1;
        if (-1 < field_84) {
            iVar2 = field_84;
        }
        return iVar2;
    }

    // 0x1002a1780
    void WaveStream::SetVolumeFine(int arg1) {
        __thread_id* in_RAX;

        __thread_id* local_28 = in_RAX;
        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        if (!(thread_id1_00 == g_idWorkerThread)) {
            new (&local_28) std::__thread_id();
            if (!(thread_id1 == local_28)) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          184, nullptr);
            }
        }
        int arg2 = GetPanFine();
        SetVolPanFine(arg1, arg2);
    }

    // 0x1002a1810
    void WaveStream::SetPan(int arg1) {
        __thread_id* in_RAX;

        __thread_id* local_28 = in_RAX;
        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        if (!(thread_id1_00 == g_idWorkerThread)) {
            new (&local_28) std::__thread_id();
            if (!(thread_id1 == local_28)) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          191, nullptr);
            }
        }
        SetVolPanFine(GetVolumeFine(), arg1 << 6);
    }

    // 0x1002a18a0
    unsigned int WaveStream::GetVolumeFine() {
        __thread_id* local_20;

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        if (!(thread_id1_00 == g_idWorkerThread)) {
            new (&local_20) std::__thread_id();
            if (!(thread_id1 == local_20)) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          232, nullptr);
            }
        }
        unsigned int uVar2 = 0;
        if (field_80 != 2147483648) {
            uVar2 = field_80;
        }
        return uVar2;
    }

    // 0x1002a1920
    void WaveStream::SetPanFine(int arg1) {
        __thread_id* in_RAX;

        __thread_id* local_28 = in_RAX;
        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        if (!(thread_id1_00 == g_idWorkerThread)) {
            new (&local_28) std::__thread_id();
            if (!(thread_id1 == local_28)) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          198, nullptr);
            }
        }
        SetVolPanFine(GetVolumeFine(), arg1);
    }

    // 0x1002a19b0
    void WaveStream::SetVolPan(int arg1, int arg2) {
        __thread_id* local_30;

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        if (!(thread_id1_00 == g_idWorkerThread)) {
            new (&local_30) std::__thread_id();
            if (!(thread_id1 == local_30)) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          205, nullptr);
            }
        }
        field_80 = arg1 << 6;
        field_84 = arg2 << 6;
        field_120 = 0;
        SetMLRVol();
    }

    // 0x1002a1a50
    int WaveStream::GetVolume() {
        __thread_id* local_20;

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        if (!(thread_id1_00 == g_idWorkerThread)) {
            new (&local_20) std::__thread_id();
            if (!(thread_id1 == local_20)) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          225, nullptr);
            }
        }
        int iVar2 = 0;
        if (field_80 != 2147483648) {
            iVar2 = (int)(field_80 + 32) >> 6;
        }
        return iVar2;
    }

    // 0x1002a1ad0
    int WaveStream::GetPan() {
        __thread_id* local_20;

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        if (!(thread_id1_00 == g_idWorkerThread)) {
            new (&local_20) std::__thread_id();
            if (!(thread_id1 == local_20)) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          239, nullptr);
            }
        }
        int iVar2 = -1;
        if (-1 < field_84) {
            iVar2 = field_84 + 32 >> 6;
        }
        return iVar2;
    }

    // 0x1002a1b50
    int WaveStream::GetPosition() {
        __thread_id* local_20;

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        if (!(thread_id1_00 == g_idWorkerThread)) {
            new (&local_20) std::__thread_id();
            if (!(thread_id1 == local_20)) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          253, nullptr);
            }
        }
        return (int)field_72 >> 8;
    }

    // 0x1002a1bc0
    unsigned int WaveStream::GetPositionFine() {
        __thread_id* local_20;

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        if (!(thread_id1_00 == g_idWorkerThread)) {
            new (&local_20) std::__thread_id();
            if (!(thread_id1 == local_20)) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          261, nullptr);
            }
        }
        return field_72;
    }

    // 0x1002a1c30
    void WaveStream::SetPosition(int arg1) {
        __thread_id* in_RAX;

        __thread_id* local_28 = in_RAX;
        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        if (!(thread_id1_00 == g_idWorkerThread)) {
            new (&local_28) std::__thread_id();
            if (!(thread_id1 == local_28)) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          268, nullptr);
            }
        }
        long lVar3 = MyWave();
        unsigned long uVar4 = ((lVar3 + 8))->end();
        unsigned int uVar2 = 4294967295;
        if (-1 < arg1 << 8) {
            uVar2 = arg1 << 8;
        }
        if ((int)(unsigned int)(uVar4 < 8) < (int)uVar2) {
            uVar2 = (unsigned int)(uVar4 < 8);
        }
        field_72 = uVar2;
    }

    // 0x1002a1cd0
    void WaveStream::SetPositionFine(int arg1) {
        __thread_id* in_RAX;

        __thread_id* local_28 = in_RAX;
        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        if (!(thread_id1_00 == g_idWorkerThread)) {
            new (&local_28) std::__thread_id();
            if (!(thread_id1 == local_28)) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          286, nullptr);
            }
        }
        long lVar3 = MyWave();
        int iVar2 = ((lVar3 + 8))->end();
        unsigned int uVar4 = 4294967295;
        if (-1 < arg1) {
            uVar4 = arg1;
        }
        if (iVar2 * 256 < (int)uVar4) {
            uVar4 = iVar2 * 256;
        }
        field_72 = uVar4;
    }

    // 0x1002a1d70
    void WaveStream::SetReverse(bool arg1) {
        __thread_id* in_RAX;

        __thread_id* local_28 = in_RAX;
        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        if (!(thread_id1_00 == g_idWorkerThread)) {
            new (&local_28) std::__thread_id();
            if (!(thread_id1 == local_28)) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          302, nullptr);
            }
        }
        int iVar3 = -field_76;
        if (iVar3 < 0) {
            iVar3 = field_76;
        }
        int iVar2 = -iVar3;
        if (!arg1) {
            iVar2 = iVar3;
        }
        field_76 = iVar2;
    }

    // 0x1002a1e00
    void WaveStream::SetReverseFromEnd() {
        __thread_id* local_20;

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        if (!(thread_id1_00 == g_idWorkerThread)) {
            new (&local_20) std::__thread_id();
            if (!(thread_id1 == local_20)) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          313, nullptr);
            }
        }
        int iVar3 = -field_76;
        if (-1 < iVar3) {
            iVar3 = field_76;
        }
        field_76 = iVar3;
        long lVar2 = MyWave();
        iVar3 = ((lVar2 + 8))->end();
        field_72 = iVar3 * 256 - 256;
    }

    // 0x1002a1ea0
    void WaveStream::FlipDirection() {
        __thread_id* local_20;

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        if (!(thread_id1_00 == g_idWorkerThread)) {
            new (&local_20) std::__thread_id();
            if (!(thread_id1 == local_20)) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          322, nullptr);
            }
        }
        field_76 = -field_76;
    }

    // 0x1002a1f10
    void WaveStream::SetBidirectionalLoop(bool arg1) {
        __thread_id* in_RAX;

        __thread_id* local_28 = in_RAX;
        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        if (!(thread_id1_00 == g_idWorkerThread)) {
            new (&local_28) std::__thread_id();
            if (!(thread_id1 == local_28)) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          329, nullptr);
            }
        }
        field_116 = arg1;
    }

    // 0x1002a1f90
    void WaveStream::RampVolume(int arg1, int arg2) {
        __thread_id* local_30;

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        if (!(thread_id1_00 == g_idWorkerThread)) {
            new (&local_30) std::__thread_id();
            if (!(thread_id1 == local_30)) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          336, nullptr);
            }
        }
        int arg3 = GetPanFine();
        RampVolPanFine(arg1, arg2 << 6, arg3);
    }

    // 0x1002a2030
    void WaveStream::RampVolPanFine(int arg1, int arg2, int arg3) {
        int iVar2;
        unsigned int uVar3;
        unsigned int uVar4;
        unsigned int uVar5;
        unsigned int uVar6;
        unsigned int uVar7;
        __thread_id* local_40;

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        if (!(thread_id1_00 == g_idWorkerThread)) {
            new (&local_40) std::__thread_id();
            if (!(thread_id1 == local_40)) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          357, nullptr);
            }
        }
        if (arg1 == 0) {
            SetVolPanFine(arg2, arg3);
        } else {
            iVar2 = GetLVol(arg2, arg3);
            uVar3 = GetRVol(arg2, arg3);
            uVar5 = field_92 - iVar2;
            if ((uVar5 == 0) && (field_96 == uVar3)) {
                field_120 = 0;
            } else {
                uVar4 = arg2 - field_88;
                uVar6 = field_88 - arg2;
                if ((int)uVar6 <= (int)uVar4) {
                    uVar6 = uVar4;
                }
                uVar7 = iVar2 - field_92;
                if ((int)uVar6 < (int)uVar7) {
                    uVar6 = uVar7;
                }
                if ((int)uVar6 < (int)uVar5) {
                    uVar6 = uVar5;
                }
                uVar5 = uVar3 - field_96;
                if ((int)uVar6 < (int)uVar5) {
                    uVar6 = uVar5;
                }
                uVar3 = field_96 - uVar3;
                if ((int)uVar3 <= (int)uVar6) {
                    uVar3 = uVar6;
                }
                if (arg1 <= (int)uVar3) {
                    uVar3 = arg1;
                }
                field_120 = uVar3;
                field_80 = arg2;
                field_84 = arg3;
                field_124 = (int)uVar4 / (int)uVar3;
                field_128 = (int)uVar7 / (int)uVar3;
                field_132 = (int)uVar5 / (int)uVar3;
            }
        }
    }

    // 0x1002a2170
    void WaveStream::RampVolumeFine(int arg1, int arg2) {
        __thread_id* local_30;

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        if (!(thread_id1_00 == g_idWorkerThread)) {
            new (&local_30) std::__thread_id();
            if (!(thread_id1 == local_30)) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          343, nullptr);
            }
        }
        int arg3 = GetPanFine();
        RampVolPanFine(arg1, arg2, arg3);
    }

    // 0x1002a2200
    void WaveStream::RampVolPan(int arg1, int arg2, int arg3) {
        __thread_id* in_RAX;

        __thread_id* local_38 = in_RAX;
        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        if (!(thread_id1_00 == g_idWorkerThread)) {
            new (&local_38) std::__thread_id();
            if (!(thread_id1 == local_38)) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          350, nullptr);
            }
        }
        RampVolPanFine(arg1, arg2 << 6, arg3 << 6);
    }

    // 0x1002a22a0
    void WaveStream::RampOut(int arg1) {
        unsigned int uVar1;
        unsigned int uVar2;
        __thread_id* in_RAX;
        unsigned int uVar4;
        unsigned int uVar5;
        unsigned int uVar6;

        __thread_id* local_28 = in_RAX;
        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        if (!(thread_id1_00 == g_idWorkerThread)) {
            new (&local_28) std::__thread_id();
            if (!(thread_id1 == local_28)) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          412, nullptr);
            }
        }
        if (arg1 == 0) {
            SetVolumeFine(0);
        } else {
            uVar1 = field_92;
            if ((uVar1 != 0) || (field_96 != 0)) {
                uVar2 = field_88;
                uVar5 = -uVar2;
                if ((int)-uVar2 < 0) {
                    uVar5 = uVar2;
                }
                uVar4 = -uVar1;
                if ((int)-uVar1 <= (int)uVar5) {
                    uVar4 = uVar5;
                }
                uVar5 = field_96;
                if ((int)uVar4 < (int)uVar1) {
                    uVar4 = uVar1;
                }
                uVar6 = -uVar5;
                if ((int)-uVar5 <= (int)uVar4) {
                    uVar6 = uVar4;
                }
                if ((int)uVar6 < (int)uVar5) {
                    uVar6 = uVar5;
                }
                if (arg1 <= (int)uVar6) {
                    uVar6 = arg1;
                }
                field_120 = uVar6;
                field_80 = 2147483648;
                field_124 = -((int)uVar2 / (int)uVar6);
                field_128 = -((int)uVar1 / (int)uVar6);
                field_132 = -((int)uVar5 / (int)uVar6);
                return;
            }
            field_120 = 0;
            field_80 = 0;
            field_88 = 0;
        }
        RemoveFromMixer();
    }

    // 0x1002a23c0
    void WaveStream::SetRateRaw(int arg1) {
        __thread_id* in_RAX;

        __thread_id* local_28 = in_RAX;
        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        if (!(thread_id1_00 == g_idWorkerThread)) {
            new (&local_28) std::__thread_id();
            if (!(thread_id1 == local_28)) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          471, nullptr);
            }
        }
        int iVar2 = -arg1;
        if (-1 < field_76) {
            iVar2 = arg1;
        }
        field_76 = iVar2;
    }

    // 0x1002a2440
    int WaveStream::GetRateRaw() {
        __thread_id* local_20;

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        if (!(thread_id1_00 == g_idWorkerThread)) {
            new (&local_20) std::__thread_id();
            if (!(thread_id1 == local_20)) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          485, nullptr);
            }
        }
        int iVar2 = -field_76;
        if (iVar2 < 0) {
            iVar2 = field_76;
        }
        return iVar2;
    }

    // 0x1002a24c0
    bool WaveStream::Isfinished() {
        bool bVar3;
        long lVar5;
        __thread_id* local_20;

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        if (!(thread_id1_00 == g_idWorkerThread)) {
            new (&local_20) std::__thread_id();
            if (!(thread_id1 == local_20)) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          491, nullptr);
            }
        }
        unsigned int uVar1 = field_72;
        if ((int)uVar1 < 0) {
            bVar3 = true;
        } else {
            lVar5 = MyWave();
            bVar3 = ((lVar5 + 8))->end() * 256 <= (int)uVar1;
        }
        return bVar3;
    }

    // 0x1002a2550
    bool WaveStream::Isramping() {
        __thread_id* local_20;

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        if (!(thread_id1_00 == g_idWorkerThread)) {
            new (&local_20) std::__thread_id();
            if (!(thread_id1 == local_20)) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          496, nullptr);
            }
        }
        return field_120 != 0;
    }

    // 0x1002a25d0
    WaveStream* WaveStream::SubstreamStart() {
        new (this) shared_ptr();
        return this;
    }

    // 0x1002a25f0
    WaveStream* WaveStream::SubstreamNext() {
        new (this) shared_ptr();
        return this;
    }

    // 0x1002a2610
    uint64_t WaveStream::SelfMixCost() {
        uint64_t uVar2;
        __thread_id* local_20;

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        if (!(thread_id1_00 == g_idWorkerThread)) {
            new (&local_20) std::__thread_id();
            if (!(thread_id1 == local_20)) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          511, nullptr);
            }
        }
        if ((field_80 == 0) && (field_120 == 0)) {
            uVar2 = 0;
        } else {
            uVar2 = 1;
        }
        return uVar2;
    }

    // 0x1002a2690
    void WaveStream::PullQueuedStateIntoWorker() {
        memory_order extraout_EDX;
        memory_order extraout_EDX_00;
        __thread_id* local_20;

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        __thread_id* p_Var3 = g_idWorkerThread;
        bool cVar1 = thread_id1_00 == g_idWorkerThread;
        int iVar2 = (int)p_Var3;
        memory_order memory_order = extraout_EDX;
        if (!cVar1) {
            new (&local_20) std::__thread_id();
            cVar1 = thread_id1 == local_20;
            iVar2 = (int)local_20;
            memory_order = extraout_EDX_00;
            if (!cVar1) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          521, nullptr);
            }
        }
        iVar2 = field_100.exchange(iVar2, memory_order);
        if (iVar2 != -1) {
            ApplyVolume(iVar2);
        }
    }

    // 0x1002a2730
    void WaveStream::DoMix(Array<int>& arg1, int arg2, int arg3) {
        unsigned int* puVar1;
        int* piVar2;
        int iVar3;
        unsigned int uVar4;
        int iVar5;
        int iVar6;
        long lVar7;
        char* pcVar8;
        int iVar9;
        int iVar10;
        int arg3_00;
        int arg3_01;
        unsigned long local_68;
        int local_5c;
        int local_4c;
        Array<signed char>* local_48;
        unsigned int* local_40;

        int local_34 = arg3;
        auto local_78 = GetLink();
        PullQueuedStateIntoWorker();
        if ((field_80 == 0) && (field_120 == 0)) {
            PretendToMix((int)this);
        } else {
            lVar7 = MyWave();
            iVar6 = field_108;
            local_5c = field_112;
            arg3_00 = iVar6 * 256;
            arg3_01 = local_5c * 256;
            local_48 = (Array<signed char>*)(lVar7 + 8);
            local_4c = iVar6;
            iVar3 = local_48->end();
            iVar9 = arg3_01 + iVar6 * -256;
            if (iVar9 == 0 || arg3_01 < arg3_00) {
                field_104 = 0;
            }
            puVar1 = &field_72;
            if ((int)field_72 < 0) {
                if (field_76 < 1) {
                    SkipRampNounLink();
                    RemoveFromMixer();
                    goto LAB_1002a2be0;
                }
                *puVar1 = 0;
            }
            uVar4 = iVar3 * 256;
            if ((int)uVar4 <= (int)*puVar1) {
                if (-1 < field_76) {
                    SkipRampNounLink();
                    RemoveFromMixer();
                    goto LAB_1002a2be0;
                }
                *puVar1 = uVar4 - 1;
            }
            local_34 = local_34 + arg2;
            local_40 = puVar1;
            if (field_104 < 0) {
                if (field_116 == false) {
                    if (field_76 < 0) {
                        while (true) {
                            pcVar8 = (char*)(*local_48)[(long)field_112 - 1];
                            arg2 = MixBackwardSto(arg1, arg2, arg3_00, local_34, (int)*pcVar8);
                            if (arg3_00 <= (int)*local_40)
                                break;
                            *local_40 = (arg3_01 - 1) - (int)((arg3_01 - 1) - *local_40) % iVar9;
                        }
                    } else {
                        while (true) {
                            pcVar8 = (char*)(*local_48)[(long)field_108];
                            arg2 = MixForwardSto(arg1, arg2, arg3_01, local_34, (int)*pcVar8);
                            if ((int)*local_40 < arg3_01)
                                break;
                            *local_40 = (int)(*local_40 + iVar6 * -256) % iVar9 + arg3_00;
                        }
                    }
                } else {
                    if (field_76 < 0) {
                        pcVar8 = (char*)(*local_48)[(long)field_108];
                        arg2 = MixBackwardSto(arg1, arg2, arg3_00, local_34, (int)*pcVar8);
                        if (arg3_00 <= (int)*local_40)
                            goto LAB_1002a2be0;
                        field_72 = ~*local_40 + local_4c * 512;
                        field_76 = -field_76;
                    }
                    local_5c = local_5c << 9;
                    local_4c = local_4c << 9;
                    while (true) {
                        pcVar8 = (char*)(*local_48)[(long)field_112 - 1];
                        iVar6 = MixForwardSto(arg1, arg2, arg3_01, local_34, (int)*pcVar8);
                        if ((int)*local_40 < arg3_01)
                            break;
                        field_72 = ~*local_40 + local_5c;
                        field_76 = -field_76;
                        pcVar8 = (char*)(*local_48)[(long)field_108];
                        arg2 = MixBackwardSto(arg1, iVar6, arg3_00, local_34, (int)*pcVar8);
                        if (arg3_00 <= (int)*local_40)
                            break;
                        field_72 = ~*local_40 + local_4c;
                        field_76 = -field_76;
                    }
                }
            } else {
                local_68 = (unsigned long)uVar4;
                if (field_104 != 0) {
                    local_4c = local_4c << 9;
                    local_5c = local_5c << 9;
                    do {
                        if (field_116 == false) {
                            if (field_76 < 0) {
                                do {
                                    pcVar8 = (char*)(*local_48)[(long)field_112 - 1];
                                    arg2 = MixBackwardSto(arg1, arg2, arg3_00, local_34, (int)*pcVar8);
                                    uVar4 = *local_40;
                                    if (arg3_00 <= (int)uVar4)
                                        goto LAB_1002a2be0;
                                    iVar5 = (int)(~uVar4 + arg3_01) / iVar9;
                                    iVar3 = field_104;
                                    iVar10 = iVar3 - iVar5;
                                    if (iVar10 == 0 || iVar3 < iVar5) {
                                        *local_40 = iVar3 * iVar9 + uVar4;
                                        iVar10 = 0;
                                    } else {
                                        *local_40 = iVar5 * iVar9 + uVar4;
                                    }
                                    field_104 = iVar10;
                                } while (iVar5 < iVar3);
                            } else {
                                do {
                                    pcVar8 = (char*)(*local_48)[(long)field_108];
                                    arg2 = MixForwardSto(arg1, arg2, arg3_01, local_34, (int)*pcVar8);
                                    uVar4 = *local_40;
                                    if ((int)uVar4 < arg3_01)
                                        goto LAB_1002a2be0;
                                    iVar5 = (int)(uVar4 + iVar6 * -256) / iVar9;
                                    iVar3 = field_104;
                                    iVar10 = iVar3 - iVar5;
                                    if (iVar10 == 0 || iVar3 < iVar5) {
                                        *local_40 = uVar4 - iVar3 * iVar9;
                                        iVar10 = 0;
                                    } else {
                                        *local_40 = uVar4 - iVar5 * iVar9;
                                    }
                                    field_104 = iVar10;
                                } while (iVar5 < iVar3);
                            }
                        } else {
                            if (field_76 < 0) {
                                pcVar8 = (char*)(*local_48)[(long)field_108];
                                arg2 = MixBackwardSto(arg1, arg2, arg3_00, local_34, (int)*pcVar8);
                                if (arg3_00 <= (int)*local_40)
                                    goto LAB_1002a2be0;
                                field_72 = ~*local_40 + local_4c;
                                field_76 = -field_76;
                                piVar2 = &field_104;
                                *piVar2 = *piVar2 - 1;
                                uVar4 = (unsigned int)local_68;
                                if (*piVar2 == 0)
                                    break;
                            }
                            do {
                                pcVar8 = (char*)(*local_48)[(long)field_112 - 1];
                                arg2 = MixForwardSto(arg1, arg2, arg3_01, local_34, (int)*pcVar8);
                                if ((int)*local_40 < arg3_01)
                                    goto LAB_1002a2be0;
                                field_72 = ~*local_40 + local_5c;
                                field_76 = -field_76;
                                piVar2 = &field_104;
                                *piVar2 = *piVar2 - 1;
                                if (*piVar2 == 0)
                                    break;
                                pcVar8 = (char*)(*local_48)[(long)field_108];
                                arg2 = MixBackwardSto(arg1, arg2, arg3_00, local_34, (int)*pcVar8);
                                if (arg3_00 <= (int)*local_40)
                                    goto LAB_1002a2be0;
                                field_72 = ~*local_40 + local_4c;
                                field_76 = -field_76;
                                piVar2 = &field_104;
                                *piVar2 = *piVar2 - 1;
                            } while (*piVar2 != 0);
                        }
                        uVar4 = (unsigned int)local_68;
                    } while (0 < field_104);
                }
                if (field_76 < 0) {
                    MixBackwardSto(arg1, arg2, 0, local_34, 0);
                    if ((int)*local_40 < 0) {
                        field_72 = 4294967295;
                        SkipRampNounLink();
                        RemoveFromMixer();
                    }
                } else {
                    MixForwardSto(arg1, arg2, uVar4, local_34, 0);
                    if ((int)(unsigned int)local_68 <= (int)*local_40) {
                        field_72 = (unsigned int)local_68;
                        SkipRampNounLink();
                        RemoveFromMixer();
                    }
                }
            }
        }
    LAB_1002a2be0:
    }

    // 0x1002a2d50
    unsigned long WaveStream::MixBackwardSto(Array<int>& arg1, int arg2, int arg3, int arg4, int arg5) {
        unsigned int* puVar1;
        uint8_t bVar3;
        int iVar4;
        unsigned int uVar5;
        long lVar6;
        WaveStream* pWVar8;
        unsigned int in_stack_ffffffffffffff58;
        unsigned int in_stack_ffffffffffffff60;
        unsigned int in_stack_ffffffffffffff68;
        WaveStream* in_stack_ffffffffffffff70;
        uint32_t uVar10;
        WaveStream* in_stack_ffffffffffffff78;
        WaveStream* in_stack_ffffffffffffff80;
        WaveStream* in_stack_ffffffffffffff88;
        uint32_t uVar11;
        WaveStream* in_stack_ffffffffffffff90;
        int in_stack_ffffffffffffff98;
        uint32_t in_stack_ffffffffffffff9c;
        __thread_id a_Stack_5c;
        int in_stack_ffffffffffffffa8;
        uint32_t uStack_54;

        unsigned long uVar9 = (unsigned long)(unsigned int)arg5;
        unsigned long uVar7 = (unsigned long)(unsigned int)arg3;
        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        bool cVar2 = thread_id1_00 == g_idWorkerThread;
        if (!cVar2) {
            new (&a_Stack_5c + 4) std::__thread_id();
            cVar2 = thread_id1 == ((__thread_id*)(((uint64_t)uStack_54 << 32) | (uint32_t)in_stack_ffffffffffffffa8));
            if (!cVar2) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          1097, nullptr);
            }
        }
        do {
            cVar2 = PCMPlayer::m_stereo;
            uVar11 = (uint32_t)((unsigned long)in_stack_ffffffffffffff88 >> 32);
            iVar4 = (int)uVar9;
            if ((int)field_120 < 1) {
                if ((field_76 == -256) && ((char)field_72 == '\0')) {
                    pWVar8 = this;
                    lVar6 = MyWave();
                    if (!cVar2) {
                        uVar5 = DoMixBackwards1To1Mono((WaveStream*)(lVar6 + 8), (Array<signed char>*)arg1,
                                                       (Array<int>*)(unsigned long)field_72, arg2, field_88, iVar4,
                                                       arg4, arg3, (int)this, in_stack_ffffffffffffff70);
                    } else {
                        uVar5 = DoMixBackwards1To1Stereo(
                            pWVar8, (int)(WaveStream*)(lVar6 + 8), (Array<signed char>*)arg1,
                            (Array<int>*)(unsigned long)field_72, arg2, field_92, field_96, in_stack_ffffffffffffff60,
                            arg4, arg3, (int)this, in_stack_ffffffffffffff80);
                    }
                } else {
                    pWVar8 = this;
                    iVar4 = MyWave();
                    if (!cVar2) {
                        uVar5 = DoMixBackwardsMono(
                            pWVar8, arg5, iVar4 + 8, (Array<signed char>*)arg1, (Array<int>*)(unsigned long)field_72,
                            arg2, field_88, in_stack_ffffffffffffff60, arg4, arg3, (int)this,
                            (WaveStream*)(((uint64_t)((int)((unsigned long)in_stack_ffffffffffffff80 >> 32)) << 32) |
                                          (uint32_t)field_76),
                            arg5, (int)in_stack_ffffffffffffff90);
                    } else {
                        uVar5 =
                            DoMixBackwardsStereo((WaveStream*)(unsigned long)(unsigned int)arg5, field_96, iVar4 + 8,
                                                 (Array<signed char>*)arg1, (Array<int>*)(unsigned long)field_72, arg2,
                                                 field_92, field_96, in_stack_ffffffffffffff68, arg4, arg3, (int)this,
                                                 (WaveStream*)(((uint64_t)uVar11 << 32) | (uint32_t)field_76), arg5,
                                                 in_stack_ffffffffffffff98);
                    }
                }
                return (unsigned long)uVar5;
            }
            in_stack_ffffffffffffff60 = field_120 + arg2;
            field_120 = in_stack_ffffffffffffff60;
            cVar2 = PCMPlayer::m_stereo;
            if (arg4 < (int)in_stack_ffffffffffffff60) {
                in_stack_ffffffffffffff60 = arg4;
            }
            if ((field_76 == -256) && ((char)field_72 == '\0')) {
                lVar6 = MyWave();
                if (!cVar2) {
                    uVar9 = (unsigned long)field_124;
                    in_stack_ffffffffffffff70 = this;
                    arg2 = DoMixBackwards1To1RampMono((WaveStream*)(lVar6 + 8), (Array<signed char>*)arg1,
                                                      (Array<int>*)(unsigned long)field_72, arg2, field_88, field_124,
                                                      in_stack_ffffffffffffff58, in_stack_ffffffffffffff60, arg3,
                                                      (int)this, in_stack_ffffffffffffff78);
                    in_stack_ffffffffffffff68 = arg3;
                } else {
                    uVar9 = (unsigned long)field_92;
                    in_stack_ffffffffffffff58 = field_96;
                    uVar5 = field_128;
                    in_stack_ffffffffffffff68 = field_132;
                    in_stack_ffffffffffffff80 =
                        (WaveStream*)(((uint64_t)((int)((unsigned long)in_stack_ffffffffffffff80 >> 32)) << 32) |
                                      (uint32_t)arg3);
                    in_stack_ffffffffffffff78 =
                        (WaveStream*)(((uint64_t)((int)((unsigned long)in_stack_ffffffffffffff78 >> 32)) << 32) |
                                      (uint32_t)in_stack_ffffffffffffff60);
                    in_stack_ffffffffffffff88 = this;
                    arg2 = DoMixBackwards1To1RampStereo(
                        (WaveStream*)(unsigned long)in_stack_ffffffffffffff68, (int)(WaveStream*)(lVar6 + 8),
                        (Array<signed char>*)arg1, (Array<int>*)(unsigned long)field_72, arg2, field_92,
                        in_stack_ffffffffffffff58, uVar5, in_stack_ffffffffffffff68, (int)in_stack_ffffffffffffff70,
                        in_stack_ffffffffffffff60, arg3, (int)this, in_stack_ffffffffffffff90);
                    in_stack_ffffffffffffff60 = uVar5;
                }
            } else {
                iVar4 = MyWave();
                uVar10 = (uint32_t)((unsigned long)in_stack_ffffffffffffff70 >> 32);
                if (!cVar2) {
                    in_stack_ffffffffffffff58 = field_88;
                    uVar5 = field_124;
                    in_stack_ffffffffffffff90 =
                        (WaveStream*)(((uint64_t)((int)((unsigned long)in_stack_ffffffffffffff90 >> 32)) << 32) |
                                      (uint32_t)arg5);
                    in_stack_ffffffffffffff88 = (WaveStream*)(((uint64_t)uVar11 << 32) | (uint32_t)field_76);
                    in_stack_ffffffffffffff78 =
                        (WaveStream*)(((uint64_t)((int)((unsigned long)in_stack_ffffffffffffff78 >> 32)) << 32) |
                                      (uint32_t)arg3);
                    in_stack_ffffffffffffff70 =
                        (WaveStream*)(((uint64_t)uVar10 << 32) | (uint32_t)in_stack_ffffffffffffff60);
                    uVar9 = (unsigned long)(unsigned int)arg2;
                    in_stack_ffffffffffffff80 = this;
                    arg2 = DoMixBackwardsRampMono((WaveStream*)(unsigned long)(unsigned int)arg5, uVar5, iVar4 + 8,
                                                  (Array<signed char>*)arg1, (Array<int>*)(unsigned long)field_72, arg2,
                                                  in_stack_ffffffffffffff58, uVar5, in_stack_ffffffffffffff68,
                                                  in_stack_ffffffffffffff60, arg3, (int)this, in_stack_ffffffffffffff88,
                                                  arg5, in_stack_ffffffffffffff98);
                    in_stack_ffffffffffffff60 = uVar5;
                } else {
                    in_stack_ffffffffffffff98 = field_76;
                    in_stack_ffffffffffffff58 = field_92;
                    uVar5 = field_96;
                    in_stack_ffffffffffffff68 = field_128;
                    in_stack_ffffffffffffff88 = (WaveStream*)(((uint64_t)uVar11 << 32) | (uint32_t)arg3);
                    in_stack_ffffffffffffff80 =
                        (WaveStream*)(((uint64_t)((int)((unsigned long)in_stack_ffffffffffffff80 >> 32)) << 32) |
                                      (uint32_t)in_stack_ffffffffffffff60);
                    in_stack_ffffffffffffff70 = (WaveStream*)(((uint64_t)uVar10 << 32) | (uint32_t)field_132);
                    uVar9 = (unsigned long)(unsigned int)arg2;
                    in_stack_ffffffffffffff90 = this;
                    arg2 = DoMixBackwardsRampStereo(
                        (WaveStream*)(unsigned long)in_stack_ffffffffffffff68, uVar5, iVar4 + 8,
                        (Array<signed char>*)arg1, (Array<int>*)(unsigned long)field_72, arg2,
                        in_stack_ffffffffffffff58, uVar5, in_stack_ffffffffffffff68, field_132,
                        (int)in_stack_ffffffffffffff78, in_stack_ffffffffffffff60, arg3, (int)this,
                        (WaveStream*)(((uint64_t)in_stack_ffffffffffffff9c << 32) |
                                      (uint32_t)in_stack_ffffffffffffff98),
                        arg5, in_stack_ffffffffffffffa8);
                    in_stack_ffffffffffffff60 = uVar5;
                }
            }
            puVar1 = &field_120;
            *puVar1 = *puVar1 - arg2;
            if (*puVar1 == 0) {
                bVar3 = FinaliseRamp();
                uVar5 = (unsigned int)uVar7;
                if (bVar3 != 0) {
                    uVar5 = arg4;
                }
                bVar3 = bVar3 ^ 1;
            } else {
                bVar3 = 0;
                uVar5 = arg2;
            }
            uVar7 = (unsigned long)uVar5;
        } while (bVar3 != 0);
        return uVar7;
    }

    // 0x1002a30d0
    unsigned long WaveStream::MixForwardSto(Array<int>& arg1, int arg2, int arg3, int arg4, int arg5) {
        unsigned int* puVar1;
        uint8_t bVar3;
        int iVar4;
        unsigned int uVar5;
        long lVar6;
        WaveStream* pWVar8;
        unsigned int in_stack_ffffffffffffff58;
        unsigned int in_stack_ffffffffffffff60;
        unsigned int in_stack_ffffffffffffff68;
        WaveStream* in_stack_ffffffffffffff70;
        uint32_t uVar10;
        WaveStream* in_stack_ffffffffffffff78;
        WaveStream* in_stack_ffffffffffffff80;
        WaveStream* in_stack_ffffffffffffff88;
        uint32_t uVar11;
        WaveStream* in_stack_ffffffffffffff90;
        int in_stack_ffffffffffffff98;
        uint32_t in_stack_ffffffffffffff9c;
        __thread_id a_Stack_5c;
        int in_stack_ffffffffffffffa8;
        uint32_t uStack_54;

        unsigned long uVar9 = (unsigned long)(unsigned int)arg5;
        unsigned long uVar7 = (unsigned long)(unsigned int)arg3;
        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        bool cVar2 = thread_id1_00 == g_idWorkerThread;
        if (!cVar2) {
            new (&a_Stack_5c + 4) std::__thread_id();
            cVar2 = thread_id1 == ((__thread_id*)(((uint64_t)uStack_54 << 32) | (uint32_t)in_stack_ffffffffffffffa8));
            if (!cVar2) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          1022, nullptr);
            }
        }
        do {
            cVar2 = PCMPlayer::m_stereo;
            uVar11 = (uint32_t)((unsigned long)in_stack_ffffffffffffff88 >> 32);
            iVar4 = (int)uVar9;
            if ((int)field_120 < 1) {
                if ((field_76 == 256) && ((char)field_72 == '\0')) {
                    pWVar8 = this;
                    lVar6 = MyWave();
                    if (!cVar2) {
                        uVar5 = DoMixForwards1To1Mono((WaveStream*)(lVar6 + 8), (Array<signed char>*)arg1,
                                                      (Array<int>*)(unsigned long)field_72, arg2, field_88, iVar4, arg4,
                                                      arg3, (int)this, in_stack_ffffffffffffff70);
                    } else {
                        uVar5 = DoMixForwards1To1Stereo(pWVar8, (int)(WaveStream*)(lVar6 + 8),
                                                        (Array<signed char>*)arg1, (Array<int>*)(unsigned long)field_72,
                                                        arg2, field_92, field_96, in_stack_ffffffffffffff60, arg4, arg3,
                                                        (int)this, in_stack_ffffffffffffff80);
                    }
                } else {
                    pWVar8 = this;
                    iVar4 = MyWave();
                    if (!cVar2) {
                        uVar5 = DoMixForwardsMono(
                            pWVar8, arg5, iVar4 + 8, (Array<signed char>*)arg1, (Array<int>*)(unsigned long)field_72,
                            arg2, field_88, in_stack_ffffffffffffff60, arg4, arg3, (int)this,
                            (WaveStream*)(((uint64_t)((int)((unsigned long)in_stack_ffffffffffffff80 >> 32)) << 32) |
                                          (uint32_t)field_76),
                            arg5, (int)in_stack_ffffffffffffff90);
                    } else {
                        uVar5 =
                            DoMixForwardsStereo((WaveStream*)(unsigned long)(unsigned int)arg5, field_96, iVar4 + 8,
                                                (Array<signed char>*)arg1, (Array<int>*)(unsigned long)field_72, arg2,
                                                field_92, field_96, in_stack_ffffffffffffff68, arg4, arg3, (int)this,
                                                (WaveStream*)(((uint64_t)uVar11 << 32) | (uint32_t)field_76), arg5,
                                                in_stack_ffffffffffffff98);
                    }
                }
                return (unsigned long)uVar5;
            }
            in_stack_ffffffffffffff60 = field_120 + arg2;
            field_120 = in_stack_ffffffffffffff60;
            cVar2 = PCMPlayer::m_stereo;
            if (arg4 < (int)in_stack_ffffffffffffff60) {
                in_stack_ffffffffffffff60 = arg4;
            }
            if ((field_76 == 256) && ((char)field_72 == '\0')) {
                lVar6 = MyWave();
                if (!cVar2) {
                    uVar9 = (unsigned long)field_124;
                    in_stack_ffffffffffffff70 = this;
                    arg2 = DoMixForwards1To1RampMono((WaveStream*)(lVar6 + 8), (Array<signed char>*)arg1,
                                                     (Array<int>*)(unsigned long)field_72, arg2, field_88, field_124,
                                                     in_stack_ffffffffffffff58, in_stack_ffffffffffffff60, arg3,
                                                     (int)this, in_stack_ffffffffffffff78);
                    in_stack_ffffffffffffff68 = arg3;
                } else {
                    uVar9 = (unsigned long)field_92;
                    in_stack_ffffffffffffff58 = field_96;
                    uVar5 = field_128;
                    in_stack_ffffffffffffff68 = field_132;
                    in_stack_ffffffffffffff80 =
                        (WaveStream*)(((uint64_t)((int)((unsigned long)in_stack_ffffffffffffff80 >> 32)) << 32) |
                                      (uint32_t)arg3);
                    in_stack_ffffffffffffff78 =
                        (WaveStream*)(((uint64_t)((int)((unsigned long)in_stack_ffffffffffffff78 >> 32)) << 32) |
                                      (uint32_t)in_stack_ffffffffffffff60);
                    in_stack_ffffffffffffff88 = this;
                    arg2 = DoMixForwards1To1RampStereo(
                        (WaveStream*)(unsigned long)in_stack_ffffffffffffff68, (int)(WaveStream*)(lVar6 + 8),
                        (Array<signed char>*)arg1, (Array<int>*)(unsigned long)field_72, arg2, field_92,
                        in_stack_ffffffffffffff58, uVar5, in_stack_ffffffffffffff68, (int)in_stack_ffffffffffffff70,
                        in_stack_ffffffffffffff60, arg3, (int)this, in_stack_ffffffffffffff90);
                    in_stack_ffffffffffffff60 = uVar5;
                }
            } else {
                iVar4 = MyWave();
                uVar10 = (uint32_t)((unsigned long)in_stack_ffffffffffffff70 >> 32);
                if (!cVar2) {
                    in_stack_ffffffffffffff58 = field_88;
                    uVar5 = field_124;
                    in_stack_ffffffffffffff90 =
                        (WaveStream*)(((uint64_t)((int)((unsigned long)in_stack_ffffffffffffff90 >> 32)) << 32) |
                                      (uint32_t)arg5);
                    in_stack_ffffffffffffff88 = (WaveStream*)(((uint64_t)uVar11 << 32) | (uint32_t)field_76);
                    in_stack_ffffffffffffff78 =
                        (WaveStream*)(((uint64_t)((int)((unsigned long)in_stack_ffffffffffffff78 >> 32)) << 32) |
                                      (uint32_t)arg3);
                    in_stack_ffffffffffffff70 =
                        (WaveStream*)(((uint64_t)uVar10 << 32) | (uint32_t)in_stack_ffffffffffffff60);
                    uVar9 = (unsigned long)(unsigned int)arg2;
                    in_stack_ffffffffffffff80 = this;
                    arg2 = DoMixForwardsRampMono((WaveStream*)(unsigned long)(unsigned int)arg5, uVar5, iVar4 + 8,
                                                 (Array<signed char>*)arg1, (Array<int>*)(unsigned long)field_72, arg2,
                                                 in_stack_ffffffffffffff58, uVar5, in_stack_ffffffffffffff68,
                                                 in_stack_ffffffffffffff60, arg3, (int)this, in_stack_ffffffffffffff88,
                                                 arg5, in_stack_ffffffffffffff98);
                    in_stack_ffffffffffffff60 = uVar5;
                } else {
                    in_stack_ffffffffffffff98 = field_76;
                    in_stack_ffffffffffffff58 = field_92;
                    uVar5 = field_96;
                    in_stack_ffffffffffffff68 = field_128;
                    in_stack_ffffffffffffff88 = (WaveStream*)(((uint64_t)uVar11 << 32) | (uint32_t)arg3);
                    in_stack_ffffffffffffff80 =
                        (WaveStream*)(((uint64_t)((int)((unsigned long)in_stack_ffffffffffffff80 >> 32)) << 32) |
                                      (uint32_t)in_stack_ffffffffffffff60);
                    in_stack_ffffffffffffff70 = (WaveStream*)(((uint64_t)uVar10 << 32) | (uint32_t)field_132);
                    uVar9 = (unsigned long)(unsigned int)arg2;
                    in_stack_ffffffffffffff90 = this;
                    arg2 = DoMixForwardsRampStereo(
                        (WaveStream*)(unsigned long)in_stack_ffffffffffffff68, uVar5, iVar4 + 8,
                        (Array<signed char>*)arg1, (Array<int>*)(unsigned long)field_72, arg2,
                        in_stack_ffffffffffffff58, uVar5, in_stack_ffffffffffffff68, field_132,
                        (int)in_stack_ffffffffffffff78, in_stack_ffffffffffffff60, arg3, (int)this,
                        (WaveStream*)(((uint64_t)in_stack_ffffffffffffff9c << 32) |
                                      (uint32_t)in_stack_ffffffffffffff98),
                        arg5, in_stack_ffffffffffffffa8);
                    in_stack_ffffffffffffff60 = uVar5;
                }
            }
            puVar1 = &field_120;
            *puVar1 = *puVar1 - arg2;
            if (*puVar1 == 0) {
                bVar3 = FinaliseRamp();
                uVar5 = (unsigned int)uVar7;
                if (bVar3 != 0) {
                    uVar5 = arg4;
                }
                bVar3 = bVar3 ^ 1;
            } else {
                bVar3 = 0;
                uVar5 = arg2;
            }
            uVar7 = (unsigned long)uVar5;
        } while (bVar3 != 0);
        return uVar7;
    }

    // 0x1002a3450
    void WaveStream::PretendToMix(int arg1) {
        unsigned int uVar3;
        int iVar5;
        int iVar7;
        int iVar8;
        int iVar10;
        ReturnValue local_48;
        int local_38;

        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_58;
        PullQueuedStateIntoWorker();
        unsigned int uVar11 = field_120;
        if (0 < (int)uVar11) {
            if (uVar11 - arg1 == 0 || (int)uVar11 < arg1) {
                if (field_80 == 2147483648) {
                    field_80 = 0;
                    field_96 = 0;
                    field_88 = 0;
                    field_92 = 0;
                    local_48 = UnlinkKeepAlive();
                    local_58 = local_48;
                    arg1 = field_120;
                }
                field_120 = 0;
                SetMLRVol();
            } else {
                field_88 = field_88 + field_124 * arg1;
                field_92 = field_92 + field_128 * arg1;
                field_96 = field_96 + field_132 * arg1;
                field_120 = uVar11 - arg1;
            }
        }
        long lVar4 = MyWave();
        int iVar6 = field_108;
        int iVar1 = field_112;
        int iVar13 = iVar6 * 256;
        int iVar14 = iVar1 * 256;
        int local_34 = iVar6;
        int iVar2 = ((lVar4 + 8))->end();
        int iVar12 = iVar14 + iVar6 * -256;
        if (iVar12 == 0 || iVar14 < iVar13) {
            field_104 = 0;
            uVar11 = field_72;
        } else {
            uVar11 = field_72;
        }
        if ((int)uVar11 < 0) {
            if (field_76 < 1) {
                SkipRampNounLink();
                RemoveFromMixer();
                goto LAB_1002a3855;
            }
            field_72 = 0;
        }
        uVar11 = iVar2 * 256;
        if ((int)uVar11 <= (int)field_72) {
            if (-1 < field_76) {
                SkipRampNounLink();
                RemoveFromMixer();
                goto LAB_1002a3855;
            }
            field_72 = uVar11 - 1;
        }
        iVar2 = field_76;
        unsigned int uVar9 = arg1 * iVar2 + field_72;
        field_72 = uVar9;
        if (field_104 < 0) {
            if (field_116 == false) {
                if (iVar2 < 0) {
                    if ((int)uVar9 < iVar13) {
                        field_72 = (iVar14 - 1) - (int)((iVar14 - 1) - uVar9) % iVar12;
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
                iVar2 = field_104;
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
                        field_104 = iVar5;
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
                            field_104 = iVar2 - 1;
                            if (iVar2 - 1 != 0)
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
                        iVar7 = field_104;
                        field_76 = -iVar2;
                        iVar5 = 0;
                        iVar10 = iVar7 - 1;
                        field_104 = iVar10;
                        if (iVar10 == 0)
                            break;
                        if (iVar13 <= (int)uVar3)
                            goto LAB_1002a35d3;
                        field_72 = uVar9 + (local_34 - iVar1) * 512;
                        field_76 = iVar2;
                        iVar7 = iVar7 - 2;
                        field_104 = iVar7;
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
                        SkipRampNounLink();
                        RemoveFromMixer();
                    }
                } else if ((int)uVar11 <= (int)field_72) {
                    field_72 = uVar11;
                    SkipRampNounLink();
                    RemoveFromMixer();
                }
            }
        }
    LAB_1002a3855:
    }

    // 0x1002a3920
    int WaveStream::DoMixForwards1To1RampStereo(int arg1, Array<signed char>& arg2, Array<int>& arg3, int arg4,
                                                int arg5, int arg6, int arg7, int arg8, int arg9, int arg10, int arg11,
                                                int arg12, WaveStream* waveStream) {
        long lVar1;
        Array<signed char>* pAVar3;
        unsigned long arg1_00;
        char* pcVar5;
        uint32_t in_register_00000034;
        long lVar9;
        uint32_t in_register_00000084;
        int iVar13;
        uint32_t in_stack_0000003c;
        __thread_id* local_f0;
        unsigned long local_e8;
        unsigned long local_e0;
        long local_d8;
        unsigned long local_d0;
        unsigned long local_c8;
        long local_c0;
        int local_b4;
        int local_b0;
        int local_ac;
        long local_a8;
        long local_a0;
        unsigned long local_90;
        unsigned long local_88;
        unsigned long local_60;
        unsigned long local_58;
        unsigned long local_48;
        unsigned long local_40;
        unsigned long local_38;

        unsigned long local_80 = (((uint64_t)in_register_00000084 << 32) | (uint32_t)arg4);
        Array<signed char>* local_78 = (Array<signed char>*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1);
        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        char cVar4 = thread_id1_00 == g_idWorkerThread;
        if (!cVar4) {
            new (&local_f0) std::__thread_id();
            cVar4 = thread_id1 == local_f0;
            if (!cVar4) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          1593, nullptr);
            }
        }
        unsigned int uVar8 = (int)arg3 >> 8;
        unsigned long local_98 = (unsigned long)uVar8;
        unsigned long uVar14 = (unsigned long)(unsigned int)(arg5 << 2);
        unsigned long uVar12 = (unsigned long)(unsigned int)(arg6 << 2);
        int iVar11 = (int)local_80;
        int iVar7 = (iVar11 - uVar8) + (arg11 >> 8);
        if (arg10 < iVar7) {
            iVar7 = arg10;
        }
        int iVar10 = iVar7 * 2 - 6;
        unsigned long local_68 = (unsigned long)(unsigned int)(arg7 * 4);
        int* piVar6 = (int*)((((uint64_t)in_stack_0000003c << 32) | (uint32_t)arg12) + 88);
        *piVar6 = *piVar6 + (iVar7 - iVar11) * *(int*)((((uint64_t)in_stack_0000003c << 32) | (uint32_t)arg12) + 124);
        unsigned long local_70 = (unsigned long)(unsigned int)(arg8 * 4);
        unsigned int uVar2 = iVar11 * 2;
        unsigned long arg1_01 = (unsigned long)uVar2;
        iVar11 = iVar7 * 2;
        if ((int)uVar2 < iVar10) {
            local_a0 = (long)(int)uVar8;
            local_c0 = (long)(int)uVar2;
            local_d8 = (long)iVar10;
            local_b4 = arg7 * 12;
            local_d0 = (unsigned long)(unsigned int)(arg7 << 3);
            local_b0 = arg8 * 12;
            local_c8 = (unsigned long)(unsigned int)(arg8 << 3);
            lVar9 = 0;
            local_38 = 0;
            local_ac = iVar7 * 2;
            local_80 = arg1_01;
            do {
                lVar1 = local_c0;
                local_48 = local_38 + local_c0;
                local_60 = local_a0 + lVar9 + 1;
                local_a8 = lVar9;
                pcVar5 = (char*)(*local_78)[local_a0 + lVar9];
                cVar4 = *pcVar5;
                local_40 = local_38 + lVar1 + 1;
                local_58 = uVar14;
                piVar6 = &arg2[local_48];
                *piVar6 = *piVar6 + (int)uVar14 * (int)cVar4;
                iVar11 = (int)uVar14 + (int)local_68;
                iVar10 = (int)uVar12;
                local_90 = local_38 + lVar1 + 2;
                piVar6 = &arg2[local_40];
                *piVar6 = *piVar6 + cVar4 * iVar10;
                local_48 = local_a0 + 2 + local_a8;
                local_40._0_4_ = (int)local_70 + iVar10;
                pcVar5 = (char*)(*local_78)[local_60];
                pAVar3 = arg2;
                cVar4 = *pcVar5;
                local_e0 = local_38 + lVar1 + 3;
                piVar6 = &arg2[local_90];
                iVar7 = (int)local_40;
                lVar1 = local_c0;
                *piVar6 = *piVar6 + iVar11 * cVar4;
                local_88 = (((uint64_t)local_88._4_4_ << 32) | (uint32_t)((int)local_d0 + (int)local_58));
                iVar13 = cVar4 * (int)local_40;
                local_e8 = local_38 + local_c0 + 4;
                local_60._0_4_ = iVar11 + (int)local_68;
                piVar6 = (int*)(*pAVar3)[local_e0];
                *piVar6 = *piVar6 + iVar13;
                local_40._0_4_ = iVar7 + (int)local_70;
                iVar7 = (int)local_c8;
                local_90 = local_a0 + 3 + local_a8;
                pcVar5 = (char*)(*local_78)[local_48];
                pAVar3 = arg2;
                local_48 = (((uint64_t)local_48._4_4_ << 32) | (uint32_t)((int)*pcVar5));
                iVar11 = (int)local_88 * *pcVar5;
                local_88 = local_38 + lVar1 + 5;
                piVar6 = &arg2[local_e8];
                *piVar6 = *piVar6 + iVar11;
                local_60 = (((uint64_t)local_60._4_4_ << 32) | (uint32_t)((int)local_60 + (int)local_68));
                local_58 = (unsigned long)(unsigned int)((int)local_58 + local_b4);
                iVar7 = (iVar7 + iVar10) * (int)local_48;
                local_48 = local_38 + lVar1 + 6;
                piVar6 = (int*)(*pAVar3)[local_88];
                *piVar6 = *piVar6 + iVar7;
                local_40 = (((uint64_t)local_40._4_4_ << 32) | (uint32_t)((int)local_40 + (int)local_70));
                iVar10 = iVar10 + local_b0;
                pcVar5 = (char*)(*local_78)[local_90];
                cVar4 = *pcVar5;
                iVar7 = (int)local_58;
                local_58 = local_38 + lVar1 + 7;
                piVar6 = (int*)(*pAVar3)[local_48];
                *piVar6 = *piVar6 + iVar7 * cVar4;
                uVar14 = (unsigned long)(unsigned int)((int)local_60 + (int)local_68);
                piVar6 = &arg2[local_58];
                *piVar6 = *piVar6 + iVar10 * cVar4;
                uVar12 = (unsigned long)(unsigned int)((int)local_40 + (int)local_70);
                lVar1 = lVar1 + local_38;
                local_38 = local_38 + 8;
                lVar9 = local_a8 + 4;
            } while (lVar1 + 8 < local_d8);
            arg1_01 = (unsigned long)(unsigned int)((int)local_80 + (int)local_38);
            local_98 = (unsigned long)(unsigned int)((int)local_98 + (int)lVar9);
            iVar11 = local_ac;
        }
        uVar8 = (unsigned int)uVar14;
        if ((int)arg1_01 < iVar11) {
            local_98 = (unsigned long)(int)local_98;
            arg1_01 = (unsigned long)(int)arg1_01;
            local_40 = (unsigned long)iVar11;
            lVar9 = arg1_01 << 32;
            do {
                arg1_00 = local_98;
                local_98 = local_98 + 1;
                local_38 = uVar12;
                pcVar5 = (char*)(*local_78)[arg1_00];
                cVar4 = *pcVar5;
                piVar6 = &arg2[arg1_01];
                *piVar6 = *piVar6 + (int)uVar14 * (int)cVar4;
                uVar8 = (int)uVar14 + (int)local_68;
                uVar14 = (unsigned long)uVar8;
                iVar7 = (int)local_38;
                arg1_01 = arg1_01 + 2;
                piVar6 = &arg2[lVar9 >> 32 | 1];
                *piVar6 = *piVar6 + cVar4 * iVar7;
                uVar12 = (unsigned long)(unsigned int)(iVar7 + (int)local_70);
                lVar9 = lVar9 + 8589934592;
            } while ((long)arg1_01 < (long)local_40);
        }
        lVar9 = (((uint64_t)in_stack_0000003c << 32) | (uint32_t)arg12);
        *(int*)(lVar9 + 92) = (int)uVar8 >> 2;
        *(int*)(lVar9 + 96) = (int)uVar12 >> 2;
        *(int*)(lVar9 + 72) = (int)local_98 << 8;
        return (int)arg1_01 >> 1;
    }

    // 0x1002a3dd0
    int WaveStream::DoMixForwards1To1RampMono(Array<signed char>& arg1, Array<int>& arg2, int arg3, int arg4, int arg5,
                                              int arg6, int arg7, int arg8, int arg9, WaveStream* waveStream) {
        unsigned long arg1_00;
        char* pcVar2;
        int* piVar3;
        long lVar4;
        WaveStream* this_00;
        uint32_t in_register_0000008c;
        int iVar7;
        unsigned long uVar8;
        int iVar10;
        uint32_t in_stack_00000024;
        __thread_id* local_a0;
        long local_98;
        long local_90;
        unsigned long local_88;
        int local_80;
        int local_7c;
        unsigned long local_78;
        unsigned long local_70;
        unsigned long local_48;
        int local_40;
        unsigned long local_38;

        unsigned long local_68 = (((uint64_t)in_register_0000008c << 32) | (uint32_t)arg5);
        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        bool cVar1 = thread_id1_00 == g_idWorkerThread;
        if (!cVar1) {
            new (&local_a0) std::__thread_id();
            cVar1 = thread_id1 == local_a0;
            if (!cVar1) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          1554, nullptr);
            }
        }
        int local_3c = (int)arg2 >> 8;
        int iVar11 = arg4 << 2;
        unsigned int uVar6 = (arg3 - local_3c) + (arg8 >> 8);
        if (arg7 < (int)uVar6) {
            uVar6 = arg7;
        }
        long lVar9 = (((uint64_t)in_stack_00000024 << 32) | (uint32_t)arg9);
        *(int*)(lVar9 + 92) = *(int*)(lVar9 + 92) + *(int*)(lVar9 + 128) * (uVar6 - arg3);
        *(int*)(lVar9 + 96) = *(int*)(lVar9 + 96) + (uVar6 - arg3) * *(int*)(lVar9 + 132);
        int iVar5 = (int)local_68;
        unsigned long local_60 = (unsigned long)(unsigned int)(iVar5 * 4);
        if (arg3 < (int)(uVar6 - 3)) {
            local_98 = (long)local_3c;
            local_48 = (unsigned long)arg3;
            local_90 = (long)(int)(uVar6 - 3);
            local_7c = iVar5 * 12;
            local_68 = (unsigned long)(unsigned int)(iVar5 << 3);
            lVar9 = 0;
            this_00 = this;
            local_88 = (unsigned long)uVar6;
            local_40 = arg3;
            do {
                uVar8 = local_48;
                lVar4 = local_98;
                local_38 = local_48 + lVar9;
                local_78 = local_98 + lVar9 + 1;
                pcVar2 = (char*)(*this_00)[local_98 + lVar9];
                cVar1 = *pcVar2;
                local_70 = uVar8 + lVar9 + 1;
                piVar3 = &arg1[local_38];
                *piVar3 = *piVar3 + cVar1 * iVar11;
                iVar10 = iVar11 + (int)local_60;
                local_38 = lVar4 + lVar9 + 2;
                pcVar2 = (char*)(*this)[local_78];
                cVar1 = *pcVar2;
                local_78 = local_48 + lVar9 + 2;
                piVar3 = &arg1[local_70];
                *piVar3 = *piVar3 + cVar1 * iVar10;
                iVar5 = (int)local_60;
                local_80 = (int)local_68 + iVar11;
                local_70 = lVar4 + 3 + lVar9;
                pcVar2 = (char*)(*this)[local_38];
                iVar7 = *pcVar2 * local_80;
                local_38 = local_48 + lVar9 + 3;
                piVar3 = &arg1[local_78];
                this_00 = this;
                *piVar3 = *piVar3 + iVar7;
                iVar11 = iVar11 + local_7c;
                pcVar2 = (char*)(*this)[local_70];
                cVar1 = *pcVar2;
                piVar3 = &arg1[local_38];
                *piVar3 = *piVar3 + cVar1 * iVar11;
                iVar11 = iVar10 + iVar5 * 2 + (int)local_60;
                lVar4 = local_48 + lVar9;
                lVar9 = lVar9 + 4;
            } while (lVar4 + 4 < local_90);
            arg3 = local_40 + (int)lVar9;
            local_3c = local_3c + (int)lVar9;
            uVar6 = (unsigned int)local_88;
        }
        if (arg3 < (int)uVar6) {
            local_48 = (unsigned long)local_3c;
            iVar5 = 0;
            local_38 = (((uint64_t)local_38._4_4_ << 32) | (uint32_t)(arg3 - uVar6));
            uVar8 = (long)arg3;
            local_40 = arg3;
            do {
                arg1_00 = local_48;
                local_48 = local_48 + 1;
                pcVar2 = (char*)(*this)[arg1_00];
                cVar1 = *pcVar2;
                piVar3 = &arg1[uVar8];
                *piVar3 = *piVar3 + cVar1 * iVar11;
                iVar11 = iVar11 + (int)local_60;
                iVar5 = iVar5 - 1;
                uVar8 = uVar8 + 1;
            } while ((int)local_38 != iVar5);
            local_3c = local_3c - iVar5;
            arg3 = local_40 - iVar5;
        }
        *(int*)((((uint64_t)in_stack_00000024 << 32) | (uint32_t)arg9) + 88) = iVar11 >> 2;
        *(int*)((((uint64_t)in_stack_00000024 << 32) | (uint32_t)arg9) + 72) = local_3c << 8;
        return arg3;
    }

    // 0x1002a40d0
    void WaveStream::DoMixForwardsRampStereo(int arg1, int arg2, Array<signed char>& arg3, Array<int>& arg4, int arg5,
                                             int arg6, int arg7, int arg8, int arg9, int arg10, int arg11, int arg12,
                                             int arg13, WaveStream* waveStream, int arg15, int arg16) {
        Array<signed char>* this_01;
        int iVar2;
        int iVar3;
        char* pcVar4;
        int* piVar5;
        uint32_t in_register_00000014;
        int iVar6;
        int iVar7;
        uint32_t in_stack_00000044;
        __thread_id* local_68;
        unsigned long local_60;
        long local_58;
        long local_40;
        unsigned int local_38;

        unsigned long uVar9 = (unsigned long)arg4 & 4294967295;
        long lVar10 = (((uint64_t)in_stack_00000044 << 32) | (uint32_t)arg13);
        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        char cVar1 = thread_id1_00 == g_idWorkerThread;
        if (!cVar1) {
            new (&local_68) std::__thread_id();
            cVar1 = thread_id1 == local_68;
            if (!cVar1) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          1785, nullptr);
            }
        }
        *(int*)(lVar10 + 88) = *(int*)(lVar10 + 88) - *(int*)(lVar10 + 124) * arg5;
        if (((int)waveStream == 0) ||
            (iVar2 = ((arg12 - (int)arg4) + (int)waveStream - 257) / (int)waveStream + arg5, arg11 < iVar2)) {
            iVar2 = arg11;
        }
        unsigned int uVar8 = arg5 * 2;
        unsigned long arg1_00 = (unsigned long)uVar8;
        int local_34 = arg7;
        Array<signed char>* local_48 = (Array<signed char>*)(((uint64_t)in_register_00000014 << 32) | (uint32_t)arg2);
        if ((int)uVar8 < iVar2 * 2) {
            arg1_00 = (unsigned long)(int)uVar8;
            local_58 = (long)(iVar2 * 2);
            local_40._0_4_ = arg6;
            do {
                this_01 = local_48;
                local_38 = (unsigned int)uVar9;
                iVar2 = (int)local_38 >> 8;
                pcVar4 = (char*)(*local_48)[(long)iVar2];
                cVar1 = *pcVar4;
                pcVar4 = (char*)(*this_01)[(long)(iVar2 + 1)];
                iVar2 = (int)local_40;
                iVar6 = (local_38 & 255) * ((int)*pcVar4 - (int)cVar1) + cVar1 * 256;
                iVar7 = iVar6 * (int)local_40;
                local_60 = arg1_00 + 1;
                piVar5 = &arg3[arg1_00];
                iVar3 = local_34;
                uVar8 = local_38;
                *piVar5 = *piVar5 + (iVar7 >> 6);
                local_40._0_4_ = iVar2 + arg8;
                iVar6 = iVar6 * local_34;
                arg1_00 = arg1_00 + 2;
                piVar5 = &arg3[local_60];
                *piVar5 = *piVar5 + (iVar6 >> 6);
                local_34 = iVar3 + arg9;
                uVar9 = (unsigned long)(uVar8 + (int)waveStream);
            } while ((long)arg1_00 < local_58);
            lVar10 = (((uint64_t)in_stack_00000044 << 32) | (uint32_t)arg13);
            arg6 = (int)local_40;
        }
        uVar8 = (unsigned int)uVar9;
        iVar2 = (int)arg1_00;
        if (((int)waveStream == 0) ||
            (iVar3 = (int)(~uVar8 + arg12 + (int)waveStream) / (int)waveStream + (iVar2 >> 1), arg11 < iVar3)) {
            iVar3 = arg11;
        }
        if (iVar2 < iVar3 * 2) {
            arg1_00 = (unsigned long)iVar2;
            local_40 = (long)(iVar3 * 2);
            lVar10 = arg1_00 << 32;
            do {
                uVar8 = (unsigned int)uVar9;
                local_38 = uVar8;
                pcVar4 = (char*)(*local_48)[(long)((int)uVar8 >> 8)];
                iVar2 = (uVar8 & 255) * (arg15 - *pcVar4) + *pcVar4 * 256;
                piVar5 = &arg3[arg1_00];
                uVar8 = local_38;
                *piVar5 = *piVar5 + (iVar2 * arg6 >> 6);
                arg6 = arg6 + arg8;
                iVar2 = iVar2 * local_34;
                arg1_00 = arg1_00 + 2;
                piVar5 = &arg3[lVar10 >> 32 | 1];
                *piVar5 = *piVar5 + (iVar2 >> 6);
                local_34 = local_34 + arg9;
                uVar8 = uVar8 + (int)waveStream;
                uVar9 = (unsigned long)uVar8;
                lVar10 = lVar10 + 8589934592;
            } while ((long)arg1_00 < local_40);
            lVar10 = (((uint64_t)in_stack_00000044 << 32) | (uint32_t)arg13);
        }
        *(int*)(lVar10 + 88) = *(int*)(lVar10 + 88) + *(int*)(lVar10 + 124) * ((int)arg1_00 >> 1);
        *(int*)(lVar10 + 92) = arg6;
        *(int*)(lVar10 + 96) = local_34;
        *(unsigned int*)(lVar10 + 72) = uVar8;
    }

    // 0x1002a43a0
    unsigned long WaveStream::DoMixForwardsRampMono(int arg1, int arg2, Array<signed char>& arg3, Array<int>& arg4,
                                                    int arg5, int arg6, int arg7, int arg8, int arg9, int arg10,
                                                    int arg11, WaveStream* waveStream, int arg13, int arg14) {
        bool cVar1;
        Array<signed char>* this_00;
        int iVar4;
        char* pcVar5;
        int* piVar6;
        uint32_t in_register_00000014;
        unsigned int uVar8;
        unsigned long arg1_00;
        uint32_t in_stack_00000034;
        __thread_id* local_58;
        unsigned long local_50;
        int local_38;
        unsigned int local_34;

        Array<signed char>* local_40 = (Array<signed char>*)(((uint64_t)in_register_00000014 << 32) | (uint32_t)arg2);
        unsigned long uVar7 = (unsigned long)(unsigned int)arg5;
        unsigned long uVar9 = (unsigned long)arg4 & 4294967295;
        long lVar2 = (((uint64_t)in_stack_00000034 << 32) | (uint32_t)arg11);
        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        char cVar3 = thread_id1_00 == g_idWorkerThread;
        if (!cVar3) {
            new (&local_58) std::__thread_id();
            cVar3 = thread_id1 == local_58;
            if (!cVar3) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          1745, nullptr);
            }
        }
        *(int*)(lVar2 + 92) = *(int*)(lVar2 + 92) - *(int*)(lVar2 + 128) * arg5;
        *(int*)(lVar2 + 96) = *(int*)(lVar2 + 96) - *(int*)(lVar2 + 132) * arg5;
        if (((int)waveStream == 0) ||
            (iVar4 = ((arg10 - (int)arg4) + (int)waveStream - 257) / (int)waveStream + arg5, arg9 < iVar4)) {
            iVar4 = arg9;
        }
        if (arg5 < iVar4) {
            uVar7 = (unsigned long)arg5;
            local_38 = iVar4;
            do {
                this_00 = local_40;
                local_34 = (unsigned int)uVar9;
                iVar4 = (int)local_34 >> 8;
                local_50 = uVar7;
                pcVar5 = (char*)(*local_40)[(long)iVar4];
                cVar3 = *pcVar5;
                pcVar5 = (char*)(*this_00)[(long)(iVar4 + 1)];
                cVar1 = *pcVar5;
                uVar8 = local_34 & 255;
                uVar7 = local_50 + 1;
                piVar6 = &arg3[local_50];
                *piVar6 = *piVar6 + ((int)((uVar8 * ((int)cVar1 - (int)cVar3) + cVar3 * 256) * arg6) >> 6);
                arg6 = arg6 + arg7;
                uVar9 = (unsigned long)(local_34 + (int)waveStream);
            } while (local_38 != (int)uVar7);
        }
        uVar8 = (unsigned int)uVar9;
        iVar4 = (int)uVar7;
        if (((int)waveStream == 0) ||
            (local_34 = (int)(~uVar8 + arg10 + (int)waveStream) / (int)waveStream + iVar4, arg9 < (int)local_34)) {
            local_34 = arg9;
        }
        if (iVar4 < (int)local_34) {
            arg1_00 = (long)iVar4;
            do {
                uVar8 = (unsigned int)uVar9;
                pcVar5 = (char*)(*local_40)[(long)((int)uVar8 >> 8)];
                cVar3 = *pcVar5;
                uVar7 = arg1_00 + 1;
                piVar6 = &arg3[arg1_00];
                *piVar6 = *piVar6 + ((int)(((uVar8 & 255) * (arg13 - cVar3) + cVar3 * 256) * arg6) >> 6);
                arg6 = arg6 + arg7;
                uVar8 = uVar8 + (int)waveStream;
                uVar9 = (unsigned long)uVar8;
                arg1_00 = uVar7;
            } while (local_34 != (int)uVar7);
        }
        lVar2 = (((uint64_t)in_stack_00000034 << 32) | (uint32_t)arg11);
        *(int*)(lVar2 + 92) = *(int*)(lVar2 + 92) + *(int*)(lVar2 + 128) * (int)uVar7;
        *(int*)(lVar2 + 96) = *(int*)(lVar2 + 96) + *(int*)(lVar2 + 132) * (int)uVar7;
        *(int*)(lVar2 + 88) = arg6;
        *(unsigned int*)(lVar2 + 72) = uVar8;
        return uVar7 & 4294967295;
    }

    // 0x1002a45c0
    uint64_t WaveStream::FinaliseRamp() {
        __thread_id* in_RAX;

        __thread_id* local_28 = in_RAX;
        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        if (!(thread_id1_00 == g_idWorkerThread)) {
            new (&local_28) std::__thread_id();
            if (!(thread_id1 == local_28)) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          1171, nullptr);
            }
        }
        unsigned int uVar1 = field_80;
        unsigned int uVar3 = 0;
        unsigned int uVar4 = 0;
        unsigned int uVar5 = 0;
        if (uVar1 != 2147483648) {
            uVar3 = GetLVol(uVar1, field_84);
            uVar4 = GetRVol(uVar1, field_84);
            uVar5 = uVar1;
        }
        uVar1 = field_88;
        if (((uVar1 == uVar5) && (field_92 == uVar3)) && (field_96 == uVar4)) {
            if (field_80 == 2147483648) {
                field_80 = 0;
                field_96 = 0;
                field_88 = 0;
                field_92 = 0;
                RemoveFromMixer();
                return 1;
            }
            SetMLRVol();
        } else {
            if ((int)uVar1 < (int)uVar5) {
                field_124 = 1;
                field_120 = uVar5 - uVar1;
            } else if (uVar1 - uVar5 == 0 || (int)uVar1 < (int)uVar5) {
                field_124 = 0;
            } else {
                field_124 = 4294967295;
                field_120 = uVar1 - uVar5;
            }
            uVar1 = field_92;
            uVar5 = uVar1 - uVar3;
            if ((int)uVar1 < (int)uVar3) {
                field_128 = 1;
                if ((field_120 == 0) || ((int)(uVar3 - uVar1) < (int)field_120)) {
                    field_120 = uVar3 - uVar1;
                }
            } else if (uVar5 == 0 || (int)uVar1 < (int)uVar3) {
                field_128 = 0;
            } else {
                field_128 = 4294967295;
                if ((field_120 == 0) || ((int)uVar5 < (int)field_120)) {
                    field_120 = uVar5;
                }
            }
            uVar1 = field_96;
            uVar5 = uVar1 - uVar4;
            if ((int)uVar1 < (int)uVar4) {
                field_132 = 1;
                if ((field_120 == 0) || ((int)(uVar4 - uVar1) < (int)field_120)) {
                    field_120 = uVar4 - uVar1;
                }
            } else if (uVar5 == 0 || (int)uVar1 < (int)uVar4) {
                field_132 = 0;
            } else {
                field_132 = 4294967295;
                if ((field_120 == 0) || ((int)uVar5 < (int)field_120)) {
                    field_120 = uVar5;
                }
            }
        }
        return 0;
    }

    // 0x1002a4790
    int WaveStream::DoMixForwards1To1Stereo(int arg1, Array<signed char>& arg2, Array<int>& arg3, int arg4, int arg5,
                                            int arg6, int arg7, int arg8, int arg9, int arg10, WaveStream* waveStream) {
        unsigned long uVar1;
        long lVar2;
        bool cVar3;
        char* pcVar5;
        int* piVar6;
        unsigned long uVar7;
        long lVar9;
        uint32_t in_register_00000034;
        long lVar13;
        uint32_t in_stack_0000002c;

        Array<signed char>* this_00 = (Array<signed char>*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1);
        unsigned int uVar8 = (int)arg3 >> 8;
        unsigned long local_38 = (unsigned long)uVar8;
        int iVar14 = arg5 * 4;
        int iVar12 = arg6 * 4;
        int iVar10 = (arg4 - uVar8) + (arg9 >> 8);
        if (arg8 < iVar10) {
            iVar10 = arg8;
        }
        unsigned int uVar11 = arg4 * 2;
        int iVar4 = iVar10 * 2 - 6;
        if ((int)uVar11 < iVar4) {
            local_38 = (unsigned long)(int)uVar8;
            lVar9 = (long)(int)uVar11;
            lVar13 = 0;
            do {
                pcVar5 = (char*)(*this_00)[local_38];
                cVar3 = *pcVar5;
                piVar6 = &arg2[lVar13 + lVar9];
                *piVar6 = *piVar6 + iVar14 * cVar3;
                piVar6 = &arg2[lVar13 + lVar9 + 1];
                *piVar6 = *piVar6 + cVar3 * iVar12;
                pcVar5 = (char*)(*this_00)[local_38 + 1];
                cVar3 = *pcVar5;
                piVar6 = &arg2[lVar13 + lVar9 + 2];
                *piVar6 = *piVar6 + iVar14 * cVar3;
                piVar6 = &arg2[lVar13 + lVar9 + 3];
                *piVar6 = *piVar6 + cVar3 * iVar12;
                uVar7 = local_38 + 3;
                pcVar5 = (char*)(*this_00)[local_38 + 2];
                cVar3 = *pcVar5;
                piVar6 = &arg2[lVar13 + lVar9 + 4];
                *piVar6 = *piVar6 + iVar14 * cVar3;
                piVar6 = &arg2[lVar13 + lVar9 + 5];
                *piVar6 = *piVar6 + cVar3 * iVar12;
                local_38 = local_38 + 4;
                pcVar5 = (char*)(*this_00)[uVar7];
                cVar3 = *pcVar5;
                piVar6 = &arg2[lVar13 + lVar9 + 6];
                *piVar6 = *piVar6 + iVar14 * cVar3;
                piVar6 = &arg2[lVar13 + lVar9 + 7];
                *piVar6 = *piVar6 + cVar3 * iVar12;
                lVar2 = lVar13 + lVar9;
                lVar13 = lVar13 + 8;
            } while (lVar2 + 8 < (long)iVar4);
            uVar11 = uVar11 + (int)lVar13;
        }
        uVar7 = (unsigned long)uVar11;
        if ((int)uVar11 < iVar10 * 2) {
            uVar7 = (unsigned long)(int)uVar11;
            lVar9 = uVar7 << 32;
            local_38 = (long)(int)local_38;
            do {
                uVar1 = local_38 + 1;
                pcVar5 = (char*)(*this_00)[local_38];
                cVar3 = *pcVar5;
                piVar6 = &arg2[uVar7];
                *piVar6 = *piVar6 + iVar14 * cVar3;
                uVar7 = uVar7 + 2;
                piVar6 = &arg2[lVar9 >> 32 | 1];
                *piVar6 = *piVar6 + cVar3 * iVar12;
                lVar9 = lVar9 + 8589934592;
                local_38 = uVar1;
            } while ((long)uVar7 < (long)(iVar10 * 2));
        }
        *(int*)((((uint64_t)in_stack_0000002c << 32) | (uint32_t)arg10) + 72) = (int)local_38 << 8;
        return (int)uVar7 >> 1;
    }

    // 0x1002a4a80
    int WaveStream::DoMixForwards1To1Mono(Array<signed char>& arg1, Array<int>& arg2, int arg3, int arg4, int arg5,
                                          int arg6, int arg7, int arg8, WaveStream* waveStream) {
        long lVar1;
        unsigned long arg1_00;
        char* pcVar3;
        int* piVar4;
        int iVar6;
        int iVar7;
        unsigned long uVar8;
        long lVar9;
        uint32_t in_stack_0000001c;
        __thread_id* local_90;
        long local_88;
        long local_80;
        unsigned long local_78;
        unsigned long local_70;
        unsigned long local_68;
        unsigned long local_50;
        unsigned long local_48;
        int local_38;

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        bool cVar2 = thread_id1_00 == g_idWorkerThread;
        if (!cVar2) {
            new (&local_90) std::__thread_id();
            cVar2 = thread_id1 == local_90;
            if (!cVar2) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          1265, nullptr);
            }
        }
        int local_34 = (int)arg2 >> 8;
        int local_3c = arg4 << 2;
        unsigned int uVar5 = (arg3 - local_34) + (arg7 >> 8);
        if (arg6 < (int)uVar5) {
            uVar5 = arg6;
        }
        if (arg3 < (int)(uVar5 - 3)) {
            local_88 = (long)local_34;
            local_50 = (unsigned long)arg3;
            local_80 = (long)(int)(uVar5 - 3);
            lVar9 = 0;
            local_78 = (unsigned long)uVar5;
            local_38 = arg3;
            do {
                uVar8 = local_50;
                lVar1 = local_88;
                local_48 = local_50 + lVar9;
                local_70 = local_88 + lVar9 + 1;
                pcVar3 = (char*)(*this)[local_88 + lVar9];
                iVar7 = local_3c;
                iVar6 = *pcVar3 * local_3c;
                local_68 = lVar9 + uVar8 + 1;
                piVar4 = &arg1[local_48];
                *piVar4 = *piVar4 + iVar6;
                local_48 = lVar1 + lVar9 + 2;
                pcVar3 = (char*)(*this)[local_70];
                uVar8 = local_50;
                cVar2 = *pcVar3;
                local_70 = local_50 + lVar9 + 2;
                piVar4 = &arg1[local_68];
                *piVar4 = *piVar4 + cVar2 * iVar7;
                local_68 = lVar1 + lVar9 + 3;
                pcVar3 = (char*)(*this)[local_48];
                iVar7 = local_3c;
                iVar6 = *pcVar3 * local_3c;
                local_48 = uVar8 + lVar9 + 3;
                piVar4 = &arg1[local_70];
                *piVar4 = *piVar4 + iVar6;
                pcVar3 = (char*)(*this)[local_68];
                cVar2 = *pcVar3;
                piVar4 = &arg1[local_48];
                *piVar4 = *piVar4 + cVar2 * iVar7;
                lVar1 = uVar8 + lVar9;
                lVar9 = lVar9 + 4;
            } while (lVar1 + 4 < local_80);
            arg3 = local_38 + (int)lVar9;
            local_34 = local_34 + (int)lVar9;
            uVar5 = (unsigned int)local_78;
        }
        if (arg3 < (int)uVar5) {
            local_50 = (unsigned long)local_34;
            iVar7 = 0;
            uVar8 = (long)arg3;
            local_38 = arg3;
            do {
                arg1_00 = local_50;
                local_50 = local_50 + 1;
                pcVar3 = (char*)(*this)[arg1_00];
                iVar6 = *pcVar3 * local_3c;
                piVar4 = &arg1[uVar8];
                *piVar4 = *piVar4 + iVar6;
                iVar7 = iVar7 - 1;
                uVar8 = uVar8 + 1;
            } while (arg3 - uVar5 != iVar7);
            local_34 = local_34 - iVar7;
            arg3 = local_38 - iVar7;
        }
        *(int*)((((uint64_t)in_stack_0000001c << 32) | (uint32_t)arg8) + 72) = local_34 << 8;
        return arg3;
    }

    // 0x1002a4d00
    int WaveStream::DoMixForwardsStereo(int arg1, int arg2, Array<signed char>& arg3, Array<int>& arg4, int arg5,
                                        int arg6, int arg7, int arg8, int arg9, int arg10, int arg11,
                                        WaveStream* waveStream, int arg13, int arg14) {
        Array<signed char>* pAVar1;
        int iVar3;
        int iVar4;
        char* pcVar5;
        int* piVar6;
        uint32_t in_register_00000014;
        long lVar7;
        uint32_t in_stack_00000034;
        __thread_id* local_58;
        unsigned long local_40;
        long local_38;

        unsigned long uVar9 = (unsigned long)arg4 & 4294967295;
        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        char cVar2 = thread_id1_00 == g_idWorkerThread;
        if (!cVar2) {
            new (&local_58) std::__thread_id();
            cVar2 = thread_id1 == local_58;
            if (!cVar2) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          1440, nullptr);
            }
        }
        if (((int)waveStream == 0) ||
            (iVar3 = ((arg10 - (int)arg4) + (int)waveStream - 257) / (int)waveStream + arg5, arg9 < iVar3)) {
            iVar3 = arg9;
        }
        unsigned int uVar8 = arg5 * 2;
        unsigned long arg1_00 = (unsigned long)uVar8;
        Array<signed char>* local_48 = (Array<signed char>*)(((uint64_t)in_register_00000014 << 32) | (uint32_t)arg2);
        if ((int)uVar8 < iVar3 * 2) {
            arg1_00 = (unsigned long)(int)uVar8;
            local_38 = (long)(iVar3 * 2);
            do {
                uVar8 = (unsigned int)uVar9;
                pcVar5 = (char*)(*local_48)[(long)((int)uVar8 >> 8)];
                cVar2 = *pcVar5;
                pcVar5 = (char*)(*local_48)[(long)(((int)uVar8 >> 8) + 1)];
                pAVar1 = arg3;
                iVar3 = (uVar8 & 255) * ((int)*pcVar5 - (int)cVar2) + cVar2 * 256;
                local_40 = arg1_00 + 1;
                piVar6 = &arg3[arg1_00];
                *piVar6 = *piVar6 + (iVar3 * arg6 >> 6);
                arg1_00 = arg1_00 + 2;
                piVar6 = (int*)(*pAVar1)[local_40];
                *piVar6 = *piVar6 + (iVar3 * arg7 >> 6);
                uVar9 = (unsigned long)(uVar8 + (int)waveStream);
            } while ((long)arg1_00 < local_38);
        }
        uVar8 = (unsigned int)uVar9;
        iVar3 = (int)arg1_00;
        if (((int)waveStream == 0) ||
            (iVar4 = (int)(~uVar8 + arg10 + (int)waveStream) / (int)waveStream + (iVar3 >> 1), arg9 < iVar4)) {
            iVar4 = arg9;
        }
        if (iVar3 < iVar4 * 2) {
            arg1_00 = (unsigned long)iVar3;
            local_38 = (long)(iVar4 * 2);
            lVar7 = arg1_00 << 32;
            do {
                uVar8 = (unsigned int)uVar9;
                local_40 = (((uint64_t)local_40._4_4_ << 32) | (uint32_t)uVar8);
                pcVar5 = (char*)(*local_48)[(long)((int)uVar8 >> 8)];
                pAVar1 = arg3;
                iVar4 = (uVar8 & 255) * (arg13 - *pcVar5) + *pcVar5 * 256;
                piVar6 = &arg3[arg1_00];
                *piVar6 = *piVar6 + (iVar4 * arg6 >> 6);
                arg1_00 = arg1_00 + 2;
                iVar3 = (int)local_40;
                piVar6 = (int*)(*pAVar1)[lVar7 >> 32 | 1];
                *piVar6 = *piVar6 + (iVar4 * arg7 >> 6);
                uVar8 = iVar3 + (int)waveStream;
                uVar9 = (unsigned long)uVar8;
                lVar7 = lVar7 + 8589934592;
            } while ((long)arg1_00 < local_38);
        }
        *(unsigned int*)((((uint64_t)in_stack_00000034 << 32) | (uint32_t)arg11) + 72) = uVar8;
        return (int)arg1_00 >> 1;
    }

    // 0x1002a4f50
    unsigned long WaveStream::DoMixForwardsMono(int arg1, int arg2, Array<signed char>& arg3, Array<int>& arg4,
                                                int arg5, int arg6, int arg7, int arg8, int arg9, int arg10,
                                                WaveStream* waveStream, int arg12, int arg13) {
        bool cVar1;
        char* pcVar3;
        int* piVar4;
        int iVar5;
        int iVar6;
        uint32_t in_register_00000014;
        unsigned int uVar7;
        unsigned long uVar8;
        unsigned int uVar10;
        uint32_t in_stack_0000002c;
        __thread_id* local_50;
        int local_3c;
        Array<signed char>* local_38;

        Array<signed char>* this_00 = (Array<signed char>*)(((uint64_t)in_register_00000014 << 32) | (uint32_t)arg2);
        unsigned long uVar9 = (unsigned long)(unsigned int)arg5;
        unsigned long uVar11 = (unsigned long)arg4 & 4294967295;
        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        char cVar2 = thread_id1_00 == g_idWorkerThread;
        if (!cVar2) {
            new (&local_50) std::__thread_id();
            cVar2 = thread_id1 == local_50;
            if (!cVar2) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          1407, nullptr);
            }
        }
        if (((int)waveStream == 0) ||
            (iVar6 = ((arg9 - (int)arg4) + (int)waveStream - 257) / (int)waveStream + arg5, arg8 < iVar6)) {
            iVar6 = arg8;
        }
        if (arg5 < iVar6) {
            uVar8 = (long)arg5;
            local_3c = iVar6;
            do {
                local_38 = (Array<signed char>*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)((int)uVar11));
                iVar6 = (int)uVar11 >> 8;
                pcVar3 = (char*)(*this_00)[(long)iVar6];
                cVar2 = *pcVar3;
                pcVar3 = (char*)(*this_00)[(long)(iVar6 + 1)];
                cVar1 = *pcVar3;
                uVar10 = (unsigned int)local_38;
                uVar7 = (unsigned int)local_38 & 255;
                uVar9 = uVar8 + 1;
                piVar4 = &arg3[uVar8];
                *piVar4 = *piVar4 + ((int)((uVar7 * ((int)cVar1 - (int)cVar2) + cVar2 * 256) * arg6) >> 6);
                uVar11 = (unsigned long)(uVar10 + (int)waveStream);
                uVar8 = uVar9;
            } while (local_3c != (int)uVar9);
        }
        uVar10 = (unsigned int)uVar11;
        iVar6 = (int)uVar9;
        if (((int)waveStream == 0) ||
            (iVar5 = (int)(~uVar10 + arg9 + (int)waveStream) / (int)waveStream + iVar6, arg8 < iVar5)) {
            iVar5 = arg8;
        }
        if (iVar6 < iVar5) {
            uVar8 = (long)iVar6;
            local_38 = this_00;
            do {
                uVar10 = (unsigned int)uVar11;
                pcVar3 = (char*)(*local_38)[(long)((int)uVar10 >> 8)];
                cVar2 = *pcVar3;
                uVar9 = uVar8 + 1;
                piVar4 = &arg3[uVar8];
                *piVar4 = *piVar4 + ((int)(((uVar10 & 255) * (arg12 - cVar2) + cVar2 * 256) * arg6) >> 6);
                uVar10 = uVar10 + (int)waveStream;
                uVar11 = (unsigned long)uVar10;
                uVar8 = uVar9;
            } while (iVar5 != (int)uVar9);
        }
        *(unsigned int*)((((uint64_t)in_stack_0000002c << 32) | (uint32_t)arg10) + 72) = uVar10;
        return uVar9 & 4294967295;
    }

    // 0x1002a5130
    int WaveStream::DoMixBackwards1To1RampStereo(int arg1, Array<signed char>& arg2, Array<int>& arg3, int arg4,
                                                 int arg5, int arg6, int arg7, int arg8, int arg9, int arg10, int arg11,
                                                 int arg12, WaveStream* waveStream) {
        long lVar1;
        Array<signed char>* pAVar3;
        unsigned long arg1_00;
        char* pcVar5;
        long lVar8;
        uint32_t in_register_00000034;
        uint32_t in_register_00000084;
        int iVar13;
        uint32_t in_stack_0000003c;
        __thread_id* local_f0;
        unsigned long local_e8;
        unsigned long local_e0;
        long local_d8;
        unsigned long local_d0;
        unsigned long local_c8;
        long local_c0;
        int local_b4;
        int local_b0;
        int local_ac;
        long local_a8;
        long local_a0;
        unsigned long local_90;
        unsigned long local_88;
        unsigned long local_60;
        unsigned long local_58;
        unsigned long local_48;
        unsigned long local_40;
        unsigned long local_38;

        unsigned long local_80 = (((uint64_t)in_register_00000084 << 32) | (uint32_t)arg4);
        Array<signed char>* local_78 = (Array<signed char>*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1);
        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        char cVar4 = thread_id1_00 == g_idWorkerThread;
        if (!cVar4) {
            new (&local_f0) std::__thread_id();
            cVar4 = thread_id1 == local_f0;
            if (!cVar4) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          1688, nullptr);
            }
        }
        unsigned int uVar10 = (int)arg3 >> 8;
        unsigned long local_98 = (unsigned long)uVar10;
        unsigned long uVar14 = (unsigned long)(unsigned int)(arg5 << 2);
        unsigned long uVar12 = (unsigned long)(unsigned int)(arg6 << 2);
        int iVar9 = (int)local_80;
        int iVar7 = ((iVar9 + uVar10) - (arg11 >> 8)) + 1;
        if (arg10 < iVar7) {
            iVar7 = arg10;
        }
        int iVar11 = iVar7 * 2 - 6;
        unsigned long local_68 = (unsigned long)(unsigned int)(arg7 * 4);
        int* piVar6 = (int*)((((uint64_t)in_stack_0000003c << 32) | (uint32_t)arg12) + 88);
        *piVar6 = *piVar6 + (iVar7 - iVar9) * *(int*)((((uint64_t)in_stack_0000003c << 32) | (uint32_t)arg12) + 124);
        unsigned long local_70 = (unsigned long)(unsigned int)(arg8 * 4);
        unsigned int uVar2 = iVar9 * 2;
        unsigned long arg1_01 = (unsigned long)uVar2;
        iVar9 = iVar7 * 2;
        if ((int)uVar2 < iVar11) {
            local_a0 = (long)(int)uVar10;
            local_c0 = (long)(int)uVar2;
            local_d8 = (long)iVar11;
            local_b4 = arg7 * 12;
            local_d0 = (unsigned long)(unsigned int)(arg7 << 3);
            local_b0 = arg8 * 12;
            local_c8 = (unsigned long)(unsigned int)(arg8 << 3);
            lVar8 = 0;
            local_38 = 0;
            local_ac = iVar7 * 2;
            local_80 = arg1_01;
            do {
                lVar1 = local_c0;
                local_48 = local_38 + local_c0;
                local_60 = (local_a0 + lVar8) - 1;
                local_a8 = lVar8;
                pcVar5 = (char*)(*local_78)[local_a0 + lVar8];
                cVar4 = *pcVar5;
                local_40 = local_38 + lVar1 + 1;
                local_58 = uVar14;
                piVar6 = &arg2[local_48];
                *piVar6 = *piVar6 + (int)uVar14 * (int)cVar4;
                iVar7 = (int)uVar14 + (int)local_68;
                iVar11 = (int)uVar12;
                local_90 = local_38 + lVar1 + 2;
                piVar6 = &arg2[local_40];
                *piVar6 = *piVar6 + cVar4 * iVar11;
                local_48 = local_a0 - 2 + local_a8;
                local_40._0_4_ = (int)local_70 + iVar11;
                pcVar5 = (char*)(*local_78)[local_60];
                pAVar3 = arg2;
                cVar4 = *pcVar5;
                local_e0 = local_38 + lVar1 + 3;
                piVar6 = &arg2[local_90];
                iVar9 = (int)local_40;
                lVar1 = local_c0;
                *piVar6 = *piVar6 + iVar7 * cVar4;
                local_88 = (((uint64_t)local_88._4_4_ << 32) | (uint32_t)((int)local_d0 + (int)local_58));
                iVar13 = cVar4 * (int)local_40;
                local_e8 = local_38 + local_c0 + 4;
                local_60._0_4_ = iVar7 + (int)local_68;
                piVar6 = (int*)(*pAVar3)[local_e0];
                *piVar6 = *piVar6 + iVar13;
                local_40._0_4_ = iVar9 + (int)local_70;
                iVar9 = (int)local_c8;
                local_90 = local_a0 - 3 + local_a8;
                pcVar5 = (char*)(*local_78)[local_48];
                pAVar3 = arg2;
                local_48 = (((uint64_t)local_48._4_4_ << 32) | (uint32_t)((int)*pcVar5));
                iVar7 = (int)local_88 * *pcVar5;
                local_88 = local_38 + lVar1 + 5;
                piVar6 = &arg2[local_e8];
                *piVar6 = *piVar6 + iVar7;
                local_60 = (((uint64_t)local_60._4_4_ << 32) | (uint32_t)((int)local_60 + (int)local_68));
                local_58 = (unsigned long)(unsigned int)((int)local_58 + local_b4);
                iVar9 = (iVar9 + iVar11) * (int)local_48;
                local_48 = local_38 + lVar1 + 6;
                piVar6 = (int*)(*pAVar3)[local_88];
                *piVar6 = *piVar6 + iVar9;
                local_40 = (((uint64_t)local_40._4_4_ << 32) | (uint32_t)((int)local_40 + (int)local_70));
                iVar11 = iVar11 + local_b0;
                pcVar5 = (char*)(*local_78)[local_90];
                cVar4 = *pcVar5;
                iVar9 = (int)local_58;
                local_58 = local_38 + lVar1 + 7;
                piVar6 = (int*)(*pAVar3)[local_48];
                *piVar6 = *piVar6 + iVar9 * cVar4;
                uVar14 = (unsigned long)(unsigned int)((int)local_60 + (int)local_68);
                piVar6 = &arg2[local_58];
                *piVar6 = *piVar6 + iVar11 * cVar4;
                uVar12 = (unsigned long)(unsigned int)((int)local_40 + (int)local_70);
                lVar1 = lVar1 + local_38;
                local_38 = local_38 + 8;
                lVar8 = local_a8 - 4;
            } while (lVar1 + 8 < local_d8);
            arg1_01 = (unsigned long)(unsigned int)((int)local_80 + (int)local_38);
            local_98 = (unsigned long)(unsigned int)((int)local_98 + (int)lVar8);
            iVar9 = local_ac;
        }
        uVar10 = (unsigned int)uVar14;
        if ((int)arg1_01 < iVar9) {
            local_98 = (unsigned long)(int)local_98;
            arg1_01 = (unsigned long)(int)arg1_01;
            local_40 = (unsigned long)iVar9;
            lVar8 = arg1_01 << 32;
            do {
                arg1_00 = local_98;
                local_98 = local_98 - 1;
                local_38 = uVar12;
                pcVar5 = (char*)(*local_78)[arg1_00];
                cVar4 = *pcVar5;
                piVar6 = &arg2[arg1_01];
                *piVar6 = *piVar6 + (int)uVar14 * (int)cVar4;
                uVar10 = (int)uVar14 + (int)local_68;
                uVar14 = (unsigned long)uVar10;
                iVar9 = (int)local_38;
                arg1_01 = arg1_01 + 2;
                piVar6 = &arg2[lVar8 >> 32 | 1];
                *piVar6 = *piVar6 + cVar4 * iVar9;
                uVar12 = (unsigned long)(unsigned int)(iVar9 + (int)local_70);
                lVar8 = lVar8 + 8589934592;
            } while ((long)arg1_01 < (long)local_40);
        }
        lVar8 = (((uint64_t)in_stack_0000003c << 32) | (uint32_t)arg12);
        *(int*)(lVar8 + 92) = (int)uVar10 >> 2;
        *(int*)(lVar8 + 96) = (int)uVar12 >> 2;
        *(int*)(lVar8 + 72) = (int)local_98 << 8;
        return (int)arg1_01 >> 1;
    }

    // 0x1002a55f0
    unsigned long WaveStream::DoMixBackwards1To1RampMono(Array<signed char>& arg1, Array<int>& arg2, int arg3, int arg4,
                                                         int arg5, int arg6, int arg7, int arg8, int arg9,
                                                         WaveStream* waveStream) {
        char* pcVar2;
        int* piVar3;
        long lVar4;
        uint32_t in_register_0000000c;
        int iVar10;
        unsigned long arg1_00;
        unsigned long arg1_01;
        uint32_t in_stack_00000024;
        __thread_id* local_a8;
        unsigned long local_a0;
        long local_98;
        unsigned long local_90;
        unsigned long local_88;
        int local_70;
        int local_6c;
        long local_68;
        unsigned long local_60;
        unsigned long local_58;
        unsigned long local_38;

        unsigned long local_78 = (((uint64_t)in_register_0000000c << 32) | (uint32_t)arg3);
        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        bool cVar1 = thread_id1_00 == g_idWorkerThread;
        if (!cVar1) {
            new (&local_a8) std::__thread_id();
            cVar1 = thread_id1 == local_a8;
            if (!cVar1) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          1650, nullptr);
            }
        }
        unsigned int uVar5 = (int)arg2 >> 8;
        unsigned long uVar11 = (unsigned long)uVar5;
        int iVar9 = arg4 << 2;
        int iVar6 = (int)local_78;
        unsigned int uVar7 = ((iVar6 + uVar5) - (arg8 >> 8)) + 1;
        if (arg7 < (int)uVar7) {
            uVar7 = arg7;
        }
        unsigned long local_80 = (unsigned long)uVar7;
        long lVar12 = (((uint64_t)in_stack_00000024 << 32) | (uint32_t)arg9);
        *(int*)(lVar12 + 92) = *(int*)(lVar12 + 92) + *(int*)(lVar12 + 128) * (uVar7 - iVar6);
        *(int*)(lVar12 + 96) = *(int*)(lVar12 + 96) + (uVar7 - iVar6) * *(int*)(lVar12 + 132);
        unsigned long local_40 = (unsigned long)(unsigned int)(arg5 * 4);
        unsigned long uVar8 = local_78;
        if (iVar6 < (int)(uVar7 - 3)) {
            local_68 = (long)iVar6;
            local_98 = (long)(int)(uVar7 - 3);
            uVar8 = (long)(int)uVar5 - 1;
            local_6c = arg5 * 12;
            local_90 = (unsigned long)(unsigned int)(arg5 << 3);
            lVar12 = 0;
            local_88 = uVar11;
            do {
                lVar4 = local_68;
                local_38 = lVar12 + local_68;
                local_58 = uVar8;
                pcVar2 = (char*)(*this)[uVar8 + 1];
                cVar1 = *pcVar2;
                local_60 = lVar12 + lVar4 + 1;
                piVar3 = &arg1[local_38];
                *piVar3 = *piVar3 + cVar1 * iVar9;
                iVar10 = iVar9 + (int)local_40;
                local_38 = local_58 - 1;
                pcVar2 = (char*)(*this)[local_58];
                lVar4 = local_68;
                cVar1 = *pcVar2;
                local_a0 = local_68 + lVar12 + 2;
                piVar3 = &arg1[local_60];
                *piVar3 = *piVar3 + cVar1 * iVar10;
                iVar10 = iVar10 + (int)local_40;
                local_70 = (int)local_90 + iVar9;
                local_60 = local_58 - 2;
                pcVar2 = (char*)(*this)[local_38];
                iVar6 = *pcVar2 * local_70;
                local_38 = lVar4 + lVar12 + 3;
                piVar3 = &arg1[local_a0];
                *piVar3 = *piVar3 + iVar6;
                iVar10 = iVar10 + (int)local_40;
                iVar9 = iVar9 + local_6c;
                pcVar2 = (char*)(*this)[local_60];
                cVar1 = *pcVar2;
                piVar3 = &arg1[local_38];
                *piVar3 = *piVar3 + cVar1 * iVar9;
                iVar9 = iVar10 + (int)local_40;
                lVar4 = local_68 + lVar12;
                lVar12 = lVar12 + 4;
                uVar8 = local_58 - 4;
            } while (lVar4 + 4 < local_98);
            uVar8 = (unsigned long)(unsigned int)((int)local_78 + (int)lVar12);
            uVar11 = (unsigned long)(unsigned int)((int)local_88 - (int)lVar12);
            uVar7 = (unsigned int)local_80;
        }
        if ((int)uVar8 < (int)uVar7) {
            arg1_00 = (long)(int)uVar11;
            arg1_01 = (long)(int)uVar8;
            do {
                uVar11 = arg1_00 - 1;
                pcVar2 = (char*)(*this)[arg1_00];
                cVar1 = *pcVar2;
                uVar8 = arg1_01 + 1;
                piVar3 = &arg1[arg1_01];
                *piVar3 = *piVar3 + cVar1 * iVar9;
                iVar9 = iVar9 + (int)local_40;
                arg1_00 = uVar11;
                arg1_01 = uVar8;
            } while ((int)local_80 != (int)uVar8);
        }
        *(int*)((((uint64_t)in_stack_00000024 << 32) | (uint32_t)arg9) + 88) = iVar9 >> 2;
        *(int*)((((uint64_t)in_stack_00000024 << 32) | (uint32_t)arg9) + 72) = (int)uVar11 << 8;
        return uVar8 & 4294967295;
    }

    // 0x1002a58c0
    void WaveStream::DoMixBackwardsRampStereo(int arg1, int arg2, Array<signed char>& arg3, Array<int>& arg4, int arg5,
                                              int arg6, int arg7, int arg8, int arg9, int arg10, int arg11, int arg12,
                                              int arg13, WaveStream* waveStream, int arg15, int arg16) {
        Array<signed char>* this_00;
        int iVar4;
        char* pcVar5;
        uint32_t in_register_00000014;
        int iVar7;
        int iVar8;
        int iVar10;
        uint32_t in_stack_00000044;
        __thread_id* local_68;
        long local_60;
        uint64_t local_50;
        unsigned int local_38;

        Array<signed char>* local_58 = (Array<signed char>*)(((uint64_t)in_register_00000014 << 32) | (uint32_t)arg2);
        unsigned long uVar11 = (unsigned long)arg4 & 4294967295;
        long lVar9 = (((uint64_t)in_stack_00000044 << 32) | (uint32_t)arg13);
        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        char cVar3 = thread_id1_00 == g_idWorkerThread;
        if (!cVar3) {
            new (&local_68) std::__thread_id();
            cVar3 = thread_id1 == local_68;
            if (!cVar3) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          1876, nullptr);
            }
        }
        int* piVar6 = (int*)(lVar9 + 88);
        *piVar6 = *piVar6 - *(int*)(lVar9 + 124) * arg5;
        if (((int)waveStream == 0) ||
            (iVar4 = ((arg12 - (int)arg4) + (int)waveStream + 256) / (int)waveStream + arg5, arg11 < iVar4)) {
            iVar4 = arg11;
        }
        int local_34 = arg6;
        unsigned int uVar1 = arg5 * 2;
        unsigned long arg1_00 = (unsigned long)uVar1;
        int local_3c = arg7;
        if ((int)uVar1 < iVar4 * 2) {
            arg1_00 = (unsigned long)(int)uVar1;
            local_50 = (long)(iVar4 * 2);
            do {
                this_00 = local_58;
                local_38 = (unsigned int)uVar11;
                iVar4 = (int)local_38 >> 8;
                local_3c = arg7;
                pcVar5 = (char*)(*local_58)[(long)(iVar4 - 1)];
                cVar3 = *pcVar5;
                pcVar5 = (char*)(*this_00)[(long)iVar4];
                iVar4 = local_34;
                iVar7 = (local_38 & 255) * ((int)*pcVar5 - (int)cVar3) + cVar3 * 256;
                iVar8 = iVar7 * local_34;
                uVar11 = arg1_00 + 1;
                piVar6 = &arg3[arg1_00];
                uVar1 = local_38;
                *piVar6 = *piVar6 + (iVar8 >> 6);
                local_34 = iVar4 + arg8;
                iVar7 = iVar7 * local_3c;
                arg1_00 = arg1_00 + 2;
                piVar6 = &arg3[uVar11];
                *piVar6 = *piVar6 + (iVar7 >> 6);
                arg7 = local_3c + arg9;
                uVar11 = (unsigned long)(uVar1 + (int)waveStream);
                local_3c = arg7;
            } while ((long)arg1_00 < local_50);
        }
        unsigned long uVar2 = (unsigned long)local_50 >> 32;
        local_38 = (unsigned int)uVar11;
        iVar4 = (int)arg1_00;
        if (((int)waveStream == 0) ||
            (iVar7 = (int)((arg12 + (int)waveStream) - local_38) / (int)waveStream + (iVar4 >> 1), arg11 < iVar7)) {
            iVar7 = arg11;
        }
        if (iVar4 < iVar7 * 2) {
            local_50 = (((uint64_t)((int)uVar2) << 32) | (uint32_t)(arg15 << 8));
            arg1_00 = (unsigned long)iVar4;
            local_60 = (long)(iVar7 * 2);
            lVar9 = arg1_00 << 32;
            do {
                local_38 = (unsigned int)uVar11;
                pcVar5 = (char*)(*local_58)[(long)((int)local_38 >> 8)];
                iVar7 = local_34;
                iVar10 = (local_38 & 255) * (*pcVar5 - arg15) + (int)local_50;
                iVar8 = iVar10 * local_34;
                piVar6 = &arg3[arg1_00];
                iVar4 = local_3c;
                *piVar6 = *piVar6 + (iVar8 >> 6);
                local_34 = iVar7 + arg8;
                iVar10 = iVar10 * local_3c;
                arg1_00 = arg1_00 + 2;
                piVar6 = &arg3[lVar9 >> 32 | 1];
                *piVar6 = *piVar6 + (iVar10 >> 6);
                local_3c = iVar4 + arg9;
                local_38 = local_38 + (int)waveStream;
                uVar11 = (unsigned long)local_38;
                lVar9 = lVar9 + 8589934592;
            } while ((long)arg1_00 < local_60);
        }
        lVar9 = (((uint64_t)in_stack_00000044 << 32) | (uint32_t)arg13);
        *(int*)(lVar9 + 88) = *(int*)(lVar9 + 88) + *(int*)(lVar9 + 124) * ((int)arg1_00 >> 1);
        *(int*)(lVar9 + 92) = local_34;
        *(int*)(lVar9 + 96) = local_3c;
        *(unsigned int*)(lVar9 + 72) = local_38;
    }

    // 0x1002a5b60
    unsigned long WaveStream::DoMixBackwardsRampMono(int arg1, int arg2, Array<signed char>& arg3, Array<int>& arg4,
                                                     int arg5, int arg6, int arg7, int arg8, int arg9, int arg10,
                                                     int arg11, WaveStream* waveStream, int arg13, int arg14) {
        bool cVar1;
        Array<signed char>* this_00;
        int iVar4;
        char* pcVar5;
        int* piVar6;
        uint32_t in_register_00000014;
        unsigned int uVar8;
        unsigned long arg1_00;
        uint32_t in_stack_00000034;
        __thread_id* local_60;
        int local_44;
        unsigned long local_40;
        unsigned int local_34;

        Array<signed char>* local_50 = (Array<signed char>*)(((uint64_t)in_register_00000014 << 32) | (uint32_t)arg2);
        unsigned long uVar7 = (unsigned long)(unsigned int)arg5;
        unsigned long uVar9 = (unsigned long)arg4 & 4294967295;
        long lVar2 = (((uint64_t)in_stack_00000034 << 32) | (uint32_t)arg11);
        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        char cVar3 = thread_id1_00 == g_idWorkerThread;
        if (!cVar3) {
            new (&local_60) std::__thread_id();
            cVar3 = thread_id1 == local_60;
            if (!cVar3) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          1835, nullptr);
            }
        }
        *(int*)(lVar2 + 92) = *(int*)(lVar2 + 92) - *(int*)(lVar2 + 128) * arg5;
        *(int*)(lVar2 + 96) = *(int*)(lVar2 + 96) - *(int*)(lVar2 + 132) * arg5;
        if (((int)waveStream == 0) ||
            (iVar4 = ((arg10 - (int)arg4) + (int)waveStream + 256) / (int)waveStream + arg5, arg9 < iVar4)) {
            iVar4 = arg9;
        }
        if (arg5 < iVar4) {
            uVar7 = (unsigned long)arg5;
            local_44 = iVar4;
            do {
                this_00 = local_50;
                local_34 = (unsigned int)uVar9;
                iVar4 = (int)local_34 >> 8;
                local_40 = uVar7;
                pcVar5 = (char*)(*local_50)[(long)(iVar4 - 1)];
                cVar3 = *pcVar5;
                pcVar5 = (char*)(*this_00)[(long)iVar4];
                cVar1 = *pcVar5;
                uVar8 = local_34 & 255;
                uVar7 = local_40 + 1;
                piVar6 = &arg3[local_40];
                *piVar6 = *piVar6 + ((int)((uVar8 * ((int)cVar1 - (int)cVar3) + cVar3 * 256) * arg6) >> 6);
                arg6 = arg6 + arg7;
                uVar9 = (unsigned long)(local_34 + (int)waveStream);
            } while (local_44 != (int)uVar7);
        }
        uVar8 = (unsigned int)uVar9;
        iVar4 = (int)uVar7;
        if (((int)waveStream == 0) ||
            (local_34 = (int)((arg10 + (int)waveStream) - uVar8) / (int)waveStream + iVar4, arg9 < (int)local_34)) {
            local_34 = arg9;
        }
        if (iVar4 < (int)local_34) {
            local_40 = (((uint64_t)local_40._4_4_ << 32) | (uint32_t)(arg13 << 8));
            arg1_00 = (long)iVar4;
            do {
                uVar8 = (unsigned int)uVar9;
                pcVar5 = (char*)(*local_50)[(long)((int)uVar8 >> 8)];
                iVar4 = (uVar8 & 255) * (*pcVar5 - arg13) + (int)local_40;
                uVar7 = arg1_00 + 1;
                piVar6 = &arg3[arg1_00];
                *piVar6 = *piVar6 + (iVar4 * arg6 >> 6);
                arg6 = arg6 + arg7;
                uVar8 = uVar8 + (int)waveStream;
                uVar9 = (unsigned long)uVar8;
                arg1_00 = uVar7;
            } while (local_34 != (int)uVar7);
        }
        lVar2 = (((uint64_t)in_stack_00000034 << 32) | (uint32_t)arg11);
        *(int*)(lVar2 + 92) = *(int*)(lVar2 + 92) + *(int*)(lVar2 + 128) * (int)uVar7;
        *(int*)(lVar2 + 96) = *(int*)(lVar2 + 96) + *(int*)(lVar2 + 132) * (int)uVar7;
        *(int*)(lVar2 + 88) = arg6;
        *(unsigned int*)(lVar2 + 72) = uVar8;
        return uVar7 & 4294967295;
    }

    // 0x1002a5d80
    int WaveStream::DoMixBackwards1To1Stereo(int arg1, Array<signed char>& arg2, Array<int>& arg3, int arg4, int arg5,
                                             int arg6, int arg7, int arg8, int arg9, int arg10,
                                             WaveStream* waveStream) {
        long lVar1;
        unsigned long arg1_00;
        char* pcVar6;
        int* piVar7;
        uint32_t in_register_00000034;
        long lVar11;
        uint32_t in_stack_0000002c;
        __thread_id* local_98;
        long local_90;
        unsigned long local_88;
        int local_74;
        unsigned long local_70;
        unsigned long local_68;
        long local_60;
        unsigned long local_50;
        unsigned long local_40;

        Array<signed char>* local_58 = (Array<signed char>*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1);
        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        char cVar4 = thread_id1_00 == g_idWorkerThread;
        if (!cVar4) {
            new (&local_98) std::__thread_id();
            cVar4 = thread_id1 == local_98;
            if (!cVar4) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          1365, nullptr);
            }
        }
        Array<signed char>* pAVar3 = arg2;
        unsigned int uVar10 = (int)arg3 >> 8;
        unsigned long local_48 = (unsigned long)uVar10;
        int local_38 = arg5 << 2;
        int local_34 = arg6 << 2;
        int iVar8 = ((arg4 + uVar10) - (arg9 >> 8)) + 1;
        if (arg8 < iVar8) {
            iVar8 = arg8;
        }
        unsigned int uVar2 = arg4 * 2;
        unsigned long arg1_01 = (unsigned long)uVar2;
        int iVar5 = iVar8 * 2 - 6;
        int iVar9 = iVar8 * 2;
        if ((int)uVar2 < iVar5) {
            local_48 = (unsigned long)(int)uVar10;
            local_60 = (long)(int)uVar2;
            local_90 = (long)iVar5;
            lVar11 = 0;
            local_88 = arg1_01;
            local_74 = iVar8 * 2;
            do {
                lVar1 = local_60;
                local_50 = local_60 + lVar11;
                local_40 = local_48 - 1;
                pcVar6 = (char*)(*local_58)[local_48];
                cVar4 = *pcVar6;
                iVar8 = local_38 * cVar4;
                local_68 = lVar1 + lVar11 + 1;
                piVar7 = (int*)(*pAVar3)[local_50];
                *piVar7 = *piVar7 + iVar8;
                iVar8 = cVar4 * local_34;
                local_70 = lVar1 + lVar11 + 2;
                piVar7 = (int*)(*pAVar3)[local_68];
                *piVar7 = *piVar7 + iVar8;
                local_50 = local_48 - 2;
                pcVar6 = (char*)(*local_58)[local_40];
                lVar1 = local_60;
                cVar4 = *pcVar6;
                iVar8 = local_38 * cVar4;
                local_40 = local_60 + lVar11 + 3;
                piVar7 = (int*)(*pAVar3)[local_70];
                *piVar7 = *piVar7 + iVar8;
                iVar8 = cVar4 * local_34;
                local_70 = lVar1 + lVar11 + 4;
                piVar7 = (int*)(*pAVar3)[local_40];
                *piVar7 = *piVar7 + iVar8;
                local_40 = local_48 - 3;
                pcVar6 = (char*)(*local_58)[local_50];
                cVar4 = *pcVar6;
                iVar8 = local_38 * cVar4;
                local_68 = lVar1 + lVar11 + 5;
                piVar7 = (int*)(*pAVar3)[local_70];
                *piVar7 = *piVar7 + iVar8;
                iVar8 = cVar4 * local_34;
                local_50 = lVar1 + lVar11 + 6;
                piVar7 = (int*)(*pAVar3)[local_68];
                *piVar7 = *piVar7 + iVar8;
                local_48 = local_48 - 4;
                pcVar6 = (char*)(*local_58)[local_40];
                cVar4 = *pcVar6;
                iVar8 = local_38 * cVar4;
                local_40 = lVar1 + lVar11 + 7;
                piVar7 = (int*)(*pAVar3)[local_50];
                *piVar7 = *piVar7 + iVar8;
                iVar8 = cVar4 * local_34;
                piVar7 = (int*)(*pAVar3)[local_40];
                *piVar7 = *piVar7 + iVar8;
                lVar1 = lVar1 + lVar11;
                lVar11 = lVar11 + 8;
            } while (lVar1 + 8 < local_90);
            arg1_01 = (unsigned long)(unsigned int)((int)local_88 + (int)lVar11);
            iVar9 = local_74;
        }
        pAVar3 = arg2;
        if ((int)arg1_01 < iVar9) {
            local_48 = (unsigned long)(int)local_48;
            arg1_01 = (unsigned long)(int)arg1_01;
            local_60 = (long)iVar9;
            lVar11 = arg1_01 << 32;
            do {
                arg1_00 = local_48;
                local_48 = local_48 - 1;
                pcVar6 = (char*)(*local_58)[arg1_00];
                cVar4 = *pcVar6;
                iVar8 = local_38 * cVar4;
                piVar7 = (int*)(*pAVar3)[arg1_01];
                *piVar7 = *piVar7 + iVar8;
                iVar8 = cVar4 * local_34;
                arg1_01 = arg1_01 + 2;
                piVar7 = (int*)(*pAVar3)[lVar11 >> 32 | 1];
                *piVar7 = *piVar7 + iVar8;
                lVar11 = lVar11 + 8589934592;
            } while ((long)arg1_01 < local_60);
        }
        *(int*)((((uint64_t)in_stack_0000002c << 32) | (uint32_t)arg10) + 72) = (int)local_48 << 8;
        return (int)arg1_01 >> 1;
    }

    // 0x1002a60b0
    unsigned long WaveStream::DoMixBackwards1To1Mono(Array<signed char>& arg1, Array<int>& arg2, int arg3, int arg4,
                                                     int arg5, int arg6, int arg7, int arg8, WaveStream* waveStream) {
        long lVar1;
        char* pcVar3;
        int* piVar4;
        uint32_t in_register_0000000c;
        unsigned long arg1_00;
        long lVar10;
        unsigned long arg1_01;
        uint32_t in_stack_0000001c;
        __thread_id* local_98;
        unsigned long local_90;
        unsigned long local_88;
        long local_80;
        unsigned long local_78;
        unsigned long local_70;
        long local_68;
        unsigned long local_58;
        unsigned long local_50;

        unsigned long local_60 = (((uint64_t)in_register_0000000c << 32) | (uint32_t)arg3);
        int local_34 = arg4;
        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        if (!(thread_id1_00 == g_idWorkerThread)) {
            new (&local_98) std::__thread_id();
            if (!(thread_id1 == local_98)) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          1336, nullptr);
            }
        }
        unsigned int uVar7 = (int)arg2 >> 8;
        unsigned long uVar8 = (unsigned long)uVar7;
        local_34 = local_34 << 2;
        int iVar6 = (int)local_60;
        unsigned int uVar5 = ((iVar6 + uVar7) - (arg7 >> 8)) + 1;
        if (arg6 < (int)uVar5) {
            uVar5 = arg6;
        }
        unsigned long uVar9 = local_60;
        if (iVar6 < (int)(uVar5 - 3)) {
            uVar9 = (unsigned long)(int)uVar7;
            local_68 = (long)iVar6;
            local_80 = (long)(int)(uVar5 - 3);
            lVar10 = 0;
            local_78 = uVar8;
            local_70 = (unsigned long)uVar5;
            do {
                lVar1 = local_68;
                uVar8 = local_68 + lVar10;
                local_58 = uVar9 - 1;
                pcVar3 = (char*)(*this)[uVar9];
                iVar6 = *pcVar3 * local_34;
                local_50 = lVar1 + lVar10 + 1;
                piVar4 = &arg1[uVar8];
                *piVar4 = *piVar4 + iVar6;
                local_90 = uVar9 - 2;
                pcVar3 = (char*)(*this)[local_58];
                lVar1 = local_68;
                iVar6 = *pcVar3 * local_34;
                local_88 = local_68 + lVar10 + 2;
                piVar4 = &arg1[local_50];
                *piVar4 = *piVar4 + iVar6;
                local_58 = uVar9 - 3;
                pcVar3 = (char*)(*this)[local_90];
                iVar6 = *pcVar3 * local_34;
                local_50 = lVar1 + lVar10 + 3;
                piVar4 = &arg1[local_88];
                *piVar4 = *piVar4 + iVar6;
                uVar9 = uVar9 - 4;
                pcVar3 = (char*)(*this)[local_58];
                iVar6 = *pcVar3 * local_34;
                piVar4 = &arg1[local_50];
                *piVar4 = *piVar4 + iVar6;
                lVar1 = lVar1 + lVar10;
                lVar10 = lVar10 + 4;
            } while (lVar1 + 4 < local_80);
            uVar9 = (unsigned long)(unsigned int)((int)local_60 + (int)lVar10);
            uVar8 = (unsigned long)(unsigned int)((int)local_78 - (int)lVar10);
            uVar5 = (unsigned int)local_70;
        }
        if ((int)uVar9 < (int)uVar5) {
            arg1_00 = (long)(int)uVar8;
            arg1_01 = (long)(int)uVar9;
            do {
                uVar8 = arg1_00 - 1;
                pcVar3 = (char*)(*this)[arg1_00];
                iVar6 = *pcVar3 * local_34;
                uVar9 = arg1_01 + 1;
                piVar4 = &arg1[arg1_01];
                *piVar4 = *piVar4 + iVar6;
                arg1_00 = uVar8;
                arg1_01 = uVar9;
            } while (uVar5 != (unsigned int)uVar9);
        }
        *(int*)((((uint64_t)in_stack_0000001c << 32) | (uint32_t)arg8) + 72) = (int)uVar8 << 8;
        return uVar9 & 4294967295;
    }

    // 0x1002a6300
    int WaveStream::DoMixBackwardsStereo(int arg1, int arg2, Array<signed char>& arg3, Array<int>& arg4, int arg5,
                                         int arg6, int arg7, int arg8, int arg9, int arg10, int arg11,
                                         WaveStream* waveStream, int arg13, int arg14) {
        int iVar2;
        int iVar3;
        char* pcVar4;
        int* piVar5;
        uint32_t in_register_00000014;
        Array<signed char>* pAVar8;
        long lVar9;
        uint32_t in_stack_00000034;
        __thread_id* local_60;
        long local_58;
        unsigned long local_40;
        long local_38;

        unsigned long uVar7 = (unsigned long)arg4 & 4294967295;
        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        char cVar1 = thread_id1_00 == g_idWorkerThread;
        if (!cVar1) {
            new (&local_60) std::__thread_id();
            cVar1 = thread_id1 == local_60;
            if (!cVar1) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          1515, nullptr);
            }
        }
        if (((int)waveStream == 0) ||
            (iVar2 = ((arg10 - (int)arg4) + (int)waveStream + 256) / (int)waveStream + arg5, arg9 < iVar2)) {
            iVar2 = arg9;
        }
        unsigned int uVar6 = arg5 * 2;
        unsigned long arg1_00 = (unsigned long)uVar6;
        Array<signed char>* local_48 = (Array<signed char>*)(((uint64_t)in_register_00000014 << 32) | (uint32_t)arg2);
        if ((int)uVar6 < iVar2 * 2) {
            arg1_00 = (unsigned long)(int)uVar6;
            local_38 = (long)(iVar2 * 2);
            do {
                pAVar8 = local_48;
                uVar6 = (unsigned int)uVar7;
                local_40 = arg1_00;
                pcVar4 = (char*)(*local_48)[(long)(((int)uVar6 >> 8) - 1)];
                uVar7 = local_40;
                cVar1 = *pcVar4;
                pcVar4 = (char*)(*pAVar8)[(long)((int)uVar6 >> 8)];
                iVar2 = (uVar6 & 255) * ((int)*pcVar4 - (int)cVar1) + cVar1 * 256;
                piVar5 = &arg3[uVar7];
                *piVar5 = *piVar5 + (iVar2 * arg6 >> 6);
                arg1_00 = uVar7 + 2;
                piVar5 = &arg3[uVar7 + 1];
                *piVar5 = *piVar5 + (iVar2 * arg7 >> 6);
                uVar7 = (unsigned long)(uVar6 + (int)waveStream);
            } while ((long)arg1_00 < local_38);
        }
        uVar6 = (unsigned int)uVar7;
        iVar2 = (int)arg1_00;
        if (((int)waveStream == 0) ||
            (iVar3 = (int)((arg10 + (int)waveStream) - uVar6) / (int)waveStream + (iVar2 >> 1), arg9 < iVar3)) {
            iVar3 = arg9;
        }
        if (iVar2 < iVar3 * 2) {
            local_38 = (((uint64_t)local_38._4_4_ << 32) | (uint32_t)(arg13 << 8));
            arg1_00 = (unsigned long)iVar2;
            local_58 = (long)(iVar3 * 2);
            lVar9 = arg1_00 << 32;
            pAVar8 = local_48;
            do {
                uVar6 = (unsigned int)uVar7;
                local_40 = (((uint64_t)local_40._4_4_ << 32) | (uint32_t)uVar6);
                pcVar4 = (char*)(*pAVar8)[(long)((int)uVar6 >> 8)];
                iVar3 = (uVar6 & 255) * (*pcVar4 - arg13) + (int)local_38;
                piVar5 = &arg3[arg1_00];
                pAVar8 = local_48;
                *piVar5 = *piVar5 + (iVar3 * arg6 >> 6);
                iVar2 = (int)local_40;
                arg1_00 = arg1_00 + 2;
                piVar5 = &arg3[lVar9 >> 32 | 1];
                *piVar5 = *piVar5 + (iVar3 * arg7 >> 6);
                uVar6 = iVar2 + (int)waveStream;
                uVar7 = (unsigned long)uVar6;
                lVar9 = lVar9 + 8589934592;
            } while ((long)arg1_00 < local_58);
        }
        *(unsigned int*)((((uint64_t)in_stack_00000034 << 32) | (uint32_t)arg11) + 72) = uVar6;
        return (int)arg1_00 >> 1;
    }

    // 0x1002a6560
    unsigned long WaveStream::DoMixBackwardsMono(int arg1, int arg2, Array<signed char>& arg3, Array<int>& arg4,
                                                 int arg5, int arg6, int arg7, int arg8, int arg9, int arg10,
                                                 WaveStream* waveStream, int arg12, int arg13) {
        bool cVar1;
        Array<signed char>* this_00;
        char* pcVar3;
        int* piVar4;
        int iVar5;
        uint32_t in_register_00000014;
        unsigned long uVar6;
        int iVar7;
        unsigned int uVar9;
        uint32_t in_stack_0000002c;
        __thread_id* local_50;
        int local_38;
        unsigned int local_34;

        unsigned long uVar8 = (unsigned long)(unsigned int)arg5;
        unsigned long uVar10 = (unsigned long)arg4 & 4294967295;
        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        char cVar2 = thread_id1_00 == g_idWorkerThread;
        if (!cVar2) {
            new (&local_50) std::__thread_id();
            cVar2 = thread_id1 == local_50;
            if (!cVar2) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "wave_stream.cpp",
                          1481, nullptr);
            }
        }
        if (((int)waveStream == 0) ||
            (iVar5 = ((arg9 - (int)arg4) + (int)waveStream + 256) / (int)waveStream + arg5, arg8 < iVar5)) {
            iVar5 = arg8;
        }
        Array<signed char>* local_40 = (Array<signed char>*)(((uint64_t)in_register_00000014 << 32) | (uint32_t)arg2);
        if (arg5 < iVar5) {
            uVar6 = (long)arg5;
            local_38 = iVar5;
            do {
                this_00 = local_40;
                local_34 = (unsigned int)uVar10;
                iVar5 = (int)local_34 >> 8;
                pcVar3 = (char*)(*local_40)[(long)(iVar5 - 1)];
                uVar9 = local_34;
                cVar2 = *pcVar3;
                pcVar3 = (char*)(*this_00)[(long)iVar5];
                cVar1 = *pcVar3;
                uVar8 = uVar6 + 1;
                piVar4 = &arg3[uVar6];
                *piVar4 = *piVar4 + ((int)(((uVar9 & 255) * ((int)cVar1 - (int)cVar2) + cVar2 * 256) * arg6) >> 6);
                uVar10 = (unsigned long)(uVar9 + (int)waveStream);
                uVar6 = uVar8;
            } while (local_38 != (int)uVar8);
        }
        uVar9 = (unsigned int)uVar10;
        iVar5 = (int)uVar8;
        if (((int)waveStream == 0) ||
            (iVar7 = (int)((arg9 + (int)waveStream) - uVar9) / (int)waveStream + iVar5, arg8 < iVar7)) {
            iVar7 = arg8;
        }
        if (iVar5 < iVar7) {
            local_34 = arg12 << 8;
            uVar6 = (long)iVar5;
            do {
                uVar9 = (unsigned int)uVar10;
                pcVar3 = (char*)(*local_40)[(long)((int)uVar9 >> 8)];
                iVar5 = (uVar9 & 255) * (*pcVar3 - arg12) + local_34;
                uVar8 = uVar6 + 1;
                piVar4 = &arg3[uVar6];
                *piVar4 = *piVar4 + (iVar5 * arg6 >> 6);
                uVar9 = uVar9 + (int)waveStream;
                uVar10 = (unsigned long)uVar9;
                uVar6 = uVar8;
            } while (iVar7 != (int)uVar8);
        }
        *(unsigned int*)((((uint64_t)in_stack_0000002c << 32) | (uint32_t)arg10) + 72) = uVar9;
        return uVar8 & 4294967295;
    }

} // namespace jag::oldscape::sound
