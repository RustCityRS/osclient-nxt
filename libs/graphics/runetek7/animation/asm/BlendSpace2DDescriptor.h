// libs/graphics/runetek7/animation/asm/BlendSpace2DDescriptor.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.graphics

namespace jag::graphics {
    class BlendSpace2DDescriptor {
    public:
        class LocationInfo;
        // virtual methods in vtable order
        virtual ~BlendSpace2DDescriptor();
        virtual GetNodeType() const;
        virtual Create(AnimationStateResourceList&, VariableList&);
        virtual ToString(unsigned int) const;
        virtual Clone() const;
        BlendSpace2DDescriptor(PacketT<Array<unsigned char, eastl::allocator>>&);
        BlendSpace2DDescriptor(eastl::vector<LocationInfo, eastl::allocator>&&, eastl::vector<int, eastl::allocator>&&,
                               eastl::string const&, eastl::string const&);
        BlendSpace2DDescriptor(eastl::vector<LocationInfo, eastl::allocator>&&, eastl::string const&,
                               eastl::string const&);

        // data members, from how the methods use this: 112 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[104];
    };

    class BlendSpace2DDescriptor::LocationInfo {
    public:
        GetPositionY() const;
        GetPositionX() const;
        void GetBlendTree() const;
        LocationInfo(PacketT<Array<unsigned char, eastl::allocator>>&);
        ~LocationInfo();
        LocationInfo(LocationInfo const&);
        LocationInfo(LocationInfo&&);
        LocationInfo<BlendTreeNodeDescriptor, void>(
            std::unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>&&, float, float);

        // data members, from how the methods use this: 20 bytes
        char _unknown_0[8];
        float field_8;  // offset 8
        float field_12; // offset 12
        char _unknown_16[4];
    };

    // 0x100961130, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // BlendSpace2DDescriptor::~BlendSpace2DDescriptor(): jumps straight to the base-object destructor

    // 0x100961140, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // BlendSpace2DDescriptor::~BlendSpace2DDescriptor()
    void BlendSpace2DDescriptor::~BlendSpace2DDescriptor() {
        ~BlendSpace2DDescriptor(this);
        operator_delete(this);
    }

    // 0x100961160, 368 bytes, inline, placed by class name and debug map
    // BlendSpace2DDescriptor::Clone() const
    BlendSpace2DDescriptor* BlendSpace2DDescriptor::Clone() {
        vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>* this_00;
        BlendSpace2DDescriptor* this_01;
        long lVar1;
        ulong uVar2;
        LocationInfo* pLVar3;
        LocationInfo* pLVar4;
        long in_RSI;
        vector<BlendSpace2DDescriptor::LocationInfo, eastl::allocator> local_78[32];
        vector<int, eastl::allocator> local_58[32];
        unique_ptr<BlendSpace2DDescriptor, std::default_delete<BlendSpace2DDescriptor>> local_38[8];

        this_01 = operator_new(136);
        eastl::vector<BlendSpace2DDescriptor::LocationInfo, eastl::allocator>::vector(local_78);
        eastl::vector<int, eastl::allocator>::vector(local_58);
        BlendSpace2DDescriptor(this_01, (vector*)local_78, (vector*)local_58, (basic_string*)(in_RSI + 8),
                               (basic_string*)(in_RSI + 40));
        std::unique_ptr<BlendSpace2DDescriptor, std::default_delete<BlendSpace2DDescriptor>>::unique_ptr<true, void>(
            local_38, this_01);
        eastl::vector<int, eastl::allocator>::~vector(local_58);
        eastl::vector<BlendSpace2DDescriptor::LocationInfo, eastl::allocator>::~vector(local_78);
        lVar1 =
            std::unique_ptr<BlendSpace2DDescriptor, std::default_delete<BlendSpace2DDescriptor>>::operator->(local_38);
        this_00 = (vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>*)(in_RSI + 72);
        uVar2 = eastl::vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>::size(this_00);
        ((lVar1 + 72))->reserve(uVar2);
        pLVar3 = (LocationInfo*)this_00->HeapBeginPtr();
        pLVar4 = (LocationInfo*)this_00->end();
        if (pLVar3 != pLVar4) {
            do {
                lVar1 =
                    std::unique_ptr<BlendSpace2DDescriptor, std::default_delete<BlendSpace2DDescriptor>>::operator->(
                        local_38);
                eastl::vector<BlendSpace2DDescriptor::LocationInfo, eastl::allocator>::emplace_back<
                    BlendSpace2DDescriptor::LocationInfo_const&>(
                    (vector<BlendSpace2DDescriptor::LocationInfo, eastl::allocator>*)(lVar1 + 72), pLVar3);
                pLVar3 = (LocationInfo*)&pLVar3->field_16;
            } while (pLVar3 != pLVar4);
        }
        lVar1 =
            std::unique_ptr<BlendSpace2DDescriptor, std::default_delete<BlendSpace2DDescriptor>>::operator->(local_38);
        eastl::vector<int, eastl::allocator>::operator=((vector<int, eastl::allocator>*)(lVar1 + 104),
                                                        (vector*)(in_RSI + 104));
        std::unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>::unique_ptr<
            BlendSpace2DDescriptor, std::default_delete<BlendSpace2DDescriptor>, void, void>(
            (unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>*)this,
            (unique_ptr*)local_38);
        std::unique_ptr<BlendSpace2DDescriptor, std::default_delete<BlendSpace2DDescriptor>>::~unique_ptr(local_38);
        return this;
    }

