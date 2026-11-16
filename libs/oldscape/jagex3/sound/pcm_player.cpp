// libs/oldscape/jagex3/sound/pcm_player.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "pcm_player.h"

namespace jag::oldscape::sound {
    // 0x1016c1ba8
    int64_t PCMPlayer::m_stereo;

    // 0x1016c1bd0
    int32_t PCMPlayer::m_frequency;

    // 0x1016c1dc8
    bool PCMPlayer::m_clipWarn;

    // 0x1016c1dc9
    bool PCMPlayer::m_alreadyWarnedSubstreamsW;

    // 0x1016c1dd0
    int64_t PCMPlayer::m_pcmPlayerFactory;

    // 0x100009e70: PCMPlayer::SubclassInit() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: PCMPlayer::DiscardBufferInner() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: PCMPlayer::Lock() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: PCMPlayer::Open(int) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: PCMPlayer::Close() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: PCMPlayer::Unlock() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x1000b9a40: PCMPlayer::AlreadyWritten() has the same machine code as configdecoder::DBRowType::GetDbTableId() const

    // 0x100293900
    PCMPlayer::PCMPlayer() : PCMPlayerMainThread() {
        *(uint64_t*)&field_8 = 32;
        new (&field_16) Array<int>();
        field_52 = 0;
        field_60 = 0;
        field_68 = &__mh_execute_header;
        field_76 = 0;
        field_88 = 0;
        new (&field_96) shared_ptr();
        new (&field_112) shared_ptr();
        field_128 = 0;
        new (&field_136) Array<shared_ptr<PCMStream>>(8);
        new (&field_160) Array<shared_ptr<PCMStream>>(8);
        field_40 = core::SafeTime::CurrentTimeMillis();
    }

