// libs/oldscape/jagex3/dash3d/RSevenModelLitRenderer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "RSevenModelLitRenderer.h"

namespace jag::oldscape::dash3d {
    // 0x10011c9a0: RSevenModelLitRenderer::ActiveModel::~ActiveModel() has the same machine code as ModelAppender::~ModelAppender()

    // 0x10012a760: RSevenModelLitRenderer::ActiveModel::~ActiveModel() has the same machine code as eastl::pair<Font const, shared_ptr<jstring::PixfontGeneric>>::~pair()

    // 0x1002efc60
    void RSevenModelLitRenderer::SetSpritesJs5(jagex3::Js5* js5) {
        m_pSpritesJs5 = js5;
    }

    // 0x1002efc70
    void RSevenModelLitRenderer::ResetMap() {
        ReturnValue local_30;

        auto plVar1 = OSRenderCore_AudioThread::Instance();
        ((Layout*)((long)plVar1 + *(long*)(*plVar1 - 24)))->HeapBeginPtr();
        shared_ptr<RenderState::ModelSubmissionRSeven>* this_00 = (shared_ptr<RenderState::ModelSubmissionRSeven>*)
            eastl::fixed_vector<shared_ptr<RenderState::ModelSubmissionRSeven>, 32768ul>::push_back();
        make_shared<RenderState::ModelSubmissionRSeven>(&local_30);
        *this_00 = local_30;
        long lVar2 = (*this_00).operator->();
        *(uint64_t*)(lVar2 + 128) = 18446744073709551615;
        lVar2 = (*this_00).operator->();
        *(uint32_t*)(lVar2 + 156) = 1;
        field_16.clear();
        field_72.clear();
    }

    // 0x1002efe00
    void RSevenModelLitRenderer::OnFinishRebuild() {}

    // 0x1002efe10
    void RSevenModelLitRenderer::OnBeginWorldRender(world* world) {
        field_200 = SystemTimer::GetTimeNS<std::chrono::steady_clock>();
        MousePickingHelper::SetupPickingHelper(field_224);
        field_8 = world;
        field_160.clear();
    }

    // 0x1002efe50
    void RSevenModelLitRenderer::SubmitModel(ModelSource& modelSource, int arg2, int arg3, int arg4, int arg5, int arg6,
                                             int arg7, long long arg8, ModelTypecodeType modelTypecodeType,
                                             const EntityHighlight& entityHighlight, int arg11) {
        uint32_t in_register_00000014;
        long long local_90[3];

        ModelLitRenderer_lastModelLitWorldRenderTotal = ModelLitRenderer_lastModelLitWorldRenderTotal + 1;
        uint64_t local_50 = (((uint64_t)in_register_00000014 << 32) | (uint32_t)arg2);
        local_90[0] = arg8;
        int local_74 = arg3;
        int local_38 = arg4;
        int local_34 = arg5;
        (modelSource._vptr[3]._dtor)(modelSource, local_90);
    }

    // 0x1002f0700
    uint8_t operator!=(const EntityHighlight& entityHighlight1, const EntityHighlight& entityHighlight2) {
        return entityHighlight1 == entityHighlight2 ^ 1;
    }

    // 0x1002f0720
    void RSevenModelLitRenderer::ResolveAndSendToRenderThread(
        const ModelRSevenLit& modelRSevenLit, shared_ptr<RenderState::ModelSubmissionRSeven>& modelSubmissionRSeven,
        int arg3, int arg4, int arg5, int arg6, int arg7, long long arg8, long long arg9,
        const EntityHighlight& entityHighlight) {
        auto plVar1 = OSRenderCore_AudioThread::Instance();
        long lVar2 = ((Layout*)((long)plVar1 + *(long*)(*plVar1 - 24)))->HeapBeginPtr();
        ResolveAndUpdateSubmission(modelRSevenLit, modelSubmissionRSeven, arg3, arg4, arg5, arg6, arg7, arg8, arg9,
                                   entityHighlight);
        ((lVar2 + 17563848))->push_back(modelSubmissionRSeven);
    }

