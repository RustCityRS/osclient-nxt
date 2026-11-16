// libs/graphics/runetek7/particles/ParticleSystemDE.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x1007f7520
    graphics::ParticleSystem*
    placement_new<graphics::ParticleSystem, graphics::ParticleManager*>(void* arg1, graphics::ParticleManager*&& arg2) {
        new (arg1) graphics::ParticleSystem(arg2);
        return arg1;
    }

    // 0x1007f7540
    MakeSharedPoolRefCounter<graphics::ParticleSystem, MakeSharedPool<graphics::ParticleSystem, 32>>*
    placement_new<MakeSharedPoolRefCounter<graphics::ParticleSystem, MakeSharedPool<graphics::ParticleSystem, 32>>,
                  MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData*&, graphics::ParticleSystem*>(
        void* arg1, MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData*& arg2,
        graphics::ParticleSystem*&& arg3) {
        new (arg1) MakeSharedPoolRefCounter<graphics::ParticleSystem, MakeSharedPool<graphics::ParticleSystem, 32>>(
            arg2, arg3);
        return arg1;
    }

    // 0x1007f7560
    void shared_ptr_do_enable_shared_from_this<graphics::ParticleSystem>(
        ref_counter_base* ref_counter_base, graphics::ParticleSystem* particleSystem,
        graphics::ParticleSystem::enable_shared_type* enable_shared_type) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48;
        weak_ptr<oldscape::dash3d::Decor> local_38;

        if (ref_counter_base != nullptr) {
            ref_counter_base->IncRef();
            local_48 = eastl::hashtable_iterator(ref_counter_base, (unsigned long)particleSystem);
            local_38 = weak_ptr(local_48);
            particleSystem->field_16.__internal_set_weak_ptr(local_38);
        }
    }

    // 0x1007f7660
    MakeSharedPoolRefCounter<graphics::ParticleSystem, MakeSharedPool<graphics::ParticleSystem, 32>>::
        MakeSharedPoolRefCounter(void* arg1, graphics::ParticleSystem* particleSystem)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7bc8 + 16;
        *(void**)(this + 16) = arg1;
        *(ParticleSystem**)(this + 24) = particleSystem;
    }

    // 0x1007f76a0
    void
    MakeSharedPoolRefCounter<graphics::ParticleSystem, MakeSharedPool<graphics::ParticleSystem, 32>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<graphics::ParticleSystem, 32>::deallocate(arg1);
    }

    // 0x1007f8090
    void SafeBucketAllocatorSTL<std::__packaged_task_func<
        std::__bind<graphics::ParticleSystemRenderer::AddDrawableToBatch(
            graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&,
            graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_10>,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::
        allocate(unsigned long arg1,
                 std::__packaged_task_func<
                     std::__bind<graphics::ParticleSystemRenderer::AddDrawableToBatch(
                         graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&,
                         graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_10>,
                     SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func) {
        BucketManager::Allocate(112, 4, 16);
    }

    // 0x1007f8370
    void SafeBucketAllocatorSTL<std::__packaged_task_func<
        std::__bind<graphics::ParticleSystemRenderer::AddDrawableToBatch(
            graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&,
            graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_10>,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::
        deallocate(std::__packaged_task_func<
                       std::__bind<graphics::ParticleSystemRenderer::AddDrawableToBatch(
                           graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&,
                           graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_10>,
                       SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func,
                   unsigned long arg2) {
        DeAllocate((void*)((long)packaged_task_func * 112), arg2);
    }

    // 0x1007f9380
    void SafeBucketAllocatorSTL<std::__packaged_task_func<
        std::__bind<graphics::ParticleSystemRenderer::AddDrawableToBatch(
            graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&,
            graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_12>,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::
        allocate(unsigned long arg1,
                 std::__packaged_task_func<
                     std::__bind<graphics::ParticleSystemRenderer::AddDrawableToBatch(
                         graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&,
                         graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_12>,
                     SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func) {
        BucketManager::Allocate(112, 4, 16);
    }

    // 0x1007f9720
    void SafeBucketAllocatorSTL<std::__packaged_task_func<
        std::__bind<graphics::ParticleSystemRenderer::AddDrawableToBatch(
            graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&,
            graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_12>,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::
        deallocate(std::__packaged_task_func<
                       std::__bind<graphics::ParticleSystemRenderer::AddDrawableToBatch(
                           graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&,
                           graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_12>,
                       SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func,
                   unsigned long arg2) {
        DeAllocate((void*)((long)packaged_task_func * 112), arg2);
    }

} // namespace jag

namespace jag::graphics {
    class ParticleSystem_DE {
    public:
        // virtual methods in vtable order
        virtual ~ParticleSystem_DE();
        virtual void Render(RT7Core& rt7Core, const render::DrawCallState& drawCallState,
                            const SceneViewData& sceneViewData, RenderPassType renderPassType,
                            EffectManager& effectManager);
        virtual void GetRenderer(RT7Core& rt7Core);
        ParticleSystem_DE(const shared_ptr<ParticleSystem>& particleSystem, const math::OBB& obb, float arg3,
                          unsigned int arg4, bool arg5);
        ParticleSystem_DE(ModularParticleSystemDrawable& modularParticleSystemDrawable, const math::OBB& obb,
                          float arg3, unsigned int arg4, bool arg5, bool arg6);

    private:
        uint8_t _unknown_8[96];
        shared_ptr field_104;
        ModularParticleSystemDrawable* field_120;
        bool field_128;
        bool field_129;
        uint8_t _unknown_130[14];
    };

    // 0x1007f6e70
    ParticleSystem_DE::ParticleSystem_DE(const shared_ptr<ParticleSystem>& particleSystem, const math::OBB& obb,
                                         float arg3, unsigned int arg4, bool arg5)
        : DrawableElementPool<ParticleSystem_DE>(obb, arg4, arg3), field_104(particleSystem), field_120(nullptr),
          field_128(false), field_129(arg5) {}

    // 0x1007f6ee0
    DrawableElementPool<ParticleSystem_DE>::DrawableElementPool(const math::OBB& obb, unsigned int arg2, float arg3)
        : DrawableElement(obb, arg2, arg3) {}

    // 0x1007f6f40
    void DrawableElementPool<ParticleSystem_DE>::Release() {
        GetDrawableElementPool();
        if (((FastPool<ParticleSystem_DE, int>*)&GetDrawableElementPool()::pool)->is_owner(this) == '\0') {
            if (this != nullptr) {
                ~();
            }
        } else {
            ((FastPool<ParticleSystem_DE, int>*)&GetDrawableElementPool()::pool)->Destroy(this);
        }
    }

    // 0x1007f6f90
    void ParticleSystem_DE::Render(RT7Core& rt7Core, const render::DrawCallState& drawCallState,
                                   const SceneViewData& sceneViewData, RenderPassType renderPassType,
                                   EffectManager& effectManager) {
        auto particleSystem_DE = rt7Core.GetParticleRenderer();
        auto drawCallState_00 = rt7Core.GetRenderContext();
        ParticleSystemRenderer::AddDrawableToBatch(*particleSystem_DE, *this, *drawCallState_00, drawCallState,
                                                   (RenderPassType)sceneViewData,
                                                   *((EffectManager*)(unsigned long)renderPassType));
    }

    // 0x1007f6ff0
    void ParticleSystem_DE::GetRenderer(RT7Core& rt7Core) {
        rt7Core.GetParticleRenderer();
    }

    // 0x1007f7000
    ParticleSystem_DE::~ParticleSystem_DE() {
        field_104->~shared_ptr();
        destruct<oldscape::highlight::NpcUID*>();
    }

    // 0x100850d20
    ParticleSystem_DE::ParticleSystem_DE(ModularParticleSystemDrawable& modularParticleSystemDrawable,
                                         const math::OBB& obb, float arg3, unsigned int arg4, bool arg5, bool arg6)
        : DrawableElementPool<ParticleSystem_DE>(obb, arg4, arg3), field_120(modularParticleSystemDrawable),
          field_128(arg5), field_129(arg6) {}

} // namespace jag::graphics
