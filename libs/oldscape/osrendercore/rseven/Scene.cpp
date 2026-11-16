// libs/oldscape/osrendercore/rseven/Scene.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.osrendercore

#include "Scene.h"

namespace jag::oldscape::rseven {
    // 0x1001c0a40: Scene::GetSceneGraphRoot() has the same machine code as Scene::GetSceneGraphRoot() const

    // 0x1001c0be0
    void Scene::ProcessOverlayUpdates(RenderState::OverlayRSeven* overlayRSeven1,
                                      RenderState::OverlayRSeven* overlayRSeven2) {
        field_16.ProcessOverlayUpdates(overlayRSeven1, overlayRSeven2);
    }

    // 0x1001c3be0
    void Scene::HandleRebuild(MapRebuildResults& mapRebuildResults) {
        int iVar1;
        int iVar2;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        Terrain* this_01;
        int* piVar5;
        ColourHSL local_78;
        MapRebuildSquare* local_68;
        GraphNode* local_60;
        vector<shared_ptr<Terrain>>* local_48;
        float local_3c;
        GraphNode* local_38;

        GraphRoot* local_58 = (GraphRoot*)&field_944;
        auto pGVar3 = local_58->GetRoot();
        pGVar3->Reset();
        field_1056.clear();
        vector<shared_ptr<Terrain>>* this_02 = (vector<shared_ptr<Terrain>>*)&field_1024;
        this_02->clear();
        this_02->reserve(mapRebuildResults.size());
        SetSceneGraphRootPosition(mapRebuildResults);
        auto piVar4 = mapRebuildResults.HeapBeginPtr();
        auto local_50 = mapRebuildResults.end();
        if (piVar4 != local_50) {
            piVar4 = piVar4 + 24;
            local_48 = this_02;
            do {
                local_38 = jag::graphics::GraphNode::Create<>();
                MakeSharedPool<Terrain, 32>::MakeShared<jag::graphics::GraphNode*&, int const&, int const&>(
                    (GraphNode**)&local_78, (int*)&local_38, piVar4 - 1);
                this_02->push_back(local_78);
                local_68 = (MapRebuildSquare*)(piVar4 - 24);
                this_00 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_02->back();
                this_01 = (Terrain*)this_00->end();
                local_38->SetEntity(this_01);
                local_60 = local_38;
                iVar1 = piVar4[-1];
                iVar2 = ((piVar4 - 4))->GetZ();
                local_3c = (float)((iVar1 * 64 - iVar2) * 128);
                iVar1 = *piVar4;
                iVar2 = ((piVar4 - 4))->GetPos();
                new (&local_78) jag::math::ColourHSL(local_3c, 0.0, (float)((iVar1 * 64 - iVar2) * 128));
                local_60->SetTranslation(local_78);
                pGVar3 = (GraphNode*)local_58->GetRoot();
                pGVar3->AddChild(local_38);
                this_02 = local_48;
                this_01->RenderThread_Build(*local_68);
                piVar5 = piVar4 + 2;
                piVar4 = piVar4 + 26;
            } while (piVar5 != local_50);
        }
    }

