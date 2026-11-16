// libs/oldscape/jagex3/dash3d/ModelLit.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::dash3d {
    class ModelLit {
    public:
        class AABB;
        // virtual methods in vtable order
        virtual ~ModelLit();
        ModelLit();
        ModelLit(ModelLit const&);
        static /* 16 bytes */ m_useAABBMouseCheck; // = { 1, 0, 0, 0 }

        // data members, from how the methods use this: 17 bytes
        undefined* field_0;  // offset 0, vtable pointer
        undefined8 field_8;  // offset 8
        undefined1 field_16; // offset 16
    };

    class ModelLitImpl : public ModelRSevenLit // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~ModelLitImpl();
        virtual GetTempModel(int);
        virtual IsLit() const;
        virtual IsForRSeven() const;
        virtual void CalcBoundingCylinder();
        virtual int GetRadiusCylinder();
        virtual CopyForAnim(bool, int);
        virtual void Animate(shared_ptr<AnimFrameSet> const&, int);
        virtual void Animate(shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet> const&, int);
        virtual void SplitAnimate(shared_ptr<AnimFrameSet> const&, int, shared_ptr<AnimFrameSet> const&, int, int*);
        virtual void MaskAnimate(shared_ptr<AnimBase> const&,
                                 shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet> const&, int,
                                 Array<bool, eastl::allocator>, bool, bool);
        virtual void MaskAnimate(shared_ptr<AnimFrameSet> const&, int, Array<int, eastl::allocator> const&, bool);
        virtual void Rotate90();
        virtual void Rotate180();
        virtual void Rotate270();
        virtual void RotateXAxis(int);
        virtual void Translate(int, int, int);
        virtual void Resize(int, int, int);
        virtual void Tint(signed char, signed char, signed char, unsigned char);
        virtual HillSkewCopy(int, int, int, int, int);
        virtual void HillSkew(int, int, int, int, int);
        virtual void PrepareForAppend(shared_ptr<ModelLit>&, ModelAppendList const&);
        virtual void AppendModel(ModelLit const*);
        virtual void GetMousePickingAabb(int);
        IsClientLocAnim() const;
        IsUnlit() const;
        void PrepareThisForAppend(ModelAppendList const&);
        shared_ptr<ModelLitImpl> Create<>();
        void AllocateFaceBuffersForModel(ModelLitImpl const&);
        void ResetBoundingCalculations();
        void CopyForAnim(bool, ModelLitImpl&, Array<signed char, eastl::allocator>&);
        void AllocModelId();
        void CalcAABB(int);
        void CalcBoundingSphere();
        int GetRadiusSphere();
        void Animate2(int, eastl::vector<int, eastl::allocator> const&, int, int, int);
        void Pose(Skeleton&, int);
        void AnimateKeyFramedTransparency(graphics::animation::OldscapeAnimKeyFrameSet&, int);
        void PoseSmooth(Skeleton&, int);
        void DiscardAnimLabels();
        void TransformPoint(int, jag::math::Matrix44T<float> const&);
        void PoseRigid(Skeleton&, int);
        ModelLitImpl();
        static /* 16 bytes */ m_tempModel;
        static Array<signed char, eastl::allocator> /* 24 bytes */
            m_tempFTran;                            // = Array<signed char,eastl::allocator>()
        static /* 16 bytes */ m_tempModel2;
        static Array<signed char, eastl::allocator> /* 32 bytes */
            m_tempFTran2;                           // = Array<signed char,eastl::allocator>()
        static /* 64 bytes */ m_sumMatrix;
        static /* 64 bytes */ m_weightMatrix;
        static /* 64 bytes */ m_skinMatrix;
        static /* 4 bytes */ m_nextModelId;
        static /* 4 bytes */ m_oX;
        static /* 4 bytes */ m_oY;
        static /* 4 bytes */ m_oZ;

        // data members, from how the methods use this: 760 bytes, the first 108 are ModelRSevenLit
        char _unknown_108[140];
        shared_ptr field_248; // offset 248
        shared_ptr field_264; // offset 264
        shared_ptr field_280; // offset 280
        shared_ptr field_296; // offset 296
        ModelLit field_312;   // offset 312
        char _unknown_313[3];
        int field_316; // offset 316
        char _unknown_320[72];
        shared_ptr field_392; // offset 392
        shared_ptr field_408; // offset 408
        shared_ptr field_424; // offset 424
        shared_ptr field_440; // offset 440
        shared_ptr field_456; // offset 456
        shared_ptr field_472; // offset 472
        undefined4 field_488; // offset 488
        undefined1 field_492; // offset 492
        char _unknown_493[3];
        undefined4 field_496; // offset 496
        undefined1 field_500; // offset 500
        char _unknown_501[3];
        undefined4 field_504; // offset 504
        int field_508;        // offset 508
        int m_radiusCylinder; // offset 512
        int field_516;        // offset 516
        int field_520;        // offset 520
        char _unknown_524[220];
        undefined1 field_744; // offset 744
        undefined1 field_745; // offset 745
        undefined1 field_746; // offset 746
        undefined1 field_747; // offset 747
        short field_748;      // offset 748
        char _unknown_750[10];
    };

    // 0x10034c1c0, 240 bytes, inline, placed by class header (inline)
    // shared_ptr<ModelLitImpl> ModelLitImpl::Create<>()
    shared_ptr* ModelLitImpl::Create<>(shared_ptr* __return_storage_ptr__, ModelLitImpl* this) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        ModelLitImpl* this_00;
        shared_ptr local_40;
        ModelLitImpl* local_30[2];

        pvVar1 = (void*)aligned_alloc(800, 8);
        if (pvVar1 == (void*)0) {
            new (__return_storage_ptr__) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            this_00 = (ModelLitImpl*)((long)pvVar1 + 32);
            ___bzero(this_00, 768);
            ModelLitImpl(this_00);
            local_40._0_4_ = 1;
            local_30[0] = this_00;
            prVar2 =
                placement_new<ref_counter_shared<ModelLitImpl>, int, ModelLitImpl*&>(pvVar1, (int*)&local_40, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (&local_40)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
            weak_ptr<ModelLitImpl>::operator=((weak_ptr<ModelLitImpl>*)&local_30[0]->field_752, &local_40);
            shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                (shared_ptr<RSevenDebugPresetProvider>*)__return_storage_ptr__, &local_40);
            local_40.~shared_ptr();
        }
        return __return_storage_ptr__;
    }

    // 0x10034db60, 32 bytes, inline, placed by class header (inline)
    // ModelLitImpl::AllocModelId()
    void ModelLitImpl::AllocModelId() {
        m_nextModelId = m_nextModelId + 8;
    }

    // 0x1003519a0, 48 bytes, base-object constructor, inline, placed by class name
    // ModelLit::ModelLit()
    void ModelLit::ModelLit() {
        new (this) ModelSource();
        field_0 = PTR_vtable_100ee89e8 + 16;
        field_16 = 0;
    }

    // 0x100370e40, 16 bytes, complete-object destructor, inline, placed by class header (inline)
    // ModelLitImpl::~ModelLitImpl(): jumps straight to the base-object destructor

    // 0x100370e50, 32 bytes, deleting destructor, inline, placed by class header (inline)
    // ModelLitImpl::~ModelLitImpl()
    void ModelLitImpl::~ModelLitImpl() {
        ~ModelLitImpl(this);
        operator_delete(this);
    }

    // 0x100370e70, 48 bytes, inline, placed by class header (inline)
    // ModelLitImpl::GetMousePickingAabb(int)
    void ModelLitImpl::GetMousePickingAabb(int param_1) {
        int local_c;

        local_c = param_1;
        eastl::hash_map<int, ModelLit::AABB, eastl::hash<int>, eastl::equal_to<int>,
                        eastl::fixed_hashtable_allocator<3ul, 40ul, 1ul, 4ul, 0ul, true, eastl::allocator>, false>::
        operator[]((hash_map<int, ModelLit::AABB, eastl::hash<int>, eastl::equal_to<int>,
                             eastl::fixed_hashtable_allocator<3ul, 40ul, 1ul, 4ul, 0ul, true, eastl::allocator>,
                             false>*)&field_528,
                   &local_c);
    }

    // 0x100373010, 48 bytes, base-object constructor, inline, placed by class name
    // ModelLit::ModelLit(ModelLit const&)
    void ModelLit::ModelLit(ModelLit* param_1) {
        new (this) ModelSource(param_1);
        field_0 = PTR_vtable_100ee89e8 + 16;
        field_16 = param_1->field_16;
    }

} // namespace jag::oldscape::dash3d

namespace jag::oldscape {
    class HillSkewBuildInput {
    public:
        HillSkewBuildInput();
        ~HillSkewBuildInput();

        // data members, from how the methods use this: 104 bytes
        char _unknown_0[104];
    };

    // 0x10034d4a0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // HillSkewBuildInput::HillSkewBuildInput(): jumps straight to the base-object constructor

    // 0x10034d570, 16 bytes, complete-object destructor, inline, placed by class header (inline)
    // HillSkewBuildInput::~HillSkewBuildInput(): jumps straight to the base-object destructor

} // namespace jag::oldscape
