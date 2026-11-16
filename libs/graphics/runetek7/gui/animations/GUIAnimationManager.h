// libs/graphics/runetek7/gui/animations/GUIAnimationManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class GUIAnimationManager {
    public:
        class ScheduledInstance;
        class TemporaryAnimationData;
        // virtual methods in vtable order
        virtual ~GUIAnimationManager();
        virtual void ExecuteOnFinish(const game::Hook& hook, const shared_ptr<ui::Component>& component);
        virtual uint8_t* GetConfigAnimationCurves() const;
        virtual uint8_t* GetConfigAnimations() const;
        GUIAnimationManager();
        TemporaryAnimationData* CreateTemporaryAnimation(const GUIAnimationCurve& guiAnimationCurve,
                                                         GUIAnimationTarget guiAnimationTarget,
                                                         GUIAnimationTargetMode guiAnimationTargetMode);
        TemporaryAnimationData* CreateTemporaryAnimation(math::EasingType easingType, bool arg2,
                                                         GUIAnimationTarget guiAnimationTarget,
                                                         GUIAnimationTargetMode guiAnimationTargetMode);
        uint8_t* GetAnimation(unsigned int arg1) const;
        bool IsTemporaryAnimation(unsigned int arg1);
        void GetAnimationCurve(unsigned int arg1) const;
        void MainDraw(float arg1);
        void ProcessFinishedInstances();
        void ProcessScheduledInstances(float arg1);
        void KillAll(GUIAnimationKillBehaviour guiAnimationKillBehaviour);
        void SchedulePlay(
            TemporaryAnimationData& temporaryAnimationData, const shared_ptr<ui::Component>& component, float arg3,
            float arg4,
            eastl::function<void(shared_ptr<GUIAnimation> const&, shared_ptr<ui::Component> const&)>&& callback);
        void Play(const shared_ptr<GUIAnimation>& guiAnimation, const shared_ptr<ui::Component>& component, float arg3,
                  float arg4, unsigned int arg5, float arg6, bool arg7);
        GUIAnimationInstance* PlayImpl(const shared_ptr<GUIAnimation>& guiAnimation,
                                       const shared_ptr<ui::Component>& component, float arg3, float arg4,
                                       unsigned int arg5, float arg6, bool arg7, game::Hook* hook);
        void Play(const shared_ptr<GUIAnimation>& guiAnimation, const shared_ptr<ui::Component>& component, float arg3,
                  float arg4, unsigned int arg5, float arg6, bool arg7, game::Hook&& hook);
        void Kill(const shared_ptr<ui::Component>& component, const shared_ptr<GUIAnimation>& guiAnimation,
                  GUIAnimationKillBehaviour guiAnimationKillBehaviour);
        void KillAll(const shared_ptr<ui::Component>& component, GUIAnimationKillBehaviour guiAnimationKillBehaviour);
        void Restart(const shared_ptr<ui::Component>& component, const shared_ptr<GUIAnimation>& guiAnimation,
                     unsigned int arg3);
        void RestartAll(const shared_ptr<ui::Component>& component, unsigned int arg2);
        static int32_t m_nextTemporaryAnimationID; // = 16777216

    private:
        uint8_t _unknown_8[15368];
        uint8_t field_15376;
        uint8_t _unknown_15377[1063];
    };

    class GUIAnimationManager::ScheduledInstance {
    public:
        ~ScheduledInstance();
        ScheduledInstance();
        ScheduledInstance(ScheduledInstance&& scheduledInstance);
        ScheduledInstance* operator=(ScheduledInstance&& scheduledInstance);

    private:
        uint8_t _unknown_0[64];
        uint64_t field_64;
    };

    class GUIAnimationManager::TemporaryAnimationData {
    public:
        ~TemporaryAnimationData();
        TemporaryAnimationData(TemporaryAnimationData&& arg1);
        TemporaryAnimationData(shared_ptr<GUIAnimation>&& guiAnimation);
        TemporaryAnimationData* operator=(TemporaryAnimationData&& temporaryAnimationData);

    private:
        int field_0;
        uint8_t _unknown_4[12];
    };

    // 0x1008f7310
    bool GUIAnimationManager::IsTemporaryAnimation(unsigned int arg1) {
        return 16777215 < arg1;
    }

    // 0x1008fe0c0
    void GUIAnimationManager::ExecuteOnFinish(const game::Hook& hook, const shared_ptr<ui::Component>& component) {
        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                  "animations/GUIAnimationManager.h",
                  80, "Attempting to trigger a hook without specialising GUIAnimationManager for this functionality.");
    }

    // 0x1008fe0f0
    uint8_t* GUIAnimationManager::GetConfigAnimationCurves() const {
        if (*PTR_dummy_100ee5110 == '\0') {
            if (___cxa_guard_acquire(PTR_dummy_100ee5110) != 0) {
                new (PTR_dummy_100ee9d80) Array<GUIAnimationCurve>();
                ___cxa_atexit(PTR__Array_100ee6780, PTR_dummy_100ee9d80, 4294967296);
                ___cxa_guard_release(PTR_dummy_100ee5110);
            }
        }
        return PTR_dummy_100ee9d80;
    }

    // 0x1008fe170
    uint8_t* GUIAnimationManager::GetConfigAnimations() const {
        if (*PTR_dummy_100ee5108 == '\0') {
            if (___cxa_guard_acquire(PTR_dummy_100ee5108) != 0) {
                new (PTR_dummy_100ee9d78) Array<shared_ptr<GUIAnimation>>();
                ___cxa_atexit(PTR__Array_100ee6748, PTR_dummy_100ee9d78, 4294967296);
                ___cxa_guard_release(PTR_dummy_100ee5108);
            }
        }
        return PTR_dummy_100ee9d78;
    }

    // 0x10090f210
    GUIAnimationManager::ScheduledInstance::~ScheduledInstance() {
        field_32.~function();
        field_16.~shared_ptr();
    }

    // 0x10090f780
    TemporaryAnimationData* GUIAnimationManager::TemporaryAnimationData::operator=(
        GUIAnimationManager::TemporaryAnimationData&& temporaryAnimationData) {
        field_0 = temporaryAnimationData.field_0;
        field_8 = temporaryAnimationData.field_8;
        return this;
    }

    // 0x10090fab0
    GUIAnimationManager::ScheduledInstance::ScheduledInstance() : shared_ptr() {
        new (&field_16) shared_ptr();
        new (&field_32) eastl::function<void(shared_ptr<GUIAnimation> const&, shared_ptr<ui::Component> const&)>();
    }

    // 0x10090fd60
    GUIAnimationManager::ScheduledInstance::ScheduledInstance(
        GUIAnimationManager::ScheduledInstance&& scheduledInstance) {
        shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(scheduledInstance);
        field_16.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(scheduledInstance.field_16);
        new (&field_32) eastl::function<void(shared_ptr<GUIAnimation> const&, shared_ptr<ui::Component> const&)>(
            scheduledInstance.field_32);
        field_64 = scheduledInstance.field_64;
    }

    // 0x100911250
    ScheduledInstance*
    GUIAnimationManager::ScheduledInstance::operator=(GUIAnimationManager::ScheduledInstance&& scheduledInstance) {
        *this = scheduledInstance;
        field_16 = scheduledInstance.field_16;
        field_32 = scheduledInstance.field_32;
        field_64 = scheduledInstance.field_64;
        return this;
    }

    // 0x1009168b0
    GUIAnimationManager::~GUIAnimationManager() {
        field_16432.~fixed_vector();
        field_15384.~fixed_vector();
        field_9064.~fixed_hash_map();
        field_848.~fixed_vector();
        field_816.~FastPool();
        field_8.~fixed_vector();
    }

} // namespace jag::graphics

