// libs/graphics/runetek7/animation/asm/PoseBlendTreeNode.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class PoseBlendTreeNode {
    public:
        // virtual methods in vtable order
        virtual ~PoseBlendTreeNode();
        virtual void GetPose(WrapArray<JointPose> wrapArray, const Array<LabelData>& labelDatas,
                             const math::Matrix44T<float>& matrix44);
        virtual uint8_t* GetBindInfo() const;
        virtual void Reset(unsigned int arg1);
        virtual char* GetTypeString() const;
        virtual auto GetTreeAsString() const;
        void Update(unsigned int arg1);
        PoseBlendTreeNode();
        void SetPose(const WrapArray<JointPose>& wrapArray, BindInfo& bindInfo);

    private:
        uint8_t field_8;
        uint8_t _unknown_9[15];
        ColourHSL field_24;
        uint8_t _unknown_40[24];
        uint8_t m_bindInfo[1];
        uint8_t _unknown_65[15];
        unsigned char field_80;
    };

    // 0x1009609a0
    char* PoseBlendTreeNode::GetTypeString() const {
        return "Pose";
    }

    // 0x1009609b0
    auto PoseBlendTreeNode::GetTreeAsString() const {
        uint64_t extraout_var;

        uint8_t uVar1 = GetTypeString();
        return auto((char*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1));
    }

    // 0x10098bf10
    void PoseBlendTreeNode::SetPose(const WrapArray<JointPose>& wrapArray, BindInfo& bindInfo) {
        auto jointPose = wrapArray.end();
        unsigned long arg2 = wrapArray.HeapBeginPtr();
        field_40.assign(jointPose, arg2);
        *m_bindInfo = bindInfo;
    }

    // 0x100992990
    PoseBlendTreeNode::PoseBlendTreeNode() : BlendTreeNode() {}

    // 0x1009929f0
    PoseBlendTreeNode::~PoseBlendTreeNode() {
        m_bindInfo->~LRUHashCacheWrapper();
        field_40.~Array();
    }

} // namespace jag::graphics
