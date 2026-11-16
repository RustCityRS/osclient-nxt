// libs/graphics/runetek7/water/WaterPatch.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "WaterPatch.h"

namespace jag::graphics {
    // 0x100f43849
    uint8_t WaterPatch::m_showPatches[7] = {1, 0, 0, 0, 0, 0, 0};

    // 0x1039bd318, set at startup by ___cxx_global_var_init.183
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> WaterPatch::NullWaterPatch =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x1039bd328
    int64_t WaterPatch::m_showWorldAABB;

    // 0x100009e70: WaterPatch::GetTransformedTriangle(unsigned int, math::Vector4T<float> (&) [3]) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x1000b9950: WaterPatch::GetAABB() const has the same machine code as oldscape::ScriptVarType::GetDefaultValue() const

    // 0x1001a3c10: WaterPatch::GetMaterial() const has the same machine code as MainLoopFrameTimer::GetFPSCounter()

    // 0x1007ba820
    WaterPatch::WaterPatch(RT7Core* rt7Core, const math::AABB& aabb, bool arg3,
                           const WaterPatchConfig& waterPatchConfig, eastl::vector<unsigned short>&& arg5,
                           eastl::vector<WaterPatchVertex>&& waterPatchVertexs, const math::Matrix44T<float>* matrix44)
        : Drawable(2), MakeSharedPool<WaterPatch, 32>(), m_aABB(aabb), field_1136(arg3),
          field_1140(waterPatchConfig.field_24) {
        field_1164 = *(uint32_t*)((long)&waterPatchConfig.field_8 + 4);
        field_1156 = *(uint64_t*)&waterPatchConfig.field_4;
        field_1168 = waterPatchConfig.field_16;
        field_1172 = waterPatchConfig.field_20;
        *(uint64_t*)&field_1176 = 18446744069414584321;
        field_1184 = 4294967295;
        field_1192 = matrix44;
        new (&field_1200) eastl::vector<unsigned short>(arg5);
        new (&field_1232) eastl::vector<WaterPatchVertex>(waterPatchVertexs);
        m_faceCount = 0;
        new (&field_1272) render::IndexBuffer();
        new (&field_1360) render::VertexBuffer();
        new (field_1440) render::InputAssemblerState();
        if (rt7Core == nullptr) {
            LogAssert("rt7Core != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/water/"
                      "WaterPatch.cpp",
                      61, nullptr);
        }
        auto materialManager = rt7Core->GetMaterialManager();
        auto textureManager = rt7Core->GetTextureManager();
        m_material->Init(waterPatchConfig, *materialManager, *textureManager);
        CreateRenderingResources();
    }

