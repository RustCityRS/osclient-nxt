// libs/graphics/runetek7/animation/asm/BlendSpace2D.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class BlendSpace2D : public particlemodules::Module // base inferred from shared vtable slots
    {
    public:
        class BlendSpaceEntry;
        // virtual methods in vtable order
        virtual ~BlendSpace2D();
        virtual void GetPose(WrapArray<JointPose>, Array<LabelData, eastl::allocator> const&,
                             math::Matrix44T<float> const&);
        virtual void GetBindInfo() const;
        virtual void Update(unsigned int);
        virtual void Reset(unsigned int);
        virtual char* GetTypeString() const;
        virtual GetTreeAsString() const;
        BlendSpace2D(float*, float*, std::vector<BlendSpaceEntry, std::allocator<BlendSpaceEntry>>&&,
                     eastl::vector<int, eastl::allocator>&&);

        // data members, from how the methods use this: 120 bytes, the first 8 are Module
        undefined1 field_8; // offset 8
        char _unknown_9[15];
        ColourHSL field_24;  // offset 24
        float* field_40;     // offset 40
        float* field_48;     // offset 48
        undefined1 field_56; // offset 56
        char _unknown_57[63];
    };

    class BlendSpace2D::BlendSpaceEntry {
    public:
        ~BlendSpaceEntry();
        BlendSpaceEntry(BlendSpaceEntry&&);
        BlendSpaceEntry(std::unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode>>&&, float, float);

        // data members, from how the methods use this: 20 bytes
        char _unknown_0[8];
        float field_8;  // offset 8
        float field_12; // offset 12
        char _unknown_16[4];
    };

    // 0x100960f20, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // BlendSpace2D::~BlendSpace2D(): jumps straight to the base-object destructor

    // 0x100960f30, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // BlendSpace2D::~BlendSpace2D()
    void BlendSpace2D::~BlendSpace2D() {
        ~BlendSpace2D(this);
        operator_delete(this);
    }

    // 0x100960f50, 96 bytes, inline, placed by class name and debug map
    // BlendSpace2D::GetBindInfo() const
    void BlendSpace2D::GetBindInfo() {
        long lVar1;
        unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode>>* this_00;
        long* plVar2;

        lVar1 = (&field_56)->size();
        if (lVar1 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_blendSpace.size() > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/asm/BlendSpace2D.h",
                      122, "Error calling GetBindInfo() on an empty blendspace");
        }
        this_00 = (unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode>>*)
            std::vector<BlendSpace2D::BlendSpaceEntry, std::allocator<BlendSpace2D::BlendSpaceEntry>>::operator[](
                (ulong)&field_56);
        plVar2 = (long*)std::unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode>>::operator->(this_00);
        (**(code**)(*plVar2 + 24))(plVar2);
    }

    // 0x100960fb0, 144 bytes, inline, placed by class name and debug map
    // BlendSpace2D::Update(unsigned int)
    void BlendSpace2D::Update(uint param_1) {
        unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode>>* this_00;
        bool bVar1;
        long* plVar2;
        undefined8 local_30;
        undefined8 local_28;

        local_30 = (&field_56)->begin();
        local_28 = (&field_56)->end();
        bVar1 = std::operator!=((__wrap_iter*)&local_30, (__wrap_iter*)&local_28);
        if (bVar1) {
            do {
                this_00 = (unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode>>*)
                    std::__wrap_iter<BlendSpace2D::BlendSpaceEntry*>::operator*(
                        (__wrap_iter<BlendSpace2D::BlendSpaceEntry*>*)&local_30);
                plVar2 = (long*)std::unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode>>::operator->(this_00);
                (**(code**)(*plVar2 + 32))(plVar2, param_1);
                std::__wrap_iter<BlendSpace2D::BlendSpaceEntry*>::operator++(
                    (__wrap_iter<BlendSpace2D::BlendSpaceEntry*>*)&local_30);
                bVar1 = std::operator!=((__wrap_iter*)&local_30, (__wrap_iter*)&local_28);
            } while (bVar1);
        }
    }

    // 0x100961040, 144 bytes, inline, placed by class name and debug map
    // BlendSpace2D::Reset(unsigned int)
    void BlendSpace2D::Reset(uint param_1) {
        unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode>>* this_00;
        bool bVar1;
        long* plVar2;
        undefined8 local_30;
        undefined8 local_28;

        local_30 = (&field_56)->begin();
        local_28 = (&field_56)->end();
        bVar1 = std::operator!=((__wrap_iter*)&local_30, (__wrap_iter*)&local_28);
        if (bVar1) {
            do {
                this_00 = (unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode>>*)
                    std::__wrap_iter<BlendSpace2D::BlendSpaceEntry*>::operator*(
                        (__wrap_iter<BlendSpace2D::BlendSpaceEntry*>*)&local_30);
                plVar2 = (long*)std::unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode>>::operator->(this_00);
                (**(code**)(*plVar2 + 40))(plVar2, param_1);
                std::__wrap_iter<BlendSpace2D::BlendSpaceEntry*>::operator++(
                    (__wrap_iter<BlendSpace2D::BlendSpaceEntry*>*)&local_30);
                bVar1 = std::operator!=((__wrap_iter*)&local_30, (__wrap_iter*)&local_28);
            } while (bVar1);
        }
    }

    // 0x1009610d0, 16 bytes, inline, placed by class name and debug map
    // BlendSpace2D::GetTypeString() const
    char* BlendSpace2D::GetTypeString() {
        return "BS2D";
    }

    // 0x1009610e0, 80 bytes, inline, placed by class name and debug map
    // BlendSpace2D::GetTreeAsString() const
    BlendSpace2D* BlendSpace2D::GetTreeAsString() {
        char* pcVar1;
        long* in_RSI;
        allocator local_28[8];

        pcVar1 = (char*)(**(code**)(*in_RSI + 48))();
        eastl::allocator::allocator(local_28, "EASTL basic_string");
        new (this) eastl::string(pcVar1, local_28);
        return this;
    }

    // 0x1009641f0, 64 bytes, base-object destructor, inline, placed by class name
    // BlendSpace2D::~BlendSpace2D()
    void BlendSpace2D::~BlendSpace2D() {
        field_0 = &PTR__BlendSpace2D_100f1b2f8;
        (&field_112)->~LRUHashCacheWrapper();
        (&field_80)->~vector();
        (&field_56)->~vector();
        ~AutoSingleton();
    }

    // 0x100972ce0, 16 bytes, complete-object constructor, inline, placed by class name
    // BlendSpace2D::BlendSpaceEntry::BlendSpaceEntry(BlendSpace2D::BlendSpaceEntry&&): jumps straight to the base-object constructor

    // 0x100972cf0, 48 bytes, base-object constructor, inline, placed by class name
    // BlendSpace2D::BlendSpaceEntry::BlendSpaceEntry(BlendSpace2D::BlendSpaceEntry&&)
    void BlendSpace2D::BlendSpaceEntry::BlendSpaceEntry(BlendSpaceEntry* param_1) {
        new (this) std::unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode>>(param_1);
        field_8 = param_1->field_8;
        field_12 = param_1->field_12;
    }

    // 0x100972f40, 16 bytes, complete-object constructor, inline, placed by class name
    // BlendSpace2D::BlendSpaceEntry::BlendSpaceEntry(std::unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode> >&&, float, float): jumps straight to the base-object constructor

    // 0x100972f50, 64 bytes, base-object constructor, inline, placed by class name
    // BlendSpace2D::BlendSpaceEntry::BlendSpaceEntry(std::unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode> >&&, float, float)
    /* BlendSpace2D::BlendSpaceEntry::BlendSpaceEntry(std::unique_ptr<BlendTreeNode,
   std::default_delete<BlendTreeNode> >&&, float, float) */

    void BlendSpace2D::BlendSpaceEntry::BlendSpaceEntry(unique_ptr* param_1, float param_2, float param_3) {
        new (this) std::unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode>>(param_1);
        field_8 = param_2;
        field_12 = param_3;
    }

} // namespace jag::graphics
