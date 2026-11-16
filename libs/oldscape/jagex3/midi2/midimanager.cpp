// libs/oldscape/jagex3/midi2/midimanager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

namespace jag::oldscape::midi2 {
    class MidiManager {
    public:
        Init(jagex3::Js5*, jagex3::Js5*, jagex3::Js5*, std::array<shared_ptr<MidiPlayerMainThread>, 3ul>);
        IsInitialised();
        void Play(eastl::vector<shared_ptr<MidiRequest>, eastl::allocator> const&, int, int, int, int, bool);
        void ValidateActiveRequests(bool);
        void EnqueueRequests(eastl::vector<shared_ptr<MidiRequest>, eastl::allocator> const&, bool);
        void SetFadeParameters(int, int, int, int);
        MidiManager* GetCurrentActiveRequests();
        void SetVolume(int);
        void Stop(int, int);
        void ClearRequestsImmediate();
        ulong IsPlaying();
        void SwapSongs(int, int, int, int);
        bool HasPreviousSong(int);
        ulong CanPlayPreviousSongs();
        void ResetPreviousSongs();
        void ResetPendingRequests();
        void ResetTaskList();
        void PlayPreviousSongs(jagex3::Js5*, int);
        Service();
        void SetPreviousRequests(eastl::vector<shared_ptr<MidiRequest>, eastl::allocator> const&, int, int, int, int);
        static /* 8 bytes */ m_pPatches;
        static /* 8 bytes */ m_pVorbis;
        static /* 8 bytes */ m_pJagFX;
        static /* 48 bytes */ m_midiPlayers;
        static /* 88 bytes */ m_activeRequests;
        static eastl::fixed_queue<shared_ptr<MidiRequest>, 4ul, false> /* 224 bytes */
            m_pendingRequests; // = fixed_queue<shared_ptr<MidiRequest>,4ul,false>()
        static eastl::vector<shared_ptr<MidiTask>, eastl::allocator> /* 32 bytes */
            m_taskList; // = vector<shared_ptr<MidiTask>,eastl::allocator>()
        static /* 88 bytes */ m_previousRequests;
        static /* 4 bytes */ m_fadeOutDelay;
        static /* 4 bytes */ m_fadeOutDuration;
        static /* 4 bytes */ m_fadeInDelay;
        static /* 4 bytes */ m_fadeInDuration;

        // data members, from how the methods use this: 16 bytes
        char _unknown_0[8];
        shared_ptr<dash3d::Decor>* field_8; // offset 8
    };

    // 0x1016c5ee8, 8 bytes, __common; zero-initialised
    MidiManager::m_pPatches;

    // 0x1016c5ef0, 8 bytes, __common; zero-initialised
    MidiManager::m_pVorbis;

    // 0x1016c5ef8, 8 bytes, __common; zero-initialised
    MidiManager::m_pJagFX;

    // 0x1016c5f00, 48 bytes, __common; zero-initialised
    MidiManager::m_midiPlayers;

    // 0x1016c5f30, 88 bytes, __common; zero-initialised
    MidiManager::m_activeRequests;

    // 0x1016c5f88, 224 bytes, __common; set at startup by ___cxx_global_var_init.198
    eastl::fixed_queue<shared_ptr<MidiRequest>, 4ul, false> MidiManager::m_pendingRequests =
        fixed_queue<shared_ptr<MidiRequest>, 4ul, false>();

    // 0x1016c6068, 32 bytes, __common; set at startup by ___cxx_global_var_init.199
    eastl::vector<shared_ptr<MidiTask>, eastl::allocator> MidiManager::m_taskList =
        vector<shared_ptr<MidiTask>, eastl::allocator>();

    // 0x1016c6088, 88 bytes, __common; zero-initialised
    MidiManager::m_previousRequests;

    // 0x1016c60e0, 4 bytes, __common; zero-initialised
    MidiManager::m_fadeOutDelay;

    // 0x1016c60e4, 4 bytes, __common; zero-initialised
    MidiManager::m_fadeOutDuration;

    // 0x1016c60e8, 4 bytes, __common; zero-initialised
    MidiManager::m_fadeInDelay;

    // 0x1016c60ec, 4 bytes, __common; zero-initialised
    MidiManager::m_fadeInDuration;

    // 0x1002cba00, 128 bytes, placed by class name and debug map
    // MidiManager::Init(jagex3::Js5*, jagex3::Js5*, jagex3::Js5*, std::array<shared_ptr<MidiPlayerMainThread>, 3ul>)
    /* MidiManager::Init(jagex3::Js5*, jagex3::Js5*,
   jagex3::Js5*,
   std::array<shared_ptr<MidiPlayerMainThread>, 3ul>) */

    undefined8 MidiManager::Init(undefined8 param_1, undefined8 param_2, undefined8 param_3, array* param_4) {
        undefined8 uVar2;

        uVar2 = std::this_thread::get_id();
        if (std::operator==(uVar2, sound::g_idMainThread) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("std::this_thread::get_id() == sound::g_idMainThread",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                      "midimanager.cpp",
                      44, (char*)0);
        }
        m_pPatches = param_1;
        m_pVorbis = param_2;
        m_pJagFX = param_3;
        std::array<shared_ptr<MidiPlayerMainThread>, 3ul>::operator=(
            (array<shared_ptr<MidiPlayerMainThread>, 3ul>*)&m_midiPlayers, param_4);
        return 1;
    }

    // 0x1002cbb20, 112 bytes, placed by class name and debug map
    // MidiManager::IsInitialised()
    undefined4 MidiManager::IsInitialised() {
        shared_ptr* psVar2;
        shared_ptr* psVar3;
        undefined4 uVar4;

        psVar2 = (shared_ptr*)m_midiPlayers.begin();
        psVar3 = (shared_ptr*)m_midiPlayers.end();
        if (psVar2 == psVar3) {
            uVar4 = 23879425;
        } else {
            uVar4 = 1;
            do {
                if (operator==(psVar2, (_func_decltype_nullptr*)0)) {
                    uVar4 = 0;
                }
                psVar2 = psVar2 + 1;
            } while (psVar2 != psVar3);
        }
        return uVar4;
    }

