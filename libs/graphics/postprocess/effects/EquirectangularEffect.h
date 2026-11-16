// libs/graphics/postprocess/effects/EquirectangularEffect.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::postprocess {
    class EquirectangularEffect {
    public:
        // virtual methods in vtable order
        virtual ~EquirectangularEffect();
        virtual void Render(render::RenderContext&, render::RenderTargets const*, render::Texture const*,
                            render::Texture const*, render::Viewport const&, graphics::ViewRenderTargets*,
                            PostProcessManager&);
        virtual void Init();
        virtual void Destroy();
        void SetEnvMapRT(shared_ptr<render::RenderTargets> const&);
        EquirectangularEffect(int, int);

        // data members, from how the methods use this: 56 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined1 field_8;  // offset 8
        char _unknown_9[3];
        int field_12; // offset 12
        int field_16; // offset 16
        char _unknown_20[4];
        shared_ptr field_24; // offset 24
        shared_ptr field_40; // offset 40
    };

    // 0x1007dec20, 16 bytes, inline, placed by class name and debug map
    // EquirectangularEffect::SetEnvMapRT(shared_ptr<render::RenderTargets> const&)
    void EquirectangularEffect::SetEnvMapRT(shared_ptr* param_1) {
        shared_ptr<render::RenderTargets>::operator=((shared_ptr<render::RenderTargets>*)field_40, param_1);
    }

} // namespace jag::postprocess

namespace jag {
    // 0x1007dee00, 112 bytes, inline, placed by debug map only (low confidence)
    // std::enable_if<!std::is_array<graphics::EffectStateSaveRestore>::value, std::unique_ptr<graphics::EffectStateSaveRestore, BucketDeleter<graphics::EffectStateSaveRestore> > >::type bucket_make_unique<graphics::EffectStateSaveRestore, graphics::EffectManager&, eastl::fixed_map<graphics::EffectType, bool, 121ul, true, eastl::less<graphics::EffectType>, eastl::allocator>&>(graphics::EffectManager&, eastl::fixed_map<graphics::EffectType, bool, 121ul, true, eastl::less<graphics::EffectType>, eastl::allocator>&)
    /* std::enable_if<!std::is_array<graphics::EffectStateSaveRestore>::value,
   std::unique_ptr<graphics::EffectStateSaveRestore,
   BucketDeleter<graphics::EffectStateSaveRestore> > >::type
   bucket_make_unique<graphics::EffectStateSaveRestore, graphics::EffectManager&,
   eastl::fixed_map<graphics::EffectType, bool, 121ul, true,
   eastl::less<graphics::EffectType>, eastl::allocator>&>(graphics::EffectManager&,
   eastl::fixed_map<graphics::EffectType, bool, 121ul, true,
   eastl::less<graphics::EffectType>, eastl::allocator>&) */

    jag*
    jag::bucket_make_unique<graphics::EffectStateSaveRestore, graphics::EffectManager&,
                            eastl::fixed_map<graphics::EffectType, bool, 121ul, true, eastl::less<graphics::EffectType>,
                                             eastl::allocator>&>(EffectManager* param_1, fixed_map* param_2) {
        EffectStateSaveRestore* this_00;

        this_00 = (EffectStateSaveRestore*)BucketManager::Allocate(4944, 0, 16);
        if (this_00 == (EffectStateSaveRestore*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "ptr != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/make_unique.h",
                37, (char*)0);
        }
        graphics::EffectStateSaveRestore::EffectStateSaveRestore(this_00, param_1, param_2);
        std::unique_ptr<graphics::EffectStateSaveRestore,
                        BucketDeleter<graphics::EffectStateSaveRestore>>::unique_ptr<true, void>(this, this_00);
        return this;
    }

} // namespace jag
