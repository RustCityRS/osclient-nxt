// libs/graphics/runetek7/model/GeometryBatchInstance.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "GeometryBatchInstance.h"

namespace jag::graphics {
    // 0x100f43af8, 4 bytes, __data
    GeometryBatchInstance::m_renderDepthEnabled = 1;

    // 0x100f43afc, 4 bytes, __data
    GeometryBatchInstance::m_alphaTestThresholdOverrideValue = 127;

    // 0x103bbd410, 4 bytes, __common; zero-initialised
    GeometryBatchInstance::m_debugLodInstanceColourPassType;

    // 0x103bbd414, 1 bytes, __common; zero-initialised
    GeometryBatchInstance::m_debugLodInstanceColourEnabled;

    // 0x103bbd415, 1 bytes, __common; zero-initialised
    GeometryBatchInstance::m_showWorldAABB;

    // 0x103bbd416, 1 bytes, __common; zero-initialised
    GeometryBatchInstance::m_showWorldOBB;

    // 0x103bbd417, 1 bytes, __common; zero-initialised
    GeometryBatchInstance::m_alphaTestThresholdOverride;

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    GeometryBatchInstance::GatherDrawableElements(DrawableQueue&, RT7Core&, SceneViewData const&, EffectManager const&);

    // 0x1001a3c10: the linker folded this into MainLoopFrameTimer::GetFPSCounter(), which has identical code
    RenderMaterial GeometryBatchInstance::GetMaterial();

    // 0x1001a3c10: the linker folded this into MainLoopFrameTimer::GetFPSCounter(), which has identical code
    RenderMaterial GeometryBatchInstance::GetMaterial() const;

    // 0x10036bfd0: the linker folded this into GeometryBatchInstance::GetGeometryBatch(), which has identical code
    GeometryBatchInstance::GetGeometryBatch() const;

    // 0x10080cc70, 48 bytes, placed by class name and debug map
    // GeometryBatchInstance::Reserve(GeometryBatchCombineHelper const&)
    void GeometryBatchInstance::Reserve(GeometryBatchCombineHelper* param_1) {
        GeometryBatch* this_00;

        this_00 = (GeometryBatch*)shared_ptr<GeometryBatch>::operator->((shared_ptr<GeometryBatch>*)field_24);
        this_00->Reserve(param_1);
    }

