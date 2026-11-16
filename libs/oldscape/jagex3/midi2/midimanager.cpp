// libs/oldscape/jagex3/midi2/midimanager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

namespace jag::oldscape::midi2 {
    class MidiManager {
    public:
        void Init(jagex3::Js5* js51, jagex3::Js5* js52, jagex3::Js5* js53,
                  std::array<shared_ptr<MidiPlayerMainThread>, 3ul> midiPlayerMainThreads);
        void IsInitialised();
        void Play(const eastl::vector<shared_ptr<MidiRequest>>& midiRequests, int arg2, int arg3, int arg4, int arg5,
                  bool arg6);
        void ValidateActiveRequests(bool arg1);
        void EnqueueRequests(const eastl::vector<shared_ptr<MidiRequest>>& midiRequests, bool arg2);
        void SetFadeParameters(int arg1, int arg2, int arg3, int arg4);
        auto GetCurrentActiveRequests();
        void SetVolume(int arg1);
        void Stop(int arg1, int arg2);
        void ClearRequestsImmediate();
        unsigned long IsPlaying();
        void SwapSongs(int arg1, int arg2, int arg3, int arg4);
        bool HasPreviousSong(int arg1);
        unsigned long CanPlayPreviousSongs();
        void ResetPreviousSongs();
        void ResetPendingRequests();
        void ResetTaskList();
        void PlayPreviousSongs(jagex3::Js5* js5, int arg2);
        void Service();
        void SetPreviousRequests(const eastl::vector<shared_ptr<MidiRequest>>& midiRequests, int arg2, int arg3,
                                 int arg4, int arg5);
        static int64_t m_pPatches;
        static int64_t m_pVorbis;
        static int64_t m_pJagFX;
        static std::array<shared_ptr<MidiPlayerMainThread>, 3ul>
            m_midiPlayers; // = array<shared_ptr<MidiPlayerMainThread>, 3ul>()
        static vector<shared_ptr<MidiRequest>,
                      eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, false, eastl::dummy_allocator>>
            m_activeRequests;
        static eastl::fixed_queue<shared_ptr<MidiRequest>, 4ul, false>
            m_pendingRequests;                                 // = fixed_queue<shared_ptr<MidiRequest>, 4ul, false>()
        static eastl::vector<shared_ptr<MidiTask>> m_taskList; // = vector<shared_ptr<MidiTask>>()
        static vector<shared_ptr<MidiRequest>,
                      eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, false, eastl::dummy_allocator>>
            m_previousRequests;
        static int32_t m_fadeOutDelay;
        static int32_t m_fadeOutDuration;
        static int32_t m_fadeInDelay;
        static int32_t m_fadeInDuration;

        uint8_t _unknown_0[1];
    };

    // 0x1016c5ee8
    int64_t MidiManager::m_pPatches;

    // 0x1016c5ef0
    int64_t MidiManager::m_pVorbis;

    // 0x1016c5ef8
    int64_t MidiManager::m_pJagFX;

    // 0x1016c5f00, set at startup by ___cxx_global_var_init.196
    std::array<shared_ptr<MidiPlayerMainThread>, 3ul> MidiManager::m_midiPlayers =
        array<shared_ptr<MidiPlayerMainThread>, 3ul>();

    // 0x1016c5f30
    vector<shared_ptr<MidiRequest>, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, false, eastl::dummy_allocator>>
        MidiManager::m_activeRequests;

    // 0x1016c5f88, set at startup by ___cxx_global_var_init.198
    eastl::fixed_queue<shared_ptr<MidiRequest>, 4ul, false> MidiManager::m_pendingRequests =
        fixed_queue<shared_ptr<MidiRequest>, 4ul, false>();

    // 0x1016c6068, set at startup by ___cxx_global_var_init.199
    eastl::vector<shared_ptr<MidiTask>> MidiManager::m_taskList = vector<shared_ptr<MidiTask>>();

    // 0x1016c6088
    vector<shared_ptr<MidiRequest>, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, false, eastl::dummy_allocator>>
        MidiManager::m_previousRequests;

    // 0x1016c60e0
    int32_t MidiManager::m_fadeOutDelay;

    // 0x1016c60e4
    int32_t MidiManager::m_fadeOutDuration;

    // 0x1016c60e8
    int32_t MidiManager::m_fadeInDelay;

    // 0x1016c60ec
    int32_t MidiManager::m_fadeInDuration;

    // 0x1002cba00
    void MidiManager::Init(jagex3::Js5* js51, jagex3::Js5* js52, jagex3::Js5* js53,
                           std::array<shared_ptr<MidiPlayerMainThread>, 3ul> midiPlayerMainThreads) {
        if (std::this_thread::get_id() == (sound::g_idMainThread) == '\0') {
            LogAssert("std::this_thread::get_id() == sound::g_idMainThread",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                      "midimanager.cpp",
                      44, nullptr);
        }
        m_pPatches = js51;
        m_pVorbis = js52;
        m_pJagFX = js53;
        m_midiPlayers = *midiPlayerMainThreads;
        return 1;
    }

    // 0x1002cbb20
    void MidiManager::IsInitialised() {
        uint32_t uVar3;

        shared_ptr<configdecoder::ObjType>* objType =
            (shared_ptr<configdecoder::ObjType>*)std::array<shared_ptr<MidiPlayerMainThread>, 3ul>::begin();
        shared_ptr<configdecoder::ObjType>* psVar2 =
            (shared_ptr<configdecoder::ObjType>*)std::array<shared_ptr<MidiPlayerMainThread>, 3ul>::end();
        if (objType == psVar2) {
            uVar3 = 23879425;
        } else {
            uVar3 = 1;
            do {
                if (*objType == nullptr) {
                    uVar3 = 0;
                }
                objType = objType + 16;
            } while (objType != psVar2);
        }
        return uVar3;
    }

