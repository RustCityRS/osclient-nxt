// libs/graphics/runetek7/particles/ParticleSystem.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "ParticleSystem.h"

namespace jag::graphics {
    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    ParticleSystem::GetTransformedTriangle(unsigned int, math::Vector4T<float> (&)[3]);

    // 0x100049810: the linker folded this into oldscape::option::Option<oldscape::WindowSavedPosition>::GetDefaultValue() const, which has identical code
    ParticleMaterial ParticleSystem::GetMaterial();

    // 0x1007ccff0, 144 bytes, placed by class name and debug map
    // ParticleSystem::GetEffectors(eastl::vector<ParticleEffector const*, BucketAllocatorEASTL>&, unsigned int) const
    void ParticleSystem::GetEffectors(vector* param_1, uint param_2) {
        ParticleEffector* in_RAX;
        ParticleEffector* this_00;
        ParticleEffector* pPVar1;
        uint* puVar2;
        ParticleEffector* local_38;

        local_38 = in_RAX;
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        this_00 = (ParticleEffector*)(&field_42800)->HeapBeginPtr();
        pPVar1 = (ParticleEffector*)(&field_42800)->end();
        if (this_00 != pPVar1) {
            do {
                puVar2 = (uint*)this_00->data();
                if (*puVar2 == param_2) {
                    local_38 = this_00;
                    param_1->push_back(&local_38);
                }
                this_00 = (ParticleEffector*)&this_00->field_72;
            } while (this_00 != pPVar1);
        }
    }

    // 0x1007ce900, 16 bytes, placed by class name
    // ParticleSystem::CreateRenderingResources()
    void ParticleSystem::CreateRenderingResources() {}

    // 0x1007ce910, 96 bytes, placed by class name
    // ParticleSystem::DestroyRenderingResources()
    void ParticleSystem::DestroyRenderingResources() {
        shared_ptr local_28;

        m_material->DestroyRenderingResources();
        new (&local_28) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        (m_material, &local_28)->SetTextureAtlasReference();
        local_28.~shared_ptr();
    }

    // 0x1007d16e0, 288 bytes, base-object constructor, placed by class name
    // ParticleSystem::ParticleSystem(ParticleManager*)
    void ParticleSystem::ParticleSystem(ParticleManager* param_1) {
        new (this) Drawable(9);
        new (&field_16) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        new (this) MakeSharedPool<ParticleSystem, 32>();
        field_0 = &PTR__ParticleSystem_100f14c70;
        new (&field_32) math::AABB();
        new (m_material) ParticleMaterial();
        field_624 = param_1;
        field_632 = '\0';
        field_633 = '\0';
        field_634 = '\0';
        field_635 = '\0';
        new (&field_640) eastl::fixed_vector<ParticleEmitter, 4ul, true, eastl::allocator>();
        new (&field_42800) eastl::vector<ParticleEffector, eastl::allocator>();
        m_particleCount = 0;
        new (&field_42848) std::optional<math::Matrix44T<float>>();
        this[1].m_material[8] = 0;
        (m_material, 0)->InitRenderPassEffects();
        (field_624, this)->RegisterSystem();
    }

    // 0x1007d18c0, 16 bytes, complete-object constructor, placed by class name
    // ParticleSystem::ParticleSystem(ParticleManager*): jumps straight to the base-object constructor

    // 0x1007d18d0, 160 bytes, base-object destructor, placed by class name
    // ParticleSystem::~ParticleSystem()
    void ParticleSystem::~ParticleSystem() {
        field_0 = &PTR__ParticleSystem_100f14c70;
        DestroyRenderingResources(this);
        (field_624, this)->UnregisterSystem();
        (&field_42800)->~vector();
        (&field_640)->~fixed_vector();
        m_material->~ParticleMaterial();
        (&field_16)->~enable_shared_from_this();
        ~AutoSingleton();
    }

    // 0x1007d1970, 16 bytes, complete-object destructor, placed by class name
    // ParticleSystem::~ParticleSystem(): jumps straight to the base-object destructor

    // 0x1007d1980, 32 bytes, deleting destructor, placed by class name
    // ParticleSystem::~ParticleSystem()
    void ParticleSystem::~ParticleSystem() {
        ~ParticleSystem(this);
        operator_delete(this);
    }

    // 0x1007d19a0, 80 bytes, placed by class name
    // ParticleSystem::DisableEmitters()
    void ParticleSystem::DisableEmitters() {
        ParticleEmitter* this_00;
        ParticleEmitter* pPVar1;

        this_00 = (ParticleEmitter*)(&field_640)->HeapBeginPtr();
        pPVar1 = (ParticleEmitter*)(&field_640)->end();
        for (; this_00 != pPVar1; this_00 = (ParticleEmitter*)&this_00->field_10528) {
            this_00->SetEnabled(false);
        }
    }

    // 0x1007d1a00, 128 bytes, placed by class name
    // ParticleSystem::Update(float)
    void ParticleSystem::Update(float param_1) {
        undefined1* this_00;
        eastl* peVar1;
        undefined8 uVar2;
        ParticleEmitter* pPVar3;
        ParticleEmitter* pPVar4;
        undefined1 local_24[4];

        (&field_32)->Reset();
        m_particleCount = 0;
        this_00 = &field_640;
        peVar1 = (eastl*)this_00->HeapBeginPtr();
        uVar2 = this_00->end();
        pPVar3 = eastl::remove_if<ParticleEmitter*, float->Update()::__6>(peVar1, uVar2, local_24, this);
        pPVar4 = (ParticleEmitter*)this_00->end();
        this_00->erase(pPVar3, pPVar4);
    }

    // 0x1007d1b50, 144 bytes, placed by class name
    // ParticleSystem::UnregisterModelEmitter(shared_ptr<ModelParticleSource> const&)
    void ParticleSystem::UnregisterModelEmitter(shared_ptr* param_1) {
        ParticleEmitter* pPVar3;
        ParticleEmitter* this_00;
        vector* this_01;
        shared_ptr* extraout_RDX;
        shared_ptr* psVar4;
        undefined1* this_02;

        psVar4 = param_1;
        if (field_624->ParticlesReady() != '\0') {
            this_02 = &field_640;
            pPVar3 = (ParticleEmitter*)this_02->end();
            this_00 = (ParticleEmitter*)this_02->HeapBeginPtr();
            if (this_00 != pPVar3) {
                do {
                    this_01 = this_00->SSOBeginPtr(psVar4);
                    psVar4 = param_1;
                    if (operator==((jag*)this_01, param_1, extraout_RDX)) {
                        this_02->erase(this_00);
                        return;
                    }
                    this_00 = (ParticleEmitter*)&this_00->field_10528;
                } while (this_00 != pPVar3);
            }
        }
    }