    // 0x1009618c0, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // AnimationResource::~AnimationResource(): jumps straight to the base-object destructor

    // 0x1009618d0, 48 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // AnimationResource::~AnimationResource()
    void AnimationResource::~AnimationResource() {
        std::function<void(
            std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>&&)>::
            ~function(
                (function<void(
                     std::unique_ptr<AnimationParameters,
                                     MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>&&)>*)&field_240);
        ~AnimationDescriptor();
    }

    // 0x100961bc0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // AnimationResource::AnimationResource(AnimationResource const&): jumps straight to the base-object constructor

    // 0x100961be0, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // AnimationResource::AnimationResource(AnimationResource const&)
    void AnimationResource::AnimationResource(AnimationResource* param_1) {
        new (this) AnimationDescriptor(param_1);
        std::function<void(
            std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>&&)>::
            function((function<void(
                          std::unique_ptr<AnimationParameters,
                                          MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>&&)>*)&field_240,
                     (function*)&param_1->field_240);
        field_288 = param_1->field_288;
    }

    // 0x1009622f0, 144 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // AnimationInfo::AnimationInfo(AnimationParameters const&)
    void AnimationInfo::AnimationInfo(AnimationParameters* param_1) {
        shared_ptr* psVar2;
        undefined4 uVar4;

        field_10 = 0;
        field_18 = 0;
        field_20 = 0;
        field_24 = 0;
        field_25 = 0;
        field_0 = 0;
        *(undefined8*)&field_8 = 0;
        new (field_32, (_func_decltype_nullptr*)0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        field_0 = param_1->GetStartTimeNS();
        uVar4 = param_1->GetPickingPrepassType();
        *(undefined4*)((long)&field_10 + 6) = uVar4;
        uVar4 = param_1->GetLoopBehaviour();
        field_20 = uVar4;
        field_25 = param_1->IsMembersServer();
        psVar2 = (shared_ptr*)param_1->GetCursorMutex();
        shared_ptr<Animation>::operator=((shared_ptr<Animation>*)field_32, psVar2);
    }

    // 0x100964330, 80 bytes, base-object destructor, inline, placed by class name and debug map
    // BlendSpace2DDescriptor::~BlendSpace2DDescriptor()
    void BlendSpace2DDescriptor::~BlendSpace2DDescriptor() {
        field_0 = &PTR__BlendSpace2DDescriptor_100f1b348;
        (&field_104)->~vector();
        (&field_72)->~vector();
        (&field_40)->~basic_string();
        (&field_8)->~basic_string();
        ~AutoSingleton();
    }

    // 0x100964380, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // BlendSpace2DDescriptor::BlendSpace2DDescriptor(eastl::vector<BlendSpace2DDescriptor::LocationInfo, eastl::allocator>&&, eastl::vector<int, eastl::allocator>&&, eastl::string const&, eastl::string const&): jumps straight to the base-object constructor

    // 0x100964420, 176 bytes, base-object constructor, inline, placed by class name and debug map
    // BlendSpace2DDescriptor::BlendSpace2DDescriptor(eastl::vector<BlendSpace2DDescriptor::LocationInfo, eastl::allocator>&&, eastl::vector<int, eastl::allocator>&&, eastl::string const&, eastl::string const&)
    void BlendSpace2DDescriptor::BlendSpace2DDescriptor(vector* param_1, vector* param_2, basic_string* param_3,
                                                        basic_string* param_4) {
        new (this) BlendTreeNodeDescriptor(param_1);
        field_0 = &PTR__BlendSpace2DDescriptor_100f1b348;
        new (&field_8, param_3) eastl::string();
        new (&field_40, param_4) eastl::string();
        new (&field_72, param_1) eastl::vector<BlendSpace2DDescriptor::LocationInfo, eastl::allocator>();
        new (&field_104, param_2) eastl::vector<int, eastl::allocator>();
    }

    // 0x1009645a0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // BlendSpace2DDescriptor::LocationInfo::LocationInfo(BlendSpace2DDescriptor::LocationInfo const&): jumps straight to the base-object constructor

    // 0x1009646b0, 128 bytes, base-object constructor, inline, placed by class name and debug map
    // BlendSpace2DDescriptor::LocationInfo::LocationInfo(BlendSpace2DDescriptor::LocationInfo const&)
    void BlendSpace2DDescriptor::LocationInfo::LocationInfo(LocationInfo* param_1) {
        long* plVar1;
        unique_ptr local_28[8];

        std::unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>::unique_ptr<true, void>(
            (unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>*)this);
        plVar1 = (long*)GetBlendTree(param_1);
        (**(code**)(*plVar1 + 40))(local_28, plVar1);
        std::unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>::operator=(
            (unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>*)this, local_28);
        local_28->~unique_ptr();
        field_8 = param_1->field_8;
        field_12 = param_1->field_12;
    }

    // 0x1009648c0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // BlendSpace2DDescriptor::LocationInfo::LocationInfo(BlendSpace2DDescriptor::LocationInfo&&): jumps straight to the base-object constructor

    // 0x1009648d0, 32 bytes, base-object constructor, inline, placed by class name and debug map
    // BlendSpace2DDescriptor::LocationInfo::LocationInfo(BlendSpace2DDescriptor::LocationInfo&&)
    void BlendSpace2DDescriptor::LocationInfo::LocationInfo(LocationInfo* param_1) {
        float fVar1;

        new (this) std::unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>(param_1);
        fVar1 = param_1->field_12;
        field_8 = param_1->field_8;
        field_12 = fVar1;
    }

    // 0x100974090, 16 bytes, complete-object constructor, inline, placed by class name
    // BlendSpace2DDescriptor::LocationInfo::LocationInfo<BlendTreeNodeDescriptor, void>(std::unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor> >&&, float, float): jumps straight to the base-object constructor

    // 0x100974190, 64 bytes, base-object constructor, inline, placed by class name
    // BlendSpace2DDescriptor::LocationInfo::LocationInfo<BlendTreeNodeDescriptor, void>(std::unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor> >&&, float, float)
    /* BlendSpace2DDescriptor::LocationInfo::LocationInfo<BlendTreeNodeDescriptor,
   void>(std::unique_ptr<BlendTreeNodeDescriptor,
   std::default_delete<BlendTreeNodeDescriptor> >&&, float, float) */

    void BlendSpace2DDescriptor::LocationInfo::LocationInfo<BlendTreeNodeDescriptor, void>(unique_ptr* param_1,
                                                                                           float param_2,
                                                                                           float param_3) {
        new (this) std::unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>(param_1);
        field_8 = param_2;
        field_12 = param_3;
    }

    // 0x1009741d0, 16 bytes, complete-object constructor, inline, placed by class name
    // BlendSpace2DDescriptor::BlendSpace2DDescriptor(eastl::vector<BlendSpace2DDescriptor::LocationInfo, eastl::allocator>&&, eastl::string const&, eastl::string const&): jumps straight to the base-object constructor

    // 0x1009741e0, 304 bytes, base-object constructor, inline, placed by class name
    // BlendSpace2DDescriptor::BlendSpace2DDescriptor(eastl::vector<BlendSpace2DDescriptor::LocationInfo, eastl::allocator>&&, eastl::string const&, eastl::string const&)
    void BlendSpace2DDescriptor::BlendSpace2DDescriptor(vector* param_1, basic_string* param_2, basic_string* param_3) {
        long lVar1;
        undefined4 local_58;
        undefined4 uStack_54;
        undefined4 uStack_50;
        undefined4 uStack_4c;
        undefined8 local_48;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new (this) BlendTreeNodeDescriptor(param_1);
        field_0 = &PTR__BlendSpace2DDescriptor_100f1b348;
        new (&field_8, param_2) eastl::string();
        new (&field_40, param_3) eastl::string();
        new (&field_72, param_1) eastl::vector<BlendSpace2DDescriptor::LocationInfo, eastl::allocator>();
        new (&field_104) eastl::vector<int, eastl::allocator>();
        lVar1 = (&field_72)->size();
        if (lVar1 != 4) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_blendSpacePositions.size() == 4",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/asm/BlendSpace2DDescriptor.h",
                      113, (char*)0);
        }
        local_48 = 4294967299;
        local_58 = 0;
        uStack_54 = 2;
        uStack_50 = 3;
        uStack_4c = 0;
        eastl::vector<int, eastl::allocator>::operator=((vector<int, eastl::allocator>*)&field_104, &local_58, 6);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

} // namespace jag::graphics

