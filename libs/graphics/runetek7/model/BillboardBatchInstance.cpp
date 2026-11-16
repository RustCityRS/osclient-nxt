// libs/graphics/runetek7/model/BillboardBatchInstance.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "BillboardBatchInstance.h"
#include "GeometryBatchInstance.h"

namespace jag::graphics {
    // 0x103bbdf13
    bool BillboardBatchInstance::m_showWorldAABB;

    // 0x100009e70: BillboardBatchInstance::GatherDrawableElements(DrawableQueue&, RT7Core&, SceneViewData const&, EffectManager const&) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: BillboardBatchInstance::GetTransformedTriangle(unsigned int, math::Vector4T<float> (&) [3]) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100016cf0: BillboardBatchInstance::GetModel() const has the same machine code as eastl::hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator, eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::size() const

    // 0x10011ced0: BillboardBatchInstance::GetVertexAnimation() const has the same machine code as oldscape::configdecoder::NpcType::GetHeadIconIndices() const

    // 0x1001a3c10: BillboardBatchInstance::GetMaterial() has the same machine code as MainLoopFrameTimer::GetFPSCounter()

    // 0x1001a3c10: BillboardBatchInstance::GetMaterial() const has the same machine code as MainLoopFrameTimer::GetFPSCounter()

    // 0x10042fe60: BillboardBatchInstance::GetApproxMaterialInfoList() const has the same machine code as game::LocType::GetResize() const

    // 0x100865a00: BillboardBatchInstance::GetBillboardBatch() const has the same machine code as BillboardBatchInstance::GetBillboardBatch()

    // 0x100865d00
    void BillboardBatchInstance::Reserve(const BillboardBatchCombineHelper& billboardBatchCombineHelper) {
        ((BillboardBatch*)(*field_32).operator->())->Reserve(billboardBatchCombineHelper);
    }

    // 0x100865d30
    void BillboardBatchInstance::Append(const BillboardBatchInstance& billboardBatchInstance, bool arg2) {
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* this_00;
        int iVar1;
        int iVar2;
        int iVar4;
        int iVar5;
        BillboardBatch* pBVar6;
        BillboardBatch* billboardBatch;
        int* piVar7;
        int* piVar8;
        int* piVar9;
        long lVar10;
        long lVar11;
        int* piVar12;
        int* piVar13;
        MaterialInfo* materialInfo1;
        MaterialInfo* materialInfo2;
        MaterialInfo* materialInfo3;
        uint8_t* puVar14;
        uint8_t* this_01;

        if (this != billboardBatchInstance) {
            DestroyRenderingResources();
            puVar14 = field_32;
            pBVar6 = (BillboardBatch*)(*puVar14).operator->();
            iVar4 = pBVar6->GetIndexCount();
            pBVar6 = (BillboardBatch*)(*puVar14).operator->();
            iVar5 = pBVar6->GetVertexCount();
            pBVar6 = (BillboardBatch*)(*puVar14).operator->();
            billboardBatch = (BillboardBatch*)*billboardBatchInstance.field_32;
            pBVar6->Append(*billboardBatch, arg2);
            piVar7 = (int*)((billboardBatchInstance.m_vertexAnimation + 80))->HeapBeginPtr();
            piVar8 = (int*)((billboardBatchInstance.m_vertexAnimation + 80))->end();
            if (piVar7 != piVar8) {
                this_00 =
                    (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)(m_vertexAnimation + 80);
                do {
                    if (this_00->empty() == '\0') {
                        piVar9 = (int*)this_00->back();
                        if (*piVar9 != *piVar7)
                            goto LAB_100865e90;
                        lVar10 = this_00->back();
                        if (*(char*)(lVar10 + 4) != (char)piVar7[1])
                            goto LAB_100865e90;
                        lVar10 = this_00->back();
                        if (*(int*)(lVar10 + 8) != piVar7[2])
                            goto LAB_100865e90;
                        lVar10 = this_00->back();
                        if (*(int*)(lVar10 + 12) != piVar7[3])
                            goto LAB_100865e90;
                        lVar10 = this_00->back();
                        if (*(short*)(lVar10 + 16) != (short)piVar7[4])
                            goto LAB_100865e90;
                        lVar10 = this_00->back();
                        piVar9 = (int*)(*((piVar7 + 5)))[(unsigned long)billboardBatch];
                        iVar1 = piVar9[1];
                        iVar2 = *piVar9;
                        lVar11 = (*((lVar10 + 20)))[(unsigned long)billboardBatch];
                        *(int*)(lVar11 + 4) = *(int*)(lVar11 + 4) + (iVar1 - iVar2);
                        *(int*)(lVar10 + 64) = *(int*)(lVar10 + 64) + (piVar7[16] - piVar7[15]);
                    } else {
                    LAB_100865e90:
                        piVar9 = (int*)this_00->push_back();
                        *piVar9 = *piVar7;
                        *(char*)(piVar9 + 1) = (char)piVar7[1];
                        piVar9[2] = piVar7[2];
                        piVar9[3] = piVar7[3];
                        *(short*)(piVar9 + 4) = (short)piVar7[4];
                        piVar12 = (int*)(*((piVar7 + 5)))[(unsigned long)billboardBatch];
                        iVar1 = *piVar12;
                        piVar13 = (int*)(*((piVar9 + 5)))[(unsigned long)billboardBatch];
                        *piVar13 = iVar1 + iVar4;
                        piVar13[1] = piVar12[1] + iVar4;
                        piVar9[15] = piVar7[15] + iVar5;
                        piVar9[16] = piVar7[16] + iVar5;
                    }
                    piVar7 = piVar7 + 17;
                } while (piVar7 != piVar8);
            }
            this_01 = &field_616;
            lVar10 = this_01->size();
            puVar14 = &billboardBatchInstance.field_616;
            lVar11 = puVar14->size();
            this_01->reserve(lVar10 + lVar11);
            materialInfo1 = (MaterialInfo*)this_01->end();
            materialInfo2 = (MaterialInfo*)puVar14->HeapBeginPtr();
            materialInfo3 = (MaterialInfo*)puVar14->end();
            this_01->insert<MaterialInfo const*>(materialInfo1, materialInfo2, materialInfo3);
        }
    }