    // 0x1007d1c80, 352 bytes, placed by class name
    // ParticleSystem::RegisterModelEmitter(shared_ptr<ModelParticleSource> const&, math::Vector3T<float> const&, math::Vector3T<float> const&, math::Vector3T<float> const&, bool, bool)
    void ParticleSystem::RegisterModelEmitter(shared_ptr* param_1, Vector3T* param_2, Vector3T* param_3,
                                              Vector3T* param_4, bool param_5, bool param_6) {
        Vector3T* pVVar1;
        Vector3T* pVVar2;
        vector<ParticleEmitter, eastl::fixed_vector_allocator<10528ul, 4ul, 16ul, 0ul, true, eastl::allocator>>*
            this_00;
        ParticleSystem* pPVar3;
        Vector3T* pVVar4;
        char cVar5;
        bool bVar6;
        ParticleEmitter* this_01;
        ParticleEmitter* pPVar7;
        vector* this_02;
        ulong uVar8;
        ParticleEmitter* this_03;
        shared_ptr* extraout_RDX;
        undefined1* this_04;
        shared_ptr* psVar9;
        undefined3 in_register_00000089;
        ParticleSystem* local_68;
        Vector3T* local_60;
        Vector3T* local_58;
        vector<ParticleEmitter, eastl::fixed_vector_allocator<10528ul, 4ul, 16ul, 0ul, true, eastl::allocator>>*
            local_50;
        ParticleSystem* local_48;
        Vector3T* local_40;
        undefined4 local_34;

        local_34 = CONCAT31(in_register_00000089, param_5);
        psVar9 = param_1;
        cVar5 = field_624->ParticlesReady();
        if (cVar5 != '\0') {
            this_04 = &field_640;
            local_60 = param_3;
            local_58 = param_2;
            local_48 = this;
            local_40 = param_4;
            this_01 = (ParticleEmitter*)this_04->HeapBeginPtr();
            local_50 = (vector<ParticleEmitter,
                               eastl::fixed_vector_allocator<10528ul, 4ul, 16ul, 0ul, true, eastl::allocator>>*)this_04;
            pPVar7 = (ParticleEmitter*)this_04->end();
            if (this_01 == pPVar7) {
                this_03 = (ParticleEmitter*)0;
            } else {
                this_03 = (ParticleEmitter*)0;
                do {
                    this_02 = this_01->SSOBeginPtr(psVar9);
                    psVar9 = param_1;
                    bVar6 = operator==((jag*)this_02, param_1, extraout_RDX);
                    if (bVar6) {
                        this_03 = this_01;
                        break;
                    }
                    this_01 = (ParticleEmitter*)&this_01->field_10528;
                } while (this_01 != pPVar7);
            }
            this_00 = local_50;
            pVVar2 = local_58;
            pVVar1 = local_60;
            if (this_03 == (ParticleEmitter*)0) {
                uVar8 = eastl::vector<ParticleEmitter, eastl::fixed_vector_allocator<10528ul, 4ul, 16ul, 0ul, true,
                                                                                     eastl::allocator>>::size(local_50);
                pPVar3 = local_48;
                if (4095 < uVar8) {
                    return;
                }
                local_68 = local_48;
                this_03 =
                    eastl::vector<ParticleEmitter,
                                  eastl::fixed_vector_allocator<10528ul, 4ul, 16ul, 0ul, true, eastl::allocator>>::
                        emplace_back<shared_ptr<ModelParticleSource> const&, ParticleManager*&, ParticleSystem*>(
                            this_00, param_1, &local_48->field_624, &local_68);
                pPVar3->field_632 = '\x01';
            }
            pVVar4 = local_40;
            if (this_03 != (ParticleEmitter*)0) {
                if ((char)local_34 != '\0') {
                    this_03->SetEnabled(false);
                }
                this_03->Hide(param_6);
                this_03->UpdatePosition(pVVar2, pVVar1, pVVar4);
            }
        }
    }

    // 0x1007d1ec0, 144 bytes, placed by class name
    // ParticleSystem::UnregisterModelEffector(shared_ptr<ModelParticleSource> const&)
    void ParticleSystem::UnregisterModelEffector(shared_ptr* param_1) {
        ParticleEffector* pPVar3;
        ParticleEffector* this_00;
        vector* this_01;
        shared_ptr* extraout_RDX;
        shared_ptr* psVar4;
        undefined1* this_02;

        psVar4 = param_1;
        if (field_624->ParticlesReady() != '\0') {
            this_02 = &field_42800;
            pPVar3 = (ParticleEffector*)this_02->end();
            this_00 = (ParticleEffector*)this_02->HeapBeginPtr();
            if (this_00 != pPVar3) {
                do {
                    this_01 = this_00->SSOBeginPtr(psVar4);
                    psVar4 = param_1;
                    if (operator==((jag*)this_01, param_1, extraout_RDX)) {
                        this_02->erase(this_00);
                        return;
                    }
                    this_00 = (ParticleEffector*)&this_00->field_72;
                } while (this_00 != pPVar3);
            }
        }
    }

    // 0x1007d1fb0, 272 bytes, placed by class name
    // ParticleSystem::RegisterModelEffector(shared_ptr<ModelParticleSource> const&, math::Vector3T<float> const&, math::Matrix33T<float> const&)
    void ParticleSystem::RegisterModelEffector(shared_ptr* param_1, Vector3T* param_2, Matrix33T* param_3) {
        undefined1* this_00;
        vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle, eastl::allocator>* this_01;
        ParticleEffector* this_02;
        ParticleEffector* pPVar5;
        vector* this_03;
        ulong uVar6;
        ParticleEffector* this_04;
        shared_ptr* extraout_RDX;
        shared_ptr* psVar7;
        ParticleSystem* local_50;
        vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle, eastl::allocator>* local_38;

        psVar7 = param_1;
        if (field_624->ParticlesReady() != '\0') {
            this_00 = &field_42800;
            this_02 = (ParticleEffector*)this_00->HeapBeginPtr();
            local_38 = (vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle, eastl::allocator>*)this_00;
            pPVar5 = (ParticleEffector*)this_00->end();
            if (this_02 == pPVar5) {
                this_04 = (ParticleEffector*)0;
            } else {
                this_04 = (ParticleEffector*)0;
                do {
                    this_03 = this_02->SSOBeginPtr(psVar7);
                    psVar7 = param_1;
                    if (operator==((jag*)this_03, param_1, extraout_RDX)) {
                        this_04 = this_02;
                        break;
                    }
                    this_02 = (ParticleEffector*)&this_02->field_72;
                } while (this_02 != pPVar5);
            }
            this_01 = local_38;
            if (this_04 == (ParticleEffector*)0) {
                uVar6 = eastl::vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle, eastl::allocator>::size(
                    local_38);
                if (4095 < uVar6) {
                    return;
                }
                local_50 = this;
                this_04 = eastl::vector<ParticleEffector, eastl::allocator>::emplace_back<
                    shared_ptr<ModelParticleSource> const&, ParticleManager*&, ParticleSystem*>(
                    (vector<ParticleEffector, eastl::allocator>*)this_01, param_1, &field_624, &local_50);
            }
            if (this_04 != (ParticleEffector*)0) {
                this_04->UpdatePosition(param_2, param_3);
            }
        }
    }

