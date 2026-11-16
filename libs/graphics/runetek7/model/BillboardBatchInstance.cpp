// libs/graphics/runetek7/model/BillboardBatchInstance.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "BillboardBatchInstance.h"
#include "GeometryBatchInstance.h"

namespace jag::graphics {
    // 0x103bbdf13, 5 bytes, __common; zero-initialised
    BillboardBatchInstance::m_showWorldAABB;

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    BillboardBatchInstance::GatherDrawableElements(DrawableQueue&, RT7Core&, SceneViewData const&,
                                                   EffectManager const&);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    BillboardBatchInstance::GetTransformedTriangle(unsigned int, math::Vector4T<float> (&)[3]);

    // 0x100016cf0: the linker folded this into eastl::hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator, eastl::use_first<eastl::pair<int const, unsigned int> >, eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::size() const, which has identical code
    BillboardBatchInstance::GetModel() const;

    // 0x10011ced0: the linker folded this into oldscape::configdecoder::NpcType::GetHeadIconIndices() const, which has identical code
    GeometryBatchInstance BillboardBatchInstance::GetVertexAnimation() const;

    // 0x1001a3c10: the linker folded this into MainLoopFrameTimer::GetFPSCounter(), which has identical code
    RenderMaterial BillboardBatchInstance::GetMaterial();

    // 0x1001a3c10: the linker folded this into MainLoopFrameTimer::GetFPSCounter(), which has identical code
    RenderMaterial BillboardBatchInstance::GetMaterial() const;

    // 0x10042fe60: the linker folded this into game::LocType::GetResize() const, which has identical code
    BillboardBatchInstance::GetApproxMaterialInfoList() const;

    // 0x100865a00: the linker folded this into BillboardBatchInstance::GetBillboardBatch(), which has identical code
    BillboardBatchInstance::GetBillboardBatch() const;

    // 0x100865d00, 48 bytes, placed by class name and debug map
    // BillboardBatchInstance::Reserve(BillboardBatchCombineHelper const&)
    void BillboardBatchInstance::Reserve(BillboardBatchCombineHelper* param_1) {
        BillboardBatch* this_00;

        this_00 = (BillboardBatch*)shared_ptr<BillboardBatch>::operator->((shared_ptr<BillboardBatch>*)field_32);
        this_00->Reserve(param_1);
    }

