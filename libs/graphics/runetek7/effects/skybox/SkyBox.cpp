// libs/graphics/runetek7/effects/skybox/SkyBox.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "SkyBox.h"

namespace jag::graphics {
    // 0x100f444c0
    bool SkyBox::m_ShowSkyBox = 1;

    // 0x100f444c1
    bool SkyBox::m_UseModels = 1;

    // 0x100009e70: SkyBox::GetTransformedTriangle(unsigned int, math::Vector4T<float> (&) [3]) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100067280: SkyBox::GetMaterial() const has the same machine code as game::console::Snow::GetSnowPiles() const

    // 0x10041b1e0: SkyBox::GetPendingSkyID() const has the same machine code as game::NPCType::GetFirstUniqueOpIndex() const

    // 0x10047dbc0, the same machine code as PointLightShadows::GetPointLightSMManager()
    shared_ptr SkyBox::GetRenderTargets() {
        return m_renderTargets;
    }

    // 0x10091a2a0
    SkyBox::SkyBox()
        : Drawable(4), MakeSharedPool<SkyBox, 16>(), field_16(0), field_24(0), field_32(0), field_640(32),
          field_664(32), m_pendingSkyID(-2), m_pendingSkyTransitionTime(0), m_exposure(0.0) {
        field_40.Init();
        CreateRenderingResources();
    }

    // 0x10091a4d0
    void SkyBox::CreateRenderingResources() {
        AutoSingleton<ShaderThreadPoolSingleton> local_10;

        return 1;
    }

    // 0x10091a530
    SkyBox::~SkyBox() {
        DestroyRenderingResources();
        m_renderTargets->~shared_ptr();
        field_664.~Array();
        field_640.~Array();
        field_624->~shared_ptr();
        field_608->~shared_ptr();
        field_592->~shared_ptr();
        m_cubeMap->~shared_ptr();
        field_40.~LightProbeMaterial();
    }

    // 0x10091a630
    void SkyBox::DestroyRenderingResources() {
        AutoSingleton<ShaderThreadPoolSingleton> local_18;

        field_40.DestroyRenderingResources();
        m_cubeMap->reset();
        field_592->reset();
        field_608->reset();
    }

    // 0x10091a6c0
    void SkyBox::MainLogic() {
        Model* pMVar1;
        SkyBox* this_00;
        SkyBox* this_01;

        unsigned long uVar3 = FrameTime::GetCurrentTimeMS();
        field_16 = uVar3;
        if ((field_32 != 0) && (field_32 <= uVar3)) {
            field_24 = 0;
            field_32 = 0;
            *m_cubeMap = *field_592;
            field_592->reset();
            this_01 = (SkyBox*)field_624;
            this_00 = (SkyBox*)field_608;
            *this_00 = *this_01;
            this_01->reset();
            if (this_00->operator_cast_to_bool()) {
                pMVar1 = (Model*)**this_00;
                SetupRenderOrderForSkyModel(this_00, (Array<eastl::pair<unsigned char, int>>*)&field_640, pMVar1);
            }
            if (this_01->operator_cast_to_bool()) {
                pMVar1 = (Model*)**this_01;
                SetupRenderOrderForSkyModel(this_01, (Array<eastl::pair<unsigned char, int>>*)&field_664, pMVar1);
            }
        }
    }

