// libs/graphics/runetek7/particles/ParticleSystem.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "ParticleSystem.h"

namespace jag::graphics {
    // 0x100009e70: ParticleSystem::GetTransformedTriangle(unsigned int, math::Vector4T<float> (&) [3]) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100049810: ParticleSystem::GetMaterial() has the same machine code as oldscape::option::Option<oldscape::WindowSavedPosition>::GetDefaultValue() const

    // 0x1007ccff0
    void ParticleSystem::GetEffectors(eastl::vector<ParticleEffector const*, BucketAllocatorEASTL>& particleEffectors,
                                      unsigned int arg2) const {
        ParticleEffector* in_RAX;
        unsigned int* puVar2;

        ParticleEffector* local_38 = in_RAX;
        particleEffectors.clear();
        auto this_00 = field_42800.HeapBeginPtr();
        auto pPVar1 = field_42800.end();
        if (this_00 != pPVar1) {
            do {
                puVar2 = (unsigned int*)this_00->data();
                if (*puVar2 == arg2) {
                    local_38 = this_00;
                    particleEffectors.push_back(local_38);
                }
                this_00 = (ParticleEffector*)&this_00->field_72;
            } while (this_00 != pPVar1);
        }
    }

    // 0x1007ce900
    void ParticleSystem::CreateRenderingResources() {}

    // 0x1007ce910
    void ParticleSystem::DestroyRenderingResources() {

        m_material->DestroyRenderingResources();
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        m_material->SetTextureAtlasReference(local_28);
    }

    // 0x1007d16e0
    ParticleSystem::ParticleSystem(ParticleManager* particleManager)
        : Drawable(9), MakeSharedPool<ParticleSystem, 32>(), field_624(particleManager) {
        field_632 = '\0';
        field_633 = '\0';
        field_634 = '\0';
        field_635 = '\0';
        new (&field_640) eastl::fixed_vector<ParticleEmitter, 4ul>();
        new (&field_42800) eastl::vector<ParticleEffector>();
        m_particleCount = 0;
        new (&field_42848) std::optional<math::Matrix44T<float>>();
        this[1].m_material[8] = 0;
        m_material->InitRenderPassEffects(0);
        field_624->RegisterSystem(this);
    }

    // 0x1007d18d0
    ParticleSystem::~ParticleSystem() {
        DestroyRenderingResources();
        field_624->UnregisterSystem(this);
        field_42800.~vector();
        field_640.~fixed_vector();
        m_material->~ParticleMaterial();
        field_16.~enable_shared_from_this();
    }

    // 0x1007d19a0
    void ParticleSystem::DisableEmitters() {
        auto this_00 = field_640.HeapBeginPtr();
        auto pPVar1 = field_640.end();
        for (; this_00 != pPVar1; this_00 = (ParticleEmitter*)&this_00->field_10528) {
            this_00->SetEnabled(false);
        }
    }

    // 0x1007d1a00
    void ParticleSystem::Update(float arg1) {
        uint8_t local_24[4];

        field_32.Reset();
        m_particleCount = 0;
        uint8_t* this_00 = &field_640;
        auto pPVar1 = this_00->HeapBeginPtr();
        auto pPVar2 = this_00->end();
        pPVar1 = eastl::remove_if<ParticleEmitter*, float->Update()::__6>(pPVar1, pPVar2, (__6*)local_24);
        pPVar2 = (ParticleEmitter*)this_00->end();
        this_00->erase(pPVar1, pPVar2);
    }

    // 0x1007d1b50
    void ParticleSystem::UnregisterModelEmitter(const shared_ptr<ModelParticleSource>& modelParticleSource) {
        ParticleEmitter* pPVar1;
        shared_ptr<oldscape::midi2::MidiRequest>* midiRequest1;
        ParticleEmitter* particleEmitter;
        uint8_t* this_00;

        if (field_624->ParticlesReady() != '\0') {
            this_00 = &field_640;
            pPVar1 = (ParticleEmitter*)this_00->end();
            particleEmitter = (ParticleEmitter*)this_00->HeapBeginPtr();
            if (particleEmitter != pPVar1) {
                do {
                    midiRequest1 = (shared_ptr<oldscape::midi2::MidiRequest>*)particleEmitter->SSOBeginPtr();
                    if (*midiRequest1 == modelParticleSource) {
                        this_00->erase(particleEmitter);
                        return;
                    }
                    particleEmitter = (ParticleEmitter*)&particleEmitter->field_10528;
                } while (particleEmitter != pPVar1);
            }
        }
    }