    // 0x100865d30, 608 bytes, placed by class name and debug map
    // BillboardBatchInstance::Append(BillboardBatchInstance const&, bool)
    void BillboardBatchInstance::Append(BillboardBatchInstance* param_1, bool param_2) {
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_00;
        int iVar1;
        int iVar2;
        int iVar4;
        int iVar5;
        BillboardBatch* pBVar6;
        BillboardBatch* pBVar7;
        int* piVar8;
        int* piVar9;
        int* piVar10;
        long lVar11;
        long lVar12;
        int* piVar13;
        int* piVar14;
        MaterialInfo* pMVar15;
        MaterialInfo* pMVar16;
        undefined1* puVar17;
        undefined1* this_01;

        if (this != param_1) {
            DestroyRenderingResources(this);
            puVar17 = field_32;
            pBVar6 = (BillboardBatch*)shared_ptr<BillboardBatch>::operator->((shared_ptr<BillboardBatch>*)puVar17);
            iVar4 = pBVar6->GetIndexCount();
            pBVar6 = (BillboardBatch*)shared_ptr<BillboardBatch>::operator->((shared_ptr<BillboardBatch>*)puVar17);
            iVar5 = pBVar6->GetVertexCount();
            pBVar6 = (BillboardBatch*)shared_ptr<BillboardBatch>::operator->((shared_ptr<BillboardBatch>*)puVar17);
            pBVar7 =
                (BillboardBatch*)shared_ptr<BillboardBatch>::operator*((shared_ptr<BillboardBatch>*)param_1->field_32);
            pBVar6->Append(pBVar7, param_2);
            piVar8 = (int*)((param_1->m_vertexAnimation + 80))->HeapBeginPtr();
            piVar9 = (int*)((param_1->m_vertexAnimation + 80))->end();
            if (piVar8 != piVar9) {
                this_00 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true,
                                                                     eastl::allocator>>*)(m_vertexAnimation + 80);
                do {
                    if (eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true,
                                                                         eastl::allocator>>::empty(this_00) == '\0') {
                        piVar10 = (int*)this_00->back();
                        if (*piVar10 != *piVar8)
                            goto LAB_100865e90;
                        lVar11 = this_00->back();
                        if (*(char*)(lVar11 + 4) != (char)piVar8[1])
                            goto LAB_100865e90;
                        lVar11 = this_00->back();
                        if (*(int*)(lVar11 + 8) != piVar8[2])
                            goto LAB_100865e90;
                        lVar11 = this_00->back();
                        if (*(int*)(lVar11 + 12) != piVar8[3])
                            goto LAB_100865e90;
                        lVar11 = this_00->back();
                        if (*(short*)(lVar11 + 16) != (short)piVar8[4])
                            goto LAB_100865e90;
                        lVar11 = this_00->back();
                        piVar10 = (int*)std::array<IndexRange, 5ul>::operator[]((ulong)(piVar8 + 5));
                        iVar1 = piVar10[1];
                        iVar2 = *piVar10;
                        lVar12 = std::array<IndexRange, 5ul>::operator[](lVar11 + 20);
                        *(int*)(lVar12 + 4) = *(int*)(lVar12 + 4) + (iVar1 - iVar2);
                        *(int*)(lVar11 + 64) = *(int*)(lVar11 + 64) + (piVar8[16] - piVar8[15]);
                    } else {
                    LAB_100865e90:
                        piVar10 = (int*)this_00->push_back();
                        *piVar10 = *piVar8;
                        *(char*)(piVar10 + 1) = (char)piVar8[1];
                        piVar10[2] = piVar8[2];
                        piVar10[3] = piVar8[3];
                        *(short*)(piVar10 + 4) = (short)piVar8[4];
                        piVar13 = (int*)std::array<IndexRange, 5ul>::operator[]((ulong)(piVar8 + 5));
                        iVar1 = *piVar13;
                        piVar14 = (int*)std::array<IndexRange, 5ul>::operator[]((ulong)(piVar10 + 5));
                        *piVar14 = iVar1 + iVar4;
                        piVar14[1] = piVar13[1] + iVar4;
                        piVar10[15] = piVar8[15] + iVar5;
                        piVar10[16] = piVar8[16] + iVar5;
                    }
                    piVar8 = piVar8 + 17;
                } while (piVar8 != piVar9);
            }
            this_01 = &field_616;
            lVar11 = this_01->size();
            puVar17 = &param_1->field_616;
            lVar12 = puVar17->size();
            this_01->reserve(lVar11 + lVar12);
            pMVar15 = (MaterialInfo*)this_01->end();
            pMVar16 = (MaterialInfo*)puVar17->HeapBeginPtr();
            puVar17->end();
            eastl::vector<MaterialInfo, eastl::allocator>::insert<MaterialInfo_const*>((MaterialInfo*)this_01, pMVar15,
                                                                                       pMVar16);
        }
    }

    // 0x100865f90, 160 bytes, placed by neighbouring functions
    // DrawableElementPool<BillboardBatch_DE>::GetDrawableElementPool()
    undefined1* DrawableElementPool<BillboardBatch_DE>::GetDrawableElementPool() {
        int* piVar2;
        int local_18[2];

        if (GetDrawableElementPool()::pool == '\0') {
            if (___cxa_guard_acquire(&GetDrawableElementPool()::pool) != 0) {
                local_18[0] = 16;
                local_18[1] = 16;
                piVar2 = std::max<int>(local_18, local_18 + 1);
                new (&GetDrawableElementPool()::pool) FastPool<BillboardBatch_DE, int>(1664, *piVar2);
                ___cxa_atexit(PTR__FastPool_100ee6860, &GetDrawableElementPool()::pool, 4294967296);
                ___cxa_guard_release(&GetDrawableElementPool()::pool);
            }
        }
        return &GetDrawableElementPool()::pool;
    }

    // 0x100866050, 272 bytes, base-object constructor, placed by class name
    // BillboardBatchInstance::BillboardBatchInstance(Model const&, unsigned short)
    void BillboardBatchInstance::BillboardBatchInstance(Model* param_1, ushort param_2) {
        new (this) Drawable(4);
        new (&field_16) Transformable();
        new (this) MakeUniquePool<BillboardBatchInstance, 64>();
        field_0 = &PTR__BillboardBatchInstance_100f16100;
        field_16 = &PTR_Transform_100f16160;
        field_24 = param_1;
        MakeSharedPool<BillboardBatch, 64>::MakeShared<>((shared_ptr*)field_32, (MakeSharedPool<BillboardBatch, 64>*)4);
        new (m_material) BillboardMaterial();
        new (&field_616) eastl::vector<MaterialInfo, eastl::allocator>();
        new (m_vertexAnimation) VertexAnimation();
        new ((m_vertexAnimation + 80)) eastl::vector<SourceModelExternalIndexSection, eastl::allocator>();
        ((m_vertexAnimation + 80), (ulong)param_2)->reserve();
    }

    // 0x100866370, 16 bytes, complete-object constructor, placed by class name
    // BillboardBatchInstance::BillboardBatchInstance(Model const&, unsigned short): jumps straight to the base-object constructor

    // 0x100866380, 240 bytes, base-object constructor, placed by class name
    // BillboardBatchInstance::BillboardBatchInstance(BillboardBatchInstance&&, Model const&)
    void BillboardBatchInstance::BillboardBatchInstance(BillboardBatchInstance* param_1, Model* param_2) {
        new (this) Drawable(param_1);
        new (&field_16) Transformable();
        new (this) MakeUniquePool<BillboardBatchInstance, 64>();
        field_0 = &PTR__BillboardBatchInstance_100f16100;
        field_16 = &PTR_Transform_100f16160;
        field_24 = param_2;
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)field_32, (shared_ptr*)param_1->field_32);
        new (m_material, (BillboardMaterial*)param_1->m_material) BillboardMaterial();
        new (&field_616) eastl::vector<MaterialInfo, eastl::allocator>();
        new (m_vertexAnimation) VertexAnimation();
        new ((m_vertexAnimation + 80), (vector*)(param_1->m_vertexAnimation + 80))
            eastl::vector<SourceModelExternalIndexSection, eastl::allocator>();
    }

    // 0x1008664b0, 16 bytes, complete-object constructor, placed by class name
    // BillboardBatchInstance::BillboardBatchInstance(BillboardBatchInstance&&, Model const&): jumps straight to the base-object constructor

    // 0x1008664c0, 288 bytes, base-object constructor, placed by class name
    // BillboardBatchInstance::BillboardBatchInstance(BillboardBatchInstance const&, Model const&, bool)
    void BillboardBatchInstance::BillboardBatchInstance(BillboardBatchInstance* param_1, Model* param_2, bool param_3) {
        undefined1 auVar1[16];

        new (this) Drawable(param_1);
        new (&field_16) Transformable();
        new (this) MakeUniquePool<BillboardBatchInstance, 64>();
        field_0 = &PTR__BillboardBatchInstance_100f16100;
        field_16 = &PTR_Transform_100f16160;
        field_24 = param_2;
        if (param_3) {
            new (field_32, (shared_ptr*)param_1->field_32) shared_ptr<oldscape::dash3d::Decor>();
        } else {
            auVar1 = shared_ptr<BillboardBatch>::operator*((shared_ptr<BillboardBatch>*)param_1->field_32);
            MakeSharedPool<BillboardBatch, 64>::MakeShared<BillboardBatch&>((shared_ptr*)field_32, auVar1._0_8_,
                                                                            auVar1._8_8_);
        }
        new (m_material, (BillboardMaterial*)param_1->m_material) BillboardMaterial();
        new (&field_616) eastl::vector<MaterialInfo, eastl::allocator>();
        new (m_vertexAnimation) VertexAnimation();
        new ((m_vertexAnimation + 80), (vector*)(param_1->m_vertexAnimation + 80))
            eastl::vector<SourceModelExternalIndexSection, eastl::allocator>();
    }

    // 0x100866740, 16 bytes, complete-object constructor, placed by class name
    // BillboardBatchInstance::BillboardBatchInstance(BillboardBatchInstance const&, Model const&, bool): jumps straight to the base-object constructor

    // 0x100866750, 192 bytes, base-object destructor, placed by class name
    // BillboardBatchInstance::~BillboardBatchInstance()
    void BillboardBatchInstance::~BillboardBatchInstance() {
        field_0 = &PTR__BillboardBatchInstance_100f16100;
        field_16 = &PTR_Transform_100f16160;
        m_material->DestroyRenderingResources();
        ((m_vertexAnimation + 80))->~vector();
        m_vertexAnimation->~VertexAnimation();
        (&field_616)->~vector();
        m_material->~BillboardMaterial();
        field_32->~shared_ptr();
        ~AutoSingleton();
    }

    // 0x100866810, 16 bytes, complete-object destructor, placed by class name
    // BillboardBatchInstance::~BillboardBatchInstance(): jumps straight to the base-object destructor

    // 0x100866820, 32 bytes, deleting destructor, placed by class name
    // BillboardBatchInstance::~BillboardBatchInstance()
    void BillboardBatchInstance::~BillboardBatchInstance() {
        ~BillboardBatchInstance(this);
        operator_delete(this);
    }

    // 0x100866840, 256 bytes, placed by class name
    // BillboardBatchInstance::SetAnimationStateProvider(shared_ptr<AnimationStateProvider> const&)
    void BillboardBatchInstance::SetAnimationStateProvider(shared_ptr* param_1) {
        BillboardBatch* this_00;
        shared_ptr* this_01;
        AnimationStateProvider* this_02;
        EffectList* pEVar1;
        bool bVar2;
        char cVar3;
        long* plVar4;

        bVar2 = field_32->operator_cast_to_bool();
        if (bVar2) {
            this_00 = (BillboardBatch*)shared_ptr<BillboardBatch>::operator->((shared_ptr<BillboardBatch>*)field_32);
            cVar3 = this_00->HasBones();
            if (cVar3 != '\0') {
                this_01 = (shared_ptr*)m_vertexAnimation->GetMaterial();
                bVar2 = shared_ptr::operator_cast_to_bool(this_01);
                if (!bVar2) {
                    this_02 = (AnimationStateProvider*)shared_ptr<AnimationStateProvider>::operator->(
                        (shared_ptr<AnimationStateProvider>*)param_1);
                    this_02->InvalidateAsyncUpdate();
                }
                (m_vertexAnimation, param_1)->SetAnimationStateProvider();
                bVar2 = operator!=(param_1, (_func_decltype_nullptr*)0);
                SetRenderFlag(8, bVar2);
            }
        }
        bVar2 = shared_ptr::operator_cast_to_bool(param_1);
        cVar3 = '\x02';
        if (bVar2) {
            plVar4 =
                (long*)shared_ptr<AnimationStateProvider>::operator->((shared_ptr<AnimationStateProvider>*)param_1);
            cVar3 = (**(code**)(*plVar4 + 56))(plVar4);
        }
        pEVar1 = (EffectList*)(m_material, 4)->GetRenderPassEffect();
        pEVar1->Set(77, cVar3 == '\0');
        pEVar1 = (EffectList*)(m_material, 4)->GetRenderPassEffect();
        pEVar1->Set(78, cVar3 == '\x01');
    }

    // 0x1008669d0, 304 bytes, placed by class name
    // BillboardBatchInstance::UpdateAnimation(ThreadPool&, unsigned int, math::Matrix44T<float> const&)
    void BillboardBatchInstance::UpdateAnimation(ThreadPool* param_1, uint param_2, Matrix44T* param_3) {
        undefined1* this_00;
        uint uVar2;
        uint uVar3;
        uint uVar4;
        BillboardBatch* pBVar5;
        GeometryBatch* this_01;
        vector_map* pvVar6;
        Entity* this_02;
        vector_map* pvVar7;
        fixed_hashtable_allocator<10ul, 1208ul, 8ul, 8ul, 0ul, true, eastl::allocator>* this_03;
        vector_map* pvVar8;
        vector_map* pvVar9;
        Array* pAVar10;

        this_00 = field_32;
        if (!operator!=((shared_ptr*)this_00, (_func_decltype_nullptr*)0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_billboardBatch != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "BillboardBatchInstance.cpp",
                      88, (char*)0);
        }
        pBVar5 = (BillboardBatch*)shared_ptr<BillboardBatch>::operator->((shared_ptr<BillboardBatch>*)this_00);
        uVar2 = pBVar5->GetBoneCount();
        pBVar5 = (BillboardBatch*)shared_ptr<BillboardBatch>::operator->((shared_ptr<BillboardBatch>*)this_00);
        uVar3 = pBVar5->GetFaceLabelCount();
        pBVar5 = (BillboardBatch*)shared_ptr<BillboardBatch>::operator->((shared_ptr<BillboardBatch>*)this_00);
        uVar4 = pBVar5->GetBillboardLabelCount();
        (m_vertexAnimation, uVar2, uVar3, uVar4)->SetMaxSize();
        this_01 = (GeometryBatch*)shared_ptr<BillboardBatch>::operator->((shared_ptr<BillboardBatch>*)this_00);
        pvVar6 = (vector_map*)this_01->GetBoneIDMap();
        this_02 = (Entity*)shared_ptr<BillboardBatch>::operator->((shared_ptr<BillboardBatch>*)this_00);
        pvVar7 = (vector_map*)this_02->GetWorld();
        this_03 = (fixed_hashtable_allocator<10ul, 1208ul, 8ul, 8ul, 0ul, true, eastl::allocator>*)
                      shared_ptr<BillboardBatch>::operator->((shared_ptr<BillboardBatch>*)this_00);
        pvVar8 = (vector_map*)eastl::fixed_hashtable_allocator<10ul, 1208ul, 8ul, 8ul, 0ul, true,
                                                               eastl::allocator>::get_overflow_allocator(this_03);
        pBVar5 = (BillboardBatch*)shared_ptr<BillboardBatch>::operator->((shared_ptr<BillboardBatch>*)this_00);
        pvVar9 = (vector_map*)pBVar5->GetBillboardLabelIDMap();
        pAVar10 = (Array*)field_24->GetTextureAtlasManager();
        (m_vertexAnimation, param_1, param_2, pvVar6, pvVar7, pvVar8, pvVar9, pAVar10, param_3)->UpdateAnimation();
    }

    // 0x100866b30, 32 bytes, placed by class name
    // BillboardBatchInstance::EndUpdateAnimation()
    void BillboardBatchInstance::EndUpdateAnimation() {
        m_vertexAnimation->EndUpdateAnimation();
    }

    // 0x100866b50, 48 bytes, placed by class name
    // BillboardBatchInstance::LoadMeshFromModelRawRT7(PacketView&)
    void BillboardBatchInstance::LoadMeshFromModelRawRT7(PacketView* param_1) {
        BillboardBatch* this_00;

        this_00 = (BillboardBatch*)shared_ptr<BillboardBatch>::operator->((shared_ptr<BillboardBatch>*)field_32);
        this_00->LoadMeshFromModelRawRT7(param_1);
    }

    // 0x100866b80, 176 bytes, placed by class name
    // BillboardBatchInstance::SetInitialSource(int, unsigned char, int, int)
    void BillboardBatchInstance::SetInitialSource(int param_1, uchar param_2, int param_3, int param_4) {
        int* piVar3;
        undefined4* puVar4;
        BillboardBatch* pBVar5;

        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        piVar3 = (int*)((m_vertexAnimation + 80))->push_back_uninitialized();
        *piVar3 = param_1;
        *(uchar*)(piVar3 + 1) = param_2;
        piVar3[2] = param_3;
        piVar3[3] = param_4;
        *(undefined2*)(piVar3 + 4) = 64;
        puVar4 = (undefined4*)std::array<IndexRange, 5ul>::operator[]((ulong)(piVar3 + 5));
        *puVar4 = 0;
        pBVar5 = (BillboardBatch*)shared_ptr<BillboardBatch>::operator->((shared_ptr<BillboardBatch>*)field_32);
        puVar4[1] = pBVar5->GetIndexCount();
        piVar3[15] = 0;
        pBVar5 = (BillboardBatch*)shared_ptr<BillboardBatch>::operator->((shared_ptr<BillboardBatch>*)field_32);
        piVar3[16] = pBVar5->GetVertexCount();
    }

    // 0x100866c90, 80 bytes, placed by class name
    // BillboardBatchInstance::ChangeSourceExternalID(int, int)
    void BillboardBatchInstance::ChangeSourceExternalID(int param_1, int param_2) {
        int* piVar1;
        int* piVar2;

        piVar1 = (int*)((m_vertexAnimation + 80))->HeapBeginPtr();
        piVar2 = (int*)((m_vertexAnimation + 80))->end();
        for (; piVar1 != piVar2; piVar1 = piVar1 + 17) {
            if (*piVar1 == param_1) {
                *piVar1 = param_2;
            }
        }
    }

    // 0x100866ce0, 80 bytes, placed by class name
    // BillboardBatchInstance::ChangeSourceExternalIDs(int)
    void BillboardBatchInstance::ChangeSourceExternalIDs(int param_1) {
        int* piVar1;
        int* piVar2;

        piVar1 = (int*)((m_vertexAnimation + 80))->HeapBeginPtr();
        piVar2 = (int*)((m_vertexAnimation + 80))->end();
        for (; piVar1 != piVar2; piVar1 = piVar1 + 17) {
            *piVar1 = param_1;
        }
    }

    // 0x100866d30, 64 bytes, placed by class name
    // BillboardBatchInstance::GetFirstMaterialIDFromSource() const
    undefined4 BillboardBatchInstance::GetFirstMaterialIDFromSource() {
        char cVar1;
        undefined4 uVar2;
        long lVar3;

        cVar1 = ((m_vertexAnimation + 80))->empty();
        uVar2 = 4294967295;
        if (cVar1 == '\0') {
            lVar3 = ((m_vertexAnimation + 80))->front();
            uVar2 = *(undefined4*)(lVar3 + 8);
        }
        return uVar2;
    }

    // 0x100866da0, 64 bytes, placed by class name
    // BillboardBatchInstance::GetFirstSequenceIDFromSource() const
    ulong BillboardBatchInstance::GetFirstSequenceIDFromSource() {
        char cVar1;
        ulong uVar2;
        long lVar3;

        cVar1 = ((m_vertexAnimation + 80))->empty();
        uVar2 = 4294967295;
        if (cVar1 == '\0') {
            lVar3 = ((m_vertexAnimation + 80))->front();
            uVar2 = (ulong) * (byte*)(lVar3 + 4);
        }
        return uVar2;
    }

    // 0x100866de0, 112 bytes, placed by class name
    // BillboardBatchInstance::BuildMaterialIDListFromSource(eastl::fixed_vector<int, 128ul, true, eastl::allocator>&) const
    void BillboardBatchInstance::BuildMaterialIDListFromSource(fixed_vector* param_1) {
        long lVar1;
        long lVar2;

        lVar1 = ((m_vertexAnimation + 80))->HeapBeginPtr();
        lVar2 = ((m_vertexAnimation + 80))->end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 68) {
            eastl::fixed_vector<int, 128ul, true, eastl::allocator>::push_back((int*)param_1);
            eastl::fixed_vector<int, 128ul, true, eastl::allocator>::push_back((int*)param_1);
        }
    }

    // 0x100866e50, 112 bytes, placed by class name
    // BillboardBatchInstance::SetInitialMaterial(Material const&)
    void BillboardBatchInstance::SetInitialMaterial(Material* param_1) {
        BillboardBatch* pBVar1;
        bool bVar2;
        bool bVar3;

        pBVar1 = (BillboardBatch*)GetBillboardBatch(this);
        bVar2 = (bool)pBVar1->HasBones();
        pBVar1 = (BillboardBatch*)GetBillboardBatch(this);
        bVar3 = (bool)pBVar1->HasJoints();
        (m_material, bVar2, bVar3, param_1)->Init();
        TextureAtlasManager::PopulateMaterialInfoFromMaterial<eastl::allocator>((vector*)&field_616, param_1);
    }

    // 0x1008672b0, 128 bytes, placed by class name
    // BillboardBatchInstance::BakeHSLColors()
    void BillboardBatchInstance::BakeHSLColors() {
        long lVar1;
        long lVar2;
        BillboardBatch* this_00;
        uint* puVar3;

        lVar1 = ((m_vertexAnimation + 80))->HeapBeginPtr();
        lVar2 = ((m_vertexAnimation + 80))->end();
        if (lVar1 != lVar2) {
            do {
                this_00 =
                    (BillboardBatch*)shared_ptr<BillboardBatch>::operator->((shared_ptr<BillboardBatch>*)field_32);
                puVar3 = (uint*)std::array<IndexRange, 5ul>::operator[](lVar1 + 20);
                this_00->BakeHSLColors(*puVar3, puVar3[1]);
                lVar1 = lVar1 + 68;
            } while (lVar1 != lVar2);
        }
    }

    // 0x100867330, 256 bytes, placed by class name
    // BillboardBatchInstance::BakeTextureMeta(eastl::fixed_map<int, ModelTextureMeta, 64ul, true, eastl::less<int>, eastl::allocator> const&)
    void BillboardBatchInstance::BakeTextureMeta(fixed_map* param_1) {
        uint uVar1;
        uint uVar2;
        long lVar3;
        bool bVar4;
        long lVar5;
        uint* puVar6;
        hashtable_iterator_base* extraout_RDX;
        long lVar7;
        ulong local_50;
        BillboardBatch* local_48;
        BillboardBatchInstance* local_40;
        undefined8 local_38;

        local_40 = this;
        lVar7 = ((m_vertexAnimation + 80))->HeapBeginPtr();
        lVar5 = ((m_vertexAnimation + 80))->end();
        if (lVar7 != lVar5) {
            local_40 = (BillboardBatchInstance*)local_40->field_32;
            do {
                local_38 = eastl::rbtree<int, eastl::pair<int const, ModelTextureMeta>, eastl::less<int>,
                                         eastl::fixed_node_allocator<40ul, 64ul, 4ul, 0ul, true, eastl::allocator>,
                                         eastl::use_first<eastl::pair<int const, ModelTextureMeta>>, true,
                                         true>::find((int*)param_1);
                local_50 = eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>,
                                         eastl::less<eastl::string>, eastl::allocator,
                                         eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true, true>::end();
                bVar4 = eastl::operator!=((eastl*)&local_38, (hashtable_iterator_base*)&local_50, extraout_RDX);
                local_48 =
                    (BillboardBatch*)shared_ptr<BillboardBatch>::operator->((shared_ptr<BillboardBatch>*)local_40);
                puVar6 = (uint*)std::array<IndexRange, 5ul>::operator[](lVar7 + 20);
                uVar1 = *puVar6;
                uVar2 = puVar6[1];
                if (bVar4) {
                    lVar3 = eastl::rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                    operator*(
                        (rbtree_iterator<eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                                         eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                                         eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe,
                                                                                       eastl::allocator>>&>*)&local_38);
                    local_48->BakeTextureMeta(uVar1, uVar2, (ModelTextureMeta*)(lVar3 + 4));
                } else {
                    local_50 = local_50 & 18446744073709486080;
                    new (&local_50) math::Vector2T<unsigned char>();
                    local_48->BakeTextureMeta(uVar1, uVar2, (ModelTextureMeta*)&local_50);
                }
                lVar7 = lVar7 + 68;
            } while (lVar7 != lVar5);
        }
    }

    // 0x100867470, 624 bytes, placed by class name
    // BillboardBatchInstance::SortSections()
    void BillboardBatchInstance::SortSections() {
        long lVar2;
        ulong uVar3;
        SourceModelExternalIndexSection* pSVar4;
        SourceModelExternalIndexSection* pSVar5;
        int* piVar6;
        int* piVar7;
        BillboardBatch* this_00;
        undefined8 uVar8;
        undefined8 uVar9;
        undefined8 uVar10;
        undefined8 extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* phVar11;
        hashtable_iterator_base* extraout_RDX_01;
        ulong uVar12;
        vector<SourceModelExternalIndexSection, eastl::allocator>* pvVar13;
        int iVar14;
        int iVar15;
        undefined1 auVar16[16];
        BucketAllocatorEASTL local_98[48];
        pair local_60[8];
        eastl local_58[8];
        undefined8 local_50;
        vector<SourceModelExternalIndexSection, eastl::allocator>* local_40;
        ulong local_38;

        pvVar13 = (vector<SourceModelExternalIndexSection, eastl::allocator>*)(m_vertexAnimation + 80);
        auVar16 = eastl::vector<SourceModelExternalIndexSection, eastl::allocator>::size(pvVar13);
        if (1 < auVar16._0_8_) {
            eastl::destruct<oldscape::highlight::NpcUID*>(local_58, (NpcUID*)"EASTL multimap", auVar16._8_8_);
            eastl::map<int, shared_ptr<oldscape::dash3d::AnimBase>, eastl::less<int>, BucketAllocatorEASTL>::map(
                local_98);
            local_38 = 0;
            lVar2 = eastl::vector<SourceModelExternalIndexSection, eastl::allocator>::size(pvVar13);
            local_40 = pvVar13;
            if (lVar2 != 0) {
                do {
                    lVar2 =
                        eastl::vector<SourceModelExternalIndexSection, eastl::allocator>::operator[](pvVar13, local_38);
                    local_58[0] =
                        (eastl)eastl::make_pair<unsigned char const&, unsigned long&>((uchar*)(lVar2 + 4), &local_38);
                    local_50 = extraout_RDX;
                    eastl::rbtree<unsigned char, eastl::pair<unsigned char const, unsigned long>,
                                  eastl::less<unsigned char>, BucketAllocatorEASTL,
                                  eastl::use_first<eastl::pair<unsigned char const, unsigned long>>, true,
                                  false>::insert<eastl::pair<unsigned char, unsigned long>, void>(local_60);
                    pvVar13 = local_40;
                    uVar12 = local_38 + 1;
                    local_38 = uVar12;
                    uVar3 = eastl::vector<SourceModelExternalIndexSection, eastl::allocator>::size(local_40);
                } while (uVar12 < uVar3);
            }
            eastl::vector<SourceModelExternalIndexSection, BucketAllocatorEASTL>::vector();
            pvVar13 = local_40;
            uVar3 = eastl::vector<SourceModelExternalIndexSection, eastl::allocator>::size(local_40);
            local_58->reserve(uVar3);
            eastl::vector<unsigned long,
                          eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::rbegin();
            eastl::rbtree<
                unsigned int,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::less<unsigned int>, eastl::allocator,
                eastl::use_first<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                true, true>::end();
            iVar15 = 0;
            iVar14 = 0;
            phVar11 = extraout_RDX_00;
            while (true) {
                if (!eastl::operator!=((eastl*)&local_38, (hashtable_iterator_base*)local_60, phVar11))
                    break;
                lVar2 = eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator*(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_38);
                pSVar4 = (SourceModelExternalIndexSection*)
                    eastl::vector<SourceModelExternalIndexSection, eastl::allocator>::operator[](pvVar13,
                                                                                                 *(ulong*)(lVar2 + 8));
                pSVar5 = eastl::vector<SourceModelExternalIndexSection, BucketAllocatorEASTL>::emplace_back<
                    SourceModelExternalIndexSection_const&>(
                    (vector<SourceModelExternalIndexSection, BucketAllocatorEASTL>*)local_58, pSVar4);
                piVar6 = (int*)std::array<IndexRange, 5ul>::operator[]((ulong)(pSVar5 + 20));
                *piVar6 = iVar14;
                piVar7 = (int*)std::array<IndexRange, 5ul>::operator[]((ulong)(pSVar4 + 20));
                iVar14 = iVar14 + (piVar7[1] - *piVar7);
                piVar6[1] = iVar14;
                *(int*)(pSVar5 + 60) = iVar15;
                iVar15 = iVar15 + (*(int*)(pSVar4 + 64) - *(int*)(pSVar4 + 60));
                *(int*)(pSVar5 + 64) = iVar15;
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
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_38);
                phVar11 = extraout_RDX_01;
                pvVar13 = local_40;
            }
            this_00 = (BillboardBatch*)shared_ptr<BillboardBatch>::operator->(
                (shared_ptr<BillboardBatch>*)((BillboardBatchInstance*)this)->field_32);
            this_00->SortSections(pvVar13, local_58, local_98);
            eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
            uVar8 = local_58->HeapBeginPtr();
            uVar9 = local_58->end();
            uVar10 = eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                                   eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true,
                                   true>::end();
            eastl::copy<SourceModelExternalIndexSection*,
                        eastl::back_insert_iterator<eastl::vector<SourceModelExternalIndexSection, eastl::allocator>>>(
                uVar8, uVar9, uVar10);
            local_58->~vector();
            local_98->~multimap();
        }
    }

    // 0x1008678e0, 608 bytes, placed by class name
    // BillboardBatchInstance::IsCombinableWith(BillboardBatchInstance const&, bool, bool, bool, TextureAtlas&)
    int BillboardBatchInstance::IsCombinableWith(BillboardBatchInstance* param_1, bool param_2, bool param_3,
                                                 bool param_4, TextureAtlas* param_5) {
        bool bVar1;
        char cVar2;
        byte bVar3;
        uint uVar4;
        int iVar5;
        int iVar6;
        BillboardMaterial* pBVar7;
        long lVar8;
        BillboardBatch* this_00;
        BillboardBatch* pBVar9;
        long lVar10;
        MaterialInfo* pMVar11;
        MaterialInfo* pMVar12;
        undefined3 in_register_00000081;
        undefined1* puVar13;
        undefined1* this_01;
        WrapArray<MaterialInfo_const> local_68[16];
        undefined1 local_58[36];
        undefined4 local_34;

        local_34 = CONCAT31(in_register_00000081, param_4);
        local_58._24_8_ = param_5;
        pBVar7 = (BillboardMaterial*)param_1->GetMaterial();
        cVar2 = (m_material, pBVar7)->IsCombinable();
        if (cVar2 == '\0') {
            return 2;
        }
        if (!param_3) {
            cVar2 = ((m_vertexAnimation + 80))->empty();
            if (((cVar2 == '\0') && (uVar4 = GetFirstSequenceIDFromSource(param_1), uVar4 != 4294967295)) &&
                (lVar8 = ((m_vertexAnimation + 80))->front(), uVar4 != *(byte*)(lVar8 + 4))) {
                return 3;
            }
        }
        if (!param_2)
            goto LAB_100867a45;
        this_00 = (BillboardBatch*)GetBillboardBatch(param_1);
        puVar13 = field_32;
        pBVar9 = (BillboardBatch*)shared_ptr<BillboardBatch>::operator->((shared_ptr<BillboardBatch>*)puVar13);
        iVar5 = pBVar9->GetIndexCount();
        iVar6 = this_00->GetIndexCount();
        if ((uint)(iVar6 + iVar5) < 65536) {
            if ((char)local_34 == '\0') {
            LAB_100867a36:
                iVar5 = 3;
                bVar1 = true;
            } else {
                pBVar9 = (BillboardBatch*)shared_ptr<BillboardBatch>::operator->((shared_ptr<BillboardBatch>*)puVar13);
                iVar5 = pBVar9->GetBoneCount();
                iVar6 = this_00->GetBoneCount();
                if ((uint)(iVar6 + iVar5) < 57) {
                    pBVar9 =
                        (BillboardBatch*)shared_ptr<BillboardBatch>::operator->((shared_ptr<BillboardBatch>*)puVar13);
                    iVar5 = pBVar9->GetFaceLabelCount();
                    iVar6 = this_00->GetFaceLabelCount();
                    if ((uint)(iVar6 + iVar5) < 33) {
                        pBVar9 = (BillboardBatch*)shared_ptr<BillboardBatch>::operator->(
                            (shared_ptr<BillboardBatch>*)puVar13);
                        iVar5 = pBVar9->GetBillboardLabelCount();
                        iVar6 = this_00->GetBillboardLabelCount();
                        if ((uint)(iVar6 + iVar5) < 11)
                            goto LAB_100867a36;
                        iVar5 = 7;
                        bVar1 = false;
                    } else {
                        iVar5 = 6;
                        bVar1 = false;
                    }
                } else {
                    iVar5 = 8;
                    bVar1 = false;
                }
            }
        } else {
            iVar5 = 4;
            bVar1 = false;
        }
        if (!bVar1) {
            return iVar5;
        }
    LAB_100867a45:
        eastl::vector<MaterialInfo, BucketAllocatorEASTL>::vector();
        puVar13 = &field_616;
        lVar8 = puVar13->size();
        this_01 = &param_1->field_616;
        lVar10 = this_01->size();
        local_58->reserve(lVar8 + lVar10);
        pMVar11 = (MaterialInfo*)local_58->HeapBeginPtr();
        pMVar12 = (MaterialInfo*)puVar13->HeapBeginPtr();
        puVar13->end();
        eastl::vector<MaterialInfo, BucketAllocatorEASTL>::insert<MaterialInfo*>((MaterialInfo*)local_58, pMVar11,
                                                                                 pMVar12);
        pMVar11 = (MaterialInfo*)local_58->end();
        pMVar12 = (MaterialInfo*)this_01->HeapBeginPtr();
        this_01->end();
        eastl::vector<MaterialInfo, BucketAllocatorEASTL>::insert<MaterialInfo_const*>((MaterialInfo*)local_58, pMVar11,
                                                                                       pMVar12);
        WrapArray<MaterialInfo_const>::WrapArray<eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>>(
            local_68, (vector*)local_58);
        bVar3 = local_58._24_8_->CheckMaterialsFit(local_68);
        local_58->~vector();
        return (uint)(bVar3 ^ 1) * 9;
    }

    // 0x100867cb0, 128 bytes, placed by class name
    // BillboardBatchInstance::Assign(BillboardBatchInstance const&)
    void BillboardBatchInstance::Assign(BillboardBatchInstance* param_1) {
        BillboardMaterial* pBVar1;
        BillboardBatch* this_00;
        BillboardBatch* pBVar2;

        if (this != param_1) {
            DestroyRenderingResources(this);
            pBVar1 = (BillboardMaterial*)param_1->GetMaterial();
            BillboardMaterial::operator=((BillboardMaterial*)m_material, pBVar1);
            this_00 = (BillboardBatch*)shared_ptr<BillboardBatch>::operator->((shared_ptr<BillboardBatch>*)field_32);
            pBVar2 =
                (BillboardBatch*)shared_ptr<BillboardBatch>::operator*((shared_ptr<BillboardBatch>*)param_1->field_32);
            this_00->Assign(pBVar2);
            eastl::vector<SourceModelExternalIndexSection, eastl::allocator>::operator=(
                (vector<SourceModelExternalIndexSection, eastl::allocator>*)(m_vertexAnimation + 80),
                (vector*)(param_1->m_vertexAnimation + 80));
        }
    }

    // 0x100867d30, 48 bytes, placed by class name
    // BillboardBatchInstance::DestroyRenderingResources()
    void BillboardBatchInstance::DestroyRenderingResources() {
        BillboardBatch* this_00;

        m_material->DestroyRenderingResources();
        this_00 = (BillboardBatch*)shared_ptr<BillboardBatch>::operator->((shared_ptr<BillboardBatch>*)field_32);
        this_00->DestroyRenderingResources();
    }

    // 0x100867f20, 48 bytes, placed by class name
    // BillboardBatchInstance::Transform(math::Matrix44T<float> const&)
    void BillboardBatchInstance::Transform(Matrix44T* param_1) {
        BillboardBatch* this_00;

        this_00 = (BillboardBatch*)shared_ptr<BillboardBatch>::operator->((shared_ptr<BillboardBatch>*)field_32);
        this_00->Transform(param_1);
    }

    // 0x100867f60, 48 bytes, placed by class name
    // BillboardBatchInstance::Translate(math::Vector3T<float> const&)
    void BillboardBatchInstance::Translate(Vector3T* param_1) {
        BillboardBatch* this_00;

        this_00 = (BillboardBatch*)shared_ptr<BillboardBatch>::operator->((shared_ptr<BillboardBatch>*)field_32);
        this_00->Translate(param_1);
    }

    // 0x100867fa0, 48 bytes, placed by class name
    // BillboardBatchInstance::Rotate(math::QuaternionT<float> const&, bool)
    void BillboardBatchInstance::Rotate(QuaternionT* param_1, bool param_2) {
        QuaternionT* pQVar1;

        pQVar1 = (QuaternionT*)shared_ptr<BillboardBatch>::operator->((shared_ptr<BillboardBatch>*)field_32);
        BillboardBatch::Rotate(pQVar1, SUB81(param_1, 0));
    }

    // 0x100867fe0, 48 bytes, placed by class name
    // BillboardBatchInstance::Rotate90(Rotation90, bool)
    void BillboardBatchInstance::Rotate90(undefined4 param_2) {
        undefined8 uVar1;

        uVar1 = shared_ptr<BillboardBatch>::operator->((shared_ptr<BillboardBatch>*)field_32);
        BillboardBatch::Rotate90(uVar1, param_2, 0);
    }

    // 0x100868020, 48 bytes, placed by class name
    // BillboardBatchInstance::Scale(math::Vector3T<float> const&)
    void BillboardBatchInstance::Scale(Vector3T* param_1) {
        BillboardBatch* this_00;

        this_00 = (BillboardBatch*)shared_ptr<BillboardBatch>::operator->((shared_ptr<BillboardBatch>*)field_32);
        this_00->Scale(param_1);
    }

    // 0x100868050, 80 bytes, placed by class name
    // BillboardBatchInstance::HillChange(HillChange, int, Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL> const&, Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL> const&, LocationHelpers::LocationHillChangeData const&)
    void BillboardBatchInstance::HillChange(undefined4 param_2, undefined4 param_3, undefined8 param_4,
                                            undefined8 param_5, undefined8 param_6) {
        BillboardBatch* pBVar1;

        pBVar1 = (BillboardBatch*)shared_ptr<BillboardBatch>::operator->((shared_ptr<BillboardBatch>*)field_32);
        pBVar1->HillChange(param_2, param_3, param_4, param_5, param_6);
    }

    // 0x1008680a0, 272 bytes, placed by class name
    // BillboardBatchInstance::Rematerial(Array<unsigned short, eastl::allocator> const&, Array<unsigned short, eastl::allocator> const&)
    void BillboardBatchInstance::Rematerial(Array* param_1, Array* param_2) {
        long lVar1;
        ulong uVar2;
        ushort* puVar3;
        long lVar4;
        ulong uVar5;
        uint uVar6;
        uint uVar7;

        lVar1 = param_1->end();
        if (lVar1 != 0) {
            uVar5 = 0;
            do {
                uVar2 = param_2->end();
                if (uVar2 <= uVar5) {
                    return;
                }
                puVar3 = (ushort*)Array<unsigned short, eastl::allocator>::operator[](
                    (Array<unsigned short, eastl::allocator>*)param_1, uVar5);
                uVar6 = (uint)*puVar3;
                if (uVar6 == 65535) {
                    uVar6 = 4294967295;
                }
                puVar3 = (ushort*)Array<unsigned short, eastl::allocator>::operator[](
                    (Array<unsigned short, eastl::allocator>*)param_2, uVar5);
                uVar7 = (uint)*puVar3;
                if (uVar7 == 65535) {
                    uVar7 = 4294967295;
                }
                lVar1 = ((m_vertexAnimation + 80))->HeapBeginPtr();
                lVar4 = ((m_vertexAnimation + 80))->end();
                for (; lVar1 != lVar4; lVar1 = lVar1 + 68) {
                    if (*(uint*)(lVar1 + 8) == uVar6) {
                        *(uint*)(lVar1 + 8) = uVar7;
                    }
                    if (*(uint*)(lVar1 + 12) == uVar6) {
                        *(uint*)(lVar1 + 12) = uVar7;
                    }
                }
                uVar5 = uVar5 + 1;
                uVar2 = param_1->end();
            } while (uVar5 < uVar2);
        }
    }

    // 0x1008681b0, 128 bytes, placed by class name
    // BillboardBatchInstance::RematerialSingle(unsigned short, unsigned short)
    void BillboardBatchInstance::RematerialSingle(ushort param_1, ushort param_2) {
        long lVar1;
        long lVar2;
        undefined2 in_register_00000012;
        undefined4 uVar3;
        undefined2 in_register_00000032;
        int iVar4;

        iVar4 = CONCAT22(in_register_00000032, param_1);
        uVar3 = CONCAT22(in_register_00000012, param_2);
        if (param_1 == 65535) {
            iVar4 = -1;
        }
        if (param_2 == 65535) {
            uVar3 = 4294967295;
        }
        lVar1 = ((m_vertexAnimation + 80))->HeapBeginPtr();
        lVar2 = ((m_vertexAnimation + 80))->end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 68) {
            if (*(int*)(lVar1 + 8) == iVar4) {
                *(undefined4*)(lVar1 + 8) = uVar3;
            }
            if (*(int*)(lVar1 + 12) == iVar4) {
                *(undefined4*)(lVar1 + 12) = uVar3;
            }
        }
    }

    // 0x100868230, 112 bytes, placed by class name
    // BillboardBatchInstance::AmbientAdjust(unsigned short)
    void BillboardBatchInstance::AmbientAdjust(ushort param_1) {
        BillboardBatch* this_00;
        long lVar1;
        long lVar2;

        this_00 = (BillboardBatch*)shared_ptr<BillboardBatch>::operator->((shared_ptr<BillboardBatch>*)field_32);
        this_00->AmbientAdjust(param_1);
        lVar1 = ((m_vertexAnimation + 80))->HeapBeginPtr();
        lVar2 = ((m_vertexAnimation + 80))->end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 68) {
            *(ushort*)(lVar1 + 16) = param_1;
        }
    }

    // 0x1008682a0, 64 bytes, placed by class name
    // BillboardBatchInstance::TintAdjust(signed char, signed char, signed char, unsigned char)
    void BillboardBatchInstance::TintAdjust(undefined4 param_2, undefined4 param_3, undefined4 param_4,
                                            undefined4 param_5) {
        BillboardBatch* pBVar1;

        pBVar1 = (BillboardBatch*)shared_ptr<BillboardBatch>::operator->((shared_ptr<BillboardBatch>*)field_32);
        pBVar1->TintAdjust(param_2, param_3, param_4, param_5);
    }

    // 0x1008682e0, 960 bytes, placed by class name
    // BillboardBatchInstance::UpdateForwardPassEffect(DrawableSortKey&, DrawableSortKeyType, RenderPassEffect&, RT7Core&, EffectManager const&, float)
    void BillboardBatchInstance::UpdateForwardPassEffect(float param_1_00, BillboardBatchInstance* this,
                                                         undefined8* param_1, undefined4 param_4,
                                                         RenderPassEffect* param_5, RT7Core* param_6,
                                                         EffectManager* param_7) {
        undefined1 uVar1;
        byte bVar2;
        BillboardBatch* this_00;
        PostProcessController* this_01;
        long lVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        ulong uVar6;
        ulong uVar7;
        BucketAllocatorEASTL* pBVar8;
        BucketAllocatorEASTL* pBVar9;
        float fVar10;
        undefined1 auVar11[16];
        undefined8 local_38;

        this_00 = (BillboardBatch*)shared_ptr<BillboardBatch>::operator->((shared_ptr<BillboardBatch>*)field_32);
        uVar1 = this_00->IsLowPrecision();
        param_5->Set(20, uVar1);
        uVar1 = param_7->IsEnabled(48);
        param_5->Set(29, uVar1);
        auVar11 = param_7->BuildShaderEffectList(param_5);
        param_5->field_16 = auVar11._0_8_;
        param_5->field_24 = auVar11._8_8_;
        this_01 = (PostProcessController*)param_6->GetPostProcessController();
        lVar3 = this_01->GetCurrentConfig();
        if (*(char*)(lVar3 + 468) == '\0') {
            (&param_5->field_16, 64, 0)->Set();
        }
        uVar4 = param_6->GetShaderManager();
        uVar5 = BillboardBatchRenderer::GetVertexDecl();
        param_5->UpdateShader(param_7, uVar4, 5, uVar5, 4, 3);
        bVar2 = GetFirstSequenceIDFromSource(this);
        uVar6 = param_5->GetConstructedShaderId();
        switch (param_4) {
        case 0:
            fVar10 = (float)(-(uint)(0.0 < param_1_00) & (uint)(param_1_00 + 0.5));
            pBVar8 = (BucketAllocatorEASTL*)(long)fVar10;
            uVar7 = (ulong)(byte)~bVar2 << 16 |
                    ((long)(fVar10 - 9.223372e+18) & (long)pBVar8 >> 63 | (ulong)pBVar8) << 24 | uVar6 & 65535;
            uVar6 = 144115188075855872;
            goto LAB_100868596;
        case 1:
            fVar10 = (float)(-(uint)(0.0 < param_1_00) & (uint)(param_1_00 + 0.5));
            lVar3 = (long)fVar10;
            pBVar8 = (BucketAllocatorEASTL*)72057594021150720;
            pBVar9 = (BucketAllocatorEASTL*)((ulong)bVar2 << 16 |
                                             (ulong)((uint)lVar3 |
                                                     (uint)(long)(fVar10 - 9.223372e+18) & (uint)(lVar3 >> 63)) *
                                                         -16777216 +
                                                     72057594021150720 &
                                                 72057594021150720 |
                                             uVar6 & 65535 | 144115188075855872);
            break;
        case 2:
            pBVar8 = (BucketAllocatorEASTL*)(((long)(float)(-(uint)(0.0 < param_1_00) & (uint)(param_1_00 + 0.5)) &
                                              4294967295U)
                                                 << 8 |
                                             (uVar6 & 65535) << 40 | (ulong)(byte)~bVar2);
            pBVar9 = (BucketAllocatorEASTL*)((ulong)pBVar8 | 144115188075855872);
            break;
        case 3:
            fVar10 = (float)(-(uint)(0.0 < param_1_00) & (uint)(param_1_00 + 0.5));
            pBVar8 = (BucketAllocatorEASTL*)(long)fVar10;
            uVar7 = ((long)(fVar10 - 9.223372e+18) & (long)pBVar8 >> 63 | (ulong)pBVar8) * -256 + 1099511627520;
            uVar6 = (uVar6 & 65535) << 40 | (ulong)bVar2 | 144115188075855872;
        LAB_100868596:
            pBVar9 = (BucketAllocatorEASTL*)(uVar6 | uVar7);
            break;
        case 4:
            fVar10 = (float)(-(uint)(0.0 < param_1_00) & (uint)(param_1_00 + 0.5));
            lVar3 = (long)fVar10;
            pBVar8 =
                (BucketAllocatorEASTL*)((ulong)((uint)lVar3 | (uint)(long)(fVar10 - 9.223372e+18) & (uint)(lVar3 >> 63))
                                        << 32);
            pBVar9 = (BucketAllocatorEASTL*)((uVar6 & 65535) + ((ulong)(byte)~bVar2 << 16 | (ulong)pBVar8) + 33554432);
            break;
        case 5:
            fVar10 = (float)(-(uint)(0.0 < param_1_00) & (uint)(param_1_00 + 0.5));
            uVar7 = (ulong)fVar10;
            pBVar8 = (BucketAllocatorEASTL*)((ulong)bVar2 << 16 |
                                             ((long)(fVar10 - 9.223372e+18) & (long)uVar7 >> 63 | uVar7) * -4294967296 |
                                             uVar6 & 65535);
            pBVar9 = pBVar8 + -4261412864;
            break;
        default:
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "renderer/DrawableSortKey.h",
                            177, "Unknown sort key type");
        }
        new (&local_38)
            eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>(pBVar9, pBVar8);
        *param_1 = local_38;
    }

    // 0x1008686a0, 80 bytes, placed by class name
    // BillboardBatchInstance::CreateRenderingResources()
    void BillboardBatchInstance::CreateRenderingResources() {
        BillboardBatch* pBVar1;
        bool bVar2;

        pBVar1 = (BillboardBatch*)shared_ptr<BillboardBatch>::operator->((shared_ptr<BillboardBatch>*)field_32);
        pBVar1->CreateRenderingResources();
        pBVar1 = (BillboardBatch*)shared_ptr<BillboardBatch>::operator->((shared_ptr<BillboardBatch>*)field_32);
        bVar2 = (bool)pBVar1->IsLowPrecision();
        (m_material, bVar2)->SetLowPrecision();
    }

    // 0x100868760, 736 bytes, placed by class name
    // BillboardBatchInstance::GatherDrawableElements(DrawableQueue&, RT7Core&, SceneViewData const&, EffectManager const&, eastl::vector_map<int, FaceGroupRenderMasks, eastl::less<int>, eastl::allocator, eastl::vector<eastl::pair<int, FaceGroupRenderMasks>, eastl::allocator> > const*)
    void BillboardBatchInstance::GatherDrawableElements(DrawableQueue* param_1, RT7Core* param_2,
                                                        SceneViewData* param_3, EffectManager* param_4,
                                                        vector_map* param_5) {
        BillboardBatchInstance* pBVar1;
        char cVar2;
        uint uVar3;
        undefined4 uVar4;
        RenderPassBitSet* pRVar5;
        AABB* pAVar6;
        Matrix44T* pMVar7;
        Matrix44T* pMVar8;
        long* plVar9;
        long* plVar10;
        undefined8 uVar11;
        CommandLine* pCVar12;
        BillboardBatch_DE* pBVar13;
        RenderMaterial* this_00;
        vector_map* local_88;
        undefined* local_80;
        long* local_60;
        unique_ptr<DrawableElement, DrawableElementDeleter> local_58[8];
        RenderMaterial* local_50;
        undefined8 local_48;
        float local_34;

        local_88 = param_5;
        pRVar5 = (RenderPassBitSet*)param_3->GetRenderPassBits();
        cVar2 = (m_material, pRVar5)->CanRenderInPasses();
        if (cVar2 != '\0') {
            pAVar6 = (AABB*)GetAABB(this);
            local_50 = (RenderMaterial*)m_material;
            pMVar7 = (Matrix44T*)field_24->GetMaterial();
            pMVar8 = (Matrix44T*)param_3->GetScreen();
            this_00 = local_50;
            local_34 = (float)DstFromCameraPlane(pAVar6, pMVar7, pMVar8);
            local_80 = (undefined*)this_00->data();
            plVar9 = (long*)(&param_3->field_520)->HeapBeginPtr();
            plVar10 = (long*)(&param_3->field_520)->end();
            if (plVar9 != plVar10) {
                local_60 = plVar10;
                do {
                    if (*plVar9 == 0) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("renderPass",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "runetek7/model/BillboardBatchInstance.cpp",
                                  555, (char*)0);
                    }
                    uVar3 = (*plVar9)->GetPos();
                    uVar11 = this_00->GetRenderPassEffect(uVar3);
                    new (&local_48) math::Vector2T<int>();
                    switch (uVar3) {
                    case 3:
                    case 9:
                        if (local_80 == AlphaMode::ALPHA_OPAQUE) {
                            pCVar12 = (CommandLine*)param_1->GetDrawableGroup(uVar3, 0);
                            uVar4 = pCVar12->GetPos();
                            pBVar1 = (BillboardBatchInstance*)this;
                            UpdateForwardPassEffect((BillboardBatchInstance*)local_34, (BillboardBatchInstance*)this,
                                                    &local_48, uVar4, uVar11, param_2, param_4);
                            pBVar13 = DrawableElementPool<BillboardBatch_DE>::Create<
                                float&,
                                eastl::vector_map<
                                    int, FaceGroupRenderMasks, eastl::less<int>, eastl::allocator,
                                    eastl::vector<eastl::pair<int, FaceGroupRenderMasks>, eastl::allocator>> const*&,
                                BillboardBatchInstance&>(&local_34, &local_88, pBVar1);
                            uVar11 = local_48;
                            std::unique_ptr<DrawableElement, DrawableElementDeleter>::unique_ptr<true, void>(
                                local_58, (DrawableElement*)pBVar13);
                            param_1->AddDrawable(uVar11, local_58, pBVar1, 0, uVar3);
                            goto LAB_1008689d0;
                        }
                        break;
                    case 4:
                        cVar2 = (local_80 == AlphaMode::ALPHA_BLENDED) * '\x02';
                        pCVar12 = (CommandLine*)param_1->GetDrawableGroup(4, cVar2);
                        uVar4 = pCVar12->GetPos();
                        pBVar1 = (BillboardBatchInstance*)this;
                        UpdateForwardPassEffect((BillboardBatchInstance*)local_34, (BillboardBatchInstance*)this,
                                                &local_48, uVar4, uVar11, param_2, param_4);
                        pBVar13 = DrawableElementPool<BillboardBatch_DE>::Create<
                            float&,
                            eastl::vector_map<
                                int, FaceGroupRenderMasks, eastl::less<int>, eastl::allocator,
                                eastl::vector<eastl::pair<int, FaceGroupRenderMasks>, eastl::allocator>> const*&,
                            BillboardBatchInstance&>(&local_34, &local_88, pBVar1);
                        uVar11 = local_48;
                        std::unique_ptr<DrawableElement, DrawableElementDeleter>::unique_ptr<true, void>(
                            local_58, (DrawableElement*)pBVar13);
                        param_1->AddDrawable(uVar11, local_58, pBVar1, cVar2, 4);
                    LAB_1008689d0:
                        std::unique_ptr<DrawableElement, DrawableElementDeleter>::~unique_ptr(local_58);
                        plVar10 = local_60;
                        this_00 = local_50;
                        break;
                    default:
                        /* WARNING: Subroutine does not return */
                        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "graphics/runetek7/model/BillboardBatchInstance.cpp",
                                        592, "Unsupported render pass : %d", (ulong)uVar3);
                    case 12:
                    case 14:
                        break;
                    }
                    plVar9 = plVar9 + 1;
                } while (plVar9 != plVar10);
            }
        }
    }

    // 0x100868c50, 160 bytes, placed by class name
    // BillboardBatchInstance::RenderDebug(RenderPassType, DrawableElement&) const
    void BillboardBatchInstance::RenderDebug(type* param_2) {
        Layout* this_00;
        AABB* pAVar1;
        Matrix44T* pMVar2;
        long* plVar3;
        AABB local_48;
        undefined1 local_20[8];

        if ((m_showWorldAABB != '\0') && ((int)param_2 == 4)) {
            this_00 = (Layout*)shared_ptr<BillboardBatch>::operator->((shared_ptr<BillboardBatch>*)field_32);
            pAVar1 = (AABB*)eastl::string::Layout::SSOBeginPtr(this_00, param_2);
            new (&local_48) math::AABB(pAVar1);
            pMVar2 = (Matrix44T*)field_24->GetMaterial();
            local_48.Transform(pMVar2);
            plVar3 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar3 != (long*)0) {
                new (local_20) oldscape::sidebars::SideBarData(-6250241, 3);
                (**(code**)(*plVar3 + 72))(plVar3, &local_48, (SideBarData*)local_20);
            }
        }
    }

    // 0x100868cf0, 96 bytes, placed by class name
    // BillboardBatchInstance::InitRenderPassEffects()
    void BillboardBatchInstance::InitRenderPassEffects() {
        BillboardBatch* pBVar1;
        bool bVar2;

        pBVar1 = (BillboardBatch*)shared_ptr<BillboardBatch>::operator->((shared_ptr<BillboardBatch>*)field_32);
        bVar2 = (bool)pBVar1->HasBones();
        pBVar1 = (BillboardBatch*)shared_ptr<BillboardBatch>::operator->((shared_ptr<BillboardBatch>*)field_32);
        pBVar1->HasJoints();
        BillboardMaterial::InitRenderPassEffects((bool)((char)this + '0'), bVar2);
    }

} // namespace jag::graphics