    // 0x10091a790
    void SkyBox::SetupRenderOrderForSkyModel(Array<eastl::pair<unsigned char, int>>& pairs, Model& model) {
        uint32_t uVar2;
        uint8_t* pbVar4;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_01;
        long lVar5;
        uint8_t bVar6;
        uint8_t auVar7[16];

        auto this_00 = model.GetBatchList();
        uint8_t bVar1 = this_00->size();
        unsigned long uVar3 = this_00->size();
        pairs.set_max_size(uVar3, 1);
        if (bVar1 != 0) {
            bVar6 = 0;
            do {
                uVar3 = (unsigned long)bVar6;
                pbVar4 = &pairs[uVar3];
                *pbVar4 = bVar6;
                this_01 =
                    (unique_ptr<GeometryBatchInstance,
                                MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(*this_00)[uVar3];
                uVar2 = ((GeometryBatchInstance*)(*this_01).operator->())->GetFirstSequenceIDFromSource();
                lVar5 = pairs[uVar3];
                *(uint32_t*)(lVar5 + 4) = uVar2;
                bVar6 = bVar6 + 1;
            } while (bVar6 < bVar1);
        }
        auto arg1 = pairs.data();
        auVar7 = pairs.end();
        eastl::sort<eastl::pair<unsigned char, int>*,
                    (Array<eastl::pair<unsigned char, int>>&)->SetupRenderOrderForSkyModel(Model&)::__4>(
            arg1, auVar7._0_8_, auVar7._8_8_);
    }

    // 0x10091a860
    void SkyBox::Clear() {
        field_16 = 0;
        field_24 = 0;
        field_32 = 0;
        m_cubeMap->reset();
        field_592->reset();
        field_608->reset();
        field_624->reset();
        m_pendingSkyID = -2;
        m_pendingSkyTransitionTime = 0;
        m_exposure = 0.0;
    }

    // 0x10091a8d0
    float SkyBox::GetTransitionProgress(unsigned long long arg1, bool arg2) const {
        float fVar2 = 0.0;
        unsigned long uVar1 = field_32 - field_24;
        if (((uVar1 != 0) && (fVar2 = 1.0, arg1 < field_32)) && (arg2)) {
            fVar2 = (float)(arg1 - field_24) / (float)uVar1;
        }
        return fVar2;
    }

    // 0x10091a950
    void SkyBox::SetCubeMap(const shared_ptr<render::TextureCube>& textureCube, unsigned long long arg2,
                            unsigned long long arg3) {
        uint8_t* this_00;

        if (arg2 == 0) {
            *m_cubeMap = textureCube;
            field_592->reset();
            field_24 = 0;
            field_32 = 0;
        } else {
            this_00 = field_592;
            if (this_00->operator_cast_to_bool() != '\0') {
                *m_cubeMap = *this_00;
            }
            *this_00 = textureCube;
            field_16 = arg3;
            field_24 = arg3;
            field_32 = arg2 + arg3;
        }
    }

    // 0x10091a9e0
    void SkyBox::SetModel(const shared_ptr<Model>& model, unsigned long long arg2, unsigned long long arg3) {
        uint8_t* this_00;
        bool bVar1;
        bool cVar2;
        unsigned long uVar3;
        unsigned long uVar4;
        Model* pMVar5;
        float local_34;

        m_pendingSkyID = -1;
        m_pendingSkyTransitionTime = 0;
        if (arg2 == 0) {
            *field_608 = model;
            field_624->reset();
            field_24 = 0;
            field_32 = 0;
        } else {
            this_00 = field_624;
            bVar1 = model == *this_00;
            if (bVar1) {
                local_34 = (float)GetTransitionProgress(arg3, true);
            } else {
                cVar2 = this_00->operator_cast_to_bool();
                local_34 = 0.0;
                if (cVar2) {
                    bVar1 = model == *field_608;
                    local_34 = 0.0;
                    if (bVar1) {
                        local_34 = (float)GetTransitionProgress(arg3, true);
                        local_34 = 1.0 - local_34;
                    }
                    *field_608 = *this_00;
                }
                *this_00 = model;
            }
            field_16 = arg3;
            uVar3 = (unsigned long)((float)arg2 * local_34);
            uVar4 = 0;
            if (0.0 < local_34) {
                uVar4 = (long)((float)arg2 * local_34 - 9.223372e+18) & (long)uVar3 >> 63 | uVar3;
            }
            field_24 = arg3 - uVar4;
            field_32 = (arg3 - uVar4) + arg2;
        }
        SkyBox* pSVar6 = (SkyBox*)field_608;
        cVar2 = pSVar6->operator_cast_to_bool();
        if (cVar2) {
            pMVar5 = (Model*)**pSVar6;
            SetupRenderOrderForSkyModel(pSVar6, (Array<eastl::pair<unsigned char, int>>*)&field_640, pMVar5);
        }
        pSVar6 = (SkyBox*)field_624;
        cVar2 = pSVar6->operator_cast_to_bool();
        if (cVar2) {
            pMVar5 = (Model*)**pSVar6;
            SetupRenderOrderForSkyModel(pSVar6, (Array<eastl::pair<unsigned char, int>>*)&field_664, pMVar5);
        }
    }

    // 0x10091abb0
    void SkyBox::SetPendingSkyID(int arg1, unsigned long long arg2) {
        unsigned long long arg3;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_30;

        if (arg1 == -2) {
            LogAssert("skyID != SKYBOX_ID_UNINITIALISED",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "skybox/SkyBox.cpp",
                      178, nullptr);
        }
        m_pendingSkyID = arg1;
        m_pendingSkyTransitionTime = arg2;
        if (arg1 == -1) {
            local_30 = shared_ptr();
            arg3 = FrameTime::GetCurrentTimeMS();
            SetModel(local_30, arg2, arg3);
        }
    }

    // 0x10091ac50
    uint8_t[16] SkyBox::GetDesiredClearColour(const math::Vector4T<float>& vector4) const {
        float arg1;
        uint8_t auVar2[16];
        ImVec4 local_48;

        ImVec4 local_38(0.0, 0.0, 0.0, 0.0);
        if (m_cubeMap->operator_cast_to_bool() == '\0') {
            local_38 = vector4;
            arg1 = m_exposure;
            local_48 = ImVec4(arg1, arg1, arg1, 0.0);
            local_38 += local_48;
        }
        auVar2[0] = local_38[0];
        auVar2[1] = local_38[1];
        auVar2[2] = local_38[2];
        auVar2[3] = local_38[3];
        auVar2[4] = local_38[4];
        auVar2[5] = local_38[5];
        auVar2[6] = local_38[6];
        auVar2[7] = local_38[7];
        auVar2[8] = local_38[8];
        auVar2[9] = local_38[9];
        auVar2[10] = local_38[10];
        auVar2[11] = local_38[11];
        auVar2[12] = local_38[12];
        auVar2[13] = local_38[13];
        auVar2[14] = local_38[14];
        auVar2[15] = local_38[15];
        return auVar2;
    }

    // 0x10091ace0
    void SkyBox::GatherDrawableElements(DrawableQueue& drawableQueue, RT7Core& rt7Core,
                                        const SceneViewData& sceneViewData, const EffectManager& effectManager) {
        GatherDrawableElementsImpl(drawableQueue, rt7Core, sceneViewData, effectManager, false);
    }

    // 0x10091acf0
    void SkyBox::GatherDrawableElementsImpl(DrawableQueue& drawableQueue, RT7Core& rt7Core,
                                            const SceneViewData& sceneViewData, const EffectManager& effectManager,
                                            bool arg5) {
        bool bVar3;
        uint8_t bVar4;
        uint32_t uVar5;
        unsigned long long uVar6;
        long* plVar7;
        RT7Core* pRVar8;
        uint64_t in_register_00000089;
        uint8_t local_e8[8];
        __3 local_e0;
        RenderPassType* local_98;
        long* local_80;
        float local_58;
        uint32_t local_54;
        long local_40;
        RenderPassType local_38;
        int local_34;

        if (m_ShowSkyBox == '\0') {
            return;
        }
        auto renderPassBitSet = sceneViewData.GetRenderPassBits();
        RenderMaterial* local_88 = (RenderMaterial*)&field_40;
        bool cVar2 = field_40.CanRenderInPasses(*renderPassBitSet);
        if (!cVar2) {
            return;
        }
        cVar2 = effectManager.IsEnabled(27);
        if (!cVar2) {
            return;
        }
        shared_ptr local_78(m_cubeMap);
        shared_ptr local_68(field_592);
        cVar2 = shared_ptr::operator_cast_to_bool(&local_78);
        if ((((cVar2) || (cVar2 = shared_ptr::operator_cast_to_bool(&local_68), cVar2)) ||
             (cVar2 = field_608->operator_cast_to_bool(), cVar2)) ||
            (cVar2 = field_624->operator_cast_to_bool(), cVar2)) {
            uVar6 = FrameTime::GetCurrentTimeMS();
            bVar3 = (bool)effectManager.IsEnabled(94);
            local_58 = (float)GetTransitionProgress(uVar6, bVar3);
            local_34 = 1;
            if (0.0 < local_58) {
                cVar2 = shared_ptr::operator_cast_to_bool(&local_78);
                local_34 = 2;
                if (cVar2) {
                    bVar4 = shared_ptr::operator_cast_to_bool(&local_68);
                    local_34 = 2 - (unsigned int)bVar4;
                }
            }
            cVar2 = field_608->operator_cast_to_bool();
            if (cVar2) {
                GatherSkyModel(rt7Core, sceneViewData, effectManager, *field_608, arg5);
                local_34 = 2;
            }
            cVar2 = field_624->operator_cast_to_bool();
            if (cVar2) {
                GatherSkyModel(rt7Core, sceneViewData, effectManager, *field_624, arg5);
                local_34 = 2;
            }
            local_54 = (uint32_t)(((uint64_t)in_register_00000089 << 8) | (uint8_t)arg5);
            plVar7 = (long*)sceneViewData.field_520.HeapBeginPtr();
            local_80 = (long*)sceneViewData.field_520.end();
            if (plVar7 != local_80) {
                do {
                    if (*plVar7 == 0) {
                        LogAssert("renderPass",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "runetek7/effects/skybox/SkyBox.cpp",
                                  265, nullptr);
                    }
                    local_38 = (*plVar7)->GetPos();
                    pRVar8 = (RT7Core*)local_88->GetRenderPassEffect(local_38);
                    local_40 = 0;
                    new (local_e8) math::Vector2T();
                    local_e0.field_0 = this;
                    local_e0.field_24 = (EffectManager*)rt7Core;
                    local_e0.field_40 = &local_34;
                    local_e0.field_48 = &local_58;
                    local_e0.field_56 = &local_40;
                    local_e0.field_64 = drawableQueue;
                    local_98 = &local_38;
                    local_e0.field_8 = (RenderPassEffect*)local_e8;
                    local_e0.field_16 = pRVar8;
                    local_e0.field_32 = effectManager;
                    if (14 < local_38) {
                    LAB_10091b02f:
                        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "graphics/runetek7/effects/skybox/SkyBox.cpp",
                                        296, "Unsupported render pass");
                    }
                    if ((21000U >> (local_38 & 31) & 1) == 0) {
                        if (local_38 == 2) {
                            GatherDrawableElementsImpl(DrawableQueue&, RT7Core&, SceneViewData const&,
                                                       EffectManager const&, bool)::$_3::operator()(&local_e0);
                        } else {
                            if (local_38 != 4)
                                goto LAB_10091b02f;
                            if ((char)local_54 != '\0') {
                                GatherDrawableElementsImpl(DrawableQueue&, RT7Core&, SceneViewData const&,
                                                           EffectManager const&, bool)::$_3::operator()(&local_e0);
                            }
                        }
                    }
                    if (local_40 != 0) {
                        uVar5 = GetPos();
                        *(uint32_t*)(local_40 + 96) = uVar5;
                        *(SkyBox**)(local_40 + 104) = this;
                        uVar6 = FrameTime::GetCurrentTimeMS();
                        bVar3 = (bool)effectManager.IsEnabled(94);
                        uVar5 = GetTransitionProgress(uVar6, bVar3);
                        *(uint32_t*)(local_40 + 112) = uVar5;
                    }
                    plVar7 = plVar7 + 1;
                } while (plVar7 != local_80);
            }
        }
    }