    // 0x10080cca0, 960 bytes, placed by class name and debug map
    // GeometryBatchInstance::Append(GeometryBatchInstance const&, bool)
    void GeometryBatchInstance::Append(GeometryBatchInstance* param_1, bool param_2) {
        undefined1* puVar1;
        array<IndexRange, 5ul>* this_00;
        array<IndexRange, 5ul>* this_01;
        int iVar2;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_02;
        GeometryBatchInstance* pGVar3;
        GeometryBatchInstance* this_03;
        char cVar4;
        undefined4 uVar5;
        int iVar6;
        uint uVar7;
        GeometryBatch* pGVar8;
        undefined4* puVar9;
        GeometryBatch* pGVar10;
        int* piVar11;
        int* piVar12;
        long lVar13;
        int* piVar14;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_04;
        bitset* pbVar15;
        bitset<32ul, unsigned long long>* this_05;
        long lVar16;
        MaterialInfo* pMVar17;
        MaterialInfo* pMVar18;
        ulong uVar19;
        undefined1* this_06;
        array<unsigned int, 5ul> local_90[24];
        array<IndexRange, 5ul>* local_78;
        int* local_70;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* local_68;
        int* local_60;
        GeometryBatchInstance* local_58;
        GeometryBatchInstance* local_50;
        int local_44;
        array<IndexRange, 5ul>* local_40;
        int* local_38;

        if (this != param_1) {
            local_58 = param_1;
            DestroyRenderingResources(this);
            puVar1 = field_24;
            uVar19 = 0;
            local_50 = this;
            do {
                pGVar8 = (GeometryBatch*)shared_ptr<GeometryBatch>::operator->((shared_ptr<GeometryBatch>*)puVar1);
                uVar5 = pGVar8->GetLodIndexCount((uint)uVar19);
                puVar9 = (undefined4*)std::array<unsigned int, 5ul>::operator[](local_90, uVar19);
                *puVar9 = uVar5;
                uVar19 = uVar19 + 1;
            } while (uVar19 != 5);
            pGVar8 = (GeometryBatch*)shared_ptr<GeometryBatch>::operator->((shared_ptr<GeometryBatch>*)puVar1);
            local_44 = pGVar8->GetVertexCount();
            if (local_44 == 0) {
                /* WARNING: Subroutine does not return */
                LogAssert("vertexOffset > 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "model/GeometryBatchInstance.cpp",
                          666, (char*)0);
            }
            pGVar8 = (GeometryBatch*)shared_ptr<GeometryBatch>::operator->((shared_ptr<GeometryBatch>*)puVar1);
            pGVar3 = local_58;
            pGVar10 =
                (GeometryBatch*)shared_ptr<GeometryBatch>::operator*((shared_ptr<GeometryBatch>*)local_58->field_24);
            pGVar8->Append(pGVar10, param_2);
            piVar11 = (int*)(&pGVar3->field_696)->HeapBeginPtr();
            local_70 = (int*)(&pGVar3->field_696)->end();
            if (piVar11 != local_70) {
                local_68 =
                    (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)&local_50
                        ->field_696;
                do {
                    this_02 = local_68;
                    cVar4 = eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true,
                                                                             eastl::allocator>>::empty(local_68);
                    local_38 = piVar11;
                    if (cVar4 == '\0') {
                        piVar12 = (int*)this_02->back();
                        if (*piVar12 != *piVar11)
                            goto LAB_10080cec0;
                        lVar13 = this_02->back();
                        if (*(char*)(lVar13 + 4) != (char)piVar11[1])
                            goto LAB_10080cec0;
                        lVar13 = this_02->back();
                        if (*(int*)(lVar13 + 8) != piVar11[2])
                            goto LAB_10080cec0;
                        lVar13 = this_02->back();
                        if (*(short*)(lVar13 + 16) != (short)piVar11[4])
                            goto LAB_10080cec0;
                        local_40 = (array<IndexRange, 5ul>*)this_02->back();
                        pGVar8 =
                            (GeometryBatch*)shared_ptr<GeometryBatch>::operator->((shared_ptr<GeometryBatch>*)puVar1);
                        iVar6 = pGVar8->GetNumLods();
                        if (iVar6 != 0) {
                            this_00 = (array<IndexRange, 5ul>*)(local_38 + 5);
                            this_01 = local_40 + 20;
                            uVar19 = 0;
                            do {
                                piVar11 = (int*)std::array<IndexRange, 5ul>::operator[](this_00, uVar19);
                                iVar6 = piVar11[1];
                                iVar2 = *piVar11;
                                lVar13 = std::array<IndexRange, 5ul>::operator[](this_01, uVar19);
                                *(int*)(lVar13 + 4) = *(int*)(lVar13 + 4) + (iVar6 - iVar2);
                                uVar19 = uVar19 + 1;
                                pGVar8 = (GeometryBatch*)shared_ptr<GeometryBatch>::operator->(
                                    (shared_ptr<GeometryBatch>*)puVar1);
                                uVar7 = pGVar8->GetNumLods();
                            } while (uVar19 < uVar7);
                        }
                        *(int*)(local_40 + 64) = *(int*)(local_40 + 64) + (local_38[16] - local_38[15]);
                    } else {
                    LAB_10080cec0:
                        local_60 = (int*)this_02->push_back();
                        *local_60 = *piVar11;
                        *(char*)(local_60 + 1) = (char)piVar11[1];
                        local_60[2] = piVar11[2];
                        *(short*)(local_60 + 4) = (short)piVar11[4];
                        pGVar8 =
                            (GeometryBatch*)shared_ptr<GeometryBatch>::operator->((shared_ptr<GeometryBatch>*)puVar1);
                        iVar6 = pGVar8->GetNumLods();
                        if (iVar6 != 0) {
                            local_40 = (array<IndexRange, 5ul>*)(local_38 + 5);
                            local_78 = (array<IndexRange, 5ul>*)(local_60 + 5);
                            uVar19 = 0;
                            do {
                                piVar11 = (int*)std::array<IndexRange, 5ul>::operator[](local_40, uVar19);
                                iVar6 = *piVar11;
                                piVar12 = (int*)std::array<unsigned int, 5ul>::operator[](local_90, uVar19);
                                iVar2 = *piVar12;
                                piVar14 = (int*)std::array<IndexRange, 5ul>::operator[](local_78, uVar19);
                                *piVar14 = iVar6 + iVar2;
                                piVar14[1] = *piVar12 + piVar11[1];
                                uVar19 = uVar19 + 1;
                                pGVar8 = (GeometryBatch*)shared_ptr<GeometryBatch>::operator->(
                                    (shared_ptr<GeometryBatch>*)puVar1);
                                uVar7 = pGVar8->GetNumLods();
                            } while (uVar19 < uVar7);
                        }
                        local_60[15] = local_38[15] + local_44;
                        local_60[16] = local_38[16] + local_44;
                    }
                    piVar11 = local_38 + 17;
                } while (piVar11 != local_70);
            }
            pGVar3 = local_58;
            this_04 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                           eastl::allocator, 0>*)GetMaterial(local_58);
            pbVar15 = (bitset*)
                eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                           eastl::allocator, 0>::second(this_04);
            this_03 = local_50;
            this_05 = (bitset<32ul, unsigned long long>*)local_50->m_material->second();
            eastl::bitset<32ul, unsigned long long>::operator|=(this_05, pbVar15);
            puVar1 = &this_03->field_664;
            lVar13 = puVar1->size();
            this_06 = &pGVar3->field_664;
            lVar16 = this_06->size();
            puVar1->reserve(lVar13 + lVar16);
            pMVar17 = (MaterialInfo*)puVar1->end();
            pMVar18 = (MaterialInfo*)this_06->HeapBeginPtr();
            this_06->end();
            eastl::vector<MaterialInfo, eastl::allocator>::insert<MaterialInfo_const*>((MaterialInfo*)puVar1, pMVar17,
                                                                                       pMVar18);
            UpdateShadowRenderFlags(this_03);
        }
    }

    // 0x10080d060, 160 bytes, placed by neighbouring functions
    // DrawableElementPool<GeometryBatch_DE>::GetDrawableElementPool()
    undefined1* DrawableElementPool<GeometryBatch_DE>::GetDrawableElementPool() {
        int* piVar2;
        int local_18[2];

        if (GetDrawableElementPool()::pool == '\0') {
            if (___cxa_guard_acquire(&GetDrawableElementPool()::pool) != 0) {
                local_18[0] = 16;
                local_18[1] = 16;
                piVar2 = std::max<int>(local_18, local_18 + 1);
                new (&GetDrawableElementPool()::pool) FastPool<GeometryBatch_DE, int>(4096, *piVar2);
                ___cxa_atexit(PTR__FastPool_100ee6858, &GetDrawableElementPool()::pool, 4294967296);
                ___cxa_guard_release(&GetDrawableElementPool()::pool);
            }
        }
        return &GetDrawableElementPool()::pool;
    }

    // 0x10080d130, 384 bytes, base-object constructor, placed by class name
    // GeometryBatchInstance::GeometryBatchInstance(Model&, unsigned short)
    void GeometryBatchInstance::GeometryBatchInstance(Model* param_1, ushort param_2) {
        new (this) Transformable();
        new (&field_8, 3) Drawable();
        new (this) MakeUniquePool<GeometryBatchInstance, 3072>();
        field_0 = &PTR_Transform_100f15708;
        field_8 = &PTR__GeometryBatchInstance_100f15758;
        MakeSharedPool<GeometryBatch, 4096>::MakeShared<>((shared_ptr*)field_24,
                                                          (MakeSharedPool<GeometryBatch, 4096>*)3);
        new (m_material) ModelMaterial();
        field_656 = param_1;
        new (&field_664) eastl::vector<MaterialInfo, eastl::allocator>();
        new (&field_696) eastl::vector<SourceModelExternalIndexSection, eastl::allocator>();
        new (&field_728) eastl::vector<SourceModelExternalIndexSectionRangeOnly, eastl::allocator>();
        field_768 = 0;
        field_760 = 0;
        new (&field_784) math::Vector4T<float>();
        new (&field_800) VertexAnimation();
        new (&field_880) math::Vector4T<float>();
        SetInstanceDebugColour(this);
        (&field_696, (ulong)param_2)->reserve();
        (&field_728, (ulong)param_2)->reserve();
    }

    // 0x10080d420, 128 bytes, placed by class name
    // GeometryBatchInstance::SetInstanceDebugColour()
    void GeometryBatchInstance::SetInstanceDebugColour() {
        long lVar1;
        float fVar2;

        fVar2 = (float)math::frand(0.0, 1.0);
        fVar2 = (float)floor(fVar2 * 16777215.0);
        lVar1 = (long)fVar2;
        (&field_784, (float)((uint)((ulong)lVar1 >> 16) & 255) * 0.003921569,
         (float)(byte)((ulong)lVar1 >> 8) * 0.003921569, (float)((uint)lVar1 & 255) * 0.003921569, 1.0)
            ->Set();
    }

    // 0x10080d500, 16 bytes, complete-object constructor, placed by class name
    // GeometryBatchInstance::GeometryBatchInstance(Model&, unsigned short): jumps straight to the base-object constructor

    // 0x10080d510, 384 bytes, base-object constructor, placed by class name
    // GeometryBatchInstance::GeometryBatchInstance(GeometryBatchInstance&&, Model&)
    void GeometryBatchInstance::GeometryBatchInstance(GeometryBatchInstance* param_1, Model* param_2) {
        undefined8 uVar1;

        new (this) Transformable();
        new (&field_8, (Drawable*)&param_1->field_8) Drawable();
        new (this) MakeUniquePool<GeometryBatchInstance, 3072>();
        field_0 = &PTR_Transform_100f15708;
        field_8 = &PTR__GeometryBatchInstance_100f15758;
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)field_24, (shared_ptr*)param_1->field_24);
        new (m_material, (ModelMaterial*)param_1->m_material) ModelMaterial();
        field_656 = param_2;
        new (&field_664) eastl::vector<MaterialInfo, eastl::allocator>();
        new (&field_696, (vector*)&param_1->field_696)
            eastl::vector<SourceModelExternalIndexSection, eastl::allocator>();
        new (&field_728, (vector*)&param_1->field_728)
            eastl::vector<SourceModelExternalIndexSectionRangeOnly, eastl::allocator>();
        field_768 = 0;
        field_760 = 0;
        new (&field_784) math::Vector4T<float>();
        new (&field_800, (VertexAnimation*)&param_1->field_800) VertexAnimation();
        uVar1 = param_1->field_888;
        field_880 = param_1->field_880;
        field_888 = uVar1;
        SetInstanceDebugColour(this);
        UpdateShadowRenderFlags(this);
    }

    // 0x10080d6c0, 96 bytes, placed by class name
    // GeometryBatchInstance::UpdateShadowRenderFlags()
    void GeometryBatchInstance::UpdateShadowRenderFlags() {
        byte bVar1;
        byte bVar2;
        uint uVar3;

        uVar3 = (&field_8)->GetPos();
        bVar1 = (m_material, 7)->GetOption();
        bVar2 = (m_material, 8)->GetOption();
        new (&field_8, ((uint)bVar1 | uVar3 & 4294967292) + (uint)bVar2 * 2) oldscape::ServerConnectionWorkItem();
    }

    // 0x10080d720, 16 bytes, complete-object constructor, placed by class name
    // GeometryBatchInstance::GeometryBatchInstance(GeometryBatchInstance&&, Model&): jumps straight to the base-object constructor

    // 0x10080d730, 432 bytes, base-object constructor, placed by class name
    // GeometryBatchInstance::GeometryBatchInstance(GeometryBatchInstance const&, Model&, bool)
    void GeometryBatchInstance::GeometryBatchInstance(GeometryBatchInstance* param_1, Model* param_2, bool param_3) {
        undefined8 uVar1;
        undefined1 auVar2[16];

        new (this) Transformable();
        new (&field_8, (Drawable*)&param_1->field_8) Drawable();
        new (this) MakeUniquePool<GeometryBatchInstance, 3072>();
        field_0 = &PTR_Transform_100f15708;
        field_8 = &PTR__GeometryBatchInstance_100f15758;
        if (param_3) {
            new (field_24, (shared_ptr*)param_1->field_24) shared_ptr<oldscape::dash3d::Decor>();
        } else {
            auVar2 = shared_ptr<GeometryBatch>::operator*((shared_ptr<GeometryBatch>*)param_1->field_24);
            MakeSharedPool<GeometryBatch, 4096>::MakeShared<GeometryBatch&>((shared_ptr*)field_24, auVar2._0_8_,
                                                                            auVar2._8_8_);
        }
        new (m_material, (ModelMaterial*)param_1->m_material) ModelMaterial();
        field_656 = param_2;
        new (&field_664) eastl::vector<MaterialInfo, eastl::allocator>();
        new (&field_696, (vector*)&param_1->field_696)
            eastl::vector<SourceModelExternalIndexSection, eastl::allocator>();
        new (&field_728, (vector*)&param_1->field_728)
            eastl::vector<SourceModelExternalIndexSectionRangeOnly, eastl::allocator>();
        field_768 = 0;
        field_760 = 0;
        new (&field_784) math::Vector4T<float>();
        new (&field_800, (VertexAnimation*)&param_1->field_800) VertexAnimation();
        uVar1 = param_1->field_888;
        field_880 = param_1->field_880;
        field_888 = uVar1;
        SetInstanceDebugColour(this);
        UpdateShadowRenderFlags(this);
    }

    // 0x10080da10, 16 bytes, complete-object constructor, placed by class name
    // GeometryBatchInstance::GeometryBatchInstance(GeometryBatchInstance const&, Model&, bool): jumps straight to the base-object constructor

    // 0x10080da20, 384 bytes, base-object constructor, placed by class name
    // GeometryBatchInstance::GeometryBatchInstance(Model&, shared_ptr<GeometryBatch> const&)
    void GeometryBatchInstance::GeometryBatchInstance(Model* param_1, shared_ptr* param_2) {
        new (this) Transformable();
        new (&field_8, 0) Drawable();
        new (this) MakeUniquePool<GeometryBatchInstance, 3072>();
        field_0 = &PTR_Transform_100f15708;
        field_8 = &PTR__GeometryBatchInstance_100f15758;
        new (field_24, param_2) shared_ptr<oldscape::dash3d::Decor>();
        new (m_material) ModelMaterial();
        field_656 = param_1;
        new (&field_664) eastl::vector<MaterialInfo, eastl::allocator>();
        new (&field_696) eastl::vector<SourceModelExternalIndexSection, eastl::allocator>();
        new (&field_728) eastl::vector<SourceModelExternalIndexSectionRangeOnly, eastl::allocator>();
        field_768 = 0;
        field_760 = 0;
        new (&field_784) math::Vector4T<float>();
        new (&field_800) VertexAnimation();
        new (&field_880) math::Vector4T<float>();
        SetInstanceDebugColour(this);
        (&field_696, 1)->reserve();
        (&field_728, 1)->reserve();
    }

    // 0x10080dba0, 16 bytes, complete-object constructor, placed by class name
    // GeometryBatchInstance::GeometryBatchInstance(Model&, shared_ptr<GeometryBatch> const&): jumps straight to the base-object constructor

    // 0x10080dbb0, 224 bytes, base-object destructor, placed by class name
    // GeometryBatchInstance::~GeometryBatchInstance()
    void GeometryBatchInstance::~GeometryBatchInstance() {
        field_0 = &PTR_Transform_100f15708;
        field_8 = &PTR__GeometryBatchInstance_100f15758;
        m_material->DestroyRenderingResources();
        (&field_800)->~VertexAnimation();
        (&field_728)->~vector();
        (&field_696)->~vector();
        (&field_664)->~vector();
        m_material->~ModelMaterial();
        field_24->~shared_ptr();
        (&field_8)->~AutoSingleton();
    }

    // 0x10080dcc0, 16 bytes, complete-object destructor, placed by class name
    // GeometryBatchInstance::~GeometryBatchInstance(): jumps straight to the base-object destructor

    // 0x10080dce0, 32 bytes, deleting destructor, placed by class name
    // GeometryBatchInstance::~GeometryBatchInstance()
    void GeometryBatchInstance::~GeometryBatchInstance() {
        ~GeometryBatchInstance(this);
        operator_delete(this);
    }

    // 0x10080dd50, 304 bytes, placed by class name
    // GeometryBatchInstance::SetDefaultLODs(EffectManager const&, RenderPassType, SceneViewData const&, float, math::OBB const&)
    void GeometryBatchInstance::SetDefaultLODs(float param_1_00, GeometryBatchInstance* this, EffectManager* param_1,
                                               int param_4, NXTPixToolkit* param_5, OBB* param_6) {
        char cVar1;
        int iVar2;
        Matrix44T* pMVar3;
        Matrix44T* pMVar4;
        ModelLodPassConfig* pMVar5;
        int iVar6;
        float fVar7;
        undefined1 local_48[16];
        float local_34;

        cVar1 = param_1->IsEnabled(96);
        if ((cVar1 == '\0') && (param_4 - 3U < 2)) {
            cVar1 = param_1->IsEnabled(95);
            if (cVar1 == '\0') {
                iVar6 = 0;
                do {
                    SetLodLevel(this, iVar6, 0);
                    iVar6 = iVar6 + 1;
                } while (iVar6 != 3);
            } else {
                cVar1 = param_1->IsEnabled(97);
                if (cVar1 == '\0') {
                    new (local_48) math::Sphere();
                    param_6->GetMinimumEnclosingSphere(local_48);
                    pMVar3 = (Matrix44T*)param_5->GetScreen();
                    pMVar4 = (Matrix44T*)param_5->GetOrigin();
                    local_34 = (float)math::NDCProjectGetSphericalNDCRadius((Sphere*)local_48, pMVar3, pMVar4);
                    iVar6 = 0;
                    do {
                        pMVar5 = (ModelLodPassConfig*)Model::GetLodConfig(iVar6);
                        fVar7 = (float)local_48->GetOutlineRadiusAdjustment();
                        iVar2 = Model::CalculateLodLevel(pMVar5, param_1_00, local_34, fVar7);
                        SetLodLevel(this, iVar6, iVar2 + *(int*)(pMVar5 + 24));
                        iVar6 = iVar6 + 1;
                    } while (iVar6 != 3);
                } else {
                    SetLodLevel(this, 0, 4);
                }
            }
        }
    }

    // 0x10080e030, 32 bytes, placed by class name
    // GeometryBatchInstance::IsTransformed() const
    void GeometryBatchInstance::IsTransformed() {
        GeometryBatch* this_00;

        this_00 = (GeometryBatch*)shared_ptr<GeometryBatch>::operator->((shared_ptr<GeometryBatch>*)field_24);
        this_00->IsTransformed();
    }

    // 0x10080e060, 48 bytes, placed by class name
    // GeometryBatchInstance::SetTransformed(bool)
    void GeometryBatchInstance::SetTransformed(bool param_1) {
        GeometryBatch* this_00;

        this_00 = (GeometryBatch*)shared_ptr<GeometryBatch>::operator->((shared_ptr<GeometryBatch>*)field_24);
        this_00->SetTransformed(param_1);
    }

    // 0x10080e0a0, 32 bytes, placed by class name
    // GeometryBatchInstance::GetAABB() const
    void GeometryBatchInstance::GetAABB() {
        Layout* this_00;
        type* in_RSI;

        this_00 = (Layout*)shared_ptr<GeometryBatch>::operator->((shared_ptr<GeometryBatch>*)field_24);
        eastl::string::Layout::SSOBeginPtr(this_00, in_RSI);
    }

    // 0x10080e0c0, 368 bytes, placed by class name
    // GeometryBatchInstance::SetAnimationStateProvider(shared_ptr<AnimationStateProvider> const&)
    void GeometryBatchInstance::SetAnimationStateProvider(shared_ptr* param_1) {
        GeometryBatch* this_00;
        shared_ptr* this_01;
        AnimationStateProvider* this_02;
        EffectList* pEVar1;
        bool bVar2;
        char cVar3;
        long* plVar4;
        undefined1* puVar5;

        bVar2 = field_24->operator_cast_to_bool();
        if (bVar2) {
            this_00 = (GeometryBatch*)shared_ptr<GeometryBatch>::operator->((shared_ptr<GeometryBatch>*)field_24);
            cVar3 = this_00->HasBones();
            if (cVar3 == '\0')
                goto LAB_10080e0f5;
        } else {
        LAB_10080e0f5:
            plVar4 =
                (long*)shared_ptr<AnimationStateProvider>::operator->((shared_ptr<AnimationStateProvider>*)param_1);
            cVar3 = (**(code**)(*plVar4 + 48))(plVar4);
            if (cVar3 == '\0') {
                plVar4 =
                    (long*)shared_ptr<AnimationStateProvider>::operator->((shared_ptr<AnimationStateProvider>*)param_1);
                cVar3 = (**(code**)(*plVar4 + 56))(plVar4);
                if (cVar3 == '\x02')
                    goto LAB_10080e175;
            }
        }
        this_01 = (shared_ptr*)GetMaterial((GeometryBatchInstance*)&field_800);
        bVar2 = shared_ptr::operator_cast_to_bool(this_01);
        if (!bVar2) {
            this_02 = (AnimationStateProvider*)shared_ptr<AnimationStateProvider>::operator->(
                (shared_ptr<AnimationStateProvider>*)param_1);
            this_02->InvalidateAsyncUpdate();
        }
        (&field_800, param_1)->SetAnimationStateProvider();
        bVar2 = operator!=(param_1, (_func_decltype_nullptr*)0);
        (&field_8, 8, bVar2)->SetRenderFlag();
    LAB_10080e175:
        bVar2 = shared_ptr::operator_cast_to_bool(param_1);
        cVar3 = '\x02';
        if (bVar2) {
            plVar4 =
                (long*)shared_ptr<AnimationStateProvider>::operator->((shared_ptr<AnimationStateProvider>*)param_1);
            cVar3 = (**(code**)(*plVar4 + 56))(plVar4);
        }
        puVar5 = m_material;
        pEVar1 = (EffectList*)puVar5->GetRenderPassEffect(4);
        pEVar1->Set(77, cVar3 == '\0');
        pEVar1 = (EffectList*)puVar5->GetRenderPassEffect(2);
        pEVar1->Set(77, cVar3 == '\0');
        pEVar1 = (EffectList*)puVar5->GetRenderPassEffect(4);
        pEVar1->Set(78, cVar3 == '\x01');
        pEVar1 = (EffectList*)puVar5->GetRenderPassEffect(2);
        pEVar1->Set(78, cVar3 == '\x01');
    }

    // 0x10080e230, 256 bytes, placed by class name
    // GeometryBatchInstance::UpdateAnimation(ThreadPool&, unsigned int, math::Matrix44T<float> const&)
    void GeometryBatchInstance::UpdateAnimation(ThreadPool* param_1, uint param_2, Matrix44T* param_3) {
        undefined1* this_00;
        uint uVar2;
        uint uVar3;
        RenderMaterial* this_01;
        GeometryBatch* pGVar4;
        vector_map* pvVar5;
        vector_map* pvVar6;
        GeometryBatchInstance* this_02;
        vector_map* pvVar7;
        Array* pAVar8;

        this_00 = field_24;
        if (!operator!=((shared_ptr*)this_00, (_func_decltype_nullptr*)0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_geometryBatch != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "GeometryBatchInstance.cpp",
                      214, (char*)0);
        }
        this_01 = (RenderMaterial*)shared_ptr<GeometryBatch>::operator->((shared_ptr<GeometryBatch>*)this_00);
        uVar2 = this_01->GetAlphaTestThreshold();
        pGVar4 = (GeometryBatch*)shared_ptr<GeometryBatch>::operator->((shared_ptr<GeometryBatch>*)this_00);
        uVar3 = pGVar4->GetLabelCount();
        (&field_800, uVar2, uVar3, 0)->SetMaxSize();
        pGVar4 = (GeometryBatch*)shared_ptr<GeometryBatch>::operator->((shared_ptr<GeometryBatch>*)this_00);
        pvVar5 = (vector_map*)pGVar4->GetBoneIDMap();
        pGVar4 = (GeometryBatch*)shared_ptr<GeometryBatch>::operator->((shared_ptr<GeometryBatch>*)this_00);
        pvVar6 = (vector_map*)pGVar4->GetJointIDMap();
        this_02 = (GeometryBatchInstance*)shared_ptr<GeometryBatch>::operator->((shared_ptr<GeometryBatch>*)this_00);
        pvVar7 = (vector_map*)GetMaterial(this_02);
        pAVar8 = (Array*)field_656->GetTextureAtlasManager();
        (&field_800, param_1, param_2, pvVar5, pvVar6, pvVar7, (vector_map*)0, pAVar8, param_3)->UpdateAnimation();
    }

    // 0x10080e340, 32 bytes, placed by class name
    // GeometryBatchInstance::EndUpdateAnimation()
    void GeometryBatchInstance::EndUpdateAnimation() {
        (&field_800)->EndUpdateAnimation();
    }

    // 0x10080e360, 112 bytes, placed by class name
    // GeometryBatchInstance::LoadMeshFromModelRawRT7(PacketView&, unsigned int)
    undefined4 GeometryBatchInstance::LoadMeshFromModelRawRT7(PacketView* param_1, uint param_2) {
        bool bVar1;
        undefined4 uVar2;
        GeometryBatch* pGVar3;

        pGVar3 = (GeometryBatch*)shared_ptr<GeometryBatch>::operator->((shared_ptr<GeometryBatch>*)field_24);
        uVar2 = pGVar3->LoadMeshFromModelRawRT7(param_1, param_2);
        pGVar3 = (GeometryBatch*)shared_ptr<GeometryBatch>::operator->((shared_ptr<GeometryBatch>*)field_24);
        bVar1 = (bool)pGVar3->IsHidden();
        (m_material, 10, bVar1)->SetOption();
        return uVar2;
    }

    // 0x10080e3d0, 192 bytes, placed by class name
    // GeometryBatchInstance::SetInitialSource(int, unsigned char, int)
    void GeometryBatchInstance::SetInitialSource(int param_1, uchar param_2, int param_3) {
        int* piVar3;
        undefined4* puVar4;
        GeometryBatch* pGVar5;
        ulong uVar6;

        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        piVar3 = (int*)(&field_696)->push_back_uninitialized();
        *piVar3 = param_1;
        *(uchar*)(piVar3 + 1) = param_2;
        piVar3[2] = param_3;
        *(undefined2*)(piVar3 + 4) = 64;
        uVar6 = 0;
        do {
            puVar4 = (undefined4*)std::array<IndexRange, 5ul>::operator[]((array<IndexRange, 5ul>*)(piVar3 + 5), uVar6);
            *puVar4 = 0;
            pGVar5 = (GeometryBatch*)shared_ptr<GeometryBatch>::operator->((shared_ptr<GeometryBatch>*)field_24);
            puVar4[1] = pGVar5->GetLodIndexCount((uint)uVar6);
            uVar6 = uVar6 + 1;
        } while (uVar6 != 5);
        piVar3[15] = 0;
        pGVar5 = (GeometryBatch*)shared_ptr<GeometryBatch>::operator->((shared_ptr<GeometryBatch>*)field_24);
        piVar3[16] = pGVar5->GetVertexCount();
    }

    // 0x10080e4d0, 80 bytes, placed by class name
    // GeometryBatchInstance::ChangeSourceExternalID(int, int)
    void GeometryBatchInstance::ChangeSourceExternalID(int param_1, int param_2) {
        int* piVar1;
        int* piVar2;

        piVar1 = (int*)(&field_696)->HeapBeginPtr();
        piVar2 = (int*)(&field_696)->end();
        for (; piVar1 != piVar2; piVar1 = piVar1 + 17) {
            if (*piVar1 == param_1) {
                *piVar1 = param_2;
            }
        }
    }

    // 0x10080e520, 80 bytes, placed by class name
    // GeometryBatchInstance::ChangeSourceExternalIDs(int)
    void GeometryBatchInstance::ChangeSourceExternalIDs(int param_1) {
        int* piVar1;
        int* piVar2;

        piVar1 = (int*)(&field_696)->HeapBeginPtr();
        piVar2 = (int*)(&field_696)->end();
        for (; piVar1 != piVar2; piVar1 = piVar1 + 17) {
            *piVar1 = param_1;
        }
    }

    // 0x10080e570, 64 bytes, placed by class name
    // GeometryBatchInstance::GetFirstMaterialIDFromSource() const
    undefined4 GeometryBatchInstance::GetFirstMaterialIDFromSource() {
        char cVar1;
        undefined4 uVar2;
        long lVar3;

        cVar1 = (&field_696)->empty();
        uVar2 = 4294967295;
        if (cVar1 == '\0') {
            lVar3 = (&field_696)->front();
            uVar2 = *(undefined4*)(lVar3 + 8);
        }
        return uVar2;
    }

    // 0x10080e5b0, 64 bytes, placed by class name
    // GeometryBatchInstance::GetFirstSequenceIDFromSource() const
    ulong GeometryBatchInstance::GetFirstSequenceIDFromSource() {
        char cVar1;
        ulong uVar2;
        long lVar3;

        cVar1 = (&field_696)->empty();
        uVar2 = 4294967295;
        if (cVar1 == '\0') {
            lVar3 = (&field_696)->front();
            uVar2 = (ulong) * (byte*)(lVar3 + 4);
        }
        return uVar2;
    }

    // 0x10080e5f0, 96 bytes, placed by class name
    // GeometryBatchInstance::BuildMaterialIDListFromSource(eastl::fixed_vector<int, 128ul, true, eastl::allocator>&) const
    void GeometryBatchInstance::BuildMaterialIDListFromSource(fixed_vector* param_1) {
        long lVar1;
        long lVar2;

        lVar1 = (&field_696)->HeapBeginPtr();
        lVar2 = (&field_696)->end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 68) {
            eastl::fixed_vector<int, 128ul, true, eastl::allocator>::push_back((int*)param_1);
        }
    }

    // 0x10080e650, 112 bytes, placed by class name
    // GeometryBatchInstance::SetInitialMaterial(Material const&, bool)
    void GeometryBatchInstance::SetInitialMaterial(Material* param_1, bool param_2) {
        if (param_1->ShowSkybox() == '\0') {
            (m_material, (RasteriserState*)AlphaMode::ALPHA_BLENDED)->SetRasteriserState();
        } else {
            (m_material, param_1, param_2)->Init();
            TextureAtlasManager::PopulateMaterialInfoFromMaterial<eastl::allocator>((vector*)&field_664, param_1);
            UpdateShadowRenderFlags(this);
            BakeBatchFlags(this);
        }
    }

    // 0x10080e940, 192 bytes, placed by class name
    // GeometryBatchInstance::BakeBatchFlags()
    void GeometryBatchInstance::BakeBatchFlags() {
        undefined1* this_00;
        GeometryBatch* this_01;
        byte bVar1;
        char cVar2;
        char cVar3;
        char cVar4;
        byte bVar5;

        this_00 = m_material;
        bVar1 = this_00->GetOption(1);
        cVar2 = this_00->GetOption(2);
        cVar3 = this_00->GetOption(3);
        cVar4 = this_00->GetOption(9);
        bVar5 = 8;
        if (cVar4 == '\0') {
            cVar4 = this_00->IsAlpha();
            bVar5 = cVar4 << 3;
        }
        cVar4 = this_00->GetOption(4);
        bVar1 = this_00->GetOption(5) << 5 | cVar4 << 4 | cVar3 << 2 | cVar2 * '\x02' | bVar1 | bVar5;
        if (bVar1 != 0) {
            this_01 = (GeometryBatch*)shared_ptr<GeometryBatch>::operator->((shared_ptr<GeometryBatch>*)field_24);
            this_01->BakeBatchFlags(bVar1);
        }
    }

    // 0x10080ea10, 224 bytes, placed by class name
    // GeometryBatchInstance::BakeTile(unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char)
    void GeometryBatchInstance::BakeTile(uchar param_1, uchar param_2, uchar param_3, uchar param_4, uchar param_5,
                                         uchar param_6, uchar param_7) {
        long lVar1;
        long lVar2;
        GeometryBatch* this_00;
        uint* puVar3;

        lVar1 = (&field_696)->HeapBeginPtr();
        lVar2 = (&field_696)->end();
        if (lVar1 != lVar2) {
            do {
                this_00 = (GeometryBatch*)shared_ptr<GeometryBatch>::operator->((shared_ptr<GeometryBatch>*)field_24);
                puVar3 = (uint*)std::array<IndexRange, 5ul>::operator[]((array<IndexRange, 5ul>*)(lVar1 + 20), 0);
                this_00->BakeTile(*puVar3, puVar3[1], param_1, param_2, param_3, param_4, param_5, param_6, param_7);
                lVar1 = lVar1 + 68;
            } while (lVar1 != lVar2);
        }
    }

    // 0x10080eaf0, 448 bytes, placed by class name
    // GeometryBatchInstance::BakeHSLColors(eastl::fixed_map<int, Material const*, 64ul, true, eastl::less<int>, eastl::allocator> const&)
    void GeometryBatchInstance::BakeHSLColors(fixed_map* param_1) {
        undefined1* this_00;
        ushort uVar1;
        Material* this_01;
        char cVar2;
        bool bVar3;
        byte bVar4;
        uint uVar5;
        uint uVar6;
        GeometryBatch* pGVar7;
        GeometryBatch* this_02;
        vector<game::MapSquare::MapSquarePos, eastl::allocator>* this_03;
        array<IndexRange, 5ul>* paVar8;
        uint* puVar9;
        long lVar10;
        array<IndexRange, 5ul>* paVar11;
        uint uVar12;
        shared_ptr<GeometryBatch>* this_04;
        undefined1 auVar13[16];
        undefined8 local_68;
        undefined8 local_60;
        GeometryBatch* local_50;
        shared_ptr<GeometryBatch>* local_48;
        array<IndexRange, 5ul>* local_40;
        uint local_34;

        this_00 = &field_696;
        cVar2 = this_00->empty();
        if (cVar2 == '\0') {
            paVar8 = (array<IndexRange, 5ul>*)this_00->HeapBeginPtr();
            local_40 = (array<IndexRange, 5ul>*)this_00->end();
            if (paVar8 != local_40) {
                this_04 = (shared_ptr<GeometryBatch>*)field_24;
                paVar8 = paVar8 + 20;
                local_48 = this_04;
                do {
                    puVar9 = (uint*)std::array<IndexRange, 5ul>::operator[](paVar8, 0);
                    local_68 = eastl::rbtree<int, eastl::pair<int const, Material_const*>, eastl::less<int>,
                                             eastl::fixed_node_allocator<48ul, 64ul, 8ul, 0ul, true, eastl::allocator>,
                                             eastl::use_first<eastl::pair<int const, Material_const*>>, true,
                                             true>::find((int*)param_1);
                    auVar13 = eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>,
                                            eastl::less<eastl::string>, eastl::allocator,
                                            eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true, true>::end();
                    local_60 = auVar13._0_8_;
                    bVar3 = eastl::operator!=((eastl*)&local_68, (hashtable_iterator_base*)&local_60, auVar13._8_8_);
                    if (bVar3) {
                        lVar10 = eastl::rbtree_iterator<
                            eastl::pair<unsigned int const,
                                        eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                            eastl::pair<unsigned int const,
                                        eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                            eastl::pair<unsigned int const,
                                        eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                        operator*((rbtree_iterator<
                                   eastl::pair<unsigned int const,
                                               eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                                   eastl::pair<unsigned int const,
                                               eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                                   eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe,
                                                                                 eastl::allocator>>&>*)&local_68);
                        this_01 = *(Material**)(lVar10 + 8);
                        local_50 = (GeometryBatch*)shared_ptr<GeometryBatch>::operator->(this_04);
                        local_34 = *puVar9;
                        uVar5 = puVar9[1];
                        uVar1 = *(ushort*)(paVar8 + -4);
                        cVar2 = this_01->IsRT7();
                        if (cVar2 == '\0') {
                            uVar6 = this_01->GetLegacyWhiteness();
                        } else {
                            uVar6 = this_01->GetVertexColourStrengthAsWhiteness();
                        }
                        cVar2 = this_01->IsRT7();
                        uVar12 = 0;
                        if (cVar2 == '\0') {
                            bVar4 = this_01->GetLegacyBrightness();
                            uVar12 = (uint)bVar4;
                        }
                        local_50->BakeHSLColors(local_34, uVar5, uVar1, uVar6 & 255, uVar12);
                        this_04 = local_48;
                    } else {
                        pGVar7 = (GeometryBatch*)shared_ptr<GeometryBatch>::operator->(this_04);
                        pGVar7->BakeHSLColors(*puVar9, puVar9[1], *(ushort*)(paVar8 + -4), 0, 0);
                    }
                    paVar11 = paVar8 + 48;
                    paVar8 = paVar8 + 68;
                } while (paVar11 != local_40);
            }
        } else {
            pGVar7 = (GeometryBatch*)shared_ptr<GeometryBatch>::operator->((shared_ptr<GeometryBatch>*)field_24);
            this_02 = (GeometryBatch*)shared_ptr<GeometryBatch>::operator->((shared_ptr<GeometryBatch>*)field_24);
            this_03 = (vector<game::MapSquare::MapSquarePos, eastl::allocator>*)this_02->GetVertexIndexBuffer();
            uVar5 = eastl::vector<game::MapSquare::MapSquarePos, eastl::allocator>::size(this_03);
            pGVar7->BakeHSLColors(0, uVar5, 64, 0, 0);
        }
    }

    // 0x10080ed40, 512 bytes, placed by class name
    // GeometryBatchInstance::BakeMaterialInfoAndTextureMeta(eastl::fixed_map<int, Material const*, 64ul, true, eastl::less<int>, eastl::allocator> const&, eastl::fixed_map<int, ModelTextureMeta, 64ul, true, eastl::less<int>, eastl::allocator> const&)
    void GeometryBatchInstance::BakeMaterialInfoAndTextureMeta(fixed_map* param_1, fixed_map* param_2) {
        undefined1* this_00;
        uint uVar1;
        uint uVar2;
        Material* this_01;
        bool bVar3;
        char cVar4;
        long lVar5;
        long lVar6;
        long lVar7;
        GeometryBatch* this_02;
        undefined1 auVar8[16];
        undefined8 local_60;
        ulong local_58;
        GeometryBatchInstance* local_50;
        uint* local_48;
        undefined8 local_40;
        RenderMaterial* local_38;

        this_00 = m_material;
        this_00->SetOption(9, false);
        this_00->SetOption(4, false);
        local_38 = (RenderMaterial*)this_00;
        this_00->SetOption(5, false);
        local_50 = this;
        lVar5 = (&field_696)->HeapBeginPtr();
        lVar6 = (&field_696)->end();
        if (lVar5 != lVar6) {
            local_50 = (GeometryBatchInstance*)local_50->field_24;
            do {
                local_48 = (uint*)std::array<IndexRange, 5ul>::operator[]((array<IndexRange, 5ul>*)(lVar5 + 20), 0);
                local_60 = eastl::rbtree<int, eastl::pair<int const, Material_const*>, eastl::less<int>,
                                         eastl::fixed_node_allocator<48ul, 64ul, 8ul, 0ul, true, eastl::allocator>,
                                         eastl::use_first<eastl::pair<int const, Material_const*>>, true,
                                         true>::find((int*)param_1);
                auVar8 = eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                                       eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true,
                                       true>::end();
                local_40 = auVar8._0_8_;
                bVar3 = eastl::operator!=((eastl*)&local_60, (hashtable_iterator_base*)&local_40, auVar8._8_8_);
                if (bVar3) {
                    lVar7 = eastl::rbtree_iterator<
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
                                                                                       eastl::allocator>>&>*)&local_60);
                    this_01 = *(Material**)(lVar7 + 8);
                    cVar4 = this_01->HasForcedTextures();
                    if (cVar4 != '\0') {
                        local_38->SetOption(9, true);
                    }
                    cVar4 = local_38->GetOption(0);
                    if (cVar4 == '\0') {
                        cVar4 = this_01->HasHDRMap();
                        if (cVar4 != '\0') {
                            local_38->SetOption(4, true);
                        }
                        cVar4 = this_01->IsWeighted();
                        if (cVar4 != '\0') {
                            local_38->SetOption(5, true);
                        }
                    }
                }
                local_40 = eastl::rbtree<int, eastl::pair<int const, ModelTextureMeta>, eastl::less<int>,
                                         eastl::fixed_node_allocator<40ul, 64ul, 4ul, 0ul, true, eastl::allocator>,
                                         eastl::use_first<eastl::pair<int const, ModelTextureMeta>>, true,
                                         true>::find((int*)param_2);
                auVar8 = eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                                       eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true,
                                       true>::end();
                local_58 = auVar8._0_8_;
                bVar3 = eastl::operator!=((eastl*)&local_40, (hashtable_iterator_base*)&local_58, auVar8._8_8_);
                this_02 = (GeometryBatch*)shared_ptr<GeometryBatch>::operator->((shared_ptr<GeometryBatch>*)local_50);
                uVar1 = *local_48;
                uVar2 = local_48[1];
                if (bVar3) {
                    local_48 = (uint*)CONCAT44(local_48._4_4_, uVar2);
                    lVar7 = eastl::rbtree_iterator<
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
                                                                                       eastl::allocator>>&>*)&local_40);
                    this_02->BakeTextureMeta(uVar1, (uint)local_48, (ModelTextureMeta*)(lVar7 + 4));
                } else {
                    local_58 = local_58 & 18446744073709486080;
                    new (&local_58) math::Vector2T<unsigned char>();
                    this_02->BakeTextureMeta(uVar1, uVar2, (ModelTextureMeta*)&local_58);
                }
                lVar5 = lVar5 + 68;
            } while (lVar5 != lVar6);
        }
    }

    // 0x10080ef70, 1440 bytes, placed by class name
    // GeometryBatchInstance::SortSections()
    void GeometryBatchInstance::SortSections() {
        undefined4 uVar1;
        long lVar3;
        ulong uVar4;
        SourceModelExternalIndexSection* pSVar5;
        int* piVar6;
        int* piVar7;
        int* piVar8;
        GeometryBatch* this_00;
        undefined8 uVar9;
        undefined8 uVar10;
        undefined8 uVar11;
        undefined4* puVar12;
        int* piVar13;
        undefined4* puVar14;
        undefined4* puVar15;
        int iVar16;
        undefined8 extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* phVar17;
        hashtable_iterator_base* extraout_RDX_01;
        ulong uVar18;
        vector<SourceModelExternalIndexSection, eastl::allocator>* pvVar19;
        undefined1 auVar20[16];
        undefined8 local_108;
        undefined8 uStack_100;
        undefined4 local_f8;
        int local_f0;
        undefined8 local_ec;
        undefined8 uStack_e4;
        undefined8 local_dc;
        undefined8 uStack_d4;
        undefined8 local_cc;
        hashtable_iterator_base local_c0[24];
        ulong local_a8;
        SourceModelExternalIndexSection* local_a0;
        SourceModelExternalIndexSection* local_98;
        undefined1* local_88;
        eastl local_80[8];
        undefined8 local_78;
        SourceModelExternalIndexSection* local_68;
        SourceModelExternalIndexSection* local_60;
        int* local_58;
        ulong local_50[3];
        vector<SourceModelExternalIndexSection, eastl::allocator>* local_38;

        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        pvVar19 = (vector<SourceModelExternalIndexSection, eastl::allocator>*)&field_696;
        auVar20 = eastl::vector<SourceModelExternalIndexSection, eastl::allocator>::size(pvVar19);
        if (auVar20._0_8_ < 2) {
            lVar3 = eastl::vector<SourceModelExternalIndexSection, eastl::allocator>::size(pvVar19);
            if (lVar3 == 1) {
                piVar6 = (int*)eastl::vector<SourceModelExternalIndexSection, eastl::allocator>::front(pvVar19);
                local_f0 = *piVar6;
                if (-1 < local_f0) {
                    local_ec = *(undefined8*)(piVar6 + 5);
                    uStack_e4 = *(undefined8*)(piVar6 + 7);
                    local_dc = *(undefined8*)(piVar6 + 9);
                    uStack_d4 = *(undefined8*)(piVar6 + 11);
                    local_cc = *(undefined8*)(piVar6 + 13);
                    (&field_728, (SourceModelExternalIndexSectionRangeOnly*)&local_f0)->push_back();
                }
            }
        } else {
            local_88 = &field_728;
            eastl::destruct<oldscape::highlight::NpcUID*>(local_80, (NpcUID*)"EASTL multimap", auVar20._8_8_);
            eastl::map<int, shared_ptr<oldscape::dash3d::AnimBase>, eastl::less<int>, BucketAllocatorEASTL>::map(
                (BucketAllocatorEASTL*)&local_f0);
            local_50[0] = 0;
            lVar3 = eastl::vector<SourceModelExternalIndexSection, eastl::allocator>::size(pvVar19);
            local_38 = pvVar19;
            if (lVar3 != 0) {
                do {
                    lVar3 = eastl::vector<SourceModelExternalIndexSection, eastl::allocator>::operator[](pvVar19,
                                                                                                         local_50[0]);
                    local_80[0] =
                        (eastl)eastl::make_pair<unsigned char const&, unsigned long&>((uchar*)(lVar3 + 4), local_50);
                    local_78 = extraout_RDX;
                    eastl::rbtree<unsigned char, eastl::pair<unsigned char const, unsigned long>,
                                  eastl::less<unsigned char>, BucketAllocatorEASTL,
                                  eastl::use_first<eastl::pair<unsigned char const, unsigned long>>, true,
                                  false>::insert<eastl::pair<unsigned char, unsigned long>, void>((pair*)&local_108);
                    pvVar19 = local_38;
                    uVar18 = local_50[0] + 1;
                    local_50[0] = uVar18;
                    uVar4 = eastl::vector<SourceModelExternalIndexSection, eastl::allocator>::size(local_38);
                } while (uVar18 < uVar4);
            }
            eastl::vector<SourceModelExternalIndexSection, BucketAllocatorEASTL>::vector();
            pvVar19 = local_38;
            uVar4 = eastl::vector<SourceModelExternalIndexSection, eastl::allocator>::size(local_38);
            local_80->reserve(uVar4);
            local_108 = 0;
            uStack_100 = 0;
            local_f8 = 0;
            eastl::vector<unsigned long,
                          eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::rbegin();
            eastl::rbtree<
                unsigned int,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::less<unsigned int>, eastl::allocator,
                eastl::use_first<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                true, true>::end();
            iVar16 = 0;
            phVar17 = extraout_RDX_00;
            uVar4 = 0;
            while (true) {
                if (!eastl::operator!=((eastl*)local_50, local_c0, phVar17))
                    break;
                local_58 = (int*)CONCAT44(local_58._4_4_, iVar16);
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
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)local_50);
                pSVar5 = (SourceModelExternalIndexSection*)
                    eastl::vector<SourceModelExternalIndexSection, eastl::allocator>::operator[](pvVar19,
                                                                                                 *(ulong*)(lVar3 + 8));
                local_a8 = uVar4 & 255;
                if (-1 < *(int*)pSVar5) {
                    local_a8 = 1;
                }
                local_98 = eastl::vector<SourceModelExternalIndexSection, BucketAllocatorEASTL>::emplace_back<
                    SourceModelExternalIndexSection_const&>(
                    (vector<SourceModelExternalIndexSection, BucketAllocatorEASTL>*)local_80, pSVar5);
                local_68 = local_98 + 20;
                local_60 = pSVar5 + 20;
                uVar4 = 0;
                local_a0 = pSVar5;
                do {
                    piVar6 =
                        (int*)std::array<unsigned int, 5ul>::operator[]((array<unsigned int, 5ul>*)&local_108, uVar4);
                    iVar16 = *piVar6;
                    piVar7 = (int*)std::array<IndexRange, 5ul>::operator[]((array<IndexRange, 5ul>*)local_68, uVar4);
                    *piVar7 = iVar16;
                    iVar16 = *piVar6;
                    piVar8 = (int*)std::array<IndexRange, 5ul>::operator[]((array<IndexRange, 5ul>*)local_60, uVar4);
                    iVar16 = (piVar8[1] - *piVar8) + iVar16;
                    piVar7[1] = iVar16;
                    *piVar6 = iVar16;
                    uVar4 = uVar4 + 1;
                } while (uVar4 != 5);
                *(int*)(local_98 + 60) = (int)local_58;
                iVar16 = (int)local_58 + (*(int*)(local_a0 + 64) - *(int*)(local_a0 + 60));
                *(int*)(local_98 + 64) = iVar16;
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
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)local_50);
                phVar17 = extraout_RDX_01;
                uVar4 = local_a8;
                pvVar19 = local_38;
            }
            this_00 = (GeometryBatch*)shared_ptr<GeometryBatch>::operator->(
                (shared_ptr<GeometryBatch>*)((GeometryBatchInstance*)this)->field_24);
            this_00->SortSections(pvVar19, local_80, (multimap*)&local_f0);
            eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
            uVar9 = local_80->HeapBeginPtr();
            uVar10 = local_80->end();
            uVar11 = eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                                   eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true,
                                   true>::end();
            eastl::copy<SourceModelExternalIndexSection*,
                        eastl::back_insert_iterator<eastl::vector<SourceModelExternalIndexSection, eastl::allocator>>>(
                uVar9, uVar10, uVar11);
            eastl::vector<SourceModelExternalIndexSectionRangeOnly, BucketAllocatorEASTL>::vector();
            uVar18 = eastl::vector<SourceModelExternalIndexSection, eastl::allocator>::size(pvVar19);
            local_50->reserve(uVar18);
            if ((uVar4 & 1) != 0) {
                piVar6 = (int*)eastl::vector<SourceModelExternalIndexSection, eastl::allocator>::operator[](pvVar19, 0);
                iVar16 = *piVar6;
                uVar4 = 0;
                do {
                    lVar3 = eastl::vector<SourceModelExternalIndexSection, eastl::allocator>::operator[](pvVar19, 0);
                    puVar12 = (undefined4*)std::array<IndexRange, 5ul>::operator[](
                        (array<IndexRange, 5ul>*)(lVar3 + 20), uVar4);
                    uVar1 = *puVar12;
                    puVar12 = (undefined4*)std::array<unsigned int, 5ul>::operator[](
                        (array<unsigned int, 5ul>*)local_c0, uVar4);
                    *puVar12 = uVar1;
                    uVar4 = uVar4 + 1;
                } while (uVar4 != 5);
                piVar7 = (int*)pvVar19->HeapBeginPtr();
                piVar6 = piVar7 + 17;
                piVar8 = (int*)pvVar19->end();
                if (piVar6 != piVar8) {
                    do {
                        piVar8 = piVar6;
                        if (*piVar6 != iVar16) {
                            local_58 = piVar6;
                            piVar6 = (int*)local_50->push_back_uninitialized();
                            *piVar6 = iVar16;
                            local_68 = (SourceModelExternalIndexSection*)(piVar6 + 1);
                            local_60 = (SourceModelExternalIndexSection*)(piVar7 + 22);
                            uVar4 = 0;
                            do {
                                puVar12 = (undefined4*)std::array<unsigned int, 5ul>::operator[](
                                    (array<unsigned int, 5ul>*)local_c0, uVar4);
                                uVar1 = *puVar12;
                                puVar14 = (undefined4*)std::array<IndexRange, 5ul>::operator[](
                                    (array<IndexRange, 5ul>*)local_68, uVar4);
                                *puVar14 = uVar1;
                                puVar15 = (undefined4*)std::array<IndexRange, 5ul>::operator[](
                                    (array<IndexRange, 5ul>*)local_60, uVar4);
                                uVar1 = *puVar15;
                                puVar14[1] = uVar1;
                                *puVar12 = uVar1;
                                uVar4 = uVar4 + 1;
                            } while (uVar4 != 5);
                            iVar16 = *local_58;
                            piVar8 = local_58;
                            pvVar19 = local_38;
                        }
                        piVar6 = piVar8 + 17;
                        piVar13 = (int*)pvVar19->end();
                        piVar7 = piVar8;
                    } while (piVar6 != piVar13);
                }
                lVar3 = eastl::vector<SourceModelExternalIndexSection, eastl::allocator>::size(pvVar19);
                puVar12 = (undefined4*)eastl::vector<SourceModelExternalIndexSection, eastl::allocator>::operator[](
                    pvVar19, lVar3 - 1);
                puVar14 = (undefined4*)local_50->push_back_uninitialized();
                *puVar14 = *puVar12;
                uVar4 = 0;
                do {
                    puVar15 = (undefined4*)std::array<unsigned int, 5ul>::operator[](
                        (array<unsigned int, 5ul>*)local_c0, uVar4);
                    uVar1 = *puVar15;
                    puVar15 = (undefined4*)std::array<IndexRange, 5ul>::operator[](
                        (array<IndexRange, 5ul>*)(puVar14 + 1), uVar4);
                    *puVar15 = uVar1;
                    lVar3 = std::array<IndexRange, 5ul>::operator[]((array<IndexRange, 5ul>*)(puVar12 + 5), uVar4);
                    puVar15[1] = *(undefined4*)(lVar3 + 4);
                    uVar4 = uVar4 + 1;
                } while (uVar4 != 5);
            }
            uVar9 = local_50->HeapBeginPtr();
            uVar10 = local_50->end();
            uVar11 = eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                                   eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true,
                                   true>::end();
            eastl::copy<
                SourceModelExternalIndexSectionRangeOnly*,
                eastl::back_insert_iterator<eastl::vector<SourceModelExternalIndexSectionRangeOnly, eastl::allocator>>>(
                uVar9, uVar10, uVar11);
            local_50->~vector();
            local_80->~vector();
            local_f0.~multimap();
        }
    }

    // 0x10080f680, 752 bytes, placed by class name
    // GeometryBatchInstance::IsCombinableWith(GeometryBatchInstance const&, bool, bool, bool, TextureAtlas&)
    int GeometryBatchInstance::IsCombinableWith(GeometryBatchInstance* param_1, bool param_2, bool param_3,
                                                bool param_4, TextureAtlas* param_5) {
        shared_ptr<GeometryBatch>* this_00;
        bool bVar1;
        char cVar2;
        char cVar3;
        byte bVar4;
        uint uVar5;
        int iVar6;
        int iVar7;
        int iVar8;
        GeometryBatch* this_01;
        SpriteAtlasReference* this_02;
        ModelMaterial* pMVar9;
        long lVar10;
        GeometryBatch* pGVar11;
        RenderMaterial* this_03;
        vector_map* pvVar12;
        vector_map* pvVar13;
        long lVar14;
        MaterialInfo* pMVar15;
        MaterialInfo* pMVar16;
        undefined7 in_register_00000009;
        undefined7 in_register_00000011;
        undefined1* this_04;
        undefined3 in_register_00000081;
        undefined1* this_05;
        WrapArray<MaterialInfo_const> local_80[16];
        undefined1 local_70[32];
        undefined4 local_50;
        undefined4 local_4c;
        GeometryBatchInstance* local_48;
        GeometryBatchInstance* local_40;
        shared_ptr<GeometryBatch>* local_38;

        local_4c = CONCAT31(in_register_00000081, param_4);
        local_40 = (GeometryBatchInstance*)CONCAT44(local_40._4_4_, (int)CONCAT71(in_register_00000009, param_3));
        local_50 = (undefined4)CONCAT71(in_register_00000011, param_2);
        this_01 = (GeometryBatch*)GetGeometryBatch(param_1);
        local_48 = param_1;
        bVar1 = math::operator!=((Vector4T*)&field_880, (Vector4T*)&param_1->field_880);
        if (bVar1) {
            return 10;
        }
        local_38 = (shared_ptr<GeometryBatch>*)field_24;
        this_02 = (SpriteAtlasReference*)shared_ptr<GeometryBatch>::operator->(local_38);
        cVar2 = this_02->GetDisableCache();
        cVar3 = this_01->GetDisableCache();
        if (cVar2 != cVar3) {
            return 1;
        }
        local_70._24_8_ = param_5;
        pMVar9 = (ModelMaterial*)GetMaterial(local_48);
        cVar2 = (m_material, pMVar9)->IsCombinable();
        if (cVar2 == '\0') {
            return 2;
        }
        if ((char)local_40 == '\0') {
            cVar2 = (&field_696)->empty();
            if (((cVar2 == '\0') && (uVar5 = GetFirstSequenceIDFromSource(local_48), uVar5 != 4294967295)) &&
                (lVar10 = (&field_696)->front(), uVar5 != *(byte*)(lVar10 + 4))) {
                return 3;
            }
        }
        if ((char)local_50 == '\0')
            goto LAB_10080f86c;
        pGVar11 = (GeometryBatch*)shared_ptr<GeometryBatch>::operator->(local_38);
        iVar6 = pGVar11->GetIndexCount();
        iVar7 = this_01->GetIndexCount();
        if (65535 < (uint)(iVar7 + iVar6)) {
            return 4;
        }
        if ((char)local_4c == '\0')
            goto LAB_10080f86c;
        pGVar11 = (GeometryBatch*)shared_ptr<GeometryBatch>::operator->(local_38);
        iVar6 = pGVar11->GetLabelCount();
        iVar7 = this_01->GetLabelCount();
        this_00 = local_38;
        if (32 < (uint)(iVar7 + iVar6)) {
            return 5;
        }
        local_40 = this;
        this_03 = (RenderMaterial*)shared_ptr<GeometryBatch>::operator->(local_38);
        iVar6 = this_03->GetAlphaTestThreshold();
        iVar7 = this_01->GetAlphaTestThreshold();
        iVar8 = 3;
        if ((uint)(iVar7 + iVar6) < 57) {
        LAB_10080f85e:
            bVar1 = true;
        } else {
            pGVar11 = (GeometryBatch*)shared_ptr<GeometryBatch>::operator->(this_00);
            pvVar12 = (vector_map*)pGVar11->GetBoneIDMap();
            pvVar13 = (vector_map*)this_01->GetBoneIDMap();
            iVar8 = Algorithms::CountMapOverlap<unsigned short, unsigned short, unsigned short>(pvVar12, pvVar13);
            uVar5 = (iVar7 + iVar6) - iVar8;
            iVar8 = (uint)(56 < uVar5) * 5 + 3;
            if (uVar5 < 57)
                goto LAB_10080f85e;
            bVar1 = false;
        }
        this = local_40;
        if (!bVar1) {
            return iVar8;
        }
    LAB_10080f86c:
        eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>::vector();
        this_05 = &field_664;
        lVar10 = this_05->size();
        this_04 = &local_48->field_664;
        lVar14 = this_04->size();
        local_70->reserve(lVar10 + lVar14);
        pMVar15 = (MaterialInfo*)local_70->HeapBeginPtr();
        pMVar16 = (MaterialInfo*)this_05->HeapBeginPtr();
        this_05->end();
        eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>::insert<MaterialInfo*>((MaterialInfo*)local_70, pMVar15,
                                                                                     pMVar16);
        pMVar15 = (MaterialInfo*)local_70->end();
        pMVar16 = (MaterialInfo*)this_04->HeapBeginPtr();
        this_04->end();
        eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>::insert<MaterialInfo_const*>((MaterialInfo*)local_70,
                                                                                           pMVar15, pMVar16);
        WrapArray<MaterialInfo_const>::WrapArray<eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>>(
            local_80, (vector*)local_70);
        bVar4 = local_70._24_8_->CheckMaterialsFit(local_80);
        local_70->~vector();
        return (uint)(bVar4 ^ 1) * 9;
    }

    // 0x10080fbe0, 112 bytes, placed by class name
    // GeometryBatchInstance::Assign(GeometryBatchInstance const&)
    void GeometryBatchInstance::Assign(GeometryBatchInstance* param_1) {
        GeometryBatch* this_00;
        GeometryBatch* pGVar1;

        if (this != param_1) {
            DestroyRenderingResources(this);
            ModelMaterial::operator=((ModelMaterial*)m_material, (ModelMaterial*)param_1->m_material);
            this_00 = (GeometryBatch*)shared_ptr<GeometryBatch>::operator->((shared_ptr<GeometryBatch>*)field_24);
            pGVar1 =
                (GeometryBatch*)shared_ptr<GeometryBatch>::operator*((shared_ptr<GeometryBatch>*)param_1->field_24);
            this_00->Assign(pGVar1);
            eastl::vector<SourceModelExternalIndexSection, eastl::allocator>::operator=(
                (vector<SourceModelExternalIndexSection, eastl::allocator>*)&field_696, (vector*)&param_1->field_696);
            UpdateShadowRenderFlags(this);
        }
    }

    // 0x10080fc50, 48 bytes, placed by class name
    // GeometryBatchInstance::DestroyRenderingResources()
    void GeometryBatchInstance::DestroyRenderingResources() {
        GeometryBatch* this_00;

        m_material->DestroyRenderingResources();
        this_00 = (GeometryBatch*)shared_ptr<GeometryBatch>::operator->((shared_ptr<GeometryBatch>*)field_24);
        this_00->DestroyRenderingResources();
    }

    // 0x10080fd00, 48 bytes, placed by class name
    // GeometryBatchInstance::Transform(math::Matrix44T<float> const&)
    void GeometryBatchInstance::Transform(Matrix44T* param_1) {
        GeometryBatch* this_00;

        this_00 = (GeometryBatch*)shared_ptr<GeometryBatch>::operator->((shared_ptr<GeometryBatch>*)field_24);
        this_00->Transform(param_1);
    }

    // 0x10080fd30, 48 bytes, placed by class name
    // GeometryBatchInstance::TransformNormals(math::QuaternionT<float> const&, bool)
    void GeometryBatchInstance::TransformNormals(QuaternionT* param_1, bool param_2) {
        GeometryBatch* this;
        bool in_DL;
        undefined7 in_register_00000031;

        this = (GeometryBatch*)shared_ptr<GeometryBatch>::operator->((shared_ptr<GeometryBatch>*)(param_1 + 24));
        TransformNormals((QuaternionT*)CONCAT71(in_register_00000031, param_2), in_DL);
    }

    // 0x10080fd60, 48 bytes, placed by class name
    // GeometryBatchInstance::Translate(math::Vector3T<float> const&)
    void GeometryBatchInstance::Translate(Vector3T* param_1) {
        GeometryBatch* this_00;

        this_00 = (GeometryBatch*)shared_ptr<GeometryBatch>::operator->((shared_ptr<GeometryBatch>*)field_24);
        this_00->Translate(param_1);
    }

    // 0x10080fd90, 48 bytes, placed by class name
    // GeometryBatchInstance::Rotate(math::QuaternionT<float> const&, bool)
    void GeometryBatchInstance::Rotate(QuaternionT* param_1, bool param_2) {
        GeometryBatch* this_00;

        this_00 = (GeometryBatch*)shared_ptr<GeometryBatch>::operator->((shared_ptr<GeometryBatch>*)field_24);
        this_00->Rotate(param_1, param_2);
    }

    // 0x10080fdc0, 48 bytes, placed by class name
    // GeometryBatchInstance::Rotate90(Rotation90, bool)
    void GeometryBatchInstance::Rotate90(undefined4 param_2, undefined4 param_3) {
        GeometryBatch* pGVar1;

        pGVar1 = (GeometryBatch*)shared_ptr<GeometryBatch>::operator->((shared_ptr<GeometryBatch>*)field_24);
        pGVar1->Rotate90(param_2, param_3);
    }

    // 0x10080fdf0, 48 bytes, placed by class name
    // GeometryBatchInstance::Scale(math::Vector3T<float> const&)
    void GeometryBatchInstance::Scale(Vector3T* param_1) {
        GeometryBatch* this_00;

        this_00 = (GeometryBatch*)shared_ptr<GeometryBatch>::operator->((shared_ptr<GeometryBatch>*)field_24);
        this_00->Scale(param_1);
    }

    // 0x10080fe20, 80 bytes, placed by class name
    // GeometryBatchInstance::HillChange(HillChange, int, Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL> const&, Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL> const&, LocationHelpers::LocationHillChangeData const&)
    void GeometryBatchInstance::HillChange(undefined4 param_2, undefined4 param_3, undefined8 param_4,
                                           undefined8 param_5, undefined8 param_6) {
        GeometryBatch* pGVar1;

        pGVar1 = (GeometryBatch*)shared_ptr<GeometryBatch>::operator->((shared_ptr<GeometryBatch>*)field_24);
        pGVar1->HillChange(param_2, param_3, param_4, param_5, param_6);
    }

    // 0x10080fe70, 256 bytes, placed by class name
    // GeometryBatchInstance::Rematerial(Array<unsigned short, eastl::allocator> const&, Array<unsigned short, eastl::allocator> const&)
    void GeometryBatchInstance::Rematerial(Array* param_1, Array* param_2) {
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
                lVar1 = (&field_696)->HeapBeginPtr();
                lVar4 = (&field_696)->end();
                for (; lVar1 != lVar4; lVar1 = lVar1 + 68) {
                    if (*(uint*)(lVar1 + 8) == uVar6) {
                        *(uint*)(lVar1 + 8) = uVar7;
                    }
                }
                uVar5 = uVar5 + 1;
                uVar2 = param_1->end();
            } while (uVar5 < uVar2);
        }
    }

    // 0x10080ff70, 112 bytes, placed by class name
    // GeometryBatchInstance::RematerialSingle(unsigned short, unsigned short)
    void GeometryBatchInstance::RematerialSingle(ushort param_1, ushort param_2) {
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
        lVar1 = (&field_696)->HeapBeginPtr();
        lVar2 = (&field_696)->end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 68) {
            if (*(int*)(lVar1 + 8) == iVar4) {
                *(undefined4*)(lVar1 + 8) = uVar3;
            }
        }
    }

    // 0x10080ffe0, 112 bytes, placed by class name
    // GeometryBatchInstance::AmbientAdjust(unsigned short)
    void GeometryBatchInstance::AmbientAdjust(ushort param_1) {
        GeometryBatch* this_00;
        long lVar1;
        long lVar2;

        this_00 = (GeometryBatch*)shared_ptr<GeometryBatch>::operator->((shared_ptr<GeometryBatch>*)field_24);
        this_00->AmbientAdjust(param_1);
        lVar1 = (&field_696)->HeapBeginPtr();
        lVar2 = (&field_696)->end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 68) {
            *(ushort*)(lVar1 + 16) = param_1;
        }
    }

    // 0x100810050, 64 bytes, placed by class name
    // GeometryBatchInstance::TintAdjust(signed char, signed char, signed char, unsigned char)
    void GeometryBatchInstance::TintAdjust(undefined4 param_2, undefined4 param_3, undefined4 param_4,
                                           undefined4 param_5) {
        GeometryBatch* pGVar1;

        pGVar1 = (GeometryBatch*)shared_ptr<GeometryBatch>::operator->((shared_ptr<GeometryBatch>*)field_24);
        pGVar1->TintAdjust(param_2, param_3, param_4, param_5);
    }

    // 0x100810090, 48 bytes, placed by class name
    // GeometryBatchInstance::SetTint(math::Vector4T<float>)
    void GeometryBatchInstance::SetTint(undefined8 param_1, undefined8 param_2, long param_3) {
        undefined8 local_18;
        undefined8 uStack_10;

        local_18 = param_1;
        uStack_10 = param_2;
        math::Rect<float>::operator=((Rect<float>*)(param_3 + 880), (Rect*)&local_18);
    }

    // 0x1008100c0, 128 bytes, placed by class name
    // GeometryBatchInstance::InitRenderPassEffects()
    void GeometryBatchInstance::InitRenderPassEffects() {
        char cVar1;
        bool bVar2;
        SpriteAtlasReference* this_00;
        GeometryBatch* this_01;

        cVar1 = (m_material, 5)->GetOption();
        if (cVar1 != '\0') {
            this_00 =
                (SpriteAtlasReference*)shared_ptr<GeometryBatch>::operator->((shared_ptr<GeometryBatch>*)field_24);
            cVar1 = this_00->GetDisableCache();
            if (cVar1 != '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("!m_material.GetOption(ModelMaterial::HAS_NORMAL_MAP) || !m_geometryBatch->HasShareLight()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "model/GeometryBatchInstance.cpp",
                          814, "Share Light is not supported on normal mapped models");
            }
        }
        this_01 = (GeometryBatch*)shared_ptr<GeometryBatch>::operator->((shared_ptr<GeometryBatch>*)field_24);
        bVar2 = (bool)this_01->HasBones();
        (m_material, bVar2)->InitRenderPassEffects();
    }

    // 0x100810790, 32 bytes, placed by class name
    // GeometryBatchInstance::GetTint() const
    undefined1[16] GeometryBatchInstance::GetTint() {
        undefined1 auVar1[16];

        auVar1._0_8_ = field_880;
        auVar1._8_8_ = field_888;
        return auVar1;
    }

    // 0x1008107b0, 2720 bytes, placed by class name
    // GeometryBatchInstance::UpdateForwardPassEffect(DrawableSortKey&, DrawableSortKeyType, RenderPassEffect&, RT7Core&, EffectManager const&, float, float, bool, TextureInclusionMode const*, math::OBB const&, unsigned char, RenderPassType)
    void GeometryBatchInstance::UpdateForwardPassEffect(float param_1_00, float param_2, GeometryBatchInstance* this,
                                                        undefined8* param_1, uint param_5, RenderPassEffect* param_6,
                                                        RT7Core* param_7, EffectManager* param_8, byte param_9,
                                                        undefined* param_10, undefined8 param_11, byte param_12,
                                                        undefined4 param_13) {
        undefined1* this_00;
        undefined8* puVar1;
        ParticleMaterial* this_01;
        char cVar2;
        bool bVar3;
        char cVar4;
        undefined1 uVar5;
        byte bVar6;
        byte bVar7;
        int iVar8;
        undefined4 uVar9;
        Matrix44T<float>* this_02;
        shared_ptr* this_03;
        PointLightIndicesEffect* this_04;
        GeometryBatch* pGVar10;
        float* pfVar11;
        Vector4T* pVVar12;
        TextureManager* pTVar13;
        PlanarReflection* this_05;
        VolumetricScatteringEffect* this_06;
        SunlightShadows* this_07;
        DirLightCsmManager* this_08;
        PointLightShadows* this_09;
        SceneManager* this_10;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_11;
        long lVar14;
        undefined* puVar15;
        PostProcessController* this_12;
        undefined8 uVar16;
        undefined8 uVar17;
        ulong uVar18;
        vector* pvVar19;
        ulong uVar20;
        BucketAllocatorEASTL* pBVar21;
        EntityHighlight** ppEVar24;
        EffectManager* pEVar25;
        float fVar26;
        float fVar27;
        float fVar28;
        undefined1 auVar29[16];
        undefined** local_68;
        float fStack_60;
        ParticleMaterial* local_50;
        undefined8* local_48;

        cVar2 = param_8->IsEnabled();
        cVar4 = '\0';
        if (cVar2 != '\0') {
            this_02 = (Matrix44T<float>*)GetMaterial((GeometryBatchInstance*)field_656);
            local_68 = (undefined**)this_02->GetPos();
            fStack_60 = param_2;
            this_03 = (shared_ptr*)local_68.GetEffect(26);
            bVar3 = shared_ptr::operator_cast_to_bool(this_03);
            if (bVar3) {
                this_04 = (PointLightIndicesEffect*)shared_ptr<PointLightIndicesEffect>::operator->(
                    (shared_ptr<PointLightIndicesEffect>*)this_03);
                cVar4 = this_04->IsReady();
            } else {
                cVar4 = '\0';
            }
        }
        param_6->Set(26, cVar4);
        if (cVar4 == '\0') {
            uVar5 = 0;
        } else {
            uVar5 = (m_material, 11)->GetOption();
        }
        param_6->Set(55, uVar5);
        cVar4 = GetAnimatesTransparency(this);
        bVar3 = true;
        uVar5 = 1;
        if (cVar4 == '\0') {
            cVar4 = GetAnimatedColourType(this);
            uVar5 = 1;
            if (cVar4 == '\x02') {
                pGVar10 = (GeometryBatch*)shared_ptr<GeometryBatch>::operator->((shared_ptr<GeometryBatch>*)field_24);
                cVar4 = pGVar10->HasBones();
                uVar5 = 1;
                if (cVar4 == '\0') {
                    pGVar10 =
                        (GeometryBatch*)shared_ptr<GeometryBatch>::operator->((shared_ptr<GeometryBatch>*)field_24);
                    uVar5 = pGVar10->HasJoints();
                }
            }
        }
        param_6->Set(74, uVar5);
        pGVar10 = (GeometryBatch*)shared_ptr<GeometryBatch>::operator->((shared_ptr<GeometryBatch>*)field_24);
        uVar5 = pGVar10->HasJoints();
        param_6->Set(75, uVar5);
        local_68 = (undefined**)GetTint(this);
        fStack_60 = param_2;
        pfVar11 = (float*)local_68.qw();
        if (*pfVar11 == 0.0) {
            pVVar12 = (Vector4T*)field_656->GetParentLocationType();
            bVar3 = math::operator!=(pVVar12, (Vector4T*)PTR_ZERO_100ee6708);
        }
        param_6->Set(82, bVar3);
        pEVar25 = param_8;
        uVar5 = param_8->IsEnabled(83);
        param_6->Set(83, uVar5);
        cVar4 = pEVar25->IsEnabled(108);
        if (cVar4 == '\0') {
            bVar6 = 0;
        } else {
            bVar6 = m_material->IsRefractionEnabled();
        }
        param_6->Set(108, bVar6);
        pEVar25 = param_8;
        uVar5 = param_8->IsEnabled(39);
        param_6->Set(39, uVar5);
        uVar5 = pEVar25->IsEnabled(43);
        param_6->Set(43, uVar5);
        this_00 = m_material;
        cVar4 = this_00->GetOption(0);
        uVar5 = 1;
        if (cVar4 == '\0') {
            uVar5 = this_00->GetOption(5);
        }
        param_6->Set(61, uVar5);
        iVar8 = this_00->GetAliveCount();
        if (-1 < iVar8) {
            pTVar13 = (TextureManager*)param_7->GetTextureManager();
            this_00->UpdateEnvironmentMap(pTVar13);
        }
        pEVar25 = param_8;
        local_50 = (ParticleMaterial*)this_00;
        cVar4 = param_8->IsEnabled(24);
        uVar5 = 1;
        if ((cVar4 == '\0') && (cVar4 = pEVar25->IsEnabled(48), pEVar25 = param_8, cVar4 == '\0')) {
            cVar4 = param_8->IsEnabled(57);
            if (cVar4 == '\0') {
                uVar5 = 0;
            } else {
                this_05 = EffectManager::GetEffect<PlanarReflection>(pEVar25, 57);
                uVar5 = this_05->WithinFoggedArea(param_1_00);
            }
        }
        param_6->Set(57, uVar5);
        pEVar25 = param_8;
        local_48 = param_1;
        if (param_9 == 0) {
            bVar7 = 0;
        } else {
            cVar4 = param_8->IsEnabled(50);
            if (cVar4 == '\0') {
                bVar7 = 0;
            } else {
                this_06 = (VolumetricScatteringEffect*)EffectManager::GetEffect<PlanarReflection>(pEVar25, 50);
                bVar7 = this_06->CanSkip(pEVar25);
                bVar7 = bVar7 ^ 1;
            }
        }
        param_6->Set(50, bVar7);
        this_07 = (SunlightShadows*)EffectManager::GetEffect<PlanarReflection>(pEVar25, 30);
        this_08 = (DirLightCsmManager*)this_07->GetSunlightCsmManager();
        cVar4 = local_50->GetOption(8);
        if (cVar4 == '\0') {
            bVar7 = 0;
        } else {
            cVar4 = pEVar25->IsEnabled(30);
            if (cVar4 == '\0') {
                bVar7 = 0;
            } else {
                fVar26 = (float)this_08->GetMaxShadowDistance();
                bVar7 = param_2 < fVar26 | bVar7;
            }
            pEVar25 = param_8;
        }
        this_01 = local_50;
        if ((bVar7 == 0) || (cVar4 = pEVar25->IsEnabled(28), cVar4 == '\0')) {
            bVar6 = 0;
        } else {
            bVar6 = (bVar6 | param_9) ^ 1;
        }
        param_6->Set(28, bVar6);
        param_6->Set(30, bVar7);
        param_6->Set(37, (param_9 ^ 1) & bVar7);
        this_09 = (PointLightShadows*)EffectManager::GetEffect<PlanarReflection>(pEVar25, 35);
        this_10 = (SceneManager*)this_09->GetPointLightSMManager();
        cVar4 = this_01->GetOption(8);
        if ((cVar4 == '\0') || (cVar4 = pEVar25->IsEnabled(26), cVar4 == '\0')) {
        LAB_100810c1d:
            bVar3 = false;
        } else {
            cVar4 = pEVar25->IsEnabled();
            if (cVar4 == '\0')
                goto LAB_100810c1d;
            this_11 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                          this_10->GetEntityHighlightGlobalState();
            cVar4 =
                eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
                    this_11);
            if (cVar4 != '\0')
                goto LAB_100810c1d;
            pvVar19 = this_10->SSOBeginPtr(35);
            bVar3 = param_2 < *(float*)(pvVar19 + 20);
        }
        param_6->Set(35, bVar3);
        iVar8 = this_01->GetEndPosition();
        param_6->Set(54, iVar8 != -1);
        iVar8 = this_01->GetEndPosition();
        if (iVar8 < -1) {
            param_6->Set(48, 0);
            param_6->Set(57, 0);
            param_6->Set(50, 0);
        }
        cVar4 = pEVar25->IsEnabled(110);
        if (cVar4 != '\0') {
            if (param_9 == 0) {
                bVar6 = param_6->Contains(108);
                bVar6 = bVar6 ^ 1;
            } else {
                bVar6 = 0;
            }
            param_6->Set(110, bVar6);
        }
        auVar29 = pEVar25->BuildShaderEffectList(param_6);
        puVar1 = &param_6->field_16;
        param_6->field_16 = auVar29._0_8_;
        param_6->field_24 = auVar29._8_8_;
        lVar14 = this_01->GetTextureAtlasReference();
        puVar1->Set(63, lVar14 != 0);
        if (TextureInclusionMode::FORCE_EXCLUDE == param_10) {
            puVar1->Set(63, 0);
        }
        puVar15 = (undefined*)this_01->data();
        puVar1->Set(66, puVar15 != AlphaMode::ALPHA_OPAQUE | param_9);
        cVar4 = this_01->GetOption(1);
        bVar3 = true;
        if (((cVar4 == '\0') && (cVar4 = this_01->GetOption(2), cVar4 == '\0')) &&
            (cVar4 = this_01->GetOption(3), cVar4 == '\0')) {
            puVar15 = (undefined*)this_01->data();
            bVar3 = puVar15 != AlphaMode::ALPHA_OPAQUE;
        }
        puVar1->Set(65, bVar3);
        if (m_debugLodInstanceColourEnabled == '\0')
            goto LAB_100810e78;
        uVar9 = GetLodLevel(this, m_debugLodInstanceColourPassType);
        switch (uVar9) {
        case 0:
            fVar27 = 0.0;
            break;
        case 1:
            fVar27 = 1.0;
            break;
        case 2:
            fVar28 = 0.0;
            goto LAB_100810e44;
        case 3:
            fVar28 = 1.0;
        LAB_100810e44:
            fVar27 = 1.0;
            fVar26 = 0.0;
            goto LAB_100810e61;
        case 4:
            fVar28 = 1.0;
            fVar26 = 0.0;
            fVar27 = 0.0;
            goto LAB_100810e61;
        default:
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "model/GeometryBatchInstance.cpp",
                            990, "Unsupported LOD level");
        }
        fVar28 = 0.0;
        fVar26 = 1.0;
    LAB_100810e61:
        (&field_784, fVar26, fVar27, fVar28, 1.0)->Set();
        puVar1->Set(13, 1);
    LAB_100810e78:
        cVar4 = local_50->GetOption(4);
        cVar2 = '\0';
        uVar5 = 0;
        if (cVar4 != '\0') {
            this_12 = (PostProcessController*)param_7->GetPostProcessController();
            lVar14 = this_12->GetCurrentConfig();
            if (*(char*)(lVar14 + 468) == '\0') {
                uVar5 = 0;
            } else {
                uVar5 = local_50->GetOption(4);
            }
        }
        puVar1->Set(64, uVar5);
        uVar16 = param_7->GetShaderManager();
        pGVar10 = (GeometryBatch*)shared_ptr<GeometryBatch>::operator->((shared_ptr<GeometryBatch>*)field_24);
        bVar3 = (bool)pGVar10->HasJoints();
        uVar17 = GeometryBatchRenderer::GetVertexDecl(bVar3);
        param_6->UpdateShader(param_8, uVar16, 0, uVar17, param_13, 3);
        iVar8 = GetFirstSequenceIDFromSource(this);
        if (iVar8 != -1) {
            if (15 < iVar8) {
                /* WARNING: Subroutine does not return */
                LogAssert("sequenceID < (1 << 4)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "model/GeometryBatchInstance.cpp",
                          1019, (char*)0);
            }
            cVar2 = (char)iVar8;
        }
        bVar6 = 15;
        if (param_12 < 15) {
            bVar6 = param_12;
        }
        uVar18 = param_6->GetConstructedShaderId();
        if (5 < param_5) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "renderer/DrawableSortKey.h",
                            177, "Unknown sort key type");
        }
        bVar6 = cVar2 << 4 | bVar6;
        switch (param_5) {
        case 0:
            bVar6 = ~bVar6;
            fVar26 = (float)(-(uint)(0.0 < param_2) & (uint)(param_2 + 0.5));
            pBVar21 = (BucketAllocatorEASTL*)(long)fVar26;
            uVar20 = ((long)(fVar26 - 9.223372e+18) & (long)pBVar21 >> 63 | (ulong)pBVar21) << 24;
            goto LAB_10081104f;
        case 1:
            fVar26 = (float)(-(uint)(0.0 < param_2) & (uint)(param_2 + 0.5));
            lVar14 = (long)fVar26;
            uVar20 = (ulong)((uint)lVar14 | (uint)(long)(fVar26 - 9.223372e+18) & (uint)(lVar14 >> 63));
            pBVar21 = (BucketAllocatorEASTL*)(uVar20 * 16777216);
            uVar20 = uVar20 * -16777216 + 72057594021150720 & 72057594021150720;
        LAB_10081104f:
            uVar20 = (ulong)bVar6 << 16 | uVar20 | uVar18 & 65535;
            uVar18 = 144115188075855872;
        LAB_10081111c:
            ppEVar24 = (EntityHighlight**)(uVar18 | uVar20);
            break;
        case 2:
            pBVar21 =
                (BucketAllocatorEASTL*)(((long)(float)(-(uint)(0.0 < param_2) & (uint)(param_2 + 0.5)) & 4294967295U)
                                            << 8 |
                                        (uVar18 & 65535) << 40 | (ulong)(byte)~bVar6);
            ppEVar24 = (EntityHighlight**)((ulong)pBVar21 | 144115188075855872);
            break;
        case 3:
            fVar26 = (float)(-(uint)(0.0 < param_2) & (uint)(param_2 + 0.5));
            pBVar21 = (BucketAllocatorEASTL*)(long)fVar26;
            uVar20 = ((long)(fVar26 - 9.223372e+18) & (long)pBVar21 >> 63 | (ulong)pBVar21) * -256 + 1099511627520;
            uVar18 = (uVar18 & 65535) << 40 | (ulong)bVar6 | 144115188075855872;
            goto LAB_10081111c;
        case 4:
            fVar26 = (float)(-(uint)(0.0 < param_2) & (uint)(param_2 + 0.5));
            lVar14 = (long)fVar26;
            pBVar21 = (BucketAllocatorEASTL*)((ulong)((uint)lVar14 |
                                                      (uint)(long)(fVar26 - 9.223372e+18) & (uint)(lVar14 >> 63))
                                              << 32);
            ppEVar24 = (EntityHighlight**)((uVar18 & 65535) + ((ulong)(byte)~bVar6 << 16 | (ulong)pBVar21) + 33554432);
            break;
        case 5:
            fVar26 = (float)(-(uint)(0.0 < param_2) & (uint)(param_2 + 0.5));
            uVar20 = (ulong)fVar26;
            pBVar21 = (BucketAllocatorEASTL*)18446744069414584320;
            ppEVar24 =
                (EntityHighlight**)(((ulong)bVar6 << 16 |
                                     ((long)(fVar26 - 9.223372e+18) & (long)uVar20 >> 63 | uVar20) * -4294967296 |
                                     uVar18 & 65535) -
                                    4261412864);
        }
        new (&local_68)
            eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>(ppEVar24, pBVar21);
        *local_48 = local_68;
    }

    // 0x100811400, 1200 bytes, placed by class name
    // GeometryBatchInstance::UpdateGeometryPassEffect(DrawableSortKey&, DrawableSortKeyType, RenderPassEffect&, RT7Core&, EffectManager const&, float, float, bool, TextureInclusionMode const*, RenderPassType)
    void GeometryBatchInstance::UpdateGeometryPassEffect(undefined8 param_1_00, float param_2,
                                                         GeometryBatchInstance* this, undefined8* param_1,
                                                         undefined4 param_5, RenderPassEffect* param_6,
                                                         RT7Core* param_7, EffectManager* param_8, byte param_9,
                                                         undefined* param_10, undefined4 param_11) {
        undefined1* this_00;
        undefined8* puVar1;
        char cVar2;
        byte bVar3;
        undefined1 uVar4;
        bool bVar5;
        undefined* puVar6;
        GeometryBatch* pGVar7;
        long lVar8;
        undefined8 uVar9;
        undefined8 uVar10;
        ulong uVar11;
        ulong uVar12;
        BucketAllocatorEASTL* pBVar13;
        BucketAllocatorEASTL* pBVar14;
        float fVar15;
        undefined1 auVar16[16];
        undefined8 local_40;

        this_00 = m_material;
        cVar2 = this_00->GetOption(0);
        bVar3 = 1;
        if (cVar2 == '\0') {
            bVar3 = this_00->GetOption(5);
        }
        param_6->Set(61, bVar3);
        auVar16 = param_8->BuildShaderEffectList(param_6);
        puVar1 = &param_6->field_16;
        param_6->field_16 = auVar16._0_8_;
        param_6->field_24 = auVar16._8_8_;
        puVar6 = (undefined*)this_00->data();
        param_9 = puVar6 != AlphaMode::ALPHA_OPAQUE | param_9;
        puVar1->Set(66, param_9);
        if (param_9 == 1) {
            cVar2 = GetAnimatesTransparency(this);
            uVar4 = 1;
            if ((cVar2 == '\0') && (cVar2 = GetAnimatedColourType(this), cVar2 == '\x02'))
                goto LAB_1008114d4;
        } else {
        LAB_1008114d4:
            pGVar7 = (GeometryBatch*)shared_ptr<GeometryBatch>::operator->((shared_ptr<GeometryBatch>*)field_24);
            cVar2 = pGVar7->HasBones();
            uVar4 = 1;
            if (cVar2 == '\0') {
                pGVar7 = (GeometryBatch*)shared_ptr<GeometryBatch>::operator->((shared_ptr<GeometryBatch>*)field_24);
                uVar4 = pGVar7->HasJoints();
            }
        }
        puVar1->Set(74, uVar4);
        pGVar7 = (GeometryBatch*)shared_ptr<GeometryBatch>::operator->((shared_ptr<GeometryBatch>*)field_24);
        uVar4 = pGVar7->HasJoints();
        puVar1->Set(75, uVar4);
        uVar4 = param_8->IsEnabled(115);
        param_6->Set(115, uVar4);
        lVar8 = this_00->GetTextureAtlasReference();
        puVar1->Set(63, (bVar3 | param_9) & lVar8 != 0);
        if (TextureInclusionMode::FORCE_EXCLUDE == param_10) {
            puVar1->Set(63, 0);
        }
        uVar9 = param_7->GetShaderManager();
        pGVar7 = (GeometryBatch*)shared_ptr<GeometryBatch>::operator->((shared_ptr<GeometryBatch>*)field_24);
        bVar5 = (bool)pGVar7->HasJoints();
        uVar10 = GeometryBatchRenderer::GetVertexDecl(bVar5);
        param_6->UpdateShader(param_8, uVar9, 2, uVar10, param_11, 3);
        bVar3 = GetFirstSequenceIDFromSource(this);
        uVar11 = param_6->GetConstructedShaderId();
        switch (param_5) {
        case 0:
            fVar15 = (float)(-(uint)(0.0 < param_2) & (uint)(param_2 + 0.5));
            pBVar13 = (BucketAllocatorEASTL*)(long)fVar15;
            uVar12 = (ulong)(byte)~bVar3 << 16 | ((long)(fVar15 - 9.223372e+18) & (long)pBVar13 >> 63 | (ulong)pBVar13)
                                                     << 24;
            goto LAB_1008116ec;
        case 1:
            fVar15 = (float)(-(uint)(0.0 < param_2) & (uint)(param_2 + 0.5));
            lVar8 = (long)fVar15;
            pBVar13 = (BucketAllocatorEASTL*)72057594021150720;
            uVar12 = (ulong)bVar3 << 16 |
                     (ulong)((uint)lVar8 | (uint)(long)(fVar15 - 9.223372e+18) & (uint)(lVar8 >> 63)) * -16777216 +
                             72057594021150720 &
                         72057594021150720;
        LAB_1008116ec:
            uVar12 = uVar12 | uVar11 & 65535;
            uVar11 = 144115188075855872;
        LAB_1008117af:
            pBVar14 = (BucketAllocatorEASTL*)(uVar11 | uVar12);
            break;
        case 2:
            pBVar13 =
                (BucketAllocatorEASTL*)(((long)(float)(-(uint)(0.0 < param_2) & (uint)(param_2 + 0.5)) & 4294967295U)
                                            << 8 |
                                        (uVar11 & 65535) << 40 | (ulong)(byte)~bVar3);
            pBVar14 = (BucketAllocatorEASTL*)((ulong)pBVar13 | 144115188075855872);
            break;
        case 3:
            fVar15 = (float)(-(uint)(0.0 < param_2) & (uint)(param_2 + 0.5));
            pBVar13 = (BucketAllocatorEASTL*)(long)fVar15;
            uVar12 = ((long)(fVar15 - 9.223372e+18) & (long)pBVar13 >> 63 | (ulong)pBVar13) * -256 + 1099511627520;
            uVar11 = (uVar11 & 65535) << 40 | (ulong)bVar3 | 144115188075855872;
            goto LAB_1008117af;
        case 4:
            fVar15 = (float)(-(uint)(0.0 < param_2) & (uint)(param_2 + 0.5));
            lVar8 = (long)fVar15;
            pBVar13 =
                (BucketAllocatorEASTL*)((ulong)((uint)lVar8 | (uint)(long)(fVar15 - 9.223372e+18) & (uint)(lVar8 >> 63))
                                        << 32);
            pBVar14 =
                (BucketAllocatorEASTL*)((uVar11 & 65535) + ((ulong)(byte)~bVar3 << 16 | (ulong)pBVar13) + 33554432);
            break;
        case 5:
            fVar15 = (float)(-(uint)(0.0 < param_2) & (uint)(param_2 + 0.5));
            uVar12 = (ulong)fVar15;
            pBVar13 =
                (BucketAllocatorEASTL*)((ulong)bVar3 << 16 |
                                        ((long)(fVar15 - 9.223372e+18) & (long)uVar12 >> 63 | uVar12) * -4294967296 |
                                        uVar11 & 65535);
            pBVar14 = pBVar13 + -4261412864;
            break;
        default:
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "renderer/DrawableSortKey.h",
                            177, "Unknown sort key type");
        }
        new (&local_40)
            eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>(pBVar14, pBVar13);
        *param_1 = local_40;
    }

    // 0x1008118b0, 1152 bytes, placed by class name
    // GeometryBatchInstance::UpdateShadowPassEffect(DrawableSortKey&, DrawableSortKeyType, RenderPassEffect&, RT7Core&, EffectManager const&, float, float, bool, TextureInclusionMode const*)
    void GeometryBatchInstance::UpdateShadowPassEffect(undefined8 param_1_00, float param_2,
                                                       GeometryBatchInstance* param_1, undefined8* param_4,
                                                       undefined4 param_5, RenderPassEffect* param_6, RT7Core* param_7,
                                                       EffectManager* param_8, byte param_9) {
        undefined1* this;
        undefined8* puVar1;
        char cVar2;
        undefined1 uVar3;
        bool bVar4;
        undefined* puVar5;
        GeometryBatch* pGVar6;
        undefined8 uVar7;
        undefined8 uVar8;
        ulong uVar9;
        undefined8 uVar10;
        long lVar11;
        ulong uVar12;
        uint* puVar13;
        EntityHighlight** ppEVar14;
        float fVar15;
        undefined1 auVar16[16];
        undefined8 local_40;

        this = param_1->m_material;
        cVar2 = GetOption(0);
        if ((cVar2 == '\0') && ((cVar2 = GetOption(1), cVar2 != '\0' || (cVar2 = GetOption(3), cVar2 != '\0')))) {
            param_6->Set(63, 0);
        }
        uVar3 = param_8->IsEnabled(36);
        param_6->Set(36, uVar3);
        auVar16 = param_8->BuildShaderEffectList(param_6);
        puVar1 = &param_6->field_16;
        param_6->field_16 = auVar16._0_8_;
        param_6->field_24 = auVar16._8_8_;
        puVar5 = (undefined*)data();
        param_9 = puVar5 != AlphaMode::ALPHA_OPAQUE | param_9;
        puVar1->Set(66, param_9);
        puVar1->Set(65, param_9);
        if (param_9 == 1) {
            cVar2 = GetAnimatesTransparency(param_1);
            uVar3 = 1;
            if ((cVar2 != '\0') || (cVar2 = GetAnimatedColourType(param_1), cVar2 != '\x02'))
                goto LAB_1008119da;
        }
        pGVar6 = (GeometryBatch*)shared_ptr<GeometryBatch>::operator->((shared_ptr<GeometryBatch>*)param_1->field_24);
        cVar2 = pGVar6->HasBones();
        uVar3 = 1;
        if (cVar2 == '\0') {
            pGVar6 =
                (GeometryBatch*)shared_ptr<GeometryBatch>::operator->((shared_ptr<GeometryBatch>*)param_1->field_24);
            uVar3 = pGVar6->HasJoints();
        }
    LAB_1008119da:
        puVar1->Set(74, uVar3);
        pGVar6 = (GeometryBatch*)shared_ptr<GeometryBatch>::operator->((shared_ptr<GeometryBatch>*)param_1->field_24);
        uVar3 = pGVar6->HasJoints();
        puVar1->Set(75, uVar3);
        cVar2 = param_8->IsEnabled(36);
        uVar7 = param_7->GetShaderManager();
        pGVar6 = (GeometryBatch*)shared_ptr<GeometryBatch>::operator->((shared_ptr<GeometryBatch>*)param_1->field_24);
        bVar4 = (bool)pGVar6->HasJoints();
        uVar8 = GeometryBatchRenderer::GetVertexDecl(bVar4);
        if (cVar2 == '\0') {
            uVar10 = 3;
        } else {
            uVar10 = 4;
        }
        param_6->UpdateShader(param_8, uVar7, uVar10, uVar8, cVar2 != '\0', 3);
        uVar9 = param_6->GetConstructedShaderId();
        puVar13 = &switchD_100811aab::switchdataD_100811d18;
        switch (param_5) {
        case 0:
            fVar15 = (float)(-(uint)(0.0 < param_2) & (uint)(param_2 + 0.5));
            uVar12 = (ulong)fVar15;
            puVar13 = (uint*)((long)uVar12 >> 63);
            ppEVar14 = (EntityHighlight**)(((long)(fVar15 - 9.223372e+18) & (ulong)puVar13 | uVar12) << 24 |
                                           uVar9 & 65535 | 144115188092567552);
            break;
        case 1:
            fVar15 = (float)(-(uint)(0.0 < param_2) & (uint)(param_2 + 0.5));
            lVar11 = (long)fVar15;
            puVar13 = (uint*)72057594021150720;
            ppEVar14 =
                (EntityHighlight**)((ulong)((uint)lVar11 | (uint)(long)(fVar15 - 9.223372e+18) & (uint)(lVar11 >> 63)) *
                                                -16777216 +
                                            72057594021150720 &
                                        72057594021150720 |
                                    uVar9 & 65535 | 144115188075855872);
            break;
        case 2:
            ppEVar14 =
                (EntityHighlight**)((((long)(float)(-(uint)(0.0 < param_2) & (uint)(param_2 + 0.5)) & 4294967295U)
                                         << 8 |
                                     (uVar9 & 65535) << 40) +
                                    144115188075856127);
            break;
        case 3:
            fVar15 = (float)(-(uint)(0.0 < param_2) & (uint)(param_2 + 0.5));
            uVar12 = (ulong)fVar15;
            puVar13 = (uint*)((long)uVar12 >> 63);
            ppEVar14 =
                (EntityHighlight**)((uVar9 & 65535) << 40 | 144115188075855872 |
                                    ((long)(fVar15 - 9.223372e+18) & (ulong)puVar13 | uVar12) * -256 + 1099511627520);
            break;
        case 4:
            fVar15 = (float)(-(uint)(0.0 < param_2) & (uint)(param_2 + 0.5));
            lVar11 = (long)fVar15;
            puVar13 = (uint*)(lVar11 >> 63);
            ppEVar14 =
                (EntityHighlight**)(((ulong)((uint)lVar11 | (uint)(long)(fVar15 - 9.223372e+18) & (uint)(lVar11 >> 63))
                                     << 32) +
                                    (uVar9 & 65535) + 50266112);
            break;
        case 5:
            fVar15 = (float)(-(uint)(0.0 < param_2) & (uint)(param_2 + 0.5));
            uVar12 = (ulong)fVar15;
            puVar13 = (uint*)((long)uVar12 >> 63);
            ppEVar14 = (EntityHighlight**)((((long)(fVar15 - 9.223372e+18) & (ulong)puVar13 | uVar12) * -4294967296 |
                                            uVar9 & 65535) -
                                           4261412864);
            break;
        default:
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "renderer/DrawableSortKey.h",
                            177, "Unknown sort key type");
        }
        new (&local_40)
            eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>(ppEVar14, puVar13);
        *param_4 = local_40;
    }

    // 0x100811d30, 1024 bytes, placed by class name
    // GeometryBatchInstance::UpdateMiniMapPassEffect(DrawableSortKey&, DrawableSortKeyType, RenderPassEffect&, RT7Core&, EffectManager const&, float, float, TextureInclusionMode const*)
    void GeometryBatchInstance::UpdateMiniMapPassEffect(undefined8 param_1_00, float param_2,
                                                        GeometryBatchInstance* this, undefined8* param_1,
                                                        undefined4 param_5, RenderPassEffect* param_6, RT7Core* param_7,
                                                        EffectManager* param_8, undefined* param_9) {
        undefined8* puVar1;
        undefined1* this_00;
        char cVar2;
        byte bVar3;
        long lVar4;
        undefined* puVar5;
        undefined8 uVar6;
        GeometryBatch* this_01;
        undefined8 uVar7;
        ulong uVar8;
        ulong uVar9;
        BucketAllocatorEASTL* pBVar10;
        BucketAllocatorEASTL* pBVar11;
        bool bVar12;
        float fVar13;
        undefined1 auVar14[16];
        undefined8 local_48;
        undefined8* local_40;

        local_40 = param_1;
        auVar14 = param_8->BuildShaderEffectList(param_6);
        puVar1 = &param_6->field_16;
        param_6->field_16 = auVar14._0_8_;
        param_6->field_24 = auVar14._8_8_;
        this_00 = m_material;
        lVar4 = this_00->GetTextureAtlasReference();
        puVar1->Set(63, lVar4 != 0);
        if (TextureInclusionMode::FORCE_EXCLUDE == param_9) {
            puVar1->Set(63, 0);
        }
        cVar2 = this_00->GetOption(1);
        bVar12 = true;
        if (((cVar2 == '\0') && (cVar2 = this_00->GetOption(2), cVar2 == '\0')) &&
            (cVar2 = this_00->GetOption(3), cVar2 == '\0')) {
            puVar5 = (undefined*)this_00->data();
            bVar12 = puVar5 == AlphaMode::ALPHA_TESTED;
        }
        puVar1->Set(65, bVar12);
        uVar6 = param_7->GetShaderManager();
        this_01 = (GeometryBatch*)shared_ptr<GeometryBatch>::operator->((shared_ptr<GeometryBatch>*)field_24);
        bVar12 = (bool)this_01->HasJoints();
        uVar7 = GeometryBatchRenderer::GetVertexDecl(bVar12);
        param_6->UpdateShader(param_8, uVar6, 0, uVar7, 5, 1);
        bVar3 = GetFirstSequenceIDFromSource(this);
        uVar8 = param_6->GetConstructedShaderId();
        switch (param_5) {
        case 0:
            fVar13 = (float)(-(uint)(0.0 < param_2) & (uint)(param_2 + 0.5));
            pBVar10 = (BucketAllocatorEASTL*)(long)fVar13;
            uVar9 = (ulong)(byte)~bVar3 << 16 | ((long)(fVar13 - 9.223372e+18) & (long)pBVar10 >> 63 | (ulong)pBVar10)
                                                    << 24;
            goto LAB_100811f5d;
        case 1:
            fVar13 = (float)(-(uint)(0.0 < param_2) & (uint)(param_2 + 0.5));
            lVar4 = (long)fVar13;
            pBVar10 = (BucketAllocatorEASTL*)72057594021150720;
            uVar9 = (ulong)bVar3 << 16 |
                    (ulong)((uint)lVar4 | (uint)(long)(fVar13 - 9.223372e+18) & (uint)(lVar4 >> 63)) * -16777216 +
                            72057594021150720 &
                        72057594021150720;
        LAB_100811f5d:
            uVar9 = uVar9 | uVar8 & 65535;
            uVar8 = 288230376151711744;
        LAB_100812023:
            pBVar11 = (BucketAllocatorEASTL*)(uVar8 | uVar9);
            break;
        case 2:
            pBVar10 =
                (BucketAllocatorEASTL*)(((long)(float)(-(uint)(0.0 < param_2) & (uint)(param_2 + 0.5)) & 4294967295U)
                                            << 8 |
                                        (uVar8 & 65535) << 40 | (ulong)(byte)~bVar3);
            pBVar11 = (BucketAllocatorEASTL*)((ulong)pBVar10 | 288230376151711744);
            break;
        case 3:
            fVar13 = (float)(-(uint)(0.0 < param_2) & (uint)(param_2 + 0.5));
            pBVar10 = (BucketAllocatorEASTL*)(long)fVar13;
            uVar9 = ((long)(fVar13 - 9.223372e+18) & (long)pBVar10 >> 63 | (ulong)pBVar10) * -256 + 1099511627520;
            uVar8 = (uVar8 & 65535) << 40 | (ulong)bVar3 | 288230376151711744;
            goto LAB_100812023;
        case 4:
            fVar13 = (float)(-(uint)(0.0 < param_2) & (uint)(param_2 + 0.5));
            lVar4 = (long)fVar13;
            pBVar10 =
                (BucketAllocatorEASTL*)((ulong)((uint)lVar4 | (uint)(long)(fVar13 - 9.223372e+18) & (uint)(lVar4 >> 63))
                                        << 32);
            pBVar11 =
                (BucketAllocatorEASTL*)((uVar8 & 65535) + ((ulong)(byte)~bVar3 << 16 | (ulong)pBVar10) + 67108864);
            break;
        case 5:
            fVar13 = (float)(-(uint)(0.0 < param_2) & (uint)(param_2 + 0.5));
            uVar9 = (ulong)fVar13;
            pBVar10 =
                (BucketAllocatorEASTL*)((ulong)bVar3 << 16 |
                                        ((long)(fVar13 - 9.223372e+18) & (long)uVar9 >> 63 | uVar9) * -4294967296 |
                                        uVar8 & 65535);
            pBVar11 = pBVar10 + -4227858432;
            break;
        default:
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "renderer/DrawableSortKey.h",
                            177, "Unknown sort key type");
        }
        new (&local_48)
            eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>(pBVar11, pBVar10);
        *local_40 = local_48;
    }

    // 0x100812130, 1088 bytes, placed by class name
    // GeometryBatchInstance::UpdateObjectHighlightPassEffect(DrawableSortKey&, DrawableSortKeyType, RenderPassEffect&, RT7Core&, EffectManager const&, float, float, bool, TextureInclusionMode const*, DrawableGroupLayer)
    void GeometryBatchInstance::UpdateObjectHighlightPassEffect(undefined8 param_1_00, float param_2,
                                                                GeometryBatchInstance* this, undefined8* param_1,
                                                                uint param_5, RenderPassEffect* param_6,
                                                                RT7Core* param_7, EffectManager* param_8, byte param_9,
                                                                undefined* param_10, uint param_11) {
        undefined8* puVar1;
        char cVar2;
        undefined1 uVar3;
        byte bVar4;
        undefined* puVar5;
        GeometryBatch* pGVar6;
        long lVar7;
        undefined8 uVar8;
        undefined8 uVar9;
        ulong uVar10;
        uint uVar11;
        ulong uVar12;
        BucketAllocatorEASTL* pBVar13;
        ulong uVar14;
        EntityHighlight** ppEVar15;
        bool bVar16;
        float fVar17;
        undefined1 auVar18[16];
        undefined8 local_40;

        auVar18 = param_8->BuildShaderEffectList(param_6);
        puVar1 = &param_6->field_16;
        param_6->field_16 = auVar18._0_8_;
        param_6->field_24 = auVar18._8_8_;
        puVar5 = (undefined*)m_material->data();
        param_9 = puVar5 != AlphaMode::ALPHA_OPAQUE | param_9;
        puVar1->Set(66, param_9);
        if (param_9 == 1) {
            cVar2 = GetAnimatesTransparency(this);
            uVar3 = 1;
            if (cVar2 == '\0') {
                cVar2 = GetAnimatedColourType(this);
                if (cVar2 == '\x02')
                    goto LAB_1008121c9;
            }
        } else {
        LAB_1008121c9:
            pGVar6 = (GeometryBatch*)shared_ptr<GeometryBatch>::operator->((shared_ptr<GeometryBatch>*)field_24);
            cVar2 = pGVar6->HasBones();
            uVar3 = 1;
            if (cVar2 == '\0') {
                pGVar6 = (GeometryBatch*)shared_ptr<GeometryBatch>::operator->((shared_ptr<GeometryBatch>*)field_24);
                uVar3 = pGVar6->HasJoints();
            }
        }
        puVar1->Set(74, uVar3);
        pGVar6 = (GeometryBatch*)shared_ptr<GeometryBatch>::operator->((shared_ptr<GeometryBatch>*)field_24);
        uVar3 = pGVar6->HasJoints();
        puVar1->Set(75, uVar3);
        lVar7 = m_material->GetTextureAtlasReference();
        bVar16 = false;
        if ((lVar7 != 0) && (param_9 == 1)) {
            bVar16 = TextureInclusionMode::FORCE_EXCLUDE != param_10;
        }
        puVar1->Set(63, bVar16);
        uVar8 = param_7->GetShaderManager();
        pGVar6 = (GeometryBatch*)shared_ptr<GeometryBatch>::operator->((shared_ptr<GeometryBatch>*)field_24);
        bVar16 = (bool)pGVar6->HasJoints();
        uVar9 = GeometryBatchRenderer::GetVertexDecl(bVar16);
        param_6->UpdateShader(param_8, uVar8, 1, uVar9, 8, 3);
        bVar4 = GetFirstSequenceIDFromSource(this);
        uVar10 = param_6->GetConstructedShaderId();
        if (5 < param_5) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "renderer/DrawableSortKey.h",
                            177, "Unknown sort key type");
        }
        uVar12 = (ulong)param_11;
        switch (param_5) {
        case 0:
            fVar17 = (float)(-(uint)(0.0 < param_2) & (uint)(param_2 + 0.5));
            pBVar13 = (BucketAllocatorEASTL*)(long)fVar17;
            uVar10 = uVar10 & 65535;
            uVar12 = (ulong)(byte)~bVar4 << 16 |
                     ((long)(fVar17 - 9.223372e+18) & (long)pBVar13 >> 63 | (ulong)pBVar13) << 24 | uVar12 << 56;
            break;
        case 1:
            fVar17 = (float)(-(uint)(0.0 < param_2) & (uint)(param_2 + 0.5));
            lVar7 = (long)fVar17;
            uVar14 = (ulong)((uint)lVar7 | (uint)(long)(fVar17 - 9.223372e+18) & (uint)(lVar7 >> 63));
            uVar10 = uVar10 & 65535;
            pBVar13 = (BucketAllocatorEASTL*)(uVar14 * 16777216);
            uVar12 = (ulong)bVar4 << 16 | uVar14 * -16777216 + 72057594021150720 & 72057594021150720 | uVar12 << 56;
            break;
        case 2:
            pBVar13 = (BucketAllocatorEASTL*)(ulong)(byte)~bVar4;
            ppEVar15 =
                (EntityHighlight**)(((long)(float)(-(uint)(0.0 < param_2) & (uint)(param_2 + 0.5)) & 4294967295U) << 8 |
                                    (uVar10 & 65535) << 40 | uVar12 << 56 | (ulong)pBVar13);
            goto LAB_100812532;
        case 3:
            pBVar13 = (BucketAllocatorEASTL*)(ulong)bVar4;
            fVar17 = (float)(-(uint)(0.0 < param_2) & (uint)(param_2 + 0.5));
            uVar14 = (ulong)fVar17;
            uVar10 = (uVar10 & 65535) << 40 | uVar12 << 56 | (ulong)pBVar13;
            uVar12 = ((long)(fVar17 - 9.223372e+18) & (long)uVar14 >> 63 | uVar14) * -256 + 1099511627520;
            break;
        case 4:
            fVar17 = (float)(-(uint)(0.0 < param_2) & (uint)(param_2 + 0.5));
            lVar7 = (long)fVar17;
            uVar11 = (uint)lVar7 | (uint)(long)(fVar17 - 9.223372e+18) & (uint)(lVar7 >> 63);
            uVar10 = uVar10 & 65535;
            pBVar13 = (BucketAllocatorEASTL*)((ulong)uVar11 << 32);
            uVar12 = (ulong)(byte)~bVar4 << 16 | CONCAT44(uVar11, param_11 << 24);
            break;
        case 5:
            fVar17 = (float)(-(uint)(0.0 < param_2) & (uint)(param_2 + 0.5));
            uVar12 = (ulong)fVar17;
            pBVar13 = (BucketAllocatorEASTL*)18446744069414584320;
            ppEVar15 =
                (EntityHighlight**)(((ulong)bVar4 << 16 | (ulong)(param_11 << 24) |
                                     ((long)(fVar17 - 9.223372e+18) & (long)uVar12 >> 63 | uVar12) * -4294967296 |
                                     uVar10 & 65535) -
                                    4294967296);
            goto LAB_100812532;
        }
        ppEVar15 = (EntityHighlight**)(uVar12 | uVar10);
    LAB_100812532:
        new (&local_40)
            eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>(ppEVar15, pBVar13);
        *param_1 = local_40;
    }

    // 0x100812570, 32 bytes, placed by class name
    // GeometryBatchInstance::CreateRenderingResources()
    void GeometryBatchInstance::CreateRenderingResources() {
        GeometryBatch* this_00;

        this_00 = (GeometryBatch*)shared_ptr<GeometryBatch>::operator->((shared_ptr<GeometryBatch>*)field_24);
        this_00->CreateRenderingResources();
    }

    // 0x100812590, 3856 bytes, placed by class name
    // GeometryBatchInstance::GatherDrawableElements(DrawableQueue&, RT7Core&, SceneViewData const&, EffectManager const&, eastl::vector_map<int, FaceGroupRenderMasks, eastl::less<int>, eastl::allocator, eastl::vector<eastl::pair<int, FaceGroupRenderMasks>, eastl::allocator> > const*, unsigned char)
    void GeometryBatchInstance::GatherDrawableElements(DrawableQueue* param_1, RT7Core* param_2, SceneViewData* param_3,
                                                       EffectManager* param_4, vector_map* param_5, uchar param_6) {
        RenderPass** this_00;
        byte bVar1;
        QueryPass* this_01;
        DrawableQueue* pDVar2;
        undefined8 uVar3;
        char cVar4;
        undefined1 uVar5;
        bool bVar6;
        byte bVar7;
        int iVar8;
        undefined4 uVar9;
        undefined4 uVar10;
        uint uVar11;
        RenderPassBitSet* pRVar12;
        undefined* puVar13;
        long lVar14;
        long* plVar15;
        undefined4* puVar16;
        shared_ptr* psVar17;
        QueryPass* this_02;
        AABB* pAVar18;
        Matrix44T* pMVar19;
        CommandLine* pCVar20;
        GeometryBatch_DE* pGVar21;
        GeometryQuery* pGVar22;
        uint* puVar23;
        GeometryBatchInstance* pGVar24;
        SceneViewData* pSVar25;
        float fVar26;
        undefined4 extraout_XMM0_Da;
        GeometryBatchInstance* pGVar30;
        GeometryBatchInstance* pGVar31;
        GeometryBatchInstance* pGVar32;
        GeometryBatchInstance* pGVar33;
        undefined1 auVar27[12];
        SceneViewData* pSVar28;
        undefined4 uVar29;
        float local_1d8;
        float local_1d4;
        long* local_1d0;
        long* local_1c8;
        undefined4* local_1c0;
        Frustum* local_1b8;
        EffectManager* local_1b0;
        undefined1 local_19c[8];
        float local_194;
        SceneViewData* local_190;
        undefined8 local_188;
        undefined*** local_180;
        vector_map* local_178;
        undefined8 local_168;
        undefined2 local_160;
        undefined4 local_15c;
        SceneViewData* local_158;
        uint local_144;
        undefined8 local_140;
        ObjType* local_138;
        GeometryBatchInstance* local_130;
        float local_128;
        int local_124;
        uint local_120[18];
        OBB local_d8;
        OBB local_88;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_158 = param_3;
        local_130 = this;
        pRVar12 = (RenderPassBitSet*)param_3->GetRenderPassBits();
        local_138 = (ObjType*)m_material;
        cVar4 = (m_material, pRVar12)->CanRenderInPasses();
        if ((((cVar4 == '\0') || (cVar4 = IsHidden(local_130), cVar4 != '\0')) ||
             ((puVar13 = (undefined*)local_138->GetCost(),
               puVar13 == HideFacesMode::TEXTURES_ON && (cVar4 = param_4->IsEnabled(27), cVar4 != '\0')))) ||
            ((puVar13 = (undefined*)local_138->GetCost(),
              puVar13 == HideFacesMode::TEXTURES_OFF && (cVar4 = param_4->IsEnabled(27), cVar4 == '\0'))))
            goto LAB_100812602;
        fVar26 = (float)local_130->field_656->GetCurrentFade();
        if (0.0 <= fVar26) {
        LAB_1008126a9:
            puVar13 = (undefined*)local_138->data();
            if (puVar13 == AlphaMode::ALPHA_BLENDED) {
                uVar5 = true;
            } else {
                uVar5 = GetAnimatesTransparency(local_130);
            }
        } else {
            cVar4 = param_4->IsEnabled(94);
            uVar5 = true;
            if (cVar4 == '\0')
                goto LAB_1008126a9;
        }
        new (&local_88) math::OBB();
        local_144 = (uint)(byte)uVar5;
        pSVar28 = local_158;
        GetRenderingCameraDistances(local_130, (float*)local_19c, &local_128, (float*)(local_19c + 4), &local_88,
                                    (bool)uVar5, local_158);
        local_178 = (vector_map*)0;
        if ((param_5 != (vector_map*)0) && (lVar14 = param_5->size(), lVar14 != 0)) {
            local_178 = param_5;
        }
        local_124 = 2;
        if ((bool)uVar5 == false) {
            cVar4 = param_4->IsEnabled(108);
            if (cVar4 != '\0') {
                cVar4 = local_138->IsRefractionEnabled();
                local_124 = 8;
                if (cVar4 != '\0')
                    goto LAB_100812785;
            }
            lVar14 = local_138->data();
            local_124 = *(int*)(lVar14 + 8);
        }
    LAB_100812785:
        pSVar25 = local_158;
        this_00 = &local_158->field_520;
        plVar15 = (long*)this_00->HeapBeginPtr();
        local_1d0 = (long*)this_00->end();
        if (plVar15 != local_1d0) {
            local_180 = &local_130->field_8;
            local_1b8 = (Frustum*)pSVar25->m_pViewFrustum;
            pGVar24 = local_130;
            do {
                if (*plVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("renderPass",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "model/GeometryBatchInstance.cpp",
                              1294, (char*)0);
                }
                iVar8 = (*plVar15)->GetPos();
                local_188 = local_138->GetRenderPassEffect(iVar8);
                SetDefaultLODs((GeometryBatchInstance*)local_19c._0_4_, pGVar24, param_4, iVar8, pSVar25, &local_88);
                local_190 = (SceneViewData*)TextureInclusionMode::DEFAULT;
                Model::SelectTextureInclusionMode((TextureInclusionMode*)pGVar24->field_656);
                new (&local_140) math::Vector2T<int>();
                pDVar2 = param_1;
                puVar23 = &switchD_1008128c8::switchdataD_100813458;
                switch (iVar8) {
                case 0:
                case 1:
                    cVar4 = CastsShadow(pGVar24);
                    uVar9 = (undefined4)((ulong)pSVar28 >> 32);
                    if (cVar4 != '\0') {
                        pCVar20 = (CommandLine*)param_1->GetDrawableGroup(iVar8, local_124);
                        uVar10 = pCVar20->GetPos();
                        pSVar28 = (SceneViewData*)CONCAT44(uVar9, local_144);
                        UpdateShadowPassEffect(extraout_XMM0_Da, local_128, pGVar24, &local_140, uVar10, local_188,
                                               param_2, param_4, pSVar28);
                        local_d8.field_0 = (float)GetLodLevel(pGVar24, 1);
                        pGVar21 = DrawableElementPool<GeometryBatch_DE>::Create<
                            math::OBB&, float&,
                            eastl::vector_map<
                                int, FaceGroupRenderMasks, eastl::less<int>, eastl::allocator,
                                eastl::vector<eastl::pair<int, FaceGroupRenderMasks>, eastl::allocator>> const*&,
                            unsigned int, GeometryBatchInstance&>(&local_88, &local_128, &local_178, (uint*)&local_d8,
                                                                  pGVar24);
                        uVar3 = local_140;
                        std::unique_ptr<DrawableElement, DrawableElementDeleter>::unique_ptr<true, void>(
                            (unique_ptr<DrawableElement, DrawableElementDeleter>*)&local_d8, (DrawableElement*)pGVar21);
                        param_1->AddDrawable(uVar3, &local_d8, local_180, local_124, iVar8);
                    LAB_100812b1d:
                        local_d8.~unique_ptr();
                        pGVar24 = local_130;
                        pSVar25 = local_158;
                    }
                    break;
                case 2:
                case 4:
                    if (((((ForwardLightingPass::m_DrawOpaque != '\0') && (local_124 == 0)) ||
                          ((ForwardLightingPass::m_DrawAlphaTested != '\0' && (local_124 == 1)))) ||
                         ((ForwardLightingPass::m_DrawRefracted != '\0' && (local_124 == 8)))) ||
                        ((ForwardLightingPass::m_DrawAlphaBlended != '\0' && (local_124 == 2)))) {
                        if (ForwardLightingPass::m_DrawRT5Materials != '\0') {
                            cVar4 = local_138->GetOption(0);
                            uVar9 = (undefined4)((ulong)pSVar28 >> 32);
                            if (cVar4 != '\0')
                                goto LAB_100812a0d;
                        LAB_100812a33:
                            pCVar20 = (CommandLine*)param_1->GetDrawableGroup(iVar8, local_124);
                            uVar10 = pCVar20->GetPos();
                            pSVar28 = (SceneViewData*)CONCAT44(uVar9, local_144);
                            UpdateForwardPassEffect((GeometryBatchInstance*)local_19c._4_4_, local_128, pGVar24,
                                                    &local_140, uVar10, local_188, param_2, param_4, pSVar28,
                                                    local_190);
                            local_d8.field_0 = (float)GetLodLevel(pGVar24, (iVar8 == 2) * '\x02');
                            pGVar21 = DrawableElementPool<GeometryBatch_DE>::Create<
                                math::OBB&, float&,
                                eastl::vector_map<
                                    int, FaceGroupRenderMasks, eastl::less<int>, eastl::allocator,
                                    eastl::vector<eastl::pair<int, FaceGroupRenderMasks>, eastl::allocator>> const*&,
                                unsigned int, GeometryBatchInstance&>(&local_88, &local_128, &local_178,
                                                                      (uint*)&local_d8, pGVar24);
                            uVar3 = local_140;
                            std::unique_ptr<DrawableElement, DrawableElementDeleter>::unique_ptr<true, void>(
                                (unique_ptr<DrawableElement, DrawableElementDeleter>*)&local_d8,
                                (DrawableElement*)pGVar21);
                            param_1->AddDrawable(uVar3, &local_d8, local_180, local_124, iVar8);
                            goto LAB_100812b1d;
                        }
                    LAB_100812a0d:
                        if (ForwardLightingPass::m_DrawRT7Materials != '\0') {
                            cVar4 = local_138->GetOption(0);
                            uVar9 = (undefined4)((ulong)pSVar28 >> 32);
                            if (cVar4 != '\0')
                                goto LAB_100812a33;
                        }
                    }
                    break;
                case 3:
                    if (((ForwardLightingPass::m_DrawOpaque != '\0') && (local_124 == 0)) ||
                        ((ForwardLightingPass::m_DrawAlphaTested != '\0' && (local_124 == 1)))) {
                        if (ForwardLightingPass::m_DrawRT5Materials != '\0') {
                            cVar4 = local_138->GetOption(0);
                            uVar9 = (undefined4)((ulong)pSVar28 >> 32);
                            if (cVar4 != '\0')
                                goto LAB_100812b88;
                        LAB_100812bae:
                            pDVar2 = param_1;
                            pCVar20 = (CommandLine*)param_1->GetDrawableGroup(3, local_124);
                            uVar10 = pCVar20->GetPos();
                            pSVar28 = (SceneViewData*)CONCAT44(uVar9, local_144);
                            UpdateGeometryPassEffect(pGVar30._0_4_, local_128, pGVar24, &local_140, uVar10, local_188,
                                                     param_2, param_4, pSVar28, local_190, 3);
                            local_d8.field_0 = (float)GetLodLevel(pGVar24, 0);
                            pGVar21 = DrawableElementPool<GeometryBatch_DE>::Create<
                                math::OBB&, float&,
                                eastl::vector_map<
                                    int, FaceGroupRenderMasks, eastl::less<int>, eastl::allocator,
                                    eastl::vector<eastl::pair<int, FaceGroupRenderMasks>, eastl::allocator>> const*&,
                                unsigned int, GeometryBatchInstance&>(&local_88, &local_128, &local_178,
                                                                      (uint*)&local_d8, pGVar24);
                            uVar3 = local_140;
                            std::unique_ptr<DrawableElement, DrawableElementDeleter>::unique_ptr<true, void>(
                                (unique_ptr<DrawableElement, DrawableElementDeleter>*)&local_d8,
                                (DrawableElement*)pGVar21);
                            pDVar2->AddDrawable(uVar3, &local_d8, local_180, local_124, 3);
                            goto LAB_100812d49;
                        }
                    LAB_100812b88:
                        if (ForwardLightingPass::m_DrawRT7Materials != '\0') {
                            cVar4 = local_138->GetOption(0);
                            uVar9 = (undefined4)((ulong)pSVar28 >> 32);
                            if (cVar4 != '\0')
                                goto LAB_100812bae;
                        }
                    }
                    break;
                case 5:
                    pCVar20 = (CommandLine*)param_1->GetDrawableGroup(5, local_124);
                    uVar9 = pCVar20->GetPos();
                    pSVar28 = local_190;
                    UpdateMiniMapPassEffect(pGVar31._0_4_, local_128, pGVar24, &local_140, uVar9, local_188, param_2,
                                            param_4, local_190);
                    local_d8.field_0 = 5.60519e-45;
                    pGVar21 = DrawableElementPool<GeometryBatch_DE>::Create<
                        math::OBB&, float&,
                        eastl::vector_map<
                            int, FaceGroupRenderMasks, eastl::less<int>, eastl::allocator,
                            eastl::vector<eastl::pair<int, FaceGroupRenderMasks>, eastl::allocator>> const*&,
                        unsigned int, GeometryBatchInstance&>(&local_88, &local_128, &local_178, (uint*)&local_d8,
                                                              pGVar24);
                    uVar3 = local_140;
                    std::unique_ptr<DrawableElement, DrawableElementDeleter>::unique_ptr<true, void>(
                        (unique_ptr<DrawableElement, DrawableElementDeleter>*)&local_d8, (DrawableElement*)pGVar21);
                    pDVar2->AddDrawable(uVar3, &local_d8, local_180, local_124, 5);
                LAB_100812d49:
                    local_d8.~unique_ptr();
                    pGVar24 = local_130;
                    pSVar25 = local_158;
                    break;
                default:
                    /* WARNING: Subroutine does not return */
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                    "runetek7/model/GeometryBatchInstance.cpp",
                                    1542, "Unsupported render pass");
                case 8:
                    cVar4 = pGVar24->field_656->HasHighlight();
                    if (((cVar4 != '\0') && (cVar4 = local_138->GetOption(12), cVar4 != '\0')) &&
                        (((((ForwardLightingPass::m_DrawOpaque != '\0' && (local_124 == 0)) ||
                            ((ForwardLightingPass::m_DrawAlphaTested != '\0' && (local_124 == 1)))) ||
                           ((ForwardLightingPass::m_DrawRefracted != '\0' && (local_124 == 8)))) ||
                          ((ForwardLightingPass::m_DrawAlphaBlended != '\0' && (local_124 == 2)))))) {
                        if (((ForwardLightingPass::m_DrawRT5Materials == '\0') ||
                             (cVar4 = local_138->GetOption(0), cVar4 != '\0')) &&
                            ((ForwardLightingPass::m_DrawRT7Materials == '\0' ||
                              (cVar4 = local_138->GetOption(0), cVar4 == '\0')))) {
                        } else {
                            new (&local_d8) math::OBB();
                            GetRenderingCameraDistances(pGVar24, &local_1d8, &local_194, &local_1d4, &local_d8, true,
                                                        pSVar25);
                            eastl::fixed_vector<
                                GeometryBatchInstance::GatherDrawableElements(
                                    DrawableQueue&, RT7Core&, SceneViewData_const&, EffectManager_const&,
                                    eastl::vector_map<
                                        int, FaceGroupRenderMasks, eastl::less<int>, eastl::allocator,
                                        eastl::vector<eastl::pair<int, FaceGroupRenderMasks>, eastl::allocator>> const*,
                                    unsigned char)::DrawableGroupSelection,
                                4ul, false, eastl::dummy_allocator>::fixed_vector();
                            fVar26 = (float)pGVar24->field_656->GetHighlightScale();
                            pSVar28 = pSVar25;
                            if (0.0 < fVar26) {
                                local_168 = 4294967306;
                                local_160 = 257;
                                eastl::fixed_vector<
                                    GeometryBatchInstance::GatherDrawableElements(
                                        DrawableQueue&, RT7Core&, SceneViewData_const&, EffectManager_const&,
                                        eastl::vector_map<int, FaceGroupRenderMasks, eastl::less<int>, eastl::allocator,
                                                          eastl::vector<eastl::pair<int, FaceGroupRenderMasks>,
                                                                        eastl::allocator>> const*,
                                        unsigned char)::DrawableGroupSelection,
                                    4ul, false, eastl::dummy_allocator>::push_back((DrawableGroupSelection*)local_120);
                                local_168 = 68719476746;
                                local_160 = 256;
                                eastl::fixed_vector<
                                    GeometryBatchInstance::GatherDrawableElements(
                                        DrawableQueue&, RT7Core&, SceneViewData_const&, EffectManager_const&,
                                        eastl::vector_map<int, FaceGroupRenderMasks, eastl::less<int>, eastl::allocator,
                                                          eastl::vector<eastl::pair<int, FaceGroupRenderMasks>,
                                                                        eastl::allocator>> const*,
                                        unsigned char)::DrawableGroupSelection,
                                    4ul, false, eastl::dummy_allocator>::push_back((DrawableGroupSelection*)local_120);
                                pSVar28 = pSVar25;
                            }
                            fVar26 = (float)pGVar24->field_656->GetHighlightSilhouetteAlpha();
                            if (0.0 < fVar26) {
                                local_168 = 4294967307;
                                local_160 = 1;
                                eastl::fixed_vector<
                                    GeometryBatchInstance::GatherDrawableElements(
                                        DrawableQueue&, RT7Core&, SceneViewData_const&, EffectManager_const&,
                                        eastl::vector_map<int, FaceGroupRenderMasks, eastl::less<int>, eastl::allocator,
                                                          eastl::vector<eastl::pair<int, FaceGroupRenderMasks>,
                                                                        eastl::allocator>> const*,
                                        unsigned char)::DrawableGroupSelection,
                                    4ul, false, eastl::dummy_allocator>::push_back((DrawableGroupSelection*)local_120);
                                local_168 = 68719476748;
                                local_160 = 0;
                                eastl::fixed_vector<
                                    GeometryBatchInstance::GatherDrawableElements(
                                        DrawableQueue&, RT7Core&, SceneViewData_const&, EffectManager_const&,
                                        eastl::vector_map<int, FaceGroupRenderMasks, eastl::less<int>, eastl::allocator,
                                                          eastl::vector<eastl::pair<int, FaceGroupRenderMasks>,
                                                                        eastl::allocator>> const*,
                                        unsigned char)::DrawableGroupSelection,
                                    4ul, false, eastl::dummy_allocator>::push_back((DrawableGroupSelection*)local_120);
                            }
                            local_1b0 = param_4;
                            puVar16 = (undefined4*)eastl::vector<
                                GeometryBatchInstance::GatherDrawableElements(
                                    DrawableQueue&, RT7Core&, SceneViewData_const&, EffectManager_const&,
                                    eastl::vector_map<
                                        int, FaceGroupRenderMasks, eastl::less<int>, eastl::allocator,
                                        eastl::vector<eastl::pair<int, FaceGroupRenderMasks>, eastl::allocator>> const*,
                                    unsigned char)::DrawableGroupSelection,
                                eastl::fixed_vector_allocator<12ul, 4ul, 4ul, 0ul, false, eastl::dummy_allocator>>::
                                begin(
                                    (vector<GeometryBatchInstance::GatherDrawableElements(
                                                DrawableQueue&, RT7Core&, SceneViewData_const&, EffectManager_const&,
                                                eastl::vector_map<int, FaceGroupRenderMasks, eastl::less<int>,
                                                                  eastl::allocator,
                                                                  eastl::vector<eastl::pair<int, FaceGroupRenderMasks>,
                                                                                eastl::allocator>> const*,
                                                unsigned char)::DrawableGroupSelection,
                                            eastl::fixed_vector_allocator<12ul, 4ul, 4ul, 0ul, false,
                                                                          eastl::dummy_allocator>>*)local_120);
                            local_1c0 = (undefined4*)eastl::vector<
                                GeometryBatchInstance::GatherDrawableElements(
                                    DrawableQueue&, RT7Core&, SceneViewData_const&, EffectManager_const&,
                                    eastl::vector_map<
                                        int, FaceGroupRenderMasks, eastl::less<int>, eastl::allocator,
                                        eastl::vector<eastl::pair<int, FaceGroupRenderMasks>, eastl::allocator>> const*,
                                    unsigned char)::DrawableGroupSelection,
                                eastl::fixed_vector_allocator<12ul, 4ul, 4ul, 0ul, false, eastl::dummy_allocator>>::
                                end((vector<GeometryBatchInstance::GatherDrawableElements(
                                                DrawableQueue&, RT7Core&, SceneViewData_const&, EffectManager_const&,
                                                eastl::vector_map<int, FaceGroupRenderMasks, eastl::less<int>,
                                                                  eastl::allocator,
                                                                  eastl::vector<eastl::pair<int, FaceGroupRenderMasks>,
                                                                                eastl::allocator>> const*,
                                                unsigned char)::DrawableGroupSelection,
                                            eastl::fixed_vector_allocator<12ul, 4ul, 4ul, 0ul, false,
                                                                          eastl::dummy_allocator>>*)local_120);
                            local_1c8 = plVar15;
                            if (puVar16 != local_1c0) {
                                do {
                                    uVar29 = (undefined4)((ulong)pSVar28 >> 32);
                                    local_15c = *puVar16;
                                    uVar9 = puVar16[1];
                                    bVar7 = *(byte*)(puVar16 + 2);
                                    bVar1 = *(byte*)((long)puVar16 + 9);
                                    pCVar20 = (CommandLine*)param_1->GetDrawableGroup(8);
                                    pGVar24 = local_130;
                                    uVar10 = pCVar20->GetPos();
                                    pSVar28 = (SceneViewData*)CONCAT44(uVar29, local_144);
                                    UpdateObjectHighlightPassEffect(pGVar32._0_4_, local_194, pGVar24, &local_140,
                                                                    uVar10, local_188, param_2, local_1b0, pSVar28,
                                                                    local_190, uVar9);
                                    uVar9 = GetLodLevel(pGVar24, 0);
                                    local_168 = CONCAT44(local_168._4_4_, uVar9);
                                    pGVar21 = DrawableElementPool<GeometryBatch_DE>::Create<
                                        math::OBB&, float&,
                                        eastl::vector_map<int, FaceGroupRenderMasks, eastl::less<int>, eastl::allocator,
                                                          eastl::vector<eastl::pair<int, FaceGroupRenderMasks>,
                                                                        eastl::allocator>> const*&,
                                        unsigned int, GeometryBatchInstance&>(&local_d8, &local_194, &local_178,
                                                                              (uint*)&local_168, pGVar24);
                                    uVar3 = local_140;
                                    *(byte*)&pGVar21->field_144 = bVar7 & 1;
                                    *(byte*)((long)&pGVar21->field_144 + 1) = bVar1 & 1;
                                    std::unique_ptr<DrawableElement, DrawableElementDeleter>::unique_ptr<true, void>(
                                        (unique_ptr<DrawableElement, DrawableElementDeleter>*)&local_168,
                                        (DrawableElement*)pGVar21);
                                    param_1->AddDrawable(
                                        uVar3, (unique_ptr<DrawableElement, DrawableElementDeleter>*)&local_168,
                                        local_180, local_15c, 8);
                                    plVar15 = local_1c8;
                                    local_168.~unique_ptr();
                                    puVar16 = puVar16 + 3;
                                } while (puVar16 != local_1c0);
                            }
                            eastl::fixed_vector<
                                GeometryBatchInstance::GatherDrawableElements(
                                    DrawableQueue&, RT7Core&, SceneViewData_const&, EffectManager_const&,
                                    eastl::vector_map<
                                        int, FaceGroupRenderMasks, eastl::less<int>, eastl::allocator,
                                        eastl::vector<eastl::pair<int, FaceGroupRenderMasks>, eastl::allocator>> const*,
                                    unsigned char)::DrawableGroupSelection,
                                4ul, false, eastl::dummy_allocator>::
                                ~fixed_vector(
                                    (fixed_vector<
                                        GeometryBatchInstance::GatherDrawableElements(
                                            DrawableQueue&, RT7Core&, SceneViewData_const&, EffectManager_const&,
                                            eastl::vector_map<int, FaceGroupRenderMasks, eastl::less<int>,
                                                              eastl::allocator,
                                                              eastl::vector<eastl::pair<int, FaceGroupRenderMasks>,
                                                                            eastl::allocator>> const*,
                                            unsigned char)::DrawableGroupSelection,
                                        4ul, false, eastl::dummy_allocator>*)local_120);
                            pGVar24 = local_130;
                            pSVar25 = local_158;
                            param_4 = local_1b0;
                        }
                    }
                    break;
                case 9:
                    this_01 = (QueryPass*)*plVar15;
                    iVar8 = this_01->GetMode();
                    if ((iVar8 != 0) && (((((ForwardLightingPass::m_DrawOpaque != '\0' && (local_124 == 0)) ||
                                            ((puVar23 = (uint*)&ForwardLightingPass::m_DrawAlphaTested,
                                              ForwardLightingPass::m_DrawAlphaTested != '\0' && (local_124 == 1)))) ||
                                           ((puVar23 = (uint*)&ForwardLightingPass::m_DrawAlphaBlended,
                                             ForwardLightingPass::m_DrawAlphaBlended != '\0' && (local_124 == 2)))) &&
                                          (((ForwardLightingPass::m_DrawRT5Materials != '\0' &&
                                             (cVar4 = local_138->GetOption(0), cVar4 == '\0')) ||
                                            ((ForwardLightingPass::m_DrawRT7Materials != '\0' &&
                                              (cVar4 = local_138->GetOption(0), cVar4 != '\0')))))))) {
                        psVar17 = (shared_ptr*)pGVar24->field_656->GetGeometryQuery();
                        bVar6 = shared_ptr::operator_cast_to_bool(psVar17);
                        if (bVar6) {
                            if (QueryPass::m_DrawQueryTests == '\0')
                                break;
                            bVar7 = 1;
                            local_15c = 0;
                            iVar8 = 9;
                        } else {
                            cVar4 = local_138->GetOption(13);
                            if (cVar4 == '\0') {
                                bVar7 = 0;
                            } else {
                                this_02 = (QueryPass*)param_2->GetQueryPass();
                                bVar7 = this_02->IsDistanceCulled(local_128);
                                bVar7 = bVar7 ^ 1;
                            }
                            pGVar24 = local_130;
                            local_15c = (undefined4)CONCAT71((int7)((ulong)puVar23 >> 8), 1);
                            iVar8 = local_124;
                            if ((bVar7 != 0) && (QueryPass::m_enablePreciseCulling != '\0')) {
                                pAVar18 = (AABB*)GetAABB(local_130);
                                new (&local_d8) math::AABB(pAVar18);
                                pMVar19 = (Matrix44T*)GetMaterial((GeometryBatchInstance*)pGVar24->field_656);
                                local_d8.Transform(pMVar19);
                                pSVar25 = local_158;
                                cVar4 = local_1b8->TestIntersection((AABB*)&local_d8);
                                bVar7 = cVar4 != '\0';
                                iVar8 = local_124;
                            }
                        }
                        local_124 = iVar8;
                        if (bVar7 != 0) {
                            cVar4 = this_01->GetEnabledDrawGroup(iVar8);
                            uVar9 = (undefined4)((ulong)pSVar28 >> 32);
                            if (cVar4 != '\0') {
                                if (iVar8 != 9) {
                                    iVar8 = this_01->GetMode();
                                    uVar9 = (undefined4)((ulong)pSVar28 >> 32);
                                    if (iVar8 != 1)
                                        goto LAB_1008133f4;
                                }
                                pCVar20 = (CommandLine*)param_1->GetDrawableGroup(9, local_124);
                                uVar10 = pCVar20->GetPos();
                                pGVar24 = local_130;
                                pSVar28 = (SceneViewData*)CONCAT44(uVar9, local_144);
                                UpdateGeometryPassEffect(pGVar33._0_4_, local_128, local_130, &local_140, uVar10,
                                                         local_188, param_2, param_4, pSVar28, local_190, 9);
                                uVar11 = 4;
                                if ((char)local_15c == '\0') {
                                    uVar11 = GetLodLevel(pGVar24, 0);
                                }
                                local_120[0] = uVar11;
                                pGVar21 = DrawableElementPool<GeometryBatch_DE>::Create<
                                    math::OBB&, float&,
                                    eastl::vector_map<int, FaceGroupRenderMasks, eastl::less<int>, eastl::allocator,
                                                      eastl::vector<eastl::pair<int, FaceGroupRenderMasks>,
                                                                    eastl::allocator>> const*&,
                                    unsigned int&, GeometryBatchInstance&>(&local_88, &local_128, &local_178, local_120,
                                                                           pGVar24);
                                psVar17 = (shared_ptr*)pGVar24->field_656->GetGeometryQuery();
                                bVar6 = shared_ptr::operator_cast_to_bool(psVar17);
                                if (bVar6) {
                                    pGVar22 = (GeometryQuery*)shared_ptr<GeometryQuery>::operator->(
                                        (shared_ptr<GeometryQuery>*)psVar17);
                                    cVar4 = pGVar22->IsValid();
                                    if (cVar4 != '\0') {
                                        pGVar22 = (GeometryQuery*)shared_ptr<GeometryQuery>::operator->(
                                            (shared_ptr<GeometryQuery>*)psVar17);
                                        auVar27 = pGVar22->GetQueryInstance((ulong)param_6);
                                        *(undefined1(*)[12]) & pGVar21->field_128 = auVar27;
                                    }
                                }
                                uVar3 = local_140;
                                std::unique_ptr<DrawableElement, DrawableElementDeleter>::unique_ptr<true, void>(
                                    (unique_ptr<DrawableElement, DrawableElementDeleter>*)&local_d8,
                                    (DrawableElement*)pGVar21);
                                param_1->AddDrawable(uVar3, &local_d8, local_180, local_124, 9);
                                local_d8.~unique_ptr();
                                pGVar24 = local_130;
                                pSVar25 = local_158;
                                break;
                            }
                        }
                    LAB_1008133f4:
                        pGVar24 = local_130;
                    }
                    break;
                case 12:
                case 14:
                    break;
                }
                plVar15 = plVar15 + 1;
            } while (plVar15 != local_1d0);
        }
    LAB_100812602:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1008134c0, 336 bytes, placed by class name
    // GeometryBatchInstance::GetRenderingCameraDistances(float&, float&, float&, math::OBB&, bool, SceneViewData const&)
    void GeometryBatchInstance::GetRenderingCameraDistances(float* param_1, float* param_2, float* param_3,
                                                            OBB* param_4, bool param_5, SceneViewData* param_6) {
        AABB* pAVar1;
        Matrix44T* pMVar2;
        vector* pvVar3;
        uint uVar4;
        undefined3 in_register_00000089;
        float fVar5;
        float in_XMM1_Da;
        AABB local_88;
        undefined8 local_60[2];
        float* local_50;
        float* local_48;
        undefined8 local_40;
        float local_38;

        local_50 = param_2;
        local_48 = param_3;
        if (CONCAT31(in_register_00000089, param_5) == 0) {
            pAVar1 = (AABB*)GetAABB(this);
        } else {
            pAVar1 = (AABB*)field_656->GetScreen();
        }
        pAVar1->GetOBB(param_4);
        pMVar2 = (Matrix44T*)GetMaterial((GeometryBatchInstance*)field_656);
        param_4->Transform(pMVar2);
        new (&local_88) math::AABB();
        pAVar1 = &local_88;
        param_4->GetMinimumEnclosingAABB(&local_88);
        *param_1 = 3.4028235e+38;
        pvVar3 = param_6->SSOBeginPtr(pAVar1);
        local_60[0] = local_88.GetFurthestPoint(pvVar3);
        pvVar3 = param_6->SSOBeginPtr(pvVar3);
        local_40 = math::operator-((Vector3T*)local_60, (Vector3T*)pvVar3);
        local_38 = in_XMM1_Da;
        fVar5 = (float)local_40.LengthSq();
        *local_48 = fVar5;
        uVar4 = 0;
        do {
            local_40 = local_88.GetCornerPos(uVar4);
            local_38 = in_XMM1_Da;
            pMVar2 = (Matrix44T*)param_6->GetScreen();
            in_XMM1_Da = (float)DstFromCameraPlaneUnclamped((Vector3T*)&local_40, pMVar2);
            fVar5 = (float)eastl::min<float>(*param_1, in_XMM1_Da);
            *param_1 = fVar5;
            uVar4 = uVar4 + 1;
        } while (uVar4 != 8);
        fVar5 = (float)eastl::max_alt(0.0, fVar5);
        *local_50 = fVar5;
    }

    // 0x100813a20, 384 bytes, placed by class name
    // GeometryBatchInstance::RenderDebug(RenderPassType, DrawableElement&) const
    void GeometryBatchInstance::RenderDebug(type* param_2, long param_3) {
        OBB* this_00;
        Layout* this_01;
        AABB* this_02;
        Matrix44T* pMVar1;
        long* plVar2;
        int iVar3;
        undefined1 local_90[8];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (((m_showWorldAABB != '\0') || (m_showWorldOBB != '\0')) && ((int)param_2 == 4)) {
            this_01 = (Layout*)shared_ptr<GeometryBatch>::operator->((shared_ptr<GeometryBatch>*)field_24);
            this_02 = (AABB*)eastl::string::Layout::SSOBeginPtr(this_01, param_2);
            if (m_showWorldAABB != '\0') {
                new ((local_90 + 8)) math::AABB(this_02);
                pMVar1 = (Matrix44T*)GetMaterial((GeometryBatchInstance*)field_656);
                ((local_90 + 8))->Transform(pMVar1);
                plVar2 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                if (plVar2 != (long*)0) {
                    new (local_90) oldscape::sidebars::SideBarData(-(uint)(*(long*)(param_3 + 104) == 0) | 4294934783,
                                                                   m_renderDepthEnabled ^ 3);
                    (**(code**)(*plVar2 + 72))(plVar2, local_90 + 8, (SideBarData*)local_90);
                }
            }
            if (m_showWorldOBB != '\0') {
                this_00 = (OBB*)(local_90 + 8);
                math::OBB::OBB(this_00);
                this_02->GetOBB(this_00);
                pMVar1 = (Matrix44T*)GetMaterial((GeometryBatchInstance*)field_656);
                this_00->Transform(pMVar1);
                plVar2 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                if (plVar2 != (long*)0) {
                    iVar3 = -6250432;
                    if (*(long*)(param_3 + 104) == 0) {
                        iVar3 = -6250241;
                    }
                    new (local_90) oldscape::sidebars::SideBarData(iVar3, m_renderDepthEnabled ^ 3);
                    (**(code**)(*plVar2 + 80))(plVar2, local_90 + 8, (SideBarData*)local_90);
                }
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100813bb0, 128 bytes, placed by class name
    // GeometryBatchInstance::Prefetch() const
    void GeometryBatchInstance::Prefetch() {
        bool bVar1;

        bVar1 = is_aligned<char>((char*)this, 64);
        if (!bVar1) {
            /* WARNING: Subroutine does not return */
            LogAssert("is_aligned(pData, 64)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/core/memory/Utils.h", 56,
                      (char*)0);
        }
        bVar1 = is_aligned<char>(m_material + 16, 64);
        if (!bVar1) {
            /* WARNING: Subroutine does not return */
            LogAssert("is_aligned(pData, 64)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/core/memory/Utils.h", 56,
                      (char*)0);
        }
    }

} // namespace jag::graphics