    // 0x1001c3f10
    void Scene::ProcessModelUpdates(const shared_ptr<RenderState::ModelSubmissionRSeven>* modelSubmissionRSeven1,
                                    const shared_ptr<RenderState::ModelSubmissionRSeven>* modelSubmissionRSeven2) {
        hashtable<unsigned long long, eastl::pair<unsigned long long const, shared_ptr<DynamicGeometry>>,
                  eastl::allocator,
                  eastl::use_first<eastl::pair<unsigned long long const, shared_ptr<DynamicGeometry>>>,
                  eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
                  eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>* this_00;
        bool cVar1;
        bool bVar2;
        GraphNode* pGVar3;
        long* plVar4;
        ModelSubmissionRSeven* pMVar5;
        long lVar6;
        shared_ptr<midi2::MidiPlayerMainThread>* psVar7;
        DynamicGeometry* pDVar8;
        shared_ptr<DynamicGeometry>* this_02;
        ReturnValue local_a8;
        ReturnValue local_98;
        ReturnValue local_88;
        hashtable_iterator<eastl::pair<int const, shared_ptr<PacketT<Array<unsigned char> _> _> _>, true, false>*
            local_70[2];
        ModelSubmissionRSeven* local_60;
        GraphRoot* local_58;
        GraphNode* local_50;
        hashtable<unsigned long long, eastl::pair<unsigned long long const, shared_ptr<DynamicGeometry>>,
                  eastl::allocator,
                  eastl::use_first<eastl::pair<unsigned long long const, shared_ptr<DynamicGeometry>>>,
                  eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
                  eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>* local_48;
        shared_ptr<RenderState::ModelSubmissionRSeven>* local_40;

        if (modelSubmissionRSeven1 != modelSubmissionRSeven2) {
            local_48 = (hashtable<unsigned long long,
                                  eastl::pair<unsigned long long const, shared_ptr<DynamicGeometry>>, eastl::allocator,
                                  eastl::use_first<eastl::pair<unsigned long long const, shared_ptr<DynamicGeometry>>>,
                                  eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>,
                                  eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy,
                                  false, true, true>*)&field_1056;
            local_58 = (GraphRoot*)&field_944;
            local_40 = modelSubmissionRSeven2;
            do {
                pMVar5 = (ModelSubmissionRSeven*)**modelSubmissionRSeven1;
                this_00 = local_48;
                if (*(ReturnValue*)&pMVar5->field_128 != (ReturnValue)18446744073709551615) {
                    local_88[0] = *(ReturnValue*)&pMVar5->field_128;
                    local_60 = pMVar5;
                    local_a8 = local_48->find(local_88);
                    local_88 = this_00->end();
                    cVar1 = local_a8 != local_88;
                    pMVar5 = local_60;
                    if (!cVar1) {
                        psVar7 = (shared_ptr<midi2::MidiPlayerMainThread>*)local_60->field_16->GetModel();
                        bVar2 = *psVar7 != nullptr;
                        if (!bVar2)
                            goto LAB_1001c3fb0;
                        local_50 = jag::graphics::GraphNode::Create<>();
                        make_shared<DynamicGeometry, jag::graphics::GraphNode*&>(&local_98, &local_50);
                        pGVar3 = local_50;
                        pGVar3->SetEntity((GraphEntity*)local_98.end());
                        pGVar3 = (GraphNode*)local_58->GetRoot();
                        pGVar3->AddChild(local_50);
                        pDVar8 = (DynamicGeometry*)local_98.operator->();
                        pDVar8->UpdateModel(*pMVar5, *field_0);
                        local_88 = local_48->emplace<long long const&, shared_ptr<DynamicGeometry>>(pMVar5->field_128,
                                                                                                    local_98);
                    } else {
                        lVar6 = local_a8.HeapBeginPtr();
                        pMVar5 = local_60;
                        this_02 = (shared_ptr<DynamicGeometry>*)(lVar6 + 8);
                        psVar7 = (shared_ptr<midi2::MidiPlayerMainThread>*)local_60->field_16->GetModel();
                        bVar2 = *psVar7 != nullptr;
                        if (bVar2) {
                            pDVar8 = (DynamicGeometry*)(*this_02).operator->();
                            pDVar8->UpdateModel(*pMVar5, *field_0);
                        } else {
                            pGVar3 = (GraphNode*)local_58->GetRoot();
                            pGVar3->RemoveChild(((Entity*)(*this_02).operator->())->GetNode());
                            plVar4 = (long*)(*this_02).operator->();
                            (**(void (**)(...))(*plVar4 + 96))(plVar4);
                            new (local_70) eastl::hashtable_iterator(&local_a8);
                            local_88 = local_48->erase(local_70[0]);
                        }
                    }
                    modelSubmissionRSeven2 = local_40;
                }
            LAB_1001c3fb0:
                modelSubmissionRSeven1 = modelSubmissionRSeven1 + 16;
            } while (modelSubmissionRSeven1 != modelSubmissionRSeven2);
        }
    }

