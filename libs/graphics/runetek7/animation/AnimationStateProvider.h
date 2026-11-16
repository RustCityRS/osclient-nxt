// libs/graphics/runetek7/animation/AnimationStateProvider.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class AnimationStateProvider {
    public:
        // virtual methods in vtable order
        virtual ~AnimationStateProvider();
        GetLastFrameCount() const;
        AnimationStateProvider();
        void InvalidateAsyncUpdate();
        void GetBoneTransforms(
            math::Matrix43T<float>&,
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>> const&,
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>> const&,
            math::Matrix44T<float> const&) const;
        AnimationStateProvider(AnimationStateProvider&&);
        void WaitForAsyncTasks();
        void BeginAsyncTasks(ThreadPool&, unsigned int, Array<LabelData, eastl::allocator> const&,
                             math::Matrix44T<float> const&);
        static /* 4 bytes */ m_useAsyncAnimUpdate; // = 1

        // data members, from how the methods use this: 24 bytes
        undefined* field_0;  // offset 0, vtable pointer
        uint field_8;        // offset 8
        undefined1 field_12; // offset 12
        char _unknown_13[11];
    };

    class BindInfo {
    public:
        BindInfo();
        ~BindInfo();
        BindInfo(BindInfo&&);
        BindInfo* operator=(BindInfo const&);

        // data members, from how the methods use this: 17 bytes
        char _unknown_0[16];
        undefined1 field_16; // offset 16
    };

    // 0x1001f3300, 48 bytes, base-object constructor, inline, placed by class name and debug map
    // AnimationStateProvider::AnimationStateProvider()
    void AnimationStateProvider::AnimationStateProvider() {
        field_0 = PTR_vtable_100ee8858 + 16;
        field_8 = 2147483647;
        field_12 = 0;
        new (&field_16) std::future<void>();
    }

    // 0x1001f3330, 32 bytes, base-object destructor, inline, placed by class name and debug map
    // AnimationStateProvider::~AnimationStateProvider()
    void AnimationStateProvider::~AnimationStateProvider() {
        field_0 = PTR_vtable_100ee8858 + 16;
        (&field_16)->~future();
    }

    // 0x10081e9b0, 96 bytes, inline, placed by class name
    // AnimationStateProvider::GetBoneTransforms(math::Matrix43T<float>&, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const&, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const&, math::Matrix44T<float> const&) const
    void AnimationStateProvider::GetBoneTransforms(Matrix43T* param_1, vector_map* param_2, vector_map* param_3,
                                                   Matrix44T* param_4) {
        WrapArray<unsigned char> local_40[16];

        WrapArray<unsigned char>::WrapArray(local_40, (uchar*)param_1, 1);
        (**(code**)(field_0 + 16))(this, local_40, param_2, param_3, param_4);
    }

    // 0x10096c160, 48 bytes, base-object constructor, inline, placed by class name
    // AnimationStateProvider::AnimationStateProvider(AnimationStateProvider&&)
    void AnimationStateProvider::AnimationStateProvider(AnimationStateProvider* param_1) {
        field_0 = PTR_vtable_100ee8858 + 16;
        field_8 = param_1->field_8;
        field_12 = param_1->field_12;
        new (&field_16, (future*)&param_1->field_16) std::future<void>();
    }

    // 0x10098cbc0, 48 bytes, inline, placed by class header (inline)
    // BindInfo::operator=(BindInfo const&)
    /* BindInfo::TEMPNAMEPLACEHOLDERVALUE(BindInfo const&) */

    BindInfo* BindInfo::operator=(BindInfo* param_1) {
        shared_ptr<AnimBase>::operator=((shared_ptr<AnimBase>*)this, (shared_ptr*)param_1);
        field_16 = param_1->field_16;
        return this;
    }

    // 0x1009a63c0, 32 bytes, inline, placed by class name
    // AnimationStateProvider::BeginAsyncTasks(ThreadPool&, unsigned int, Array<LabelData, eastl::allocator> const&, math::Matrix44T<float> const&)::$_8::operator()() const
    /* AnimationStateProvider::BeginAsyncTasks(ThreadPool&, unsigned int,
   Array<LabelData, eastl::allocator> const&, math::Matrix44T<float>
   const&)::$_8::TEMPNAMEPLACEHOLDERVALUE() const */

    void AnimationStateProvider::BeginAsyncTasks(ThreadPool&, unsigned int, Array<LabelData, eastl::allocator> const&,
                                                 math::Matrix44T<float> const&)::$_8::operator()() {
        (**(code**)(**(long**)this + 40))(*(long**)this, *(undefined8*)(this + 8), *(undefined8*)(this + 16));
    }

} // namespace jag::graphics

