// libs/graphics/runetek7/animation/asm/PoseBlendTreeNode.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class PoseBlendTreeNode {
    public:
        // virtual methods in vtable order
        virtual ~PoseBlendTreeNode();
        virtual void GetPose(WrapArray<JointPose>, Array<LabelData, eastl::allocator> const&,
                             math::Matrix44T<float> const&);
        virtual GetBindInfo() const;
        virtual Reset(unsigned int);
        virtual char* GetTypeString() const;
        virtual GetTreeAsString() const;
        Update(unsigned int);
        PoseBlendTreeNode();
        void SetPose(WrapArray<JointPose> const&, BindInfo&);

        // data members, from how the methods use this: 81 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined1 field_8;  // offset 8
        char _unknown_9[3];
        undefined8 field_12; // offset 12
        undefined4 field_20; // offset 20
        ColourHSL field_24;  // offset 24
        char _unknown_40[24];
        undefined1 m_bindInfo; // offset 64
        char _unknown_65[15];
        undefined1 field_80; // offset 80
    };

    // 0x100960980, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // PoseBlendTreeNode::~PoseBlendTreeNode()
    void PoseBlendTreeNode::~PoseBlendTreeNode() {
        ~PoseBlendTreeNode(this);
        operator_delete(this);
    }

    // 0x1009609a0, 16 bytes, inline, placed by class name and debug map
    // PoseBlendTreeNode::GetTypeString() const
    char* PoseBlendTreeNode::GetTypeString() {
        return "Pose";
    }

    // 0x1009609b0, 80 bytes, inline, placed by class name and debug map
    // PoseBlendTreeNode::GetTreeAsString() const
    PoseBlendTreeNode* PoseBlendTreeNode::GetTreeAsString() {
        char* pcVar1;
        long* in_RSI;
        allocator local_28[8];

        pcVar1 = (char*)(**(code**)(*in_RSI + 48))();
        eastl::allocator::allocator(local_28, "EASTL basic_string");
        new (this) eastl::string(pcVar1, local_28);
        return this;
    }

    // 0x10098afd0, 16 bytes, complete-object constructor, inline, placed by class name
    // PoseBlendTreeNode::PoseBlendTreeNode(): jumps straight to the base-object constructor

    // 0x10098afe0, 16 bytes, complete-object destructor, inline, placed by class name
    // PoseBlendTreeNode::~PoseBlendTreeNode(): jumps straight to the base-object destructor

    // 0x10098bf10, 96 bytes, inline, placed by class name
    // PoseBlendTreeNode::SetPose(WrapArray<JointPose> const&, BindInfo&)
    void PoseBlendTreeNode::SetPose(WrapArray* param_1, BindInfo* param_2) {
        JointPose* pJVar1;
        ulong uVar2;

        pJVar1 = (JointPose*)param_1->end();
        uVar2 = param_1->HeapBeginPtr();
        (&field_40, pJVar1, uVar2)->assign();
        BindInfo::operator=((BindInfo*)&m_bindInfo, param_2);
    }

    // 0x100992990, 96 bytes, base-object constructor, inline, placed by class name
    // PoseBlendTreeNode::PoseBlendTreeNode()
    void PoseBlendTreeNode::PoseBlendTreeNode() {
        new (this) BlendTreeNode();
        field_0 = &PTR__PoseBlendTreeNode_100f1b3e8;
        new (&field_40) Array<JointPose, eastl::allocator>();
        new (&m_bindInfo) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
    }

    // 0x1009929f0, 64 bytes, base-object destructor, inline, placed by class name
    // PoseBlendTreeNode::~PoseBlendTreeNode()
    void PoseBlendTreeNode::~PoseBlendTreeNode() {
        field_0 = &PTR__PoseBlendTreeNode_100f1b3e8;
        (&m_bindInfo)->~LRUHashCacheWrapper();
        (&field_40)->~Array();
        ~AutoSingleton();
    }

} // namespace jag::graphics
