// libs/graphics/runetek7/animation/asm/BlendSpace1DDescriptor.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class BlendSpace1DDescriptor {
    public:
        class LocationInfo;
        // virtual methods in vtable order
        virtual ~BlendSpace1DDescriptor();
        virtual GetNodeType() const;
        virtual Create(AnimationStateResourceList&, VariableList&);
        virtual ToString(unsigned int) const;
        virtual Clone() const;
        BlendSpace1DDescriptor(PacketT<Array<unsigned char, eastl::allocator>>&);
        BlendSpace1DDescriptor(eastl::vector<LocationInfo, eastl::allocator>&&, eastl::string const&, float, float);

        // data members, from how the methods use this: 56 bytes
        undefined** field_0; // offset 0, vtable pointer
        float field_8;       // offset 8
        float field_12;      // offset 12
        char _unknown_16[40];
    };

    class BlendSpace1DDescriptor::LocationInfo {
    public:
        float GetPosition() const;
        LocationInfo(PacketT<Array<unsigned char, eastl::allocator>>&);
        void GetBlendTree() const;
        LocationInfo(LocationInfo const&);
        LocationInfo(LocationInfo&&);
        ~LocationInfo();
        LocationInfo<BlendTreeNodeDescriptor, void>(
            std::unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>&&, float);

        // data members, from how the methods use this: 16 bytes
        char _unknown_0[8];
        float m_position; // offset 8
        char _unknown_12[4];
    };

    // 0x10095b700, 16 bytes, inline, placed by class name and debug map
    // BlendSpace1DDescriptor::LocationInfo::GetBlendTree() const
    /* BlendSpace2DDescriptor::LocationInfo::GetBlendTree() const */

    void BlendSpace2DDescriptor::LocationInfo::GetBlendTree() {
        std::unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>::operator*(
            (unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>*)this);
    }

    // 0x100960dc0, 16 bytes, complete-object destructor, inline, placed by class name
    // BlendSpace1DDescriptor::~BlendSpace1DDescriptor(): jumps straight to the base-object destructor

    // 0x100960dd0, 32 bytes, deleting destructor, inline, placed by class name
    // BlendSpace1DDescriptor::~BlendSpace1DDescriptor()
    void BlendSpace1DDescriptor::~BlendSpace1DDescriptor() {
        ~BlendSpace1DDescriptor(this);
        operator_delete(this);
    }

    // 0x100960df0, 304 bytes, inline, placed by class name
    // BlendSpace1DDescriptor::Clone() const
    BlendSpace1DDescriptor* BlendSpace1DDescriptor::Clone() {
        BlendSpace1DDescriptor* this_00;
        long lVar1;
        ulong uVar2;
        LocationInfo* pLVar3;
        LocationInfo* pLVar4;
        long in_RSI;
        vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>* this_01;
        vector<BlendSpace1DDescriptor::LocationInfo, eastl::allocator> local_50[32];
        unique_ptr<BlendSpace1DDescriptor, std::default_delete<BlendSpace1DDescriptor>> local_30[8];

        this_00 = operator_new(80);
        eastl::vector<BlendSpace1DDescriptor::LocationInfo, eastl::allocator>::vector(local_50);
        BlendSpace1DDescriptor(this_00, (vector*)local_50, (basic_string*)(in_RSI + 16), *(float*)(in_RSI + 8),
                               *(float*)(in_RSI + 12));
        std::unique_ptr<BlendSpace1DDescriptor, std::default_delete<BlendSpace1DDescriptor>>::unique_ptr<true, void>(
            local_30, this_00);
        eastl::vector<BlendSpace1DDescriptor::LocationInfo, eastl::allocator>::~vector(local_50);
        lVar1 =
            std::unique_ptr<BlendSpace1DDescriptor, std::default_delete<BlendSpace1DDescriptor>>::operator->(local_30);
        this_01 = (vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>*)(in_RSI + 48);
        uVar2 = eastl::vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>::size(this_01);
        ((lVar1 + 48))->reserve(uVar2);
        pLVar3 = (LocationInfo*)this_01->HeapBeginPtr();
        pLVar4 = (LocationInfo*)this_01->end();
        if (pLVar3 != pLVar4) {
            do {
                lVar1 =
                    std::unique_ptr<BlendSpace1DDescriptor, std::default_delete<BlendSpace1DDescriptor>>::operator->(
                        local_30);
                eastl::vector<BlendSpace1DDescriptor::LocationInfo, eastl::allocator>::emplace_back<
                    BlendSpace1DDescriptor::LocationInfo_const&>(
                    (vector<BlendSpace1DDescriptor::LocationInfo, eastl::allocator>*)(lVar1 + 48), pLVar3);
                pLVar3 = pLVar3 + 1;
            } while (pLVar3 != pLVar4);
        }
        std::unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>::unique_ptr<
            BlendSpace1DDescriptor, std::default_delete<BlendSpace1DDescriptor>, void, void>(
            (unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>*)this,
            (unique_ptr*)local_30);
        std::unique_ptr<BlendSpace1DDescriptor, std::default_delete<BlendSpace1DDescriptor>>::~unique_ptr(local_30);
        return this;
    }

    // 0x100963b60, 64 bytes, base-object destructor, inline, placed by class name
    // BlendSpace1DDescriptor::~BlendSpace1DDescriptor()
    void BlendSpace1DDescriptor::~BlendSpace1DDescriptor() {
        field_0 = &PTR__BlendSpace1DDescriptor_100f1b2b8;
        (&field_48)->~vector();
        (&field_16)->~basic_string();
        ~AutoSingleton();
    }

    // 0x100963ba0, 16 bytes, complete-object constructor, inline, placed by class name
    // BlendSpace1DDescriptor::BlendSpace1DDescriptor(eastl::vector<BlendSpace1DDescriptor::LocationInfo, eastl::allocator>&&, eastl::string const&, float, float): jumps straight to the base-object constructor

    // 0x100963c40, 128 bytes, base-object constructor, inline, placed by class name
    // BlendSpace1DDescriptor::BlendSpace1DDescriptor(eastl::vector<BlendSpace1DDescriptor::LocationInfo, eastl::allocator>&&, eastl::string const&, float, float)
    void BlendSpace1DDescriptor::BlendSpace1DDescriptor(vector* param_1, basic_string* param_2, float param_3,
                                                        float param_4) {
        new (this) BlendTreeNodeDescriptor(param_1);
        field_0 = &PTR__BlendSpace1DDescriptor_100f1b2b8;
        field_8 = param_3;
        field_12 = param_4;
        new (&field_16, param_2) eastl::string();
        new (&field_48, param_1) eastl::vector<BlendSpace1DDescriptor::LocationInfo, eastl::allocator>();
    }

    // 0x100963d90, 16 bytes, complete-object constructor, inline, placed by class name
    // BlendSpace1DDescriptor::LocationInfo::LocationInfo(BlendSpace1DDescriptor::LocationInfo const&): jumps straight to the base-object constructor

    // 0x100963ea0, 112 bytes, base-object constructor, inline, placed by class name
    // BlendSpace1DDescriptor::LocationInfo::LocationInfo(BlendSpace1DDescriptor::LocationInfo const&)
    void BlendSpace1DDescriptor::LocationInfo::LocationInfo(LocationInfo* param_1) {
        long* plVar1;
        unique_ptr local_28[8];

        std::unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>::unique_ptr<true, void>(
            (unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>*)this);
        plVar1 = (long*)param_1->GetBlendTree();
        (**(code**)(*plVar1 + 40))(local_28, plVar1);
        std::unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>::operator=(
            (unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>*)this, local_28);
        local_28->~unique_ptr();
        m_position = (float)param_1->GetBrightpassThreshold();
    }

    // 0x1009640b0, 16 bytes, complete-object constructor, inline, placed by class name
    // BlendSpace1DDescriptor::LocationInfo::LocationInfo(BlendSpace1DDescriptor::LocationInfo&&): jumps straight to the base-object constructor

    // 0x1009640c0, 48 bytes, base-object constructor, inline, placed by class name
    // BlendSpace1DDescriptor::LocationInfo::LocationInfo(BlendSpace1DDescriptor::LocationInfo&&)
    void BlendSpace1DDescriptor::LocationInfo::LocationInfo(LocationInfo* param_1) {
        new (this) std::unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>(param_1);
        m_position = param_1->m_position;
    }

    // 0x1009641d0, 16 bytes, complete-object destructor, inline, placed by class name
    // BlendSpace1DDescriptor::LocationInfo::~LocationInfo(): jumps straight to the base-object destructor

    // 0x1009641e0, 16 bytes, base-object destructor, inline, placed by class name
    // BlendSpace1DDescriptor::LocationInfo::~LocationInfo()
    /* BlendSpace2DDescriptor::LocationInfo::~LocationInfo() */

    void BlendSpace2DDescriptor::LocationInfo::~LocationInfo() {
        ~unique_ptr();
    }

    // 0x100973f70, 16 bytes, complete-object constructor, inline, placed by class name
    // BlendSpace1DDescriptor::LocationInfo::LocationInfo<BlendTreeNodeDescriptor, void>(std::unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor> >&&, float): jumps straight to the base-object constructor

    // 0x100974050, 64 bytes, base-object constructor, inline, placed by class name
    // BlendSpace1DDescriptor::LocationInfo::LocationInfo<BlendTreeNodeDescriptor, void>(std::unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor> >&&, float)
    /* BlendSpace1DDescriptor::LocationInfo::LocationInfo<BlendTreeNodeDescriptor,
   void>(std::unique_ptr<BlendTreeNodeDescriptor,
   std::default_delete<BlendTreeNodeDescriptor> >&&, float) */

    void BlendSpace1DDescriptor::LocationInfo::LocationInfo<BlendTreeNodeDescriptor, void>(unique_ptr* param_1,
                                                                                           float param_2) {
        std::unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>::unique_ptr<true, void>(
            (unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>*)this);
        m_position = param_2;
        std::unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>::operator=(
            (unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>*)this, param_1);
    }

} // namespace jag::graphics
