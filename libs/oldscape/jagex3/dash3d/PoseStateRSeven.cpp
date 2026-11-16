// libs/oldscape/jagex3/dash3d/PoseStateRSeven.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "PoseStateRSeven.h"

namespace jag::oldscape::dash3d {
    // 0x100024170: PoseStateRSeven::GetType() const has the same machine code as option::IScriptOption::GetId() const

    // 0x10014d2f0: PoseStateRSeven::GetLabelTransparencyDelta(unsigned long) const has the same machine code as ApplicationContext::GetScreenRatio()

    // 0x1002ecfe0
    TransformedPoseStateRSeven* TransformedPoseStateRSeven::GetBoneTransform(unsigned long arg1) const {
        TransformedPoseStateRSeven_vtbl* pTVar1 = *(TransformedPoseStateRSeven_vtbl**)(arg1 + 16);
        uint64_t uVar2 = *(uint64_t*)(arg1 + 24);
        uint64_t uVar3 = *(uint64_t*)(arg1 + 32);
        uint64_t uVar4 = *(uint64_t*)(arg1 + 40);
        uint64_t uVar5 = *(uint64_t*)(arg1 + 56);
        field_32 = *(uint64_t*)(arg1 + 48);
        field_40 = uVar5;
        field_16 = uVar3;
        field_24 = uVar4;
        this->_vptr = pTVar1;
        *(uint64_t*)&field_8 = uVar2;
        return this;
    }

    // 0x1002ed000
    TransformedPoseStateRSeven* TransformedPoseStateRSeven::GetJointTransform(unsigned long arg1) const {
        TransformedPoseStateRSeven_vtbl* pTVar1 = *(TransformedPoseStateRSeven_vtbl**)(arg1 + 16);
        uint64_t uVar2 = *(uint64_t*)(arg1 + 24);
        uint64_t uVar3 = *(uint64_t*)(arg1 + 32);
        uint64_t uVar4 = *(uint64_t*)(arg1 + 40);
        uint64_t uVar5 = *(uint64_t*)(arg1 + 56);
        field_32 = *(uint64_t*)(arg1 + 48);
        field_40 = uVar5;
        field_16 = uVar3;
        field_24 = uVar4;
        this->_vptr = pTVar1;
        *(uint64_t*)&field_8 = uVar2;
        return this;
    }

    // 0x1002ed020
    bool TransformedPoseStateRSeven::IsEqual(const PoseStateRSeven& poseStateRSeven) const {
        bool bVar1;

        if (poseStateRSeven.GetPos() == 5) {
            bVar1 = field_16 == poseStateRSeven.field_16;
        } else {
            bVar1 = false;
        }
        return bVar1;
    }

    // 0x1002ed0c0
    void MayaPoseStateRSeven::InitializeFrameData() const {
        PoseSkeleton();
        AnimateKeyFramedTransparency();
    }

