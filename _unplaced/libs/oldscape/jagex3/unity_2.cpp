// _unplaced/libs/oldscape/jagex3/unity_2.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

namespace jag {
    // 0x1002e28e0, 48 bytes, inline, placed by nothing (unplaced)
    // oldscape::jagex3::Js5RemoteLoader::Js5Remote* placement_new<oldscape::jagex3::Js5RemoteLoader::Js5Remote, oldscape::jagex3::Js5RemoteLoader&, oldscape::jagex3::Js5ArchiveId&, bool&, bool&, bool&, bool&>(void*, oldscape::jagex3::Js5RemoteLoader&, oldscape::jagex3::Js5ArchiveId&, bool&, bool&, bool&, bool&)
    Js5Remote* jag::placement_new<oldscape::jagex3::Js5RemoteLoader::Js5Remote, oldscape::jagex3::Js5RemoteLoader&,
                                  oldscape::jagex3::Js5ArchiveId&, bool&, bool&, bool&, bool&>(
        void* param_1, Js5RemoteLoader* param_2, Js5ArchiveId* param_3, bool* param_4, bool* param_5, bool* param_6,
        bool* param_7) {
        oldscape::jagex3::Js5RemoteLoader::Js5Remote::Js5Remote(param_1, param_2, *(undefined4*)param_3, *param_4,
                                                                *param_5, *param_6, *param_7);
        return param_1;
    }

    // 0x1002e2910, 32 bytes, inline, placed by nothing (unplaced)
    // ref_counter_shared<oldscape::jagex3::Js5RemoteLoader::Js5Remote>* placement_new<ref_counter_shared<oldscape::jagex3::Js5RemoteLoader::Js5Remote>, int, oldscape::jagex3::Js5RemoteLoader::Js5Remote*&>(void*, int&&, oldscape::jagex3::Js5RemoteLoader::Js5Remote*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<oldscape::jagex3::Js5RemoteLoader::Js5Remote>, int,
                                           oldscape::jagex3::Js5RemoteLoader::Js5Remote*&>(void* param_1, int* param_2,
                                                                                           Js5Remote** param_3) {
        ref_counter_shared<oldscape::jagex3::Js5RemoteLoader::Js5Remote>::ref_counter_shared(param_1, (long)*param_2,
                                                                                             *param_3);
        return param_1;
    }

