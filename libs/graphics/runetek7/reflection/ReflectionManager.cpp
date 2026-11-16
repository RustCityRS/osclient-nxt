// libs/graphics/runetek7/reflection/ReflectionManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "ReflectionManager.h"

namespace jag::graphics {
    // 0x1000b9950: the linker folded this into oldscape::ScriptVarType::GetDefaultValue() const, which has identical code
    ReflectionManager::GetCullFrustum() const;

    // 0x100324d40: the linker folded this into oldscape::graphics::NXTPixToolkit::GetPix2D(), which has identical code
    ReflectionManager::GetViewTransforms() const;

    // 0x1007e0cd0, 128 bytes, base-object constructor, placed by class name and debug map
    // ReflectionManager::ReflectionManager(render::RenderTargetsManager&)
    void ReflectionManager::ReflectionManager(RenderTargetsManager* param_1) {
        new (this) Config();
        new (field_16) math::Frustum();
        new (field_176) ViewTransforms();
        new (field_384, (_func_decltype_nullptr*)param_1)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_400) ViewTransforms();
        new (&field_608) math::AABB();
        field_640 = param_1;
    }

    // 0x1007e0d60, 16 bytes, complete-object constructor, placed by class name
    // ReflectionManager::ReflectionManager(render::RenderTargetsManager&): jumps straight to the base-object constructor

    // 0x1007e0d70, 64 bytes, base-object destructor, placed by class name
    // ReflectionManager::~ReflectionManager()
    void ReflectionManager::~ReflectionManager() {
        Destroy(this);
        field_384->~shared_ptr();
    }

    // 0x1007e0db0, 16 bytes, placed by class name
    // ReflectionManager::Destroy()
    void ReflectionManager::Destroy() {
        DestroyRenderingResources(this);
    }

    // 0x1007e0dc0, 16 bytes, complete-object destructor, placed by class name
    // ReflectionManager::~ReflectionManager(): jumps straight to the base-object destructor

    // 0x1007e0dd0, 48 bytes, placed by class name
    // ReflectionManager::Initialise(ReflectionManager::Config const&)
    void ReflectionManager::Initialise(Config* param_1) {
        undefined8 uVar1;

        if (CreateRenderingResources(this, param_1) != '\0') {
            uVar1 = param_1->field_8;
            field_0 = param_1->field_0;
            field_8 = uVar1;
        }
    }

    // 0x1007e0e00, 64 bytes, placed by class name
    // ReflectionManager::CreateRenderingResources(ReflectionManager::Config const&)
    void ReflectionManager::CreateRenderingResources(Config* param_1) {
        AutoSingleton<ShaderThreadPoolSingleton> local_20[8];

        local_20->~AutoSingleton("Reflection_Manager");
        CreateRenderTargets(this, param_1);
    }

    // 0x1007e0e40, 64 bytes, placed by class name
    // ReflectionManager::DestroyRenderingResources()
    void ReflectionManager::DestroyRenderingResources() {
        AutoSingleton<ShaderThreadPoolSingleton> local_18[8];

        local_18->~AutoSingleton("Reflection_Manager");
        (field_640, (shared_ptr*)field_384)->Unregister();
    }

    // 0x1007e0e80, 160 bytes, placed by class name
    // ReflectionManager::Update(ViewTransforms const&, ViewTransforms const&)
    void ReflectionManager::Update(ViewTransforms* param_1, ViewTransforms* param_2) {
        Matrix44T* pMVar1;
        Matrix44T* pMVar2;
        ViewTransforms local_f8;

        ViewTransforms::operator=((ViewTransforms*)field_176, param_1);
        pMVar1 = (Matrix44T*)param_1->GetScreen();
        pMVar2 = (Matrix44T*)param_2->GetOrigin();
        new (&local_f8) ViewTransforms(pMVar1, pMVar2);
        ViewTransforms::operator=((ViewTransforms*)field_400, &local_f8);
        pMVar1 = (Matrix44T*)param_1->GetScreen();
        pMVar2 = (Matrix44T*)param_1->GetOrigin();
        (field_16, pMVar1, pMVar2)->Set();
    }

    // 0x1007e0f30, 80 bytes, placed by class name
    // ReflectionManager::GetReflectionMapAtlas() const
    undefined8 ReflectionManager::GetReflectionMapAtlas() {
        RenderTargets* this_00;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_01;
        undefined8 uVar2;
        undefined8* puVar3;

        this_00 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
            (shared_ptr<render::RenderTargets>*)field_384);
        this_01 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                      this_00->GetColourTargetTextures();
        if (eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
                this_01) == '\0') {
            puVar3 = (undefined8*)eastl::vector<
                render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[](
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                    this_01,
                0);
            uVar2 = *puVar3;
        } else {
            uVar2 = 0;
        }
        return uVar2;
    }

    // 0x1007e0f80, 32 bytes, placed by class name
    // ReflectionManager::GetReflectionMapAtlasDT() const
    void ReflectionManager::GetReflectionMapAtlasDT() {
        RenderTargets* this_00;

        this_00 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
            (shared_ptr<render::RenderTargets>*)field_384);
        this_00->GetDepthStencilTargetTexture();
    }

    // 0x1007e0fa0, 48 bytes, placed by class name
    // ReflectionManager::GetReflectionMapViewport() const
    ReflectionManager* ReflectionManager::GetReflectionMapViewport() {
        int* in_RSI;

        new (this) render::Viewport(0, 0, *in_RSI, in_RSI[1], 0.0, 1.0);
        return this;
    }

    // 0x1007e0fd0, 32 bytes, placed by class name
    // ReflectionManager::GetReflectionMapRenderTargets(render::RenderTargetData&)
    void ReflectionManager::GetReflectionMapRenderTargets(RenderTargetData* param_1) {
        RenderTargets* pRVar1;

        pRVar1 = (RenderTargets*)field_384->end();
        param_1->field_0 = pRVar1;
    }

    // 0x1007e0ff0, 368 bytes, placed by class name
    // ReflectionManager::CreateRenderTargets(ReflectionManager::Config const&)
    ulong ReflectionManager::CreateRenderTargets(Config* param_1) {
        RenderTargetsManager* pRVar1;
        bool bVar2;
        undefined7 extraout_var;
        Desc local_138;
        undefined4 local_f4;
        undefined4 local_f0;
        undefined4 local_ec;
        undefined8 local_e8;
        undefined8 uStack_e0;
        undefined8 local_d8;
        undefined8 uStack_d0;
        undefined8 local_c8;
        undefined8 uStack_c0;
        undefined1 local_b8[68];
        undefined4 local_74;
        undefined4 local_70;
        undefined4 local_6c;
        undefined8 local_68;
        undefined8 uStack_60;
        undefined8 local_58;
        undefined8 uStack_50;
        undefined8 local_48;
        undefined8 uStack_40;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_38[16];

        new (&local_138) render::Texture::Desc();
        local_138.field_0 = *(int*)&param_1->field_0;
        local_138.field_4 = *(int*)((long)&param_1->field_0 + 4);
        local_138.field_12 = render::GetFormatFromDepthStencilBits(*(int*)&param_1->field_8,
                                                                   *(int*)((long)&param_1->field_8 + 4), false);
        new ((local_b8 + 64)) render::Texture::Desc();
        local_138._64_4_ = *(undefined4*)&param_1->field_0;
        local_f4 = *(undefined4*)((long)&param_1->field_0 + 4);
        local_6c = 7;
        pRVar1 = field_640;
        local_c8 = local_48;
        uStack_c0 = uStack_40;
        local_d8 = local_58;
        uStack_d0 = uStack_50;
        local_e8 = local_68;
        uStack_e0 = uStack_60;
        local_f0 = local_70;
        local_ec = 7;
        local_b8._64_4_ = local_138._64_4_;
        local_74 = local_f4;
        new (local_b8) render::Texture::Desc();
        local_38->Register(pRVar1, "ReflectionMap", 3553, &local_138.field_64, 1, &local_138, 0, 1);
        shared_ptr<render::RenderTargets>::operator=((shared_ptr<render::RenderTargets>*)field_384,
                                                     (shared_ptr*)local_38);
        local_38->~shared_ptr();
        bVar2 = operator!=((shared_ptr*)field_384, (_func_decltype_nullptr*)0);
        if (!bVar2) {
            /* WARNING: Subroutine does not return */
            LogAssert("success",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "reflection/ReflectionManager.cpp",
                      94, "ReflectionManager: Failed to create reflection target textures");
        }
        return CONCAT71(extraout_var, bVar2) & 4294967295;
    }

    // 0x1007e1160, 320 bytes, placed by class name
    // ReflectionManager::AddWaterPatchAABB(math::AABB const&)
    void ReflectionManager::AddWaterPatchAABB(AABB* param_1) {
        Matrix44T* pMVar1;
        float* pfVar2;
        uint uVar4;
        Vector4T<float> local_a8[16];
        Vector4T<float> local_98[16];
        undefined1 local_88[32];
        undefined8 local_68;
        ReflectionManager* local_50;
        undefined8 local_48[3];

        new (local_88) math::AABB(PTR_ZERO_100ee66e8, PTR_ZERO_100ee66e8);
        uVar4 = 0;
        local_50 = this;
        do {
            local_48[0] = param_1->GetCornerPos(uVar4);
            math::Vector4T<float>::Vector4T(local_a8, (Vector3T*)local_48, 1.0);
            pMVar1 = (Matrix44T*)field_176->GetImmediateThreadPool();
            math::Vector4T<float>::operator*=(local_a8, pMVar1);
            pfVar2 = (float*)local_a8->qw();
            local_68 = math::operator*((Vector4T*)local_a8, 0.5 / *pfVar2);
            math::Vector4T<float>::Vector4T(local_98, 0.5);
            local_48[0] = math::operator+((Vector4T*)(local_88 + 32), (Vector4T*)local_98);
            math::Rect<float>::operator=((Rect<float>*)local_a8, (Rect*)local_48);
            local_48[0] = local_a8->GetXYZ();
            local_88->AddPoint(local_48);
            uVar4 = uVar4 + 1;
        } while (uVar4 != 8);
        if (local_88->IsValid() != '\0') {
            (&local_50->field_608, (AABB*)local_88)->Union();
        }
    }

    // 0x1007e12a0, 64 bytes, placed by class name
    // ReflectionManager::ResetScissorRect()
    void ReflectionManager::ResetScissorRect() {
        undefined1 local_38[32];

        new (local_38) math::AABB(PTR_ZERO_100ee66e8, PTR_ZERO_100ee66e8);
        math::AABB::operator=((AABB*)&field_608, (AABB*)local_38);
    }

    // 0x1007e12e0, 224 bytes, placed by class name
    // ReflectionManager::GetScissorRect()
    ReflectionManager* ReflectionManager::GetScissorRect() {
        int iVar1;
        int iVar2;
        RenderTargets* this_00;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* this_01;
        undefined8* puVar3;
        int* piVar4;
        long in_RSI;
        float fVar5;
        int local_44[3];
        int local_38;
        int local_34;

        this_00 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
            (shared_ptr<render::RenderTargets>*)(in_RSI + 384));
        this_01 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                      this_00->GetColourTargetTextures();
        puVar3 = (undefined8*)
            eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                          eastl::allocator>>::operator[](this_01, 0);
        piVar4 = (int*)(*puVar3)->second();
        fVar5 = (float)((in_RSI + 608))->GetMinY();
        local_44[2] = piVar4[1];
        local_44[0] = (int)((float)(uint)local_44[2] * fVar5);
        local_44[1] = 0;
        iVar2 = math::Clamp<int>(local_44, local_44 + 1, local_44 + 2);
        iVar1 = *piVar4;
        local_38 = 0;
        fVar5 = (float)((in_RSI + 608))->GetMaxY();
        local_34 = (int)((float)(uint)piVar4[1] * fVar5);
        piVar4 = std::max<int>(&local_38, &local_34);
        new (this) oldscape::dash3d::GridRect(0, iVar2, iVar1, *piVar4);
        return this;
    }

} // namespace jag::graphics
