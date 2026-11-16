// libs/graphics/runetek7/animation/BlendTreeAnimationSampler.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "BlendTreeAnimationSampler.h"

namespace jag::graphics {
    // 0x10002d850: BlendTreeAnimationSampler::GetJointPoses() const has the same machine code as oldscape::option::Option<int>::GetDefaultValue() const

    // 0x1001d2000: BlendTreeAnimationSampler::GetBlendTree() const has the same machine code as oldscape::rseven::OSRenderCore_TextureDataProvider::GetTexturesCompressedDXTArchive() const

    // 0x10094d8c0
    BlendTreeAnimationSampler::BlendTreeAnimationSampler()
        : AnimationSampler(), m_pBlendTree(nullptr), m_drawDebugSkeleton(false) {}

    // 0x10094d940
    void BlendTreeAnimationSampler::CopyBoneMatricesToRT5VertexTransformData(
        const WrapArray<JointPose const>& wrapArray, const Array<Joint>& joints, const AnimKeyFrameSet& animKeyFrameSet,
        VertexTransformData& vertexTransformData) {
        unsigned short uVar1;
        unsigned int uVar2;
        shared_ptr<AnimBase>* psVar5;
        AnimBase* pAVar6;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        unsigned short* puVar7;
        unsigned long uVar8;
        WrapArray<math::Matrix43T<float>>* this_03;
        ParticleVertexDataProxy<math::Vector3T<float>>* this_04;
        ReturnValue local_1158;
        WrapArray<unsigned char const> local_1118;
        Matrix44T local_10d8;
        WrapArray<math::Matrix44T<float>> local_1098;
        unsigned long local_1070;

        unsigned long uVar3 = wrapArray.HeapBeginPtr();
        fixed_vector<math::Matrix44T<float>, 64ul> local_1068(uVar3);
        local_1098.WrapArray<eastl::fixed_vector<math::Matrix44T<float>, 64ul>>(local_1068);
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_1078 =
            (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&field_32;
        local_1118.WrapArray<Array<unsigned char>>(*local_1078);
        local_10d8.WrapArray<Array<unsigned char>>(joints);
        pose::ConvertToMatrices(&local_1098, local_1118, local_10d8);
        long lVar4 = local_1078->end();
        if (lVar4 != 0) {
            local_1070 = 0;
            do {
                psVar5 = (shared_ptr<AnimBase>*)animKeyFrameSet.GetMSAASampleCount();
                pAVar6 = (AnimBase*)(*psVar5).operator->();
                uVar2 = pAVar6->GetOriginTransformIDByJointID((unsigned int)local_1070);
                psVar5 = (shared_ptr<AnimBase>*)animKeyFrameSet.GetMSAASampleCount();
                pAVar6 = (AnimBase*)(*psVar5).operator->();
                this_00 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)pAVar6->GetTransformLabels(
                    (uVar2 & 65535) + 1);
                local_1158 = ((Joint*)joints[local_1070])->GetWorldBindInverse();
                local_10d8* local_1158;
                local_1068[local_1070];
                local_1118* local_10d8;
                lVar4 = this_00->end();
                if (lVar4 != 0) {
                    uVar2 = 1;
                    uVar3 = 0;
                    do {
                        puVar7 = (unsigned short*)(*this_00)[uVar3];
                        uVar1 = *puVar7;
                        uVar8 = ((Layout*)vertexTransformData.SSOBeginPtr())->HeapBeginPtr();
                        if (uVar1 < uVar8) {
                            math::Matrix44T::operator_cast_to_Matrix43T(&local_10d8);
                            this_03 = (WrapArray<math::Matrix43T<float>>*)vertexTransformData.SSOBeginPtr();
                            puVar7 = (unsigned short*)(*this_00)[uVar3];
                            this_04 =
                                (ParticleVertexDataProxy<math::Vector3T<float>>*)(*this_03)[(unsigned long)*puVar7];
                            *this_04 = local_10d8;
                        }
                        uVar3 = (unsigned long)uVar2;
                        uVar8 = this_00->end();
                        uVar2 = uVar2 + 1;
                    } while (uVar3 < uVar8);
                }
                uVar8 = (unsigned long)((int)local_1070 + 1);
                uVar3 = local_1078->end();
                local_1070 = uVar8;
            } while (uVar8 < uVar3);
        }
    }