namespace jag {
    // 0x1001f3350, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::PoseStateProviderRSeven>::ref_counter_shared(unsigned long, oldscape::dash3d::PoseStateProviderRSeven*): jumps straight to the base-object constructor

    // 0x1001f3360, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::PoseStateProviderRSeven>::ref_counter_shared(unsigned long, oldscape::dash3d::PoseStateProviderRSeven*)
    void ref_counter_shared<oldscape::dash3d::PoseStateProviderRSeven>::ref_counter_shared(
        ulong param_1, PoseStateProviderRSeven* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee77a8 + 16;
        *(ulong*)(this + 16) = param_1;
        *(PoseStateProviderRSeven**)(this + 24) = param_2;
    }

    // 0x1001f33a0, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::PoseStateProviderRSeven>::DeleteData()
    /* ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::DeleteMember>::DeleteData()
    */

    void ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::DeleteMember>::DeleteData() {
        long lVar1;
        ulong uVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar1 = 0;
                uVar2 = 0;
                do {
                    (*(code*)**(undefined8**)(*(long*)(this + 24) + lVar1))(*(long*)(this + 24) + lVar1);
                    uVar2 = uVar2 + 1;
                    lVar1 = lVar1 + 40;
                } while (uVar2 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x1001f33f0, 32 bytes, inline, placed by debug map only (low confidence)
    // graphics::Model* placement_new<graphics::Model, graphics::Model&, graphics::ModelCopyType>(void*, graphics::Model&, graphics::ModelCopyType&&)
    /* graphics::Model* placement_new<graphics::Model, graphics::Model const&,
   graphics::ModelCopyType>(void*, graphics::Model const&, graphics::ModelCopyType&&)
    */

    Model*
    jag::placement_new<graphics::Model, graphics::Model_const&, graphics::ModelCopyType>(void* param_1, Model* param_2,
                                                                                         ModelCopyType* param_3) {
        graphics::Model::Model(param_1, param_2, *(undefined4*)param_3);
        return param_1;
    }

    // 0x1001f3410, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<graphics::Model>* placement_new<ref_counter_shared<graphics::Model>, int, graphics::Model*&>(void*, int&&, graphics::Model*&)
    ref_counter_shared* placement_new<ref_counter_shared<graphics::Model>, int, graphics::Model*&>(void* param_1,
                                                                                                   int* param_2,
                                                                                                   Model** param_3) {
        ref_counter_shared<graphics::Model>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x1001f3430, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<graphics::Model>::ref_counter_shared(unsigned long, graphics::Model*): jumps straight to the base-object constructor

    // 0x1001f3440, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<graphics::Model>::ref_counter_shared(unsigned long, graphics::Model*)
    void ref_counter_shared<graphics::Model>::ref_counter_shared(ulong param_1, Model* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7580 + 16;
        *(ulong*)(this + 16) = param_1;
        *(Model**)(this + 24) = param_2;
    }

    // 0x1001f3480, 96 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<graphics::Model>::DeleteData()
    void ref_counter_shared<graphics::Model>::DeleteData() {
        long lVar1;
        ulong uVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar1 = 0;
                uVar2 = 0;
                do {
                    (*(code*)**(undefined8**)(*(long*)(this + 24) + lVar1))(*(long*)(this + 24) + lVar1);
                    uVar2 = uVar2 + 1;
                    lVar1 = lVar1 + 944;
                } while (uVar2 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

} // namespace jag

namespace jag::oldscape {
    // 0x1001f4080, 11 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // NoJs5ResourceProvider::~NoJs5ResourceProvider()
    void NoJs5ResourceProvider::~NoJs5ResourceProvider() {
        ~Js5ResourceProvider();
    }

} // namespace jag::oldscape