    // 0x10091b0a0
    void SkyBox::GatherForwardDrawableElements(DrawableQueue& drawableQueue, RT7Core& rt7Core,
                                               const SceneViewData& sceneViewData, const EffectManager& effectManager) {
        GatherDrawableElementsImpl(drawableQueue, rt7Core, sceneViewData, effectManager, true);
    }

    // 0x10091b0c0
    void SkyBox::GatherSkyModel(RT7Core& rt7Core, const SceneViewData& sceneViewData,
                                const EffectManager& effectManager, shared_ptr<Model>& model, bool arg5) {
        SceneViewData* pSVar1;
        RenderPassType RVar3;
        Layout* pLVar5;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_00;
        PointLightShadows* this_01;
        SkyBox* this_02;
        long* plVar6;
        long* plVar7;
        GeometryBatchInstance* pGVar8;
        RenderMaterial* pRVar9;
        RenderPassEffect* pRVar10;
        BillboardBatchInstance* billboardBatchInstance;
        SkyBox* this_04;
        uint32_t in_register_00000089;
        Vector4T<float> local_78;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* local_68;
        SkyBox* local_40;

        uint32_t local_34 = (((uint32_t)in_register_00000089 << 8) | (uint8_t)arg5);
        SceneViewData* local_48 = sceneViewData;
        auto pMVar4 = model.operator->();
        bool cVar2 = pMVar4->IsReadyToRender();
        if (cVar2) {
            pMVar4 = (Model*)model.operator->();
            local_40 = this;
            local_78 = math::Vector4T(m_exposure);
            pMVar4->SetTint(local_78);
            pMVar4 = (Model*)model.operator->();
            pLVar5 = (Layout*)pMVar4->GetBatchList();
            this_00 =
                (unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                    pLVar5->HeapBeginPtr();
            local_68 =
                (unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                    pLVar5->end();
            local_48 = (SceneViewData*)&local_48->field_520;
            if (this_00 != local_68) {
                do {
                    pGVar8 = (GeometryBatchInstance*)(*this_00).operator->();
                    cVar2 = ((GeometryBatch*)pGVar8->GetGeometryBatch())->IsHidden();
                    pSVar1 = local_48;
                    if (!cVar2) {
                        plVar6 = (long*)local_48->HeapBeginPtr();
                        plVar7 = (long*)pSVar1->end();
                        for (; plVar6 != plVar7; plVar6 = plVar6 + 1) {
                            if (*plVar6 == 0) {
                                LogAssert("renderPass",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                          "graphics/runetek7/effects/skybox/SkyBox.cpp",
                                          328, nullptr);
                            }
                            RVar3 = (*plVar6)->GetPos();
                            pGVar8 = (GeometryBatchInstance*)(*this_00).operator->();
                            pRVar9 = (RenderMaterial*)pGVar8->GetMaterial();
                            pRVar10 = (RenderPassEffect*)pRVar9->GetRenderPassEffect(RVar3);
                            if (14 < RVar3) {
                            LAB_10091b2a5:
                                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                                "graphics/runetek7/effects/skybox/SkyBox.cpp",
                                                349, "Unsupported render pass");
                            }
                            if ((21000U >> (RVar3 & 31) & 1) == 0) {
                                if (RVar3 != 2) {
                                    if (RVar3 != 4)
                                        goto LAB_10091b2a5;
                                    if ((char)local_34 == '\0')
                                        goto LAB_10091b21f;
                                }
                                pGVar8 = (GeometryBatchInstance*)this_00->get();
                                UpdateSkyBatchForwardPassEffect(local_40, pRVar10, rt7Core, effectManager, pGVar8);
                            }
                        LAB_10091b21f:
                        }
                    }
                    this_00 = this_00 + 8;
                } while (this_00 != local_68);
            }
            this_01 = (PointLightShadows*)model.operator->();
            pLVar5 = (Layout*)this_01->GetPointLightSMManager();
            this_02 = (SkyBox*)pLVar5->HeapBeginPtr();
            local_40 = (SkyBox*)pLVar5->end();
            if (this_02 != local_40) {
                do {
                    pSVar1 = local_48;
                    plVar6 = (long*)local_48->HeapBeginPtr();
                    plVar7 = (long*)pSVar1->end();
                    for (; plVar6 != plVar7; plVar6 = plVar6 + 1) {
                        if (*plVar6 == 0) {
                            LogAssert("renderPass",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                      "runetek7/effects/skybox/SkyBox.cpp",
                                      359, nullptr);
                        }
                        RVar3 = (*plVar6)->GetPos();
                        pGVar8 = (GeometryBatchInstance*)(*this_02).operator->();
                        pRVar9 = (RenderMaterial*)pGVar8->GetMaterial();
                        pRVar10 = (RenderPassEffect*)pRVar9->GetRenderPassEffect(RVar3);
                        if (14 < RVar3) {
                        LAB_10091b2ff:
                            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "graphics/runetek7/effects/skybox/SkyBox.cpp",
                                            378, "Unsupported render pass");
                        }
                        if ((21004U >> (RVar3 & 31) & 1) == 0) {
                            if (RVar3 != 4)
                                goto LAB_10091b2ff;
                            if ((char)local_34 != '\0') {
                                this_04 = this_02;
                                billboardBatchInstance = (BillboardBatchInstance*)this_02->get();
                                UpdateSkyBillboardBatchForwardPassEffect(this_04, pRVar10, rt7Core, effectManager,
                                                                         billboardBatchInstance);
                            }
                        }
                    }
                    this_02 = (SkyBox*)&this_02->field_8;
                } while (this_02 != local_40);
            }
        }
    }

