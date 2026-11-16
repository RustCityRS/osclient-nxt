// libs/graphics/runetek7/animation/AnimKeyFrameSet.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "AnimKeyFrameSet.h"

namespace jag::graphics {
    // 0x103bc0ef8, 16 bytes, __common; set at startup by ___cxx_global_var_init.77
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> AnimKeyFrameSet::NullAnimKeyFrameset;

    // 0x100009d10: the linker folded this into eastl::string::Layout::HeapBeginPtr(), which has identical code
    AnimKeyFrameSet::GetLastLoadAttempt() const;

    // 0x100009d50: the linker folded this into eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second(), which has identical code
    AnimKeyFrameSet::GetCurves() const;

    // 0x100067280: the linker folded this into game::console::Snow::GetSnowPiles() const, which has identical code
    AnimKeyFrameSet::GetJointCurves() const;

    // 0x10017a5a0: the linker folded this into http::HTTPRequest::GetData() const, which has identical code
    shared_ptr AnimKeyFrameSet::GetBase() const;

    // 0x1004de990: the linker folded this into game::SeqGroupType::IsWalkMerge() const, which has identical code
    AnimKeyFrameSet::GetAnimatesColour() const;

    // 0x100983360, 1712 bytes, placed by class name and debug map
    // AnimKeyFrameSet::GetJointPosesFromKeyFrameData(WrapArray<JointPose>, float, AnimCurveSegmentCacheBase&) const
    void AnimKeyFrameSet::GetJointPosesFromKeyFrameData(float param_1, float param_2, AnimKeyFrameSet* this,
                                                        WrapArray<JointPose>* param_4, long* param_5) {
        int iVar2;
        long lVar3;
        Rect<float>* this_00;
        QuaternionT<float>* this_01;
        vector<eastl::vector<AnimCurve, eastl::allocator>, eastl::allocator>* this_02;
        vector<oldscape::dash3d::DepthBiasComputer::Node, eastl::allocator>* this_03;
        AnimBase* pAVar4;
        Array<Joint, eastl::allocator>* pAVar5;
        Joint* pJVar6;
        AnimCurve* pAVar7;
        AnimCurveSegmentCacheData* pAVar8;
        ulong uVar9;
        ulong uVar10;
        float fVar11;
        uint uVar12;
        undefined4 uVar13;
        undefined8 uVar14;
        Vector4T<float> local_e8[24];
        WrapArray<JointPose>* local_c8;
        WrapArray<WrapArray<AnimCurveSegmentCacheData>> local_c0[8];
        uint local_b8;
        float local_b4;
        undefined4 local_b0;
        undefined4 local_ac;
        undefined4 local_a8;
        uint local_a4;
        shared_ptr<AnimBase>* local_a0;
        undefined8 local_98;
        undefined8 local_88;
        undefined4 uStack_80;
        undefined4 uStack_7c;
        float local_70;
        float local_6c;
        float local_68;
        float local_54;
        undefined4 local_50;
        undefined4 local_4c;
        uint local_48;
        WrapArray<AnimCurveSegmentCacheData>* local_40;

        lVar3 = param_4->HeapBeginPtr();
        if (lVar3 != 0) {
            local_a0 = (shared_ptr<AnimBase>*)m_pBase;
            local_a4 = 1;
            uVar10 = 0;
            local_c8 = param_4;
            do {
                this_01 = (QuaternionT<float>*)WrapArray<JointPose>::operator[](param_4, uVar10);
                this_01->SetToIdentity();
                lVar3 = WrapArray<JointPose>::operator[](param_4, uVar10);
                ((lVar3 + 16))->SetToZero();
                lVar3 = WrapArray<JointPose>::operator[](param_4, uVar10);
                ((lVar3 + 32))->SetToOne();
                new (&local_70) math::Vector3T<int>();
                new (&local_b0) math::Vector3T<int>();
                new (&local_50) math::Vector3T<int>();
                this_02 =
                    (vector<eastl::vector<AnimCurve, eastl::allocator>, eastl::allocator>*)get_overflow_allocator();
                this_03 = (vector<oldscape::dash3d::DepthBiasComputer::Node, eastl::allocator>*)
                    eastl::vector<eastl::vector<AnimCurve, eastl::allocator>, eastl::allocator>::operator[](this_02,
                                                                                                            uVar10);
                (**(code**)(*param_5 + 32))(local_c0);
                local_40 =
                    (WrapArray<AnimCurveSegmentCacheData>*)WrapArray<WrapArray<AnimCurveSegmentCacheData>>::operator[](
                        local_c0, uVar10);
                pAVar4 = (AnimBase*)shared_ptr<AnimBase>::operator->(local_a0);
                pAVar5 = (Array<Joint, eastl::allocator>*)pAVar4->GetBindPose(m_bindID);
                local_88 = uVar10;
                pJVar6 = (Joint*)Array<Joint, eastl::allocator>::operator[](pAVar5, uVar10);
                uVar14 = pJVar6->GetLocalBindRotate();
                local_54 = param_2;
                local_98 = uVar14;
                lVar3 = eastl::vector<oldscape::dash3d::DepthBiasComputer::Node, eastl::allocator>::size(this_03);
                if (lVar3 == 0) {
                LAB_1009835b0:
                    local_70 = (float)local_98;
                } else {
                    pAVar7 = (AnimCurve*)eastl::vector<AnimCurve, eastl::allocator>::operator[](
                        (vector<AnimCurve, eastl::allocator>*)this_03, 0);
                    iVar2 = pAVar7->GetNumKeys();
                    if (iVar2 < 1)
                        goto LAB_1009835b0;
                    pAVar7 = (AnimCurve*)eastl::vector<AnimCurve, eastl::allocator>::operator[](
                        (vector<AnimCurve, eastl::allocator>*)this_03, 0);
                    pAVar8 = (AnimCurveSegmentCacheData*)WrapArray<AnimCurveSegmentCacheData>::operator[](local_40, 0);
                    local_70 = (float)pAVar7->GetValue(param_1, pAVar8);
                }
                uVar10 = local_88;
                uVar9 = eastl::vector<oldscape::dash3d::DepthBiasComputer::Node, eastl::allocator>::size(this_03);
                uVar14 = local_98;
                if (uVar9 < 2) {
                LAB_100983620:
                    local_98._4_4_ = (float)((ulong)uVar14 >> 32);
                    local_6c = local_98._4_4_;
                } else {
                    pAVar7 = (AnimCurve*)eastl::vector<AnimCurve, eastl::allocator>::operator[](
                        (vector<AnimCurve, eastl::allocator>*)this_03, 1);
                    iVar2 = pAVar7->GetNumKeys();
                    uVar14 = local_98;
                    if (iVar2 < 1)
                        goto LAB_100983620;
                    pAVar7 = (AnimCurve*)eastl::vector<AnimCurve, eastl::allocator>::operator[](
                        (vector<AnimCurve, eastl::allocator>*)this_03, 1);
                    pAVar8 = (AnimCurveSegmentCacheData*)WrapArray<AnimCurveSegmentCacheData>::operator[](local_40, 1);
                    local_6c = (float)pAVar7->GetValue(param_1, pAVar8);
                    uVar14 = local_98;
                }
                local_98 = uVar14;
                uVar9 = eastl::vector<oldscape::dash3d::DepthBiasComputer::Node, eastl::allocator>::size(this_03);
                if (uVar9 < 3) {
                    fVar11 = local_54;
                } else {
                    pAVar7 = (AnimCurve*)eastl::vector<AnimCurve, eastl::allocator>::operator[](
                        (vector<AnimCurve, eastl::allocator>*)this_03, 2);
                    iVar2 = pAVar7->GetNumKeys();
                    fVar11 = local_54;
                    if (0 < iVar2) {
                        pAVar7 = (AnimCurve*)eastl::vector<AnimCurve, eastl::allocator>::operator[](
                            (vector<AnimCurve, eastl::allocator>*)this_03, 2);
                        pAVar8 =
                            (AnimCurveSegmentCacheData*)WrapArray<AnimCurveSegmentCacheData>::operator[](local_40, 2);
                        fVar11 = (float)pAVar7->GetValue(param_1, pAVar8);
                    }
                }
                local_68 = fVar11;
                new (local_c0) math::QuaternionT<float>();
                local_c0->FromYawPitchRoll(local_6c, local_70, local_68);
                uVar13 = 2147483648;
                local_b8 = local_b8 ^ 2147483648;
                param_2 = -local_b4;
                local_b4 = param_2;
                pAVar4 = (AnimBase*)shared_ptr<AnimBase>::operator->(local_a0);
                pAVar5 = (Array<Joint, eastl::allocator>*)pAVar4->GetBindPose(m_bindID);
                pJVar6 = (Joint*)Array<Joint, eastl::allocator>::operator[](pAVar5, uVar10);
                uVar14 = pJVar6->GetLocalBindTranslate();
                local_88 = CONCAT44(uVar13, param_2);
                uStack_80 = 2147483648;
                uStack_7c = 2147483648;
                local_98 = uVar14;
                uVar9 = eastl::vector<oldscape::dash3d::DepthBiasComputer::Node, eastl::allocator>::size(this_03);
                if (uVar9 < 4) {
                LAB_100983780:
                    local_50 = (float)local_98;
                } else {
                    pAVar7 = (AnimCurve*)eastl::vector<AnimCurve, eastl::allocator>::operator[](
                        (vector<AnimCurve, eastl::allocator>*)this_03, 3);
                    iVar2 = pAVar7->GetNumKeys();
                    if (iVar2 < 1)
                        goto LAB_100983780;
                    pAVar7 = (AnimCurve*)eastl::vector<AnimCurve, eastl::allocator>::operator[](
                        (vector<AnimCurve, eastl::allocator>*)this_03, 3);
                    pAVar8 = (AnimCurveSegmentCacheData*)WrapArray<AnimCurveSegmentCacheData>::operator[](local_40, 3);
                    local_50 = pAVar7->GetValue(param_1, pAVar8);
                }
                uVar9 = eastl::vector<oldscape::dash3d::DepthBiasComputer::Node, eastl::allocator>::size(this_03);
                uVar14 = local_98;
                if (uVar9 < 5) {
                LAB_1009837f0:
                    local_98._4_4_ = (float)((ulong)uVar14 >> 32);
                    local_4c = local_98._4_4_;
                } else {
                    pAVar7 = (AnimCurve*)eastl::vector<AnimCurve, eastl::allocator>::operator[](
                        (vector<AnimCurve, eastl::allocator>*)this_03, 4);
                    iVar2 = pAVar7->GetNumKeys();
                    uVar14 = local_98;
                    if (iVar2 < 1)
                        goto LAB_1009837f0;
                    pAVar7 = (AnimCurve*)eastl::vector<AnimCurve, eastl::allocator>::operator[](
                        (vector<AnimCurve, eastl::allocator>*)this_03, 4);
                    pAVar8 = (AnimCurveSegmentCacheData*)WrapArray<AnimCurveSegmentCacheData>::operator[](local_40, 4);
                    local_4c = pAVar7->GetValue(param_1, pAVar8);
                    uVar14 = local_98;
                }
                local_98 = uVar14;
                uVar9 = eastl::vector<oldscape::dash3d::DepthBiasComputer::Node, eastl::allocator>::size(this_03);
                if (uVar9 < 6) {
                    uVar12 = (uint)local_88;
                } else {
                    pAVar7 = (AnimCurve*)eastl::vector<AnimCurve, eastl::allocator>::operator[](
                        (vector<AnimCurve, eastl::allocator>*)this_03, 5);
                    iVar2 = pAVar7->GetNumKeys();
                    uVar12 = (uint)local_88;
                    if (0 < iVar2) {
                        pAVar7 = (AnimCurve*)eastl::vector<AnimCurve, eastl::allocator>::operator[](
                            (vector<AnimCurve, eastl::allocator>*)this_03, 5);
                        pAVar8 =
                            (AnimCurveSegmentCacheData*)WrapArray<AnimCurveSegmentCacheData>::operator[](local_40, 5);
                        uVar12 = pAVar7->GetValue(param_1, pAVar8);
                    }
                }
                local_48 = uVar12 ^ 2147483648;
                pAVar4 = (AnimBase*)shared_ptr<AnimBase>::operator->(local_a0);
                pAVar5 = (Array<Joint, eastl::allocator>*)pAVar4->GetBindPose(m_bindID);
                pJVar6 = (Joint*)Array<Joint, eastl::allocator>::operator[](pAVar5, uVar10);
                uVar14 = pJVar6->GetLocalBindScale();
                local_88 = CONCAT44(local_88._4_4_, param_2);
                local_98 = uVar14;
                uVar9 = eastl::vector<oldscape::dash3d::DepthBiasComputer::Node, eastl::allocator>::size(this_03);
                if (uVar9 < 7) {
                LAB_100983910:
                    local_b0 = (float)local_98;
                } else {
                    pAVar7 = (AnimCurve*)eastl::vector<AnimCurve, eastl::allocator>::operator[](
                        (vector<AnimCurve, eastl::allocator>*)this_03, 6);
                    iVar2 = pAVar7->GetNumKeys();
                    if (iVar2 < 1)
                        goto LAB_100983910;
                    pAVar7 = (AnimCurve*)eastl::vector<AnimCurve, eastl::allocator>::operator[](
                        (vector<AnimCurve, eastl::allocator>*)this_03, 6);
                    pAVar8 = (AnimCurveSegmentCacheData*)WrapArray<AnimCurveSegmentCacheData>::operator[](local_40, 6);
                    local_b0 = pAVar7->GetValue(param_1, pAVar8);
                }
                uVar9 = eastl::vector<oldscape::dash3d::DepthBiasComputer::Node, eastl::allocator>::size(this_03);
                uVar14 = local_98;
                if (uVar9 < 8) {
                LAB_100983980:
                    local_98._4_4_ = (float)((ulong)uVar14 >> 32);
                    local_ac = local_98._4_4_;
                } else {
                    pAVar7 = (AnimCurve*)eastl::vector<AnimCurve, eastl::allocator>::operator[](
                        (vector<AnimCurve, eastl::allocator>*)this_03, 7);
                    iVar2 = pAVar7->GetNumKeys();
                    uVar14 = local_98;
                    if (iVar2 < 1)
                        goto LAB_100983980;
                    pAVar7 = (AnimCurve*)eastl::vector<AnimCurve, eastl::allocator>::operator[](
                        (vector<AnimCurve, eastl::allocator>*)this_03, 7);
                    pAVar8 = (AnimCurveSegmentCacheData*)WrapArray<AnimCurveSegmentCacheData>::operator[](local_40, 7);
                    local_ac = pAVar7->GetValue(param_1, pAVar8);
                    uVar14 = local_98;
                }
                local_98 = uVar14;
                uVar9 = eastl::vector<oldscape::dash3d::DepthBiasComputer::Node, eastl::allocator>::size(this_03);
                if (uVar9 < 9) {
                    uVar13 = (uint)local_88;
                } else {
                    pAVar7 = (AnimCurve*)eastl::vector<AnimCurve, eastl::allocator>::operator[](
                        (vector<AnimCurve, eastl::allocator>*)this_03, 8);
                    iVar2 = pAVar7->GetNumKeys();
                    uVar13 = (uint)local_88;
                    if (0 < iVar2) {
                        pAVar7 = (AnimCurve*)eastl::vector<AnimCurve, eastl::allocator>::operator[](
                            (vector<AnimCurve, eastl::allocator>*)this_03, 8);
                        pAVar8 =
                            (AnimCurveSegmentCacheData*)WrapArray<AnimCurveSegmentCacheData>::operator[](local_40, 8);
                        uVar13 = pAVar7->GetValue(param_1, pAVar8);
                    }
                }
                param_4 = local_c8;
                local_a8 = uVar13;
                this_00 = (Rect<float>*)WrapArray<JointPose>::operator[](local_c8, uVar10);
                math::Rect<float>::operator=(this_00, (Rect*)local_c0);
                math::Vector4T<float>::Vector4T(local_e8, (Vector3T*)&local_50, 1.0);
                lVar3 = WrapArray<JointPose>::operator[](param_4, uVar10);
                math::Rect<float>::operator=((Rect<float>*)(lVar3 + 16), (Rect*)local_e8);
                math::Vector4T<float>::Vector4T(local_e8, (Vector3T*)&local_b0, 1.0);
                lVar3 = WrapArray<JointPose>::operator[](param_4, uVar10);
                math::Rect<float>::operator=((Rect<float>*)(lVar3 + 32), (Rect*)local_e8);
                uVar12 = local_a4;
                uVar10 = (ulong)local_a4;
                uVar9 = param_4->HeapBeginPtr();
                local_a4 = uVar12 + 1;
            } while (uVar10 < uVar9);
        }
    }

