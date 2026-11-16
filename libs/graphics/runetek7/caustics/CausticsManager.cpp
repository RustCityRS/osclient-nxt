// libs/graphics/runetek7/caustics/CausticsManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "CausticsManager.h"

namespace jag::graphics {
    // 0x1000b9950: the linker folded this into oldscape::ScriptVarType::GetDefaultValue() const, which has identical code
    CausticsManager::GetCullFrustum() const;

    // 0x100324d40: the linker folded this into oldscape::graphics::NXTPixToolkit::GetPix2D(), which has identical code
    CausticsManager::GetViewTransforms() const;

    // 0x1004c69a0: the linker folded this into game::WaterType::GetEmissiveFlowRotationDegrees() const, which has identical code
    CausticsManager::GetCausticsPlaneHeight() const;

    // 0x100960180, 144 bytes, base-object constructor, placed by class name and debug map
    // CausticsManager::CausticsManager(render::RenderTargetsManager&)
    void CausticsManager::CausticsManager(RenderTargetsManager* param_1) {
        new (this) Config();
        new (field_16) math::Frustum();
        new (field_176) ViewTransforms();
        new (field_392, (_func_decltype_nullptr*)param_1)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_408, (_func_decltype_nullptr*)param_1)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_424, (_func_decltype_nullptr*)param_1)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        field_440 = param_1;
    }

    // 0x100960210, 16 bytes, complete-object constructor, placed by class name and debug map
    // CausticsManager::CausticsManager(render::RenderTargetsManager&): jumps straight to the base-object constructor

    // 0x100960220, 112 bytes, base-object destructor, placed by class name and debug map
    // CausticsManager::~CausticsManager()
    void CausticsManager::~CausticsManager() {
        Destroy(this);
        field_424->~shared_ptr();
        field_408->~shared_ptr();
        field_392->~shared_ptr();
    }

    // 0x100960290, 16 bytes, placed by class name and debug map
    // CausticsManager::Destroy()
    void CausticsManager::Destroy() {
        DestroyRenderingResources(this);
    }

    // 0x1009602a0, 16 bytes, complete-object destructor, placed by class name and debug map
    // CausticsManager::~CausticsManager(): jumps straight to the base-object destructor

    // 0x1009602b0, 48 bytes, placed by class name and debug map
    // CausticsManager::Initialise(CausticsManager::Config const&)
    void CausticsManager::Initialise(Config* param_1) {
        if (CreateRenderingResources(this, param_1) != '\0') {
            field_0 = param_1->field_0;
        }
    }

    // 0x1009602e0, 64 bytes, placed by class name and debug map
    // CausticsManager::CreateRenderingResources(CausticsManager::Config const&)
    void CausticsManager::CreateRenderingResources(Config* param_1) {
        AutoSingleton<ShaderThreadPoolSingleton> local_20[8];

        local_20->~AutoSingleton("Caustics_Manager");
        CreateRenderTargets(this, param_1);
    }

    // 0x100960320, 96 bytes, placed by class name and debug map
    // CausticsManager::DestroyRenderingResources()
    void CausticsManager::DestroyRenderingResources() {
        AutoSingleton<ShaderThreadPoolSingleton> local_18[8];

        local_18->~AutoSingleton("Caustics_Manager");
        (field_440, (shared_ptr*)field_392)->Unregister();
        (field_440, (shared_ptr*)field_408)->Unregister();
        (field_440, (shared_ptr*)field_424)->Unregister();
    }

    // 0x100960380, 48 bytes, placed by class name and debug map
    // CausticsManager::GetCausticsMapViewport() const
    CausticsManager* CausticsManager::GetCausticsMapViewport() {
        int* in_RSI;

        new (this) render::Viewport(0, 0, *in_RSI, *in_RSI, 0.0, 1.0);
        return this;
    }

    // 0x1009603b0, 48 bytes, placed by class name and debug map
    // CausticsManager::GetCausticsComputeMapViewport() const
    CausticsManager* CausticsManager::GetCausticsComputeMapViewport() {
        long in_RSI;

        new (this) render::Viewport(0, 0, *(int*)(in_RSI + 4), *(int*)(in_RSI + 4), 0.0, 1.0);
        return this;
    }

    // 0x1009603e0, 32 bytes, placed by class name and debug map
    // CausticsManager::GetCausticsIntegerMapRenderTargets(render::RenderTargetData&)
    void CausticsManager::GetCausticsIntegerMapRenderTargets(RenderTargetData* param_1) {
        RenderTargets* pRVar1;

        pRVar1 = (RenderTargets*)field_392->end();
        param_1->field_0 = pRVar1;
    }

    // 0x100960400, 32 bytes, placed by class name and debug map
    // CausticsManager::GetCausticsFloatMapRenderTargets(render::RenderTargetData&)
    void CausticsManager::GetCausticsFloatMapRenderTargets(RenderTargetData* param_1) {
        RenderTargets* pRVar1;

        pRVar1 = (RenderTargets*)field_408->end();
        param_1->field_0 = pRVar1;
    }

    // 0x100960420, 32 bytes, placed by class name and debug map
    // CausticsManager::GetCausticsComputeMapRenderTargets(render::RenderTargetData&)
    void CausticsManager::GetCausticsComputeMapRenderTargets(RenderTargetData* param_1) {
        RenderTargets* pRVar1;

        pRVar1 = (RenderTargets*)field_424->end();
        param_1->field_0 = pRVar1;
    }

    // 0x100960440, 960 bytes, placed by class name and debug map
    // CausticsManager::CreateRenderTargets(CausticsManager::Config const&)
    undefined8 CausticsManager::CreateRenderTargets(Config* param_1) {
        RenderTargetsManager* pRVar1;
        long* plVar2;
        bool bVar3;
        bool bVar4;
        bool bVar5;
        undefined7 extraout_var;
        RenderTargets* pRVar6;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* pvVar7;
        undefined8* puVar8;
        long lVar9;
        byte bVar10;
        ulong uVar11;
        undefined1* puVar12;
        undefined1 local_158[64];
        undefined8 local_118;
        int local_110;
        undefined4 local_10c;
        undefined4 local_108;
        int iStack_104;
        int iStack_100;
        int iStack_fc;
        undefined1 local_f8;
        undefined3 uStack_f7;
        undefined4 uStack_f4;
        undefined8 uStack_f0;
        undefined8 local_e8;
        char cStack_e0;
        undefined3 uStack_df;
        undefined4 uStack_dc;
        undefined1 local_d8[72];
        shared_ptr<render::RenderTargets>* local_90;
        shared_ptr<render::RenderTargets>* local_88;
        undefined1 local_80[80];

        new (local_80) render::Texture::Desc();
        local_80._0_4_ = *(undefined4*)&param_1->field_0;
        local_80._12_4_ = 13;
        pRVar1 = field_440;
        local_e8 = local_80._48_8_;
        cStack_e0 = local_80[56];
        uStack_df = local_80._57_3_;
        uStack_dc = local_80._60_4_;
        local_f8 = local_80[32];
        uStack_f7 = local_80._33_3_;
        uStack_f4 = local_80._36_4_;
        uStack_f0 = local_80._40_8_;
        local_108 = local_80._16_4_;
        iStack_104 = local_80._20_4_;
        iStack_100 = local_80._24_4_;
        iStack_fc = local_80._28_4_;
        local_118 = CONCAT44(local_80._0_4_, local_80._0_4_);
        local_110 = local_80._8_4_;
        local_10c = 13;
        local_d8._64_8_ = param_1;
        local_80._4_4_ = local_80._0_4_;
        new (local_d8) render::Texture::Desc();
        new (local_158) render::Texture::Desc();
        ((local_80 + 64))->Register(pRVar1, "CausticsInteger", 3553, &local_118, 1, local_158, 0, 1);
        puVar12 = field_392;
        shared_ptr<render::RenderTargets>::operator=((shared_ptr<render::RenderTargets>*)puVar12,
                                                     (shared_ptr*)(local_80 + 64));
        ((local_80 + 64))->~shared_ptr();
        local_90 = (shared_ptr<render::RenderTargets>*)puVar12;
        bVar3 = operator!=((shared_ptr*)puVar12, (_func_decltype_nullptr*)0);
        local_80._12_4_ = 21;
        pRVar1 = field_440;
        local_e8 = local_80._48_8_;
        cStack_e0 = local_80[56];
        uStack_df = local_80._57_3_;
        uStack_dc = local_80._60_4_;
        local_f8 = local_80[32];
        uStack_f7 = local_80._33_3_;
        uStack_f4 = local_80._36_4_;
        uStack_f0 = local_80._40_8_;
        local_108 = local_80._16_4_;
        iStack_104 = local_80._20_4_;
        iStack_100 = local_80._24_4_;
        iStack_fc = local_80._28_4_;
        local_118 = CONCAT44(local_80._4_4_, local_80._0_4_);
        local_110 = local_80._8_4_;
        local_10c = 21;
        new (local_d8) render::Texture::Desc();
        new (local_158) render::Texture::Desc();
        ((local_80 + 64))->Register(pRVar1, "CausticsFloat", 3553, &local_118, 1, local_158, 0, 1);
        puVar12 = field_408;
        shared_ptr<render::RenderTargets>::operator=((shared_ptr<render::RenderTargets>*)puVar12,
                                                     (shared_ptr*)(local_80 + 64));
        ((local_80 + 64))->~shared_ptr();
        local_88 = (shared_ptr<render::RenderTargets>*)puVar12;
        bVar4 = operator!=((shared_ptr*)puVar12, (_func_decltype_nullptr*)0);
        local_80._0_4_ = *(int*)((long)(undefined8*)local_d8._64_8_ + 4);
        local_80._12_4_ = 23;
        pRVar1 = field_440;
        local_e8 = local_80._48_8_;
        cStack_e0 = local_80[56];
        uStack_df = local_80._57_3_;
        uStack_dc = local_80._60_4_;
        local_f8 = local_80[32];
        uStack_f7 = local_80._33_3_;
        uStack_f4 = local_80._36_4_;
        uStack_f0 = local_80._40_8_;
        local_108 = local_80._16_4_;
        iStack_104 = local_80._20_4_;
        iStack_100 = local_80._24_4_;
        iStack_fc = local_80._28_4_;
        local_118 = CONCAT44(local_80._0_4_, local_80._0_4_);
        local_110 = local_80._8_4_;
        local_10c = 23;
        local_80._4_4_ = local_80._0_4_;
        new (local_d8) render::Texture::Desc();
        new (local_158) render::Texture::Desc();
        ((local_80 + 64))->Register(pRVar1, "CausticsCompute", 3553, &local_118, 1, local_158, 0, 1);
        puVar12 = field_424;
        shared_ptr<render::RenderTargets>::operator=((shared_ptr<render::RenderTargets>*)puVar12,
                                                     (shared_ptr*)(local_80 + 64));
        ((local_80 + 64))->~shared_ptr();
        bVar5 = operator!=((shared_ptr*)puVar12, (_func_decltype_nullptr*)0);
        uVar11 = CONCAT71(extraout_var, bVar5) & 4294967295;
        bVar10 = (byte)uVar11 & (bVar3 && bVar4);
        if (bVar10 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("success",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "caustics/CausticsManager.cpp",
                      99, "CausticsManager: Failed to create caustics target textures");
        }
        pRVar6 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(local_90);
        pvVar7 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                     pRVar6->GetColourTargetTextures();
        puVar8 = (undefined8*)
            eastl::vector<render::Texture*,
                          eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar7,
                                                                                                                 0);
        plVar2 = (long*)*puVar8;
        lVar9 = pvVar7->Instance();
        (**(code**)(*plVar2 + 24))(plVar2, lVar9 + 80, 0);
        pRVar6 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(local_88);
        pvVar7 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                     pRVar6->GetColourTargetTextures();
        puVar8 = (undefined8*)
            eastl::vector<render::Texture*,
                          eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar7,
                                                                                                                 0);
        plVar2 = (long*)*puVar8;
        lVar9 = pvVar7->Instance();
        (**(code**)(*plVar2 + 24))(plVar2, lVar9 + 272, 0);
        pRVar6 =
            (RenderTargets*)shared_ptr<render::RenderTargets>::operator->((shared_ptr<render::RenderTargets>*)puVar12);
        pvVar7 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                     pRVar6->GetColourTargetTextures();
        puVar8 = (undefined8*)
            eastl::vector<render::Texture*,
                          eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar7,
                                                                                                                 0);
        plVar2 = (long*)*puVar8;
        lVar9 = pvVar7->Instance();
        (**(code**)(*plVar2 + 24))(plVar2, lVar9 + 80, 0);
        return CONCAT71((int7)(uVar11 >> 8), bVar10);
    }

    // 0x100960800, 80 bytes, placed by class name and debug map
    // CausticsManager::GetCausticsIntegerMapAtlas() const
    undefined8 CausticsManager::GetCausticsIntegerMapAtlas() {
        RenderTargets* this_00;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_01;
        undefined8 uVar2;
        undefined8* puVar3;

        this_00 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
            (shared_ptr<render::RenderTargets>*)field_392);
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

    // 0x100960850, 80 bytes, placed by class name and debug map
    // CausticsManager::GetCausticsFloatMapAtlas() const
    undefined8 CausticsManager::GetCausticsFloatMapAtlas() {
        RenderTargets* this_00;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_01;
        undefined8 uVar2;
        undefined8* puVar3;

        this_00 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
            (shared_ptr<render::RenderTargets>*)field_408);
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

    // 0x1009608a0, 80 bytes, placed by class name and debug map
    // CausticsManager::GetCausticsComputeMapAtlas() const
    undefined8 CausticsManager::GetCausticsComputeMapAtlas() {
        RenderTargets* this_00;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_01;
        undefined8 uVar2;
        undefined8* puVar3;

        this_00 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
            (shared_ptr<render::RenderTargets>*)field_424);
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

    // 0x1009608f0, 112 bytes, placed by class name and debug map
    // CausticsManager::Update(ViewTransforms const&, float)
    void CausticsManager::Update(ViewTransforms* param_1, float param_2) {
        Matrix44T* pMVar1;
        Matrix44T* pMVar2;

        pMVar1 = (Matrix44T*)param_1->GetScreen();
        pMVar2 = (Matrix44T*)param_1->GetOrigin();
        (field_16, pMVar1, pMVar2)->Set();
        ViewTransforms::operator=((ViewTransforms*)field_176, param_1);
        field_384 = param_2;
    }

} // namespace jag::graphics
