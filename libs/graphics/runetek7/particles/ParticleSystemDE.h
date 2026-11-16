// libs/graphics/runetek7/particles/ParticleSystemDE.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class ParticleSystem_DE {
    public:
        // virtual methods in vtable order
        virtual ~ParticleSystem_DE();
        virtual void Render(RT7Core&, render::DrawCallState const&, SceneViewData const&, RenderPassType,
                            EffectManager&);
        virtual void GetRenderer(RT7Core&);
        ParticleSystem_DE(shared_ptr<ParticleSystem> const&, math::OBB const&, float, unsigned int, bool);
        ParticleSystem_DE(ModularParticleSystemDrawable&, math::OBB const&, float, unsigned int, bool, bool);

        // data members, from how the methods use this: 144 bytes
        undefined* field_0; // offset 0, vtable pointer
        char _unknown_8[96];
        shared_ptr field_104;                     // offset 104
        ModularParticleSystemDrawable* field_120; // offset 120
        bool field_128;                           // offset 128
        bool field_129;                           // offset 129
        char _unknown_130[14];
    };

    // 0x1007f6e00, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // ParticleSystem_DE::ParticleSystem_DE(shared_ptr<ParticleSystem> const&, math::OBB const&, float, unsigned int, bool): jumps straight to the base-object constructor

    // 0x1007f6e70, 112 bytes, base-object constructor, inline, placed by class name and debug map
    // ParticleSystem_DE::ParticleSystem_DE(shared_ptr<ParticleSystem> const&, math::OBB const&, float, unsigned int, bool)
    void ParticleSystem_DE::ParticleSystem_DE(shared_ptr* param_1, OBB* param_2, float param_3, uint param_4,
                                              bool param_5) {
        new (this) DrawableElementPool<ParticleSystem_DE>(param_2, param_4, param_3);
        field_0 = PTR_vtable_100ee87c0 + 16;
        new (field_104, param_1) shared_ptr<oldscape::dash3d::Decor>();
        field_120 = (ModularParticleSystemDrawable*)0;
        field_128 = false;
        field_129 = param_5;
    }

    // 0x1007f6ee0, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // DrawableElementPool<ParticleSystem_DE>::DrawableElementPool(math::OBB const&, unsigned int, float)
    void DrawableElementPool<ParticleSystem_DE>::DrawableElementPool(OBB* param_1, uint param_2, float param_3) {
        new (this) DrawableElement(param_1, param_2, param_3);
        *(undefined**)this = PTR_vtable_100ee87f8 + 16;
    }

    // 0x1007f6f10, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // ParticleSystem_DE::~ParticleSystem_DE(): jumps straight to the base-object destructor

    // 0x1007f6f20, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // ParticleSystem_DE::~ParticleSystem_DE()
    void ParticleSystem_DE::~ParticleSystem_DE() {
        ~ParticleSystem_DE(this);
        operator_delete(this);
    }

    // 0x1007f6f40, 80 bytes, inline, placed by debug map only (low confidence)
    // DrawableElementPool<ParticleSystem_DE>::Release()
    void DrawableElementPool<ParticleSystem_DE>::Release() {
        char cVar1;

        GetDrawableElementPool();
        cVar1 = (&GetDrawableElementPool()::pool)->is_owner(this);
        if (cVar1 == '\0') {
            if (this != (DrawableElementPool<ParticleSystem_DE>*)0) {
                (**(code**)(*(long*)this + 8))(this);
            }
        } else {
            (&GetDrawableElementPool()::pool)->Destroy(this);
        }
    }

    // 0x1007f6f90, 96 bytes, inline, placed by class name and debug map
    // ParticleSystem_DE::Render(RT7Core&, render::DrawCallState const&, SceneViewData const&, RenderPassType, EffectManager&)
    void ParticleSystem_DE::Render(RT7Core* param_1, undefined8 param_2, undefined8 param_3, undefined4 param_5,
                                   undefined8 param_6) {
        ParticleSystemRenderer* pPVar1;
        undefined8 uVar2;

        pPVar1 = (ParticleSystemRenderer*)param_1->GetParticleRenderer();
        uVar2 = param_1->GetRenderContext();
        pPVar1->AddDrawableToBatch(this, uVar2, param_2, param_3, param_5, param_6);
    }

    // 0x1007f6ff0, 16 bytes, inline, placed by class name and debug map
    // ParticleSystem_DE::GetRenderer(RT7Core&)
    void ParticleSystem_DE::GetRenderer(RT7Core* param_1) {
        param_1->GetParticleRenderer();
    }

    // 0x1007f7000, 48 bytes, base-object destructor, inline, placed by class name and debug map
    // ParticleSystem_DE::~ParticleSystem_DE()
    void ParticleSystem_DE::~ParticleSystem_DE() {
        NpcUID* extraout_RDX;
        NpcUID* in_RSI;

        field_0 = PTR_vtable_100ee87c0 + 16;
        field_104->~shared_ptr();
        eastl::destruct<oldscape::highlight::NpcUID*>((eastl*)this, in_RSI, extraout_RDX);
    }

    // 0x100850d10, 16 bytes, complete-object constructor, inline, placed by class name
    // ParticleSystem_DE::ParticleSystem_DE(ModularParticleSystemDrawable&, math::OBB const&, float, unsigned int, bool, bool): jumps straight to the base-object constructor

    // 0x100850d20, 112 bytes, base-object constructor, inline, placed by class name
    // ParticleSystem_DE::ParticleSystem_DE(ModularParticleSystemDrawable&, math::OBB const&, float, unsigned int, bool, bool)
    void ParticleSystem_DE::ParticleSystem_DE(ModularParticleSystemDrawable* param_1, OBB* param_2, float param_3,
                                              uint param_4, bool param_5, bool param_6) {
        new (this) DrawableElementPool<ParticleSystem_DE>(param_2, param_4, param_3);
        field_0 = PTR_vtable_100ee87c0 + 16;
        new (field_104, (_func_decltype_nullptr*)0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        field_120 = param_1;
        field_128 = param_5;
        field_129 = param_6;
    }

} // namespace jag::graphics

