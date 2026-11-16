// _unplaced/libs/oldscape/jagex3/unity_2.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

namespace jag {
    // 0x1002e28e0
    oldscape::jagex3::Js5RemoteLoader::Js5Remote*
    placement_new<oldscape::jagex3::Js5RemoteLoader::Js5Remote, oldscape::jagex3::Js5RemoteLoader&,
                  oldscape::jagex3::Js5ArchiveId&, bool&, bool&, bool&, bool&>(
        void* arg1, oldscape::jagex3::Js5RemoteLoader& js5RemoteLoader, oldscape::jagex3::Js5ArchiveId& js5ArchiveId,
        bool& arg4, bool& arg5, bool& arg6, bool& arg7) {
        new (arg1) oldscape::jagex3::Js5RemoteLoader::Js5Remote(js5RemoteLoader, js5ArchiveId, arg4, arg5, arg6, arg7);
        return arg1;
    }

    // 0x1002e2910
    ref_counter_shared<oldscape::jagex3::Js5RemoteLoader::Js5Remote>*
    placement_new<ref_counter_shared<oldscape::jagex3::Js5RemoteLoader::Js5Remote>, int,
                  oldscape::jagex3::Js5RemoteLoader::Js5Remote*&>(void* arg1, int&& arg2,
                                                                  oldscape::jagex3::Js5RemoteLoader::Js5Remote*& arg3) {
        new (arg1) ref_counter_shared<oldscape::jagex3::Js5RemoteLoader::Js5Remote>((long)*arg2, arg3);
        return arg1;
    }

    // 0x1002e2f00
    ref_counter_shared<graphics::FontMetrics>*
    placement_new<ref_counter_shared<graphics::FontMetrics>, int, graphics::FontMetrics*&>(
        void* arg1, int&& arg2, graphics::FontMetrics*& arg3) {
        new (arg1) ref_counter_shared<graphics::FontMetrics>((long)*arg2, arg3);
        return arg1;
    }

    // 0x1002e31b0
    math::QuaternionT<float>* placement_new<math::QuaternionT<float>>(void* arg1) {
        new (arg1) math::QuaternionT<float>();
        return arg1;
    }

    // 0x1002e31d0
    ref_counter_shared_trivial<math::QuaternionT<float>>*
    placement_new<ref_counter_shared_trivial<math::QuaternionT<float>>, int, math::QuaternionT<float>*&>(
        void* arg1, int&& arg2, math::QuaternionT<float>*& arg3) {
        new (arg1) ref_counter_shared_trivial<math::QuaternionT<float>>((long)*arg2, arg3);
        return arg1;
    }

    // 0x1002e32d0
    math::Vector3T<float>* placement_new<math::Vector3T<float>>(void* arg1) {
        new (arg1) math::Vector3T();
        return arg1;
    }

    // 0x1002e32f0
    ref_counter_shared_trivial<math::Vector3T<float>>*
    placement_new<ref_counter_shared_trivial<math::Vector3T<float>>, int, math::Vector3T<float>*&>(
        void* arg1, int&& arg2, math::Vector3T<float>*& arg3) {
        new (arg1) ref_counter_shared_trivial<math::Vector3T<float>>((long)*arg2, arg3);
        return arg1;
    }

    // 0x1002e33d0
    math::Vector3T<float>* placement_new<math::Vector3T<float>, float, float, float>(void* arg1, float&& arg2,
                                                                                     float&& arg3, float&& arg4) {
        new (arg1) math::ColourHSL(arg2, arg3, arg4);
        return arg1;
    }

    // 0x1002e35a0
    math::QuaternionT<float>* placement_new<math::QuaternionT<float>, oldscape::PacketJ<Array<unsigned char>>&>(
        void* arg1, oldscape::PacketJ<Array<unsigned char>>& packetJ) {
        new (arg1) math::QuaternionT<float>(packetJ, false);
        return arg1;
    }