// 0x100964af0, 64 bytes, placed by debug map only (low confidence)
// sqrt(float)
undefined8 sqrt(float param_1) {
    uint in_XMM0_Db;
    undefined4 in_XMM0_Dc;
    undefined4 in_XMM0_Dd;
    undefined1 in_XMM1[16];
    undefined1 auVar1[16];
    float fVar2;

    auVar1._4_4_ = in_XMM0_Db;
    auVar1._0_4_ = param_1;
    auVar1._8_4_ = in_XMM0_Dc;
    auVar1._12_4_ = in_XMM0_Dd;
    auVar1 = rsqrtss(in_XMM1, auVar1);
    fVar2 = param_1 * auVar1._0_4_;
    return CONCAT44(~(in_XMM0_Db & 2147483647) & in_XMM0_Db,
                    ~-(uint)(ABS(param_1) < 1.1754944e-38) & (uint)((fVar2 * auVar1._0_4_ + -3.0) * fVar2 * -0.5));
}

// 0x1009655e0, 16 bytes, placed by debug map only (low confidence)
// asin(float)
void asin(float param_1) {
    _asinf();
}

// 0x1009655f0, 16 bytes, placed by debug map only (low confidence)
// abs(float)
ulong abs(float param_1) {
    undefined4 in_XMM0_Db;

    return CONCAT44(in_XMM0_Db, param_1) & 9223372034707292159;
}

// 0x100965600, 16 bytes, placed by debug map only (low confidence)
// atan2(float, float)
void atan2(float param_1, float param_2) {
    _atan2f();
}

// 0x100965610, 16 bytes, placed by debug map only (low confidence)
// acos(float)
void acos(float param_1) {
    _acosf();
}

// 0x100965620, 16 bytes, placed by debug map only (low confidence)
// sin(float)
void sin(float param_1) {
    _sinf();
}