    // 0x1002e2f00, 32 bytes, inline, placed by nothing (unplaced)
    // ref_counter_shared<graphics::FontMetrics>* placement_new<ref_counter_shared<graphics::FontMetrics>, int, graphics::FontMetrics*&>(void*, int&&, graphics::FontMetrics*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<graphics::FontMetrics>, int, graphics::FontMetrics*&>(
        void* param_1, int* param_2, FontMetrics** param_3) {
        ref_counter_shared<graphics::FontMetrics>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x1002e31b0, 32 bytes, inline, placed by nothing (unplaced)
    // math::QuaternionT<float>* placement_new<math::QuaternionT<float>>(void*)
    QuaternionT* placement_new<math::QuaternionT<float>>(void* param_1) {
        math::QuaternionT<float>::QuaternionT(param_1);
        return param_1;
    }

    // 0x1002e31d0, 32 bytes, inline, placed by nothing (unplaced)
    // ref_counter_shared_trivial<math::QuaternionT<float> >* placement_new<ref_counter_shared_trivial<math::QuaternionT<float> >, int, math::QuaternionT<float>*&>(void*, int&&, math::QuaternionT<float>*&)
    ref_counter_shared_trivial*
    jag::placement_new<ref_counter_shared_trivial<math::QuaternionT<float>>, int, math::QuaternionT<float>*&>(
        void* param_1, int* param_2, QuaternionT** param_3) {
        ref_counter_shared_trivial<math::QuaternionT<float>>::ref_counter_shared_trivial((ulong)param_1,
                                                                                         (QuaternionT*)(long)*param_2);
        return param_1;
    }

    // 0x1002e32d0, 32 bytes, inline, placed by nothing (unplaced)
    // math::Vector3T<float>* placement_new<math::Vector3T<float>>(void*)
    Vector3T* placement_new<math::Vector3T<float>>(void* param_1) {
        math::Vector3T<int>::Vector3T(param_1);
        return param_1;
    }

    // 0x1002e32f0, 32 bytes, inline, placed by nothing (unplaced)
    // ref_counter_shared_trivial<math::Vector3T<float> >* placement_new<ref_counter_shared_trivial<math::Vector3T<float> >, int, math::Vector3T<float>*&>(void*, int&&, math::Vector3T<float>*&)
    ref_counter_shared_trivial*
    jag::placement_new<ref_counter_shared_trivial<math::Vector3T<float>>, int, math::Vector3T<float>*&>(
        void* param_1, int* param_2, Vector3T** param_3) {
        ref_counter_shared_trivial<math::Vector3T<float>>::ref_counter_shared_trivial((ulong)param_1,
                                                                                      (Vector3T*)(long)*param_2);
        return param_1;
    }

    // 0x1002e33d0, 48 bytes, inline, placed by nothing (unplaced)
    // math::Vector3T<float>* placement_new<math::Vector3T<float>, float, float, float>(void*, float&&, float&&, float&&)
    /* math::Vector3T<float>* placement_new<math::Vector3T<float>, float&, float&,
   float&>(void*, float&, float&, float&) */

    Vector3T* placement_new<math::Vector3T<float>, float&, float&, float&>(void* param_1, float* param_2,
                                                                           float* param_3, float* param_4) {
        math::ColourHSL::ColourHSL(param_1, *param_2, *param_3, *param_4);
        return param_1;
    }

    // 0x1002e35a0, 32 bytes, inline, placed by nothing (unplaced)
    // math::QuaternionT<float>* placement_new<math::QuaternionT<float>, oldscape::PacketJ<Array<unsigned char, eastl::allocator> >&>(void*, oldscape::PacketJ<Array<unsigned char, eastl::allocator> >&)
    QuaternionT*
    jag::placement_new<math::QuaternionT<float>, oldscape::PacketJ<Array<unsigned char, eastl::allocator>>&>(
        void* param_1, PacketJ* param_2) {
        math::QuaternionT<float>::QuaternionT(param_1, (PacketT*)param_2, false);
        return param_1;
    }

    // 0x1002e36d0, 32 bytes, inline, placed by nothing (unplaced)
    // math::Vector3T<float>* placement_new<math::Vector3T<float>, oldscape::PacketJ<Array<unsigned char, eastl::allocator> >&>(void*, oldscape::PacketJ<Array<unsigned char, eastl::allocator> >&)
    Vector3T* jag::placement_new<math::Vector3T<float>, oldscape::PacketJ<Array<unsigned char, eastl::allocator>>&>(
        void* param_1, PacketJ* param_2) {
        math::Vector3T<float>::Vector3T(param_1, (PacketT*)param_2, false);
        return param_1;
    }

    // 0x1002e3ba0, 32 bytes, inline, placed by nothing (unplaced)
    // oldscape::math::RotTrans* placement_new<oldscape::math::RotTrans, oldscape::math::RotTrans const&>(void*, oldscape::math::RotTrans const&)
    RotTrans* placement_new<oldscape::math::RotTrans, oldscape::math::RotTrans_const&>(void* param_1,
                                                                                       RotTrans* param_2) {
        oldscape::math::RotTrans::RotTrans(param_1, param_2);
        return param_1;
    }

    // 0x1002e3bc0, 32 bytes, inline, placed by nothing (unplaced)
    // ref_counter_shared<oldscape::math::RotTrans>* placement_new<ref_counter_shared<oldscape::math::RotTrans>, int, oldscape::math::RotTrans*&>(void*, int&&, oldscape::math::RotTrans*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::math::RotTrans>, int, oldscape::math::RotTrans*&>(
        void* param_1, int* param_2, RotTrans** param_3) {
        ref_counter_shared<oldscape::math::RotTrans>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x1002e3d00, 48 bytes, inline, placed by nothing (unplaced)
    // math::QuaternionT<float>* placement_new<math::QuaternionT<float>, float&, float&, float&, float&>(void*, float&, float&, float&, float&)
    QuaternionT* placement_new<math::QuaternionT<float>, float&, float&, float&, float&>(void* param_1, float* param_2,
                                                                                         float* param_3, float* param_4,
                                                                                         float* param_5) {
        math::QuaternionT<float>::QuaternionT(param_1, *param_2, *param_3, *param_4, *param_5);
        return param_1;
    }

    // 0x1002e4d40, 112 bytes, inline, placed by nothing (unplaced)
    // oldscape::midi2::AddRequestTask* placement_new<oldscape::midi2::AddRequestTask, decltype(nullptr), eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false, eastl::dummy_allocator>&, eastl::fixed_queue<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false>&, std::array<shared_ptr<oldscape::midi2::MidiPlayerMainThread>, 3ul>&>(void*, decltype(nullptr)&&, eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false, eastl::dummy_allocator>&, eastl::fixed_queue<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false>&, std::array<shared_ptr<oldscape::midi2::MidiPlayerMainThread>, 3ul>&)
    /* oldscape::midi2::AddRequestTask* placement_new<oldscape::midi2::AddRequestTask,
   decltype(nullptr), eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul,
   false, eastl::dummy_allocator>&,
   eastl::fixed_queue<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false>&,
   std::array<shared_ptr<oldscape::midi2::MidiPlayerMainThread>, 3ul>&>(void*,
   decltype(nullptr)&&, eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul,
   false, eastl::dummy_allocator>&,
   eastl::fixed_queue<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false>&,
   std::array<shared_ptr<oldscape::midi2::MidiPlayerMainThread>, 3ul>&) */

    AddRequestTask* jag::placement_new<
        oldscape::midi2::AddRequestTask, decltype(nullptr),
        eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false, eastl::dummy_allocator>&,
        eastl::fixed_queue<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false>&,
        std::array<shared_ptr<oldscape::midi2::MidiPlayerMainThread>, 3ul>&>(void* param_1,
                                                                             _func_decltype_nullptr** param_2,
                                                                             fixed_vector* param_3,
                                                                             fixed_queue* param_4, array* param_5) {
        shared_ptr local_40;

        new (&local_40) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        oldscape::midi2::AddRequestTask::AddRequestTask(param_1, &local_40, param_3, param_4, param_5);
        local_40.~shared_ptr();
        return param_1;
    }

    // 0x1002e4db0, 32 bytes, inline, placed by nothing (unplaced)
    // ref_counter_shared<oldscape::midi2::AddRequestTask>* placement_new<ref_counter_shared<oldscape::midi2::AddRequestTask>, int, oldscape::midi2::AddRequestTask*&>(void*, int&&, oldscape::midi2::AddRequestTask*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::midi2::AddRequestTask>, int, oldscape::midi2::AddRequestTask*&>(
        void* param_1, int* param_2, AddRequestTask** param_3) {
        ref_counter_shared<oldscape::midi2::AddRequestTask>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x1002e4fa0, 128 bytes, inline, placed by nothing (unplaced)
    // oldscape::midi2::LoadSongTask* placement_new<oldscape::midi2::LoadSongTask, decltype(nullptr), eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false, eastl::dummy_allocator>&, oldscape::jagex3::Js5*&, oldscape::jagex3::Js5*&, oldscape::jagex3::Js5*&>(void*, decltype(nullptr)&&, eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false, eastl::dummy_allocator>&, oldscape::jagex3::Js5*&, oldscape::jagex3::Js5*&, oldscape::jagex3::Js5*&)
    LoadSongTask* jag::placement_new<
        oldscape::midi2::LoadSongTask, decltype(nullptr),
        eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false, eastl::dummy_allocator>&,
        oldscape::jagex3::Js5*&, oldscape::jagex3::Js5*&, oldscape::jagex3::Js5*&>(void* param_1,
                                                                                   _func_decltype_nullptr** param_2,
                                                                                   fixed_vector* param_3, Js5** param_4,
                                                                                   Js5** param_5, Js5** param_6) {
        shared_ptr local_40;

        new (&local_40) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        oldscape::midi2::LoadSongTask::LoadSongTask(param_1, &local_40, param_3, *param_4, *param_5, *param_6);
        local_40.~shared_ptr();
        return param_1;
    }

    // 0x1002e5020, 32 bytes, inline, placed by nothing (unplaced)
    // ref_counter_shared<oldscape::midi2::LoadSongTask>* placement_new<ref_counter_shared<oldscape::midi2::LoadSongTask>, int, oldscape::midi2::LoadSongTask*&>(void*, int&&, oldscape::midi2::LoadSongTask*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::midi2::LoadSongTask>, int, oldscape::midi2::LoadSongTask*&>(
        void* param_1, int* param_2, LoadSongTask** param_3) {
        ref_counter_shared<oldscape::midi2::LoadSongTask>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x1002e50e0, 112 bytes, inline, placed by nothing (unplaced)
    // oldscape::midi2::FadeInTask* placement_new<oldscape::midi2::FadeInTask, decltype(nullptr), shared_ptr<oldscape::midi2::MidiRequest>&, int&>(void*, decltype(nullptr)&&, shared_ptr<oldscape::midi2::MidiRequest>&, int&)
    FadeInTask*
    jag::placement_new<oldscape::midi2::FadeInTask, decltype(nullptr), shared_ptr<oldscape::midi2::MidiRequest>&, int&>(
        void* param_1, _func_decltype_nullptr** param_2, shared_ptr* param_3, int* param_4) {
        shared_ptr local_38;

        new (&local_38) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        oldscape::midi2::FadeInTask::FadeInTask(param_1, &local_38, param_3, *param_4);
        local_38.~shared_ptr();
        return param_1;
    }

    // 0x1002e5150, 32 bytes, inline, placed by nothing (unplaced)
    // ref_counter_shared<oldscape::midi2::FadeInTask>* placement_new<ref_counter_shared<oldscape::midi2::FadeInTask>, int, oldscape::midi2::FadeInTask*&>(void*, int&&, oldscape::midi2::FadeInTask*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::midi2::FadeInTask>, int, oldscape::midi2::FadeInTask*&>(
        void* param_1, int* param_2, FadeInTask** param_3) {
        ref_counter_shared<oldscape::midi2::FadeInTask>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x1002e51c0, 96 bytes, inline, placed by nothing (unplaced)
    // oldscape::midi2::StartSongTask* placement_new<oldscape::midi2::StartSongTask, shared_ptr<oldscape::midi2::FadeInTask>, eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false, eastl::dummy_allocator>&>(void*, shared_ptr<oldscape::midi2::FadeInTask>&&, eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false, eastl::dummy_allocator>&)
    StartSongTask* jag::placement_new<
        oldscape::midi2::StartSongTask, shared_ptr<oldscape::midi2::FadeInTask>,
        eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false, eastl::dummy_allocator>&>(
        void* param_1, shared_ptr* param_2, fixed_vector* param_3) {
        shared_ptr local_30;

        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)&local_30, param_2);
        oldscape::midi2::StartSongTask::StartSongTask(param_1, &local_30, param_3);
        local_30.~shared_ptr();
        return param_1;
    }

    // 0x1002e5220, 32 bytes, inline, placed by nothing (unplaced)
    // ref_counter_shared<oldscape::midi2::StartSongTask>* placement_new<ref_counter_shared<oldscape::midi2::StartSongTask>, int, oldscape::midi2::StartSongTask*&>(void*, int&&, oldscape::midi2::StartSongTask*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::midi2::StartSongTask>, int, oldscape::midi2::StartSongTask*&>(
        void* param_1, int* param_2, StartSongTask** param_3) {
        ref_counter_shared<oldscape::midi2::StartSongTask>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x1002e53b0, 128 bytes, inline, placed by nothing (unplaced)
    // oldscape::midi2::ConcurrentMidiTask* placement_new<oldscape::midi2::ConcurrentMidiTask, decltype(nullptr), eastl::vector<shared_ptr<oldscape::midi2::MidiTask>, eastl::allocator>&>(void*, decltype(nullptr)&&, eastl::vector<shared_ptr<oldscape::midi2::MidiTask>, eastl::allocator>&)
    ConcurrentMidiTask* jag::placement_new<oldscape::midi2::ConcurrentMidiTask, decltype(nullptr),
                                           eastl::vector<shared_ptr<oldscape::midi2::MidiTask>, eastl::allocator>&>(
        void* param_1, _func_decltype_nullptr** param_2, vector* param_3) {
        vector<shared_ptr<oldscape::midi2::MidiTask>, eastl::allocator> local_48[32];
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28[16];

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_28, (_func_decltype_nullptr*)0);
        eastl::vector<shared_ptr<oldscape::midi2::MidiTask>, eastl::allocator>::vector(local_48, param_3);
        oldscape::midi2::ConcurrentMidiTask::ConcurrentMidiTask(param_1, local_28, local_48);
        eastl::vector<shared_ptr<oldscape::midi2::MidiTask>, eastl::allocator>::~vector(local_48);
        local_28->~shared_ptr();
        return param_1;
    }

    // 0x1002e5430, 32 bytes, inline, placed by nothing (unplaced)
    // ref_counter_shared<oldscape::midi2::ConcurrentMidiTask>* placement_new<ref_counter_shared<oldscape::midi2::ConcurrentMidiTask>, int, oldscape::midi2::ConcurrentMidiTask*&>(void*, int&&, oldscape::midi2::ConcurrentMidiTask*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<oldscape::midi2::ConcurrentMidiTask>, int,
                                           oldscape::midi2::ConcurrentMidiTask*&>(void* param_1, int* param_2,
                                                                                  ConcurrentMidiTask** param_3) {
        ref_counter_shared<oldscape::midi2::ConcurrentMidiTask>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x1002e54a0, 96 bytes, inline, placed by nothing (unplaced)
    // oldscape::midi2::DelayFadeTask* placement_new<oldscape::midi2::DelayFadeTask, shared_ptr<oldscape::midi2::ConcurrentMidiTask>, int&>(void*, shared_ptr<oldscape::midi2::ConcurrentMidiTask>&&, int&)
    DelayFadeTask*
    jag::placement_new<oldscape::midi2::DelayFadeTask, shared_ptr<oldscape::midi2::ConcurrentMidiTask>, int&>(
        void* param_1, shared_ptr* param_2, int* param_3) {
        shared_ptr local_30;

        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)&local_30, param_2);
        oldscape::midi2::DelayFadeTask::DelayFadeTask(param_1, &local_30, *param_3);
        local_30.~shared_ptr();
        return param_1;
    }

    // 0x1002e5500, 32 bytes, inline, placed by nothing (unplaced)
    // ref_counter_shared<oldscape::midi2::DelayFadeTask>* placement_new<ref_counter_shared<oldscape::midi2::DelayFadeTask>, int, oldscape::midi2::DelayFadeTask*&>(void*, int&&, oldscape::midi2::DelayFadeTask*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::midi2::DelayFadeTask>, int, oldscape::midi2::DelayFadeTask*&>(
        void* param_1, int* param_2, DelayFadeTask** param_3) {
        ref_counter_shared<oldscape::midi2::DelayFadeTask>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x1002e5570, 112 bytes, inline, placed by nothing (unplaced)
    // oldscape::midi2::ClearRequestTask* placement_new<oldscape::midi2::ClearRequestTask, decltype(nullptr), eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false, eastl::dummy_allocator>&, eastl::vector<shared_ptr<oldscape::midi2::MidiRequest>, eastl::allocator> >(void*, decltype(nullptr)&&, eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false, eastl::dummy_allocator>&, eastl::vector<shared_ptr<oldscape::midi2::MidiRequest>, eastl::allocator>&&)
    ClearRequestTask* jag::placement_new<
        oldscape::midi2::ClearRequestTask, decltype(nullptr),
        eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false, eastl::dummy_allocator>&,
        eastl::vector<shared_ptr<oldscape::midi2::MidiRequest>, eastl::allocator>>(void* param_1,
                                                                                   _func_decltype_nullptr** param_2,
                                                                                   fixed_vector* param_3,
                                                                                   vector* param_4) {
        shared_ptr local_38;

        new (&local_38) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        oldscape::midi2::ClearRequestTask::ClearRequestTask(param_1, &local_38, param_3, param_4);
        local_38.~shared_ptr();
        return param_1;
    }

    // 0x1002e55e0, 32 bytes, inline, placed by nothing (unplaced)
    // ref_counter_shared<oldscape::midi2::ClearRequestTask>* placement_new<ref_counter_shared<oldscape::midi2::ClearRequestTask>, int, oldscape::midi2::ClearRequestTask*&>(void*, int&&, oldscape::midi2::ClearRequestTask*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::midi2::ClearRequestTask>, int, oldscape::midi2::ClearRequestTask*&>(
        void* param_1, int* param_2, ClearRequestTask** param_3) {
        ref_counter_shared<oldscape::midi2::ClearRequestTask>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x1002e5650, 112 bytes, inline, placed by nothing (unplaced)
    // oldscape::midi2::FadeOutTask* placement_new<oldscape::midi2::FadeOutTask, shared_ptr<oldscape::midi2::ClearRequestTask>, shared_ptr<oldscape::midi2::MidiRequest>&, int&>(void*, shared_ptr<oldscape::midi2::ClearRequestTask>&&, shared_ptr<oldscape::midi2::MidiRequest>&, int&)
    FadeOutTask* jag::placement_new<oldscape::midi2::FadeOutTask, shared_ptr<oldscape::midi2::ClearRequestTask>,
                                    shared_ptr<oldscape::midi2::MidiRequest>&, int&>(void* param_1, shared_ptr* param_2,
                                                                                     shared_ptr* param_3,
                                                                                     int* param_4) {
        shared_ptr local_38;

        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)&local_38, param_2);
        oldscape::midi2::FadeOutTask::FadeOutTask(param_1, &local_38, param_3, *param_4);
        local_38.~shared_ptr();
        return param_1;
    }

    // 0x1002e56c0, 32 bytes, inline, placed by nothing (unplaced)
    // ref_counter_shared<oldscape::midi2::FadeOutTask>* placement_new<ref_counter_shared<oldscape::midi2::FadeOutTask>, int, oldscape::midi2::FadeOutTask*&>(void*, int&&, oldscape::midi2::FadeOutTask*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::midi2::FadeOutTask>, int, oldscape::midi2::FadeOutTask*&>(
        void* param_1, int* param_2, FadeOutTask** param_3) {
        ref_counter_shared<oldscape::midi2::FadeOutTask>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x1002e5730, 96 bytes, inline, placed by nothing (unplaced)
    // oldscape::midi2::DelayFadeTask* placement_new<oldscape::midi2::DelayFadeTask, shared_ptr<oldscape::midi2::FadeOutTask>, int&>(void*, shared_ptr<oldscape::midi2::FadeOutTask>&&, int&)
    DelayFadeTask* jag::placement_new<oldscape::midi2::DelayFadeTask, shared_ptr<oldscape::midi2::FadeOutTask>, int&>(
        void* param_1, shared_ptr* param_2, int* param_3) {
        shared_ptr local_30;

        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)&local_30, param_2);
        oldscape::midi2::DelayFadeTask::DelayFadeTask(param_1, &local_30, *param_3);
        local_30.~shared_ptr();
        return param_1;
    }

    // 0x1002e5790, 96 bytes, inline, placed by nothing (unplaced)
    // oldscape::midi2::DelayFadeTask* placement_new<oldscape::midi2::DelayFadeTask, decltype(nullptr), int&>(void*, decltype(nullptr)&&, int&)
    DelayFadeTask* placement_new<oldscape::midi2::DelayFadeTask, decltype(nullptr), int&>(
        void* param_1, _func_decltype_nullptr** param_2, int* param_3) {
        shared_ptr local_30;

        new (&local_30) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        oldscape::midi2::DelayFadeTask::DelayFadeTask(param_1, &local_30, *param_3);
        local_30.~shared_ptr();
        return param_1;
    }

    // 0x1002e57f0, 112 bytes, inline, placed by nothing (unplaced)
    // oldscape::midi2::FadeOutTask* placement_new<oldscape::midi2::FadeOutTask, decltype(nullptr), shared_ptr<oldscape::midi2::MidiRequest>&, int&>(void*, decltype(nullptr)&&, shared_ptr<oldscape::midi2::MidiRequest>&, int&)
    FadeOutTask*
    jag::placement_new<oldscape::midi2::FadeOutTask, decltype(nullptr), shared_ptr<oldscape::midi2::MidiRequest>&,
                       int&>(void* param_1, _func_decltype_nullptr** param_2, shared_ptr* param_3, int* param_4) {
        shared_ptr local_38;

        new (&local_38) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        oldscape::midi2::FadeOutTask::FadeOutTask(param_1, &local_38, param_3, *param_4);
        local_38.~shared_ptr();
        return param_1;
    }

    // 0x1002e5860, 96 bytes, inline, placed by nothing (unplaced)
    // oldscape::midi2::SwapSongTask* placement_new<oldscape::midi2::SwapSongTask, decltype(nullptr), eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false, eastl::dummy_allocator>&>(void*, decltype(nullptr)&&, eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false, eastl::dummy_allocator>&)
    SwapSongTask* jag::placement_new<
        oldscape::midi2::SwapSongTask, decltype(nullptr),
        eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false, eastl::dummy_allocator>&>(
        void* param_1, _func_decltype_nullptr** param_2, fixed_vector* param_3) {
        shared_ptr local_30;

        new (&local_30) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        oldscape::midi2::SwapSongTask::SwapSongTask(param_1, &local_30, param_3);
        local_30.~shared_ptr();
        return param_1;
    }

    // 0x1002e58c0, 32 bytes, inline, placed by nothing (unplaced)
    // ref_counter_shared<oldscape::midi2::SwapSongTask>* placement_new<ref_counter_shared<oldscape::midi2::SwapSongTask>, int, oldscape::midi2::SwapSongTask*&>(void*, int&&, oldscape::midi2::SwapSongTask*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::midi2::SwapSongTask>, int, oldscape::midi2::SwapSongTask*&>(
        void* param_1, int* param_2, SwapSongTask** param_3) {
        ref_counter_shared<oldscape::midi2::SwapSongTask>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x1002e5930, 96 bytes, inline, placed by nothing (unplaced)
    // oldscape::midi2::DelayFadeTask* placement_new<oldscape::midi2::DelayFadeTask, shared_ptr<oldscape::midi2::FadeInTask>, int&>(void*, shared_ptr<oldscape::midi2::FadeInTask>&&, int&)
    DelayFadeTask* jag::placement_new<oldscape::midi2::DelayFadeTask, shared_ptr<oldscape::midi2::FadeInTask>, int&>(
        void* param_1, shared_ptr* param_2, int* param_3) {
        shared_ptr local_30;

        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)&local_30, param_2);
        oldscape::midi2::DelayFadeTask::DelayFadeTask(param_1, &local_30, *param_3);
        local_30.~shared_ptr();
        return param_1;
    }

    // 0x1002e6620, 32 bytes, inline, placed by nothing (unplaced)
    // oldscape::midi2::MidiMixer* placement_new<oldscape::midi2::MidiMixer, oldscape::midi2::MidiPlayer&>(void*, oldscape::midi2::MidiPlayer&)
    MidiMixer* placement_new<oldscape::midi2::MidiMixer, oldscape::midi2::MidiPlayer&>(void* param_1,
                                                                                       MidiPlayer* param_2) {
        oldscape::midi2::MidiMixer::MidiMixer(param_1, param_2);
        return param_1;
    }

    // 0x1002e6640, 32 bytes, inline, placed by nothing (unplaced)
    // ref_counter_shared<oldscape::midi2::MidiMixer>* placement_new<ref_counter_shared<oldscape::midi2::MidiMixer>, int, oldscape::midi2::MidiMixer*&>(void*, int&&, oldscape::midi2::MidiMixer*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::midi2::MidiMixer>, int, oldscape::midi2::MidiMixer*&>(
        void* param_1, int* param_2, MidiMixer** param_3) {
        ref_counter_shared<oldscape::midi2::MidiMixer>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x1002e7390, 32 bytes, inline, placed by nothing (unplaced)
    // std::atomic<bool>* placement_new<std::atomic<bool>, bool>(void*, bool&&)
    /* std::atomic<bool>* placement_new<std::atomic<bool>, bool>(void*, bool&&) */

    atomic* placement_new<std::atomic<bool>, bool>(void* param_1, bool* param_2) {
        std::atomic<bool>::atomic(param_1, *param_2);
        return param_1;
    }

    // 0x1002e73b0, 32 bytes, inline, placed by nothing (unplaced)
    // ref_counter_shared_trivial<std::atomic<bool> >* placement_new<ref_counter_shared_trivial<std::atomic<bool> >, int, std::atomic<bool>*&>(void*, int&&, std::atomic<bool>*&)
    /* ref_counter_shared_trivial<std::atomic<bool> >*
   placement_new<ref_counter_shared_trivial<std::atomic<bool> >, int,
   std::atomic<bool>*&>(void*, int&&, std::atomic<bool>*&) */

    ref_counter_shared_trivial*
    placement_new<ref_counter_shared_trivial<std::atomic<bool>>, int, std::atomic<bool>*&>(void* param_1, int* param_2,
                                                                                           atomic** param_3) {
        ref_counter_shared_trivial<std::atomic<bool>>::ref_counter_shared_trivial(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x1002ea400, 32 bytes, inline, placed by nothing (unplaced)
    // oldscape::midi2::MidiNote* placement_new<oldscape::midi2::MidiNote>(void*)
    MidiNote* placement_new<oldscape::midi2::MidiNote>(void* param_1) {
        oldscape::midi2::MidiNote::MidiNote(param_1);
        return param_1;
    }

    // 0x1002ea420, 32 bytes, inline, placed by nothing (unplaced)
    // ref_counter_shared<oldscape::midi2::MidiNote>* placement_new<ref_counter_shared<oldscape::midi2::MidiNote>, int, oldscape::midi2::MidiNote*&>(void*, int&&, oldscape::midi2::MidiNote*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::midi2::MidiNote>, int, oldscape::midi2::MidiNote*&>(
        void* param_1, int* param_2, MidiNote** param_3) {
        ref_counter_shared<oldscape::midi2::MidiNote>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x1002ec250, 32 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init
    /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

    void ___cxx_global_var_init() {
        _g_masterIndexKey = 1095216660735;
    }

    // 0x1002ec350, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.174
    void ___cxx_global_var_init_174() {
        undefined1 local_50[40];
        Vector3T<int> local_28[16];

        math::Matrix33Scaling<float>((math*)local_50, 1.0, 1.0, -1.0);
        math::Vector3T<int>::Vector3T(local_28);
        new (&graphics::MAYA_ANIM_INVERT_MATRIX) math::Matrix44T<float>(local_50, local_28);
    }

    // 0x1002ec3b0, 32 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.175
    void ___cxx_global_var_init_175() {
        new (&graphics::WORLD_ORTHOGONAL) math::ColourHSL(-1.5707964, -1.5707964, 0.0);
    }

    // 0x1002ec3d0, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.177
    void ___cxx_global_var_init_177() {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_100ee5578) HashedString("LUMINANCE_ADAPTED");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048);
            }
        }
    }

    // 0x1002ec430, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.179
    void ___cxx_global_var_init_179() {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee5588) HashedString("LUMINANCE_ADAPTED_PREVIOUS");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058);
            }
        }
    }

    // 0x1002ec490, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.181
    void ___cxx_global_var_init_181() {
        if (*PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050) != 0) {
                new (PTR_VIEWRT_LUMINANCE_AVERAGE_100ee5580) HashedString("VIEWRT_LUMINANCE_AVERAGE");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050);
            }
        }
    }

    // 0x1002ec4f0, 16 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.183
    void ___cxx_global_var_init_183() {
        oldscape::defaults::DefaultsGroup::GRAPHICS = 3;
    }

    // 0x1002ec500, 144 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.184
    void ___cxx_global_var_init_184() {
        mach_header** local_48;
        undefined8 local_40;
        mach_header* local_38;
        undefined8 uStack_30;
        undefined8 local_28;
        long local_18;

        local_18 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_28 = 21474836484;
        local_38 = &__mh_execute_header;
        uStack_30 = 12884901890;
        local_48 = &local_38;
        local_40 = 6;
        new (&oldscape::AllFonts) Array<oldscape::Font, eastl::allocator>((initializer_list*)&local_48);
        ___cxa_atexit(PTR__Array_100ee6788, &oldscape::AllFonts, 4294967296);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_18) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1002ec590, 688 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.185
    void ___cxx_global_var_init_185() {
        allocator local_70[8];
        allocator local_68[8];
        allocator local_60[8];
        allocator local_58[8];
        allocator local_50[8];
        allocator local_48[8];
        allocator local_40[8];
        allocator local_38[8];
        allocator local_30[8];
        allocator local_28[8];

        eastl::allocator::allocator(local_70, "EASTL basic_string");
        new (&oldscape::typeToInstance) eastl::string("hiscore_oldschool", local_70);
        eastl::allocator::allocator(local_68, "EASTL basic_string");
        new (&DAT_10422a6b8) eastl::string("hiscore_oldschool_ironman", local_68);
        eastl::allocator::allocator(local_60, "EASTL basic_string");
        new (&DAT_10422a6d8) eastl::string("hiscore_oldschool_hardcore_ironman", local_60);
        eastl::allocator::allocator(local_58, "EASTL basic_string");
        new (&DAT_10422a6f8) eastl::string("hiscore_oldschool_deadman", local_58);
        eastl::allocator::allocator(local_50, "EASTL basic_string");
        new (&DAT_10422a718) eastl::string("hiscore_oldschool_seasonal", local_50);
        eastl::allocator::allocator(local_48, "EASTL basic_string");
        new (&DAT_10422a738) eastl::string("hiscore_oldschool_ultimate", local_48);
        eastl::allocator::allocator(local_40, "EASTL basic_string");
        new (&DAT_10422a758) eastl::string("hiscore_oldschool_tournament", local_40);
        eastl::allocator::allocator(local_38, "EASTL basic_string");
        new (&DAT_10422a778) eastl::string("oldschool_gim_hiscores", local_38);
        eastl::allocator::allocator(local_30, "EASTL basic_string");
        new (&DAT_10422a798) eastl::string("oldschool_hardcore_gim_hiscores", local_30);
        eastl::allocator::allocator(local_28, "EASTL basic_string");
        new (&DAT_10422a7b8) eastl::string("hiscore_oldschool_fresh_start", local_28);
        ___cxa_atexit(PTR__array_100ee6eb8, &oldscape::typeToInstance, 4294967296);
    }

    // 0x1002ec840, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.196
    void ___cxx_global_var_init_196() {
        std::array<shared_ptr<oldscape::midi2::MidiPlayerMainThread>, 3ul>::array();
        ___cxa_atexit(PTR__array_100ee6e90, &oldscape::midi2::MidiManager::m_midiPlayers, 4294967296);
    }

    // 0x1002ec880, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.197
    void ___cxx_global_var_init_197() {
        eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false,
                            eastl::dummy_allocator>::fixed_vector();
        ___cxa_atexit(PTR__fixed_vector_100ee6ca8, &oldscape::midi2::MidiManager::m_activeRequests, 4294967296);
    }

    // 0x1002ec940, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.200
    void ___cxx_global_var_init_200() {
        eastl::fixed_vector<shared_ptr<oldscape::midi2::MidiRequest>, 4ul, false,
                            eastl::dummy_allocator>::fixed_vector();
        ___cxa_atexit(PTR__fixed_vector_100ee6ca8, &oldscape::midi2::MidiManager::m_previousRequests, 4294967296);
    }

    // 0x1002ec980, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.226
    void ___cxx_global_var_init_226() {
        undefined* puVar1;

        puVar1 = PTR_IDENTITY_100ee4828;
        if (*PTR_IDENTITY_100ee4828 == '\0') {
            new (PTR_IDENTITY_100ee6730)
                math::Matrix44T<float>(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1002ec9e0, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.227
    void ___cxx_global_var_init_227() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4820;
        if (*PTR_ZERO_100ee4820 == '\0') {
            new (PTR_ZERO_100ee6728)
                math::Matrix44T<float>(0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1002eca40, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.228
    void ___cxx_global_var_init_228() {
        undefined* puVar1;

        puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1002eca80, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.229
    void ___cxx_global_var_init_229() {
        undefined* puVar1;

        puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1002ecac0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.230
    void ___cxx_global_var_init_230() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton, std::default_delete<ThreadPoolSingleton>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1002ecb00, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.231
    void ___cxx_global_var_init_231() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<ShaderThreadPoolSingleton, std::default_delete<ShaderThreadPoolSingleton>>::~unique_ptr,
                PTR_m_pSingleton_100ee5950, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1002ecb40, 48 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.232
    void ___cxx_global_var_init_232() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) math::Point<float>(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1002ecb70, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.233
    void ___cxx_global_var_init_233() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

} // namespace jag

namespace jag::oldscape::jagex3 {
    // 0x100d419a0, 576 bytes, __const
    g_zeroBlock = {
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  0,   0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  0,   0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  0,   0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 15, 216, 1, 0, 0, 0, 1, 2, 3, 4, 5,
    };

    // 0x100f37c00, 32 bytes, __data
    g_indexName = {1852399981, 1818846815, 1633902437, 778397795, 7890025, 0, 0, 0};

    // 0x10422a620, 16 bytes, __bss; zero-initialised
    g_masterIndexKey;

} // namespace jag::oldscape::jagex3

namespace jag::math {
    // 0x1002e3470, 192 bytes, inline, placed by nothing (unplaced)
    // float QuaternionDot<float>(QuaternionT<float> const&, QuaternionT<float> const&)
    float QuaternionDot<float>(QuaternionT* param_1, QuaternionT* param_2) {
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        float fVar5;
        float fVar6;
        float fVar7;
        vector* pvVar8;
        float* pfVar9;

        pvVar8 = param_1->SSOBeginPtr(param_2);
        fVar1 = *(float*)pvVar8;
        pvVar8 = param_2->SSOBeginPtr(param_2);
        fVar2 = *(float*)pvVar8;
        pfVar9 = (float*)param_1->y();
        fVar3 = *pfVar9;
        pfVar9 = (float*)param_2->y();
        fVar4 = *pfVar9;
        pfVar9 = (float*)param_1->second();
        fVar5 = *pfVar9;
        pfVar9 = (float*)param_2->second();
        fVar6 = *pfVar9;
        pfVar9 = (float*)param_1->qw();
        fVar7 = *pfVar9;
        pfVar9 = (float*)param_2->qw();
        return fVar7 * *pfVar9 + fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2;
    }

    // 0x1002e37a0, 768 bytes, inline, placed by nothing (unplaced)
    // QuaternionT<float> operator*<float>(QuaternionT<float> const&, QuaternionT<float> const&)
    /* QuaternionT<float> TEMPNAMEPLACEHOLDERVALUE(QuaternionT<float>
   const&, QuaternionT<float> const&) */

    math* operator*(QuaternionT* param_1, QuaternionT* param_2) {
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        float fVar5;
        float fVar6;
        float fVar7;
        float fVar8;
        float fVar9;
        float fVar10;
        float fVar11;
        float fVar12;
        float fVar13;
        float fVar14;
        float fVar15;
        float fVar16;
        float fVar17;
        float fVar18;
        float fVar19;
        float fVar20;
        float fVar21;
        float fVar22;
        float fVar23;
        float fVar24;
        float fVar25;
        float fVar26;
        float fVar27;
        float fVar28;
        float fVar29;
        float fVar30;
        float fVar31;
        float* pfVar32;
        vector* pvVar33;

        pfVar32 = (float*)param_1->qw();
        fVar1 = *pfVar32;
        pvVar33 = param_2->SSOBeginPtr(param_1);
        fVar2 = *(float*)pvVar33;
        pvVar33 = param_1->SSOBeginPtr(param_1);
        fVar3 = *(float*)pvVar33;
        pfVar32 = (float*)param_2->qw();
        fVar4 = *pfVar32;
        pfVar32 = (float*)param_1->y();
        fVar5 = *pfVar32;
        pfVar32 = (float*)param_2->second();
        fVar6 = *pfVar32;
        pfVar32 = (float*)param_1->second();
        fVar7 = *pfVar32;
        pfVar32 = (float*)param_2->y();
        fVar8 = *pfVar32;
        pfVar32 = (float*)param_1->qw();
        fVar9 = *pfVar32;
        pfVar32 = (float*)param_2->y();
        fVar10 = *pfVar32;
        pvVar33 = param_1->SSOBeginPtr(param_1);
        fVar11 = *(float*)pvVar33;
        pfVar32 = (float*)param_2->second();
        fVar12 = *pfVar32;
        pfVar32 = (float*)param_1->y();
        fVar13 = *pfVar32;
        pfVar32 = (float*)param_2->qw();
        fVar14 = *pfVar32;
        pfVar32 = (float*)param_1->second();
        fVar15 = *pfVar32;
        pvVar33 = param_2->SSOBeginPtr(param_1);
        fVar16 = *(float*)pvVar33;
        pfVar32 = (float*)param_1->qw();
        fVar17 = *pfVar32;
        pfVar32 = (float*)param_2->second();
        fVar18 = *pfVar32;
        pvVar33 = param_1->SSOBeginPtr(param_1);
        fVar19 = *(float*)pvVar33;
        pfVar32 = (float*)param_2->y();
        fVar20 = *pfVar32;
        pfVar32 = (float*)param_1->y();
        fVar21 = *pfVar32;
        pvVar33 = param_2->SSOBeginPtr(param_1);
        fVar22 = *(float*)pvVar33;
        pfVar32 = (float*)param_1->second();
        fVar23 = *pfVar32;
        pfVar32 = (float*)param_2->qw();
        fVar24 = *pfVar32;
        pfVar32 = (float*)param_1->qw();
        fVar25 = *pfVar32;
        pfVar32 = (float*)param_2->qw();
        fVar26 = *pfVar32;
        pvVar33 = param_1->SSOBeginPtr(param_1);
        fVar27 = *(float*)pvVar33;
        pvVar33 = param_2->SSOBeginPtr(param_1);
        fVar28 = *(float*)pvVar33;
        pfVar32 = (float*)param_1->y();
        fVar29 = *pfVar32;
        pfVar32 = (float*)param_2->y();
        fVar30 = *pfVar32;
        pfVar32 = (float*)param_1->second();
        fVar31 = *pfVar32;
        pfVar32 = (float*)param_2->second();
        new (this) QuaternionT<float>((fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2) - fVar7 * fVar8,
                                      fVar15 * fVar16 + fVar13 * fVar14 + (fVar9 * fVar10 - fVar11 * fVar12),
                                      fVar23 * fVar24 + ((fVar19 * fVar20 + fVar17 * fVar18) - fVar21 * fVar22),
                                      fVar25 * fVar26 - (fVar31 * *pfVar32 + fVar29 * fVar30 + fVar27 * fVar28));
        return this;
    }

    // 0x1002e3aa0, 256 bytes, inline, placed by nothing (unplaced)
    // QuaternionT<float> QuaternionMultiply<float>(QuaternionT<float>&, QuaternionT<float>, QuaternionT<float>)
    math* QuaternionMultiply<float>(QuaternionT<float>* param_1, float* param_3, float* param_4) {
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        float fVar5;
        float fVar6;
        float fVar7;
        float fVar8;

        fVar1 = param_4[3];
        fVar2 = *param_3;
        fVar3 = param_3[1];
        fVar4 = param_3[3];
        fVar5 = *param_4;
        fVar6 = param_4[1];
        fVar7 = param_3[2];
        fVar8 = param_4[2];
        param_1->Set((fVar7 * fVar6 + fVar4 * fVar5 + fVar2 * fVar1) - fVar3 * fVar8,
                     (fVar6 * fVar4 - fVar7 * fVar5) + fVar8 * fVar2 + fVar3 * fVar1,
                     (fVar7 * fVar1 - fVar6 * fVar2) + fVar8 * fVar4 + fVar3 * fVar5,
                     fVar4 * fVar1 - (fVar5 * fVar2 + fVar8 * fVar7 + fVar3 * fVar6));
        new (this) QuaternionT<float>(param_1);
        return this;
    }

} // namespace jag::math

namespace jag::graphics {
    // 0x10422a630, 64 bytes, __bss; zero-initialised
    MAYA_ANIM_INVERT_MATRIX;

    // 0x10422a670, 12 bytes, __bss; zero-initialised
    WORLD_ORTHOGONAL;

} // namespace jag::graphics

namespace jag::oldscape {
    // 0x10422a680, 24 bytes, __bss; zero-initialised
    AllFonts;

    // 0x10422a698, 328 bytes, __bss; set at startup by ___cxx_global_var_init.185
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
    // 0x100d41c60, 112 bytes, __const
    MAX_HARDWARE_THREAD_LIMIT = {
        16,         -1089221318, 1058262330,  1028443341, 1068149419, 1051372199, -1275068416,
        0,          0,           1,           2,          3,          2139095039, 2139095039,
        2139095039, 2139095039,  -1998362383, 1055193269, -891366063, 1063853775, 1413754136,
        1058611707, 0,           1097859072,  1405670641, 1058611707, 0,          0,
    };

} // namespace jag::threading

namespace jag::oldscape::defaults {
    // 0x10422a67c, 4 bytes, __bss; zero-initialised
    DefaultsGroup::GRAPHICS;

} // namespace jag::oldscape::defaults

namespace jag::oldscape::midi2 {
    // 0x1002e7370, 16 bytes, inline, placed by nothing (unplaced)
    // operator<(MidiPlayerMainThread::QueuedLazyWave const&, MidiPlayerMainThread::QueuedLazyWave const&)
    /* TEMPNAMEPLACEHOLDERVALUE(MidiPlayerMainThread::QueuedLazyWave
   const&, MidiPlayerMainThread::QueuedLazyWave const&) */

    undefined4 operator<(QueuedLazyWave* param_1, QueuedLazyWave* param_2) {
        return CONCAT31((int3)((uint)param_1->field_0 >> 8), (int)param_2->field_0 < (int)param_1->field_0);
    }

} // namespace jag::oldscape::midi2
