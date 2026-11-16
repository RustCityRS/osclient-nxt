// libs/oldscape/jagex3/dash3d/RSevenModelLitRenderer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "RSevenModelLitRenderer.h"

namespace jag::oldscape::dash3d {
    // 0x10011c9a0: the linker folded this into ModelAppender::~ModelAppender(), which has identical code
    RSevenModelLitRenderer::ActiveModel::~ActiveModel();

    // 0x10012a760: the linker folded this into eastl::pair<Font const, shared_ptr<jstring::PixfontGeneric> >::~pair(), which has identical code
    RSevenModelLitRenderer::ActiveModel::~ActiveModel();

    // 0x1002efc60, 16 bytes, placed by class name and debug map
    // RSevenModelLitRenderer::SetSpritesJs5(jagex3::Js5*)
    void RSevenModelLitRenderer::SetSpritesJs5(Js5* param_1) {
        m_pSpritesJs5 = param_1;
    }

    // 0x1002efc70, 176 bytes, placed by class name and debug map
    // RSevenModelLitRenderer::ResetMap()
    void RSevenModelLitRenderer::ResetMap() {
        long* plVar1;
        shared_ptr<RenderState::ModelSubmissionRSeven>* this_00;
        long lVar2;
        shared_ptr local_30;

        plVar1 = (long*)OSRenderCore_AudioThread::Instance();
        (((long)plVar1 + *(long*)(*plVar1 + -24)))->HeapBeginPtr();
        this_00 = (shared_ptr<RenderState::ModelSubmissionRSeven>*)eastl::fixed_vector<
            shared_ptr<RenderState::ModelSubmissionRSeven>, 32768ul, true, eastl::allocator>::push_back();
        make_shared<RenderState::ModelSubmissionRSeven>((jag*)&local_30);
        shared_ptr<RenderState::ModelSubmissionRSeven>::operator=(this_00, &local_30);
        local_30.~shared_ptr();
        lVar2 = shared_ptr<RenderState::ModelSubmissionRSeven>::operator->(this_00);
        *(undefined8*)(lVar2 + 128) = 18446744073709551615;
        lVar2 = shared_ptr<RenderState::ModelSubmissionRSeven>::operator->(this_00);
        *(undefined4*)(lVar2 + 156) = 1;
        (&field_16)->clear();
        (&field_72)->clear();
    }

    // 0x1002efe00, 16 bytes, placed by class name and debug map
    // RSevenModelLitRenderer::OnFinishRebuild()
    void RSevenModelLitRenderer::OnFinishRebuild() {}

