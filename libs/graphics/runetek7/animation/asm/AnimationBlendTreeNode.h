// libs/graphics/runetek7/animation/asm/AnimationBlendTreeNode.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    template <
        typename...> // 2 instantiations, e.g. <AnimationParameters*>, <std::unique_ptr<AnimationParameters, MakeUniquePool<Animati
    class AnimationBlendTreeNode {
    public:
        // virtual methods in vtable order
        virtual ~AnimationBlendTreeNode();
        virtual void GetPose(WrapArray<JointPose>, Array<LabelData, eastl::allocator> const&,
                             math::Matrix44T<float> const&);
        virtual AnimationBlendTreeNode<AnimationParameters*>* GetBindInfo() const;
        virtual void Update(unsigned int);
        virtual void Reset(unsigned int);
        virtual char* GetTypeString() const;
        virtual AnimationBlendTreeNode<AnimationParameters*>* GetTreeAsString() const;
        AnimationBlendTreeNode();
        void SetAnimation<AnimationParameters*>(AnimationParameters*&&);
        GetBindInfo() const;
        GetTreeAsString() const;
        void
        SetAnimation<std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>>(
            std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>&&);
        AnimationBlendTreeNode(AnimationBlendTreeNode<AnimationParameters*>&&);
    };

    // 0x100956d80, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // AnimationBlendTreeNode<AnimationParameters*>::AnimationBlendTreeNode(): jumps straight to the base-object constructor

    // 0x100956d90, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // AnimationBlendTreeNode<AnimationParameters*>::~AnimationBlendTreeNode(): jumps straight to the base-object destructor

    // 0x100957200, 16 bytes, inline, placed by debug map only (low confidence)
    // AnimState::GetBlendTree() const
    void AnimState::GetBlendTree() {
        get();
    }

    // 0x100957bf0, 80 bytes, inline, placed by debug map only (low confidence)
    // AnimState::GetSingleAnimation()
    void AnimState::GetSingleAnimation() {
        if (!(&field_8)->operator_cast_to_bool()) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_animation",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/asm/AnimationStateMachine.h",
                      87, (char*)0);
        }
        std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>::operator*(
            (unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>*)&field_8);
    }

    // 0x100957c40, 144 bytes, inline, placed by class name and debug map
    // void AnimationBlendTreeNode<AnimationParameters*>::SetAnimation<AnimationParameters*>(AnimationParameters*&&)
    void
    AnimationBlendTreeNode<AnimationParameters*>::SetAnimation<AnimationParameters*>(AnimationParameters** param_1) {
        OpenGLView* this_00;
        shared_ptr<Animation>* psVar1;
        NXTRenderCanvas* pNVar2;
        shared_ptr<AnimKeyFrameSet>* psVar3;
        RT7Core* this_01;
        shared_ptr* psVar4;
        AnimKeyFrameSet* this_02;
        AnimationBlendTreeNode<AnimationParameters*> AVar5;

        this_00 = (OpenGLView*)*param_1;
        *(OpenGLView**)(this + 40) = this_00;
        if (this_00 == (OpenGLView*)0) {
            BindInfo::operator=((BindInfo*)(this + 48), (BindInfo*)&BlendTreeNode::EmptyBindInfo);
        } else {
            psVar1 = (shared_ptr<Animation>*)this_00->GetCursorMutex();
            pNVar2 = (NXTRenderCanvas*)shared_ptr<Animation>::operator->(psVar1);
            psVar3 = (shared_ptr<AnimKeyFrameSet>*)pNVar2->GetPixelBuffer();
            this_01 = (RT7Core*)shared_ptr<AnimKeyFrameSet>::operator->(psVar3);
            psVar4 = (shared_ptr*)this_01->GetMSAASampleCount();
            shared_ptr<AnimBase>::operator=((shared_ptr<AnimBase>*)(this + 48), psVar4);
            psVar1 = (shared_ptr<Animation>*)(*(OpenGLView**)(this + 40))->GetCursorMutex();
            pNVar2 = (NXTRenderCanvas*)shared_ptr<Animation>::operator->(psVar1);
            psVar3 = (shared_ptr<AnimKeyFrameSet>*)pNVar2->GetPixelBuffer();
            this_02 = (AnimKeyFrameSet*)shared_ptr<AnimKeyFrameSet>::operator->(psVar3);
            AVar5 = (AnimationBlendTreeNode<AnimationParameters*>)this_02->GetBindID();
            this[64] = AVar5;
        }
    }

    // 0x100957cd0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // AnimationInfo::AnimationInfo(AnimationParameters const&): jumps straight to the base-object constructor

    // 0x100958190, 80 bytes, inline, placed by debug map only (low confidence)
    // AnimState::GetSingleAnimation() const
    void AnimState::GetSingleAnimation() {
        if (!(&field_8)->operator_cast_to_bool()) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_animation",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/asm/AnimationStateMachine.h",
                      88, (char*)0);
        }
        std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>::operator*(
            (unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>*)&field_8);
    }

    // 0x100961e60, 80 bytes, base-object constructor, inline, placed by class name
    // AnimationBlendTreeNode<AnimationParameters*>::AnimationBlendTreeNode()
    void AnimationBlendTreeNode<AnimationParameters*>::AnimationBlendTreeNode() {
        new (this) BlendTreeNode();
        *(undefined**)this = PTR_vtable_100ee8850 + 16;
        *(undefined8*)(this + 40) = 0;
        new ((this + 48)) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
    }

    // 0x100961eb0, 32 bytes, deleting destructor, inline, placed by class name
    // AnimationBlendTreeNode<AnimationParameters*>::~AnimationBlendTreeNode()
    void AnimationBlendTreeNode<AnimationParameters*>::~AnimationBlendTreeNode() {
        ~AnimationBlendTreeNode(this);
        operator_delete(this);
    }

    // 0x100961ed0, 336 bytes, inline, placed by class name
    // AnimationBlendTreeNode<AnimationParameters*>::GetPose(WrapArray<JointPose>, Array<LabelData, eastl::allocator> const&, math::Matrix44T<float> const&)
    void AnimationBlendTreeNode<AnimationParameters*>::GetPose(
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* param_2, undefined8 param_3,
        undefined8 param_4) {
        AnimationBlendTreeNode<AnimationParameters*> AVar1;
        JointPose* pJVar2;
        long lVar3;
        long lVar4;
        JointPose* pJVar5;
        Matrix44T* extraout_RDX;
        AnimationParameters* pAVar6;
        SampledPoseAnimationSampler local_120;
        AnimationInfo local_88;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL> local_58[16];
        WrapArray<game::Cutscene2DAnimation<float>::Key_const> local_48[24];

        new (&local_120) SampledPoseAnimationSampler();
        pAVar6 = *(AnimationParameters**)(this + 40);
        new (&local_88) AnimationInfo(pAVar6);
        local_120.UpdatePose(pAVar6, extraout_RDX, &local_88);
        local_48._16_8_ = param_4;
        local_58->GetPose();
        pJVar2 = (JointPose*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(local_58);
        lVar3 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(local_58);
        lVar4 = local_58->HeapBeginPtr();
        pJVar5 = (JointPose*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(param_2);
        eastl::copy<JointPose_const*, JointPose*>(pJVar2, (JointPose*)(lVar4 * 48 + lVar3), pJVar5);
        if ((this[8] != (AnimationBlendTreeNode<AnimationParameters*>)0) &&
            (AnimationStateProvider::m_useAsyncAnimUpdate == '\0')) {
            AVar1 = this[64];
            WrapArray<game::Cutscene2DAnimation<float>::Key_const>::WrapArray<
                WrapArray<game::Cutscene2DAnimation<float>::Key_const>>(local_48, param_2);
            pose::DebugDrawSkeleton(*(undefined8*)(this + 12), *(undefined4*)(this + 20), *(undefined8*)(this + 24),
                                    *(undefined4*)(this + 32), this + 48, AVar1, local_48, local_48._16_8_);
        }
        local_88.~Sprite();
        local_120.~SampledPoseAnimationSampler();
    }

    // 0x100962020, 32 bytes, inline, placed by class name
    // AnimationBlendTreeNode<AnimationParameters*>::GetBindInfo() const
    AnimationBlendTreeNode<AnimationParameters*>* AnimationBlendTreeNode<AnimationParameters*>::GetBindInfo() {
        AnimationBlendTreeNode<AnimationParameters*>* pAVar1;

        pAVar1 = (AnimationBlendTreeNode<AnimationParameters*>*)&BlendTreeNode::EmptyBindInfo;
        if (*(long*)(this + 40) != 0) {
            pAVar1 = this + 48;
        }
        return pAVar1;
    }

    // 0x100962040, 80 bytes, inline, placed by class name
    // AnimationBlendTreeNode<AnimationParameters*>::Update(unsigned int)
    void AnimationBlendTreeNode<AnimationParameters*>::Update(uint param_1) {
        if (*(long*)(this + 40) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_animation",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/asm/AnimationBlendTreeNode.h",
                      27, (char*)0);
        }
        (*(AnimationParameters**)(this + 40))->Update(param_1);
    }

    // 0x100962090, 80 bytes, inline, placed by class name
    // AnimationBlendTreeNode<AnimationParameters*>::Reset(unsigned int)
    void AnimationBlendTreeNode<AnimationParameters*>::Reset(uint param_1) {
        if (*(long*)(this + 40) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_animation",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/asm/AnimationBlendTreeNode.h",
                      37, (char*)0);
        }
        (*(AnimationParameters**)(this + 40))->Reset(param_1, 0);
    }

    // 0x1009620e0, 16 bytes, inline, placed by class name
    // AnimationBlendTreeNode<AnimationParameters*>::GetTypeString() const
    char* AnimationBlendTreeNode<AnimationParameters*>::GetTypeString() {
        return "Anim";
    }

    // 0x1009620f0, 192 bytes, inline, placed by class name
    // AnimationBlendTreeNode<AnimationParameters*>::GetTreeAsString() const
    AnimationBlendTreeNode<AnimationParameters*>* AnimationBlendTreeNode<AnimationParameters*>::GetTreeAsString() {
        char* pcVar1;
        long* in_RSI;
        allocator local_58[32];
        allocator local_38[8];

        if (in_RSI[5] == 0) {
            pcVar1 = (char*)(**(code**)(*in_RSI + 48))();
            eastl::allocator::allocator(local_38, "EASTL basic_string");
            new (local_58) eastl::string(pcVar1, local_38);
            eastl::operator+((eastl*)this, (basic_string*)local_58, (value_type*)"[NULL]");
            local_58->~basic_string();
        } else {
            pcVar1 = (char*)(**(code**)(*in_RSI + 48))();
            eastl::allocator::allocator(local_58, "EASTL basic_string");
            new (this) eastl::string(pcVar1, local_58);
        }
        return this;
    }

    // 0x1009622b0, 48 bytes, base-object destructor, inline, placed by class name
    // AnimationBlendTreeNode<AnimationParameters*>::~AnimationBlendTreeNode()
    void AnimationBlendTreeNode<AnimationParameters*>::~AnimationBlendTreeNode() {
        *(undefined**)this = PTR_vtable_100ee8850 + 16;
        ((this + 48))->~LRUHashCacheWrapper();
        ~AutoSingleton();
    }

    // 0x100966970, 16 bytes, complete-object constructor, inline, placed by class name
    // AnimationBlendTreeNode<std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter> >::AnimationBlendTreeNode(): jumps straight to the base-object constructor

    // 0x100966990, 96 bytes, base-object constructor, inline, placed by class name
    // AnimationBlendTreeNode<std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter> >::AnimationBlendTreeNode()
    /* AnimationBlendTreeNode<std::unique_ptr<AnimationParameters,
   MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>
   >::AnimationBlendTreeNode() */

    void graphics::AnimationBlendTreeNode<
        std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>>::
        AnimationBlendTreeNode(
            AnimationBlendTreeNode<std::unique_ptr<
                AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>>* this) {
        new (this) BlendTreeNode();
        *(undefined**)this = PTR_vtable_100ee8848 + 16;
        std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>::unique_ptr<
            true, void>((_func_decltype_nullptr*)(this + 40));
        new ((this + 48)) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
    }

    // 0x100966a00, 16 bytes, complete-object destructor, inline, placed by class name
    // AnimationBlendTreeNode<std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter> >::~AnimationBlendTreeNode(): jumps straight to the base-object destructor

    // 0x100966a10, 32 bytes, deleting destructor, inline, placed by class name
    // AnimationBlendTreeNode<std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter> >::~AnimationBlendTreeNode()
    /* AnimationBlendTreeNode<std::unique_ptr<AnimationParameters,
   MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>
   >::~AnimationBlendTreeNode() */

    void graphics::AnimationBlendTreeNode<
        std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>>::
        ~AnimationBlendTreeNode(
            AnimationBlendTreeNode<std::unique_ptr<
                AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>>* this) {
        ~AnimationBlendTreeNode(this);
        operator_delete(this);
    }

    // 0x100966a30, 336 bytes, inline, placed by class name
    // AnimationBlendTreeNode<std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter> >::GetPose(WrapArray<JointPose>, Array<LabelData, eastl::allocator> const&, math::Matrix44T<float> const&)
    /* AnimationBlendTreeNode<std::unique_ptr<AnimationParameters,
   MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>
   >::GetPose(WrapArray<JointPose>, Array<LabelData,
   eastl::allocator> const&, math::Matrix44T<float> const&) */

    void graphics::AnimationBlendTreeNode<
        std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>>::
        GetPose(AnimationBlendTreeNode<std::unique_ptr<
                    AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>>* this,
                vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* param_2, undefined8 param_3,
                undefined8 param_4) {
        AnimationBlendTreeNode<
            std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>>
            AVar1;
        AnimationParameters* pAVar2;
        JointPose* pJVar3;
        long lVar4;
        long lVar5;
        JointPose* pJVar6;
        Matrix44T* extraout_RDX;
        SampledPoseAnimationSampler local_120;
        AnimationInfo local_88;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL> local_58[16];
        WrapArray<game::Cutscene2DAnimation<float>::Key_const> local_48[24];

        new (&local_120) SampledPoseAnimationSampler();
        pAVar2 = (AnimationParameters*)std::
            unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>::operator*(
                (unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>*)(this +
                                                                                                                40));
        new (&local_88) AnimationInfo(pAVar2);
        local_120.UpdatePose(pAVar2, extraout_RDX, &local_88);
        local_48._16_8_ = param_4;
        local_58->GetPose();
        pJVar3 = (JointPose*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(local_58);
        lVar4 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(local_58);
        lVar5 = local_58->HeapBeginPtr();
        pJVar6 = (JointPose*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(param_2);
        eastl::copy<JointPose_const*, JointPose*>(pJVar3, (JointPose*)(lVar5 * 48 + lVar4), pJVar6);
        if ((this[8] !=
             (AnimationBlendTreeNode<std::unique_ptr<AnimationParameters,
                                                     MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>>)0) &&
            (AnimationStateProvider::m_useAsyncAnimUpdate == '\0')) {
            AVar1 = this[64];
            WrapArray<game::Cutscene2DAnimation<float>::Key_const>::WrapArray<
                WrapArray<game::Cutscene2DAnimation<float>::Key_const>>(local_48, param_2);
            pose::DebugDrawSkeleton(*(undefined8*)(this + 12), *(undefined4*)(this + 20), *(undefined8*)(this + 24),
                                    *(undefined4*)(this + 32), this + 48, AVar1, local_48, local_48._16_8_);
        }
        local_88.~Sprite();
        local_120.~SampledPoseAnimationSampler();
    }

    // 0x100966b80, 48 bytes, inline, placed by class name
    // AnimationBlendTreeNode<std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter> >::GetBindInfo() const
    /* AnimationBlendTreeNode<std::unique_ptr<AnimationParameters,
   MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter> >::GetBindInfo()
   const */

    AnimationBlendTreeNode<
        std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>>*
    graphics::AnimationBlendTreeNode<
        std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>>::
        GetBindInfo(AnimationBlendTreeNode<std::unique_ptr<
                        AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>>* this) {
        bool bVar1;
        AnimationBlendTreeNode<
            std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>>* pAVar2;
        _func_decltype_nullptr* in_RSI;

        bVar1 = std::operator==((unique_ptr*)(this + 40), in_RSI);
        pAVar2 = (AnimationBlendTreeNode<std::unique_ptr<
                      AnimationParameters,
                      MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>>*)&BlendTreeNode::EmptyBindInfo;
        if (!bVar1) {
            pAVar2 = this + 48;
        }
        return pAVar2;
    }

    // 0x100966bb0, 96 bytes, inline, placed by class name
    // AnimationBlendTreeNode<std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter> >::Update(unsigned int)
    /* AnimationBlendTreeNode<std::unique_ptr<AnimationParameters,
   MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>
   >::Update(unsigned int) */

    void graphics::AnimationBlendTreeNode<
        std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>>::
        Update(AnimationBlendTreeNode<std::unique_ptr<
                   AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>>* this,
               uint param_1) {
        AnimationParameters* this_00;

        if (!((this + 40))->operator_cast_to_bool()) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_animation",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/asm/AnimationBlendTreeNode.h",
                      27, (char*)0);
        }
        this_00 =
            (AnimationParameters*)
                std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>::
                operator->((unique_ptr<AnimationParameters,
                                       MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>*)(this + 40));
        this_00->Update(param_1);
    }

    // 0x100966c10, 96 bytes, inline, placed by class name
    // AnimationBlendTreeNode<std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter> >::Reset(unsigned int)
    /* AnimationBlendTreeNode<std::unique_ptr<AnimationParameters,
   MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>
   >::Reset(unsigned int) */

    void graphics::AnimationBlendTreeNode<
        std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>>::
        Reset(AnimationBlendTreeNode<std::unique_ptr<
                  AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>>* this,
              uint param_1) {
        AnimationParameters* this_00;

        if (!((this + 40))->operator_cast_to_bool()) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_animation",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/asm/AnimationBlendTreeNode.h",
                      37, (char*)0);
        }
        this_00 =
            (AnimationParameters*)
                std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>::
                operator->((unique_ptr<AnimationParameters,
                                       MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>*)(this + 40));
        this_00->Reset(param_1, 0);
    }

    // 0x100966c70, 16 bytes, inline, placed by class name
    // AnimationBlendTreeNode<std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter> >::GetTypeString() const
    /* AnimationBlendTreeNode<std::unique_ptr<AnimationParameters,
   MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>
   >::GetTypeString() const */

    char* graphics::AnimationBlendTreeNode<
        std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>>::
        GetTypeString(AnimationBlendTreeNode<std::unique_ptr<
                          AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>>* this) {
        return "Anim";
    }

    // 0x100966c80, 208 bytes, inline, placed by class name
    // AnimationBlendTreeNode<std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter> >::GetTreeAsString() const
    /* AnimationBlendTreeNode<std::unique_ptr<AnimationParameters,
   MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>
   >::GetTreeAsString() const */

    AnimationBlendTreeNode<
        std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>>*
    graphics::AnimationBlendTreeNode<
        std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>>::
        GetTreeAsString(AnimationBlendTreeNode<std::unique_ptr<
                            AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>>* this) {
        char* pcVar2;
        _func_decltype_nullptr* in_RSI;
        eastl::string local_50[32];
        allocator local_30[8];

        if (std::operator==((unique_ptr*)(in_RSI + 40), in_RSI)) {
            pcVar2 = (char*)(**(code**)(*(long*)in_RSI + 48))();
            eastl::allocator::allocator(local_30, "EASTL basic_string");
            eastl::string::basic_string(local_50, pcVar2, local_30);
            eastl::operator+((eastl*)this, (basic_string*)local_50, (value_type*)"[NULL]");
            eastl::string::~basic_string(local_50);
        } else {
            pcVar2 = (char*)(**(code**)(*(long*)in_RSI + 48))();
            new (local_50) eastl::allocator("EASTL basic_string");
            new (this) eastl::string(pcVar2, local_50);
        }
        return this;
    }

    // 0x100966d70, 64 bytes, base-object destructor, inline, placed by class name
    // AnimationBlendTreeNode<std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter> >::~AnimationBlendTreeNode()
    /* AnimationBlendTreeNode<std::unique_ptr<AnimationParameters,
   MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>
   >::~AnimationBlendTreeNode() */

    void graphics::AnimationBlendTreeNode<
        std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>>::
        ~AnimationBlendTreeNode(
            AnimationBlendTreeNode<std::unique_ptr<
                AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>>* this) {
        *(undefined**)this = PTR_vtable_100ee8848 + 16;
        ((this + 48))->~LRUHashCacheWrapper();
        ((this + 40))->~unique_ptr();
        ~AutoSingleton();
    }

    // 0x1009677d0, 176 bytes, inline, placed by class name
    // void AnimationBlendTreeNode<std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter> >::SetAnimation<std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter> >(std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>&&)
    /* void AnimationBlendTreeNode<std::unique_ptr<AnimationParameters,
   MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>
   >::SetAnimation<std::unique_ptr<AnimationParameters,
   MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>
   >(std::unique_ptr<AnimationParameters,
   MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>&&) */

    void graphics::AnimationBlendTreeNode<
        std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>>::
        SetAnimation<std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>>(
            AnimationBlendTreeNode<std::unique_ptr<AnimationParameters,
                                                   MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>>* this,
            unique_ptr* param_1) {
        unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>* this_00;
        OpenGLView* pOVar1;
        shared_ptr<Animation>* psVar2;
        NXTRenderCanvas* pNVar3;
        shared_ptr<AnimKeyFrameSet>* psVar4;
        RT7Core* this_01;
        shared_ptr* psVar5;
        AnimKeyFrameSet* this_02;
        bool bVar6;
        AnimationBlendTreeNode<
            std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>>
            AVar7;

        this_00 =
            (unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>*)(this + 40);
        std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>::operator=(
            this_00, param_1);
        bVar6 = std::operator!=((unique_ptr*)this_00, (_func_decltype_nullptr*)param_1);
        if (bVar6) {
            pOVar1 =
                (OpenGLView*)
                    std::unique_ptr<AnimationParameters,
                                    MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>::operator->(this_00);
            psVar2 = (shared_ptr<Animation>*)pOVar1->GetCursorMutex();
            pNVar3 = (NXTRenderCanvas*)shared_ptr<Animation>::operator->(psVar2);
            psVar4 = (shared_ptr<AnimKeyFrameSet>*)pNVar3->GetPixelBuffer();
            this_01 = (RT7Core*)shared_ptr<AnimKeyFrameSet>::operator->(psVar4);
            psVar5 = (shared_ptr*)this_01->GetMSAASampleCount();
            shared_ptr<AnimBase>::operator=((shared_ptr<AnimBase>*)(this + 48), psVar5);
            pOVar1 =
                (OpenGLView*)
                    std::unique_ptr<AnimationParameters,
                                    MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>::operator->(this_00);
            psVar2 = (shared_ptr<Animation>*)pOVar1->GetCursorMutex();
            pNVar3 = (NXTRenderCanvas*)shared_ptr<Animation>::operator->(psVar2);
            psVar4 = (shared_ptr<AnimKeyFrameSet>*)pNVar3->GetPixelBuffer();
            this_02 = (AnimKeyFrameSet*)shared_ptr<AnimKeyFrameSet>::operator->(psVar4);
            AVar7 = (AnimationBlendTreeNode<
                     std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>>)
                        this_02->GetBindID();
            this[64] = AVar7;
        } else {
            BindInfo::operator=((BindInfo*)(this + 48), (BindInfo*)&BlendTreeNode::EmptyBindInfo);
        }
    }

    // 0x10096c120, 16 bytes, complete-object constructor, inline, placed by class name
    // AnimationBlendTreeNode<AnimationParameters*>::AnimationBlendTreeNode(AnimationBlendTreeNode<AnimationParameters*>&&): jumps straight to the base-object constructor

    // 0x10096c300, 80 bytes, base-object constructor, inline, placed by class name
    // AnimationBlendTreeNode<AnimationParameters*>::AnimationBlendTreeNode(AnimationBlendTreeNode<AnimationParameters*>&&)
    void AnimationBlendTreeNode<AnimationParameters*>::AnimationBlendTreeNode(AnimationBlendTreeNode* param_1) {
        new (this) BlendTreeNode(param_1);
        *(undefined**)this = PTR_vtable_100ee8850 + 16;
        *(undefined8*)(this + 40) = *(undefined8*)(param_1 + 40);
        new ((this + 48)) BindInfo((BindInfo*)(param_1 + 48));
    }

} // namespace jag::graphics