    // 0x1007d21d0, 240 bytes, placed by class name
    // ParticleSystem::KeepActiveParticleEmitters(eastl::vector<shared_ptr<ModelParticleSource>, eastl::allocator> const&)
    void ParticleSystem::KeepActiveParticleEmitters(vector* param_1) {
        bool bVar1;
        bool bVar2;
        ParticleEmitter* this_00;
        ParticleEmitter* pPVar3;
        ParticleEmitter* pPVar4;
        vector* this_01;
        shared_ptr* extraout_RDX;
        undefined1* this_02;
        ParticleEmitter* pPVar5;

        this_02 = &field_640;
        pPVar5 = (ParticleEmitter*)param_1;
        this_00 = (ParticleEmitter*)this_02->HeapBeginPtr();
        pPVar3 = (ParticleEmitter*)this_02->end();
        if (this_00 != pPVar3) {
            do {
                pPVar3 = (ParticleEmitter*)param_1->HeapBeginPtr();
                pPVar4 = (ParticleEmitter*)param_1->end();
                if (pPVar3 == pPVar4) {
                LAB_1007d2299:
                    pPVar3 = (ParticleEmitter*)this_02->erase(this_00);
                    pPVar5 = this_00;
                } else {
                    do {
                        this_01 = this_00->SSOBeginPtr(pPVar5);
                        pPVar5 = pPVar3;
                        bVar2 = operator==((jag*)this_01, (shared_ptr*)pPVar3, extraout_RDX);
                        bVar1 = true;
                        if (bVar2)
                            break;
                        pPVar3 = (ParticleEmitter*)&pPVar3->m_emitterTemplate;
                        bVar1 = false;
                    } while (pPVar3 != pPVar4);
                    if (!bVar1)
                        goto LAB_1007d2299;
                    pPVar3 = (ParticleEmitter*)&this_00->field_10528;
                }
                pPVar4 = (ParticleEmitter*)this_02->end();
                this_00 = pPVar3;
            } while (pPVar3 != pPVar4);
        }
    }