    // 0x10091b3c0
    void SkyBox::GatherDrawableElementsImpl(DrawableQueue&, RT7Core&, SceneViewData const&, EffectManager const&,
                                            bool)::$_3::operator()() const {
        unique_ptr<DrawableElement, DrawableElementDeleter>* drawableElement;
        DrawableSortKey drawableSortKey;
        uint32_t in_stack_ffffffffffffffbc;
        unique_ptr<DrawableElement, DrawableElementDeleter> local_38;

        uint64_t uVar1 = field_0;
        bool bVar2 = *field_48 <= 1.0 && *field_48 != 1.0;
        unsigned int uVar4 = (unsigned int)bVar2;
        UpdateForwardPassEffect((DrawableSortKey*)(unsigned long)bVar2, field_8, field_16, field_24, (uint8_t)field_32,
                                *field_40 == 2);
        auto pSVar3 = DrawableElementPool<SkyBox_DE>::Create<>();
        *field_56 = pSVar3;
        DrawableQueue* this_00 = field_64;
        drawableElement = *(unique_ptr<DrawableElement, DrawableElementDeleter>**)field_8;
        local_38.unique_ptr<true, void>(*field_56);
        drawableSortKey._4_4_ = in_stack_ffffffffffffffbc;
        drawableSortKey._0_4_ = uVar4;
        this_00->AddDrawable(drawableSortKey, *drawableElement, &local_38, (DrawableGroupType)uVar1, 3);
    }