    // 0x1001c4140
    void Scene::ProcessLightUpdates(const RenderState::LightSubmissionRSeven* lightSubmissionRSeven1,
                                    const RenderState::LightSubmissionRSeven* lightSubmissionRSeven2) {
        bool cVar1;
        GraphNode* pGVar2;
        LightSource* lightSource;
        long lVar3;
        long* plVar4;
        ReturnValue* arg1;
        ReturnValue* pRVar5;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_118;
        ReturnValue local_108;
        hashtable_iterator<eastl::pair<int const, shared_ptr<PacketT<Array<unsigned char> _> _> _>, true, false>*
            local_c0[2];
        vector<shared_ptr<game::LightSource>, BucketAllocatorEASTL> local_b0;
        void* local_98;
        void* local_90;
        GraphNode* local_58;
        int local_34;

        new (&local_b0) eastl::vector<shared_ptr<game::LightSource>, BucketAllocatorEASTL>();
        hash_map<unsigned long long, shared_ptr<game::LightSource>> local_f8(local_88);
        hashtable<unsigned long long, eastl::pair<unsigned long long const, shared_ptr<game::LightSource>>,
                  eastl::allocator,
                  eastl::use_first<eastl::pair<unsigned long long const, shared_ptr<game::LightSource>>>,
                  eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
                  eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>* local_70 =
            (hashtable<unsigned long long, eastl::pair<unsigned long long const, shared_ptr<game::LightSource>>,
                       eastl::allocator,
                       eastl::use_first<eastl::pair<unsigned long long const, shared_ptr<game::LightSource>>>,
                       eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
                       eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)&field_1112;
        std::swap<eastl::hash_map<unsigned long long, shared_ptr<game::LightSource>>>(local_f8, *local_70);
        GraphRoot* local_50 = (GraphRoot*)&field_944;
        if ((ReturnValue*)lightSubmissionRSeven1 != (ReturnValue*)lightSubmissionRSeven2) {
            arg1 = (ReturnValue*)(lightSubmissionRSeven1 + 48);
            do {
                local_88[0] = *arg1;
                local_68 = local_f8.find(local_88);
                local_118 = shared_ptr();
                local_88 = local_f8.end();
                cVar1 = local_68 == local_88;
                if (!cVar1) {
                    lVar3 = local_68.HeapBeginPtr();
                    local_118 = (*((lVar3 + 8)));
                    new (local_c0) eastl::hashtable_iterator(&local_68);
                    local_88 = local_f8.erase(local_c0[0]);
                } else {
                    local_58 = jag::graphics::GraphNode::Create<>();
                    pGVar2 = (GraphNode*)local_50->GetRoot();
                    pGVar2->AddChild(local_58);
                    make_shared<game::StaticPointLight>(&local_88);
                    local_98 = nullptr;
                    local_90 = nullptr;
                    local_34 = 0;
                    make_shared<game::LightSource, jag::graphics::GraphNode*&, decltype(nullptr), decltype(nullptr),
                                shared_ptr<game::StaticPointLight>&, int>(&local_108, &local_58, &local_98, &local_90,
                                                                          &local_88, &local_34);
                    local_118 = local_108;
                }
                lightSource = (LightSource*)*local_118;
                UpdatePointLight(*lightSource, *((arg1 - 6)));
                local_88 = local_70->emplace<long long const&, shared_ptr<game::LightSource>&>(*arg1, local_118);
                local_b0.push_back(local_118);
                pRVar5 = arg1 + 2;
                arg1 = arg1 + 8;
            } while (pRVar5 != (ReturnValue*)lightSubmissionRSeven2);
        }
        auto local_88 = local_f8.begin();
        auto local_68 = local_f8.end();
        while (true) {
            cVar1 = local_88 != local_68;
            if (!cVar1)
                break;
            lVar3 = local_88.HeapBeginPtr();
            pGVar2 = (GraphNode*)local_50->GetRoot();
            pGVar2->RemoveChild(((Entity*)(*((lVar3 + 8))).operator->())->GetNode());
            plVar4 = (long*)(*((lVar3 + 8))).operator->();
            (**(void (**)(...))(*plVar4 + 200))(plVar4);
            ++local_88;
        }
        UpdateMapSquareLightSources(local_b0);
    }

