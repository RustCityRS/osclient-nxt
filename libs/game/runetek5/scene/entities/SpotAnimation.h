// libs/game/runetek5/scene/entities/SpotAnimation.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class SpotAnimation {
    public:
        // virtual methods in vtable order
        virtual ~SpotAnimation();
        virtual void MainLogic(graphics::RT7Core& rt7Core, unsigned int arg2, const math::Matrix44T<float>& matrix44);
        virtual void GatherDrawableElements(graphics::DrawableQueue& drawableQueue, graphics::RT7Core& rt7Core,
                                            const math::Matrix44T<float>& matrix44,
                                            const graphics::SceneViewData& sceneViewData,
                                            const graphics::EffectManager& effectManager);
        virtual void Destruct();
        virtual uint32_t GetCombinedID() const;
        virtual unsigned long CanRender() const;
        uint64_t AbortOnMove();
        unsigned long Build(unsigned int arg1);
        bool IsReady();
        void SetHidden(bool arg1);
        unsigned long IsFinished();
        bool IsDelayed() const;
        unsigned long MayMove(int arg1);
        void TranslateParticles(const math::Vector3T<float>& vector3);
        uint32_t GetEffectAnimID() const;
        SpotAnimation(graphics::RT7Core& rt7Core, game::AssetBuilder& assetBuilder,
                      game::ConfigProvider& configProvider, graphics::GraphNode* graphNode,
                      const shared_ptr<game::World>& world, SpotAnimPosition spotAnimPosition,
                      SpotAnimData spotAnimData);
        void SetInitialPosition();
        void ReSync(SpotAnimData spotAnimData);
        uint8_t* GetSeqType() const;
        uint32_t GetDuplicateBehaviour() const;
        uint64_t FilterRenderPasses(const graphics::SceneViewData& sceneViewData);

    private:
        uint8_t** field_8;
        uint8_t _unknown_16[48];
        uint8_t field_64;
        uint8_t field_65;
        char field_66;
        bool field_67;
        unsigned int field_68;
        TextWrapMode field_72;
        uint8_t _unknown_76[40];
        uint32_t field_116;
        uint8_t _unknown_120[72];
        RT7Core* field_192;
        AssetBuilder* field_200;
        ConfigProvider* field_208;
        uint8_t field_216;
        uint8_t _unknown_217[3];
        uint32_t m_effectAnimID;
        unsigned long field_224;
        SpotAnimData field_232;
        int field_236;
        float field_240;
        unsigned int field_244;
        uint32_t field_248;
        uint8_t _unknown_252[4];
        shared_ptr field_256;
        shared_ptr field_272;
        uint8_t _unknown_288[88];
        shared_ptr field_376;
        uint8_t _unknown_392[32];
        char field_424;
        uint8_t field_425;
        uint8_t field_426;
        uint8_t _unknown_427[1];
        uint32_t m_combinedID;
        char field_432;
        uint8_t field_433;
        uint8_t field_434;
        uint8_t _unknown_435[17];
        uint8_t field_452;
        bool m_hidden;
        uint8_t _unknown_454[6];
    };

    // 0x1003f1f00
    void SpotAnimation::SetHidden(bool arg1) {
        m_hidden = arg1;
    }

    // 0x1003f2a20
    shared_ptr_if_not_array<game::RT5AnimationResourceManager>::type
    make_shared<game::RT5AnimationResourceManager, game::AssetBuilder&, game::ConfigProvider const&>(
        game::AssetBuilder& assetBuilder, const game::ConfigProvider& configProvider) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_3c;
        RT5AnimationResourceManager* local_38[2];

        auto arg1 = aligned_alloc(128, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<game::RT5AnimationResourceManager>::type result;
        } else {
            local_38[0] =
                placement_new<game::RT5AnimationResourceManager, game::AssetBuilder&, game::ConfigProvider const&>(
                    (void*)((long)arg1 + 32), assetBuilder, configProvider);
            local_3c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<game::RT5AnimationResourceManager>, int,
                              game::RT5AnimationResourceManager*&>(arg1, &local_3c, local_38);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_38[0]);
        }
        return result;
    }

    // 0x1003fdc80
    uint32_t SpotAnimation::GetCombinedID() const {
        return m_combinedID;
    }

} // namespace jag