    // 0x1002f07c0
    void RSevenModelLitRenderer::TestModelMouseIntersection(const RSevenModelLitRenderer::ActiveModel& activeModel) {
        long lVar3;
        shared_ptr<midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        ModelSubmissionRSeven* modelSubmissionRSeven;
        shared_ptr<jag::graphics::Model>* this_00;
        NXTPixToolkit* this_01;
        AABB* aabb;
        Vector3T<float>* vector31;
        Vector3T<float>* vector32;
        uint8_t local_d8[32];
        AABB local_b8;
        Vector3T<int>* local_70;
        unsigned int local_68;
        Vector3T<float> local_60;
        ResolvedModel* local_48;
        Vector3T<int> local_40;
        int local_38[2];

        uint8_t* puVar4 = &activeModel.field_8;
        if (puVar4->operator_cast_to_bool()) {
            lVar3 = (*puVar4).operator->();
            midiPlayerMainThread = (shared_ptr<midi2::MidiPlayerMainThread>*)((lVar3 + 16))->GetModel();
            if (*midiPlayerMainThread != nullptr) {
                if (puVar4->operator_cast_to_bool()) {
                    modelSubmissionRSeven = (ModelSubmissionRSeven*)**puVar4;
                    if (MousePickingHelper::IsMousePickingEnabled()) {
                        if (MousePickingHelper::IsActiveEntityTypecode(
                                *(long long*)&modelSubmissionRSeven->field_136)) {
                            puVar4 = modelSubmissionRSeven->field_16;
                            this_00 = (shared_ptr<jag::graphics::Model>*)puVar4->GetModel();
                            this_01 = (NXTPixToolkit*)(*this_00).operator->();
                            aabb = (AABB*)this_01->GetScreen();
                            new (local_d8) jag::math::AABB(*aabb);
                            local_48 = (ResolvedModel*)puVar4;
                            local_b8 = puVar4->GetLocalTransform();
                            local_d8->Transform(local_b8);
                            local_b8[0]._0_8_ = local_d8->GetCentrePos();
                            local_70.Vector3T<float>(local_b8);
                            vector31 = (Vector3T<float>*)local_d8->GetScreen();
                            vector32 = (Vector3T<float>*)local_d8->SSOBeginPtr();
                            local_60._0_8_ = *vector31 - *vector32;
                            local_b8[0]._0_8_ = *0.5 * local_60;
                            local_40.Vector3T<float>(local_b8);
                            MousePickingHelper::AdjustAABBRadiiForPicking(local_40, *local_38,
                                                                          (bool)activeModel.field_28);
                            local_b8 = ModelLit::AABB(local_70, (Vector3T<int>*)(unsigned long)local_68);
                            if (MousePickingHelper::IsMouseIntersectingModelAABB(
                                    local_b8, *(int*)&modelSubmissionRSeven->field_144,
                                    *(int*)&modelSubmissionRSeven->field_148, *(int*)&modelSubmissionRSeven->field_152,
                                    false)) {
                                if (MousePickingHelper::IsAABBWithinMaxViewDistanceFromCamera(
                                        local_b8, *(int*)&modelSubmissionRSeven->field_144,
                                        *(int*)&modelSubmissionRSeven->field_152)) {
                                    if (activeModel.field_28 == '\0') {
                                        TestModelMouseIntersectionFine(*local_48, *modelSubmissionRSeven);
                                    } else {
                                        MousePickingHelper::AddPickingEntity(
                                            *(long long*)&modelSubmissionRSeven->field_136);
                                    }
                                }
                            }
                        }
                    }
                }
                return;
            }
        }
        LogAssert("queued.m_lastSubmission && (queued.m_lastSubmission->m_model.GetModel() != nullptr)",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                  "RSevenModelLitRenderer.cpp",
                  554, nullptr);
    }

    // 0x1002f0b40
    void RSevenModelLitRenderer::SubmitTileHighlight(int arg1, int arg2, int arg3,
                                                     const EntityHighlight& entityHighlight) {
        uint8_t* this_00;
        uint8_t uVar1;
        uint8_t bVar2;
        long lVar4;
        shared_ptr<GroundDecor>* groundDecor;
        long* plVar5;
        ModelRSevenLit* modelRSevenLit;
        RSevenModelLitRenderer* pRVar6;
        int iVar7;
        uint8_t local_e8[16];
        uint8_t local_d8[88];
        ReturnValue local_80;
        ReturnValue local_68;
        unsigned long local_58;
        EntityHighlight local_40;

        bool cVar3 = entityHighlight.HasTileHighlight();
        if (cVar3) {
            if (field_8 == nullptr) {
                LogAssert("m_worldCurrentlyRendering",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                          "dash3d/RSevenModelLitRenderer.cpp",
                          301, nullptr);
            }
            local_40.field_8 = entityHighlight.field_8;
            local_40.field_9 = entityHighlight.field_9;
            local_40.m_colour = entityHighlight.m_colour;
            local_40.field_2 = entityHighlight.field_2;
            local_40.field_4 = entityHighlight.field_4;
            local_40._5_1_ = entityHighlight.field_5;
            local_40.field_6 = entityHighlight.field_6;
            local_40._7_1_ = entityHighlight.field_7;
            local_40.TransferTileOptionsToModel();
            local_40._8_2_ = local_40._8_2_ | 1024;
            uVar1 = local_40._5_1_;
            bVar2 = local_40.field_6;
            local_58 = (long)arg2 | (long)arg1 << 16 | 14987979559889010688U | (unsigned long)local_40.field_6 << 32 |
                       (unsigned long)(uint8_t)local_40._5_1_ << 40 | (unsigned long)(unsigned int)arg3 << 48;
            this_00 = &field_16;
            local_d8._80_8_ = (unsigned long)(unsigned int)arg3;
            local_68 = this_00->find(local_58);
            *local_d8 = this_00->end();
            cVar3 = local_68 != *local_d8;
            if (!cVar3) {
                local_d8._16_8_ = 0;
                local_d8._24_8_ = 0;
                local_d8._0_8_ = (ReturnValue)0;
                local_d8._8_4_ = 0;
                local_d8._12_4_ = 0;
                new (local_d8)
                    ResourceList<unsigned long long, render::Texture,
                                 eastl::map<unsigned long long, shared_ptr<render::Texture>>>::AddResourceResult();
                local_80 = this_00->emplace<long long&, RSevenModelLitRenderer::ActiveModel>(local_58, *local_d8);
                local_68[0] = local_80[0];
                local_68[1] = local_80[1];
                pRVar6 = this;
            } else {
                lVar4 = local_68.HeapBeginPtr();
                cVar3 = ((lVar4 + 16))->operator_cast_to_bool();
                pRVar6 = this;
                if (cVar3) {
                    lVar4 = local_68.HeapBeginPtr();
                    lVar4 = (*((lVar4 + 16))).operator->();
                    cVar3 = (*((lVar4 + 166))) == local_40;
                    if (cVar3) {
                        iVar7 = pRVar6->field_208;
                        lVar4 = local_68.HeapBeginPtr();
                        *(int*)(lVar4 + 32) = iVar7;
                        return;
                    }
                }
            }
            lVar4 = local_68.HeapBeginPtr();
            *(int*)(lVar4 + 32) = pRVar6->field_208;
            *(uint64_t*)(lVar4 + 8) = 0;
            new (local_e8) GridRect(arg1, arg2, (unsigned int)(uint8_t)uVar1 << 7, (unsigned int)bVar2 << 7);
            iVar7 = local_d8._80_4_;
            new (local_d8) TileHighlightGenerator(local_e8, iVar7, *pRVar6->field_8);
            groundDecor = (shared_ptr<GroundDecor>*)local_d8->Generate();
            local_80 = shared_ptr(groundDecor);
            plVar5 = (long*)local_80.operator->();
            pRVar6 = this;
            cVar3 = (**(void (**)(...))(*plVar5 + 56))(plVar5);
            if (!cVar3) {
                LogAssert("modelForHighlight->IsForRSeven()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                          "dash3d/RSevenModelLitRenderer.cpp",
                          327, nullptr);
            }
            modelRSevenLit = (ModelRSevenLit*)*local_80;
            ResolveAndSendToRenderThread(pRVar6, modelRSevenLit,
                                         (shared_ptr<RenderState::ModelSubmissionRSeven>*)(lVar4 + 16), 0, iVar7, 0, 0,
                                         0, 0, local_58, &local_40);
        }
    }