    // 0x1001c47f0
    void Scene::RenderThread_Render(render::RenderTargets* renderTargets, int arg2,
                                    const ViewTransforms& viewTransforms, const render::Viewport& viewport) {
        UpdateLightingLogic(arg2);
        auto renderTargets2 = field_0->GetGBufferRT();
        auto effectManager = field_0->GetEffectManager();
        field_16.RenderView(this, renderTargets, *renderTargets2, arg2, viewTransforms, viewport, *effectManager);
    }

    // 0x1001cc370
    Scene::Scene(jag::graphics::RT7Core* rt7Core) : field_0(rt7Core), field_16(rt7Core, 16, 1) {

        new (&field_1056) eastl::hash_map<unsigned long long, shared_ptr<DynamicGeometry>>(local_38);
        new (&field_1112) eastl::hash_map(local_38);
        new (&field_1168) game::LightShadowImportanceKeyGenerator(0.6, 0.1, 0.3);
        new (&field_1184) eastl::vector<game::VisibleShadowCastingLightInfo>();
        new (&field_1216) eastl::fixed_vector<std::unique_ptr<game::MapSquarePointLights>, 9ul>();
        new (field_1328) rs2lib::CoordGrid();
        GenerateMapSquarePointLightLists();
    }

    // 0x1001cc550
    void Scene::GenerateMapSquarePointLightLists() {
        bool bVar1;
        unique_ptr<game::MapSquarePointLights>* this_00;
        Vector3T<float>* vector3;
        ColourHSL local_48;
        int local_34;

        int local_38 = 0;
        do {
            local_34 = 0;
            do {
                local_48 = std::make_unique<game::MapSquarePointLights, jag::graphics::RT7Core&, int&, int&>(
                    *field_0, local_34, local_38);
                field_1216.push_back(local_48);
                this_00 = (unique_ptr<game::MapSquarePointLights>*)field_1216.back();
                vector3 = (Vector3T<float>*)(*this_00).operator->();
                local_48 = jag::math::ColourHSL((float)local_34, 0.0, (float)local_38);
                *8192.0 * local_48;
                game::MapSquarePointLights::SetLocalOrigin(vector3);
                bVar1 = local_34 < 2;
                local_34 = local_34 + 1;
            } while (bVar1);
            bVar1 = local_38 < 2;
            local_38 = local_38 + 1;
        } while (bVar1);
    }

    // 0x1001cc6a0
    Scene::~Scene() {
        ((GraphNode*)field_944.GetRoot())->Reset();
        field_1216.~fixed_vector();
        field_1184.~vector();
        field_1112.~hash_map();
        field_1056.~hash_map();
        field_1024.~vector();
        field_944.~GraphRoot();
        field_16.~SceneRenderManager();
    }

    // 0x1001cc7d0
    void Scene::SetSceneGraphRootPosition(MapRebuildResults& mapRebuildResults) {
        Vector3T<float> local_68;
        LocationData local_48;
        Vector3T<int> local_38;

        int arg1 = mapRebuildResults.field_32->GetZ();
        unsigned int arg3 = mapRebuildResults.field_32->GetPos();
        LocationData local_58(arg1, 0, arg3);
        local_48.field_8 = local_58.field_8;
        local_48.field_0 = local_58.field_0;
        local_48.field_4 = local_58.field_4;
        local_48 *= 128;
        local_58 /= 64;
        local_58 *= 8192;
        local_38._0_12_ = local_48 - local_58;
        local_68.Vector3T<int>(local_38);
        ((GraphNode*)field_944.GetRoot())->SetTranslation(local_68);
    }