namespace jag {
    // 0x1007f7520, 32 bytes, inline, placed by debug map only (low confidence)
    // graphics::ParticleSystem* placement_new<graphics::ParticleSystem, graphics::ParticleManager*>(void*, graphics::ParticleManager*&&)
    ParticleSystem* placement_new<graphics::ParticleSystem, graphics::ParticleManager*>(void* param_1,
                                                                                        ParticleManager** param_2) {
        graphics::ParticleSystem::ParticleSystem(param_1, *param_2);
        return param_1;
    }

    // 0x1007f7540, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::ParticleSystem, MakeSharedPool<graphics::ParticleSystem, 32> >* placement_new<MakeSharedPoolRefCounter<graphics::ParticleSystem, MakeSharedPool<graphics::ParticleSystem, 32> >, MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData*&, graphics::ParticleSystem*>(void*, MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData*&, graphics::ParticleSystem*&&)
    MakeSharedPoolRefCounter*
    jag::placement_new<MakeSharedPoolRefCounter<graphics::ParticleSystem, MakeSharedPool<graphics::ParticleSystem, 32>>,
                       MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData*&, graphics::ParticleSystem*>(
        void* param_1, RefCounterAndData** param_2, ParticleSystem** param_3) {
        MakeSharedPoolRefCounter<graphics::ParticleSystem,
                                 MakeSharedPool<graphics::ParticleSystem, 32>>::MakeSharedPoolRefCounter(param_1,
                                                                                                         *param_2,
                                                                                                         *param_3);
        return param_1;
    }

    // 0x1007f7560, 144 bytes, inline, placed by debug map only (low confidence)
    // void shared_ptr_do_enable_shared_from_this<graphics::ParticleSystem>(ref_counter_base*, graphics::ParticleSystem*, graphics::ParticleSystem::enable_shared_type*)
    void shared_ptr_do_enable_shared_from_this<graphics::ParticleSystem>(ref_counter_base* param_1,
                                                                         ParticleSystem* param_2,
                                                                         enable_shared_type* param_3) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48[16];
        weak_ptr<oldscape::dash3d::Decor> local_38[24];

