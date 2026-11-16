// libs/oldscape/jagex3/dash3d/PoseStateRSeven.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::dash3d {
    class DashBasePoseStateRSeven : public PoseStateRSeven // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual auto GetBoneTransform(unsigned long arg1) const;
        virtual uint32_t GetLabelTransparencyDelta(unsigned long arg1) const;
        virtual void ApplyAnimationTransform(int arg1, const eastl::vector<int>& arg2, int arg3, int arg4, int arg5,
                                             jag::math::Vector3T<float>& vector3) const;
        virtual auto GetAnimationTransform(int arg1, int arg2, int arg3, int arg4) const;
        virtual void UpdateAnimationOrigin(const eastl::vector<int>& arg1, jag::math::Vector3T<float>& vector3,
                                           int arg3, int arg4, int arg5) const;
        virtual void UpdateFaceTransparency(const eastl::vector<int>& arg1, int arg2) const;
        virtual uint64_t CalculateMappedCentreOfLabels(const eastl::vector<int>& arg1) const;
        Array<AnimFrame>* GetFrameSet() const;
        int GetFrame() const;
        void GetBonePositions() const;
        void GetFaceTransparencyDeltas() const;
        bool IsBaseEqual(const DashBasePoseStateRSeven& dashBasePoseStateRSeven) const;
        void UpdateBonePositions(const jag::math::Vector3T<float>& vector3, int arg2, int arg3, int arg4, int arg5,
                                 const eastl::vector<int>& arg6) const;
        void LoadFromLabeledModel(const ResolvedModel& resolvedModel);
        DashBasePoseStateRSeven(PoseStateRSeven::Type arg1, const shared_ptr<AnimFrameSet>& animFrameSet, int arg3,
                                const ResolvedModel& resolvedModel);
        ~DashBasePoseStateRSeven();

    private:
        uint8_t _unknown_48[104];
    };

    class DashPoseStateRSeven {
    public:
        // virtual methods in vtable order
        virtual bool IsEqual(const PoseStateRSeven& poseStateRSeven) const;
        void InitializeFrameData();
        DashPoseStateRSeven(const shared_ptr<AnimFrameSet>& animFrameSet, int arg2, const ResolvedModel& resolvedModel);
        ~DashPoseStateRSeven();

    private:
        uint8_t _unknown_8[8];
        shared_ptr field_16;
        int field_32;
        uint8_t _unknown_36[109];
    };

    class MayaPoseStateRSeven : public PoseStateRSeven // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual auto GetJointTransform(unsigned long arg1) const;
        virtual uint32_t GetLabelTransparencyDelta(unsigned long arg1) const;
        virtual bool IsEqual(const PoseStateRSeven& poseStateRSeven) const;
        virtual void InitializeFrameData() const;
        void PoseSkeleton() const;
        void AnimateKeyFramedTransparency() const;
        void GetJointPositions() const;
        void InitializeIfRequired() const;
        MayaPoseStateRSeven(const shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet>& oldscapeAnimKeyFrameSet,
                            int arg2);
        ~MayaPoseStateRSeven();
        MayaPoseStateRSeven(const shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet>& oldscapeAnimKeyFrameSet,
                            int arg2, const Array<bool>& arg3, bool arg4);

    private:
        uint8_t _unknown_48[8];
        bool field_56;
        uint8_t _unknown_57[15];
        int field_72;
        uint8_t _unknown_76[4];
    };

    class PoseStateProviderRSeven {
    public:
        // virtual methods in vtable order
        virtual ~PoseStateProviderRSeven();
        virtual void GetBoneTransforms(WrapArray<jag::math::Matrix43T<float>>& wrapArray,
                                       const eastl::vector_map<unsigned short, unsigned short>& arg2,
                                       const eastl::vector_map<unsigned short, unsigned short>& arg3,
                                       const jag::math::Matrix44T<float>& matrix44) const;
        virtual void ApplyBoneTransforms(jag::math::Vector3T<float>& vector3,
                                         const eastl::vector_map<unsigned short, unsigned short>& arg2,
                                         const eastl::vector_map<unsigned short, unsigned short>& arg3,
                                         const jag::math::Matrix44T<float>& matrix44) const;
        virtual void GetLabelData(WrapArray<float>& wrapArray,
                                  const eastl::vector_map<unsigned short, unsigned short>& arg2,
                                  jag::graphics::AnimationLabelType animationLabelType) const;
        virtual void UpdateFromCurrentTime(const Array<jag::graphics::LabelData>& labelDatas,
                                           const jag::math::Matrix44T<float>& matrix44);
        virtual uint8_t GetAnimatesTransparency() const;
        virtual uint64_t GetAnimatedColourType() const;
        PoseStateProviderRSeven(const shared_ptr<PoseStateRSeven>& poseStateRSeven);
        void GetTransforms(WrapArray<jag::math::Matrix43T<float>>& wrapArray,
                           const eastl::vector_map<unsigned short, unsigned short>& arg2,
                           std::function<jag::math::Matrix43T<float>(unsigned long)> callback) const;

    private:
        uint32_t field_8;
        uint8_t field_12;
        uint8_t _unknown_13[11];
        shared_ptr field_24;
    };

    class PoseStateRSeven {
    public:
        // virtual methods in vtable order
        virtual PoseStateRSeven* GetBoneTransform(unsigned long arg1) const;
        virtual uint64_t GetLabelTransparencyDelta(unsigned long arg1) const;
        virtual bool IsEqual(const PoseStateRSeven& poseStateRSeven) const;
        Type GetType() const;
        PoseStateRSeven* GetJointTransform(unsigned long arg1) const;
        PoseStateRSeven(Type arg1);

    private:
        Type m_type;
        uint8_t _unknown_12[4];
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
        uint64_t field_40;
    };

    class TransformedPoseStateRSeven {
    public:
        // virtual methods in vtable order
        virtual TransformedPoseStateRSeven* GetBoneTransform(unsigned long arg1) const;
        virtual TransformedPoseStateRSeven* GetJointTransform(unsigned long arg1) const;
        virtual bool IsEqual(const PoseStateRSeven& poseStateRSeven) const;
        TransformedPoseStateRSeven(jag::math::Matrix43T<float> matrix43);

    private:
        Type field_8;
        uint8_t _unknown_12[4];
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
        uint64_t field_40;
        uint64_t field_48;
        uint64_t field_56;
    };

    // 0x1001f3270
    PoseStateProviderRSeven::PoseStateProviderRSeven(const shared_ptr<PoseStateRSeven>& poseStateRSeven)
        : jag::graphics::AnimationStateProvider(), field_24(poseStateRSeven) {
        if (field_24->operator_cast_to_bool() == '\0') {
            LogAssert("m_pose",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "PoseStateRSeven.h",
                      462, "Pose may not be null.");
        }
    }

    // 0x100324ca0
    PoseStateRSeven* PoseStateRSeven::GetBoneTransform(unsigned long arg1) const {
        PoseStateRSeven_vtbl* pPVar1 = *(PoseStateRSeven_vtbl**)PTR_IDENTITY_100ee6720;
        uint64_t uVar2 = *(uint64_t*)(PTR_IDENTITY_100ee6720 + 8);
        uint64_t uVar3 = *(uint64_t*)(PTR_IDENTITY_100ee6720 + 16);
        uint64_t uVar4 = *(uint64_t*)(PTR_IDENTITY_100ee6720 + 24);
        uint64_t uVar5 = *(uint64_t*)(PTR_IDENTITY_100ee6720 + 40);
        field_32 = *(uint64_t*)(PTR_IDENTITY_100ee6720 + 32);
        field_40 = uVar5;
        field_16 = uVar3;
        field_24 = uVar4;
        this->_vptr = pPVar1;
        *(uint64_t*)&m_type = uVar2;
        return this;
    }

    // 0x10037bb60
    PoseStateRSeven::PoseStateRSeven(PoseStateRSeven::Type arg1) : m_type(arg1) {}

} // namespace jag::oldscape::dash3d
