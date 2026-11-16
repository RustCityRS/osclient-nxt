// libs/oldscape/jagex3/dash3d/PoseStateRSeven.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::dash3d {
    class DashBasePoseStateRSeven : public PoseStateRSeven // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual GetBoneTransform(unsigned long) const;
        virtual GetLabelTransparencyDelta(unsigned long) const;
        virtual void ApplyAnimationTransform(int, eastl::vector<int, eastl::allocator> const&, int, int, int,
                                             jag::math::Vector3T<float>&) const;
        virtual GetAnimationTransform(int, int, int, int) const;
        virtual void UpdateAnimationOrigin(eastl::vector<int, eastl::allocator> const&, jag::math::Vector3T<float>&,
                                           int, int, int) const;
        virtual void UpdateFaceTransparency(eastl::vector<int, eastl::allocator> const&, int) const;
        virtual CalculateMappedCentreOfLabels(eastl::vector<int, eastl::allocator> const&) const;
        void GetFrameSet() const;
        GetFrame() const;
        void GetBonePositions() const;
        void GetFaceTransparencyDeltas() const;
        bool IsBaseEqual(DashBasePoseStateRSeven const&) const;
        void UpdateBonePositions(jag::math::Vector3T<float> const&, int, int, int, int,
                                 eastl::vector<int, eastl::allocator> const&) const;
        void LoadFromLabeledModel(ResolvedModel const&);
        DashBasePoseStateRSeven(PoseStateRSeven::Type, shared_ptr<AnimFrameSet> const&, int, ResolvedModel const&);
        ~DashBasePoseStateRSeven();

        // data members, from how the methods use this: 152 bytes, the first 48 are PoseStateRSeven
        char _unknown_48[104];
    };

    class DashPoseStateRSeven {
    public:
        // virtual methods in vtable order
        virtual IsEqual(PoseStateRSeven const&) const;
        void InitializeFrameData();
        DashPoseStateRSeven(shared_ptr<AnimFrameSet> const&, int, ResolvedModel const&);
        ~DashPoseStateRSeven();

        // data members, from how the methods use this: 145 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[8];
        shared_ptr field_16; // offset 16
        int field_32;        // offset 32
        char _unknown_36[109];
    };

    class MayaPoseStateRSeven : public PoseStateRSeven // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual GetJointTransform(unsigned long) const;
        virtual GetLabelTransparencyDelta(unsigned long) const;
        virtual IsEqual(PoseStateRSeven const&) const;
        virtual void InitializeFrameData() const;
        void PoseSkeleton() const;
        void AnimateKeyFramedTransparency() const;
        void GetJointPositions() const;
        void InitializeIfRequired() const;
        MayaPoseStateRSeven(shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet> const&, int);
        ~MayaPoseStateRSeven();
        MayaPoseStateRSeven(shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet> const&, int,
                            Array<bool, eastl::allocator> const&, bool);

        // data members, from how the methods use this: 80 bytes, the first 48 are PoseStateRSeven
        char _unknown_48[8];
        bool field_56; // offset 56
        char _unknown_57[23];
    };

    class PoseStateProviderRSeven {
    public:
        // virtual methods in vtable order
        virtual ~PoseStateProviderRSeven();
        virtual void GetBoneTransforms(
            WrapArray<jag::math::Matrix43T<float>>&,
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>> const&,
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>> const&,
            jag::math::Matrix44T<float> const&) const;
        virtual void ApplyBoneTransforms(
            jag::math::Vector3T<float>&,
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>> const&,
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>> const&,
            jag::math::Matrix44T<float> const&) const;
        virtual void GetLabelData(
            WrapArray<float>&,
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>> const&,
            jag::graphics::AnimationLabelType) const;
        virtual void UpdateFromCurrentTime(Array<jag::graphics::LabelData, eastl::allocator> const&,
                                           jag::math::Matrix44T<float> const&);
        virtual GetAnimatesTransparency() const;
        virtual GetAnimatedColourType() const;
        PoseStateProviderRSeven(shared_ptr<PoseStateRSeven> const&);
        void GetTransforms(
            WrapArray<jag::math::Matrix43T<float>>&,
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>> const&,
            std::function<jag::math::Matrix43T<float>(unsigned long)>) const;

        // data members, from how the methods use this: 40 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined4 field_8;  // offset 8
        undefined1 field_12; // offset 12
        char _unknown_13[11];
        shared_ptr field_24; // offset 24
    };

    class PoseStateRSeven {
    public:
        // virtual methods in vtable order
        virtual GetBoneTransform(unsigned long) const;
        virtual GetLabelTransparencyDelta(unsigned long) const;
        virtual IsEqual(PoseStateRSeven const&) const;
        uint GetType() const;
        GetJointTransform(unsigned long) const;
        PoseStateRSeven(Type);

        // data members, from how the methods use this: 48 bytes
        undefined** field_0; // offset 0, vtable pointer
        uint m_type;         // offset 8
        char _unknown_12[4];
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
        undefined8 field_40; // offset 40
    };

    class TransformedPoseStateRSeven {
    public:
        // virtual methods in vtable order
        virtual TransformedPoseStateRSeven* GetBoneTransform(unsigned long) const;
        virtual TransformedPoseStateRSeven* GetJointTransform(unsigned long) const;
        virtual bool IsEqual(PoseStateRSeven const&) const;
        TransformedPoseStateRSeven(jag::math::Matrix43T<float>);

        // data members, from how the methods use this: 64 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined4 field_8;  // offset 8
        char _unknown_12[4];
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
        undefined8 field_40; // offset 40
        undefined8 field_48; // offset 48
        undefined8 field_56; // offset 56
    };

    // 0x1001f3260, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // PoseStateProviderRSeven::PoseStateProviderRSeven(shared_ptr<PoseStateRSeven> const&): jumps straight to the base-object constructor

    // 0x1001f3270, 144 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // PoseStateProviderRSeven::PoseStateProviderRSeven(shared_ptr<PoseStateRSeven> const&)
    void PoseStateProviderRSeven::PoseStateProviderRSeven(shared_ptr* param_1) {
        new (this) jag::graphics::AnimationStateProvider();
        field_0 = &PTR__PoseStateProviderRSeven_100efb000;
        new (field_24, param_1) shared_ptr<Decor>();
        if (!field_24->operator_cast_to_bool()) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pose",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "PoseStateRSeven.h",
                      462, "Pose may not be null.");
        }
    }

    // 0x100324ca0, 48 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // PoseStateRSeven::GetBoneTransform(unsigned long) const
    /* PoseStateRSeven::GetJointTransform(unsigned long) const */

    PoseStateRSeven* PoseStateRSeven::GetJointTransform(ulong param_1) {
        undefined** ppuVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;

        ppuVar1 = *(undefined***)PTR_IDENTITY_100ee6720;
        uVar2 = *(undefined8*)(PTR_IDENTITY_100ee6720 + 8);
        uVar3 = *(undefined8*)(PTR_IDENTITY_100ee6720 + 16);
        uVar4 = *(undefined8*)(PTR_IDENTITY_100ee6720 + 24);
        uVar5 = *(undefined8*)(PTR_IDENTITY_100ee6720 + 40);
        field_32 = *(undefined8*)(PTR_IDENTITY_100ee6720 + 32);
        field_40 = uVar5;
        field_16 = uVar3;
        field_24 = uVar4;
        field_0 = ppuVar1;
        *(undefined8*)&m_type = uVar2;
        return this;
    }

    // 0x100324cd0, 16 bytes, complete-object destructor, inline, placed by class header (inline)
    // PoseStateProviderRSeven::~PoseStateProviderRSeven(): jumps straight to the base-object destructor

    // 0x100324ce0, 32 bytes, deleting destructor, inline, placed by class header (inline)
    // PoseStateProviderRSeven::~PoseStateProviderRSeven()
    void PoseStateProviderRSeven::~PoseStateProviderRSeven() {
        ~PoseStateProviderRSeven(this);
        operator_delete(this);
    }

    // 0x10037bb60, 32 bytes, base-object constructor, inline, placed by class name
    // PoseStateRSeven::PoseStateRSeven(PoseStateRSeven::Type)
    void PoseStateRSeven::PoseStateRSeven(uint param_2) {
        field_0 = &PTR_GetJointTransform_100efae00;
        m_type = param_2;
    }

} // namespace jag::oldscape::dash3d
