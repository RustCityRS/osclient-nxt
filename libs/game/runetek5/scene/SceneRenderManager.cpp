// libs/game/runetek5/scene/SceneRenderManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "SceneRenderManager.h"

namespace jag::game {
    // 0x100f39378, 4 bytes, __data
    SceneRenderManager::m_skipObliqueReflectionFrustum = 1;

    // 0x100f3937c, 4 bytes, __data
    float SceneRenderManager::m_stencilTransparencyNearClipRange = 50.0f;

    // 0x100f39380, 4 bytes, __data
    float SceneRenderManager::m_stencilTransparencyFarClipThreshold = 1750.0f;

    // 0x100f39384, 4 bytes, __data
    float SceneRenderManager::m_stencilTransparencyFarClipRange = 1250.0f;

    // 0x1039b4ed8, 1 bytes, __common; zero-initialised
    SceneRenderManager::m_showCameraFrustum;

    // 0x1039b4ed9, 1 bytes, __common; zero-initialised
    SceneRenderManager::m_debugRender;

    // 0x1039b4eda, 1 bytes, __common; zero-initialised
    SceneRenderManager::m_freezeCulling;

    // 0x1039b4edb, 1 bytes, __common; zero-initialised
    SceneRenderManager::m_enableZPrePass;

    // 0x1039b4edc, 4 bytes, __common; zero-initialised
    SceneRenderManager::m_enableDeferredShadows;

    // 0x1039b4ee0, 4 bytes, __common; zero-initialised
    SceneRenderManager::m_stencilTransparencyNearClipThreshold;