    // 0x1002f0e50
    void RSevenModelLitRenderer::SubmitLightSource(PointLightSource& pointLightSource, int arg2, int arg3, int arg4,
                                                   long long arg5, int arg6) {
        PointLight* pointLight;
        PointLight* pointLight;
        uint32_t in_register_00000034;
        uint32_t in_register_0000008c;
        uint32_t in_stack_00000008;
        ColourHSL local_60;
        shared_ptr local_50;
        uint64_t local_40;

        long* plVar2 = (long*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg2);
        (**(void (**)(...))*plVar2)(&local_50, plVar2, in_stack_00000008);
        if (shared_ptr::operator_cast_to_bool(&local_50) != '\0') {
            local_40 = (((uint64_t)in_register_0000008c << 32) | (uint32_t)arg6);
            (**(void (**)(...))(*plVar2 + 8))(plVar2, &local_40);
            plVar2 = (long*)OSRenderCore_AudioThread::Instance();
            ((Layout*)((long)plVar2 + *(long*)(*plVar2 - 24)))->HeapBeginPtr();
            pointLight = (PointLight*)eastl::fixed_vector<RenderState::LightSubmissionRSeven, 255ul>::push_back();
            pointLight = (PointLight*)*local_50;
            *pointLight = *pointLight;
            local_60 = jag::math::ColourHSL((float)arg3, (float)arg4, (float)(int)arg5);
            *pointLight += local_60;
            pointLight->field_4 = pointLight->field_4 ^ 2147483648;
            pointLight[1].field_4 = (uint32_t)local_40;
            pointLight[1].field_8 = local_40._4_4_;
            ((pointLightSource + 20))->push_back(*pointLight);
        }
    }

    // 0x1002f1070
    void RSevenModelLitRenderer::ResolveAndUpdateSubmission(
        const ModelRSevenLit& modelRSevenLit, shared_ptr<RenderState::ModelSubmissionRSeven>& modelSubmissionRSeven,
        int arg3, int arg4, int arg5, int arg6, int arg7, long long arg8, long long arg9,
        const EntityHighlight& entityHighlight) {
        shared_ptr<jag::graphics::Model>* this_03;
        Model* model;
        ReturnValue local_58;

        OperationBuffer* this_00 = modelRSevenLit.field_24->GetOperationBuffer();
        OperationBuffer* pOVar4 = nullptr;
        if (modelSubmissionRSeven != nullptr) {
            pOVar4 = (OperationBuffer*)modelSubmissionRSeven.operator->();
        }
        auto this_01 = this_00->Resolve(pOVar4);
        auto psVar5 = this_01->GetModel();
        if (!(*psVar5 != nullptr)) {
            LogAssert("model.GetModel() != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "RSevenModelLitRenderer.cpp",
                      270, nullptr);
        }
        auto this_02 = this_01->TryGetUploadableModel();
        if (shared_ptr::operator_cast_to_bool(this_02) == '\0') {
            this_03 = (shared_ptr<jag::graphics::Model>*)this_01->GetUploadableModel();
            model = (Model*)**this_03;
            UploadModelTextures(*model);
        }
        make_shared<RenderState::ModelSubmissionRSeven>(&local_58);
        modelSubmissionRSeven = local_58;
        pOVar4 = (OperationBuffer*)modelSubmissionRSeven;
        *pOVar4 = *this_00;
        (*((pOVar4 + 1))) = *this_01;
        psVar5 = (shared_ptr<midi2::MidiPlayerMainThread>*)((pOVar4 + 1))->GetModel();
        if (!(*psVar5 != nullptr)) {
            LogAssert("submission.m_model.GetModel() != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "RSevenModelLitRenderer.cpp",
                      282, nullptr);
        }
        uint8_t uVar3 = modelRSevenLit.field_24->OverrideTransform();
        *(uint8_t*)((long)&pOVar4[10].field_0 + 4) = uVar3;
        *(int*)((long)&pOVar4[9].field_8 + 4) = arg3;
        *(int*)&pOVar4[10].field_0 = arg4;
        *(int*)&pOVar4[9].field_0 = arg5;
        *(int*)((long)&pOVar4[9].field_0 + 4) = arg6;
        *(int*)&pOVar4[9].field_8 = arg7;
        pOVar4[8].field_8 = arg8;
        pOVar4[8].field_0 = (ref_counter_base*)arg9;
        *(uint64_t*)((long)&pOVar4[10].field_0 + 6) = *(uint64_t*)entityHighlight;
        *(uint16_t*)((long)&pOVar4[10].field_8 + 6) = *(uint16_t*)&entityHighlight.field_8;
    }

