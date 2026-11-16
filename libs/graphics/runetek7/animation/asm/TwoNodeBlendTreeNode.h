// libs/graphics/runetek7/animation/asm/TwoNodeBlendTreeNode.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class TwoNodeBlendHelpers {
    public:
        void GetLerpPose(WrapArray<JointPose> wrapArray, BlendTreeNode* blendTreeNode1, BlendTreeNode* blendTreeNode2,
                         float arg4, BlendTreeNodeBlendMode blendTreeNodeBlendMode, const Array<LabelData>& labelDatas,
                         const math::Matrix44T<float>& matrix44);
        void GetAdditivePose(WrapArray<JointPose> wrapArray, BlendTreeNode* blendTreeNode1,
                             BlendTreeNode* blendTreeNode2, float arg4, BlendTreeNodeBlendMode blendTreeNodeBlendMode,
                             const Array<LabelData>& labelDatas, const math::Matrix44T<float>& matrix44);
        void DebugDrawPose(BlendTreeNode* blendTreeNode1, BlendTreeNode* blendTreeNode2,
                           const WrapArray<JointPose const>& wrapArray, const math::Matrix44T<float>& matrix44,
                           const math::Vector3T<float>& vector31, const math::Vector3T<float>& vector32);
    };

    template <typename...> // 1 instantiations, e.g. <float>
    class TwoNodeBlendTreeNode {
    public:
        // virtual methods in vtable order
        virtual ~TwoNodeBlendTreeNode();
        virtual char* GetTypeString() const;
        virtual auto GetTreeAsString() const;
        virtual void GetLeftNode() const;
        virtual void GetRightNode() const;
        TwoNodeBlendTreeNode(float arg1, float arg2, float* arg3, std::unique_ptr<BlendTreeNode>&& blendTreeNode1,
                             std::unique_ptr<BlendTreeNode>&& blendTreeNode2);
    };

    // 0x10095e620
    void SimpleTwoNodeBlendTreeNode<float>::SetRightNode(BlendTreeNode* blendTreeNode) {
        *(BlendTreeNode**)(this + 72) = blendTreeNode;
    }

    // 0x10095e630
    void SimpleTwoNodeBlendTreeNode<float>::SetLeftNode(BlendTreeNode* blendTreeNode) {
        this[8]._vptr = (SimpleTwoNodeBlendTreeNode<float> _vtbl*)blendTreeNode;
    }

    // 0x100973610
    TwoNodeBlendTreeNode<float>::TwoNodeBlendTreeNode(float arg1, float arg2, float* arg3,
                                                      std::unique_ptr<BlendTreeNode>&& blendTreeNode1,
                                                      std::unique_ptr<BlendTreeNode>&& blendTreeNode2)
        : TwoNodeBaseBlendTreeNode<float>(arg1, arg2, arg3, 0) {
        new ((this + 8)) std::unique_ptr<BlendTreeNode>(blendTreeNode1);
        new ((this + 9)) std::unique_ptr<BlendTreeNode>(blendTreeNode2);
    }

    // 0x100973a20
    char* TwoNodeBlendTreeNode<float>::GetTypeString() const {
        return "TwoNode";
    }

    // 0x100973a30
    auto TwoNodeBlendTreeNode<float>::GetTreeAsString() const {
        auto result;
        uint64_t extraout_var;
        uint64_t extraout_var_00;
        uint64_t extraout_var_01;
        eastl::string local_f8;
        eastl::string local_d8;
        eastl::string local_b8;
        eastl::string local_98;
        eastl::string local_70;
        eastl::string local_50;

        uint8_t uVar1 = GetTypeString();
        eastl::string local_118((char*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1));
        local_98 + local_118;
        uVar1 = GetLeftNode();
        (**(void (**)(...))(*(long*)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar1) + 56))(
            &local_70, (long*)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar1));
        local_b8 + local_98;
        local_d8 + local_b8;
        uVar1 = GetRightNode();
        (**(void (**)(...))(*(long*)(((uint64_t)extraout_var_01 << 8) | (uint8_t)uVar1) + 56))(
            &local_50, (long*)(((uint64_t)extraout_var_01 << 8) | (uint8_t)uVar1));
        local_f8 + local_d8;
        result + local_f8;
        return result;
    }

    // 0x100973c00
    void TwoNodeBlendTreeNode<float>::GetLeftNode() const {
        ((this + 8))->get();
    }

    // 0x100973c10
    void TwoNodeBlendTreeNode<float>::GetRightNode() const {
        ((this + 9))->get();
    }

    // 0x100973c20
    TwoNodeBlendTreeNode<float>::~TwoNodeBlendTreeNode() {
        ((this + 9))->~unique_ptr();
        ((this + 8))->~unique_ptr();
        destruct<oldscape::highlight::NpcUID*>();
    }

} // namespace jag::graphics