    // 0x1002cbbb0, 2032 bytes, placed by class name and debug map
    // MidiManager::Play(eastl::vector<shared_ptr<MidiRequest>, eastl::allocator> const&, int, int, int, int, bool)
    void MidiManager::Play(vector* param_1, int param_2, int param_3, int param_4, int param_5, bool param_6) {
        char cVar1;
        undefined8 uVar2;
        shared_ptr* psVar3;
        long lVar4;
        _func_decltype_nullptr* local_1f0;
        shared_ptr local_1e8;
        shared_ptr local_1d8;
        shared_ptr local_1c8;
        _func_decltype_nullptr* local_1b8;
        allocator local_1b0[8];
        shared_ptr local_1a8;
        shared_ptr local_188;
        MidiManager local_178[2];
        shared_ptr local_158;
        shared_ptr<RSevenDebugPresetProvider> local_148[16];
        shared_ptr local_138[2];
        shared_ptr local_118[14];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        uVar2 = std::this_thread::get_id();
        cVar1 = std::operator==(uVar2, sound::g_idMainThread);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("std::this_thread::get_id() == sound::g_idMainThread",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                      "midimanager.cpp",
                      69, (char*)0);
        }
        cVar1 = param_1->empty();
        if (cVar1 == '\0') {
            new (local_118) eastl::queue<shared_ptr<MidiRequest>,
                                         eastl::fixed_list<shared_ptr<MidiRequest>, 4ul, false, eastl::allocator>>();
            eastl::fixed_queue<shared_ptr<MidiRequest>, 4ul, false>::operator=(
                (fixed_queue<shared_ptr<MidiRequest>, 4ul, false>*)&m_pendingRequests, (fixed_queue*)local_118);
            local_118->~fixed_queue();
            m_taskList.clear();
            ValidateActiveRequests(param_6);
            EnqueueRequests(param_1, param_6);
            cVar1 = m_pendingRequests.empty();
            if (cVar1 == '\0') {
                SetFadeParameters(param_2, param_3, param_4, param_5);
                local_158._0_8_ = 0;
                make_shared<AddRequestTask, decltype(nullptr),
                            eastl::fixed_vector<shared_ptr<MidiRequest>, 4ul, false, eastl::dummy_allocator>&,
                            eastl::fixed_queue<shared_ptr<MidiRequest>, 4ul, false>&,
                            std::array<shared_ptr<MidiPlayerMainThread>, 3ul>&>(
                    (jag*)local_138, (_func_decltype_nullptr**)&local_158, (fixed_vector*)&m_activeRequests,
                    (fixed_queue*)&m_pendingRequests, (array*)&m_midiPlayers);
                shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                    (shared_ptr<RSevenDebugPresetProvider>*)local_118, local_138);
                m_taskList.push_back(local_118);
                local_118->~shared_ptr();
                local_138->~shared_ptr();
                local_158._0_8_ = 0;
                make_shared<LoadSongTask, decltype(nullptr),
                            eastl::fixed_vector<shared_ptr<MidiRequest>, 4ul, false, eastl::dummy_allocator>&,
                            jagex3::Js5*&, jagex3::Js5*&, jagex3::Js5*&>(
                    (jag*)local_138, (_func_decltype_nullptr**)&local_158, (fixed_vector*)&m_activeRequests,
                    (Js5**)&m_pPatches, (Js5**)&m_pVorbis, (Js5**)&m_pJagFX);
                shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                    (shared_ptr<RSevenDebugPresetProvider>*)local_118, local_138);
                m_taskList.push_back(local_118);
                local_118->~shared_ptr();
                local_138->~shared_ptr();
                local_188._0_8_ = 0;
                psVar3 = (shared_ptr*)
                    eastl::queue<shared_ptr<MidiRequest>,
                                 eastl::fixed_list<shared_ptr<MidiRequest>, 4ul, false, eastl::allocator>>::front();
                make_shared<FadeInTask, decltype(nullptr), shared_ptr<MidiRequest>&, int&>(
                    (jag*)local_178, (_func_decltype_nullptr**)&local_188, psVar3, &m_fadeInDuration);
                make_shared<StartSongTask, shared_ptr<FadeInTask>,
                            eastl::fixed_vector<shared_ptr<MidiRequest>, 4ul, false, eastl::dummy_allocator>&>(
                    (jag*)&local_158, (shared_ptr*)local_178, (fixed_vector*)&m_activeRequests);
                shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                    (shared_ptr<RSevenDebugPresetProvider>*)local_138, &local_158);
                new (&local_1a8) eastl::allocator("EASTL vector");
                eastl::vector<shared_ptr<MidiTask>, eastl::allocator>::vector(local_118, local_138, 1, &local_1a8);
                local_138->~shared_ptr();
                local_158.~shared_ptr();
                local_178->~shared_ptr();
                cVar1 = m_activeRequests.empty();
                if (cVar1 == '\0') {
                    local_1f0 = (_func_decltype_nullptr*)0;
                    make_shared<ConcurrentMidiTask, decltype(nullptr),
                                eastl::vector<shared_ptr<MidiTask>, eastl::allocator>&>((jag*)&local_1a8, &local_1f0,
                                                                                        (vector*)local_118);
                    make_shared<DelayFadeTask, shared_ptr<ConcurrentMidiTask>, int&>((jag*)&local_188, &local_1a8,
                                                                                     &m_fadeInDelay);
                    shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                        (shared_ptr<RSevenDebugPresetProvider>*)&local_158, &local_188);
                    local_1b8 = (_func_decltype_nullptr*)0;
                    GetCurrentActiveRequests(local_178);
                    make_shared<ClearRequestTask, decltype(nullptr),
                                eastl::fixed_vector<shared_ptr<MidiRequest>, 4ul, false, eastl::dummy_allocator>&,
                                eastl::vector<shared_ptr<MidiRequest>, eastl::allocator>>(
                        (jag*)&local_1c8, &local_1b8, (fixed_vector*)&m_activeRequests, (vector*)local_178);
                    psVar3 = (shared_ptr*)m_activeRequests.front();
                    make_shared<FadeOutTask, shared_ptr<ClearRequestTask>, shared_ptr<MidiRequest>&, int&>(
                        (jag*)&local_1d8, &local_1c8, psVar3, &m_fadeOutDuration);
                    make_shared<DelayFadeTask, shared_ptr<FadeOutTask>, int&>((jag*)&local_1e8, &local_1d8,
                                                                              &m_fadeOutDelay);
                    shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(local_148,
                                                                                                           &local_1e8);
                    eastl::allocator::allocator(local_1b0, "EASTL vector");
                    eastl::vector<shared_ptr<MidiTask>, eastl::allocator>::vector(local_138, &local_158, 2, local_1b0);
                    lVar4 = 16;
                    do {
                        ((&local_178[2].field_0 + lVar4))->~shared_ptr();
                        lVar4 = lVar4 + -16;
                    } while (lVar4 != -16);
                    local_1e8.~shared_ptr();
                    local_1d8.~shared_ptr();
                    local_1c8.~shared_ptr();
                    local_178->~vector();
                    local_188.~shared_ptr();
                    local_1a8.~shared_ptr();
                    local_188._0_8_ = 0;
                    make_shared<ConcurrentMidiTask, decltype(nullptr),
                                eastl::vector<shared_ptr<MidiTask>, eastl::allocator>&>(
                        (jag*)local_178, (_func_decltype_nullptr**)&local_188, (vector*)local_138);
                    shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                        (shared_ptr<RSevenDebugPresetProvider>*)&local_158, (shared_ptr*)local_178);
                    m_taskList.push_back(&local_158);
                    local_158.~shared_ptr();
                    local_178->~shared_ptr();
                    local_138->~vector();
                } else {
                    local_178[0]._0_8_ = 0;
                    make_shared<DelayFadeTask, decltype(nullptr), int&>(
                        (jag*)&local_158, (_func_decltype_nullptr**)local_178, &m_fadeInDelay);
                    shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                        (shared_ptr<RSevenDebugPresetProvider>*)local_138, &local_158);
                    m_taskList.push_back(local_138);
                    local_138->~shared_ptr();
                    local_158.~shared_ptr();
                    local_178[0]._0_8_ = 0;
                    make_shared<ConcurrentMidiTask, decltype(nullptr),
                                eastl::vector<shared_ptr<MidiTask>, eastl::allocator>&>(
                        (jag*)&local_158, (_func_decltype_nullptr**)local_178, (vector*)local_118);
                    shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                        (shared_ptr<RSevenDebugPresetProvider>*)local_138, &local_158);
                    m_taskList.push_back(local_138);
                    local_138->~shared_ptr();
                    local_158.~shared_ptr();
                }
                local_118->~vector();
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1002cc3d0, 384 bytes, placed by class name and debug map
    // MidiManager::ValidateActiveRequests(bool)
    void MidiManager::ValidateActiveRequests(bool param_1) {
        char cVar1;
        undefined8 uVar3;
        long lVar4;
        long* plVar5;
        undefined8* puVar6;
        ulong uVar7;
        shared_ptr* this;
        ulong uVar8;

        uVar3 = std::this_thread::get_id();
        cVar1 = std::operator==(uVar3, sound::g_idMainThread);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("std::this_thread::get_id() == sound::g_idMainThread",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                      "midimanager.cpp",
                      391, (char*)0);
        }
        if (param_1) {
            ClearRequestsImmediate();
        } else {
            lVar4 = m_activeRequests.size();
            if (lVar4 != 0) {
                uVar8 = 0;
                do {
                    this = (shared_ptr*)
                        eastl::vector<shared_ptr<MidiRequest>, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, false,
                                                                                             eastl::dummy_allocator>>::
                        operator[]((vector<shared_ptr<MidiRequest>,
                                           eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, false,
                                                                         eastl::dummy_allocator>>*)&m_activeRequests,
                                   uVar8);
                    if (operator==(this, (_func_decltype_nullptr*)0)) {
                    LAB_1002cc49f:
                        lVar4 = m_activeRequests.HeapBeginPtr();
                        m_activeRequests.erase((shared_ptr*)(uVar8 * 16 + lVar4));
                        uVar8 = uVar8 - 1;
                    } else {
                        lVar4 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this);
                        cVar1 = *(char*)(lVar4 + 28);
                        lVar4 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this);
                        if (cVar1 != '\0') {
                            lVar4 = shared_ptr<MidiPlayerMainThread>::operator->(
                                (shared_ptr<MidiPlayerMainThread>*)(lVar4 + 32));
                            if (0 < *(int*)(lVar4 + 8)) {
                                lVar4 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this);
                                lVar4 = shared_ptr<MidiPlayerMainThread>::operator->(
                                    (shared_ptr<MidiPlayerMainThread>*)(lVar4 + 32));
                                *(int*)(lVar4 + 8) = *(int*)(lVar4 + 8) + -1;
                            }
                            lVar4 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this);
                            plVar5 = (long*)shared_ptr<MidiPlayerMainThread>::operator->(
                                (shared_ptr<MidiPlayerMainThread>*)(lVar4 + 32));
                            (**(code**)(*plVar5 + 24))(plVar5);
                            lVar4 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this);
                            plVar5 = (long*)shared_ptr<MidiPlayerMainThread>::operator->(
                                (shared_ptr<MidiPlayerMainThread>*)(lVar4 + 32));
                            (**(code**)(*plVar5 + 64))(plVar5);
                            lVar4 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this);
                            puVar6 = (undefined8*)shared_ptr<MidiPlayerMainThread>::operator->(
                                (shared_ptr<MidiPlayerMainThread>*)(lVar4 + 32));
                            (**(code**)*puVar6)(puVar6, 0);
                            goto LAB_1002cc49f;
                        }
                        *(undefined1*)(lVar4 + 28) = 1;
                    }
                    uVar8 = uVar8 + 1;
                    uVar7 = m_activeRequests.size();
                } while (uVar8 < uVar7);
            }
        }
    }

    // 0x1002cc550, 240 bytes, placed by class name and debug map
    // MidiManager::EnqueueRequests(eastl::vector<shared_ptr<MidiRequest>, eastl::allocator> const&, bool)
    void MidiManager::EnqueueRequests(vector* param_1, bool param_2) {
        undefined8 uVar2;
        long lVar3;
        ulong uVar4;
        shared_ptr* this;
        ulong uVar5;

        uVar2 = std::this_thread::get_id();
        if (std::operator==(uVar2, sound::g_idMainThread) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("std::this_thread::get_id() == sound::g_idMainThread",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                      "midimanager.cpp",
                      313, (char*)0);
        }
        if (!param_2) {
            m_previousRequests.clear();
        }
        lVar3 = param_1->size();
        if (lVar3 != 0) {
            uVar5 = 0;
            do {
                this = (shared_ptr*)eastl::vector<shared_ptr<MidiRequest>, eastl::allocator>::operator[](
                    (vector<shared_ptr<MidiRequest>, eastl::allocator>*)param_1, uVar5);
                lVar3 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this);
                if (*(int*)(lVar3 + 8) != -1) {
                    lVar3 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this);
                    if (*(int*)(lVar3 + 12) != -1) {
                        if (!param_2) {
                            eastl::fixed_vector<shared_ptr<MidiRequest>, 4ul, false, eastl::dummy_allocator>::push_back(
                                (shared_ptr*)&m_previousRequests);
                        }
                        m_pendingRequests.push(this);
                    }
                }
                uVar5 = uVar5 + 1;
                uVar4 = param_1->size();
            } while (uVar5 < uVar4);
        }
    }

    // 0x1002cc650, 128 bytes, placed by class name and debug map
    // MidiManager::SetFadeParameters(int, int, int, int)
    void MidiManager::SetFadeParameters(int param_1, int param_2, int param_3, int param_4) {
        undefined8 uVar2;

        uVar2 = std::this_thread::get_id();
        if (std::operator==(uVar2, sound::g_idMainThread) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("std::this_thread::get_id() == sound::g_idMainThread",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                      "midimanager.cpp",
                      338, (char*)0);
        }
        m_fadeOutDelay = param_1;
        m_fadeOutDuration = param_2;
        m_fadeInDelay = param_3;
        m_fadeInDuration = param_4;
    }

    // 0x1002ccda0, 224 bytes, placed by class name and debug map
    // MidiManager::GetCurrentActiveRequests()
    MidiManager* MidiManager::GetCurrentActiveRequests() {
        undefined8 uVar2;
        shared_ptr* psVar3;
        shared_ptr* psVar4;
        shared_ptr local_38;

        uVar2 = std::this_thread::get_id();
        if (std::operator==(uVar2, sound::g_idMainThread) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("std::this_thread::get_id() == sound::g_idMainThread",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                      "midimanager.cpp",
                      348, (char*)0);
        }
        new (this) eastl::vector<shared_ptr<MidiRequest>, eastl::allocator>();
        psVar3 = (shared_ptr*)m_activeRequests.HeapBeginPtr();
        psVar4 = (shared_ptr*)m_activeRequests.end();
        if (psVar3 != psVar4) {
            do {
                new (&local_38) shared_ptr<dash3d::Decor>(psVar3);
                push_back(&local_38);
                local_38.~shared_ptr();
                psVar3 = psVar3 + 1;
            } while (psVar3 != psVar4);
        }
        return this;
    }

    // 0x1002ccf60, 336 bytes, placed by class name and debug map
    // MidiManager::SetVolume(int)
    void MidiManager::SetVolume(int param_1) {
        char cVar1;
        bool bVar2;
        undefined8 uVar3;
        shared_ptr* psVar4;
        shared_ptr* psVar5;
        long lVar6;
        long* plVar7;
        undefined8* puVar8;

        uVar3 = std::this_thread::get_id();
        cVar1 = std::operator==(uVar3);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("std::this_thread::get_id() == sound::g_idMainThread",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                      "midimanager.cpp",
                      112, (char*)0);
        }
        cVar1 = m_activeRequests.empty();
        if (cVar1 == '\0') {
            psVar4 = (shared_ptr*)m_activeRequests.HeapBeginPtr();
            psVar5 = (shared_ptr*)m_activeRequests.end();
            for (; psVar4 != psVar5; psVar4 = psVar4 + 1) {
                bVar2 = operator==(psVar4, (_func_decltype_nullptr*)0);
                if (!bVar2) {
                    lVar6 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)psVar4);
                    *(int*)(lVar6 + 16) = param_1;
                }
            }
            psVar4 = (shared_ptr*)
                eastl::vector<shared_ptr<MidiRequest>,
                              eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, false, eastl::dummy_allocator>>::
                operator[]((vector<shared_ptr<MidiRequest>,
                                   eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, false,
                                                                 eastl::dummy_allocator>>*)&m_activeRequests,
                           0);
            bVar2 = operator!=(psVar4, (_func_decltype_nullptr*)0);
            if (bVar2) {
                lVar6 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)psVar4);
                bVar2 = operator!=((shared_ptr*)(lVar6 + 32), (_func_decltype_nullptr*)0);
                if (bVar2) {
                    lVar6 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)psVar4);
                    plVar7 = (long*)shared_ptr<MidiPlayerMainThread>::operator->(
                        (shared_ptr<MidiPlayerMainThread>*)(lVar6 + 32));
                    cVar1 = (**(code**)(*plVar7 + 32))(plVar7);
                    if ((cVar1 != '\0') &&
                        (lVar6 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)psVar4),
                         *(char*)(lVar6 + 27) == '\0')) {
                        lVar6 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)psVar4);
                        puVar8 = (undefined8*)shared_ptr<MidiPlayerMainThread>::operator->(
                            (shared_ptr<MidiPlayerMainThread>*)(lVar6 + 32));
                        (**(code**)*puVar8)(puVar8, param_1);
                        lVar6 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)psVar4);
                        *(float*)(lVar6 + 20) = (float)param_1;
                    }
                }
            }
        }
    }

    // 0x1002cd130, 544 bytes, placed by class name and debug map
    // MidiManager::Stop(int, int)
    void MidiManager::Stop(int param_1, int param_2) {
        char cVar1;
        undefined8 uVar2;
        shared_ptr* psVar3;
        _func_decltype_nullptr* local_60;
        MidiManager local_58[2];
        shared_ptr local_38;
        shared_ptr local_28;

        uVar2 = std::this_thread::get_id();
        cVar1 = std::operator==(uVar2, sound::g_idMainThread);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("std::this_thread::get_id() == sound::g_idMainThread",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                      "midimanager.cpp",
                      137, (char*)0);
        }
        SetFadeParameters(param_1, param_2, 0, 0);
        m_previousRequests.clear();
        m_taskList.clear();
        cVar1 = m_activeRequests.empty();
        if ((cVar1 == '\0') && (param_1 != 0 || param_2 != 0)) {
            local_38._0_8_ = 0;
            make_shared<DelayFadeTask, decltype(nullptr), int&>((jag*)&local_28, (_func_decltype_nullptr**)&local_38,
                                                                &m_fadeOutDelay);
            shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                (shared_ptr<RSevenDebugPresetProvider>*)local_58, &local_28);
            m_taskList.push_back(local_58);
            local_58->~shared_ptr();
            local_28.~shared_ptr();
            local_38._0_8_ = 0;
            psVar3 = (shared_ptr*)m_activeRequests.front();
            make_shared<FadeOutTask, decltype(nullptr), shared_ptr<MidiRequest>&, int&>(
                (jag*)&local_28, (_func_decltype_nullptr**)&local_38, psVar3, &m_fadeOutDuration);
            shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                (shared_ptr<RSevenDebugPresetProvider>*)local_58, &local_28);
            m_taskList.push_back(local_58);
            local_58->~shared_ptr();
            local_28.~shared_ptr();
            local_60 = (_func_decltype_nullptr*)0;
            GetCurrentActiveRequests(local_58);
            make_shared<ClearRequestTask, decltype(nullptr),
                        eastl::fixed_vector<shared_ptr<MidiRequest>, 4ul, false, eastl::dummy_allocator>&,
                        eastl::vector<shared_ptr<MidiRequest>, eastl::allocator>>(
                (jag*)&local_38, &local_60, (fixed_vector*)&m_activeRequests, (vector*)local_58);
            shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                (shared_ptr<RSevenDebugPresetProvider>*)&local_28, &local_38);
            m_taskList.push_back(&local_28);
            local_28.~shared_ptr();
            local_38.~shared_ptr();
            local_58->~vector();
        } else {
            ClearRequestsImmediate();
        }
    }

    // 0x1002cd400, 304 bytes, placed by class name and debug map
    // MidiManager::ClearRequestsImmediate()
    void MidiManager::ClearRequestsImmediate() {
        undefined8 uVar3;
        shared_ptr* this;
        shared_ptr* psVar4;
        long lVar5;
        long* plVar6;
        undefined8* puVar7;
        Client* this_00;

        uVar3 = std::this_thread::get_id();
        if (std::operator==(uVar3) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("std::this_thread::get_id() == sound::g_idMainThread",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                      "midimanager.cpp",
                      372, (char*)0);
        }
        this = (shared_ptr*)m_activeRequests.HeapBeginPtr();
        psVar4 = (shared_ptr*)m_activeRequests.end();
        for (; this != psVar4; this = this + 1) {
            if (!operator==(this, (_func_decltype_nullptr*)0)) {
                lVar5 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this);
                lVar5 = shared_ptr<MidiPlayerMainThread>::operator->((shared_ptr<MidiPlayerMainThread>*)(lVar5 + 32));
                *(undefined4*)(lVar5 + 8) = 0;
                lVar5 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this);
                plVar6 = (long*)shared_ptr<MidiPlayerMainThread>::operator->(
                    (shared_ptr<MidiPlayerMainThread>*)(lVar5 + 32));
                (**(code**)(*plVar6 + 24))(plVar6);
                lVar5 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this);
                plVar6 = (long*)shared_ptr<MidiPlayerMainThread>::operator->(
                    (shared_ptr<MidiPlayerMainThread>*)(lVar5 + 32));
                (**(code**)(*plVar6 + 64))(plVar6);
                lVar5 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this);
                puVar7 = (undefined8*)shared_ptr<MidiPlayerMainThread>::operator->(
                    (shared_ptr<MidiPlayerMainThread>*)(lVar5 + 32));
                (**(code**)*puVar7)(puVar7, 0);
                this_00 = (Client*)Client::Instance();
                lVar5 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this);
                this_00->OnMidiEnd(*(int*)(lVar5 + 8));
            }
        }
        m_activeRequests.clear();
    }

    // 0x1002cd530, 224 bytes, placed by class name and debug map
    // MidiManager::IsPlaying()
    ulong MidiManager::IsPlaying() {
        char cVar1;
        bool bVar2;
        uint uVar3;
        undefined8 uVar4;
        shared_ptr* psVar5;
        shared_ptr<MidiRequest>* psVar6;
        long lVar7;
        long* plVar8;
        undefined8 unaff_RBX;
        ulong uVar9;

        uVar4 = std::this_thread::get_id();
        cVar1 = std::operator==(uVar4);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("std::this_thread::get_id() == sound::g_idMainThread",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                      "midimanager.cpp",
                      156, (char*)0);
        }
        cVar1 = m_taskList.empty();
        uVar9 = CONCAT71((int7)((ulong)unaff_RBX >> 8), 1);
        if (cVar1 != '\0') {
            cVar1 = m_activeRequests.empty();
            if (cVar1 == '\0') {
                psVar5 = (shared_ptr*)m_activeRequests.front();
                uVar9 = 0;
                bVar2 = operator==(psVar5, (_func_decltype_nullptr*)0);
                if (!bVar2) {
                    psVar6 = (shared_ptr<MidiRequest>*)m_activeRequests.front();
                    lVar7 = shared_ptr<MidiRequest>::operator->(psVar6);
                    uVar9 = 0;
                    bVar2 = operator==((shared_ptr*)(lVar7 + 32), (_func_decltype_nullptr*)0);
                    if (!bVar2) {
                        psVar6 = (shared_ptr<MidiRequest>*)m_activeRequests.front();
                        lVar7 = shared_ptr<MidiRequest>::operator->(psVar6);
                        plVar8 = (long*)shared_ptr<MidiPlayerMainThread>::operator->(
                            (shared_ptr<MidiPlayerMainThread>*)(lVar7 + 32));
                        uVar3 = (**(code**)(*plVar8 + 32))(plVar8);
                        uVar9 = (ulong)uVar3;
                    }
                }
            } else {
                uVar9 = 0;
            }
        }
        return uVar9 & 4294967295;
    }

    // 0x1002cd610, 1184 bytes, placed by class name and debug map
    // MidiManager::SwapSongs(int, int, int, int)
    void MidiManager::SwapSongs(int param_1, int param_2, int param_3, int param_4) {
        char cVar1;
        bool bVar2;
        undefined8 uVar3;
        ulong uVar4;
        shared_ptr* psVar5;
        shared_ptr<MidiRequest>* psVar6;
        long lVar7;
        long* plVar8;
        shared_ptr local_c8[2];
        _func_decltype_nullptr* local_a8;
        shared_ptr local_a0;
        shared_ptr local_90;
        _func_decltype_nullptr* local_80;
        allocator local_78[8];
        shared_ptr local_70;
        shared_ptr local_60;
        shared_ptr local_50;
        shared_ptr<RSevenDebugPresetProvider> local_40[16];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        uVar3 = std::this_thread::get_id();
        cVar1 = std::operator==(uVar3);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("std::this_thread::get_id() == sound::g_idMainThread",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                      "midimanager.cpp",
                      170, (char*)0);
        }
        uVar4 = m_activeRequests.size();
        if (1 < uVar4) {
            psVar5 = (shared_ptr*)
                eastl::vector<shared_ptr<MidiRequest>,
                              eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, false, eastl::dummy_allocator>>::
                operator[]((vector<shared_ptr<MidiRequest>,
                                   eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, false,
                                                                 eastl::dummy_allocator>>*)&m_activeRequests,
                           0);
            bVar2 = operator!=(psVar5, (_func_decltype_nullptr*)0);
            if (bVar2) {
                psVar6 = (shared_ptr<MidiRequest>*)
                    eastl::vector<shared_ptr<MidiRequest>,
                                  eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, false, eastl::dummy_allocator>>::
                    operator[]((vector<shared_ptr<MidiRequest>,
                                       eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, false,
                                                                     eastl::dummy_allocator>>*)&m_activeRequests,
                               0);
                lVar7 = shared_ptr<MidiRequest>::operator->(psVar6);
                plVar8 = (long*)shared_ptr<MidiPlayerMainThread>::operator->(
                    (shared_ptr<MidiPlayerMainThread>*)(lVar7 + 32));
                cVar1 = (**(code**)(*plVar8 + 32))(plVar8);
                if (cVar1 != '\0') {
                    psVar5 = (shared_ptr*)
                        eastl::vector<shared_ptr<MidiRequest>, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, false,
                                                                                             eastl::dummy_allocator>>::
                        operator[]((vector<shared_ptr<MidiRequest>,
                                           eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, false,
                                                                         eastl::dummy_allocator>>*)&m_activeRequests,
                                   1);
                    bVar2 = operator!=(psVar5, (_func_decltype_nullptr*)0);
                    if (bVar2) {
                        psVar6 = (shared_ptr<MidiRequest>*)eastl::vector<
                            shared_ptr<MidiRequest>,
                            eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, false, eastl::dummy_allocator>>::
                        operator[]((vector<shared_ptr<MidiRequest>,
                                           eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, false,
                                                                         eastl::dummy_allocator>>*)&m_activeRequests,
                                   1);
                        lVar7 = shared_ptr<MidiRequest>::operator->(psVar6);
                        plVar8 = (long*)shared_ptr<MidiPlayerMainThread>::operator->(
                            (shared_ptr<MidiPlayerMainThread>*)(lVar7 + 32));
                        cVar1 = (**(code**)(*plVar8 + 32))(plVar8);
                        if (cVar1 != '\0') {
                            SetFadeParameters(param_1, param_2, param_3, param_4);
                            local_60._0_8_ = 0;
                            make_shared<
                                SwapSongTask, decltype(nullptr),
                                eastl::fixed_vector<shared_ptr<MidiRequest>, 4ul, false, eastl::dummy_allocator>&>(
                                (jag*)&local_50, (_func_decltype_nullptr**)&local_60, (fixed_vector*)&m_activeRequests);
                            shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                                (shared_ptr<RSevenDebugPresetProvider>*)local_c8, &local_50);
                            m_taskList.push_back(local_c8);
                            local_c8->~shared_ptr();
                            local_50.~shared_ptr();
                            local_a8 = (_func_decltype_nullptr*)0;
                            psVar5 = (shared_ptr*)eastl::vector<
                                shared_ptr<MidiRequest>,
                                eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, false, eastl::dummy_allocator>>::
                            operator[](
                                (vector<shared_ptr<MidiRequest>,
                                        eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, false,
                                                                      eastl::dummy_allocator>>*)&m_activeRequests,
                                1);
                            make_shared<FadeInTask, decltype(nullptr), shared_ptr<MidiRequest>&, int&>(
                                (jag*)&local_70, &local_a8, psVar5, &m_fadeInDuration);
                            make_shared<DelayFadeTask, shared_ptr<FadeInTask>, int&>((jag*)&local_60, &local_70,
                                                                                     &m_fadeInDelay);
                            shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                                (shared_ptr<RSevenDebugPresetProvider>*)&local_50, &local_60);
                            local_80 = (_func_decltype_nullptr*)0;
                            psVar5 = (shared_ptr*)eastl::vector<
                                shared_ptr<MidiRequest>,
                                eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, false, eastl::dummy_allocator>>::
                            operator[](
                                (vector<shared_ptr<MidiRequest>,
                                        eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, false,
                                                                      eastl::dummy_allocator>>*)&m_activeRequests,
                                0);
                            make_shared<FadeOutTask, decltype(nullptr), shared_ptr<MidiRequest>&, int&>(
                                (jag*)&local_90, &local_80, psVar5, &m_fadeOutDuration);
                            make_shared<DelayFadeTask, shared_ptr<FadeOutTask>, int&>((jag*)&local_a0, &local_90,
                                                                                      &m_fadeOutDelay);
                            shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                                local_40, &local_a0);
                            eastl::allocator::allocator(local_78, "EASTL vector");
                            eastl::vector<shared_ptr<MidiTask>, eastl::allocator>::vector(local_c8, &local_50, 2,
                                                                                          local_78);
                            lVar7 = 16;
                            do {
                                (local_40 + lVar7 + -16)->~shared_ptr();
                                lVar7 = lVar7 + -16;
                            } while (lVar7 != -16);
                            local_a0.~shared_ptr();
                            local_90.~shared_ptr();
                            local_60.~shared_ptr();
                            local_70.~shared_ptr();
                            local_70._0_8_ = 0;
                            make_shared<ConcurrentMidiTask, decltype(nullptr),
                                        eastl::vector<shared_ptr<MidiTask>, eastl::allocator>&>(
                                (jag*)&local_60, (_func_decltype_nullptr**)&local_70, (vector*)local_c8);
                            shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                                (shared_ptr<RSevenDebugPresetProvider>*)&local_50, &local_60);
                            m_taskList.push_back(&local_50);
                            local_50.~shared_ptr();
                            local_60.~shared_ptr();
                            psVar5 = (shared_ptr*)eastl::vector<
                                shared_ptr<MidiRequest>,
                                eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, false, eastl::dummy_allocator>>::
                            operator[](
                                (vector<shared_ptr<MidiRequest>,
                                        eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, false,
                                                                      eastl::dummy_allocator>>*)&m_previousRequests,
                                0);
                            bVar2 = operator!=(psVar5, (_func_decltype_nullptr*)0);
                            if (bVar2) {
                                psVar5 = (shared_ptr*)eastl::vector<
                                    shared_ptr<MidiRequest>,
                                    eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, false, eastl::dummy_allocator>>::
                                operator[](
                                    (vector<shared_ptr<MidiRequest>,
                                            eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, false,
                                                                          eastl::dummy_allocator>>*)&m_previousRequests,
                                    1);
                                bVar2 = operator!=(psVar5, (_func_decltype_nullptr*)0);
                                if (bVar2) {
                                    psVar6 = (shared_ptr<MidiRequest>*)
                                        eastl::vector<shared_ptr<MidiRequest>,
                                                      eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, false,
                                                                                    eastl::dummy_allocator>>::
                                        operator[]((vector<shared_ptr<MidiRequest>,
                                                           eastl::fixed_vector_allocator<
                                                               16ul, 4ul, 8ul, 0ul, false,
                                                               eastl::dummy_allocator>>*)&m_previousRequests,
                                                   0);
                                    psVar5 = (shared_ptr*)
                                        eastl::vector<shared_ptr<MidiRequest>,
                                                      eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, false,
                                                                                    eastl::dummy_allocator>>::
                                        operator[]((vector<shared_ptr<MidiRequest>,
                                                           eastl::fixed_vector_allocator<
                                                               16ul, 4ul, 8ul, 0ul, false,
                                                               eastl::dummy_allocator>>*)&m_previousRequests,
                                                   1);
                                    psVar6->swap(psVar5);
                                }
                            }
                            local_c8->~vector();
                        }
                    }
                }
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1002cdc70, 160 bytes, placed by class name and debug map
    // MidiManager::HasPreviousSong(int)
    bool MidiManager::HasPreviousSong(int param_1) {
        char cVar1;
        undefined8 uVar3;
        shared_ptr* this;
        long lVar4;
        bool bVar5;

        uVar3 = std::this_thread::get_id();
        cVar1 = std::operator==(uVar3);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("std::this_thread::get_id() == sound::g_idMainThread",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                      "midimanager.cpp",
                      196, (char*)0);
        }
        cVar1 = m_previousRequests.empty();
        if (cVar1 == '\0') {
            bVar5 = false;
            this = (shared_ptr*)
                eastl::vector<shared_ptr<MidiRequest>,
                              eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, false, eastl::dummy_allocator>>::
                operator[]((vector<shared_ptr<MidiRequest>,
                                   eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, false,
                                                                 eastl::dummy_allocator>>*)&m_previousRequests,
                           0);
            if (operator!=(this, (_func_decltype_nullptr*)0)) {
                lVar4 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this);
                bVar5 = *(int*)(lVar4 + 8) == param_1;
            }
        } else {
            bVar5 = false;
        }
        return bVar5;
    }

    // 0x1002cdd10, 80 bytes, placed by class name and debug map
    // MidiManager::CanPlayPreviousSongs()
    ulong MidiManager::CanPlayPreviousSongs() {
        undefined8 uVar2;
        ulong uVar3;

        uVar2 = std::this_thread::get_id();
        if (std::operator==(uVar2, sound::g_idMainThread) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("std::this_thread::get_id() == sound::g_idMainThread",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                      "midimanager.cpp",
                      208, (char*)0);
        }
        uVar3 = m_previousRequests.empty();
        return uVar3 ^ 1;
    }

    // 0x1002cdd60, 80 bytes, placed by class name and debug map
    // MidiManager::ResetPreviousSongs()
    void MidiManager::ResetPreviousSongs() {
        undefined8 uVar2;

        uVar2 = std::this_thread::get_id();
        if (std::operator==(uVar2, sound::g_idMainThread) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("std::this_thread::get_id() == sound::g_idMainThread",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                      "midimanager.cpp",
                      215, (char*)0);
        }
        m_previousRequests.clear();
    }

    // 0x1002cddb0, 192 bytes, placed by class name and debug map
    // MidiManager::ResetPendingRequests()
    void MidiManager::ResetPendingRequests() {
        char cVar1;
        undefined8 uVar2;
        queue<shared_ptr<MidiRequest>, eastl::fixed_list<shared_ptr<MidiRequest>, 4ul, false, eastl::allocator>>
            local_f8[224];
        long local_18;

        local_18 = *(long*)PTR____stack_chk_guard_100ee9d98;
        uVar2 = std::this_thread::get_id();
        cVar1 = std::operator==(uVar2, sound::g_idMainThread);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("std::this_thread::get_id() == sound::g_idMainThread",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                      "midimanager.cpp",
                      222, (char*)0);
        }
        eastl::queue<shared_ptr<MidiRequest>,
                     eastl::fixed_list<shared_ptr<MidiRequest>, 4ul, false, eastl::allocator>>::queue(local_f8);
        eastl::fixed_queue<shared_ptr<MidiRequest>, 4ul, false>::operator=(
            (fixed_queue<shared_ptr<MidiRequest>, 4ul, false>*)&m_pendingRequests, (fixed_queue*)local_f8);
        local_f8->~fixed_queue();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_18) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1002cde70, 80 bytes, placed by class name and debug map
    // MidiManager::ResetTaskList()
    void MidiManager::ResetTaskList() {
        undefined8 uVar2;

        uVar2 = std::this_thread::get_id();
        if (std::operator==(uVar2, sound::g_idMainThread) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("std::this_thread::get_id() == sound::g_idMainThread",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                      "midimanager.cpp",
                      229, (char*)0);
        }
        m_taskList.clear();
    }

    // 0x1002cdec0, 352 bytes, placed by class name and debug map
    // MidiManager::PlayPreviousSongs(jagex3::Js5*, int)
    void MidiManager::PlayPreviousSongs(Js5* param_1, int param_2) {
        char cVar1;
        undefined8 uVar2;
        shared_ptr* this;
        shared_ptr* psVar3;
        long lVar4;
        undefined8* puVar5;
        vector<shared_ptr<MidiRequest>, eastl::allocator> local_50[32];

        uVar2 = std::this_thread::get_id();
        cVar1 = std::operator==(uVar2, sound::g_idMainThread);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("std::this_thread::get_id() == sound::g_idMainThread",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                      "midimanager.cpp",
                      236, (char*)0);
        }
        cVar1 = m_previousRequests.empty();
        if (cVar1 == '\0') {
            eastl::vector<shared_ptr<MidiRequest>, eastl::allocator>::vector(local_50);
            this = (shared_ptr*)m_previousRequests.HeapBeginPtr();
            psVar3 = (shared_ptr*)m_previousRequests.end();
            if (this != psVar3) {
                do {
                    lVar4 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this);
                    *(undefined1*)(lVar4 + 26) = 0;
                    lVar4 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this);
                    *(undefined1*)(lVar4 + 25) = 0;
                    lVar4 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this);
                    *(undefined1*)(lVar4 + 27) = 0;
                    lVar4 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this);
                    *(undefined1*)(lVar4 + 28) = 0;
                    puVar5 = (undefined8*)shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this);
                    *puVar5 = param_1;
                    lVar4 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this);
                    *(int*)(lVar4 + 16) = param_2;
                    lVar4 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this);
                    *(undefined4*)(lVar4 + 20) = 0;
                    eastl::vector<shared_ptr<MidiRequest>, eastl::allocator>::push_back(local_50, this);
                    this = this + 1;
                } while (this != psVar3);
            }
            Play((vector*)local_50, m_fadeOutDelay, m_fadeOutDuration, m_fadeInDelay, m_fadeInDuration, false);
            eastl::vector<shared_ptr<MidiRequest>, eastl::allocator>::~vector(local_50);
        }
    }

    // 0x1002ce070, 704 bytes, placed by class name and debug map
    // MidiManager::Service()
    undefined4 MidiManager::Service() {
        char cVar1;
        bool bVar2;
        undefined4 uVar3;
        undefined8 uVar4;
        shared_ptr* psVar5;
        long* plVar6;
        MidiTask* this;
        undefined8 uVar7;
        long lVar8;
        ulong uVar9;
        ulong uVar10;
        shared_ptr local_50[2];
        shared_ptr local_30;

        uVar4 = std::this_thread::get_id();
        cVar1 = std::operator==(uVar4, sound::g_idMainThread);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("std::this_thread::get_id() == sound::g_idMainThread",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                      "midimanager.cpp",
                      260, (char*)0);
        }
        cVar1 = m_taskList.empty();
        if (cVar1 == '\0') {
            psVar5 = (shared_ptr*)m_taskList.front();
            new (&local_30) shared_ptr<dash3d::Decor>(psVar5);
            bVar2 = operator==(&local_30, (_func_decltype_nullptr*)0);
            if (bVar2) {
                psVar5 = (shared_ptr*)m_taskList.HeapBeginPtr();
                m_taskList.erase(psVar5);
                cVar1 = '\0';
                uVar3 = 0;
            } else {
                plVar6 = (long*)shared_ptr<MidiTask>::operator->((shared_ptr<MidiTask>*)&local_30);
                cVar1 = (**(code**)(*plVar6 + 16))(plVar6);
                if (cVar1 == '\0') {
                    plVar6 = (long*)shared_ptr<MidiTask>::operator->((shared_ptr<MidiTask>*)&local_30);
                    uVar3 = (**(code**)(*plVar6 + 24))(plVar6);
                    cVar1 = '\0';
                } else {
                    this = (MidiTask*)shared_ptr<MidiTask>::operator->((shared_ptr<MidiTask>*)&local_30);
                    cVar1 = HasError();
                    if (cVar1 == '\0') {
                        shared_ptr<MidiTask>::operator->((shared_ptr<MidiTask>*)&local_30);
                        local_50->GetCompletionTask();
                        bVar2 = operator!=(local_50, (_func_decltype_nullptr*)0);
                        local_50->~shared_ptr();
                        if (bVar2) {
                            lVar8 = m_taskList.HeapBeginPtr();
                            shared_ptr<MidiTask>::operator->((shared_ptr<MidiTask>*)&local_30);
                            local_50->GetCompletionTask();
                            eastl::vector<shared_ptr<MidiTask>, eastl::allocator>::emplace<shared_ptr<MidiTask>>(
                                (vector<shared_ptr<MidiTask>, eastl::allocator>*)&m_taskList, (shared_ptr*)(lVar8 + 16),
                                local_50);
                            local_50->~shared_ptr();
                        }
                        plVar6 = (long*)shared_ptr<MidiTask>::operator->((shared_ptr<MidiTask>*)&local_30);
                        uVar3 = (**(code**)(*plVar6 + 24))(plVar6);
                    } else {
                        uVar4 = logger::default_logger();
                        shared_ptr<MidiTask>::operator->((shared_ptr<MidiTask>*)&local_30);
                        local_50->GetErrorMessage();
                        uVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        logger::Logger::Log(uVar4, 0, 2,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "oldscape/jagex3/midi2/midimanager.cpp",
                                            276, "Error in service: %s", uVar7);
                        local_50->~basic_string();
                        uVar3 = 0;
                    }
                    shared_ptr<MidiTask>::reset();
                    psVar5 = (shared_ptr*)m_taskList.HeapBeginPtr();
                    m_taskList.erase(psVar5);
                }
            }
            local_30.~shared_ptr();
            if (cVar1 != '\0') {
                lVar8 = m_taskList.size();
                if (lVar8 != 0) {
                    uVar10 = 0;
                    do {
                        eastl::vector<shared_ptr<MidiTask>, eastl::allocator>::operator[](
                            (vector<shared_ptr<MidiTask>, eastl::allocator>*)&m_taskList, uVar10);
                        shared_ptr<MidiTask>::reset();
                        uVar10 = uVar10 + 1;
                        uVar9 = m_taskList.size();
                    } while (uVar10 < uVar9);
                }
                m_taskList.clear();
                ClearRequestsImmediate();
            }
        } else {
            uVar3 = 0;
        }
        return uVar3;
    }

    // 0x1002ce5d0, 208 bytes, placed by class name
    // MidiManager::SetPreviousRequests(eastl::vector<shared_ptr<MidiRequest>, eastl::allocator> const&, int, int, int, int)
    void MidiManager::SetPreviousRequests(vector* param_1, int param_2, int param_3, int param_4, int param_5) {
        undefined8 uVar2;
        long lVar3;
        long lVar4;

        uVar2 = std::this_thread::get_id();
        if (std::operator==(uVar2, sound::g_idMainThread) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("std::this_thread::get_id() == sound::g_idMainThread",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                      "midimanager.cpp",
                      360, (char*)0);
        }
        m_previousRequests.clear();
        lVar3 = param_1->HeapBeginPtr();
        lVar4 = param_1->end();
        for (; lVar3 != lVar4; lVar3 = lVar3 + 16) {
            eastl::fixed_vector<shared_ptr<MidiRequest>, 4ul, false, eastl::dummy_allocator>::push_back(
                (shared_ptr*)&m_previousRequests);
        }
        SetFadeParameters(param_2, param_3, param_4, param_5);
    }

    // 0x1002ec8c0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.198
    void ___cxx_global_var_init_198() {
        new (&MidiManager::m_pendingRequests) eastl::fixed_queue<shared_ptr<MidiRequest>, 4ul, false>();
        ___cxa_atexit(PTR__fixed_queue_100ee6c70, &MidiManager::m_pendingRequests, 4294967296);
    }

    // 0x1002ec900, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.199
    void ___cxx_global_var_init_199() {
        new (&MidiManager::m_taskList) eastl::vector<shared_ptr<MidiTask>, eastl::allocator>();
        ___cxa_atexit(PTR__vector_100ee6d30, &MidiManager::m_taskList, 4294967296);
    }

} // namespace jag::oldscape::midi2

