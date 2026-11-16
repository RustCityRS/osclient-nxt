// libs/graphics/runetek7/animation/asm/BlendSpace2D.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class BlendSpace2D : public particlemodules::Module // base inferred from shared vtable slots
    {
    public:
        class BlendSpaceEntry;
        // virtual methods in vtable order
        virtual ~BlendSpace2D();
        virtual void GetPose(WrapArray<JointPose> wrapArray, const Array<LabelData>& labelDatas,
                             const math::Matrix44T<float>& matrix44);
        virtual void GetBindInfo() const;
        virtual void Update(unsigned int arg1);
        virtual void Reset(unsigned int arg1);
        virtual char* GetTypeString() const;
        virtual auto GetTreeAsString() const;
        BlendSpace2D(float* arg1, float* arg2, std::vector<BlendSpaceEntry>&& blendSpaceEntrys,
                     eastl::vector<int>&& arg4);

    private:
        uint8_t field_8;
        uint8_t _unknown_9[15];
        ColourHSL field_24;
        float* field_40;
        float* field_48;
        uint8_t _unknown_56[64];
    };

    class BlendSpace2D::BlendSpaceEntry {
    public:
        ~BlendSpaceEntry();
        BlendSpaceEntry(BlendSpaceEntry&& blendSpaceEntry);
        BlendSpaceEntry(std::unique_ptr<BlendTreeNode>&& blendTreeNode, float arg2, float arg3);

    private:
        uint8_t _unknown_0[8];
        float field_8;
        float field_12;
        uint8_t _unknown_16[4];
    };

    // 0x100960f50
    void BlendSpace2D::GetBindInfo() const {
        unsigned long in_RSI;

        if (field_56.size() == 0) {
            LogAssert("m_blendSpace.size() > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/asm/BlendSpace2D.h",
                      122, "Error calling GetBindInfo() on an empty blendspace");
        }
        unique_ptr<BlendTreeNode>* this_00 = &field_56[in_RSI];
        long* plVar2 = (long*)(*this_00).operator->();
        (**(void (**)(...))(*plVar2 + 24))(plVar2);
    }

    // 0x100960fb0
    void BlendSpace2D::Update(unsigned int arg1) {
        unique_ptr<BlendTreeNode>* this_00;
        long* plVar2;

        uint64_t local_30 = field_56.begin();
        uint64_t local_28 = field_56.end();
        bool bVar1 = &local_30 != &local_28;
        if (bVar1) {
            do {
                this_00 = (unique_ptr<BlendTreeNode>*)*local_30;
                plVar2 = (long*)(*this_00).operator->();
                (**(void (**)(...))(*plVar2 + 32))(plVar2, arg1);
                ++local_30;
                bVar1 = &local_30 != &local_28;
            } while (bVar1);
        }
    }

    // 0x100961040
    void BlendSpace2D::Reset(unsigned int arg1) {
        unique_ptr<BlendTreeNode>* this_00;
        long* plVar2;

        uint64_t local_30 = field_56.begin();
        uint64_t local_28 = field_56.end();
        bool bVar1 = &local_30 != &local_28;
        if (bVar1) {
            do {
                this_00 = (unique_ptr<BlendTreeNode>*)*local_30;
                plVar2 = (long*)(*this_00).operator->();
                (**(void (**)(...))(*plVar2 + 40))(plVar2, arg1);
                ++local_30;
                bVar1 = &local_30 != &local_28;
            } while (bVar1);
        }
    }

    // 0x1009610d0
    char* BlendSpace2D::GetTypeString() const {
        return "BS2D";
    }

    // 0x1009610e0
    auto BlendSpace2D::GetTreeAsString() const {
        uint64_t extraout_var;

        uint8_t uVar1 = GetTypeString();
        return auto((char*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1));
    }

    // 0x1009641f0
    BlendSpace2D::~BlendSpace2D() {
        field_112.~LRUHashCacheWrapper();
        field_80.~vector();
        field_56.~vector();
    }

    // 0x100972cf0
    BlendSpace2D::BlendSpaceEntry::BlendSpaceEntry(BlendSpace2D::BlendSpaceEntry&& blendSpaceEntry)
        : std::unique_ptr<BlendTreeNode>(blendSpaceEntry), field_8(blendSpaceEntry.field_8),
          field_12(blendSpaceEntry.field_12) {}

    // 0x100972f50
    BlendSpace2D::BlendSpaceEntry::BlendSpaceEntry(std::unique_ptr<BlendTreeNode>&& blendTreeNode, float arg2,
                                                   float arg3)
        : std::unique_ptr<BlendTreeNode>(blendTreeNode), field_8(arg2), field_12(arg3) {}

} // namespace jag::graphics
