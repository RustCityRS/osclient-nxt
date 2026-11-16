// libs/graphics/runetek7/animation/asm/TwoNodeBlendDescriptor.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    template <typename...> // 2 instantiations, e.g. <float>, <unsigned long long>
    class SimpleTwoNodeBlendTreeNode {
    public:
        // virtual methods in vtable order
        virtual char* GetTypeString() const;
        virtual auto GetTreeAsString() const;
        void SetRightNode(BlendTreeNode* blendTreeNode);
        void SetLeftNode(BlendTreeNode* blendTreeNode);
        SimpleTwoNodeBlendTreeNode(SimpleTwoNodeBlendTreeNode<unsigned long long>&& simpleTwoNodeBlendTreeNode);
        SimpleTwoNodeBlendTreeNode(float arg1, float arg2, float* arg3,
                                   TwoNodeBlendTreeNodeBlendType twoNodeBlendTreeNodeBlendType);
        SimpleTwoNodeBlendTreeNode();
        void SetBlendInfo(unsigned long long arg1, unsigned long long arg2, unsigned long long* arg3);
    };

    template <typename...> // 2 instantiations, e.g. <float>, <unsigned long long>
    class TwoNodeBaseBlendTreeNode {
    public:
        // virtual methods in vtable order
        virtual void GetPose(WrapArray<JointPose> wrapArray, const Array<LabelData>& labelDatas,
                             const math::Matrix44T<float>& matrix44);
        virtual shared_ptr<oldscape::midi2::MidiRequest>* GetBindInfo() const;
        virtual void Update(unsigned int arg1);
        virtual void Reset(unsigned int arg1);
        TwoNodeBaseBlendTreeNode(TwoNodeBaseBlendTreeNode<unsigned long long>&& twoNodeBaseBlendTreeNode);
        TwoNodeBaseBlendTreeNode(float arg1, float arg2, float* arg3,
                                 TwoNodeBlendTreeNodeBlendType twoNodeBlendTreeNodeBlendType);
        TwoNodeBaseBlendTreeNode();
    };

    template <typename...> // 1 instantiations, e.g. <float>
    class TwoNodeBlendDescriptor {
    public:
        // virtual methods in vtable order
        virtual ~TwoNodeBlendDescriptor();
        virtual auto Create(AnimationStateResourceList& animationStateResourceList, VariableList& variableList);
        virtual auto ToString(unsigned int arg1) const;
        virtual auto Clone() const;
        TwoNodeBlendDescriptor<BlendTreeNodeDescriptor, BlendTreeNodeDescriptor, void>(
            std::unique_ptr<BlendTreeNodeDescriptor>&& blendTreeNodeDescriptor1,
            std::unique_ptr<BlendTreeNodeDescriptor>&& blendTreeNodeDescriptor2, float arg3, float arg4,
            const eastl::string& str);
        TwoNodeBlendDescriptor(PacketT<Array<unsigned char>>& arg1);
    };

    class TwoNodeBlendTreeHelpers {
    public:
        auto ToString(unsigned int arg1, const BlendTreeNodeDescriptor& blendTreeNodeDescriptor1,
                      const BlendTreeNodeDescriptor& blendTreeNodeDescriptor2, const eastl::string& str1,
                      const eastl::string& str2);
    };

    // 0x100973170
    TwoNodeBlendDescriptor<float>::TwoNodeBlendDescriptor<BlendTreeNodeDescriptor, BlendTreeNodeDescriptor, void>(
        std::unique_ptr<BlendTreeNodeDescriptor>&& blendTreeNodeDescriptor1,
        std::unique_ptr<BlendTreeNodeDescriptor>&& blendTreeNodeDescriptor2, float arg3, float arg4,
        const eastl::string& str)
        : BlendTreeNodeDescriptor() {
        new ((this + 1)) std::unique_ptr<BlendTreeNodeDescriptor>(blendTreeNodeDescriptor1);
        new ((this + 2)) std::unique_ptr<BlendTreeNodeDescriptor>(blendTreeNodeDescriptor2);
        *(float*)((long)&this[3]._vptr + 4) = arg4;
        new ((this + 4)) eastl::string(str);
    }

    // 0x100973250
    auto TwoNodeBlendDescriptor<float>::Create(AnimationStateResourceList& animationStateResourceList,
                                               VariableList& variableList) {
        auto result;
        unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode> _> local_38;
        unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode> _> local_30;

        long* plVar2 = (long*)(*((this + 1))).operator->();
        (**(void (**)(...))(*plVar2 + 24))(&local_38, plVar2, animationStateResourceList, variableList);
        plVar2 = (long*)(*((this + 2))).operator->();
        (**(void (**)(...))(*plVar2 + 24))(&local_30, plVar2, animationStateResourceList, variableList);
        char* pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        if (variableList.HasVariable(pcVar3) == '\0') {
            pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            variableList.AddFloatVariable(pcVar3, *(float*)&this[3]._vptr, *(float*)((long)&this[3]._vptr + 4),
                                          *(float*)&this[3]._vptr);
        }
        pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        auto local_48 = variableList.GetFloatVariable(pcVar3);
        auto local_40 = std::make_unique<TwoNodeBlendTreeNode<float>, float&, float&, float*&,
                                         std::unique_ptr<BlendTreeNode>, std::unique_ptr<BlendTreeNode>>(
            *((this + 3)), *((float*)((long)&this[3]._vptr + 4)), local_48, local_38, local_30);
        result.unique_ptr<TwoNodeBlendTreeNode<float>, std::default_delete<TwoNodeBlendTreeNode<float>>, void, void>(
            local_40);
        return result;
    }

    // 0x100973380
    auto TwoNodeBlendDescriptor<float>::ToString(unsigned int arg1) const {
        BlendTreeNodeDescriptor* blendTreeNodeDescriptor1;
        BlendTreeNodeDescriptor* blendTreeNodeDescriptor2;
        eastl::string local_70;
        eastl::string local_50;

        blendTreeNodeDescriptor1 = (BlendTreeNodeDescriptor*)*(*((this + 1)));
        blendTreeNodeDescriptor2 = (BlendTreeNodeDescriptor*)*(*((this + 2)));
        eastl::to_string(*(float*)&this[3]._vptr);
        eastl::to_string(*(float*)((long)&this[3]._vptr + 4));
        auto result = TwoNodeBlendTreeHelpers::ToString(arg1, *blendTreeNodeDescriptor1, *blendTreeNodeDescriptor2,
                                                        local_70, local_50);
        return result;
    }

    // 0x100973430
    auto TwoNodeBlendDescriptor<float>::Clone() const {
        auto result;
        unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor> _> local_28;
        unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor> _> local_20;

        long* plVar1 = (long*)(*((this + 1))).operator->();
        (**(void (**)(...))(*plVar1 + 40))(&local_28, plVar1);
        plVar1 = (long*)(*((this + 2))).operator->();
        (**(void (**)(...))(*plVar1 + 40))(&local_20, plVar1);
        auto local_30 =
            std::make_unique<TwoNodeBlendDescriptor<float>, std::unique_ptr<BlendTreeNodeDescriptor>,
                             std::unique_ptr<BlendTreeNodeDescriptor>, float const&, float const&, eastl::stringconst&>(
                local_28, local_20, *((this + 3)), *((float*)((long)&this[3]._vptr + 4)), *((this + 4)));
        std::unique_ptr<BlendTreeNodeDescriptor>::unique_ptr<
            TwoNodeBlendDescriptor<float>, std::default_delete<TwoNodeBlendDescriptor<float>>, void, void>(
            &result, (unique_ptr<TwoNodeBlendDescriptor<float>,
                                 std::default_delete<TwoNodeBlendDescriptor<float> _> _>*)&local_30);
        return result;
    }

    // 0x1009734f0
    TwoNodeBlendDescriptor<float>::~TwoNodeBlendDescriptor() {
        ((this + 4))->~basic_string();
        ((this + 2))->~unique_ptr();
        ((this + 1))->~unique_ptr();
    }

    // 0x100973660
    TwoNodeBaseBlendTreeNode<float>::TwoNodeBaseBlendTreeNode(
        float arg1, float arg2, float* arg3, TwoNodeBlendTreeNodeBlendType twoNodeBlendTreeNodeBlendType)
        : BlendTreeNode() {
        *(float*)((long)&this[4]._vptr + 4) = arg1;
        *(uint32_t*)((long)&this[7]._vptr + 4) = 1;
    }

    // 0x1009736f0
    void TwoNodeBaseBlendTreeNode<float>::GetPose(WrapArray<JointPose> wrapArray, const Array<LabelData>& labelDatas,
                                                  const math::Matrix44T<float>& matrix44) {
        bool cVar2;
        Matrix44T<float>* matrix44_00;
        uint8_t uVar3;
        uint8_t uVar4;
        uint64_t extraout_var;
        BlendTreeNode* blendTreeNode1;
        uint64_t extraout_var_00;
        uint64_t extraout_var_01;
        uint64_t extraout_var_02;
        uint64_t extraout_var_03;
        uint64_t extraout_var_04;
        Matrix44T<float>* matrix44_01;
        Matrix44T<float>* extraout_RDX;
        Matrix44T<float>* matrix44_02;
        Matrix44T<float>* extraout_RDX_00;
        WrapArray<JointPose>* pWVar6;
        WrapArray<game::Cutscene2DAnimation<float>::Key const> local_70;
        WrapArray<game::Cutscene2DAnimation<float>::Key const> local_60;
        WrapArray<game::Cutscene2DAnimation<float>::Key const> local_50;

        if (this[6]._vptr == nullptr) {
            LogAssert("m_pVariable",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/asm/TwoNodeBlendTreeNode.h",
                      107, nullptr);
        }
        auto pfVar5 = std::clamp<float>(*this[6]._vptr, *((float*)((long)&this[4]._vptr + 4)), *((this + 5)));
        float fVar1 = *(float*)((long)&this[4]._vptr + 4);
        float local_34 = (*pfVar5 - fVar1) / (*(float*)&this[5]._vptr - fVar1);
        if (*(int*)&this[7]._vptr == 1) {
            pWVar6 = wrapArray;
            local_60.WrapArray<WrapArray<game::Cutscene2DAnimation<float>::Key const>>(*wrapArray);
            uVar3 = (*this->_vptr[1].GetPose)((WrapArray<JointPose>*)this, (Array<LabelData>*)pWVar6, matrix44_02);
            blendTreeNode1 = (BlendTreeNode*)(((uint64_t)extraout_var_01 << 8) | (uint8_t)uVar3);
            uVar3 = (*this->_vptr[1].GetBindInfo)(this);
            TwoNodeBlendHelpers::GetAdditivePose(
                &local_60, blendTreeNode1, (BlendTreeNode*)(((uint64_t)extraout_var_02 << 8) | (uint8_t)uVar3),
                local_34, *(BlendTreeNodeBlendMode*)((long)&this[7]._vptr + 4), labelDatas, matrix44);
            cVar2 = *(char*)&this[1]._vptr;
            matrix44_00 = extraout_RDX_00;
        } else {
            if (*(int*)&this[7]._vptr != 0) {
                LogAssert("m_blendType == TwoNodeBlendTreeNodeBlendType::ADD",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "animation/asm/TwoNodeBlendTreeNode.h",
                          119, nullptr);
            }
            pWVar6 = wrapArray;
            local_70.WrapArray<WrapArray<game::Cutscene2DAnimation<float>::Key const>>(*wrapArray);
            uVar3 = (*this->_vptr[1].GetPose)((WrapArray<JointPose>*)this, (Array<LabelData>*)pWVar6, matrix44_01);
            blendTreeNode1 = (BlendTreeNode*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar3);
            uVar3 = (*this->_vptr[1].GetBindInfo)(this);
            TwoNodeBlendHelpers::GetLerpPose(
                &local_70, blendTreeNode1, (BlendTreeNode*)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar3),
                local_34, *(BlendTreeNodeBlendMode*)((long)&this[7]._vptr + 4), labelDatas, matrix44);
            cVar2 = *(char*)&this[1]._vptr;
            matrix44_00 = extraout_RDX;
        }
        if (cVar2) {
            uVar3 =
                (*this->_vptr[1].GetPose)((WrapArray<JointPose>*)this, (Array<LabelData>*)blendTreeNode1, matrix44_00);
            uVar4 = (*this->_vptr[1].GetBindInfo)(this);
            local_50.WrapArray<WrapArray<game::Cutscene2DAnimation<float>::Key const>>(*wrapArray);
            TwoNodeBlendHelpers::DebugDrawPose((BlendTreeNode*)(((uint64_t)extraout_var_03 << 8) | (uint8_t)uVar3),
                                               (BlendTreeNode*)(((uint64_t)extraout_var_04 << 8) | (uint8_t)uVar4),
                                               local_50, matrix44, *((Vector3T<float>*)((long)&this[1]._vptr + 4)),
                                               *((this + 3)));
        }
    }

    // 0x100973880
    shared_ptr<oldscape::midi2::MidiRequest>* TwoNodeBaseBlendTreeNode<float>::GetBindInfo() const {
        uint64_t extraout_var;
        uint64_t extraout_var_00;
        Matrix44T<float>* in_RDX;
        Array<LabelData>* in_RSI;

        uint8_t uVar1 = (*this->_vptr[1].GetPose)((WrapArray<JointPose>*)this, in_RSI, in_RDX);
        shared_ptr<oldscape::midi2::MidiRequest>* midiRequest1 = (shared_ptr<oldscape::midi2::MidiRequest>*)(**(
            void (**)(...))(*(long*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1) + 24))(
            (long*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1));
        if (*midiRequest1 == (*((shared_ptr<oldscape::midi2::MidiRequest>*)&BlendTreeNode::NullAnimBase))) {
            uVar1 = (*this->_vptr[1].GetBindInfo)(this);
            midiRequest1 = (shared_ptr<oldscape::midi2::MidiRequest>*)(**(void (**)(...))(
                *(long*)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar1) + 24))(
                (long*)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar1));
        }
        return midiRequest1;
    }

    // 0x1009738d0
    void TwoNodeBaseBlendTreeNode<float>::Update(unsigned int arg1) {
        uint8_t uVar1;
        uint64_t extraout_var;
        uint64_t extraout_var_00;
        uint64_t extraout_var_01;
        uint64_t extraout_var_02;
        Matrix44T<float>* in_RDX;
        Matrix44T<float>* matrix44;
        uint32_t in_register_00000034;

        Array<LabelData>* arg2 = (Array<LabelData>*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1);
        if (*(float*)&(this[6]._vptr)->_dtor != *(float*)&this[5]._vptr) {
            uVar1 = (*this->_vptr[1].GetPose)((WrapArray<JointPose>*)this, arg2, in_RDX);
            if ((((uint64_t)extraout_var << 8) | (uint8_t)uVar1) == 0) {
                LogAssert("GetLeftNode()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "animation/asm/TwoNodeBlendTreeNode.h",
                          77, nullptr);
            }
            uVar1 = (*this->_vptr[1].GetPose)((WrapArray<JointPose>*)this, arg2, matrix44);
            (**(void (**)(...))(*(long*)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar1) + 32))(
                (long*)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar1), arg1);
        }
        if (*(float*)&(this[6]._vptr)->_dtor != *(float*)((long)&this[4]._vptr + 4)) {
            uVar1 = (*this->_vptr[1].GetBindInfo)(this);
            if ((((uint64_t)extraout_var_01 << 8) | (uint8_t)uVar1) == 0) {
                LogAssert("GetRightNode()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "animation/asm/TwoNodeBlendTreeNode.h",
                          83, nullptr);
            }
            uVar1 = (*this->_vptr[1].GetBindInfo)(this);
            (**(void (**)(...))(*(long*)(((uint64_t)extraout_var_02 << 8) | (uint8_t)uVar1) + 32))(
                (long*)(((uint64_t)extraout_var_02 << 8) | (uint8_t)uVar1), arg1);
        }
    }

    // 0x100973980
    void TwoNodeBaseBlendTreeNode<float>::Reset(unsigned int arg1) {
        uint64_t extraout_var;
        uint64_t extraout_var_00;
        uint64_t extraout_var_01;
        uint64_t extraout_var_02;
        Matrix44T<float>* in_RDX;
        Matrix44T<float>* matrix44;
        uint32_t in_register_00000034;

        Array<LabelData>* arg2 = (Array<LabelData>*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1);
        uint8_t uVar1 = (*this->_vptr[1].GetPose)((WrapArray<JointPose>*)this, arg2, in_RDX);
        if ((((uint64_t)extraout_var << 8) | (uint8_t)uVar1) == 0) {
            LogAssert("GetLeftNode()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/asm/TwoNodeBlendTreeNode.h",
                      94, nullptr);
        }
        uVar1 = (*this->_vptr[1].GetBindInfo)(this);
        if ((((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar1) == 0) {
            LogAssert("GetRightNode()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/asm/TwoNodeBlendTreeNode.h",
                      95, nullptr);
        }
        uVar1 = (*this->_vptr[1].GetPose)((WrapArray<JointPose>*)this, arg2, matrix44);
        (**(void (**)(...))(*(long*)(((uint64_t)extraout_var_01 << 8) | (uint8_t)uVar1) + 40))(
            (long*)(((uint64_t)extraout_var_01 << 8) | (uint8_t)uVar1), arg1);
        uVar1 = (*this->_vptr[1].GetBindInfo)(this);
        (**(void (**)(...))(*(long*)(((uint64_t)extraout_var_02 << 8) | (uint8_t)uVar1) + 40))(
            (long*)(((uint64_t)extraout_var_02 << 8) | (uint8_t)uVar1), arg1);
    }

    // 0x1009743a0
    TwoNodeBlendDescriptor<float>::TwoNodeBlendDescriptor(PacketT<Array<unsigned char>>& arg1)
        : BlendTreeNodeDescriptor() {
        unique_ptr<BlendTreeNodeDescriptor>* local_38 = (unique_ptr<BlendTreeNodeDescriptor>*)(this + 1);
        local_38->unique_ptr<true, void>();
        ((this + 2))->unique_ptr<true, void>();
        new ((this + 4)) eastl::string();
        uint32_t uVar1 = arg1.gFloat();
        uVar1 = arg1.gFloat();
        *(uint32_t*)((long)&this[3]._vptr + 4) = uVar1;
        PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<eastl::string>(&local_58, (uint8_t)arg1);
        (*((this + 4))) = &local_58;
        auto local_58 = BlendTreeNodeDescriptor::FromPacket(arg1);
        *local_38 = local_58;
        local_58 = BlendTreeNodeDescriptor::FromPacket(arg1);
        (*((this + 2))) = local_58;
    }

    // 0x100974990
    LayeredAnimationStateMachineLayerDescriptor::LayeredAnimationStateMachineLayerDescriptor(
        LayeredAnimationStateMachineLayerDescriptor&& layeredAnimationStateMachineLayerDescriptor)
        : AnimationStateMachineDescriptor(layeredAnimationStateMachineLayerDescriptor),
          m_blendType(layeredAnimationStateMachineLayerDescriptor.m_blendType),
          field_112(layeredAnimationStateMachineLayerDescriptor.field_112) {
        uint64_t uVar1 = layeredAnimationStateMachineLayerDescriptor.m_transitionOutTime;
        m_pTransitionInTime = layeredAnimationStateMachineLayerDescriptor.m_pTransitionInTime;
        m_transitionOutTime = uVar1;
    }

    // 0x1009759e0
    SimpleTwoNodeBlendTreeNode<float>::SimpleTwoNodeBlendTreeNode(
        float arg1, float arg2, float* arg3, TwoNodeBlendTreeNodeBlendType twoNodeBlendTreeNodeBlendType)
        : TwoNodeBaseBlendTreeNode<float>(arg1, arg2, arg3, twoNodeBlendTreeNodeBlendType) {}

    // 0x100975a10
    char* SimpleTwoNodeBlendTreeNode<float>::GetTypeString() const {
        return "SimpleTwoNode";
    }

    // 0x100975a20
    auto SimpleTwoNodeBlendTreeNode<float>::GetTreeAsString() const {
        auto result;
        uint64_t extraout_var;
        eastl::string local_f8;
        eastl::string local_d8;
        eastl::string local_b8;
        eastl::string local_98;
        eastl::string local_70;
        eastl::string local_50;

        uint8_t uVar1 = GetTypeString();
        eastl::string local_118((char*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1));
        local_98 + local_118;
        auto plVar2 = GetOutputType();
        (**(void (**)(...))(*plVar2 + 56))(&local_70, plVar2);
        local_b8 + local_98;
        local_d8 + local_b8;
        plVar2 = (long*)size();
        (**(void (**)(...))(*plVar2 + 56))(&local_50, plVar2);
        local_f8 + local_d8;
        result + local_f8;
        return result;
    }

    // 0x10098bcf0
    void SimpleTwoNodeBlendTreeNode<unsigned long long>::SetBlendInfo(unsigned long long arg1, unsigned long long arg2,
                                                                      unsigned long long* arg3) {
        *(unsigned long long*)(this + 40) = arg1;
        *(unsigned long long*)(this + 48) = arg2;
        *(unsigned long long**)(this + 56) = arg3;
    }

} // namespace jag::graphics

namespace jag {
    // 0x100975610
    graphics::LayeredAnimationStateMachine*
    placement_new<graphics::LayeredAnimationStateMachine, eastl::vector<graphics::AnimationStateMachine>,
                  eastl::vector<graphics::LayeredAnimationStateMachine::LayerBlendInfo>,
                  shared_ptr<graphics::AnimationResourceManager> const&>(
        void* arg1, eastl::vector<graphics::AnimationStateMachine>&& animationStateMachines,
        eastl::vector<graphics::LayeredAnimationStateMachine::LayerBlendInfo>&& layerBlendInfos,
        const shared_ptr<graphics::AnimationResourceManager>& animationResourceManager) {
        new (arg1)
            graphics::LayeredAnimationStateMachine(animationStateMachines, layerBlendInfos, animationResourceManager);
        return arg1;
    }

    // 0x100975630
    ref_counter_shared<graphics::LayeredAnimationStateMachine>*
    placement_new<ref_counter_shared<graphics::LayeredAnimationStateMachine>, int,
                  graphics::LayeredAnimationStateMachine*&>(void* arg1, int&& arg2,
                                                            graphics::LayeredAnimationStateMachine*& arg3) {
        new (arg1) ref_counter_shared<graphics::LayeredAnimationStateMachine>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100975c50
    ref_counter_shared<graphics::LayeredAnimationStateMachine>::ref_counter_shared(
        unsigned long arg1, graphics::LayeredAnimationStateMachine* layeredAnimationStateMachine)
        : ref_counter_base() {}

    // 0x100975c90
    void ref_counter_shared<graphics::LayeredAnimationStateMachine>::DeleteData() {
        long lVar1;
        ref_counter_shared<graphics::LayeredAnimationStateMachine> _vtbl* prVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar1 = 0;
                prVar2 = nullptr;
                do {
                    (*(void (*)(...)) *
                     *(uint64_t**)((long)&(this[3]._vptr)->_dtor + lVar1))((long)&(this[3]._vptr)->_dtor + lVar1);
                    prVar2 =
                        (ref_counter_shared<graphics::LayeredAnimationStateMachine> _vtbl*)((long)&prVar2->_dtor + 1);
                    lVar1 = lVar1 + 1280;
                } while (prVar2 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

} // namespace jag