namespace jag {
    // 0x1002cc730, 192 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::midi2::AddRequestTask>::type make_shared<oldscape::midi2::AddRequestTask, decltype(nullptr), eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false, eastl::dummy_allocator>&, eastl::fixed_queue<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false>&, std::array<shared_ptr<oldscape::midi2::MidiPlayerMainThread>, 3ul>&>(decltype(nullptr)&&, eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false, eastl::dummy_allocator>&, eastl::fixed_queue<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false>&, std::array<shared_ptr<oldscape::midi2::MidiPlayerMainThread>, 3ul>&)
    /* shared_ptr_if_not_array<oldscape::midi2::AddRequestTask>::type
   make_shared<oldscape::midi2::AddRequestTask, decltype(nullptr),
   eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false,
   eastl::dummy_allocator>&, eastl::fixed_queue<shared_ptr<oldscape::midi2::MidiRequest>,
   4ul, false>&, std::array<shared_ptr<oldscape::midi2::MidiPlayerMainThread>,
   3ul>&>(decltype(nullptr)&&,
   eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false,
   eastl::dummy_allocator>&, eastl::fixed_queue<shared_ptr<oldscape::midi2::MidiRequest>,
   4ul, false>&, std::array<shared_ptr<oldscape::midi2::MidiPlayerMainThread>, 3ul>&) */