        if (param_1 != (ref_counter_base*)0) {
            param_1->IncRef();
            eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>::hashtable_iterator(
                local_48, (hash_node*)param_1, (hash_node**)param_2);
            weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_38, (weak_ptr*)local_48);
            (&param_2->field_16, (weak_ptr*)local_38)->__internal_set_weak_ptr();
            local_38->~weak_ptr();
            local_48->~shared_ptr();
        }
    }

    // 0x1007f7650, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::ParticleSystem, MakeSharedPool<graphics::ParticleSystem, 32> >::MakeSharedPoolRefCounter(void*, graphics::ParticleSystem*): jumps straight to the base-object constructor

    // 0x1007f7660, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::ParticleSystem, MakeSharedPool<graphics::ParticleSystem, 32> >::MakeSharedPoolRefCounter(void*, graphics::ParticleSystem*)
    void jag::MakeSharedPoolRefCounter<graphics::ParticleSystem, MakeSharedPool<graphics::ParticleSystem, 32>>::
        MakeSharedPoolRefCounter(
            MakeSharedPoolRefCounter<graphics::ParticleSystem, MakeSharedPool<graphics::ParticleSystem, 32>>* this,
            void* param_1, ParticleSystem* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7bc8 + 16;
        *(void**)(this + 16) = param_1;
        *(ParticleSystem**)(this + 24) = param_2;
    }

    // 0x1007f76a0, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::ParticleSystem, MakeSharedPool<graphics::ParticleSystem, 32> >::DeleteSelf()
    void
    jag::MakeSharedPoolRefCounter<graphics::ParticleSystem, MakeSharedPool<graphics::ParticleSystem, 32>>::DeleteSelf(
        MakeSharedPoolRefCounter<graphics::ParticleSystem, MakeSharedPool<graphics::ParticleSystem, 32>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<graphics::ParticleSystem, 32>::deallocate(pvVar1);
    }

    // 0x1007f8090, 32 bytes, inline, placed by debug map only (low confidence)
    // SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_10>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()> >::allocate(unsigned long, std::__packaged_task_func<std::__bind<graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_10>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*)
    /* SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE
   const&, render::RenderContext&, render::DrawCallState const&,
   graphics::SceneViewData const&, graphics::RenderPassType,
   graphics::EffectManager&)::$_10>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >,
   void ()> >::allocate(unsigned long,
   std::__packaged_task_func<std::__bind<graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE
   const&, render::RenderContext&, render::DrawCallState const&,
   graphics::SceneViewData const&, graphics::RenderPassType,
   graphics::EffectManager&)::$_10>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >,
   void ()>*) */

    void jag::SafeBucketAllocatorSTL<std::__packaged_task_func<
        std::__bind<graphics::ParticleSystemRenderer::AddDrawableToBatch(
            graphics::ParticleSystem_DE_const&, render::RenderContext&, render::DrawCallState_const&,
            graphics::SceneViewData_const&, graphics::RenderPassType, graphics::EffectManager&)::$_10>,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::allocate(ulong param_1,
                                                                               __packaged_task_func* param_2) {
        BucketManager::Allocate(112, 4, 16);
    }

    // 0x1007f8370, 16 bytes, inline, placed by debug map only (low confidence)
    // SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_10>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()> >::deallocate(std::__packaged_task_func<std::__bind<graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_10>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*, unsigned long)
    /* SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE
   const&, render::RenderContext&, render::DrawCallState const&,
   graphics::SceneViewData const&, graphics::RenderPassType,
   graphics::EffectManager&)::$_10>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >,
   void ()>
   >::deallocate(std::__packaged_task_func<std::__bind<graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE
   const&, render::RenderContext&, render::DrawCallState const&,
   graphics::SceneViewData const&, graphics::RenderPassType,
   graphics::EffectManager&)::$_10>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >,
   void ()>*, unsigned long) */

    void jag::SafeBucketAllocatorSTL<std::__packaged_task_func<
        std::__bind<graphics::ParticleSystemRenderer::AddDrawableToBatch(
            graphics::ParticleSystem_DE_const&, render::RenderContext&, render::DrawCallState_const&,
            graphics::SceneViewData_const&, graphics::RenderPassType, graphics::EffectManager&)::$_10>,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::deallocate(__packaged_task_func* param_1,
                                                                                 ulong param_2) {
        BucketManager::DeAllocate(param_1, param_2 * 112);
    }

    // 0x1007f9380, 32 bytes, inline, placed by debug map only (low confidence)
    // SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_12>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()> >::allocate(unsigned long, std::__packaged_task_func<std::__bind<graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_12>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*)
    /* SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE
   const&, render::RenderContext&, render::DrawCallState const&,
   graphics::SceneViewData const&, graphics::RenderPassType,
   graphics::EffectManager&)::$_12>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >,
   void ()> >::allocate(unsigned long,
   std::__packaged_task_func<std::__bind<graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE
   const&, render::RenderContext&, render::DrawCallState const&,
   graphics::SceneViewData const&, graphics::RenderPassType,
   graphics::EffectManager&)::$_12>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >,
   void ()>*) */

    void jag::SafeBucketAllocatorSTL<std::__packaged_task_func<
        std::__bind<graphics::ParticleSystemRenderer::AddDrawableToBatch(
            graphics::ParticleSystem_DE_const&, render::RenderContext&, render::DrawCallState_const&,
            graphics::SceneViewData_const&, graphics::RenderPassType, graphics::EffectManager&)::$_12>,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::allocate(ulong param_1,
                                                                               __packaged_task_func* param_2) {
        BucketManager::Allocate(112, 4, 16);
    }

    // 0x1007f9720, 16 bytes, inline, placed by debug map only (low confidence)
    // SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_12>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()> >::deallocate(std::__packaged_task_func<std::__bind<graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_12>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*, unsigned long)
    /* SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE
   const&, render::RenderContext&, render::DrawCallState const&,
   graphics::SceneViewData const&, graphics::RenderPassType,
   graphics::EffectManager&)::$_12>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >,
   void ()>
   >::deallocate(std::__packaged_task_func<std::__bind<graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE
   const&, render::RenderContext&, render::DrawCallState const&,
   graphics::SceneViewData const&, graphics::RenderPassType,
   graphics::EffectManager&)::$_12>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >,
   void ()>*, unsigned long) */

    void jag::SafeBucketAllocatorSTL<std::__packaged_task_func<
        std::__bind<graphics::ParticleSystemRenderer::AddDrawableToBatch(
            graphics::ParticleSystem_DE_const&, render::RenderContext&, render::DrawCallState_const&,
            graphics::SceneViewData_const&, graphics::RenderPassType, graphics::EffectManager&)::$_12>,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::deallocate(__packaged_task_func* param_1,
                                                                                 ulong param_2) {
        BucketManager::DeAllocate(param_1, param_2 * 112);
    }

} // namespace jag