    // 0x1001cd090
    void Scene::UpdatePointLight(game::LightSource& lightSource, const jag::graphics::PointLight& pointLight) {
        uint64_t local_48[2];

        auto this_01 = lightSource.GetConfigurationSource();
        StaticPointLight* this_02 = (StaticPointLight*)**this_01;
        this_02->SetShadowsEnabled(pointLight.field_40);
        new (this_02) std::__cxx_atomic_base_impl(0);
        this_02->SetAttenuation(pointLight.field_32);
        this_02->SetBacklightRatio(pointLight.field_36);
        Matrix44T<float>* matrix44 = ((GraphNode*)field_944.GetRoot())->GetWorldTransformationMatrix();
        local_48[0] = pointLight * *matrix44;
        this_02->SetPosition(*local_48);
        this_02->SetRadius(pointLight.field_12, true);
        uint64_t* this_00 = &pointLight.field_16;
        auto pfVar1 = this_00->SSOBeginPtr();
        float local_38 = *pfVar1;
        pfVar1 = (float*)this_00->y();
        float local_34 = *pfVar1;
        pfVar1 = (float*)this_00->second();
        new (local_48) ImVec4(1.0, local_38, local_34, *pfVar1);
        this_02->SetStatus(jag::math::R8G8B8A8FromColour4(*local_48));
        this_02->SetFlickerType(1);
        (lightSource._vptr->SetTranslation)((Vector3T<float>*)lightSource);
        lightSource.RecalculateAABB();
        lightSource.SyncWithConfigurationSource();
    }

    // 0x1001cd310
    void Scene::UpdateMapSquareLightSources(
        eastl::vector<shared_ptr<game::LightSource>, BucketAllocatorEASTL>& lightSources) {
        vector<shared_ptr<game::LightSource>, BucketAllocatorEASTL>* lightSources_00;
        uint8_t local_48[24];

        lightSources_00 = (vector<shared_ptr<game::LightSource>, BucketAllocatorEASTL>*)field_1216.HeapBeginPtr();
        auto pvVar1 = field_1216.end();
        if (lightSources_00 != pvVar1) {
            do {
                GatherLightsForSquare(
                    (Scene*)local_48,
                    (unique_ptr<game::MapSquarePointLights, std::default_delete<game::MapSquarePointLights> _>*)this,
                    lightSources_00);
                ((MapSquarePointLights*)(*lightSources_00).operator->())->SetLocalLightSources(*local_48);
                lightSources_00 = lightSources_00 + 8;
            } while (lightSources_00 != pvVar1);
        }
    }

    // 0x1001cd3c0
    Scene*
    Scene::GatherLightsForSquare(const std::unique_ptr<game::MapSquarePointLights>& mapSquarePointLights,
                                 eastl::vector<shared_ptr<game::LightSource>, BucketAllocatorEASTL>& lightSources) {
        long lVar3;
        unsigned int* puVar4;
        Layout* in_RCX;
        uint8_t local_d8[64];
        Vector3T<float> local_98;
        shared_ptr<RSevenDebugPresetProvider> local_88;
        Vector3T<float> local_78;
        uint64_t local_68[2];
        uint64_t local_58[2];
        uint64_t local_48[2];

        new (this) eastl::vector<shared_ptr<game::LightSource>, BucketAllocatorEASTL>();
        CreateAABBForSquare((Scene*)(local_d8 + 32), mapSquarePointLights);
        auto groundDecor = in_RCX->HeapBeginPtr();
        auto psVar2 = in_RCX->end();
        if (groundDecor != psVar2) {
            do {
                local_88 = shared_ptr(groundDecor);
                local_48[0] = ((((Entity*)local_88.operator->())->GetNode())->GetWorldTransformationMatrix())->GetPos();
                lVar3 = local_88.operator->();
                puVar4 = (unsigned int*)((lVar3 + 192))->SSOBeginPtr();
                local_78 = jag::math::Vector3T((float)*puVar4);
                local_68[0] = *local_48 - local_78;
                lVar3 = local_88.operator->();
                puVar4 = (unsigned int*)((lVar3 + 192))->SSOBeginPtr();
                local_98 = jag::math::Vector3T((float)*puVar4);
                local_58[0] = *local_48 + local_98;
                new (local_d8) jag::math::AABB(local_68, local_58);
                if (local_d8->TestIntersection(*((local_d8 + 32))) != '\0') {
                    push_back(local_88);
                }
                groundDecor = groundDecor + 16;
            } while (groundDecor != psVar2);
        }
        return this;
    }