    jag*
    jag::make_shared<oldscape::midi2::AddRequestTask, decltype(nullptr),
                     eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false, eastl::dummy_allocator>&,
                     eastl::fixed_queue<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false>&,
                     std::array<shared_ptr<oldscape::midi2::MidiPlayerMainThread>, 3ul>&>(
        _func_decltype_nullptr** param_1, fixed_vector* param_2, fixed_queue* param_3, array* param_4) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        AddRequestTask* local_40[2];

        pvVar1 = (void*)aligned_alloc(152, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] = placement_new<
                oldscape::midi2::AddRequestTask, decltype(nullptr),
                eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false, eastl::dummy_allocator>&,
                eastl::fixed_queue<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false>&,
                std::array<shared_ptr<oldscape::midi2::MidiPlayerMainThread>, 3ul>&>(
                (void*)((long)pvVar1 + 32), param_1, param_2, param_3, param_4);
            local_44 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::midi2::AddRequestTask>, int,
                                   oldscape::midi2::AddRequestTask*&>(pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

    // 0x1002cc7f0, 192 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::midi2::LoadSongTask>::type make_shared<oldscape::midi2::LoadSongTask, decltype(nullptr), eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false, eastl::dummy_allocator>&, oldscape::jagex3::Js5*&, oldscape::jagex3::Js5*&, oldscape::jagex3::Js5*&>(decltype(nullptr)&&, eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false, eastl::dummy_allocator>&, oldscape::jagex3::Js5*&, oldscape::jagex3::Js5*&, oldscape::jagex3::Js5*&)
    jag*
    jag::make_shared<oldscape::midi2::LoadSongTask, decltype(nullptr),
                     eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false, eastl::dummy_allocator>&,
                     oldscape::jagex3::Js5*&, oldscape::jagex3::Js5*&, oldscape::jagex3::Js5*&>(
        _func_decltype_nullptr** param_1, fixed_vector* param_2, Js5** param_3, Js5** param_4, Js5** param_5) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        LoadSongTask* local_40[2];

        pvVar1 = (void*)aligned_alloc(160, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] = placement_new<
                oldscape::midi2::LoadSongTask, decltype(nullptr),
                eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false, eastl::dummy_allocator>&,
                oldscape::jagex3::Js5*&, oldscape::jagex3::Js5*&, oldscape::jagex3::Js5*&>(
                (void*)((long)pvVar1 + 32), param_1, param_2, param_3, param_4, param_5);
            local_44 = 1;
            prVar2 =
                placement_new<ref_counter_shared<oldscape::midi2::LoadSongTask>, int, oldscape::midi2::LoadSongTask*&>(
                    pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

    // 0x1002cc8b0, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::midi2::StartSongTask>::type make_shared<oldscape::midi2::StartSongTask, shared_ptr<oldscape::midi2::FadeInTask>, eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false, eastl::dummy_allocator>&>(shared_ptr<oldscape::midi2::FadeInTask>&&, eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false, eastl::dummy_allocator>&)
    jag* jag::make_shared<oldscape::midi2::StartSongTask, shared_ptr<oldscape::midi2::FadeInTask>,
                          eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false,
                                              eastl::dummy_allocator>&>(shared_ptr* param_1, fixed_vector* param_2) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_3c;
        StartSongTask* local_38[2];

        pvVar1 = (void*)aligned_alloc(136, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_38[0] = placement_new<
                oldscape::midi2::StartSongTask, shared_ptr<oldscape::midi2::FadeInTask>,
                eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false, eastl::dummy_allocator>&>(
                (void*)((long)pvVar1 + 32), param_1, param_2);
            local_3c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::midi2::StartSongTask>, int,
                                   oldscape::midi2::StartSongTask*&>(pvVar1, &local_3c, local_38);
            prVar2->~AutoSingleton(local_38[0]);
            prVar2->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_38[0]);
        }
        return this;
    }