    // 0x1002f1260
    void RSevenModelLitRenderer::UploadModelTextures(const jag::graphics::Model& model) {
        int iVar1;
        bool bVar2;
        int* piVar5;
        uint64_t* puVar6;
        long lVar7;
        int* piVar8;
        uint8_t* puVar9;
        hashtable<int, eastl::pair<int const, shared_ptr<ChatLine>>, eastl::allocator,
                  eastl::use_first<eastl::pair<int const, shared_ptr<ChatLine>>>, eastl::equal_to<int>,
                  eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy,
                  false, true, true>* this_03;
        ReturnValue local_2d0;
        shared_ptr<RSevenDebugPresetProvider> local_2b8;
        ReturnValue local_2a8;
        int* local_290;
        int* local_288;
        unique_ptr<jag::graphics::GeometryBatchInstance,
                   MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>* local_280;
        int local_264;
        fixed_vector<int, 128ul> local_260;

        auto plVar4 = OSRenderCore_AudioThread::Instance();
        hashtable<int, eastl::pair<int const, shared_ptr<ChatLine>>, eastl::allocator,
                  eastl::use_first<eastl::pair<int const, shared_ptr<ChatLine>>>, eastl::equal_to<int>,
                  eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy,
                  false, true, true>* local_270 =
            (hashtable<int, eastl::pair<int const, shared_ptr<ChatLine>>, eastl::allocator,
                       eastl::use_first<eastl::pair<int const, shared_ptr<ChatLine>>>, eastl::equal_to<int>,
                       eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                       eastl::prime_rehash_policy, false, true, true>*)((Layout*)((long)plVar4 +
                                                                                  *(long*)(*plVar4 - 24)))
                ->HeapBeginPtr();
        auto this_00 = model.GetBatchList();
        auto this_01 = this_00->HeapBeginPtr();
        auto local_278 = this_00->end();
        if (this_01 != local_278) {
            local_270 = local_270 + 18104544;
            do {
                local_260 = eastl::fixed_vector<int, 128ul>();
                local_280 = this_01;
                ((GeometryBatchInstance*)(*this_01).operator->())->BuildMaterialIDListFromSource(local_260);
                piVar5 = (int*)local_260.HeapBeginPtr();
                local_288 = (int*)local_260.end();
                this_03 = local_270;
                if (piVar5 != local_288) {
                    do {
                        iVar1 = *piVar5;
                        if (iVar1 != -1) {
                            puVar6 =
                                (uint64_t*)(*((shared_ptr<TextureProvider>*)&Pix3D::m_textureProvider)).operator->();
                            (**(void (**)(...))*puVar6)(&local_2b8, puVar6, iVar1);
                            bVar2 = local_2b8 != nullptr;
                            local_290 = piVar5;
                            if (bVar2) {
                                lVar7 = local_2b8.operator->();
                                piVar5 = (int*)((lVar7 + 56))->data();
                                piVar8 = (int*)((lVar7 + 56))->end();
                                for (; piVar5 != piVar8; piVar5 = piVar5 + 1) {
                                    local_264 = *piVar5;
                                    local_2d0 = this_03->find(local_264);
                                    local_2a8 = this_03->end();
                                    if (local_2d0 == local_2a8 != '\0') {
                                        local_2a8 = shared_ptr();
                                        puVar9 = (uint8_t*)m_pSpritesJs5->GetFile(local_2a8, local_264);
                                        if (puVar9 != DataStatus::READY) {
                                            LogAssert(
                                                "e == DataStatus::READY",
                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                                "oldscape/jagex3/dash3d/RSevenModelLitRenderer.cpp",
                                                538, nullptr);
                                        }
                                        if (puVar9 == DataStatus::READY) {
                                            eastl::hashtable<
                                                int, eastl::pair<int const, shared_ptr<PacketJ<Array<unsigned char>>>>,
                                                eastl::allocator,
                                                eastl::use_first<
                                                    eastl::pair<int const, shared_ptr<PacketJ<Array<unsigned char>>>>>,
                                                eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                                eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                                true>::emplace<int&,
                                                               shared_ptr<PacketJ<Array<unsigned char>>>>(
                                                &local_2d0,
                                                (hashtable<
                                                    int,
                                                    eastl::pair<int const, shared_ptr<PacketJ<Array<unsigned char>>>>,
                                                    eastl::allocator,
                                                    eastl::use_first<eastl::pair<
                                                        int const, shared_ptr<PacketJ<Array<unsigned char>>>>>,
                                                    eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                                    eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                                    true>*)local_270,
                                                &local_264, &local_2a8);
                                        }
                                    }
                                    this_03 = local_270;
                                }
                            }
                            piVar5 = local_290;
                        }
                        piVar5 = piVar5 + 1;
                    } while (piVar5 != local_288);
                }
                this_01 = local_280 + 8;
            } while (this_01 != local_278);
        }
    }