    // 0x1002ed0e0
    void MayaPoseStateRSeven::PoseSkeleton() const {
        int iVar3;
        Skeleton* pSVar5;
        Array<bool>* arg3;
        vector<EntityHighlight*, BucketAllocatorEASTL>* pvVar6;
        long lVar7;
        shared_ptr<graphics::animation::OldscapeJoint>* this_01;
        OldscapeJoint* this_02;
        Vector3T<float>* vector3;
        Array<jag::math::Matrix43T<float>>* this_04;
        ParticleVertexDataProxy<jag::math::Vector3T<float>>* this_05;
        unsigned long uVar8;
        unsigned long arg1;
        unsigned int in_XMM1_Da;
        uint8_t local_98[48];
        ReturnValue local_68;
        unsigned int local_60;
        unsigned int local_48;
        uint32_t uStack_44;
        uint32_t uStack_40;
        uint32_t uStack_3c;

        shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet>* local_58 =
            (shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet>*)field_16;
        OldscapeAnimKeyFrameSet* pOVar4 = (OldscapeAnimKeyFrameSet*)**local_58;
        auto this_00 = pOVar4->GetBase();
        AnimBase* local_50 = (AnimBase*)**this_00;
        *local_98 = local_50->GetSkeleton();
        bool bVar1 = *local_98 != nullptr;
        if (bVar1) {
            if (field_40->operator_cast_to_bool() == '\0') {
                *local_98 = local_50->GetSkeleton();
                pSVar5 = (Skeleton*)(*local_98).operator->();
                pSVar5->Animate(*pOVar4, field_32);
            } else {
                *local_98 = local_50->GetSkeleton();
                pSVar5 = (Skeleton*)(*local_98).operator->();
                iVar3 = field_32;
                arg3 = (Array<bool>*)**field_40;
                pSVar5->Animate(*pOVar4, iVar3, *arg3, field_56);
            }
            pvVar6 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)GetJointPositions();
            lVar7 = pvVar6->end();
            if (lVar7 != 0) {
                arg1 = 0;
                do {
                    local_68 = local_50->GetSkeleton();
                    pSVar5 = (Skeleton*)local_68.operator->();
                    this_01 = (shared_ptr<graphics::animation::OldscapeJoint>*)pSVar5->GetJoint((int)arg1);
                    this_02 = (OldscapeJoint*)(*this_01).operator->();
                    pOVar4 = (OldscapeAnimKeyFrameSet*)(*local_58).operator->();
                    iVar3 = pOVar4->GetBind();
                    this_02->GetSkinningMatrix(iVar3);
                    local_98->operator_cast_to_Matrix43T();
                    vector3 = (Vector3T<float>*)(*local_98)[2];
                    local_68 = (ReturnValue)jag::math::operator-(vector3);
                    local_60 = in_XMM1_Da;
                    ((Vector4T<float>*)(*local_98)[2])->SetXYZ(local_68);
                    lVar7 = (*local_98)[0];
                    in_XMM1_Da = *(unsigned int*)(lVar7 + 8) ^ 2147483648;
                    uStack_44 = 2147483648;
                    uStack_40 = 2147483648;
                    uStack_3c = 2147483648;
                    local_48 = in_XMM1_Da;
                    lVar7 = (*local_98)[0];
                    *(unsigned int*)(lVar7 + 8) = local_48;
                    lVar7 = (*local_98)[1];
                    local_48 = *(unsigned int*)(lVar7 + 8) ^ 2147483648;
                    uStack_44 = 2147483648;
                    uStack_40 = 2147483648;
                    uStack_3c = 2147483648;
                    lVar7 = (*local_98)[1];
                    *(unsigned int*)(lVar7 + 8) = local_48;
                    lVar7 = (*local_98)[2];
                    local_48 = *(unsigned int*)(lVar7 + 8) ^ 2147483648;
                    uStack_44 = 2147483648;
                    uStack_40 = 2147483648;
                    uStack_3c = 2147483648;
                    lVar7 = (*local_98)[2];
                    *(unsigned int*)(lVar7 + 8) = local_48;
                    lVar7 = (*local_98)[3];
                    local_48 = *(unsigned int*)(lVar7 + 8) ^ 2147483648;
                    uStack_44 = 2147483648;
                    uStack_40 = 2147483648;
                    uStack_3c = 2147483648;
                    lVar7 = (*local_98)[3];
                    *(unsigned int*)(lVar7 + 8) = local_48;
                    this_04 = (Array<jag::math::Matrix43T<float>>*)GetJointPositions();
                    this_05 = (ParticleVertexDataProxy<jag::math::Vector3T<float>>*)(*this_04)[arg1];
                    *this_05 = *local_98;
                    arg1 = arg1 + 1;
                    pvVar6 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)GetJointPositions();
                    uVar8 = pvVar6->end();
                } while (arg1 < uVar8);
            }
        }
    }

    // 0x1002ed3d0
    void MayaPoseStateRSeven::AnimateKeyFramedTransparency() const {
        function<void(int, float)> local_68[56];
        long local_30;

        OldscapeAnimKeyFrameSet* this_00 = (OldscapeAnimKeyFrameSet*)(*field_16).operator->();
        int arg1 = field_32;
        std::function<void(int, float)>::function<MayaPoseStateRSeven::AnimateKeyFramedTransparency() const ::__0,
                                                  void>(local_68, (__0*)this);
        this_00->AnimateKeyFramedTransparency(arg1, local_68);
    }

    // 0x1002ed460
    void MayaPoseStateRSeven::GetJointPositions() const {
        if ((&field_64)->operator_cast_to_bool() == '\0') {
            LogAssert("m_jointPositions",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "PoseStateRSeven.cpp",
                      67, "InitializeFrameData was not called before attempting to obtain joint positions.");
        }
        *field_64;
    }

    // 0x1002ed4e0
    auto MayaPoseStateRSeven::GetJointTransform(unsigned long arg1) const {
        auto result;
        ReturnValue RVar1;
        ReturnValue RVar2;
        ReturnValue RVar3;
        ReturnValue RVar4;
        ReturnValue RVar5;
        Array<jag::math::Matrix43T<float>>* this_01;
        ReturnValue* pRVar7;

        InitializeIfRequired();
        unsigned long uVar6 = ((vector<EntityHighlight*, BucketAllocatorEASTL>*)GetJointPositions())->end();
        if (arg1 < uVar6) {
            this_01 = (Array<jag::math::Matrix43T<float>>*)GetJointPositions();
            pRVar7 = (ReturnValue*)(*this_01)[arg1];
            RVar1 = pRVar7[1];
            RVar2 = pRVar7[2];
            RVar3 = pRVar7[3];
            RVar4 = pRVar7[4];
            RVar5 = pRVar7[5];
            result = *pRVar7;
            &result[1] = RVar1;
            &result[2] = RVar2;
            &result[3] = RVar3;
            &result[4] = RVar4;
            &result[5] = RVar5;
        } else {
            RVar1 = *(ReturnValue*)PTR_IDENTITY_100ee6720;
            RVar2 = *(ReturnValue*)(PTR_IDENTITY_100ee6720 + 8);
            RVar3 = *(ReturnValue*)(PTR_IDENTITY_100ee6720 + 16);
            RVar4 = *(ReturnValue*)(PTR_IDENTITY_100ee6720 + 24);
            RVar5 = *(ReturnValue*)(PTR_IDENTITY_100ee6720 + 40);
            &result[4] = *(ReturnValue*)(PTR_IDENTITY_100ee6720 + 32);
            &result[5] = RVar5;
            &result[2] = RVar3;
            &result[3] = RVar4;
            result = RVar1;
            &result[1] = RVar2;
        }
        return result;
    }

    // 0x1002ed570
    void MayaPoseStateRSeven::InitializeIfRequired() const {
        shared_ptr<AnimBase>* this_01;
        Skeleton* this_03;
        ReturnValue local_40;
        uint32_t local_2c;

        if ((&field_64)->operator_cast_to_bool() == '\0') {
            this_01 = ((OldscapeAnimKeyFrameSet*)(*field_16).operator->())->GetBase();
            local_40 = ((AnimBase*)(*this_01).operator->())->GetSkeleton();
            this_03 = (Skeleton*)local_40.end();
            if (this_03 == nullptr) {
                local_2c = 0;
            } else {
                local_2c = this_03->GetNumOfJoints();
            }
            std::make_unique<Array<jag::math::Matrix43T<float>>, int, jag::math::Matrix43T<float> const&>(local_40,
                                                                                                          local_2c);
            field_64 = local_40;
            InitializeFrameData();
        }
    }

    // 0x1002edc00
    bool PoseStateRSeven::IsEqual(const PoseStateRSeven& poseStateRSeven) const {
        return 0;
    }

    // 0x1002edc10
    void DashPoseStateRSeven::InitializeFrameData() {
        uint32_t uVar1;
        int arg5;
        int arg3;
        int* piVar4;
        uint32_t* puVar5;
        unsigned long arg1;

        auto this_00 = GetFrameSet();
        int iVar2 = GetFrame();
        shared_ptr<AnimBase>* this_01 = (shared_ptr<AnimBase>*)(*this_00)[(long)iVar2];
        long lVar3 = **this_01;
        if (0 < *(int*)(this_01 + 16)) {
            arg1 = 0;
            do {
                piVar4 = (int*)(*((this_01 + 24)))[arg1];
                iVar2 = *piVar4;
                puVar5 = (uint32_t*)(*((lVar3 + 8)))[(long)iVar2];
                uVar1 = *puVar5;
                arg3 = (*((lVar3 + 40)))[(long)iVar2];
                piVar4 = (int*)(*((this_01 + 48)))[arg1];
                iVar2 = *piVar4;
                piVar4 = (int*)(*((this_01 + 72)))[arg1];
                arg5 = *piVar4;
                puVar5 = (uint32_t*)(*((this_01 + 96)))[arg1];
                ApplyAnimationTransform((int)this, (vector<int>*)uVar1, arg3, iVar2, arg5, (Vector3T<float>*)*puVar5);
                arg1 = arg1 + 1;
            } while ((long)arg1 < (long)*(int*)(this_01 + 16));
        }
    }

    // 0x1002edd50
    Array<AnimFrame>* DashBasePoseStateRSeven::GetFrameSet() const {
        return (Array<AnimFrame>*)**field_16;
    }

    // 0x1002edd60
    int DashBasePoseStateRSeven::GetFrame() const {
        return m_frame;
    }

    // 0x1002eddb0
    auto DashBasePoseStateRSeven::GetBoneTransform(unsigned long arg1) const {
        auto result;
        ReturnValue RVar1;
        ReturnValue RVar2;
        ReturnValue RVar3;
        ReturnValue RVar4;
        ReturnValue RVar5;
        Array<jag::math::Matrix43T<float>>* this_01;
        ReturnValue* pRVar7;

        unsigned long uVar6 = ((vector<EntityHighlight*, BucketAllocatorEASTL>*)GetBonePositions())->end();
        if (arg1 < uVar6) {
            this_01 = (Array<jag::math::Matrix43T<float>>*)GetBonePositions();
            pRVar7 = (ReturnValue*)(*this_01)[arg1];
            RVar1 = pRVar7[1];
            RVar2 = pRVar7[2];
            RVar3 = pRVar7[3];
            RVar4 = pRVar7[4];
            RVar5 = pRVar7[5];
            result = *pRVar7;
            &result[1] = RVar1;
            &result[2] = RVar2;
            &result[3] = RVar3;
            &result[4] = RVar4;
            &result[5] = RVar5;
        } else {
            RVar1 = *(ReturnValue*)PTR_IDENTITY_100ee6720;
            RVar2 = *(ReturnValue*)(PTR_IDENTITY_100ee6720 + 8);
            RVar3 = *(ReturnValue*)(PTR_IDENTITY_100ee6720 + 16);
            RVar4 = *(ReturnValue*)(PTR_IDENTITY_100ee6720 + 24);
            RVar5 = *(ReturnValue*)(PTR_IDENTITY_100ee6720 + 40);
            &result[4] = *(ReturnValue*)(PTR_IDENTITY_100ee6720 + 32);
            &result[5] = RVar5;
            &result[2] = RVar3;
            &result[3] = RVar4;
            result = RVar1;
            &result[1] = RVar2;
        }
        return result;
    }

    // 0x1002ede30
    void DashBasePoseStateRSeven::GetBonePositions() const {
        if ((&field_40)->operator_cast_to_bool() == '\0') {
            LogAssert("m_bonePositions",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "PoseStateRSeven.cpp",
                      246, "InitializeFrameData was not called before attempting to obtain bone positions.");
        }
        *field_40;
    }

    // 0x1002ede80
    uint32_t DashBasePoseStateRSeven::GetLabelTransparencyDelta(unsigned long arg1) const {
        Array<float>* this_01;
        uint32_t* puVar2;

        unsigned long uVar1 = ((vector<EntityHighlight*, BucketAllocatorEASTL>*)GetFaceTransparencyDeltas())->end();
        uint32_t uVar3 = 0;
        if (arg1 < uVar1) {
            this_01 = (Array<float>*)GetFaceTransparencyDeltas();
            puVar2 = (uint32_t*)(*this_01)[arg1];
            uVar3 = *puVar2;
        }
        return uVar3;
    }

    // 0x1002edec0
    void DashBasePoseStateRSeven::GetFaceTransparencyDeltas() const {
        if ((&field_48)->operator_cast_to_bool() == '\0') {
            LogAssert("m_faceTransparencyDeltas",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "PoseStateRSeven.cpp",
                      252, "InitializeFrameData was not called before attempting to obtain bone positions.");
        }
        *field_48;
    }

    // 0x1002edf50
    bool DashBasePoseStateRSeven::IsBaseEqual(const DashBasePoseStateRSeven& dashBasePoseStateRSeven) const {
        bool cVar2;

        bool bVar1 = *field_16 == dashBasePoseStateRSeven.field_16;
        if (((bVar1) && (m_frame == dashBasePoseStateRSeven.m_frame)) &&
            (cVar2 = field_56 == dashBasePoseStateRSeven.field_56, cVar2)) {
            bVar1 = field_80 == dashBasePoseStateRSeven.field_80;
            return bVar1;
        }
        return false;
    }

    // 0x1002edfb0
    bool DashPoseStateRSeven::IsEqual(const PoseStateRSeven& poseStateRSeven) const {
        uint64_t uVar2;

        if (poseStateRSeven.GetPos() == 1) {
            uVar2 = IsBaseEqual(poseStateRSeven);
        } else {
            uVar2 = 0;
        }
        return uVar2;
    }

    // 0x1002ee010
    void DashBasePoseStateRSeven::ApplyAnimationTransform(int arg1, const eastl::vector<int>& arg2, int arg3, int arg4,
                                                          int arg5, jag::math::Vector3T<float>& vector3) const {
        if (arg1 == 5) {
            UpdateFaceTransparency((int)arg2);
        } else if (arg1 == 0) {
            UpdateAnimationOrigin((Vector3T<float>*)arg2, (int)vector3, arg3, arg4);
        } else {
            UpdateBonePositions(vector3, arg1, arg3, arg4, arg5, arg2);
        }
    }

    // 0x1002ee060
    void DashBasePoseStateRSeven::UpdateBonePositions(const jag::math::Vector3T<float>& vector3, int arg2, int arg3,
                                                      int arg4, int arg5, const eastl::vector<int>& arg6) const {
        int iVar1;
        int* piVar3;
        unsigned long uVar4;
        Array<jag::math::Matrix43T<float>>* this_02;
        Matrix43T<float>* this_03;
        unsigned long arg1;
        ReturnValue local_d8;
        Matrix43T<float> local_a8;

        uint64_t local_48 = jag::math::operator-(vector3);
        Matrix43T<float> local_78(*PTR_IDENTITY_100ee6718, local_48);
        GetAnimationTransform(&local_d8, this, arg2, arg3, arg4, arg5);
        local_a8* local_78;
        Vector3T<float>* this_00 = &local_a8[3];
        *this_00 += vector3;
        if (arg6.size() != 0) {
            arg1 = 0;
            do {
                piVar3 = &arg6[arg1];
                iVar1 = *piVar3;
                uVar4 = ((vector<EntityHighlight*, BucketAllocatorEASTL>*)GetBonePositions())->end();
                if ((unsigned long)(long)iVar1 < uVar4) {
                    this_02 = (Array<jag::math::Matrix43T<float>>*)GetBonePositions();
                    this_03 = (Matrix43T<float>*)(*this_02)[(long)iVar1];
                    *this_03 *= local_a8;
                }
                arg1 = arg1 + 1;
                uVar4 = arg6.size();
            } while (arg1 < uVar4);
        }
    }

    // 0x1002ee1d0
    auto DashBasePoseStateRSeven::GetAnimationTransform(int arg1, int arg2, int arg3, int arg4) const {
        ReturnValue RVar1;
        ReturnValue RVar2;
        ReturnValue RVar3;
        ReturnValue RVar4;
        ReturnValue RVar5;
        float* pfVar6;
        uint64_t local_80;
        float local_78;
        ColourHSL local_58;
        uint64_t local_48;
        uint64_t uStack_40;
        uint32_t local_38;
        float local_30;
        float local_2c;

        if (arg1 == 3) {
            local_58 = jag::math::ColourHSL((float)arg2, (float)arg3, (float)arg4);
            local_80 = local_58 / *128.0;
            local_78 = (float)arg3;
            pfVar6 = (float*)local_80.SSOBeginPtr();
            local_30 = *pfVar6;
            pfVar6 = (float*)local_80.y();
            local_2c = *pfVar6;
            pfVar6 = (float*)local_80.second();
            jag::math::Matrix33Scaling<float>(local_30, local_2c, *pfVar6);
            auto result(local_58, *PTR_ZERO_100ee66e8);
        } else if (arg1 == 2) {
            local_38 = *(uint32_t*)(PTR_IDENTITY_100ee6718 + 32);
            local_58._0_8_ = *(uint64_t*)PTR_IDENTITY_100ee6718;
            local_58._8_8_ = *(uint64_t*)(PTR_IDENTITY_100ee6718 + 8);
            local_48 = *(uint64_t*)(PTR_IDENTITY_100ee6718 + 16);
            uStack_40 = *(uint64_t*)(PTR_IDENTITY_100ee6718 + 24);
            if ((arg4 & 255U) != 0) {
                jag::math::Matrix33RotationZ<float>((float)((arg4 & 255U) << 3) * 0.0030679617f);
                local_58 = local_80;
            }
            if ((arg2 & 255U) != 0) {
                jag::math::Matrix33RotationX<float>((float)(int)((arg2 & 255U) * -8) * 0.0030679617f);
                local_58 *= local_80;
            }
            if ((arg3 & 255U) != 0) {
                jag::math::Matrix33RotationY<float>((float)((arg3 & 255U) << 3) * 0.0030679617f);
                local_58 *= local_80;
            }
            new (&result) jag::math::Matrix43T<float>(local_58, *PTR_ZERO_100ee66e8);
        } else if (arg1 == 1) {
            local_58 = jag::math::ColourHSL((float)arg2, -(float)arg3, (float)arg4);
            new (&result) jag::math::Matrix43T<float>(*PTR_IDENTITY_100ee6718, local_58);
        } else {
            (logger::default_logger())
                ->Log(false, 8,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "PoseStateRSeven.cpp",
                      332, "Unrecognized animation transform type %d", arg1);
            RVar1 = *(ReturnValue*)PTR_IDENTITY_100ee6720;
            RVar2 = *(ReturnValue*)(PTR_IDENTITY_100ee6720 + 8);
            RVar3 = *(ReturnValue*)(PTR_IDENTITY_100ee6720 + 16);
            RVar4 = *(ReturnValue*)(PTR_IDENTITY_100ee6720 + 24);
            RVar5 = *(ReturnValue*)(PTR_IDENTITY_100ee6720 + 40);
            &result[4] = *(ReturnValue*)(PTR_IDENTITY_100ee6720 + 32);
            &result[5] = RVar5;
            &result[2] = RVar3;
            &result[3] = RVar4;
            result = RVar1;
            &result[1] = RVar2;
        }
        return result;
    }

    // 0x1002ef450
    void PoseStateProviderRSeven::ApplyBoneTransforms(jag::math::Vector3T<float>& vector3,
                                                      const eastl::vector_map<unsigned short, unsigned short>& arg2,
                                                      const eastl::vector_map<unsigned short, unsigned short>& arg3,
                                                      const jag::math::Matrix44T<float>& matrix44) const {
        uint64_t* puVar2;
        uint16_t* puVar3;
        long* plVar4;
        Matrix43T<float> local_58;

        long lVar1 = arg2.size();
        if (lVar1 == 1) {
            puVar2 = (uint64_t*)(*field_24).operator->();
            puVar3 = (uint16_t*)arg2.front();
            (**(void (**)(...))*puVar2)(&local_58, puVar2, *puVar3);
        } else {
            lVar1 = arg3.size();
            if (lVar1 != 1) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                                "dash3d/PoseStateRSeven.cpp",
                                456, "Only a single bone or joint may be computed at a time for a CPU-side vertex.");
            }
            plVar4 = (long*)(*field_24).operator->();
            puVar3 = (uint16_t*)arg3.front();
            (**(void (**)(...))(*plVar4 + 8))(&local_58, plVar4, *puVar3);
        }
        vector3 *= &local_58;
    }

    // 0x1002ef580
    void PoseStateProviderRSeven::GetLabelData(WrapArray<float>& wrapArray,
                                               const eastl::vector_map<unsigned short, unsigned short>& arg2,
                                               jag::graphics::AnimationLabelType animationLabelType) const {
        unsigned short uVar1;
        unsigned long uVar4;
        long* plVar5;
        Rect<float>* this_00;
        float arg1;
        Vector4T<float> local_58;

        PoseStateProviderRSeven* local_38 = this;
        if (animationLabelType != 0) {
            LogAssert("labelType == jag::graphics::AnimationLabelType::COLOUR_DELTA",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "PoseStateRSeven.cpp",
                      462, "Only transparency animation is supported for OSRS models.");
        }
        auto local_48 = jag::graphics::AnimationHelper::VectorArryFromLabelDeltas(wrapArray);
        auto puVar2 = arg2.HeapBeginPtr();
        auto puVar3 = arg2.end();
        if (puVar2 != puVar3) {
            local_38 = (PoseStateProviderRSeven*)local_38->field_24;
            do {
                uVar1 = puVar2[1];
                uVar4 = local_48.HeapBeginPtr();
                if (uVar1 < uVar4) {
                    plVar5 = (long*)(*local_38).operator->();
                    arg1 = (float)(**(void (**)(...))(*plVar5 + 16))(plVar5, *puVar2);
                    local_58 = jag::math::Vector4T(arg1);
                    this_00 = (Rect<float>*)local_48[(unsigned long)(unsigned short)puVar2[1]];
                    *this_00 = local_58;
                }
                puVar2 = puVar2 + 2;
            } while (puVar2 != puVar3);
        }
    }

    // 0x100324ca0: PoseStateRSeven::GetJointTransform(unsigned long) const has the same machine code as PoseStateRSeven::GetBoneTransform(unsigned long) const

} // namespace jag::oldscape::dash3d

namespace jag::math {
    // 0x1002ed060
    bool operator== <float>(const Matrix43T<float>& matrix431, const Matrix43T<float>& matrix432) {
        bool bVar1 = matrix431 == matrix432;
        if (((bVar1) && (bVar1 = (*((matrix431 + 12))) == (*((matrix432 + 12))), bVar1)) &&
            (bVar1 = (*((matrix431 + 24))) == (*((matrix432 + 24))), bVar1)) {
            bVar1 = (*((matrix431 + 36))) == (*((matrix432 + 36)));
            return bVar1;
        }
        return false;
    }

} // namespace jag::math