    // 0x10091b4c0
    void SkyBox::UpdateSkyBatchForwardPassEffect(RenderPassEffect& renderPassEffect, RT7Core& rt7Core,
                                                 const EffectManager& effectManager,
                                                 GeometryBatchInstance* geometryBatchInstance) {
        uint8_t auVar4[16];

        renderPassEffect.Set(86, true);
        renderPassEffect.Set(7, false);
        renderPassEffect.Set(21, false);
        renderPassEffect.Set(52, false);
        renderPassEffect.Set(26, false);
        renderPassEffect.Set(30, false);
        renderPassEffect.Set(28, false);
        renderPassEffect.Set(48, false);
        renderPassEffect.Set(57, false);
        renderPassEffect.Set(24, false);
        renderPassEffect.Set(51, false);
        renderPassEffect.Set(110, false);
        renderPassEffect.Set(15, false);
        renderPassEffect.Set(44, false);
        renderPassEffect.Set(117, false);
        renderPassEffect.Set(35, false);
        renderPassEffect.Set(82, m_exposure != 0.0);
        auVar4 = effectManager.BuildShaderEffectList(renderPassEffect);
        renderPassEffect.field_16 = auVar4[0];
        renderPassEffect.field_17 = auVar4[1];
        renderPassEffect.field_18 = auVar4[2];
        renderPassEffect.field_19 = auVar4[3];
        renderPassEffect.field_20 = auVar4[4];
        renderPassEffect.field_21 = auVar4._5_3_;
        renderPassEffect.field_24 = auVar4._8_8_;
        auto this_00 = geometryBatchInstance->GetMaterial();
        bool cVar1 = this_00->GetOption(1);
        bool arg2 = true;
        if (!cVar1) {
            cVar1 = this_00->GetOption(2);
            if (!cVar1) {
                arg2 = (uint8_t*)this_00->data() != AlphaMode::ALPHA_OPAQUE;
            }
        }
        renderPassEffect.field_16.Set(65, arg2);
        auto pSVar3 = rt7Core.GetShaderManager();
        auto renderPassType = GeometryBatchRenderer::GetVertexDecl();
        RenderPassEffect::UpdateShader(renderPassEffect, effectManager, (ShaderType)pSVar3, nullptr, renderPassType,
                                       '\x04');
    }