    // 0x1002cbbb0
    void MidiManager::Play(const eastl::vector<shared_ptr<MidiRequest>>& midiRequests, int arg2, int arg3, int arg4,
                           int arg5, bool arg6) {
        shared_ptr<MidiRequest>* psVar2;
        long lVar3;
        void* local_1f0;
        ReturnValue local_1e8;
        ReturnValue local_1d8;
        ReturnValue local_1c8;
        void* local_1b8;
        ReturnValue local_1a8;
        ReturnValue local_188;
        ReturnValue local_178;
        ReturnValue local_158;
        shared_ptr<RSevenDebugPresetProvider> local_148;
        ReturnValue local_138;
        queue<shared_ptr<MidiRequest>, eastl::fixed_list<shared_ptr<MidiRequest>, 4ul, false>> local_118;

        if (!(std::this_thread::get_id() == (sound::g_idMainThread))) {
            LogAssert("std::this_thread::get_id() == sound::g_idMainThread",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                      "midimanager.cpp",
                      69, nullptr);
        }
        if (!(midiRequests.empty())) {
            local_118 = eastl::queue<shared_ptr<MidiRequest>, eastl::fixed_list<shared_ptr<MidiRequest>, 4ul, false>>();
            m_pendingRequests = local_118;
            m_taskList.clear();
            ValidateActiveRequests(arg6);
            EnqueueRequests(midiRequests, arg6);
            if (!(m_pendingRequests.empty())) {
                SetFadeParameters(arg2, arg3, arg4, arg5);
                local_158[0] = (ReturnValue)0;
                make_shared<AddRequestTask, decltype(nullptr),
                            eastl::fixed_vector<shared_ptr<MidiRequest>, 4ul, false, eastl::dummy_allocator>&,
                            eastl::fixed_queue<shared_ptr<MidiRequest>, 4ul, false>&,
                            std::array<shared_ptr<MidiPlayerMainThread>, 3ul>&>(
                    &local_138, (void**)&local_158,
                    (fixed_vector<shared_ptr<MidiRequest>, _4ul, false, eastl::dummy_allocator>*)&m_activeRequests,
                    (fixed_queue<shared_ptr<MidiRequest>, _4ul, false>*)&m_pendingRequests,
                    (array<shared_ptr<MidiPlayerMainThread>, _3ul>*)&m_midiPlayers);
                local_118.shared_ptr<FileRSevenDebugPresetProvider, void>(local_138);
                m_taskList.push_back(local_118);
                local_158[0] = (ReturnValue)0;
                make_shared<LoadSongTask, decltype(nullptr),
                            eastl::fixed_vector<shared_ptr<MidiRequest>, 4ul, false, eastl::dummy_allocator>&,
                            jagex3::Js5*&, jagex3::Js5*&, jagex3::Js5*&>(
                    &local_138, (void**)&local_158,
                    (fixed_vector<shared_ptr<MidiRequest>, _4ul, false, eastl::dummy_allocator>*)&m_activeRequests,
                    (Js5**)&m_pPatches, (Js5**)&m_pVorbis, (Js5**)&m_pJagFX);
                local_118.shared_ptr<FileRSevenDebugPresetProvider, void>(local_138);
                m_taskList.push_back(local_118);
                local_188[0] = (ReturnValue)0;
                psVar2 = (shared_ptr<MidiRequest>*)eastl::queue<
                    shared_ptr<MidiRequest>, eastl::fixed_list<shared_ptr<MidiRequest>, 4ul, false>>::front();
                make_shared<FadeInTask, decltype(nullptr), shared_ptr<MidiRequest>&, int&>(
                    &local_178, (void**)&local_188, psVar2, &m_fadeInDuration);
                make_shared<StartSongTask, shared_ptr<FadeInTask>,
                            eastl::fixed_vector<shared_ptr<MidiRequest>, 4ul, false, eastl::dummy_allocator>&>(
                    &local_158, &local_178,
                    (fixed_vector<shared_ptr<MidiRequest>, _4ul, false, eastl::dummy_allocator>*)&m_activeRequests);
                local_138.shared_ptr<FileRSevenDebugPresetProvider, void>(local_158);
                local_118 = eastl::vector<shared_ptr<MidiTask>>(&local_138, DAT_00000001);
                if (!(m_activeRequests.empty())) {
                    local_1f0 = nullptr;
                    make_shared<ConcurrentMidiTask, decltype(nullptr), eastl::vector<shared_ptr<MidiTask>>&>(
                        &local_1a8, &local_1f0, (vector<shared_ptr<MidiTask>>*)&local_118);
                    make_shared<DelayFadeTask, shared_ptr<ConcurrentMidiTask>, int&>(&local_188, &local_1a8,
                                                                                     &m_fadeInDelay);
                    local_158.shared_ptr<FileRSevenDebugPresetProvider, void>(local_188);
                    local_1b8 = nullptr;
                    GetCurrentActiveRequests(&local_178);
                    make_shared<ClearRequestTask, decltype(nullptr),
                                eastl::fixed_vector<shared_ptr<MidiRequest>, 4ul, false, eastl::dummy_allocator>&,
                                eastl::vector<shared_ptr<MidiRequest>>>(
                        &local_1c8, &local_1b8,
                        (fixed_vector<shared_ptr<MidiRequest>, _4ul, false, eastl::dummy_allocator>*)&m_activeRequests,
                        (vector<shared_ptr<MidiRequest>>*)&local_178);
                    psVar2 = (shared_ptr<MidiRequest>*)m_activeRequests.front();
                    make_shared<FadeOutTask, shared_ptr<ClearRequestTask>, shared_ptr<MidiRequest>&, int&>(
                        &local_1d8, &local_1c8, psVar2, &m_fadeOutDuration);
                    make_shared<DelayFadeTask, shared_ptr<FadeOutTask>, int&>(&local_1e8, &local_1d8, &m_fadeOutDelay);
                    local_148.shared_ptr<FileRSevenDebugPresetProvider, void>(local_1e8);
                    local_138 = eastl::vector<shared_ptr<MidiTask>>(&local_158, *2);
                    lVar3 = 16;
                    do {
                        ((&local_158[0].field_0 + lVar3))->~shared_ptr();
                        lVar3 = lVar3 - 16;
                    } while (lVar3 != -16);
                    local_188[0] = (ReturnValue)0;
                    make_shared<ConcurrentMidiTask, decltype(nullptr), eastl::vector<shared_ptr<MidiTask>>&>(
                        &local_178, (void**)&local_188, (vector<shared_ptr<MidiTask>>*)&local_138);
                    local_158.shared_ptr<FileRSevenDebugPresetProvider, void>(local_178);
                    m_taskList.push_back(local_158);
                } else {
                    local_178[0] = (ReturnValue)0;
                    make_shared<DelayFadeTask, decltype(nullptr), int&>(&local_158, (void**)&local_178, &m_fadeInDelay);
                    local_138.shared_ptr<FileRSevenDebugPresetProvider, void>(local_158);
                    m_taskList.push_back(local_138);
                    local_178[0] = (ReturnValue)0;
                    make_shared<ConcurrentMidiTask, decltype(nullptr), eastl::vector<shared_ptr<MidiTask>>&>(
                        &local_158, (void**)&local_178, (vector<shared_ptr<MidiTask>>*)&local_118);
                    local_138.shared_ptr<FileRSevenDebugPresetProvider, void>(local_158);
                    m_taskList.push_back(local_138);
                }
            }
        }
    }

