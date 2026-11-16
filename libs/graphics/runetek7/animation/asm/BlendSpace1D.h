// libs/graphics/runetek7/animation/asm/BlendSpace1D.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class BlendSpace1D : public particlemodules::Module // base inferred from shared vtable slots
    {
    public:
        class BlendSpaceEntry;
        // virtual methods in vtable order
        virtual ~BlendSpace1D();
        virtual void GetPose(WrapArray<JointPose> wrapArray, const Array<LabelData>& labelDatas,
                             const math::Matrix44T<float>& matrix44);
        virtual void GetBindInfo() const;
        virtual void Update(unsigned int arg1);
        virtual void Reset(unsigned int arg1);
        virtual char* GetTypeString() const;
        virtual auto GetTreeAsString() const;
        BlendSpace1D(float arg1, float arg2, float* arg3, std::vector<BlendSpaceEntry>&& blendSpaceEntrys);

    private:
        uint8_t field_8;
        uint8_t _unknown_9[27];
        float field_36;
        float field_40;
        uint8_t _unknown_44[4];
        float* field_48;
        uint8_t _unknown_56[32];
    };

    class BlendSpace1D::BlendSpaceEntry {
    public:
        ~BlendSpaceEntry();
        BlendSpaceEntry(BlendSpaceEntry&& blendSpaceEntry);
        BlendSpaceEntry* operator=(BlendSpaceEntry&& blendSpaceEntry);
        BlendSpaceEntry(std::unique_ptr<BlendTreeNode>&& blendTreeNode, float arg2);

    private:
        uint8_t _unknown_0[8];
        float field_8;
        uint8_t _unknown_12[4];
    };

    // 0x100960be0
    void BlendSpace1D::GetBindInfo() const {
        unsigned long in_RSI;

        if (field_56.size() == 0) {
            LogAssert("m_blendSpace.size() > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/asm/BlendSpace1D.h",
                      116, "Error calling GetBindInfo() on an empty blendspace");
        }
        unique_ptr<BlendTreeNode>* this_00 = &field_56[in_RSI];
        long* plVar2 = (long*)(*this_00).operator->();
        (**(void (**)(...))(*plVar2 + 24))(plVar2);
    }

    // 0x100960c40
    void BlendSpace1D::Update(unsigned int arg1) {
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

    // 0x100960cd0
    void BlendSpace1D::Reset(unsigned int arg1) {
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

    // 0x100960d60
    char* BlendSpace1D::GetTypeString() const {
        return "BS1D";
    }

    // 0x100960d70
    auto BlendSpace1D::GetTreeAsString() const {
        uint64_t extraout_var;

        uint8_t uVar1 = GetTypeString();
        return auto((char*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1));
    }

    // 0x100963aa0
    BlendSpace1D::~BlendSpace1D() {
        field_80.~LRUHashCacheWrapper();
        field_56.~vector();
    }

    // 0x100970dd0
    BlendSpace1D::BlendSpaceEntry::~BlendSpaceEntry() {}

    // 0x1009711d0
    auto
    BlendSpace1D::BlendSpace1D(float, float, float*, std::vector<BlendSpace1D::BlendSpaceEntry>&&)::$_9::operator()<
        BlendSpace1D::BlendSpaceEntry, BlendSpace1D::BlendSpaceEntry>(
        BlendSpace1D::BlendSpaceEntry& blendSpaceEntry1, BlendSpace1D::BlendSpaceEntry& blendSpaceEntry2) const {
        return *(float*)(this + 8) < blendSpaceEntry1.field_8;
    }

    // 0x100971710
    BlendSpaceEntry* BlendSpace1D::BlendSpaceEntry::operator=(BlendSpace1D::BlendSpaceEntry&& blendSpaceEntry) {
        *this = blendSpaceEntry;
        field_8 = blendSpaceEntry.field_8;
        return this;
    }

    // 0x100971740
    BlendSpace1D::BlendSpaceEntry::BlendSpaceEntry(BlendSpace1D::BlendSpaceEntry&& blendSpaceEntry)
        : std::unique_ptr<BlendTreeNode>(blendSpaceEntry), field_8(blendSpaceEntry.field_8) {}

    // 0x100972360
    BlendSpace1D::BlendSpaceEntry::BlendSpaceEntry(std::unique_ptr<BlendTreeNode>&& blendTreeNode, float arg2)
        : std::unique_ptr<BlendTreeNode>(blendTreeNode), field_8(arg2) {}

} // namespace jag::graphics