    // 0x10094ded0
    void BlendTreeAnimationSampler::UpdateJointMatricesFromPose(const shared_ptr<AnimBase>& animBase,
                                                                unsigned char arg2) {
        Matrix44T<float>* this_02;
        unsigned long uVar3;
        unsigned int uVar4;
        ReturnValue local_1158;
        WrapArray<unsigned char const> local_1118;
        WrapArray<unsigned char const> local_10d8;
        WrapArray<math::Matrix44T<float>> local_1090;

        Array<Joint>* local_1070 = ((AnimBase*)animBase.operator->())->GetBindPose(arg2);
        uint8_t* this_03 = &field_32;
        unsigned long uVar1 = this_03->end();
        Array<math::Matrix44T<float>>* local_1080 = (Array<math::Matrix44T<float>>*)&field_56;
        field_56.set_max_size(uVar1, 1);
        uVar1 = this_03->end();
        fixed_vector<math::Matrix44T<float>, 64ul> local_1068(uVar1);
        local_1090.WrapArray<eastl::fixed_vector<math::Matrix44T<float>, 64ul>>(local_1068);
        local_1118.WrapArray<Array<unsigned char>>(*this_03);
        local_10d8.WrapArray<Array<unsigned char>>(*local_1070);
        pose::ConvertToMatrices(&local_1090, local_1118, local_10d8);
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_1078 =
            (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_03;
        if (this_03->end() != 0) {
            uVar4 = 1;
            uVar1 = 0;
            do {
                local_1158 = ((Joint*)(*local_1070)[uVar1])->GetWorldBindInverse();
                local_10d8* local_1158;
                local_1068[uVar1];
                local_1118* local_10d8;
                this_02 = (Matrix44T<float>*)(*local_1080)[uVar1];
                *this_02 = local_1118;
                uVar1 = (unsigned long)uVar4;
                uVar3 = local_1078->end();
                uVar4 = uVar4 + 1;
            } while (uVar1 < uVar3);
        }
    }

    // 0x10094e0b0
    void BlendTreeAnimationSampler::Update(const Array<LabelData>& labelDatas, const math::Matrix44T<float>& matrix44) {
        short sVar1;
        long lVar2;
        long* plVar3;
        shared_ptr<AnimBase>* psVar4;
        WrapArray<unsigned char const> local_48;

        if (m_pBlendTree != nullptr) {
            lVar2 = m_pBlendTree->HeapBeginPtr();
            if (lVar2 != 0) {
                plVar3 = (long*)m_pBlendTree->HeapBeginPtr();
                psVar4 = (shared_ptr<AnimBase>*)(**(void (**)(...))(*plVar3 + 24))(plVar3);
                sVar1 = ((AnimBase*)(*psVar4).operator->())->GetNumJoints();
                field_32.set_max_size((long)sVar1, 1);
                local_48.WrapArray<Array<unsigned char>>(field_32);
                (**(void (**)(...))(*plVar3 + 16))(plVar3, &local_48, labelDatas, matrix44);
                psVar4 = (shared_ptr<AnimBase>*)(**(void (**)(...))(*plVar3 + 24))(plVar3);
                lVar2 = (**(void (**)(...))(*plVar3 + 24))(plVar3);
                UpdateJointMatricesFromPose(*psVar4, *(unsigned char*)(lVar2 + 16));
                return;
            }
        }
        LogAssert("m_blendTree && m_blendTree->GetRoot()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/animation/"
                  "BlendTreeAnimationSampler.cpp",
                  72, "BlendTreeAnimationSampler::Update being called without a suitable blend tree");
    }

    // 0x10094e1a0
    void BlendTreeAnimationSampler::GetRT5BoneTransforms(WrapArray<math::Matrix43T<float>>& wrapArray,
                                                         const eastl::vector_map<unsigned short, unsigned short>& arg2,
                                                         const eastl::vector_map<unsigned short, unsigned short>& arg3,
                                                         const math::Matrix44T<float>& matrix44) const {
        unsigned short uVar1;
        long* plVar2;
        shared_ptr<AnimBase>* this_00;
        SceneManager* this_01;
        map<short, short>* this_02;
        uint16_t* puVar3;
        uint16_t* puVar4;
        short* psVar5;
        ParticleVertexDataProxy<math::Vector3T<float>>* this_03;
        Matrix44T local_78;
        BlendTreeAnimationSampler* local_38;

        if (m_pBlendTree != nullptr) {
            local_38 = this;
            plVar2 = (long*)m_pBlendTree->HeapBeginPtr();
            this_00 = (shared_ptr<AnimBase>*)(**(void (**)(...))(*plVar2 + 24))(plVar2);
            this_01 = (SceneManager*)(*this_00).operator->();
            this_02 = (map<short, short>*)this_01->GetEntityHighlightGlobalState();
            puVar3 = (uint16_t*)arg3.HeapBeginPtr();
            puVar4 = (uint16_t*)arg3.end();
            if (puVar3 != puVar4) {
                local_38 = (BlendTreeAnimationSampler*)&local_38->field_56;
                do {
                    local_78._0_2_ = *puVar3;
                    uVar1 = puVar3[1];
                    psVar5 = (short*)(*this_02)[local_78];
                    (*local_38)[(long)*psVar5];
                    math::Matrix44T::operator_cast_to_Matrix43T(&local_78);
                    this_03 = &wrapArray[(unsigned long)uVar1];
                    *this_03 = local_78;
                    puVar3 = puVar3 + 2;
                } while (puVar3 != puVar4);
            }
        }
    }

    // 0x10094e270
    void BlendTreeAnimationSampler::GetLabelData(WrapArray<float>& wrapArray,
                                                 const eastl::vector_map<unsigned short, unsigned short>& arg2,
                                                 AnimationLabelType animationLabelType) const {
        Array<float>* this_00;

        if (animationLabelType == 0) {
            this_00 = (Array<float>*)&AnimationConstants::IDENTITY_LABELDELTAS;
        } else {
            this_00 = (Array<float>*)&AnimationConstants::IDENTITY_BILLBOARDTRANSFORMS;
        }
        int iVar1 = wrapArray.HeapBeginPtr();
        void* pvVar2 = &wrapArray[0];
        void* pvVar3 = (void*)(*this_00)[0];
        _memcpy(pvVar2, pvVar3, (unsigned long)(unsigned int)(iVar1 * 4));
    }

    // 0x10094e2e0
    void BlendTreeAnimationSampler::ApplyBoneTransforms(math::Vector3T<float>& vector3,
                                                        const eastl::vector_map<unsigned short, unsigned short>& arg2,
                                                        const eastl::vector_map<unsigned short, unsigned short>& arg3,
                                                        const math::Matrix44T<float>& matrix44) const {
        long* plVar2;
        shared_ptr<AnimBase>* this_00;
        SceneManager* this_01;
        map<short, short>* this_02;
        short* psVar3;
        Matrix44T<float>* matrix44_00;
        short local_2a;

        long lVar1 = arg2.size();
        if (lVar1 != 1) {
            lVar1 = arg3.size();
            if (lVar1 != 1) {
                LogAssert("boneMap.size() == 1 || jointMap.size() == 1",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "animation/BlendTreeAnimationSampler.cpp",
                          132, nullptr);
            }
        }
        lVar1 = arg3.size();
        if (lVar1 == 1) {
            plVar2 = (long*)m_pBlendTree->HeapBeginPtr();
            this_00 = (shared_ptr<AnimBase>*)(**(void (**)(...))(*plVar2 + 24))(plVar2);
            this_01 = (SceneManager*)(*this_00).operator->();
            this_02 = (map<short, short>*)this_01->GetEntityHighlightGlobalState();
            psVar3 = (short*)arg3.HeapBeginPtr();
            local_2a = *psVar3;
            psVar3 = (short*)(*this_02)[local_2a];
            matrix44_00 = &field_56[(long)*psVar3];
            vector3.SetXYZ(vector3 * *matrix44_00);
        }
    }

    // 0x100953fd0: BlendTreeAnimationSampler::SetDrawDebugSkeleton(bool) has the same machine code as RT5AnimationSampler::SetTransformMaskToggle(bool)

    // 0x100953fe0: BlendTreeAnimationSampler::SetBlendTree(BlendTree*) has the same machine code as RT5AnimationSampler::SetVertexTransformsOverride(VertexTransformData*)

} // namespace jag::graphics