    // 0x1002e36d0
    math::Vector3T<float>* placement_new<math::Vector3T<float>, oldscape::PacketJ<Array<unsigned char>>&>(
        void* arg1, oldscape::PacketJ<Array<unsigned char>>& packetJ) {
        new (arg1) math::Vector3T(packetJ, false);
        return arg1;
    }

    // 0x1002e3ba0
    oldscape::math::RotTrans*
    placement_new<oldscape::math::RotTrans, oldscape::math::RotTrans const&>(void* arg1,
                                                                             const oldscape::math::RotTrans& rotTrans) {
        new (arg1) oldscape::math::RotTrans(rotTrans);
        return arg1;
    }

    // 0x1002e3bc0
    ref_counter_shared<oldscape::math::RotTrans>*
    placement_new<ref_counter_shared<oldscape::math::RotTrans>, int, oldscape::math::RotTrans*&>(
        void* arg1, int&& arg2, oldscape::math::RotTrans*& arg3) {
        new (arg1) ref_counter_shared<oldscape::math::RotTrans>((long)*arg2, arg3);
        return arg1;
    }

    // 0x1002e3d00
    math::QuaternionT<float>*
    placement_new<math::QuaternionT<float>, float&, float&, float&, float&>(void* arg1, float& arg2, float& arg3,
                                                                            float& arg4, float& arg5) {
        new (arg1) math::QuaternionT<float>(arg2, arg3, arg4, arg5);
        return arg1;
    }

    // 0x1002e4d40
    oldscape::midi2::AddRequestTask*
    placement_new<oldscape::midi2::AddRequestTask, decltype(nullptr),
                  eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false, eastl::dummy_allocator>&,
                  eastl::fixed_queue<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false>&,
                  std::array<shared_ptr<oldscape::midi2::MidiPlayerMainThread>, 3ul>&>(
        void* arg1, decltype(nullptr)&& arg2,
        eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false, eastl::dummy_allocator>& midiRequests,
        eastl::fixed_queue<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false>& fixed_queue,
        std::array<shared_ptr<oldscape::midi2::MidiPlayerMainThread>, 3ul>& midiPlayerMainThreads) {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_40;
        new (arg1) oldscape::midi2::AddRequestTask(local_40, midiRequests, fixed_queue, midiPlayerMainThreads);
        return arg1;
    }

    // 0x1002e4db0
    ref_counter_shared<oldscape::midi2::AddRequestTask>*
    placement_new<ref_counter_shared<oldscape::midi2::AddRequestTask>, int, oldscape::midi2::AddRequestTask*&>(
        void* arg1, int&& arg2, oldscape::midi2::AddRequestTask*& arg3) {
        new (arg1) ref_counter_shared<oldscape::midi2::AddRequestTask>((long)*arg2, arg3);
        return arg1;
    }

    // 0x1002e4fa0
    oldscape::midi2::LoadSongTask*
    placement_new<oldscape::midi2::LoadSongTask, decltype(nullptr),
                  eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false, eastl::dummy_allocator>&,
                  oldscape::jagex3::Js5*&, oldscape::jagex3::Js5*&, oldscape::jagex3::Js5*&>(
        void* arg1, decltype(nullptr)&& arg2,
        eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false, eastl::dummy_allocator>& midiRequests,
        oldscape::jagex3::Js5*& arg4, oldscape::jagex3::Js5*& arg5, oldscape::jagex3::Js5*& arg6) {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_40;
        new (arg1) oldscape::midi2::LoadSongTask(local_40, midiRequests, arg4, arg5, arg6);
        return arg1;
    }

    // 0x1002e5020
    ref_counter_shared<oldscape::midi2::LoadSongTask>*
    placement_new<ref_counter_shared<oldscape::midi2::LoadSongTask>, int, oldscape::midi2::LoadSongTask*&>(
        void* arg1, int&& arg2, oldscape::midi2::LoadSongTask*& arg3) {
        new (arg1) ref_counter_shared<oldscape::midi2::LoadSongTask>((long)*arg2, arg3);
        return arg1;
    }

