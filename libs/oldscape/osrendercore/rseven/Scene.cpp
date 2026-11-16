// libs/oldscape/osrendercore/rseven/Scene.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.osrendercore

#include "Scene.h"

namespace jag::oldscape::rseven {
    // 0x1001c0a40: the linker folded this into Scene::GetSceneGraphRoot() const, which has identical code
    Scene::GetSceneGraphRoot();

    // 0x1001c0be0, 16 bytes, placed by class name and debug map
    // Scene::ProcessOverlayUpdates(RenderState::OverlayRSeven*, RenderState::OverlayRSeven*)
    void Scene::ProcessOverlayUpdates(OverlayRSeven* param_1, OverlayRSeven* param_2) {
        (&field_16, param_1, param_2)->ProcessOverlayUpdates();
    }

    // 0x1001c3be0, 448 bytes, placed by class name
    // Scene::HandleRebuild(MapRebuildResults&)
    void Scene::HandleRebuild(MapRebuildResults* param_1) {
        int iVar1;
        int iVar2;
        GraphNode* pGVar3;
        ulong uVar4;
        int* piVar5;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        vector<shared_ptr<Terrain>, eastl::allocator>* this_01;
        int* in_R8;
        int* piVar6;
        ColourHSL local_78;
        MapRebuildSquare* local_68;
        GraphNode* local_60;
        GraphRoot* local_58;
        int* local_50;
        vector<shared_ptr<Terrain>, eastl::allocator>* local_48;
        float local_3c;
        GraphNode* local_38;

        local_58 = (GraphRoot*)&field_944;
        pGVar3 = (GraphNode*)local_58->GetRoot();
        pGVar3->Reset();
        (&field_1056)->clear();
        this_01 = (vector<shared_ptr<Terrain>, eastl::allocator>*)&field_1024;
        eastl::vector<shared_ptr<Terrain>, eastl::allocator>::clear(this_01);
        uVar4 = param_1->size();
        eastl::vector<shared_ptr<Terrain>, eastl::allocator>::reserve(this_01, uVar4);
        SetSceneGraphRootPosition(this, param_1);
        piVar5 = (int*)param_1->HeapBeginPtr();
        local_50 = (int*)param_1->end();
        if (piVar5 != local_50) {
            piVar5 = piVar5 + 24;
            local_48 = this_01;
            do {
                local_38 = jag::graphics::GraphNode::Create<>((GraphNode*)param_1);
                MakeSharedPool<Terrain, 32>::MakeShared<jag::graphics::GraphNode*&, int const&, int const&>(
                    (shared_ptr*)&local_78, (MakeSharedPool<Terrain, 32>*)&local_38, (GraphNode**)(piVar5 + -1), piVar5,
                    in_R8);
                eastl::vector<shared_ptr<Terrain>, eastl::allocator>::push_back(this_01, (shared_ptr*)&local_78);
                local_68 = (MapRebuildSquare*)(piVar5 + -24);
                local_78.~shared_ptr();
                this_00 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                    eastl::vector<shared_ptr<Terrain>, eastl::allocator>::back(this_01);
                param_1 =
                    (MapRebuildResults*)eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
                local_38->SetEntity(param_1);
                local_60 = local_38;
                iVar1 = piVar5[-1];
                iVar2 = ((piVar5 + -4))->GetZ();
                local_3c = (float)((iVar1 * 64 - iVar2) * 128);
                iVar1 = *piVar5;
                iVar2 = ((piVar5 + -4))->GetPos();
                new (&local_78) jag::math::ColourHSL(local_3c, 0.0, (float)((iVar1 * 64 - iVar2) * 128));
                local_60->SetTranslation((Vector3T*)&local_78);
                pGVar3 = (GraphNode*)local_58->GetRoot();
                pGVar3->AddChild(local_38);
                this_01 = local_48;
                param_1->RenderThread_Build(local_68);
                piVar6 = piVar5 + 2;
                piVar5 = piVar5 + 26;
            } while (piVar6 != local_50);
        }
    }