    // 0x1001cd580
    Scene* Scene::CreateAABBForSquare(const std::unique_ptr<game::MapSquarePointLights>& mapSquarePointLights) {
        unique_ptr<game::MapSquarePointLights>* in_RDX;
        uint32_t local_40;
        uint32_t local_30;

        MapSquarePointLights* pMVar1 = (MapSquarePointLights*)(*in_RDX).operator->();
        auto puVar2 = pMVar1->GetLocalOrigin();
        uint32_t local_38 = *(uint32_t*)(puVar2 + 1);
        _local_40 = (((uint64_t)8388608 << 32) | (uint32_t)((int)*puVar2));
        pMVar1 = (MapSquarePointLights*)(*in_RDX).operator->();
        auto vector31 = pMVar1->GetLocalOrigin();
        Vector3T<float> local_50(8192.0);
        uint32_t uVar3 = *vector31 + local_50;
        _local_30 = (((uint64_t)2139095039 << 32) | (uint32_t)uVar3);
        new (this) jag::math::AABB(&local_40, &local_30);
        return this;
    }

    // 0x1001cd640
    vector<game::VisibleShadowCastingLightInfo>*
    Scene::GetShadowCastingLights(const jag::graphics::SceneViewData& sceneViewData) {
        hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>, eastl::equal_to<eastl::string>,
                  eastl::hash<eastl::string>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_00;
        long lVar2;
        OpenGLView* this_03;
        LightSource* pLVar3;
        shared_ptr<game::StaticPointLight>* this_04;
        ViewTransforms* viewTransforms;
        Entity* this_06;
        Vector3T<float>* vector31;
        Layout* this_07;
        Vector3T<float>* vector32;
        unsigned long long arg2;
        shared_ptr<game::LightSource>* this_08;
        float arg4;
        uint8_t local_f8[12];
        float local_ec;
        ReturnValue local_c8;
        VisibleShadowCastingLightInfo local_b8;
        ReturnValue local_a0;
        uint8_t local_90[32];
        Frustum* local_70;
        vector<eastl::pair<int, int>>* local_68;
        LightShadowImportanceKeyGenerator* local_60;
        hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>, eastl::equal_to<eastl::string>,
                  eastl::hash<eastl::string>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* local_58;
        obj_iterator local_50;
        vector<game::VisibleShadowCastingLightInfo>* local_48;
        eastl local_38;

        return local_48 = (vector<game::VisibleShadowCastingLightInfo>*)&field_1184;
        local_48->clear();
        auto this_02 = jag::graphics::PointLightIndicesEffect::GetEffects();
        &local_38 = (eastl[8])this_02->begin();
        &local_50 = (obj_iterator[8])this_02->end();
        bool cVar1 = local_38 != local_50;
        if (cVar1) {
            local_58 =
                (hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                           eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                           eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                           eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)&field_1112;
            local_70 = (Frustum*)sceneViewData.m_pViewFrustum;
            local_60 = (LightShadowImportanceKeyGenerator*)&field_1168;
            do {
                lVar2 = *local_38;
                cVar1 = ((lVar2 + 8))->operator_cast_to_bool();
                if (cVar1) {
                    this_03 = (OpenGLView*)(*((lVar2 + 8))).operator->();
                    local_68 = (vector<eastl::pair<int, int>>*)this_03->GetCursorMutex();
                    local_68->clear();
                    this_00 = local_58;
                    local_a0 = local_58->begin();
                    local_c8 = this_00->end();
                    cVar1 = local_a0 != local_c8;
                    while (cVar1) {
                        lVar2 = local_a0.HeapBeginPtr();
                        this_08 = (shared_ptr<game::LightSource>*)(lVar2 + 8);
                        pLVar3 = (LightSource*)(*this_08).operator->();
                        this_04 = pLVar3->GetConfigurationSource();
                        cVar1 = ((StaticPointLight*)(*this_04).operator->())->GetShadowsEnabled();
                        if (cVar1) {
                            (*this_08).operator->();
                            local_f8->GetPointLight();
                            new (local_90) jag::math::Sphere(*local_f8, local_ec);
                            pLVar3 = (LightSource*)(*this_08).operator->();
                            pLVar3->SetVisibleLastFrame(false);
                            cVar1 = local_70->TestIntersection(*local_90);
                            if (cVar1) {
                                local_68->push_back(*local_90);
                                pLVar3 = (LightSource*)(*this_08).operator->();
                                pLVar3->SetVisibleLastFrame(true);
                                viewTransforms = (ViewTransforms*)sceneViewData.SSOBeginPtr();
                                this_06 = (Entity*)(*this_08).operator->();
                                vector31 = (Vector3T<float>*)this_06->GetTranslation();
                                this_07 = (Layout*)sceneViewData.SSOBeginPtr();
                                vector32 = (Vector3T<float>*)this_07->SSOBeginPtr();
                                local_90._16_8_ = *vector31 - *vector32;
                                pLVar3 = (LightSource*)(*this_08).operator->();
                                arg4 = (float)pLVar3->GetCurrentIntensity();
                                arg2 = local_60->CalculateShadowCastingImportanceKey(
                                    *viewTransforms, *((local_90 + 16)), *local_90, arg4);
                                local_b8 = game::VisibleShadowCastingLightInfo(*this_08, arg2);
                                local_48->push_back(local_b8);
                            }
                        }
                        ++local_a0;
                        cVar1 = local_a0 != local_c8;
                    }
                }
                ++local_38;
                cVar1 = local_38 != local_50;
            } while (cVar1);
        }
    }

