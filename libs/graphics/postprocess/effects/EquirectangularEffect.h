// libs/graphics/postprocess/effects/EquirectangularEffect.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::postprocess {
    class EquirectangularEffect {
    public:
        // virtual methods in vtable order
        virtual ~EquirectangularEffect();
        virtual void Render(render::RenderContext& renderContext, const render::RenderTargets* renderTargets,
                            const render::Texture* texture1, const render::Texture* texture2,
                            const render::Viewport& viewport, graphics::ViewRenderTargets* viewRenderTargets,
                            PostProcessManager& postProcessManager);
        virtual void Init();
        virtual void Destroy();
        void SetEnvMapRT(const shared_ptr<render::RenderTargets>& renderTargets);
        EquirectangularEffect(int arg1, int arg2);

    private:
        uint8_t field_8;
        uint8_t _unknown_9[3];
        int field_12;
        int field_16;
        uint8_t _unknown_20[20];
        shared_ptr field_40;
    };

    // 0x1007dec20
    void EquirectangularEffect::SetEnvMapRT(const shared_ptr<render::RenderTargets>& renderTargets) {
        *field_40 = renderTargets;
    }

} // namespace jag::postprocess

namespace jag {
    // 0x1007dee00
    std::enable_if<
        !std::is_array<graphics::EffectStateSaveRestore>::value,
        std::unique_ptr<graphics::EffectStateSaveRestore, BucketDeleter<graphics::EffectStateSaveRestore>>>::type
    bucket_make_unique<graphics::EffectStateSaveRestore, graphics::EffectManager&,
                       eastl::fixed_map<graphics::EffectType, bool, 121ul>&>(
        graphics::EffectManager& effectManager, eastl::fixed_map<graphics::EffectType, bool, 121ul>& fixed_map) {
        std::enable_if<!std::is_array<graphics::EffectStateSaveRestore>::value,
                       std::unique_ptr<graphics::EffectStateSaveRestore,
                                       BucketDeleter<graphics::EffectStateSaveRestore>>>::type result;
        __good_rval_ref_type* good_rval_ref_type;

        auto effectStateSaveRestore = BucketManager::Allocate(4944, 0, 16);
        if (effectStateSaveRestore == nullptr) {
            LogAssert(
                "ptr != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/make_unique.h",
                37, nullptr);
        }
        new (effectStateSaveRestore) graphics::EffectStateSaveRestore(effectManager, fixed_map);
        result.unique_ptr<true, void>(effectStateSaveRestore, good_rval_ref_type);
        return result;
    }

} // namespace jag
