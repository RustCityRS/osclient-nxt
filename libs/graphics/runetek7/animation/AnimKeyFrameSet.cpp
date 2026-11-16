// libs/graphics/runetek7/animation/AnimKeyFrameSet.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "AnimKeyFrameSet.h"

namespace jag::graphics {
    // 0x103bc0ef8, set at startup by ___cxx_global_var_init.77
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> AnimKeyFrameSet::NullAnimKeyFrameset =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100009d10: AnimKeyFrameSet::GetLastLoadAttempt() const has the same machine code as eastl::string::Layout::HeapBeginPtr()

    // 0x100009d50: AnimKeyFrameSet::GetCurves() const has the same machine code as eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second()

    // 0x100067280: AnimKeyFrameSet::GetJointCurves() const has the same machine code as game::console::Snow::GetSnowPiles() const

    // 0x10017a5a0: AnimKeyFrameSet::GetBase() const has the same machine code as http::HTTPRequest::GetData() const

    // 0x1004de990: AnimKeyFrameSet::GetAnimatesColour() const has the same machine code as game::SeqGroupType::IsWalkMerge() const

    // 0x100983360
    void AnimKeyFrameSet::GetJointPosesFromKeyFrameData(WrapArray<JointPose> wrapArray, float arg2,
                                                        AnimCurveSegmentCacheBase& animCurveSegmentCacheBase) const {
        vector<eastl::vector<AnimCurve>>* this_01;
        uint8_t local_c0[16];
        Vector3T<int> local_b0;
        uint32_t local_a4;
        uint8_t* local_a0;
        Vector3T<int> local_70;
        Vector3T<int> local_50;

        AnimKeyFrameSet* local_60 = this;
        float local_34 = arg2;
        long lVar1 = wrapArray->HeapBeginPtr();
        if (lVar1 != 0) {
            local_a0 = &local_60->field_136;
            local_a4 = 1;
            ((QuaternionT<float>*)(*wrapArray)[0])->SetToIdentity();
            lVar1 = (*wrapArray)[0];
            *((lVar1 + 16)) = math::Vector4T<float>::SetToZero();
            lVar1 = (*wrapArray)[0];
            *((lVar1 + 32)) = math::Vector4T<float>::SetToOne();
            local_70 = math::Vector3T();
            local_b0 = math::Vector3T();
            local_50 = math::Vector3T();
            this_01 = (vector<eastl::vector<AnimCurve>>*)local_60->get_overflow_allocator();
            (*this_01)[0];
            (animCurveSegmentCacheBase._vptr[2]._dtor)(local_c0);
        }
    }

    // 0x100983a20
    void
    AnimKeyFrameSet::GetLabelDeltasAndBillboardTransforms(WrapArray<float> wrapArray1, WrapArray<float> wrapArray2,
                                                          float arg3,
                                                          AnimCurveSegmentCacheBase& animCurveSegmentCacheBase) const {
        uint8_t local_78[16];
        uint8_t* local_60;
        uint8_t* local_40;

        uint8_t* this_00 = &field_8;
        WrapArray<float>* local_58 = wrapArray2;
        WrapArray<float>* local_50 = wrapArray1;
        AnimKeyFrameSet* local_48 = this;
        float local_34 = arg3;
        if (this_00->size() != 0) {
            local_60 = &local_48->field_136;
            local_40 = this_00;
            (*this_00)[0];
            (animCurveSegmentCacheBase._vptr[2]._dtor)(local_78);
        }
    }

    // 0x100983b90
    AnimKeyFrameSet::AnimKeyFrameSet(unsigned int arg1, Js5ResourceProvider& js5ResourceProvider,
                                     const Js5ArchiveSettings& js5ArchiveSettings1,
                                     const Js5ArchiveSettings& js5ArchiveSettings2)
        : MakeSharedPool<AnimKeyFrameSet, 128>(), field_0(0), field_72(65535), m_end(0), m_bindID(0), field_80(arg1),
          field_88(js5ResourceProvider), field_96(js5ArchiveSettings1), field_104(js5ArchiveSettings2),
          m_animatesColour(0), m_animatesBillboards(0) {
        new (&field_136) shared_ptr();
    }