    // 0x1002cc3d0
    void MidiManager::ValidateActiveRequests(bool arg1) {
        long lVar3;
        long* plVar4;
        uint64_t* puVar5;
        unsigned long uVar6;
        shared_ptr<MidiRequest>* objType;
        unsigned long arg1_00;

        bool cVar1 = std::this_thread::get_id() == (sound::g_idMainThread);
        if (!cVar1) {
            LogAssert("std::this_thread::get_id() == sound::g_idMainThread",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                      "midimanager.cpp",
                      391, nullptr);
        }
        if (arg1) {
            ClearRequestsImmediate();
        } else {
            lVar3 = m_activeRequests.size();
            if (lVar3 != 0) {
                arg1_00 = 0;
                do {
                    objType = &m_activeRequests[arg1_00];
                    if (*objType == nullptr) {
                    LAB_1002cc49f:
                        lVar3 = m_activeRequests.HeapBeginPtr();
                        m_activeRequests.erase((arg1_00 * 16 + lVar3));
                        arg1_00 = arg1_00 - 1;
                    } else {
                        lVar3 = (*objType).operator->();
                        cVar1 = *(char*)(lVar3 + 28);
                        lVar3 = (*objType).operator->();
                        if (cVar1) {
                            lVar3 = (*((lVar3 + 32))).operator->();
                            if (0 < *(int*)(lVar3 + 8)) {
                                lVar3 = (*objType).operator->();
                                lVar3 = (*((lVar3 + 32))).operator->();
                                *(int*)(lVar3 + 8) = *(int*)(lVar3 + 8) - 1;
                            }
                            lVar3 = (*objType).operator->();
                            plVar4 = (long*)(*((lVar3 + 32))).operator->();
                            (**(void (**)(...))(*plVar4 + 24))(plVar4);
                            lVar3 = (*objType).operator->();
                            plVar4 = (long*)(*((lVar3 + 32))).operator->();
                            (**(void (**)(...))(*plVar4 + 64))(plVar4);
                            lVar3 = (*objType).operator->();
                            puVar5 = (uint64_t*)(*((lVar3 + 32))).operator->();
                            (**(void (**)(...))*puVar5)(puVar5, 0);
                            goto LAB_1002cc49f;
                        }
                        *(uint8_t*)(lVar3 + 28) = 1;
                    }
                    arg1_00 = arg1_00 + 1;
                    uVar6 = m_activeRequests.size();
                } while (arg1_00 < uVar6);
            }
        }
    }

    // 0x1002cc550
    void MidiManager::EnqueueRequests(const eastl::vector<shared_ptr<MidiRequest>>& midiRequests, bool arg2) {
        unsigned long uVar3;
        shared_ptr<MidiRequest>* shared_ptr;
        unsigned long arg1;

        if (std::this_thread::get_id() == (sound::g_idMainThread) == '\0') {
            LogAssert("std::this_thread::get_id() == sound::g_idMainThread",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                      "midimanager.cpp",
                      313, nullptr);
        }
        if (!arg2) {
            m_previousRequests.clear();
        }
        long lVar2 = midiRequests.size();
        if (lVar2 != 0) {
            arg1 = 0;
            do {
                shared_ptr = &midiRequests[arg1];
                lVar2 = (*shared_ptr).operator->();
                if (*(int*)(lVar2 + 8) != -1) {
                    lVar2 = (*shared_ptr).operator->();
                    if (*(int*)(lVar2 + 12) != -1) {
                        if (!arg2) {
                            m_previousRequests.push_back(*shared_ptr);
                        }
                        m_pendingRequests.push(*shared_ptr);
                    }
                }
                arg1 = arg1 + 1;
                uVar3 = midiRequests.size();
            } while (arg1 < uVar3);
        }
    }

    // 0x1002cc650
    void MidiManager::SetFadeParameters(int arg1, int arg2, int arg3, int arg4) {
        if (std::this_thread::get_id() == (sound::g_idMainThread) == '\0') {
            LogAssert("std::this_thread::get_id() == sound::g_idMainThread",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                      "midimanager.cpp",
                      338, nullptr);
        }
        m_fadeOutDelay = arg1;
        m_fadeOutDuration = arg2;
        m_fadeInDelay = arg3;
        m_fadeInDuration = arg4;
    }

    // 0x1002ccda0
    auto MidiManager::GetCurrentActiveRequests() {
        shared_ptr<dash3d::Decor> local_38;

        if (std::this_thread::get_id() == (sound::g_idMainThread) == '\0') {
            LogAssert("std::this_thread::get_id() == sound::g_idMainThread",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                      "midimanager.cpp",
                      348, nullptr);
        }
        auto result;
        auto groundDecor = m_activeRequests.HeapBeginPtr();
        auto psVar2 = m_activeRequests.end();
        if (groundDecor != psVar2) {
            do {
                local_38 = shared_ptr(groundDecor);
                result.push_back(local_38);
                groundDecor = groundDecor + 16;
            } while (groundDecor != psVar2);
        }
        return result;
    }

    // 0x1002ccf60
    void MidiManager::SetVolume(int arg1) {
        shared_ptr<configdecoder::ObjType>* objType;
        shared_ptr<configdecoder::ObjType>* psVar3;
        long lVar4;
        shared_ptr<MidiPlayerMainThread>* midiPlayerMainThread;
        long* plVar5;
        uint64_t* puVar6;

        bool cVar1 = std::this_thread::get_id() == (sound::g_idMainThread);
        if (!cVar1) {
            LogAssert("std::this_thread::get_id() == sound::g_idMainThread",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                      "midimanager.cpp",
                      112, nullptr);
        }
        cVar1 = m_activeRequests.empty();
        if (!cVar1) {
            objType = (shared_ptr<configdecoder::ObjType>*)m_activeRequests.HeapBeginPtr();
            psVar3 = (shared_ptr<configdecoder::ObjType>*)m_activeRequests.end();
            for (; objType != psVar3; objType = objType + 16) {
                if (!(*objType == nullptr)) {
                    lVar4 = (*objType).operator->();
                    *(int*)(lVar4 + 16) = arg1;
                }
            }
            midiPlayerMainThread = (shared_ptr<MidiPlayerMainThread>*)m_activeRequests[0];
            if (*midiPlayerMainThread != nullptr) {
                lVar4 = (*midiPlayerMainThread).operator->();
                if ((*((lVar4 + 32))) != nullptr) {
                    lVar4 = (*midiPlayerMainThread).operator->();
                    plVar5 = (long*)(*((lVar4 + 32))).operator->();
                    cVar1 = (**(void (**)(...))(*plVar5 + 32))(plVar5);
                    if ((cVar1) && (lVar4 = (*midiPlayerMainThread).operator->(), *(char*)(lVar4 + 27) == '\0')) {
                        lVar4 = (*midiPlayerMainThread).operator->();
                        puVar6 = (uint64_t*)(*((lVar4 + 32))).operator->();
                        (**(void (**)(...))*puVar6)(puVar6, arg1);
                        lVar4 = (*midiPlayerMainThread).operator->();
                        *(float*)(lVar4 + 20) = (float)arg1;
                    }
                }
            }
        }
    }