    // 0x1007d1c80
    void ParticleSystem::RegisterModelEmitter(const shared_ptr<ModelParticleSource>& modelParticleSource,
                                              const math::Vector3T<float>& vector31,
                                              const math::Vector3T<float>& vector32,
                                              const math::Vector3T<float>& vector33, bool arg5, bool arg6) {
        ParticleSystem* pPVar1;
        Vector3T<float>* vector33_00;
        ParticleEmitter* particleEmitter;
        ParticleEmitter* pPVar4;
        shared_ptr<oldscape::midi2::MidiRequest>* midiRequest1;
        unsigned long uVar5;
        ParticleEmitter* this_00;
        Layout* pLVar6;
        uint64_t in_register_00000081;
        uint32_t in_register_00000089;
        bool in_stack_00000008;
        ParticleSystem* local_68;
        Layout* local_50;
        ParticleSystem* local_48;
        Vector3T<float>* local_40;

        uint32_t local_34 = (((uint32_t)in_register_00000089 << 8) | (uint8_t)arg6);
        if ((*(ParticleManager**)(modelParticleSource + 624))->ParticlesReady() != '\0') {
            pLVar6 = (Layout*)(modelParticleSource + 640);
            local_48 = (ParticleSystem*)modelParticleSource;
            local_40 = (Vector3T<float>*)(((uint64_t)in_register_00000081 << 8) | (uint8_t)arg5);
            particleEmitter = (ParticleEmitter*)pLVar6->HeapBeginPtr();
            local_50 = pLVar6;
            pPVar4 = (ParticleEmitter*)pLVar6->end();
            if (particleEmitter == pPVar4) {
                this_00 = nullptr;
            } else {
                this_00 = nullptr;
                do {
                    midiRequest1 = (shared_ptr<oldscape::midi2::MidiRequest>*)particleEmitter->SSOBeginPtr();
                    if (*midiRequest1 == vector31) {
                        this_00 = particleEmitter;
                        break;
                    }
                    particleEmitter = (ParticleEmitter*)&particleEmitter->field_10528;
                } while (particleEmitter != pPVar4);
            }
            pLVar6 = local_50;
            if (this_00 == nullptr) {
                uVar5 = local_50->size();
                pPVar1 = local_48;
                if (4095 < uVar5) {
                    return;
                }
                local_68 = local_48;
                this_00 = eastl::vector<ParticleEmitter, eastl::fixed_vector_allocator<10528ul, 4ul, 16ul, 0ul, true>>::
                    emplace_back<shared_ptr<ModelParticleSource> const&, ParticleManager*&, ParticleSystem*>(
                        (vector<ParticleEmitter, eastl::fixed_vector_allocator<10528ul, 4ul, 16ul, 0ul, true>>*)pLVar6,
                        (shared_ptr<ModelParticleSource>*)vector31, &local_48->field_624, &local_68);
                pPVar1->field_632 = '\x01';
            }
            vector33_00 = local_40;
            if (this_00 != nullptr) {
                if ((char)local_34 != '\0') {
                    this_00->SetEnabled(false);
                }
                this_00->Hide(in_stack_00000008);
                this_00->UpdatePosition(vector32, vector33, *vector33_00);
            }
        }
    }

    // 0x1007d1ec0
    void ParticleSystem::UnregisterModelEffector(const shared_ptr<ModelParticleSource>& modelParticleSource) {
        ParticleEffector* pPVar1;
        shared_ptr<oldscape::midi2::MidiRequest>* midiRequest1;
        ParticleEffector* particleEffector;
        uint8_t* this_00;

        if (field_624->ParticlesReady() != '\0') {
            this_00 = &field_42800;
            pPVar1 = (ParticleEffector*)this_00->end();
            particleEffector = (ParticleEffector*)this_00->HeapBeginPtr();
            if (particleEffector != pPVar1) {
                do {
                    midiRequest1 = (shared_ptr<oldscape::midi2::MidiRequest>*)particleEffector->SSOBeginPtr();
                    if (*midiRequest1 == modelParticleSource) {
                        this_00->erase(particleEffector);
                        return;
                    }
                    particleEffector = (ParticleEffector*)&particleEffector->field_72;
                } while (particleEffector != pPVar1);
            }
        }
    }

    // 0x1007d1fb0
    void ParticleSystem::RegisterModelEffector(const shared_ptr<ModelParticleSource>& modelParticleSource,
                                               const math::Vector3T<float>& vector3,
                                               const math::Matrix33T<float>& matrix33) {
        uint8_t* this_00;
        vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle>* this_01;
        ParticleEffector* this_02;
        ParticleEffector* pPVar3;
        shared_ptr<oldscape::midi2::MidiRequest>* midiRequest1;
        unsigned long uVar4;
        ParticleEffector* this_03;
        vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle>* local_38;

        if (field_624->ParticlesReady() != '\0') {
            this_00 = &field_42800;
            this_02 = (ParticleEffector*)this_00->HeapBeginPtr();
            local_38 = (vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle>*)this_00;
            pPVar3 = (ParticleEffector*)this_00->end();
            if (this_02 == pPVar3) {
                this_03 = nullptr;
            } else {
                this_03 = nullptr;
                do {
                    midiRequest1 = (shared_ptr<oldscape::midi2::MidiRequest>*)this_02->SSOBeginPtr();
                    if (*midiRequest1 == modelParticleSource) {
                        this_03 = this_02;
                        break;
                    }
                    this_02 = (ParticleEffector*)&this_02->field_72;
                } while (this_02 != pPVar3);
            }
            this_01 = local_38;
            if (this_03 == nullptr) {
                uVar4 = local_38->size();
                if (4095 < uVar4) {
                    return;
                }
                this_03 =
                    this_01->emplace_back<shared_ptr<ModelParticleSource> const&, ParticleManager*&, ParticleSystem*>(
                        modelParticleSource, field_624, this);
            }
            if (this_03 != nullptr) {
                this_03->UpdatePosition(vector3, matrix33);
            }
        }
    }