    // 0x100983a20, 352 bytes, placed by class name and debug map
    // AnimKeyFrameSet::GetLabelDeltasAndBillboardTransforms(WrapArray<float>, WrapArray<float>, float, AnimCurveSegmentCacheBase&) const
    void AnimKeyFrameSet::GetLabelDeltasAndBillboardTransforms(AnimKeyFrameSet* param_1, AnimKeyFrameSet* this,
                                                               WrapArray* param_3, undefined8 param_4, long* param_5) {
        char cVar1;
        long lVar2;
        ulong uVar3;
        vector* pvVar4;
        WrapArray* pWVar5;
        shared_ptr<AnimBase>* this_00;
        AnimBase* pAVar6;
        Array* pAVar7;
        vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>* this_01;
        uint uVar8;
        ulong uVar9;
        WrapArray<WrapArray<AnimCurveSegmentCacheData>> local_78[16];
        long* local_68;
        shared_ptr<AnimBase>* local_60;
        undefined8 local_58;
        WrapArray* local_50;
        RT7Core* local_48;
        vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>* local_40;
        AnimKeyFrameSet* local_34;

        this_01 = (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                          eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>*)&field_8;
        local_68 = param_5;
        local_58 = param_4;
        local_50 = param_3;
        local_48 = (RT7Core*)this;
        local_34._0_4_ = param_1._0_4_;
        lVar2 =
            eastl::vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                          eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::size(this_01);
        if (lVar2 != 0) {
            local_60 = (shared_ptr<AnimBase>*)&local_48->m_mSAASampleCount;
            uVar9 = 0;
            local_40 = this_01;
            do {
                pvVar4 =
                    (vector*)eastl::vector<eastl::vector<AnimCurve, eastl::allocator>, eastl::allocator>::operator[](
                        (vector<eastl::vector<AnimCurve, eastl::allocator>, eastl::allocator>*)this_01, uVar9);
                (**(code**)(*local_68 + 32))(local_78);
                pWVar5 = (WrapArray*)WrapArray<WrapArray<AnimCurveSegmentCacheData>>::operator[](local_78, uVar9);
                this_00 = (shared_ptr<AnimBase>*)local_48->GetMSAASampleCount();
                pAVar6 = (AnimBase*)shared_ptr<AnimBase>::operator->(this_00);
                uVar8 = (uint)uVar9;
                pAVar7 = (Array*)pAVar6->GetTransformLabels(uVar8);
                pAVar6 = (AnimBase*)shared_ptr<AnimBase>::operator->(local_60);
                cVar1 = pAVar6->GetTransformType(uVar8);
                this_01 = local_40;
                if ((byte)(cVar1 - 8U) < 3) {
                    GetBillboardTransforms(local_34._0_4_);
                LAB_100983a9a:
                    this_01 = local_40;
                } else {
                    if (cVar1 == '\a') {
                        GetColourLabelDeltas((AnimKeyFrameSet*)local_48, local_50, pAVar7, (float)local_34._0_4_,
                                             pvVar4, pWVar5);
                        goto LAB_100983a9a;
                    }
                    if (cVar1 == '\x05') {
                        GetAlphaLabelDeltas((AnimKeyFrameSet*)pAVar6, local_50, pAVar7, (float)local_34._0_4_, pvVar4,
                                            pWVar5);
                    }
                }
                uVar9 = (ulong)(uVar8 + 1);
                uVar3 = eastl::vector<
                    Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                    eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::size(this_01);
            } while (uVar9 < uVar3);
        }
    }

