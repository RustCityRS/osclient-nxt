// libs/graphics/runetek7/water/WaterPatch.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "WaterPatch.h"

namespace jag::graphics {
    // 0x100f43849, 7 bytes, __data
    WaterPatch::m_showPatches = {1, 0, 0, 0, 0, 0, 0};

    // 0x1039bd318, 16 bytes, __common; set at startup by ___cxx_global_var_init.183
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> WaterPatch::NullWaterPatch;

    // 0x1039bd328, 8 bytes, __common; zero-initialised
    WaterPatch::m_showWorldAABB;

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    WaterPatch::GetTransformedTriangle(unsigned int, math::Vector4T<float> (&)[3]);

    // 0x1000b9950: the linker folded this into oldscape::ScriptVarType::GetDefaultValue() const, which has identical code
    WaterPatch::GetAABB() const;

    // 0x1001a3c10: the linker folded this into MainLoopFrameTimer::GetFPSCounter(), which has identical code
    WaterPatch::GetMaterial() const;

    // 0x1007ba820, 496 bytes, base-object constructor, placed by class name and debug map
    // WaterPatch::WaterPatch(RT7Core*, math::AABB const&, bool, WaterPatchConfig const&, eastl::vector<unsigned short, eastl::allocator>&&, eastl::vector<WaterPatchVertex, eastl::allocator>&&, math::Matrix44T<float> const*)
    void WaterPatch::WaterPatch(RT7Core* param_1, AABB* param_2, bool param_3, WaterPatchConfig* param_4,
                                vector* param_5, vector* param_6, Matrix44T* param_7) {
        MaterialManager* pMVar1;
        TextureManager* pTVar2;

        new (this) Drawable(2);
        new (this) MakeSharedPool<WaterPatch, 32>();
        field_0 = &PTR__WaterPatch_100f14740;
        new (&field_16, param_2) math::AABB();
        new (field_48) WaterMaterial();
        field_1136 = param_3;
        new (&field_1140, (QuaternionT*)&param_4->field_24) math::QuaternionT<float>();
        field_1164 = *(undefined4*)((long)&param_4->field_8 + 4);
        field_1156 = *(undefined8*)&param_4->field_4;
        field_1168 = param_4->field_16;
        field_1172 = param_4->field_20;
        *(undefined8*)&field_1176 = 18446744069414584321;
        field_1184 = 4294967295;
        field_1192 = param_7;
        new (&field_1200, param_5) eastl::vector<unsigned short, eastl::allocator>();
        new (&field_1232, param_6) eastl::vector<WaterPatchVertex, eastl::allocator>();
        m_faceCount = 0;
        new (&field_1272) render::IndexBuffer();
        new (&field_1360) render::VertexBuffer();
        new (field_1440) render::InputAssemblerState();
        if (param_1 == (RT7Core*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("rt7Core != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/water/"
                      "WaterPatch.cpp",
                      61, (char*)0);
        }
        pMVar1 = (MaterialManager*)param_1->GetMaterialManager();
        pTVar2 = (TextureManager*)param_1->GetTextureManager();
        (field_48, param_4, pMVar1, pTVar2)->Init();
        CreateRenderingResources(this);
    }

    // 0x1007baa80, 400 bytes, placed by class name and debug map
    // WaterPatch::CreateRenderingResources()
    void WaterPatch::CreateRenderingResources() {
        undefined1* this_00;
        undefined1* puVar1;
        char cVar2;
        int iVar3;
        uint uVar4;
        int iVar5;
        long lVar6;
        undefined8 uVar7;
        VertexDeclaration* this_01;
        void* pvVar8;
        AutoSingleton<ShaderThreadPoolSingleton> local_38[8];

        local_38->~AutoSingleton();
        this_00 = &field_1360;
        iVar3 = this_00->GetAliveCount();
        if (iVar3 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_vertexBuffer.GetSizeInBytes() == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/water/"
                      "WaterPatch.cpp",
                      77, (char*)0);
        }
        puVar1 = &field_1200;
        uVar4 = puVar1->size();
        lVar6 = puVar1->size();
        if (lVar6 * 2 == 0) {
            cVar2 = '\x01';
        } else {
            uVar7 = puVar1->HeapBeginPtr();
            cVar2 = (&field_1272, lVar6 * 2 & 4294967295, 0, uVar7, 5123)->Create();
            puVar1->set_capacity(0);
        }
        this_01 = (VertexDeclaration*)WaterPatchRenderer::GetVertexDecl();
        iVar3 = this_01->GetVertexStride(0);
        puVar1 = &field_1232;
        iVar5 = puVar1->size();
        if (iVar5 * iVar3 != 0) {
            if (cVar2 == '\0') {
                cVar2 = '\0';
            } else {
                pvVar8 = (void*)puVar1->HeapBeginPtr();
                cVar2 = this_00->Create(iVar5 * iVar3, 0, pvVar8);
            }
            puVar1->set_capacity(0);
        }
        if (cVar2 == '\0') {
            DestroyRenderingResources(this);
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "water/WaterPatch.cpp",
                            111, "Failed to allocate memory for a water patch\'s vertex and index data!");
        }
        m_faceCount = uVar4 / 3;
        (field_1440, this_01, (VertexBuffer*)this_00)->SetVertexStreamData();
        render::InputAssemblerState::SetIndexBuffer((IndexBuffer*)field_1440, (int)this + 1272);
    }

    // 0x1007bac30, 32 bytes, complete-object constructor, placed by class name and debug map
    // WaterPatch::WaterPatch(RT7Core*, math::AABB const&, bool, WaterPatchConfig const&, eastl::vector<unsigned short, eastl::allocator>&&, eastl::vector<WaterPatchVertex, eastl::allocator>&&, math::Matrix44T<float> const*)
    void WaterPatch::WaterPatch(RT7Core* param_1, AABB* param_2, bool param_3, WaterPatchConfig* param_4,
                                vector* param_5, vector* param_6, Matrix44T* param_7) {
        WaterPatch(this, param_1, param_2, param_3, param_4, param_5, param_6, param_7);
    }

    // 0x1007bac50, 208 bytes, base-object destructor, placed by class name and debug map
    // WaterPatch::~WaterPatch()
    void WaterPatch::~WaterPatch() {
        field_0 = &PTR__WaterPatch_100f14740;
        DestroyRenderingResources(this);
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        field_1440->~InputAssemblerState();
        (&field_1360)->~VertexBuffer();
        (&field_1272)->~IndexBuffer();
        (&field_1232)->~vector();
        (&field_1200)->~vector();
        field_48->~WaterMaterial();
        ~AutoSingleton();
    }

    // 0x1007bad20, 128 bytes, placed by class name and debug map
    // WaterPatch::DestroyRenderingResources()
    void WaterPatch::DestroyRenderingResources() {
        undefined1* this_00;
        WaterParameters* pWVar1;
        AutoSingleton<ShaderThreadPoolSingleton> local_20[8];

        local_20->~AutoSingleton("Water_Patch");
        this_00 = field_48;
        this_00->DestroyRenderingResources();
        pWVar1 = (WaterParameters*)this_00->GetWaterParameters();
        pWVar1->ClearTextures();
        field_1440->Destroy();
        (&field_1272)->Destroy();
        (&field_1360)->Destroy();
        pWVar1 = (WaterParameters*)this_00->GetWaterParameters();
        pWVar1->ClearTextures();
    }

    // 0x1007bada0, 16 bytes, complete-object destructor, placed by class name and debug map
    // WaterPatch::~WaterPatch(): jumps straight to the base-object destructor

    // 0x1007badb0, 32 bytes, deleting destructor, placed by class name and debug map
    // WaterPatch::~WaterPatch()
    void WaterPatch::~WaterPatch() {
        ~WaterPatch(this);
        operator_delete(this);
    }

    // 0x1007baf80, 1360 bytes, placed by class name and debug map
    // WaterPatch::GatherDrawableElements(DrawableQueue&, RT7Core&, SceneViewData const&, EffectManager const&)
    void WaterPatch::GatherDrawableElements(DrawableQueue* param_1, RT7Core* param_2, SceneViewData* param_3,
                                            EffectManager* param_4) {
        undefined1* this_00;
        undefined1* puVar1;
        char cVar2;
        byte bVar3;
        int iVar4;
        undefined4 uVar5;
        TextureManager* pTVar6;
        RenderPassBitSet* pRVar7;
        Matrix44T* pMVar8;
        long* plVar9;
        long* plVar10;
        undefined8 uVar11;
        Vector4T<float>* this_01;
        float* pfVar12;
        CommandLine* pCVar13;
        WaterPatch_DE* pWVar14;
        undefined8 local_a0;
        undefined1* local_98;
        undefined1 local_8c[84];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (((m_showPatches != '\0') && (field_1136 != false)) && (iVar4 = GetFaceCount(this), iVar4 != 0)) {
            this_00 = field_48;
            pTVar6 = (TextureManager*)param_2->GetTextureManager();
            cVar2 = this_00->LoadTextures(pTVar6);
            if (cVar2 != '\0') {
                pRVar7 = (RenderPassBitSet*)param_3->GetRenderPassBits();
                cVar2 = this_00->CanRenderInPasses(pRVar7);
                if (cVar2 != '\0') {
                    GetWorldOBB((WaterPatch*)(local_8c + 4));
                    pMVar8 = (Matrix44T*)param_3->GetScreen();
                    local_8c._0_4_ = DstFromCameraPlane((OBB*)(local_8c + 4), pMVar8);
                    plVar9 = (long*)(&param_3->field_520)->HeapBeginPtr();
                    plVar10 = (long*)(&param_3->field_520)->end();
                    if (plVar9 != plVar10) {
                        puVar1 = field_1440;
                        do {
                            if (*plVar9 == 0) {
                                /* WARNING: Subroutine does not return */
                                LogAssert("renderPass",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                          "graphics/runetek7/water/WaterPatch.cpp",
                                          161, (char*)0);
                            }
                            uVar5 = (*plVar9)->GetPos();
                            uVar11 = this_00->GetRenderPassEffect(uVar5);
                            new (&local_a0) math::Vector2T<int>();
                            switch (uVar5) {
                            case 2:
                                pCVar13 = (CommandLine*)param_1->GetDrawableGroup(2, 3);
                                uVar5 = pCVar13->GetPos();
                                uVar11 = this_00->GetRenderPassEffect(6);
                                UpdateForwardPassEffect((WaterPatch*)local_8c._0_4_, this, &local_a0, uVar5, uVar11,
                                                        param_2, param_4);
                                local_98 = puVar1;
                                pWVar14 = DrawableElementPool<WaterPatch_DE>::Create<WaterPatch&, math::OBB&, float&,
                                                                                     render::InputAssemblerState*>(
                                    this, (OBB*)(local_8c + 4), (float*)local_8c, (InputAssemblerState**)&local_98);
                                uVar11 = local_a0;
                                std::unique_ptr<DrawableElement, DrawableElementDeleter>::unique_ptr<true, void>(
                                    (unique_ptr<DrawableElement, DrawableElementDeleter>*)&local_98,
                                    (DrawableElement*)pWVar14);
                                param_1->AddDrawable(uVar11,
                                                     (unique_ptr<DrawableElement, DrawableElementDeleter>*)&local_98,
                                                     this, 3, 6);
                                break;
                            case 3:
                            case 9:
                            case 12:
                            case 14:
                                goto switchD_1007bb132_caseD_3;
                            case 4:
                                bVar3 = param_4->IsEnabled(108);
                                pCVar13 = (CommandLine*)param_1->GetDrawableGroup(4);
                                uVar5 = pCVar13->GetPos();
                                UpdateForwardPassEffect((WaterPatch*)local_8c._0_4_, this, &local_a0, uVar5, uVar11,
                                                        param_2, param_4);
                                local_98 = puVar1;
                                pWVar14 = DrawableElementPool<WaterPatch_DE>::Create<WaterPatch&, math::OBB&, float&,
                                                                                     render::InputAssemblerState*>(
                                    this, (OBB*)(local_8c + 4), (float*)local_8c, (InputAssemblerState**)&local_98);
                                uVar11 = local_a0;
                                std::unique_ptr<DrawableElement, DrawableElementDeleter>::unique_ptr<true, void>(
                                    (unique_ptr<DrawableElement, DrawableElementDeleter>*)&local_98,
                                    (DrawableElement*)pWVar14);
                                param_1->AddDrawable(uVar11,
                                                     (unique_ptr<DrawableElement, DrawableElementDeleter>*)&local_98,
                                                     this, (uint)bVar3 * 4 + 3, 4);
                                break;
                            case 5:
                                pCVar13 = (CommandLine*)param_1->GetDrawableGroup(5, 3);
                                pCVar13->GetPos();
                                UpdateMiniMapPassEffect((WaterPatch*)local_8c._0_4_);
                                local_98 = puVar1;
                                pWVar14 = DrawableElementPool<WaterPatch_DE>::Create<WaterPatch&, math::OBB&, float&,
                                                                                     render::InputAssemblerState*>(
                                    this, (OBB*)(local_8c + 4), (float*)local_8c, (InputAssemblerState**)&local_98);
                                uVar11 = local_a0;
                                std::unique_ptr<DrawableElement, DrawableElementDeleter>::unique_ptr<true, void>(
                                    (unique_ptr<DrawableElement, DrawableElementDeleter>*)&local_98,
                                    (DrawableElement*)pWVar14);
                                param_1->AddDrawable(uVar11,
                                                     (unique_ptr<DrawableElement, DrawableElementDeleter>*)&local_98,
                                                     this, 3, 5);
                                local_98.~unique_ptr();
                                this_01 = (Vector4T<float>*)math::Matrix44T<float>::operator[](
                                    (Matrix44T<float>*)&pWVar14->field_112, 3);
                                pfVar12 = (float*)math::Vector4T<float>::operator[](this_01, 1);
                                *pfVar12 = *pfVar12 + 100.0;
                                goto switchD_1007bb132_caseD_3;
                            default:
                                /* WARNING: Subroutine does not return */
                                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                                "graphics/runetek7/water/WaterPatch.cpp",
                                                227, "Unsupported render pass");
                            case 7:
                                pCVar13 = (CommandLine*)param_1->GetDrawableGroup(7, 3);
                                uVar5 = pCVar13->GetPos();
                                UpdateForwardPassEffect((WaterPatch*)local_8c._0_4_, this, &local_a0, uVar5, uVar11,
                                                        param_2, param_4);
                                local_98 = puVar1;
                                pWVar14 = DrawableElementPool<WaterPatch_DE>::Create<WaterPatch&, math::OBB&, float&,
                                                                                     render::InputAssemblerState*>(
                                    this, (OBB*)(local_8c + 4), (float*)local_8c, (InputAssemblerState**)&local_98);
                                uVar11 = local_a0;
                                std::unique_ptr<DrawableElement, DrawableElementDeleter>::unique_ptr<true, void>(
                                    (unique_ptr<DrawableElement, DrawableElementDeleter>*)&local_98,
                                    (DrawableElement*)pWVar14);
                                param_1->AddDrawable(uVar11,
                                                     (unique_ptr<DrawableElement, DrawableElementDeleter>*)&local_98,
                                                     this, 3, 7);
                            }
                            local_98.~unique_ptr();
                        switchD_1007bb132_caseD_3:
                            plVar9 = plVar9 + 1;
                        } while (plVar9 != plVar10);
                    }
                }
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1007bb4e0, 64 bytes, placed by class name and debug map
    // WaterPatch::GetWorldOBB() const
    WaterPatch* WaterPatch::GetWorldOBB() {
        long in_RSI;

        new (this) math::OBB();
        ((in_RSI + 16))->GetOBB(this);
        Transform(*(Matrix44T**)(in_RSI + 1192));
        return this;
    }

    // 0x1007bb520, 64 bytes, inline, placed by debug map only (low confidence)
    // DstFromCameraPlane(math::OBB const&, math::Matrix44T<float> const&)
    void DstFromCameraPlane(OBB* param_1, Matrix44T* param_2) {
        vector* pvVar1;
        undefined8 local_20;
        undefined4 local_18;

        pvVar1 = param_1->SSOBeginPtr(param_2);
        local_20 = *(undefined8*)pvVar1;
        local_18 = *(undefined4*)(pvVar1 + 8);
        DstFromCameraPlane((Vector3T*)&local_20, param_2);
    }

    // 0x1007bb560, 944 bytes, placed by class name and debug map
    // WaterPatch::UpdateForwardPassEffect(DrawableSortKey&, DrawableSortKeyType, RenderPassEffect&, RT7Core&, EffectManager const&, float)
    void WaterPatch::UpdateForwardPassEffect(float param_1_00, WaterPatch* this, undefined8* param_1,
                                             undefined4 param_4, RenderPassEffect* param_5, RT7Core* param_6,
                                             EffectManager* param_7) {
        char cVar1;
        undefined1 uVar2;
        PlanarReflection* this_00;
        undefined8 uVar3;
        undefined8 uVar4;
        ulong uVar5;
        long lVar6;
        ulong uVar7;
        uint* puVar8;
        EntityHighlight** ppEVar9;
        float fVar10;
        undefined1 auVar11[16];
        undefined8 local_40;

        cVar1 = param_7->IsEnabled(107);
        this_00 = EffectManager::GetEffect<PlanarReflection>(param_7, 107);
        fVar10 = (float)this_00->GetReflectionMapContribution();
        uVar2 = 1;
        if ((cVar1 != '\0') && (1.0 <= fVar10)) {
            uVar2 = param_7->IsEnabled(85);
        }
        param_5->Set(51, uVar2);
        uVar2 = field_48->HasNormalMaps();
        param_5->Set(99, uVar2);
        uVar2 = field_48->HasFoamMaps();
        param_5->Set(100, uVar2);
        param_5->Set(102, 1);
        auVar11 = param_7->BuildShaderEffectList(param_5);
        param_5->field_16 = auVar11._0_8_;
        param_5->field_24 = auVar11._8_8_;
        uVar3 = param_6->GetShaderManager();
        uVar4 = WaterPatchRenderer::GetVertexDecl();
        param_5->UpdateShader(param_7, uVar3, 10, uVar4, 4, 3);
        uVar5 = param_5->GetConstructedShaderId();
        puVar8 = &switchD_1007bb688::switchdataD_1007bb8f4;
        switch (param_4) {
        case 0:
            fVar10 = (float)(-(uint)(0.0 < param_1_00) & (uint)(param_1_00 + 0.5));
            uVar7 = (ulong)fVar10;
            puVar8 = (uint*)((long)uVar7 >> 63);
            ppEVar9 = (EntityHighlight**)(((long)(fVar10 - 9.223372e+18) & (ulong)puVar8 | uVar7) << 24 |
                                          uVar5 & 65535 | 144115188092567552);
            break;
        case 1:
            fVar10 = (float)(-(uint)(0.0 < param_1_00) & (uint)(param_1_00 + 0.5));
            lVar6 = (long)fVar10;
            puVar8 = (uint*)72057594021150720;
            ppEVar9 =
                (EntityHighlight**)((ulong)((uint)lVar6 | (uint)(long)(fVar10 - 9.223372e+18) & (uint)(lVar6 >> 63)) *
                                                -16777216 +
                                            72057594021150720 &
                                        72057594021150720 |
                                    uVar5 & 65535 | 144115188075855872);
            break;
        case 2:
            ppEVar9 =
                (EntityHighlight**)((((long)(float)(-(uint)(0.0 < param_1_00) & (uint)(param_1_00 + 0.5)) & 4294967295U)
                                         << 8 |
                                     (uVar5 & 65535) << 40) +
                                    144115188075856127);
            break;
        case 3:
            fVar10 = (float)(-(uint)(0.0 < param_1_00) & (uint)(param_1_00 + 0.5));
            uVar7 = (ulong)fVar10;
            puVar8 = (uint*)((long)uVar7 >> 63);
            ppEVar9 =
                (EntityHighlight**)((uVar5 & 65535) << 40 | 144115188075855872 |
                                    ((long)(fVar10 - 9.223372e+18) & (ulong)puVar8 | uVar7) * -256 + 1099511627520);
            break;
        case 4:
            fVar10 = (float)(-(uint)(0.0 < param_1_00) & (uint)(param_1_00 + 0.5));
            lVar6 = (long)fVar10;
            puVar8 = (uint*)(lVar6 >> 63);
            ppEVar9 =
                (EntityHighlight**)(((ulong)((uint)lVar6 | (uint)(long)(fVar10 - 9.223372e+18) & (uint)(lVar6 >> 63))
                                     << 32) +
                                    (uVar5 & 65535) + 50266112);
            break;
        case 5:
            fVar10 = (float)(-(uint)(0.0 < param_1_00) & (uint)(param_1_00 + 0.5));
            uVar7 = (ulong)fVar10;
            puVar8 = (uint*)((long)uVar7 >> 63);
            ppEVar9 = (EntityHighlight**)((((long)(fVar10 - 9.223372e+18) & (ulong)puVar8 | uVar7) * -4294967296 |
                                           uVar5 & 65535) -
                                          4261412864);
            break;
        default:
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "renderer/DrawableSortKey.h",
                            177, "Unknown sort key type");
        }
        new (&local_40)
            eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>(ppEVar9, puVar8);
        *param_1 = local_40;
    }

    // 0x1007bba00, 800 bytes, placed by class name and debug map
    // WaterPatch::UpdateMiniMapPassEffect(DrawableSortKey&, DrawableSortKeyType, RenderPassEffect&, RT7Core&, EffectManager const&, float)
    void WaterPatch::UpdateMiniMapPassEffect(float param_1_00, undefined8 param_2, undefined8* param_1,
                                             undefined4 param_4, RenderPassEffect* param_5, RT7Core* param_6,
                                             EffectManager* param_7) {
        undefined8 uVar1;
        undefined8 uVar2;
        ulong uVar3;
        long lVar4;
        ulong uVar5;
        uint* puVar6;
        EntityHighlight** ppEVar7;
        float fVar8;
        undefined1 auVar9[16];
        undefined8 local_38;

        auVar9 = param_7->BuildShaderEffectList(param_5);
        param_5->field_16 = auVar9._0_8_;
        param_5->field_24 = auVar9._8_8_;
        uVar1 = param_6->GetShaderManager();
        uVar2 = WaterPatchRenderer::GetVertexDecl();
        param_5->UpdateShader(param_7, uVar1, 10, uVar2, 5, 1);
        uVar3 = param_5->GetConstructedShaderId();
        puVar6 = &switchD_1007bba8a::switchdataD_1007bbd00;
        switch (param_4) {
        case 0:
            fVar8 = (float)(-(uint)(0.0 < param_1_00) & (uint)(param_1_00 + 0.5));
            uVar5 = (ulong)fVar8;
            puVar6 = (uint*)((long)uVar5 >> 63);
            ppEVar7 = (EntityHighlight**)(((long)(fVar8 - 9.223372e+18) & (ulong)puVar6 | uVar5) << 24 | uVar3 & 65535 |
                                          144115188092567552);
            break;
        case 1:
            fVar8 = (float)(-(uint)(0.0 < param_1_00) & (uint)(param_1_00 + 0.5));
            lVar4 = (long)fVar8;
            puVar6 = (uint*)72057594021150720;
            ppEVar7 =
                (EntityHighlight**)((ulong)((uint)lVar4 | (uint)(long)(fVar8 - 9.223372e+18) & (uint)(lVar4 >> 63)) *
                                                -16777216 +
                                            72057594021150720 &
                                        72057594021150720 |
                                    uVar3 & 65535 | 144115188075855872);
            break;
        case 2:
            ppEVar7 =
                (EntityHighlight**)((((long)(float)(-(uint)(0.0 < param_1_00) & (uint)(param_1_00 + 0.5)) & 4294967295U)
                                         << 8 |
                                     (uVar3 & 65535) << 40) +
                                    144115188075856127);
            break;
        case 3:
            fVar8 = (float)(-(uint)(0.0 < param_1_00) & (uint)(param_1_00 + 0.5));
            uVar5 = (ulong)fVar8;
            puVar6 = (uint*)((long)uVar5 >> 63);
            ppEVar7 =
                (EntityHighlight**)((uVar3 & 65535) << 40 | 144115188075855872 |
                                    ((long)(fVar8 - 9.223372e+18) & (ulong)puVar6 | uVar5) * -256 + 1099511627520);
            break;
        case 4:
            fVar8 = (float)(-(uint)(0.0 < param_1_00) & (uint)(param_1_00 + 0.5));
            lVar4 = (long)fVar8;
            puVar6 = (uint*)(lVar4 >> 63);
            ppEVar7 =
                (EntityHighlight**)(((ulong)((uint)lVar4 | (uint)(long)(fVar8 - 9.223372e+18) & (uint)(lVar4 >> 63))
                                     << 32) +
                                    (uVar3 & 65535) + 50266112);
            break;
        case 5:
            fVar8 = (float)(-(uint)(0.0 < param_1_00) & (uint)(param_1_00 + 0.5));
            uVar5 = (ulong)fVar8;
            puVar6 = (uint*)((long)uVar5 >> 63);
            ppEVar7 = (EntityHighlight**)((((long)(fVar8 - 9.223372e+18) & (ulong)puVar6 | uVar5) * -4294967296 |
                                           uVar3 & 65535) -
                                          4261412864);
            break;
        default:
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "renderer/DrawableSortKey.h",
                            177, "Unknown sort key type");
        }
        new (&local_38)
            eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>(ppEVar7, puVar6);
        *param_1 = local_38;
    }

    // 0x1007bbd20, 480 bytes, placed by class name and debug map
    // WaterPatch::RenderDebug(RenderPassType, DrawableElement&) const
    void WaterPatch::RenderDebug(int param_2, long param_3) {
        long* plVar1;
        float* pfVar2;
        Matrix44T* pMVar3;
        Matrix44T* this_00;
        float fVar4;
        Matrix33T<float> local_100[40];
        undefined1 local_d8[48];
        ColourHSL local_a8;
        undefined8 local_98;
        float local_90;
        OBB local_88;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if ((m_showWorldAABB != '\0') && (param_2 == 4)) {
            pMVar3 = field_1192;
            if (field_1192 == (Matrix44T*)0) {
                pMVar3 = (Matrix44T*)PTR_IDENTITY_100ee6730;
            }
            this_00 = (Matrix44T*)(param_3 + 112);
            math::Matrix44T<float>::operator=((Matrix44T<float>*)this_00, pMVar3);
            new (local_d8) math::AABB((AABB*)&field_16);
            local_d8->Transform(this_00);
            plVar1 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar1 != (long*)0) {
                new (&local_88) oldscape::sidebars::SideBarData(-1, 3);
                (**(code**)(*plVar1 + 72))(plVar1, local_d8, &local_88);
            }
            math::Matrix33T<float>::Matrix33T(local_100, (QuaternionT*)&field_1140);
            pfVar2 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)&field_1156, 1);
            new (&local_a8) math::ColourHSL(0.0, *pfVar2, 0.0);
            fVar4 = (float)field_1176;
            new ((local_d8 + 32)) math::ColourHSL((float)field_1168, fVar4, (float)field_1172);
            local_98 = math::operator*((Vector3T*)(local_d8 + 32), 0.5);
            local_90 = fVar4;
            new (&local_88) math::OBB((Vector3T*)&local_a8, local_100, (Vector3T*)&local_98);
            local_88.Transform(this_00);
            plVar1 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar1 != (long*)0) {
                new (&local_a8) oldscape::sidebars::SideBarData(-16711681, 3);
                (**(code**)(*plVar1 + 80))(plVar1, &local_88, &local_a8);
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1007c96a0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.183
    void ___cxx_global_var_init_183(undefined8 param_1, _func_decltype_nullptr* param_2) {
        new (&WaterPatch::NullWaterPatch) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
        ___cxa_atexit(PTR__shared_ptr_100ee5338, &WaterPatch::NullWaterPatch, 4294967296);
    }

} // namespace jag::graphics