    // 0x100865f90
    void DrawableElementPool<BillboardBatch_DE>::GetDrawableElementPool() {
        int* piVar2;
        int local_18[2];

        if (GetDrawableElementPool()::pool == '\0') {
            if (___cxa_guard_acquire(&GetDrawableElementPool()::pool) != 0) {
                local_18[0] = 16;
                local_18[1] = 16;
                piVar2 = std::max<int>(*local_18, *(local_18 + 1));
                new ((FastPool<BillboardBatch_DE, int>*)&GetDrawableElementPool()::pool)
                    FastPool<BillboardBatch_DE, int>(1664, *piVar2);
                ___cxa_atexit(PTR__FastPool_100ee6860, &GetDrawableElementPool()::pool, 4294967296);
                ___cxa_guard_release(&GetDrawableElementPool()::pool);
            }
        }
        return &GetDrawableElementPool()::pool;
    }

    // 0x100866050
    BillboardBatchInstance::BillboardBatchInstance(const Model& model, unsigned short arg2)
        : Drawable(4), MakeUniquePool<BillboardBatchInstance, 64>() {
        field_16 = &PTR_Transform_100f16160;
        field_24 = model;
        MakeSharedPool<BillboardBatch, 64>::MakeShared<>();
        new (m_material) BillboardMaterial();
        new (&field_616) eastl::vector<MaterialInfo>();
        new (m_vertexAnimation) VertexAnimation();
        new ((m_vertexAnimation + 80)) eastl::vector<SourceModelExternalIndexSection>();
        ((m_vertexAnimation + 80))->reserve((unsigned long)arg2);
    }

    // 0x100866380
    BillboardBatchInstance::BillboardBatchInstance(BillboardBatchInstance&& billboardBatchInstance, const Model& model)
        : Drawable(billboardBatchInstance), MakeUniquePool<BillboardBatchInstance, 64>() {
        field_16 = &PTR_Transform_100f16160;
        field_24 = model;
        field_32->shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(billboardBatchInstance.field_32);
        new (m_material) BillboardMaterial(billboardBatchInstance.m_material);
        new (&field_616) eastl::vector<MaterialInfo>();
        new (m_vertexAnimation) VertexAnimation();
        new ((m_vertexAnimation + 80))
            eastl::vector<SourceModelExternalIndexSection>(*((billboardBatchInstance.m_vertexAnimation + 80)));
    }

    // 0x1008664c0
    BillboardBatchInstance::BillboardBatchInstance(const BillboardBatchInstance& billboardBatchInstance,
                                                   const Model& model, bool arg3)
        : Drawable(billboardBatchInstance), MakeUniquePool<BillboardBatchInstance, 64>() {
        field_16 = &PTR_Transform_100f16160;
        field_24 = model;
        if (arg3) {
            new (field_32) shared_ptr(billboardBatchInstance.field_32);
        } else {
            *billboardBatchInstance.field_32;
            MakeSharedPool<BillboardBatch, 64>::MakeShared<BillboardBatch&>((BillboardBatch*)field_32);
        }
        new (m_material) BillboardMaterial(billboardBatchInstance.m_material);
        new (&field_616) eastl::vector<MaterialInfo>();
        new (m_vertexAnimation) VertexAnimation();
        new ((m_vertexAnimation + 80))
            eastl::vector<SourceModelExternalIndexSection>(*((billboardBatchInstance.m_vertexAnimation + 80)));
    }

    // 0x100866750
    BillboardBatchInstance::~BillboardBatchInstance() {
        field_16 = &PTR_Transform_100f16160;
        m_material->DestroyRenderingResources();
        ((m_vertexAnimation + 80))->~vector();
        m_vertexAnimation->~VertexAnimation();
        field_616.~vector();
        m_material->~BillboardMaterial();
        field_32->~shared_ptr();
    }

    // 0x100866840
    void BillboardBatchInstance::SetAnimationStateProvider(
        const shared_ptr<AnimationStateProvider>& animationStateProvider) {
        bool arg2;
        long* plVar4;

        bool cVar2 = field_32->operator_cast_to_bool();
        if (cVar2) {
            cVar2 = ((BillboardBatch*)(*field_32).operator->())->HasBones();
            if (cVar2) {
                cVar2 = (m_vertexAnimation->GetMaterial())->operator_cast_to_bool();
                if (!cVar2) {
                    ((AnimationStateProvider*)animationStateProvider.operator->())->InvalidateAsyncUpdate();
                }
                m_vertexAnimation->SetAnimationStateProvider(animationStateProvider);
                arg2 = animationStateProvider != nullptr;
                SetRenderFlag(8, arg2);
            }
        }
        cVar2 = animationStateProvider.operator_cast_to_bool();
        char cVar3 = '\x02';
        if (cVar2) {
            plVar4 = (long*)animationStateProvider.operator->();
            cVar3 = (**(void (**)(...))(*plVar4 + 56))(plVar4);
        }
        auto pEVar1 = m_material->GetRenderPassEffect(4);
        pEVar1->Set(77, !cVar3);
        pEVar1 = (EffectList*)m_material->GetRenderPassEffect(4);
        pEVar1->Set(78, cVar3 == '\x01');
    }