    // 0x1002f1740
    void RSevenModelLitRenderer::OnEndWorldRender() {
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_00;
        uint64_t uVar3;
        hashtable<long long, eastl::pair<long long const, RSevenModelLitRenderer::ActiveStaticBatch>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, RSevenModelLitRenderer::ActiveStaticBatch>>,
                  eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                  eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>* phVar4;
        shared_ptr<RenderState::ModelSubmissionRSeven>* psVar10;
        uint64_t* puVar11;
        long lVar12;
        long long* plVar13;
        NXTPixToolkit* pNVar14;
        ModelRSevenLit* modelRSevenLit;
        OperationBuffer* pOVar15;
        shared_ptr<jag::graphics::Model>* this_01;
        AABB* aabb;
        long lVar16;
        vector<std::unique_ptr<jag::graphics::GeometryBatchInstance,
                               MakeUniquePool<jag::graphics::GeometryBatchInstance, _3072>::UniquePoolDeleter>>*
            geometryBatchInstances;
        ResolvedModel* this_02;
        NXTRenderer** this_03;
        hashtable_iterator<eastl::pair<long long const, RSevenModelLitRenderer::ActiveModel>, true, false>*
            local_1d0[2];
        hashtable_iterator<eastl::pair<long long const, RSevenModelLitRenderer::ActiveStaticBatch>, true, false>*
            local_1c0[2];
        long long local_1a0;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* local_198;
        PickingHelper* local_190;
        ReturnValue local_188;
        EntityHighlight local_178;
        uint8_t local_168[40];
        NXTPixToolkit* local_118;
        ResolvedModel* local_110;

        int iVar18 = field_208;
        auto plVar8 = OSRenderCore_AudioThread::Instance();
        long lVar9 = ((Layout*)((long)plVar8 + *(long*)(*plVar8 - 24)))->HeapBeginPtr();
        DeleteUnusedOverlays();
        uint8_t* puVar1 = &field_16;
        ModelRSevenLit local_108 = puVar1->end();
        local_168._32_8_ = puVar1;
        *local_168 = puVar1->begin();
        long local_140 = lVar9 + 17563848;
        hashtable<long long, eastl::pair<long long const, RSevenModelLitRenderer::ActiveStaticBatch>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, RSevenModelLitRenderer::ActiveStaticBatch>>,
                  eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                  eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>* local_128 =
            (hashtable<long long, eastl::pair<long long const, RSevenModelLitRenderer::ActiveStaticBatch>,
                       eastl::allocator,
                       eastl::use_first<eastl::pair<long long const, RSevenModelLitRenderer::ActiveStaticBatch>>,
                       eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                       eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)&field_72;
        RSevenModelLitRenderer* local_120 = this;
        bool cVar6 = *local_168 != local_108;
        if (cVar6) {
            local_110 = (ResolvedModel*)(((uint64_t)local_110._4_4_ << 32) | (uint32_t)iVar18);
            do {
                lVar9 = local_168->HeapBeginPtr();
                if (*(int*)(lVar9 + 32) == iVar18) {
                    ++*local_168;
                } else {
                    psVar10 = (shared_ptr<RenderState::ModelSubmissionRSeven>*)
                        eastl::fixed_vector<shared_ptr<RenderState::ModelSubmissionRSeven>, 32768ul>::push_back();
                    make_shared<RenderState::ModelSubmissionRSeven>(&local_1b0);
                    *psVar10 = local_1b0;
                    puVar11 = (uint64_t*)local_168->HeapBeginPtr();
                    uVar3 = *puVar11;
                    lVar12 = (*psVar10).operator->();
                    phVar4 = local_128;
                    *(uint64_t*)(lVar12 + 128) = uVar3;
                    iVar18 = (int)local_110;
                    if (*(long*)(lVar9 + 8) != 0) {
                        local_1b0 = local_128->find(*((lVar9 + 8)));
                        local_138 = phVar4->end();
                        cVar6 = local_1b0 != local_138;
                        if (cVar6) {
                            lVar9 = local_1b0.HeapBeginPtr();
                            plVar13 = (long long*)local_168->HeapBeginPtr();
                            lVar9 = ((lVar9 + 40))->erase(*plVar13);
                            if (lVar9 == 0) {
                                LogAssert("nRemoved > 0",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                          "oldscape/jagex3/dash3d/RSevenModelLitRenderer.cpp",
                                          358, nullptr);
                            }
                            iVar18 = local_120->field_208;
                            lVar9 = local_1b0.HeapBeginPtr();
                            *(int*)(lVar9 + 96) = iVar18;
                        }
                        iVar18 = (int)local_110;
                    }
                    local_1b0 = eastl::hashtable_iterator(local_168);
                    ++*local_168;
                    new (local_1d0) eastl::hashtable_iterator(&local_1b0);
                    local_138 = local_168._32_8_->erase(local_1d0[0]);
                }
                cVar6 = *local_168 != local_108;
            } while (cVar6);
        }
        phVar4 = local_128;
        auto local_1b0 = local_128->end();
        auto local_138 = phVar4->begin();
        cVar6 = local_138 != local_1b0;
        if (cVar6) {
            local_190 = (PickingHelper*)&local_120->field_224;
            do {
                pNVar14 = (NXTPixToolkit*)local_138.HeapBeginPtr();
                puVar11 = (uint64_t*)local_138.HeapBeginPtr();
                local_110 = (ResolvedModel*)*puVar11;
                this_00 =
                    (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                               eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                               eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                               eastl::prime_rehash_policy, false, true, true>*)(pNVar14->m_screen + 24);
                lVar9 = this_00->size();
                if (lVar9 == 0) {
                    psVar10 = (shared_ptr<RenderState::ModelSubmissionRSeven>*)
                        eastl::fixed_vector<shared_ptr<RenderState::ModelSubmissionRSeven>, 32768ul>::push_back();
                    make_shared<RenderState::ModelSubmissionRSeven>((ReturnValue*)&local_108);
                    *psVar10 = local_108;
                    lVar9 = (*psVar10).operator->();
                    *(ResolvedModel**)(lVar9 + 128) = local_110;
                    local_108 = eastl::hashtable_iterator(&local_138);
                    ++local_138;
                    new (local_1c0) eastl::hashtable_iterator(&local_108);
                    *local_168 = local_128->erase(local_1c0[0]);
                } else {
                    if (*(int*)(pNVar14->m_screen + 80) == local_120->field_208) {
                        *(uint32_t*)(pNVar14->m_screen + 80) = 0;
                        local_188 = this_00->begin();
                        lVar9 = local_188.HeapBeginPtr();
                        ((lVar9 + 8))->end();
                        local_108.Copy();
                        this_03 = &pNVar14->field_8;
                        local_118 = pNVar14;
                        *this_03 = local_108;
                        plVar8 = (long*)(*this_03).operator->();
                        (**(void (**)(...))(*plVar8 + 64))(plVar8);
                        lVar9 = this_03->end();
                        lVar12 = local_188.HeapBeginPtr();
                        lVar12 = ((lVar12 + 8))->end();
                        if (lVar9 == lVar12) {
                            LogAssert("batch.m_combined.get() != iterModel->second.get()",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                      "jagex3/dash3d/RSevenModelLitRenderer.cpp",
                                      402, nullptr);
                        }
                        local_108 = StaticBatchAppendList(*this_00, true);
                        new (local_168) ModelAppender(*this_03, local_108);
                        local_178 = local_168->Resolve();
                        *this_03 = local_178;
                        puVar1 = local_118->m_screen;
                        ((puVar1 + 8))->reset();
                        local_178 = EntityHighlight();
                        modelRSevenLit = (ModelRSevenLit*)**this_03;
                        ResolveAndSendToRenderThread(
                            local_120, modelRSevenLit, (shared_ptr<RenderState::ModelSubmissionRSeven>*)(puVar1 + 8), 0,
                            *(int*)(local_118->m_screen + 84), 0, 0, 0, 0, (long long)local_110, &local_178);
                        *local_168 = this_00->begin();
                        local_188[0] = (ReturnValue)local_168._0_8_;
                        local_188[1] = (ReturnValue)local_168._8_8_;
                        while (true) {
                            *local_168 = this_00->end();
                            cVar6 = local_188 != *local_168;
                            if (!cVar6)
                                break;
                            lVar9 = local_188.HeapBeginPtr();
                            lVar9 = *(*((lVar9 + 8)));
                            pOVar15 = ((lVar9 + 24))->GetOperationBuffer();
                            pOVar15->ClearCache();
                            ++local_188;
                        }
                        pOVar15 = modelRSevenLit->field_24->GetOperationBuffer();
                        pOVar15->ClearCache();
                        pNVar14 = local_118;
                    }
                    local_198 = this_00;
                    local_188 = this_00->end();
                    lVar9 = (*((pNVar14->m_screen + 8))).operator->();
                    this_02 = (ResolvedModel*)(lVar9 + 16);
                    this_01 = (shared_ptr<jag::graphics::Model>*)this_02->GetModel();
                    local_118 = (NXTPixToolkit*)**this_01;
                    aabb = (AABB*)local_118->GetScreen();
                    new (local_168) jag::math::AABB(*aabb);
                    local_110 = this_02;
                    local_108 = this_02->GetLocalTransform();
                    local_168->Transform(local_108);
                    if ((pNVar14->m_screen[88] != '\0') &&
                        (cVar6 = TestStaticAabbMouseIntersection((AABB*)local_168, true), cVar6)) {
                        local_178 = local_198->begin();
                        cVar6 = local_178 != local_188;
                        if (cVar6) {
                            iVar18 = 1;
                            do {
                                plVar13 = (long long*)local_178.HeapBeginPtr();
                                local_1a0 = *plVar13;
                                lVar9 = local_178.HeapBeginPtr();
                                lVar9 = *(*((lVar9 + 8)));
                                lVar12 = (local_168._32_8_->find(local_1a0)).HeapBeginPtr();
                                lVar16 = *(*((lVar12 + 16)));
                                cVar6 = MousePickingHelper::IsActiveEntityTypecode(*(long long*)(lVar16 + 136));
                                if (cVar6) {
                                    pOVar15 = ((lVar9 + 24))->GetOperationBuffer();
                                    local_108 = pOVar15->ResolveAABB();
                                    cVar6 = TestStaticAabbMouseIntersection((AABB*)&local_108, *(bool*)(lVar12 + 36));
                                    if (cVar6) {
                                        if (*(char*)(lVar12 + 36) == '\0') {
                                            local_108 = local_110->GetLocalTransform();
                                            geometryBatchInstances =
                                                (vector<
                                                    std::unique_ptr<jag::graphics::GeometryBatchInstance,
                                                                    MakeUniquePool<jag::graphics::GeometryBatchInstance,
                                                                                   _3072>::UniquePoolDeleter>>*)
                                                    local_118->GetBatchList();
                                            cVar6 = local_190->PickTest(local_108, *geometryBatchInstances, true, true,
                                                                        iVar18);
                                            if (!cVar6)
                                                goto LAB_1002f1dfc;
                                        }
                                        MousePickingHelper::AddPickingEntity(*(long long*)(lVar16 + 136));
                                    }
                                }
                            LAB_1002f1dfc:
                                ++local_178;
                                cVar6 = local_178 != local_188;
                                iVar18 = iVar18 + 1;
                            } while (cVar6);
                        }
                    }
                    ++local_138;
                }
                cVar6 = local_138 != local_1b0;
            } while (cVar6);
        }
        RSevenModelLitRenderer* pRVar5 = local_120;
        local_120->field_8 = nullptr;
        ModelLitRenderer_lastModelLitWorldRenderTotalNanos =
            SystemTimer::GetTimeNS<std::chrono::steady_clock>() - pRVar5->field_200;
        int* piVar2 = &pRVar5->field_208;
        *piVar2 = *piVar2 + 1;
        unsigned int uVar7 = jag::graphics::Model::GetNumExtant();
        ModelLitRenderer_lastCachedModelsTotal = (unsigned long)uVar7;
    }