    // 0x100463920, 544 bytes, base-object constructor, placed by class name and debug map
    // SceneRenderManager::SceneRenderManager(graphics::RT7Core*, unsigned long, unsigned long)
    void SceneRenderManager::SceneRenderManager(RT7Core* param_1, ulong param_2, ulong param_3) {
        allocator local_370[8];
        allocator local_368[8];
        RenderPassDrawableGroupsConfig local_358;
        RenderPassDrawableGroupsConfig local_340;
        RenderPassDrawableGroupsConfig local_328;
        RenderPassDrawableGroupsConfig local_310;
        RenderPassDrawableGroupsConfig local_2f8;
        fixed_vector local_2e0[280];
        RenderPassDrawableGroupsConfig local_1c8;
        RenderPassDrawableGroupsConfig local_1b0;
        RenderPassDrawableGroupsConfig local_198;
        RenderPassDrawableGroupsConfig local_180;
        RenderPassDrawableGroupsConfig local_168;
        fixed_vector local_150[280];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new (&local_1c8) graphics::DrawableQueue::RenderPassDrawableGroupsConfig(3, 1024, 0);
        new (&local_1b0) graphics::DrawableQueue::RenderPassDrawableGroupsConfig(9, 256, 0);
        new (&local_198) graphics::DrawableQueue::RenderPassDrawableGroupsConfig(4, 1024, 2);
        new (&local_180) graphics::DrawableQueue::RenderPassDrawableGroupsConfig(5, 384, 2);
        new (&local_168) graphics::DrawableQueue::RenderPassDrawableGroupsConfig(8, 256, 5);
        eastl::allocator::allocator(local_370, "EASTL fixed_vector");
        eastl::fixed_vector<graphics::DrawableQueue::RenderPassDrawableGroupsConfig, 10ul, true,
                            eastl::allocator>::fixed_vector(local_150, &local_1c8, 5, local_370);
        new (&local_358) graphics::DrawableQueue::RenderPassDrawableGroupsConfig(1, 256, 0);
        new (&local_340) graphics::DrawableQueue::RenderPassDrawableGroupsConfig(0, 768, 0);
        new (&local_328) graphics::DrawableQueue::RenderPassDrawableGroupsConfig(2, 768, 2);
        new (&local_310) graphics::DrawableQueue::RenderPassDrawableGroupsConfig(6, 256, 2);
        new (&local_2f8) graphics::DrawableQueue::RenderPassDrawableGroupsConfig(7, 16, 2);
        eastl::allocator::allocator(local_368, "EASTL fixed_vector");
        eastl::fixed_vector<graphics::DrawableQueue::RenderPassDrawableGroupsConfig, 10ul, true,
                            eastl::allocator>::fixed_vector(local_2e0, &local_358, 5, local_368);
        SceneRenderManager(this, param_1, param_2, param_3, local_150, local_2e0);
        local_2e0->~fixed_vector();
        local_150->~fixed_vector();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100463b40, 1200 bytes, base-object constructor, placed by class name and debug map
    // SceneRenderManager::SceneRenderManager(graphics::RT7Core*, unsigned long, unsigned long, eastl::fixed_vector<graphics::DrawableQueue::RenderPassDrawableGroupsConfig, 10ul, true, eastl::allocator> const&, eastl::fixed_vector<graphics::DrawableQueue::RenderPassDrawableGroupsConfig, 10ul, true, eastl::allocator> const&)
    void SceneRenderManager::SceneRenderManager(RT7Core* param_1, ulong param_2, ulong param_3, fixed_vector* param_4,
                                                fixed_vector* param_5) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        undefined* puVar8;
        __ph* p_Var9;
        undefined4 in_stack_ffffffffffffff28;
        undefined4 in_stack_ffffffffffffff2c;
        undefined4 in_stack_ffffffffffffff30;
        undefined4 in_stack_ffffffffffffff34;
        undefined4 local_c0;
        undefined4 uStack_bc;
        undefined4 uStack_b8;
        undefined4 uStack_b4;
        undefined4 local_a8;
        undefined4 uStack_a4;
        undefined4 uStack_a0;
        undefined4 uStack_9c;
        undefined1 local_90[24];
        undefined1* local_70;
        undefined1* local_68;
        undefined1* local_60;
        __ph* local_58;
        fixed_vector* local_50;
        SunShadowPassVisTestFunctor* local_48;
        undefined8 local_40;
        undefined1* local_38;

        field_0 = &PTR__SceneRenderManager_100f00bf0;
        field_8 = param_1;
        local_58 = (__ph*)param_3;
        local_50 = param_5;
        new (&local_48) eastl::allocator("EASTL vector");
        local_70 = &field_16;
        new (&field_16, param_2, (allocator*)&local_48)
            eastl::vector<std::pair<graphics::GraphEntity*, graphics::GraphEntityTransformData>, eastl::allocator>();
        new (&local_48) eastl::allocator("EASTL vector");
        local_68 = &field_48;
        new (local_68)
            eastl::vector<std::pair<graphics::GraphEntity*, graphics::GraphEntityTransformData>, eastl::allocator>(
                param_2, (allocator*)&local_48);
        p_Var9 = local_58;
        new (&field_80, param_1, local_50, param_2, (ulong)local_58) SceneGraphRenderer();
        local_50 = (fixed_vector*)&field_6408;
        local_60 = &field_80;
        new (local_50) SceneGraphRenderer(param_1, param_4, param_2, (ulong)p_Var9);
        new (field_12736) graphics::PointLightShadowPassVisTestFunctor();
        local_48 = (SunShadowPassVisTestFunctor*)graphics::PointLightShadowPassVisTestFunctor::operator();
        local_40 = 0;
        local_38 = field_12736;
        std::bind<bool (graphics::PointLightShadowPassVisTestFunctor::*)(std::array<math::IntersectionType, 10ul>&,
                                                                         math::Frustum&, math::Frustum_const&, int,
                                                                         math::AABB_const&, math::OBB_const&) const,
                  graphics::PointLightShadowPassVisTestFunctor*, std::placeholders::__ph<1> const&,
                  std::placeholders::__ph<2> const&, std::placeholders::__ph<3> const&,
                  std::placeholders::__ph<4> const&, std::placeholders::__ph<5> const&,
                  std::placeholders::__ph<6> const&>(
            (_func_bool_array_ptr_Frustum_ptr_Frustum_ptr_int_AABB_ptr_OBB_ptr*)&local_c0,
            (PointLightShadowPassVisTestFunctor**)&local_48, (__ph*)&local_38, (__ph*)param_2, p_Var9, (__ph*)param_5,
            (__ph*)CONCAT44(in_stack_ffffffffffffff2c, in_stack_ffffffffffffff28),
            (__ph*)CONCAT44(in_stack_ffffffffffffff34, in_stack_ffffffffffffff30));
        std::function<bool(std::array<math::IntersectionType, 10ul>&, math::Frustum&, math::Frustum_const&, int,
                           math::AABB_const&, math::OBB_const&)>::
            function<std::__bind<bool (graphics::PointLightShadowPassVisTestFunctor::*)(
                                     std::array<math::IntersectionType, 10ul>&, math::Frustum&, math::Frustum_const&,
                                     int, math::AABB_const&, math::OBB_const&) const,
                                 graphics::PointLightShadowPassVisTestFunctor*, std::placeholders::__ph<1> const&,
                                 std::placeholders::__ph<2> const&, std::placeholders::__ph<3> const&,
                                 std::placeholders::__ph<4> const&, std::placeholders::__ph<5> const&,
                                 std::placeholders::__ph<6> const&>,
                     void>(field_12736 + 32);
        local_58 = (__ph*)(field_12736 + 32);
        new (field_12816) graphics::SunShadowPassVisTestFunctor();
        local_48 = (SunShadowPassVisTestFunctor*)graphics::SunShadowPassVisTestFunctor::operator();
        local_40 = 0;
        local_38 = field_12816;
        std::bind<bool (graphics::SunShadowPassVisTestFunctor::*)(std::array<math::IntersectionType, 10ul>&,
                                                                  math::Frustum&, math::Frustum_const&, int,
                                                                  math::AABB_const&, math::OBB_const&) const,
                  graphics::SunShadowPassVisTestFunctor*, std::placeholders::__ph<1> const&,
                  std::placeholders::__ph<2> const&, std::placeholders::__ph<3> const&,
                  std::placeholders::__ph<4> const&, std::placeholders::__ph<5> const&,
                  std::placeholders::__ph<6> const&>(
            (_func_bool_array_ptr_Frustum_ptr_Frustum_ptr_int_AABB_ptr_OBB_ptr*)&local_a8, &local_48, (__ph*)&local_38,
            (__ph*)param_2, p_Var9, (__ph*)param_5, (__ph*)CONCAT44(uStack_bc, local_c0),
            (__ph*)CONCAT44(uStack_b4, uStack_b8));
        std::function<bool(std::array<math::IntersectionType, 10ul>&, math::Frustum&, math::Frustum_const&, int,
                           math::AABB_const&, math::OBB_const&)>::
            function<std::__bind<bool (graphics::SunShadowPassVisTestFunctor::*)(
                                     std::array<math::IntersectionType, 10ul>&, math::Frustum&, math::Frustum_const&,
                                     int, math::AABB_const&, math::OBB_const&) const,
                                 graphics::SunShadowPassVisTestFunctor*, std::placeholders::__ph<1> const&,
                                 std::placeholders::__ph<2> const&, std::placeholders::__ph<3> const&,
                                 std::placeholders::__ph<4> const&, std::placeholders::__ph<5> const&,
                                 std::placeholders::__ph<6> const&>,
                     void>(&field_13008);
        local_48 = (SunShadowPassVisTestFunctor*)PTR_operator___100ee6e70;
        local_40 = 0;
        local_38 = &field_13056;
        std::bind<bool (graphics::DefaultVisTestFunctor::*)(std::array<math::IntersectionType, 10ul>&,
                                                            math::Frustum_const&, math::Frustum_const&, int,
                                                            math::AABB_const&, math::OBB_const&) const,
                  graphics::DefaultVisTestFunctor*, std::placeholders::__ph<1> const&,
                  std::placeholders::__ph<2> const&, std::placeholders::__ph<3> const&,
                  std::placeholders::__ph<4> const&, std::placeholders::__ph<5> const&,
                  std::placeholders::__ph<6> const&>(
            (_func_bool_array_ptr_Frustum_ptr_Frustum_ptr_int_AABB_ptr_OBB_ptr*)local_90,
            (DefaultVisTestFunctor**)&local_48, (__ph*)&local_38, (__ph*)param_2, p_Var9, (__ph*)param_5,
            (__ph*)CONCAT44(uStack_a4, local_a8), (__ph*)CONCAT44(uStack_9c, uStack_a0));
        std::function<bool(std::array<math::IntersectionType, 10ul>&, math::Frustum&, math::Frustum_const&, int,
                           math::AABB_const&, math::OBB_const&)>::
            function<std::__bind<bool (graphics::DefaultVisTestFunctor::*)(
                                     std::array<math::IntersectionType, 10ul>&, math::Frustum_const&,
                                     math::Frustum_const&, int, math::AABB_const&, math::OBB_const&) const,
                                 graphics::DefaultVisTestFunctor*, std::placeholders::__ph<1> const&,
                                 std::placeholders::__ph<2> const&, std::placeholders::__ph<3> const&,
                                 std::placeholders::__ph<4> const&, std::placeholders::__ph<5> const&,
                                 std::placeholders::__ph<6> const&>,
                     void>(&field_13072);
        new (&field_13120) eastl::vector<VisibleShadowCastingLightInfo, eastl::allocator>();
        new (&field_13152) eastl::vector_set<LightSource*, eastl::less<LightSource*>, eastl::allocator,
                                             eastl::vector<LightSource*, eastl::allocator>>();
        new (&field_13192) math::Vector3T<int>();
        new (&field_13204) math::Vector3T<int>();
        field_13216 = 0;
        field_13224 = 0;
        field_13232 = false;
        new (&field_13236, 0.6, 0.1, 0.3) LightShadowImportanceKeyGenerator();
        new (field_13248, 0.0, 0.0, 0.0) math::ColourHSL();
        field_13248[12] = 1;
        field_13264 = 0;
        new (&field_13268) math::Vector3T<int>();
        new (&field_13280) math::Vector3T<int>();
        new (&field_13292) math::Vector3T<int>();
        new (&field_13312) math::Matrix44T<float>();
        new (&field_13376) math::Matrix44T<float>();
        new (field_13440) ViewTransforms();
        new (&field_13648) math::Matrix44T<float>();
        new (field_13712) ViewTransforms();
        new (field_13920) math::Frustum();
        new (field_14080) math::Frustum();
        new (&field_14240) math::PlaneT<float>();
        new (&field_14256) math::PlaneT<float>();
        puVar8 = PTR_IDENTITY_100ee6730;
        uVar1 = *(undefined8*)PTR_IDENTITY_100ee6730;
        uVar2 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 8);
        uVar3 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 16);
        uVar4 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 24);
        uVar5 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 32);
        uVar6 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 40);
        uVar7 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 56);
        field_14320 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 48);
        field_14328 = uVar7;
        field_14304 = uVar5;
        field_14312 = uVar6;
        field_14288 = uVar3;
        field_14296 = uVar4;
        field_14272 = uVar1;
        field_14280 = uVar2;
        uVar1 = *(undefined8*)puVar8;
        uVar2 = *(undefined8*)(puVar8 + 8);
        uVar3 = *(undefined8*)(puVar8 + 16);
        uVar4 = *(undefined8*)(puVar8 + 24);
        uVar5 = *(undefined8*)(puVar8 + 32);
        uVar6 = *(undefined8*)(puVar8 + 40);
        uVar7 = *(undefined8*)(puVar8 + 56);
        field_14384 = *(undefined8*)(puVar8 + 48);
        field_14392 = uVar7;
        field_14368 = uVar5;
        field_14376 = uVar6;
        field_14352 = uVar3;
        field_14360 = uVar4;
        field_14336 = uVar1;
        field_14344 = uVar2;
        uVar1 = *(undefined8*)(puVar8 + 8);
        uVar2 = *(undefined8*)(puVar8 + 16);
        uVar3 = *(undefined8*)(puVar8 + 24);
        uVar4 = *(undefined8*)(puVar8 + 32);
        uVar5 = *(undefined8*)(puVar8 + 40);
        uVar6 = *(undefined8*)(puVar8 + 48);
        uVar7 = *(undefined8*)(puVar8 + 56);
        field_14400 = *(undefined8*)puVar8;
        field_14408 = uVar1;
        field_14416 = uVar2;
        field_14424 = uVar3;
        field_14432 = uVar4;
        field_14440 = uVar5;
        field_14448 = uVar6;
        field_14456 = uVar7;
        uVar1 = *(undefined8*)puVar8;
        uVar2 = *(undefined8*)(puVar8 + 8);
        uVar3 = *(undefined8*)(puVar8 + 24);
        uVar4 = *(undefined8*)(puVar8 + 32);
        uVar5 = *(undefined8*)(puVar8 + 40);
        uVar6 = *(undefined8*)(puVar8 + 48);
        uVar7 = *(undefined8*)(puVar8 + 56);
        field_14480 = *(undefined8*)(puVar8 + 16);
        field_14488 = uVar3;
        field_14496 = uVar4;
        field_14504 = uVar5;
        field_14512 = uVar6;
        field_14520 = uVar7;
        field_14464 = uVar1;
        field_14472 = uVar2;
        new (m_prevViewTransforms) ViewTransforms();
        new (m_prevViewFrustum) math::Frustum();
        new (&field_14896) math::Matrix44T<float>();
        new (field_14960) math::Frustum();
        (&field_13120, 4)->reserve();
        (&field_13152, 4)->reserve();
    }

    // 0x100463ff0, 544 bytes, complete-object constructor, placed by class name and debug map
    // SceneRenderManager::SceneRenderManager(graphics::RT7Core*, unsigned long, unsigned long)
    void SceneRenderManager::SceneRenderManager(RT7Core* param_1, ulong param_2, ulong param_3) {
        allocator local_370[8];
        allocator local_368[8];
        RenderPassDrawableGroupsConfig local_358;
        RenderPassDrawableGroupsConfig local_340;
        RenderPassDrawableGroupsConfig local_328;
        RenderPassDrawableGroupsConfig local_310;
        RenderPassDrawableGroupsConfig local_2f8;
        fixed_vector local_2e0[280];
        RenderPassDrawableGroupsConfig local_1c8;
        RenderPassDrawableGroupsConfig local_1b0;
        RenderPassDrawableGroupsConfig local_198;
        RenderPassDrawableGroupsConfig local_180;
        RenderPassDrawableGroupsConfig local_168;
        fixed_vector local_150[280];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new (&local_1c8) graphics::DrawableQueue::RenderPassDrawableGroupsConfig(3, 1024, 0);
        new (&local_1b0) graphics::DrawableQueue::RenderPassDrawableGroupsConfig(9, 256, 0);
        new (&local_198) graphics::DrawableQueue::RenderPassDrawableGroupsConfig(4, 1024, 2);
        new (&local_180) graphics::DrawableQueue::RenderPassDrawableGroupsConfig(5, 384, 2);
        new (&local_168) graphics::DrawableQueue::RenderPassDrawableGroupsConfig(8, 256, 5);
        eastl::allocator::allocator(local_370, "EASTL fixed_vector");
        eastl::fixed_vector<graphics::DrawableQueue::RenderPassDrawableGroupsConfig, 10ul, true,
                            eastl::allocator>::fixed_vector(local_150, &local_1c8, 5, local_370);
        new (&local_358) graphics::DrawableQueue::RenderPassDrawableGroupsConfig(1, 256, 0);
        new (&local_340) graphics::DrawableQueue::RenderPassDrawableGroupsConfig(0, 768, 0);
        new (&local_328) graphics::DrawableQueue::RenderPassDrawableGroupsConfig(2, 768, 2);
        new (&local_310) graphics::DrawableQueue::RenderPassDrawableGroupsConfig(6, 256, 2);
        new (&local_2f8) graphics::DrawableQueue::RenderPassDrawableGroupsConfig(7, 16, 2);
        eastl::allocator::allocator(local_368, "EASTL fixed_vector");
        eastl::fixed_vector<graphics::DrawableQueue::RenderPassDrawableGroupsConfig, 10ul, true,
                            eastl::allocator>::fixed_vector(local_2e0, &local_358, 5, local_368);
        SceneRenderManager(this, param_1, param_2, param_3, local_150, local_2e0);
        local_2e0->~fixed_vector();
        local_150->~fixed_vector();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100464210, 16 bytes, complete-object constructor, placed by class name and debug map
    // SceneRenderManager::SceneRenderManager(graphics::RT7Core*, unsigned long, unsigned long, eastl::fixed_vector<graphics::DrawableQueue::RenderPassDrawableGroupsConfig, 10ul, true, eastl::allocator> const&, eastl::fixed_vector<graphics::DrawableQueue::RenderPassDrawableGroupsConfig, 10ul, true, eastl::allocator> const&): jumps straight to the base-object constructor

    // 0x100464320, 128 bytes, base-object destructor, placed by class name and debug map
    // SceneRenderManager::~SceneRenderManager()
    void SceneRenderManager::~SceneRenderManager() {
        field_0 = &PTR__SceneRenderManager_100f00bf0;
        (&field_13152)->~vector_set();
        (&field_13120)->~vector();
        std::function<bool(std::array<math::IntersectionType, 10ul>&, math::Frustum&, math::Frustum_const&, int,
                           math::AABB_const&, math::OBB_const&)>::
            ~function((function<bool(std::array<math::IntersectionType, 10ul>&, math::Frustum&, math::Frustum_const&,
                                     int, math::AABB_const&, math::OBB_const&)>*)&field_13072);
        std::function<bool(std::array<math::IntersectionType, 10ul>&, math::Frustum&, math::Frustum_const&, int,
                           math::AABB_const&, math::OBB_const&)>::
            ~function((function<bool(std::array<math::IntersectionType, 10ul>&, math::Frustum&, math::Frustum_const&,
                                     int, math::AABB_const&, math::OBB_const&)>*)&field_13008);
        std::function<bool(std::array<math::IntersectionType, 10ul>&, math::Frustum&, math::Frustum_const&, int,
                           math::AABB_const&, math::OBB_const&)>::
            ~function((function<bool(std::array<math::IntersectionType, 10ul>&, math::Frustum&, math::Frustum_const&,
                                     int, math::AABB_const&, math::OBB_const&)>*)(field_12736 + 32));
        (&field_6408)->~SceneGraphRenderer();
        (&field_80)->~SceneGraphRenderer();
        (&field_48)->~vector();
        (&field_16)->~vector();
    }

    // 0x1004643a0, 16 bytes, complete-object destructor, placed by class name and debug map
    // SceneRenderManager::~SceneRenderManager(): jumps straight to the base-object destructor

    // 0x1004643b0, 32 bytes, deleting destructor, placed by class name and debug map
    // SceneRenderManager::~SceneRenderManager()
    void SceneRenderManager::~SceneRenderManager() {
        ~SceneRenderManager(this);
        operator_delete(this);
    }

    // 0x1004643d0, 96 bytes, placed by class name and debug map
    // SceneRenderManager::Clear()
    void SceneRenderManager::Clear() {
        uint in_EAX;
        undefined8 uStack_18;

        uStack_18._0_4_ = in_EAX;
        graphics::Renderer::Clear();
        graphics::Renderer::Clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        uStack_18 = (ulong)(uint)uStack_18;
        (&field_13216, (uint*)((long)&uStack_18 + 4))->fill();
    }

    // 0x100464450, 288 bytes, placed by class name and debug map
    // SceneRenderManager::RenderView(render::RenderTargets*, shared_ptr<render::RenderTargets> const&, World&, unsigned int, int, graphics::EffectManager&, ViewTransforms const&, render::Viewport const&, unsigned int)
    void SceneRenderManager::RenderView(RenderTargets* param_1, shared_ptr* param_2, World* param_3, uint param_4,
                                        int param_5, EffectManager* param_6, ViewTransforms* param_7, Viewport* param_8,
                                        uint param_9) {
        int iVar1;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        SkyBox* pSVar2;
        Vector4T* pVVar3;

        if (RenderView(render::RenderTargets*, shared_ptr<render::RenderTargets> const&, World&, unsigned int, int,
                       graphics::EffectManager&, ViewTransforms_const&, render::Viewport_const&,
                       unsigned int)::nullRT == '\0') {
            iVar1 = ___cxa_guard_acquire(&RenderView(
                render::RenderTargets*, shared_ptr<render::RenderTargets> const&, World&, unsigned int, int,
                graphics::EffectManager&, ViewTransforms_const&, render::Viewport_const&, unsigned int)::nullRT);
            if (iVar1 != 0) {
                new (&RenderView(render::RenderTargets*, shared_ptr<render::RenderTargets> const&, World&, unsigned int,
                                 int, graphics::EffectManager&, ViewTransforms_const&, render::Viewport_const&,
                                 unsigned int)::nullRT)
                    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
                ___cxa_atexit(PTR__shared_ptr_100ee5318,
                              &RenderView(render::RenderTargets*, shared_ptr<render::RenderTargets> const&, World&,
                                          unsigned int, int, graphics::EffectManager&, ViewTransforms_const&,
                                          render::Viewport_const&, unsigned int)::nullRT,
                              4294967296);
                ___cxa_guard_release(&RenderView(render::RenderTargets*, shared_ptr<render::RenderTargets> const&,
                                                 World&, unsigned int, int, graphics::EffectManager&,
                                                 ViewTransforms_const&, render::Viewport_const&, unsigned int)::nullRT);
            }
        }
        this_00 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)param_3->GetSkyBox();
        pSVar2 = (SkyBox*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
        pVVar3 = (Vector4T*)param_3->GetClearColour();
        RenderViewImpl(this, param_1, param_2, param_3, param_4, param_5, param_6, pSVar2, (vector*)0, false, param_7,
                       param_8, pVVar3, 1, param_9);
    }

    // 0x100464570, 3248 bytes, placed by class name and debug map
    // SceneRenderManager::RenderViewImpl(render::RenderTargets*, shared_ptr<render::RenderTargets> const&, World*, unsigned int, int, graphics::EffectManager&, graphics::SkyBox const*, eastl::vector<shared_ptr<LightSource>, BucketAllocatorEASTL> const*, bool, ViewTransforms const&, render::Viewport const&, math::Vector4T<float> const&, unsigned int, unsigned int)
    void SceneRenderManager::RenderViewImpl(RenderTargets* param_1, shared_ptr* param_2, World* param_3, uint param_4,
                                            int param_5, EffectManager* param_6, SkyBox* param_7, vector* param_8,
                                            bool param_9, ViewTransforms* param_10, Viewport* param_11,
                                            Vector4T* param_12, uint param_13, uint param_14) {
        bool bVar1;
        bool bVar2;
        undefined1 uVar3;
        char cVar4;
        uint uVar5;
        shared_ptr* psVar6;
        RenderTargets* pRVar7;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        long lVar8;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* pvVar9;
        undefined8* puVar10;
        GraphRoot* pGVar11;
        SunlightDirectLighting* pSVar12;
        Viewport* pVVar13;
        uint* puVar14;
        GeometryPass* pGVar15;
        RenderPass* pRVar16;
        SceneRenderPass* pSVar17;
        Rect<float>* this_01;
        Texture* pTVar18;
        SSAOPass* pSVar19;
        ViewTransforms* pVVar20;
        Frustum* pFVar21;
        RT7Core* this_02;
        Matrix44T* pMVar22;
        byte bVar24;
        bool bVar23;
        uint extraout_EDX;
        int iVar25;
        EffectManager* pEVar26;
        SceneRenderManager* pSVar27;
        SceneViewData* pSVar28;
        undefined1* this_03;
        float fVar29;
        undefined4 uVar30;
        undefined4 uVar31;
        undefined1 auVar32[12];
        undefined8 local_3e8;
        undefined8 uStack_3e0;
        undefined1 local_3d0[32];
        vector* local_3b0;
        Callstack local_3a8;
        SceneRenderManager* local_390;
        GraphNode* local_388;
        uint local_380;
        bool local_37b;
        bool local_37a;
        bool local_379;
        RenderTargetData local_378;
        Viewport local_330[3];
        undefined1 local_2d8[432];
        vector<render::Viewport, eastl::fixed_vector_allocator<24ul, 2ul, 4ul, 0ul, true, eastl::allocator>>
            local_128[192];
        bool local_68;
        long local_38;

        local_388 = (GraphNode*)CONCAT44(local_388._4_4_, param_5);
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_390 = (SceneRenderManager*)param_2;
        local_380 = param_4;
        if (param_3 != (World*)0) {
            psVar6 = (shared_ptr*)param_3->GetCentreSquare();
            bVar2 = shared_ptr::operator_cast_to_bool(psVar6);
            if (!bVar2) {
                /* WARNING: Subroutine does not return */
                LogAssert("!world || world->GetCentreSquare()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                          "SceneRenderManager.cpp",
                          187, (char*)0);
            }
        }
        if (param_1 == (RenderTargets*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pDstRT != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "SceneRenderManager.cpp",
                      188, (char*)0);
        }
        local_37a = false;
        local_37b = false;
        pRVar7 = (RenderTargets*)local_390->end();
        SetupGeometryPass(this, &local_37a, &local_37b, param_1, pRVar7, param_6);
        new (local_2d8) graphics::SceneViewData();
        new (local_330) eastl::fixed_vector<render::Viewport, 2ul, true, eastl::allocator>();
        eastl::fixed_vector<render::Viewport, 2ul, true, eastl::allocator>::push_back(local_330);
        local_2d8->SetRenderTargetViewports(local_330);
        local_2d8->SetTransforms(param_10);
        local_3d0._24_8_ = param_1;
        local_2d8->SetOcclusionTestEnabled((param_14 & 1) == 0);
        local_2d8->SetMinOcclusionDrawableRadius(100.0);
        local_2d8->SetMinOcclusionDrawableAxisLength(200.0);
        local_2d8->SetStippleNearClipParams(m_stencilTransparencyNearClipThreshold, m_stencilTransparencyNearClipRange);
        local_2d8->SetStippleFarClipParams(m_stencilTransparencyFarClipThreshold, m_stencilTransparencyFarClipRange);
        pRVar7 = (RenderTargets*)local_3d0._24_8_;
        local_68 = param_9;
        local_2d8->SetRenderFlags(param_14);
        local_379 = local_37a;
        if (local_37a != false) {
            if (m_enableDeferredShadows == '\0') {
                bVar2 = false;
            } else {
                this_00 =
                    (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)field_8->GetShadowBufferRT();
                lVar8 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
                bVar2 = lVar8 != 0;
            }
            param_6->EnableEffect(28, bVar2);
        }
        pvVar9 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                     pRVar7->GetColourTargetTextures();
        puVar10 = (undefined8*)
            eastl::vector<render::Texture*,
                          eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar9,
                                                                                                                 0);
        lVar8 = (*puVar10)->second();
        param_6->EnableEffect(89, 1 < *(uint*)(lVar8 + 16));
        if (param_7 == (SkyBox*)0) {
            uVar3 = 0;
        } else {
            uVar3 = param_7->HasVisibleSkyTexture();
        }
        param_6->EnableEffect(85, uVar3);
        local_3b0 = (vector*)&field_16;
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        if (param_3 != (World*)0) {
            iVar25 = 1;
            if (local_388._0_4_ != -NAN) {
                iVar25 = (int)local_388._0_4_;
            }
            pGVar11 = (GraphRoot*)param_3->GetSceneGraphRoot();
            pFVar21 = (Frustum*)(local_2d8 + 208);
            if (m_freezeCulling != '\0') {
                pFVar21 = (Frustum*)field_14960;
            }
            pGVar11->VisibilityTest(local_3b0, local_380, pFVar21, iVar25, iVar25, (function*)&field_13072, (AABB*)0,
                                    (Frustum*)0);
        }
        cVar4 = param_6->IsEnabled(26);
        if (cVar4 != '\0') {
            if (param_3 == (World*)0) {
                if (param_8 != (vector*)0) {
                    GetVisiblePointLights(this, param_6, (SceneViewData*)local_2d8, param_8);
                }
            } else {
                GetVisiblePointLights(this, param_6, (SceneViewData*)local_2d8, param_3);
            }
        }
        cVar4 = param_6->IsEnabled(106);
        if (cVar4 != '\0') {
            pSVar12 = graphics::EffectManager::GetEffect<graphics::SunlightDirectLighting>(param_6);
            pVVar13 = (Viewport*)eastl::vector<
                render::Viewport,
                eastl::fixed_vector_allocator<24ul, 2ul, 4ul, 0ul, true, eastl::allocator>>::operator[](local_128, 0);
            pvVar9 =
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                    local_3d0._24_8_->GetColourTargetTextures();
            puVar10 = (undefined8*)
                eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                              eastl::allocator>>::operator[](pvVar9, 0);
            puVar14 = (uint*)(*puVar10)->second();
            uVar5 = *puVar14;
            pvVar9 =
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                    local_3d0._24_8_->GetColourTargetTextures();
            puVar10 = (undefined8*)
                eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                              eastl::allocator>>::operator[](pvVar9, 0);
            local_388 = (GraphNode*)CONCAT44(local_388._4_4_, (float)uVar5);
            lVar8 = (*puVar10)->second();
            new (&local_378) math::Point<float>(local_388._0_4_, (float)*(uint*)(lVar8 + 4));
            pSVar12->SetViewportLookupScale(pVVar13, (Vector2T*)&local_378);
            pRVar7 = (RenderTargets*)local_3d0._24_8_;
        }
        if ((param_14 & 8) == 0) {
            if (param_3 == (World*)0) {
                fVar29 = 1.0;
            } else {
                fVar29 = (float)param_3->GetPlayerCameraOffsetScale();
            }
            UpdateSunlightShadows(this, param_6, (SceneViewData*)local_2d8, fVar29);
            if (param_3 != (World*)0) {
                UpdateWaterReflection(this, param_6, (SceneViewData*)local_2d8, param_3);
                UpdateWaterCaustics(this, param_6, (SceneViewData*)local_2d8);
            }
        }
        pEVar26 = param_6;
        UpdateRefraction(this, param_6, param_11);
        pSVar27 = this;
        UpdateSkyBoxes(this, pEVar26, (SceneViewData*)local_2d8);
        UpdateViewportMap(pSVar27, param_6);
        if (param_3 == (World*)0) {
            local_388 = (GraphNode*)0;
        } else {
            pGVar11 = (GraphRoot*)param_3->GetSceneGraphRoot();
            local_388 = (GraphNode*)pGVar11->GetRoot();
        }
        if (local_379 != false) {
            pGVar15 = (GeometryPass*)field_8->GetGeometryPass();
            pGVar15->SetGBufferRT(local_390);
            pRVar16 = (RenderPass*)field_8->GetGeometryPass();
            local_2d8->RenderPassPushBack(pRVar16);
            pRVar16 = (RenderPass*)field_8->GetForwardLightingPass();
            local_2d8->RenderPassPushBack(pRVar16);
            new (&local_378) callstack::Callstack();
            local_378.AddFormatType(3);
            (&field_6408, local_3b0, (SceneViewData*)local_2d8, local_388, param_6, true, (RenderPassBitSet*)&local_378)
                ->RenderView();
            local_2d8->RenderPassPopBack();
            local_2d8->RenderPassPopBack();
        }
        if ((param_14 & 1) == 0) {
            pSVar17 = (SceneRenderPass*)field_8->GetGeometryPass();
            pSVar17->SetOcclusionTestEnabled(local_379);
            bVar2 = local_379 == false;
            pSVar17 = (SceneRenderPass*)field_8->GetForwardLightingPass();
            pSVar17->SetOcclusionTestEnabled(bVar2);
        }
        if ((param_14 & 8) == 0) {
            if (param_3 != (World*)0) {
                param_3->GetSceneGraphRoot();
            }
            RenderSkyBoxes((uint)this, local_380, (EffectManager*)0, (SceneViewData*)param_6, (GraphRoot*)local_2d8);
            if (param_3 == (World*)0) {
                auVar32._4_8_ = 0;
                auVar32._0_4_ = extraout_EDX;
                auVar32 = auVar32 << 64;
            } else {
                auVar32 = param_3->GetSceneGraphRoot();
            }
            RenderSunlightShadows(this, local_380, auVar32._8_4_, param_6, (SceneViewData*)local_2d8, auVar32._0_8_);
            if (param_3 == (World*)0) {
                pGVar11 = (GraphRoot*)0;
            } else {
                pGVar11 = (GraphRoot*)param_3->GetSceneGraphRoot();
            }
            RenderPointLightShadows(this, local_380, 0, param_6, (SceneViewData*)local_2d8, pGVar11);
            if (param_3 != (World*)0) {
                pGVar11 = (GraphRoot*)param_3->GetSceneGraphRoot();
                auVar32 = param_3->GetClearColour();
                pSVar28 = (SceneViewData*)local_2d8;
                RenderWaterReflection(this, local_380, auVar32._8_4_, param_6, pSVar28, pGVar11, auVar32._0_8_);
                auVar32 = param_3->GetSceneGraphRoot();
                RenderWaterCaustics(this, local_380, auVar32._8_4_, param_6, pSVar28, auVar32._0_8_);
            }
            if (local_379 != false) {
                new (&local_378) graphics::ClippingState(field_8);
                pSVar12 = graphics::EffectManager::GetEffect<graphics::SunlightDirectLighting>(param_6, 28);
                cVar4 = param_6->IsEnabled();
                if (cVar4 == '\0') {
                    new (local_3d0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
                    pSVar12->SetShadowBufferRT(local_3d0);
                    local_3d0->~shared_ptr();
                } else {
                    pRVar16 = (RenderPass*)field_8->GetDeferredShadowPass();
                    local_2d8->RenderPassPushBack(pRVar16);
                    psVar6 = (shared_ptr*)field_8->GetShadowBufferRT();
                    pSVar12->SetShadowBufferRT(psVar6);
                }
                bVar2 = m_debugRender != '\0';
                local_3d0._0_4_ = 0;
                new (local_3d0) callstack::Callstack();
                (&field_6408, (SceneViewData*)local_2d8, param_6, (bool)((byte)((param_14 & 2) >> 1) | bVar2),
                 (RenderPassBitSet*)local_3d0)
                    ->RenderView();
                cVar4 = param_6->IsEnabled(28);
                pRVar7 = (RenderTargets*)local_3d0._24_8_;
                if (cVar4 != '\0') {
                    local_2d8->RenderPassPopBack();
                }
                local_378.~ClippingState();
            }
        }
        new (local_3d0) graphics::ClippingState(field_8);
        uVar30._0_1_ = 0;
        uVar30._1_3_ = 0;
        uVar31 = 0;
        new (&local_3a8) ImVec4(0.0, 0.0, 0.0, 1.0);
        new (&local_378) render::RenderTargetData(0, (Vector4T*)&local_3a8, 1, 1.0, 0);
        local_378.field_48 = param_13;
        local_378.field_0 = pRVar7;
        if (param_7 == (SkyBox*)0) {
            this_01 = (Rect<float>*)std::array<math::Vector4T<float>, 2ul>::operator[]((ulong)&local_378.field_16);
        } else {
            if (param_3 == (World*)0) {
                uVar30._0_1_ = 0;
                uVar30._1_3_ = 0;
                uVar31 = 0;
                new (&local_3e8) ImVec4(0.0, 0.0, 0.0, 1.0);
            } else {
                puVar10 = (undefined8*)param_3->GetClearColour();
                local_3e8 = *puVar10;
                uStack_3e0 = puVar10[1];
            }
            local_3a8._0_8_ = param_7->GetDesiredClearColour((Vector4T*)&local_3e8);
            local_3a8._8_4_ = uVar30;
            local_3a8._12_4_ = uVar31;
            this_01 = (Rect<float>*)std::array<math::Vector4T<float>, 2ul>::operator[]((ulong)&local_378.field_16);
            param_12 = (Vector4T*)&local_3a8;
        }
        math::Rect<float>::operator=(this_01, (Rect*)param_12);
        bVar2 = local_37a;
        if (local_37a == false) {
            pTVar18 = (Texture*)local_378.field_0->GetDepthStencilTargetTexture();
            uVar5 = render::GetDepthTextureClearFlags(pTVar18);
            local_378.field_48 = local_378.field_48 | uVar5;
        } else {
            local_68 = true;
        }
        local_2d8->SetRenderTargets(&local_378);
        bVar1 = local_37b;
        if (local_37b != false) {
            pRVar16 = (RenderPass*)field_8->GetSSAOPass();
            local_2d8->RenderPassPushBack(pRVar16);
        }
        pRVar16 = (RenderPass*)field_8->GetForwardLightingPass();
        local_2d8->RenderPassPushBack(pRVar16);
        pSVar19 = (SSAOPass*)field_8->GetSSAOPass();
        if (bVar2 == false) {
            local_390 = (SceneRenderManager*)&render::RenderTargets::NullRenderTargets;
        }
        pSVar19->SetGBufferRT(local_390);
        (field_8, param_11->field_0, param_11->field_4, param_11->field_8, param_11->field_12, true)
            ->SetClippingRectangle();
        this_03 = &field_6408;
        bVar24 = (byte)((param_14 & 2) >> 1);
        bVar23 = (bool)(bVar24 | m_debugRender != '\0');
        local_390 = this;
        if (bVar2 == false) {
            local_3a8.m_stackFrames = 0;
            new (&local_3a8) callstack::Callstack();
            this_03->RenderView(local_3b0, local_2d8, local_388, param_6, bVar23, (RenderPassBitSet*)&local_3a8);
        } else {
            local_3a8.m_stackFrames = 0;
            new (&local_3a8) callstack::Callstack();
            this_03->RenderView(local_2d8, param_6, bVar23, (RenderPassBitSet*)&local_3a8);
        }
        pSVar27 = local_390;
        local_2d8->RenderPassPopBack();
        if (bVar1 != false) {
            local_2d8->RenderPassPopBack();
        }
        if ((param_14 & 8) == 0) {
            if (-1 < (char)param_14) {
                pRVar16 = (RenderPass*)pSVar27->field_8->GetObjectHighlightPass();
                local_2d8->RenderPassPushBack(pRVar16);
                bVar2 = m_debugRender != '\0';
                local_3a8.m_stackFrames = 0;
                new (&local_3a8) callstack::Callstack();
                this_03->RenderView(local_3b0, local_2d8, local_388, param_6, (bool)(bVar2 | bVar24),
                                    (RenderPassBitSet*)&local_3a8);
                local_2d8->RenderPassPopBack();
            }
            if ((param_14 & 64) == 0) {
                pRVar16 = (RenderPass*)pSVar27->field_8->GetForwardLightingPass();
                local_2d8->RenderPassPushBack(pRVar16);
                pRVar16 = (RenderPass*)pSVar27->field_8->GetQueryPass();
                local_2d8->RenderPassPushBack(pRVar16);
                new (&local_3a8) callstack::Callstack();
                local_3a8.AddFormatType(9);
                this_03->RenderView(local_3b0, local_2d8, local_388, param_6, (bool)(m_debugRender != '\0' | bVar24),
                                    (RenderPassBitSet*)&local_3a8);
                local_2d8->RenderPassPopBack();
                local_2d8->RenderPassPopBack();
            }
        }
        pGVar15 = (GeometryPass*)pSVar27->field_8->GetGeometryPass();
        pGVar15->SetGBufferRT((shared_ptr*)&render::RenderTargets::NullRenderTargets);
        pSVar19 = (SSAOPass*)pSVar27->field_8->GetSSAOPass();
        pSVar19->SetGBufferRT((shared_ptr*)&render::RenderTargets::NullRenderTargets);
        UnregisterRenderTargets(pSVar27, param_6);
        pVVar20 = (ViewTransforms*)local_2d8->SSOBeginPtr(param_6);
        ViewTransforms::operator=((ViewTransforms*)pSVar27->m_prevViewTransforms, pVVar20);
        pFVar21 = (Frustum*)local_2d8->GetTranslation();
        math::Frustum::operator=((Frustum*)pSVar27->m_prevViewFrustum, pFVar21);
        this_02 = (RT7Core*)local_2d8->SSOBeginPtr(pFVar21);
        pMVar22 = (Matrix44T*)this_02->GetImmediateThreadPool();
        math::Matrix44T<float>::operator=((Matrix44T<float>*)&pSVar27->field_14896, pMVar22);
        (&pSVar27->field_14896, (float*)0)->Invert();
        if (m_freezeCulling == '\0') {
            math::Frustum::operator=((Frustum*)pSVar27->field_14960, (Frustum*)(local_2d8 + 208));
        }
        local_3d0->~ClippingState();
        local_330->~fixed_vector();
        local_2d8->~SceneViewData();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100465230, 304 bytes, placed by class name and debug map
    // SceneRenderManager::RenderView(render::RenderTargets*, unsigned int, graphics::EffectManager&, graphics::SkyBox const*, eastl::vector<shared_ptr<LightSource>, BucketAllocatorEASTL> const&, ViewTransforms const&, render::Viewport const&, unsigned int)
    void SceneRenderManager::RenderView(RenderTargets* param_1, uint param_2, EffectManager* param_3, SkyBox* param_4,
                                        vector* param_5, ViewTransforms* param_6, Viewport* param_7, uint param_8) {
        int iVar1;
        ImVec4 local_58[24];

        if (RenderView(render::RenderTargets*, unsigned int, graphics::EffectManager&, graphics::SkyBox_const*,
                       eastl::vector<shared_ptr<LightSource>, BucketAllocatorEASTL> const&, ViewTransforms_const&,
                       render::Viewport_const&, unsigned int)::nullRT == '\0') {
            iVar1 = ___cxa_guard_acquire(
                &RenderView(render::RenderTargets*, unsigned int, graphics::EffectManager&, graphics::SkyBox_const*,
                            eastl::vector<shared_ptr<LightSource>, BucketAllocatorEASTL> const&, ViewTransforms_const&,
                            render::Viewport_const&, unsigned int)::nullRT);
            if (iVar1 != 0) {
                new (&RenderView(render::RenderTargets*, unsigned int, graphics::EffectManager&,
                                 graphics::SkyBox_const*,
                                 eastl::vector<shared_ptr<LightSource>, BucketAllocatorEASTL> const&,
                                 ViewTransforms_const&, render::Viewport_const&, unsigned int)::nullRT)
                    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
                ___cxa_atexit(PTR__shared_ptr_100ee5318,
                              &RenderView(render::RenderTargets*, unsigned int, graphics::EffectManager&,
                                          graphics::SkyBox_const*,
                                          eastl::vector<shared_ptr<LightSource>, BucketAllocatorEASTL> const&,
                                          ViewTransforms_const&, render::Viewport_const&, unsigned int)::nullRT,
                              4294967296);
                ___cxa_guard_release(&RenderView(render::RenderTargets*, unsigned int, graphics::EffectManager&,
                                                 graphics::SkyBox_const*,
                                                 eastl::vector<shared_ptr<LightSource>, BucketAllocatorEASTL> const&,
                                                 ViewTransforms_const&, render::Viewport_const&, unsigned int)::nullRT);
            }
        }
        ImVec4::ImVec4(local_58, 1.0, 1.0, 1.0, 1.0);
        if (param_4 != (SkyBox*)0) {
            param_4->GetDesiredClearColour(local_58);
        }
        RenderViewImpl(this, param_1,
                       (shared_ptr*)&RenderView(render::RenderTargets*, unsigned int, graphics::EffectManager&,
                                                graphics::SkyBox_const*,
                                                eastl::vector<shared_ptr<LightSource>, BucketAllocatorEASTL> const&,
                                                ViewTransforms_const&, render::Viewport_const&, unsigned int)::nullRT,
                       (World*)0, param_2, 0, param_3, param_4, param_5, false, param_6, param_7, (Vector4T*)local_58,
                       1, param_8);
    }

    // 0x100465360, 112 bytes, placed by class name and debug map
    // SceneRenderManager::RenderView(render::RenderTargets*, shared_ptr<render::RenderTargets> const&, unsigned int, graphics::EffectManager&, graphics::SkyBox const*, eastl::vector<shared_ptr<LightSource>, BucketAllocatorEASTL> const&, bool, ViewTransforms const&, render::Viewport const&, math::Vector4T<float> const&, unsigned int, unsigned int)
    void SceneRenderManager::RenderView(RenderTargets* param_1, shared_ptr* param_2, uint param_3,
                                        EffectManager* param_4, SkyBox* param_5, vector* param_6, bool param_7,
                                        ViewTransforms* param_8, Viewport* param_9, Vector4T* param_10, uint param_11,
                                        uint param_12) {
        RenderViewImpl(this, param_1, param_2, (World*)0, param_3, 0, param_4, param_5, param_6, param_7, param_8,
                       param_9, param_10, param_11, param_12);
    }

    // 0x1004653d0, 176 bytes, placed by class name and debug map
    // SceneRenderManager::SetupGeometryPass(bool&, bool&, render::RenderTargets*, render::RenderTargets*, graphics::EffectManager&)
    void SceneRenderManager::SetupGeometryPass(bool* param_1, bool* param_2, RenderTargets* param_3,
                                               RenderTargets* param_4, EffectManager* param_5) {
        char cVar1;
        undefined1 uVar2;
        bool bVar3;

        cVar1 = (field_8, param_3, param_4)->CanUseGBuffer();
        if (cVar1 != '\0') {
            cVar1 = param_5->IsEnabled(110);
            uVar2 = true;
            if (cVar1 == '\0') {
                cVar1 = param_5->IsEnabled(111);
                if (cVar1 == '\0') {
                    uVar2 = param_5->IsEnabled(112);
                }
            }
            *param_2 = (bool)uVar2;
            cVar1 = m_enableDeferredShadows;
            if ((bool)uVar2 != false) {
                cVar1 = '\x01';
            }
            if (m_enableZPrePass != '\0') {
                cVar1 = true;
            }
            *param_1 = (bool)cVar1;
            if (m_enableZPrePass == '\0' && m_enableDeferredShadows == '\0') {
                bVar3 = false;
            } else {
                bVar3 = *param_2 == false;
            }
            param_5->EnableEffect(91, bVar3);
        }
    }

    // 0x1004654c0, 1472 bytes, placed by class name and debug map
    // SceneRenderManager::GetVisiblePointLights(graphics::EffectManager&, graphics::SceneViewData const&, World const&)
    void SceneRenderManager::GetVisiblePointLights(EffectManager* param_1, SceneViewData* param_2, World* param_3) {
        SceneRenderManager* pSVar1;
        World* pWVar2;
        char cVar3;
        bool bVar4;
        byte bVar5;
        byte bVar6;
        int iVar7;
        int iVar8;
        int iVar9;
        vector* pvVar10;
        float* pfVar11;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_00;
        vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>* this_01;
        vector<eastl::vector<MapSquareStatus, eastl::allocator>, eastl::allocator>* this_02;
        vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>, eastl::allocator>* this_03;
        int* piVar12;
        uint* puVar13;
        PointLightShadows* this_04;
        Layout* this_05;
        NXTPixToolkit* this_06;
        OpenGLView* this_07;
        undefined8 uVar14;
        undefined8 uVar15;
        shared_ptr* this_08;
        vector<MapSquareStatus, eastl::allocator>* pvVar16;
        shared_ptr* this_09;
        shared_ptr<MapSquare>* this_10;
        MapSquare* this_11;
        LODSettings* this_12;
        AABB* pAVar17;
        Layout* pLVar18;
        type* ptVar19;
        ulong uVar20;
        ulong uVar21;
        undefined4 uVar22;
        int local_e8[12];
        undefined8 local_b8;
        undefined4 local_b0;
        ulong local_a8;
        undefined8 local_a0;
        Frustum* local_98;
        ulong local_90;
        Layout* local_88;
        vector* local_80;
        undefined8 local_78;
        SceneRenderManager* local_70;
        undefined8 local_68;
        vector<eastl::vector<MapSquareStatus, eastl::allocator>, eastl::allocator>* local_60;
        SceneViewData* local_58;
        Layout* local_50;
        World* local_48;
        float local_40;
        int local_3c;
        undefined8 local_38;

        local_70 = this;
        pvVar10 = param_2->SSOBeginPtr(param_1);
        local_b8 = *(undefined8*)pvVar10;
        local_b0 = *(undefined4*)(pvVar10 + 8);
        pfVar11 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)&local_b8, 0);
        uVar22 = floor(*pfVar11 * 0.00012207031);
        local_60 = (vector<eastl::vector<MapSquareStatus, eastl::allocator>, eastl::allocator>*)CONCAT44(local_60._4_4_,
                                                                                                         uVar22);
        iVar7 = param_3->GetMapSquareMinX();
        pfVar11 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)&local_b8, 2);
        local_40 = (float)floor(*pfVar11 * 0.00012207031);
        iVar8 = param_3->GetMapSquareMinZ();
        local_48 = param_3;
        this_00 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                      param_3->GetMapSquares();
        cVar3 = eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
            this_00);
        if (cVar3 == '\0') {
            iVar7 = (int)(local_60._0_4_ - (float)iVar7);
            if (-3 < iVar7) {
                this_01 = (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                                  eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>*)
                              local_48->GetMapSquares();
                iVar9 = eastl::vector<
                    Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                    eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::size(this_01);
                if ((iVar7 < iVar9 + 2) && (iVar8 = (int)(local_40 - (float)iVar8), -3 < iVar8)) {
                    this_02 = (vector<eastl::vector<MapSquareStatus, eastl::allocator>, eastl::allocator>*)
                                  local_48->GetMapSquares();
                    this_03 = (vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>, eastl::allocator>*)
                        eastl::vector<eastl::vector<MapSquareStatus, eastl::allocator>, eastl::allocator>::operator[](
                            this_02, 0);
                    iVar9 = eastl::vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>,
                                          eastl::allocator>::size(this_03);
                    if (iVar8 < iVar9 + 2) {
                        local_e8[0] = iVar7 + -2;
                        local_38 = (ulong)local_38._4_4_ << 32;
                        local_58 = param_2;
                        piVar12 = std::max<int>(local_e8, (int*)&local_38);
                        pWVar2 = local_48;
                        iVar9 = *piVar12;
                        uVar20 = (ulong)iVar9;
                        local_e8[0] = iVar7 + 2;
                        iVar7 = local_48->GetMapSquareWidth();
                        local_38._0_4_ = iVar7;
                        piVar12 = std::min<int>(local_e8, (int*)&local_38);
                        local_3c = *piVar12;
                        local_e8[0] = iVar8 + -2;
                        local_38 = (ulong)local_38._4_4_ << 32;
                        piVar12 = std::max<int>(local_e8, (int*)&local_38);
                        local_a8 = (ulong)*piVar12;
                        local_e8[0] = iVar8 + 2;
                        uVar22 = pWVar2->GetMapSquareLength();
                        local_38 = CONCAT44(local_38._4_4_, uVar22);
                        puVar13 = (uint*)std::min<int>(local_e8, (int*)&local_38);
                        pSVar1 = local_70;
                        local_90 = (ulong)*puVar13;
                        (&local_70->field_13120)->clear();
                        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
                        ptVar19 = (type*)35;
                        this_04 =
                            (PointLightShadows*)graphics::EffectManager::GetEffect<graphics::SunlightDirectLighting>(
                                param_1);
                        this_05 = (Layout*)this_04->GetPointLightSMManager();
                        local_80 = eastl::string::Layout::SSOBeginPtr(this_05, ptVar19);
                        this_06 = (NXTPixToolkit*)pSVar1->field_8->GetForwardOcclusionRenderPass();
                        local_38 = this_06->GetOcclusionSceneViewData();
                        local_78 = this_06->GetScreen();
                        local_60 = (vector<eastl::vector<MapSquareStatus, eastl::allocator>, eastl::allocator>*)
                                       pWVar2->GetMapSquares();
                        if (iVar9 <= local_3c) {
                            local_98 = (Frustum*)local_58->m_pViewFrustum;
                            local_40 = (float)((int)local_90 + 1);
                            local_3c = local_3c + 1;
                            do {
                                uVar21 = local_a8;
                                if ((int)local_a8 <= (int)local_90) {
                                    do {
                                        pWVar2 = local_48;
                                        iVar7 = local_48->GetMapSquareMinX();
                                        iVar8 = pWVar2->GetMapSquareMinZ();
                                        this_08 = (shared_ptr*)((int)uVar20 + iVar7)->GetEffect((int)uVar21 + iVar8);
                                        pvVar16 = (vector<MapSquareStatus, eastl::allocator>*)
                                            eastl::vector<eastl::vector<MapSquareStatus, eastl::allocator>,
                                                          eastl::allocator>::operator[](local_60, uVar20);
                                        this_09 =
                                            (shared_ptr*)eastl::vector<MapSquareStatus, eastl::allocator>::operator[](
                                                pvVar16, uVar21);
                                        bVar4 = shared_ptr::operator_cast_to_bool(this_09);
                                        if ((bVar4) && (bVar4 = shared_ptr::operator_cast_to_bool(this_08), bVar4)) {
                                            pvVar16 = (vector<MapSquareStatus, eastl::allocator>*)
                                                eastl::vector<eastl::vector<MapSquareStatus, eastl::allocator>,
                                                              eastl::allocator>::operator[](local_60, uVar20);
                                            this_10 = (shared_ptr<MapSquare>*)
                                                eastl::vector<MapSquareStatus, eastl::allocator>::operator[](pvVar16,
                                                                                                             uVar21);
                                            this_11 = (MapSquare*)shared_ptr<MapSquare>::operator*(this_10);
                                            bVar5 = this_11->GetTargetLOD();
                                            if (bVar5 < 4) {
                                                bVar5 = this_11->GetTargetLOD();
                                                this_12 = (LODSettings*)local_48->GetLODSettings();
                                                bVar6 = this_12->GetLowestUsableLOD();
                                                if ((bVar5 <= bVar6) &&
                                                    (cVar3 = this_11->GetStaticPointLightsLoaded(), cVar3 != '\0')) {
                                                    pAVar17 = (AABB*)this_11->GetWorldAABB();
                                                    cVar3 = local_98->TestIntersection(pAVar17);
                                                    if (cVar3 != '\0') {
                                                        pLVar18 = (Layout*)this_11->GetLightSourcesLocal();
                                                        local_50 = (Layout*)this_11->GetLightSourcesRemote();
                                                        local_88 = (Layout*)this_11->GetLightSourcesDynamic();
                                                        cVar3 = pLVar18->empty();
                                                        if (((cVar3 == '\0') ||
                                                             (cVar3 = local_50->empty(), cVar3 == '\0')) ||
                                                            (cVar3 = local_88->empty(), cVar3 == '\0')) {
                                                            this_07 =
                                                                (OpenGLView*)
                                                                    shared_ptr<graphics::PointLightIndicesEffect>::
                                                                    operator->(
                                                                        (shared_ptr<graphics::PointLightIndicesEffect>*)
                                                                            this_08);
                                                            uVar14 = this_07->GetCursorMutex();
                                                            eastl::vector<eastl::pair<int, int>,
                                                                          eastl::allocator>::clear();
                                                            local_68 =
                                                                eastl::basic_string<char, eastl::fixed_vector_allocator<
                                                                                              1ul, 64ul, 1ul, 0ul, true,
                                                                                              eastl::allocator>>::
                                                                    Layout::HeapBeginPtr(pLVar18);
                                                            uVar15 = pLVar18->end();
                                                            local_a0 = uVar14;
                                                            eastl::for_each<shared_ptr<LightSource> const*,
                                                                            (graphics::EffectManager&)
                                                                                ->GetVisiblePointLights(
                                                                                    graphics::SceneViewData_const&,
                                                                                    World_const&)::__9>(
                                                                local_e8, local_68, uVar15);
                                                            pLVar18 = local_50;
                                                            local_68 =
                                                                eastl::basic_string<char, eastl::fixed_vector_allocator<
                                                                                              1ul, 64ul, 1ul, 0ul, true,
                                                                                              eastl::allocator>>::
                                                                    Layout::HeapBeginPtr(local_50);
                                                            uVar14 = pLVar18->end();
                                                            eastl::for_each<shared_ptr<LightSource> const*,
                                                                            (graphics::EffectManager&)
                                                                                ->GetVisiblePointLights(
                                                                                    graphics::SceneViewData_const&,
                                                                                    World_const&)::__9>(
                                                                local_e8, local_68, uVar14);
                                                            pLVar18 = local_88;
                                                            local_50 = (Layout*)eastl::basic_string<
                                                                char,
                                                                eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                              eastl::allocator>>::
                                                                Layout::HeapBeginPtr(local_88);
                                                            uVar14 = pLVar18->end();
                                                            eastl::for_each<shared_ptr<LightSource> const*,
                                                                            (graphics::EffectManager&)
                                                                                ->GetVisiblePointLights(
                                                                                    graphics::SceneViewData_const&,
                                                                                    World_const&)::__9>(
                                                                local_e8, local_50, uVar14);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                        uVar21 = uVar21 + 1;
                                    } while (local_40 != (float)(int)uVar21);
                                }
                                uVar20 = uVar20 + 1;
                            } while (local_3c != (int)uVar20);
                        }
                    }
                }
            }
        }
    }

    // 0x100465a80, 496 bytes, placed by class name and debug map
    // SceneRenderManager::GetVisiblePointLights(graphics::EffectManager&, graphics::SceneViewData const&, eastl::vector<shared_ptr<LightSource>, BucketAllocatorEASTL> const&)
    void SceneRenderManager::GetVisiblePointLights(EffectManager* param_1, SceneViewData* param_2, vector* param_3) {
        bool bVar1;
        char cVar2;
        PointLightShadows* this_01;
        Layout* this_02;
        vector* pvVar3;
        long lVar4;
        OpenGLView* this_03;
        shared_ptr* this_04;
        shared_ptr* psVar5;
        LightSource* pLVar6;
        hashtable_iterator_base* extraout_RDX;
        undefined1 auVar8[16];
        undefined1 local_a8[12];
        float local_9c;
        undefined1 local_78[24];
        vector<math::Sphere, eastl::allocator>* local_60;
        hashtable_iterator_base local_48[8];
        eastl local_38[8];

        (&field_13120)->clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        this_01 = (PointLightShadows*)graphics::EffectManager::GetEffect<graphics::SunlightDirectLighting>(param_1);
        this_02 = (Layout*)this_01->GetPointLightSMManager();
        pvVar3 = eastl::string::Layout::SSOBeginPtr(this_02, (type*)35);
        graphics::PointLightIndicesEffect::GetEffects();
        local_38 =
            (eastl[8])eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                                    eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true,
                                    true>::begin();
        auVar8 =
            eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                          eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true, true>::end();
        local_48 = auVar8._0_8_;
        bVar1 = eastl::operator!=(local_38, local_48, auVar8._8_8_);
        if (bVar1) {
            local_78._16_8_ = param_2->m_pViewFrustum;
            do {
                lVar4 = eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator*(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)local_38);
                bVar1 = ((lVar4 + 8))->operator_cast_to_bool();
                if (bVar1) {
                    this_03 = (OpenGLView*)shared_ptr<graphics::PointLightIndicesEffect>::operator->(
                        (shared_ptr<graphics::PointLightIndicesEffect>*)(lVar4 + 8));
                    local_60 = (vector<math::Sphere, eastl::allocator>*)this_03->GetCursorMutex();
                    eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
                    this_04 = (shared_ptr*)param_3->HeapBeginPtr();
                    psVar5 = (shared_ptr*)param_3->end();
                    for (; this_04 != psVar5; this_04 = this_04 + 1) {
                        shared_ptr<LightSource>::operator->((shared_ptr<LightSource>*)this_04);
                        local_a8->GetPointLight();
                        new (local_78) math::Sphere(local_a8, local_9c);
                        pLVar6 = (LightSource*)shared_ptr<LightSource>::operator->((shared_ptr<LightSource>*)this_04);
                        pLVar6->SetVisibleLastFrame(false);
                        cVar2 = local_78._16_8_->TestIntersection(local_78);
                        if (cVar2 != '\0') {
                            eastl::vector<math::Sphere, eastl::allocator>::push_back(local_60, (Sphere*)local_78);
                            pLVar6 =
                                (LightSource*)shared_ptr<LightSource>::operator->((shared_ptr<LightSource>*)this_04);
                            pLVar6->SetVisibleLastFrame(true);
                            AddShadowCastingPointLight((SceneRenderManager*)this, param_2, *(float*)(pvVar3 + 24),
                                                       *(float*)(pvVar3 + 20), this_04, (Sphere*)local_78);
                        }
                    }
                }
                eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator++(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)local_38);
                bVar1 = eastl::operator!=(local_38, local_48, extraout_RDX);
            } while (bVar1);
        }
    }

    // 0x100465cc0, 560 bytes, placed by class name and debug map
    // SceneRenderManager::UpdateSunlightShadows(graphics::EffectManager&, graphics::SceneViewData const&, float)
    void SceneRenderManager::UpdateSunlightShadows(EffectManager* param_1, SceneViewData* param_2, float param_3) {
        undefined1* this_00;
        DirLightCsmManager* this_01;
        char cVar1;
        ulonglong uVar2;
        SunlightDirectLighting* this_02;
        vector* pvVar3;
        vector* pvVar4;
        Vector3T* pVVar5;
        Vector3T* pVVar6;
        Layout* this_03;
        ulonglong uVar7;
        NPCType* this_04;
        long lVar8;
        float fVar9;
        Matrix44T<float> local_a8[40];
        undefined8 local_80[5];
        DirLightCsmManager* local_58;
        SunlightShadows* local_50;
        Vector3T* local_48;
        float local_3c;
        float local_38;
        float local_34;

        local_34 = param_3;
        cVar1 = param_1->IsEnabled(30);
        if (cVar1 != '\0') {
            local_50 =
                (SunlightShadows*)graphics::EffectManager::GetEffect<graphics::SunlightDirectLighting>(param_1, 30);
            local_58 = (DirLightCsmManager*)local_50->GetSunlightCsmManager();
            uVar2 = FrameTime::GetCurrentTimeMS();
            cVar1 = param_1->IsEnabled(94);
            uVar7 = 18446744073709551615;
            if (cVar1 != '\0') {
                uVar7 = uVar2;
            }
            this_02 = graphics::EffectManager::GetEffect<graphics::SunlightDirectLighting>(param_1, 29);
            this_00 = &field_13192;
            (&field_13204, (Vector3T*)this_00)->SetXYZ();
            local_80[0] = this_02->GetDirection(uVar7);
            pVVar5 = (Vector3T*)local_80;
            local_48 = (Vector3T*)this_00;
            this_00->SetXYZ(pVVar5);
            field_13232 = true;
            pvVar3 = (m_prevViewTransforms, (type*)pVVar5)->SSOBeginPtr();
            pvVar4 = param_2->SSOBeginPtr(pVVar5);
            local_80[0] = math::operator-((Vector3T*)pvVar3, (Vector3T*)pvVar4);
            local_3c = (float)local_80->Length();
            m_prevViewTransforms->GetScreen();
            local_80->GetRot();
            pVVar5 = (Vector3T*)local_80->second();
            param_2->GetScreen();
            local_a8->GetRot();
            pVVar6 = (Vector3T*)local_a8->second();
            fVar9 = math::Vector3Dot<float>(pVVar5, pVVar6);
            local_38 = (float)::abs(fVar9);
            this_03 = (Layout*)this_02->GetDefaultValue();
            pvVar3 = eastl::string::Layout::SSOBeginPtr(this_03, (type*)pVVar6);
            uVar7 = FrameTime::GetCurrentTimeMS();
            cVar1 = pvVar3->IsTransitioning(uVar7);
            if (((12.5 <= local_3c) || (1e-06 <= 1.0 - local_38)) || (cVar1 != '\0')) {
                field_13232 = false;
            }
            local_34 = (float)round(local_34 * 5.0);
            local_34 = local_34 * 0.2;
            this_04 = (NPCType*)local_50->GetSunlightCsmManager();
            lVar8 = this_04->GetHeadList();
            this_01 = local_58;
            local_58->SetCascadeSplitWeight(local_34 * *(float*)(lVar8 + 28));
            this_01->Update(param_2, local_48, (array*)&field_13216, field_13232);
        }
    }

    // 0x100465f00, 2896 bytes, placed by class name and debug map
    // SceneRenderManager::UpdateWaterReflection(graphics::EffectManager&, graphics::SceneViewData const&, World const&)
    void SceneRenderManager::UpdateWaterReflection(EffectManager* param_1, SceneViewData* param_2, World* param_3) {
        CoordFine* this_00;
        undefined1* puVar1;
        undefined8* puVar2;
        int iVar3;
        NXTPixToolkit* this_01;
        World* this_02;
        char cVar4;
        bool bVar5;
        char cVar6;
        float fVar7;
        uint uVar8;
        uint uVar9;
        uint uVar10;
        ViewTransforms* this_03;
        Matrix44T* pMVar11;
        Vector3T* pVVar12;
        Vector3T* pVVar13;
        uint* puVar14;
        int* piVar15;
        NXTPixToolkit* pNVar16;
        SceneManager* this_04;
        long* plVar17;
        char* pcVar18;
        vector* pvVar19;
        undefined8* puVar20;
        SceneRenderPass* this_05;
        Frustum* pFVar21;
        shared_ptr* this_06;
        MapSquare* this_07;
        Layout* this_08;
        shared_ptr<graphics::WaterPatch>* this_09;
        shared_ptr<graphics::WaterPatch>* psVar22;
        Location* this_10;
        unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>* this_11;
        AABB* pAVar23;
        Vector3T* extraout_RDX;
        Vector3T* in_R8;
        SceneRenderManager* pSVar24;
        undefined4 in_XMM1_Da;
        float fVar25;
        undefined1 local_268[112];
        undefined1 local_1f8[64];
        undefined1 local_1b8[56];
        undefined8 uStack_180;
        shared_ptr* local_178;
        ulong local_170;
        undefined8 local_168;
        PlanarReflection* local_160;
        undefined1 local_158[72];
        undefined8 local_110[2];
        NXTPixToolkit* local_100;
        Frustum* local_f8;
        OcclusionManager* local_f0;
        ulong local_e8;
        float local_e0;
        float local_dc;
        Terrain* local_d8;
        ulong local_d0;
        Matrix44T* local_c8;
        World* local_c0;
        NXTPixToolkit* local_b8;
        undefined1 local_b0[12];
        float local_a4;
        SceneRenderManager* local_a0;
        uint local_98;
        uint local_94;
        int local_90;
        int local_8c;
        undefined1 local_88[80];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        field_13248[12] = 0;
        local_c0 = param_3;
        this_03 = (ViewTransforms*)field_8->GetSkyBoxRenderer();
        pMVar11 = (Matrix44T*)param_2->GetOrigin();
        this_03->SetProjMatrix(pMVar11);
        cVar4 = param_1->IsEnabled(107);
        if (cVar4 == '\0')
            goto LAB_100466711;
        local_a0 = this;
        local_160 =
            (PlanarReflection*)graphics::EffectManager::GetEffect<graphics::SunlightDirectLighting>(param_1, 107);
        local_100 = (NXTPixToolkit*)local_160->GetDefaultValue();
        local_100->ResetScissorRect();
        local_98 = 2147483647;
        local_90 = -2147483648;
        local_94 = 2147483647;
        local_8c = -2147483648;
        local_b8 = (NXTPixToolkit*)param_2;
        param_2->GetTranslation();
        local_268->GetBoundaryPoints();
        pVVar12 = (Vector3T*)local_268->begin();
        pVVar13 = (Vector3T*)local_268->end();
        if (pVVar12 != pVVar13) {
            do {
                new (local_88) CoordFine(0, pVVar12);
                fVar7 = (float)local_88->GetMapSquareX();
                local_158._0_4_ = fVar7;
                puVar14 = (uint*)std::min<int>((int*)&local_98, (int*)local_158);
                local_98 = *puVar14;
                local_158._0_4_ = local_88->GetMapSquareX();
                piVar15 = std::max<int>(&local_90, (int*)local_158);
                local_90 = *piVar15;
                local_158._0_4_ = local_88->GetMapSquareZ();
                puVar14 = (uint*)std::min<int>((int*)&local_94, (int*)local_158);
                local_94 = *puVar14;
                local_158._0_4_ = local_88->GetMapSquareZ();
                piVar15 = std::max<int>(&local_8c, (int*)local_158);
                local_8c = *piVar15;
                pVVar12 = pVVar12 + 12;
            } while (pVVar12 != pVVar13);
        }
        this_02 = local_c0;
        local_88._0_4_ = local_c0->GetMapSquareMinX();
        puVar14 = (uint*)std::max<int>((int*)&local_98, (int*)local_88);
        local_98 = *puVar14;
        local_88._0_4_ = this_02->GetMapSquareMaxX();
        piVar15 = std::min<int>(&local_90, (int*)local_88);
        local_90 = *piVar15;
        local_88._0_4_ = this_02->GetMapSquareMinZ();
        puVar14 = (uint*)std::max<int>((int*)&local_94, (int*)local_88);
        local_94 = *puVar14;
        local_88._0_4_ = this_02->GetMapSquareMaxZ();
        piVar15 = std::min<int>(&local_8c, (int*)local_88);
        local_8c = *piVar15;
        new (local_1f8) math::AABB();
        new ((local_1f8 + 32)) math::AABB();
        pNVar16 = (NXTPixToolkit*)local_a0->field_8->GetForwardOcclusionRenderPass();
        local_168 = pNVar16->GetOcclusionSceneViewData();
        local_f0 = (OcclusionManager*)pNVar16->GetScreen();
        this_04 = (SceneManager*)this_02->size();
        cVar4 = this_04->IsSphericalCameraEnabled();
        local_d0 = (ulong)local_98;
        local_f8 = (Frustum*)(local_b8->m_pix2D + 32);
        if (local_90 < (int)local_98) {
            local_d8 = (Terrain*)0;
        } else {
            local_c8 = (Matrix44T*)CONCAT44(local_c8._4_4_, 2139095039);
            local_d8 = (Terrain*)0;
            do {
                uVar10 = local_94;
                if ((int)local_94 <= local_8c) {
                    do {
                        local_170 = (ulong)uVar10;
                        this_06 = (shared_ptr*)local_c0->GetMapSquare((int)local_d0, uVar10);
                        bVar5 = shared_ptr::operator_cast_to_bool(this_06);
                        if (bVar5) {
                            local_178 = this_06;
                            this_07 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this_06);
                            this_08 = (Layout*)this_07->GetWaterPatches();
                            this_09 = (shared_ptr<graphics::WaterPatch>*)eastl::basic_string<
                                char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(this_08);
                            psVar22 = (shared_ptr<graphics::WaterPatch>*)this_08->end();
                            for (; this_09 != psVar22; this_09 = this_09 + 16) {
                                shared_ptr<graphics::WaterPatch>::operator->(this_09);
                                local_88->GetWorldOBB();
                                new (local_158) math::AABB();
                                local_88->GetMinimumEnclosingAABB(local_158);
                                if ((cVar4 != '\0') ||
                                    ((cVar6 = local_f8->TestIntersection(local_88),
                                      cVar6 != '\0' &&
                                          ((cVar6 = local_f0->DepthBufferCanOcclude(),
                                            cVar6 == '\0' || (cVar6 = graphics::OcclusionManager::AABBVisible(
                                                                  (AABB*)local_f0, (SceneViewData*)local_158,
                                                                  (SceneViewData*)local_b8),
                                                              cVar6 != '\0')))))) {
                                    pVVar12 = (Vector3T*)local_c0->GetLastCameraFocusPosition();
                                    fVar7 = (float)local_158->GetDistanceToPointSquared(pVVar12);
                                    if (fVar7 < local_c8._0_4_) {
                                        local_dc = fVar7;
                                        local_1b8._0_8_ = local_158->GetDimensions();
                                        local_1b8._8_4_ = in_XMM1_Da;
                                        bVar5 = math::operator!=((Vector3T*)local_1b8, (Vector3T*)PTR_ZERO_100ee66e8);
                                        if (bVar5) {
                                            this_10 = (Location*)shared_ptr<MapSquare>::operator->(
                                                (shared_ptr<MapSquare>*)local_178);
                                            this_11 =
                                                (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)
                                                    this_10->GetParentLocationType();
                                            local_d8 = (Terrain*)std::unique_ptr<
                                                Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::get(this_11);
                                            pAVar23 = (AABB*)local_d8->GetWorldAABB();
                                            math::AABB::operator=((AABB*)local_1f8, pAVar23);
                                            math::AABB::operator=((AABB*)(local_1f8 + 32), (AABB*)local_158);
                                            cVar6 = local_1f8->TestIntersection(local_158);
                                            if (cVar6 == '\0') {
                                                /* WARNING: Subroutine does not return */
                                                LogAssert(
                                                    "closestTerrainAABB.TestIntersection(patchAABB)",
                                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                    "libs/game/runetek5/scene/SceneRenderManager.cpp",
                                                    887, (char*)0);
                                            }
                                            local_a0->field_13248[12] = 1;
                                            local_c8 = (Matrix44T*)CONCAT44(local_c8._4_4_, local_dc);
                                        }
                                    }
                                    local_100->AddWaterPatchAABB(local_158);
                                }
                            }
                        }
                        uVar10 = (int)local_170 + 1;
                    } while ((int)local_170 < local_8c);
                }
                iVar3 = (int)local_d0;
                local_d0 = (ulong)(iVar3 + 1);
            } while (iVar3 < local_90);
        }
        if (local_a0->field_13248[12] == '\0')
            goto LAB_100466711;
        pVVar12 = (Vector3T*)local_c0->GetLastCameraFocusPosition();
        local_110[0] = local_1f8->GetClosestPoint(pVVar12);
        this_00 = (CoordFine*)(local_268 + 96);
        CoordFine::CoordFine(this_00, 0, (Vector3T*)local_110);
        uVar8 = this_00->GetLocalX();
        uVar9 = this_00->GetLocalZ();
        uVar10 = local_d8->CalculatePrimaryWaterHeightNearTile(uVar8, uVar9);
        if (uVar10 == 2147483647) {
            fVar7 = (float)((local_1f8 + 32))->GetMinY();
            uVar10 = (uint)fVar7;
        }
        pSVar24 = local_a0;
        if (World::m_showWaterHeights != '\0') {
            new (local_88) eastl::fixed_string<char, 32, true, eastl::allocator>();
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 32ul, 1ul, 0ul, true, eastl::allocator>>::
                sprintf((char*)local_88, "Focus %i (%i %i)", (ulong)uVar10, (ulong)uVar8, (ulong)uVar9);
            plVar17 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar17 != (long*)0) {
                pcVar18 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                new (local_1b8) eastl::allocator("EASTL basic_string");
                new (local_158) eastl::string(pcVar18, local_1b8);
                new (local_b0) oldscape::sidebars::SideBarData(-16776961, 0);
                (**(code**)(*plVar17 + 136))(plVar17, local_110, local_158, local_b0);
                local_158->~basic_string();
            }
            /* WARNING: Subroutine does not return */
            local_88->~fixed_string();
        }
        local_a0->field_13264 = uVar10;
        local_160->SetReflectionMapContribution(1.0);
        math::Frustum::operator=((Frustum*)pSVar24->field_13920, local_f8);
        fVar7 = (float)pSVar24->field_13264;
        pMVar11 = (Matrix44T*)local_88;
        math::Matrix44Reflection<float>(pMVar11, (math*)PTR_UP_100ee66d0, extraout_RDX, -25.0 - fVar7);
        puVar1 = &pSVar24->field_13376;
        math::Matrix44T<float>::operator=((Matrix44T<float>*)puVar1, pMVar11);
        pNVar16 = local_b8;
        pvVar19 = local_b8->SSOBeginPtr(pMVar11);
        local_88._0_8_ = math::operator*((Vector3T*)pvVar19, (Matrix44T*)puVar1);
        local_c8 = (Matrix44T*)&pSVar24->field_13268;
        pVVar12 = (Vector3T*)local_88;
        local_88._8_4_ = fVar7;
        local_c8->SetXYZ(pVVar12);
        pvVar19 = pNVar16->SSOBeginPtr(pVVar12);
        local_b0._0_8_ = pNVar16->GetViewVector();
        local_b0._8_4_ = fVar7;
        local_1b8._0_8_ = math::operator*((Vector3T*)local_b0, 1000.0);
        local_1b8._8_4_ = fVar7;
        local_158._0_8_ = math::operator+((Vector3T*)pvVar19, (Vector3T*)local_1b8);
        local_158._8_4_ = fVar7;
        local_88._0_8_ = math::operator*((Vector3T*)local_158, (Matrix44T*)puVar1);
        local_88._8_4_ = fVar7;
        (&pSVar24->field_13292, (Vector3T*)local_88)->SetXYZ();
        puVar20 = (undefined8*)pNVar16->GetScreen();
        local_88._0_8_ = *puVar20;
        local_88._8_8_ = puVar20[1];
        local_88._16_8_ = puVar20[2];
        local_88._24_8_ = puVar20[3];
        local_88._32_8_ = puVar20[4];
        local_88._40_8_ = puVar20[5];
        local_88._48_8_ = puVar20[6];
        local_88._56_8_ = puVar20[7];
        local_88->Invert(0);
        fVar7 = 1.0;
        fVar25 = 0.0;
        new (local_1b8) ImVec4(0.0, 1.0, 0.0, 0.0);
        local_158._0_8_ = math::operator*((Vector4T*)local_1b8, (Matrix44T*)local_88);
        local_158._8_4_ = fVar7;
        local_158._12_4_ = fVar25;
        local_e8 = local_158->GetXYZ();
        local_e8 = local_e8 ^ 9223372036854775808;
        puVar1 = &pSVar24->field_13312;
        local_e0 = fVar7;
        math::Matrix44LookAtLH<float>((math*)puVar1, local_c8, (Vector3T*)&pSVar24->field_13292, (Vector3T*)&local_e8,
                                      in_R8, 0.1);
        puVar20 = &pSVar24->field_14464;
        math::Matrix44T<float>::operator=((Matrix44T<float>*)puVar20, (Matrix44T*)PTR_IDENTITY_100ee6730);
        pMVar11 = (Matrix44T*)pNVar16->GetOrigin();
        new (local_b0) math::PlaneT<float>(PTR_UP_100ee66d0, -(float)pSVar24->field_13264);
        math::PlaneT<float>::operator=((PlaneT<float>*)&pSVar24->field_14240, (PlaneT*)local_b0);
        if (m_skipObliqueReflectionFrustum == '\0') {
            this_05 = (SceneRenderPass*)pSVar24->field_8->GetWaterReflectionPass();
            cVar4 = this_05->GetOcclusionEnabled();
            if ((cVar4 != '\0') && (graphics::OcclusionManager::m_CPUDepthBufferGenerationEnabled == '\0'))
                goto LAB_1004665d7;
            local_158._0_8_ = math::operator*((PlaneT*)local_b0, (Matrix44T*)puVar1);
            local_158._8_4_ = fVar7;
            local_158._12_4_ = fVar25;
            math::PlaneT<float>::operator=((PlaneT<float>*)local_b0, (PlaneT*)local_158);
            local_b0->Normalise();
            new (local_158) ImVec4((float)local_b0._0_4_, (float)local_b0._4_4_, (float)local_b0._8_4_, local_a4);
            math::Matrix44Oblique<float>((Matrix44T*)puVar20, pMVar11, (Vector4T*)local_158);
        } else {
        LAB_1004665d7:
            math::Matrix44T<float>::operator=((Matrix44T<float>*)puVar20, pMVar11);
        }
        pNVar16 = local_b8;
        if (m_showCameraFrustum != '\0') {
            pMVar11 = (Matrix44T*)local_b8->GetImmediateThreadPool();
            math::Matrix44T<float>::operator=((Matrix44T<float>*)&pSVar24->field_14272, pMVar11);
            (&pSVar24->field_14272, (float*)0)->Invert();
            local_1b8._0_8_ = *(undefined8*)puVar1;
            local_1b8._8_8_ = *(undefined8*)&pSVar24->field_13320;
            local_1b8._16_8_ = *(undefined8*)&pSVar24->field_13328;
            local_1b8._24_8_ = *(undefined8*)&pSVar24->field_13336;
            local_1b8._32_8_ = *(undefined8*)&pSVar24->field_13344;
            local_1b8._40_8_ = *(undefined8*)&pSVar24->field_13352;
            local_1b8._48_8_ = *(undefined8*)&pSVar24->field_13360;
            uStack_180 = *(undefined8*)&pSVar24->field_13368;
            pMVar11 = (Matrix44T*)pNVar16->GetOrigin();
            math::operator*((math*)local_158, (Matrix44T*)local_1b8, pMVar11);
            puVar2 = &local_a0->field_14336;
            math::Matrix44T<float>::operator=((Matrix44T<float>*)puVar2, (Matrix44T*)local_158);
            puVar2->Invert(0);
            math::operator*((math*)local_158, (Matrix44T*)puVar1, (Matrix44T*)puVar20);
            pSVar24 = local_a0;
            puVar2 = &local_a0->field_14400;
            math::Matrix44T<float>::operator=((Matrix44T<float>*)puVar2, (Matrix44T*)local_158);
            puVar2->Invert(0);
        }
        (pSVar24->field_13440, (Matrix44T*)puVar1, (Matrix44T*)puVar20)->Set();
        this_01 = local_100;
        local_100->Update((ViewTransforms*)pSVar24->field_13440, (ViewTransforms*)pNVar16);
        pFVar21 = (Frustum*)this_01->GetScreen();
        math::Frustum::operator=((Frustum*)pSVar24->field_14080, pFVar21);
    LAB_100466711:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100466a50, 336 bytes, placed by class name and debug map
    // SceneRenderManager::UpdateWaterCaustics(graphics::EffectManager&, graphics::SceneViewData const&)
    void SceneRenderManager::UpdateWaterCaustics(EffectManager* param_1, SceneViewData* param_2) {
        undefined1* this_00;
        SunlightDirectLighting* this_01;
        vector* pvVar2;
        Matrix44T* pMVar3;
        Vector3T* in_R8;
        undefined8 local_58[2];
        CausticsManager* local_48;
        undefined8 local_40;
        undefined4 local_38;

        if (param_1->IsEnabled(44) != '\0') {
            this_01 = graphics::EffectManager::GetEffect<graphics::SunlightDirectLighting>(param_1);
            local_48 = (CausticsManager*)this_01->GetDevCredentialsOutputDirectory();
            pvVar2 = param_2->SSOBeginPtr(44);
            this_00 = &field_13280;
            this_00->SetXYZ(pvVar2);
            local_58[0] = param_2->GetViewVector();
            local_40 = math::operator*((Vector3T*)local_58, graphics::CausticsPass::m_cameraOffset);
            math::Vector3T<float>::operator+=((Vector3T<float>*)this_00, (Vector3T*)&local_40);
            local_38 = field_13288;
            field_13284 = graphics::CausticsPass::m_cameraHeight + (float)field_13264;
            local_40 = CONCAT44((float)field_13264, (int)*(undefined8*)&field_13280);
            pMVar3 = (Matrix44T*)param_2->GetOrigin();
            math::Matrix44LookAtLH<float>((math*)&field_13648, (Matrix44T*)this_00, (Vector3T*)&local_40,
                                          (Vector3T*)PTR_RIGHT_100ee66f0, in_R8, 0.1);
            (field_13712, (Matrix44T*)&field_13648, pMVar3)->Set();
            local_48->Update((ViewTransforms*)field_13712, (float)field_13264);
        }
    }

    // 0x100466ba0, 400 bytes, placed by class name and debug map
    // SceneRenderManager::UpdateRefraction(graphics::EffectManager&, render::Viewport const&)
    void SceneRenderManager::UpdateRefraction(EffectManager* param_1, Viewport* param_2) {
        int iVar1;
        char cVar2;
        bool bVar3;
        shared_ptr* this_00;
        SunlightDirectLighting* this_01;
        shared_ptr<render::RenderTargets>* psVar4;
        RenderTargets* pRVar5;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* this_02;
        undefined8* puVar6;
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                    eastl::allocator>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>* this_03;
        int* piVar7;
        undefined8 local_f8;
        undefined8 uStack_f0;
        undefined8 local_e8;
        undefined8 uStack_e0;
        undefined8 local_d8;
        undefined8 uStack_d0;
        undefined8 local_c8;
        undefined8 uStack_c0;
        undefined1 local_b8[64];
        Desc local_78;

        cVar2 = param_1->IsEnabled(108);
        if (cVar2 != '\0') {
            this_00 = (shared_ptr*)field_8->GetForwardLightingRT();
            bVar3 = shared_ptr::operator_cast_to_bool(this_00);
            if (bVar3) {
                this_01 = graphics::EffectManager::GetEffect<graphics::SunlightDirectLighting>(param_1);
                psVar4 = (shared_ptr<render::RenderTargets>*)field_8->GetForwardLightingRT();
                pRVar5 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(psVar4);
                this_02 = (vector<render::Texture*,
                                  eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                              pRVar5->GetColourTargetTextures();
                puVar6 = (undefined8*)eastl::vector<
                    render::Texture*,
                    eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](this_02, 0);
                puVar6 = (undefined8*)(*puVar6)->second();
                local_f8 = *puVar6;
                uStack_f0 = puVar6[1];
                local_e8 = puVar6[2];
                uStack_e0 = puVar6[3];
                local_d8 = puVar6[4];
                uStack_d0 = puVar6[5];
                local_c8 = puVar6[6];
                uStack_c0 = puVar6[7];
                new (local_b8) render::Texture::Desc();
                psVar4 = (shared_ptr<render::RenderTargets>*)field_8->GetForwardLightingRT();
                pRVar5 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(psVar4);
                this_03 =
                    (compressed_pair_imp<
                        eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>*)
                        pRVar5->GetDepthStencilTargetTexture();
                puVar6 = (undefined8*)eastl::compressed_pair_imp<
                    eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
                    eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>::second(this_03);
                local_78._0_8_ = *puVar6;
                local_78._16_8_ = puVar6[2];
                local_78._24_8_ = puVar6[3];
                local_78._32_8_ = puVar6[4];
                local_78._40_8_ = puVar6[5];
                local_78.field_48 = puVar6[6];
                local_78._56_8_ = puVar6[7];
                local_78.field_8 = (int)puVar6[1];
                local_78.field_12 = 22;
                iVar1 = param_2->field_8;
                piVar7 = (int*)std::array<render::Texture::Desc, 2ul>::operator[]((ulong)&local_f8);
                *piVar7 = iVar1;
                local_78.field_4 = param_2->field_12;
                piVar7[1] = local_78.field_4;
                local_78.field_0 = iVar1;
                cVar2 = param_1->IsEnabled(109);
                if (cVar2 != '\0') {
                    piVar7[2] = 4;
                }
                cVar2 = this_01->CreateRefractionTexture((array*)&local_f8, (Desc*)(local_b8 + 64));
                if (cVar2 == '\0') {
                    param_1->DisableEffect(108);
                    param_1->DisableEffect(109);
                }
            }
        }
    }

    // 0x100466d30, 48 bytes, placed by class name and debug map
    // SceneRenderManager::UpdateSkyBoxes(graphics::EffectManager&, graphics::SceneViewData const&)
    void SceneRenderManager::UpdateSkyBoxes(EffectManager* param_1, SceneViewData* param_2) {
        SkyBoxManager* this_00;

        this_00 = (SkyBoxManager*)field_8->GetSkyBoxManager();
        this_00->SetViewTransforms(param_2);
    }

    // 0x100466d60, 48 bytes, placed by class name and debug map
    // SceneRenderManager::UpdateViewportMap(graphics::EffectManager&)
    void SceneRenderManager::UpdateViewportMap(EffectManager* param_1) {
        SunlightDirectLighting* this_00;
        ViewportMapManager* this_01;

        this_00 = graphics::EffectManager::GetEffect<graphics::SunlightDirectLighting>(param_1, 54);
        this_01 = (ViewportMapManager*)this_00->GetDefaultValue();
        this_01->Update();
    }

    // 0x100466d90, 128 bytes, placed by class name and debug map
    // SceneRenderManager::RenderSkyBoxes(unsigned int, int, graphics::EffectManager&, graphics::SceneViewData const&, graphics::GraphRoot*)
    void SceneRenderManager::RenderSkyBoxes(uint param_1, int param_2, EffectManager* param_3, SceneViewData* param_4,
                                            GraphRoot* param_5) {
        uint uVar1;
        vector<render::Viewport, eastl::fixed_vector_allocator<24ul, 2ul, 4ul, 0ul, true, eastl::allocator>>* this;
        function* pfVar2;
        undefined4 in_register_0000003c;

        uVar1 = (*(RT7Core**)(CONCAT44(in_register_0000003c, param_1) + 8))->GetSkyBoxManager();
        this = (vector<render::Viewport, eastl::fixed_vector_allocator<24ul, 2ul, 4ul, 0ul, true, eastl::allocator>>*)
                   param_5->GetStaticChildren();
        pfVar2 = (function*)
            eastl::vector<render::Viewport,
                          eastl::fixed_vector_allocator<24ul, 2ul, 4ul, 0ul, true, eastl::allocator>>::operator[](this,
                                                                                                                  0);
        graphics::SkyBoxManager::Render(uVar1, param_2, (EffectManager*)((ulong)param_3 & 4294967295),
                                        (Viewport*)param_4, pfVar2,
                                        (GraphRoot*)(CONCAT44(in_register_0000003c, param_1) + 13072));
    }

    // 0x100466e10, 1152 bytes, placed by class name and debug map
    // SceneRenderManager::RenderSunlightShadows(unsigned int, int, graphics::EffectManager&, graphics::SceneViewData const&, graphics::GraphRoot*)
    void SceneRenderManager::RenderSunlightShadows(uint param_1, int param_2, EffectManager* param_3,
                                                   SceneViewData* param_4, GraphRoot* param_5) {
        int iVar1;
        undefined1* this_00;
        undefined1* this_01;
        undefined1* puVar2;
        undefined1* puVar3;
        undefined1* puVar4;
        char cVar5;
        bool bVar6;
        SunlightShadows* this_03;
        RT7Core* this_04;
        RenderContext* this_05;
        Vector4T* pVVar7;
        long lVar8;
        ShadowMapCascade* this_06;
        ViewTransforms* pVVar9;
        Frustum* pFVar10;
        GraphNode* pGVar11;
        undefined4 in_register_00000014;
        RT7Core* pRVar12;
        RenderContext* this_07;
        uint uVar13;
        undefined1 local_328[32];
        Frustum* local_300;
        uint local_2f8;
        vector* local_2f0;
        SceneRenderManager* local_2e8;
        RT7Core* local_2e0;
        undefined1 local_2d8[368];
        RenderTargetData local_168;
        fixed_vector<render::Viewport, 2ul, true, eastl::allocator> local_128[240];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_328._24_8_ = param_4;
        local_2e8 = this;
        cVar5 = param_3->IsEnabled(30, CONCAT44(in_register_00000014, param_2));
        if (cVar5 != '\0') {
            this_03 =
                (SunlightShadows*)graphics::EffectManager::GetEffect<graphics::SunlightDirectLighting>(param_3, 30);
            this_04 = (RT7Core*)this_03->GetSunlightCsmManager();
            pRVar12 = this_04;
            cVar5 = this_04->UpdatePaused();
            if (cVar5 == '\0') {
                this_05 = (RenderContext*)pRVar12->GetRenderContext();
                new (local_2d8) graphics::SceneViewData();
                local_2e0 = this_04;
                this_04->GetShadowMapAtlasRenderTargetData(&local_168);
                local_328->GetShadowMapAtlasViewport();
                eastl::fixed_vector<render::Viewport, 2ul, true, eastl::allocator>::push_back(local_128,
                                                                                              (Viewport*)local_328);
                this_05->SetRenderTargets(local_168.field_0);
                if (local_2e8->field_13232 == false) {
                    local_328->GetShadowMapAtlasViewport();
                    this_05->SetViewports(local_328, 1);
                    this_05->SetScissorRectangle(false, local_328);
                    this_07 = (RenderContext*)param_3;
                    cVar5 = param_3->IsEnabled(37);
                    if (cVar5 != '\0') {
                        local_168.field_48 = local_168.field_48 | 1;
                    }
                    if ((local_168.field_48 & 1) != 0) {
                        pVVar7 =
                            (Vector4T*)std::array<math::Vector4T<float>, 2ul>::operator[]((ulong)&local_168.field_16);
                        this_07 = this_05;
                        this_05->ClearRenderTargets(pVVar7, 1);
                    }
                    if ((local_168.field_48 & 6) != 0) {
                        lVar8 = this_07->Instance();
                        this_05->SetDepthStencilState((DepthStencilState*)(lVar8 + 720));
                        this_05->ClearDepthStencilTarget(local_168.field_52, local_168.field_56, local_168.field_48);
                    }
                }
                pRVar12 = local_2e0;
                lVar8 = local_2e0->GetHeadList();
                if (0.0 < *(float*)(lVar8 + 104)) {
                    lVar8 = pRVar12->GetHeadList();
                    local_2f8 = *(uint*)(lVar8 + 8);
                    if (local_2f8 != 0) {
                        local_2f0 = (vector*)&local_2e8->field_48;
                        local_300 = (Frustum*)(local_328._24_8_ + 208);
                        this_01 = local_2e8->field_12816;
                        puVar2 = &local_2e8->field_13192;
                        puVar4 = local_2e8->field_12816;
                        puVar3 = &local_2e8->field_13008;
                        this_00 = &local_2e8->field_80;
                        uVar13 = 0;
                        do {
                            this_06 = (ShadowMapCascade*)pRVar12->GetShadowMapCascade(uVar13);
                            if (this_06 == (ShadowMapCascade*)0) {
                                /* WARNING: Subroutine does not return */
                                LogAssert("pCascade",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                          "runetek5/scene/SceneRenderManager.cpp",
                                          1128, (char*)0);
                            }
                            cVar5 = this_06->CanRender();
                            if (cVar5 != '\0') {
                                this_06->SetClearViewport(local_2e8->field_13232);
                                pVVar9 = (ViewTransforms*)this_06->GetLightViewTransforms();
                                ViewTransforms::operator=((ViewTransforms*)local_2d8, pVVar9);
                                bVar6 = (bool)local_328._24_8_->GetOcclusionTestEnabled();
                                local_2d8->SetOcclusionTestEnabled(bVar6);
                                local_2d8->RenderPassPushBack(this_06);
                                eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
                                math::Frustum::operator=((Frustum*)this_01, local_300);
                                iVar1 = uVar13 + 2;
                                ((puVar4 + 160))->SetXYZ(puVar2);
                                *(ShadowMapCascade**)(local_2e8->field_12816 + 176) = this_06;
                                *(int*)(local_2e8->field_12816 + 184) = iVar1;
                                if (param_5 == (GraphRoot*)0) {
                                    pGVar11 = (GraphNode*)0;
                                    pRVar12 = local_2e0;
                                } else {
                                    pFVar10 = (Frustum*)this_06->GetCasterCullFrustum();
                                    param_5->VisibilityTest(local_2f0, param_1, pFVar10, iVar1, iVar1, puVar3, 0,
                                                            local_300);
                                    pRVar12 = local_2e0;
                                    pGVar11 = (GraphNode*)param_5->GetRoot();
                                }
                                local_328._0_4_ = 0;
                                new (local_328) callstack::Callstack();
                                this_00->RenderView(local_2f0, local_2d8, pGVar11, param_3, true, local_328);
                                local_2d8->RenderPassPopBack();
                            }
                            uVar13 = uVar13 + 1;
                        } while (local_2f8 != uVar13);
                    }
                }
                this_03->Update();
                local_2d8->~SceneViewData();
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100467290, 128 bytes, placed by class name and debug map
    // SceneRenderManager::RenderPointLightShadows(unsigned int, int, graphics::EffectManager&, graphics::SceneViewData const&, graphics::GraphRoot*)
    void SceneRenderManager::RenderPointLightShadows(uint param_1, int param_2, EffectManager* param_3,
                                                     SceneViewData* param_4, GraphRoot* param_5) {
        PointLightShadowRenderer local_68;

        new (&local_68)
            PointLightShadowRenderer(field_8, (Renderer*)&field_80, (PointLightShadowPassVisTestFunctor*)field_12736,
                                     (function*)(field_12736 + 32), (vector*)&field_13120, (Vector3T*)field_13248);
        local_68.RenderPointLightShadows(param_1, param_2, param_3, param_4, param_5);
    }

    // 0x100467310, 1168 bytes, placed by class name and debug map
    // SceneRenderManager::RenderWaterReflection(unsigned int, int, graphics::EffectManager&, graphics::SceneViewData const&, graphics::GraphRoot*, math::Vector4T<float> const&)
    void SceneRenderManager::RenderWaterReflection(uint param_1, int param_2, EffectManager* param_3,
                                                   SceneViewData* param_4, GraphRoot* param_5, Vector4T* param_6) {
        EffectManager* pEVar1;
        GraphRoot* this_00;
        char cVar2;
        bool bVar3;
        SunlightDirectLighting* pSVar4;
        NXTPixToolkit* pNVar5;
        Rect<float>* this_01;
        undefined4* puVar6;
        ViewTransforms* pVVar7;
        undefined1* puVar8;
        RenderPass* pRVar9;
        Frustum* pFVar10;
        GraphNode* pGVar11;
        undefined4 in_register_00000014;
        undefined1 local_2a10[24];
        EffectManager* local_29f8;
        SceneViewData* local_29f0;
        GraphRoot* local_29e8;
        uint local_29dc;
        undefined1 local_29d8[16];
        EffectStateSaveRestore local_29c8[309];
        fixed_map<graphics::EffectType, bool, 121ul, true, eastl::less<graphics::EffectType>, eastl::allocator>
            local_1678[4936];
        Viewport local_330[3];
        undefined1 local_2d8[384];
        undefined1 local_158[32];
        undefined8 local_138;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if ((field_13248[12] != '\0') &&
            (cVar2 = param_3->IsEnabled(107, CONCAT44(in_register_00000014, param_2)), cVar2 != '\0')) {
            local_29f8 = param_3;
            local_29f0 = param_4;
            pSVar4 = graphics::EffectManager::GetEffect<graphics::SunlightDirectLighting>(param_3, 107);
            pNVar5 = (NXTPixToolkit*)pSVar4->GetDefaultValue();
            new (local_2d8) graphics::SceneViewData();
            local_29d8._8_8_ = pNVar5;
            local_2a10->GetReflectionMapViewport();
            local_29dc = param_1;
            new (local_330) eastl::fixed_vector<render::Viewport, 2ul, true, eastl::allocator>();
            local_29e8 = param_5;
            eastl::fixed_vector<render::Viewport, 2ul, true, eastl::allocator>::push_back(local_330);
            pEVar1 = local_29f8;
            local_2d8->SetRenderTargetViewports(local_330);
            local_29d8._8_8_->GetReflectionMapRenderTargets((RenderTargetData*)(local_2d8 + 368));
            local_138 = 3;
            this_01 = (Rect<float>*)std::array<math::Vector4T<float>, 2ul>::operator[]((ulong)local_158);
            math::Rect<float>::operator=(this_01, (Rect*)param_6);
            puVar6 = (undefined4*)this_01->qw();
            *puVar6 = 0;
            pVVar7 = (ViewTransforms*)local_29d8._8_8_->GetWorld();
            local_2d8->SetTransforms(pVVar7);
            bVar3 = (bool)local_29f0->GetOcclusionTestEnabled();
            local_2d8->SetOcclusionTestEnabled(bVar3);
            eastl::fixed_map<graphics::EffectType, bool, 121ul, true, eastl::less<graphics::EffectType>,
                             eastl::allocator>::fixed_map(local_1678);
            this_00 = local_29e8;
            local_29c8[0].field_0._0_1_ = 107;
            puVar8 =
                (undefined1*)eastl::map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                                        eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>::
                operator[]((map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                                eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>*)local_1678,
                           (EffectType*)local_29c8);
            *puVar8 = 0;
            local_29c8[0].field_0._0_1_ = 108;
            puVar8 =
                (undefined1*)eastl::map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                                        eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>::
                operator[]((map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                                eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>*)local_1678,
                           (EffectType*)local_29c8);
            *puVar8 = 0;
            local_29c8[0].field_0._0_1_ = 44;
            puVar8 =
                (undefined1*)eastl::map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                                        eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>::
                operator[]((map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                                eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>*)local_1678,
                           (EffectType*)local_29c8);
            *puVar8 = 0;
            local_29c8[0].field_0._0_1_ = 30;
            puVar8 =
                (undefined1*)eastl::map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                                        eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>::
                operator[]((map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                                eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>*)local_1678,
                           (EffectType*)local_29c8);
            *puVar8 = 0;
            local_29c8[0].field_0._0_1_ = 35;
            puVar8 =
                (undefined1*)eastl::map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                                        eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>::
                operator[]((map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                                eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>*)local_1678,
                           (EffectType*)local_29c8);
            *puVar8 = 0;
            local_29c8[0].field_0._0_1_ = 28;
            puVar8 =
                (undefined1*)eastl::map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                                        eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>::
                operator[]((map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                                eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>*)local_1678,
                           (EffectType*)local_29c8);
            *puVar8 = 0;
            local_29c8[0].field_0._0_1_ = 110;
            puVar8 =
                (undefined1*)eastl::map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                                        eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>::
                operator[]((map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                                eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>*)local_1678,
                           (EffectType*)local_29c8);
            *puVar8 = 0;
            local_29c8[0].field_0._0_1_ = 26;
            puVar8 =
                (undefined1*)eastl::map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                                        eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>::
                operator[]((map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                                eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>*)local_1678,
                           (EffectType*)local_29c8);
            *puVar8 = 1;
            local_29c8[0].field_0._0_1_ = 64;
            puVar8 =
                (undefined1*)eastl::map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                                        eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>::
                operator[]((map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                                eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>*)local_1678,
                           (EffectType*)local_29c8);
            *puVar8 = 0;
            local_29c8[0].field_0._0_1_ = 57;
            puVar8 =
                (undefined1*)eastl::map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                                        eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>::
                operator[]((map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                                eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>*)local_1678,
                           (EffectType*)local_29c8);
            *puVar8 = 1;
            local_29c8[0].field_0._0_1_ = 50;
            puVar8 =
                (undefined1*)eastl::map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                                        eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>::
                operator[]((map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                                eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>*)local_1678,
                           (EffectType*)local_29c8);
            *puVar8 = 1;
            pSVar4 = graphics::EffectManager::GetEffect<graphics::SunlightDirectLighting>(pEVar1, 87);
            new (local_29c8) math::Vector4T<float>((Vector3T*)&field_14240, field_14252);
            pSVar4->SetClipPlane(local_29c8);
            graphics::EffectStateSaveRestore::EffectStateSaveRestore(local_29c8, pEVar1, (fixed_map*)local_1678);
            pRVar9 = (RenderPass*)field_8->GetWaterReflectionPass();
            local_2d8->RenderPassPushBack(pRVar9);
            eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
            if (this_00 == (GraphRoot*)0) {
                pGVar11 = (GraphNode*)0;
            } else {
                pFVar10 = (Frustum*)local_29d8._8_8_->GetScreen();
                this_00->VisibilityTest((vector*)&field_48, local_29dc, pFVar10, 7, 7, (function*)&field_13072,
                                        (AABB*)0, (Frustum*)0);
                pGVar11 = (GraphNode*)this_00->GetRoot();
            }
            local_29d8._0_4_ = 0;
            new (local_29d8) callstack::Callstack();
            (&field_80, (vector*)&field_48, (SceneViewData*)local_2d8, pGVar11, pEVar1, true,
             (RenderPassBitSet*)local_29d8)
                ->RenderView();
            local_29c8->~EffectStateSaveRestore();
            eastl::fixed_map<graphics::EffectType, bool, 121ul, true, eastl::less<graphics::EffectType>,
                             eastl::allocator>::~fixed_map(local_1678);
            local_330->~fixed_vector();
            local_2d8->~SceneViewData();
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1004677a0, 1424 bytes, placed by class name and debug map
    // SceneRenderManager::RenderWaterCaustics(unsigned int, int, graphics::EffectManager&, graphics::SceneViewData const&, graphics::GraphRoot*)
    void SceneRenderManager::RenderWaterCaustics(uint param_1, int param_2, EffectManager* param_3,
                                                 SceneViewData* param_4, GraphRoot* param_5) {
        undefined8 uVar1;
        RT7Core* this_00;
        NXTPixToolkit* this_01;
        RenderContext* this_02;
        long lVar3;
        RenderPass* pRVar4;
        undefined1* puVar5;
        Frustum* pFVar6;
        GraphNode* pGVar7;
        Rect<float>* this_03;
        undefined1* puVar8;
        undefined4 in_register_00000014;
        RenderContext* this_04;
        undefined1 local_2a10[32];
        Renderer* local_29f0;
        undefined1 local_29e0[8];
        RenderTargetData local_29d8[77];
        CausticsManager local_1680[11];
        Viewport local_338[3];
        undefined1 local_2d8[384];
        undefined1 local_158[32];
        undefined4 local_138;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (param_3->IsEnabled(44, CONCAT44(in_register_00000014, param_2)) != '\0') {
            this_00 = (RT7Core*)graphics::EffectManager::GetEffect<graphics::SunlightDirectLighting>(param_3, 44);
            this_01 = (NXTPixToolkit*)this_00->GetDevCredentialsOutputDirectory();
            this_02 = (RenderContext*)this_00->GetRenderContext();
            new (local_2d8) graphics::SceneViewData();
            local_1680->GetCausticsMapViewport();
            this_02->SetViewports(local_1680, 1);
            new (local_338) ImVec4(0.0, 0.0, 0.0, 1.0);
            new ((local_29e0 + 8)) render::RenderTargetData(0, local_338, 1, 1.0, 0);
            this_01->GetCausticsIntegerMapRenderTargets((RenderTargetData*)(local_29e0 + 8));
            this_04 = this_02;
            this_02->SetRenderTargets(
                (RenderTargets*)CONCAT71(local_29d8[0].field_0._1_7_, local_29d8[0].field_0._0_1_));
            lVar3 = this_04->Instance();
            this_02->SetBlendState((BlendState*)(lVar3 + 1524));
            new (local_338) ImVec4(0.0, 0.0, 0.0, 0.0);
            this_02->ClearRenderTargets(local_338, 1);
            local_2a10->GetCausticsComputeMapViewport();
            new (local_338) eastl::fixed_vector<render::Viewport, 2ul, true, eastl::allocator>();
            eastl::fixed_vector<render::Viewport, 2ul, true, eastl::allocator>::push_back(local_338);
            local_2d8->SetRenderTargetViewports(local_338);
            this_01->GetCausticsComputeMapRenderTargets((RenderTargetData*)(local_2d8 + 368));
            local_138 = 0;
            local_2d8->SetTransforms(field_13712);
            pRVar4 = (RenderPass*)field_8->GetWaterCausticsPass();
            local_2d8->RenderPassPushBack(pRVar4);
            new (local_1680) eastl::fixed_map<graphics::EffectType, bool, 121ul, true,
                                              eastl::less<graphics::EffectType>, eastl::allocator>();
            local_29d8[0].field_0._0_1_ = 107;
            puVar5 =
                (undefined1*)eastl::map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                                        eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>::
                operator[]((map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                                eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>*)local_1680,
                           local_29e0 + 8);
            *puVar5 = 0;
            local_29d8[0].field_0._0_1_ = 30;
            puVar5 =
                (undefined1*)eastl::map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                                        eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>::
                operator[]((map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                                eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>*)local_1680,
                           local_29e0 + 8);
            *puVar5 = 0;
            local_29d8[0].field_0._0_1_ = 35;
            puVar5 =
                (undefined1*)eastl::map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                                        eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>::
                operator[]((map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                                eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>*)local_1680,
                           local_29e0 + 8);
            *puVar5 = 0;
            new ((local_29e0 + 8)) graphics::EffectStateSaveRestore(param_3, local_1680);
            puVar5 = &field_48;
            eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
            if (param_5 != (GraphRoot*)0) {
                pFVar6 = (Frustum*)this_01->GetScreen();
                param_5->VisibilityTest(puVar5, param_1, pFVar6, 0, 0, (function*)&field_13072, (AABB*)0, (Frustum*)0);
            }
            local_29f0 = (Renderer*)&field_80;
            local_2a10._24_8_ = this;
            if (param_5 == (GraphRoot*)0) {
                pGVar7 = (GraphNode*)0;
            } else {
                pGVar7 = (GraphNode*)param_5->GetRoot();
            }
            local_29e0._0_4_ = 0;
            new (local_29e0) callstack::Callstack();
            local_29f0->RenderView(puVar5, local_2d8, pGVar7, param_3, true, local_29e0);
            ((local_29e0 + 8))->~EffectStateSaveRestore();
            local_1680->~fixed_map();
            local_338->~fixed_vector();
            local_2a10->GetCausticsMapViewport();
            uVar1 = local_2a10._24_8_;
            new (local_338) eastl::fixed_vector<render::Viewport, 2ul, true, eastl::allocator>();
            eastl::fixed_vector<render::Viewport, 2ul, true, eastl::allocator>::push_back(local_338);
            local_2d8->SetRenderTargetViewports(local_338);
            this_01->GetCausticsFloatMapRenderTargets((RenderTargetData*)(local_2d8 + 368));
            local_138 = 1;
            new ((local_29e0 + 8)) ImVec4(0.0, 0.0, 0.0, 0.0);
            this_03 = (Rect<float>*)std::array<math::Vector4T<float>, 2ul>::operator[]((ulong)local_158);
            math::Rect<float>::operator=(this_03, (Rect*)(local_29e0 + 8));
            new (local_1680) eastl::fixed_map<graphics::EffectType, bool, 121ul, true,
                                              eastl::less<graphics::EffectType>, eastl::allocator>();
            local_29d8[0].field_0._0_1_ = 46;
            puVar8 =
                (undefined1*)eastl::map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                                        eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>::
                operator[]((map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                                eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>*)local_1680,
                           local_29e0 + 8);
            *puVar8 = 1;
            local_29d8[0].field_0._0_1_ = 107;
            puVar8 =
                (undefined1*)eastl::map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                                        eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>::
                operator[]((map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                                eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>*)local_1680,
                           local_29e0 + 8);
            *puVar8 = 0;
            local_29d8[0].field_0._0_1_ = 30;
            puVar8 =
                (undefined1*)eastl::map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                                        eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>::
                operator[]((map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                                eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>*)local_1680,
                           local_29e0 + 8);
            *puVar8 = 0;
            local_29d8[0].field_0._0_1_ = 35;
            puVar8 =
                (undefined1*)eastl::map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                                        eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>::
                operator[]((map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                                eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>*)local_1680,
                           local_29e0 + 8);
            *puVar8 = 0;
            new ((local_29e0 + 8)) graphics::EffectStateSaveRestore(param_3, local_1680);
            pRVar4 = (RenderPass*)(*(RT7Core**)(uVar1 + 8))->GetWaterCausticsPass();
            local_2d8->RenderPassPushBack(pRVar4);
            if (param_5 == (GraphRoot*)0) {
                pGVar7 = (GraphNode*)0;
            } else {
                pGVar7 = (GraphNode*)param_5->GetRoot();
            }
            local_29e0._0_4_ = 0;
            new (local_29e0) callstack::Callstack();
            local_29f0->RenderView(puVar5, local_2d8, pGVar7, param_3, false, local_29e0);
            ((local_29e0 + 8))->~EffectStateSaveRestore();
            local_1680->~fixed_map();
            local_338->~fixed_vector();
            local_2d8->~SceneViewData();
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100467d60, 64 bytes, placed by class name
    // SceneRenderManager::UnregisterRenderTargets(graphics::EffectManager&)
    void SceneRenderManager::UnregisterRenderTargets(EffectManager* param_1) {
        SkyBoxManager* this_00;
        SunlightDirectLighting* pSVar1;

        this_00 = (SkyBoxManager*)field_8->GetSkyBoxManager();
        this_00->UnregisterRenderTargets();
        pSVar1 = graphics::EffectManager::GetEffect<graphics::SunlightDirectLighting>(param_1, 108);
        (*(code*)pSVar1->field_0[10])(pSVar1);
    }

    // 0x100467da0, 1824 bytes, placed by class name
    // SceneRenderManager::RenderDebug(render::Viewport const&)
    void SceneRenderManager::RenderDebug(Viewport* param_1) {
        int* piVar1;
        float* this;
        long* plVar2;
        undefined8 uVar3;
        undefined8 local_c8[2];
        undefined8 local_b8[2];
        undefined8 local_a8[2];
        undefined8 local_98[2];
        undefined8 local_88;
        SideBarData local_70;
        undefined1 local_60[16];
        SideBarData local_50;
        SideBarData local_40;

        if (m_showCameraFrustum != '\0') {
            plVar2 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar2 != (long*)0) {
                local_40._0_8_ = param_1[497].field_4.GetNearBottomLeft();
                new (local_60) math::Sphere((Vector3T*)&local_40, 1.0);
                new ((local_60 + 16)) oldscape::sidebars::SideBarData(-1, 3);
                (**(code**)(*plVar2 + 32))(plVar2, (Sphere*)local_60, (SideBarData*)(local_60 + 16));
            }
            plVar2 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar2 != (long*)0) {
                local_40._0_8_ = param_1[497].field_4.GetNearBottomRight();
                new (local_60) math::Sphere((Vector3T*)&local_40, 1.0);
                new ((local_60 + 16)) oldscape::sidebars::SideBarData(-1, 3);
                (**(code**)(*plVar2 + 32))(plVar2, (Sphere*)local_60, (SideBarData*)(local_60 + 16));
            }
            plVar2 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar2 != (long*)0) {
                local_40._0_8_ = param_1[497].field_4.GetNearTopLeft();
                new (local_60) math::Sphere((Vector3T*)&local_40, 1.0);
                new ((local_60 + 16)) oldscape::sidebars::SideBarData(-1, 3);
                (**(code**)(*plVar2 + 32))(plVar2, (Sphere*)local_60, (SideBarData*)(local_60 + 16));
            }
            plVar2 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar2 != (long*)0) {
                local_40._0_8_ = param_1[497].field_4.GetNearTopRight();
                new (local_60) math::Sphere((Vector3T*)&local_40, 1.0);
                new ((local_60 + 16)) oldscape::sidebars::SideBarData(-1, 3);
                (**(code**)(*plVar2 + 32))(plVar2, (Sphere*)local_60, (SideBarData*)(local_60 + 16));
            }
            plVar2 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar2 != (long*)0) {
                new (local_60) oldscape::sidebars::SideBarData(-1, 3);
                (**(code**)(*plVar2 + 96))(plVar2, &param_1[497].field_4, &param_1[509].field_20,
                                           (SideBarData*)local_60);
            }
            plVar2 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar2 != (long*)0) {
                local_40._0_8_ = param_1[502].field_24.GetNearBottomLeft();
                new (local_60) math::Sphere((Vector3T*)&local_40, 1.0);
                new ((local_60 + 16)) oldscape::sidebars::SideBarData(-65536, 3);
                (**(code**)(*plVar2 + 32))(plVar2, (Sphere*)local_60, (SideBarData*)(local_60 + 16));
            }
            plVar2 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar2 != (long*)0) {
                local_40._0_8_ = param_1[502].field_24.GetNearBottomRight();
                new (local_60) math::Sphere((Vector3T*)&local_40, 1.0);
                new ((local_60 + 16)) oldscape::sidebars::SideBarData(-65536, 3);
                (**(code**)(*plVar2 + 32))(plVar2, (Sphere*)local_60, (SideBarData*)(local_60 + 16));
            }
            plVar2 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar2 != (long*)0) {
                local_40._0_8_ = param_1[502].field_24.GetNearTopLeft();
                new (local_60) math::Sphere((Vector3T*)&local_40, 1.0);
                new ((local_60 + 16)) oldscape::sidebars::SideBarData(-65536, 3);
                (**(code**)(*plVar2 + 32))(plVar2, (Sphere*)local_60, (SideBarData*)(local_60 + 16));
            }
            plVar2 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar2 != (long*)0) {
                local_40._0_8_ = param_1[502].field_24.GetNearTopRight();
                new (local_60) math::Sphere((Vector3T*)&local_40, 1.0);
                new ((local_60 + 16)) oldscape::sidebars::SideBarData(-65536, 3);
                (**(code**)(*plVar2 + 32))(plVar2, (Sphere*)local_60, (SideBarData*)(local_60 + 16));
            }
            plVar2 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar2 != (long*)0) {
                new (local_60) oldscape::sidebars::SideBarData(-65536, 3);
                (**(code**)(*plVar2 + 96))(plVar2, &param_1[502].field_24, &param_1[514].field_8,
                                           (SideBarData*)local_60);
            }
            plVar2 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar2 != (long*)0) {
                new (local_60) oldscape::sidebars::SideBarData(-256, 3);
                (**(code**)(*plVar2 + 96))(plVar2, &param_1[502].field_24, param_1 + 512, (SideBarData*)local_60);
            }
            piVar1 = &param_1[497].field_4;
            local_c8[0] = piVar1->GetNearBottomLeft();
            local_b8[0] = piVar1->GetNearBottomRight();
            local_70._0_8_ = math::operator+((Vector3T*)local_c8, (Vector3T*)local_b8);
            local_a8[0] = piVar1->GetNearTopLeft();
            local_50._0_8_ = math::operator+((Vector3T*)&local_70, (Vector3T*)local_a8);
            local_98[0] = piVar1->GetNearTopRight();
            local_40._0_8_ = math::operator+((Vector3T*)(local_60 + 16), (Vector3T*)local_98);
            local_60._0_8_ = math::operator*((Vector3T*)&local_40, 0.25);
            this = &param_1[508].field_16;
            local_88 = SignedDistanceTo(local_60);
            plVar2 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar2 != (long*)0) {
                new (&local_40) oldscape::sidebars::SideBarData(-16711681, 3);
                (**(code**)(*plVar2 + 104))(plVar2, local_60, this, 2048, 2048, &local_40);
            }
            plVar2 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar2 != (long*)0) {
                local_50._0_8_ = math::operator*((Vector3T*)this, -(float)local_88);
                local_40._0_8_ = math::operator+((Vector3T*)local_60, (Vector3T*)(local_60 + 16));
                new (&local_70) oldscape::sidebars::SideBarData(-16711681, 3);
                (**(code**)(*plVar2 + 24))(plVar2, (Vector3T*)local_60, &local_40, &local_70);
            }
            piVar1 = &param_1[509].field_4;
            uVar3 = piVar1->SignedDistanceTo(local_60);
            local_88 = uVar3;
            plVar2 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar2 != (long*)0) {
                new (&local_40) oldscape::sidebars::SideBarData(-65281, 3);
                (**(code**)(*plVar2 + 104))(plVar2, local_60, piVar1, 2048, 2048, &local_40);
            }
            plVar2 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar2 != (long*)0) {
                local_50._0_8_ = math::operator*((Vector3T*)piVar1, -(float)local_88);
                local_40._0_8_ = math::operator+((Vector3T*)local_60, (Vector3T*)(local_60 + 16));
                new (&local_70) oldscape::sidebars::SideBarData(-65281, 3);
                (**(code**)(*plVar2 + 24))(plVar2, (Vector3T*)local_60, &local_40, &local_70);
            }
            plVar2 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar2 != (long*)0) {
                local_40._0_8_ = math::operator*((Vector3T*)this, -(float)param_1[509].field_0);
                new ((local_60 + 16)) oldscape::sidebars::SideBarData(-16777216, 3);
                (**(code**)(*plVar2 + 24))(plVar2, PTR_ZERO_100ee66e8, &local_40, (SideBarData*)(local_60 + 16));
            }
        }
    }

    // 0x1004684c0, 96 bytes, placed by class name
    // SceneRenderManager::AddDrawableList(graphics::DrawableList*)
    void SceneRenderManager::AddDrawableList(DrawableList* param_1) {
        if (param_1 == (DrawableList*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("drawableList != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "SceneRenderManager.cpp",
                      512, (char*)0);
        }
        (&field_80, param_1)->AddDrawableList();
        (&field_6408, param_1)->AddDrawableList();
    }

    // 0x100468520, 96 bytes, placed by class name
    // SceneRenderManager::RemoveDrawableList(graphics::DrawableList*)
    void SceneRenderManager::RemoveDrawableList(DrawableList* param_1) {
        if (param_1 == (DrawableList*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("drawableList != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "SceneRenderManager.cpp",
                      520, (char*)0);
        }
        (&field_80, param_1)->RemoveDrawableList();
        (&field_6408, param_1)->RemoveDrawableList();
    }

    // 0x100468580, 96 bytes, placed by class name
    // SceneRenderManager::AddDrawable(graphics::Drawable*)
    void SceneRenderManager::AddDrawable(Drawable* param_1) {
        if (param_1 == (Drawable*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("drawable != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "SceneRenderManager.cpp",
                      528, (char*)0);
        }
        (&field_80, param_1)->AddDrawable();
        (&field_6408, param_1)->AddDrawable();
    }

    // 0x1004685e0, 96 bytes, placed by class name
    // SceneRenderManager::RemoveDrawable(graphics::Drawable*)
    void SceneRenderManager::RemoveDrawable(Drawable* param_1) {
        if (param_1 == (Drawable*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("drawable != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "SceneRenderManager.cpp",
                      536, (char*)0);
        }
        (&field_80, param_1)->RemoveDrawable();
        (&field_6408, param_1)->RemoveDrawable();
    }

    // 0x100468640, 608 bytes, placed by class name
    // SceneRenderManager::AddShadowCastingPointLight(graphics::SceneViewData const&, float, float, shared_ptr<LightSource> const&, math::Sphere const&)
    void SceneRenderManager::AddShadowCastingPointLight(SceneViewData* param_1, float param_2, float param_3,
                                                        shared_ptr* param_4, Sphere* param_5) {
        undefined1* puVar1;
        SceneRenderManager* pSVar2;
        vector_set<render::IndexBuffer_const*, eastl::less<render::IndexBuffer_const*>, eastl::allocator,
                   eastl::vector<render::IndexBuffer_const*, eastl::allocator>>* this_00;
        char cVar3;
        LightSource* pLVar4;
        shared_ptr<StaticPointLight>* this_01;
        StaticPointLight* this_02;
        GraphNode* this_03;
        char* pcVar5;
        long lVar6;
        long lVar7;
        vector* pvVar8;
        vector* pvVar9;
        ViewTransforms* pVVar10;
        type* ptVar11;
        float fVar12;
        undefined8 local_90;
        float local_88;
        SceneViewData* local_80;
        SceneRenderManager* local_78;
        ulonglong local_70;
        float local_68;
        float local_60;
        float local_5c;
        undefined8 local_58;
        float local_50;
        vector_set<render::IndexBuffer_const*, eastl::less<render::IndexBuffer_const*>, eastl::allocator,
                   eastl::vector<render::IndexBuffer_const*, eastl::allocator>>* local_48;
        LightSource* local_40;
        float local_38;

        local_60 = param_3;
        local_5c = param_2;
        pLVar4 = (LightSource*)shared_ptr<LightSource>::operator->((shared_ptr<LightSource>*)param_4);
        this_01 = (shared_ptr<StaticPointLight>*)pLVar4->GetConfigurationSource();
        this_02 = (StaticPointLight*)shared_ptr<StaticPointLight>::operator->(this_01);
        cVar3 = this_02->GetShadowsEnabled();
        if (cVar3 != '\0') {
            this_03 = (GraphNode*)shared_ptr<LightSource>::operator->((shared_ptr<LightSource>*)param_4);
            pcVar5 = (char*)this_03->GetChildren();
            if (*pcVar5 != '\0') {
                puVar1 = &field_13152;
                local_80 = param_1;
                local_58 = param_4->end();
                ptVar11 = (type*)&local_58;
                lVar6 = puVar1->find(ptVar11);
                lVar7 = puVar1->end();
                if (lVar6 == lVar7) {
                    local_78 = this;
                    local_48 =
                        (vector_set<render::IndexBuffer_const*, eastl::less<render::IndexBuffer_const*>,
                                    eastl::allocator, eastl::vector<render::IndexBuffer_const*, eastl::allocator>>*)
                            puVar1;
                    pvVar8 = local_80->SSOBeginPtr(ptVar11);
                    pvVar9 = param_5->SSOBeginPtr(ptVar11);
                    pvVar8 = pvVar8->SSOBeginPtr(ptVar11);
                    local_58 = math::operator-((Vector3T*)pvVar9, (Vector3T*)pvVar8);
                    local_50 = param_3;
                    local_90 = math::Vector3Normalize<float>((Vector3T*)&local_58);
                    local_88 = param_3;
                    fVar12 = (float)param_5->GetOutlineRadiusAdjustment();
                    local_40 = (LightSource*)math::operator*((Vector3T*)&local_90, fVar12);
                    local_38 = param_3;
                    local_70 = math::operator-((Vector3T*)&local_58, (Vector3T*)&local_40);
                    local_68 = param_3;
                    fVar12 = (float)local_70.Length();
                    if (fVar12 < local_60) {
                        fVar12 = (float)param_5->GetOutlineRadiusAdjustment();
                        pSVar2 = local_78;
                        if (local_5c <= fVar12) {
                            puVar1 = local_78->field_13248;
                            ptVar11 = (type*)PTR_ZERO_100ee66e8;
                            cVar3 = puVar1->SloppyCompare(PTR_ZERO_100ee66e8, 1e-06);
                            if (cVar3 == '\0') {
                                pLVar4 = (LightSource*)shared_ptr<LightSource>::operator->(
                                    (shared_ptr<LightSource>*)param_4);
                                fVar12 = (float)pLVar4->GetCurrentIntensity();
                                local_70 = (&pSVar2->field_13236, (Vector3T*)puVar1, param_5, fVar12)
                                               ->CalculateShadowCastingImportanceKey();
                            } else {
                                pVVar10 = (ViewTransforms*)local_80->SSOBeginPtr(ptVar11);
                                pLVar4 = (LightSource*)shared_ptr<LightSource>::operator->(
                                    (shared_ptr<LightSource>*)param_4);
                                fVar12 = (float)pLVar4->GetCurrentIntensity();
                                local_70 = (&pSVar2->field_13236, pVVar10, (Vector3T*)&local_58, param_5, fVar12)
                                               ->CalculateShadowCastingImportanceKey();
                            }
                            this_00 = local_48;
                            local_40 = (LightSource*)param_4->end();
                            lVar6 = eastl::vector_set<render::IndexBuffer_const*,
                                                      eastl::less<render::IndexBuffer_const*>, eastl::allocator,
                                                      eastl::vector<render::IndexBuffer_const*, eastl::allocator>>::
                                find(this_00, (IndexBuffer**)&local_40);
                            lVar7 = this_00->end();
                            if (lVar6 != lVar7) {
                                /* WARNING: Subroutine does not return */
                                LogAssert("m_visibleShadowCastingLights.find(lightSource.get()) == "
                                          "m_visibleShadowCastingLights.end()",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                          "runetek5/scene/SceneRenderManager.cpp",
                                          742, (char*)0);
                            }
                            eastl::vector<VisibleShadowCastingLightInfo, eastl::allocator>::emplace_back<
                                shared_ptr<LightSource> const&, unsigned long long&>(
                                (vector<VisibleShadowCastingLightInfo, eastl::allocator>*)&local_78->field_13120,
                                param_4, &local_70);
                            local_40 = (LightSource*)param_4->end();
                            eastl::vector_set<LightSource*, eastl::less<LightSource*>, eastl::allocator,
                                              eastl::vector<LightSource*, eastl::allocator>>::
                                insert<LightSource*>(
                                    (vector_set<LightSource*, eastl::less<LightSource*>, eastl::allocator,
                                                eastl::vector<LightSource*, eastl::allocator>>*)local_48,
                                    &local_40);
                        }
                    }
                }
            }
        }
    }

    // 0x100468c00, 16 bytes, placed by class name
    // SceneRenderManager::UpdatePointLightShadows(graphics::EffectManager&, graphics::SceneViewData const&)
    void SceneRenderManager::UpdatePointLightShadows(EffectManager* param_1, SceneViewData* param_2) {}

} // namespace jag::game

// 0x1004688a0, 16 bytes, placed by neighbouring functions
// floor(float)
void floor(float param_1) {
    _floorf();
}

// 0x100468be0, 16 bytes, placed by neighbouring functions
// abs(float)
ulong abs(float param_1) {
    undefined4 in_XMM0_Db;

    return CONCAT44(in_XMM0_Db, param_1) & 9223372034707292159;
}

// 0x100468bf0, 16 bytes, placed by neighbouring functions
// round(float)
void round(float param_1) {
    _roundf();
}