    // 0x1007d21d0
    void ParticleSystem::KeepActiveParticleEmitters(
        const eastl::vector<shared_ptr<ModelParticleSource>>& modelParticleSources) {
        shared_ptr<oldscape::midi2::MidiRequest>* midiRequest1;
        bool bVar2;
        bool bVar3;
        shared_ptr<oldscape::midi2::MidiRequest>* psVar4;
        shared_ptr<oldscape::midi2::MidiRequest>* midiRequest2;
        ParticleEmitter* particleEmitter;

        uint8_t* this_00 = &field_640;
        particleEmitter = (ParticleEmitter*)this_00->HeapBeginPtr();
        auto pPVar1 = this_00->end();
        if (particleEmitter != pPVar1) {
            do {
                midiRequest2 = (shared_ptr<oldscape::midi2::MidiRequest>*)modelParticleSources.HeapBeginPtr();
                psVar4 = (shared_ptr<oldscape::midi2::MidiRequest>*)modelParticleSources.end();
                if (midiRequest2 == psVar4) {
                LAB_1007d2299:
                    particleEmitter = (ParticleEmitter*)this_00->erase(particleEmitter);
                } else {
                    do {
                        midiRequest1 = (shared_ptr<oldscape::midi2::MidiRequest>*)particleEmitter->SSOBeginPtr();
                        bVar3 = *midiRequest1 == *midiRequest2;
                        bVar2 = true;
                        if (bVar3)
                            break;
                        midiRequest2 = midiRequest2 + 16;
                        bVar2 = false;
                    } while (midiRequest2 != psVar4);
                    if (!bVar2)
                        goto LAB_1007d2299;
                    particleEmitter = (ParticleEmitter*)&particleEmitter->field_10528;
                }
                pPVar1 = (ParticleEmitter*)this_00->end();
            } while (particleEmitter != pPVar1);
        }
    }