    // 0x1001cdf90
    void Scene::UpdateLightingLogic(int arg1) {
        long lVar2;
        long* plVar3;
        unique_ptr<game::MapSquarePointLights>* this_01;
        unique_ptr<game::MapSquarePointLights>* puVar4;
        MapSquarePointLights* pMVar5;
        ReturnValue local_50;
        ReturnValue local_40;

        bool cVar1 = field_0->GetEffectManager()->IsEnabled(26);
        if (cVar1) {
            local_50 = field_1112.begin();
            local_40 = field_1112.end();
            cVar1 = local_50 != local_40;
            if (cVar1) {
                do {
                    lVar2 = local_50.HeapBeginPtr();
                    plVar3 = (long*)(*((lVar2 + 8))).operator->();
                    (**(void (**)(...))(*plVar3 + 160))(plVar3, field_0, arg1, PTR_IDENTITY_100ee6730);
                    ++local_50;
                    cVar1 = local_50 != local_40;
                } while (cVar1);
            }
            this_01 = (unique_ptr<game::MapSquarePointLights>*)field_1216.HeapBeginPtr();
            puVar4 = (unique_ptr<game::MapSquarePointLights>*)field_1216.end();
            for (; this_01 != puVar4; this_01 = this_01 + 8) {
                pMVar5 = (MapSquarePointLights*)(*this_01).operator->();
                pMVar5->MainLogic(nullptr, nullptr, arg1);
                pMVar5 = (MapSquarePointLights*)(*this_01).operator->();
                pMVar5->MainDraw(arg1);
            }
        }
    }

} // namespace jag::oldscape::rseven

namespace jag::oldscape {
    // 0x1001c0bf0
    auto GetCompletedHighPrecisionPixelShader(osrsgraphics::ShaderResource shaderResource) {
        uint8_t local_168[280];
        basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_38;

        basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_50;
        auto pcVar1 = osrsgraphics::GetResourceFilename(shaderResource);
        pcVar1 =
            ConvertEncodedResourceFilename<std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>>(
                (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_50, pcVar1);
        local_38.basic_string<decltype(nullptr)>(pcVar1);
        new (local_168) render::PixelShaderSourceStream(2, 2, 2, 2, 2, 1, 24);
        pcVar1 = osrsgraphics::shadersourceprovider::GetShaderString(shaderResource);
        std::operator<<((basic_ostream<char, std::char_traits<char> _>*)(local_168 + 16), pcVar1);
        auto result = local_168->str();
        return result;
    }

} // namespace jag::oldscape

namespace jag::game {
    // 0x1004c67a0: Cutscene2D::Scene::GetPlaybackStart() const has the same machine code as WaterType::GetFoamMaterialScale() const

} // namespace jag::game