    // 0x1002f2000
    void RSevenModelLitRenderer::DeleteUnusedOverlays() {
        unsigned long uVar2;
        unsigned long arg1;

        uint8_t* this_00 = &field_128;
        long lVar1 = this_00->size();
        if (lVar1 != 0) {
            arg1 = 0;
            do {
                lVar1 = (*this_00)[arg1];
                if (*(int*)(lVar1 + 48) != field_208) {
                    this_00->resize(arg1);
                }
                arg1 = arg1 + 1;
                uVar2 = this_00->size();
            } while (arg1 < uVar2);
        }
    }

    // 0x1002f21d0
    void RSevenModelLitRenderer::TestStaticAabbMouseIntersection(const jag::math::AABB& aabb, bool arg2) {
        Vector3T<float>* vector31;
        Vector3T<float>* vector32;
        uint64_t local_68[2];
        Vector3T<int> local_58;
        int local_50[2];
        AABB local_48;
        int local_30;
        uint32_t uStack_2c;
        unsigned int local_28;

        if (MousePickingHelper::IsMousePickingEnabled()) {
            local_48._0_8_ = aabb.GetCentrePos();
            local_30.Vector3T<float>(local_48);
            vector31 = (Vector3T<float>*)aabb.GetScreen();
            vector32 = (Vector3T<float>*)aabb.SSOBeginPtr();
            local_68[0] = *vector31 - *vector32;
            local_48._0_8_ = *0.5 * *local_68;
            local_58.Vector3T<float>(local_48);
            MousePickingHelper::AdjustAABBRadiiForPicking(local_58, *local_50, arg2);
            local_48 = ModelLit::AABB((Vector3T<int>*)(((uint64_t)uStack_2c << 32) | (uint32_t)local_30),
                                      (Vector3T<int>*)(unsigned long)local_28);
            if (MousePickingHelper::IsMouseIntersectingModelAABB(local_48, 0, 0, 0, false)) {
                if (MousePickingHelper::IsAABBWithinMaxViewDistanceFromCamera(local_48, local_30, local_28)) {
                    return 1;
                }
            }
        }
        return 0;
    }

