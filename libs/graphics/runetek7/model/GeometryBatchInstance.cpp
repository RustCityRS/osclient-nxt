// libs/graphics/runetek7/model/GeometryBatchInstance.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "GeometryBatchInstance.h"

namespace jag::graphics {
    // 0x100f43af8
    int32_t GeometryBatchInstance::m_renderDepthEnabled = 1;

    // 0x100f43afc
    int32_t GeometryBatchInstance::m_alphaTestThresholdOverrideValue = 127;

    // 0x103bbd410
    int32_t GeometryBatchInstance::m_debugLodInstanceColourPassType;

    // 0x103bbd414
    bool GeometryBatchInstance::m_debugLodInstanceColourEnabled;

    // 0x103bbd415
    bool GeometryBatchInstance::m_showWorldAABB;

    // 0x103bbd416
    bool GeometryBatchInstance::m_showWorldOBB;

    // 0x103bbd417
    bool GeometryBatchInstance::m_alphaTestThresholdOverride;

    // 0x100009e70: GeometryBatchInstance::GatherDrawableElements(DrawableQueue&, RT7Core&, SceneViewData const&, EffectManager const&) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x1001a3c10: GeometryBatchInstance::GetMaterial() has the same machine code as MainLoopFrameTimer::GetFPSCounter()

    // 0x1001a3c10: GeometryBatchInstance::GetMaterial() const has the same machine code as MainLoopFrameTimer::GetFPSCounter()

    // 0x10036bfd0: GeometryBatchInstance::GetGeometryBatch() const has the same machine code as GeometryBatchInstance::GetGeometryBatch()

    // 0x10080cc70
    void GeometryBatchInstance::Reserve(const GeometryBatchCombineHelper& geometryBatchCombineHelper) {
        ((GeometryBatch*)(*field_24).operator->())->Reserve(geometryBatchCombineHelper);
    }

