// libs/graphics/runetek7/animation/asm/BlendSpace1D.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class BlendSpace1D : public particlemodules::Module // base inferred from shared vtable slots
    {
    public:
        class BlendSpaceEntry;
        // virtual methods in vtable order
        virtual ~BlendSpace1D();
        virtual void GetPose(WrapArray<JointPose>, Array<LabelData, eastl::allocator> const&,
                             math::Matrix44T<float> const&);
        virtual void GetBindInfo() const;
        virtual void Update(unsigned int);
        virtual void Reset(unsigned int);
        virtual char* GetTypeString() const;
        virtual GetTreeAsString() const;
        BlendSpace1D(float, float, float*, std::vector<BlendSpaceEntry, std::allocator<BlendSpaceEntry>>&&);

        // data members, from how the methods use this: 88 bytes, the first 8 are Module
        undefined1 field_8; // offset 8
        char _unknown_9[27];
        float field_36; // offset 36
        float field_40; // offset 40
        char _unknown_44[4];
        pose** field_48;     // offset 48
        undefined1 field_56; // offset 56
        char _unknown_57[31];
    };

    class BlendSpace1D::BlendSpaceEntry {
    public:
        ~BlendSpaceEntry();
        BlendSpaceEntry(BlendSpaceEntry&&);
        BlendSpaceEntry* operator=(BlendSpaceEntry&&);
        BlendSpaceEntry(std::unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode>>&&, float);

        // data members, from how the methods use this: 16 bytes
        char _unknown_0[8];
        float field_8; // offset 8
        char _unknown_12[4];
    };

    // 0x100960bb0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // BlendSpace1D::~BlendSpace1D(): jumps straight to the base-object destructor

    // 0x100960bc0, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // BlendSpace1D::~BlendSpace1D()
    void BlendSpace1D::~BlendSpace1D() {
        ~BlendSpace1D(this);
        operator_delete(this);
    }

    // 0x100960be0, 96 bytes, inline, placed by class name and debug map
    // BlendSpace1D::GetBindInfo() const
    void BlendSpace1D::GetBindInfo() {
        long lVar1;
        unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode>>* this_00;
        long* plVar2;

        lVar1 = (&field_56)->size();
        if (lVar1 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_blendSpace.size() > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/asm/BlendSpace1D.h",
                      116, "Error calling GetBindInfo() on an empty blendspace");
        }
        this_00 = (unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode>>*)
            std::vector<BlendSpace1D::BlendSpaceEntry, std::allocator<BlendSpace1D::BlendSpaceEntry>>::operator[](
                (ulong)&field_56);
        plVar2 = (long*)std::unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode>>::operator->(this_00);
        (**(code**)(*plVar2 + 24))(plVar2);
    }

    // 0x100960c40, 144 bytes, inline, placed by class name and debug map
    // BlendSpace1D::Update(unsigned int)
    void BlendSpace1D::Update(uint param_1) {
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
                    std::__wrap_iter<BlendSpace1D::BlendSpaceEntry*>::operator*(
                        (__wrap_iter<BlendSpace1D::BlendSpaceEntry*>*)&local_30);
                plVar2 = (long*)std::unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode>>::operator->(this_00);
                (**(code**)(*plVar2 + 32))(plVar2, param_1);
                std::__wrap_iter<BlendSpace1D::BlendSpaceEntry*>::operator++(
                    (__wrap_iter<BlendSpace1D::BlendSpaceEntry*>*)&local_30);
                bVar1 = std::operator!=((__wrap_iter*)&local_30, (__wrap_iter*)&local_28);
            } while (bVar1);
        }
    }

    // 0x100960cd0, 144 bytes, inline, placed by class name and debug map
    // BlendSpace1D::Reset(unsigned int)
    void BlendSpace1D::Reset(uint param_1) {
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
                    std::__wrap_iter<BlendSpace1D::BlendSpaceEntry*>::operator*(
                        (__wrap_iter<BlendSpace1D::BlendSpaceEntry*>*)&local_30);
                plVar2 = (long*)std::unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode>>::operator->(this_00);
                (**(code**)(*plVar2 + 40))(plVar2, param_1);
                std::__wrap_iter<BlendSpace1D::BlendSpaceEntry*>::operator++(
                    (__wrap_iter<BlendSpace1D::BlendSpaceEntry*>*)&local_30);
                bVar1 = std::operator!=((__wrap_iter*)&local_30, (__wrap_iter*)&local_28);
            } while (bVar1);
        }
    }

    // 0x100960d60, 16 bytes, inline, placed by class name and debug map
    // BlendSpace1D::GetTypeString() const
    char* BlendSpace1D::GetTypeString() {
        return "BS1D";
    }

    // 0x100960d70, 80 bytes, inline, placed by class name and debug map
    // BlendSpace1D::GetTreeAsString() const
    BlendSpace1D* BlendSpace1D::GetTreeAsString() {
        char* pcVar1;
        long* in_RSI;
        allocator local_28[8];

        pcVar1 = (char*)(**(code**)(*in_RSI + 48))();
        eastl::allocator::allocator(local_28, "EASTL basic_string");
        new (this) eastl::string(pcVar1, local_28);
        return this;
    }

    // 0x100963aa0, 64 bytes, base-object destructor, inline, placed by class name
    // BlendSpace1D::~BlendSpace1D()
    void BlendSpace1D::~BlendSpace1D() {
        field_0 = &PTR__BlendSpace1D_100f1b268;
        (&field_80)->~LRUHashCacheWrapper();
        (&field_56)->~vector();
        ~AutoSingleton();
    }

    // 0x100970dc0, 16 bytes, complete-object destructor, inline, placed by class name
    // BlendSpace1D::BlendSpaceEntry::~BlendSpaceEntry(): jumps straight to the base-object destructor

    // 0x100970dd0, 16 bytes, base-object destructor, inline, placed by class name
    // BlendSpace1D::BlendSpaceEntry::~BlendSpaceEntry()
    /* BlendSpace2D::BlendSpaceEntry::~BlendSpaceEntry() */

    void BlendSpace2D::BlendSpaceEntry::~BlendSpaceEntry() {
        ~unique_ptr();
    }

    // 0x1009711d0, 32 bytes, inline, placed by class name
    // auto BlendSpace1D::BlendSpace1D(float, float, float*, std::vector<BlendSpace1D::BlendSpaceEntry, std::allocator<BlendSpace1D::BlendSpaceEntry> >&&)::$_9::operator()<BlendSpace1D::BlendSpaceEntry, BlendSpace1D::BlendSpaceEntry>(BlendSpace1D::BlendSpaceEntry&, BlendSpace1D::BlendSpaceEntry&) const
    /* auto BlendSpace1D::BlendSpace1D(float, float, float*,
   std::vector<BlendSpace1D::BlendSpaceEntry,
   std::allocator<BlendSpace1D::BlendSpaceEntry>
   >&&)::$_9::TEMPNAMEPLACEHOLDERVALUE(BlendSpace1D::BlendSpaceEntry&,
   BlendSpace1D::BlendSpaceEntry&) const */

    bool BlendSpace1D::BlendSpace1D(
        float, float, float*,
        std::vector<BlendSpace1D::BlendSpaceEntry,
                    std::allocator<BlendSpace1D::BlendSpaceEntry>>&&)::$_9::operator()(BlendSpaceEntry* param_1,
                                                                                       BlendSpaceEntry* param_2) {
        return param_1->field_8 < param_2->field_8;
    }

    // 0x100971700, 16 bytes, complete-object constructor, inline, placed by class name
    // BlendSpace1D::BlendSpaceEntry::BlendSpaceEntry(BlendSpace1D::BlendSpaceEntry&&): jumps straight to the base-object constructor

    // 0x100971710, 48 bytes, inline, placed by class name
    // BlendSpace1D::BlendSpaceEntry::operator=(BlendSpace1D::BlendSpaceEntry&&)
    /* BlendSpace1D::BlendSpaceEntry::TEMPNAMEPLACEHOLDERVALUE(BlendSpace1D::BlendSpaceEntry&&)
    */

    BlendSpaceEntry* BlendSpace1D::BlendSpaceEntry::operator=(BlendSpaceEntry* param_1) {
        std::unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode>>::operator=(
            (unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode>>*)this, (unique_ptr*)param_1);
        field_8 = param_1->field_8;
        return this;
    }

    // 0x100971740, 48 bytes, base-object constructor, inline, placed by class name
    // BlendSpace1D::BlendSpaceEntry::BlendSpaceEntry(BlendSpace1D::BlendSpaceEntry&&)
    void BlendSpace1D::BlendSpaceEntry::BlendSpaceEntry(BlendSpaceEntry* param_1) {
        new (this) std::unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode>>(param_1);
        field_8 = param_1->field_8;
    }

    // 0x100972350, 16 bytes, complete-object constructor, inline, placed by class name
    // BlendSpace1D::BlendSpaceEntry::BlendSpaceEntry(std::unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode> >&&, float): jumps straight to the base-object constructor

    // 0x100972360, 48 bytes, base-object constructor, inline, placed by class name
    // BlendSpace1D::BlendSpaceEntry::BlendSpaceEntry(std::unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode> >&&, float)
    /* BlendSpace1D::BlendSpaceEntry::BlendSpaceEntry(std::unique_ptr<BlendTreeNode,
   std::default_delete<BlendTreeNode> >&&, float) */

    void BlendSpace1D::BlendSpaceEntry::BlendSpaceEntry(unique_ptr* param_1, float param_2) {
        new (this) std::unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode>>(param_1);
        field_8 = param_2;
    }

} // namespace jag::graphics