    // 0x10091b6c0
    void SkyBox::UpdateSkyBillboardBatchForwardPassEffect(RenderPassEffect& renderPassEffect, RT7Core& rt7Core,
                                                          const EffectManager& effectManager,
                                                          BillboardBatchInstance* billboardBatchInstance) {
        uint8_t auVar5[16];

        renderPassEffect.Set(86, true);
        auto this_00 = billboardBatchInstance->GetBillboardBatch();
        bool bVar1 = (bool)this_00->IsLowPrecision();
        renderPassEffect.Set(20, bVar1);
        bVar1 = (bool)effectManager.IsEnabled(48);
        renderPassEffect.Set(29, bVar1);
        auVar5 = effectManager.BuildShaderEffectList(renderPassEffect);
        renderPassEffect.field_16 = auVar5[0];
        renderPassEffect.field_17 = auVar5[1];
        renderPassEffect.field_18 = auVar5[2];
        renderPassEffect.field_19 = auVar5[3];
        renderPassEffect.field_20 = auVar5[4];
        renderPassEffect.field_21 = auVar5._5_3_;
        renderPassEffect.field_24 = auVar5._8_8_;
        long lVar2 = rt7Core.GetPostProcessController()->GetCurrentConfig();
        if (*(char*)(lVar2 + 468) == '\0') {
            renderPassEffect.field_16.Set(64, false);
        }
        auto pSVar3 = rt7Core.GetShaderManager();
        auto pVVar4 = BillboardBatchRenderer::GetVertexDecl();
        RenderPassEffect::UpdateShader(renderPassEffect, effectManager, (ShaderType)pSVar3, *5, (RenderPassType)pVVar4,
                                       '\x04');
    }