    // 0x10080cca0
    void GeometryBatchInstance::Append(const GeometryBatchInstance& geometryBatchInstance, bool arg2) {
        uint8_t* puVar1;
        array<IndexRange, 5ul>* this_00;
        array<IndexRange, 5ul>* this_01;
        int iVar2;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* this_02;
        GeometryBatchInstance* pGVar3;
        GeometryBatchInstance* this_03;
        bool cVar4;
        uint32_t uVar5;
        int iVar6;
        unsigned int uVar7;
        GeometryBatch* pGVar8;
        uint32_t* puVar9;
        GeometryBatch* geometryBatch;
        int* piVar10;
        int* piVar11;
        long lVar12;
        int* piVar13;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* this_04;
        bitset<32ul, unsigned long long>* bitset;
        bitset<32ul, unsigned long long>* this_05;
        long lVar14;
        MaterialInfo* materialInfo1;
        MaterialInfo* materialInfo2;
        MaterialInfo* materialInfo3;
        unsigned long uVar15;
        uint8_t* this_06;
        array<unsigned int, 5ul> local_90;
        array<IndexRange, 5ul>* local_78;
        int* local_70;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* local_68;
        int* local_60;
        GeometryBatchInstance* local_50;
        int local_44;
        array<IndexRange, 5ul>* local_40;
        int* local_38;

        if (this != geometryBatchInstance) {
            DestroyRenderingResources();
            puVar1 = field_24;
            uVar15 = 0;
            local_50 = this;
            do {
                pGVar8 = (GeometryBatch*)(*puVar1).operator->();
                uVar5 = pGVar8->GetLodIndexCount((unsigned int)uVar15);
                puVar9 = &local_90[uVar15];
                *puVar9 = uVar5;
                uVar15 = uVar15 + 1;
            } while (uVar15 != 5);
            pGVar8 = (GeometryBatch*)(*puVar1).operator->();
            local_44 = pGVar8->GetVertexCount();
            if (local_44 == 0) {
                LogAssert("vertexOffset > 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "model/GeometryBatchInstance.cpp",
                          666, nullptr);
            }
            pGVar8 = (GeometryBatch*)(*puVar1).operator->();
            pGVar3 = geometryBatchInstance;
            geometryBatch = (GeometryBatch*)*geometryBatchInstance.field_24;
            pGVar8->Append(*geometryBatch, arg2);
            piVar10 = (int*)pGVar3->field_696.HeapBeginPtr();
            local_70 = (int*)pGVar3->field_696.end();
            if (piVar10 != local_70) {
                local_68 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)&local_50->field_696;
                do {
                    this_02 = local_68;
                    cVar4 = local_68->empty();
                    local_38 = piVar10;
                    if (!cVar4) {
                        piVar11 = (int*)this_02->back();
                        if (*piVar11 != *piVar10)
                            goto LAB_10080cec0;
                        lVar12 = this_02->back();
                        if (*(char*)(lVar12 + 4) != (char)piVar10[1])
                            goto LAB_10080cec0;
                        lVar12 = this_02->back();
                        if (*(int*)(lVar12 + 8) != piVar10[2])
                            goto LAB_10080cec0;
                        lVar12 = this_02->back();
                        if (*(short*)(lVar12 + 16) != (short)piVar10[4])
                            goto LAB_10080cec0;
                        local_40 = (array<IndexRange, 5ul>*)this_02->back();
                        pGVar8 = (GeometryBatch*)(*puVar1).operator->();
                        iVar6 = pGVar8->GetNumLods();
                        if (iVar6 != 0) {
                            this_00 = (array<IndexRange, 5ul>*)(local_38 + 5);
                            this_01 = local_40 + 20;
                            uVar15 = 0;
                            do {
                                piVar10 = (int*)(*this_00)[uVar15];
                                iVar6 = piVar10[1];
                                iVar2 = *piVar10;
                                lVar12 = (*this_01)[uVar15];
                                *(int*)(lVar12 + 4) = *(int*)(lVar12 + 4) + (iVar6 - iVar2);
                                uVar15 = uVar15 + 1;
                                pGVar8 = (GeometryBatch*)(*puVar1).operator->();
                                uVar7 = pGVar8->GetNumLods();
                            } while (uVar15 < uVar7);
                        }
                        *(int*)(local_40 + 64) = *(int*)(local_40 + 64) + (local_38[16] - local_38[15]);
                    } else {
                    LAB_10080cec0:
                        local_60 = (int*)this_02->push_back();
                        *local_60 = *piVar10;
                        *(char*)(local_60 + 1) = (char)piVar10[1];
                        local_60[2] = piVar10[2];
                        *(short*)(local_60 + 4) = (short)piVar10[4];
                        pGVar8 = (GeometryBatch*)(*puVar1).operator->();
                        iVar6 = pGVar8->GetNumLods();
                        if (iVar6 != 0) {
                            local_40 = (array<IndexRange, 5ul>*)(local_38 + 5);
                            local_78 = (array<IndexRange, 5ul>*)(local_60 + 5);
                            uVar15 = 0;
                            do {
                                piVar10 = (int*)(*local_40)[uVar15];
                                iVar6 = *piVar10;
                                piVar11 = &local_90[uVar15];
                                iVar2 = *piVar11;
                                piVar13 = (int*)(*local_78)[uVar15];
                                *piVar13 = iVar6 + iVar2;
                                piVar13[1] = *piVar11 + piVar10[1];
                                uVar15 = uVar15 + 1;
                                pGVar8 = (GeometryBatch*)(*puVar1).operator->();
                                uVar7 = pGVar8->GetNumLods();
                            } while (uVar15 < uVar7);
                        }
                        local_60[15] = local_38[15] + local_44;
                        local_60[16] = local_38[16] + local_44;
                    }
                    piVar10 = local_38 + 17;
                } while (piVar10 != local_70);
            }
            pGVar3 = geometryBatchInstance;
            this_04 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)GetMaterial(
                geometryBatchInstance);
            bitset = (bitset<32ul, unsigned long long>*)this_04->second();
            this_03 = local_50;
            this_05 = (bitset<32ul, unsigned long long>*)local_50->m_material->second();
            *this_05 |= *bitset;
            puVar1 = &this_03->field_664;
            lVar12 = puVar1->size();
            this_06 = &pGVar3->field_664;
            lVar14 = this_06->size();
            puVar1->reserve(lVar12 + lVar14);
            materialInfo1 = (MaterialInfo*)puVar1->end();
            materialInfo2 = (MaterialInfo*)this_06->HeapBeginPtr();
            materialInfo3 = (MaterialInfo*)this_06->end();
            puVar1->insert<MaterialInfo const*>(materialInfo1, materialInfo2, materialInfo3);
            UpdateShadowRenderFlags(this_03);
        }
    }

    // 0x10080d060
    void DrawableElementPool<GeometryBatch_DE>::GetDrawableElementPool() {
        int* piVar2;
        int local_18[2];

        if (GetDrawableElementPool()::pool == '\0') {
            if (___cxa_guard_acquire(&GetDrawableElementPool()::pool) != 0) {
                local_18[0] = 16;
                local_18[1] = 16;
                piVar2 = std::max<int>(*local_18, *(local_18 + 1));
                new ((FastPool<GeometryBatch_DE, int>*)&GetDrawableElementPool()::pool)
                    FastPool<GeometryBatch_DE, int>(4096, *piVar2);
                ___cxa_atexit(PTR__FastPool_100ee6858, &GetDrawableElementPool()::pool, 4294967296);
                ___cxa_guard_release(&GetDrawableElementPool()::pool);
            }
        }
        return &GetDrawableElementPool()::pool;
    }

    // 0x10080d130
    GeometryBatchInstance::GeometryBatchInstance(Model& model, unsigned short arg2)
        : Transformable(), field_8(3), MakeUniquePool<GeometryBatchInstance, 3072>() {
        field_8 = &PTR__GeometryBatchInstance_100f15758;
        MakeSharedPool<GeometryBatch, 4096>::MakeShared<>();
        new (m_material) ModelMaterial();
        field_656 = model;
        new (&field_664) eastl::vector<MaterialInfo>();
        new (&field_696) eastl::vector<SourceModelExternalIndexSection>();
        new (&field_728) eastl::vector<SourceModelExternalIndexSectionRangeOnly>();
        field_768 = 0;
        field_760 = 0;
        new (&field_784) math::Vector4T();
        new (&field_800) VertexAnimation();
        new (&field_880) math::Vector4T();
        SetInstanceDebugColour();
        field_696.reserve((unsigned long)arg2);
        field_728.reserve((unsigned long)arg2);
    }

    // 0x10080d420
    void GeometryBatchInstance::SetInstanceDebugColour() {
        float fVar2 = (float)math::frand(0.0, 1.0);
        fVar2 = (float)::floor(fVar2 * 16777215.0);
        long lVar1 = (long)fVar2;
        field_784.Set((float)((unsigned int)((unsigned long)lVar1 >> 16) & 255) * 0.003921569f,
                      (float)(uint8_t)((unsigned long)lVar1 >> 8) * 0.003921569f,
                      (float)((unsigned int)lVar1 & 255) * 0.003921569f, 1.0);
    }

    // 0x10080d510
    GeometryBatchInstance::GeometryBatchInstance(GeometryBatchInstance&& geometryBatchInstance, Model& model)
        : Transformable(), field_8(&geometryBatchInstance.field_8), MakeUniquePool<GeometryBatchInstance, 3072>() {
        field_8 = &PTR__GeometryBatchInstance_100f15758;
        field_24->shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(geometryBatchInstance.field_24);
        new (m_material) ModelMaterial(geometryBatchInstance.m_material);
        field_656 = model;
        new (&field_664) eastl::vector<MaterialInfo>();
        new (&field_696) eastl::vector<SourceModelExternalIndexSection>(geometryBatchInstance.field_696);
        new (&field_728) eastl::vector<SourceModelExternalIndexSectionRangeOnly>(geometryBatchInstance.field_728);
        field_768 = 0;
        field_760 = 0;
        new (&field_784) math::Vector4T();
        new (&field_800) VertexAnimation(geometryBatchInstance.field_800);
        uint64_t uVar1 = geometryBatchInstance.field_888;
        field_880 = geometryBatchInstance.field_880;
        field_888 = uVar1;
        SetInstanceDebugColour();
        UpdateShadowRenderFlags();
    }

    // 0x10080d6c0
    void GeometryBatchInstance::UpdateShadowRenderFlags() {
        unsigned int uVar3 = field_8.GetPos();
        uint8_t bVar1 = m_material->GetOption(7);
        uint8_t bVar2 = m_material->GetOption(8);
        new (&field_8)
            oldscape::ServerConnectionWorkItem(((unsigned int)bVar1 | uVar3 & 4294967292) + (unsigned int)bVar2 * 2);
    }

    // 0x10080d730
    GeometryBatchInstance::GeometryBatchInstance(const GeometryBatchInstance& geometryBatchInstance, Model& model,
                                                 bool arg3)
        : Transformable(), field_8(&geometryBatchInstance.field_8), MakeUniquePool<GeometryBatchInstance, 3072>() {
        field_8 = &PTR__GeometryBatchInstance_100f15758;
        if (arg3) {
            new (field_24) shared_ptr(geometryBatchInstance.field_24);
        } else {
            *geometryBatchInstance.field_24;
            MakeSharedPool<GeometryBatch, 4096>::MakeShared<GeometryBatch&>((GeometryBatch*)field_24);
        }
        new (m_material) ModelMaterial(geometryBatchInstance.m_material);
        field_656 = model;
        new (&field_664) eastl::vector<MaterialInfo>();
        new (&field_696) eastl::vector<SourceModelExternalIndexSection>(geometryBatchInstance.field_696);
        new (&field_728) eastl::vector<SourceModelExternalIndexSectionRangeOnly>(geometryBatchInstance.field_728);
        field_768 = 0;
        field_760 = 0;
        new (&field_784) math::Vector4T();
        new (&field_800) VertexAnimation(geometryBatchInstance.field_800);
        uint64_t uVar1 = geometryBatchInstance.field_888;
        field_880 = geometryBatchInstance.field_880;
        field_888 = uVar1;
        SetInstanceDebugColour();
        UpdateShadowRenderFlags();
    }

    // 0x10080da20
    GeometryBatchInstance::GeometryBatchInstance(Model& model, const shared_ptr<GeometryBatch>& geometryBatch)
        : Transformable(), field_8(0), MakeUniquePool<GeometryBatchInstance, 3072>() {
        field_8 = &PTR__GeometryBatchInstance_100f15758;
        new (field_24) shared_ptr(geometryBatch);
        new (m_material) ModelMaterial();
        field_656 = model;
        new (&field_664) eastl::vector<MaterialInfo>();
        new (&field_696) eastl::vector<SourceModelExternalIndexSection>();
        new (&field_728) eastl::vector<SourceModelExternalIndexSectionRangeOnly>();
        field_768 = 0;
        field_760 = 0;
        new (&field_784) math::Vector4T();
        new (&field_800) VertexAnimation();
        new (&field_880) math::Vector4T();
        SetInstanceDebugColour();
        field_696.reserve(1);
        field_728.reserve(1);
    }

    // 0x10080dbb0
    GeometryBatchInstance::~GeometryBatchInstance() {
        field_8 = &PTR__GeometryBatchInstance_100f15758;
        m_material->DestroyRenderingResources();
        field_800.~VertexAnimation();
        field_728.~vector();
        field_696.~vector();
        field_664.~vector();
        m_material->~ModelMaterial();
        field_24->~shared_ptr();
    }

    // 0x10080dd50
    void GeometryBatchInstance::SetDefaultLODs(const EffectManager& effectManager, RenderPassType renderPassType,
                                               const SceneViewData& sceneViewData, float arg4, const math::OBB& obb) {
        int iVar2;
        Matrix44T<float>* matrix441;
        Matrix44T<float>* matrix442;
        ModelLodPassConfig* modelLodPassConfig;
        LodPassType LVar3;
        float arg4_00;
        uint8_t local_48[16];
        float local_34;

        bool cVar1 = effectManager.IsEnabled(96);
        if ((!cVar1) && (renderPassType - 3 < 2)) {
            cVar1 = effectManager.IsEnabled(95);
            if (!cVar1) {
                LVar3 = 0;
                do {
                    SetLodLevel(LVar3, 0);
                    LVar3 = LVar3 + 1;
                } while (LVar3 != 3);
            } else {
                cVar1 = effectManager.IsEnabled(97);
                if (!cVar1) {
                    new (local_48) math::Sphere();
                    obb.GetMinimumEnclosingSphere(*local_48);
                    matrix441 = (Matrix44T<float>*)sceneViewData.GetScreen();
                    matrix442 = (Matrix44T<float>*)sceneViewData.GetOrigin();
                    local_34 = (float)math::NDCProjectGetSphericalNDCRadius(*local_48, *matrix441, *matrix442);
                    LVar3 = 0;
                    do {
                        modelLodPassConfig =
                            (ModelLodPassConfig*)((Model*)(unsigned long)LVar3)->GetLodConfig((LodPassType)matrix441);
                        arg4_00 = (float)local_48->GetOutlineRadiusAdjustment();
                        iVar2 = Model::CalculateLodLevel(*modelLodPassConfig, arg4, local_34, arg4_00);
                        matrix441 = (Matrix44T<float>*)(unsigned long)LVar3;
                        SetLodLevel(LVar3, iVar2 + *(int*)(modelLodPassConfig + 24));
                        LVar3 = LVar3 + 1;
                    } while (LVar3 != 3);
                } else {
                    SetLodLevel(0, 4);
                }
            }
        }
    }

    // 0x10080e030
    void GeometryBatchInstance::IsTransformed() const {
        ((GeometryBatch*)(*field_24).operator->())->IsTransformed();
    }

    // 0x10080e060
    void GeometryBatchInstance::SetTransformed(bool arg1) {
        ((GeometryBatch*)(*field_24).operator->())->SetTransformed(arg1);
    }

    // 0x10080e0a0
    void GeometryBatchInstance::GetAABB() const {
        ((Layout*)(*field_24).operator->())->SSOBeginPtr();
    }

    // 0x10080e0c0
    void
    GeometryBatchInstance::SetAnimationStateProvider(const shared_ptr<AnimationStateProvider>& animationStateProvider) {
        long* plVar4;

        char cVar2 = field_24->operator_cast_to_bool();
        if (!cVar2) {
        LAB_10080e0f5:
            plVar4 = (long*)animationStateProvider.operator->();
            cVar2 = (**(void (**)(...))(*plVar4 + 48))(plVar4);
            if (!cVar2) {
                plVar4 = (long*)animationStateProvider.operator->();
                cVar2 = (**(void (**)(...))(*plVar4 + 56))(plVar4);
                if (cVar2 == '\x02')
                    goto LAB_10080e175;
            }
        } else {
            cVar2 = ((GeometryBatch*)(*field_24).operator->())->HasBones();
            if (!cVar2)
                goto LAB_10080e0f5;
        }
        cVar2 = (GetMaterial((GeometryBatchInstance*)&field_800))->operator_cast_to_bool();
        if (!cVar2) {
            ((AnimationStateProvider*)animationStateProvider.operator->())->InvalidateAsyncUpdate();
        }
        field_800.SetAnimationStateProvider(animationStateProvider);
        bool arg2 = animationStateProvider != nullptr;
        field_8.SetRenderFlag(8, arg2);
    LAB_10080e175:
        cVar2 = animationStateProvider.operator_cast_to_bool();
        char cVar3 = '\x02';
        if (cVar2) {
            plVar4 = (long*)animationStateProvider.operator->();
            cVar3 = (**(void (**)(...))(*plVar4 + 56))(plVar4);
        }
        uint8_t* this_03 = m_material;
        auto pEVar1 = this_03->GetRenderPassEffect(4);
        pEVar1->Set(77, !cVar3);
        pEVar1 = (EffectList*)this_03->GetRenderPassEffect(2);
        pEVar1->Set(77, !cVar3);
        pEVar1 = (EffectList*)this_03->GetRenderPassEffect(4);
        pEVar1->Set(78, cVar3 == '\x01');
        pEVar1 = (EffectList*)this_03->GetRenderPassEffect(2);
        pEVar1->Set(78, cVar3 == '\x01');
    }

    // 0x10080e230
    void GeometryBatchInstance::UpdateAnimation(ThreadPool& threadPool, unsigned int arg2,
                                                const math::Matrix44T<float>& matrix44) {
        uint8_t* midiPlayerMainThread = field_24;
        if (!*midiPlayerMainThread != nullptr) {
            LogAssert("m_geometryBatch != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "GeometryBatchInstance.cpp",
                      214, nullptr);
        }
        unsigned int arg1 = ((RenderMaterial*)(*midiPlayerMainThread).operator->())->GetAlphaTestThreshold();
        GeometryBatch* pGVar2 = (GeometryBatch*)(*midiPlayerMainThread).operator->();
        unsigned int arg2_00 = pGVar2->GetLabelCount();
        field_800.SetMaxSize(arg1, arg2_00, 0);
        pGVar2 = (GeometryBatch*)(*midiPlayerMainThread).operator->();
        auto arg3 = pGVar2->GetBoneIDMap();
        pGVar2 = (GeometryBatch*)(*midiPlayerMainThread).operator->();
        auto arg4 = pGVar2->GetJointIDMap();
        GeometryBatchInstance* this_01 = (GeometryBatchInstance*)(*midiPlayerMainThread).operator->();
        auto arg5 = GetMaterial(this_01);
        auto labelDatas = field_656->GetTextureAtlasManager();
        field_800.UpdateAnimation(threadPool, arg2, arg3, arg4, arg5, nullptr, *labelDatas, matrix44);
    }

    // 0x10080e340
    void GeometryBatchInstance::EndUpdateAnimation() {
        field_800.EndUpdateAnimation();
    }

    // 0x10080e360
    uint32_t GeometryBatchInstance::LoadMeshFromModelRawRT7(PacketView& packetView, unsigned int arg2) {
        GeometryBatch* pGVar2 = (GeometryBatch*)(*field_24).operator->();
        uint32_t uVar1 = pGVar2->LoadMeshFromModelRawRT7(packetView, arg2);
        pGVar2 = (GeometryBatch*)(*field_24).operator->();
        bool arg2_00 = (bool)pGVar2->IsHidden();
        m_material->SetOption(10, arg2_00);
        return uVar1;
    }

    // 0x10080e3d0
    void GeometryBatchInstance::SetInitialSource(int arg1, unsigned char arg2, int arg3) {
        uint32_t* puVar4;
        GeometryBatch* pGVar5;

        field_696.clear();
        auto piVar3 = field_696.push_back_uninitialized();
        *piVar3 = arg1;
        *(unsigned char*)(piVar3 + 1) = arg2;
        piVar3[2] = arg3;
        *(uint16_t*)(piVar3 + 4) = 64;
        unsigned long arg1_00 = 0;
        do {
            puVar4 = (uint32_t*)(*((piVar3 + 5)))[arg1_00];
            *puVar4 = 0;
            pGVar5 = (GeometryBatch*)(*field_24).operator->();
            puVar4[1] = pGVar5->GetLodIndexCount((unsigned int)arg1_00);
            arg1_00 = arg1_00 + 1;
        } while (arg1_00 != 5);
        piVar3[15] = 0;
        pGVar5 = (GeometryBatch*)(*field_24).operator->();
        piVar3[16] = pGVar5->GetVertexCount();
    }

    // 0x10080e4d0
    void GeometryBatchInstance::ChangeSourceExternalID(int arg1, int arg2) {
        auto piVar1 = field_696.HeapBeginPtr();
        auto piVar2 = field_696.end();
        for (; piVar1 != piVar2; piVar1 = piVar1 + 17) {
            if (*piVar1 == arg1) {
                *piVar1 = arg2;
            }
        }
    }

    // 0x10080e520
    void GeometryBatchInstance::ChangeSourceExternalIDs(int arg1) {
        auto piVar1 = field_696.HeapBeginPtr();
        auto piVar2 = field_696.end();
        for (; piVar1 != piVar2; piVar1 = piVar1 + 17) {
            *piVar1 = arg1;
        }
    }

    // 0x10080e570
    uint32_t GeometryBatchInstance::GetFirstMaterialIDFromSource() const {
        long lVar3;

        bool cVar1 = field_696.empty();
        uint32_t uVar2 = 4294967295;
        if (!cVar1) {
            lVar3 = field_696.front();
            uVar2 = *(uint32_t*)(lVar3 + 8);
        }
        return uVar2;
    }

    // 0x10080e5b0
    unsigned long GeometryBatchInstance::GetFirstSequenceIDFromSource() const {
        long lVar3;

        bool cVar1 = field_696.empty();
        unsigned long uVar2 = 4294967295;
        if (!cVar1) {
            lVar3 = field_696.front();
            uVar2 = (unsigned long)*(uint8_t*)(lVar3 + 4);
        }
        return uVar2;
    }

    // 0x10080e5f0
    void GeometryBatchInstance::BuildMaterialIDListFromSource(eastl::fixed_vector<int, 128ul>& arg1) const {
        long lVar1 = field_696.HeapBeginPtr();
        long lVar2 = field_696.end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 68) {
            arg1.push_back(*((lVar1 + 8)));
        }
    }

    // 0x10080e650
    void GeometryBatchInstance::SetInitialMaterial(const Material& material, bool arg2) {
        if (material.ShowSkybox() == '\0') {
            m_material->SetRasteriserState((AlphaMode*)AlphaMode::ALPHA_BLENDED);
        } else {
            m_material->Init(material, arg2);
            TextureAtlasManager::PopulateMaterialInfoFromMaterial<eastl::allocator>(field_664, material);
            UpdateShadowRenderFlags();
            BakeBatchFlags();
        }
    }

    // 0x10080e940
    void GeometryBatchInstance::BakeBatchFlags() {
        uint8_t* this_00 = m_material;
        uint8_t bVar1 = this_00->GetOption(1);
        char cVar2 = this_00->GetOption(2);
        bool cVar3 = this_00->GetOption(3);
        char cVar4 = this_00->GetOption(9);
        uint8_t bVar5 = 8;
        if (!cVar4) {
            cVar4 = this_00->IsAlpha();
            bVar5 = cVar4 << 3;
        }
        cVar4 = this_00->GetOption(4);
        bVar1 = this_00->GetOption(5) << 5 | cVar4 << 4 | cVar3 << 2 | cVar2 * '\x02' | bVar1 | bVar5;
        if (bVar1 != 0) {
            ((GeometryBatch*)(*field_24).operator->())->BakeBatchFlags(bVar1);
        }
    }

    // 0x10080ea10
    void GeometryBatchInstance::BakeTile(unsigned char arg1, unsigned char arg2, unsigned char arg3, unsigned char arg4,
                                         unsigned char arg5, unsigned char arg6, unsigned char arg7) {
        GeometryBatch* this_00;
        unsigned int* puVar3;

        long lVar1 = field_696.HeapBeginPtr();
        long lVar2 = field_696.end();
        if (lVar1 != lVar2) {
            do {
                this_00 = (GeometryBatch*)(*field_24).operator->();
                puVar3 = (unsigned int*)(*((lVar1 + 20)))[0];
                this_00->BakeTile(*puVar3, puVar3[1], arg1, arg2, arg3, arg4, arg5, arg6, arg7);
                lVar1 = lVar1 + 68;
            } while (lVar1 != lVar2);
        }
    }

    // 0x10080eaf0
    void GeometryBatchInstance::BakeHSLColors(eastl::fixed_map<int, Material const*, 64ul> const& fixed_map) {
        unsigned short arg3;
        Material* this_01;
        uint8_t bVar2;
        unsigned int uVar3;
        unsigned int uVar4;
        GeometryBatch* pGVar5;
        GeometryBatch* this_03;
        array<IndexRange, 5ul>* paVar6;
        unsigned int* puVar7;
        long lVar8;
        array<IndexRange, 5ul>* paVar9;
        unsigned int arg5;
        shared_ptr<GeometryBatch>* this_05;
        uint64_t local_68;
        uint64_t local_60;
        GeometryBatch* local_50;
        shared_ptr<GeometryBatch>* local_48;
        array<IndexRange, 5ul>* local_40;
        unsigned int local_34;

        uint8_t* this_00 = &field_696;
        bool cVar1 = this_00->empty();
        if (!cVar1) {
            paVar6 = (array<IndexRange, 5ul>*)this_00->HeapBeginPtr();
            local_40 = (array<IndexRange, 5ul>*)this_00->end();
            if (paVar6 != local_40) {
                this_05 = (shared_ptr<GeometryBatch>*)field_24;
                paVar6 = paVar6 + 20;
                local_48 = this_05;
                do {
                    puVar7 = (unsigned int*)(*paVar6)[0];
                    local_68 = fixed_map.find(*((paVar6 - 12)));
                    local_60 = fixed_map.end();
                    cVar1 = local_68 != local_60;
                    if (!cVar1) {
                        pGVar5 = (GeometryBatch*)(*this_05).operator->();
                        pGVar5->BakeHSLColors(*puVar7, puVar7[1], *(unsigned short*)(paVar6 - 4), 0, 0);
                    } else {
                        lVar8 = *local_68;
                        this_01 = *(Material**)(lVar8 + 8);
                        local_50 = (GeometryBatch*)(*this_05).operator->();
                        local_34 = *puVar7;
                        uVar3 = puVar7[1];
                        arg3 = *(unsigned short*)(paVar6 - 4);
                        cVar1 = this_01->IsRT7();
                        if (!cVar1) {
                            uVar4 = this_01->GetLegacyWhiteness();
                        } else {
                            uVar4 = this_01->GetVertexColourStrengthAsWhiteness();
                        }
                        cVar1 = this_01->IsRT7();
                        arg5 = 0;
                        if (!cVar1) {
                            bVar2 = this_01->GetLegacyBrightness();
                            arg5 = (unsigned int)bVar2;
                        }
                        local_50->BakeHSLColors(local_34, uVar3, arg3, uVar4 & 255, arg5);
                        this_05 = local_48;
                    }
                    paVar9 = paVar6 + 48;
                    paVar6 = paVar6 + 68;
                } while (paVar9 != local_40);
            }
        } else {
            pGVar5 = (GeometryBatch*)(*field_24).operator->();
            this_03 = (GeometryBatch*)(*field_24).operator->();
            uVar3 = ((vector<game::MapSquare::MapSquarePos>*)this_03->GetVertexIndexBuffer())->size();
            pGVar5->BakeHSLColors(0, uVar3, 64, 0, 0);
        }
    }

    // 0x10080ed40
    void GeometryBatchInstance::BakeMaterialInfoAndTextureMeta(
        eastl::fixed_map<int, Material const*, 64ul> const& fixed_map1,
        const eastl::fixed_map<int, ModelTextureMeta, 64ul>& fixed_map2) {
        unsigned int arg1;
        unsigned int arg2;
        Material* this_01;
        bool cVar1;
        long lVar4;
        GeometryBatch* this_02;
        uint64_t local_60;
        unsigned long local_58;
        unsigned int* local_48;
        uint64_t local_40;

        uint8_t* this_00 = m_material;
        this_00->SetOption(9, false);
        this_00->SetOption(4, false);
        RenderMaterial* local_38 = (RenderMaterial*)this_00;
        this_00->SetOption(5, false);
        GeometryBatchInstance* local_50 = this;
        long lVar2 = field_696.HeapBeginPtr();
        long lVar3 = field_696.end();
        if (lVar2 != lVar3) {
            local_50 = (GeometryBatchInstance*)local_50->field_24;
            do {
                local_48 = (unsigned int*)(*((lVar2 + 20)))[0];
                local_60 = fixed_map1.find(*((lVar2 + 8)));
                local_40 = fixed_map1.end();
                cVar1 = local_60 != local_40;
                if (cVar1) {
                    lVar4 = *local_60;
                    this_01 = *(Material**)(lVar4 + 8);
                    cVar1 = this_01->HasForcedTextures();
                    if (cVar1) {
                        local_38->SetOption(9, true);
                    }
                    cVar1 = local_38->GetOption(0);
                    if (!cVar1) {
                        cVar1 = this_01->HasHDRMap();
                        if (cVar1) {
                            local_38->SetOption(4, true);
                        }
                        cVar1 = this_01->IsWeighted();
                        if (cVar1) {
                            local_38->SetOption(5, true);
                        }
                    }
                }
                local_40 = fixed_map2.find(*((lVar2 + 8)));
                local_58 = fixed_map2.end();
                cVar1 = local_40 != local_58;
                this_02 = (GeometryBatch*)(*local_50).operator->();
                arg1 = *local_48;
                arg2 = local_48[1];
                if (!cVar1) {
                    local_58 = local_58 & 18446744073709486080;
                    new (&local_58) math::Vector2T();
                    this_02->BakeTextureMeta(arg1, arg2, local_58);
                } else {
                    local_48 = (unsigned int*)(((uint64_t)local_48._4_4_ << 32) | (uint32_t)arg2);
                    lVar4 = *local_40;
                    this_02->BakeTextureMeta(arg1, (unsigned int)local_48, *((lVar4 + 4)));
                }
                lVar2 = lVar2 + 68;
            } while (lVar2 != lVar3);
        }
    }

    // 0x10080ef70
    void GeometryBatchInstance::SortSections() {
        uint32_t uVar1;
        long lVar4;
        ReturnValue RVar5;
        SourceModelExternalIndexSection* pSVar6;
        int* piVar7;
        int* piVar8;
        int* piVar9;
        SourceModelExternalIndexSection* sourceModelExternalIndexSection2;
        back_insert_iterator<eastl::vector<SourceModelExternalIndexSection> _>* back_insert_iterator;
        uint32_t* puVar10;
        int* piVar11;
        uint32_t* puVar12;
        uint32_t* puVar13;
        SourceModelExternalIndexSectionRangeOnly* sourceModelExternalIndexSectionRangeOnly1;
        SourceModelExternalIndexSectionRangeOnly* sourceModelExternalIndexSectionRangeOnly2;
        back_insert_iterator<eastl::vector<SourceModelExternalIndexSectionRangeOnly> _>* back_insert_iterator_00;
        int iVar14;
        uint64_t extraout_RDX;
        ReturnValue RVar15;
        ReturnValue local_108;
        uint64_t uStack_100;
        uint32_t local_f8;
        int local_f0;
        uint64_t local_ec;
        uint64_t uStack_e4;
        uint64_t local_dc;
        uint64_t uStack_d4;
        uint64_t local_cc;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_c0;
        unsigned long local_a8;
        SourceModelExternalIndexSection* local_a0;
        SourceModelExternalIndexSection* local_98;
        rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>, eastl::allocator,
               eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true, true>* local_88;
        eastl local_80;
        uint64_t local_78;
        SourceModelExternalIndexSection* local_68;
        SourceModelExternalIndexSection* local_60;
        int* local_58;
        ReturnValue local_50;
        vector<SourceModelExternalIndexSection>* local_38;

        uint8_t* this_00 = &field_728;
        this_00->clear();
        vector<SourceModelExternalIndexSection>* pvVar16 = (vector<SourceModelExternalIndexSection>*)&field_696;
        unsigned long uVar3 = pvVar16->size();
        if (uVar3 < 2) {
            lVar4 = pvVar16->size();
            if (lVar4 == 1) {
                piVar7 = (int*)pvVar16->front();
                local_f0 = *piVar7;
                if (-1 < local_f0) {
                    local_ec = *(uint64_t*)(piVar7 + 5);
                    uStack_e4 = *(uint64_t*)(piVar7 + 7);
                    local_dc = *(uint64_t*)(piVar7 + 9);
                    uStack_d4 = *(uint64_t*)(piVar7 + 11);
                    local_cc = *(uint64_t*)(piVar7 + 13);
                    this_00->push_back(local_f0);
                }
            }
        } else {
            local_88 =
                (rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                        eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true, true>*)this_00;
            eastl::destruct<oldscape::highlight::NpcUID*>(&local_80);
            new (&local_f0) eastl::map(local_80);
            local_50[0] = (ReturnValue)0;
            lVar4 = pvVar16->size();
            local_38 = pvVar16;
            if (lVar4 != 0) {
                do {
                    lVar4 = (*pvVar16)[(unsigned long)local_50[0]];
                    local_80[0] =
                        (eastl)eastl::make_pair<unsigned char const&, unsigned long&>(*((lVar4 + 4)), local_50);
                    local_78 = extraout_RDX;
                    local_108 = local_f0.insert<eastl::pair<unsigned char, unsigned long>, void>(local_80);
                    pvVar16 = local_38;
                    RVar15 = (ReturnValue)((long)local_50[0] + 1);
                    local_50[0] = RVar15;
                    RVar5 = (ReturnValue)local_38->size();
                } while ((unsigned long)RVar15 < (unsigned long)RVar5);
            }
            local_80 = eastl::vector<SourceModelExternalIndexSection, BucketAllocatorEASTL>();
            pvVar16 = local_38;
            uVar3 = local_38->size();
            local_80.reserve(uVar3);
            local_108 = (ReturnValue)0;
            uStack_100 = 0;
            local_f8 = 0;
            local_50 = local_f0.rbegin();
            local_c0.end();
            iVar14 = 0;
            uVar3 = 0;
            while (true) {
                if (local_50 != local_c0 == '\0')
                    break;
                local_58 = (int*)(((uint64_t)local_58._4_4_ << 32) | (uint32_t)iVar14);
                lVar4 = *local_50;
                pSVar6 = (SourceModelExternalIndexSection*)(*pvVar16)[*(unsigned long*)(lVar4 + 8)];
                local_a8 = uVar3 & 255;
                if (-1 < *(int*)pSVar6) {
                    local_a8 = 1;
                }
                local_98 = local_80.emplace_back<SourceModelExternalIndexSection const&>(*pSVar6);
                local_68 = local_98 + 20;
                local_60 = pSVar6 + 20;
                uVar3 = 0;
                local_a0 = pSVar6;
                do {
                    piVar7 = &local_108[uVar3];
                    iVar14 = *piVar7;
                    piVar8 = (int*)(*local_68)[uVar3];
                    *piVar8 = iVar14;
                    iVar14 = *piVar7;
                    piVar9 = (int*)(*local_60)[uVar3];
                    iVar14 = (piVar9[1] - *piVar9) + iVar14;
                    piVar8[1] = iVar14;
                    *piVar7 = iVar14;
                    uVar3 = uVar3 + 1;
                } while (uVar3 != 5);
                *(int*)(local_98 + 60) = (int)local_58;
                iVar14 = (int)local_58 + (*(int*)(local_a0 + 64) - *(int*)(local_a0 + 60));
                *(int*)(local_98 + 64) = iVar14;
                ++local_50;
                uVar3 = local_a8;
                pvVar16 = local_38;
            }
            ((GeometryBatch*)(*field_24).operator->())->SortSections(*pvVar16, local_80, local_f0);
            pvVar16->clear();
            pSVar6 = (SourceModelExternalIndexSection*)local_80.HeapBeginPtr();
            sourceModelExternalIndexSection2 = (SourceModelExternalIndexSection*)local_80.end();
            back_insert_iterator =
                (back_insert_iterator<eastl::vector<SourceModelExternalIndexSection> _>*)pvVar16->end();
            eastl::copy<SourceModelExternalIndexSection*,
                        eastl::back_insert_iterator<eastl::vector<SourceModelExternalIndexSection>>>(
                pSVar6, sourceModelExternalIndexSection2, back_insert_iterator);
            local_50 = eastl::vector<SourceModelExternalIndexSectionRangeOnly, BucketAllocatorEASTL>();
            local_50.reserve(pvVar16->size());
            if ((uVar3 & 1) != 0) {
                piVar7 = (int*)(*pvVar16)[0];
                iVar14 = *piVar7;
                uVar3 = 0;
                do {
                    lVar4 = (*pvVar16)[0];
                    puVar10 = (uint32_t*)(*((lVar4 + 20)))[uVar3];
                    uVar1 = *puVar10;
                    puVar10 = &local_c0[uVar3];
                    *puVar10 = uVar1;
                    uVar3 = uVar3 + 1;
                } while (uVar3 != 5);
                piVar8 = (int*)pvVar16->HeapBeginPtr();
                piVar7 = piVar8 + 17;
                piVar9 = (int*)pvVar16->end();
                if (piVar7 != piVar9) {
                    do {
                        piVar9 = piVar7;
                        if (*piVar7 != iVar14) {
                            local_58 = piVar7;
                            piVar7 = (int*)local_50.push_back_uninitialized();
                            *piVar7 = iVar14;
                            local_68 = (SourceModelExternalIndexSection*)(piVar7 + 1);
                            local_60 = (SourceModelExternalIndexSection*)(piVar8 + 22);
                            uVar3 = 0;
                            do {
                                puVar10 = &local_c0[uVar3];
                                uVar1 = *puVar10;
                                puVar12 = (uint32_t*)(*local_68)[uVar3];
                                *puVar12 = uVar1;
                                puVar13 = (uint32_t*)(*local_60)[uVar3];
                                uVar1 = *puVar13;
                                puVar12[1] = uVar1;
                                *puVar10 = uVar1;
                                uVar3 = uVar3 + 1;
                            } while (uVar3 != 5);
                            iVar14 = *local_58;
                            piVar9 = local_58;
                            pvVar16 = local_38;
                        }
                        piVar7 = piVar9 + 17;
                        piVar11 = (int*)pvVar16->end();
                        piVar8 = piVar9;
                    } while (piVar7 != piVar11);
                }
                lVar4 = pvVar16->size();
                puVar10 = (uint32_t*)(*pvVar16)[lVar4 - 1];
                puVar12 = (uint32_t*)local_50.push_back_uninitialized();
                *puVar12 = *puVar10;
                uVar3 = 0;
                do {
                    puVar13 = &local_c0[uVar3];
                    uVar1 = *puVar13;
                    puVar13 = (uint32_t*)(*((puVar12 + 1)))[uVar3];
                    *puVar13 = uVar1;
                    lVar4 = (*((puVar10 + 5)))[uVar3];
                    puVar13[1] = *(uint32_t*)(lVar4 + 4);
                    uVar3 = uVar3 + 1;
                } while (uVar3 != 5);
            }
            sourceModelExternalIndexSectionRangeOnly1 =
                (SourceModelExternalIndexSectionRangeOnly*)local_50.HeapBeginPtr();
            sourceModelExternalIndexSectionRangeOnly2 = (SourceModelExternalIndexSectionRangeOnly*)local_50.end();
            back_insert_iterator_00 =
                (back_insert_iterator<eastl::vector<SourceModelExternalIndexSectionRangeOnly> _>*)local_88->end();
            eastl::copy<SourceModelExternalIndexSectionRangeOnly*,
                        eastl::back_insert_iterator<eastl::vector<SourceModelExternalIndexSectionRangeOnly>>>(
                sourceModelExternalIndexSectionRangeOnly1, sourceModelExternalIndexSectionRangeOnly2,
                back_insert_iterator_00);
        }
    }

    // 0x10080f680
    bool GeometryBatchInstance::IsCombinableWith(const GeometryBatchInstance& geometryBatchInstance, bool arg2,
                                                 bool arg3, bool arg4, TextureAtlas& textureAtlas) {
        unsigned int uVar5;
        long lVar9;
        vector_map<unsigned short, unsigned short>* arg1;
        vector_map<unsigned short, unsigned short>* arg2_00;
        uint64_t in_register_00000009;
        uint64_t in_register_00000011;
        uint32_t in_register_00000081;
        WrapArray<MaterialInfo const> local_80;
        GeometryBatchInstance* local_40;

        uint32_t local_4c = (((uint32_t)in_register_00000081 << 8) | (uint8_t)arg4);
        local_40 = (GeometryBatchInstance*)(((uint64_t)local_40._4_4_ << 32) |
                                            (uint32_t)((int)(((uint64_t)in_register_00000009 << 8) | (uint8_t)arg3)));
        uint32_t local_50 = (uint32_t)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2);
        auto this_01 = GetGeometryBatch(geometryBatchInstance);
        GeometryBatchInstance* local_48 = geometryBatchInstance;
        bool bVar1 = field_880 != geometryBatchInstance.field_880;
        if (bVar1) {
            return 10;
        }
        shared_ptr<GeometryBatch>* local_38 = (shared_ptr<GeometryBatch>*)field_24;
        bool cVar2 = ((SpriteAtlasReference*)(*local_38).operator->())->GetDisableCache();
        char cVar3 = this_01->GetDisableCache();
        if (cVar2 != cVar3) {
            return 1;
        }
        auto modelMaterial = GetMaterial(local_48);
        cVar2 = m_material->IsCombinable(*modelMaterial);
        if (!cVar2) {
            return 2;
        }
        if ((char)local_40 == '\0') {
            cVar2 = field_696.empty();
            if (((!cVar2) && (uVar5 = GetFirstSequenceIDFromSource(local_48), uVar5 != 4294967295)) &&
                (lVar9 = field_696.front(), uVar5 != *(uint8_t*)(lVar9 + 4))) {
                return 3;
            }
        }
        if ((char)local_50 == '\0')
            goto LAB_10080f86c;
        GeometryBatch* pGVar10 = (GeometryBatch*)(*local_38).operator->();
        int iVar6 = pGVar10->GetIndexCount();
        int iVar7 = this_01->GetIndexCount();
        if (65535 < (unsigned int)(iVar7 + iVar6)) {
            return 4;
        }
        if ((char)local_4c == '\0')
            goto LAB_10080f86c;
        pGVar10 = (GeometryBatch*)(*local_38).operator->();
        iVar6 = pGVar10->GetLabelCount();
        iVar7 = this_01->GetLabelCount();
        shared_ptr<GeometryBatch>* this_00 = local_38;
        if (32 < (unsigned int)(iVar7 + iVar6)) {
            return 5;
        }
        local_40 = this;
        iVar6 = ((RenderMaterial*)(*local_38).operator->())->GetAlphaTestThreshold();
        iVar7 = this_01->GetAlphaTestThreshold();
        int iVar8 = 3;
        if ((unsigned int)(iVar7 + iVar6) < 57) {
        LAB_10080f85e:
            bVar1 = true;
        } else {
            pGVar10 = (GeometryBatch*)(*this_00).operator->();
            arg1 = (vector_map<unsigned short, unsigned short>*)pGVar10->GetBoneIDMap();
            arg2_00 = (vector_map<unsigned short, unsigned short>*)this_01->GetBoneIDMap();
            iVar8 = Algorithms::CountMapOverlap<unsigned short, unsigned short, unsigned short>(*arg1, *arg2_00);
            uVar5 = (iVar7 + iVar6) - iVar8;
            iVar8 = (unsigned int)(56 < uVar5) * 5 + 3;
            if (uVar5 < 57)
                goto LAB_10080f85e;
            bVar1 = false;
        }
        this = local_40;
        if (!bVar1) {
            return iVar8;
        }
    LAB_10080f86c:
        vector<MaterialInfo, SafeBucketAllocatorEASTL> local_70;
        uint8_t* this_05 = &field_664;
        lVar9 = this_05->size();
        uint8_t* this_04 = &local_48->field_664;
        long lVar11 = this_04->size();
        local_70.reserve(lVar9 + lVar11);
        auto pMVar12 = local_70.HeapBeginPtr();
        auto pMVar13 = this_05->HeapBeginPtr();
        auto pMVar14 = this_05->end();
        local_70.insert<MaterialInfo*>(pMVar12, pMVar13, pMVar14);
        pMVar12 = (MaterialInfo*)local_70.end();
        pMVar13 = (MaterialInfo*)this_04->HeapBeginPtr();
        pMVar14 = (MaterialInfo*)this_04->end();
        local_70.insert<MaterialInfo const*>(pMVar12, pMVar13, pMVar14);
        local_80.WrapArray<eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>>(local_70);
        uint8_t bVar4 = textureAtlas.CheckMaterialsFit(local_80);
        return (unsigned int)(bVar4 ^ 1) * 9;
    }

    // 0x10080fbe0
    void GeometryBatchInstance::Assign(const GeometryBatchInstance& geometryBatchInstance) {
        GeometryBatch* this_00;
        GeometryBatch* geometryBatch;

        if (this != geometryBatchInstance) {
            DestroyRenderingResources();
            *m_material = geometryBatchInstance.m_material;
            this_00 = (GeometryBatch*)(*field_24).operator->();
            geometryBatch = (GeometryBatch*)*geometryBatchInstance.field_24;
            this_00->Assign(*geometryBatch);
            field_696 = geometryBatchInstance.field_696;
            UpdateShadowRenderFlags();
        }
    }

    // 0x10080fc50
    void GeometryBatchInstance::DestroyRenderingResources() {
        m_material->DestroyRenderingResources();
        ((GeometryBatch*)(*field_24).operator->())->DestroyRenderingResources();
    }

    // 0x10080fd00
    void GeometryBatchInstance::Transform(const math::Matrix44T<float>& matrix44) {
        ((GeometryBatch*)(*field_24).operator->())->Transform(matrix44);
    }

    // 0x10080fd30
    void GeometryBatchInstance::TransformNormals(const math::QuaternionT<float>& quaternion, bool arg2) {
        ((GeometryBatch*)(*field_24).operator->())->TransformNormals(quaternion, arg2);
    }

    // 0x10080fd60
    void GeometryBatchInstance::Translate(const math::Vector3T<float>& vector3) {
        ((GeometryBatch*)(*field_24).operator->())->Translate(vector3);
    }

    // 0x10080fd90
    void GeometryBatchInstance::Rotate(const math::QuaternionT<float>& quaternion, bool arg2) {
        ((GeometryBatch*)(*field_24).operator->())->Rotate(quaternion, arg2);
    }

    // 0x10080fdc0
    void GeometryBatchInstance::Rotate90(Rotation90 rotation90, bool arg2) {
        ((GeometryBatch*)(*field_24).operator->())->Rotate90(rotation90, arg2);
    }

    // 0x10080fdf0
    void GeometryBatchInstance::Scale(const math::Vector3T<float>& vector3) {
        ((GeometryBatch*)(*field_24).operator->())->Scale(vector3);
    }

    // 0x10080fe20
    void GeometryBatchInstance::HillChange(HillChange arg1, int arg2,
                                           const Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>& arg3,
                                           const Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>& arg4,
                                           const LocationHelpers::LocationHillChangeData& arg5) {
        ((GeometryBatch*)(*field_24).operator->())->HillChange(param_2, param_3, *param_4, *param_5, *param_6);
    }

    // 0x10080fe70
    void GeometryBatchInstance::Rematerial(const Array<unsigned short>& arg1, const Array<unsigned short>& arg2) {
        unsigned long uVar2;
        unsigned short* puVar3;
        long lVar4;
        unsigned long arg1_00;
        unsigned int uVar5;
        unsigned int uVar6;

        long lVar1 = arg1.end();
        if (lVar1 != 0) {
            arg1_00 = 0;
            do {
                uVar2 = arg2.end();
                if (uVar2 <= arg1_00) {
                    return;
                }
                puVar3 = &arg1[arg1_00];
                uVar5 = (unsigned int)*puVar3;
                if (uVar5 == 65535) {
                    uVar5 = 4294967295;
                }
                puVar3 = &arg2[arg1_00];
                uVar6 = (unsigned int)*puVar3;
                if (uVar6 == 65535) {
                    uVar6 = 4294967295;
                }
                lVar1 = field_696.HeapBeginPtr();
                lVar4 = field_696.end();
                for (; lVar1 != lVar4; lVar1 = lVar1 + 68) {
                    if (*(unsigned int*)(lVar1 + 8) == uVar5) {
                        *(unsigned int*)(lVar1 + 8) = uVar6;
                    }
                }
                arg1_00 = arg1_00 + 1;
                uVar2 = arg1.end();
            } while (arg1_00 < uVar2);
        }
    }

    // 0x10080ff70
    void GeometryBatchInstance::RematerialSingle(unsigned short arg1, unsigned short arg2) {
        uint16_t in_register_00000012;
        uint16_t in_register_00000032;

        int iVar4 = (((uint32_t)in_register_00000032 << 16) | (uint16_t)arg1);
        uint32_t uVar3 = (((uint32_t)in_register_00000012 << 16) | (uint16_t)arg2);
        if (arg1 == 65535) {
            iVar4 = -1;
        }
        if (arg2 == 65535) {
            uVar3 = 4294967295;
        }
        long lVar1 = field_696.HeapBeginPtr();
        long lVar2 = field_696.end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 68) {
            if (*(int*)(lVar1 + 8) == iVar4) {
                *(uint32_t*)(lVar1 + 8) = uVar3;
            }
        }
    }

    // 0x10080ffe0
    void GeometryBatchInstance::AmbientAdjust(unsigned short arg1) {
        ((GeometryBatch*)(*field_24).operator->())->AmbientAdjust(arg1);
        long lVar1 = field_696.HeapBeginPtr();
        long lVar2 = field_696.end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 68) {
            *(unsigned short*)(lVar1 + 16) = arg1;
        }
    }

    // 0x100810050
    void GeometryBatchInstance::TintAdjust(signed char arg1, signed char arg2, signed char arg3, unsigned char arg4) {
        ((GeometryBatch*)(*field_24).operator->())->TintAdjust(arg1, arg2, arg3, arg4);
    }

    // 0x100810090
    void GeometryBatchInstance::SetTint(math::Vector4T<float> vector4) {
        QuaternionT<float> local_18;

        (*((vector4 + 880))) = local_18;
    }

    // 0x1008100c0
    void GeometryBatchInstance::InitRenderPassEffects() {
        if (m_material->GetOption(5)) {
            if (((SpriteAtlasReference*)(*field_24).operator->())->GetDisableCache()) {
                LogAssert("!m_material.GetOption(ModelMaterial::HAS_NORMAL_MAP) || !m_geometryBatch->HasShareLight()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "model/GeometryBatchInstance.cpp",
                          814, "Share Light is not supported on normal mapped models");
            }
        }
        GeometryBatch* this_01 = (GeometryBatch*)(*field_24).operator->();
        m_material->InitRenderPassEffects((bool)this_01->HasBones());
    }

    // 0x100810790
    uint8_t[16] GeometryBatchInstance::GetTint() const {
        uint8_t auVar1[16];

        auVar1._0_8_ = field_880;
        auVar1._8_8_ = field_888;
        return auVar1;
    }

    // 0x1008107b0
    void GeometryBatchInstance::UpdateForwardPassEffect(DrawableSortKey& drawableSortKey,
                                                        DrawableSortKeyType drawableSortKeyType,
                                                        RenderPassEffect& renderPassEffect, RT7Core& rt7Core,
                                                        const EffectManager& effectManager, float arg6, float arg7,
                                                        bool arg8, const TextureInclusionMode* textureInclusionMode,
                                                        const math::OBB& obb, unsigned char arg11,
                                                        RenderPassType renderPassType) {
        uint8_t bVar5;
        uint8_t arg2_00;
        Matrix44T<float>* this_03;
        shared_ptr* this_04;
        GeometryBatch* pGVar8;
        Vector4T<float>* vector41;
        TextureManager* textureManager;
        long lVar10;
        unsigned long uVar14;
        PlayerDataComparator<oldscape::social::FriendChatUser>* playerDataComparator;
        float fVar16;
        float arg2_01;
        float arg3;
        uint8_t auVar17[16];
        float fStack_60;

        char cVar1 = effectManager.IsEnabled(26);
        uint8_t uVar2 = false;
        if (cVar1) {
            this_03 = (Matrix44T<float>*)GetMaterial((GeometryBatchInstance*)field_656);
            local_68 = (DrawableSortKey)this_03->GetPos();
            fStack_60 = arg7;
            this_04 = local_68.GetEffect(26);
            cVar1 = shared_ptr::operator_cast_to_bool(this_04);
            if (!cVar1) {
                uVar2 = false;
            } else {
                uVar2 = ((PointLightIndicesEffect*)(*this_04).operator->())->IsReady();
            }
        }
        renderPassEffect.Set(26, (bool)uVar2);
        if (uVar2 == false) {
            uVar2 = false;
        } else {
            uVar2 = m_material->GetOption(11);
        }
        renderPassEffect.Set(55, (bool)uVar2);
        cVar1 = GetAnimatesTransparency();
        bool bVar3 = true;
        uVar2 = true;
        if (!cVar1) {
            cVar1 = GetAnimatedColourType();
            uVar2 = true;
            if (cVar1 == '\x02') {
                pGVar8 = (GeometryBatch*)(*field_24).operator->();
                cVar1 = pGVar8->HasBones();
                uVar2 = true;
                if (!cVar1) {
                    pGVar8 = (GeometryBatch*)(*field_24).operator->();
                    uVar2 = pGVar8->HasJoints();
                }
            }
        }
        renderPassEffect.Set(74, (bool)uVar2);
        pGVar8 = (GeometryBatch*)(*field_24).operator->();
        bool arg2 = (bool)pGVar8->HasJoints();
        renderPassEffect.Set(75, arg2);
        DrawableSortKey local_68 = (DrawableSortKey)GetTint();
        fStack_60 = arg7;
        auto pfVar9 = local_68.qw();
        if (*pfVar9 == 0.0) {
            vector41 = (Vector4T<float>*)field_656->GetParentLocationType();
            bVar3 = *vector41 != *PTR_ZERO_100ee6708;
        }
        renderPassEffect.Set(82, bVar3);
        ShaderManager* pSVar12 = (ShaderManager*)effectManager;
        bVar3 = (bool)((EffectManager*)(ShaderManager*)effectManager)->IsEnabled(83);
        renderPassEffect.Set(83, bVar3);
        cVar1 = pSVar12->IsEnabled(108);
        if (!cVar1) {
            uVar2 = false;
        } else {
            uVar2 = m_material->IsRefractionEnabled();
        }
        renderPassEffect.Set(108, (bool)uVar2);
        pSVar12 = (ShaderManager*)effectManager;
        bVar3 = (bool)((EffectManager*)(ShaderManager*)effectManager)->IsEnabled(39);
        renderPassEffect.Set(39, bVar3);
        bVar3 = (bool)pSVar12->IsEnabled(43);
        renderPassEffect.Set(43, bVar3);
        uint8_t* this_00 = m_material;
        cVar1 = this_00->GetOption(0);
        uint8_t uVar4 = true;
        if (!cVar1) {
            uVar4 = this_00->GetOption(5);
        }
        renderPassEffect.Set(61, (bool)uVar4);
        int iVar6 = this_00->GetAliveCount();
        if (-1 < iVar6) {
            textureManager = rt7Core.GetTextureManager();
            this_00->UpdateEnvironmentMap(*textureManager);
        }
        pSVar12 = (ShaderManager*)effectManager;
        ParticleMaterial* local_50 = (ParticleMaterial*)this_00;
        cVar1 = ((EffectManager*)(ShaderManager*)effectManager)->IsEnabled(24);
        uVar4 = true;
        if ((!cVar1) && (cVar1 = pSVar12->IsEnabled(48), pSVar12 = (ShaderManager*)effectManager, !cVar1)) {
            cVar1 = ((EffectManager*)(ShaderManager*)effectManager)->IsEnabled(57);
            if (!cVar1) {
                uVar4 = false;
            } else {
                uVar4 = pSVar12->GetEffect<PlanarReflection>(57)->WithinFoggedArea(arg6);
            }
        }
        renderPassEffect.Set(57, (bool)uVar4);
        pSVar12 = (ShaderManager*)effectManager;
        DrawableSortKey* local_48 = drawableSortKey;
        if (arg8) {
            cVar1 = ((EffectManager*)(ShaderManager*)effectManager)->IsEnabled(50);
            if (!cVar1) {
                bVar5 = false;
            } else {
                bVar5 = ((VolumetricScatteringEffect*)pSVar12->GetEffect<PlanarReflection>(50))->CanSkip(*pSVar12);
                bVar5 = bVar5 ^ 1;
            }
        } else {
            bVar5 = false;
        }
        renderPassEffect.Set(50, (bool)bVar5);
        SunlightShadows* this_08 = (SunlightShadows*)pSVar12->GetEffect<PlanarReflection>(30);
        auto this_09 = this_08->GetSunlightCsmManager();
        cVar1 = local_50->GetOption(8);
        if (!cVar1) {
            bVar5 = false;
        } else {
            cVar1 = pSVar12->IsEnabled(30);
            if (!cVar1) {
                bVar5 = 0;
            } else {
                fVar16 = (float)this_09->GetMaxShadowDistance();
                bVar5 = arg7 < fVar16 | bVar5;
            }
            pSVar12 = (ShaderManager*)effectManager;
        }
        ParticleMaterial* this_02 = local_50;
        if (((bool)bVar5 == false) || (cVar1 = pSVar12->IsEnabled(28), !cVar1)) {
            arg2_00 = false;
        } else {
            arg2_00 = (uVar2 | arg8) ^ 1;
        }
        renderPassEffect.Set(28, (bool)arg2_00);
        renderPassEffect.Set(30, (bool)bVar5);
        renderPassEffect.Set(37, (bool)(!arg8 & bVar5));
        PointLightShadows* this_10 = (PointLightShadows*)pSVar12->GetEffect<PlanarReflection>(35);
        auto this_11 = this_10->GetPointLightSMManager();
        cVar1 = this_02->GetOption(8);
        if (((!cVar1) || (cVar1 = pSVar12->IsEnabled(26), !cVar1)) || (cVar1 = pSVar12->IsEnabled(35), !cVar1)) {
        LAB_100810c1d:
            bVar3 = false;
        } else {
            cVar1 = ((vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)
                         this_11->GetEntityHighlightGlobalState())
                        ->empty();
            if (cVar1)
                goto LAB_100810c1d;
            lVar10 = this_11->SSOBeginPtr();
            bVar3 = arg7 < *(float*)(lVar10 + 20);
        }
        renderPassEffect.Set(35, bVar3);
        iVar6 = this_02->GetEndPosition();
        renderPassEffect.Set(54, iVar6 != -1);
        iVar6 = this_02->GetEndPosition();
        if (iVar6 < -1) {
            renderPassEffect.Set(48, false);
            renderPassEffect.Set(57, false);
            renderPassEffect.Set(50, false);
        }
        cVar1 = pSVar12->IsEnabled(110);
        if (cVar1) {
            if (arg8) {
                bVar5 = false;
            } else {
                bVar5 = renderPassEffect.Contains(108);
                bVar5 = bVar5 ^ 1;
            }
            renderPassEffect.Set(110, (bool)bVar5);
        }
        auVar17 = pSVar12->BuildShaderEffectList(renderPassEffect);
        uint8_t* this_01 = &renderPassEffect.field_16;
        renderPassEffect.field_16 = auVar17[0];
        renderPassEffect.field_17 = auVar17[1];
        renderPassEffect.field_18 = auVar17[2];
        renderPassEffect.field_19 = auVar17[3];
        renderPassEffect.field_20 = auVar17[4];
        renderPassEffect.field_21 = auVar17._5_3_;
        renderPassEffect.field_24 = auVar17._8_8_;
        lVar10 = this_02->GetTextureAtlasReference();
        this_01->Set(63, lVar10 != 0);
        if ((TextureInclusionMode*)TextureInclusionMode::FORCE_EXCLUDE == textureInclusionMode) {
            this_01->Set(63, false);
        }
        auto puVar11 = this_02->data();
        this_01->Set(66, puVar11 != AlphaMode::ALPHA_OPAQUE || arg8);
        cVar1 = this_02->GetOption(1);
        bVar3 = true;
        if (((!cVar1) && (cVar1 = this_02->GetOption(2), !cVar1)) && (cVar1 = this_02->GetOption(3), !cVar1)) {
            puVar11 = (uint8_t*)this_02->data();
            bVar3 = puVar11 != AlphaMode::ALPHA_OPAQUE;
        }
        this_01->Set(65, bVar3);
        if (m_debugLodInstanceColourEnabled == '\0')
            goto LAB_100810e78;
        switch (GetLodLevel(m_debugLodInstanceColourPassType)) {
        case 0:
            arg2_01 = 0.0;
            break;
        case 1:
            arg2_01 = 1.0;
            break;
        case 2:
            arg3 = 0.0;
            goto LAB_100810e44;
        case 3:
            arg3 = 1.0;
        LAB_100810e44:
            arg2_01 = 1.0;
            fVar16 = 0.0;
            goto LAB_100810e61;
        case 4:
            arg3 = 1.0;
            fVar16 = 0.0;
            arg2_01 = 0.0;
            goto LAB_100810e61;
        default:
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "model/GeometryBatchInstance.cpp",
                            990, "Unsupported LOD level");
        }
        arg3 = 0.0;
        fVar16 = 1.0;
    LAB_100810e61:
        field_784.Set(fVar16, arg2_01, arg3, 1.0);
        this_01->Set(13, true);
    LAB_100810e78:
        cVar1 = local_50->GetOption(4);
        char cVar15 = '\0';
        uVar2 = false;
        if (cVar1) {
            lVar10 = rt7Core.GetPostProcessController()->GetCurrentConfig();
            if (*(char*)(lVar10 + 468) == '\0') {
                uVar2 = false;
            } else {
                uVar2 = local_50->GetOption(4);
            }
        }
        this_01->Set(64, (bool)uVar2);
        pSVar12 = rt7Core.GetShaderManager();
        pGVar8 = (GeometryBatch*)(*field_24).operator->();
        bVar3 = (bool)pGVar8->HasJoints();
        auto renderPassType_00 = GeometryBatchRenderer::GetVertexDecl(bVar3);
        RenderPassEffect::UpdateShader(renderPassEffect, effectManager, (ShaderType)pSVar12, nullptr, renderPassType_00,
                                       (unsigned char)renderPassType);
        iVar6 = GetFirstSequenceIDFromSource();
        if (iVar6 != -1) {
            if (15 < iVar6) {
                LogAssert("sequenceID < (1 << 4)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "model/GeometryBatchInstance.cpp",
                          1019, nullptr);
            }
            cVar15 = (char)iVar6;
        }
        bVar5 = 15;
        if (arg11 < 15) {
            bVar5 = arg11;
        }
        unsigned long uVar13 = renderPassEffect.GetConstructedShaderId();
        if (5 < drawableSortKeyType) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "renderer/DrawableSortKey.h",
                            177, "Unknown sort key type");
        }
        bVar5 = cVar15 << 4 | bVar5;
        switch (drawableSortKeyType) {
        case 0:
            bVar5 = ~bVar5;
            fVar16 = (float)(-(unsigned int)(0.0 < arg7) & (unsigned int)(arg7 + 0.5));
            uVar14 = (unsigned long)fVar16;
            uVar14 = ((long)(fVar16 - 9.223372e+18) & (long)uVar14 >> 63 | uVar14) << 24;
            goto LAB_10081104f;
        case 1:
            fVar16 = (float)(-(unsigned int)(0.0 < arg7) & (unsigned int)(arg7 + 0.5));
            lVar10 = (long)fVar16;
            uVar14 = (unsigned long)((unsigned int)lVar10 |
                                     (unsigned int)(long)(fVar16 - 9.223372e+18) & (unsigned int)(lVar10 >> 63)) *
                             -16777216 +
                         72057594021150720 &
                     72057594021150720;
        LAB_10081104f:
            uVar14 = (unsigned long)bVar5 << 16 | uVar14 | uVar13 & 65535;
            uVar13 = 144115188075855872;
        LAB_10081111c:
            playerDataComparator = (PlayerDataComparator<oldscape::social::FriendChatUser>*)(uVar13 | uVar14);
            break;
        case 2:
            playerDataComparator =
                (PlayerDataComparator<oldscape::social::FriendChatUser>*)(((long)(float)(-(unsigned int)(0.0 < arg7) &
                                                                                         (unsigned int)(arg7 + 0.5)) &
                                                                           4294967295U)
                                                                              << 8 |
                                                                          (uVar13 & 65535) << 40 |
                                                                          (unsigned long)(uint8_t)~bVar5 |
                                                                          144115188075855872);
            break;
        case 3:
            fVar16 = (float)(-(unsigned int)(0.0 < arg7) & (unsigned int)(arg7 + 0.5));
            uVar14 = (unsigned long)fVar16;
            uVar14 = ((long)(fVar16 - 9.223372e+18) & (long)uVar14 >> 63 | uVar14) * -256 + 1099511627520;
            uVar13 = (uVar13 & 65535) << 40 | (unsigned long)bVar5 | 144115188075855872;
            goto LAB_10081111c;
        case 4:
            fVar16 = (float)(-(unsigned int)(0.0 < arg7) & (unsigned int)(arg7 + 0.5));
            lVar10 = (long)fVar16;
            playerDataComparator =
                (PlayerDataComparator<
                    oldscape::social::FriendChatUser>*)((uVar13 & 65535) +
                                                        ((unsigned long)(uint8_t)~bVar5 << 16 |
                                                         (unsigned long)((unsigned int)lVar10 |
                                                                         (unsigned int)(long)(fVar16 - 9.223372e+18) &
                                                                             (unsigned int)(lVar10 >> 63))
                                                             << 32) +
                                                        33554432);
            break;
        case 5:
            fVar16 = (float)(-(unsigned int)(0.0 < arg7) & (unsigned int)(arg7 + 0.5));
            uVar14 = (unsigned long)fVar16;
            playerDataComparator =
                (PlayerDataComparator<oldscape::social::FriendChatUser>*)(((unsigned long)bVar5 << 16 |
                                                                           ((long)(fVar16 - 9.223372e+18) &
                                                                                (long)uVar14 >> 63 |
                                                                            uVar14) *
                                                                               -4294967296 |
                                                                           uVar13 & 65535) -
                                                                          4261412864);
        }
        local_68 =
            eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>(playerDataComparator);
        *local_48 = local_68;
    }

    // 0x100811400
    void GeometryBatchInstance::UpdateGeometryPassEffect(DrawableSortKey& drawableSortKey,
                                                         DrawableSortKeyType drawableSortKeyType,
                                                         RenderPassEffect& renderPassEffect, RT7Core& rt7Core,
                                                         const EffectManager& effectManager, float arg6, float arg7,
                                                         bool arg8, const TextureInclusionMode* textureInclusionMode,
                                                         RenderPassType renderPassType) {
        uint8_t arg2_00;
        GeometryBatch* pGVar4;
        unsigned long uVar8;
        PlayerDataComparator<oldscape::social::FriendChatUser>* playerDataComparator;
        float fVar11;
        uint8_t auVar12[16];

        uint8_t* this_00 = m_material;
        char cVar1 = this_00->GetOption(0);
        uint8_t arg2 = true;
        if (!cVar1) {
            arg2 = this_00->GetOption(5);
        }
        renderPassEffect.Set(61, (bool)arg2);
        auVar12 = effectManager.BuildShaderEffectList(renderPassEffect);
        uint8_t* this_01 = &renderPassEffect.field_16;
        renderPassEffect.field_16 = auVar12[0];
        renderPassEffect.field_17 = auVar12[1];
        renderPassEffect.field_18 = auVar12[2];
        renderPassEffect.field_19 = auVar12[3];
        renderPassEffect.field_20 = auVar12[4];
        renderPassEffect.field_21 = auVar12._5_3_;
        renderPassEffect.field_24 = auVar12._8_8_;
        bool bVar10 = (uint8_t*)this_00->data() != AlphaMode::ALPHA_OPAQUE;
        bool bVar9 = bVar10 || arg8;
        this_01->Set(66, bVar9);
        if (bVar10 || arg8) {
            cVar1 = GetAnimatesTransparency();
            arg2_00 = true;
            if ((!cVar1) && (cVar1 = GetAnimatedColourType(), cVar1 == '\x02'))
                goto LAB_1008114d4;
        } else {
        LAB_1008114d4:
            pGVar4 = (GeometryBatch*)(*field_24).operator->();
            cVar1 = pGVar4->HasBones();
            arg2_00 = true;
            if (!cVar1) {
                pGVar4 = (GeometryBatch*)(*field_24).operator->();
                arg2_00 = pGVar4->HasJoints();
            }
        }
        this_01->Set(74, (bool)arg2_00);
        pGVar4 = (GeometryBatch*)(*field_24).operator->();
        bVar10 = (bool)pGVar4->HasJoints();
        this_01->Set(75, bVar10);
        bVar10 = (bool)effectManager.IsEnabled(115);
        renderPassEffect.Set(115, bVar10);
        long lVar5 = this_00->GetTextureAtlasReference();
        this_01->Set(63, (bool)((arg2 | bVar9) & lVar5 != 0));
        if ((TextureInclusionMode*)TextureInclusionMode::FORCE_EXCLUDE == textureInclusionMode) {
            this_01->Set(63, false);
        }
        auto pSVar6 = rt7Core.GetShaderManager();
        pGVar4 = (GeometryBatch*)(*field_24).operator->();
        bVar9 = (bool)pGVar4->HasJoints();
        auto renderPassType_00 = GeometryBatchRenderer::GetVertexDecl(bVar9);
        RenderPassEffect::UpdateShader(renderPassEffect, effectManager, (ShaderType)pSVar6, *2, renderPassType_00,
                                       (unsigned char)renderPassType);
        uint8_t bVar2 = GetFirstSequenceIDFromSource();
        unsigned long uVar7 = renderPassEffect.GetConstructedShaderId();
        switch (drawableSortKeyType) {
        case 0:
            fVar11 = (float)(-(unsigned int)(0.0 < arg7) & (unsigned int)(arg7 + 0.5));
            uVar8 = (unsigned long)fVar11;
            uVar8 = (unsigned long)(uint8_t)~bVar2 << 16 | ((long)(fVar11 - 9.223372e+18) & (long)uVar8 >> 63 | uVar8)
                                                               << 24;
            goto LAB_1008116ec;
        case 1:
            fVar11 = (float)(-(unsigned int)(0.0 < arg7) & (unsigned int)(arg7 + 0.5));
            lVar5 = (long)fVar11;
            uVar8 = (unsigned long)bVar2 << 16 |
                    (unsigned long)((unsigned int)lVar5 |
                                    (unsigned int)(long)(fVar11 - 9.223372e+18) & (unsigned int)(lVar5 >> 63)) *
                                -16777216 +
                            72057594021150720 &
                        72057594021150720;
        LAB_1008116ec:
            uVar8 = uVar8 | uVar7 & 65535;
            uVar7 = 144115188075855872;
        LAB_1008117af:
            playerDataComparator = (PlayerDataComparator<oldscape::social::FriendChatUser>*)(uVar7 | uVar8);
            break;
        case 2:
            playerDataComparator =
                (PlayerDataComparator<oldscape::social::FriendChatUser>*)(((long)(float)(-(unsigned int)(0.0 < arg7) &
                                                                                         (unsigned int)(arg7 + 0.5)) &
                                                                           4294967295U)
                                                                              << 8 |
                                                                          (uVar7 & 65535) << 40 |
                                                                          (unsigned long)(uint8_t)~bVar2 |
                                                                          144115188075855872);
            break;
        case 3:
            fVar11 = (float)(-(unsigned int)(0.0 < arg7) & (unsigned int)(arg7 + 0.5));
            uVar8 = (unsigned long)fVar11;
            uVar8 = ((long)(fVar11 - 9.223372e+18) & (long)uVar8 >> 63 | uVar8) * -256 + 1099511627520;
            uVar7 = (uVar7 & 65535) << 40 | (unsigned long)bVar2 | 144115188075855872;
            goto LAB_1008117af;
        case 4:
            fVar11 = (float)(-(unsigned int)(0.0 < arg7) & (unsigned int)(arg7 + 0.5));
            lVar5 = (long)fVar11;
            playerDataComparator =
                (PlayerDataComparator<
                    oldscape::social::FriendChatUser>*)((uVar7 & 65535) +
                                                        ((unsigned long)(uint8_t)~bVar2 << 16 |
                                                         (unsigned long)((unsigned int)lVar5 |
                                                                         (unsigned int)(long)(fVar11 - 9.223372e+18) &
                                                                             (unsigned int)(lVar5 >> 63))
                                                             << 32) +
                                                        33554432);
            break;
        case 5:
            fVar11 = (float)(-(unsigned int)(0.0 < arg7) & (unsigned int)(arg7 + 0.5));
            uVar8 = (unsigned long)fVar11;
            playerDataComparator =
                (PlayerDataComparator<oldscape::social::FriendChatUser>*)(((unsigned long)bVar2 << 16 |
                                                                           ((long)(fVar11 - 9.223372e+18) &
                                                                                (long)uVar8 >> 63 |
                                                                            uVar8) *
                                                                               -4294967296 |
                                                                           uVar7 & 65535) -
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

    // 0x1008118b0
    void GeometryBatchInstance::UpdateShadowPassEffect(DrawableSortKey& drawableSortKey,
                                                       DrawableSortKeyType drawableSortKeyType,
                                                       RenderPassEffect& renderPassEffect, RT7Core& rt7Core,
                                                       const EffectManager& effectManager, float arg6, float arg7,
                                                       bool arg8, const TextureInclusionMode* textureInclusionMode) {
        uint8_t arg2;
        VertexDeclaration* vertexDeclaration;
        long lVar7;
        unsigned long uVar8;
        PlayerDataComparator<oldscape::social::FriendChatUser>* playerDataComparator;
        float fVar10;
        uint8_t auVar11[16];

        uint8_t* this_00 = m_material;
        char cVar1 = this_00->GetOption(0);
        if ((!cVar1) && ((cVar1 = this_00->GetOption(1), cVar1 || (cVar1 = this_00->GetOption(3), cVar1)))) {
            renderPassEffect.Set(63, false);
        }
        bool bVar2 = (bool)effectManager.IsEnabled(36);
        renderPassEffect.Set(36, bVar2);
        auVar11 = effectManager.BuildShaderEffectList(renderPassEffect);
        uint8_t* this_01 = &renderPassEffect.field_16;
        renderPassEffect.field_16 = auVar11[0];
        renderPassEffect.field_17 = auVar11[1];
        renderPassEffect.field_18 = auVar11[2];
        renderPassEffect.field_19 = auVar11[3];
        renderPassEffect.field_20 = auVar11[4];
        renderPassEffect.field_21 = auVar11._5_3_;
        renderPassEffect.field_24 = auVar11._8_8_;
        bool bVar9 = (uint8_t*)this_00->data() != AlphaMode::ALPHA_OPAQUE;
        bVar2 = bVar9 || arg8;
        this_01->Set(66, bVar2);
        this_01->Set(65, bVar2);
        if (bVar9 || arg8) {
            cVar1 = GetAnimatesTransparency();
            arg2 = true;
            if ((cVar1) || (cVar1 = GetAnimatedColourType(), cVar1 != '\x02'))
                goto LAB_1008119da;
        }
        GeometryBatch* pGVar4 = (GeometryBatch*)(*field_24).operator->();
        cVar1 = pGVar4->HasBones();
        arg2 = true;
        if (!cVar1) {
            pGVar4 = (GeometryBatch*)(*field_24).operator->();
            arg2 = pGVar4->HasJoints();
        }
    LAB_1008119da:
        this_01->Set(74, (bool)arg2);
        pGVar4 = (GeometryBatch*)(*field_24).operator->();
        bVar2 = (bool)pGVar4->HasJoints();
        this_01->Set(75, bVar2);
        cVar1 = effectManager.IsEnabled(36);
        auto pSVar5 = rt7Core.GetShaderManager();
        pGVar4 = (GeometryBatch*)(*field_24).operator->();
        bVar2 = (bool)pGVar4->HasJoints();
        auto renderPassType = GeometryBatchRenderer::GetVertexDecl(bVar2);
        if (!cVar1) {
            vertexDeclaration = (VertexDeclaration*)3;
        } else {
            vertexDeclaration = (VertexDeclaration*)4;
        }
        RenderPassEffect::UpdateShader(renderPassEffect, effectManager, (ShaderType)pSVar5, *vertexDeclaration,
                                       renderPassType, cVar1);
        unsigned long uVar6 = renderPassEffect.GetConstructedShaderId();
        switch (drawableSortKeyType) {
        case 0:
            fVar10 = (float)(-(unsigned int)(0.0 < arg7) & (unsigned int)(arg7 + 0.5));
            uVar8 = (unsigned long)fVar10;
            playerDataComparator =
                (PlayerDataComparator<oldscape::social::FriendChatUser>*)(((long)(fVar10 - 9.223372e+18) &
                                                                               (long)uVar8 >> 63 |
                                                                           uVar8)
                                                                              << 24 |
                                                                          uVar6 & 65535 | 144115188092567552);
            break;
        case 1:
            fVar10 = (float)(-(unsigned int)(0.0 < arg7) & (unsigned int)(arg7 + 0.5));
            lVar7 = (long)fVar10;
            playerDataComparator =
                (PlayerDataComparator<
                    oldscape::social::FriendChatUser>*)((unsigned long)((unsigned int)lVar7 |
                                                                        (unsigned int)(long)(fVar10 - 9.223372e+18) &
                                                                            (unsigned int)(lVar7 >> 63)) *
                                                                    -16777216 +
                                                                72057594021150720 &
                                                            72057594021150720 |
                                                        uVar6 & 65535 | 144115188075855872);
            break;
        case 2:
            playerDataComparator =
                (PlayerDataComparator<oldscape::social::FriendChatUser>*)((((long)(float)(-(unsigned int)(0.0 < arg7) &
                                                                                          (unsigned int)(arg7 + 0.5)) &
                                                                            4294967295U)
                                                                               << 8 |
                                                                           (uVar6 & 65535) << 40) +
                                                                          144115188075856127);
            break;
        case 3:
            fVar10 = (float)(-(unsigned int)(0.0 < arg7) & (unsigned int)(arg7 + 0.5));
            uVar8 = (unsigned long)fVar10;
            playerDataComparator =
                (PlayerDataComparator<oldscape::social::FriendChatUser>*)((uVar6 & 65535) << 40 | 144115188075855872 |
                                                                          ((long)(fVar10 - 9.223372e+18) &
                                                                               (long)uVar8 >> 63 |
                                                                           uVar8) *
                                                                                  -256 +
                                                                              1099511627520);
            break;
        case 4:
            fVar10 = (float)(-(unsigned int)(0.0 < arg7) & (unsigned int)(arg7 + 0.5));
            lVar7 = (long)fVar10;
            playerDataComparator =
                (PlayerDataComparator<
                    oldscape::social::FriendChatUser>*)(((unsigned long)((unsigned int)lVar7 |
                                                                         (unsigned int)(long)(fVar10 - 9.223372e+18) &
                                                                             (unsigned int)(lVar7 >> 63))
                                                         << 32) +
                                                        (uVar6 & 65535) + 50266112);
            break;
        case 5:
            fVar10 = (float)(-(unsigned int)(0.0 < arg7) & (unsigned int)(arg7 + 0.5));
            uVar8 = (unsigned long)fVar10;
            playerDataComparator =
                (PlayerDataComparator<oldscape::social::FriendChatUser>*)((((long)(fVar10 - 9.223372e+18) &
                                                                                (long)uVar8 >> 63 |
                                                                            uVar8) *
                                                                               -4294967296 |
                                                                           uVar6 & 65535) -
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

    // 0x100811d30
    void GeometryBatchInstance::UpdateMiniMapPassEffect(DrawableSortKey& drawableSortKey,
                                                        DrawableSortKeyType drawableSortKeyType,
                                                        RenderPassEffect& renderPassEffect, RT7Core& rt7Core,
                                                        const EffectManager& effectManager, float arg6, float arg7,
                                                        const TextureInclusionMode* textureInclusionMode) {
        uint8_t*** this;
        unsigned long uVar7;
        uint32_t in_register_00000034;
        PlayerDataComparator<oldscape::social::FriendChatUser>* playerDataComparator;
        float fVar9;
        uint8_t auVar10[16];
        uint8_t* in_stack_00000008;
        uint64_t local_48;

        uint64_t* local_40 = (uint64_t*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)drawableSortKeyType);
        auVar10 = textureInclusionMode->BuildShaderEffectList(rt7Core);
        this = &rt7Core.field_16;
        *(uint8_t(*)[16]) & rt7Core.field_16 = auVar10;
        ParticleMaterial* this_00 = (ParticleMaterial*)(drawableSortKey + 6);
        long lVar3 = this_00->GetTextureAtlasReference();
        Set(63, lVar3 != 0);
        if (TextureInclusionMode::FORCE_EXCLUDE == in_stack_00000008) {
            Set(63, false);
        }
        bool cVar1 = this_00->GetOption(1);
        bool bVar8 = true;
        if (((!cVar1) && (cVar1 = this_00->GetOption(2), !cVar1)) && (cVar1 = this_00->GetOption(3), !cVar1)) {
            bVar8 = (uint8_t*)this_00->data() == AlphaMode::ALPHA_TESTED;
        }
        Set(65, bVar8);
        auto pSVar5 = effectManager.GetShaderManager();
        GeometryBatch* this_01 = (GeometryBatch*)(*((drawableSortKey + 3))).operator->();
        bVar8 = (bool)this_01->HasJoints();
        auto renderPassType = GeometryBatchRenderer::GetVertexDecl(bVar8);
        RenderPassEffect::UpdateShader(rt7Core, *textureInclusionMode, (ShaderType)pSVar5, nullptr, renderPassType,
                                       '\x05');
        uint8_t bVar2 = GetFirstSequenceIDFromSource((GeometryBatchInstance*)drawableSortKey);
        unsigned long uVar6 = rt7Core.GetConstructedShaderId();
        switch ((unsigned long)renderPassEffect & 4294967295) {
        case 0:
            fVar9 = (float)(-(unsigned int)(0.0 < arg7) & (unsigned int)(arg7 + 0.5));
            uVar7 = (unsigned long)fVar9;
            uVar7 = (unsigned long)(uint8_t)~bVar2 << 16 | ((long)(fVar9 - 9.223372e+18) & (long)uVar7 >> 63 | uVar7)
                                                               << 24;
            goto LAB_100811f5d;
        case 1:
            fVar9 = (float)(-(unsigned int)(0.0 < arg7) & (unsigned int)(arg7 + 0.5));
            lVar3 = (long)fVar9;
            uVar7 = (unsigned long)bVar2 << 16 |
                    (unsigned long)((unsigned int)lVar3 |
                                    (unsigned int)(long)(fVar9 - 9.223372e+18) & (unsigned int)(lVar3 >> 63)) *
                                -16777216 +
                            72057594021150720 &
                        72057594021150720;
        LAB_100811f5d:
            uVar7 = uVar7 | uVar6 & 65535;
            uVar6 = 288230376151711744;
        LAB_100812023:
            playerDataComparator = (PlayerDataComparator<oldscape::social::FriendChatUser>*)(uVar6 | uVar7);
            break;
        case 2:
            playerDataComparator =
                (PlayerDataComparator<oldscape::social::FriendChatUser>*)(((long)(float)(-(unsigned int)(0.0 < arg7) &
                                                                                         (unsigned int)(arg7 + 0.5)) &
                                                                           4294967295U)
                                                                              << 8 |
                                                                          (uVar6 & 65535) << 40 |
                                                                          (unsigned long)(uint8_t)~bVar2 |
                                                                          288230376151711744);
            break;
        case 3:
            fVar9 = (float)(-(unsigned int)(0.0 < arg7) & (unsigned int)(arg7 + 0.5));
            uVar7 = (unsigned long)fVar9;
            uVar7 = ((long)(fVar9 - 9.223372e+18) & (long)uVar7 >> 63 | uVar7) * -256 + 1099511627520;
            uVar6 = (uVar6 & 65535) << 40 | (unsigned long)bVar2 | 288230376151711744;
            goto LAB_100812023;
        case 4:
            fVar9 = (float)(-(unsigned int)(0.0 < arg7) & (unsigned int)(arg7 + 0.5));
            lVar3 = (long)fVar9;
            playerDataComparator =
                (PlayerDataComparator<
                    oldscape::social::FriendChatUser>*)((uVar6 & 65535) +
                                                        ((unsigned long)(uint8_t)~bVar2 << 16 |
                                                         (unsigned long)((unsigned int)lVar3 |
                                                                         (unsigned int)(long)(fVar9 - 9.223372e+18) &
                                                                             (unsigned int)(lVar3 >> 63))
                                                             << 32) +
                                                        67108864);
            break;
        case 5:
            fVar9 = (float)(-(unsigned int)(0.0 < arg7) & (unsigned int)(arg7 + 0.5));
            uVar7 = (unsigned long)fVar9;
            playerDataComparator =
                (PlayerDataComparator<oldscape::social::FriendChatUser>*)(((unsigned long)bVar2 << 16 |
                                                                           ((long)(fVar9 - 9.223372e+18) &
                                                                                (long)uVar7 >> 63 |
                                                                            uVar7) *
                                                                               -4294967296 |
                                                                           uVar6 & 65535) -
                                                                          4227858432);
            break;
        default:
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "renderer/DrawableSortKey.h",
                            177, "Unknown sort key type");
        }
        new (&local_48)
            eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>(playerDataComparator);
        *local_40 = local_48;
    }

    // 0x100812130
    void GeometryBatchInstance::UpdateObjectHighlightPassEffect(
        DrawableSortKey& drawableSortKey, DrawableSortKeyType drawableSortKeyType, RenderPassEffect& renderPassEffect,
        RT7Core& rt7Core, const EffectManager& effectManager, float arg6, float arg7, bool arg8,
        const TextureInclusionMode* textureInclusionMode, DrawableGroupLayer drawableGroupLayer) {
        char cVar1;
        uint8_t arg2;
        GeometryBatch* pGVar5;
        unsigned long uVar10;
        PlayerDataComparator<oldscape::social::FriendChatUser>* playerDataComparator;
        float fVar12;
        uint8_t auVar13[16];

        auVar13 = effectManager.BuildShaderEffectList(renderPassEffect);
        uint8_t* this_00 = &renderPassEffect.field_16;
        renderPassEffect.field_16 = auVar13[0];
        renderPassEffect.field_17 = auVar13[1];
        renderPassEffect.field_18 = auVar13[2];
        renderPassEffect.field_19 = auVar13[3];
        renderPassEffect.field_20 = auVar13[4];
        renderPassEffect.field_21 = auVar13._5_3_;
        renderPassEffect.field_24 = auVar13._8_8_;
        bool bVar11 = (uint8_t*)m_material->data() != AlphaMode::ALPHA_OPAQUE;
        this_00->Set(66, bVar11 || arg8);
        if (bVar11 || arg8) {
            cVar1 = GetAnimatesTransparency();
            arg2 = true;
            if (!cVar1) {
                cVar1 = GetAnimatedColourType();
                if (cVar1 == '\x02')
                    goto LAB_1008121c9;
            }
        } else {
        LAB_1008121c9:
            pGVar5 = (GeometryBatch*)(*field_24).operator->();
            cVar1 = pGVar5->HasBones();
            arg2 = true;
            if (!cVar1) {
                pGVar5 = (GeometryBatch*)(*field_24).operator->();
                arg2 = pGVar5->HasJoints();
            }
        }
        this_00->Set(74, (bool)arg2);
        pGVar5 = (GeometryBatch*)(*field_24).operator->();
        bool bVar2 = (bool)pGVar5->HasJoints();
        this_00->Set(75, bVar2);
        long lVar6 = m_material->GetTextureAtlasReference();
        bVar2 = false;
        if ((lVar6 != 0) && (bVar11 || arg8)) {
            bVar2 = (TextureInclusionMode*)TextureInclusionMode::FORCE_EXCLUDE != textureInclusionMode;
        }
        this_00->Set(63, bVar2);
        auto pSVar7 = rt7Core.GetShaderManager();
        pGVar5 = (GeometryBatch*)(*field_24).operator->();
        bVar11 = (bool)pGVar5->HasJoints();
        auto renderPassType = GeometryBatchRenderer::GetVertexDecl(bVar11);
        RenderPassEffect::UpdateShader(renderPassEffect, effectManager, (ShaderType)pSVar7, DAT_00000001,
                                       renderPassType, '\b');
        uint8_t bVar3 = GetFirstSequenceIDFromSource();
        unsigned long uVar8 = renderPassEffect.GetConstructedShaderId();
        if (5 < drawableSortKeyType) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "renderer/DrawableSortKey.h",
                            177, "Unknown sort key type");
        }
        unsigned long uVar9 = (unsigned long)drawableGroupLayer;
        switch (drawableSortKeyType) {
        case 0:
            fVar12 = (float)(-(unsigned int)(0.0 < arg7) & (unsigned int)(arg7 + 0.5));
            uVar10 = (unsigned long)fVar12;
            uVar8 = uVar8 & 65535;
            uVar9 = (unsigned long)(uint8_t)~bVar3 << 16 |
                    ((long)(fVar12 - 9.223372e+18) & (long)uVar10 >> 63 | uVar10) << 24 | uVar9 << 56;
            break;
        case 1:
            fVar12 = (float)(-(unsigned int)(0.0 < arg7) & (unsigned int)(arg7 + 0.5));
            lVar6 = (long)fVar12;
            uVar8 = uVar8 & 65535;
            uVar9 = (unsigned long)bVar3 << 16 |
                    (unsigned long)((unsigned int)lVar6 |
                                    (unsigned int)(long)(fVar12 - 9.223372e+18) & (unsigned int)(lVar6 >> 63)) *
                                -16777216 +
                            72057594021150720 &
                        72057594021150720 |
                    uVar9 << 56;
            break;
        case 2:
            playerDataComparator =
                (PlayerDataComparator<oldscape::social::FriendChatUser>*)(((long)(float)(-(unsigned int)(0.0 < arg7) &
                                                                                         (unsigned int)(arg7 + 0.5)) &
                                                                           4294967295U)
                                                                              << 8 |
                                                                          (uVar8 & 65535) << 40 | uVar9 << 56 |
                                                                          (unsigned long)(uint8_t)~bVar3);
            goto LAB_100812532;
        case 3:
            fVar12 = (float)(-(unsigned int)(0.0 < arg7) & (unsigned int)(arg7 + 0.5));
            uVar10 = (unsigned long)fVar12;
            uVar8 = (uVar8 & 65535) << 40 | uVar9 << 56 | (unsigned long)bVar3;
            uVar9 = ((long)(fVar12 - 9.223372e+18) & (long)uVar10 >> 63 | uVar10) * -256 + 1099511627520;
            break;
        case 4:
            fVar12 = (float)(-(unsigned int)(0.0 < arg7) & (unsigned int)(arg7 + 0.5));
            lVar6 = (long)fVar12;
            uVar8 = uVar8 & 65535;
            uVar9 = (unsigned long)(uint8_t)~bVar3 << 16 |
                    (((uint64_t)((unsigned int)lVar6 |
                                 (unsigned int)(long)(fVar12 - 9.223372e+18) & (unsigned int)(lVar6 >> 63))
                      << 32) |
                     (uint32_t)(drawableGroupLayer << 24));
            break;
        case 5:
            fVar12 = (float)(-(unsigned int)(0.0 < arg7) & (unsigned int)(arg7 + 0.5));
            uVar9 = (unsigned long)fVar12;
            playerDataComparator =
                (PlayerDataComparator<oldscape::social::FriendChatUser>*)(((unsigned long)bVar3 << 16 |
                                                                           (unsigned long)(drawableGroupLayer << 24) |
                                                                           ((long)(fVar12 - 9.223372e+18) &
                                                                                (long)uVar9 >> 63 |
                                                                            uVar9) *
                                                                               -4294967296 |
                                                                           uVar8 & 65535) -
                                                                          4294967296);
            goto LAB_100812532;
        }
        playerDataComparator = (PlayerDataComparator<oldscape::social::FriendChatUser>*)(uVar9 | uVar8);
    LAB_100812532:
        DrawableSortKey local_40(playerDataComparator);
        drawableSortKey = local_40;
    }

    // 0x100812570
    void GeometryBatchInstance::CreateRenderingResources() {
        ((GeometryBatch*)(*field_24).operator->())->CreateRenderingResources();
    }

    // 0x100812590
    void GeometryBatchInstance::GatherDrawableElements(DrawableQueue& drawableQueue, RT7Core& rt7Core,
                                                       const SceneViewData& sceneViewData,
                                                       const EffectManager& effectManager,
                                                       const eastl::vector_map<int, FaceGroupRenderMasks>* arg5,
                                                       unsigned char arg6) {
        QueryPass* this_00;
        RT7Core* pRVar1;
        uint8_t bVar3;
        RenderPassType renderPassType;
        uint32_t uVar4;
        int iVar5;
        DrawableSortKeyType DVar6;
        unsigned int uVar7;
        uint8_t* puVar8;
        long lVar9;
        DrawableGroupType* pDVar11;
        shared_ptr* psVar12;
        AABB* aabb;
        Matrix44T<float>* matrix44;
        CommandLine* pCVar13;
        GeometryBatch_DE* pGVar14;
        GeometryQuery* pGVar15;
        unsigned int* puVar16;
        DrawableGroupType DVar17;
        DrawableQueue* pDVar18;
        EffectManager* textureInclusionMode;
        uint64_t in_register_00000089;
        float arg6_00;
        float arg6_01;
        float arg6_02;
        float arg6_03;
        float arg6_04;
        uint8_t auVar21[12];
        uint8_t in_stack_00000008;
        DrawableSortKey in_stack_fffffffffffffe00;
        DrawableGroupLayer in_stack_fffffffffffffe08;
        uint32_t in_stack_fffffffffffffe0c;
        float local_1d8;
        uint8_t local_1d4[12];
        long* local_1c8;
        DrawableGroupType* local_1c0;
        Frustum* local_1b8;
        EffectManager* local_1b0;
        unsigned long local_1a8;
        float local_19c;
        uint8_t local_198[16];
        RT7Core* local_188;
        uint8_t*** local_180;
        Drawable local_168;
        DrawableSortKey local_140;
        float local_128;
        unsigned int local_120[18];
        OBB local_d8;

        vector<eastl::pair<int, int>>* this_02 =
            (vector<eastl::pair<int, int>>*)(((uint64_t)in_register_00000089 << 8) | (uint8_t)arg6);
        DrawableQueue* local_130 = drawableQueue;
        auto renderPassBitSet = effectManager.GetRenderPassBits();
        ObjType* local_138 = (ObjType*)&drawableQueue.field_48;
        char cVar2 = drawableQueue.field_48.CanRenderInPasses(*renderPassBitSet);
        if ((((!cVar2) || (cVar2 = IsHidden((GeometryBatchInstance*)local_130), cVar2)) ||
             ((puVar8 = (uint8_t*)local_138->GetCost(),
               puVar8 == HideFacesMode::TEXTURES_ON && (cVar2 = arg5->IsEnabled(27), cVar2)))) ||
            ((puVar8 = (uint8_t*)local_138->GetCost(),
              puVar8 == HideFacesMode::TEXTURES_OFF && (cVar2 = arg5->IsEnabled(27), !cVar2))))
            goto LAB_100812602;
        float fVar20 = (float)(*(Model**)&local_130->field_656)->GetCurrentFade();
        if (0.0 <= fVar20) {
        LAB_1008126a9:
            puVar8 = (uint8_t*)local_138->data();
            if (puVar8 == AlphaMode::ALPHA_BLENDED) {
                bVar3 = 1;
            } else {
                bVar3 = GetAnimatesTransparency((GeometryBatchInstance*)local_130);
            }
        } else {
            cVar2 = arg5->IsEnabled(94);
            bVar3 = 1;
            if (!cVar2)
                goto LAB_1008126a9;
        }
        OBB local_88;
        unsigned int local_144 = (unsigned int)bVar3;
        DrawableSortKey drawableSortKey = (DrawableSortKey)effectManager;
        GetRenderingCameraDistances((float*)local_130, &local_19c, &local_128, (OBB*)local_198, (uint8_t)(&local_88),
                                    (SceneViewData*)(unsigned long)bVar3);
        vector_map<int, FaceGroupRenderMasks>* local_178 = nullptr;
        if ((this_02 != nullptr) && (lVar9 = this_02->size(), lVar9 != 0)) {
            local_178 = (vector_map<int, FaceGroupRenderMasks>*)this_02;
        }
        DrawableGroupType local_124 = 2;
        if (bVar3 == 0) {
            cVar2 = arg5->IsEnabled(108);
            if (cVar2) {
                cVar2 = local_138->IsRefractionEnabled();
                local_124 = 8;
                if (cVar2)
                    goto LAB_100812785;
            }
            lVar9 = local_138->data();
            local_124 = *(DrawableGroupType*)(lVar9 + 8);
        }
    LAB_100812785:
        DrawableSortKey DVar19 = (DrawableSortKey)effectManager;
        Layout* layout = (Layout*)((long)(DrawableSortKey)effectManager + 520);
        auto plVar10 = layout->HeapBeginPtr();
        local_1d4._4_8_ = layout->end();
        if (plVar10 != (long*)local_1d4._4_8_) {
            local_180 = (uint8_t***)&local_130->field_8;
            local_1b8 = (Frustum*)((long)DVar19 + 208);
            local_1a8 = (unsigned long)in_stack_00000008;
            pDVar18 = local_130;
            do {
                if (*plVar10 == 0) {
                    LogAssert("renderPass",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "model/GeometryBatchInstance.cpp",
                              1294, nullptr);
                }
                renderPassType = (*plVar10)->GetPos();
                local_188 = (RT7Core*)local_138->GetRenderPassEffect(renderPassType);
                textureInclusionMode = (EffectManager*)arg5;
                SetDefaultLODs((GeometryBatchInstance*)pDVar18, (EffectManager*)arg5, renderPassType,
                               (SceneViewData*)DVar19, local_19c, &local_88);
                local_198._8_8_ = TextureInclusionMode::DEFAULT;
                (*(Model**)&pDVar18->field_656)->SelectTextureInclusionMode(textureInclusionMode);
                local_140 = math::Vector2T();
                pRVar1 = rt7Core;
                puVar16 = &switchD_1008128c8::switchdataD_100813458;
                switch (renderPassType) {
                case 0:
                case 1:
                    cVar2 = CastsShadow((GeometryBatchInstance*)pDVar18);
                    uVar4 = drawableSortKey._4_4_;
                    if (cVar2) {
                        pCVar13 = rt7Core.GetDrawableGroup(renderPassType, local_124);
                        DVar6 = pCVar13->GetPos();
                        drawableSortKey._4_4_ = uVar4;
                        drawableSortKey._0_4_ = local_144;
                        UpdateShadowPassEffect((GeometryBatchInstance*)pDVar18, &local_140, DVar6,
                                               (RenderPassEffect*)local_188, (RT7Core*)sceneViewData,
                                               (EffectManager*)arg5, arg6_00, local_128, (uint8_t)local_144,
                                               (TextureInclusionMode*)in_stack_fffffffffffffe00);
                        local_d8.field_0 = (float)GetLodLevel((GeometryBatchInstance*)pDVar18, 1);
                        pGVar14 = DrawableElementPool<GeometryBatch_DE>::Create<
                            math::OBB&, float&, eastl::vector_map<int, FaceGroupRenderMasks> const*&, unsigned int,
                            GeometryBatchInstance&>(local_88, local_128, local_178, local_d8, *pDVar18);
                        DVar19 = local_140;
                        local_d8.unique_ptr<true, void>(pGVar14);
                        rt7Core.AddDrawable(drawableSortKey, *DVar19, &local_d8, (DrawableGroupType)local_180,
                                            local_124);
                    LAB_100812b1d:
                        pDVar18 = local_130;
                        DVar19 = (DrawableSortKey)effectManager;
                    }
                    break;
                case 2:
                case 4:
                    if (((((ForwardLightingPass::m_DrawOpaque != '\0') && (local_124 == 0)) ||
                          ((ForwardLightingPass::m_DrawAlphaTested != '\0' && (local_124 == 1)))) ||
                         ((ForwardLightingPass::m_DrawRefracted != '\0' && (local_124 == 8)))) ||
                        ((ForwardLightingPass::m_DrawAlphaBlended != '\0' && (local_124 == 2)))) {
                        if (ForwardLightingPass::m_DrawRT5Materials != '\0') {
                            cVar2 = local_138->GetOption(0);
                            uVar4 = drawableSortKey._4_4_;
                            if (cVar2)
                                goto LAB_100812a0d;
                        LAB_100812a33:
                            pCVar13 = rt7Core.GetDrawableGroup(renderPassType, local_124);
                            DVar6 = pCVar13->GetPos();
                            drawableSortKey._4_4_ = uVar4;
                            drawableSortKey._0_4_ = local_144;
                            in_stack_fffffffffffffe00 = (DrawableSortKey)local_198._8_8_;
                            UpdateForwardPassEffect((GeometryBatchInstance*)pDVar18, &local_140, DVar6,
                                                    (RenderPassEffect*)local_188, (RT7Core*)sceneViewData,
                                                    (EffectManager*)arg5, (float)local_198._0_4_, local_128,
                                                    (uint8_t)local_144, (TextureInclusionMode*)local_198._8_8_,
                                                    (OBB*)(((uint64_t)in_stack_fffffffffffffe0c << 32) |
                                                           (uint32_t)in_stack_fffffffffffffe08),
                                                    (unsigned char)local_1a8, renderPassType);
                            local_d8.field_0 = (float)GetLodLevel((GeometryBatchInstance*)pDVar18,
                                                                  (unsigned int)(renderPassType == 2) * 2);
                            pGVar14 = DrawableElementPool<GeometryBatch_DE>::Create<
                                math::OBB&, float&, eastl::vector_map<int, FaceGroupRenderMasks> const*&, unsigned int,
                                GeometryBatchInstance&>(local_88, local_128, local_178, local_d8, *pDVar18);
                            DVar19 = local_140;
                            local_d8.unique_ptr<true, void>(pGVar14);
                            rt7Core.AddDrawable(drawableSortKey, *DVar19, &local_d8, (DrawableGroupType)local_180,
                                                local_124);
                            goto LAB_100812b1d;
                        }
                    LAB_100812a0d:
                        if (ForwardLightingPass::m_DrawRT7Materials != '\0') {
                            cVar2 = local_138->GetOption(0);
                            uVar4 = drawableSortKey._4_4_;
                            if (cVar2)
                                goto LAB_100812a33;
                        }
                    }
                    break;
                case 3:
                    if (((ForwardLightingPass::m_DrawOpaque != '\0') && (local_124 == 0)) ||
                        ((ForwardLightingPass::m_DrawAlphaTested != '\0' && (local_124 == 1)))) {
                        if (ForwardLightingPass::m_DrawRT5Materials != '\0') {
                            cVar2 = local_138->GetOption(0);
                            uVar4 = drawableSortKey._4_4_;
                            if (cVar2)
                                goto LAB_100812b88;
                        LAB_100812bae:
                            pRVar1 = rt7Core;
                            pCVar13 = rt7Core.GetDrawableGroup(3, local_124);
                            DVar6 = pCVar13->GetPos();
                            drawableSortKey._4_4_ = uVar4;
                            drawableSortKey._0_4_ = local_144;
                            in_stack_fffffffffffffe08 = 3;
                            in_stack_fffffffffffffe00 = (DrawableSortKey)local_198._8_8_;
                            UpdateGeometryPassEffect((GeometryBatchInstance*)pDVar18, &local_140, DVar6,
                                                     (RenderPassEffect*)local_188, (RT7Core*)sceneViewData,
                                                     (EffectManager*)arg5, arg6_01, local_128, (uint8_t)local_144,
                                                     (TextureInclusionMode*)local_198._8_8_, 3);
                            local_d8.field_0 = (float)GetLodLevel((GeometryBatchInstance*)pDVar18, 0);
                            pGVar14 = DrawableElementPool<GeometryBatch_DE>::Create<
                                math::OBB&, float&, eastl::vector_map<int, FaceGroupRenderMasks> const*&, unsigned int,
                                GeometryBatchInstance&>(local_88, local_128, local_178, local_d8, *pDVar18);
                            DVar19 = local_140;
                            local_d8.unique_ptr<true, void>(pGVar14);
                            pRVar1->AddDrawable(drawableSortKey, *DVar19, &local_d8, (DrawableGroupType)local_180,
                                                local_124);
                            goto LAB_100812d49;
                        }
                    LAB_100812b88:
                        if (ForwardLightingPass::m_DrawRT7Materials != '\0') {
                            cVar2 = local_138->GetOption(0);
                            uVar4 = drawableSortKey._4_4_;
                            if (cVar2)
                                goto LAB_100812bae;
                        }
                    }
                    break;
                case 5:
                    pCVar13 = rt7Core.GetDrawableGroup(5, local_124);
                    uVar7 = pCVar13->GetPos();
                    drawableSortKey = (DrawableSortKey)local_198._8_8_;
                    UpdateMiniMapPassEffect((DrawableSortKey*)pDVar18, (DrawableSortKeyType)&local_140,
                                            (RenderPassEffect*)(unsigned long)uVar7, local_188,
                                            (EffectManager*)(RT7Core*)sceneViewData, arg6_02, local_128,
                                            (TextureInclusionMode*)arg5);
                    local_d8.field_0 = 5.60519e-45;
                    pGVar14 = DrawableElementPool<GeometryBatch_DE>::Create<
                        math::OBB&, float&, eastl::vector_map<int, FaceGroupRenderMasks> const*&, unsigned int,
                        GeometryBatchInstance&>(local_88, local_128, local_178, local_d8, *pDVar18);
                    DVar19 = local_140;
                    local_d8.unique_ptr<true, void>(pGVar14);
                    pRVar1->AddDrawable(drawableSortKey, *DVar19, &local_d8, (DrawableGroupType)local_180, local_124);
                LAB_100812d49:
                    pDVar18 = local_130;
                    DVar19 = (DrawableSortKey)effectManager;
                    break;
                default:
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                    "runetek7/model/GeometryBatchInstance.cpp",
                                    1542, "Unsupported render pass");
                case 8:
                    cVar2 = (*(Model**)&pDVar18->field_656)->HasHighlight();
                    if (((cVar2) && (cVar2 = local_138->GetOption(12), cVar2)) &&
                        (((((ForwardLightingPass::m_DrawOpaque != '\0' && (local_124 == 0)) ||
                            ((ForwardLightingPass::m_DrawAlphaTested != '\0' && (local_124 == 1)))) ||
                           ((ForwardLightingPass::m_DrawRefracted != '\0' && (local_124 == 8)))) ||
                          ((ForwardLightingPass::m_DrawAlphaBlended != '\0' && (local_124 == 2)))))) {
                        if (((ForwardLightingPass::m_DrawRT5Materials == '\0') ||
                             (cVar2 = local_138->GetOption(0), cVar2)) &&
                            ((ForwardLightingPass::m_DrawRT7Materials == '\0' ||
                              (cVar2 = local_138->GetOption(0), !cVar2)))) {
                        } else {
                            local_d8 = math::OBB();
                            GetRenderingCameraDistances((float*)pDVar18, &local_1d8, (float*)(local_198 + 4),
                                                        (OBB*)local_1d4, (uint8_t)(&local_d8),
                                                        (SceneViewData*)&DAT_00000001);
                            new (local_120) eastl::fixed_vector<GeometryBatchInstance::GatherDrawableElements(
                                                                    DrawableQueue&, RT7Core&, SceneViewData const&,
                                                                    EffectManager const&,
                                                                    eastl::vector_map<int, FaceGroupRenderMasks> const*,
                                                                    unsigned char)::DrawableGroupSelection,
                                                                4ul, false, eastl::dummy_allocator>();
                            fVar20 = (float)(*(Model**)&pDVar18->field_656)->GetHighlightScale();
                            drawableSortKey = DVar19;
                            if (0.0 < fVar20) {
                                local_168._vptr = (Drawable_vtbl*)((long)&__mh_execute_header.cpusubtype + 2);
                                local_168.m_renderFlags._0_2_ = 257;
                                local_120->push_back(local_168);
                                local_168._vptr = (Drawable_vtbl*)68719476746;
                                local_168.m_renderFlags._0_2_ = 256;
                                local_120->push_back(local_168);
                                drawableSortKey = DVar19;
                            }
                            fVar20 = (float)(*(Model**)&pDVar18->field_656)->GetHighlightSilhouetteAlpha();
                            if (0.0 < fVar20) {
                                local_168._vptr = (Drawable_vtbl*)((long)&__mh_execute_header.cpusubtype + 3);
                                local_168.m_renderFlags._0_2_ = 1;
                                local_120->push_back(local_168);
                                local_168._vptr = (Drawable_vtbl*)68719476748;
                                local_168.m_renderFlags._0_2_ = 0;
                                local_120->push_back(local_168);
                            }
                            local_1b0 = (EffectManager*)arg5;
                            pDVar11 = (DrawableGroupType*)local_120->begin();
                            local_1c0 = (DrawableGroupType*)local_120->end();
                            local_1c8 = plVar10;
                            if (pDVar11 != local_1c0) {
                                do {
                                    uVar4 = drawableSortKey._4_4_;
                                    local_168._12_4_ = *pDVar11;
                                    in_stack_fffffffffffffe08 = pDVar11[1];
                                    DVar17 = pDVar11[2];
                                    bVar3 = *(uint8_t*)((long)pDVar11 + 9);
                                    pCVar13 = rt7Core.GetDrawableGroup(8, local_168._12_4_);
                                    pDVar18 = local_130;
                                    DVar6 = pCVar13->GetPos();
                                    drawableSortKey._4_4_ = uVar4;
                                    drawableSortKey._0_4_ = local_144;
                                    in_stack_fffffffffffffe00 = (DrawableSortKey)local_198._8_8_;
                                    UpdateObjectHighlightPassEffect(
                                        (GeometryBatchInstance*)pDVar18, &local_140, DVar6,
                                        (RenderPassEffect*)local_188, (RT7Core*)sceneViewData, local_1b0, arg6_03,
                                        (float)local_198._4_4_, (uint8_t)local_144,
                                        (TextureInclusionMode*)local_198._8_8_, in_stack_fffffffffffffe08);
                                    uVar4 = GetLodLevel((GeometryBatchInstance*)pDVar18, 0);
                                    local_168._vptr =
                                        (Drawable_vtbl*)(((uint64_t)local_168._vptr._4_4_ << 32) | (uint32_t)uVar4);
                                    pGVar14 = DrawableElementPool<GeometryBatch_DE>::Create<
                                        math::OBB&, float&, eastl::vector_map<int, FaceGroupRenderMasks> const*&,
                                        unsigned int, GeometryBatchInstance&>(local_d8, *((local_198 + 4)), local_178,
                                                                              local_168, *pDVar18);
                                    DVar19 = local_140;
                                    *(uint8_t*)&pGVar14->field_144 = (char)DVar17 & 1;
                                    *(uint8_t*)((long)&pGVar14->field_144 + 1) = bVar3 & 1;
                                    local_168.unique_ptr<true, void>(pGVar14);
                                    rt7Core.AddDrawable(drawableSortKey, *DVar19, &local_168,
                                                        (DrawableGroupType)local_180, local_168._12_4_);
                                    plVar10 = local_1c8;
                                    pDVar11 = pDVar11 + 3;
                                } while (pDVar11 != local_1c0);
                            }
                            pDVar18 = local_130;
                            DVar19 = (DrawableSortKey)effectManager;
                            arg5 = (vector_map<int, FaceGroupRenderMasks>*)local_1b0;
                        }
                    }
                    break;
                case 9:
                    this_00 = (QueryPass*)*plVar10;
                    iVar5 = this_00->GetMode();
                    if ((iVar5 != 0) && (((((ForwardLightingPass::m_DrawOpaque != '\0' && (local_124 == 0)) ||
                                            ((puVar16 = (unsigned int*)&ForwardLightingPass::m_DrawAlphaTested,
                                              ForwardLightingPass::m_DrawAlphaTested != '\0' && (local_124 == 1)))) ||
                                           ((puVar16 = (unsigned int*)&ForwardLightingPass::m_DrawAlphaBlended,
                                             ForwardLightingPass::m_DrawAlphaBlended != '\0' && (local_124 == 2)))) &&
                                          (((ForwardLightingPass::m_DrawRT5Materials != '\0' &&
                                             (cVar2 = local_138->GetOption(0), !cVar2)) ||
                                            ((ForwardLightingPass::m_DrawRT7Materials != '\0' &&
                                              (cVar2 = local_138->GetOption(0), cVar2)))))))) {
                        psVar12 = (shared_ptr*)(*(Model**)&pDVar18->field_656)->GetGeometryQuery();
                        cVar2 = shared_ptr::operator_cast_to_bool(psVar12);
                        if (!cVar2) {
                            cVar2 = local_138->GetOption(13);
                            if (!cVar2) {
                                bVar3 = 0;
                            } else {
                                bVar3 = ((QueryPass*)sceneViewData.GetQueryPass())->IsDistanceCulled(local_128);
                                bVar3 = bVar3 ^ 1;
                            }
                            pDVar18 = local_130;
                            local_168._12_4_ =
                                (uint32_t)((((uint64_t)((int64_t)((unsigned long)puVar16 >> 8)) << 8) | (uint8_t)1));
                            DVar17 = local_124;
                            if ((bVar3 != 0) && (QueryPass::m_enablePreciseCulling != '\0')) {
                                aabb = (AABB*)GetAABB((GeometryBatchInstance*)local_130);
                                local_d8 = math::AABB(*aabb);
                                matrix44 =
                                    (Matrix44T<float>*)GetMaterial(*(GeometryBatchInstance**)&pDVar18->field_656);
                                local_d8.Transform(*matrix44);
                                DVar19 = (DrawableSortKey)effectManager;
                                cVar2 = local_1b8->TestIntersection(local_d8);
                                bVar3 = cVar2;
                                DVar17 = local_124;
                            }
                        } else {
                            if (QueryPass::m_DrawQueryTests == '\0')
                                break;
                            bVar3 = 1;
                            local_168._12_4_ = 0;
                            DVar17 = 9;
                        }
                        local_124 = DVar17;
                        if (bVar3 != 0) {
                            cVar2 = this_00->GetEnabledDrawGroup(DVar17);
                            uVar4 = drawableSortKey._4_4_;
                            if (cVar2) {
                                if (DVar17 != 9) {
                                    iVar5 = this_00->GetMode();
                                    uVar4 = drawableSortKey._4_4_;
                                    if (iVar5 != 1)
                                        goto LAB_1008133f4;
                                }
                                pCVar13 = rt7Core.GetDrawableGroup(9, local_124);
                                DVar6 = pCVar13->GetPos();
                                pDVar18 = local_130;
                                drawableSortKey._4_4_ = uVar4;
                                drawableSortKey._0_4_ = local_144;
                                in_stack_fffffffffffffe08 = 9;
                                in_stack_fffffffffffffe00 = (DrawableSortKey)local_198._8_8_;
                                UpdateGeometryPassEffect((GeometryBatchInstance*)local_130, &local_140, DVar6,
                                                         (RenderPassEffect*)local_188, (RT7Core*)sceneViewData,
                                                         (EffectManager*)arg5, arg6_04, local_128, (uint8_t)local_144,
                                                         (TextureInclusionMode*)local_198._8_8_, 9);
                                uVar7 = 4;
                                if (local_168._12_1_ == '\0') {
                                    uVar7 = GetLodLevel((GeometryBatchInstance*)pDVar18, 0);
                                }
                                local_120[0] = uVar7;
                                pGVar14 = DrawableElementPool<GeometryBatch_DE>::Create<
                                    math::OBB&, float&, eastl::vector_map<int, FaceGroupRenderMasks> const*&,
                                    unsigned int&, GeometryBatchInstance&>(local_88, local_128, local_178, *local_120,
                                                                           *pDVar18);
                                psVar12 = (shared_ptr*)(*(Model**)&pDVar18->field_656)->GetGeometryQuery();
                                cVar2 = shared_ptr::operator_cast_to_bool(psVar12);
                                if (cVar2) {
                                    pGVar15 = (GeometryQuery*)(*psVar12).operator->();
                                    cVar2 = pGVar15->IsValid();
                                    if (cVar2) {
                                        pGVar15 = (GeometryQuery*)(*psVar12).operator->();
                                        auVar21 = pGVar15->GetQueryInstance(local_1a8);
                                        *(uint8_t(*)[12]) & pGVar14->field_128 = auVar21;
                                    }
                                }
                                DVar19 = local_140;
                                local_d8.unique_ptr<true, void>(pGVar14);
                                rt7Core.AddDrawable(drawableSortKey, *DVar19, &local_d8, (DrawableGroupType)local_180,
                                                    local_124);
                                pDVar18 = local_130;
                                DVar19 = (DrawableSortKey)effectManager;
                                break;
                            }
                        }
                    LAB_1008133f4:
                        pDVar18 = local_130;
                    }
                    break;
                case 12:
                case 14:
                    break;
                }
                plVar10 = plVar10 + 1;
            } while (plVar10 != (long*)local_1d4._4_8_);
        }
    LAB_100812602:
    }

    // 0x1008134c0
    void GeometryBatchInstance::GetRenderingCameraDistances(float& arg1, float& arg2, float& arg3, math::OBB& obb,
                                                            bool arg5, const SceneViewData& sceneViewData) {
        AABB* aABB;
        uint64_t in_register_00000081;
        float in_XMM1_Da;
        NXTPixToolkit* in_stack_00000008;
        uint64_t local_60[2];

        OBB* obb_00 = (OBB*)(((uint64_t)in_register_00000081 << 8) | (uint8_t)arg5);
        float* local_50 = arg3;
        if ((int)sceneViewData == 0) {
            aABB = (AABB*)GetAABB((GeometryBatchInstance*)arg1);
        } else {
            aABB = (AABB*)(*(NXTPixToolkit**)(arg1 + 164))->GetScreen();
        }
        aABB->GetOBB(*obb_00);
        auto pMVar1 = GetMaterial(*(GeometryBatchInstance**)(arg1 + 164));
        obb_00->Transform(*pMVar1);
        AABB local_88;
        obb_00->GetMinimumEnclosingAABB(local_88);
        arg2 = 3.4028235e+38;
        auto pVVar2 = in_stack_00000008->SSOBeginPtr();
        local_60[0] = local_88.GetFurthestPoint(*pVVar2);
        pVVar2 = (Vector3T<float>*)in_stack_00000008->SSOBeginPtr();
        uint64_t local_40 = *local_60 - *pVVar2;
        float local_38 = in_XMM1_Da;
        float fVar3 = (float)local_40.LengthSq();
        obb.field_0 = fVar3;
        unsigned int arg1_00 = 0;
        do {
            local_40 = local_88.GetCornerPos(arg1_00);
            local_38 = in_XMM1_Da;
            pMVar1 = (Matrix44T<float>*)in_stack_00000008->GetScreen();
            in_XMM1_Da = (float)DstFromCameraPlaneUnclamped((Vector3T<float>*)&local_40, pMVar1);
            fVar3 = (float)eastl::min<float>(arg2, in_XMM1_Da);
            arg2 = fVar3;
            arg1_00 = arg1_00 + 1;
        } while (arg1_00 != 8);
        fVar3 = (float)eastl::max_alt(0.0, fVar3);
        *local_50 = fVar3;
    }

    // 0x100813a20
    void GeometryBatchInstance::RenderDebug(RenderPassType renderPassType, DrawableElement& drawableElement) const {
        OBB* this_00;
        Layout* this_01;
        AABB* aabb;
        Matrix44T<float>* pMVar1;
        long* plVar2;
        int arg1;
        uint8_t local_90[8];

        if (((m_showWorldAABB != '\0') || (m_showWorldOBB != '\0')) && (renderPassType == 4)) {
            this_01 = (Layout*)(*field_24).operator->();
            aabb = (AABB*)this_01->SSOBeginPtr();
            if (m_showWorldAABB != '\0') {
                new ((local_90 + 8)) math::AABB(*aabb);
                pMVar1 = (Matrix44T<float>*)GetMaterial((GeometryBatchInstance*)field_656);
                ((local_90 + 8))->Transform(*pMVar1);
                plVar2 = DebugPrimitiveCollectorBasic::GetCollector("");
                if (plVar2 != nullptr) {
                    new (local_90) oldscape::sidebars::SideBarData(
                        -(unsigned int)(*(long*)&drawableElement.field_104 == 0) | 4294934783,
                        m_renderDepthEnabled ^ 3);
                    (**(void (**)(...))(*plVar2 + 72))(plVar2, local_90 + 8, (SideBarData*)local_90);
                }
            }
            if (m_showWorldOBB != '\0') {
                this_00 = (OBB*)(local_90 + 8);
                new (this_00) math::OBB();
                aabb->GetOBB(*this_00);
                pMVar1 = (Matrix44T<float>*)GetMaterial((GeometryBatchInstance*)field_656);
                this_00->Transform(*pMVar1);
                plVar2 = DebugPrimitiveCollectorBasic::GetCollector("");
                if (plVar2 != nullptr) {
                    arg1 = -6250432;
                    if (*(long*)&drawableElement.field_104 == 0) {
                        arg1 = -6250241;
                    }
                    new (local_90) oldscape::sidebars::SideBarData(arg1, m_renderDepthEnabled ^ 3);
                    (**(void (**)(...))(*plVar2 + 80))(plVar2, local_90 + 8, (SideBarData*)local_90);
                }
            }
        }
    }

    // 0x100813bb0
    void GeometryBatchInstance::Prefetch() const {

        if (!(is_aligned<char>((unsigned long)this, 64))) {
            LogAssert("is_aligned(pData, 64)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/core/memory/Utils.h", 56,
                      nullptr);
        }
        if (!(is_aligned<char>((unsigned long)(m_material + 16), 64))) {
            LogAssert("is_aligned(pData, 64)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/core/memory/Utils.h", 56,
                      nullptr);
        }
    }

} // namespace jag::graphics