    // 0x1002e50e0
    oldscape::midi2::FadeInTask*
    placement_new<oldscape::midi2::FadeInTask, decltype(nullptr), shared_ptr<oldscape::midi2::MidiRequest>&, int&>(
        void* arg1, decltype(nullptr)&& arg2, shared_ptr<oldscape::midi2::MidiRequest>& midiRequest, int& arg4) {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_38;
        new (arg1) oldscape::midi2::FadeInTask(local_38, midiRequest, arg4);
        return arg1;
    }

    // 0x1002e5150
    ref_counter_shared<oldscape::midi2::FadeInTask>*
    placement_new<ref_counter_shared<oldscape::midi2::FadeInTask>, int, oldscape::midi2::FadeInTask*&>(
        void* arg1, int&& arg2, oldscape::midi2::FadeInTask*& arg3) {
        new (arg1) ref_counter_shared<oldscape::midi2::FadeInTask>((long)*arg2, arg3);
        return arg1;
    }

    // 0x1002e51c0
    oldscape::midi2::StartSongTask*
    placement_new<oldscape::midi2::StartSongTask, shared_ptr<oldscape::midi2::FadeInTask>,
                  eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false, eastl::dummy_allocator>&>(
        void* arg1, shared_ptr<oldscape::midi2::FadeInTask>&& fadeInTask,
        eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false, eastl::dummy_allocator>&
            midiRequests) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_30;