    // 0x100983cf0
    unsigned long AnimKeyFrameSet::Load() {
        uint8_t* puVar1;
        AnimKeyFrameSet* pAVar2;
        uint8_t uVar4;
        uint8_t bVar6;
        uint8_t bVar7;
        unsigned short uVar8;
        unsigned short uVar9;
        short sVar10;
        int iVar11;
        AnimTargetSubType AVar12;
        PacketT<Array<unsigned char>>* this_00;
        uint64_t extraout_var;
        AnimBase* pAVar14;
        SceneManager* this_01;
        map<short, short>* this_02;
        short* psVar15;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* pvVar16;
        vector<AnimCurve>* pvVar17;
        AnimCurve* pAVar18;
        uint64_t extraout_var_00;
        uint64_t unaff_RBX;
        unsigned int uVar20;
        bool bVar22;
        AnimCurve local_a8;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_78;
        shared_ptr<PacketT<Array<unsigned char>>>* local_68;
        unsigned int local_5c;
        vector<eastl::vector<AnimCurve>>* local_58;
        vector<eastl::vector<AnimCurve>>* local_50;
        shared_ptr<AnimBase>* local_48;
        AnimKeyFrameSet* local_40;
        unsigned short local_34;
        short local_32;

        bool cVar3 = IsLoaded();
        unsigned long uVar21 = (((uint64_t)((int64_t)((unsigned long)unaff_RBX >> 8)) << 8) | (uint8_t)1);
        if (!cVar3) {
            field_0 = FrameTime::GetCurrentTimeMS();
            puVar1 = field_120;
            cVar3 = puVar1->operator_cast_to_bool();
            if (!cVar3) {
                uVar21 = 0;
                uVar4 = field_88->FileReady((unsigned int)field_104, field_80, nullptr, (uint8_t)(Priority::HIGH));
                if ((uint8_t*)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar4) != DataStatus::READY)
                    goto LAB_10098413a;
                field_88->GetFile(*puVar1, *field_104, field_80, 0, (Priority*)Priority::HIGH, true, false, false);
                if (((TextureAtlasReference*)(*puVar1).operator->())->GetTextureAtlas() == 0) {
                    LogAssert("m_keyFrameData->GetSize() > 0",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "animation/AnimKeyFrameSet.cpp",
                              49, "AnimKeyFrameSet: No data received for set - groupID: %i", (unsigned long)field_80);
                }
            }
            this_00 = (PacketT<Array<unsigned char>>*)**puVar1;
            this_00->SetPos(0);
            this_00->g1();
            local_34 = this_00->g2();
            uVar4 =
                field_88->FileReady((unsigned int)field_96, (unsigned int)local_34, nullptr, (uint8_t)(Priority::HIGH));
            bVar22 = (uint8_t*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar4) == DataStatus::READY;
            local_5c = (unsigned int)(((uint64_t)extraout_var << 8) | (uint8_t)bVar22);
            if (bVar22) {
                local_68 = (shared_ptr<PacketT<Array<unsigned char>>>*)puVar1;
                local_40 = this;
                local_78 = shared_ptr();
                pAVar2 = local_40;
                local_40->field_88->GetFile(local_78, *local_40->field_96, (unsigned int)local_34, 0,
                                            (Priority*)Priority::HIGH, true, false, false);
                *local_78;
                MakeSharedPool<AnimBase, 256>::MakeShared<unsigned short&, PacketT<Array<unsigned char>>&>(
                    (unsigned short*)&local_a8, (PacketT<Array<unsigned char> _>*)&local_34);
                local_48 = (shared_ptr<AnimBase>*)&pAVar2->field_136;
                *local_48 = local_a8;
                uVar8 = this_00->g2();
                pAVar2->field_72 = uVar8;
                uVar8 = this_00->g2();
                pAVar2->m_end = uVar8;
                pAVar2->m_bindID = this_00->g1();
                uVar8 = this_00->g2();
                pAVar14 = (AnimBase*)(*local_48).operator->();
                puVar1 = &local_40->field_8;
                uVar9 = pAVar14->GetTransformCount();
                local_50 = (vector<eastl::vector<AnimCurve>>*)puVar1;
                puVar1->resize((unsigned long)uVar9);
                pAVar14 = (AnimBase*)(*local_48).operator->();
                puVar1 = &local_40->field_40;
                sVar10 = pAVar14->GetNumJoints();
                local_58 = (vector<eastl::vector<AnimCurve>>*)puVar1;
                puVar1->resize((long)sVar10);
                if (uVar8 != 0) {
                    uVar20 = (unsigned int)uVar8;
                    do {
                        bVar6 = this_00->g1();
                        if (bVar6 == 3) {
                            *(uint8_t*)&local_40->m_animatesColour = 1;
                        } else if (bVar6 == 2) {
                            local_40->m_animatesBillboards = 1;
                        } else if (bVar6 == 4) {
                            *(uint8_t*)((long)&local_40->m_animatesColour + 1) = 1;
                        }
                        sVar10 = this_00->gSmart1or2s();
                        local_32 = sVar10;
                        if (bVar6 == 1) {
                            this_01 = (SceneManager*)(*local_48).operator->();
                            this_02 = (map<short, short>*)this_01->GetEntityHighlightGlobalState();
                            psVar15 = (short*)(*this_02)[local_32];
                            uVar21 = (unsigned long)*psVar15;
                            iVar11 = AnimTypes::GetComponentCount(1);
                            pvVar16 =
                                (vector<int,
                                        eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)(*local_58)[uVar21];
                            cVar3 = pvVar16->empty();
                            if (cVar3) {
                                pvVar17 = (vector<AnimCurve>*)(*local_58)[uVar21];
                                pvVar17->resize((long)iVar11);
                            }
                            AVar12 = this_00->g1();
                            pvVar17 = (vector<AnimCurve>*)(*local_58)[uVar21];
                            iVar11 = AnimTypes::GetGroupIndex(AVar12 & 255);
                            pAVar18 = (AnimCurve*)(*pvVar17)[(long)iVar11];
                            pAVar18->LoadFromPacket(*this_00);
                        } else {
                            iVar11 = AnimTypes::GetComponentCount((unsigned int)bVar6);
                            pvVar16 =
                                (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)(*local_50)[(
                                    long)sVar10];
                            cVar3 = pvVar16->empty();
                            if (cVar3) {
                                pvVar17 = (vector<AnimCurve>*)(*local_50)[(long)local_32];
                                pvVar17->resize((long)iVar11);
                            }
                            bVar7 = this_00->g1();
                            iVar11 = AnimTypes::GetGroupIndex((unsigned int)bVar7);
                            if ((bVar6 == 3) && (2 < iVar11)) {
                                local_a8 = AnimCurve();
                                local_a8.LoadFromPacket(*this_00);
                            } else {
                                pvVar17 = (vector<AnimCurve>*)(*local_50)[(long)local_32];
                                pAVar18 = (AnimCurve*)(*pvVar17)[(long)iVar11];
                                pAVar18->LoadFromPacket(*this_00);
                            }
                        }
                        uVar20 = uVar20 - 1;
                    } while (uVar20 != 0);
                }
                local_68->reset();
            }
            uVar21 = (unsigned long)local_5c;
        }
    LAB_10098413a:
        return uVar21 & 4294967295;
    }

    // 0x1009844d0
    void AnimKeyFrameSet::GetRuntimeTransforms(VertexTransformData& vertexTransformData,
                                               WrapArray<WrapArray<AnimCurveSegmentCacheData>>& wrapArray, float arg3,
                                               const Array<bool>* arg4, bool arg5) {
        bool bVar1;
        uint64_t arg2;
        uint8_t bVar2;
        unsigned long uVar5;
        AnimBase* pAVar6;
        char* pcVar7;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* this_00;
        Vector3T<float>* pVVar8;
        WrapArray<float>* pWVar9;
        unsigned int uVar10;
        AnimTransform animTransform;
        uint64_t in_register_00000081;
        shared_ptr<AnimBase>* this_01;
        unsigned long uVar11;
        WrapArray<math::Matrix43T<float> _>* in_stack_ffffffffffffff18;
        Array<unsigned short> aAStack_de;
        ReturnValue local_d8;
        Vector3T<float> local_c0;
        Vector4T<float> local_b8;
        uint8_t auStack_a4[12];
        shared_ptr<AnimBase>* local_80;
        unsigned long local_78;
        unsigned int local_60;
        uint64_t local_58;
        unsigned int local_4c;
        Joint* local_38;

        uint32_t local_48 = (uint32_t)(((uint64_t)in_register_00000081 << 8) | (uint8_t)arg5);
        Vector3T<int> local_68;
        vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>* local_90 =
            (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
                    eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>*)&field_8;
        AnimKeyFrameSet* local_70 = this;
        if (local_90->size() != 0) {
            this_01 = (shared_ptr<AnimBase>*)&local_70->field_136;
            local_78 = 0;
            local_38 = nullptr;
            uVar5 = 0;
            uVar11 = 1;
            local_80 = this_01;
            do {
                uVar10 = (int)uVar11 - 1;
                pAVar6 = (AnimBase*)(*this_01).operator->();
                bVar2 = pAVar6->GetTransformType(uVar10);
                if (((arg4 == nullptr) || (pcVar7 = (char*)(*arg4)[uVar5], *pcVar7 == (char)local_48)) ||
                    (bVar2 == 0)) {
                    pAVar6 = (AnimBase*)(*this_01).operator->();
                    auStack_a4._4_8_ = pAVar6->GetTransformLabels(uVar10);
                    local_4c = uVar10;
                    if (bVar2 == 0) {
                        pAVar6 = (AnimBase*)(*this_01).operator->();
                        uVar10 = (unsigned int)local_78;
                        local_38 = pAVar6->GetJointByOriginMappedID(uVar10, local_70->m_bindID);
                        local_78 = (unsigned long)(uVar10 + 1);
                        if (local_38 != nullptr) {
                            *((&aAStack_de - 10)) = local_38->GetWorldBind();
                            local_58 = local_b8.GetXYZ();
                            local_68.SetXYZ(local_58);
                            local_60 = local_60 ^ 2147483648;
                        }
                    }
                    this_00 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)(*local_90)[uVar5];
                    if (!(this_00->empty())) {
                        new ((&aAStack_de - 10)) AnimationFrameRT5Transform();
                        pVVar8 = &wrapArray[uVar5];
                        new (&local_58) math::Vector3T(-1.0);
                        animTransform = (AnimTransform)bVar2;
                        AnimationFrameRT5Transform::ConvertFromCurves((int)&aAStack_de - 10, animTransform,
                                                                      *((vector<AnimCurve>*)(unsigned long)local_4c),
                                                                      *this_00, arg3, *pVVar8, &local_58);
                        arg2 = auStack_a4._4_8_;
                        if (bVar2 != 0) {
                            pVVar8 = (Vector3T<float>*)((Layout*)(NXTPixToolkit*)vertexTransformData)->SSOBeginPtr();
                            if (!(((AnimationHelper*)(unsigned long)bVar2)
                                      ->ApplyBoneTransform((AnimTransform)arg2, *(&aAStack_de - 6), local_d8, local_c0,
                                                           DAT_00000001, (uint8_t)&local_68, *pVVar8,
                                                           *in_stack_ffffffffffffff18))) {
                                pWVar9 = (WrapArray<float>*)((Option<float>*)(NXTPixToolkit*)vertexTransformData)
                                             ->GetDefaultValue();
                                if (!(AnimationHelper::ApplyBillboardTransform(animTransform, *arg2,
                                                                               *((&aAStack_de - 6)), *pWVar9))) {
                                    pWVar9 = (WrapArray<float>*)vertexTransformData.GetScreen();
                                    AnimationHelper::ApplyColourTransform(animTransform, *arg2, *((&aAStack_de - 6)),
                                                                          *pWVar9, true);
                                }
                            }
                        }
                    }
                    this_01 = local_80;
                }
                uVar5 = local_90->size();
                bVar1 = uVar11 < uVar5;
                uVar5 = uVar11;
                uVar11 = (unsigned long)((int)uVar11 + 1);
            } while (bVar1);
        }
    }

    // 0x100984f20
    void AnimKeyFrameSet::GetColourLabelDeltas(WrapArray<float>& wrapArray1, const Array<unsigned short>& arg2,
                                               float arg3, const eastl::vector<AnimCurve>& animCurves,
                                               WrapArray<AnimCurveSegmentCacheData>& wrapArray2) const {
        unsigned short uVar1;
        int iVar2;
        float* pfVar5;
        AnimKeyFrameSet* pAVar6;
        float fVar7;

        auto puVar3 = arg2.data();
        auto puVar4 = arg2.end();
        for (; puVar3 != puVar4; puVar3 = puVar3 + 1) {
            uVar1 = *puVar3;
            pAVar6 = (AnimKeyFrameSet*)&AnimationConstants::IDENTITY_LABELDELTAS;
            pfVar5 = (float*)(*((Array<float>*)&AnimationConstants::IDENTITY_LABELDELTAS))[0];
            fVar7 = (float)SampleCurveWithDefault(pAVar6, animCurves, wrapArray2, 0, arg3, *pfVar5);
            pfVar5 = &wrapArray1[(unsigned long)uVar1 * 4];
            *pfVar5 = fVar7 + *pfVar5;
            pAVar6 = (AnimKeyFrameSet*)&AnimationConstants::IDENTITY_LABELDELTAS;
            pfVar5 = (float*)(*((Array<float>*)&AnimationConstants::IDENTITY_LABELDELTAS))[1];
            fVar7 = (float)SampleCurveWithDefault(pAVar6, animCurves, wrapArray2, 1, arg3, *pfVar5);
            iVar2 = (int)((unsigned long)uVar1 * 4);
            pfVar5 = &wrapArray1[(unsigned long)(iVar2 + 1)];
            *pfVar5 = fVar7 + *pfVar5;
            pAVar6 = (AnimKeyFrameSet*)&AnimationConstants::IDENTITY_LABELDELTAS;
            pfVar5 = (float*)(*((Array<float>*)&AnimationConstants::IDENTITY_LABELDELTAS))[2];
            fVar7 = (float)SampleCurveWithDefault(pAVar6, animCurves, wrapArray2, 2, arg3, *pfVar5);
            pfVar5 = &wrapArray1[(unsigned long)(iVar2 + 2)];
            *pfVar5 = fVar7 + *pfVar5;
        }
    }

    // 0x100985080
    uint64_t AnimKeyFrameSet::SampleCurveWithDefault(const eastl::vector<AnimCurve>& animCurves,
                                                     WrapArray<AnimCurveSegmentCacheData>& wrapArray, unsigned int arg3,
                                                     float arg4, float arg5) const {
        AnimCurve* pAVar2;
        AnimCurveSegmentCacheData* animCurveSegmentCacheData;
        int iVar3;
        uint32_t uVar5;
        uint64_t uVar4;

        unsigned long uVar1 = animCurves.size();
        if ((unsigned long)arg3 < uVar1) {
            pAVar2 = &animCurves[(unsigned long)arg3];
            iVar3 = pAVar2->GetNumKeys();
            uVar5 = 0;
            if (0 < iVar3) {
                pAVar2 = &animCurves[(unsigned long)arg3];
                animCurveSegmentCacheData = (AnimCurveSegmentCacheData*)wrapArray[(unsigned long)arg3];
                uVar4 = pAVar2->GetValue(arg4, *animCurveSegmentCacheData);
                uVar5 = (uint32_t)((unsigned long)uVar4 >> 32);
                arg5 = (float)uVar4;
            }
        } else {
            uVar5 = 0;
        }
        return (((uint64_t)uVar5 << 32) | (uint32_t)arg5);
    }

    // 0x100985110
    void AnimKeyFrameSet::GetAlphaLabelDeltas(WrapArray<float>& wrapArray1, const Array<unsigned short>& arg2,
                                              float arg3, const eastl::vector<AnimCurve>& animCurves,
                                              WrapArray<AnimCurveSegmentCacheData>& wrapArray2) const {
        unsigned short uVar1;
        float* pfVar4;
        AnimKeyFrameSet* this_00;
        float fVar5;

        auto puVar2 = arg2.data();
        auto puVar3 = arg2.end();
        for (; puVar2 != puVar3; puVar2 = puVar2 + 1) {
            uVar1 = *puVar2;
            this_00 = (AnimKeyFrameSet*)&AnimationConstants::IDENTITY_DELTA;
            pfVar4 = (float*)(*((Array<float>*)&AnimationConstants::IDENTITY_DELTA))[3];
            fVar5 = (float)SampleCurveWithDefault(this_00, animCurves, wrapArray2, 0, arg3, *pfVar4);
            pfVar4 = &wrapArray1[(unsigned long)uVar1 * 4 + 3];
            *pfVar4 = fVar5 + *pfVar4;
        }
    }

    // 0x1009851c0
    void AnimKeyFrameSet::GetBillboardTransforms(WrapArray<float>& wrapArray1, const Array<unsigned short>& arg2,
                                                 AnimTransform animTransform, float arg4,
                                                 const eastl::vector<AnimCurve>& animCurves,
                                                 WrapArray<AnimCurveSegmentCacheData>& wrapArray2) const {
        unsigned short uVar1;
        unsigned short* puVar2;
        unsigned short* puVar3;
        float* pfVar4;
        AnimKeyFrameSet* pAVar6;
        float fVar7;

        if ((char)animTransform == '\n') {
            puVar2 = (unsigned short*)arg2.data();
            puVar3 = (unsigned short*)arg2.end();
            for (; puVar2 != puVar3; puVar2 = puVar2 + 1) {
                uVar1 = *puVar2;
                pAVar6 = (AnimKeyFrameSet*)&AnimationConstants::IDENTITY_BILLBOARDTRANSFORM;
                pfVar4 = (float*)(*((Array<float>*)&AnimationConstants::IDENTITY_BILLBOARDTRANSFORM))[2];
                fVar7 = (float)SampleCurveWithDefault(pAVar6, animCurves, wrapArray2, 6, arg4, *pfVar4);
                pfVar4 = &wrapArray1[(unsigned long)uVar1 * 8 + 2];
                *pfVar4 = fVar7 * *pfVar4;
                pAVar6 = (AnimKeyFrameSet*)&AnimationConstants::IDENTITY_BILLBOARDTRANSFORM;
                pfVar4 = (float*)(*((Array<float>*)&AnimationConstants::IDENTITY_BILLBOARDTRANSFORM))[3];
                fVar7 = (float)SampleCurveWithDefault(pAVar6, animCurves, wrapArray2, 7, arg4, *pfVar4);
                pfVar4 = &wrapArray1[(unsigned long)((unsigned int)uVar1 * 8 | 3)];
                *pfVar4 = fVar7 * *pfVar4;
            }
        } else if ((char)animTransform == '\t') {
            puVar2 = (unsigned short*)arg2.data();
            puVar3 = (unsigned short*)arg2.end();
            for (; puVar2 != puVar3; puVar2 = puVar2 + 1) {
                uVar1 = *puVar2;
                pAVar6 = (AnimKeyFrameSet*)&AnimationConstants::IDENTITY_BILLBOARDTRANSFORM;
                pfVar4 = (float*)(*((Array<float>*)&AnimationConstants::IDENTITY_BILLBOARDTRANSFORM))[4];
                fVar7 = (float)SampleCurveWithDefault(pAVar6, animCurves, wrapArray2, 0, arg4, *pfVar4);
                pfVar4 = &wrapArray1[(unsigned long)uVar1 * 8 + 4];
                *pfVar4 = fVar7 + *pfVar4;
            }
        } else if ((char)animTransform == '\b') {
            puVar2 = (unsigned short*)arg2.data();
            puVar3 = (unsigned short*)arg2.end();
            for (; puVar2 != puVar3; puVar2 = puVar2 + 1) {
                uVar1 = *puVar2;
                pAVar6 = (AnimKeyFrameSet*)&AnimationConstants::IDENTITY_BILLBOARDTRANSFORM;
                pfVar4 = (float*)(*((Array<float>*)&AnimationConstants::IDENTITY_BILLBOARDTRANSFORM))[0];
                fVar7 = (float)SampleCurveWithDefault(pAVar6, animCurves, wrapArray2, 3, arg4, *pfVar4);
                pfVar4 = &wrapArray1[(unsigned long)uVar1 * 8];
                *pfVar4 = fVar7 + *pfVar4;
                pAVar6 = (AnimKeyFrameSet*)&AnimationConstants::IDENTITY_BILLBOARDTRANSFORM;
                pfVar4 = (float*)(*((Array<float>*)&AnimationConstants::IDENTITY_BILLBOARDTRANSFORM))[1];
                fVar7 = (float)SampleCurveWithDefault(pAVar6, animCurves, wrapArray2, 4, arg4, *pfVar4);
                pfVar4 = &wrapArray1[(unsigned long)((int)((unsigned long)uVar1 * 8) + 1)];
                *pfVar4 = fVar7 + *pfVar4;
            }
        }
    }

    // 0x100985470
    void AnimKeyFrameSet::RenderCurveDebug(const math::Matrix44T<float>& matrix44, int arg2, int arg3, float arg4,
                                           float arg5, float arg6) {
        Array<AnimKey>* pAVar2;
        bool cVar3;
        unsigned short uVar4;
        unsigned short uVar5;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* this_00;
        AnimCurve* this_01;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_02;
        unsigned long uVar9;
        short* psVar10;
        uint64_t uVar11;
        float fVar13;
        float fVar14;
        uint32_t in_XMM1_Db;
        uint32_t in_XMM1_Dc;
        uint32_t in_XMM1_Dd;
        uint32_t in_XMM2_Db;
        uint32_t in_XMM2_Dc;
        uint32_t in_XMM2_Dd;
        uint8_t local_1e8[48];
        uint8_t local_1b8[16];
        uint8_t local_1a8[16];
        uint8_t local_198[16];
        uint8_t local_188[16];
        unsigned long local_178;
        uint8_t local_158[16];
        ColourHSL local_140;
        uint64_t local_118;
        float local_110;
        float local_108;
        float local_104;
        float local_fc;
        ColourHSL local_e8;
        ColourHSL local_d8;
        ColourHSL local_b8;
        uint32_t uStack_a0;
        uint32_t uStack_9c;
        ColourHSL local_90;
        ColourHSL local_80;
        uint64_t local_70;
        float local_68;
        uint64_t local_60;
        float local_58;
        unsigned long local_50;
        ColourHSL local_48;
        uint64_t local_38;

        local_38 =
            (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(((uint64_t)local_38._4_4_ << 32) |
                                                                                (uint32_t)arg4);
        uint32_t uStack_124 = in_XMM2_Db;
        uint32_t uStack_120 = in_XMM2_Dc;
        uint32_t uStack_11c = in_XMM2_Dd;
        uint64_t local_a8 = matrix44;
        new (local_1b8) oldscape::sidebars::SideBarData(-65536, 1);
        new ((local_1b8 + 8)) oldscape::sidebars::SideBarData(-16711936, 1);
        new (local_1a8) oldscape::sidebars::SideBarData(-16776961, 1);
        new ((local_1a8 + 8)) oldscape::sidebars::SideBarData(-65536, 1);
        new (local_198) oldscape::sidebars::SideBarData(-16711936, 1);
        new ((local_198 + 8)) oldscape::sidebars::SideBarData(-16776961, 1);
        math::Matrix44Identity<float>();
        local_50 = (((uint64_t)local_50._4_4_ << 32) | (uint32_t)((float)m_end));
        float local_f8 = (float)field_72;
        new (local_1e8) math::Vector3T(60.0);
        local_228.Scale(*local_1e8);
        uint8_t* this_03 = &field_8;
        long lVar6 = this_03->size();
        unsigned long uVar7 = eastl::min_alt<unsigned long>(lVar6 - 1, (long)arg2);
        vector<eastl::vector<AnimCurve>>* local_170 = (vector<eastl::vector<AnimCurve>>*)this_03;
        lVar6 = this_03->size();
        unsigned long local_130 = eastl::min_alt<unsigned long>(lVar6 - 1, (long)(arg2 + arg3 - 1));
        float local_168 = arg6 + arg6 + 1.0;
        uint32_t uStack_164 = uStack_124;
        uint32_t uStack_160 = uStack_120;
        uint32_t uStack_15c = uStack_11c;
        unsigned int uVar1 = arg3 * 3;
        if ((long)(int)uVar1 < 0) {
            fVar14 = (float)((unsigned long)(uVar1 & 1) | (unsigned long)(long)(int)uVar1 >> 1);
            fVar14 = fVar14 + fVar14;
        } else {
            fVar14 = (float)(int)uVar1;
        }
        float fVar12 = local_f8 - (float)local_50;
        local_f8 = fVar14 * local_168;
        uint32_t uStack_f4 = in_XMM1_Db;
        uint32_t uStack_f0 = in_XMM1_Dc;
        uint32_t uStack_ec = in_XMM1_Dd;
        new (local_1e8) math::ColourHSL(fVar12 * 0.5, fVar14 * local_168, 0.0);
        auto local_228 = math::Matrix44T<float>::Translate(*local_1e8);
        local_228 *= local_a8;
        auto plVar8 = DebugPrimitiveCollectorBasic::GetCollector("");
        if (plVar8 != nullptr) {
            fVar14 = 1.0;
            local_c8 = math::ColourHSL((float)local_38, 1.0, 0.0);
            local_1e8._0_8_ = local_c8 * local_228;
            fVar12 = -local_f8;
            local_1e8._8_4_ = fVar14;
            local_e8 = math::ColourHSL((float)local_38, fVar12, 0.0);
            local_118 = local_e8 * local_228;
            local_110 = fVar12;
            local_b8 = oldscape::sidebars::SideBarData(-1, 1);
            (**(void (**)(...))(*plVar8 + 24))(plVar8, local_1e8, &local_118, &local_b8);
        }
        ColourHSL local_c8(0.0);
        if (uVar7 <= local_130) {
            fVar14 = -arg6;
            local_fc = local_168 * 3.0;
            do {
                this_00 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)(*local_170)[uVar7];
                cVar3 = this_00->empty();
                local_178 = uVar7;
                if (!cVar3) {
                    lVar6 = this_00->size();
                    if (lVar6 != 0) {
                        uVar7 = 0;
                        local_188._8_8_ = this_00;
                        do {
                            this_01 = (AnimCurve*)(*this_00)[uVar7];
                            this_02 =
                                (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_01->second();
                            lVar6 = this_02->end();
                            local_50 = uVar7;
                            if (lVar6 == 0) {
                                local_38 = (vector<oldscape::dash3d::EntityHighlight*,
                                                   BucketAllocatorEASTL>*)((unsigned long)local_38._4_4_ << 32);
                            } else {
                                local_38 = (vector<oldscape::dash3d::EntityHighlight*,
                                                   BucketAllocatorEASTL>*)((unsigned long)local_38._4_4_ << 32);
                                uVar7 = 0;
                                do {
                                    lVar6 = (*this_02)[uVar7];
                                    fVar13 = (float)::abs(*(float*)(lVar6 + 4));
                                    fVar12 = (float)local_38;
                                    if ((float)local_38 <= fVar13) {
                                        fVar12 = fVar13;
                                    }
                                    local_38 = (vector<oldscape::dash3d::EntityHighlight*,
                                                       BucketAllocatorEASTL>*)(((uint64_t)local_38._4_4_ << 32) |
                                                                               (uint32_t)fVar12);
                                    uVar7 = uVar7 + 1;
                                    uVar9 = this_02->end();
                                } while (uVar7 < uVar9);
                            }
                            local_158 = (unsigned __int128)((unsigned int)(1.0 / (float)local_38));
                            uVar4 = this_01->GetStart();
                            uVar5 = this_01->GetEnd();
                            new (&local_118) math::Vector3T();
                            new (local_1e8) AnimCurveSegmentCacheData();
                            fVar12 = (float)uVar4;
                            local_104 = (float)uVar5;
                            local_f8 = (float)local_158._0_4_ * arg6;
                            uStack_f4 = local_158._4_4_;
                            uStack_f0 = local_158._8_4_;
                            uStack_ec = local_158._12_4_;
                            local_108 = fVar12;
                            local_38 = this_02;
                            if (fVar12 <= local_104) {
                                do {
                                    local_a8 = (Matrix44T<float>*)(((uint64_t)local_a8._4_4_ << 32) | (uint32_t)fVar12);
                                    fVar12 = (float)this_01->GetValue(fVar12, *local_1e8);
                                    fVar12 = fVar12 * local_f8;
                                    local_b8 = math::ColourHSL((float)local_a8, fVar12, 0.0);
                                    local_e8._0_8_ = local_c8 + local_b8;
                                    local_e8.field_8 = fVar12;
                                    if ((local_108 < (float)local_a8) &&
                                        (plVar8 = DebugPrimitiveCollectorBasic::GetCollector(""), plVar8 != nullptr)) {
                                        local_b8._0_8_ = local_118 * local_228;
                                        this_02 = local_38;
                                        local_b8.field_8 = fVar12;
                                        local_80._0_8_ = local_e8 * local_228;
                                        local_80.field_8 = fVar12;
                                        uVar11 = (*local_1b8)[local_50];
                                        (**(void (**)(...))(*plVar8 + 24))(plVar8, &local_b8, &local_80, uVar11);
                                    }
                                    local_118.SetXYZ(local_e8);
                                    fVar12 = (float)local_a8 + arg5;
                                } while (fVar12 <= local_104);
                            }
                            lVar6 = this_02->end();
                            if (lVar6 != 0) {
                                local_158._0_8_ =
                                    (((uint64_t)local_158._4_4_ << 32) | (uint32_t)(-(float)local_158._0_4_ * arg6)) ^
                                    9223372036854775808;
                                local_158._8_4_ = local_158._8_4_ ^ 2147483648;
                                local_158._12_4_ = local_158._12_4_ ^ 2147483648;
                                uVar7 = 0;
                                do {
                                    psVar10 = (short*)(*this_02)[uVar7];
                                    fVar12 = arg6;
                                    local_b8 = math::ColourHSL((float)(int)*psVar10, arg6, 0.0);
                                    local_e8._0_8_ = local_c8 + local_b8;
                                    local_e8.field_8 = fVar12;
                                    psVar10 = (short*)(*this_02)[uVar7];
                                    fVar12 = fVar14;
                                    local_80 = math::ColourHSL((float)(int)*psVar10, fVar14, 0.0);
                                    local_b8._0_8_ = local_c8 + local_80;
                                    local_b8.field_8 = fVar12;
                                    plVar8 = DebugPrimitiveCollectorBasic::GetCollector("");
                                    if (plVar8 != nullptr) {
                                        local_80._0_8_ = local_e8 * local_228;
                                        local_80.field_8 = fVar12;
                                        local_48._0_8_ = local_b8 * local_228;
                                        local_48.field_8 = fVar12;
                                        uVar11 = (*local_1b8)[local_50];
                                        (**(void (**)(...))(*plVar8 + 24))(plVar8, &local_80, &local_48, uVar11);
                                    }
                                    pAVar2 = (Array<AnimKey>*)local_38;
                                    lVar6 = (*local_38)[uVar7];
                                    local_a8 = (Matrix44T<float>*)(((uint64_t)local_a8._4_4_ << 32) |
                                                                   (uint32_t)(*(float*)(lVar6 + 4) * local_f8));
                                    psVar10 = (short*)(*pAVar2)[uVar7];
                                    fVar12 = (float)local_a8;
                                    local_48 = math::ColourHSL((float)(int)*psVar10, (float)local_a8, 0.0);
                                    local_80._0_8_ = local_c8 + local_48;
                                    local_80.field_8 = fVar12;
                                    plVar8 = DebugPrimitiveCollectorBasic::GetCollector("");
                                    if (plVar8 != nullptr) {
                                        fVar12 = 1.0;
                                        local_d8 = math::ColourHSL(1.0, 1.0, 0.0);
                                        local_90._0_8_ = local_80 - local_d8;
                                        local_90.field_8 = fVar12;
                                        local_48._0_8_ = local_90 * local_228;
                                        fVar13 = 1.0;
                                        local_48.field_8 = fVar12;
                                        local_140 = math::ColourHSL(1.0, 1.0, 0.0);
                                        local_60 = local_80 + local_140;
                                        local_58 = fVar13;
                                        local_70 = local_60 * local_228;
                                        local_68 = fVar13;
                                        uVar11 = (*local_1b8)[local_50];
                                        (**(void (**)(...))(*plVar8 + 24))(plVar8, &local_48, &local_70, uVar11);
                                    }
                                    plVar8 = DebugPrimitiveCollectorBasic::GetCollector("");
                                    if (plVar8 != nullptr) {
                                        fVar12 = -1.0;
                                        local_d8 = math::ColourHSL(1.0, -1.0, 0.0);
                                        local_90._0_8_ = local_80 - local_d8;
                                        local_90.field_8 = fVar12;
                                        local_48._0_8_ = local_90 * local_228;
                                        fVar13 = -1.0;
                                        local_48.field_8 = fVar12;
                                        local_140 = math::ColourHSL(1.0, -1.0, 0.0);
                                        local_60 = local_80 + local_140;
                                        local_58 = fVar13;
                                        local_70 = local_60 * local_228;
                                        local_68 = fVar13;
                                        uVar11 = (*local_1b8)[local_50];
                                        (**(void (**)(...))(*plVar8 + 24))(plVar8, &local_48, &local_70, uVar11);
                                    }
                                    pAVar2 = (Array<AnimKey>*)local_38;
                                    lVar6 = (*local_38)[uVar7];
                                    local_a8._0_4_ = -*(float*)(lVar6 + 8);
                                    local_a8._4_4_ = 2147483648;
                                    uStack_a0 = 2147483648;
                                    uStack_9c = 2147483648;
                                    lVar6 = (*pAVar2)[uVar7];
                                    fVar12 = *(float*)(lVar6 + 12) * (float)local_158._0_4_;
                                    local_90 = math::ColourHSL((float)local_a8, fVar12, 0.0);
                                    local_48._0_8_ = local_80 + local_90;
                                    local_48.field_8 = fVar12;
                                    lVar6 = (*pAVar2)[uVar7];
                                    local_a8 = (Matrix44T<float>*)(((uint64_t)local_a8._4_4_ << 32) |
                                                                   (uint32_t)(*(uint32_t*)(lVar6 + 16)));
                                    lVar6 = (*pAVar2)[uVar7];
                                    fVar13 = *(float*)(lVar6 + 20) * local_f8;
                                    local_d8 = math::ColourHSL((float)local_a8, fVar13, 0.0);
                                    local_90._0_8_ = local_80 + local_d8;
                                    local_90.field_8 = fVar13;
                                    plVar8 = DebugPrimitiveCollectorBasic::GetCollector("");
                                    fVar12 = fVar13;
                                    if (plVar8 != nullptr) {
                                        local_d8._0_8_ = local_48 * local_228;
                                        fVar12 = 0.0;
                                        local_d8.field_8 = fVar13;
                                        local_140 = math::ColourHSL(0.0, 0.0, 0.0);
                                        local_60 = local_80 + local_140;
                                        local_58 = fVar12;
                                        local_70 = local_60 * local_228;
                                        local_68 = fVar12;
                                        new (local_188) oldscape::sidebars::SideBarData(-16742264, 1);
                                        (**(void (**)(...))(*plVar8 + 24))(plVar8, &local_d8, &local_70,
                                                                           (SideBarData*)local_188);
                                    }
                                    plVar8 = DebugPrimitiveCollectorBasic::GetCollector("");
                                    if (plVar8 != nullptr) {
                                        local_d8._0_8_ = local_90 * local_228;
                                        fVar13 = 0.0;
                                        local_d8.field_8 = fVar12;
                                        local_140 = math::ColourHSL(0.0, 0.0, 0.0);
                                        local_60 = local_80 + local_140;
                                        local_58 = fVar13;
                                        local_70 = local_60 * local_228;
                                        local_68 = fVar13;
                                        new (local_188) oldscape::sidebars::SideBarData(-7829504, 1);
                                        (**(void (**)(...))(*plVar8 + 24))(plVar8, &local_d8, &local_70,
                                                                           (SideBarData*)local_188);
                                    }
                                    this_02 = local_38;
                                    uVar7 = uVar7 + 1;
                                    uVar9 = local_38->end();
                                } while (uVar7 < uVar9);
                            }
                            this_00 =
                                (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)local_188._8_8_;
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

} // namespace jag::graphics