    // 0x1008669d0
    void BillboardBatchInstance::UpdateAnimation(ThreadPool& threadPool, unsigned int arg2,
                                                 const math::Matrix44T<float>& matrix44) {
        uint8_t* midiPlayerMainThread = field_32;
        if (!*midiPlayerMainThread != nullptr) {
            LogAssert("m_billboardBatch != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "BillboardBatchInstance.cpp",
                      88, nullptr);
        }
        BillboardBatch* pBVar2 = (BillboardBatch*)(*midiPlayerMainThread).operator->();
        unsigned int arg1 = pBVar2->GetBoneCount();
        pBVar2 = (BillboardBatch*)(*midiPlayerMainThread).operator->();
        unsigned int arg2_00 = pBVar2->GetFaceLabelCount();
        pBVar2 = (BillboardBatch*)(*midiPlayerMainThread).operator->();
        unsigned int arg3 = pBVar2->GetBillboardLabelCount();
        m_vertexAnimation->SetMaxSize(arg1, arg2_00, arg3);
        GeometryBatch* this_00 = (GeometryBatch*)(*midiPlayerMainThread).operator->();
        auto arg3_00 = this_00->GetBoneIDMap();
        Entity* this_01 = (Entity*)(*midiPlayerMainThread).operator->();
        auto arg4 = this_01->GetWorld();
        fixed_hashtable_allocator<10ul, 1208ul, 8ul, 8ul, 0ul, true>* this_02 =
            (fixed_hashtable_allocator<10ul, 1208ul, 8ul, 8ul, 0ul, true>*)(*midiPlayerMainThread).operator->();
        auto arg5 = this_02->get_overflow_allocator();
        pBVar2 = (BillboardBatch*)(*midiPlayerMainThread).operator->();
        auto arg6 = pBVar2->GetBillboardLabelIDMap();
        auto labelDatas = field_24->GetTextureAtlasManager();
        m_vertexAnimation->UpdateAnimation(threadPool, arg2, arg3_00, arg4, arg5, arg6, *labelDatas, matrix44);
    }

    // 0x100866b30
    void BillboardBatchInstance::EndUpdateAnimation() {
        m_vertexAnimation->EndUpdateAnimation();
    }

    // 0x100866b50
    void BillboardBatchInstance::LoadMeshFromModelRawRT7(PacketView& packetView) {
        ((BillboardBatch*)(*field_32).operator->())->LoadMeshFromModelRawRT7(packetView);
    }

    // 0x100866b80
    void BillboardBatchInstance::SetInitialSource(int arg1, unsigned char arg2, int arg3, int arg4) {
        uint32_t* extraout_RAX;
        uint32_t in_register_00000034;

        int iVar2 = arg1;
        ((m_vertexAnimation + 80))->clear();
        int* piVar3 = (int*)((m_vertexAnimation + 80))->push_back_uninitialized();
        *piVar3 = arg1;
        *(unsigned char*)(piVar3 + 1) = arg2;
        piVar3[2] = arg3;
        piVar3[3] = arg4;
        *(uint16_t*)(piVar3 + 4) = 64;
        (*((piVar3 + 5)))[(((uint64_t)in_register_00000034 << 32) | (uint32_t)iVar2)];
        *extraout_RAX = 0;
        BillboardBatch* pBVar4 = (BillboardBatch*)(*field_32).operator->();
        extraout_RAX[1] = pBVar4->GetIndexCount();
        piVar3[15] = 0;
        pBVar4 = (BillboardBatch*)(*field_32).operator->();
        iVar2 = pBVar4->GetVertexCount();
        piVar3[16] = iVar2;
    }

    // 0x100866c90
    void BillboardBatchInstance::ChangeSourceExternalID(int arg1, int arg2) {
        int* piVar1 = (int*)((m_vertexAnimation + 80))->HeapBeginPtr();
        int* piVar2 = (int*)((m_vertexAnimation + 80))->end();
        for (; piVar1 != piVar2; piVar1 = piVar1 + 17) {
            if (*piVar1 == arg1) {
                *piVar1 = arg2;
            }
        }
    }

    // 0x100866ce0
    void BillboardBatchInstance::ChangeSourceExternalIDs(int arg1) {
        int* piVar1 = (int*)((m_vertexAnimation + 80))->HeapBeginPtr();
        int* piVar2 = (int*)((m_vertexAnimation + 80))->end();
        for (; piVar1 != piVar2; piVar1 = piVar1 + 17) {
            *piVar1 = arg1;
        }
    }

    // 0x100866d30
    uint32_t BillboardBatchInstance::GetFirstMaterialIDFromSource() const {
        long lVar3;

        bool cVar1 = ((m_vertexAnimation + 80))->empty();
        uint32_t uVar2 = 4294967295;
        if (!cVar1) {
            lVar3 = ((m_vertexAnimation + 80))->front();
            uVar2 = *(uint32_t*)(lVar3 + 8);
        }
        return uVar2;
    }

    // 0x100866da0
    unsigned long BillboardBatchInstance::GetFirstSequenceIDFromSource() const {
        long lVar3;

        bool cVar1 = ((m_vertexAnimation + 80))->empty();
        unsigned long uVar2 = 4294967295;
        if (!cVar1) {
            lVar3 = ((m_vertexAnimation + 80))->front();
            uVar2 = (unsigned long)*(uint8_t*)(lVar3 + 4);
        }
        return uVar2;
    }