namespace jag {
    // 0x1008f7000
    shared_ptr_if_not_array<graphics::GUIAnimation>::type
    bucket_make_shared<graphics::GUIAnimation, graphics::GUIAnimationCurve const&, graphics::GUIAnimationTarget&,
                       graphics::GUIAnimationTargetMode&>(const graphics::GUIAnimationCurve& guiAnimationCurve,
                                                          graphics::GUIAnimationTarget& guiAnimationTarget,
                                                          graphics::GUIAnimationTargetMode& guiAnimationTargetMode) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        GUIAnimation* local_38[2];

        auto local_40 = BucketManager::Allocate(96, 0, 16);
        if (local_40 == nullptr) {
            shared_ptr_if_not_array<graphics::GUIAnimation>::type result;
        } else {
            local_38[0] = placement_new<graphics::GUIAnimation, graphics::GUIAnimationCurve const&,
                                        graphics::GUIAnimationTarget&, graphics::GUIAnimationTargetMode&>(
                local_40 + 48, guiAnimationCurve, guiAnimationTarget, guiAnimationTargetMode);
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)placement_new<
                BucketRefCounter<graphics::GUIAnimation>,
                managed_ptr_counter_and_data<BucketRefCounter<graphics::GUIAnimation>, graphics::GUIAnimation>*&,
                graphics::GUIAnimation*&>(local_40, &local_40, local_38);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_38[0]);
        }
        return result;
    }

    // 0x1008f7130
    shared_ptr_if_not_array<graphics::GUIAnimation>::type
    bucket_make_shared<graphics::GUIAnimation, math::EasingType&, bool&, graphics::GUIAnimationTarget&,
                       graphics::GUIAnimationTargetMode&>(math::EasingType& easingType, bool& arg2,
                                                          graphics::GUIAnimationTarget& guiAnimationTarget,
                                                          graphics::GUIAnimationTargetMode& guiAnimationTargetMode) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        GUIAnimation* local_40[2];

        auto local_48 = BucketManager::Allocate(96, 0, 16);
        if (local_48 == nullptr) {
            shared_ptr_if_not_array<graphics::GUIAnimation>::type result;
        } else {
            local_40[0] = placement_new<graphics::GUIAnimation, math::EasingType&, bool&, graphics::GUIAnimationTarget&,
                                        graphics::GUIAnimationTargetMode&>(local_48 + 48, easingType, arg2,
                                                                           guiAnimationTarget, guiAnimationTargetMode);
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)placement_new<
                BucketRefCounter<graphics::GUIAnimation>,
                managed_ptr_counter_and_data<BucketRefCounter<graphics::GUIAnimation>, graphics::GUIAnimation>*&,
                graphics::GUIAnimation*&>(local_48, &local_48, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return result;
    }

} // namespace jag