    // 0x1002cd130
    void MidiManager::Stop(int arg1, int arg2) {
        shared_ptr<MidiRequest>* midiRequest;
        void* local_60;
        ReturnValue local_58;
        ReturnValue local_38;
        ReturnValue local_28;

        bool cVar1 = std::this_thread::get_id() == (sound::g_idMainThread);
        if (!cVar1) {
            LogAssert("std::this_thread::get_id() == sound::g_idMainThread",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                      "midimanager.cpp",
                      137, nullptr);
        }
        SetFadeParameters(arg1, arg2, 0, 0);
        m_previousRequests.clear();
        m_taskList.clear();
        cVar1 = m_activeRequests.empty();
        if ((!cVar1) && (arg1 != 0 || arg2 != 0)) {
            local_38[0] = (ReturnValue)0;
            make_shared<DelayFadeTask, decltype(nullptr), int&>(&local_28, (void**)&local_38, &m_fadeOutDelay);
            local_58.shared_ptr<FileRSevenDebugPresetProvider, void>(local_28);
            m_taskList.push_back(local_58);
            local_38[0] = (ReturnValue)0;
            midiRequest = (shared_ptr<MidiRequest>*)m_activeRequests.front();
            make_shared<FadeOutTask, decltype(nullptr), shared_ptr<MidiRequest>&, int&>(
                &local_28, (void**)&local_38, midiRequest, &m_fadeOutDuration);
            local_58.shared_ptr<FileRSevenDebugPresetProvider, void>(local_28);
            m_taskList.push_back(local_58);
            local_60 = nullptr;
            GetCurrentActiveRequests(&local_58);
            make_shared<ClearRequestTask, decltype(nullptr),
                        eastl::fixed_vector<shared_ptr<MidiRequest>, 4ul, false, eastl::dummy_allocator>&,
                        eastl::vector<shared_ptr<MidiRequest>>>(
                &local_38, &local_60,
                (fixed_vector<shared_ptr<MidiRequest>, _4ul, false, eastl::dummy_allocator>*)&m_activeRequests,
                (vector<shared_ptr<MidiRequest>>*)&local_58);
            local_28.shared_ptr<FileRSevenDebugPresetProvider, void>(local_38);
            m_taskList.push_back(local_28);
        } else {
            ClearRequestsImmediate();
        }
    }

    // 0x1002cd400
    void MidiManager::ClearRequestsImmediate() {
        long lVar4;
        long* plVar5;
        uint64_t* puVar6;
        Client* client;

        if (std::this_thread::get_id() == (sound::g_idMainThread) == '\0') {
            LogAssert("std::this_thread::get_id() == sound::g_idMainThread",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                      "midimanager.cpp",
                      372, nullptr);
        }
        auto objType = m_activeRequests.HeapBeginPtr();
        auto psVar3 = m_activeRequests.end();
        for (; objType != psVar3; objType = objType + 16) {
            if (!*objType == nullptr) {
                lVar4 = (*objType).operator->();
                lVar4 = (*((lVar4 + 32))).operator->();
                *(uint32_t*)(lVar4 + 8) = 0;
                lVar4 = (*objType).operator->();
                plVar5 = (long*)(*((lVar4 + 32))).operator->();
                (**(void (**)(...))(*plVar5 + 24))(plVar5);
                lVar4 = (*objType).operator->();
                plVar5 = (long*)(*((lVar4 + 32))).operator->();
                (**(void (**)(...))(*plVar5 + 64))(plVar5);
                lVar4 = (*objType).operator->();
                puVar6 = (uint64_t*)(*((lVar4 + 32))).operator->();
                (**(void (**)(...))*puVar6)(puVar6, 0);
                client = Client::Instance();
                lVar4 = (*objType).operator->();
                client->OnMidiEnd(*(int*)(lVar4 + 8));
            }
        }
        m_activeRequests.clear();
    }

    // 0x1002cd530
    unsigned long MidiManager::IsPlaying() {
        unsigned int uVar3;
        shared_ptr<configdecoder::ObjType>* objType;
        shared_ptr<MidiRequest>* psVar4;
        long lVar5;
        long* plVar6;
        uint64_t unaff_RBX;

        bool cVar1 = std::this_thread::get_id() == (sound::g_idMainThread);
        if (!cVar1) {
            LogAssert("std::this_thread::get_id() == sound::g_idMainThread",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                      "midimanager.cpp",
                      156, nullptr);
        }
        cVar1 = m_taskList.empty();
        unsigned long uVar7 = (((uint64_t)((int64_t)((unsigned long)unaff_RBX >> 8)) << 8) | (uint8_t)1);
        if (cVar1) {
            cVar1 = m_activeRequests.empty();
            if (!cVar1) {
                objType = (shared_ptr<configdecoder::ObjType>*)m_activeRequests.front();
                uVar7 = 0;
                if (!(*objType == nullptr)) {
                    psVar4 = (shared_ptr<MidiRequest>*)m_activeRequests.front();
                    lVar5 = (*psVar4).operator->();
                    uVar7 = 0;
                    if (!((*((lVar5 + 32))) == nullptr)) {
                        psVar4 = (shared_ptr<MidiRequest>*)m_activeRequests.front();
                        lVar5 = (*psVar4).operator->();
                        plVar6 = (long*)(*((lVar5 + 32))).operator->();
                        uVar3 = (**(void (**)(...))(*plVar6 + 32))(plVar6);
                        uVar7 = (unsigned long)uVar3;
                    }
                }
            } else {
                uVar7 = 0;
            }
        }
        return uVar7 & 4294967295;
    }