    // 0x100866de0
    void BillboardBatchInstance::BuildMaterialIDListFromSource(eastl::fixed_vector<int, 128ul>& arg1) const {
        long lVar1 = ((m_vertexAnimation + 80))->HeapBeginPtr();
        long lVar2 = ((m_vertexAnimation + 80))->end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 68) {
            arg1.push_back(*((lVar1 + 8)));
            arg1.push_back(*((lVar1 + 12)));
        }
    }

    // 0x100866e50
    void BillboardBatchInstance::SetInitialMaterial(const Material& material) {
        auto pBVar1 = GetBillboardBatch();
        bool arg1 = (bool)pBVar1->HasBones();
        pBVar1 = (BillboardBatch*)GetBillboardBatch();
        bool arg2 = (bool)pBVar1->HasJoints();
        m_material->Init(arg1, arg2, material);
        TextureAtlasManager::PopulateMaterialInfoFromMaterial<eastl::allocator>(field_616, material);
    }

    // 0x1008672b0
    void BillboardBatchInstance::BakeHSLColors() {
        BillboardBatch* this_00;
        unsigned int* puVar3;
        unsigned long in_RSI;

        long lVar1 = ((m_vertexAnimation + 80))->HeapBeginPtr();
        long lVar2 = ((m_vertexAnimation + 80))->end();
        if (lVar1 != lVar2) {
            do {
                this_00 = (BillboardBatch*)(*field_32).operator->();
                puVar3 = (unsigned int*)(*((lVar1 + 20)))[in_RSI];
                in_RSI = (unsigned long)*puVar3;
                this_00->BakeHSLColors(*puVar3, puVar3[1]);
                lVar1 = lVar1 + 68;
            } while (lVar1 != lVar2);
        }
    }

    // 0x100867330
    void BillboardBatchInstance::BakeTextureMeta(const eastl::fixed_map<int, ModelTextureMeta, 64ul>& fixed_map) {
        unsigned int arg1;
        unsigned int arg2;
        long lVar1;
        bool cVar2;
        unsigned int* puVar4;
        unsigned long local_50;
        BillboardBatch* local_48;
        uint64_t local_38;

        BillboardBatchInstance* local_40 = this;
        long lVar5 = ((m_vertexAnimation + 80))->HeapBeginPtr();
        long lVar3 = ((m_vertexAnimation + 80))->end();
        if (lVar5 != lVar3) {
            local_40 = (BillboardBatchInstance*)local_40->field_32;
            do {
                local_38 = fixed_map.find(*((lVar5 + 8)));
                local_50 = fixed_map.end();
                cVar2 = local_38 != local_50;
                local_48 = (BillboardBatch*)(*local_40).operator->();
                puVar4 = (unsigned int*)(*((lVar5 + 20)))[(unsigned long)(Vector2T<unsigned char>*)&local_50];
                arg1 = *puVar4;
                arg2 = puVar4[1];
                if (!cVar2) {
                    local_50 = local_50 & 18446744073709486080;
                    new (&local_50) math::Vector2T();
                    local_48->BakeTextureMeta(arg1, arg2, local_50);
                } else {
                    lVar1 = *local_38;
                    local_48->BakeTextureMeta(arg1, arg2, *((lVar1 + 4)));
                }
                lVar5 = lVar5 + 68;
            } while (lVar5 != lVar3);
        }
    }

    // 0x100867470
    void BillboardBatchInstance::SortSections() {
        long lVar3;
        ReturnValue RVar4;
        SourceModelExternalIndexSection* pSVar5;
        SourceModelExternalIndexSection* pSVar6;
        int* piVar7;
        int* piVar8;
        SourceModelExternalIndexSection* pSVar9;
        back_insert_iterator<eastl::vector<SourceModelExternalIndexSection> _>* back_insert_iterator;
        uint64_t extraout_RDX;
        ReturnValue RVar10;
        int iVar12;
        int iVar13;
        map<int, shared_ptr<oldscape::dash3d::AnimBase>, eastl::less<int>, BucketAllocatorEASTL> local_98;
        ReturnValue local_60;
        eastl local_58;
        uint64_t local_50;
        vector<SourceModelExternalIndexSection>* local_40;
        ReturnValue local_38;

        vector<SourceModelExternalIndexSection>* pvVar11 =
            (vector<SourceModelExternalIndexSection>*)(m_vertexAnimation + 80);
        unsigned long uVar2 = pvVar11->size();
        if (1 < uVar2) {
            eastl::destruct<oldscape::highlight::NpcUID*>(&local_58);
            local_98 = eastl::map(local_58);
            local_38 = (ReturnValue)0;
            lVar3 = pvVar11->size();
            local_40 = pvVar11;
            if (lVar3 != 0) {
                do {
                    lVar3 = (*pvVar11)[(unsigned long)local_38];
                    local_58[0] =
                        (eastl)eastl::make_pair<unsigned char const&, unsigned long&>(*((lVar3 + 4)), local_38);
                    local_50 = extraout_RDX;
                    local_60 = local_98.insert<eastl::pair<unsigned char, unsigned long>, void>(local_58);
                    pvVar11 = local_40;
                    RVar10 = (ReturnValue)((long)local_38 + 1);
                    local_38 = RVar10;
                    RVar4 = (ReturnValue)local_40->size();
                } while ((unsigned long)RVar10 < (unsigned long)RVar4);
            }
            local_58 = eastl::vector<SourceModelExternalIndexSection, BucketAllocatorEASTL>();
            pvVar11 = local_40;
            uVar2 = local_40->size();
            local_58.reserve(uVar2);
            local_38 = local_98.rbegin();
            local_60.end();
            iVar13 = 0;
            iVar12 = 0;
            while (true) {
                if (local_38 != local_60 == '\0')
                    break;
                lVar3 = *local_38;
                pSVar5 = (SourceModelExternalIndexSection*)(*pvVar11)[*(unsigned long*)(lVar3 + 8)];
                pSVar9 = pSVar5;
                pSVar6 = local_58.emplace_back<SourceModelExternalIndexSection const&>(*pSVar5);
                piVar7 = (int*)(*((pSVar6 + 20)))[(unsigned long)pSVar9];
                *piVar7 = iVar12;
                piVar8 = (int*)(*((pSVar5 + 20)))[(unsigned long)pSVar9];
                iVar12 = iVar12 + (piVar8[1] - *piVar8);
                piVar7[1] = iVar12;
                *(int*)(pSVar6 + 60) = iVar13;
                iVar13 = iVar13 + (*(int*)(pSVar5 + 64) - *(int*)(pSVar5 + 60));
                *(int*)(pSVar6 + 64) = iVar13;
                ++local_38;
                pvVar11 = local_40;
            }
            ((BillboardBatch*)(*field_32).operator->())->SortSections(*pvVar11, local_58, local_98);
            pvVar11->clear();
            pSVar9 = (SourceModelExternalIndexSection*)local_58.HeapBeginPtr();
            pSVar5 = (SourceModelExternalIndexSection*)local_58.end();
            back_insert_iterator =
                (back_insert_iterator<eastl::vector<SourceModelExternalIndexSection> _>*)pvVar11->end();
            eastl::copy<SourceModelExternalIndexSection*,
                        eastl::back_insert_iterator<eastl::vector<SourceModelExternalIndexSection>>>(
                pSVar9, pSVar5, back_insert_iterator);
        }
    }

    // 0x1008678e0
    bool BillboardBatchInstance::IsCombinableWith(const BillboardBatchInstance& billboardBatchInstance, bool arg2,
                                                  bool arg3, bool arg4, TextureAtlas& textureAtlas) {
        bool bVar1;
        unsigned int uVar4;
        BillboardMaterial* billboardMaterial;
        long lVar7;
        uint32_t in_register_00000081;
        WrapArray<MaterialInfo const> local_68;

        uint32_t local_34 = (((uint32_t)in_register_00000081 << 8) | (uint8_t)arg4);
        billboardMaterial = (BillboardMaterial*)billboardBatchInstance.GetMaterial();
        bool cVar2 = m_material->IsCombinable(*billboardMaterial);
        if (!cVar2) {
            return 2;
        }
        if (!arg3) {
            cVar2 = ((m_vertexAnimation + 80))->empty();
            if (((!cVar2) && (uVar4 = GetFirstSequenceIDFromSource(billboardBatchInstance), uVar4 != 4294967295)) &&
                (lVar7 = ((m_vertexAnimation + 80))->front(), uVar4 != *(uint8_t*)(lVar7 + 4))) {
                return 3;
            }
        }
        if (!arg2)
            goto LAB_100867a45;
        auto this_00 = GetBillboardBatch(billboardBatchInstance);
        uint8_t* puVar13 = field_32;
        BillboardBatch* pBVar8 = (BillboardBatch*)(*puVar13).operator->();
        int iVar5 = pBVar8->GetIndexCount();
        int iVar6 = this_00->GetIndexCount();
        if ((unsigned int)(iVar6 + iVar5) < 65536) {
            if ((char)local_34 == '\0') {
            LAB_100867a36:
                iVar5 = 3;
                bVar1 = true;
            } else {
                pBVar8 = (BillboardBatch*)(*puVar13).operator->();
                iVar5 = pBVar8->GetBoneCount();
                iVar6 = this_00->GetBoneCount();
                if ((unsigned int)(iVar6 + iVar5) < 57) {
                    pBVar8 = (BillboardBatch*)(*puVar13).operator->();
                    iVar5 = pBVar8->GetFaceLabelCount();
                    iVar6 = this_00->GetFaceLabelCount();
                    if ((unsigned int)(iVar6 + iVar5) < 33) {
                        pBVar8 = (BillboardBatch*)(*puVar13).operator->();
                        iVar5 = pBVar8->GetBillboardLabelCount();
                        iVar6 = this_00->GetBillboardLabelCount();
                        if ((unsigned int)(iVar6 + iVar5) < 11)
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
        vector<MaterialInfo, BucketAllocatorEASTL> local_58;
        puVar13 = &field_616;
        lVar7 = puVar13->size();
        uint8_t* this_01 = &billboardBatchInstance.field_616;
        long lVar9 = this_01->size();
        local_58.reserve(lVar7 + lVar9);
        auto pMVar10 = local_58.HeapBeginPtr();
        auto pMVar11 = puVar13->HeapBeginPtr();
        auto pMVar12 = puVar13->end();
        local_58.insert<MaterialInfo*>(pMVar10, pMVar11, pMVar12);
        pMVar10 = (MaterialInfo*)local_58.end();
        pMVar11 = (MaterialInfo*)this_01->HeapBeginPtr();
        pMVar12 = (MaterialInfo*)this_01->end();
        local_58.insert<MaterialInfo const*>(pMVar10, pMVar11, pMVar12);
        local_68.WrapArray<eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>>(local_58);
        uint8_t bVar3 = textureAtlas.CheckMaterialsFit(local_68);
        return (unsigned int)(bVar3 ^ 1) * 9;
    }

    // 0x100867cb0
    void BillboardBatchInstance::Assign(const BillboardBatchInstance& billboardBatchInstance) {
        BillboardMaterial* billboardMaterial;
        BillboardBatch* this_00;
        BillboardBatch* billboardBatch;

        if (this != billboardBatchInstance) {
            DestroyRenderingResources();
            billboardMaterial = (BillboardMaterial*)billboardBatchInstance.GetMaterial();
            *m_material = *billboardMaterial;
            this_00 = (BillboardBatch*)(*field_32).operator->();
            billboardBatch = (BillboardBatch*)*billboardBatchInstance.field_32;
            this_00->Assign(*billboardBatch);
            (*((m_vertexAnimation + 80))) = (*((billboardBatchInstance.m_vertexAnimation + 80)));
        }
    }

    // 0x100867d30
    void BillboardBatchInstance::DestroyRenderingResources() {
        m_material->DestroyRenderingResources();
        ((BillboardBatch*)(*field_32).operator->())->DestroyRenderingResources();
    }

    // 0x100867f20
    void BillboardBatchInstance::Transform(const math::Matrix44T<float>& matrix44) {
        ((BillboardBatch*)(*field_32).operator->())->Transform(matrix44);
    }

    // 0x100867f60
    void BillboardBatchInstance::Translate(const math::Vector3T<float>& vector3) {
        ((BillboardBatch*)(*field_32).operator->())->Translate(vector3);
    }

    // 0x100867fa0
    void BillboardBatchInstance::Rotate(const math::QuaternionT<float>& quaternion, bool arg2) {
        QuaternionT<float>* quaternion_00;

        quaternion_00 = (QuaternionT<float>*)(*field_32).operator->();
        BillboardBatch::Rotate(*quaternion_00, (uint8_t)quaternion);
    }

    // 0x100867fe0
    void BillboardBatchInstance::Rotate90(Rotation90 rotation90, bool arg2) {
        BillboardBatch::Rotate90((*field_32).operator->(), (uint8_t)rotation90);
    }

    // 0x100868020
    void BillboardBatchInstance::Scale(const math::Vector3T<float>& vector3) {
        ((BillboardBatch*)(*field_32).operator->())->Scale(vector3);
    }

    // 0x100868050
    void BillboardBatchInstance::HillChange(HillChange arg1, int arg2,
                                            const Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>& arg3,
                                            const Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>& arg4,
                                            const LocationHelpers::LocationHillChangeData& arg5) {
        ((BillboardBatch*)(*field_32).operator->())->HillChange(param_2, param_3, *param_4, *param_5, *param_6);
    }

    // 0x1008680a0
    void BillboardBatchInstance::Rematerial(const Array<unsigned short>& arg1, const Array<unsigned short>& arg2) {
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
                lVar1 = ((m_vertexAnimation + 80))->HeapBeginPtr();
                lVar4 = ((m_vertexAnimation + 80))->end();
                for (; lVar1 != lVar4; lVar1 = lVar1 + 68) {
                    if (*(unsigned int*)(lVar1 + 8) == uVar5) {
                        *(unsigned int*)(lVar1 + 8) = uVar6;
                    }
                    if (*(unsigned int*)(lVar1 + 12) == uVar5) {
                        *(unsigned int*)(lVar1 + 12) = uVar6;
                    }
                }
                arg1_00 = arg1_00 + 1;
                uVar2 = arg1.end();
            } while (arg1_00 < uVar2);
        }
    }

    // 0x1008681b0
    void BillboardBatchInstance::RematerialSingle(unsigned short arg1, unsigned short arg2) {
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
        long lVar1 = ((m_vertexAnimation + 80))->HeapBeginPtr();
        long lVar2 = ((m_vertexAnimation + 80))->end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 68) {
            if (*(int*)(lVar1 + 8) == iVar4) {
                *(uint32_t*)(lVar1 + 8) = uVar3;
            }
            if (*(int*)(lVar1 + 12) == iVar4) {
                *(uint32_t*)(lVar1 + 12) = uVar3;
            }
        }
    }

    // 0x100868230
    void BillboardBatchInstance::AmbientAdjust(unsigned short arg1) {
        ((BillboardBatch*)(*field_32).operator->())->AmbientAdjust(arg1);
        long lVar1 = ((m_vertexAnimation + 80))->HeapBeginPtr();
        long lVar2 = ((m_vertexAnimation + 80))->end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 68) {
            *(unsigned short*)(lVar1 + 16) = arg1;
        }
    }

    // 0x1008682a0
    void BillboardBatchInstance::TintAdjust(signed char arg1, signed char arg2, signed char arg3, unsigned char arg4) {
        ((BillboardBatch*)(*field_32).operator->())->TintAdjust(arg1, arg2, arg3, arg4);
    }

    // 0x1008682e0
    void BillboardBatchInstance::UpdateForwardPassEffect(DrawableSortKey& drawableSortKey,
                                                         DrawableSortKeyType drawableSortKeyType,
                                                         RenderPassEffect& renderPassEffect, RT7Core& rt7Core,
                                                         const EffectManager& effectManager, float arg6) {
        unsigned long uVar7;
        PlayerDataComparator<oldscape::social::FriendChatUser>* playerDataComparator;
        float fVar8;
        uint8_t auVar9[16];

        BillboardBatch* this_00 = (BillboardBatch*)(*field_32).operator->();
        bool bVar1 = (bool)this_00->IsLowPrecision();
        renderPassEffect.Set(20, bVar1);
        bVar1 = (bool)effectManager.IsEnabled(48);
        renderPassEffect.Set(29, bVar1);
        auVar9 = effectManager.BuildShaderEffectList(renderPassEffect);
        renderPassEffect.field_16 = auVar9[0];
        renderPassEffect.field_17 = auVar9[1];
        renderPassEffect.field_18 = auVar9[2];
        renderPassEffect.field_19 = auVar9[3];
        renderPassEffect.field_20 = auVar9[4];
        renderPassEffect.field_21 = auVar9._5_3_;
        renderPassEffect.field_24 = auVar9._8_8_;
        long lVar3 = rt7Core.GetPostProcessController()->GetCurrentConfig();
        if (*(char*)(lVar3 + 468) == '\0') {
            renderPassEffect.field_16.Set(64, false);
        }
        auto pSVar4 = rt7Core.GetShaderManager();
        auto pVVar5 = BillboardBatchRenderer::GetVertexDecl();
        RenderPassEffect::UpdateShader(renderPassEffect, effectManager, (ShaderType)pSVar4, *5, (RenderPassType)pVVar5,
                                       '\x04');
        uint8_t bVar2 = GetFirstSequenceIDFromSource();
        unsigned long uVar6 = renderPassEffect.GetConstructedShaderId();
        switch (drawableSortKeyType) {
        case 0:
            fVar8 = (float)(-(unsigned int)(0.0 < arg6) & (unsigned int)(arg6 + 0.5));
            uVar7 = (unsigned long)fVar8;
            uVar7 = (unsigned long)(uint8_t)~bVar2 << 16 |
                    ((long)(fVar8 - 9.223372e+18) & (long)uVar7 >> 63 | uVar7) << 24 | uVar6 & 65535;
            uVar6 = 144115188075855872;
            goto LAB_100868596;
        case 1:
            fVar8 = (float)(-(unsigned int)(0.0 < arg6) & (unsigned int)(arg6 + 0.5));
            lVar3 = (long)fVar8;
            playerDataComparator =
                (PlayerDataComparator<
                    oldscape::social::FriendChatUser>*)((unsigned long)bVar2 << 16 |
                                                        (unsigned long)((unsigned int)lVar3 |
                                                                        (unsigned int)(long)(fVar8 - 9.223372e+18) &
                                                                            (unsigned int)(lVar3 >> 63)) *
                                                                    -16777216 +
                                                                72057594021150720 &
                                                            72057594021150720 |
                                                        uVar6 & 65535 | 144115188075855872);
            break;
        case 2:
            playerDataComparator =
                (PlayerDataComparator<oldscape::social::FriendChatUser>*)(((long)(float)(-(unsigned int)(0.0 < arg6) &
                                                                                         (unsigned int)(arg6 + 0.5)) &
                                                                           4294967295U)
                                                                              << 8 |
                                                                          (uVar6 & 65535) << 40 |
                                                                          (unsigned long)(uint8_t)~bVar2 |
                                                                          144115188075855872);
            break;
        case 3:
            fVar8 = (float)(-(unsigned int)(0.0 < arg6) & (unsigned int)(arg6 + 0.5));
            uVar7 = (unsigned long)fVar8;
            uVar7 = ((long)(fVar8 - 9.223372e+18) & (long)uVar7 >> 63 | uVar7) * -256 + 1099511627520;
            uVar6 = (uVar6 & 65535) << 40 | (unsigned long)bVar2 | 144115188075855872;
        LAB_100868596:
            playerDataComparator = (PlayerDataComparator<oldscape::social::FriendChatUser>*)(uVar6 | uVar7);
            break;
        case 4:
            fVar8 = (float)(-(unsigned int)(0.0 < arg6) & (unsigned int)(arg6 + 0.5));
            lVar3 = (long)fVar8;
            playerDataComparator =
                (PlayerDataComparator<
                    oldscape::social::FriendChatUser>*)((uVar6 & 65535) +
                                                        ((unsigned long)(uint8_t)~bVar2 << 16 |
                                                         (unsigned long)((unsigned int)lVar3 |
                                                                         (unsigned int)(long)(fVar8 - 9.223372e+18) &
                                                                             (unsigned int)(lVar3 >> 63))
                                                             << 32) +
                                                        33554432);
            break;
        case 5:
            fVar8 = (float)(-(unsigned int)(0.0 < arg6) & (unsigned int)(arg6 + 0.5));
            uVar7 = (unsigned long)fVar8;
            playerDataComparator =
                (PlayerDataComparator<oldscape::social::FriendChatUser>*)(((unsigned long)bVar2 << 16 |
                                                                           ((long)(fVar8 - 9.223372e+18) &
                                                                                (long)uVar7 >> 63 |
                                                                            uVar7) *
                                                                               -4294967296 |
                                                                           uVar6 & 65535) -
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

    // 0x1008686a0
    void BillboardBatchInstance::CreateRenderingResources() {
        BillboardBatch* pBVar1 = (BillboardBatch*)(*field_32).operator->();
        pBVar1->CreateRenderingResources();
        pBVar1 = (BillboardBatch*)(*field_32).operator->();
        m_material->SetLowPrecision((bool)pBVar1->IsLowPrecision());
    }

    // 0x100868760
    void BillboardBatchInstance::GatherDrawableElements(DrawableQueue& drawableQueue, RT7Core& rt7Core,
                                                        const SceneViewData& sceneViewData,
                                                        const EffectManager& effectManager,
                                                        const eastl::vector_map<int, FaceGroupRenderMasks>* arg5) {
        DrawableGroupType drawableGroupType;
        DrawableSortKey DVar1;
        RenderPassType renderPassType;
        DrawableSortKeyType DVar3;
        AABB* aabb;
        Matrix44T<float>* matrix441;
        Matrix44T<float>* matrix442;
        uint8_t* puVar4;
        long* plVar5;
        long* plVar6;
        RenderPassEffect* renderPassEffect;
        CommandLine* pCVar7;
        BillboardBatch_DE* pBVar8;
        RenderMaterial* this_00;
        vector_map<int, FaceGroupRenderMasks>* apvStackY_488[128];
        uint8_t local_58[16];
        DrawableSortKey local_48;
        float local_34;

        auto renderPassBitSet = sceneViewData.GetRenderPassBits();
        if (m_material->CanRenderInPasses(*renderPassBitSet) != '\0') {
            aabb = (AABB*)GetAABB();
            local_58._8_8_ = m_material;
            matrix441 = (Matrix44T<float>*)field_24->GetMaterial();
            matrix442 = (Matrix44T<float>*)sceneViewData.GetScreen();
            this_00 = (RenderMaterial*)local_58._8_8_;
            local_34 = (float)DstFromCameraPlane(aabb, matrix441, matrix442);
            puVar4 = (uint8_t*)this_00->data();
            plVar5 = (long*)sceneViewData.field_520.HeapBeginPtr();
            plVar6 = (long*)sceneViewData.field_520.end();
            for (; plVar5 != plVar6; plVar5 = plVar5 + 1) {
                if (*plVar5 == 0) {
                    LogAssert("renderPass",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "model/BillboardBatchInstance.cpp",
                              555, nullptr);
                }
                renderPassType = (*plVar5)->GetPos();
                renderPassEffect = (RenderPassEffect*)this_00->GetRenderPassEffect(renderPassType);
                local_48 = math::Vector2T();
                switch (renderPassType) {
                case 3:
                case 9:
                    if (puVar4 == AlphaMode::ALPHA_OPAQUE) {
                        pCVar7 = drawableQueue.GetDrawableGroup(renderPassType, 0);
                        DVar3 = pCVar7->GetPos();
                        UpdateForwardPassEffect(local_48, DVar3, *renderPassEffect, rt7Core, effectManager, local_34);
                        pBVar8 = DrawableElementPool<BillboardBatch_DE>::Create<
                            float&, eastl::vector_map<int, FaceGroupRenderMasks> const*&, BillboardBatchInstance&>(
                            local_34, *(apvStackY_488 + 128), *this);
                        DVar1 = local_48;
                        local_58->unique_ptr<true, void>(pBVar8);
                        drawableQueue.AddDrawable((DrawableSortKey)arg5, *DVar1, local_58, (DrawableGroupType)this, 0);
                        goto LAB_1008689d0;
                    }
                    break;
                case 4:
                    drawableGroupType = (unsigned int)(puVar4 == AlphaMode::ALPHA_BLENDED) * 2;
                    pCVar7 = drawableQueue.GetDrawableGroup(4, drawableGroupType);
                    DVar3 = pCVar7->GetPos();
                    UpdateForwardPassEffect(local_48, DVar3, *renderPassEffect, rt7Core, effectManager, local_34);
                    pBVar8 = DrawableElementPool<BillboardBatch_DE>::Create<
                        float&, eastl::vector_map<int, FaceGroupRenderMasks> const*&, BillboardBatchInstance&>(
                        local_34, *(apvStackY_488 + 128), *this);
                    DVar1 = local_48;
                    local_58->unique_ptr<true, void>(pBVar8);
                    drawableQueue.AddDrawable((DrawableSortKey)arg5, *DVar1, local_58, (DrawableGroupType)this,
                                              drawableGroupType);
                LAB_1008689d0:
                    this_00 = (RenderMaterial*)local_58._8_8_;
                    break;
                default:
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                    "runetek7/model/BillboardBatchInstance.cpp",
                                    592, "Unsupported render pass : %d", (unsigned long)renderPassType);
                case 12:
                case 14:
                    break;
                }
            }
        }
    }

    // 0x100868c50
    void BillboardBatchInstance::RenderDebug(RenderPassType renderPassType, DrawableElement& drawableElement) const {
        Layout* this_00;
        AABB* aabb;
        Matrix44T<float>* matrix44;
        long* plVar1;
        AABB local_48;
        uint8_t local_20[8];

        if ((m_showWorldAABB != '\0') && (renderPassType == 4)) {
            this_00 = (Layout*)(*field_32).operator->();
            aabb = (AABB*)this_00->SSOBeginPtr();
            local_48 = math::AABB(*aabb);
            matrix44 = (Matrix44T<float>*)field_24->GetMaterial();
            local_48.Transform(*matrix44);
            plVar1 = DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar1 != nullptr) {
                new (local_20) oldscape::sidebars::SideBarData(-6250241, 3);
                (**(void (**)(...))(*plVar1 + 72))(plVar1, &local_48, (SideBarData*)local_20);
            }
        }
    }

    // 0x100868cf0
    void BillboardBatchInstance::InitRenderPassEffects() {
        BillboardBatch* pBVar1 = (BillboardBatch*)(*field_32).operator->();
        bool arg2 = (bool)pBVar1->HasBones();
        pBVar1 = (BillboardBatch*)(*field_32).operator->();
        pBVar1->HasJoints();
        BillboardMaterial::InitRenderPassEffects((bool)((char)this + '0'), arg2);
    }

} // namespace jag::graphics
