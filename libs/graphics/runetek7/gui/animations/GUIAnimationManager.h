// libs/graphics/runetek7/gui/animations/GUIAnimationManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class GUIAnimationManager {
    public:
        class ScheduledInstance;
        class TemporaryAnimationData;
        // virtual methods in vtable order
        virtual ~GUIAnimationManager();
        virtual void ExecuteOnFinish(game::Hook const&, shared_ptr<ui::Component> const&);
        virtual GetConfigAnimationCurves() const;
        virtual GetConfigAnimations() const;
        GUIAnimationManager();
        TemporaryAnimationData* CreateTemporaryAnimation(GUIAnimationCurve const&, GUIAnimationTarget,
                                                         GUIAnimationTargetMode);
        TemporaryAnimationData* CreateTemporaryAnimation(math::EasingType, bool, GUIAnimationTarget,
                                                         GUIAnimationTargetMode);
        GetAnimation(unsigned int) const;
        bool IsTemporaryAnimation(unsigned int);
        void GetAnimationCurve(unsigned int) const;
        void MainDraw(float);
        void ProcessFinishedInstances();
        void ProcessScheduledInstances(float);
        void KillAll(GUIAnimationKillBehaviour);
        void SchedulePlay(TemporaryAnimationData&, shared_ptr<ui::Component> const&, float, float,
                          eastl::function<void(shared_ptr<GUIAnimation> const&, shared_ptr<ui::Component> const&)>&&);
        void Play(shared_ptr<GUIAnimation> const&, shared_ptr<ui::Component> const&, float, float, unsigned int, float,
                  bool);
        GUIAnimationInstance* PlayImpl(shared_ptr<GUIAnimation> const&, shared_ptr<ui::Component> const&, float, float,
                                       unsigned int, float, bool, game::Hook*);
        void Play(shared_ptr<GUIAnimation> const&, shared_ptr<ui::Component> const&, float, float, unsigned int, float,
                  bool, game::Hook&&);
        void Kill(shared_ptr<ui::Component> const&, shared_ptr<GUIAnimation> const&, GUIAnimationKillBehaviour);
        void KillAll(shared_ptr<ui::Component> const&, GUIAnimationKillBehaviour);
        void Restart(shared_ptr<ui::Component> const&, shared_ptr<GUIAnimation> const&, unsigned int);
        void RestartAll(shared_ptr<ui::Component> const&, unsigned int);
        static /* 4 bytes */ m_nextTemporaryAnimationID; // = 16777216

        // data members, from how the methods use this: 16440 bytes
        undefined* field_0; // offset 0, vtable pointer
        char _unknown_8[840];
        GUIAnimationInstance* field_848; // offset 848
        char _unknown_856[14520];
        undefined1 field_15376; // offset 15376
        char _unknown_15377[7];
        GUIAnimationInstance* field_15384; // offset 15384
        char _unknown_15392[1048];
    };

    class GUIAnimationManager::ScheduledInstance {
    public:
        ~ScheduledInstance();
        ScheduledInstance();
        ScheduledInstance(ScheduledInstance&&);
        ScheduledInstance* operator=(ScheduledInstance&&);

        // data members, from how the methods use this: 72 bytes
        char _unknown_0[64];
        undefined8 field_64; // offset 64
    };

    class GUIAnimationManager::TemporaryAnimationData {
    public:
        ~TemporaryAnimationData();
        TemporaryAnimationData(TemporaryAnimationData&&);
        TemporaryAnimationData(shared_ptr<GUIAnimation>&&);
        TemporaryAnimationData* operator=(TemporaryAnimationData&&);

        // data members, from how the methods use this: 16 bytes
        int field_0; // offset 0
        char _unknown_4[12];
    };

    // 0x1008f7310, 16 bytes, inline, placed by class name and debug map
    // GUIAnimationManager::IsTemporaryAnimation(unsigned int)
    bool GUIAnimationManager::IsTemporaryAnimation(uint param_1) {
        return 16777215 < param_1;
    }

    // 0x1008fe090, 16 bytes, complete-object destructor, inline, placed by class name
    // GUIAnimationManager::~GUIAnimationManager(): jumps straight to the base-object destructor

    // 0x1008fe0a0, 32 bytes, deleting destructor, inline, placed by class name
    // GUIAnimationManager::~GUIAnimationManager()
    void GUIAnimationManager::~GUIAnimationManager() {
        ~GUIAnimationManager(this);
        operator_delete(this);
    }

    // 0x1008fe0c0, 48 bytes, inline, placed by class name
    // GUIAnimationManager::ExecuteOnFinish(game::Hook const&, shared_ptr<ui::Component> const&)
    void GUIAnimationManager::ExecuteOnFinish(Hook* param_1, shared_ptr* param_2) {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(
            uVar1, 0, 2,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/animations/"
            "GUIAnimationManager.h",
            80, "Attempting to trigger a hook without specialising GUIAnimationManager for this functionality.");
    }

    // 0x1008fe0f0, 128 bytes, inline, placed by class name
    // GUIAnimationManager::GetConfigAnimationCurves() const
    undefined* GUIAnimationManager::GetConfigAnimationCurves() {
        if (*PTR_dummy_100ee5110 == '\0') {
            if (___cxa_guard_acquire(PTR_dummy_100ee5110) != 0) {
                new (PTR_dummy_100ee9d80) Array<GUIAnimationCurve, eastl::allocator>();
                ___cxa_atexit(PTR__Array_100ee6780, PTR_dummy_100ee9d80, 4294967296);
                ___cxa_guard_release(PTR_dummy_100ee5110);
            }
        }
        return PTR_dummy_100ee9d80;
    }

    // 0x1008fe170, 128 bytes, inline, placed by class name
    // GUIAnimationManager::GetConfigAnimations() const
    undefined* GUIAnimationManager::GetConfigAnimations() {
        if (*PTR_dummy_100ee5108 == '\0') {
            if (___cxa_guard_acquire(PTR_dummy_100ee5108) != 0) {
                new (PTR_dummy_100ee9d78) Array<shared_ptr<GUIAnimation>, eastl::allocator>();
                ___cxa_atexit(PTR__Array_100ee6748, PTR_dummy_100ee9d78, 4294967296);
                ___cxa_guard_release(PTR_dummy_100ee5108);
            }
        }
        return PTR_dummy_100ee9d78;
    }

    // 0x10090f200, 16 bytes, complete-object destructor, inline, placed by class name
    // GUIAnimationManager::ScheduledInstance::~ScheduledInstance(): jumps straight to the base-object destructor

    // 0x10090f210, 48 bytes, base-object destructor, inline, placed by class name
    // GUIAnimationManager::ScheduledInstance::~ScheduledInstance()
    void GUIAnimationManager::ScheduledInstance::~ScheduledInstance() {
        eastl::function<void()>::~function((function<void()>*)&field_32);
        (&field_16)->~shared_ptr();
        ~shared_ptr();
    }

    // 0x10090f780, 48 bytes, inline, placed by class name
    // GUIAnimationManager::TemporaryAnimationData::operator=(GUIAnimationManager::TemporaryAnimationData&&)
    /* GUIAnimationManager::TemporaryAnimationData::TEMPNAMEPLACEHOLDERVALUE(GUIAnimationManager::TemporaryAnimationData&&)
    */

    TemporaryAnimationData* GUIAnimationManager::TemporaryAnimationData::operator=(TemporaryAnimationData* param_1) {
        field_0 = param_1->field_0;
        shared_ptr<GUIAnimation>::operator=((shared_ptr<GUIAnimation>*)&field_8, (shared_ptr*)&param_1->field_8);
        return this;
    }

    // 0x10090f980, 16 bytes, complete-object constructor, inline, placed by class name
    // GUIAnimationManager::ScheduledInstance::ScheduledInstance(): jumps straight to the base-object constructor

    // 0x10090fab0, 64 bytes, base-object constructor, inline, placed by class name
    // GUIAnimationManager::ScheduledInstance::ScheduledInstance()
    void GUIAnimationManager::ScheduledInstance::ScheduledInstance() {
        _func_decltype_nullptr* in_RSI;

        new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(in_RSI);
        new (&field_16, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        eastl::function<void(shared_ptr<GUIAnimation> const&, shared_ptr<ui::Component> const&)>::function(
            (function<void(shared_ptr<GUIAnimation> const&, shared_ptr<ui::Component> const&)>*)&field_32);
    }

    // 0x10090fd50, 16 bytes, complete-object constructor, inline, placed by class name
    // GUIAnimationManager::ScheduledInstance::ScheduledInstance(GUIAnimationManager::ScheduledInstance&&): jumps straight to the base-object constructor

    // 0x10090fd60, 112 bytes, base-object constructor, inline, placed by class name
    // GUIAnimationManager::ScheduledInstance::ScheduledInstance(GUIAnimationManager::ScheduledInstance&&)
    void GUIAnimationManager::ScheduledInstance::ScheduledInstance(ScheduledInstance* param_1) {
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)this, (shared_ptr*)param_1);
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)&field_16, (shared_ptr*)&param_1->field_16);
        eastl::function<void(shared_ptr<GUIAnimation> const&, shared_ptr<ui::Component> const&)>::function(
            (function<void(shared_ptr<GUIAnimation> const&, shared_ptr<ui::Component> const&)>*)&field_32,
            (function*)&param_1->field_32);
        field_64 = param_1->field_64;
    }

    // 0x100911250, 64 bytes, inline, placed by class name
    // GUIAnimationManager::ScheduledInstance::operator=(GUIAnimationManager::ScheduledInstance&&)
    /* GUIAnimationManager::ScheduledInstance::TEMPNAMEPLACEHOLDERVALUE(GUIAnimationManager::ScheduledInstance&&)
    */

    ScheduledInstance* GUIAnimationManager::ScheduledInstance::operator=(ScheduledInstance* param_1) {
        shared_ptr<GUIAnimation>::operator=((shared_ptr<GUIAnimation>*)this, (shared_ptr*)param_1);
        shared_ptr<ui::Component>::operator=((shared_ptr<ui::Component>*)&field_16, (shared_ptr*)&param_1->field_16);
        eastl::function<void(shared_ptr<GUIAnimation> const&, shared_ptr<ui::Component> const&)>::operator=(
            (function<void(shared_ptr<GUIAnimation> const&, shared_ptr<ui::Component> const&)>*)&field_32,
            (function*)&param_1->field_32);
        field_64 = param_1->field_64;
        return this;
    }

    // 0x1009168b0, 112 bytes, base-object destructor, inline, placed by class name
    // GUIAnimationManager::~GUIAnimationManager()
    void GUIAnimationManager::~GUIAnimationManager() {
        field_0 = PTR_vtable_100ee8808 + 16;
        (&field_16432)->~fixed_vector();
        (&field_15384)->~fixed_vector();
        (&field_9064)->~fixed_hash_map();
        (&field_848)->~fixed_vector();
        (&field_816)->~FastPool();
        (&field_8)->~fixed_vector();
    }

} // namespace jag::graphics

