// libs/graphics/runetek7/animation/asm/TwoNodeBlendTreeNode.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class TwoNodeBlendHelpers {
    public:
        void GetLerpPose(WrapArray<JointPose>, BlendTreeNode*, BlendTreeNode*, float, BlendTreeNodeBlendMode,
                         Array<LabelData, eastl::allocator> const&, math::Matrix44T<float> const&);
        void GetAdditivePose(WrapArray<JointPose>, BlendTreeNode*, BlendTreeNode*, float, BlendTreeNodeBlendMode,
                             Array<LabelData, eastl::allocator> const&, math::Matrix44T<float> const&);
        void DebugDrawPose(BlendTreeNode*, BlendTreeNode*, WrapArray<JointPose const> const&,
                           math::Matrix44T<float> const&, math::Vector3T<float> const&, math::Vector3T<float> const&);
    };

    template <typename...> // 1 instantiations, e.g. <float>
    class TwoNodeBlendTreeNode {
    public:
        // virtual methods in vtable order
        virtual ~TwoNodeBlendTreeNode();
        virtual char* GetTypeString() const;
        virtual TwoNodeBlendTreeNode<float>* GetTreeAsString() const;
        virtual void GetLeftNode() const;
        virtual void GetRightNode() const;
        TwoNodeBlendTreeNode(float, float, float*, std::unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode>>&&,
                             std::unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode>>&&);
    };

    // 0x10095e620, 16 bytes, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // SimpleTwoNodeBlendTreeNode<float>::SetRightNode(BlendTreeNode*)
    /* SimpleTwoNodeBlendTreeNode<unsigned long
   long>::SetLeftNode(BlendTreeNode*) */

    void SimpleTwoNodeBlendTreeNode<unsigned long long>::SetLeftNode(BlendTreeNode* param_1) {
        *(BlendTreeNode**)(this + 72) = param_1;
    }

    // 0x10095e630, 16 bytes, inline, placed by debug map only (low confidence)
    // SimpleTwoNodeBlendTreeNode<float>::SetLeftNode(BlendTreeNode*)
    void SimpleTwoNodeBlendTreeNode<float>::SetLeftNode(BlendTreeNode* param_1) {
        *(BlendTreeNode**)(this + 64) = param_1;
    }

    // 0x1009735f0, 16 bytes, complete-object constructor, inline, placed by class name
    // TwoNodeBlendTreeNode<float>::TwoNodeBlendTreeNode(float, float, float*, std::unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode> >&&, std::unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode> >&&): jumps straight to the base-object constructor

    // 0x100973610, 80 bytes, base-object constructor, inline, placed by class name
    // TwoNodeBlendTreeNode<float>::TwoNodeBlendTreeNode(float, float, float*, std::unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode> >&&, std::unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode> >&&)
    /* TwoNodeBlendTreeNode<float>::TwoNodeBlendTreeNode(float, float, float*,
   std::unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode>
   >&&, std::unique_ptr<BlendTreeNode,
   std::default_delete<BlendTreeNode> >&&) */

    void TwoNodeBlendTreeNode<float>::TwoNodeBlendTreeNode(float param_1, float param_2, float* param_3,
                                                           unique_ptr* param_4, unique_ptr* param_5) {
        new (this) TwoNodeBaseBlendTreeNode<float>(param_3, 0);
        *(undefined**)this = PTR_vtable_100ee8820 + 16;
        new ((this + 64)) std::unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode>>(param_4);
        new ((this + 72)) std::unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode>>(param_5);
    }

    // 0x1009736c0, 16 bytes, complete-object destructor, inline, placed by class name
    // TwoNodeBlendTreeNode<float>::~TwoNodeBlendTreeNode(): jumps straight to the base-object destructor

    // 0x1009736d0, 32 bytes, deleting destructor, inline, placed by class name
    // TwoNodeBlendTreeNode<float>::~TwoNodeBlendTreeNode()
    void TwoNodeBlendTreeNode<float>::~TwoNodeBlendTreeNode() {
        ~TwoNodeBlendTreeNode(this);
        operator_delete(this);
    }

    // 0x100973a20, 16 bytes, inline, placed by class name
    // TwoNodeBlendTreeNode<float>::GetTypeString() const
    char* TwoNodeBlendTreeNode<float>::GetTypeString() {
        return "TwoNode";
    }

    // 0x100973a30, 464 bytes, inline, placed by class name
    // TwoNodeBlendTreeNode<float>::GetTreeAsString() const
    TwoNodeBlendTreeNode<float>* TwoNodeBlendTreeNode<float>::GetTreeAsString() {
        char* pcVar1;
        long* plVar2;
        long* in_RSI;
        eastl::string local_118[32];
        eastl local_f8[32];
        eastl local_d8[32];
        eastl local_b8[32];
        eastl local_98[32];
        allocator local_78[8];
        basic_string local_70[32];
        basic_string local_50[32];

        pcVar1 = (char*)(**(code**)(*in_RSI + 48))();
        eastl::allocator::allocator(local_78, "EASTL basic_string");
        eastl::string::basic_string(local_118, pcVar1, local_78);
        eastl::operator+(local_98, (basic_string*)local_118, (value_type*)"(");
        plVar2 = (long*)(**(code**)(*in_RSI + 64))();
        (**(code**)(*plVar2 + 56))(local_70, plVar2);
        eastl::operator+(local_b8, (basic_string*)local_98, local_70);
        eastl::operator+(local_d8, (basic_string*)local_b8, (value_type*)&DAT_100e3583a);
        plVar2 = (long*)(**(code**)(*in_RSI + 72))();
        (**(code**)(*plVar2 + 56))(local_50, plVar2);
        eastl::operator+(local_f8, (basic_string*)local_d8, local_50);
        eastl::operator+((eastl*)this, (basic_string*)local_f8, (value_type*)&DAT_100e38de0);
        local_f8->~basic_string();
        local_50->~basic_string();
        local_d8->~basic_string();
        local_b8->~basic_string();
        local_70->~basic_string();
        local_98->~basic_string();
        eastl::string::~basic_string(local_118);
        return this;
    }

    // 0x100973c00, 16 bytes, inline, placed by class name
    // TwoNodeBlendTreeNode<float>::GetLeftNode() const
    void TwoNodeBlendTreeNode<float>::GetLeftNode() {
        ((this + 64))->get();
    }

    // 0x100973c10, 16 bytes, inline, placed by class name
    // TwoNodeBlendTreeNode<float>::GetRightNode() const
    void TwoNodeBlendTreeNode<float>::GetRightNode() {
        ((this + 72))->get();
    }

    // 0x100973c20, 64 bytes, base-object destructor, inline, placed by class name
    // TwoNodeBlendTreeNode<float>::~TwoNodeBlendTreeNode()
    void TwoNodeBlendTreeNode<float>::~TwoNodeBlendTreeNode() {
        NpcUID* extraout_RDX;
        NpcUID* in_RSI;

        *(undefined**)this = PTR_vtable_100ee8820 + 16;
        ((this + 72))->~unique_ptr();
        ((this + 64))->~unique_ptr();
        eastl::destruct<oldscape::highlight::NpcUID*>((eastl*)this, in_RSI, extraout_RDX);
    }

} // namespace jag::graphics