        local_30.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(fadeInTask);
        new (arg1) oldscape::midi2::StartSongTask(local_30, midiRequests);
        return arg1;
    }

    // 0x1002e5220
    ref_counter_shared<oldscape::midi2::StartSongTask>*
    placement_new<ref_counter_shared<oldscape::midi2::StartSongTask>, int, oldscape::midi2::StartSongTask*&>(
        void* arg1, int&& arg2, oldscape::midi2::StartSongTask*& arg3) {
        new (arg1) ref_counter_shared<oldscape::midi2::StartSongTask>((long)*arg2, arg3);
        return arg1;
    }

    // 0x1002e53b0
    oldscape::midi2::ConcurrentMidiTask* placement_new<oldscape::midi2::ConcurrentMidiTask, decltype(nullptr),
                                                       eastl::vector<shared_ptr<oldscape::midi2::MidiTask>>&>(
        void* arg1, decltype(nullptr)&& arg2, eastl::vector<shared_ptr<oldscape::midi2::MidiTask>>& midiTasks) {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        vector<shared_ptr<oldscape::midi2::MidiTask>> local_48(midiTasks);
        new (arg1) oldscape::midi2::ConcurrentMidiTask(local_28, &local_48);
        local_48.~vector();
        return arg1;
    }

    // 0x1002e5430
    ref_counter_shared<oldscape::midi2::ConcurrentMidiTask>*
    placement_new<ref_counter_shared<oldscape::midi2::ConcurrentMidiTask>, int, oldscape::midi2::ConcurrentMidiTask*&>(
        void* arg1, int&& arg2, oldscape::midi2::ConcurrentMidiTask*& arg3) {
        new (arg1) ref_counter_shared<oldscape::midi2::ConcurrentMidiTask>((long)*arg2, arg3);
        return arg1;
    }

    // 0x1002e54a0
    oldscape::midi2::DelayFadeTask*
    placement_new<oldscape::midi2::DelayFadeTask, shared_ptr<oldscape::midi2::ConcurrentMidiTask>, int&>(
        void* arg1, shared_ptr<oldscape::midi2::ConcurrentMidiTask>&& concurrentMidiTask, int& arg3) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_30;

        local_30.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(concurrentMidiTask);
        new (arg1) oldscape::midi2::DelayFadeTask(local_30, arg3);
        return arg1;
    }

    // 0x1002e5500
    ref_counter_shared<oldscape::midi2::DelayFadeTask>*
    placement_new<ref_counter_shared<oldscape::midi2::DelayFadeTask>, int, oldscape::midi2::DelayFadeTask*&>(
        void* arg1, int&& arg2, oldscape::midi2::DelayFadeTask*& arg3) {
        new (arg1) ref_counter_shared<oldscape::midi2::DelayFadeTask>((long)*arg2, arg3);
        return arg1;
    }

    // 0x1002e5570
    oldscape::midi2::ClearRequestTask*
    placement_new<oldscape::midi2::ClearRequestTask, decltype(nullptr),
                  eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false, eastl::dummy_allocator>&,
                  eastl::vector<shared_ptr<oldscape::midi2::MidiRequest>>>(
        void* arg1, decltype(nullptr)&& arg2,
        eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false, eastl::dummy_allocator>&
            midiRequests1,
        eastl::vector<shared_ptr<oldscape::midi2::MidiRequest>>&& midiRequests2) {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_38;
        new (arg1) oldscape::midi2::ClearRequestTask(local_38, midiRequests1, midiRequests2);
        return arg1;
    }

    // 0x1002e55e0
    ref_counter_shared<oldscape::midi2::ClearRequestTask>*
    placement_new<ref_counter_shared<oldscape::midi2::ClearRequestTask>, int, oldscape::midi2::ClearRequestTask*&>(
        void* arg1, int&& arg2, oldscape::midi2::ClearRequestTask*& arg3) {
        new (arg1) ref_counter_shared<oldscape::midi2::ClearRequestTask>((long)*arg2, arg3);
        return arg1;
    }

    // 0x1002e5650
    oldscape::midi2::FadeOutTask*
    placement_new<oldscape::midi2::FadeOutTask, shared_ptr<oldscape::midi2::ClearRequestTask>,
                  shared_ptr<oldscape::midi2::MidiRequest>&, int&>(
        void* arg1, shared_ptr<oldscape::midi2::ClearRequestTask>&& clearRequestTask,
        shared_ptr<oldscape::midi2::MidiRequest>& midiRequest, int& arg4) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_38;

        local_38.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(clearRequestTask);
        new (arg1) oldscape::midi2::FadeOutTask(local_38, midiRequest, arg4);
        return arg1;
    }

    // 0x1002e56c0
    ref_counter_shared<oldscape::midi2::FadeOutTask>*
    placement_new<ref_counter_shared<oldscape::midi2::FadeOutTask>, int, oldscape::midi2::FadeOutTask*&>(
        void* arg1, int&& arg2, oldscape::midi2::FadeOutTask*& arg3) {
        new (arg1) ref_counter_shared<oldscape::midi2::FadeOutTask>((long)*arg2, arg3);
        return arg1;
    }

    // 0x1002e5730
    oldscape::midi2::DelayFadeTask*
    placement_new<oldscape::midi2::DelayFadeTask, shared_ptr<oldscape::midi2::FadeOutTask>, int&>(
        void* arg1, shared_ptr<oldscape::midi2::FadeOutTask>&& fadeOutTask, int& arg3) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_30;

        local_30.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(fadeOutTask);
        new (arg1) oldscape::midi2::DelayFadeTask(local_30, arg3);
        return arg1;
    }

    // 0x1002e5790
    oldscape::midi2::DelayFadeTask*
    placement_new<oldscape::midi2::DelayFadeTask, decltype(nullptr), int&>(void* arg1, decltype(nullptr)&& arg2,
                                                                           int& arg3) {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_30;
        new (arg1) oldscape::midi2::DelayFadeTask(local_30, arg3);
        return arg1;
    }

    // 0x1002e57f0
    oldscape::midi2::FadeOutTask*
    placement_new<oldscape::midi2::FadeOutTask, decltype(nullptr), shared_ptr<oldscape::midi2::MidiRequest>&, int&>(
        void* arg1, decltype(nullptr)&& arg2, shared_ptr<oldscape::midi2::MidiRequest>& midiRequest, int& arg4) {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_38;
        new (arg1) oldscape::midi2::FadeOutTask(local_38, midiRequest, arg4);
        return arg1;
    }

    // 0x1002e5860
    oldscape::midi2::SwapSongTask*
    placement_new<oldscape::midi2::SwapSongTask, decltype(nullptr),
                  eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false, eastl::dummy_allocator>&>(
        void* arg1, decltype(nullptr)&& arg2,
        eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false, eastl::dummy_allocator>&
            midiRequests) {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_30;
        new (arg1) oldscape::midi2::SwapSongTask(local_30, midiRequests);
        return arg1;
    }

    // 0x1002e58c0
    ref_counter_shared<oldscape::midi2::SwapSongTask>*
    placement_new<ref_counter_shared<oldscape::midi2::SwapSongTask>, int, oldscape::midi2::SwapSongTask*&>(
        void* arg1, int&& arg2, oldscape::midi2::SwapSongTask*& arg3) {
        new (arg1) ref_counter_shared<oldscape::midi2::SwapSongTask>((long)*arg2, arg3);
        return arg1;
    }

    // 0x1002e5930
    oldscape::midi2::DelayFadeTask*
    placement_new<oldscape::midi2::DelayFadeTask, shared_ptr<oldscape::midi2::FadeInTask>, int&>(
        void* arg1, shared_ptr<oldscape::midi2::FadeInTask>&& fadeInTask, int& arg3) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_30;

        local_30.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(fadeInTask);
        new (arg1) oldscape::midi2::DelayFadeTask(local_30, arg3);
        return arg1;
    }

    // 0x1002e6620
    oldscape::midi2::MidiMixer*
    placement_new<oldscape::midi2::MidiMixer, oldscape::midi2::MidiPlayer&>(void* arg1,
                                                                            oldscape::midi2::MidiPlayer& midiPlayer) {
        new (arg1) oldscape::midi2::MidiMixer(midiPlayer);
        return arg1;
    }

    // 0x1002e6640
    ref_counter_shared<oldscape::midi2::MidiMixer>*
    placement_new<ref_counter_shared<oldscape::midi2::MidiMixer>, int, oldscape::midi2::MidiMixer*&>(
        void* arg1, int&& arg2, oldscape::midi2::MidiMixer*& arg3) {
        new (arg1) ref_counter_shared<oldscape::midi2::MidiMixer>((long)*arg2, arg3);
        return arg1;
    }

    // 0x1002e7390
    std::atomic<bool>* placement_new<std::atomic<bool>, bool>(void* arg1, bool&& arg2) {
        new (arg1) std::atomic<bool>(arg2);
        return arg1;
    }

    // 0x1002e73b0
    ref_counter_shared_trivial<std::atomic<bool>>*
    placement_new<ref_counter_shared_trivial<std::atomic<bool>>, int, std::atomic<bool>*&>(void* arg1, int&& arg2,
                                                                                           std::atomic<bool>*& arg3) {
        new (arg1) ref_counter_shared_trivial<std::atomic<bool>>((long)*arg2, arg3);
        return arg1;
    }

    // 0x1002ea400
    oldscape::midi2::MidiNote* placement_new<oldscape::midi2::MidiNote>(void* arg1) {
        new (arg1) oldscape::midi2::MidiNote();
        return arg1;
    }

    // 0x1002ea420
    ref_counter_shared<oldscape::midi2::MidiNote>*
    placement_new<ref_counter_shared<oldscape::midi2::MidiNote>, int, oldscape::midi2::MidiNote*&>(
        void* arg1, int&& arg2, oldscape::midi2::MidiNote*& arg3) {
        new (arg1) ref_counter_shared<oldscape::midi2::MidiNote>((long)*arg2, arg3);
        return arg1;
    }

    // 0x1002ec250
    void ___cxx_global_var_init(void) {
        g_masterIndexKey = 1095216660735;
    }

    // 0x1002ec350
    void ___cxx_global_var_init_174(void) {
        Matrix33T<float> local_50;

        math::Matrix33Scaling<float>(1.0, 1.0, -1.0);
        Vector3T<int> local_28;
        new ((Matrix44T<float>*)&graphics::MAYA_ANIM_INVERT_MATRIX) math::Matrix44T<float>(local_50, local_28);
    }

    // 0x1002ec3b0
    void ___cxx_global_var_init_175(void) {
        new ((ColourHSL*)&graphics::WORLD_ORTHOGONAL) math::ColourHSL(-1.5707964, -1.5707964, 0.0);
    }

    // 0x1002ec3d0
    void ___cxx_global_var_init_177(void) {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_100ee5578) HashedString("LUMINANCE_ADAPTED");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048);
            }
        }
    }

    // 0x1002ec430
    void ___cxx_global_var_init_179(void) {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee5588) HashedString("LUMINANCE_ADAPTED_PREVIOUS");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058);
            }
        }
    }

    // 0x1002ec490
    void ___cxx_global_var_init_181(void) {
        if (*PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050) != 0) {
                new (PTR_VIEWRT_LUMINANCE_AVERAGE_100ee5580) HashedString("VIEWRT_LUMINANCE_AVERAGE");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050);
            }
        }
    }

    // 0x1002ec4f0
    void ___cxx_global_var_init_183(void) {
        oldscape::defaults::DefaultsGroup::GRAPHICS = 3;
    }

    // 0x1002ec500
    void ___cxx_global_var_init_184(void) {
        uint64_t local_28 = 21474836484;
        mach_header* local_38 = &__mh_execute_header;
        uint64_t uStack_30 = 12884901890;
        uint64_t local_40 = 6;
        new ((Array<oldscape::Font>*)&oldscape::AllFonts) Array<oldscape::Font>(&local_38);
        ___cxa_atexit(PTR__Array_100ee6788, &oldscape::AllFonts, 4294967296);
    }

    // 0x1002ec880
    void ___cxx_global_var_init_197(void) {
        new ((fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false,
                           eastl::dummy_allocator>*)&oldscape::midi2::MidiManager::m_activeRequests)
            eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false, eastl::dummy_allocator>();
        ___cxa_atexit(PTR__fixed_vector_100ee6ca8, &oldscape::midi2::MidiManager::m_activeRequests, 4294967296);
    }

    // 0x1002ec940
    void ___cxx_global_var_init_200(void) {
        new ((fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false,
                           eastl::dummy_allocator>*)&oldscape::midi2::MidiManager::m_previousRequests)
            eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false, eastl::dummy_allocator>();
        ___cxa_atexit(PTR__fixed_vector_100ee6ca8, &oldscape::midi2::MidiManager::m_previousRequests, 4294967296);
    }

    // 0x1002ec980
    void ___cxx_global_var_init_226(void) {
        uint8_t* puVar1 = PTR_IDENTITY_100ee4828;
        if (*PTR_IDENTITY_100ee4828 == '\0') {
            new (PTR_IDENTITY_100ee6730)
                math::Matrix44T<float>(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1002ec9e0
    void ___cxx_global_var_init_227(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4820;
        if (*PTR_ZERO_100ee4820 == '\0') {
            new (PTR_ZERO_100ee6728)
                math::Matrix44T<float>(0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1002eca40
    void ___cxx_global_var_init_228(void) {
        uint8_t* puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1002eca80
    void ___cxx_global_var_init_229(void) {
        uint8_t* puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1002ecac0
    void ___cxx_global_var_init_230(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1002ecb00
    void ___cxx_global_var_init_231(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<ShaderThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5950,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1002ecb40
    void ___cxx_global_var_init_232(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) math::Point(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1002ecb70
    void ___cxx_global_var_init_233(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

} // namespace jag

namespace jag::oldscape::jagex3 {
    // 0x100d419a0
    int32_t g_zeroBlock[144] = {
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  0,   0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  0,   0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  0,   0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 15, 216, 1, 0, 0, 0, 1, 2, 3, 4, 5,
    };

    // 0x100f37c00
    int32_t g_indexName[8] = {1852399981, 1818846815, 1633902437, 778397795, 7890025, 0, 0, 0};

    // 0x10422a620
    jag::math::Point<int> g_masterIndexKey;

} // namespace jag::oldscape::jagex3

namespace jag::math {
    // 0x1002e3470
    float QuaternionDot<float>(const QuaternionT<float>& quaternion1, const QuaternionT<float>& quaternion2) {
        auto pfVar8 = quaternion1.SSOBeginPtr();
        float fVar1 = *pfVar8;
        pfVar8 = (float*)quaternion2.SSOBeginPtr();
        float fVar2 = *pfVar8;
        pfVar8 = (float*)quaternion1.y();
        float fVar3 = *pfVar8;
        pfVar8 = (float*)quaternion2.y();
        float fVar4 = *pfVar8;
        pfVar8 = (float*)quaternion1.second();
        float fVar5 = *pfVar8;
        pfVar8 = (float*)quaternion2.second();
        float fVar6 = *pfVar8;
        pfVar8 = (float*)quaternion1.qw();
        float fVar7 = *pfVar8;
        pfVar8 = (float*)quaternion2.qw();
        return fVar7 * *pfVar8 + fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2;
    }

    // 0x1002e37a0
    QuaternionT<float> operator* <float>(const QuaternionT<float>& quaternion1, const QuaternionT<float>& quaternion2) {
        Layout* in_RDX;

        auto pfVar32 = quaternion2.qw();
        float fVar1 = *pfVar32;
        pfVar32 = (float*)in_RDX->SSOBeginPtr();
        float fVar2 = *pfVar32;
        pfVar32 = (float*)quaternion2.SSOBeginPtr();
        float fVar3 = *pfVar32;
        pfVar32 = (float*)in_RDX->qw();
        float fVar4 = *pfVar32;
        pfVar32 = (float*)quaternion2.y();
        float fVar5 = *pfVar32;
        pfVar32 = (float*)in_RDX->second();
        float fVar6 = *pfVar32;
        pfVar32 = (float*)quaternion2.second();
        float fVar7 = *pfVar32;
        pfVar32 = (float*)in_RDX->y();
        float fVar8 = *pfVar32;
        pfVar32 = (float*)quaternion2.qw();
        float fVar9 = *pfVar32;
        pfVar32 = (float*)in_RDX->y();
        float fVar10 = *pfVar32;
        pfVar32 = (float*)quaternion2.SSOBeginPtr();
        float fVar11 = *pfVar32;
        pfVar32 = (float*)in_RDX->second();
        float fVar12 = *pfVar32;
        pfVar32 = (float*)quaternion2.y();
        float fVar13 = *pfVar32;
        pfVar32 = (float*)in_RDX->qw();
        float fVar14 = *pfVar32;
        pfVar32 = (float*)quaternion2.second();
        float fVar15 = *pfVar32;
        pfVar32 = (float*)in_RDX->SSOBeginPtr();
        float fVar16 = *pfVar32;
        pfVar32 = (float*)quaternion2.qw();
        float fVar17 = *pfVar32;
        pfVar32 = (float*)in_RDX->second();
        float fVar18 = *pfVar32;
        pfVar32 = (float*)quaternion2.SSOBeginPtr();
        float fVar19 = *pfVar32;
        pfVar32 = (float*)in_RDX->y();
        float fVar20 = *pfVar32;
        pfVar32 = (float*)quaternion2.y();
        float fVar21 = *pfVar32;
        pfVar32 = (float*)in_RDX->SSOBeginPtr();
        float fVar22 = *pfVar32;
        pfVar32 = (float*)quaternion2.second();
        float fVar23 = *pfVar32;
        pfVar32 = (float*)in_RDX->qw();
        float fVar24 = *pfVar32;
        pfVar32 = (float*)quaternion2.qw();
        float fVar25 = *pfVar32;
        pfVar32 = (float*)in_RDX->qw();
        float fVar26 = *pfVar32;
        pfVar32 = (float*)quaternion2.SSOBeginPtr();
        float fVar27 = *pfVar32;
        pfVar32 = (float*)in_RDX->SSOBeginPtr();
        float fVar28 = *pfVar32;
        pfVar32 = (float*)quaternion2.y();
        float fVar29 = *pfVar32;
        pfVar32 = (float*)in_RDX->y();
        float fVar30 = *pfVar32;
        pfVar32 = (float*)quaternion2.second();
        float fVar31 = *pfVar32;
        pfVar32 = (float*)in_RDX->second();
        new (quaternion1) QuaternionT<float>((fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2) - fVar7 * fVar8,
                                             fVar15 * fVar16 + fVar13 * fVar14 + (fVar9 * fVar10 - fVar11 * fVar12),
                                             fVar23 * fVar24 + ((fVar19 * fVar20 + fVar17 * fVar18) - fVar21 * fVar22),
                                             fVar25 * fVar26 - (fVar31 * *pfVar32 + fVar29 * fVar30 + fVar27 * fVar28));
        return quaternion1;
    }

    // 0x1002e3aa0
    QuaternionT<float> QuaternionMultiply<float>(QuaternionT<float>& quaternion1, QuaternionT<float> quaternion2,
                                                 QuaternionT<float> quaternion3) {
        float* in_RCX;

        float fVar1 = in_RCX[3];
        float fVar2 = *(float*)quaternion3;
        float fVar3 = *(float*)(quaternion3 + 4);
        float fVar4 = *(float*)(quaternion3 + 12);
        float fVar5 = *in_RCX;
        float fVar6 = in_RCX[1];
        float fVar7 = *(float*)(quaternion3 + 8);
        float fVar8 = in_RCX[2];
        quaternion2->Set((fVar7 * fVar6 + fVar4 * fVar5 + fVar2 * fVar1) - fVar3 * fVar8,
                         (fVar6 * fVar4 - fVar7 * fVar5) + fVar8 * fVar2 + fVar3 * fVar1,
                         (fVar7 * fVar1 - fVar6 * fVar2) + fVar8 * fVar4 + fVar3 * fVar5,
                         fVar4 * fVar1 - (fVar5 * fVar2 + fVar8 * fVar7 + fVar3 * fVar6));
        new (quaternion1) QuaternionT<float>(*quaternion2);
        return quaternion1;
    }

} // namespace jag::math

namespace jag::graphics {
    // 0x10422a630
    uint8_t MAYA_ANIM_INVERT_MATRIX[64];

    // 0x10422a670
    uint8_t WORLD_ORTHOGONAL[12];

} // namespace jag::graphics

namespace jag::oldscape {
    // 0x10422a680
    uint8_t AllFonts[24];

    // 0x10422a698, set at startup by ___cxx_global_var_init.185
    eastl::string typeToInstance[10] = {
        /* [1] */ "hiscore_oldschool_ironman",
        /* [2] */ "hiscore_oldschool_hardcore_ironman",
        /* [3] */ "hiscore_oldschool_deadman",
        /* [4] */ "hiscore_oldschool_seasonal",
        /* [5] */ "hiscore_oldschool_ultimate",
        /* [6] */ "hiscore_oldschool_tournament",
        /* [7] */ "oldschool_gim_hiscores",
        /* [8] */ "oldschool_hardcore_gim_hiscores",
        /* [9] */ "hiscore_oldschool_fresh_start",
    };

} // namespace jag::oldscape

namespace jag::threading {
    // 0x100d41c60
    int32_t MAX_HARDWARE_THREAD_LIMIT[28] = {
        16,         -1089221318, 1058262330,  1028443341, 1068149419, 1051372199, -1275068416,
        0,          0,           1,           2,          3,          2139095039, 2139095039,
        2139095039, 2139095039,  -1998362383, 1055193269, -891366063, 1063853775, 1413754136,
        1058611707, 0,           1097859072,  1405670641, 1058611707, 0,          0,
    };

} // namespace jag::threading

namespace jag::oldscape::defaults {
    // 0x10422a67c
    int32_t DefaultsGroup::GRAPHICS;

} // namespace jag::oldscape::defaults

namespace jag::oldscape::midi2 {
    // 0x1002e7370
    void operator<(const MidiPlayerMainThread::QueuedLazyWave& queuedLazyWave1,
                   const MidiPlayerMainThread::QueuedLazyWave& queuedLazyWave2) {
        return (int)queuedLazyWave2.field_0 < (int)queuedLazyWave1.field_0;
    }

} // namespace jag::oldscape::midi2