    // 0x100293ef0
    void PCMPlayer::Generate(Array<int>& arg1, int arg2) {
        int iVar4;
        int iVar5;
        unsigned int uVar6;
        long* plVar8;
        shared_ptr<dash3d::GroundDecor>* psVar9;
        long lVar10;
        int* piVar11;
        shared_ptr<PCMStream>* this_01;
        unsigned int uVar13;
        unsigned int uVar14;
        shared_ptr<midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        unsigned long uVar15;
        shared_ptr<PCMStream> local_e8;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_d8;
        __thread_id* local_c8;
        shared_ptr<midi2::MidiPlayerMainThread> local_c0;
        shared_ptr<RSevenDebugPresetProvider> local_a8;
        unsigned long local_98;
        Array<shared_ptr<PCMStream>>* local_90;
        unsigned int local_7c;
        unsigned int local_78;
        shared_ptr<RSevenDebugPresetProvider> local_70;
        unsigned long local_60;
        unsigned long local_58;
        Array<shared_ptr<PCMStream>>* local_50;
        unsigned int local_44;
        unsigned int local_40;
        unsigned int local_3c;

        PCMPlayer* local_38 = this;
        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        if (!(thread_id1_00 == g_idWorkerThread)) {
            new (&local_c8) std::__thread_id();
            if (!(thread_id1 == local_c8)) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "pcm_player.cpp",
                          180, nullptr);
            }
        }
        uint64_t uVar7 = arg1.data();
        ___bzero(uVar7);
        local_38->field_128 = local_38->field_128 - arg2;
        shared_ptr<PCMStream>* local_88 = (shared_ptr<PCMStream>*)&local_38->field_112;
        bool bVar3 = *local_88 != nullptr;
        PCMPlayer* this_00 = local_38;
        shared_ptr<PCMStream>* psVar12 = local_88;
        if ((bVar3) && (local_38->field_128 < 1)) {
            local_38->field_128 = (m_frequency >> 4) + local_38->field_128;
            ResetWantMix((PCMStream*)**local_88);
            (*psVar12).operator->();
            iVar4 = PCMStream::Priority();
            AddToBands(this_00, psVar12, iVar4);
            local_50 = (Array<shared_ptr<PCMStream>>*)&this_00->field_136;
            local_90 = (Array<shared_ptr<PCMStream>>*)&this_00->field_160;
            uVar6 = 7;
            local_3c = 255;
            local_98 = 0;
            local_60 = 0;
            do {
                uVar13 = uVar6 & 3;
                if (-1 < (int)uVar6) {
                    uVar13 = uVar6;
                }
                uVar14 = (int)local_3c >> ((uint8_t)uVar13 & 31) & 286331153;
                local_78 = uVar6;
                if (uVar14 != 0) {
                    local_44 = (int)uVar6 >> 31 & -((int)uVar6 >> 2);
                    local_58 = (unsigned long)(int)uVar13;
                    do {
                        uVar15 = local_58;
                        uVar6 = uVar14;
                        if ((uVar14 & 1) != 0) {
                            local_40 = 1 << ((uint8_t)local_58 & 31);
                            local_7c = uVar14;
                            local_70 = shared_ptr();
                            psVar9 = (shared_ptr<dash3d::GroundDecor>*)(*local_50)[uVar15];
                            local_a8 = shared_ptr(psVar9);
                            local_3c = local_3c & ~local_40;
                            while (bVar3 = local_a8 != nullptr, bVar3) {
                                lVar10 = local_a8.operator->();
                                midiPlayerMainThread = (shared_ptr<midi2::MidiPlayerMainThread>*)(lVar10 + 56);
                                bVar3 = *midiPlayerMainThread != nullptr;
                                if ((bVar3) &&
                                    (piVar11 = (int*)(*midiPlayerMainThread).operator->(), (int)local_44 < *piVar11)) {
                                    local_70 = local_a8;
                                    lVar10 = local_a8.operator->();
                                    local_a8 = (*((lVar10 + 32)));
                                    local_3c = local_3c | local_40;
                                } else {
                                    lVar10 = local_a8.operator->();
                                    *(uint8_t*)(lVar10 + 52) = 1;
                                    plVar8 = (long*)local_a8.operator->();
                                    iVar4 = (**(void (**)(...))(*plVar8 + 32))(plVar8);
                                    bVar3 = *midiPlayerMainThread != nullptr;
                                    if (bVar3) {
                                        piVar11 = (int*)(*midiPlayerMainThread).operator->();
                                        *piVar11 = *piVar11 + iVar4;
                                    }
                                    uVar6 = (int)local_98 + iVar4;
                                    local_98 = (unsigned long)uVar6;
                                    if (*(int*)&local_38->field_8 <= (int)uVar6) {
                                        local_60 =
                                            (((uint64_t)((int64_t)((unsigned long)local_38 >> 8)) << 8) | (uint8_t)1);
                                        break;
                                    }
                                    plVar8 = (long*)local_a8.operator->();
                                    (**(void (**)(...))(*plVar8 + 16))(&local_c0);
                                    bVar3 = local_c0 != nullptr;
                                    if (bVar3) {
                                        lVar10 = local_a8.operator->();
                                        iVar4 = *(int*)(lVar10 + 48);
                                        while (bVar3 = local_c0 != nullptr, bVar3) {
                                            local_c0.operator->();
                                            iVar5 = PCMStream::Priority();
                                            AddToBands(local_38, &local_c0, iVar5 * iVar4 >> 8);
                                            plVar8 = (long*)local_a8.operator->();
                                            (**(void (**)(...))(*plVar8 + 24))(&local_e8, plVar8);
                                            local_c0 = local_e8;
                                        }
                                    }
                                    lVar10 = local_a8.operator->();
                                    local_e8 = shared_ptr((lVar10 + 32));
                                    local_d8 = shared_ptr();
                                    lVar10 = local_a8.operator->();
                                    (*((lVar10 + 32))) = local_d8;
                                    bVar3 = local_70 == nullptr;
                                    if (bVar3) {
                                        psVar12 = (shared_ptr<PCMStream>*)(*local_50)[local_58];
                                        *psVar12 = local_e8;
                                    } else {
                                        lVar10 = local_70.operator->();
                                        (*((lVar10 + 32))) = local_e8;
                                    }
                                    bVar3 = local_e8 == nullptr;
                                    if (bVar3) {
                                        psVar12 = (shared_ptr<PCMStream>*)(*local_90)[local_58];
                                        *psVar12 = local_70;
                                    }
                                    local_a8 = local_e8;
                                }
                            }
                            uVar6 = local_7c;
                            if ((local_60 & 1) != 0)
                                break;
                        }
                        local_58 = local_58 + 4;
                        local_44 = local_44 + 1;
                        uVar14 = uVar6 >> 4;
                    } while (15 < uVar6);
                }
            } while (((local_60 & 1) == 0) && (uVar6 = local_78 - 1, local_3c != 0));
            uVar15 = 0;
            do {
                psVar9 = (shared_ptr<dash3d::GroundDecor>*)(*local_50)[uVar15];
                local_70 = shared_ptr(psVar9);
                local_a8 = shared_ptr();
                psVar12 = (shared_ptr<PCMStream>*)(*local_90)[uVar15];
                psVar12 = (shared_ptr<PCMStream>*)* psVar12 = local_a8;
                this_01 = (shared_ptr<PCMStream>*)(*local_50)[uVar15];
                *this_01 = *psVar12;
                while (true) {
                    bVar3 = local_70 != nullptr;
                    if (!bVar3)
                        break;
                    lVar10 = local_70.operator->();
                    local_a8 = shared_ptr((lVar10 + 32));
                    local_c0 = shared_ptr();
                    lVar10 = local_70.operator->();
                    (*((lVar10 + 32))) = local_c0;
                    local_70 = local_a8;
                }
                uVar15 = uVar15 + 1;
            } while (uVar15 != 8);
        }
        psVar12 = local_88;
        if (local_38->field_128 < 0) {
            local_38->field_128 = 0;
        }
        bVar3 = *local_88 != nullptr;
        iVar4 = arg2;
        if (bVar3) {
            plVar8 = (long*)(*psVar12).operator->();
            (**(void (**)(...))(*plVar8 + 40))(plVar8, arg1, 0, iVar4);
        }
        uVar7 = core::SafeTime::CurrentTimeMillis();
        local_38->field_40 = uVar7;
    }

    // 0x10029f990
    void PCMPlayer::SetPCMPlayerFactory(std::unique_ptr<PCMPlayerFactory>&& pcmPlayerFactory) {
        *this = pcmPlayerFactory;
    }

    // 0x10029f9c0
    void PCMPlayer::Init(int arg1, bool arg2) {
        if (40000 < arg1 - 8000U) {
            LogAndAbort("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                        "pcm_player.cpp",
                        40, "invalid frequency");
        }
        m_frequency = arg1;
        m_stereo = arg2;
    }

    // 0x10029fa10
    auto PCMPlayer::GetPlayer(int arg1, int arg2) {
        auto result;
        int local_30[2];

        char* char = &result;
        if (m_frequency == 0) {
            char = "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                   "pcm_player.cpp";
            LogAndAbort("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                        "pcm_player.cpp",
                        54, "invalid frequency: %i", 0);
        }
        if (1 < (unsigned int)arg1) {
            char = "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                   "pcm_player.cpp";
            LogAndAbort("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                        "pcm_player.cpp",
                        60, "invalid player id: %i", (unsigned long)(unsigned int)arg1);
        }
        unsigned int uVar6 = 256;
        if (256 < arg2) {
            uVar6 = arg2;
        }
        uint64_t* puVar2 = (uint64_t*)(*char).operator->();
        (**(void (**)(...))*puVar2)(&result, puVar2);
        long lVar3 = (result).operator->();
        ((lVar3 + 16))->set_max_size((unsigned long)m_stereo * 256 + 256, 3);
        lVar3 = (result).operator->();
        *(unsigned int*)(lVar3 + 76) = uVar6;
        long* plVar4 = (long*)(result).operator->();
        (**(void (**)(...))(*plVar4 + 56))(plVar4);
        local_30[0] = (uVar6 & 2147482624) + 1024;
        local_30[1] = 16384;
        auto piVar5 = std::min<int>(*local_30, *(local_30 + 1));
        int iVar1 = *piVar5;
        lVar3 = (result).operator->();
        *(int*)(lVar3 + 48) = iVar1;
        plVar4 = (long*)(result).operator->();
        (**(void (**)(...))(*plVar4 + 64))(plVar4, (int)plVar4[6]);
        return result;
    }

    // 0x10029fb90
    void PCMPlayer::SetInput(const shared_ptr<PCMStream>& pcmStream) {
        ReturnValue local_78;
        function<Task*()> local_68[56];
        long local_30;

        auto thread_id1 = std::this_thread::get_id();
        if (!(thread_id1 == g_idMainThread)) {
            LogAssert("std::this_thread::get_id() == g_idMainThread",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                      "pcm_player.cpp",
                      102, nullptr);
        }
        field_112 = pcmStream;
        auto this_00 = getTaskRunner();
        std::function<Task*()>::function<PCMPlayer::SetInput(shared_ptr<PCMStream> const&)::__1, void>(local_68,
                                                                                                       (__1*)this);
        this_00->DeclareTask("PCMPlayer::PlayerTask", "OldscapeSound", *local_68);
        if (!(field_96 == nullptr)) {
            LogAssert("m_task == nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                      "pcm_player.cpp",
                      114, "PCMPlayer::SetInput can be called at most once.  Changing input is not supported.");
        }
        auto str = getTaskRunner();
        make_shared<PCMPlayer::PlayerTask, PCMPlayer&>(&local_78, this);
        local_68->AddTask<PCMPlayer::PlayerTask>(str, (shared_ptr<PCMPlayer::PlayerTask>*)"PCMPlayer::PlayerTask");
        field_96 = *local_68;
    }

    // 0x10029fed0
    void PCMPlayer::DoneUpdate() {
        __thread_id* local_20;

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        if (!(thread_id1_00 == g_idWorkerThread)) {
            new (&local_20) std::__thread_id();
            if (!(thread_id1 == local_20)) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "pcm_player.cpp",
                          120, nullptr);
            }
        }
        *(uint32_t*)((long)&field_68 + 4) = 1;
    }

    // 0x10029ff50
    void PCMPlayer::QueueDiscardBuffer() {
        if (std::this_thread::get_id() == g_idMainThread == '\0') {
            LogAssert("std::this_thread::get_id() == g_idMainThread",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                      "pcm_player.cpp",
                      126, nullptr);
        }
        *(uint32_t*)((long)&field_68 + 4) = 1;
        SubclassInit();
    }

    // 0x10029ffb0
    void PCMPlayer::QueueQuit() {

        if (std::this_thread::get_id() == g_idMainThread == '\0') {
            LogAssert("std::this_thread::get_id() == g_idMainThread",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                      "pcm_player.cpp",
                      144, nullptr);
        }
        ((TaskRunner*)getTaskRunner())->RemoveTask<PCMPlayer::PlayerTask>(field_96);
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_30;
        field_96 = local_30;
        SubclassInit();
    }

    // 0x1002a00e0
    void PCMPlayer::QueueAudioMuted(bool arg1) {
        uint32_t in_register_00000031;

        field_12 = (((uint32_t)in_register_00000031 << 8) | (uint8_t)arg1);
    }

    // 0x1002a00f0
    void PCMPlayer::PretendToGenerate(int arg1) {
        __thread_id* in_RAX;
        long* plVar4;

        __thread_id* local_28 = in_RAX;
        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        if (!(thread_id1_00 == g_idWorkerThread)) {
            new (&local_28) std::__thread_id();
            if (!(thread_id1 == local_28)) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "pcm_player.cpp",
                          163, nullptr);
            }
        }
        int iVar3 = field_128 - arg1;
        if (iVar3 < 0) {
            iVar3 = 0;
        }
        field_128 = iVar3;
        if (field_112 != nullptr) {
            plVar4 = (long*)field_112.operator->();
            (**(void (**)(...))(*plVar4 + 48))(plVar4, arg1);
        }
    }

    // 0x1002a01a0
    void PCMPlayer::ResetWantMix(PCMStream& pcmStream) {
        uint32_t* puVar3;
        uint8_t local_38[16];
        __thread_id* local_28;

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        if (!(thread_id1_00 == g_idWorkerThread)) {
            new (&local_28) std::__thread_id();
            if (!(thread_id1 == local_28)) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "pcm_player.cpp",
                          379, nullptr);
            }
        }
        pcmStream.field_52 = 0;
        if (pcmStream.field_56 != nullptr) {
            puVar3 = (uint32_t*)pcmStream.field_56.operator->();
            *puVar3 = 0;
        }
        (pcmStream._vptr[1]._dtor)(local_38, pcmStream);
    }

    // 0x1002a0300
    void PCMPlayer::AddToBands(const shared_ptr<PCMStream>& pcmStream, int arg2) {
        shared_ptr<PCMStream>* psVar3;
        long lVar4;
        __thread_id* local_50;

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        if (!(thread_id1_00 == g_idWorkerThread)) {
            new (&local_50) std::__thread_id();
            if (!(thread_id1 == local_50)) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "pcm_player.cpp",
                          394, nullptr);
            }
        }
        unsigned long arg1 = (unsigned long)(arg2 >> 5);
        shared_ptr<dash3d::GroundDecor>* groundDecor = &field_160[arg1];
        shared_ptr<dash3d::Decor> local_48(groundDecor);
        if (local_48 == nullptr) {
            psVar3 = &field_136[arg1];
            *psVar3 = pcmStream;
        } else {
            lVar4 = local_48.operator->();
            (*((lVar4 + 32))) = pcmStream;
        }
        psVar3 = &field_160[arg1];
        *psVar3 = pcmStream;
        lVar4 = pcmStream.operator->();
        *(int*)(lVar4 + 48) = arg2;
    }

    // 0x1002a0500
    void PCMPlayer::PlayerTask::OnInterval(float arg1, unsigned long long arg2) {
        SetWorkerThread();
        field_448->slot6();
        ClearWorkerThread();
    }

    // 0x1002a0580
    void DummyPCMPlayer::Service() {
        __thread_id* in_RAX;
        int iVar2;

        __thread_id* local_28 = in_RAX;
        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = g_idWorkerThread;
        if (!(thread_id1_00 == g_idWorkerThread)) {
            new (&local_28) std::__thread_id();
            if (!(thread_id1 == local_28)) {
                LogAssert("std::this_thread::get_id() == g_idWorkerThread || g_idWorkerThread == std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/sound/"
                          "pcm_player.cpp",
                          420, nullptr);
            }
        }
        if (0 < field_48) {
            iVar2 = 0;
            do {
                Generate(field_16, 256);
                iVar2 = iVar2 + 256;
            } while (iVar2 < field_48);
        }
    }

    // 0x100c92b50: PCMPlayer::~PCMPlayer() has the same machine code as InlineFatalBreak()

} // namespace jag::oldscape::sound