    // 0x100983b90, 208 bytes, base-object constructor, placed by class name and debug map
    // AnimKeyFrameSet::AnimKeyFrameSet(unsigned int, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ArchiveSettings const&)
    void AnimKeyFrameSet::AnimKeyFrameSet(uint param_1, Js5ResourceProvider* param_2, Js5ArchiveSettings* param_3,
                                          Js5ArchiveSettings* param_4) {
        undefined4 in_register_00000034;

        new (this) MakeSharedPool<AnimKeyFrameSet, 128>();
        field_0 = 0;
        new (&field_8) eastl::vector<eastl::vector<AnimCurve, eastl::allocator>, eastl::allocator>();
        new (&field_40) eastl::vector<eastl::vector<AnimCurve, eastl::allocator>, eastl::allocator>();
        field_72 = 65535;
        m_end = 0;
        m_bindID = 0;
        field_80 = param_1;
        field_88 = param_2;
        field_96 = param_3;
        field_104 = param_4;
        m_animatesColour = 0;
        m_animatesBillboards = 0;
        new (field_120, (_func_decltype_nullptr*)CONCAT44(in_register_00000034)
                            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1));
        new (m_pBase, (_func_decltype_nullptr*)CONCAT44(in_register_00000034)
                          shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1));
    }

    // 0x100983ce0, 16 bytes, complete-object constructor, placed by class name and debug map
    // AnimKeyFrameSet::AnimKeyFrameSet(unsigned int, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ArchiveSettings const&): jumps straight to the base-object constructor

    // 0x100983cf0, 1200 bytes, placed by class name and debug map
    // AnimKeyFrameSet::Load()
    ulong AnimKeyFrameSet::Load() {
        undefined1* puVar1;
        AnimKeyFrameSet* pAVar2;
        char cVar3;
        undefined1 uVar5;
        ushort uVar7;
        ushort uVar8;
        short sVar9;
        int iVar10;
        PacketT<Array<unsigned char, eastl::allocator>>* this_00;
        undefined* puVar12;
        ushort* puVar13;
        AnimBase* pAVar14;
        SceneManager* this_01;
        map<short, short, eastl::less<short>, eastl::allocator>* this_02;
        short* psVar15;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* pvVar16;
        vector<AnimCurve, eastl::allocator>* pvVar17;
        AnimCurve* pAVar18;
        TextureAtlasReference* this_03;
        PacketT* pPVar20;
        undefined8 unaff_RBX;
        Js5ArchiveSettings* pJVar21;
        uint uVar22;
        ulong uVar23;
        AnimCurve local_a8;
        shared_ptr local_78;
        undefined1* local_68;
        uint local_5c;
        vector<eastl::vector<AnimCurve, eastl::allocator>, eastl::allocator>* local_58;
        vector<eastl::vector<AnimCurve, eastl::allocator>, eastl::allocator>* local_50;
        shared_ptr<AnimBase>* local_48;
        AnimKeyFrameSet* local_40;
        ushort local_34;
        short local_32;

        cVar3 = IsLoaded(this);
        uVar23 = CONCAT71((int7)((ulong)unaff_RBX >> 8), 1);
        if (cVar3 == '\0') {
            field_0 = FrameTime::GetCurrentTimeMS();
            puVar1 = field_120;
            if (!puVar1->operator_cast_to_bool()) {
                uVar23 = 0;
                puVar12 =
                    (undefined*)(*(code*)field_88->field_0[6])(field_88, field_104, field_80, 0, Priority::HIGH, 1);
                if (puVar12 != DataStatus::READY)
                    goto LAB_10098413a;
                (field_88, (shared_ptr*)puVar1, field_104, field_80, 0, (Priority*)Priority::HIGH, true, false, false)
                    ->GetFile();
                this_03 =
                    (TextureAtlasReference*)shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                        (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)puVar1);
                if (this_03->GetTextureAtlas() == 0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("m_keyFrameData->GetSize() > 0",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "animation/AnimKeyFrameSet.cpp",
                              49, "AnimKeyFrameSet: No data received for set - groupID: %i", (ulong)field_80);
                }
            }
            this_00 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                    (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)puVar1);
            this_00->SetPos(0);
            this_00->g1();
            local_34 = this_00->g2();
            pJVar21 = field_96;
            puVar12 = (undefined*)(*(code*)field_88->field_0[6])(field_88, pJVar21, local_34, 0, Priority::HIGH, 1);
            local_5c = (uint)CONCAT71((int7)((ulong)puVar12 >> 8), puVar12 == DataStatus::READY);
            if (puVar12 == DataStatus::READY) {
                local_68 = puVar1;
                local_40 = this;
                new (&local_78) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(pJVar21);
                pAVar2 = local_40;
                pPVar20 = (PacketT*)(ulong)local_34;
                (local_40->field_88, &local_78, local_40->field_96, (uint)local_34, 0, (Priority*)Priority::HIGH, true,
                 false, false)
                    ->GetFile();
                puVar13 = (ushort*)shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                    (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_78);
                MakeSharedPool<AnimBase, 256>::MakeShared<unsigned short&,
                                                          PacketT<Array<unsigned char, eastl::allocator>>&>(
                    (shared_ptr*)&local_a8, (MakeSharedPool<AnimBase, 256>*)&local_34, puVar13, pPVar20);
                local_48 = (shared_ptr<AnimBase>*)pAVar2->m_pBase;
                shared_ptr<AnimBase>::operator=(local_48, (shared_ptr*)&local_a8);
                local_a8.~shared_ptr();
                uVar7 = this_00->g2();
                pAVar2->field_72 = uVar7;
                uVar7 = this_00->g2();
                pAVar2->m_end = uVar7;
                uVar5 = this_00->g1();
                pAVar2->m_bindID = uVar5;
                uVar7 = this_00->g2();
                pAVar14 = (AnimBase*)shared_ptr<AnimBase>::operator->(local_48);
                puVar1 = &local_40->field_8;
                uVar8 = pAVar14->GetTransformCount();
                local_50 = (vector<eastl::vector<AnimCurve, eastl::allocator>, eastl::allocator>*)puVar1;
                puVar1->resize((ulong)uVar8);
                pAVar14 = (AnimBase*)shared_ptr<AnimBase>::operator->(local_48);
                puVar1 = &local_40->field_40;
                sVar9 = pAVar14->GetNumJoints();
                local_58 = (vector<eastl::vector<AnimCurve, eastl::allocator>, eastl::allocator>*)puVar1;
                puVar1->resize((long)sVar9);
                if (uVar7 != 0) {
                    uVar22 = (uint)uVar7;
                    do {
                        cVar3 = this_00->g1();
                        if (cVar3 == '\x03') {
                            *(undefined1*)&local_40->m_animatesColour = 1;
                        } else if (cVar3 == '\x02') {
                            local_40->m_animatesBillboards = 1;
                        } else if (cVar3 == '\x04') {
                            *(undefined1*)((long)&local_40->m_animatesColour + 1) = 1;
                        }
                        sVar9 = this_00->gSmart1or2s();
                        local_32 = sVar9;
                        if (cVar3 == '\x01') {
                            this_01 = (SceneManager*)shared_ptr<AnimBase>::operator->(local_48);
                            this_02 = (map<short, short, eastl::less<short>, eastl::allocator>*)
                                          this_01->GetEntityHighlightGlobalState();
                            psVar15 =
                                (short*)eastl::map<short, short, eastl::less<short>, eastl::allocator>::operator[](
                                    this_02, &local_32);
                            uVar23 = (ulong)*psVar15;
                            iVar10 = AnimTypes::GetComponentCount(1);
                            pvVar16 = (vector<
                                       int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                                eastl::vector<eastl::vector<AnimCurve, eastl::allocator>, eastl::allocator>::operator[](
                                    local_58, uVar23);
                            cVar3 = eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true,
                                                                                     eastl::allocator>>::empty(pvVar16);
                            if (cVar3 != '\0') {
                                pvVar17 = (vector<AnimCurve, eastl::allocator>*)
                                    eastl::vector<eastl::vector<AnimCurve, eastl::allocator>,
                                                  eastl::allocator>::operator[](local_58, uVar23);
                                eastl::vector<AnimCurve, eastl::allocator>::resize(pvVar17, (long)iVar10);
                            }
                            uVar5 = this_00->g1();
                            pvVar17 = (vector<AnimCurve, eastl::allocator>*)
                                eastl::vector<eastl::vector<AnimCurve, eastl::allocator>, eastl::allocator>::operator[](
                                    local_58, uVar23);
                            iVar10 = AnimTypes::GetGroupIndex(uVar5);
                            pAVar18 = (AnimCurve*)eastl::vector<AnimCurve, eastl::allocator>::operator[](pvVar17,
                                                                                                         (long)iVar10);
                            pAVar18->LoadFromPacket(this_00);
                        } else {
                            iVar10 = AnimTypes::GetComponentCount(cVar3);
                            pvVar16 = (vector<
                                       int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                                eastl::vector<eastl::vector<AnimCurve, eastl::allocator>, eastl::allocator>::operator[](
                                    local_50, (long)sVar9);
                            if (eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true,
                                                                                 eastl::allocator>>::empty(pvVar16) !=
                                '\0') {
                                pvVar17 = (vector<AnimCurve, eastl::allocator>*)
                                    eastl::vector<eastl::vector<AnimCurve, eastl::allocator>,
                                                  eastl::allocator>::operator[](local_50, (long)local_32);
                                eastl::vector<AnimCurve, eastl::allocator>::resize(pvVar17, (long)iVar10);
                            }
                            uVar5 = this_00->g1();
                            iVar10 = AnimTypes::GetGroupIndex(uVar5);
                            if ((cVar3 == '\x03') && (2 < iVar10)) {
                                new (&local_a8) AnimCurve();
                                local_a8.LoadFromPacket(this_00);
                                local_a8.~AnimCurve();
                            } else {
                                pvVar17 = (vector<AnimCurve, eastl::allocator>*)
                                    eastl::vector<eastl::vector<AnimCurve, eastl::allocator>,
                                                  eastl::allocator>::operator[](local_50, (long)local_32);
                                pAVar18 = (AnimCurve*)eastl::vector<AnimCurve, eastl::allocator>::operator[](
                                    pvVar17, (long)iVar10);
                                pAVar18->LoadFromPacket(this_00);
                            }
                        }
                        uVar22 = uVar22 - 1;
                    } while (uVar22 != 0);
                }
                shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::reset();
                local_78.~shared_ptr();
            }
            uVar23 = (ulong)local_5c;
        }
    LAB_10098413a:
        return uVar23 & 4294967295;
    }

    // 0x1009844d0, 688 bytes, placed by class name
    // AnimKeyFrameSet::GetRuntimeTransforms(VertexTransformData&, WrapArray<WrapArray<AnimCurveSegmentCacheData> >&, float, Array<bool, eastl::allocator> const*, bool)
    void AnimKeyFrameSet::GetRuntimeTransforms(VertexTransformData* param_1, WrapArray* param_2, float param_3,
                                               Array* param_4, bool param_5) {
        bool bVar1;
        byte bVar2;
        char cVar3;
        long lVar4;
        ulong uVar5;
        AnimBase* pAVar6;
        char* pcVar7;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_00;
        undefined8 uVar8;
        vector* pvVar9;
        undefined8 uVar10;
        uint uVar11;
        type* ptVar12;
        type* ptVar13;
        undefined7 in_register_00000081;
        shared_ptr<AnimBase>* this_01;
        ulong uVar14;
        undefined1 local_e8[72];
        undefined8 local_a0;
        WrapArray<WrapArray<AnimCurveSegmentCacheData>>* local_98;
        vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>* local_90;
        Array* local_88;
        shared_ptr<AnimBase>* local_80;
        ulong local_78;
        AnimKeyFrameSet* local_70;
        Vector3T<int> local_68[8];
        uint local_60;
        undefined8 local_58;
        uint local_4c;
        undefined4 local_48;
        undefined1 local_44[12];
        long local_38;

        local_48 = (undefined4)CONCAT71(in_register_00000081, param_5);
        local_98 = (WrapArray<WrapArray<AnimCurveSegmentCacheData>>*)param_2;
        local_88 = param_4;
        local_44._0_4_ = param_3;
        local_44._4_8_ = param_1;
        math::Vector3T<int>::Vector3T(local_68);
        local_90 = (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                           eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>*)&field_8;
        local_70 = this;
        lVar4 =
            eastl::vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                          eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::size(local_90);
        if (lVar4 != 0) {
            this_01 = (shared_ptr<AnimBase>*)local_70->m_pBase;
            local_78 = 0;
            local_38 = 0;
            uVar5 = 0;
            uVar14 = 1;
            local_80 = this_01;
            do {
                uVar11 = (int)uVar14 - 1;
                pAVar6 = (AnimBase*)shared_ptr<AnimBase>::operator->(this_01);
                bVar2 = pAVar6->GetTransformType(uVar11);
                if (((local_88 == (Array*)0) || (pcVar7 = (char*)Array<bool, eastl::allocator>::operator[](
                                                     (Array<bool, eastl::allocator>*)local_88, uVar5),
                                                 *pcVar7 == (char)local_48)) ||
                    (bVar2 == 0)) {
                    pAVar6 = (AnimBase*)shared_ptr<AnimBase>::operator->(this_01);
                    local_a0 = pAVar6->GetTransformLabels(uVar11);
                    local_4c = uVar11;
                    if (bVar2 == 0) {
                        pAVar6 = (AnimBase*)shared_ptr<AnimBase>::operator->(this_01);
                        uVar11 = (uint)local_78;
                        local_38 = pAVar6->GetJointByOriginMappedID(uVar11, local_70->m_bindID);
                        local_78 = (ulong)(uVar11 + 1);
                        if (local_38 != 0) {
                            local_e8->GetWorldBind();
                            local_58 = ((local_e8 + 48))->GetXYZ();
                            local_68->SetXYZ((Vector3T*)&local_58);
                            local_60 = local_60 ^ 2147483648;
                        }
                    }
                    this_00 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                        eastl::vector<eastl::vector<AnimCurve, eastl::allocator>, eastl::allocator>::operator[](
                            (vector<eastl::vector<AnimCurve, eastl::allocator>, eastl::allocator>*)local_90, uVar5);
                    cVar3 = eastl::vector<
                        int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(this_00);
                    if (cVar3 == '\0') {
                        new (local_e8) AnimationFrameRT5Transform();
                        uVar8 = WrapArray<WrapArray<AnimCurveSegmentCacheData>>::operator[](local_98, uVar5);
                        new (&local_58) math::Vector3T<float>(-1.0);
                        ptVar12 = (type*)(ulong)bVar2;
                        ptVar13 = ptVar12;
                        local_44._0_4_->ConvertFromCurves(local_e8, ptVar12, local_4c, this_00, uVar8, &local_58,
                                                          local_38);
                        uVar8 = local_a0;
                        if (bVar2 != 0) {
                            pvVar9 = local_44._4_8_->SSOBeginPtr(ptVar13);
                            cVar3 = AnimationHelper::ApplyBoneTransform(ptVar12, uVar8, local_e8 + 4, local_e8 + 16,
                                                                        local_e8 + 40, 1, local_68, pvVar9);
                            if (cVar3 == '\0') {
                                uVar10 = local_44._4_8_->GetDefaultValue();
                                cVar3 = AnimationHelper::ApplyBillboardTransform(ptVar12, uVar8, local_e8 + 4, uVar10);
                                if (cVar3 == '\0') {
                                    uVar10 = local_44._4_8_->GetScreen();
                                    AnimationHelper::ApplyColourTransform(ptVar12, uVar8, local_e8 + 4, uVar10, 1);
                                }
                            }
                        }
                    }
                    this_01 = local_80;
                }
                uVar5 = eastl::vector<
                    Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                    eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::size(local_90);
                bVar1 = uVar14 < uVar5;
                uVar5 = uVar14;
                uVar14 = (ulong)((int)uVar14 + 1);
            } while (bVar1);
        }
    }

    // 0x100984f20, 352 bytes, placed by class name
    // AnimKeyFrameSet::GetColourLabelDeltas(WrapArray<float>&, Array<unsigned short, eastl::allocator> const&, float, eastl::vector<AnimCurve, eastl::allocator> const&, WrapArray<AnimCurveSegmentCacheData>&) const
    void AnimKeyFrameSet::GetColourLabelDeltas(WrapArray* param_1, Array* param_2, float param_3, vector* param_4,
                                               WrapArray* param_5) {
        ushort uVar1;
        int iVar2;
        ushort* puVar3;
        ushort* puVar4;
        float* pfVar5;
        AnimKeyFrameSet* pAVar6;
        float fVar7;

        puVar3 = (ushort*)param_2->data();
        puVar4 = (ushort*)param_2->end();
        for (; puVar3 != puVar4; puVar3 = puVar3 + 1) {
            uVar1 = *puVar3;
            pAVar6 = (AnimKeyFrameSet*)&AnimationConstants::IDENTITY_LABELDELTAS;
            pfVar5 = (float*)Array<float, eastl::allocator>::operator[](
                (Array<float, eastl::allocator>*)&AnimationConstants::IDENTITY_LABELDELTAS, 0);
            fVar7 = (float)SampleCurveWithDefault(pAVar6, param_4, param_5, 0, param_3, *pfVar5);
            pfVar5 = (float*)WrapArray<float>::operator[]((WrapArray<float>*)param_1, (ulong)uVar1 * 4);
            *pfVar5 = fVar7 + *pfVar5;
            pAVar6 = (AnimKeyFrameSet*)&AnimationConstants::IDENTITY_LABELDELTAS;
            pfVar5 = (float*)Array<float, eastl::allocator>::operator[](
                (Array<float, eastl::allocator>*)&AnimationConstants::IDENTITY_LABELDELTAS, 1);
            fVar7 = (float)SampleCurveWithDefault(pAVar6, param_4, param_5, 1, param_3, *pfVar5);
            iVar2 = (int)((ulong)uVar1 * 4);
            pfVar5 = (float*)WrapArray<float>::operator[]((WrapArray<float>*)param_1, (ulong)(iVar2 + 1));
            *pfVar5 = fVar7 + *pfVar5;
            pAVar6 = (AnimKeyFrameSet*)&AnimationConstants::IDENTITY_LABELDELTAS;
            pfVar5 = (float*)Array<float, eastl::allocator>::operator[](
                (Array<float, eastl::allocator>*)&AnimationConstants::IDENTITY_LABELDELTAS, 2);
            fVar7 = (float)SampleCurveWithDefault(pAVar6, param_4, param_5, 2, param_3, *pfVar5);
            pfVar5 = (float*)WrapArray<float>::operator[]((WrapArray<float>*)param_1, (ulong)(iVar2 + 2));
            *pfVar5 = fVar7 + *pfVar5;
        }
    }

    // 0x100985080, 144 bytes, placed by class name
    // AnimKeyFrameSet::SampleCurveWithDefault(eastl::vector<AnimCurve, eastl::allocator> const&, WrapArray<AnimCurveSegmentCacheData>&, unsigned int, float, float) const
    undefined8 AnimKeyFrameSet::SampleCurveWithDefault(vector* param_1, WrapArray* param_2, uint param_3, float param_4,
                                                       float param_5) {
        ulong uVar1;
        AnimCurve* pAVar2;
        AnimCurveSegmentCacheData* pAVar3;
        int iVar4;
        undefined4 uVar7;
        undefined8 uVar6;

        uVar1 = param_1->size();
        if ((ulong)param_3 < uVar1) {
            pAVar2 = (AnimCurve*)eastl::vector<AnimCurve, eastl::allocator>::operator[](
                (vector<AnimCurve, eastl::allocator>*)param_1, (ulong)param_3);
            iVar4 = pAVar2->GetNumKeys();
            uVar7 = 0;
            if (0 < iVar4) {
                pAVar2 = (AnimCurve*)eastl::vector<AnimCurve, eastl::allocator>::operator[](
                    (vector<AnimCurve, eastl::allocator>*)param_1, (ulong)param_3);
                pAVar3 = (AnimCurveSegmentCacheData*)WrapArray<AnimCurveSegmentCacheData>::operator[](
                    (WrapArray<AnimCurveSegmentCacheData>*)param_2, (ulong)param_3);
                uVar6 = pAVar2->GetValue(param_4, pAVar3);
                uVar7 = (undefined4)((ulong)uVar6 >> 32);
                param_5 = (float)uVar6;
            }
        } else {
            uVar7 = 0;
        }
        return CONCAT44(uVar7, param_5);
    }

    // 0x100985110, 176 bytes, placed by class name
    // AnimKeyFrameSet::GetAlphaLabelDeltas(WrapArray<float>&, Array<unsigned short, eastl::allocator> const&, float, eastl::vector<AnimCurve, eastl::allocator> const&, WrapArray<AnimCurveSegmentCacheData>&) const
    void AnimKeyFrameSet::GetAlphaLabelDeltas(WrapArray* param_1, Array* param_2, float param_3, vector* param_4,
                                              WrapArray* param_5) {
        ushort uVar1;
        ushort* puVar2;
        ushort* puVar3;
        float* pfVar4;
        AnimKeyFrameSet* this_00;
        float fVar5;

        puVar2 = (ushort*)param_2->data();
        puVar3 = (ushort*)param_2->end();
        for (; puVar2 != puVar3; puVar2 = puVar2 + 1) {
            uVar1 = *puVar2;
            this_00 = (AnimKeyFrameSet*)&AnimationConstants::IDENTITY_DELTA;
            pfVar4 = (float*)Array<float, eastl::allocator>::operator[](
                (Array<float, eastl::allocator>*)&AnimationConstants::IDENTITY_DELTA, 3);
            fVar5 = (float)SampleCurveWithDefault(this_00, param_4, param_5, 0, param_3, *pfVar4);
            pfVar4 = (float*)WrapArray<float>::operator[]((WrapArray<float>*)param_1, (ulong)uVar1 * 4 + 3);
            *pfVar4 = fVar5 + *pfVar4;
        }
    }

    // 0x1009851c0, 688 bytes, placed by class name
    // AnimKeyFrameSet::GetBillboardTransforms(WrapArray<float>&, Array<unsigned short, eastl::allocator> const&, AnimTransform, float, eastl::vector<AnimCurve, eastl::allocator> const&, WrapArray<AnimCurveSegmentCacheData>&) const
    void AnimKeyFrameSet::GetBillboardTransforms(
        float param_1_00, undefined8 param_2_00, WrapArray<float>* param_1,
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* param_2,
        char param_5, vector* param_6, WrapArray* param_7) {
        ushort uVar1;
        ushort* puVar2;
        ushort* puVar3;
        float* pfVar4;
        AnimKeyFrameSet* pAVar5;
        float fVar6;

        if (param_5 == '\n') {
            puVar2 = (ushort*)param_2->data();
            puVar3 = (ushort*)param_2->end();
            for (; puVar2 != puVar3; puVar2 = puVar2 + 1) {
                uVar1 = *puVar2;
                pAVar5 = (AnimKeyFrameSet*)&AnimationConstants::IDENTITY_BILLBOARDTRANSFORM;
                pfVar4 = (float*)Array<float, eastl::allocator>::operator[](
                    (Array<float, eastl::allocator>*)&AnimationConstants::IDENTITY_BILLBOARDTRANSFORM, 2);
                fVar6 = (float)SampleCurveWithDefault(pAVar5, param_6, param_7, 6, param_1_00, *pfVar4);
                pfVar4 = (float*)WrapArray<float>::operator[](param_1, (ulong)uVar1 * 8 + 2);
                *pfVar4 = fVar6 * *pfVar4;
                pAVar5 = (AnimKeyFrameSet*)&AnimationConstants::IDENTITY_BILLBOARDTRANSFORM;
                pfVar4 = (float*)Array<float, eastl::allocator>::operator[](
                    (Array<float, eastl::allocator>*)&AnimationConstants::IDENTITY_BILLBOARDTRANSFORM, 3);
                fVar6 = (float)SampleCurveWithDefault(pAVar5, param_6, param_7, 7, param_1_00, *pfVar4);
                pfVar4 = (float*)WrapArray<float>::operator[](param_1, (ulong)((uint)uVar1 * 8 | 3));
                *pfVar4 = fVar6 * *pfVar4;
            }
        } else if (param_5 == '\t') {
            puVar2 = (ushort*)param_2->data();
            puVar3 = (ushort*)param_2->end();
            for (; puVar2 != puVar3; puVar2 = puVar2 + 1) {
                uVar1 = *puVar2;
                pAVar5 = (AnimKeyFrameSet*)&AnimationConstants::IDENTITY_BILLBOARDTRANSFORM;
                pfVar4 = (float*)Array<float, eastl::allocator>::operator[](
                    (Array<float, eastl::allocator>*)&AnimationConstants::IDENTITY_BILLBOARDTRANSFORM, 4);
                fVar6 = (float)SampleCurveWithDefault(pAVar5, param_6, param_7, 0, param_1_00, *pfVar4);
                pfVar4 = (float*)WrapArray<float>::operator[](param_1, (ulong)uVar1 * 8 + 4);
                *pfVar4 = fVar6 + *pfVar4;
            }
        } else if (param_5 == '\b') {
            puVar2 = (ushort*)param_2->data();
            puVar3 = (ushort*)param_2->end();
            for (; puVar2 != puVar3; puVar2 = puVar2 + 1) {
                uVar1 = *puVar2;
                pAVar5 = (AnimKeyFrameSet*)&AnimationConstants::IDENTITY_BILLBOARDTRANSFORM;
                pfVar4 = (float*)Array<float, eastl::allocator>::operator[](
                    (Array<float, eastl::allocator>*)&AnimationConstants::IDENTITY_BILLBOARDTRANSFORM, 0);
                fVar6 = (float)SampleCurveWithDefault(pAVar5, param_6, param_7, 3, param_1_00, *pfVar4);
                pfVar4 = (float*)WrapArray<float>::operator[](param_1, (ulong)uVar1 * 8);
                *pfVar4 = fVar6 + *pfVar4;
                pAVar5 = (AnimKeyFrameSet*)&AnimationConstants::IDENTITY_BILLBOARDTRANSFORM;
                pfVar4 = (float*)Array<float, eastl::allocator>::operator[](
                    (Array<float, eastl::allocator>*)&AnimationConstants::IDENTITY_BILLBOARDTRANSFORM, 1);
                fVar6 = (float)SampleCurveWithDefault(pAVar5, param_6, param_7, 4, param_1_00, *pfVar4);
                pfVar4 = (float*)WrapArray<float>::operator[](param_1, (ulong)((int)((ulong)uVar1 * 8) + 1));
                *pfVar4 = fVar6 + *pfVar4;
            }
        }
    }

    // 0x100985470, 2992 bytes, placed by class name
    // AnimKeyFrameSet::RenderCurveDebug(math::Matrix44T<float> const&, int, int, float, float, float)
    void AnimKeyFrameSet::RenderCurveDebug(Matrix44T* param_1, int param_2, int param_3, float param_4, float param_5,
                                           float param_6) {
        uint uVar1;
        Array<AnimKey, eastl::allocator>* pAVar2;
        char cVar3;
        ushort uVar4;
        ushort uVar5;
        long lVar6;
        ulong uVar7;
        long* plVar8;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_00;
        AnimCurve* this_01;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_02;
        ulong uVar9;
        short* psVar10;
        undefined8 uVar11;
        undefined1* this_04;
        float fVar12;
        float fVar13;
        float fVar14;
        undefined4 in_XMM1_Db;
        undefined4 in_XMM1_Dc;
        undefined4 in_XMM1_Dd;
        undefined4 in_XMM2_Db;
        undefined4 in_XMM2_Dc;
        undefined4 in_XMM2_Dd;
        Matrix44T local_228;
        undefined1 local_1e8[48];
        undefined1 local_1b8[16];
        undefined1 local_1a8[16];
        undefined1 local_198[16];
        undefined1 local_188[16];
        ulong local_178;
        vector<eastl::vector<AnimCurve, eastl::allocator>, eastl::allocator>* local_170;
        float local_168;
        undefined4 uStack_164;
        undefined4 uStack_160;
        undefined4 uStack_15c;
        undefined1 local_158[16];
        ColourHSL local_140;
        ulong local_130;
        undefined4 uStack_124;
        undefined4 uStack_120;
        undefined4 uStack_11c;
        undefined8 local_118;
        float local_110;
        float local_108;
        float local_104;
        float local_fc;
        float local_f8;
        undefined4 uStack_f4;
        undefined4 uStack_f0;
        undefined4 uStack_ec;
        ColourHSL local_e8;
        ColourHSL local_d8;
        ColourHSL local_c8;
        ColourHSL local_b8;
        undefined8 local_a8;
        undefined4 uStack_a0;
        undefined4 uStack_9c;
        ColourHSL local_90;
        ColourHSL local_80;
        undefined8 local_70;
        float local_68;
        undefined8 local_60;
        float local_58;
        ulong local_50;
        ColourHSL local_48;
        undefined8 local_38;

        local_38 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)CONCAT44(local_38._4_4_, param_4);
        uStack_124 = in_XMM2_Db;
        uStack_120 = in_XMM2_Dc;
        uStack_11c = in_XMM2_Dd;
        local_a8 = param_1;
        new (local_1b8) oldscape::sidebars::SideBarData(-65536, 1);
        new ((local_1b8 + 8)) oldscape::sidebars::SideBarData(-16711936, 1);
        new (local_1a8) oldscape::sidebars::SideBarData(-16776961, 1);
        new ((local_1a8 + 8)) oldscape::sidebars::SideBarData(-65536, 1);
        new (local_198) oldscape::sidebars::SideBarData(-16711936, 1);
        new ((local_198 + 8)) oldscape::sidebars::SideBarData(-16776961, 1);
        math::Matrix44Identity<float>(&local_228, (math*)4278190335);
        local_50 = CONCAT44(local_50._4_4_, (float)m_end);
        local_f8 = (float)field_72;
        new (local_1e8) math::Vector3T<float>(60.0);
        local_228.Scale(local_1e8);
        this_04 = &field_8;
        lVar6 = this_04->size();
        uVar7 = eastl::min_alt<unsigned long>(lVar6 - 1, (long)param_2);
        local_170 = (vector<eastl::vector<AnimCurve, eastl::allocator>, eastl::allocator>*)this_04;
        lVar6 = this_04->size();
        local_130 = eastl::min_alt<unsigned long>(lVar6 - 1, (long)(param_2 + param_3 + -1));
        local_168 = param_6 + param_6 + 1.0;
        uStack_164 = uStack_124;
        uStack_160 = uStack_120;
        uStack_15c = uStack_11c;
        uVar1 = param_3 * 3;
        if ((long)(int)uVar1 < 0) {
            fVar14 = (float)((ulong)(uVar1 & 1) | (ulong)(long)(int)uVar1 >> 1);
            fVar14 = fVar14 + fVar14;
        } else {
            fVar14 = (float)(int)uVar1;
        }
        fVar12 = local_f8 - (float)local_50;
        local_f8 = fVar14 * local_168;
        uStack_f4 = in_XMM1_Db;
        uStack_f0 = in_XMM1_Dc;
        uStack_ec = in_XMM1_Dd;
        new (local_1e8) math::ColourHSL(fVar12 * 0.5, fVar14 * local_168, 0.0);
        local_228.Translate(local_1e8);
        math::Matrix44T<float>::operator*=((Matrix44T<float>*)&local_228, local_a8);
        plVar8 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
        if (plVar8 != (long*)0) {
            fVar14 = 1.0;
            new (&local_c8) math::ColourHSL((float)local_38, 1.0, 0.0);
            local_1e8._0_8_ = math::operator*((Vector3T*)&local_c8, &local_228);
            fVar12 = -local_f8;
            local_1e8._8_4_ = fVar14;
            new (&local_e8) math::ColourHSL((float)local_38, fVar12, 0.0);
            local_118 = math::operator*((Vector3T*)&local_e8, &local_228);
            local_110 = fVar12;
            new (&local_b8) oldscape::sidebars::SideBarData(-1, 1);
            (**(code**)(*plVar8 + 24))(plVar8, local_1e8, &local_118, &local_b8);
        }
        new (&local_c8) math::Vector3T<float>(0.0);
        if (uVar7 <= local_130) {
            fVar14 = -param_6;
            local_fc = local_168 * 3.0;
            do {
                this_00 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                    eastl::vector<eastl::vector<AnimCurve, eastl::allocator>, eastl::allocator>::operator[](local_170,
                                                                                                            uVar7);
                cVar3 = eastl::vector<
                    int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(this_00);
                local_178 = uVar7;
                if (cVar3 == '\0') {
                    lVar6 = this_00->size();
                    if (lVar6 != 0) {
                        uVar7 = 0;
                        local_188._8_8_ = this_00;
                        do {
                            this_01 = (AnimCurve*)eastl::vector<AnimCurve, eastl::allocator>::operator[](
                                (vector<AnimCurve, eastl::allocator>*)this_00, uVar7);
                            this_02 =
                                (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_01->second();
                            lVar6 =
                                eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_02);
                            local_50 = uVar7;
                            if (lVar6 == 0) {
                                local_38 = (vector<oldscape::dash3d::EntityHighlight*,
                                                   BucketAllocatorEASTL>*)((ulong)local_38._4_4_ << 32);
                            } else {
                                local_38 = (vector<oldscape::dash3d::EntityHighlight*,
                                                   BucketAllocatorEASTL>*)((ulong)local_38._4_4_ << 32);
                                uVar7 = 0;
                                do {
                                    lVar6 = Array<AnimKey, eastl::allocator>::operator[](
                                        (Array<AnimKey, eastl::allocator>*)this_02, uVar7);
                                    fVar13 = (float)::abs(*(float*)(lVar6 + 4));
                                    fVar12 = (float)local_38;
                                    if ((float)local_38 <= fVar13) {
                                        fVar12 = fVar13;
                                    }
                                    local_38 =
                                        (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)CONCAT44(
                                            local_38._4_4_, fVar12);
                                    uVar7 = uVar7 + 1;
                                    uVar9 =
                                        eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(
                                            this_02);
                                } while (uVar7 < uVar9);
                            }
                            local_158 = ZEXT416((uint)(1.0 / (float)local_38));
                            uVar4 = this_01->GetStart();
                            uVar5 = this_01->GetEnd();
                            new (&local_118) math::Vector3T<int>();
                            new (local_1e8) AnimCurveSegmentCacheData();
                            fVar12 = (float)uVar4;
                            local_104 = (float)uVar5;
                            local_f8 = (float)local_158._0_4_ * param_6;
                            uStack_f4 = local_158._4_4_;
                            uStack_f0 = local_158._8_4_;
                            uStack_ec = local_158._12_4_;
                            local_108 = fVar12;
                            local_38 = this_02;
                            if (fVar12 <= local_104) {
                                do {
                                    local_a8 = (Matrix44T*)CONCAT44(local_a8._4_4_, fVar12);
                                    fVar12 = (float)this_01->GetValue(fVar12, local_1e8);
                                    fVar12 = fVar12 * local_f8;
                                    new (&local_b8) math::ColourHSL((float)local_a8, fVar12, 0.0);
                                    local_e8._0_8_ = math::operator+((Vector3T*)&local_c8, (Vector3T*)&local_b8);
                                    local_e8.field_8 = fVar12;
                                    if ((local_108 < (float)local_a8) &&
                                        (plVar8 = (long*)DebugPrimitiveCollectorBasic::GetCollector(""),
                                         plVar8 != (long*)0)) {
                                        local_b8._0_8_ = math::operator*((Vector3T*)&local_118, &local_228);
                                        this_02 = local_38;
                                        local_b8.field_8 = fVar12;
                                        local_80._0_8_ = math::operator*((Vector3T*)&local_e8, &local_228);
                                        local_80.field_8 = fVar12;
                                        uVar11 = std::array<DebugDataBasic, 6ul>::operator[](
                                            (array<DebugDataBasic, 6ul>*)local_1b8, local_50);
                                        (**(code**)(*plVar8 + 24))(plVar8, &local_b8, &local_80, uVar11);
                                    }
                                    local_118.SetXYZ((Vector3T*)&local_e8);
                                    fVar12 = (float)local_a8 + param_5;
                                } while (fVar12 <= local_104);
                            }
                            lVar6 =
                                eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_02);
                            if (lVar6 != 0) {
                                local_158._0_8_ =
                                    CONCAT44(local_158._4_4_, -(float)local_158._0_4_ * param_6) ^ 9223372036854775808;
                                local_158._8_4_ = local_158._8_4_ ^ 2147483648;
                                local_158._12_4_ = local_158._12_4_ ^ 2147483648;
                                uVar7 = 0;
                                do {
                                    psVar10 = (short*)Array<AnimKey, eastl::allocator>::operator[](
                                        (Array<AnimKey, eastl::allocator>*)this_02, uVar7);
                                    fVar12 = param_6;
                                    new (&local_b8) math::ColourHSL((float)(int)*psVar10, param_6, 0.0);
                                    local_e8._0_8_ = math::operator+((Vector3T*)&local_c8, (Vector3T*)&local_b8);
                                    local_e8.field_8 = fVar12;
                                    psVar10 = (short*)Array<AnimKey, eastl::allocator>::operator[](
                                        (Array<AnimKey, eastl::allocator>*)this_02, uVar7);
                                    fVar12 = fVar14;
                                    new (&local_80) math::ColourHSL((float)(int)*psVar10, fVar14, 0.0);
                                    local_b8._0_8_ = math::operator+((Vector3T*)&local_c8, (Vector3T*)&local_80);
                                    local_b8.field_8 = fVar12;
                                    plVar8 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                                    if (plVar8 != (long*)0) {
                                        local_80._0_8_ = math::operator*((Vector3T*)&local_e8, &local_228);
                                        local_80.field_8 = fVar12;
                                        local_48._0_8_ = math::operator*((Vector3T*)&local_b8, &local_228);
                                        local_48.field_8 = fVar12;
                                        uVar11 = std::array<DebugDataBasic, 6ul>::operator[](
                                            (array<DebugDataBasic, 6ul>*)local_1b8, local_50);
                                        (**(code**)(*plVar8 + 24))(plVar8, &local_80, &local_48, uVar11);
                                    }
                                    pAVar2 = (Array<AnimKey, eastl::allocator>*)local_38;
                                    lVar6 = Array<AnimKey, eastl::allocator>::operator[](
                                        (Array<AnimKey, eastl::allocator>*)local_38, uVar7);
                                    local_a8 = (Matrix44T*)CONCAT44(local_a8._4_4_, *(float*)(lVar6 + 4) * local_f8);
                                    psVar10 = (short*)Array<AnimKey, eastl::allocator>::operator[](pAVar2, uVar7);
                                    fVar12 = (float)local_a8;
                                    new (&local_48) math::ColourHSL((float)(int)*psVar10, (float)local_a8, 0.0);
                                    local_80._0_8_ = math::operator+((Vector3T*)&local_c8, (Vector3T*)&local_48);
                                    local_80.field_8 = fVar12;
                                    plVar8 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                                    if (plVar8 != (long*)0) {
                                        fVar12 = 1.0;
                                        new (&local_d8) math::ColourHSL(1.0, 1.0, 0.0);
                                        local_90._0_8_ = math::operator-((Vector3T*)&local_80, (Vector3T*)&local_d8);
                                        local_90.field_8 = fVar12;
                                        local_48._0_8_ = math::operator*((Vector3T*)&local_90, &local_228);
                                        fVar13 = 1.0;
                                        local_48.field_8 = fVar12;
                                        new (&local_140) math::ColourHSL(1.0, 1.0, 0.0);
                                        local_60 = math::operator+((Vector3T*)&local_80, (Vector3T*)&local_140);
                                        local_58 = fVar13;
                                        local_70 = math::operator*((Vector3T*)&local_60, &local_228);
                                        local_68 = fVar13;
                                        uVar11 = std::array<DebugDataBasic, 6ul>::operator[](
                                            (array<DebugDataBasic, 6ul>*)local_1b8, local_50);
                                        (**(code**)(*plVar8 + 24))(plVar8, &local_48, &local_70, uVar11);
                                    }
                                    plVar8 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                                    if (plVar8 != (long*)0) {
                                        fVar12 = -1.0;
                                        new (&local_d8) math::ColourHSL(1.0, -1.0, 0.0);
                                        local_90._0_8_ = math::operator-((Vector3T*)&local_80, (Vector3T*)&local_d8);
                                        local_90.field_8 = fVar12;
                                        local_48._0_8_ = math::operator*((Vector3T*)&local_90, &local_228);
                                        fVar13 = -1.0;
                                        local_48.field_8 = fVar12;
                                        new (&local_140) math::ColourHSL(1.0, -1.0, 0.0);
                                        local_60 = math::operator+((Vector3T*)&local_80, (Vector3T*)&local_140);
                                        local_58 = fVar13;
                                        local_70 = math::operator*((Vector3T*)&local_60, &local_228);
                                        local_68 = fVar13;
                                        uVar11 = std::array<DebugDataBasic, 6ul>::operator[](
                                            (array<DebugDataBasic, 6ul>*)local_1b8, local_50);
                                        (**(code**)(*plVar8 + 24))(plVar8, &local_48, &local_70, uVar11);
                                    }
                                    pAVar2 = (Array<AnimKey, eastl::allocator>*)local_38;
                                    lVar6 = Array<AnimKey, eastl::allocator>::operator[](
                                        (Array<AnimKey, eastl::allocator>*)local_38, uVar7);
                                    local_a8._0_4_ = -*(float*)(lVar6 + 8);
                                    local_a8._4_4_ = 2147483648;
                                    uStack_a0 = 2147483648;
                                    uStack_9c = 2147483648;
                                    lVar6 = Array<AnimKey, eastl::allocator>::operator[](pAVar2, uVar7);
                                    fVar12 = *(float*)(lVar6 + 12) * (float)local_158._0_4_;
                                    new (&local_90) math::ColourHSL((float)local_a8, fVar12, 0.0);
                                    local_48._0_8_ = math::operator+((Vector3T*)&local_80, (Vector3T*)&local_90);
                                    local_48.field_8 = fVar12;
                                    lVar6 = Array<AnimKey, eastl::allocator>::operator[](pAVar2, uVar7);
                                    local_a8 = (Matrix44T*)CONCAT44(local_a8._4_4_, *(undefined4*)(lVar6 + 16));
                                    lVar6 = Array<AnimKey, eastl::allocator>::operator[](pAVar2, uVar7);
                                    fVar13 = *(float*)(lVar6 + 20) * local_f8;
                                    new (&local_d8) math::ColourHSL((float)local_a8, fVar13, 0.0);
                                    local_90._0_8_ = math::operator+((Vector3T*)&local_80, (Vector3T*)&local_d8);
                                    local_90.field_8 = fVar13;
                                    plVar8 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                                    fVar12 = fVar13;
                                    if (plVar8 != (long*)0) {
                                        local_d8._0_8_ = math::operator*((Vector3T*)&local_48, &local_228);
                                        fVar12 = 0.0;
                                        local_d8.field_8 = fVar13;
                                        new (&local_140) math::ColourHSL(0.0, 0.0, 0.0);
                                        local_60 = math::operator+((Vector3T*)&local_80, (Vector3T*)&local_140);
                                        local_58 = fVar12;
                                        local_70 = math::operator*((Vector3T*)&local_60, &local_228);
                                        local_68 = fVar12;
                                        new (local_188) oldscape::sidebars::SideBarData(-16742264, 1);
                                        (**(code**)(*plVar8 + 24))(plVar8, &local_d8, &local_70,
                                                                   (SideBarData*)local_188);
                                    }
                                    plVar8 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                                    if (plVar8 != (long*)0) {
                                        local_d8._0_8_ = math::operator*((Vector3T*)&local_90, &local_228);
                                        fVar13 = 0.0;
                                        local_d8.field_8 = fVar12;
                                        new (&local_140) math::ColourHSL(0.0, 0.0, 0.0);
                                        local_60 = math::operator+((Vector3T*)&local_80, (Vector3T*)&local_140);
                                        local_58 = fVar13;
                                        local_70 = math::operator*((Vector3T*)&local_60, &local_228);
                                        local_68 = fVar13;
                                        new (local_188) oldscape::sidebars::SideBarData(-7829504, 1);
                                        (**(code**)(*plVar8 + 24))(plVar8, &local_d8, &local_70,
                                                                   (SideBarData*)local_188);
                                    }
                                    this_02 = local_38;
                                    uVar7 = uVar7 + 1;
                                    uVar9 =
                                        eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(
                                            local_38);
                                } while (uVar7 < uVar9);
                            }
                            this_00 =
                                (vector<int,
                                        eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                                    local_188._8_8_;
                            local_c8.field_4 = local_c8.field_4 - local_168;
                            uVar7 = local_50 + 1;
                            uVar9 = local_188._8_8_->size();
                        } while (uVar7 < uVar9);
                    }
                } else {
                    local_c8.field_4 = local_c8.field_4 - local_fc;
                }
                uVar7 = local_178 + 1;
            } while (uVar7 <= local_130);
        }
    }

    // 0x1009a7200, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.77
    void ___cxx_global_var_init_77(undefined8 param_1, _func_decltype_nullptr* param_2) {
        new (&AnimKeyFrameSet::NullAnimKeyFrameset)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
        ___cxa_atexit(PTR__shared_ptr_100ee5368, &AnimKeyFrameSet::NullAnimKeyFrameset, 4294967296);
    }

} // namespace jag::graphics