    // 0x1007d22c0
    void ParticleSystem::GatherDrawableElements(DrawableQueue& drawableQueue, RT7Core& rt7Core,
                                                const SceneViewData& sceneViewData,
                                                const EffectManager& effectManager) {
        Drawable_vtbl* pDVar1;
        bool cVar2;
        uint32_t uVar3;
        RenderPassType renderPassType;
        RenderPassBitSet* renderPassBitSet;
        MaterialManager* materialManager;
        TextureManager* this_00;
        TextureAtlasManager* textureAtlasManager;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* this_01;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* pAVar4;
        long lVar5;
        Layout* this_02;
        Vector3T<float>* vector3;
        CommandLine* pCVar6;
        long* plVar7;
        long* plVar8;
        ParticleSystem_DE* pPVar9;
        unsigned long uVar10;
        unsigned long uVar11;
        PlayerDataComparator<oldscape::social::FriendChatUser>* pPVar12;
        float fVar13;
        DrawableSortKey in_stack_ffffffffffffff28;
        Drawable local_a8;
        float local_94;
        unsigned int local_90;
        bool local_89;
        OBB local_88;

        if ((*PTR_m_showParticles_100ee6a58 != '\0') && (field_635 == '\0')) {
            renderPassBitSet = sceneViewData.GetRenderPassBits();
            cVar2 = m_material->CanRenderInPasses(*renderPassBitSet);
            if (cVar2) {
                if (field_632 != '\0') {
                    materialManager = rt7Core.GetMaterialManager();
                    this_00 = rt7Core.GetTextureManager();
                    textureAtlasManager = (TextureAtlasManager*)this_00->GetTextureAtlasManager();
                    UpdateMaterials(*materialManager, *textureAtlasManager);
                    field_633 = '\0';
                    field_634 = '\0';
                    this_01 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)field_640.HeapBeginPtr();
                    pAVar4 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)field_640.end();
                    for (; this_01 != pAVar4; this_01 = this_01 + 10528) {
                        lVar5 = this_01->data();
                        if (*(char*)(lVar5 + 112) == '\0') {
                            field_634 = '\x01';
                        } else {
                            field_633 = '\x01';
                        }
                    }
                    field_632 = '\0';
                }
                field_42848.reset();
                this_02 = (Layout*)sceneViewData.SSOBeginPtr();
                vector3 = (Vector3T<float>*)this_02->SSOBeginPtr();
                local_94 = (float)field_32.GetDistanceToPoint(*vector3);
                local_88 = math::OBB();
                field_32.GetOBB(local_88);
                if (*PTR_m_showOverdraw_100ee6a50 == '\0') {
                    plVar7 = (long*)sceneViewData.field_520.HeapBeginPtr();
                    plVar8 = (long*)sceneViewData.field_520.end();
                    for (; plVar7 != plVar8; plVar7 = plVar7 + 1) {
                        if (*plVar7 == 0) {
                            LogAssert("renderPass",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                      "runetek7/particles/ParticleSystem.cpp",
                                      323, nullptr);
                        }
                        renderPassType = (*plVar7)->GetPos();
                        if (14 < renderPassType) {
                        LAB_1007d2526:
                            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "graphics/runetek7/particles/ParticleSystem.cpp",
                                            373, "Unknown render pass (%d)", (unsigned long)renderPassType);
                        }
                        if ((21000U >> (renderPassType & 31) & 1) != 0)
                            goto LAB_1007d2550;
                        if ((20U >> (renderPassType & 31) & 1) == 0) {
                            if (renderPassType != 0)
                                goto LAB_1007d2526;
                            cVar2 = CastsShadow();
                            if ((cVar2) && (cVar2 = effectManager.IsEnabled(37), cVar2)) {
                                fVar13 = (float)(-(unsigned int)(0.0 < local_94) & (unsigned int)(local_94 + 0.5));
                                lVar5 = (long)fVar13;
                                local_a8 =
                                    eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>(
                                        (PlayerDataComparator<
                                            oldscape::social::
                                                FriendChatUser>*)((unsigned long)((unsigned int)lVar5 |
                                                                                  (unsigned int)(long)(fVar13 -
                                                                                                       9.223372e+18) &
                                                                                      (unsigned int)(lVar5 >> 63)) *
                                                                              -16777216 +
                                                                          72057594021150720 &
                                                                      72057594021150720 |
                                                                  144115188075855872));
                                pDVar1 = local_a8._vptr;
                                if (field_633 != '\0') {
                                    local_a8.shared_from_this();
                                    local_90 = GetPos();
                                    local_89 = true;
                                    pPVar9 = DrawableElementPool<ParticleSystem_DE>::Create<
                                        shared_ptr<ParticleSystem>, math::OBB&, float&, unsigned int, bool>(
                                        local_a8, local_88, local_94, local_90, local_89);
                                    local_a8.unique_ptr<true, void>(pPVar9);
                                    drawableQueue.AddDrawable((DrawableSortKey)effectManager, *pDVar1, &local_a8,
                                                              (DrawableGroupType)this, 4);
                                }
                                if (field_634 != '\0') {
                                    local_a8.shared_from_this();
                                    local_90 = GetPos();
                                    local_89 = false;
                                    pPVar9 = DrawableElementPool<ParticleSystem_DE>::Create<
                                        shared_ptr<ParticleSystem>, math::OBB&, float&, unsigned int, bool>(
                                        local_a8, local_88, local_94, local_90, local_89);
                                    local_a8.unique_ptr<true, void>(pPVar9);
                                    drawableQueue.AddDrawable((DrawableSortKey)effectManager, *pDVar1, &local_a8,
                                                              (DrawableGroupType)this, 5);
                                }
                            }
                            goto LAB_1007d2550;
                        }
                        pCVar6 = drawableQueue.GetDrawableGroup(renderPassType, 5);
                        uVar3 = pCVar6->GetPos();
                        switch (uVar3) {
                        case 0:
                            fVar13 = (float)((unsigned int)(local_94 + 0.5) & -(unsigned int)(0.0 < local_94));
                            uVar11 = (unsigned long)fVar13;
                            pPVar12 =
                                (PlayerDataComparator<oldscape::social::FriendChatUser>*)(((long)(fVar13 -
                                                                                                  9.223372e+18) &
                                                                                               (long)uVar11 >> 63 |
                                                                                           uVar11)
                                                                                              << 24 |
                                                                                          144115188092567552);
                            break;
                        case 1:
                            fVar13 = (float)((unsigned int)(local_94 + 0.5) & -(unsigned int)(0.0 < local_94));
                            lVar5 = (long)fVar13;
                            uVar11 = (unsigned long)((unsigned int)lVar5 | (unsigned int)(long)(fVar13 - 9.223372e+18) &
                                                                               (unsigned int)(lVar5 >> 63)) *
                                             -16777216 +
                                         72057594021150720 &
                                     72057594021150720;
                            goto LAB_1007d2903;
                        case 2:
                            uVar10 = ((long)(float)((unsigned int)(local_94 + 0.5) & -(unsigned int)(0.0 < local_94)) &
                                      4294967295U)
                                     << 8;
                            uVar11 = 144115188075856127;
                            goto LAB_1007d290d;
                        case 3:
                            fVar13 = (float)((unsigned int)(local_94 + 0.5) & -(unsigned int)(0.0 < local_94));
                            uVar11 = (unsigned long)fVar13;
                            uVar11 =
                                ((long)(fVar13 - 9.223372e+18) & (long)uVar11 >> 63 | uVar11) * -256 + 1099511627520;
                        LAB_1007d2903:
                            uVar10 = 144115188075855872;
                        LAB_1007d290d:
                            pPVar12 = (PlayerDataComparator<oldscape::social::FriendChatUser>*)(uVar11 | uVar10);
                            break;
                        case 4:
                            fVar13 = (float)((unsigned int)(local_94 + 0.5) & -(unsigned int)(0.0 < local_94));
                            lVar5 = (long)fVar13;
                            pPVar12 =
                                (PlayerDataComparator<
                                    oldscape::social::
                                        FriendChatUser>*)((unsigned long)((unsigned int)lVar5 |
                                                                          (unsigned int)(long)(fVar13 - 9.223372e+18) &
                                                                              (unsigned int)(lVar5 >> 63))
                                                              << 32 |
                                                          50266112);
                            break;
                        case 5:
                            fVar13 = (float)((unsigned int)(local_94 + 0.5) & -(unsigned int)(0.0 < local_94));
                            uVar11 = (unsigned long)fVar13;
                            pPVar12 =
                                (PlayerDataComparator<oldscape::social::FriendChatUser>*)(((long)(fVar13 -
                                                                                                  9.223372e+18) &
                                                                                               (long)uVar11 >> 63 |
                                                                                           uVar11) *
                                                                                              -4294967296 -
                                                                                          4261412864);
                            break;
                        default:
                            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "graphics/runetek7/particles/../renderer/DrawableSortKey.h",
                                            177, "Unknown sort key type");
                        }
                        local_a8 =
                            eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>(pPVar12);
                        pDVar1 = local_a8._vptr;
                        if (field_633 != '\0') {
                            local_a8.shared_from_this();
                            local_90 = GetPos();
                            local_89 = true;
                            pPVar9 =
                                DrawableElementPool<ParticleSystem_DE>::Create<shared_ptr<ParticleSystem>, math::OBB&,
                                                                               float&, unsigned int, bool>(
                                    local_a8, local_88, local_94, local_90, local_89);
                            local_a8.unique_ptr<true, void>(pPVar9);
                            drawableQueue.AddDrawable((DrawableSortKey)effectManager, *pDVar1, &local_a8,
                                                      (DrawableGroupType)this, 4);
                        }
                        if (field_634 != '\0') {
                            local_a8.shared_from_this();
                            local_90 = GetPos();
                            local_89 = false;
                            pPVar9 =
                                DrawableElementPool<ParticleSystem_DE>::Create<shared_ptr<ParticleSystem>, math::OBB&,
                                                                               float&, unsigned int, bool>(
                                    local_a8, local_88, local_94, local_90, local_89);
                            local_a8.unique_ptr<true, void>(pPVar9);
                            drawableQueue.AddDrawable((DrawableSortKey)effectManager, *pDVar1, &local_a8,
                                                      (DrawableGroupType)this, 5);
                        }
                    LAB_1007d2550:
                    }
                } else {
                    lVar5 = sceneViewData.GetRenderPass(4);
                    if (lVar5 != 0) {
                        pCVar6 = drawableQueue.GetDrawableGroup(4, 5);
                        uVar3 = pCVar6->GetPos();
                        switch (uVar3) {
                        case 0:
                            fVar13 = (float)(-(unsigned int)(0.0 < local_94) & (unsigned int)(local_94 + 0.5));
                            uVar11 = (unsigned long)fVar13;
                            pPVar12 =
                                (PlayerDataComparator<oldscape::social::FriendChatUser>*)(((long)(fVar13 -
                                                                                                  9.223372e+18) &
                                                                                               (long)uVar11 >> 63 |
                                                                                           uVar11)
                                                                                              << 24 |
                                                                                          144115188092567552);
                            break;
                        case 1:
                            fVar13 = (float)(-(unsigned int)(0.0 < local_94) & (unsigned int)(local_94 + 0.5));
                            lVar5 = (long)fVar13;
                            pPVar12 =
                                (PlayerDataComparator<
                                    oldscape::social::
                                        FriendChatUser>*)((unsigned long)((unsigned int)lVar5 |
                                                                          (unsigned int)(long)(fVar13 - 9.223372e+18) &
                                                                              (unsigned int)(lVar5 >> 63)) *
                                                                      -16777216 +
                                                                  72057594021150720 &
                                                              72057594021150720 |
                                                          144115188075855872);
                            break;
                        case 2:
                            pPVar12 =
                                (PlayerDataComparator<
                                    oldscape::social::FriendChatUser>*)(((long)(float)(-(unsigned int)(0.0 < local_94) &
                                                                                       (unsigned int)(local_94 + 0.5)) &
                                                                         4294967295U) *
                                                                            256 +
                                                                        144115188075856127);
                            break;
                        case 3:
                            fVar13 = (float)(-(unsigned int)(0.0 < local_94) & (unsigned int)(local_94 + 0.5));
                            uVar11 = (unsigned long)fVar13;
                            pPVar12 =
                                (PlayerDataComparator<oldscape::social::FriendChatUser>*)(((long)(fVar13 -
                                                                                                  9.223372e+18) &
                                                                                               (long)uVar11 >> 63 |
                                                                                           uVar11) *
                                                                                                  -256 +
                                                                                              1099511627520 |
                                                                                          144115188075855872);
                            break;
                        case 4:
                            fVar13 = (float)(-(unsigned int)(0.0 < local_94) & (unsigned int)(local_94 + 0.5));
                            lVar5 = (long)fVar13;
                            pPVar12 =
                                (PlayerDataComparator<
                                    oldscape::social::
                                        FriendChatUser>*)((unsigned long)((unsigned int)lVar5 |
                                                                          (unsigned int)(long)(fVar13 - 9.223372e+18) &
                                                                              (unsigned int)(lVar5 >> 63))
                                                              << 32 |
                                                          50266112);
                            break;
                        case 5:
                            fVar13 = (float)(-(unsigned int)(0.0 < local_94) & (unsigned int)(local_94 + 0.5));
                            uVar11 = (unsigned long)fVar13;
                            pPVar12 =
                                (PlayerDataComparator<oldscape::social::FriendChatUser>*)(((long)(fVar13 -
                                                                                                  9.223372e+18) &
                                                                                               (long)uVar11 >> 63 |
                                                                                           uVar11) *
                                                                                              -4294967296 -
                                                                                          4261412864);
                            break;
                        default:
                            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "graphics/runetek7/particles/../renderer/DrawableSortKey.h",
                                            177, "Unknown sort key type");
                        }
                        local_a8 =
                            eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>(pPVar12);
                        local_a8.shared_from_this();
                        local_90 = GetPos();
                        local_89 = false;
                        pPVar9 = DrawableElementPool<ParticleSystem_DE>::Create<shared_ptr<ParticleSystem>, math::OBB&,
                                                                                float&, unsigned int, bool>(
                            local_a8, local_88, local_94, local_90, local_89);
                        local_a8.unique_ptr<true, void>(pPVar9);
                        drawableQueue.AddDrawable(in_stack_ffffffffffffff28, *local_a8._vptr, &local_a8,
                                                  (DrawableGroupType)this, 5);
                    }
                }
            }
        }
    }

    // 0x1007d2e20
    void ParticleSystem::UpdateMaterials(const MaterialManager& materialManager,
                                         TextureAtlasManager& textureAtlasManager) {
        unsigned int uVar1;
        int iVar2;
        bool cVar3;
        int iVar4;
        long lVar5;
        Material** ppMVar6;
        Material** ppMVar7;
        ReturnValue this_04;
        Material* this_06;
        TextureAtlasReference* this_07;
        short sVar9;
        unsigned short arg1;
        bool bVar11;
        vector<Material const*, BucketAllocatorEASTL> local_88[24];
        ReturnValue local_48;
        int local_34;

        new (local_88) eastl::vector<Material const*, BucketAllocatorEASTL>();
        uint8_t* puVar10 = &field_640;
        auto this_03 = puVar10->HeapBeginPtr();
        auto local_70 = puVar10->end();
        Layout* local_58 = (Layout*)puVar10;
        if (this_03 == local_70) {
            local_34 = -1;
            sVar9 = 0;
        } else {
            local_34 = -1;
            sVar9 = 0;
            do {
                lVar5 = this_03->data();
                uVar1 = *(unsigned int*)(lVar5 + 104);
                ppMVar6 = (Material**)local_88->HeapBeginPtr();
                ppMVar7 = (Material**)local_88->end();
                ppMVar6 = eastl::find_if<Material const**,
                                         (MaterialManager const&)->UpdateMaterials(TextureAtlasManager&)::__7>(
                    ppMVar6, ppMVar7, (__7*)(unsigned long)uVar1);
                ppMVar7 = (Material**)local_88->end();
                if (ppMVar6 == ppMVar7) {
                    this_04 = (ReturnValue)materialManager.GetMaterial(uVar1);
                    cVar3 = this_04->ShowSkybox();
                    if (cVar3) {
                        cVar3 = this_04->IsRT7();
                        if (!cVar3) {
                            bVar11 = 0 < sVar9;
                            sVar9 = -1;
                            if (bVar11) {
                                LogAssert("rt7flag <= 0",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                          "graphics/runetek7/particles/ParticleSystem.cpp",
                                          490, "ParticleSystem cannot mix RT5 materials with RT7 materials");
                            }
                        } else {
                            bVar11 = sVar9 < 0;
                            sVar9 = 1;
                            if (bVar11) {
                                LogAssert("rt7flag >= 0",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                          "graphics/runetek7/particles/ParticleSystem.cpp",
                                          485, "ParticleSystem cannot mix RT5 materials with RT7 materials");
                            }
                        }
                        iVar4 = this_04->GetSeqDelay();
                        iVar2 = local_34;
                        if (iVar4 != -1) {
                            if ((local_34 != -1) && (iVar4 = this_04->GetSeqDelay(), iVar2 != iVar4)) {
                                LogAssert("viewportMapID == -1 || viewportMapID == material.GetViewportMapID()",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                          "graphics/runetek7/particles/ParticleSystem.cpp",
                                          495, nullptr);
                            }
                            local_34 = this_04->GetSeqDelay();
                        }
                        local_48[0] = this_04;
                        local_88->push_back(local_48);
                    }
                }
                this_03 = this_03 + 10528;
            } while (this_03 != local_70);
        }
        puVar10 = m_material;
        puVar10->SetOption(0, 0 < sVar9);
        lVar5 = puVar10->GetTextureAtlasReference();
        if (lVar5 != 0) {
            local_48 = shared_ptr();
            puVar10->SetTextureAtlasReference(local_48);
        }
        local_48.GetSharedAtlasRefFromMaterials(
            textureAtlasManager,
            *((vector<Material const*, BucketAllocatorEASTL>*)graphicutils::TextureAtlasUsage::USAGE_COMPRESSED));
        puVar10->SetTextureAtlasReference(local_48);
        lVar5 = puVar10->GetTextureAtlasReference();
        if (lVar5 == 0) {
            local_48 = textureAtlasManager.GetDummySharedMaterialReference(
                (TextureAtlasUsage*)graphicutils::TextureAtlasUsage::USAGE_COMPRESSED);
            puVar10->SetTextureAtlasReference(local_48);
            lVar5 = puVar10->GetTextureAtlasReference();
            if (lVar5 == 0) {
                LogAssert("m_material.GetTextureAtlasReference() != nullptr",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "particles/ParticleSystem.cpp",
                          517, nullptr);
            }
        }
        puVar10->SetEndPosition(local_34);
        Layout* this_01 = local_58;
        auto this_05 = local_58->HeapBeginPtr();
        auto pPVar8 = this_01->end();
        for (; this_05 != pPVar8; this_05 = (ParticleEmitter*)&this_05->field_10528) {
            lVar5 = this_05->data();
            uVar1 = *(unsigned int*)(lVar5 + 104);
            this_06 = materialManager.GetMaterial(uVar1);
            if ((uVar1 == 4294967295) || (cVar3 = this_06->ShowSkybox(), !cVar3)) {
                arg1 = 0;
            } else {
                this_07 = (TextureAtlasReference*)puVar10->GetTextureAtlasReference();
                ((TextureAtlas*)this_07->GetTextureAtlas())->GetMaterialSettingsSlotXY(local_48, uVar1);
                arg1 = local_48[0]._0_2_;
            }
            this_05->SetAtlasMaterialSettingsSlotXY(arg1);
        }
    }

    // 0x1007d3340
    void ParticleSystem::TranslateParticles(const math::Vector3T<float>& vector3) {
        auto this_00 = field_640.HeapBeginPtr();
        auto pPVar2 = field_640.end();
        for (; this_00 != pPVar2; this_00 = (ParticleEmitter*)&this_00->field_10528) {
            if (this_00->IsHidden() == '\0') {
                this_00->TranslateParticles(vector3);
            }
        }
    }

    // 0x1007d33b0
    void ParticleSystem::RenderDebug(RenderPassType renderPassType, DrawableElement& drawableElement) const {
        long* plVar1;
        AABB local_48;

        if (*PTR_m_showWorldAABB_100ee6a60 != '\0') {
            local_48 = math::AABB(field_32);
            plVar1 = DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar1 != nullptr) {
                new (&local_48.field_32) oldscape::sidebars::SideBarData(-1, 3);
                (**(void (**)(...))(*plVar1 + 72))(plVar1, &local_48, &local_48.field_32);
            }
        }
        auto this_00 = field_640.HeapBeginPtr();
        auto pPVar2 = field_640.end();
        for (; this_00 != pPVar2; this_00 = (ParticleEmitter*)&this_00->field_10528) {
            this_00->RenderDebug();
        }
    }

    // 0x1007d3460
    uint64_t ParticleSystem::CalculateViewDistanceAndSort(const math::Matrix44T<float>& matrix44) {
        float fVar2;
        float fVar1;
        float fVar4;
        float fVar3;
        char extraout_AL;
        uint64_t extraout_var;
        type* ptVar5;
        type* ptVar6;
        uint64_t extraout_var_00;
        uint64_t local_28;

        &field_42848 == matrix44;
        uint64_t uVar7 = extraout_var;
        if (extraout_AL == '\0') {
            (&field_42848)->operator=(matrix44);
            local_28 = CalculateViewDistances(matrix44);
            ptVar5 = std::get<0ul, float, float>(local_28);
            ptVar6 = std::get<1ul, float, float>(local_28);
            fVar1 = *(float*)ptVar5;
            fVar2 = *(float*)ptVar5;
            fVar3 = *(float*)ptVar6;
            fVar4 = *(float*)ptVar6;
            uVar7 = (uint64_t)((unsigned long)ptVar6 >> 8);
            this[1].m_material[8] = (0.0 < fVar4 || fVar3 == 0.0) && (0.0 < fVar2 || fVar1 == 0.0);
            if ((0.0 < fVar4 || fVar3 == 0.0) && (0.0 < fVar2 || fVar1 == 0.0)) {
                SortParticles();
                uVar7 = extraout_var_00;
            }
        }
        return this[1].m_material[8];
    }

    // 0x1007d3570
    uint64_t ParticleSystem::CalculateViewDistances(const math::Matrix44T<float>& matrix44) {
        uint64_t local_58;
        uint64_t local_50;

        float local_38 = 3.4028235e+38;
        float local_34 = -3.4028235e+38;
        float* pfVar2 = (float*)math::Matrix44T<float>::operator()(matrix44, 2);
        float local_44 = *pfVar2;
        pfVar2 = (float*)math::Matrix44T<float>::operator()(matrix44, 6);
        float local_40 = *pfVar2;
        pfVar2 = (float*)math::Matrix44T<float>::operator()(matrix44, 10);
        float local_3c = *pfVar2;
        pfVar2 = (float*)math::Matrix44T<float>::operator()(matrix44, 14);
        ImVec4 local_68(local_44, local_40, local_3c, *pfVar2);
        auto this_00 = field_640.HeapBeginPtr();
        auto pPVar3 = field_640.end();
        if (this_00 != pPVar3) {
            do {
                if (this_00->IsHidden() == '\0') {
                    local_50 = this_00->CalculateViewDistances(local_68);
                    pfVar2 = std::min<float>(local_50, local_38);
                    local_38 = *pfVar2;
                    pfVar2 = std::max<float>(*((float*)((long)&local_50 + 4)), local_34);
                    local_34 = *pfVar2;
                }
                this_00 = (ParticleEmitter*)&this_00->field_10528;
            } while (this_00 != pPVar3);
        }
        local_58.pair<float&, float&, false>(local_38, local_34);
        return local_58;
    }

    // 0x1007d36d0
    void ParticleSystem::SortParticles() {
        auto this_00 = field_640.HeapBeginPtr();
        auto pPVar2 = field_640.end();
        for (; this_00 != pPVar2; this_00 = (ParticleEmitter*)&this_00->field_10528) {
            if (this_00->IsHidden() == '\0') {
                this_00->SortParticles();
            }
        }
    }

    // 0x1007d3820
    unsigned long
    ParticleSystem::ContainsEmitterSource(const shared_ptr<ModelParticleSource>& modelParticleSource) const {
        bool bVar1;
        shared_ptr<oldscape::midi2::MidiRequest>* psVar3;

        uint8_t* this_01 = &field_640;
        auto this_00 = this_01->HeapBeginPtr();
        auto pLVar2 = this_01->end();
        bool bVar4 = this_00 == pLVar2;
        if (!bVar4) {
            psVar3 = (shared_ptr<oldscape::midi2::MidiRequest>*)this_00->SSOBeginPtr();
            bVar1 = *psVar3 == modelParticleSource;
            while (!bVar1) {
                this_00 = this_00 + 10528;
                bVar4 = this_00 == pLVar2;
                if (bVar4)
                    break;
                psVar3 = (shared_ptr<oldscape::midi2::MidiRequest>*)this_00->SSOBeginPtr();
                bVar1 = *psVar3 == modelParticleSource;
            }
        }
        return ((((uint64_t)((int64_t)((unsigned long)this_01 >> 8)) << 8) | (uint8_t)bVar4) ^ 1) & 4294967295;
    }

    // 0x1007d38c0
    unsigned long
    ParticleSystem::CanBatchEmitterSource(const MaterialManager& materialManager,
                                          const shared_ptr<ModelParticleSource>& modelParticleSource) const {
        bool cVar1;
        uint64_t unaff_R13;

        auto this_00 = field_640.HeapBeginPtr();
        auto pPVar2 = field_640.end();
        unsigned long uVar3 =
            (((uint64_t)((int64_t)((unsigned long)unaff_R13 >> 8)) << 8) | (uint8_t)(this_00 == pPVar2));
        if (this_00 != pPVar2) {
            cVar1 = this_00->CanBatch(materialManager, modelParticleSource);
            while (cVar1) {
                this_00 = (ParticleEmitter*)&this_00->field_10528;
                uVar3 = (((uint64_t)((int64_t)(uVar3 >> 8)) << 8) | (uint8_t)(this_00 == pPVar2));
                if (this_00 == pPVar2)
                    break;
                cVar1 = this_00->CanBatch(materialManager, modelParticleSource);
            }
        }
        return uVar3 & 4294967295;
    }

    // 0x1007d3960
    unsigned long
    ParticleSystem::GetParticleSystemForEmitter(RT7Core& rt7Core,
                                                eastl::fixed_vector<shared_ptr<ParticleSystem>, 1ul>& particleSystems,
                                                const shared_ptr<ModelParticleSource>& modelParticleSource) {
        bool cVar2;
        shared_ptr<ParticleSystem>* psVar4;
        ParticleSystem* pPVar5;
        MaterialManager* pMVar6;
        unsigned long unaff_RBX;
        unsigned long arg1;
        shared_ptr<ParticleSystem> local_58;
        uint64_t local_48;
        ParticleSystem* local_38;

        int iVar3 = particleSystems.size();
        bool bVar1 = 0 < iVar3;
        if (iVar3 < 1) {
        LAB_1007d39f3:
            if (bVar1) {
                return unaff_RBX;
            }
        } else {
            unaff_RBX = 0;
            psVar4 = &particleSystems[0];
            pPVar5 = (ParticleSystem*)(*psVar4).operator->();
            cVar2 = ContainsEmitterSource(pPVar5, modelParticleSource);
            if (!cVar2) {
                unaff_RBX = 0;
                do {
                    unaff_RBX = unaff_RBX + 1;
                    iVar3 = particleSystems.size();
                    bVar1 = (long)unaff_RBX < (long)iVar3;
                    if ((long)iVar3 <= (long)unaff_RBX)
                        goto LAB_1007d39f3;
                    psVar4 = &particleSystems[unaff_RBX];
                    pPVar5 = (ParticleSystem*)(*psVar4).operator->();
                    cVar2 = ContainsEmitterSource(pPVar5, modelParticleSource);
                } while (!cVar2);
            }
            if (bVar1) {
                return unaff_RBX;
            }
        }
        iVar3 = particleSystems.size();
        bVar1 = 0 < iVar3;
        if (iVar3 < 1) {
        LAB_1007d3a9b:
            arg1 = unaff_RBX;
        } else {
            psVar4 = &particleSystems[0];
            local_38 = (ParticleSystem*)(*psVar4).operator->();
            pMVar6 = rt7Core.GetMaterialManager();
            pPVar5 = local_38;
            local_38 = (ParticleSystem*)modelParticleSource;
            cVar2 = CanBatchEmitterSource(pPVar5, pMVar6, modelParticleSource);
            arg1 = 0;
            if (!cVar2) {
                arg1 = 0;
                do {
                    arg1 = arg1 + 1;
                    iVar3 = particleSystems.size();
                    bVar1 = (long)arg1 < (long)iVar3;
                    if ((long)iVar3 <= (long)arg1)
                        goto LAB_1007d3a9b;
                    psVar4 = &particleSystems[arg1];
                    pPVar5 = (ParticleSystem*)(*psVar4).operator->();
                    pMVar6 = rt7Core.GetMaterialManager();
                    cVar2 = CanBatchEmitterSource(pPVar5, pMVar6, (shared_ptr<ModelParticleSource>*)local_38);
                } while (!cVar2);
            }
        }
        if (!bVar1) {
            local_48 = rt7Core.GetParticleManager();
            MakeSharedPool<ParticleSystem, 32>::MakeShared<ParticleManager*>((ParticleManager**)&local_58);
            particleSystems.push_back(local_58);
            arg1 = particleSystems.size() - 1;
        }
        return arg1;
    }

    // 0x1007f7320
    bool ParticleSystem::UpdateMaterials(MaterialManager const&,
                                         TextureAtlasManager&)::$_7::operator()(const Material* material) const {
        return material->GetZ() == *(int*)this;
    }

} // namespace jag::graphics