    // 0x1007d22c0, 2912 bytes, placed by class name
    // ParticleSystem::GatherDrawableElements(DrawableQueue&, RT7Core&, SceneViewData const&, EffectManager const&)
    void ParticleSystem::GatherDrawableElements(DrawableQueue* param_1, RT7Core* param_2, SceneViewData* param_3,
                                                EffectManager* param_4) {
        undefined8 uVar1;
        char cVar2;
        undefined4 uVar3;
        uint uVar4;
        MaterialManager* pMVar5;
        TextureManager* this_00;
        TextureAtlasManager* pTVar6;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* this_01;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* pAVar7;
        long lVar8;
        vector* pvVar9;
        CommandLine* pCVar10;
        long* plVar11;
        long* plVar12;
        ParticleSystem_DE* pPVar13;
        ulong uVar14;
        ulong uVar15;
        uint uVar16;
        BucketAllocatorEASTL* extraout_RDX;
        BucketAllocatorEASTL* extraout_RDX_00;
        BucketAllocatorEASTL* pBVar17;
        BucketAllocatorEASTL* pBVar18;
        float fVar19;
        shared_ptr local_a8;
        float local_94;
        uint local_90;
        bool local_89;
        OBB local_88;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if ((*PTR_m_showParticles_100ee6a58 != '\0') && (field_635 == '\0')) {
            pMVar5 = (MaterialManager*)param_3->GetRenderPassBits();
            cVar2 = (m_material, (RenderPassBitSet*)pMVar5)->CanRenderInPasses();
            if (cVar2 != '\0') {
                if (field_632 != '\0') {
                    pMVar5 = (MaterialManager*)param_2->GetMaterialManager();
                    this_00 = (TextureManager*)param_2->GetTextureManager();
                    pTVar6 = (TextureAtlasManager*)this_00->GetTextureAtlasManager();
                    UpdateMaterials(this, pMVar5, pTVar6);
                    field_633 = '\0';
                    field_634 = '\0';
                    this_01 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                                     std::default_delete<LoadingScreenScript::AnimLayer>>,
                                     eastl::allocator>*)(&field_640)
                                  ->HeapBeginPtr();
                    pAVar7 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                                    std::default_delete<LoadingScreenScript::AnimLayer>>,
                                    eastl::allocator>*)(&field_640)
                                 ->end();
                    for (; this_01 != pAVar7; this_01 = this_01 + 10528) {
                        lVar8 = this_01->data();
                        if (*(char*)(lVar8 + 112) == '\0') {
                            field_634 = '\x01';
                        } else {
                            field_633 = '\x01';
                        }
                    }
                    field_632 = '\0';
                }
                (&field_42848)->reset();
                pvVar9 = param_3->SSOBeginPtr(pMVar5);
                pvVar9 = pvVar9->SSOBeginPtr(pMVar5);
                local_94 = (float)(&field_32, (Vector3T*)pvVar9)->GetDistanceToPoint();
                new (&local_88) math::OBB();
                (&field_32, &local_88)->GetOBB();
                if (*PTR_m_showOverdraw_100ee6a50 == '\0') {
                    plVar11 = (long*)(&param_3->field_520)->HeapBeginPtr();
                    plVar12 = (long*)(&param_3->field_520)->end();
                    for (; plVar11 != plVar12; plVar11 = plVar11 + 1) {
                        if (*plVar11 == 0) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("renderPass",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                      "runetek7/particles/ParticleSystem.cpp",
                                      323, (char*)0);
                        }
                        uVar4 = (*plVar11)->GetPos();
                        if (14 < uVar4) {
                        LAB_1007d2526:
                            /* WARNING: Subroutine does not return */
                            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "graphics/runetek7/particles/ParticleSystem.cpp",
                                            373, "Unknown render pass (%d)", (ulong)uVar4);
                        }
                        if ((21000U >> (uVar4 & 31) & 1) != 0)
                            goto LAB_1007d2550;
                        if ((20U >> (uVar4 & 31) & 1) == 0) {
                            if (uVar4 != 0)
                                goto LAB_1007d2526;
                            cVar2 = CastsShadow();
                            if ((cVar2 != '\0') && (cVar2 = param_4->IsEnabled(37), cVar2 != '\0')) {
                                fVar19 = (float)(-(uint)(0.0 < local_94) & (uint)(local_94 + 0.5));
                                lVar8 = (long)fVar19;
                                uVar4 = (uint)(long)(fVar19 - 9.223372e+18) & (uint)(lVar8 >> 63);
                                new (&local_a8)
                                    eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>(
                                        (EntityHighlight**)((ulong)((uint)lVar8 | uVar4) * -16777216 +
                                                                    72057594021150720 &
                                                                72057594021150720 |
                                                            144115188075855872),
                                        (BucketAllocatorEASTL*)(ulong)uVar4);
                                uVar1 = local_a8._0_8_;
                                if (field_633 != '\0') {
                                    local_a8.shared_from_this();
                                    local_90 = GetPos();
                                    local_89 = true;
                                    pPVar13 = DrawableElementPool<ParticleSystem_DE>::Create<
                                        shared_ptr<ParticleSystem>, math::OBB&, float&, unsigned int, bool>(
                                        &local_a8, &local_88, &local_94, &local_90, &local_89);
                                    local_a8.~shared_ptr();
                                    std::unique_ptr<DrawableElement, DrawableElementDeleter>::unique_ptr<true, void>(
                                        (unique_ptr<DrawableElement, DrawableElementDeleter>*)&local_a8,
                                        (DrawableElement*)pPVar13);
                                    param_1->AddDrawable(uVar1, &local_a8, this, 4, 0);
                                    local_a8.~unique_ptr();
                                }
                                if (field_634 != '\0') {
                                    local_a8.shared_from_this();
                                    local_90 = GetPos();
                                    local_89 = false;
                                    pPVar13 = DrawableElementPool<ParticleSystem_DE>::Create<
                                        shared_ptr<ParticleSystem>, math::OBB&, float&, unsigned int, bool>(
                                        &local_a8, &local_88, &local_94, &local_90, &local_89);
                                    local_a8.~shared_ptr();
                                    std::unique_ptr<DrawableElement, DrawableElementDeleter>::unique_ptr<true, void>(
                                        (unique_ptr<DrawableElement, DrawableElementDeleter>*)&local_a8,
                                        (DrawableElement*)pPVar13);
                                    param_1->AddDrawable(uVar1, &local_a8, this, 5, 0);
                                    local_a8.~unique_ptr();
                                }
                            }
                            goto LAB_1007d2550;
                        }
                        pCVar10 = (CommandLine*)param_1->GetDrawableGroup(uVar4, 5);
                        uVar3 = pCVar10->GetPos();
                        pBVar17 = extraout_RDX_00;
                        switch (uVar3) {
                        case 0:
                            fVar19 = (float)((uint)(local_94 + 0.5) & -(uint)(0.0 < local_94));
                            uVar15 = (ulong)fVar19;
                            pBVar17 =
                                (BucketAllocatorEASTL*)(((long)(fVar19 - 9.223372e+18) & (long)uVar15 >> 63 | uVar15)
                                                        << 24);
                            pBVar18 = (BucketAllocatorEASTL*)((ulong)pBVar17 | 144115188092567552);
                            break;
                        case 1:
                            fVar19 = (float)((uint)(local_94 + 0.5) & -(uint)(0.0 < local_94));
                            lVar8 = (long)fVar19;
                            uVar16 = (uint)(long)(fVar19 - 9.223372e+18) & (uint)(lVar8 >> 63);
                            pBVar17 = (BucketAllocatorEASTL*)(ulong)uVar16;
                            uVar15 = (ulong)((uint)lVar8 | uVar16) * -16777216 + 72057594021150720 & 72057594021150720;
                            goto LAB_1007d2903;
                        case 2:
                            uVar14 = ((long)(float)((uint)(local_94 + 0.5) & -(uint)(0.0 < local_94)) & 4294967295U)
                                     << 8;
                            uVar15 = 144115188075856127;
                            goto LAB_1007d290d;
                        case 3:
                            fVar19 = (float)((uint)(local_94 + 0.5) & -(uint)(0.0 < local_94));
                            uVar15 = (ulong)fVar19;
                            uVar15 = (long)(fVar19 - 9.223372e+18) & (long)uVar15 >> 63 | uVar15;
                            pBVar17 = (BucketAllocatorEASTL*)(uVar15 * 256);
                            uVar15 = uVar15 * -256 + 1099511627520;
                        LAB_1007d2903:
                            uVar14 = 144115188075855872;
                        LAB_1007d290d:
                            pBVar18 = (BucketAllocatorEASTL*)(uVar15 | uVar14);
                            break;
                        case 4:
                            fVar19 = (float)((uint)(local_94 + 0.5) & -(uint)(0.0 < local_94));
                            lVar8 = (long)fVar19;
                            pBVar18 =
                                (BucketAllocatorEASTL*)((ulong)((uint)lVar8 | (uint)(long)(fVar19 - 9.223372e+18) &
                                                                                  (uint)(lVar8 >> 63))
                                                            << 32 |
                                                        50266112);
                            break;
                        case 5:
                            fVar19 = (float)((uint)(local_94 + 0.5) & -(uint)(0.0 < local_94));
                            uVar15 = (ulong)fVar19;
                            pBVar17 =
                                (BucketAllocatorEASTL*)(((long)(fVar19 - 9.223372e+18) & (long)uVar15 >> 63 | uVar15) *
                                                        -4294967296);
                            pBVar18 = pBVar17 + -4261412864;
                            break;
                        default:
                            /* WARNING: Subroutine does not return */
                            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "graphics/runetek7/particles/../renderer/DrawableSortKey.h",
                                            177, "Unknown sort key type");
                        }
                        new (&local_a8)
                            eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>(pBVar18,
                                                                                                              pBVar17);
                        uVar1 = local_a8._0_8_;
                        if (field_633 != '\0') {
                            local_a8.shared_from_this();
                            local_90 = GetPos();
                            local_89 = true;
                            pPVar13 =
                                DrawableElementPool<ParticleSystem_DE>::Create<shared_ptr<ParticleSystem>, math::OBB&,
                                                                               float&, unsigned int, bool>(
                                    &local_a8, &local_88, &local_94, &local_90, &local_89);
                            local_a8.~shared_ptr();
                            std::unique_ptr<DrawableElement, DrawableElementDeleter>::unique_ptr<true, void>(
                                (unique_ptr<DrawableElement, DrawableElementDeleter>*)&local_a8,
                                (DrawableElement*)pPVar13);
                            param_1->AddDrawable(uVar1, &local_a8, this, 4, uVar4);
                            local_a8.~unique_ptr();
                        }
                        if (field_634 != '\0') {
                            local_a8.shared_from_this();
                            local_90 = GetPos();
                            local_89 = false;
                            pPVar13 =
                                DrawableElementPool<ParticleSystem_DE>::Create<shared_ptr<ParticleSystem>, math::OBB&,
                                                                               float&, unsigned int, bool>(
                                    &local_a8, &local_88, &local_94, &local_90, &local_89);
                            local_a8.~shared_ptr();
                            std::unique_ptr<DrawableElement, DrawableElementDeleter>::unique_ptr<true, void>(
                                (unique_ptr<DrawableElement, DrawableElementDeleter>*)&local_a8,
                                (DrawableElement*)pPVar13);
                            param_1->AddDrawable(uVar1, &local_a8, this, 5, uVar4);
                            local_a8.~unique_ptr();
                        }
                    LAB_1007d2550:
                    }
                } else {
                    lVar8 = param_3->GetRenderPass(4);
                    if (lVar8 != 0) {
                        pCVar10 = (CommandLine*)param_1->GetDrawableGroup(4, 5);
                        uVar3 = pCVar10->GetPos();
                        pBVar17 = extraout_RDX;
                        switch (uVar3) {
                        case 0:
                            fVar19 = (float)(-(uint)(0.0 < local_94) & (uint)(local_94 + 0.5));
                            uVar15 = (ulong)fVar19;
                            pBVar17 =
                                (BucketAllocatorEASTL*)(((long)(fVar19 - 9.223372e+18) & (long)uVar15 >> 63 | uVar15)
                                                        << 24);
                            pBVar18 = (BucketAllocatorEASTL*)((ulong)pBVar17 | 144115188092567552);
                            break;
                        case 1:
                            fVar19 = (float)(-(uint)(0.0 < local_94) & (uint)(local_94 + 0.5));
                            lVar8 = (long)fVar19;
                            pBVar17 =
                                (BucketAllocatorEASTL*)((ulong)((uint)lVar8 | (uint)(long)(fVar19 - 9.223372e+18) &
                                                                                  (uint)(lVar8 >> 63)) *
                                                                -16777216 +
                                                            72057594021150720 &
                                                        72057594021150720);
                            pBVar18 = (BucketAllocatorEASTL*)((ulong)pBVar17 | 144115188075855872);
                            break;
                        case 2:
                            pBVar18 = (BucketAllocatorEASTL*)(((long)(float)(-(uint)(0.0 < local_94) &
                                                                             (uint)(local_94 + 0.5)) &
                                                               4294967295U) *
                                                                  256 +
                                                              144115188075856127);
                            break;
                        case 3:
                            fVar19 = (float)(-(uint)(0.0 < local_94) & (uint)(local_94 + 0.5));
                            uVar15 = (ulong)fVar19;
                            uVar15 = (long)(fVar19 - 9.223372e+18) & (long)uVar15 >> 63 | uVar15;
                            pBVar17 = (BucketAllocatorEASTL*)(uVar15 * 256);
                            pBVar18 = (BucketAllocatorEASTL*)(uVar15 * -256 + 1099511627520 | 144115188075855872);
                            break;
                        case 4:
                            fVar19 = (float)(-(uint)(0.0 < local_94) & (uint)(local_94 + 0.5));
                            lVar8 = (long)fVar19;
                            pBVar18 =
                                (BucketAllocatorEASTL*)((ulong)((uint)lVar8 | (uint)(long)(fVar19 - 9.223372e+18) &
                                                                                  (uint)(lVar8 >> 63))
                                                            << 32 |
                                                        50266112);
                            break;
                        case 5:
                            fVar19 = (float)(-(uint)(0.0 < local_94) & (uint)(local_94 + 0.5));
                            uVar15 = (ulong)fVar19;
                            pBVar17 =
                                (BucketAllocatorEASTL*)(((long)(fVar19 - 9.223372e+18) & (long)uVar15 >> 63 | uVar15) *
                                                        -4294967296);
                            pBVar18 = pBVar17 + -4261412864;
                            break;
                        default:
                            /* WARNING: Subroutine does not return */
                            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "graphics/runetek7/particles/../renderer/DrawableSortKey.h",
                                            177, "Unknown sort key type");
                        }
                        new (&local_a8)
                            eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>(pBVar18,
                                                                                                              pBVar17);
                        local_a8.shared_from_this();
                        local_90 = GetPos();
                        local_89 = false;
                        pPVar13 = DrawableElementPool<ParticleSystem_DE>::Create<shared_ptr<ParticleSystem>, math::OBB&,
                                                                                 float&, unsigned int, bool>(
                            &local_a8, &local_88, &local_94, &local_90, &local_89);
                        local_a8.~shared_ptr();
                        std::unique_ptr<DrawableElement, DrawableElementDeleter>::unique_ptr<true, void>(
                            (unique_ptr<DrawableElement, DrawableElementDeleter>*)&local_a8, (DrawableElement*)pPVar13);
                        param_1->AddDrawable(local_a8._0_8_, &local_a8, this, 5, 4);
                        local_a8.~unique_ptr();
                    }
                }
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1007d2e20, 896 bytes, placed by class name
    // ParticleSystem::UpdateMaterials(MaterialManager const&, TextureAtlasManager&)
    void ParticleSystem::UpdateMaterials(MaterialManager* param_1, TextureAtlasManager* param_2) {
        int iVar1;
        uint uVar2;
        TextureAtlasManager* pTVar3;
        Layout* this_00;
        char cVar4;
        int iVar5;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* this_01;
        long lVar6;
        undefined8 uVar7;
        undefined8 uVar8;
        Material** ppMVar9;
        Material** ppMVar10;
        MaterialManager* pMVar11;
        ParticleEmitter* this_02;
        ParticleEmitter* pPVar12;
        Skybox* this_03;
        TextureAtlasReference* this_04;
        TextureAtlas* this_05;
        short sVar13;
        undefined1* puVar14;
        ushort uVar15;
        bool bVar16;
        Layout local_88[24];
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* local_70;
        ParticleSystem* local_68;
        TextureAtlasManager* local_60;
        Layout* local_58;
        MaterialManager* local_50;
        shared_ptr local_48;
        int local_34;

        local_60 = param_2;
        local_50 = param_1;
        eastl::vector<Material_const*, BucketAllocatorEASTL>::vector();
        puVar14 = &field_640;
        local_68 = this;
        this_01 =
            (Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                   eastl::allocator>*)puVar14->HeapBeginPtr();
        local_70 =
            (Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                   eastl::allocator>*)puVar14->end();
        local_58 = (Layout*)puVar14;
        if (this_01 == local_70) {
            local_34 = -1;
            sVar13 = 0;
        } else {
            local_34 = -1;
            sVar13 = 0;
            do {
                lVar6 = this_01->data();
                iVar1 = *(int*)(lVar6 + 104);
                uVar7 =
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                        Layout::HeapBeginPtr(local_88);
                uVar8 = local_88->end();
                ppMVar9 = eastl::find_if<Material_const**,
                                         (MaterialManager_const&)->UpdateMaterials(TextureAtlasManager&)::__7>(
                    uVar7, uVar8, iVar1);
                ppMVar10 = (Material**)local_88->end();
                if (ppMVar9 == ppMVar10) {
                    pMVar11 = (MaterialManager*)local_50->GetMaterial(iVar1);
                    cVar4 = pMVar11->ShowSkybox();
                    if (cVar4 != '\0') {
                        cVar4 = pMVar11->IsRT7();
                        if (cVar4 == '\0') {
                            bVar16 = 0 < sVar13;
                            sVar13 = -1;
                            if (bVar16) {
                                /* WARNING: Subroutine does not return */
                                LogAssert("rt7flag <= 0",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                          "graphics/runetek7/particles/ParticleSystem.cpp",
                                          490, "ParticleSystem cannot mix RT5 materials with RT7 materials");
                            }
                        } else {
                            bVar16 = sVar13 < 0;
                            sVar13 = 1;
                            if (bVar16) {
                                /* WARNING: Subroutine does not return */
                                LogAssert("rt7flag >= 0",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                          "graphics/runetek7/particles/ParticleSystem.cpp",
                                          485, "ParticleSystem cannot mix RT5 materials with RT7 materials");
                            }
                        }
                        iVar5 = pMVar11->GetSeqDelay();
                        iVar1 = local_34;
                        if (iVar5 != -1) {
                            if ((local_34 != -1) && (iVar5 = pMVar11->GetSeqDelay(), iVar1 != iVar5)) {
                                /* WARNING: Subroutine does not return */
                                LogAssert("viewportMapID == -1 || viewportMapID == material.GetViewportMapID()",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                          "graphics/runetek7/particles/ParticleSystem.cpp",
                                          495, (char*)0);
                            }
                            local_34 = pMVar11->GetSeqDelay();
                        }
                        local_48._0_8_ = pMVar11;
                        local_88->push_back((Material**)&local_48);
                    }
                }
                this_01 = this_01 + 10528;
            } while (this_01 != local_70);
        }
        puVar14 = local_68->m_material;
        puVar14->SetOption(0, 0 < sVar13);
        pMVar11 = local_50;
        pTVar3 = local_60;
        lVar6 = puVar14->GetTextureAtlasReference();
        if (lVar6 != 0) {
            new (&local_48) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
            puVar14->SetTextureAtlasReference(&local_48);
            local_48.~shared_ptr();
        }
        local_48.GetSharedAtlasRefFromMaterials(pTVar3, (vector*)graphicutils::TextureAtlasUsage::USAGE_COMPRESSED);
        puVar14->SetTextureAtlasReference(&local_48);
        local_48.~shared_ptr();
        lVar6 = puVar14->GetTextureAtlasReference();
        if (lVar6 == 0) {
            local_48.GetDummySharedMaterialReference(pTVar3);
            puVar14->SetTextureAtlasReference(&local_48);
            local_48.~shared_ptr();
            lVar6 = puVar14->GetTextureAtlasReference();
            if (lVar6 == 0) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_material.GetTextureAtlasReference() != nullptr",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "particles/ParticleSystem.cpp",
                          517, (char*)0);
            }
        }
        puVar14->SetEndPosition(local_34);
        this_00 = local_58;
        this_02 = (ParticleEmitter*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(local_58);
        pPVar12 = (ParticleEmitter*)this_00->end();
        for (; this_02 != pPVar12; this_02 = (ParticleEmitter*)&this_02->field_10528) {
            lVar6 = this_02->data();
            uVar2 = *(uint*)(lVar6 + 104);
            this_03 = (Skybox*)pMVar11->GetMaterial(uVar2);
            if ((uVar2 == 4294967295) || (cVar4 = this_03->ShowSkybox(), cVar4 == '\0')) {
                uVar15 = 0;
            } else {
                this_04 = (TextureAtlasReference*)puVar14->GetTextureAtlasReference();
                this_05 = (TextureAtlas*)this_04->GetTextureAtlas();
                this_05->GetMaterialSettingsSlotXY((ushort*)&local_48, uVar2);
                uVar15 = local_48._0_2_;
            }
            this_02->SetAtlasMaterialSettingsSlotXY(uVar15);
        }
        local_88->~vector();
    }

    // 0x1007d3340, 112 bytes, placed by class name
    // ParticleSystem::TranslateParticles(math::Vector3T<float> const&)
    void ParticleSystem::TranslateParticles(Vector3T* param_1) {
        ParticleEmitter* pPVar2;
        ParticleEmitter* this_00;

        this_00 = (ParticleEmitter*)(&field_640)->HeapBeginPtr();
        pPVar2 = (ParticleEmitter*)(&field_640)->end();
        for (; this_00 != pPVar2; this_00 = (ParticleEmitter*)&this_00->field_10528) {
            if (this_00->IsHidden() == '\0') {
                this_00->TranslateParticles(param_1);
            }
        }
    }

    // 0x1007d33b0, 176 bytes, placed by class name
    // ParticleSystem::RenderDebug(RenderPassType, DrawableElement&) const
    void ParticleSystem::RenderDebug() {
        long* plVar1;
        ParticleEmitter* this_00;
        ParticleEmitter* pPVar2;
        AABB local_48;

        if (*PTR_m_showWorldAABB_100ee6a60 != '\0') {
            new (&local_48) math::AABB((AABB*)&field_32);
            plVar1 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar1 != (long*)0) {
                new (&local_48.field_32) oldscape::sidebars::SideBarData(-1, 3);
                (**(code**)(*plVar1 + 72))(plVar1, &local_48, &local_48.field_32);
            }
        }
        this_00 = (ParticleEmitter*)(&field_640)->HeapBeginPtr();
        pPVar2 = (ParticleEmitter*)(&field_640)->end();
        for (; this_00 != pPVar2; this_00 = (ParticleEmitter*)&this_00->field_10528) {
            this_00->RenderDebug();
        }
    }

    // 0x1007d3460, 144 bytes, placed by class name
    // ParticleSystem::CalculateViewDistanceAndSort(math::Matrix44T<float> const&)
    undefined8 ParticleSystem::CalculateViewDistanceAndSort(Matrix44T* param_1) {
        float fVar2;
        float fVar1;
        float fVar4;
        float fVar3;
        char extraout_AL;
        undefined7 extraout_var;
        type* ptVar5;
        type* ptVar6;
        undefined7 uVar7;
        undefined7 extraout_var_00;
        undefined8 local_28;

        std::operator==((optional*)&field_42848, param_1);
        uVar7 = extraout_var;
        if (extraout_AL == '\0') {
            std::optional<math::Matrix44T<float>>::operator=((optional<math::Matrix44T<float>>*)&field_42848, param_1);
            local_28 = CalculateViewDistances(this, param_1);
            ptVar5 = std::get<0ul, float, float>((pair*)&local_28);
            ptVar6 = std::get<1ul, float, float>((pair*)&local_28);
            fVar1 = *(float*)ptVar5;
            fVar2 = *(float*)ptVar5;
            fVar3 = *(float*)ptVar6;
            fVar4 = *(float*)ptVar6;
            uVar7 = (undefined7)((ulong)ptVar6 >> 8);
            this[1].m_material[8] = (0.0 < fVar4 || fVar3 == 0.0) && (0.0 < fVar2 || fVar1 == 0.0);
            if ((0.0 < fVar4 || fVar3 == 0.0) && (0.0 < fVar2 || fVar1 == 0.0)) {
                SortParticles(this);
                uVar7 = extraout_var_00;
            }
        }
        return CONCAT71(uVar7, this[1].m_material[8]);
    }

    // 0x1007d3570, 320 bytes, placed by class name
    // ParticleSystem::CalculateViewDistances(math::Matrix44T<float> const&)
    undefined8 ParticleSystem::CalculateViewDistances(Matrix44T* param_1) {
        float* pfVar2;
        ParticleEmitter* this_00;
        ParticleEmitter* pPVar3;
        ImVec4 local_68[16];
        undefined8 local_58;
        undefined8 local_50;
        float local_44;
        float local_40;
        float local_3c;
        float local_38;
        float local_34;

        local_38 = 3.4028235e+38;
        local_34 = -3.4028235e+38;
        pfVar2 = (float*)math::Matrix44T<float>::operator()((Matrix44T<float>*)param_1, 2);
        local_44 = *pfVar2;
        pfVar2 = (float*)math::Matrix44T<float>::operator()((Matrix44T<float>*)param_1, 6);
        local_40 = *pfVar2;
        pfVar2 = (float*)math::Matrix44T<float>::operator()((Matrix44T<float>*)param_1, 10);
        local_3c = *pfVar2;
        pfVar2 = (float*)math::Matrix44T<float>::operator()((Matrix44T<float>*)param_1, 14);
        ImVec4::ImVec4(local_68, local_44, local_40, local_3c, *pfVar2);
        this_00 = (ParticleEmitter*)(&field_640)->HeapBeginPtr();
        pPVar3 = (ParticleEmitter*)(&field_640)->end();
        if (this_00 != pPVar3) {
            do {
                if (this_00->IsHidden() == '\0') {
                    local_50 = this_00->CalculateViewDistances(local_68);
                    pfVar2 = std::min<float>((float*)&local_50, &local_38);
                    local_38 = *pfVar2;
                    pfVar2 = std::max<float>((float*)((long)&local_50 + 4), &local_34);
                    local_34 = *pfVar2;
                }
                this_00 = (ParticleEmitter*)&this_00->field_10528;
            } while (this_00 != pPVar3);
        }
        std::pair<float, float>::pair<float&, float&, false>((pair<float, float>*)&local_58, &local_38, &local_34);
        return local_58;
    }

    // 0x1007d36d0, 96 bytes, placed by class name
    // ParticleSystem::SortParticles()
    void ParticleSystem::SortParticles() {
        ParticleEmitter* pPVar2;
        ParticleEmitter* this_00;

        this_00 = (ParticleEmitter*)(&field_640)->HeapBeginPtr();
        pPVar2 = (ParticleEmitter*)(&field_640)->end();
        for (; this_00 != pPVar2; this_00 = (ParticleEmitter*)&this_00->field_10528) {
            if (this_00->IsHidden() == '\0') {
                this_00->SortParticles();
            }
        }
    }

    // 0x1007d3820, 160 bytes, placed by class name
    // ParticleSystem::ContainsEmitterSource(shared_ptr<ModelParticleSource> const&) const
    ulong ParticleSystem::ContainsEmitterSource(shared_ptr* param_1) {
        bool bVar1;
        Layout* this_00;
        Layout* pLVar2;
        vector* pvVar3;
        shared_ptr* extraout_RDX;
        shared_ptr* extraout_RDX_00;
        shared_ptr* psVar4;
        undefined1* this_01;
        bool bVar5;

        this_01 = &field_640;
        psVar4 = param_1;
        this_00 = (Layout*)this_01->HeapBeginPtr();
        pLVar2 = (Layout*)this_01->end();
        bVar5 = this_00 == pLVar2;
        if (!bVar5) {
            pvVar3 = eastl::string::Layout::SSOBeginPtr(this_00, (type*)psVar4);
            psVar4 = param_1;
            bVar1 = operator==((jag*)pvVar3, param_1, extraout_RDX);
            while (!bVar1) {
                this_00 = this_00 + 10528;
                bVar5 = this_00 == pLVar2;
                if (bVar5)
                    break;
                pvVar3 = eastl::string::Layout::SSOBeginPtr(this_00, (type*)psVar4);
                psVar4 = param_1;
                bVar1 = operator==((jag*)pvVar3, param_1, extraout_RDX_00);
            }
        }
        return (CONCAT71((int7)((ulong)this_01 >> 8), bVar5) ^ 1) & 4294967295;
    }

    // 0x1007d38c0, 160 bytes, placed by class name
    // ParticleSystem::CanBatchEmitterSource(MaterialManager const&, shared_ptr<ModelParticleSource> const&) const
    ulong ParticleSystem::CanBatchEmitterSource(MaterialManager* param_1, shared_ptr* param_2) {
        char cVar1;
        ParticleEmitter* this_00;
        ParticleEmitter* pPVar2;
        undefined8 unaff_R13;
        ulong uVar3;

        this_00 = (ParticleEmitter*)(&field_640)->HeapBeginPtr();
        pPVar2 = (ParticleEmitter*)(&field_640)->end();
        uVar3 = CONCAT71((int7)((ulong)unaff_R13 >> 8), this_00 == pPVar2);
        if (this_00 != pPVar2) {
            cVar1 = this_00->CanBatch(param_1, param_2);
            while (cVar1 != '\0') {
                this_00 = (ParticleEmitter*)&this_00->field_10528;
                uVar3 = CONCAT71((int7)(uVar3 >> 8), this_00 == pPVar2);
                if (this_00 == pPVar2)
                    break;
                cVar1 = this_00->CanBatch(param_1, param_2);
            }
        }
        return uVar3 & 4294967295;
    }

    // 0x1007d3960, 432 bytes, placed by class name
    // ParticleSystem::GetParticleSystemForEmitter(RT7Core&, eastl::fixed_vector<shared_ptr<ParticleSystem>, 1ul, true, eastl::allocator>&, shared_ptr<ModelParticleSource> const&)
    ulong ParticleSystem::GetParticleSystemForEmitter(RT7Core* param_1, fixed_vector* param_2, shared_ptr* param_3) {
        bool bVar1;
        char cVar2;
        int iVar3;
        shared_ptr<ParticleSystem>* psVar4;
        ParticleSystem* pPVar5;
        MaterialManager* pMVar6;
        long lVar7;
        ulong unaff_RBX;
        ulong uVar8;
        undefined1 auVar9[16];
        shared_ptr local_58;
        undefined8 local_48;
        ParticleSystem* local_38;

        iVar3 = param_2->size();
        bVar1 = 0 < iVar3;
        if (iVar3 < 1) {
        LAB_1007d39f3:
            if (bVar1) {
                return unaff_RBX;
            }
        } else {
            unaff_RBX = 0;
            psVar4 = (shared_ptr<ParticleSystem>*)
                eastl::vector<shared_ptr<ParticleSystem>,
                              eastl::fixed_vector_allocator<16ul, 1ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[]((vector<shared_ptr<ParticleSystem>,
                                   eastl::fixed_vector_allocator<16ul, 1ul, 8ul, 0ul, true, eastl::allocator>>*)param_2,
                           0);
            pPVar5 = (ParticleSystem*)shared_ptr<ParticleSystem>::operator->(psVar4);
            cVar2 = ContainsEmitterSource(pPVar5, param_3);
            if (cVar2 == '\0') {
                unaff_RBX = 0;
                do {
                    unaff_RBX = unaff_RBX + 1;
                    iVar3 = param_2->size();
                    bVar1 = (long)unaff_RBX < (long)iVar3;
                    if ((long)iVar3 <= (long)unaff_RBX)
                        goto LAB_1007d39f3;
                    psVar4 = (shared_ptr<ParticleSystem>*)
                        eastl::vector<shared_ptr<ParticleSystem>,
                                      eastl::fixed_vector_allocator<16ul, 1ul, 8ul, 0ul, true, eastl::allocator>>::
                        operator[]((vector<shared_ptr<ParticleSystem>,
                                           eastl::fixed_vector_allocator<16ul, 1ul, 8ul, 0ul, true, eastl::allocator>>*)
                                       param_2,
                                   unaff_RBX);
                    pPVar5 = (ParticleSystem*)shared_ptr<ParticleSystem>::operator->(psVar4);
                    cVar2 = ContainsEmitterSource(pPVar5, param_3);
                } while (cVar2 == '\0');
            }
            if (bVar1) {
                return unaff_RBX;
            }
        }
        iVar3 = param_2->size();
        bVar1 = 0 < iVar3;
        if (iVar3 < 1) {
        LAB_1007d3a9b:
            uVar8 = unaff_RBX;
        } else {
            psVar4 = (shared_ptr<ParticleSystem>*)
                eastl::vector<shared_ptr<ParticleSystem>,
                              eastl::fixed_vector_allocator<16ul, 1ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[]((vector<shared_ptr<ParticleSystem>,
                                   eastl::fixed_vector_allocator<16ul, 1ul, 8ul, 0ul, true, eastl::allocator>>*)param_2,
                           0);
            local_38 = (ParticleSystem*)shared_ptr<ParticleSystem>::operator->(psVar4);
            pMVar6 = (MaterialManager*)param_1->GetMaterialManager();
            pPVar5 = local_38;
            local_38 = (ParticleSystem*)param_3;
            cVar2 = CanBatchEmitterSource(pPVar5, pMVar6, param_3);
            uVar8 = 0;
            if (cVar2 == '\0') {
                uVar8 = 0;
                do {
                    uVar8 = uVar8 + 1;
                    iVar3 = param_2->size();
                    bVar1 = (long)uVar8 < (long)iVar3;
                    if ((long)iVar3 <= (long)uVar8)
                        goto LAB_1007d3a9b;
                    psVar4 = (shared_ptr<ParticleSystem>*)
                        eastl::vector<shared_ptr<ParticleSystem>,
                                      eastl::fixed_vector_allocator<16ul, 1ul, 8ul, 0ul, true, eastl::allocator>>::
                        operator[]((vector<shared_ptr<ParticleSystem>,
                                           eastl::fixed_vector_allocator<16ul, 1ul, 8ul, 0ul, true, eastl::allocator>>*)
                                       param_2,
                                   uVar8);
                    pPVar5 = (ParticleSystem*)shared_ptr<ParticleSystem>::operator->(psVar4);
                    pMVar6 = (MaterialManager*)param_1->GetMaterialManager();
                    cVar2 = CanBatchEmitterSource(pPVar5, pMVar6, (shared_ptr*)local_38);
                } while (cVar2 == '\0');
            }
        }
        if (!bVar1) {
            auVar9 = param_1->GetParticleManager();
            local_48 = auVar9._0_8_;
            MakeSharedPool<ParticleSystem, 32>::MakeShared<ParticleManager*>(
                &local_58, (MakeSharedPool<ParticleSystem, 32>*)&local_48, auVar9._8_8_);
            param_2->push_back(&local_58);
            local_58.~shared_ptr();
            lVar7 = param_2->size();
            uVar8 = lVar7 - 1;
        }
        return uVar8;
    }

    // 0x1007f7320, 32 bytes, placed by class name
    // ParticleSystem::UpdateMaterials(MaterialManager const&, TextureAtlasManager&)::$_7::operator()(Material const*) const
    /* ParticleSystem::UpdateMaterials(MaterialManager const&,
   TextureAtlasManager&)::$_7::TEMPNAMEPLACEHOLDERVALUE(Material
   const*) const */

    bool ParticleSystem::UpdateMaterials(MaterialManager_const&,
                                         TextureAtlasManager&)::$_7::operator()(Material* param_1) {
        return param_1->GetZ() == *(int*)this;
    }

} // namespace jag::graphics