    // 0x1002cc960, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::midi2::FadeInTask>::type make_shared<oldscape::midi2::FadeInTask, decltype(nullptr), shared_ptr<oldscape::midi2::MidiRequest>&, int&>(decltype(nullptr)&&, shared_ptr<oldscape::midi2::MidiRequest>&, int&)
    jag*
    jag::make_shared<oldscape::midi2::FadeInTask, decltype(nullptr), shared_ptr<oldscape::midi2::MidiRequest>&, int&>(
        _func_decltype_nullptr** param_1, shared_ptr* param_2, int* param_3) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        FadeInTask* local_40[2];

        pvVar1 = (void*)aligned_alloc(152, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] =
                placement_new<oldscape::midi2::FadeInTask, decltype(nullptr), shared_ptr<oldscape::midi2::MidiRequest>&,
                              int&>((void*)((long)pvVar1 + 32), param_1, param_2, param_3);
            local_44 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::midi2::FadeInTask>, int, oldscape::midi2::FadeInTask*&>(
                pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

    // 0x1002cca30, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::midi2::DelayFadeTask>::type make_shared<oldscape::midi2::DelayFadeTask, shared_ptr<oldscape::midi2::ConcurrentMidiTask>, int&>(shared_ptr<oldscape::midi2::ConcurrentMidiTask>&&, int&)
    jag* jag::make_shared<oldscape::midi2::DelayFadeTask, shared_ptr<oldscape::midi2::ConcurrentMidiTask>, int&>(
        shared_ptr* param_1, int* param_2) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_3c;
        DelayFadeTask* local_38[2];

        pvVar1 = (void*)aligned_alloc(136, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_38[0] =
                placement_new<oldscape::midi2::DelayFadeTask, shared_ptr<oldscape::midi2::ConcurrentMidiTask>, int&>(
                    (void*)((long)pvVar1 + 32), param_1, param_2);
            local_3c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::midi2::DelayFadeTask>, int,
                                   oldscape::midi2::DelayFadeTask*&>(pvVar1, &local_3c, local_38);
            prVar2->~AutoSingleton(local_38[0]);
            prVar2->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_38[0]);
        }
        return this;
    }

    // 0x1002ccae0, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::midi2::ConcurrentMidiTask>::type make_shared<oldscape::midi2::ConcurrentMidiTask, decltype(nullptr), eastl::vector<shared_ptr<oldscape::midi2::MidiTask>, eastl::allocator>&>(decltype(nullptr)&&, eastl::vector<shared_ptr<oldscape::midi2::MidiTask>, eastl::allocator>&)
    jag* jag::make_shared<oldscape::midi2::ConcurrentMidiTask, decltype(nullptr),
                          eastl::vector<shared_ptr<oldscape::midi2::MidiTask>, eastl::allocator>&>(
        _func_decltype_nullptr** param_1, vector* param_2) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_3c;
        ConcurrentMidiTask* local_38[2];

        pvVar1 = (void*)aligned_alloc(160, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_38[0] = placement_new<oldscape::midi2::ConcurrentMidiTask, decltype(nullptr),
                                        eastl::vector<shared_ptr<oldscape::midi2::MidiTask>, eastl::allocator>&>(
                (void*)((long)pvVar1 + 32), param_1, param_2);
            local_3c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::midi2::ConcurrentMidiTask>, int,
                                   oldscape::midi2::ConcurrentMidiTask*&>(pvVar1, &local_3c, local_38);
            prVar2->~AutoSingleton(local_38[0]);
            prVar2->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_38[0]);
        }
        return this;
    }

    // 0x1002ccb90, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::midi2::DelayFadeTask>::type make_shared<oldscape::midi2::DelayFadeTask, shared_ptr<oldscape::midi2::FadeOutTask>, int&>(shared_ptr<oldscape::midi2::FadeOutTask>&&, int&)
    jag* jag::make_shared<oldscape::midi2::DelayFadeTask, shared_ptr<oldscape::midi2::FadeOutTask>, int&>(
        shared_ptr* param_1, int* param_2) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_3c;
        DelayFadeTask* local_38[2];

        pvVar1 = (void*)aligned_alloc(136, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_38[0] = placement_new<oldscape::midi2::DelayFadeTask, shared_ptr<oldscape::midi2::FadeOutTask>, int&>(
                (void*)((long)pvVar1 + 32), param_1, param_2);
            local_3c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::midi2::DelayFadeTask>, int,
                                   oldscape::midi2::DelayFadeTask*&>(pvVar1, &local_3c, local_38);
            prVar2->~AutoSingleton(local_38[0]);
            prVar2->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_38[0]);
        }
        return this;
    }

    // 0x1002ccc40, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::midi2::FadeOutTask>::type make_shared<oldscape::midi2::FadeOutTask, shared_ptr<oldscape::midi2::ClearRequestTask>, shared_ptr<oldscape::midi2::MidiRequest>&, int&>(shared_ptr<oldscape::midi2::ClearRequestTask>&&, shared_ptr<oldscape::midi2::MidiRequest>&, int&)
    jag* jag::make_shared<oldscape::midi2::FadeOutTask, shared_ptr<oldscape::midi2::ClearRequestTask>,
                          shared_ptr<oldscape::midi2::MidiRequest>&, int&>(shared_ptr* param_1, shared_ptr* param_2,
                                                                           int* param_3) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        FadeOutTask* local_40[2];

        pvVar1 = (void*)aligned_alloc(152, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] = placement_new<oldscape::midi2::FadeOutTask, shared_ptr<oldscape::midi2::ClearRequestTask>,
                                        shared_ptr<oldscape::midi2::MidiRequest>&, int&>((void*)((long)pvVar1 + 32),
                                                                                         param_1, param_2, param_3);
            local_44 = 1;
            prVar2 =
                placement_new<ref_counter_shared<oldscape::midi2::FadeOutTask>, int, oldscape::midi2::FadeOutTask*&>(
                    pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

    // 0x1002cccf0, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::midi2::ClearRequestTask>::type make_shared<oldscape::midi2::ClearRequestTask, decltype(nullptr), eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false, eastl::dummy_allocator>&, eastl::vector<shared_ptr<oldscape::midi2::MidiRequest>, eastl::allocator> >(decltype(nullptr)&&, eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false, eastl::dummy_allocator>&, eastl::vector<shared_ptr<oldscape::midi2::MidiRequest>, eastl::allocator>&&)
    jag*
    jag::make_shared<oldscape::midi2::ClearRequestTask, decltype(nullptr),
                     eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false, eastl::dummy_allocator>&,
                     eastl::vector<shared_ptr<oldscape::midi2::MidiRequest>, eastl::allocator>>(
        _func_decltype_nullptr** param_1, fixed_vector* param_2, vector* param_3) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        ClearRequestTask* local_40[2];

        pvVar1 = (void*)aligned_alloc(168, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] = placement_new<
                oldscape::midi2::ClearRequestTask, decltype(nullptr),
                eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false, eastl::dummy_allocator>&,
                eastl::vector<shared_ptr<oldscape::midi2::MidiRequest>, eastl::allocator>>((void*)((long)pvVar1 + 32),
                                                                                           param_1, param_2, param_3);
            local_44 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::midi2::ClearRequestTask>, int,
                                   oldscape::midi2::ClearRequestTask*&>(pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

    // 0x1002cceb0, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::midi2::DelayFadeTask>::type make_shared<oldscape::midi2::DelayFadeTask, decltype(nullptr), int&>(decltype(nullptr)&&, int&)
    jag* make_shared<oldscape::midi2::DelayFadeTask, decltype(nullptr), int&>(_func_decltype_nullptr** param_1,
                                                                              int* param_2) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_3c;
        DelayFadeTask* local_38[2];

        pvVar1 = (void*)aligned_alloc(136, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_38[0] = placement_new<oldscape::midi2::DelayFadeTask, decltype(nullptr), int&>(
                (void*)((long)pvVar1 + 32), param_1, param_2);
            local_3c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::midi2::DelayFadeTask>, int,
                                   oldscape::midi2::DelayFadeTask*&>(pvVar1, &local_3c, local_38);
            prVar2->~AutoSingleton(local_38[0]);
            prVar2->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_38[0]);
        }
        return this;
    }

    // 0x1002cd350, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::midi2::FadeOutTask>::type make_shared<oldscape::midi2::FadeOutTask, decltype(nullptr), shared_ptr<oldscape::midi2::MidiRequest>&, int&>(decltype(nullptr)&&, shared_ptr<oldscape::midi2::MidiRequest>&, int&)
    jag*
    jag::make_shared<oldscape::midi2::FadeOutTask, decltype(nullptr), shared_ptr<oldscape::midi2::MidiRequest>&, int&>(
        _func_decltype_nullptr** param_1, shared_ptr* param_2, int* param_3) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        FadeOutTask* local_40[2];

        pvVar1 = (void*)aligned_alloc(152, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] = placement_new<oldscape::midi2::FadeOutTask, decltype(nullptr),
                                        shared_ptr<oldscape::midi2::MidiRequest>&, int&>((void*)((long)pvVar1 + 32),
                                                                                         param_1, param_2, param_3);
            local_44 = 1;
            prVar2 =
                placement_new<ref_counter_shared<oldscape::midi2::FadeOutTask>, int, oldscape::midi2::FadeOutTask*&>(
                    pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

    // 0x1002cdab0, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::midi2::SwapSongTask>::type make_shared<oldscape::midi2::SwapSongTask, decltype(nullptr), eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false, eastl::dummy_allocator>&>(decltype(nullptr)&&, eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false, eastl::dummy_allocator>&)
    jag* jag::make_shared<
        oldscape::midi2::SwapSongTask, decltype(nullptr),
        eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false, eastl::dummy_allocator>&>(
        _func_decltype_nullptr** param_1, fixed_vector* param_2) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_3c;
        SwapSongTask* local_38[2];

        pvVar1 = (void*)aligned_alloc(136, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_38[0] = placement_new<
                oldscape::midi2::SwapSongTask, decltype(nullptr),
                eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false, eastl::dummy_allocator>&>(
                (void*)((long)pvVar1 + 32), param_1, param_2);
            local_3c = 1;
            prVar2 =
                placement_new<ref_counter_shared<oldscape::midi2::SwapSongTask>, int, oldscape::midi2::SwapSongTask*&>(
                    pvVar1, &local_3c, local_38);
            prVar2->~AutoSingleton(local_38[0]);
            prVar2->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_38[0]);
        }
        return this;
    }

    // 0x1002cdb60, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::midi2::DelayFadeTask>::type make_shared<oldscape::midi2::DelayFadeTask, shared_ptr<oldscape::midi2::FadeInTask>, int&>(shared_ptr<oldscape::midi2::FadeInTask>&&, int&)
    jag*
    jag::make_shared<oldscape::midi2::DelayFadeTask, shared_ptr<oldscape::midi2::FadeInTask>, int&>(shared_ptr* param_1,
                                                                                                    int* param_2) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_3c;
        DelayFadeTask* local_38[2];

        pvVar1 = (void*)aligned_alloc(136, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_38[0] = placement_new<oldscape::midi2::DelayFadeTask, shared_ptr<oldscape::midi2::FadeInTask>, int&>(
                (void*)((long)pvVar1 + 32), param_1, param_2);
            local_3c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::midi2::DelayFadeTask>, int,
                                   oldscape::midi2::DelayFadeTask*&>(pvVar1, &local_3c, local_38);
            prVar2->~AutoSingleton(local_38[0]);
            prVar2->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_38[0]);
        }
        return this;
    }

} // namespace jag