    // 0x1002f2390
    void RSevenModelLitRenderer::DestroyResources() {
        long lVar2;
        OperationBuffer* pOVar3;
        shared_ptr* psVar5;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_48;

        uint8_t* puVar6 = &field_16;
        auto local_68 = puVar6->begin();
        hashtable<long long, eastl::pair<long long const, RSevenModelLitRenderer::ActiveModel>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, RSevenModelLitRenderer::ActiveModel>>,
                  eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                  eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>* local_38 =
            (hashtable<long long, eastl::pair<long long const, RSevenModelLitRenderer::ActiveModel>, eastl::allocator,
                       eastl::use_first<eastl::pair<long long const, RSevenModelLitRenderer::ActiveModel>>,
                       eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                       eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)puVar6;
        auto local_58 = puVar6->end();
        bool cVar1 = local_68 != local_58;
        if (cVar1) {
            do {
                lVar2 = local_68.HeapBeginPtr();
                psVar5 = (shared_ptr*)(lVar2 + 16);
                cVar1 = shared_ptr::operator_cast_to_bool(psVar5);
                if (cVar1) {
                    pOVar3 = (OperationBuffer*)(*psVar5).operator->();
                    pOVar3->ClearCache();
                    local_48 = shared_ptr();
                    *psVar5 = local_48;
                }
                ++local_68;
                cVar1 = local_68 != local_58;
            } while (cVar1);
        }
        puVar6 = &field_72;
        local_68 = puVar6->begin();
        local_58 = puVar6->end();
        cVar1 = local_68 != local_58;
        if (cVar1) {
            do {
                lVar2 = local_68.HeapBeginPtr();
                psVar5 = (shared_ptr*)(lVar2 + 24);
                cVar1 = shared_ptr::operator_cast_to_bool(psVar5);
                if (cVar1) {
                    pOVar3 = (OperationBuffer*)(*psVar5).operator->();
                    pOVar3->ClearCache();
                    local_48 = shared_ptr();
                    *psVar5 = local_48;
                }
                ++local_68;
                cVar1 = local_68 != local_58;
            } while (cVar1);
        }
        auto plVar4 = OSRenderCore_AudioThread::Instance();
        lVar2 = ((Layout*)((long)plVar4 + *(long*)(*plVar4 - 24)))->HeapBeginPtr();
        ((lVar2 + 17563848))->clear();
        local_38->clear();
        puVar6->clear();
    }

    // 0x1002f2570
    void RSevenModelLitRenderer::TestModelMouseIntersectionFine(
        const ResolvedModel& resolvedModel, const RenderState::ModelSubmissionRSeven& modelSubmissionRSeven) {
        shared_ptr<PoseStateRSeven>* poseStateRSeven;
        vector<std::unique_ptr<jag::graphics::GeometryBatchInstance,
                               MakeUniquePool<jag::graphics::GeometryBatchInstance, _3072>::UniquePoolDeleter>>*
            geometryBatchInstances;
        ReturnValue local_38;

        auto this_00 = resolvedModel.GetModel();
        auto pMVar2 = this_00->end();
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_48;
        if ((resolvedModel.GetAnimationState())->operator_cast_to_bool()) {
            local_38[0]._0_4_ = 2;
            make_shared<jag::graphics::Model, jag::graphics::Model const&, jag::graphics::ModelCopyType>(
                &local_88, pMVar2, &local_38);
            local_48 = local_88;
            pMVar2 = (Model*)local_48.operator->();
            poseStateRSeven = (shared_ptr<PoseStateRSeven>*)resolvedModel.GetAnimationState();
            make_shared<PoseStateProviderRSeven, shared_ptr<PoseStateRSeven> const&>(&local_38, poseStateRSeven);
            local_88.shared_ptr<FileRSevenDebugPresetProvider, void>(local_38);
            pMVar2->SetAnimationStateProvider(local_88);
            pMVar2 = (Model*)local_48.end();
        }
        auto local_88 = resolvedModel.GetWorldTransform(
            *(int*)&modelSubmissionRSeven.field_156, *(int*)&modelSubmissionRSeven.field_144,
            *(int*)&modelSubmissionRSeven.field_148, *(int*)&modelSubmissionRSeven.field_152);
        geometryBatchInstances =
            (vector<std::unique_ptr<jag::graphics::GeometryBatchInstance,
                                    MakeUniquePool<jag::graphics::GeometryBatchInstance, _3072>::UniquePoolDeleter>>*)
                pMVar2->GetBatchList();
        if (field_224.PickTest(local_88, *geometryBatchInstances, true, true, -1)) {
            MousePickingHelper::AddPickingEntity(*(long long*)&modelSubmissionRSeven.field_136);
        }
    }