    // 0x10091b990
    void SkyBox::UpdateForwardPassEffect(DrawableSortKey& drawableSortKey, RenderPassEffect& renderPassEffect,
                                         RT7Core& rt7Core, const EffectManager& effectManager, bool arg5, bool arg6) {
        uint64_t in_register_00000081;
        uint64_t in_register_00000089;
        uint8_t auVar4[16];
        bool in_stack_00000008;
        uint64_t local_40;

        ShaderManager* shaderManager = (ShaderManager*)(((uint64_t)in_register_00000081 << 8) | (uint8_t)arg5);
        bool arg2 = (bool)shaderManager->IsEnabled(48);
        rt7Core.Set(29, arg2);
        rt7Core.Set(84, in_stack_00000008);
        auVar4 = shaderManager->BuildShaderEffectList(rt7Core);
        *(uint8_t(*)[16]) & rt7Core.field_16 = auVar4;
        auto pSVar2 = effectManager.GetShaderManager();
        auto renderPassType = SkyBoxRenderer::GetVertexDecl();
        RenderPassEffect::UpdateShader(rt7Core, *shaderManager, (ShaderType)pSVar2, *17, renderPassType, 255);
        unsigned short uVar1 = rt7Core.GetConstructedShaderId();
        unsigned long uVar3 = 576460752320135168;
        if ((int)(((uint64_t)in_register_00000089 << 8) | (uint8_t)arg6) != 0) {
            uVar3 = 72057594054639616;
        }
        new (&local_40)
            eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>((uVar3 | uVar1));
        renderPassEffect.field_0 = (uint32_t)local_40;
        renderPassEffect.field_4 = local_40._4_4_;
    }