    // 0x1002efe10, 64 bytes, placed by class name and debug map
    // RSevenModelLitRenderer::OnBeginWorldRender(world*)
    void RSevenModelLitRenderer::OnBeginWorldRender(world* param_1) {
        field_200 = SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)this);
        (&field_224, (PickingHelper*)param_1)->SetupPickingHelper();
        field_8 = param_1;
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
    }

    // 0x1002efe50, 2128 bytes, placed by class name and debug map
    // RSevenModelLitRenderer::SubmitModel(ModelSource&, int, int, int, int, int, int, long long, ModelTypecodeType, EntityHighlight const&, int)
    void RSevenModelLitRenderer::SubmitModel(long* param_1, long param_3_00, int param_3, int param_4, uint param_5,
                                             int param_6, uint param_7, ulong param_8, uint param_10,
                                             EntityHighlight* param_11, undefined4 param_12) {
        undefined1* puVar1;
        ActiveModel* pAVar2;
        undefined2 uVar3;
        short sVar4;
        undefined1 uVar5;
        undefined1 uVar6;
        undefined1 uVar7;
        ulong uVar8;
        char cVar9;
        bool bVar10;
        byte bVar11;
        char cVar12;
        long lVar13;
        long lVar14;
        long* plVar15;
        shared_ptr<RenderState::ModelSubmissionRSeven>* psVar16;
        ModelRSevenLit* pMVar17;
        OperationBuffer* this_00;
        hashtable_iterator_base* extraout_RDX;
        undefined4 uVar18;
        undefined7 uVar20;
        ulong uVar19;
        uint uVar21;
        shared_ptr* psVar22;
        undefined4 uVar23;
        hashtable_iterator<eastl::pair<eastl::stringconst, unsigned int>, false, false> local_168[16];
        hashtable_iterator local_158[16];
        byte local_148;
        EntityHighlight* local_140;
        undefined** local_138[3];
        undefined1 local_120[24];
        ResolvedModel local_108;
        ulong local_90;
        shared_ptr local_88;
        int local_74;
        ModelRSevenLit* local_70;
        ulong local_68;
        undefined4 local_5c;
        ulong local_58;
        long local_50;
        RSevenModelLitRenderer* local_48;
        int local_3c;
        int local_38;
        uint local_34;

        ModelLitRenderer_lastModelLitWorldRenderTotal = ModelLitRenderer_lastModelLitWorldRenderTotal + 1;
        local_90 = param_8;
        local_74 = param_3;
        local_50 = param_3_00;
        local_38 = param_4;
        local_34 = param_5;
        cVar9 = (**(code**)(*param_1 + 48))(param_1);
        local_58 = 0;
        if (cVar9 == '\0') {
            local_58 = (ulong)param_10 << 60;
        }
        local_58 = local_58 | local_90 & 1152921504606846975;
        local_108.field_16 = 0;
        local_108.field_24 = 0;
        local_108.field_0 = 0;
        local_108.field_8 = 0;
        local_48 = this;
        new ((local_120 + 24))
            ResourceList<unsigned long long, render::Texture,
                         eastl::map<unsigned long long, shared_ptr<render::Texture>, eastl::less<unsigned long long>,
                                    eastl::allocator>>::AddResourceResult();
        eastl::hashtable<long long, eastl::pair<long long const, RSevenModelLitRenderer::ActiveModel>, eastl::allocator,
                         eastl::use_first<eastl::pair<long long const, RSevenModelLitRenderer::ActiveModel>>,
                         eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                         true>::emplace<long long&, RSevenModelLitRenderer::ActiveModel>((longlong*)local_158,
                                                                                         (ActiveModel*)&field_16);
        local_3c = -param_6;
        ((local_120 + 24))->~pair();
        eastl::hashtable_iterator<eastl::pair<eastl::stringconst, unsigned int>, false, false>::hashtable_iterator(
            local_168, local_158);
        lVar13 = local_168->HeapBeginPtr();
        if (local_148 == 0) {
            psVar22 = (shared_ptr*)(lVar13 + 16);
            bVar10 = shared_ptr::operator_cast_to_bool(psVar22);
            if (bVar10) {
                lVar14 = shared_ptr<RenderState::ModelSubmissionRSeven>::operator*(
                    (shared_ptr<RenderState::ModelSubmissionRSeven>*)psVar22);
                bVar11 = dash3d::operator!=(param_11, (EntityHighlight*)(lVar14 + 166));
                uVar20 = (undefined7)((ulong)psVar22 >> 8);
                uVar18 = (undefined4)CONCAT71(uVar20, 1);
                if ((((*(char*)(lVar14 + 164) == '\0') && (*(int*)(lVar14 + 160) == (int)local_50)) &&
                     (*(int*)(lVar14 + 156) == local_38)) &&
                    ((*(uint*)(lVar14 + 144) == local_34 && (*(int*)(lVar14 + 148) == local_3c)))) {
                    uVar18 = (undefined4)CONCAT71(uVar20, *(uint*)(lVar14 + 152) != param_7);
                }
                uVar23 = CONCAT31((int3)((uint)uVar18 >> 8), ~(byte)uVar18 & bVar11);
                bVar11 = (byte)uVar18 | bVar11;
                if (*(int*)(lVar13 + 32) == local_48->field_208) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("active.m_frameStamp != m_curFrameStamp",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                              "dash3d/RSevenModelLitRenderer.cpp",
                              101,
                              "The same modelsource (or typecode) was submitted multiple times in the same frame.");
                }
                goto LAB_1002f000a;
            }
        }
        uVar23 = 0;
        bVar11 = local_148;
    LAB_1002f000a:
        *(int*)(lVar13 + 32) = local_48->field_208;
        if (bVar11 != 0) {
            (**(code**)(*param_1 + 16))(&local_88, param_1, param_12);
            bVar10 = operator!=(&local_88, (_func_decltype_nullptr*)0);
            if (bVar10) {
                ModelLitRenderer_lastModelLitUploadTotal = ModelLitRenderer_lastModelLitUploadTotal + 1;
                lVar14 = shared_ptr<ModelLit>::operator->((shared_ptr<ModelLit>*)&local_88);
                *(undefined1*)(lVar13 + 36) = *(undefined1*)(lVar14 + 16);
                plVar15 = (long*)shared_ptr<ModelLit>::operator->((shared_ptr<ModelLit>*)&local_88);
                cVar9 = (**(code**)(*plVar15 + 56))(plVar15);
                if (cVar9 == '\0') {
                    /* WARNING: Subroutine does not return */
                    LogAssert("litPtr->IsForRSeven()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                              "dash3d/RSevenModelLitRenderer.cpp",
                              114, (char*)0);
                }
                local_5c = uVar23;
                local_70 = (ModelRSevenLit*)shared_ptr<ModelLit>::operator*((shared_ptr<ModelLit>*)&local_88);
                pAVar2 = (ActiveModel*)(lVar13 + 8);
                cVar9 = local_70->field_24->OverrideTransform();
                pMVar17 = local_70;
                if (cVar9 == '\0') {
                    uVar19 = (long)((int)local_34 >> 10) | local_50 << 32 | 13835058055282163712U |
                             (long)((int)param_7 >> 10) << 16;
                    if (local_148 == 0) {
                        if (pAVar2->field_0 == 0) {
                            plVar15 = (long*)OSRenderCore_AudioThread::Instance();
                            (((long)plVar15 + *(long*)(*plVar15 + -24)))->HeapBeginPtr();
                            psVar16 = (shared_ptr<RenderState::ModelSubmissionRSeven>*)
                                eastl::fixed_vector<shared_ptr<RenderState::ModelSubmissionRSeven>, 32768ul, true,
                                                    eastl::allocator>::push_back();
                            make_shared<RenderState::ModelSubmissionRSeven>((jag*)(local_120 + 24));
                            shared_ptr<RenderState::ModelSubmissionRSeven>::operator=(psVar16,
                                                                                      (shared_ptr*)(local_120 + 24));
                            ((local_120 + 24))->~shared_ptr();
                            local_68 = local_58;
                            lVar14 = shared_ptr<RenderState::ModelSubmissionRSeven>::operator->(psVar16);
                            *(ulong*)(lVar14 + 128) = local_68;
                        }
                        if ((pAVar2->field_0 != uVar19) && (pAVar2->field_0 != 0)) {
                            /* WARNING: Subroutine does not return */
                            LogAssert(
                                "wasNew || active.m_staticBatchId == staticBatchID || active.m_staticBatchId == 0",
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                                "dash3d/RSevenModelLitRenderer.cpp",
                                144, (char*)0);
                        }
                    }
                    pAVar2->field_0 = uVar19;
                    puVar1 = &local_48->field_72;
                    eastl::hashtable<
                        long long, eastl::pair<long long const, RSevenModelLitRenderer::ActiveStaticBatch>,
                        eastl::allocator,
                        eastl::use_first<eastl::pair<long long const, RSevenModelLitRenderer::ActiveStaticBatch>>,
                        eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                        eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((longlong*)
                                                                                                             local_138);
                    eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                                     eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>,
                                     eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
                    bVar10 =
                        eastl::operator==((eastl*)local_138, (hashtable_iterator_base*)(local_120 + 24), extraout_RDX);
                    if (bVar10) {
                        local_108.field_80 = 0;
                        local_108.field_88 = 0;
                        local_108.field_64 = 0;
                        local_108.field_72._0_1_ = 0;
                        local_108.field_72._1_3_ = 0;
                        local_108.field_72._4_4_ = 0;
                        local_108.field_48 = 0;
                        local_108.field_56 = 0;
                        local_108.m_animationState = 0;
                        local_108.field_40 = 0;
                        local_108.field_16 = 0;
                        local_108.field_24 = 0;
                        local_108.field_0 = 0;
                        local_108.field_8 = 0;
                        local_108.field_96 = 0;
                        new ((local_120 + 24)) ActiveStaticBatch();
                        eastl::hashtable<
                            long long, eastl::pair<long long const, RSevenModelLitRenderer::ActiveStaticBatch>,
                            eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, RSevenModelLitRenderer::ActiveStaticBatch>>,
                            eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                            true>::emplace<long long&, RSevenModelLitRenderer::ActiveStaticBatch>((longlong*)local_120,
                                                                                                  (ActiveStaticBatch*)
                                                                                                      puVar1);
                        local_138[0] = (undefined**)local_120._0_8_;
                        local_138[1] = (undefined**)local_120._8_8_;
                        ((local_120 + 24))->~ActiveStaticBatch();
                        lVar14 = local_138->HeapBeginPtr();
                        *(undefined1*)(lVar14 + 104) = 0;
                        lVar14 = local_138->HeapBeginPtr();
                        *(int*)(lVar14 + 100) = (int)local_50;
                    }
                    uVar19 = local_138->HeapBeginPtr();
                    local_120->Copy();
                    lVar14 = shared_ptr<ModelRSevenLit>::operator->((shared_ptr<ModelRSevenLit>*)local_120);
                    ((lVar14 + 24))->RotateYAxis(local_38);
                    pMVar17 =
                        (ModelRSevenLit*)shared_ptr<ModelRSevenLit>::operator->((shared_ptr<ModelRSevenLit>*)local_120);
                    pMVar17->Translate(local_34, param_6, param_7);
                    eastl::hashtable<long long, eastl::pair<long long const, shared_ptr<ModelLit>>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, shared_ptr<ModelLit>>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::emplace<long long&, shared_ptr<ModelRSevenLit>&>((longlong*)(local_120 +
                                                                                                         24),
                                                                                             (shared_ptr*)(uVar19 +
                                                                                                           40));
                    psVar22 = (shared_ptr*)(lVar13 + 16);
                    bVar10 = operator==(psVar22, (_func_decltype_nullptr*)0);
                    if (bVar10) {
                        make_shared<RenderState::ModelSubmissionRSeven>((jag*)(local_120 + 24));
                        shared_ptr<RenderState::ModelSubmissionRSeven>::operator=(
                            (shared_ptr<RenderState::ModelSubmissionRSeven>*)psVar22, (shared_ptr*)(local_120 + 24));
                        ((local_120 + 24))->~shared_ptr();
                    }
                    local_68 = uVar19;
                    this_00 = (OperationBuffer*)shared_ptr<RenderState::ModelSubmissionRSeven>::operator*(
                        (shared_ptr<RenderState::ModelSubmissionRSeven>*)psVar22);
                    local_140 = (EntityHighlight*)((long)&this_00[10].field_0 + 6);
                    cVar9 = local_140->HasModelHighlight();
                    cVar12 = param_11->HasModelHighlight();
                    plVar15 = (long*)OSRenderCore_AudioThread::Instance();
                    (((long)plVar15 + *(long*)(*plVar15 + -24)))->HeapBeginPtr();
                    uVar19 = local_68;
                    if (cVar12 == '\0') {
                        if (cVar9 != '\0') {
                            psVar16 = (shared_ptr<RenderState::ModelSubmissionRSeven>*)
                                eastl::fixed_vector<shared_ptr<RenderState::ModelSubmissionRSeven>, 32768ul, true,
                                                    eastl::allocator>::push_back();
                            make_shared<RenderState::ModelSubmissionRSeven>((jag*)(local_120 + 24));
                            shared_ptr<RenderState::ModelSubmissionRSeven>::operator=(psVar16,
                                                                                      (shared_ptr*)(local_120 + 24));
                            ((local_120 + 24))->~shared_ptr();
                            uVar8 = local_58;
                            lVar13 = shared_ptr<RenderState::ModelSubmissionRSeven>::operator->(psVar16);
                            *(ulong*)(lVar13 + 128) = uVar8;
                        }
                        this_00->ClearCache();
                        new ((local_120 + 24)) ResolvedModel();
                        ResolvedModel::operator=((ResolvedModel*)(this_00 + 1), (ResolvedModel*)(local_120 + 24));
                        ((local_120 + 24))->~ResolvedModel();
                        *(int*)((long)&this_00[9].field_8 + 4) = local_38;
                        *(int*)&this_00[10].field_0 = (int)local_50;
                        *(uint*)&this_00[9].field_0 = local_34;
                        *(int*)((long)&this_00[9].field_0 + 4) = local_3c;
                        *(uint*)&this_00[9].field_8 = param_7;
                        this_00[8].field_8 = param_8;
                        *(undefined1*)((long)&this_00[10].field_0 + 4) = 0;
                        cVar9 = param_11->field_9;
                        local_140->field_8 = param_11->field_8;
                        local_140->field_9 = cVar9;
                        sVar4 = param_11->field_2;
                        cVar9 = param_11->field_4;
                        uVar5 = param_11->field_5;
                        uVar6 = param_11->field_6;
                        uVar7 = param_11->field_7;
                        local_140->field_0 = param_11->field_0;
                        local_140->field_2 = sVar4;
                        local_140->field_4 = cVar9;
                        local_140->field_5 = uVar5;
                        local_140->field_6 = uVar6;
                        local_140->field_7 = uVar7;
                    } else {
                        uVar3._0_1_ = param_11->field_8;
                        uVar3._1_1_ = param_11->field_9;
                        local_108.field_0._0_2_ = param_11->field_0;
                        local_108.field_0._2_2_ = param_11->field_2;
                        local_108.field_0._4_1_ = param_11->field_4;
                        local_108.field_0._5_1_ = param_11->field_5;
                        local_108.field_0._6_1_ = param_11->field_6;
                        local_108.field_0._7_1_ = param_11->field_7;
                        local_108.field_8 = CONCAT62(local_108.field_8._2_6_, uVar3) | 1024;
                        ResolveAndSendToRenderThread(local_48, local_70, psVar22, local_38, (int)local_50, local_34,
                                                     local_3c, param_7, param_8, local_58,
                                                     (EntityHighlight*)(local_120 + 24));
                        uVar19 = local_68;
                    }
                    if ((char)local_5c == '\0') {
                        *(int*)(uVar19 + 96) = local_48->field_208;
                    }
                    cVar9 = MousePickingHelper::IsActiveEntityTypecode(param_8);
                    if (cVar9 != '\0') {
                        *(undefined1*)(uVar19 + 104) = 1;
                    }
                    local_120->~shared_ptr();
                    pMVar17 = local_70;
                } else {
                    if ((local_148 == 0) && (pAVar2->field_0 != 0)) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("wasNew || active.m_staticBatchId == 0",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                  "jagex3/dash3d/RSevenModelLitRenderer.cpp",
                                  119, (char*)0);
                    }
                    *(undefined8*)(lVar13 + 8) = 0;
                    ResolveAndSendToRenderThread(local_48, local_70, (shared_ptr*)(lVar13 + 16), local_38,
                                                 (int)local_50, local_34, local_3c, param_7, param_8, local_58,
                                                 param_11);
                    TestModelMouseIntersection(local_48, pAVar2);
                }
                pMVar17->CalcBoundingCylinder();
                *(int*)(param_1 + 1) = pMVar17->field_8;
            }
            local_88.~shared_ptr();
        }
        cVar9 = param_11->HasTileHighlight();
        if (cVar9 != '\0') {
            cVar9 = param_11->SnapToGrid();
            if (cVar9 == '\0') {
                uVar21 = local_34 + (uint)(byte)param_11->field_5 * -64;
                param_7 = param_7 + (uint)(byte)param_11->field_6 * -64;
            } else {
                uVar21 = local_34 & 127;
                param_7 = param_7 & 127;
            }
            SubmitTileHighlight(local_48, uVar21, param_7, local_74, param_11);
        }
    }

    // 0x1002f0700, 16 bytes, inline, placed by debug map only (low confidence)
    // operator!=(EntityHighlight const&, EntityHighlight const&)
    /* TEMPNAMEPLACEHOLDERVALUE(EntityHighlight const&,
   EntityHighlight const&) */

    byte operator!=(EntityHighlight* param_1, EntityHighlight* param_2) {
        return operator==(param_1, param_2) ^ 1;
    }

    // 0x1002f0720, 160 bytes, placed by class name
    // RSevenModelLitRenderer::ResolveAndSendToRenderThread(ModelRSevenLit const&, shared_ptr<RenderState::ModelSubmissionRSeven>&, int, int, int, int, int, long long, long long, EntityHighlight const&)
    void RSevenModelLitRenderer::ResolveAndSendToRenderThread(ModelRSevenLit* param_1, shared_ptr* param_2, int param_3,
                                                              int param_4, int param_5, int param_6, int param_7,
                                                              longlong param_8, longlong param_9,
                                                              EntityHighlight* param_10) {
        long* plVar1;
        long lVar2;

        plVar1 = (long*)OSRenderCore_AudioThread::Instance();
        lVar2 = (((long)plVar1 + *(long*)(*plVar1 + -24)))->HeapBeginPtr();
        ResolveAndUpdateSubmission(this, param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
                                   param_9, param_10);
        eastl::fixed_vector<shared_ptr<RenderState::ModelSubmissionRSeven>, 32768ul, true, eastl::allocator>::push_back(
            (shared_ptr*)(lVar2 + 17563848));
    }

    // 0x1002f07c0, 560 bytes, placed by class name
    // RSevenModelLitRenderer::TestModelMouseIntersection(RSevenModelLitRenderer::ActiveModel const&)
    void RSevenModelLitRenderer::TestModelMouseIntersection(ActiveModel* param_1) {
        undefined1* this_00;
        bool bVar1;
        char cVar2;
        long lVar3;
        shared_ptr* psVar4;
        ModelSubmissionRSeven* pMVar5;
        shared_ptr<jag::graphics::Model>* this_01;
        NXTPixToolkit* this_02;
        AABB* pAVar6;
        Vector3T* pVVar7;
        vector* pvVar8;
        Vector3T* pVVar9;
        undefined1 local_d8[32];
        undefined1 local_b8[88];
        Vector3T local_60[16];
        ResolvedModel* local_48;
        Vector3T<int> local_40[8];
        int local_38[2];

        this_00 = &param_1->field_8;
        bVar1 = this_00->operator_cast_to_bool();
        if (bVar1) {
            lVar3 = shared_ptr<RenderState::ModelSubmissionRSeven>::operator->(
                (shared_ptr<RenderState::ModelSubmissionRSeven>*)this_00);
            psVar4 = (shared_ptr*)((lVar3 + 16))->GetModel();
            bVar1 = operator!=(psVar4, (_func_decltype_nullptr*)0);
            if (bVar1) {
                bVar1 = this_00->operator_cast_to_bool();
                if (bVar1) {
                    pMVar5 = (ModelSubmissionRSeven*)shared_ptr<RenderState::ModelSubmissionRSeven>::operator*(
                        (shared_ptr<RenderState::ModelSubmissionRSeven>*)this_00);
                    cVar2 = MousePickingHelper::IsMousePickingEnabled();
                    if (cVar2 != '\0') {
                        cVar2 = MousePickingHelper::IsActiveEntityTypecode(*(longlong*)&pMVar5->field_136);
                        if (cVar2 != '\0') {
                            this_01 = (shared_ptr<jag::graphics::Model>*)pMVar5->field_16->GetModel();
                            this_02 = (NXTPixToolkit*)shared_ptr<jag::graphics::Model>::operator->(this_01);
                            pAVar6 = (AABB*)this_02->GetScreen();
                            new (local_d8) jag::math::AABB(pAVar6);
                            local_48 = (ResolvedModel*)pMVar5->field_16;
                            local_b8->GetLocalTransform();
                            local_d8->Transform(local_b8);
                            local_b8._0_8_ = local_d8->GetCentrePos();
                            pVVar9 = (Vector3T*)local_b8;
                            jag::math::Vector3T<int>::Vector3T<float>((Vector3T<int>*)(local_b8 + 72), pVVar9);
                            pVVar7 = (Vector3T*)local_d8->GetScreen();
                            pvVar8 = local_d8->SSOBeginPtr(pVVar9);
                            local_60._0_8_ = jag::math::operator-(pVVar7, (Vector3T*)pvVar8);
                            local_b8._0_8_ = jag::math::operator*(0.5, local_60);
                            jag::math::Vector3T<int>::Vector3T<float>(local_40, (Vector3T*)local_b8);
                            MousePickingHelper::AdjustAABBRadiiForPicking((int*)local_40, local_38,
                                                                          (bool)param_1->field_28);
                            new (local_b8) ModelLit::AABB(local_b8._72_8_, local_b8._80_4_, local_40);
                            cVar2 = MousePickingHelper::IsMouseIntersectingModelAABB(
                                (AABB*)local_b8, *(int*)&pMVar5->field_144, *(int*)&pMVar5->field_148,
                                *(int*)&pMVar5->field_152, false);
                            if (cVar2 != '\0') {
                                cVar2 = MousePickingHelper::IsAABBWithinMaxViewDistanceFromCamera(
                                    (AABB*)local_b8, *(int*)&pMVar5->field_144, *(int*)&pMVar5->field_152);
                                if (cVar2 != '\0') {
                                    if (param_1->field_28 == '\0') {
                                        TestModelMouseIntersectionFine((RSevenModelLitRenderer*)this, local_48, pMVar5);
                                    } else {
                                        MousePickingHelper::AddPickingEntity(*(longlong*)&pMVar5->field_136);
                                    }
                                }
                            }
                        }
                    }
                }
                return;
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssert("queued.m_lastSubmission && (queued.m_lastSubmission->m_model.GetModel() != nullptr)",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                  "RSevenModelLitRenderer.cpp",
                  554, (char*)0);
    }

    // 0x1002f0b40, 784 bytes, placed by class name
    // RSevenModelLitRenderer::SubmitTileHighlight(int, int, int, EntityHighlight const&)
    void RSevenModelLitRenderer::SubmitTileHighlight(int param_1, int param_2, int param_3, EntityHighlight* param_4) {
        undefined1 uVar1;
        byte bVar2;
        char cVar3;
        bool bVar4;
        long lVar5;
        shared_ptr* psVar6;
        long* plVar7;
        ModelRSevenLit* pMVar8;
        hashtable_iterator_base* extraout_RDX;
        RSevenModelLitRenderer* pRVar9;
        int iVar10;
        undefined1 local_e8[16];
        TileHighlightGenerator local_d8;
        ulong local_88;
        longlong local_80;
        undefined8 uStack_78;
        longlong local_68;
        undefined8 uStack_60;
        ulong local_58;
        EntityHighlight local_40;

        cVar3 = param_4->HasTileHighlight();
        if (cVar3 != '\0') {
            if (field_8 == (world*)0) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_worldCurrentlyRendering",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                          "dash3d/RSevenModelLitRenderer.cpp",
                          301, (char*)0);
            }
            local_40.field_8 = param_4->field_8;
            local_40.field_9 = param_4->field_9;
            local_40.field_0 = param_4->field_0;
            local_40.field_2 = param_4->field_2;
            local_40.field_4 = param_4->field_4;
            local_40._5_1_ = param_4->field_5;
            local_40.field_6 = param_4->field_6;
            local_40._7_1_ = param_4->field_7;
            local_40.TransferTileOptionsToModel();
            local_40._8_2_ = local_40._8_2_ | 1024;
            uVar1 = local_40._5_1_;
            bVar2 = local_40.field_6;
            local_58 = (long)param_2 | (long)param_1 << 16 | 14987979559889010688U | (ulong)local_40.field_6 << 32 |
                       (ulong)(byte)local_40._5_1_ << 40 | (ulong)(uint)param_3 << 48;
            local_88 = (ulong)(uint)param_3;
            eastl::hashtable<
                long long, eastl::pair<long long const, RSevenModelLitRenderer::ActiveModel>, eastl::allocator,
                eastl::use_first<eastl::pair<long long const, RSevenModelLitRenderer::ActiveModel>>,
                eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find(&local_68);
            eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                             eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>,
                             eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
            bVar4 = eastl::operator!=((eastl*)&local_68, (hashtable_iterator_base*)&local_d8, extraout_RDX);
            if (bVar4) {
                lVar5 = local_68.HeapBeginPtr();
                bVar4 = ((lVar5 + 16))->operator_cast_to_bool();
                pRVar9 = (RSevenModelLitRenderer*)this;
                if (bVar4) {
                    lVar5 = local_68.HeapBeginPtr();
                    lVar5 = shared_ptr<RenderState::ModelSubmissionRSeven>::operator->(
                        (shared_ptr<RenderState::ModelSubmissionRSeven>*)(lVar5 + 16));
                    cVar3 = dash3d::operator==((EntityHighlight*)(lVar5 + 166), &local_40);
                    if (cVar3 != '\0') {
                        iVar10 = pRVar9->field_208;
                        lVar5 = local_68.HeapBeginPtr();
                        *(int*)(lVar5 + 32) = iVar10;
                        return;
                    }
                }
            } else {
                local_d8.field_16 = 0;
                local_d8._20_4_ = 0;
                local_d8.field_24 = (world*)0;
                local_d8.field_0 = 0;
                local_d8.field_4 = 0;
                local_d8.field_8 = 0;
                local_d8.field_12 = 0;
                new (&local_d8)
                    ResourceList<unsigned long long, render::Texture,
                                 eastl::map<unsigned long long, shared_ptr<render::Texture>,
                                            eastl::less<unsigned long long>, eastl::allocator>>::AddResourceResult();
                eastl::hashtable<
                    long long, eastl::pair<long long const, RSevenModelLitRenderer::ActiveModel>, eastl::allocator,
                    eastl::use_first<eastl::pair<long long const, RSevenModelLitRenderer::ActiveModel>>,
                    eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                    eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                    true>::emplace<long long&, RSevenModelLitRenderer::ActiveModel>(&local_80, (ActiveModel*)&field_16);
                local_d8.~pair();
                local_68 = local_80;
                uStack_60 = uStack_78;
                pRVar9 = (RSevenModelLitRenderer*)this;
            }
            lVar5 = local_68.HeapBeginPtr();
            *(int*)(lVar5 + 32) = pRVar9->field_208;
            *(undefined8*)(lVar5 + 8) = 0;
            new (local_e8) GridRect(param_1, param_2, (uint)(byte)uVar1 << 7, (uint)bVar2 << 7);
            iVar10 = (int)local_88;
            new (&local_d8) TileHighlightGenerator(local_e8, local_88 & 4294967295, pRVar9->field_8);
            psVar6 = (shared_ptr*)local_d8.Generate();
            new (&local_80) shared_ptr<Decor>(psVar6);
            local_d8.~TileHighlightGenerator();
            plVar7 = (long*)shared_ptr<ModelLit>::operator->((shared_ptr<ModelLit>*)&local_80);
            pRVar9 = (RSevenModelLitRenderer*)this;
            cVar3 = (**(code**)(*plVar7 + 56))(plVar7);
            if (cVar3 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("modelForHighlight->IsForRSeven()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                          "dash3d/RSevenModelLitRenderer.cpp",
                          327, (char*)0);
            }
            pMVar8 = (ModelRSevenLit*)shared_ptr<ModelLit>::operator*((shared_ptr<ModelLit>*)&local_80);
            ResolveAndSendToRenderThread(pRVar9, pMVar8, (shared_ptr*)(lVar5 + 16), 0, iVar10, 0, 0, 0, 0, local_58,
                                         &local_40);
            local_80.~shared_ptr();
        }
    }

    // 0x1002f0e50, 272 bytes, placed by class name
    // RSevenModelLitRenderer::SubmitLightSource(PointLightSource&, int, int, int, long long, int)
    void RSevenModelLitRenderer::SubmitLightSource(PointLightSource* param_1, int param_2, int param_3, int param_4,
                                                   longlong param_5, int param_6) {
        long* plVar2;
        PointLight* this_00;
        PointLight* pPVar3;
        ColourHSL local_60;
        shared_ptr local_50;
        longlong local_40;

        (**(code**)param_1->field_0)(&local_50, param_1, param_6);
        if (shared_ptr::operator_cast_to_bool(&local_50)) {
            local_40 = param_5;
            (**(code**)(param_1->field_0 + 8))(param_1, &local_40);
            plVar2 = (long*)OSRenderCore_AudioThread::Instance();
            (((long)plVar2 + *(long*)(*plVar2 + -24)))->HeapBeginPtr();
            this_00 = (PointLight*)
                eastl::fixed_vector<RenderState::LightSubmissionRSeven, 255ul, true, eastl::allocator>::push_back();
            pPVar3 = (PointLight*)shared_ptr<jag::graphics::PointLight>::operator*(
                (shared_ptr<jag::graphics::PointLight>*)&local_50);
            jag::graphics::PointLight::operator=(this_00, pPVar3);
            new (&local_60) jag::math::ColourHSL((float)param_2, (float)param_3, (float)param_4);
            jag::math::Vector3T<float>::operator+=((Vector3T<float>*)this_00, (Vector3T*)&local_60);
            this_00->field_4 = this_00->field_4 ^ 2147483648;
            this_00[1].field_4 = (undefined4)local_40;
            this_00[1].field_8 = local_40._4_4_;
            (&field_160, (LightSubmissionRSeven*)this_00)->push_back();
        }
        local_50.~shared_ptr();
    }

    // 0x1002f1070, 480 bytes, placed by class name
    // RSevenModelLitRenderer::ResolveAndUpdateSubmission(ModelRSevenLit const&, shared_ptr<RenderState::ModelSubmissionRSeven>&, int, int, int, int, int, long long, long long, EntityHighlight const&)
    void RSevenModelLitRenderer::ResolveAndUpdateSubmission(ModelRSevenLit* param_1, shared_ptr* param_2, int param_3,
                                                            int param_4, int param_5, int param_6, int param_7,
                                                            longlong param_8, longlong param_9,
                                                            EntityHighlight* param_10) {
        bool bVar1;
        undefined1 uVar2;
        OperationBuffer* this_00;
        OperationBuffer* pOVar3;
        ResolvedModel* this_01;
        shared_ptr* psVar4;
        shared_ptr<jag::graphics::Model>* this_02;
        Model* pMVar5;
        shared_ptr local_58;

        this_00 = (OperationBuffer*)param_1->field_24->GetOperationBuffer();
        pOVar3 = (OperationBuffer*)0;
        bVar1 = operator!=(param_2, (_func_decltype_nullptr*)0);
        if (bVar1) {
            pOVar3 = (OperationBuffer*)shared_ptr<RenderState::ModelSubmissionRSeven>::operator->(
                (shared_ptr<RenderState::ModelSubmissionRSeven>*)param_2);
        }
        this_01 = (ResolvedModel*)this_00->Resolve(pOVar3);
        psVar4 = (shared_ptr*)this_01->GetModel();
        bVar1 = operator!=(psVar4, (_func_decltype_nullptr*)0);
        if (!bVar1) {
            /* WARNING: Subroutine does not return */
            LogAssert("model.GetModel() != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "RSevenModelLitRenderer.cpp",
                      270, (char*)0);
        }
        psVar4 = (shared_ptr*)this_01->TryGetUploadableModel();
        bVar1 = shared_ptr::operator_cast_to_bool(psVar4);
        if (!bVar1) {
            this_02 = (shared_ptr<jag::graphics::Model>*)this_01->GetUploadableModel();
            pMVar5 = (Model*)shared_ptr<jag::graphics::Model>::operator*(this_02);
            UploadModelTextures((RSevenModelLitRenderer*)this, pMVar5);
        }
        make_shared<RenderState::ModelSubmissionRSeven>((jag*)&local_58);
        shared_ptr<RenderState::ModelSubmissionRSeven>::operator=(
            (shared_ptr<RenderState::ModelSubmissionRSeven>*)param_2, &local_58);
        local_58.~shared_ptr();
        pOVar3 = (OperationBuffer*)shared_ptr<RenderState::ModelSubmissionRSeven>::operator*(
            (shared_ptr<RenderState::ModelSubmissionRSeven>*)param_2);
        OperationBuffer::operator=(pOVar3, this_00);
        ResolvedModel::operator=((ResolvedModel*)(pOVar3 + 1), this_01);
        psVar4 = (shared_ptr*)((pOVar3 + 1))->GetModel();
        bVar1 = operator!=(psVar4, (_func_decltype_nullptr*)0);
        if (!bVar1) {
            /* WARNING: Subroutine does not return */
            LogAssert("submission.m_model.GetModel() != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "RSevenModelLitRenderer.cpp",
                      282, (char*)0);
        }
        uVar2 = param_1->field_24->OverrideTransform();
        *(undefined1*)((long)&pOVar3[10].field_0 + 4) = uVar2;
        *(int*)((long)&pOVar3[9].field_8 + 4) = param_3;
        *(int*)&pOVar3[10].field_0 = param_4;
        *(int*)&pOVar3[9].field_0 = param_5;
        *(int*)((long)&pOVar3[9].field_0 + 4) = param_6;
        *(int*)&pOVar3[9].field_8 = param_7;
        pOVar3[8].field_8 = param_8;
        pOVar3[8].field_0 = (ref_counter_base*)param_9;
        *(undefined8*)((long)&pOVar3[10].field_0 + 6) = *(undefined8*)param_10;
        *(undefined2*)((long)&pOVar3[10].field_8 + 6) = *(undefined2*)&param_10->field_8;
    }

    // 0x1002f1260, 784 bytes, placed by class name
    // RSevenModelLitRenderer::UploadModelTextures(jag::graphics::Model const&)
    void RSevenModelLitRenderer::UploadModelTextures(Model* param_1) {
        int iVar1;
        bool bVar2;
        long* plVar3;
        Layout* this_00;
        unique_ptr<jag::graphics::GeometryBatchInstance,
                   MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_01;
        GeometryBatchInstance* this_02;
        int* piVar4;
        undefined8* puVar5;
        long lVar6;
        int* piVar7;
        undefined* puVar8;
        hashtable_iterator_base* extraout_RDX;
        shared_ptr* psVar9;
        eastl local_2d0[24];
        shared_ptr local_2b8;
        shared_ptr local_2a8;
        RSevenModelLitRenderer* local_298;
        int* local_290;
        int* local_288;
        unique_ptr<jag::graphics::GeometryBatchInstance,
                   MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>* local_280;
        unique_ptr<jag::graphics::GeometryBatchInstance,
                   MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>* local_278;
        shared_ptr* local_270;
        int local_264;
        fixed_vector<int, 128ul, true, eastl::allocator> local_260[552];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_298 = this;
        plVar3 = (long*)OSRenderCore_AudioThread::Instance();
        local_270 = (shared_ptr*)(((long)plVar3 + *(long*)(*plVar3 + -24)))->HeapBeginPtr();
        this_00 = (Layout*)param_1->GetBatchList();
        this_01 = (unique_ptr<jag::graphics::GeometryBatchInstance,
                              MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(this_00);
        local_278 =
            (unique_ptr<jag::graphics::GeometryBatchInstance,
                        MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>*)this_00->end();
        if (this_01 != local_278) {
            local_270 = local_270 + 1131534;
            do {
                eastl::fixed_vector<int, 128ul, true, eastl::allocator>::fixed_vector(local_260);
                local_280 = this_01;
                this_02 = (GeometryBatchInstance*)
                              std::unique_ptr<jag::graphics::GeometryBatchInstance,
                                              MakeUniquePool<jag::graphics::GeometryBatchInstance,
                                                             3072>::UniquePoolDeleter>::operator->(this_01);
                this_02->BuildMaterialIDListFromSource(local_260);
                piVar4 = (int*)local_260->HeapBeginPtr();
                local_288 = (int*)local_260->end();
                if (piVar4 != local_288) {
                    do {
                        iVar1 = *piVar4;
                        if (iVar1 != -1) {
                            puVar5 = (undefined8*)shared_ptr<TextureProvider>::operator->(
                                (shared_ptr<TextureProvider>*)&Pix3D::m_textureProvider);
                            (**(code**)*puVar5)(&local_2b8, puVar5, iVar1);
                            bVar2 = operator!=(&local_2b8, (_func_decltype_nullptr*)0);
                            local_290 = piVar4;
                            if (bVar2) {
                                lVar6 = shared_ptr<Texture>::operator->((shared_ptr<Texture>*)&local_2b8);
                                piVar4 = (int*)((lVar6 + 56))->data();
                                piVar7 = (int*)((lVar6 + 56))->end();
                                for (; piVar4 != piVar7; piVar4 = piVar4 + 1) {
                                    local_264 = *piVar4;
                                    eastl::hashtable<int, eastl::pair<int const, shared_ptr<ChatLine>>,
                                                     eastl::allocator,
                                                     eastl::use_first<eastl::pair<int const, shared_ptr<ChatLine>>>,
                                                     eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false,
                                                     true, true>::find((int*)local_2d0);
                                    eastl::hashtable<
                                        int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                                        eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>,
                                        eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                        eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                        true>::end();
                                    psVar9 = &local_2a8;
                                    bVar2 = eastl::operator==(local_2d0, (hashtable_iterator_base*)&local_2a8,
                                                              extraout_RDX);
                                    if (bVar2) {
                                        new (&local_2a8) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(psVar9);
                                        puVar8 =
                                            (undefined*)(local_298->m_pSpritesJs5, &local_2a8, local_264)->GetFile();
                                        if (puVar8 != DataStatus::READY) {
                                            /* WARNING: Subroutine does not return */
                                            LogAssert(
                                                "e == DataStatus::READY",
                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                                "oldscape/jagex3/dash3d/RSevenModelLitRenderer.cpp",
                                                538, (char*)0);
                                        }
                                        if (puVar8 == DataStatus::READY) {
                                            eastl::hashtable<
                                                int,
                                                eastl::pair<int const, shared_ptr<PacketJ<
                                                                           Array<unsigned char, eastl::allocator>>>>,
                                                eastl::allocator,
                                                eastl::use_first<eastl::pair<
                                                    int const,
                                                    shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>>>,
                                                eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                                eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                                true>::
                                                emplace<int&,
                                                        shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>>(
                                                    (int*)local_2d0, local_270);
                                        }
                                        local_2a8.~shared_ptr();
                                    }
                                }
                            }
                            local_2b8.~shared_ptr();
                            piVar4 = local_290;
                        }
                        piVar4 = piVar4 + 1;
                    } while (piVar4 != local_288);
                }
                eastl::fixed_vector<int, 128ul, true, eastl::allocator>::~fixed_vector(local_260);
                this_01 = local_280 + 8;
            } while (this_01 != local_278);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1002f1740, 2240 bytes, placed by class name
    // RSevenModelLitRenderer::OnEndWorldRender()
    void RSevenModelLitRenderer::OnEndWorldRender() {
        undefined1* puVar1;
        int* piVar2;
        undefined1* this_00;
        undefined8 uVar3;
        RSevenModelLitRenderer* pRVar4;
        bool bVar5;
        char cVar6;
        uint uVar7;
        long* plVar8;
        long lVar9;
        shared_ptr<RenderState::ModelSubmissionRSeven>* psVar10;
        undefined8* puVar11;
        long lVar12;
        longlong* plVar13;
        NXTPixToolkit* pNVar14;
        ModelRSevenLit* pMVar15;
        OperationBuffer* pOVar16;
        shared_ptr<jag::graphics::Model>* this_01;
        AABB* pAVar17;
        long lVar18;
        vector* pvVar19;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* extraout_RDX_01;
        hashtable_iterator_base* extraout_RDX_02;
        hashtable_iterator_base* extraout_RDX_03;
        hashtable_iterator_base* extraout_RDX_04;
        hashtable_iterator_base* phVar21;
        hashtable_iterator_base* extraout_RDX_05;
        hashtable_iterator_base* extraout_RDX_06;
        hashtable_iterator_base* extraout_RDX_07;
        hashtable_iterator_base* extraout_RDX_08;
        eastl* this_02;
        NXTRenderer** this_03;
        int iVar22;
        Layout local_1e0[16];
        undefined8 local_1d0[2];
        undefined8 local_1c0;
        undefined8 local_1b8;
        shared_ptr local_1b0;
        undefined8 local_1a0;
        undefined1* local_198;
        PickingHelper* local_190;
        ModelAppendList* local_188[2];
        undefined1 local_178[16];
        undefined1 local_168[40];
        long local_140;
        hashtable_iterator_base local_138[16];
        undefined1* local_128;
        RSevenModelLitRenderer* local_120;
        NXTPixToolkit* local_118;
        ResolvedModel* local_110;
        ResolvedModel local_108;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        iVar22 = field_208;
        plVar8 = (long*)OSRenderCore_AudioThread::Instance();
        lVar9 = (((long)plVar8 + *(long*)(*plVar8 + -24)))->HeapBeginPtr();
        DeleteUnusedOverlays(this);
        eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        local_168._32_8_ = &field_16;
        eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                         eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                         eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
        local_140 = lVar9 + 17563848;
        local_128 = &field_72;
        local_120 = this;
        bVar5 = eastl::operator!=((eastl*)local_168, (hashtable_iterator_base*)&local_108, extraout_RDX);
        if (bVar5) {
            local_110 = (ResolvedModel*)CONCAT44(local_110._4_4_, iVar22);
            do {
                lVar9 = local_168->HeapBeginPtr();
                if (*(int*)(lVar9 + 32) == iVar22) {
                    eastl::hashtable_iterator<
                        eastl::pair<unsigned int const, eastl::vector<eastl::string, eastl::allocator>>, false, false>::
                    operator++((hashtable_iterator<
                                eastl::pair<unsigned int const, eastl::vector<eastl::string, eastl::allocator>>, false,
                                false>*)local_168);
                    phVar21 = extraout_RDX_00;
                } else {
                    psVar10 = (shared_ptr<RenderState::ModelSubmissionRSeven>*)eastl::fixed_vector<
                        shared_ptr<RenderState::ModelSubmissionRSeven>, 32768ul, true, eastl::allocator>::push_back();
                    make_shared<RenderState::ModelSubmissionRSeven>((jag*)&local_1b0);
                    shared_ptr<RenderState::ModelSubmissionRSeven>::operator=(psVar10, &local_1b0);
                    local_1b0.~shared_ptr();
                    puVar11 = (undefined8*)local_168->HeapBeginPtr();
                    uVar3 = *puVar11;
                    lVar12 = shared_ptr<RenderState::ModelSubmissionRSeven>::operator->(psVar10);
                    *(undefined8*)(lVar12 + 128) = uVar3;
                    iVar22 = (int)local_110;
                    if (*(long*)(lVar9 + 8) != 0) {
                        eastl::hashtable<
                            long long, eastl::pair<long long const, RSevenModelLitRenderer::ActiveStaticBatch>,
                            eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, RSevenModelLitRenderer::ActiveStaticBatch>>,
                            eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                            true>::find((longlong*)&local_1b0);
                        eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                                         eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>,
                                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                         true>::end();
                        bVar5 = eastl::operator!=((eastl*)&local_1b0, local_138, extraout_RDX_01);
                        if (bVar5) {
                            lVar9 = local_1b0.HeapBeginPtr();
                            plVar13 = (longlong*)local_168->HeapBeginPtr();
                            lVar9 = ((lVar9 + 40))->erase(plVar13);
                            if (lVar9 == 0) {
                                /* WARNING: Subroutine does not return */
                                LogAssert("nRemoved > 0",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                          "oldscape/jagex3/dash3d/RSevenModelLitRenderer.cpp",
                                          358, (char*)0);
                            }
                            iVar22 = local_120->field_208;
                            lVar9 = local_1b0.HeapBeginPtr();
                            *(int*)(lVar9 + 96) = iVar22;
                        }
                        iVar22 = (int)local_110;
                    }
                    new (&local_1b0)
                        eastl::hashtable_iterator<eastl::pair<eastl::stringconst, unsigned int>, false, false>(
                            local_168);
                    eastl::hashtable_iterator<
                        eastl::pair<unsigned int const, eastl::vector<eastl::string, eastl::allocator>>, false, false>::
                    operator++((hashtable_iterator<
                                eastl::pair<unsigned int const, eastl::vector<eastl::string, eastl::allocator>>, false,
                                false>*)local_168);
                    new (local_1d0)
                        eastl::hashtable_iterator<eastl::pair<eastl::stringconst, unsigned int>, false, false>(
                            (hashtable_iterator*)&local_1b0);
                    eastl::hashtable<
                        long long, eastl::pair<long long const, RSevenModelLitRenderer::ActiveModel>, eastl::allocator,
                        eastl::use_first<eastl::pair<long long const, RSevenModelLitRenderer::ActiveModel>>,
                        eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                        eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                        true>::erase(local_138, local_168._32_8_, local_1d0[0]);
                    phVar21 = extraout_RDX_02;
                }
                bVar5 = eastl::operator!=((eastl*)local_168, (hashtable_iterator_base*)&local_108, phVar21);
            } while (bVar5);
        }
        eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        this_02 = (eastl*)local_138;
        eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                         eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                         eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
        bVar5 = eastl::operator!=(this_02, (hashtable_iterator_base*)&local_1b0, extraout_RDX_03);
        if (bVar5) {
            local_190 = (PickingHelper*)&local_120->field_224;
            do {
                pNVar14 = (NXTPixToolkit*)local_138->HeapBeginPtr();
                puVar11 = (undefined8*)local_138->HeapBeginPtr();
                local_110 = (ResolvedModel*)*puVar11;
                this_00 = &pNVar14->field_40;
                lVar9 = this_00->size();
                if (lVar9 == 0) {
                    psVar10 = (shared_ptr<RenderState::ModelSubmissionRSeven>*)eastl::fixed_vector<
                        shared_ptr<RenderState::ModelSubmissionRSeven>, 32768ul, true, eastl::allocator>::push_back();
                    make_shared<RenderState::ModelSubmissionRSeven>((jag*)&local_108);
                    shared_ptr<RenderState::ModelSubmissionRSeven>::operator=(psVar10, (shared_ptr*)&local_108);
                    local_108.~shared_ptr();
                    lVar9 = shared_ptr<RenderState::ModelSubmissionRSeven>::operator->(psVar10);
                    *(ResolvedModel**)(lVar9 + 128) = local_110;
                    new (&local_108)
                        eastl::hashtable_iterator<eastl::pair<eastl::stringconst, unsigned int>, false, false>(
                            local_138);
                    eastl::hashtable_iterator<eastl::pair<long long const, RSevenModelLitRenderer::ActiveStaticBatch>,
                                              false, false>::
                    operator++(
                        (hashtable_iterator<eastl::pair<long long const, RSevenModelLitRenderer::ActiveStaticBatch>,
                                            false, false>*)local_138);
                    new (&local_1c0)
                        eastl::hashtable_iterator<eastl::pair<eastl::stringconst, unsigned int>, false, false>(
                            (hashtable_iterator*)&local_108);
                    eastl::hashtable<
                        long long, eastl::pair<long long const, RSevenModelLitRenderer::ActiveStaticBatch>,
                        eastl::allocator,
                        eastl::use_first<eastl::pair<long long const, RSevenModelLitRenderer::ActiveStaticBatch>>,
                        eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                        eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::erase(local_168,
                                                                                                          local_128,
                                                                                                          local_1c0,
                                                                                                          local_1b8);
                    phVar21 = extraout_RDX_06;
                } else {
                    if (*(int*)&pNVar14->field_96 == local_120->field_208) {
                        *(undefined4*)&pNVar14->field_96 = 0;
                        eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                                         eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                                         eastl::equal_to<eastl::string>, eastl::hash<eastl::string>,
                                         eastl::mod_range_hashing, eastl::default_ranged_hash,
                                         eastl::prime_rehash_policy, false, true, true>::begin();
                        lVar9 = local_188->HeapBeginPtr();
                        ((lVar9 + 8))->end();
                        local_108.Copy();
                        this_03 = &pNVar14->field_8;
                        local_118 = pNVar14;
                        shared_ptr<ModelLit>::operator=((shared_ptr<ModelLit>*)this_03, (shared_ptr*)&local_108);
                        local_108.~shared_ptr();
                        plVar8 = (long*)shared_ptr<ModelLit>::operator->((shared_ptr<ModelLit>*)this_03);
                        (**(code**)(*plVar8 + 64))(plVar8);
                        lVar9 = this_03->end();
                        lVar12 = local_188->HeapBeginPtr();
                        lVar12 = ((lVar12 + 8))->end();
                        if (lVar9 == lVar12) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("batch.m_combined.get() != iterModel->second.get()",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                      "jagex3/dash3d/RSevenModelLitRenderer.cpp",
                                      402, (char*)0);
                        }
                        new (&local_108) StaticBatchAppendList(this_00, true);
                        new (local_168) ModelAppender(this_03, (ModelAppendList*)&local_108);
                        local_178->Resolve();
                        shared_ptr<ModelLit>::operator=((shared_ptr<ModelLit>*)this_03, (shared_ptr*)local_178);
                        local_178->~shared_ptr();
                        local_168->~pair();
                        puVar1 = &local_118->field_24;
                        shared_ptr<RenderState::ModelSubmissionRSeven>::reset();
                        new (local_178) EntityHighlight();
                        pMVar15 = (ModelRSevenLit*)shared_ptr<ModelLit>::operator*((shared_ptr<ModelLit>*)this_03);
                        ResolveAndSendToRenderThread(local_120, pMVar15, (shared_ptr*)puVar1, 0,
                                                     *(int*)&local_118->field_100, 0, 0, 0, 0, (longlong)local_110,
                                                     (EntityHighlight*)local_178);
                        eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                                         eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                                         eastl::equal_to<eastl::string>, eastl::hash<eastl::string>,
                                         eastl::mod_range_hashing, eastl::default_ranged_hash,
                                         eastl::prime_rehash_policy, false, true, true>::begin();
                        local_188[0] = (ModelAppendList*)local_168._0_8_;
                        local_188[1] = (ModelAppendList*)local_168._8_8_;
                        while (true) {
                            eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                                             eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>,
                                             eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                             true>::end();
                            bVar5 = eastl::operator!=((eastl*)local_188, (hashtable_iterator_base*)local_168,
                                                      extraout_RDX_05);
                            if (!bVar5)
                                break;
                            lVar9 = local_188->HeapBeginPtr();
                            lVar9 = shared_ptr<ModelLit>::operator*((shared_ptr<ModelLit>*)(lVar9 + 8));
                            pOVar16 = (OperationBuffer*)((lVar9 + 24))->GetOperationBuffer();
                            pOVar16->ClearCache();
                            eastl::hashtable_iterator<
                                eastl::pair<int const, shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>>,
                                true, false>::
                            operator++(
                                (hashtable_iterator<
                                    eastl::pair<int const, shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>>,
                                    true, false>*)local_188);
                        }
                        pOVar16 = (OperationBuffer*)pMVar15->field_24->GetOperationBuffer();
                        pOVar16->ClearCache();
                        local_108.~StaticBatchAppendList();
                        pNVar14 = local_118;
                    }
                    local_198 = this_00;
                    eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                                     eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>,
                                     eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
                    lVar9 = shared_ptr<RenderState::ModelSubmissionRSeven>::operator->(
                        (shared_ptr<RenderState::ModelSubmissionRSeven>*)&pNVar14->field_24);
                    this_01 = (shared_ptr<jag::graphics::Model>*)((lVar9 + 16))->GetModel();
                    local_118 = (NXTPixToolkit*)shared_ptr<jag::graphics::Model>::operator*(this_01);
                    pAVar17 = (AABB*)local_118->GetScreen();
                    new (local_168) jag::math::AABB(pAVar17);
                    local_110 = (ResolvedModel*)(lVar9 + 16);
                    local_108.GetLocalTransform();
                    local_168->Transform((Matrix44T*)&local_108);
                    if ((pNVar14->field_104 != '\0') &&
                        (cVar6 = TestStaticAabbMouseIntersection((AABB*)local_168, true), cVar6 != '\0')) {
                        eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                                         eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                                         eastl::equal_to<eastl::string>, eastl::hash<eastl::string>,
                                         eastl::mod_range_hashing, eastl::default_ranged_hash,
                                         eastl::prime_rehash_policy, false, true, true>::begin();
                        bVar5 =
                            eastl::operator!=((eastl*)local_178, (hashtable_iterator_base*)local_188, extraout_RDX_07);
                        if (bVar5) {
                            iVar22 = 1;
                            do {
                                puVar11 = (undefined8*)local_178->HeapBeginPtr();
                                local_1a0 = *puVar11;
                                lVar9 = local_178->HeapBeginPtr();
                                lVar9 = shared_ptr<ModelLit>::operator*((shared_ptr<ModelLit>*)(lVar9 + 8));
                                eastl::hashtable<
                                    long long, eastl::pair<long long const, RSevenModelLitRenderer::ActiveModel>,
                                    eastl::allocator,
                                    eastl::use_first<eastl::pair<long long const, RSevenModelLitRenderer::ActiveModel>>,
                                    eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                    eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                    true>::find((longlong*)local_1e0);
                                lVar12 = eastl::basic_string<
                                    char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                                    Layout::HeapBeginPtr(local_1e0);
                                lVar18 = shared_ptr<RenderState::ModelSubmissionRSeven>::operator*(
                                    (shared_ptr<RenderState::ModelSubmissionRSeven>*)(lVar12 + 16));
                                cVar6 = MousePickingHelper::IsActiveEntityTypecode(*(longlong*)(lVar18 + 136));
                                if (cVar6 != '\0') {
                                    ((lVar9 + 24))->GetOperationBuffer();
                                    local_108.ResolveAABB();
                                    cVar6 = TestStaticAabbMouseIntersection((AABB*)&local_108, *(bool*)(lVar12 + 36));
                                    if (cVar6 != '\0') {
                                        if (*(char*)(lVar12 + 36) == '\0') {
                                            local_108.GetLocalTransform();
                                            pvVar19 = (vector*)local_118->GetBatchList();
                                            cVar6 = local_190->PickTest((Matrix44T*)&local_108, pvVar19, true, true,
                                                                        iVar22);
                                            if (cVar6 == '\0')
                                                goto LAB_1002f1dfc;
                                        }
                                        MousePickingHelper::AddPickingEntity(*(longlong*)(lVar18 + 136));
                                    }
                                }
                            LAB_1002f1dfc:
                                eastl::hashtable_iterator<
                                    eastl::pair<int const, shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>>,
                                    true, false>::
                                operator++((hashtable_iterator<
                                            eastl::pair<int const,
                                                        shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>>,
                                            true, false>*)local_178);
                                bVar5 = eastl::operator!=((eastl*)local_178, (hashtable_iterator_base*)local_188,
                                                          extraout_RDX_08);
                                iVar22 = iVar22 + 1;
                            } while (bVar5);
                        }
                    }
                    eastl::hashtable_iterator<eastl::pair<long long const, RSevenModelLitRenderer::ActiveStaticBatch>,
                                              false, false>::
                    operator++(
                        (hashtable_iterator<eastl::pair<long long const, RSevenModelLitRenderer::ActiveStaticBatch>,
                                            false, false>*)local_138);
                    phVar21 = extraout_RDX_04;
                }
                this_02 = (eastl*)local_138;
                bVar5 = eastl::operator!=(this_02, (hashtable_iterator_base*)&local_1b0, phVar21);
            } while (bVar5);
        }
        pRVar4 = local_120;
        local_120->field_8 = (world*)0;
        ModelLitRenderer_lastModelLitWorldRenderTotalNanos =
            SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)this_02) - pRVar4->field_200;
        piVar2 = &pRVar4->field_208;
        *piVar2 = *piVar2 + 1;
        uVar7 = jag::graphics::Model::GetNumExtant();
        ModelLitRenderer_lastCachedModelsTotal = (ulong)uVar7;
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1002f2000, 112 bytes, placed by class name
    // RSevenModelLitRenderer::DeleteUnusedOverlays()
    void RSevenModelLitRenderer::DeleteUnusedOverlays() {
        undefined1* this_00;
        long lVar1;
        ulong uVar2;
        ulong uVar3;

        this_00 = &field_128;
        lVar1 = this_00->size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                lVar1 = eastl::vector<RSevenModelLitRenderer::ActiveOverlay, eastl::allocator>::operator[](
                    (vector<RSevenModelLitRenderer::ActiveOverlay, eastl::allocator>*)this_00, uVar3);
                if (*(int*)(lVar1 + 48) != field_208) {
                    this_00->resize(uVar3);
                }
                uVar3 = uVar3 + 1;
                uVar2 = this_00->size();
            } while (uVar3 < uVar2);
        }
    }

    // 0x1002f21d0, 256 bytes, placed by class name
    // RSevenModelLitRenderer::TestStaticAabbMouseIntersection(jag::math::AABB const&, bool)
    undefined8 RSevenModelLitRenderer::TestStaticAabbMouseIntersection(AABB* param_1, bool param_2) {
        char cVar1;
        Vector3T* pVVar2;
        vector* pvVar3;
        undefined8 local_68[2];
        Vector3T<int> local_58[8];
        int local_50[2];
        AABB local_48;
        int local_30;
        undefined4 uStack_2c;
        int local_28;

        cVar1 = MousePickingHelper::IsMousePickingEnabled();
        if (cVar1 != '\0') {
            local_48._0_8_ = param_1->GetCentrePos();
            jag::math::Vector3T<int>::Vector3T<float>((Vector3T<int>*)&local_30, (Vector3T*)&local_48);
            pVVar2 = (Vector3T*)param_1->GetScreen();
            pvVar3 = param_1->SSOBeginPtr((type*)&local_48);
            local_68[0] = jag::math::operator-(pVVar2, (Vector3T*)pvVar3);
            local_48._0_8_ = jag::math::operator*(0.5, (Vector3T*)local_68);
            jag::math::Vector3T<int>::Vector3T<float>(local_58, (Vector3T*)&local_48);
            MousePickingHelper::AdjustAABBRadiiForPicking((int*)local_58, local_50, param_2);
            new (&local_48) ModelLit::AABB(CONCAT44(uStack_2c, local_30), local_28);
            cVar1 = MousePickingHelper::IsMouseIntersectingModelAABB(&local_48, 0, 0, 0, false);
            if (cVar1 != '\0') {
                cVar1 = MousePickingHelper::IsAABBWithinMaxViewDistanceFromCamera(&local_48, local_30, local_28);
                if (cVar1 != '\0') {
                    return 1;
                }
            }
        }
        return 0;
    }

    // 0x1002f2390, 448 bytes, placed by class name
    // RSevenModelLitRenderer::DestroyResources()
    void RSevenModelLitRenderer::DestroyResources() {
        bool bVar1;
        long lVar2;
        OperationBuffer* pOVar3;
        long* plVar4;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* extraout_RDX_01;
        hashtable_iterator_base* extraout_RDX_02;
        shared_ptr* psVar5;
        eastl local_68[16];
        hashtable_iterator_base local_58[16];
        shared_ptr local_48;
        hashtable<long long, eastl::pair<long long const, RSevenModelLitRenderer::ActiveModel>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, RSevenModelLitRenderer::ActiveModel>>,
                  eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                  eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>* local_38;

        eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                         eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                         eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
        local_38 =
            (hashtable<long long, eastl::pair<long long const, RSevenModelLitRenderer::ActiveModel>, eastl::allocator,
                       eastl::use_first<eastl::pair<long long const, RSevenModelLitRenderer::ActiveModel>>,
                       eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                       eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)&field_16;
        eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        bVar1 = eastl::operator!=(local_68, local_58, extraout_RDX);
        if (bVar1) {
            do {
                lVar2 = local_68->HeapBeginPtr();
                psVar5 = (shared_ptr*)(lVar2 + 16);
                bVar1 = shared_ptr::operator_cast_to_bool(psVar5);
                if (bVar1) {
                    pOVar3 = (OperationBuffer*)shared_ptr<RenderState::ModelSubmissionRSeven>::operator->(
                        (shared_ptr<RenderState::ModelSubmissionRSeven>*)psVar5);
                    pOVar3->ClearCache();
                    new (&local_48) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                    shared_ptr<RenderState::ModelSubmissionRSeven>::operator=(
                        (shared_ptr<RenderState::ModelSubmissionRSeven>*)psVar5, &local_48);
                    local_48.~shared_ptr();
                }
                eastl::hashtable_iterator<
                    eastl::pair<unsigned int const, eastl::vector<eastl::string, eastl::allocator>>, false, false>::
                operator++(
                    (hashtable_iterator<eastl::pair<unsigned int const, eastl::vector<eastl::string, eastl::allocator>>,
                                        false, false>*)local_68);
                bVar1 = eastl::operator!=(local_68, local_58, extraout_RDX_00);
            } while (bVar1);
        }
        eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                         eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                         eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
        eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        bVar1 = eastl::operator!=(local_68, local_58, extraout_RDX_01);
        if (bVar1) {
            do {
                lVar2 = local_68->HeapBeginPtr();
                psVar5 = (shared_ptr*)(lVar2 + 24);
                bVar1 = shared_ptr::operator_cast_to_bool(psVar5);
                if (bVar1) {
                    pOVar3 = (OperationBuffer*)shared_ptr<RenderState::ModelSubmissionRSeven>::operator->(
                        (shared_ptr<RenderState::ModelSubmissionRSeven>*)psVar5);
                    pOVar3->ClearCache();
                    new (&local_48) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                    shared_ptr<RenderState::ModelSubmissionRSeven>::operator=(
                        (shared_ptr<RenderState::ModelSubmissionRSeven>*)psVar5, &local_48);
                    local_48.~shared_ptr();
                }
                eastl::hashtable_iterator<eastl::pair<long long const, RSevenModelLitRenderer::ActiveStaticBatch>,
                                          false, false>::
                operator++((hashtable_iterator<eastl::pair<long long const, RSevenModelLitRenderer::ActiveStaticBatch>,
                                               false, false>*)local_68);
                bVar1 = eastl::operator!=(local_68, local_58, extraout_RDX_02);
            } while (bVar1);
        }
        plVar4 = (long*)OSRenderCore_AudioThread::Instance();
        lVar2 = (((long)plVar4 + *(long*)(*plVar4 + -24)))->HeapBeginPtr();
        ((lVar2 + 17563848))->clear();
        eastl::hashtable<long long, eastl::pair<long long const, RSevenModelLitRenderer::ActiveModel>, eastl::allocator,
                         eastl::use_first<eastl::pair<long long const, RSevenModelLitRenderer::ActiveModel>>,
                         eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::clear(local_38);
        (&field_72)->clear();
    }

    // 0x1002f2570, 416 bytes, placed by class name
    // RSevenModelLitRenderer::TestModelMouseIntersectionFine(ResolvedModel const&, RenderState::ModelSubmissionRSeven const&)
    void RSevenModelLitRenderer::TestModelMouseIntersectionFine(ResolvedModel* param_1,
                                                                ModelSubmissionRSeven* param_2) {
        vector<EntityHighlight*, BucketAllocatorEASTL>* this_00;
        shared_ptr* psVar1;
        vector* pvVar2;
        char cVar4;
        Model* pMVar5;
        Matrix44T local_88;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_48[16];
        shared_ptr local_38;

        this_00 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)param_1->GetModel();
        pMVar5 = (Model*)eastl::vector<EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_48, (_func_decltype_nullptr*)0);
        psVar1 = (shared_ptr*)param_1->GetAnimationState();
        if (shared_ptr::operator_cast_to_bool(psVar1)) {
            local_38._0_4_ = 2;
            make_shared<jag::graphics::Model, jag::graphics::Model_const&, jag::graphics::ModelCopyType>(
                (jag*)&local_88, pMVar5, (ModelCopyType*)&local_38);
            shared_ptr<jag::graphics::Model>::operator=((shared_ptr<jag::graphics::Model>*)local_48,
                                                        (shared_ptr*)&local_88);
            local_88.~shared_ptr();
            pMVar5 = (Model*)shared_ptr<jag::graphics::Model>::operator->((shared_ptr<jag::graphics::Model>*)local_48);
            psVar1 = (shared_ptr*)param_1->GetAnimationState();
            make_shared<PoseStateProviderRSeven, shared_ptr<PoseStateRSeven> const&>((jag*)&local_38, psVar1);
            shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                (shared_ptr<RSevenDebugPresetProvider>*)&local_88, &local_38);
            pMVar5->SetAnimationStateProvider((shared_ptr*)&local_88);
            local_88.~shared_ptr();
            local_38.~shared_ptr();
            pMVar5 = (Model*)local_48->end();
        }
        local_88.GetWorldTransform((int)param_1, *(int*)&param_2->field_156, *(int*)&param_2->field_144,
                                   *(int*)&param_2->field_148);
        pvVar2 = (vector*)pMVar5->GetBatchList();
        cVar4 = (&field_224, &local_88, pvVar2, true, true, -1)->PickTest();
        if (cVar4 != '\0') {
            MousePickingHelper::AddPickingEntity(*(longlong*)&param_2->field_136);
        }
        local_48->~shared_ptr();
    }

    // 0x1002f2710, 608 bytes, placed by class name
    // RSevenModelLitRenderer::SubmitOverlayModel(ModelLit&, int, int, jag::math::Vector3T<int>, RenderState::OverlayViewportState&)
    void RSevenModelLitRenderer::SubmitOverlayModel(RSevenModelLitRenderer* param_1, ModelRSevenLit* param_2,
                                                    int param_3, undefined4 param_4, undefined8 param_5,
                                                    undefined4 param_6, OverlayViewportState* param_7) {
        int iVar1;
        int iVar2;
        Matrix44T MVar3;
        shared_ptr* this_00;
        vector* pvVar5;
        int* piVar6;
        long lVar7;
        shared_ptr* psVar8;
        shared_ptr* psVar9;
        long* plVar10;
        Matrix44T local_1c8;
        undefined1 local_188[112];
        ResolvedModel local_118;
        undefined1 local_a8[72];
        undefined8 local_60;
        undefined4 local_58;
        int local_3c;
        shared_ptr* local_38;

        local_38 = (shared_ptr*)CONCAT44(local_38._4_4_, param_4);
        local_60 = param_5;
        local_58 = param_6;
        if ((*(code*)param_2->field_0[7])(param_2) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("model.IsForRSeven()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "RSevenModelLitRenderer.cpp",
                      588, "Attempted to submit SD model to the RT7 renderer.");
        }
        this_00 = (shared_ptr*)GetNextOverlay(param_1);
        RenderState::OverlayViewportState::operator=((OverlayViewportState*)(this_00 + 1), param_7);
        pvVar5 = local_60.SSOBeginPtr(param_7);
        local_3c = *(int*)pvVar5;
        piVar6 = (int*)local_60.y();
        iVar1 = *piVar6;
        piVar6 = (int*)local_60.second();
        iVar2 = *piVar6;
        local_118.field_8._0_2_ = 0;
        local_118.field_0 = 0;
        new (&local_118) EntityHighlight();
        ResolveAndUpdateSubmission(param_1, param_2, this_00, (int)local_38, 0, local_3c, -iVar1, iVar2, 0, 0,
                                   (EntityHighlight*)&local_118);
        lVar7 = shared_ptr<RenderState::ModelSubmissionRSeven>::operator->(
            (shared_ptr<RenderState::ModelSubmissionRSeven>*)this_00);
        local_38 = (shared_ptr*)((lVar7 + 16))->GetModel();
        lVar7 = shared_ptr<RenderState::ModelSubmissionRSeven>::operator->(
            (shared_ptr<RenderState::ModelSubmissionRSeven>*)this_00);
        psVar8 = (shared_ptr*)((lVar7 + 16))->GetUploadableModel();
        lVar7 = shared_ptr<RenderState::ModelSubmissionRSeven>::operator->(
            (shared_ptr<RenderState::ModelSubmissionRSeven>*)this_00);
        psVar9 = (shared_ptr*)((lVar7 + 16))->GetAnimationState();
        jag::math::Matrix33RotationX<float>((math*)(local_188 + 72), (float)param_3 * 0.0030679617);
        new (&local_1c8) jag::math::Matrix44T<float>((Matrix33T*)(local_188 + 72), PTR_ZERO_100ee66e8);
        shared_ptr<RenderState::ModelSubmissionRSeven>::operator->(
            (shared_ptr<RenderState::ModelSubmissionRSeven>*)this_00);
        local_188->GetLocalTransform();
        jag::math::operator*((math*)local_a8, &local_1c8, (Matrix44T*)local_188);
        MVar3._8_4_ = local_a8._8_4_;
        MVar3._0_8_ = local_a8._0_8_;
        MVar3._12_4_ = local_a8._12_4_;
        MVar3._16_8_ = local_a8._16_8_;
        MVar3._24_8_ = local_a8._24_8_;
        MVar3._32_8_ = local_a8._32_8_;
        MVar3._40_8_ = local_a8._40_8_;
        MVar3._48_8_ = local_a8._48_8_;
        new (&local_118) ResolvedModel(local_38, psVar8, psVar9, MVar3);
        lVar7 = shared_ptr<RenderState::ModelSubmissionRSeven>::operator->(
            (shared_ptr<RenderState::ModelSubmissionRSeven>*)this_00);
        ResolvedModel::operator=((ResolvedModel*)(lVar7 + 16), &local_118);
        local_118.~ResolvedModel();
        plVar10 = (long*)OSRenderCore_AudioThread::Instance();
        lVar7 = (((long)plVar10 + *(long*)(*plVar10 + -24)))->HeapBeginPtr();
        eastl::fixed_vector<RenderState::OverlayRSeven, 32768ul, true, eastl::allocator>::push_back(
            (OverlayRSeven*)(lVar7 + 18104600));
        *(int*)(this_00 + 3) = param_1->field_208;
    }

    // 0x1002f2970, 176 bytes, placed by class name
    // RSevenModelLitRenderer::GetNextOverlay()
    void RSevenModelLitRenderer::GetNextOverlay() {
        long* plVar1;
        long lVar2;
        ulong uVar3;
        ulong uVar4;
        long lVar5;
        vector<DepthBiasComputer::Node, eastl::allocator>* this_00;
        undefined1* this_01;

        plVar1 = (long*)OSRenderCore_AudioThread::Instance();
        lVar2 = (((long)plVar1 + *(long*)(*plVar1 + -24)))->HeapBeginPtr();
        this_00 = (vector<DepthBiasComputer::Node, eastl::allocator>*)(lVar2 + 18104600);
        uVar3 = eastl::vector<DepthBiasComputer::Node, eastl::allocator>::size(this_00);
        this_01 = &field_128;
        uVar4 = this_01->size();
        if (uVar4 < uVar3) {
            /* WARNING: Subroutine does not return */
            LogAssert("renderState.m_overlaysRSeven.size() <= m_overlays.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "RSevenModelLitRenderer.cpp",
                      611, "Overlays were sent to the render thread without being stored.");
        }
        lVar2 = eastl::vector<DepthBiasComputer::Node, eastl::allocator>::size(this_00);
        lVar5 = this_01->size();
        if (lVar2 == lVar5) {
            this_01->push_back();
        } else {
            uVar3 = eastl::vector<DepthBiasComputer::Node, eastl::allocator>::size(this_00);
            eastl::vector<RSevenModelLitRenderer::ActiveOverlay, eastl::allocator>::operator[](
                (vector<RSevenModelLitRenderer::ActiveOverlay, eastl::allocator>*)this_01, uVar3);
        }
    }

    // 0x1002f2b00, 464 bytes, placed by class name
    // RSevenModelLitRenderer::UploadTextures(Array<short, eastl::allocator>&)
    void RSevenModelLitRenderer::UploadTextures(Array* param_1) {
        short sVar1;
        bool bVar2;
        long* plVar3;
        long lVar4;
        short* psVar5;
        undefined8* puVar6;
        long lVar7;
        int* piVar8;
        int* piVar9;
        hashtable_iterator_base* extraout_RDX;
        eastl local_88[24];
        shared_ptr local_70;
        shared_ptr local_60;
        short* local_48;
        short* local_40;
        int local_34;

        plVar3 = (long*)OSRenderCore_AudioThread::Instance();
        lVar4 = (((long)plVar3 + *(long*)(*plVar3 + -24)))->HeapBeginPtr();
        psVar5 = (short*)param_1->data();
        local_40 = (short*)param_1->end();
        if (psVar5 != local_40) {
            do {
                sVar1 = *psVar5;
                if (sVar1 == -1) {
                    new (&local_60) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                } else {
                    puVar6 = (undefined8*)shared_ptr<TextureProvider>::operator->(
                        (shared_ptr<TextureProvider>*)&Pix3D::m_textureProvider);
                    (**(code**)*puVar6)(&local_60, puVar6, (int)sVar1);
                }
                local_48 = psVar5;
                bVar2 = operator!=(&local_60, (_func_decltype_nullptr*)0);
                if (bVar2) {
                    lVar7 = shared_ptr<Texture>::operator->((shared_ptr<Texture>*)&local_60);
                    piVar8 = (int*)((lVar7 + 56))->data();
                    piVar9 = (int*)((lVar7 + 56))->end();
                    for (; piVar8 != piVar9; piVar8 = piVar8 + 1) {
                        local_34 = *piVar8;
                        eastl::hashtable<int, eastl::pair<int const, shared_ptr<ChatLine>>, eastl::allocator,
                                         eastl::use_first<eastl::pair<int const, shared_ptr<ChatLine>>>,
                                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                         true>::find((int*)local_88);
                        eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                                         eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>,
                                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                         true>::end();
                        bVar2 = eastl::operator==(local_88, (hashtable_iterator_base*)&local_70, extraout_RDX);
                        if (bVar2) {
                            new (&local_70)
                                shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>((_func_decltype_nullptr*)&local_70);
                            if ((undefined*)(((RSevenModelLitRenderer*)this)->m_pSpritesJs5, &local_70, local_34)
                                    ->GetFile() == DataStatus::READY) {
                                eastl::hashtable<
                                    int,
                                    eastl::pair<int const, shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>>,
                                    eastl::allocator,
                                    eastl::use_first<eastl::pair<
                                        int const, shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>>>,
                                    eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                    eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::
                                    emplace<int&, shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>>(
                                        (int*)local_88, (shared_ptr*)(lVar4 + 18104544));
                            }
                            local_70.~shared_ptr();
                        }
                    }
                }
                local_60.~shared_ptr();
                psVar5 = local_48 + 1;
            } while (psVar5 != local_40);
        }
    }

} // namespace jag::oldscape::dash3d

namespace jag {
    // 0x1002efd30, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<RenderState::ModelSubmissionRSeven>::type make_shared<RenderState::ModelSubmissionRSeven>()
    jag* make_shared<RenderState::ModelSubmissionRSeven>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        ModelSubmissionRSeven* local_28[2];

        pvVar1 = (void*)aligned_alloc(208, 16);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(16);
        } else {
            local_28[0] = placement_new<RenderState::ModelSubmissionRSeven>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<RenderState::ModelSubmissionRSeven>, int,
                                   RenderState::ModelSubmissionRSeven*&>(pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

} // namespace jag