    // 0x1002f2710
    void RSevenModelLitRenderer::SubmitOverlayModel(ModelLit& modelLit, int arg2, int arg3,
                                                    jag::math::Vector3T<int> vector3,
                                                    RenderState::OverlayViewportState& overlayViewportState) {
        (modelLit._vptr[3]._x7e___2)(modelLit);
    }

    // 0x1002f2970
    void RSevenModelLitRenderer::GetNextOverlay() {
        auto plVar1 = OSRenderCore_AudioThread::Instance();
        long lVar2 = ((Layout*)((long)plVar1 + *(long*)(*plVar1 - 24)))->HeapBeginPtr();
        vector<DepthBiasComputer::Node>* this_00 = (vector<DepthBiasComputer::Node>*)(lVar2 + 18104600);
        unsigned long uVar3 = this_00->size();
        uint8_t* this_01 = &field_128;
        if (this_01->size() < uVar3) {
            LogAssert("renderState.m_overlaysRSeven.size() <= m_overlays.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "RSevenModelLitRenderer.cpp",
                      611, "Overlays were sent to the render thread without being stored.");
        }
        lVar2 = this_00->size();
        long lVar5 = this_01->size();
        if (lVar2 == lVar5) {
            this_01->push_back();
        } else {
            uVar3 = this_00->size();
            (*this_01)[uVar3];
        }
    }

    // 0x1002f2b00
    void RSevenModelLitRenderer::UploadTextures(Array<short>& arg1) {
        short sVar1;
        uint64_t* puVar7;
        int* piVar8;
        int* piVar9;
        hashtable<int, eastl::pair<int const, shared_ptr<ChatLine>>, eastl::allocator,
                  eastl::use_first<eastl::pair<int const, shared_ptr<ChatLine>>>, eastl::equal_to<int>,
                  eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy,
                  false, true, true>* this_00;
        ReturnValue local_88;
        ReturnValue local_70;
        shared_ptr<RSevenDebugPresetProvider> local_60;
        short* local_48;
        int local_34;

        auto plVar4 = OSRenderCore_AudioThread::Instance();
        long lVar5 = ((Layout*)((long)plVar4 + *(long*)(*plVar4 - 24)))->HeapBeginPtr();
        auto psVar6 = arg1.data();
        auto local_40 = arg1.end();
        if (psVar6 != local_40) {
            this_00 = (hashtable<int, eastl::pair<int const, shared_ptr<ChatLine>>, eastl::allocator,
                                 eastl::use_first<eastl::pair<int const, shared_ptr<ChatLine>>>, eastl::equal_to<int>,
                                 eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                 eastl::prime_rehash_policy, false, true, true>*)(lVar5 + 18104544);
            do {
                sVar1 = *psVar6;
                if (sVar1 == -1) {
                    local_60 = shared_ptr();
                } else {
                    puVar7 = (uint64_t*)(*((shared_ptr<TextureProvider>*)&Pix3D::m_textureProvider)).operator->();
                    (**(void (**)(...))*puVar7)(&local_60, puVar7, (int)sVar1);
                }
                local_48 = psVar6;
                if (local_60 != nullptr) {
                    lVar5 = local_60.operator->();
                    piVar8 = (int*)((lVar5 + 56))->data();
                    piVar9 = (int*)((lVar5 + 56))->end();
                    for (; piVar8 != piVar9; piVar8 = piVar8 + 1) {
                        local_34 = *piVar8;
                        local_88 = this_00->find(local_34);
                        local_70 = this_00->end();
                        if (local_88 == local_70 != '\0') {
                            local_70 = shared_ptr();
                            if ((uint8_t*)m_pSpritesJs5->GetFile(local_70, local_34) == DataStatus::READY) {
                                eastl::hashtable<
                                    int, eastl::pair<int const, shared_ptr<PacketJ<Array<unsigned char>>>>,
                                    eastl::allocator,
                                    eastl::use_first<eastl::pair<int const, shared_ptr<PacketJ<Array<unsigned char>>>>>,
                                    eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                    eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                    true>::emplace<int&,
                                                   shared_ptr<PacketJ<Array<unsigned char>>>>(
                                    &local_88,
                                    (hashtable<int, eastl::pair<int const, shared_ptr<PacketJ<Array<unsigned char>>>>,
                                               eastl::allocator,
                                               eastl::use_first<
                                                   eastl::pair<int const, shared_ptr<PacketJ<Array<unsigned char>>>>>,
                                               eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                               eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                               true>*)this_00,
                                    &local_34, &local_70);
                            }
                        }
                    }
                }
                psVar6 = local_48 + 1;
            } while (psVar6 != local_40);
        }
    }

} // namespace jag::oldscape::dash3d

namespace jag {
    // 0x1002efd30
    shared_ptr_if_not_array<RenderState::ModelSubmissionRSeven>::type
    make_shared<RenderState::ModelSubmissionRSeven>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        ModelSubmissionRSeven* local_28[2];

        auto arg1 = aligned_alloc(208, 16);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<RenderState::ModelSubmissionRSeven>::type result;
        } else {
            local_28[0] = placement_new<RenderState::ModelSubmissionRSeven>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<RenderState::ModelSubmissionRSeven>, int,
                              RenderState::ModelSubmissionRSeven*&>(arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

} // namespace jag