    // 0x1007baa80
    void WaterPatch::CreateRenderingResources() {
        char cVar2;
        void* pvVar7;
        AutoSingleton<ShaderThreadPoolSingleton> local_38;

        uint8_t* this_00 = &field_1360;
        int iVar3 = this_00->GetAliveCount();
        if (iVar3 != 0) {
            LogAssert("m_vertexBuffer.GetSizeInBytes() == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/water/"
                      "WaterPatch.cpp",
                      77, nullptr);
        }
        uint8_t* puVar1 = &field_1200;
        unsigned int uVar4 = puVar1->size();
        long lVar6 = puVar1->size();
        if (lVar6 * 2 == 0) {
            cVar2 = '\x01';
        } else {
            pvVar7 = (void*)puVar1->HeapBeginPtr();
            cVar2 = field_1272.Create((unsigned int)(lVar6 * 2), 0, pvVar7, 5123);
            puVar1->set_capacity(0);
        }
        auto this_01 = WaterPatchRenderer::GetVertexDecl();
        iVar3 = this_01->GetVertexStride(0);
        puVar1 = &field_1232;
        int iVar5 = puVar1->size();
        if (iVar5 * iVar3 != 0) {
            if (!cVar2) {
                cVar2 = '\0';
            } else {
                pvVar7 = (void*)puVar1->HeapBeginPtr();
                cVar2 = this_00->Create(iVar5 * iVar3, 0, pvVar7);
            }
            puVar1->set_capacity(0);
        }
        if (!cVar2) {
            DestroyRenderingResources();
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "water/WaterPatch.cpp",
                            111, "Failed to allocate memory for a water patch\'s vertex and index data!");
        }
        m_faceCount = uVar4 / 3;
        field_1440->SetVertexStreamData(this_01, this_00);
        render::InputAssemblerState::SetIndexBuffer(field_1440, (int)this + 1272);
    }

    // 0x1007bac50
    WaterPatch::~WaterPatch() {
        DestroyRenderingResources();
        field_1232.clear();
        field_1440->~InputAssemblerState();
        field_1360.~VertexBuffer();
        field_1272.~IndexBuffer();
        field_1232.~vector();
        field_1200.~vector();
        m_material->~WaterMaterial();
    }

    // 0x1007bad20
    void WaterPatch::DestroyRenderingResources() {
        AutoSingleton<ShaderThreadPoolSingleton> local_20;

        uint8_t* this_00 = m_material;
        this_00->DestroyRenderingResources();
        auto pWVar1 = this_00->GetWaterParameters();
        pWVar1->ClearTextures();
        field_1440->Destroy();
        field_1272.Destroy();
        field_1360.Destroy();
        pWVar1 = this_00->GetWaterParameters();
        pWVar1->ClearTextures();
    }

    // 0x1007baf80
    void WaterPatch::GatherDrawableElements(DrawableQueue& drawableQueue, RT7Core& rt7Core,
                                            const SceneViewData& sceneViewData, const EffectManager& effectManager) {
        uint8_t* this_00;
        uint8_t* puVar1;
        DrawableSortKey DVar2;
        uint8_t bVar4;
        int iVar5;
        RenderPassType renderPassType;
        DrawableSortKeyType DVar6;
        TextureManager* textureManager;
        RenderPassBitSet* renderPassBitSet;
        Matrix44T<float>* matrix44;
        DrawableSortKey DVar7;
        DrawableSortKey drawableSortKey;
        RenderPassEffect* pRVar8;
        WaterPatch* this_01;
        Vector4T<float>* this_02;
        float* pfVar9;
        CommandLine* pCVar10;
        WaterPatch_DE* pWVar11;
        DrawableGroupType drawableGroupType_00;
        DrawableSortKey local_a0;
        uint8_t local_98[12];
        float local_8c;
        OBB local_88;

        if (((m_showPatches != '\0') && (field_1136 != false)) && (iVar5 = GetFaceCount(), iVar5 != 0)) {
            this_00 = m_material;
            textureManager = rt7Core.GetTextureManager();
            if (this_00->LoadTextures(*textureManager)) {
                renderPassBitSet = sceneViewData.GetRenderPassBits();
                if (this_00->CanRenderInPasses(*renderPassBitSet)) {
                    GetWorldOBB((ReturnValue*)&local_88, this);
                    matrix44 = (Matrix44T<float>*)sceneViewData.GetScreen();
                    local_8c = (float)DstFromCameraPlane(&local_88, matrix44);
                    DVar7 = (DrawableSortKey)sceneViewData.field_520.HeapBeginPtr();
                    drawableSortKey = (DrawableSortKey)sceneViewData.field_520.end();
                    if (DVar7 != drawableSortKey) {
                        puVar1 = field_1440;
                        do {
                            if (*(long*)DVar7 == 0) {
                                LogAssert("renderPass",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                          "graphics/runetek7/water/WaterPatch.cpp",
                                          161, nullptr);
                            }
                            renderPassType = (*(CommandLine**)DVar7)->GetPos();
                            pRVar8 = (RenderPassEffect*)this_00->GetRenderPassEffect(renderPassType);
                            local_a0 = math::Vector2T();
                            switch (renderPassType) {
                            case 2:
                                pCVar10 = drawableQueue.GetDrawableGroup(2, 3);
                                DVar6 = pCVar10->GetPos();
                                pRVar8 = (RenderPassEffect*)this_00->GetRenderPassEffect(6);
                                UpdateForwardPassEffect(local_a0, DVar6, *pRVar8, rt7Core, effectManager, local_8c);
                                local_98._0_8_ = puVar1;
                                pWVar11 = DrawableElementPool<WaterPatch_DE>::Create<WaterPatch&, math::OBB&, float&,
                                                                                     render::InputAssemblerState*>(
                                    *this, local_88, local_8c, *local_98);
                                DVar2 = local_a0;
                                local_98->unique_ptr<true, void>(pWVar11);
                                drawableQueue.AddDrawable(drawableSortKey, *DVar2, local_98, (DrawableGroupType)this,
                                                          3);
                                break;
                            case 3:
                            case 9:
                            case 12:
                            case 14:
                                goto switchD_1007bb132_caseD_3;
                            case 4:
                                bVar4 = effectManager.IsEnabled(108);
                                drawableGroupType_00 = (unsigned int)bVar4 * 4 + 3;
                                pCVar10 = drawableQueue.GetDrawableGroup(4, drawableGroupType_00);
                                DVar6 = pCVar10->GetPos();
                                UpdateForwardPassEffect(local_a0, DVar6, *pRVar8, rt7Core, effectManager, local_8c);
                                local_98._0_8_ = puVar1;
                                pWVar11 = DrawableElementPool<WaterPatch_DE>::Create<WaterPatch&, math::OBB&, float&,
                                                                                     render::InputAssemblerState*>(
                                    *this, local_88, local_8c, *local_98);
                                DVar2 = local_a0;
                                local_98->unique_ptr<true, void>(pWVar11);
                                drawableQueue.AddDrawable(drawableSortKey, *DVar2, local_98, (DrawableGroupType)this,
                                                          drawableGroupType_00);
                                break;
                            case 5:
                                this_01 = (WaterPatch*)drawableQueue.GetDrawableGroup(5, 3);
                                DVar6 = this_01->GetPos();
                                UpdateMiniMapPassEffect(this_01, &local_a0, DVar6, pRVar8, rt7Core, effectManager,
                                                        local_8c);
                                local_98._0_8_ = puVar1;
                                pWVar11 = DrawableElementPool<WaterPatch_DE>::Create<WaterPatch&, math::OBB&, float&,
                                                                                     render::InputAssemblerState*>(
                                    *this, local_88, local_8c, *local_98);
                                DVar2 = local_a0;
                                local_98->unique_ptr<true, void>(pWVar11);
                                drawableQueue.AddDrawable(drawableSortKey, *DVar2, local_98, (DrawableGroupType)this,
                                                          3);
                                this_02 = &pWVar11->field_112[3];
                                pfVar9 = (float*)(*this_02)[1];
                                *pfVar9 = *pfVar9 + 100.0;
                                goto switchD_1007bb132_caseD_3;
                            default:
                                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                                "graphics/runetek7/water/WaterPatch.cpp",
                                                227, "Unsupported render pass");
                            case 7:
                                pCVar10 = drawableQueue.GetDrawableGroup(7, 3);
                                DVar6 = pCVar10->GetPos();
                                UpdateForwardPassEffect(local_a0, DVar6, *pRVar8, rt7Core, effectManager, local_8c);
                                local_98._0_8_ = puVar1;
                                pWVar11 = DrawableElementPool<WaterPatch_DE>::Create<WaterPatch&, math::OBB&, float&,
                                                                                     render::InputAssemblerState*>(
                                    *this, local_88, local_8c, *local_98);
                                DVar2 = local_a0;
                                local_98->unique_ptr<true, void>(pWVar11);
                                drawableQueue.AddDrawable(drawableSortKey, *DVar2, local_98, (DrawableGroupType)this,
                                                          3);
                            }
                        switchD_1007bb132_caseD_3:
                            DVar7 = (DrawableSortKey)((long)DVar7 + 8);
                        } while (DVar7 != drawableSortKey);
                    }
                }
            }
        }
    }

    // 0x1007bb4e0
    math::OBB WaterPatch::GetWorldOBB() const {
        math::OBB result;
        m_aABB.GetOBB(result);
        result.Transform(*field_1192);
        return result;
    }

    // 0x1007bb520
    void DstFromCameraPlane(const math::OBB& obb, const math::Matrix44T<float>& matrix44) {
        auto puVar1 = obb.SSOBeginPtr();
        uint64_t local_20 = *puVar1;
        uint32_t local_18 = *(uint32_t*)(puVar1 + 1);
        DstFromCameraPlane((Vector3T<float>*)&local_20, matrix44);
    }

    // 0x1007bb560
    void WaterPatch::UpdateForwardPassEffect(DrawableSortKey& drawableSortKey, DrawableSortKeyType drawableSortKeyType,
                                             RenderPassEffect& renderPassEffect, RT7Core& rt7Core,
                                             const EffectManager& effectManager, float arg6) {
        long lVar5;
        unsigned long uVar6;
        PlayerDataComparator<oldscape::social::FriendChatUser>* playerDataComparator;
        uint8_t auVar8[16];

        bool cVar1 = effectManager.IsEnabled(107);
        auto this_00 = effectManager.GetEffect<PlanarReflection>(107);
        float fVar7 = (float)this_00->GetReflectionMapContribution();
        uint8_t arg2 = true;
        if ((cVar1) && (1.0 <= fVar7)) {
            arg2 = effectManager.IsEnabled(85);
        }
        renderPassEffect.Set(51, (bool)arg2);
        bool bVar2 = (bool)m_material->HasNormalMaps();
        renderPassEffect.Set(99, bVar2);
        bVar2 = (bool)m_material->HasFoamMaps();
        renderPassEffect.Set(100, bVar2);
        renderPassEffect.Set(102, true);
        auVar8 = effectManager.BuildShaderEffectList(renderPassEffect);
        renderPassEffect.field_16 = auVar8[0];
        renderPassEffect.field_17 = auVar8[1];
        renderPassEffect.field_18 = auVar8[2];
        renderPassEffect.field_19 = auVar8[3];
        renderPassEffect.field_20 = auVar8[4];
        renderPassEffect.field_21 = auVar8._5_3_;
        renderPassEffect.field_24 = auVar8._8_8_;
        auto pSVar3 = rt7Core.GetShaderManager();
        auto renderPassType = WaterPatchRenderer::GetVertexDecl();
        RenderPassEffect::UpdateShader(renderPassEffect, effectManager, (ShaderType)pSVar3, *10, renderPassType,
                                       '\x04');
        unsigned long uVar4 = renderPassEffect.GetConstructedShaderId();
        switch (drawableSortKeyType) {
        case 0:
            fVar7 = (float)(-(unsigned int)(0.0 < arg6) & (unsigned int)(arg6 + 0.5));
            uVar6 = (unsigned long)fVar7;
            playerDataComparator =
                (PlayerDataComparator<oldscape::social::FriendChatUser>*)(((long)(fVar7 - 9.223372e+18) &
                                                                               (long)uVar6 >> 63 |
                                                                           uVar6)
                                                                              << 24 |
                                                                          uVar4 & 65535 | 144115188092567552);
            break;
        case 1:
            fVar7 = (float)(-(unsigned int)(0.0 < arg6) & (unsigned int)(arg6 + 0.5));
            lVar5 = (long)fVar7;
            playerDataComparator =
                (PlayerDataComparator<
                    oldscape::social::FriendChatUser>*)((unsigned long)((unsigned int)lVar5 |
                                                                        (unsigned int)(long)(fVar7 - 9.223372e+18) &
                                                                            (unsigned int)(lVar5 >> 63)) *
                                                                    -16777216 +
                                                                72057594021150720 &
                                                            72057594021150720 |
                                                        uVar4 & 65535 | 144115188075855872);
            break;
        case 2:
            playerDataComparator =
                (PlayerDataComparator<oldscape::social::FriendChatUser>*)((((long)(float)(-(unsigned int)(0.0 < arg6) &
                                                                                          (unsigned int)(arg6 + 0.5)) &
                                                                            4294967295U)
                                                                               << 8 |
                                                                           (uVar4 & 65535) << 40) +
                                                                          144115188075856127);
            break;
        case 3:
            fVar7 = (float)(-(unsigned int)(0.0 < arg6) & (unsigned int)(arg6 + 0.5));
            uVar6 = (unsigned long)fVar7;
            playerDataComparator =
                (PlayerDataComparator<oldscape::social::FriendChatUser>*)((uVar4 & 65535) << 40 | 144115188075855872 |
                                                                          ((long)(fVar7 - 9.223372e+18) &
                                                                               (long)uVar6 >> 63 |
                                                                           uVar6) *
                                                                                  -256 +
                                                                              1099511627520);
            break;
        case 4:
            fVar7 = (float)(-(unsigned int)(0.0 < arg6) & (unsigned int)(arg6 + 0.5));
            lVar5 = (long)fVar7;
            playerDataComparator =
                (PlayerDataComparator<
                    oldscape::social::FriendChatUser>*)(((unsigned long)((unsigned int)lVar5 |
                                                                         (unsigned int)(long)(fVar7 - 9.223372e+18) &
                                                                             (unsigned int)(lVar5 >> 63))
                                                         << 32) +
                                                        (uVar4 & 65535) + 50266112);
            break;
        case 5:
            fVar7 = (float)(-(unsigned int)(0.0 < arg6) & (unsigned int)(arg6 + 0.5));
            uVar6 = (unsigned long)fVar7;
            playerDataComparator =
                (PlayerDataComparator<oldscape::social::FriendChatUser>*)((((long)(fVar7 - 9.223372e+18) &
                                                                                (long)uVar6 >> 63 |
                                                                            uVar6) *
                                                                               -4294967296 |
                                                                           uVar4 & 65535) -
                                                                          4261412864);
            break;
        default:
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "renderer/DrawableSortKey.h",
                            177, "Unknown sort key type");
        }
        DrawableSortKey local_40(playerDataComparator);
        drawableSortKey = local_40;
    }

    // 0x1007bba00
    void WaterPatch::UpdateMiniMapPassEffect(DrawableSortKey& drawableSortKey, DrawableSortKeyType drawableSortKeyType,
                                             RenderPassEffect& renderPassEffect, RT7Core& rt7Core,
                                             const EffectManager& effectManager, float arg6) {
        long lVar3;
        unsigned long uVar4;
        PlayerDataComparator<oldscape::social::FriendChatUser>* playerDataComparator;
        float fVar5;
        uint8_t auVar6[16];

        auVar6 = effectManager.BuildShaderEffectList(renderPassEffect);
        renderPassEffect.field_16 = auVar6[0];
        renderPassEffect.field_17 = auVar6[1];
        renderPassEffect.field_18 = auVar6[2];
        renderPassEffect.field_19 = auVar6[3];
        renderPassEffect.field_20 = auVar6[4];
        renderPassEffect.field_21 = auVar6._5_3_;
        renderPassEffect.field_24 = auVar6._8_8_;
        auto pSVar1 = rt7Core.GetShaderManager();
        auto renderPassType = WaterPatchRenderer::GetVertexDecl();
        RenderPassEffect::UpdateShader(renderPassEffect, effectManager, (ShaderType)pSVar1, *10, renderPassType,
                                       '\x05');
        unsigned long uVar2 = renderPassEffect.GetConstructedShaderId();
        switch (drawableSortKeyType) {
        case 0:
            fVar5 = (float)(-(unsigned int)(0.0 < arg6) & (unsigned int)(arg6 + 0.5));
            uVar4 = (unsigned long)fVar5;
            playerDataComparator =
                (PlayerDataComparator<oldscape::social::FriendChatUser>*)(((long)(fVar5 - 9.223372e+18) &
                                                                               (long)uVar4 >> 63 |
                                                                           uVar4)
                                                                              << 24 |
                                                                          uVar2 & 65535 | 144115188092567552);
            break;
        case 1:
            fVar5 = (float)(-(unsigned int)(0.0 < arg6) & (unsigned int)(arg6 + 0.5));
            lVar3 = (long)fVar5;
            playerDataComparator =
                (PlayerDataComparator<
                    oldscape::social::FriendChatUser>*)((unsigned long)((unsigned int)lVar3 |
                                                                        (unsigned int)(long)(fVar5 - 9.223372e+18) &
                                                                            (unsigned int)(lVar3 >> 63)) *
                                                                    -16777216 +
                                                                72057594021150720 &
                                                            72057594021150720 |
                                                        uVar2 & 65535 | 144115188075855872);
            break;
        case 2:
            playerDataComparator =
                (PlayerDataComparator<oldscape::social::FriendChatUser>*)((((long)(float)(-(unsigned int)(0.0 < arg6) &
                                                                                          (unsigned int)(arg6 + 0.5)) &
                                                                            4294967295U)
                                                                               << 8 |
                                                                           (uVar2 & 65535) << 40) +
                                                                          144115188075856127);
            break;
        case 3:
            fVar5 = (float)(-(unsigned int)(0.0 < arg6) & (unsigned int)(arg6 + 0.5));
            uVar4 = (unsigned long)fVar5;
            playerDataComparator =
                (PlayerDataComparator<oldscape::social::FriendChatUser>*)((uVar2 & 65535) << 40 | 144115188075855872 |
                                                                          ((long)(fVar5 - 9.223372e+18) &
                                                                               (long)uVar4 >> 63 |
                                                                           uVar4) *
                                                                                  -256 +
                                                                              1099511627520);
            break;
        case 4:
            fVar5 = (float)(-(unsigned int)(0.0 < arg6) & (unsigned int)(arg6 + 0.5));
            lVar3 = (long)fVar5;
            playerDataComparator =
                (PlayerDataComparator<
                    oldscape::social::FriendChatUser>*)(((unsigned long)((unsigned int)lVar3 |
                                                                         (unsigned int)(long)(fVar5 - 9.223372e+18) &
                                                                             (unsigned int)(lVar3 >> 63))
                                                         << 32) +
                                                        (uVar2 & 65535) + 50266112);
            break;
        case 5:
            fVar5 = (float)(-(unsigned int)(0.0 < arg6) & (unsigned int)(arg6 + 0.5));
            uVar4 = (unsigned long)fVar5;
            playerDataComparator =
                (PlayerDataComparator<oldscape::social::FriendChatUser>*)((((long)(fVar5 - 9.223372e+18) &
                                                                                (long)uVar4 >> 63 |
                                                                            uVar4) *
                                                                               -4294967296 |
                                                                           uVar2 & 65535) -
                                                                          4261412864);
            break;
        default:
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "renderer/DrawableSortKey.h",
                            177, "Unknown sort key type");
        }
        DrawableSortKey local_38(playerDataComparator);
        drawableSortKey = local_38;
    }

    // 0x1007bbd20
    void WaterPatch::RenderDebug(RenderPassType renderPassType, DrawableElement& drawableElement) const {
        long* plVar1;
        float* pfVar2;
        Matrix44T<float>* matrix44;
        Matrix44T<float>* this_00;
        float arg2;
        Matrix33T<float> local_100;
        uint8_t local_d8[48];
        ColourHSL local_a8;
        uint64_t local_98;
        float local_90;
        OBB local_88;

        if ((m_showWorldAABB != '\0') && (renderPassType == 4)) {
            matrix44 = field_1192;
            if (field_1192 == nullptr) {
                matrix44 = (Matrix44T<float>*)PTR_IDENTITY_100ee6730;
            }
            this_00 = (Matrix44T<float>*)((long)&drawableElement[1]._vptr + 4);
            *this_00 = *matrix44;
            new (local_d8) math::AABB(m_aABB);
            local_d8->Transform(*this_00);
            plVar1 = DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar1 != nullptr) {
                local_88 = oldscape::sidebars::SideBarData(-1, 3);
                (**(void (**)(...))(*plVar1 + 72))(plVar1, local_d8, &local_88);
            }
            local_100 = math::Matrix33T<float>(field_1140);
            pfVar2 = &field_1156[1];
            local_a8 = math::ColourHSL(0.0, *pfVar2, 0.0);
            arg2 = (float)field_1176;
            new ((local_d8 + 32)) math::ColourHSL((float)field_1168, arg2, (float)field_1172);
            local_98 = *0.5 * (*((local_d8 + 32)));
            local_90 = arg2;
            local_88 = math::OBB(local_a8, local_100, local_98);
            local_88.Transform(*this_00);
            plVar1 = DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar1 != nullptr) {
                local_a8 = oldscape::sidebars::SideBarData(-16711681, 3);
                (**(void (**)(...))(*plVar1 + 80))(plVar1, &local_88, &local_a8);
            }
        }
    }

} // namespace jag::graphics