    // 0x10091ba90
    void SkyBox::UpdateRenderTargets(RT7Core& rt7Core, unsigned int arg2, unsigned int arg3) {
        RenderTargets* pRVar1;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* pvVar2;
        uint64_t* puVar3;
        unsigned int* puVar4;
        long lVar5;
        uint8_t local_c0[68];
        uint32_t uStack_78;
        uint64_t local_70;
        uint64_t uStack_68;
        uint64_t local_60;
        uint64_t uStack_58;
        uint64_t local_50;
        uint64_t uStack_48;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_40;

        uint8_t* this_02 = m_renderTargets;
        if (this_02->operator_cast_to_bool()) {
            pRVar1 = (RenderTargets*)(*this_02).operator->();
            pvVar2 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                         pRVar1->GetColourTargetTextures();
            puVar3 = (uint64_t*)(*pvVar2)[0];
            puVar4 = (unsigned int*)(*puVar3)->second();
            if (*puVar4 == arg2) {
                pRVar1 = (RenderTargets*)(*this_02).operator->();
                pvVar2 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                             pRVar1->GetColourTargetTextures();
                puVar3 = (uint64_t*)(*pvVar2)[0];
                lVar5 = (*puVar3)->second();
                if (*(unsigned int*)(lVar5 + 4) == arg3)
                    goto LAB_10091bc22;
            }
        }
        if (this_02->operator_cast_to_bool()) {
            ((RenderTargetsManager*)rt7Core.GetRenderTargetsManager())->Unregister(*this_02);
            this_02->reset();
        }
        new (local_c0) render::Texture::Desc();
        local_c0._0_4_ = arg2;
        local_c0._4_4_ = arg3;
        local_c0._12_4_ = render::GetFormatFromDepthStencilBits(16, 0, false);
        Desc* this_03 = (Desc*)(local_c0 + 64);
        new (this_03) render::Texture::Desc();
        local_c0._64_4_ = arg2;
        uint32_t uStack_74 = ((RenderDevice*)this_03->Instance())->GetLowestPrecisionRGBFloatFormat();
        auto str = rt7Core.GetRenderTargetsManager();
        uint64_t local_148 = (((uint64_t)arg3 << 32) | (uint32_t)local_c0._64_4_);
        uint64_t uStack_140 = (((uint64_t)uStack_74 << 32) | (uint32_t)uStack_78);
        uint64_t local_118 = local_50;
        uint64_t uStack_110 = uStack_48;
        uint64_t local_128 = local_60;
        uint64_t uStack_120 = uStack_58;
        uint64_t local_138 = local_70;
        uint64_t uStack_130 = uStack_68;
        Desc local_108;
        local_40.Register(str, 14749739, *3553, (int)&local_148, DAT_00000001, (unsigned int)(Desc*)local_c0, false);
        *this_02 = local_40;
    LAB_10091bc22:
        *this_02 != nullptr;
    }

} // namespace jag::graphics

namespace jag::oldscape {
    // 0x100023af0: Skybox::ShowSkybox() const has the same machine code as hal::Haptics::GetEnabled() const

} // namespace jag::oldscape