    // 0x1002cd610
    void MidiManager::SwapSongs(int arg1, int arg2, int arg3, int arg4) {
        shared_ptr<MidiPlayerMainThread>* psVar4;
        shared_ptr<MidiRequest>* psVar5;
        long lVar6;
        long* plVar7;
        shared_ptr<MidiRequest>* midiRequest;
        shared_ptr<RSevenDebugPresetProvider> local_c8;
        void* local_a8;
        ReturnValue local_a0;
        ReturnValue local_90;
        void* local_80;
        ReturnValue local_70;
        ReturnValue local_60;
        ReturnValue local_50;
        shared_ptr<RSevenDebugPresetProvider> local_40;

        if (!(std::this_thread::get_id() == (sound::g_idMainThread))) {
            LogAssert("std::this_thread::get_id() == sound::g_idMainThread",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                      "midimanager.cpp",
                      170, nullptr);
        }
        unsigned long uVar3 = m_activeRequests.size();
        if (1 < uVar3) {
            psVar4 = &m_activeRequests[0];
            if (*psVar4 != nullptr) {
                psVar5 = &m_activeRequests[0];
                lVar6 = (*psVar5).operator->();
                plVar7 = (long*)(*((lVar6 + 32))).operator->();
                if ((**(void (**)(...))(*plVar7 + 32))(plVar7)) {
                    psVar4 = &m_activeRequests[1];
                    if (*psVar4 != nullptr) {
                        psVar5 = &m_activeRequests[1];
                        lVar6 = (*psVar5).operator->();
                        plVar7 = (long*)(*((lVar6 + 32))).operator->();
                        if ((**(void (**)(...))(*plVar7 + 32))(plVar7)) {
                            SetFadeParameters(arg1, arg2, arg3, arg4);
                            local_60[0] = (ReturnValue)0;
                            make_shared<
                                SwapSongTask, decltype(nullptr),
                                eastl::fixed_vector<shared_ptr<MidiRequest>, 4ul, false, eastl::dummy_allocator>&>(
                                &local_50, (void**)&local_60,
                                (fixed_vector<shared_ptr<MidiRequest>, _4ul, false,
                                              eastl::dummy_allocator>*)&m_activeRequests);
                            local_c8.shared_ptr<FileRSevenDebugPresetProvider, void>(local_50);
                            m_taskList.push_back(local_c8);
                            local_a8 = nullptr;
                            psVar5 = &m_activeRequests[1];
                            make_shared<FadeInTask, decltype(nullptr), shared_ptr<MidiRequest>&, int&>(
                                &local_70, &local_a8, psVar5, &m_fadeInDuration);
                            make_shared<DelayFadeTask, shared_ptr<FadeInTask>, int&>(&local_60, &local_70,
                                                                                     &m_fadeInDelay);
                            local_50.shared_ptr<FileRSevenDebugPresetProvider, void>(local_60);
                            local_80 = nullptr;
                            psVar5 = &m_activeRequests[0];
                            make_shared<FadeOutTask, decltype(nullptr), shared_ptr<MidiRequest>&, int&>(
                                &local_90, &local_80, psVar5, &m_fadeOutDuration);
                            make_shared<DelayFadeTask, shared_ptr<FadeOutTask>, int&>(&local_a0, &local_90,
                                                                                      &m_fadeOutDelay);
                            local_40.shared_ptr<FileRSevenDebugPresetProvider, void>(local_a0);
                            local_c8 = eastl::vector<shared_ptr<MidiTask>>(&local_50, *2);
                            lVar6 = 16;
                            do {
                                ((&local_50[0].field_0 + lVar6))->~shared_ptr();
                                lVar6 = lVar6 - 16;
                            } while (lVar6 != -16);
                            local_70[0] = (ReturnValue)0;
                            make_shared<ConcurrentMidiTask, decltype(nullptr), eastl::vector<shared_ptr<MidiTask>>&>(
                                &local_60, (void**)&local_70, (vector<shared_ptr<MidiTask>>*)&local_c8);
                            local_50.shared_ptr<FileRSevenDebugPresetProvider, void>(local_60);
                            m_taskList.push_back(local_50);
                            psVar4 = &m_previousRequests[0];
                            if (*psVar4 != nullptr) {
                                psVar4 = &m_previousRequests[1];
                                if (*psVar4 != nullptr) {
                                    psVar5 = &m_previousRequests[0];
                                    midiRequest = &m_previousRequests[1];
                                    psVar5->swap(*midiRequest);
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    // 0x1002cdc70
    bool MidiManager::HasPreviousSong(int arg1) {
        shared_ptr<MidiPlayerMainThread>* midiPlayerMainThread;
        long lVar3;
        bool bVar4;

        if (!(std::this_thread::get_id() == (sound::g_idMainThread))) {
            LogAssert("std::this_thread::get_id() == sound::g_idMainThread",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                      "midimanager.cpp",
                      196, nullptr);
        }
        if (!(m_previousRequests.empty())) {
            bVar4 = false;
            midiPlayerMainThread = (shared_ptr<MidiPlayerMainThread>*)m_previousRequests[0];
            if (*midiPlayerMainThread != nullptr) {
                lVar3 = (*midiPlayerMainThread).operator->();
                bVar4 = *(int*)(lVar3 + 8) == arg1;
            }
        } else {
            bVar4 = false;
        }
        return bVar4;
    }

    // 0x1002cdd10
    unsigned long MidiManager::CanPlayPreviousSongs() {
        if (std::this_thread::get_id() == (sound::g_idMainThread) == '\0') {
            LogAssert("std::this_thread::get_id() == sound::g_idMainThread",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                      "midimanager.cpp",
                      208, nullptr);
        }
        return m_previousRequests.empty() ^ 1;
    }

    // 0x1002cdd60
    void MidiManager::ResetPreviousSongs() {
        if (std::this_thread::get_id() == (sound::g_idMainThread) == '\0') {
            LogAssert("std::this_thread::get_id() == sound::g_idMainThread",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                      "midimanager.cpp",
                      215, nullptr);
        }
        m_previousRequests.clear();
    }

    // 0x1002cddb0
    void MidiManager::ResetPendingRequests() {

        if (std::this_thread::get_id() == (sound::g_idMainThread) == '\0') {
            LogAssert("std::this_thread::get_id() == sound::g_idMainThread",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                      "midimanager.cpp",
                      222, nullptr);
        }
        queue<shared_ptr<MidiRequest>, eastl::fixed_list<shared_ptr<MidiRequest>, 4ul, false>> local_f8;
        m_pendingRequests = local_f8;
    }

    // 0x1002cde70
    void MidiManager::ResetTaskList() {
        if (std::this_thread::get_id() == (sound::g_idMainThread) == '\0') {
            LogAssert("std::this_thread::get_id() == sound::g_idMainThread",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                      "midimanager.cpp",
                      229, nullptr);
        }
        m_taskList.clear();
    }

    // 0x1002cdec0
    void MidiManager::PlayPreviousSongs(jagex3::Js5* js5, int arg2) {
        shared_ptr<MidiRequest>* shared_ptr;
        shared_ptr<MidiRequest>* psVar2;
        long lVar3;
        uint64_t* puVar4;
        vector<shared_ptr<MidiRequest>> local_50;

        if (!(std::this_thread::get_id() == (sound::g_idMainThread))) {
            LogAssert("std::this_thread::get_id() == sound::g_idMainThread",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                      "midimanager.cpp",
                      236, nullptr);
        }
        if (!(m_previousRequests.empty())) {
            local_50 = eastl::vector<shared_ptr<MidiRequest>>();
            shared_ptr = (shared_ptr<MidiRequest>*)m_previousRequests.HeapBeginPtr();
            psVar2 = (shared_ptr<MidiRequest>*)m_previousRequests.end();
            if (shared_ptr != psVar2) {
                do {
                    lVar3 = (*shared_ptr).operator->();
                    *(uint8_t*)(lVar3 + 26) = 0;
                    lVar3 = (*shared_ptr).operator->();
                    *(uint8_t*)(lVar3 + 25) = 0;
                    lVar3 = (*shared_ptr).operator->();
                    *(uint8_t*)(lVar3 + 27) = 0;
                    lVar3 = (*shared_ptr).operator->();
                    *(uint8_t*)(lVar3 + 28) = 0;
                    puVar4 = (uint64_t*)(*shared_ptr).operator->();
                    *puVar4 = js5;
                    lVar3 = (*shared_ptr).operator->();
                    *(int*)(lVar3 + 16) = arg2;
                    lVar3 = (*shared_ptr).operator->();
                    *(uint32_t*)(lVar3 + 20) = 0;
                    local_50.push_back(*shared_ptr);
                    shared_ptr = shared_ptr + 16;
                } while (shared_ptr != psVar2);
            }
            Play(&local_50, m_fadeOutDelay, m_fadeOutDuration, m_fadeInDelay, m_fadeInDuration, false);
        }
    }

    // 0x1002ce070
    void MidiManager::Service() {
        bool bVar2;
        uint32_t uVar3;
        shared_ptr<dash3d::GroundDecor>* groundDecor;
        long* plVar4;
        MidiTask* pMVar5;
        Logger* logger;
        uint64_t uVar6;
        long lVar7;
        shared_ptr<MidiTask>* psVar8;
        unsigned long uVar9;
        unsigned long arg1;
        ReturnValue local_50;
        shared_ptr<dash3d::Decor> local_30;

        char cVar1 = std::this_thread::get_id() == (sound::g_idMainThread);
        if (!cVar1) {
            LogAssert("std::this_thread::get_id() == sound::g_idMainThread",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                      "midimanager.cpp",
                      260, nullptr);
        }
        cVar1 = m_taskList.empty();
        if (!cVar1) {
            groundDecor = (shared_ptr<dash3d::GroundDecor>*)m_taskList.front();
            local_30 = shared_ptr(groundDecor);
            bVar2 = local_30 == nullptr;
            if (bVar2) {
                psVar8 = (shared_ptr<MidiTask>*)m_taskList.HeapBeginPtr();
                m_taskList.erase(psVar8);
                cVar1 = '\0';
                uVar3 = 0;
            } else {
                plVar4 = (long*)local_30.operator->();
                cVar1 = (**(void (**)(...))(*plVar4 + 16))(plVar4);
                if (!cVar1) {
                    plVar4 = (long*)local_30.operator->();
                    uVar3 = (**(void (**)(...))(*plVar4 + 24))(plVar4);
                    cVar1 = '\0';
                } else {
                    pMVar5 = (MidiTask*)local_30.operator->();
                    cVar1 = pMVar5->HasError();
                    if (!cVar1) {
                        pMVar5 = (MidiTask*)local_30.operator->();
                        local_50 = pMVar5->GetCompletionTask();
                        bVar2 = local_50 != nullptr;
                        if (bVar2) {
                            lVar7 = m_taskList.HeapBeginPtr();
                            pMVar5 = (MidiTask*)local_30.operator->();
                            local_50 = pMVar5->GetCompletionTask();
                            m_taskList.emplace<shared_ptr<MidiTask>>((lVar7 + 16), local_50);
                        }
                        plVar4 = (long*)local_30.operator->();
                        uVar3 = (**(void (**)(...))(*plVar4 + 24))(plVar4);
                    } else {
                        logger = logger::default_logger();
                        pMVar5 = (MidiTask*)local_30.operator->();
                        local_50 = pMVar5->GetErrorMessage();
                        uVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        logger->Log(false, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                    "jagex3/midi2/midimanager.cpp",
                                    276, "Error in service: %s", uVar6);
                        uVar3 = 0;
                    }
                    local_30.reset();
                    psVar8 = (shared_ptr<MidiTask>*)m_taskList.HeapBeginPtr();
                    m_taskList.erase(psVar8);
                }
            }
            if (cVar1) {
                lVar7 = m_taskList.size();
                if (lVar7 != 0) {
                    arg1 = 0;
                    do {
                        psVar8 = &m_taskList[arg1];
                        psVar8->reset();
                        arg1 = arg1 + 1;
                        uVar9 = m_taskList.size();
                    } while (arg1 < uVar9);
                }
                m_taskList.clear();
                ClearRequestsImmediate();
            }
        } else {
            uVar3 = 0;
        }
        return uVar3;
    }

    // 0x1002ce5d0
    void MidiManager::SetPreviousRequests(const eastl::vector<shared_ptr<MidiRequest>>& midiRequests, int arg2,
                                          int arg3, int arg4, int arg5) {
        if (std::this_thread::get_id() == (sound::g_idMainThread) == '\0') {
            LogAssert("std::this_thread::get_id() == sound::g_idMainThread",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                      "midimanager.cpp",
                      360, nullptr);
        }
        m_previousRequests.clear();
        auto midiRequest = midiRequests.HeapBeginPtr();
        auto psVar2 = midiRequests.end();
        for (; midiRequest != psVar2; midiRequest = midiRequest + 16) {
            m_previousRequests.push_back(*midiRequest);
        }
        SetFadeParameters(arg2, arg3, arg4, arg5);
    }

} // namespace jag::oldscape::midi2

namespace jag {
    // 0x1002cc730
    shared_ptr_if_not_array<oldscape::midi2::AddRequestTask>::type
    make_shared<oldscape::midi2::AddRequestTask, decltype(nullptr),
                eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false, eastl::dummy_allocator>&,
                eastl::fixed_queue<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false>&,
                std::array<shared_ptr<oldscape::midi2::MidiPlayerMainThread>, 3ul>&>(
        decltype(nullptr)&& arg1,
        eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false, eastl::dummy_allocator>& midiRequests,
        eastl::fixed_queue<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false>& fixed_queue,
        std::array<shared_ptr<oldscape::midi2::MidiPlayerMainThread>, 3ul>& midiPlayerMainThreads) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_44;
        AddRequestTask* local_40[2];

        auto arg1_00 = aligned_alloc(152, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<oldscape::midi2::AddRequestTask>::type result;
        } else {
            local_40[0] = placement_new<
                oldscape::midi2::AddRequestTask, decltype(nullptr),
                eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false, eastl::dummy_allocator>&,
                eastl::fixed_queue<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false>&,
                std::array<shared_ptr<oldscape::midi2::MidiPlayerMainThread>, 3ul>&>(
                (void*)((long)arg1_00 + 32), arg1, midiRequests, fixed_queue, midiPlayerMainThreads);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::midi2::AddRequestTask>, int,
                              oldscape::midi2::AddRequestTask*&>(arg1_00, &local_44, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return result;
    }

    // 0x1002cc7f0
    shared_ptr_if_not_array<oldscape::midi2::LoadSongTask>::type
    make_shared<oldscape::midi2::LoadSongTask, decltype(nullptr),
                eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false, eastl::dummy_allocator>&,
                oldscape::jagex3::Js5*&, oldscape::jagex3::Js5*&, oldscape::jagex3::Js5*&>(
        decltype(nullptr)&& arg1,
        eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false, eastl::dummy_allocator>& midiRequests,
        oldscape::jagex3::Js5*& arg3, oldscape::jagex3::Js5*& arg4, oldscape::jagex3::Js5*& arg5) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_44;
        LoadSongTask* local_40[2];

        auto arg1_00 = aligned_alloc(160, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<oldscape::midi2::LoadSongTask>::type result;
        } else {
            local_40[0] = placement_new<
                oldscape::midi2::LoadSongTask, decltype(nullptr),
                eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false, eastl::dummy_allocator>&,
                oldscape::jagex3::Js5*&, oldscape::jagex3::Js5*&, oldscape::jagex3::Js5*&>(
                (void*)((long)arg1_00 + 32), arg1, midiRequests, arg3, arg4, arg5);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::midi2::LoadSongTask>, int, oldscape::midi2::LoadSongTask*&>(
                    arg1_00, &local_44, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return result;
    }

    // 0x1002cc8b0
    shared_ptr_if_not_array<oldscape::midi2::StartSongTask>::type
    make_shared<oldscape::midi2::StartSongTask, shared_ptr<oldscape::midi2::FadeInTask>,
                eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false, eastl::dummy_allocator>&>(
        shared_ptr<oldscape::midi2::FadeInTask>&& fadeInTask,
        eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false, eastl::dummy_allocator>&
            midiRequests) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_3c;
        StartSongTask* local_38[2];

        auto arg1 = aligned_alloc(136, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::midi2::StartSongTask>::type result;
        } else {
            local_38[0] = placement_new<
                oldscape::midi2::StartSongTask, shared_ptr<oldscape::midi2::FadeInTask>,
                eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false, eastl::dummy_allocator>&>(
                (void*)((long)arg1 + 32), fadeInTask, midiRequests);
            local_3c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::midi2::StartSongTask>, int,
                              oldscape::midi2::StartSongTask*&>(arg1, &local_3c, local_38);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_38[0]);
        }
        return result;
    }

    // 0x1002cc960
    shared_ptr_if_not_array<oldscape::midi2::FadeInTask>::type
    make_shared<oldscape::midi2::FadeInTask, decltype(nullptr), shared_ptr<oldscape::midi2::MidiRequest>&, int&>(
        decltype(nullptr)&& arg1, shared_ptr<oldscape::midi2::MidiRequest>& midiRequest, int& arg3) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_44;
        FadeInTask* local_40[2];

        auto arg1_00 = aligned_alloc(152, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<oldscape::midi2::FadeInTask>::type result;
        } else {
            local_40[0] =
                placement_new<oldscape::midi2::FadeInTask, decltype(nullptr), shared_ptr<oldscape::midi2::MidiRequest>&,
                              int&>((void*)((long)arg1_00 + 32), arg1, midiRequest, arg3);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::midi2::FadeInTask>, int, oldscape::midi2::FadeInTask*&>(
                    arg1_00, &local_44, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return result;
    }

    // 0x1002cca30
    shared_ptr_if_not_array<oldscape::midi2::DelayFadeTask>::type
    make_shared<oldscape::midi2::DelayFadeTask, shared_ptr<oldscape::midi2::ConcurrentMidiTask>, int&>(
        shared_ptr<oldscape::midi2::ConcurrentMidiTask>&& concurrentMidiTask, int& arg2) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_3c;
        DelayFadeTask* local_38[2];

        auto arg1 = aligned_alloc(136, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::midi2::DelayFadeTask>::type result;
        } else {
            local_38[0] =
                placement_new<oldscape::midi2::DelayFadeTask, shared_ptr<oldscape::midi2::ConcurrentMidiTask>, int&>(
                    (void*)((long)arg1 + 32), concurrentMidiTask, arg2);
            local_3c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::midi2::DelayFadeTask>, int,
                              oldscape::midi2::DelayFadeTask*&>(arg1, &local_3c, local_38);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_38[0]);
        }
        return result;
    }

    // 0x1002ccae0
    shared_ptr_if_not_array<oldscape::midi2::ConcurrentMidiTask>::type
    make_shared<oldscape::midi2::ConcurrentMidiTask, decltype(nullptr),
                eastl::vector<shared_ptr<oldscape::midi2::MidiTask>>&>(
        decltype(nullptr)&& arg1, eastl::vector<shared_ptr<oldscape::midi2::MidiTask>>& midiTasks) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_3c;
        ConcurrentMidiTask* local_38[2];

        auto arg1_00 = aligned_alloc(160, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<oldscape::midi2::ConcurrentMidiTask>::type result;
        } else {
            local_38[0] = placement_new<oldscape::midi2::ConcurrentMidiTask, decltype(nullptr),
                                        eastl::vector<shared_ptr<oldscape::midi2::MidiTask>>&>(
                (void*)((long)arg1_00 + 32), arg1, midiTasks);
            local_3c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::midi2::ConcurrentMidiTask>, int,
                              oldscape::midi2::ConcurrentMidiTask*&>(arg1_00, &local_3c, local_38);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_38[0]);
        }
        return result;
    }

    // 0x1002ccb90
    shared_ptr_if_not_array<oldscape::midi2::DelayFadeTask>::type
    make_shared<oldscape::midi2::DelayFadeTask, shared_ptr<oldscape::midi2::FadeOutTask>, int&>(
        shared_ptr<oldscape::midi2::FadeOutTask>&& fadeOutTask, int& arg2) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_3c;
        DelayFadeTask* local_38[2];

        auto arg1 = aligned_alloc(136, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::midi2::DelayFadeTask>::type result;
        } else {
            local_38[0] = placement_new<oldscape::midi2::DelayFadeTask, shared_ptr<oldscape::midi2::FadeOutTask>, int&>(
                (void*)((long)arg1 + 32), fadeOutTask, arg2);
            local_3c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::midi2::DelayFadeTask>, int,
                              oldscape::midi2::DelayFadeTask*&>(arg1, &local_3c, local_38);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_38[0]);
        }
        return result;
    }

    // 0x1002ccc40
    shared_ptr_if_not_array<oldscape::midi2::FadeOutTask>::type
    make_shared<oldscape::midi2::FadeOutTask, shared_ptr<oldscape::midi2::ClearRequestTask>,
                shared_ptr<oldscape::midi2::MidiRequest>&, int&>(
        shared_ptr<oldscape::midi2::ClearRequestTask>&& clearRequestTask,
        shared_ptr<oldscape::midi2::MidiRequest>& midiRequest, int& arg3) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_44;
        FadeOutTask* local_40[2];

        auto arg1 = aligned_alloc(152, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::midi2::FadeOutTask>::type result;
        } else {
            local_40[0] = placement_new<oldscape::midi2::FadeOutTask, shared_ptr<oldscape::midi2::ClearRequestTask>,
                                        shared_ptr<oldscape::midi2::MidiRequest>&, int&>(
                (void*)((long)arg1 + 32), clearRequestTask, midiRequest, arg3);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::midi2::FadeOutTask>, int, oldscape::midi2::FadeOutTask*&>(
                    arg1, &local_44, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return result;
    }

    // 0x1002cccf0
    shared_ptr_if_not_array<oldscape::midi2::ClearRequestTask>::type
    make_shared<oldscape::midi2::ClearRequestTask, decltype(nullptr),
                eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false, eastl::dummy_allocator>&,
                eastl::vector<shared_ptr<oldscape::midi2::MidiRequest>>>(
        decltype(nullptr)&& arg1,
        eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false, eastl::dummy_allocator>&
            midiRequests1,
        eastl::vector<shared_ptr<oldscape::midi2::MidiRequest>>&& midiRequests2) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_44;
        ClearRequestTask* local_40[2];

        auto arg1_00 = aligned_alloc(168, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<oldscape::midi2::ClearRequestTask>::type result;
        } else {
            local_40[0] = placement_new<
                oldscape::midi2::ClearRequestTask, decltype(nullptr),
                eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false, eastl::dummy_allocator>&,
                eastl::vector<shared_ptr<oldscape::midi2::MidiRequest>>>((void*)((long)arg1_00 + 32), arg1,
                                                                         midiRequests1, midiRequests2);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::midi2::ClearRequestTask>, int,
                              oldscape::midi2::ClearRequestTask*&>(arg1_00, &local_44, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return result;
    }

    // 0x1002cceb0
    shared_ptr_if_not_array<oldscape::midi2::DelayFadeTask>::type
    make_shared<oldscape::midi2::DelayFadeTask, decltype(nullptr), int&>(decltype(nullptr)&& arg1, int& arg2) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_3c;
        DelayFadeTask* local_38[2];

        auto arg1_00 = aligned_alloc(136, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<oldscape::midi2::DelayFadeTask>::type result;
        } else {
            local_38[0] = placement_new<oldscape::midi2::DelayFadeTask, decltype(nullptr), int&>(
                (void*)((long)arg1_00 + 32), arg1, arg2);
            local_3c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::midi2::DelayFadeTask>, int,
                              oldscape::midi2::DelayFadeTask*&>(arg1_00, &local_3c, local_38);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_38[0]);
        }
        return result;
    }

    // 0x1002cd350
    shared_ptr_if_not_array<oldscape::midi2::FadeOutTask>::type
    make_shared<oldscape::midi2::FadeOutTask, decltype(nullptr), shared_ptr<oldscape::midi2::MidiRequest>&, int&>(
        decltype(nullptr)&& arg1, shared_ptr<oldscape::midi2::MidiRequest>& midiRequest, int& arg3) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_44;
        FadeOutTask* local_40[2];

        auto arg1_00 = aligned_alloc(152, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<oldscape::midi2::FadeOutTask>::type result;
        } else {
            local_40[0] = placement_new<oldscape::midi2::FadeOutTask, decltype(nullptr),
                                        shared_ptr<oldscape::midi2::MidiRequest>&, int&>((void*)((long)arg1_00 + 32),
                                                                                         arg1, midiRequest, arg3);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::midi2::FadeOutTask>, int, oldscape::midi2::FadeOutTask*&>(
                    arg1_00, &local_44, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return result;
    }

    // 0x1002cdab0
    shared_ptr_if_not_array<oldscape::midi2::SwapSongTask>::type
    make_shared<oldscape::midi2::SwapSongTask, decltype(nullptr),
                eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false, eastl::dummy_allocator>&>(
        decltype(nullptr)&& arg1,
        eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false, eastl::dummy_allocator>&
            midiRequests) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_3c;
        SwapSongTask* local_38[2];

        auto arg1_00 = aligned_alloc(136, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<oldscape::midi2::SwapSongTask>::type result;
        } else {
            local_38[0] = placement_new<
                oldscape::midi2::SwapSongTask, decltype(nullptr),
                eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false, eastl::dummy_allocator>&>(
                (void*)((long)arg1_00 + 32), arg1, midiRequests);
            local_3c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::midi2::SwapSongTask>, int, oldscape::midi2::SwapSongTask*&>(
                    arg1_00, &local_3c, local_38);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_38[0]);
        }
        return result;
    }

    // 0x1002cdb60
    shared_ptr_if_not_array<oldscape::midi2::DelayFadeTask>::type
    make_shared<oldscape::midi2::DelayFadeTask, shared_ptr<oldscape::midi2::FadeInTask>, int&>(
        shared_ptr<oldscape::midi2::FadeInTask>&& fadeInTask, int& arg2) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_3c;
        DelayFadeTask* local_38[2];

        auto arg1 = aligned_alloc(136, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::midi2::DelayFadeTask>::type result;
        } else {
            local_38[0] = placement_new<oldscape::midi2::DelayFadeTask, shared_ptr<oldscape::midi2::FadeInTask>, int&>(
                (void*)((long)arg1 + 32), fadeInTask, arg2);
            local_3c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::midi2::DelayFadeTask>, int,
                              oldscape::midi2::DelayFadeTask*&>(arg1, &local_3c, local_38);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_38[0]);
        }
        return result;
    }

} // namespace jag