    // 0x1001c3f10, 560 bytes, placed by class name
    // Scene::ProcessModelUpdates(shared_ptr<RenderState::ModelSubmissionRSeven> const*, shared_ptr<RenderState::ModelSubmissionRSeven> const*)
    void Scene::ProcessModelUpdates(shared_ptr* param_1, shared_ptr* param_2) {
        bool bVar1;
        GraphNode* pGVar2;
        Entity* this_00;
        GraphNode* pGVar3;
        long* plVar4;
        ModelSubmissionRSeven* pMVar5;
        long lVar6;
        shared_ptr* psVar7;
        DynamicGeometry* pDVar8;
        GraphEntity* pGVar9;
        hashtable_iterator_base* extraout_RDX;
        shared_ptr<DynamicGeometry>* this_01;
        hashtable_iterator local_a8[16];
        jag local_98[16];
        long local_88[3];
        undefined8 local_70;
        undefined8 local_68;
        ModelSubmissionRSeven* local_60;
        GraphRoot* local_58;
        GraphNode* local_50;
        shared_ptr* local_48;
        shared_ptr* local_40;

        if (param_1 != param_2) {
            local_48 = (shared_ptr*)&field_1056;
            local_58 = (GraphRoot*)&field_944;
            local_40 = param_2;
            do {
                pMVar5 = (ModelSubmissionRSeven*)shared_ptr<RenderState::ModelSubmissionRSeven>::operator*(
                    (shared_ptr<RenderState::ModelSubmissionRSeven>*)param_1);
                if (*(long*)&pMVar5->field_128 != -1) {
                    local_88[0] = *(long*)&pMVar5->field_128;
                    local_60 = pMVar5;
                    eastl::hashtable<
                        unsigned long long, eastl::pair<unsigned long long const, shared_ptr<game::LightSource>>,
                        eastl::allocator,
                        eastl::use_first<eastl::pair<unsigned long long const, shared_ptr<game::LightSource>>>,
                        eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
                        eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)
                                                                                                             local_a8);
                    eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                                     eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>,
                                     eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
                    bVar1 = eastl::operator!=((eastl*)local_a8, (hashtable_iterator_base*)local_88, extraout_RDX);
                    pMVar5 = local_60;
                    if (bVar1) {
                        lVar6 = local_a8->HeapBeginPtr();
                        pMVar5 = local_60;
                        this_01 = (shared_ptr<DynamicGeometry>*)(lVar6 + 8);
                        psVar7 = (shared_ptr*)local_60->field_16->GetModel();
                        bVar1 = operator!=(psVar7, (_func_decltype_nullptr*)0);
                        if (bVar1) {
                            pDVar8 = (DynamicGeometry*)shared_ptr<DynamicGeometry>::operator->(this_01);
                            pDVar8->UpdateModel(pMVar5, ((Scene*)this)->field_0);
                        } else {
                            pGVar2 = (GraphNode*)local_58->GetRoot();
                            this_00 = (Entity*)shared_ptr<DynamicGeometry>::operator->(this_01);
                            pGVar3 = (GraphNode*)this_00->GetNode();
                            pGVar2->RemoveChild(pGVar3);
                            plVar4 = (long*)shared_ptr<DynamicGeometry>::operator->(this_01);
                            (**(code**)(*plVar4 + 96))(plVar4);
                            new (&local_70)
                                eastl::hashtable_iterator<eastl::pair<eastl::stringconst, unsigned int>, false, false>(
                                    local_a8);
                            eastl::hashtable<
                                unsigned long long, eastl::pair<unsigned long long const, shared_ptr<DynamicGeometry>>,
                                eastl::allocator,
                                eastl::use_first<eastl::pair<unsigned long long const, shared_ptr<DynamicGeometry>>>,
                                eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>,
                                eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false,
                                true, true>::erase(local_88, local_48, local_70, local_68);
                        }
                    } else {
                        pGVar2 = (GraphNode*)local_60->field_16->GetModel();
                        bVar1 = operator!=((shared_ptr*)pGVar2, (_func_decltype_nullptr*)0);
                        if (!bVar1)
                            goto LAB_1001c3fb0;
                        local_50 = jag::graphics::GraphNode::Create<>(pGVar2);
                        make_shared<DynamicGeometry, jag::graphics::GraphNode*&>(local_98, &local_50);
                        pGVar2 = local_50;
                        pGVar9 = (GraphEntity*)local_98->end();
                        pGVar2->SetEntity(pGVar9);
                        pGVar2 = (GraphNode*)local_58->GetRoot();
                        pGVar2->AddChild(local_50);
                        pDVar8 = (DynamicGeometry*)shared_ptr<DynamicGeometry>::operator->(
                            (shared_ptr<DynamicGeometry>*)local_98);
                        pDVar8->UpdateModel(pMVar5, ((Scene*)this)->field_0);
                        eastl::hashtable<
                            unsigned long long, eastl::pair<unsigned long long const, shared_ptr<DynamicGeometry>>,
                            eastl::allocator,
                            eastl::use_first<eastl::pair<unsigned long long const, shared_ptr<DynamicGeometry>>>,
                            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>,
                            eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false,
                            true, true>::emplace<long long const&, shared_ptr<DynamicGeometry>>(local_88, local_48);
                        local_98->~shared_ptr();
                    }
                    param_2 = local_40;
                }
            LAB_1001c3fb0:
                param_1 = param_1 + 1;
            } while (param_1 != param_2);
        }
    }

    // 0x1001c4140, 848 bytes, placed by class name
    // Scene::ProcessLightUpdates(RenderState::LightSubmissionRSeven const*, RenderState::LightSubmissionRSeven const*)
    void Scene::ProcessLightUpdates(LightSubmissionRSeven* param_1, LightSubmissionRSeven* param_2) {
        bool bVar1;
        GraphNode* pGVar2;
        LightSource* pLVar3;
        long lVar4;
        Entity* this_00;
        GraphNode* pGVar5;
        long* plVar6;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* phVar7;
        hashtable_iterator_base* extraout_RDX_01;
        LightSubmissionRSeven* pLVar8;
        LightSubmissionRSeven* pLVar9;
        shared_ptr local_118;
        shared_ptr local_108;
        hash_map<unsigned long long, shared_ptr<game::LightSource>, eastl::hash<unsigned long long>,
                 eastl::equal_to<unsigned long long>, eastl::allocator, false>
            local_f8[56];
        undefined8 local_c0;
        undefined8 local_b8;
        vector<shared_ptr<game::LightSource>, BucketAllocatorEASTL> local_b0[24];
        _func_decltype_nullptr* local_98;
        _func_decltype_nullptr* local_90;
        shared_ptr local_88;
        shared_ptr* local_70;
        hashtable_iterator local_68[16];
        GraphNode* local_58;
        GraphRoot* local_50;
        LightSubmissionRSeven* local_48;
        Scene* local_40;
        int local_34;

        local_48 = param_2;
        eastl::vector<shared_ptr<game::LightSource>, BucketAllocatorEASTL>::vector();
        new (&local_88) eastl::allocator("EASTL hash_map");
        eastl::hash_map<unsigned long long, shared_ptr<game::LightSource>, eastl::hash<unsigned long long>,
                        eastl::equal_to<unsigned long long>, eastl::allocator, false>::hash_map(local_f8,
                                                                                                (allocator*)&local_88);
        local_70 = (shared_ptr*)&field_1112;
        std::swap<eastl::hash_map<unsigned long long, shared_ptr<game::LightSource>, eastl::hash<unsigned long long>,
                                  eastl::equal_to<unsigned long long>, eastl::allocator, false>>((hash_map*)local_f8,
                                                                                                 (hash_map*)local_70);
        local_50 = (GraphRoot*)&field_944;
        local_40 = this;
        if (param_1 != local_48) {
            pLVar8 = param_1 + 48;
            do {
                local_88._0_8_ = *(undefined8*)pLVar8;
                eastl::hashtable<unsigned long long,
                                 eastl::pair<unsigned long long const, shared_ptr<game::LightSource>>, eastl::allocator,
                                 eastl::use_first<eastl::pair<unsigned long long const, shared_ptr<game::LightSource>>>,
                                 eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>,
                                 eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy,
                                 false, true, true>::find((ulonglong*)local_68);
                new (&local_118) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                                 eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>,
                                 eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                 eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
                pGVar2 = (GraphNode*)local_68;
                bVar1 = eastl::operator==((eastl*)local_68, (hashtable_iterator_base*)&local_88, extraout_RDX);
                if (bVar1) {
                    local_58 = jag::graphics::GraphNode::Create<>(pGVar2);
                    pGVar2 = (GraphNode*)local_50->GetRoot();
                    pGVar2->AddChild(local_58);
                    make_shared<game::StaticPointLight>((jag*)&local_88);
                    local_98 = (_func_decltype_nullptr*)0;
                    local_90 = (_func_decltype_nullptr*)0;
                    local_34 = 0;
                    make_shared<game::LightSource, jag::graphics::GraphNode*&, decltype(nullptr), decltype(nullptr),
                                shared_ptr<game::StaticPointLight>&, int>((jag*)&local_108, &local_58, &local_98,
                                                                          &local_90, &local_88, &local_34);
                    shared_ptr<game::LightSource>::operator=((shared_ptr<game::LightSource>*)&local_118, &local_108);
                    local_108.~shared_ptr();
                    local_88.~shared_ptr();
                } else {
                    lVar4 = local_68->HeapBeginPtr();
                    shared_ptr<game::LightSource>::operator=((shared_ptr<game::LightSource>*)&local_118,
                                                             (shared_ptr*)(lVar4 + 8));
                    new (&local_c0)
                        eastl::hashtable_iterator<eastl::pair<eastl::stringconst, unsigned int>, false, false>(
                            local_68);
                    eastl::hashtable<
                        unsigned long long, eastl::pair<unsigned long long const, shared_ptr<DynamicGeometry>>,
                        eastl::allocator,
                        eastl::use_first<eastl::pair<unsigned long long const, shared_ptr<DynamicGeometry>>>,
                        eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
                        eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::erase(&local_88,
                                                                                                          local_f8,
                                                                                                          local_c0,
                                                                                                          local_b8);
                }
                pLVar3 =
                    (LightSource*)shared_ptr<game::LightSource>::operator*((shared_ptr<game::LightSource>*)&local_118);
                UpdatePointLight(local_40, pLVar3, (PointLight*)(pLVar8 + -48));
                eastl::hashtable<unsigned long long,
                                 eastl::pair<unsigned long long const, shared_ptr<game::LightSource>>, eastl::allocator,
                                 eastl::use_first<eastl::pair<unsigned long long const, shared_ptr<game::LightSource>>>,
                                 eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>,
                                 eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy,
                                 false, true,
                                 true>::emplace<long long const&, shared_ptr<game::LightSource>&>((longlong*)&local_88,
                                                                                                  local_70);
                eastl::vector<shared_ptr<game::LightSource>, BucketAllocatorEASTL>::push_back(local_b0, &local_118);
                local_118.~shared_ptr();
                pLVar9 = pLVar8 + 16;
                pLVar8 = pLVar8 + 64;
            } while (pLVar9 != local_48);
        }
        eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                         eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                         eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
        eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        phVar7 = extraout_RDX_00;
        while (true) {
            bVar1 = eastl::operator!=((eastl*)&local_88, (hashtable_iterator_base*)local_68, phVar7);
            if (!bVar1)
                break;
            lVar4 = local_88.HeapBeginPtr();
            pGVar2 = (GraphNode*)local_50->GetRoot();
            this_00 = (Entity*)shared_ptr<game::LightSource>::operator->((shared_ptr<game::LightSource>*)(lVar4 + 8));
            pGVar5 = (GraphNode*)this_00->GetNode();
            pGVar2->RemoveChild(pGVar5);
            plVar6 = (long*)shared_ptr<game::LightSource>::operator->((shared_ptr<game::LightSource>*)(lVar4 + 8));
            (**(code**)(*plVar6 + 200))(plVar6);
            eastl::hashtable_iterator<
                eastl::pair<int const, shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>>, true, false>::
            operator++(
                (hashtable_iterator<eastl::pair<int const, shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>>,
                                    true, false>*)&local_88);
            phVar7 = extraout_RDX_01;
        }
        UpdateMapSquareLightSources((vector*)local_40);
        local_f8->~hash_map();
        eastl::vector<shared_ptr<game::LightSource>, BucketAllocatorEASTL>::~vector(local_b0);
    }

    // 0x1001c47f0, 112 bytes, placed by class name
    // Scene::RenderThread_Render(render::RenderTargets*, int, ViewTransforms const&, render::Viewport const&)
    void Scene::RenderThread_Render(RenderTargets* param_1, int param_2, ViewTransforms* param_3, Viewport* param_4) {
        shared_ptr* psVar1;
        EffectManager* pEVar2;

        UpdateLightingLogic(this, param_2);
        psVar1 = (shared_ptr*)field_0->GetGBufferRT();
        pEVar2 = (EffectManager*)field_0->GetEffectManager();
        (&field_16, this, param_1, psVar1, param_2, param_3, param_4, pEVar2)->RenderView();
    }

    // 0x1001cc370, 368 bytes, base-object constructor, placed by class name
    // Scene::Scene(jag::graphics::RT7Core*)
    void Scene::Scene(RT7Core* param_1) {
        allocator local_38[8];

        field_0 = param_1;
        new (&field_16, param_1, 16, 1) SceneRenderManager();
        new (&field_944) jag::graphics::GraphRoot();
        new (&field_1024) eastl::vector<shared_ptr<Terrain>, eastl::allocator>();
        eastl::allocator::allocator(local_38, "EASTL hash_map");
        new (&field_1056, local_38)
            eastl::hash_map<unsigned long long, shared_ptr<DynamicGeometry>, eastl::hash<unsigned long long>,
                            eastl::equal_to<unsigned long long>, eastl::allocator, false>();
        eastl::allocator::allocator(local_38, "EASTL hash_map");
        new (&field_1112, local_38)
            eastl::hash_map<unsigned long long, shared_ptr<game::LightSource>, eastl::hash<unsigned long long>,
                            eastl::equal_to<unsigned long long>, eastl::allocator, false>();
        new (&field_1168, 0.6, 0.1, 0.3) game::LightShadowImportanceKeyGenerator();
        new (&field_1184) eastl::vector<game::VisibleShadowCastingLightInfo, eastl::allocator>();
        new (&field_1216) eastl::fixed_vector<
            std::unique_ptr<game::MapSquarePointLights, std::default_delete<game::MapSquarePointLights>>, 9ul, true,
            eastl::allocator>();
        new (field_1328) rs2lib::CoordGrid();
        GenerateMapSquarePointLightLists(this);
    }

    // 0x1001cc550, 240 bytes, placed by class name
    // Scene::GenerateMapSquarePointLightLists()
    void Scene::GenerateMapSquarePointLightLists() {
        bool bVar1;
        unique_ptr<game::MapSquarePointLights, std::default_delete<game::MapSquarePointLights>>* this_00;
        undefined8 uVar2;
        undefined1 local_48[16];
        int local_38;
        int local_34;

        local_38 = 0;
        do {
            local_34 = 0;
            do {
                std::make_unique<game::MapSquarePointLights, jag::graphics::RT7Core&, int&, int&>(
                    (RT7Core*)local_48, (int*)field_0, &local_34);
                (&field_1216, (unique_ptr*)local_48)->push_back();
                local_48->~unique_ptr();
                this_00 = (unique_ptr<game::MapSquarePointLights,
                                      std::default_delete<game::MapSquarePointLights>>*)(&field_1216)
                              ->back();
                uVar2 = std::unique_ptr<game::MapSquarePointLights,
                                        std::default_delete<game::MapSquarePointLights>>::operator->(this_00);
                new (local_48) jag::math::ColourHSL((float)local_34, 0.0, (float)local_38);
                jag::math::operator*((Vector3T*)local_48, 8192.0);
                game::MapSquarePointLights::SetLocalOrigin(uVar2);
                bVar1 = local_34 < 2;
                local_34 = local_34 + 1;
            } while (bVar1);
            bVar1 = local_38 < 2;
            local_38 = local_38 + 1;
        } while (bVar1);
    }

    // 0x1001cc690, 16 bytes, complete-object constructor, placed by class name
    // Scene::Scene(jag::graphics::RT7Core*): jumps straight to the base-object constructor

    // 0x1001cc6a0, 224 bytes, base-object destructor, placed by class name
    // Scene::~Scene()
    void Scene::~Scene() {
        GraphNode* this_00;

        this_00 = (GraphNode*)(&field_944)->GetRoot();
        this_00->Reset();
        (&field_1216)->~fixed_vector();
        (&field_1184)->~vector();
        (&field_1112)->~hash_map();
        (&field_1056)->~hash_map();
        (&field_1024)->~vector();
        (&field_944)->~GraphRoot();
        (&field_16)->~SceneRenderManager();
    }

    // 0x1001cc780, 16 bytes, complete-object destructor, placed by class name
    // Scene::~Scene(): jumps straight to the base-object destructor

    // 0x1001cc7d0, 208 bytes, placed by class name
    // Scene::SetSceneGraphRootPosition(MapRebuildResults&)
    void Scene::SetSceneGraphRootPosition(MapRebuildResults* param_1) {
        int iVar1;
        int iVar2;
        GraphNode* this_00;
        Vector3T<float> local_68[16];
        LocationData local_58;
        LocationData local_48;
        Vector3T local_38[16];

        iVar1 = param_1->field_32->GetZ();
        iVar2 = param_1->field_32->GetPos();
        new (&local_58) rs2lib::worldmap::LocationData(iVar1, 0, iVar2);
        local_48.field_8 = local_58.field_8;
        local_48.field_0 = local_58.field_0;
        local_48.field_4 = local_58.field_4;
        jag::math::Vector3T<int>::operator*=((Vector3T<int>*)&local_48, 128);
        jag::math::Vector3T<int>::operator/=((Vector3T<int>*)&local_58, 64);
        jag::math::Vector3T<int>::operator*=((Vector3T<int>*)&local_58, 8192);
        local_38._0_12_ = jag::math::operator-((Vector3T*)&local_48, (Vector3T*)&local_58);
        jag::math::Vector3T<float>::Vector3T<int>(local_68, local_38);
        this_00 = (GraphNode*)(&field_944)->GetRoot();
        this_00->SetTranslation(local_68);
    }

    // 0x1001cd090, 336 bytes, placed by class name
    // Scene::UpdatePointLight(game::LightSource&, jag::graphics::PointLight const&)
    void Scene::UpdatePointLight(LightSource* param_1, PointLight* param_2) {
        undefined8* this_00;
        undefined4 uVar1;
        shared_ptr<game::StaticPointLight>* this_01;
        StaticPointLight* this_02;
        GraphNode* this_03;
        Matrix44T* pMVar2;
        vector* pvVar3;
        float* pfVar4;
        type* ptVar5;
        undefined8 local_48[2];
        float local_38;
        float local_34;

        this_01 = (shared_ptr<game::StaticPointLight>*)param_1->GetConfigurationSource();
        this_02 = (StaticPointLight*)shared_ptr<game::StaticPointLight>::operator*(this_01);
        this_02->SetShadowsEnabled(param_2->field_40);
        new (this_02) std::__cxx_atomic_base_impl<FolderSelection::FolderPathRequestStatus>(0);
        this_02->SetAttenuation(param_2->field_32);
        this_02->SetBacklightRatio(param_2->field_36);
        this_03 = (GraphNode*)(&field_944)->GetRoot();
        pMVar2 = (Matrix44T*)this_03->GetWorldTransformationMatrix();
        local_48[0] = jag::math::operator*((Vector3T*)param_2, pMVar2);
        this_02->SetPosition(local_48);
        ptVar5 = (type*)&DAT_00000001;
        this_02->SetRadius(param_2->field_12, true);
        this_00 = &param_2->field_16;
        pvVar3 = this_00->SSOBeginPtr(ptVar5);
        local_38 = *(float*)pvVar3;
        pfVar4 = (float*)this_00->y();
        local_34 = *pfVar4;
        pfVar4 = (float*)this_00->second();
        new (local_48) ImVec4(1.0, local_38, local_34, *pfVar4);
        uVar1 = jag::math::R8G8B8A8FromColour4((Vector4T*)local_48);
        this_02->SetStatus(uVar1);
        this_02->SetFlickerType(1);
        (*(code*)param_1->field_0[11])(param_1, param_2);
        param_1->RecalculateAABB();
        param_1->SyncWithConfigurationSource();
    }

    // 0x1001cd310, 160 bytes, placed by class name
    // Scene::UpdateMapSquareLightSources(eastl::vector<shared_ptr<game::LightSource>, BucketAllocatorEASTL>&)
    void Scene::UpdateMapSquareLightSources(vector* param_1) {
        vector* this;
        vector* pvVar1;
        MapSquarePointLights* this_00;
        undefined1 local_48[24];

        this = (vector*)((param_1 + 1216))->HeapBeginPtr();
        pvVar1 = (vector*)((param_1 + 1216))->end();
        if (this != pvVar1) {
            do {
                GatherLightsForSquare((Scene*)local_48, (unique_ptr*)param_1, this);
                this_00 =
                    (MapSquarePointLights*)std::unique_ptr<game::MapSquarePointLights,
                                                           std::default_delete<game::MapSquarePointLights>>::
                    operator->(
                        (unique_ptr<game::MapSquarePointLights, std::default_delete<game::MapSquarePointLights>>*)this);
                this_00->SetLocalLightSources(local_48);
                local_48->~vector();
                this = this + 8;
            } while (this != pvVar1);
        }
    }

    // 0x1001cd3c0, 432 bytes, placed by class name
    // Scene::GatherLightsForSquare(std::unique_ptr<game::MapSquarePointLights, std::default_delete<game::MapSquarePointLights> > const&, eastl::vector<shared_ptr<game::LightSource>, BucketAllocatorEASTL>&)
    /* Scene::GatherLightsForSquare(std::unique_ptr<game::MapSquarePointLights,
   std::default_delete<game::MapSquarePointLights> > const&,
   eastl::vector<shared_ptr<game::LightSource>, BucketAllocatorEASTL>&) */

    Scene* Scene::GatherLightsForSquare(unique_ptr* param_1, vector* param_2) {
        shared_ptr* psVar2;
        shared_ptr* psVar3;
        Entity* this_00;
        GraphNode* this_01;
        Matrix44T<float>* this_02;
        long lVar4;
        vector* pvVar5;
        Layout* in_RCX;
        shared_ptr* psVar6;
        Vector3T* pVVar7;
        undefined1 local_d8[64];
        Vector3T<float> local_98[16];
        shared_ptr local_88;
        Vector3T<float> local_78[16];
        undefined8 local_68[2];
        undefined8 local_58[2];
        undefined8 local_48[2];

        eastl::vector<shared_ptr<game::LightSource>, BucketAllocatorEASTL>::vector();
        CreateAABBForSquare((Scene*)(local_d8 + 32), param_1);
        psVar2 = (shared_ptr*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(in_RCX);
        psVar3 = (shared_ptr*)in_RCX->end();
        if (psVar2 != psVar3) {
            do {
                psVar6 = psVar2;
                new (&local_88) shared_ptr<dash3d::Decor>(psVar2);
                this_00 = (Entity*)shared_ptr<game::LightSource>::operator->((shared_ptr<game::LightSource>*)&local_88);
                this_01 = (GraphNode*)this_00->GetNode();
                this_02 = (Matrix44T<float>*)this_01->GetWorldTransformationMatrix();
                local_48[0] = this_02->GetPos();
                lVar4 = shared_ptr<game::LightSource>::operator->((shared_ptr<game::LightSource>*)&local_88);
                pvVar5 = ((lVar4 + 192))->SSOBeginPtr(psVar6);
                jag::math::Vector3T<float>::Vector3T(local_78, (float)*(uint*)pvVar5);
                pVVar7 = (Vector3T*)local_78;
                local_68[0] = jag::math::operator-((Vector3T*)local_48, pVVar7);
                lVar4 = shared_ptr<game::LightSource>::operator->((shared_ptr<game::LightSource>*)&local_88);
                pvVar5 = ((lVar4 + 192))->SSOBeginPtr(pVVar7);
                jag::math::Vector3T<float>::Vector3T(local_98, (float)*(uint*)pvVar5);
                local_58[0] = jag::math::operator+((Vector3T*)local_48, (Vector3T*)local_98);
                new (local_d8) jag::math::AABB(local_68, local_58);
                if (local_d8->TestIntersection((AABB*)(local_d8 + 32)) != '\0') {
                    ((Scene*)this)->push_back(&local_88);
                }
                local_88.~shared_ptr();
                psVar2 = psVar2 + 1;
            } while (psVar2 != psVar3);
        }
        return (Scene*)this;
    }

    // 0x1001cd580, 160 bytes, placed by class name
    // Scene::CreateAABBForSquare(std::unique_ptr<game::MapSquarePointLights, std::default_delete<game::MapSquarePointLights> > const&)
    /* Scene::CreateAABBForSquare(std::unique_ptr<game::MapSquarePointLights,
   std::default_delete<game::MapSquarePointLights> > const&) */

    Scene* Scene::CreateAABBForSquare(unique_ptr* param_1) {
        MapSquarePointLights* pMVar1;
        undefined8* puVar2;
        Vector3T* pVVar3;
        unique_ptr<game::MapSquarePointLights, std::default_delete<game::MapSquarePointLights>>* in_RDX;
        undefined4 uVar4;
        Vector3T<float> local_50[16];
        undefined4 local_40;
        undefined4 uStack_3c;
        undefined4 local_38;
        undefined4 local_30;
        undefined4 uStack_2c;

        pMVar1 =
            (MapSquarePointLights*)std::unique_ptr<game::MapSquarePointLights,
                                                   std::default_delete<game::MapSquarePointLights>>::operator->(in_RDX);
        puVar2 = (undefined8*)pMVar1->GetLocalOrigin();
        local_38 = *(undefined4*)(puVar2 + 1);
        _local_40 = CONCAT44(8388608, (int)*puVar2);
        pMVar1 =
            (MapSquarePointLights*)std::unique_ptr<game::MapSquarePointLights,
                                                   std::default_delete<game::MapSquarePointLights>>::operator->(in_RDX);
        pVVar3 = (Vector3T*)pMVar1->GetLocalOrigin();
        jag::math::Vector3T<float>::Vector3T(local_50, 8192.0);
        uVar4 = jag::math::operator+(pVVar3, (Vector3T*)local_50);
        _local_30 = CONCAT44(2139095039, uVar4);
        new (this) jag::math::AABB((Vector3T*)&local_40, (Vector3T*)&local_30);
        return this;
    }

    // 0x1001cd640, 720 bytes, placed by class name
    // Scene::GetShadowCastingLights(jag::graphics::SceneViewData const&)
    vector<game::VisibleShadowCastingLightInfo, eastl::allocator>*
    Scene::GetShadowCastingLights(SceneViewData* param_1) {
        SceneViewData* this_00;
        bool bVar1;
        char cVar2;
        long lVar3;
        OpenGLView* this_01;
        LightSource* pLVar4;
        shared_ptr<game::StaticPointLight>* this_02;
        StaticPointLight* this_03;
        ViewTransforms* pVVar5;
        Entity* this_04;
        Vector3T* pVVar6;
        vector* pvVar7;
        ulonglong uVar8;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* extraout_RDX_01;
        type* ptVar9;
        shared_ptr* this_05;
        float fVar10;
        undefined1 auVar11[16];
        undefined1 local_f8[12];
        float local_ec;
        hashtable_iterator_base local_c8[16];
        VisibleShadowCastingLightInfo local_b8;
        eastl local_a0[16];
        undefined1 local_90[32];
        Frustum* local_70;
        vector<jag::math::Sphere, eastl::allocator>* local_68;
        LightShadowImportanceKeyGenerator* local_60;
        undefined1* local_58;
        hashtable_iterator_base local_50[8];
        vector<game::VisibleShadowCastingLightInfo, eastl::allocator>* local_48;
        SceneViewData* local_40;
        eastl local_38[8];

        local_48 = (vector<game::VisibleShadowCastingLightInfo, eastl::allocator>*)&field_1184;
        local_40 = param_1;
        eastl::vector<game::VisibleShadowCastingLightInfo, eastl::allocator>::clear(local_48);
        jag::graphics::PointLightIndicesEffect::GetEffects();
        local_38 =
            (eastl[8])eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                                    eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true,
                                    true>::begin();
        auVar11 =
            eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                          eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true, true>::end();
        local_50 = auVar11._0_8_;
        bVar1 = eastl::operator!=(local_38, local_50, auVar11._8_8_);
        if (bVar1) {
            local_58 = &field_1112;
            local_70 = (Frustum*)&local_40->field_208;
            local_60 = (LightShadowImportanceKeyGenerator*)&field_1168;
            do {
                lVar3 = eastl::rbtree_iterator<
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
                bVar1 = ((lVar3 + 8))->operator_cast_to_bool();
                if (bVar1) {
                    this_01 = (OpenGLView*)shared_ptr<jag::graphics::PointLightIndicesEffect>::operator->(
                        (shared_ptr<jag::graphics::PointLightIndicesEffect>*)(lVar3 + 8));
                    local_68 = (vector<jag::math::Sphere, eastl::allocator>*)this_01->GetCursorMutex();
                    eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
                    eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                                     eastl::equal_to<eastl::string>, eastl::hash<eastl::string>,
                                     eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy,
                                     false, true, true>::begin();
                    eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                                     eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>,
                                     eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
                    bVar1 = eastl::operator!=(local_a0, local_c8, extraout_RDX_00);
                    if (bVar1) {
                        do {
                            lVar3 = local_a0->HeapBeginPtr();
                            this_05 = (shared_ptr*)(lVar3 + 8);
                            pLVar4 = (LightSource*)shared_ptr<game::LightSource>::operator->(
                                (shared_ptr<game::LightSource>*)this_05);
                            this_02 = (shared_ptr<game::StaticPointLight>*)pLVar4->GetConfigurationSource();
                            this_03 = (StaticPointLight*)shared_ptr<game::StaticPointLight>::operator->(this_02);
                            cVar2 = this_03->GetShadowsEnabled();
                            if (cVar2 != '\0') {
                                shared_ptr<game::LightSource>::operator->((shared_ptr<game::LightSource>*)this_05);
                                local_f8->GetPointLight();
                                new (local_90) jag::math::Sphere(local_f8, local_ec);
                                pLVar4 = (LightSource*)shared_ptr<game::LightSource>::operator->(
                                    (shared_ptr<game::LightSource>*)this_05);
                                pLVar4->SetVisibleLastFrame(false);
                                cVar2 = local_70->TestIntersection(local_90);
                                if (cVar2 != '\0') {
                                    eastl::vector<jag::math::Sphere, eastl::allocator>::push_back(local_68,
                                                                                                  (Sphere*)local_90);
                                    pLVar4 = (LightSource*)shared_ptr<game::LightSource>::operator->(
                                        (shared_ptr<game::LightSource>*)this_05);
                                    ptVar9 = (type*)&DAT_00000001;
                                    pLVar4->SetVisibleLastFrame(true);
                                    this_00 = local_40;
                                    pVVar5 = (ViewTransforms*)local_40->SSOBeginPtr(ptVar9);
                                    this_04 = (Entity*)shared_ptr<game::LightSource>::operator->(
                                        (shared_ptr<game::LightSource>*)this_05);
                                    pVVar6 = (Vector3T*)this_04->GetTranslation();
                                    pvVar7 = this_00->SSOBeginPtr(ptVar9);
                                    pvVar7 = pvVar7->SSOBeginPtr(ptVar9);
                                    local_90._16_8_ = jag::math::operator-(pVVar6, (Vector3T*)pvVar7);
                                    pLVar4 = (LightSource*)shared_ptr<game::LightSource>::operator->(
                                        (shared_ptr<game::LightSource>*)this_05);
                                    fVar10 = (float)pLVar4->GetCurrentIntensity();
                                    uVar8 = local_60->CalculateShadowCastingImportanceKey(
                                        pVVar5, (Vector3T*)(local_90 + 16), local_90, fVar10);
                                    new (&local_b8) game::VisibleShadowCastingLightInfo(this_05, uVar8);
                                    eastl::vector<game::VisibleShadowCastingLightInfo, eastl::allocator>::push_back(
                                        local_48, &local_b8);
                                    local_b8.~VisibleShadowCastingLightInfo();
                                }
                            }
                            eastl::hashtable_iterator<
                                eastl::pair<int const, shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>>,
                                true, false>::
                            operator++(
                                (hashtable_iterator<
                                    eastl::pair<int const, shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>>,
                                    true, false>*)local_a0);
                            bVar1 = eastl::operator!=(local_a0, local_c8, extraout_RDX_01);
                        } while (bVar1);
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
                bVar1 = eastl::operator!=(local_38, local_50, extraout_RDX);
            } while (bVar1);
        }
        return local_48;
    }

    // 0x1001cdf90, 304 bytes, placed by class name
    // Scene::UpdateLightingLogic(int)
    void Scene::UpdateLightingLogic(int param_1) {
        EffectManager* pEVar1;
        long lVar2;
        MapSquarePointLights* this_00;
        uint uVar3;
        char cVar4;
        bool bVar5;
        long* plVar6;
        unique_ptr<game::MapSquarePointLights, std::default_delete<game::MapSquarePointLights>>* puVar7;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        unique_ptr<game::MapSquarePointLights, std::default_delete<game::MapSquarePointLights>>* this_01;
        eastl local_50[16];
        hashtable_iterator_base local_40[16];

        pEVar1 = (EffectManager*)field_0->GetEffectManager();
        cVar4 = pEVar1->IsEnabled(26);
        if (cVar4 != '\0') {
            eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                             eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
            eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                             eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>,
                             eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
            bVar5 = eastl::operator!=(local_50, local_40, extraout_RDX);
            if (bVar5) {
                do {
                    lVar2 = local_50->HeapBeginPtr();
                    plVar6 =
                        (long*)shared_ptr<game::LightSource>::operator->((shared_ptr<game::LightSource>*)(lVar2 + 8));
                    (**(code**)(*plVar6 + 160))(plVar6, field_0, param_1, PTR_IDENTITY_100ee6730);
                    eastl::hashtable_iterator<
                        eastl::pair<int const, shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>>, true,
                        false>::
                    operator++((hashtable_iterator<
                                eastl::pair<int const, shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>>,
                                true, false>*)local_50);
                    bVar5 = eastl::operator!=(local_50, local_40, extraout_RDX_00);
                } while (bVar5);
            }
            this_01 =
                (unique_ptr<game::MapSquarePointLights, std::default_delete<game::MapSquarePointLights>>*)(&field_1216)
                    ->HeapBeginPtr();
            puVar7 =
                (unique_ptr<game::MapSquarePointLights, std::default_delete<game::MapSquarePointLights>>*)(&field_1216)
                    ->end();
            for (; this_01 != puVar7; this_01 = this_01 + 8) {
                this_00 = (MapSquarePointLights*)
                              std::unique_ptr<game::MapSquarePointLights,
                                              std::default_delete<game::MapSquarePointLights>>::operator->(this_01);
                this_00->MainLogic(0, 0, param_1);
                uVar3 = std::unique_ptr<game::MapSquarePointLights,
                                        std::default_delete<game::MapSquarePointLights>>::operator->(this_01);
                game::MapSquarePointLights::MainDraw(uVar3);
            }
        }
    }

} // namespace jag::oldscape::rseven

namespace jag::oldscape {
    // 0x1001c0bf0, 256 bytes, placed by debug map only (low confidence)
    // GetCompletedHighPrecisionPixelShader(osrsgraphics::ShaderResource)
    oldscape* GetCompletedHighPrecisionPixelShader(undefined4 param_2) {
        char* pcVar1;
        undefined1 local_168[280];
        basic_string local_50[24];
        basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_38[24];

        std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::basic_string();
        pcVar1 = (char*)osrsgraphics::GetResourceFilename(param_2);
        pcVar1 =
            ConvertEncodedResourceFilename<std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>>(
                local_50, pcVar1);
        std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::basic_string<decltype(nullptr)>(
            local_38, pcVar1);
        new (local_168) render::PixelShaderSourceStream(2, 2, 2, 2, 2, 1, 24);
        pcVar1 = (char*)osrsgraphics::shadersourceprovider::GetShaderString(param_2);
        std::operator<<((ostream*)(local_168 + 16), pcVar1);
        str();
        local_168->~PixelShaderSourceStream();
        std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::~basic_string(local_38);
        local_50->~basic_string();
        return this;
    }

} // namespace jag::oldscape

namespace jag::game {
    // 0x1004c67a0: the linker folded this into WaterType::GetFoamMaterialScale() const, which has identical code
    Cutscene2D::Scene::GetPlaybackStart() const;

} // namespace jag::game