namespace jag {
    // 0x1008f7000, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<graphics::GUIAnimation>::type bucket_make_shared<graphics::GUIAnimation, graphics::GUIAnimationCurve const&, graphics::GUIAnimationTarget&, graphics::GUIAnimationTargetMode&>(graphics::GUIAnimationCurve const&, graphics::GUIAnimationTarget&, graphics::GUIAnimationTargetMode&)
    jag*
    jag::bucket_make_shared<graphics::GUIAnimation, graphics::GUIAnimationCurve_const&, graphics::GUIAnimationTarget&,
                            graphics::GUIAnimationTargetMode&>(GUIAnimationCurve* param_1, GUIAnimationTarget* param_2,
                                                               GUIAnimationTargetMode* param_3) {
        BucketRefCounter* pBVar1;
        managed_ptr_counter_and_data* local_40;
        GUIAnimation* local_38[2];

        local_40 = (managed_ptr_counter_and_data*)BucketManager::Allocate(96, 0, 16);
        if (local_40 == (managed_ptr_counter_and_data*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        } else {
            local_38[0] =
                placement_new<graphics::GUIAnimation, graphics::GUIAnimationCurve_const&, graphics::GUIAnimationTarget&,
                              graphics::GUIAnimationTargetMode&>(local_40 + 48, param_1, param_2, param_3);
            pBVar1 = placement_new<
                BucketRefCounter<graphics::GUIAnimation>,
                managed_ptr_counter_and_data<BucketRefCounter<graphics::GUIAnimation>, graphics::GUIAnimation>*&,
                graphics::GUIAnimation*&>(local_40, &local_40, local_38);
            pBVar1->~AutoSingleton(local_38[0]);
            pBVar1->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(pBVar1, local_38[0]);
        }
        return this;
    }

    // 0x1008f7130, 192 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<graphics::GUIAnimation>::type bucket_make_shared<graphics::GUIAnimation, math::EasingType&, bool&, graphics::GUIAnimationTarget&, graphics::GUIAnimationTargetMode&>(math::EasingType&, bool&, graphics::GUIAnimationTarget&, graphics::GUIAnimationTargetMode&)
    jag* jag::bucket_make_shared<graphics::GUIAnimation, math::EasingType&, bool&, graphics::GUIAnimationTarget&,
                                 graphics::GUIAnimationTargetMode&>(EasingType* param_1, bool* param_2,
                                                                    GUIAnimationTarget* param_3,
                                                                    GUIAnimationTargetMode* param_4) {
        BucketRefCounter* pBVar1;
        managed_ptr_counter_and_data* local_48;
        GUIAnimation* local_40[2];

        local_48 = (managed_ptr_counter_and_data*)BucketManager::Allocate(96, 0, 16);
        if (local_48 == (managed_ptr_counter_and_data*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        } else {
            local_40[0] =
                placement_new<graphics::GUIAnimation, math::EasingType&, bool&, graphics::GUIAnimationTarget&,
                              graphics::GUIAnimationTargetMode&>(local_48 + 48, param_1, param_2, param_3, param_4);
            pBVar1 = placement_new<
                BucketRefCounter<graphics::GUIAnimation>,
                managed_ptr_counter_and_data<BucketRefCounter<graphics::GUIAnimation>, graphics::GUIAnimation>*&,
                graphics::GUIAnimation*&>(local_48, &local_48, local_40);
            pBVar1->~AutoSingleton(local_40[0]);
            pBVar1->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(pBVar1, local_40[0]);
        }
        return this;
    }

} // namespace jag
