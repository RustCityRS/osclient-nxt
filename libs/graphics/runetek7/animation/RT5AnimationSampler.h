// libs/graphics/runetek7/animation/RT5AnimationSampler.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class RT5AnimationSampler {
    public:
        // virtual methods in vtable order
        virtual ~RT5AnimationSampler();
        virtual void Update(const Array<LabelData>& labelDatas, const math::Matrix44T<float>& matrix44);
        virtual void GetRT5BoneTransforms(WrapArray<math::Matrix43T<float>>& wrapArray,
                                          const eastl::vector_map<unsigned short, unsigned short>& arg2,
                                          const eastl::vector_map<unsigned short, unsigned short>& arg3,
                                          const math::Matrix44T<float>& matrix44) const;
        virtual void GetLabelData(WrapArray<float>& wrapArray,
                                  const eastl::vector_map<unsigned short, unsigned short>& arg2,
                                  AnimationLabelType animationLabelType) const;
        virtual void Reset();
        Option<float>* GetVertexTransformData();
        RT5AnimationSampler();
        void ClearWalkMergeData();
        unsigned int GetFrameFromTimeInRange(float& arg1, float arg2, unsigned int arg3, const Animation& animation);
        unsigned long GetFrameFromTime(float& arg1, unsigned long long arg2, const Animation& animation, int arg4,
                                       AnimationLoopBehaviour animationLoopBehaviour);
        void GetFramesBeforeAndAfter(unsigned int& arg1, eastl::optional<unsigned int>& arg2, float& arg3,
                                     const Animation& animation, unsigned long long arg5, int arg6,
                                     AnimationLoopBehaviour animationLoopBehaviour, bool arg8);
        void CalculateMaxBoneOrLabelIDsForFrames(int& arg1, int& arg2, int& arg3, AnimationFrameRT5* animationFrameRT51,
                                                 AnimationFrameRT5* animationFrameRT52);
        void SetOverrideAnimationInfo(AnimationInfo* animationInfo);
        void SetTransformMaskToggle(bool arg1);
        void SetVertexTransformsOverride(VertexTransformData* vertexTransformData);
        RT5AnimationSampler(RT5AnimationSampler&& rt5AnimationSampler);
        void SetAnimation(const AnimationInfo& animationInfo);

    private:
        uint8_t _unknown_8[16];
        uint8_t field_24;
        uint8_t _unknown_25[7];
        VertexTransformData field_32;
        uint8_t _unknown_72[8];
        VertexTransformData* field_80;
        uint8_t m_transformMaskToggle;
        uint8_t _unknown_89[55];
        AnimationInfo* m_pOverrideAnimationInfo;
        uint8_t _unknown_152[6515720];
    };

    // 0x10094f450
    void RT5AnimationSampler::ClearWalkMergeData() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        field_8 = local_28;
        m_transformMaskToggle = 1;
        field_80 = nullptr;
        m_pOverrideAnimationInfo = nullptr;
    }

    // 0x100953fc0
    void RT5AnimationSampler::SetOverrideAnimationInfo(AnimationInfo* animationInfo) {
        m_pOverrideAnimationInfo = animationInfo;
    }

    // 0x100953fd0
    void RT5AnimationSampler::SetTransformMaskToggle(bool arg1) {
        m_drawDebugSkeleton = arg1;
    }

    // 0x100953fe0
    void RT5AnimationSampler::SetVertexTransformsOverride(VertexTransformData* vertexTransformData) {
        *(VertexTransformData**)(this + 80) = vertexTransformData;
    }

    // 0x10096c4a0
    RT5AnimationSampler::RT5AnimationSampler(RT5AnimationSampler&& rt5AnimationSampler)
        : AnimationSampler(rt5AnimationSampler), field_32(rt5AnimationSampler.field_32),
          m_transformMaskToggle(rt5AnimationSampler.m_transformMaskToggle), field_80(rt5AnimationSampler.field_80),
          field_96(rt5AnimationSampler.field_96),
          m_pOverrideAnimationInfo(rt5AnimationSampler.m_pOverrideAnimationInfo) {}

    // 0x10098ba10
    void RT5AnimationSampler::SetAnimation(const AnimationInfo& animationInfo) {
        field_96 = animationInfo;
    }

    // 0x100991a00
    RT5AnimationSampler::~RT5AnimationSampler() {
        field_96.~Sprite();
        field_32->~VertexTransformData();
    }

} // namespace jag::graphics
