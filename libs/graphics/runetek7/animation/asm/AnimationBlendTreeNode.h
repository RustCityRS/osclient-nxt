// libs/graphics/runetek7/animation/asm/AnimationBlendTreeNode.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    template <
        typename...> // 2 instantiations, e.g. <AnimationParameters*>, <std::unique_ptr<AnimationParameters, MakeUniquePool<Animati
    class AnimationBlendTreeNode {
    public:
        // virtual methods in vtable order
        virtual ~AnimationBlendTreeNode();
        virtual void GetPose(WrapArray<JointPose> wrapArray, const Array<LabelData>& labelDatas,
                             const math::Matrix44T<float>& matrix44);
        virtual AnimationBlendTreeNode<AnimationParameters*>* GetBindInfo() const;
        virtual void Update(unsigned int arg1);
        virtual void Reset(unsigned int arg1);
        virtual char* GetTypeString() const;
        virtual auto GetTreeAsString() const;
        AnimationBlendTreeNode();
        void SetAnimation<AnimationParameters*>(AnimationParameters*&& arg1);
        void GetBindInfo() const;
        void
        SetAnimation<std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>>(
            std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>&&
                animationParameters);
        AnimationBlendTreeNode(AnimationBlendTreeNode<AnimationParameters*>&& animationBlendTreeNode);
    };

    // 0x100957200
    void AnimState::GetBlendTree() const {
        get();
    }

    // 0x100957bf0
    void AnimState::GetSingleAnimation() {
        if ((&field_8)->operator_cast_to_bool() == '\0') {
            LogAssert("m_animation",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/asm/AnimationStateMachine.h",
                      87, nullptr);
        }
        *field_8;
    }

    // 0x100957c40
    void AnimationBlendTreeNode<AnimationParameters*>::SetAnimation<AnimationParameters*>(AnimationParameters*&& arg1) {
        shared_ptr<Animation>* psVar1;
        NXTRenderCanvas* pNVar2;
        shared_ptr<AnimKeyFrameSet>* psVar3;
        RT7Core* this_01;
        shared_ptr<AnimBase>* animBase;
        uint8_t uVar4;

        OpenGLView* this_00 = (OpenGLView*)*arg1;
        this[5]._vptr = (AnimationBlendTreeNode<AnimationParameters*> _vtbl*)this_00;
        if (this_00 == nullptr) {
            (*((this + 6))) = (*((BindInfo*)&BlendTreeNode::EmptyBindInfo));
        } else {
            psVar1 = (shared_ptr<Animation>*)this_00->GetCursorMutex();
            pNVar2 = (NXTRenderCanvas*)(*psVar1).operator->();
            psVar3 = (shared_ptr<AnimKeyFrameSet>*)pNVar2->GetPixelBuffer();
            this_01 = (RT7Core*)(*psVar3).operator->();
            animBase = (shared_ptr<AnimBase>*)this_01->GetMSAASampleCount();
            (*((this + 6))) = *animBase;
            psVar1 = (shared_ptr<Animation>*)this[5]._vptr->GetCursorMutex();
            pNVar2 = (NXTRenderCanvas*)(*psVar1).operator->();
            psVar3 = (shared_ptr<AnimKeyFrameSet>*)pNVar2->GetPixelBuffer();
            uVar4 = ((AnimKeyFrameSet*)(*psVar3).operator->())->GetBindID();
            *(uint8_t*)&this[8]._vptr = uVar4;
        }
    }

    // 0x100958190
    void AnimState::GetSingleAnimation() const {
        if ((&field_8)->operator_cast_to_bool() == '\0') {
            LogAssert("m_animation",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/asm/AnimationStateMachine.h",
                      88, nullptr);
        }
        *field_8;
    }

    // 0x100961e60
    AnimationBlendTreeNode<AnimationParameters*>::AnimationBlendTreeNode() : BlendTreeNode() {
        new ((this + 6)) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
    }

    // 0x100961ed0
    void AnimationBlendTreeNode<AnimationParameters*>::GetPose(WrapArray<JointPose> wrapArray,
                                                               const Array<LabelData>& labelDatas,
                                                               const math::Matrix44T<float>& matrix44) {
        unsigned char arg2;
        Matrix44T<float>* matrix44_00;
        Vector3T<float>* in_R8;
        Vector3T<float>* in_R9;
        WrapArray<game::Cutscene2DAnimation<float>::Key const> local_48;

        SampledPoseAnimationSampler local_120;
        AnimationParameters* animationParameters = (AnimationParameters*)this[5]._vptr;
        AnimationInfo local_88(*animationParameters);
        local_120.UpdatePose(*animationParameters, *matrix44_00, local_88);
        auto local_58 = local_120.GetPose();
        auto jointPose1 = local_58.end();
        long lVar1 = local_58.end();
        long lVar2 = local_58.HeapBeginPtr();
        auto jointPose3 = wrapArray->end();
        eastl::copy<JointPose const*, JointPose*>(jointPose1, (lVar2 * 48 + lVar1), jointPose3);
        if ((*(char*)&this[1]._vptr != '\0') && (AnimationStateProvider::m_useAsyncAnimUpdate == '\0')) {
            arg2 = *(unsigned char*)&this[8]._vptr;
            local_48.WrapArray<WrapArray<game::Cutscene2DAnimation<float>::Key const>>(*wrapArray);
            pose::DebugDrawSkeleton(*((this + 6)), arg2, local_48, matrix44, in_R8, in_R9);
        }
    }

    // 0x100962020
    AnimationBlendTreeNode<AnimationParameters*>* AnimationBlendTreeNode<AnimationParameters*>::GetBindInfo() const {
        AnimationBlendTreeNode<AnimationParameters*>* pAVar1 =
            (AnimationBlendTreeNode<AnimationParameters*>*)&BlendTreeNode::EmptyBindInfo;
        if (this[5]._vptr != (AnimationBlendTreeNode<AnimationParameters*> _vtbl*)0) {
            pAVar1 = this + 6;
        }
        return pAVar1;
    }

    // 0x100962040
    void AnimationBlendTreeNode<AnimationParameters*>::Update(unsigned int arg1) {
        if (this[5]._vptr == (AnimationBlendTreeNode<AnimationParameters*> _vtbl*)0) {
            LogAssert("m_animation",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/asm/AnimationBlendTreeNode.h",
                      27, nullptr);
        }
        this[5]._vptr->Update(arg1);
    }

    // 0x100962090
    void AnimationBlendTreeNode<AnimationParameters*>::Reset(unsigned int arg1) {
        if (this[5]._vptr == (AnimationBlendTreeNode<AnimationParameters*> _vtbl*)0) {
            LogAssert("m_animation",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/asm/AnimationBlendTreeNode.h",
                      37, nullptr);
        }
        this[5]._vptr->Reset(arg1, 0);
    }

    // 0x1009620e0
    char* AnimationBlendTreeNode<AnimationParameters*>::GetTypeString() const {
        return "Anim";
    }

    // 0x1009620f0
    auto AnimationBlendTreeNode<AnimationParameters*>::GetTreeAsString() const {
        uint8_t uVar1;
        uint64_t extraout_var;
        uint64_t extraout_var_00;

        if (this[5]._vptr == (AnimationBlendTreeNode<AnimationParameters*> _vtbl*)0) {
            uVar1 = GetTypeString();
            local_58 = eastl::string((char*)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar1));
            result + local_58;
        } else {
            uVar1 = GetTypeString();
            auto result((char*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1));
        }
        return result;
    }

    // 0x1009622b0
    AnimationBlendTreeNode<AnimationParameters*>::~AnimationBlendTreeNode() {
        ((this + 6))->~LRUHashCacheWrapper();
    }

    // 0x100966990
    AnimationBlendTreeNode<std::unique_ptr<
        AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>>::AnimationBlendTreeNode()
        : BlendTreeNode() {
        *(uint8_t**)this = PTR_vtable_100ee8848 + 16;
        new ((this + 48)) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
    }

    // 0x100966a30
    void AnimationBlendTreeNode<
        std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>>::
        GetPose(WrapArray<JointPose> wrapArray, const Array<LabelData>& labelDatas,
                const math::Matrix44T<float>& matrix44) {
        AnimationBlendTreeNode<
            std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>>
            arg2;
        AnimationParameters* animationParameters;
        Matrix44T<float>* matrix44_00;
        Vector3T<float>* in_R8;
        Vector3T<float>* in_R9;
        WrapArray<game::Cutscene2DAnimation<float>::Key const> local_48;

        SampledPoseAnimationSampler local_120;
        animationParameters = (AnimationParameters*)*(*((this + 40)));
        AnimationInfo local_88(*animationParameters);
        local_120.UpdatePose(*animationParameters, *matrix44_00, local_88);
        auto local_58 = local_120.GetPose();
        auto jointPose1 = local_58.end();
        long lVar1 = local_58.end();
        long lVar2 = local_58.HeapBeginPtr();
        auto jointPose3 = wrapArray->end();
        eastl::copy<JointPose const*, JointPose*>(jointPose1, (lVar2 * 48 + lVar1), jointPose3);
        if ((this[8] !=
             (AnimationBlendTreeNode<std::unique_ptr<AnimationParameters,
                                                     MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>>)0) &&
            (AnimationStateProvider::m_useAsyncAnimUpdate == '\0')) {
            arg2 = this[64];
            local_48.WrapArray<WrapArray<game::Cutscene2DAnimation<float>::Key const>>(*wrapArray);
            pose::DebugDrawSkeleton(*((this + 48)), (unsigned char)arg2, local_48, matrix44, in_R8, in_R9);
        }
    }

    // 0x100966b80
    void AnimationBlendTreeNode<std::unique_ptr<
        AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>>::GetBindInfo() const {
        void* in_RSI;

        bool bVar1 = ((this + 40)) == in_RSI;
        AnimationBlendTreeNode<
            std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>>* pAVar2 =
            (AnimationBlendTreeNode<std::unique_ptr<
                 AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>>*)&BlendTreeNode::
                EmptyBindInfo;
        if (!bVar1) {
            pAVar2 = this + 48;
        }
        return pAVar2;
    }

    // 0x100966bb0
    void AnimationBlendTreeNode<std::unique_ptr<
        AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>>::Update(unsigned int arg1) {
        if (((this + 40))->operator_cast_to_bool() == '\0') {
            LogAssert("m_animation",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/asm/AnimationBlendTreeNode.h",
                      27, nullptr);
        }
        ((AnimationParameters*)(*((this + 40))).operator->())->Update(arg1);
    }

    // 0x100966c10
    void AnimationBlendTreeNode<std::unique_ptr<
        AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>>::Reset(unsigned int arg1) {
        if (((this + 40))->operator_cast_to_bool() == '\0') {
            LogAssert("m_animation",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/asm/AnimationBlendTreeNode.h",
                      37, nullptr);
        }
        ((AnimationParameters*)(*((this + 40))).operator->())->Reset(arg1, 0);
    }

    // 0x100966c70
    char* AnimationBlendTreeNode<std::unique_ptr<
        AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>>::GetTypeString() const {
        return "Anim";
    }

    // 0x100966c80
    auto AnimationBlendTreeNode<std::unique_ptr<
        AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>>::GetTreeAsString() const {
        char* pcVar2;
        eastl::string local_50;

        if (((this + 40)) == this) {
            pcVar2 = (char*)(**(void (**)(...))(*(long*)this + 48))(this);
            local_50 = eastl::string(pcVar2);
            result + local_50;
        } else {
            pcVar2 = (char*)(**(void (**)(...))(*(long*)this + 48))(this);
            auto result(pcVar2);
        }
        return result;
    }

    // 0x100966d70
    AnimationBlendTreeNode<std::unique_ptr<
        AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>>::~AnimationBlendTreeNode() {
        *(uint8_t**)this = PTR_vtable_100ee8848 + 16;
        ((this + 48))->~LRUHashCacheWrapper();
        ((this + 40))->~unique_ptr();
    }

    // 0x1009677d0
    void AnimationBlendTreeNode<
        std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>>::
        SetAnimation<std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>>(
            std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>&&
                animationParameters) {
        OpenGLView* pOVar1;
        shared_ptr<Animation>* psVar2;
        NXTRenderCanvas* pNVar3;
        shared_ptr<AnimKeyFrameSet>* psVar4;
        RT7Core* this_01;
        shared_ptr<AnimBase>* animBase;
        AnimKeyFrameSet* this_02;

        unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>* this_00 =
            (unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>*)(this + 40);
        *this_00 = animationParameters;
        if (this_00 != animationParameters) {
            pOVar1 = (OpenGLView*)(*this_00).operator->();
            psVar2 = (shared_ptr<Animation>*)pOVar1->GetCursorMutex();
            pNVar3 = (NXTRenderCanvas*)(*psVar2).operator->();
            psVar4 = (shared_ptr<AnimKeyFrameSet>*)pNVar3->GetPixelBuffer();
            this_01 = (RT7Core*)(*psVar4).operator->();
            animBase = (shared_ptr<AnimBase>*)this_01->GetMSAASampleCount();
            (*((this + 48))) = *animBase;
            pOVar1 = (OpenGLView*)(*this_00).operator->();
            psVar2 = (shared_ptr<Animation>*)pOVar1->GetCursorMutex();
            pNVar3 = (NXTRenderCanvas*)(*psVar2).operator->();
            psVar4 = (shared_ptr<AnimKeyFrameSet>*)pNVar3->GetPixelBuffer();
            this_02 = (AnimKeyFrameSet*)(*psVar4).operator->();
            this[64] =
                (AnimationBlendTreeNode<
                    std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>>)
                    this_02->GetBindID();
        } else {
            (*((this + 48))) = (*((BindInfo*)&BlendTreeNode::EmptyBindInfo));
        }
    }

    // 0x10096c300
    AnimationBlendTreeNode<AnimationParameters*>::AnimationBlendTreeNode(
        AnimationBlendTreeNode<AnimationParameters*>&& animationBlendTreeNode)
        : BlendTreeNode(animationBlendTreeNode) {
        new ((this + 6)) BindInfo(*((animationBlendTreeNode + 6)));
    }

} // namespace jag::graphics
