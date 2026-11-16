// libs/graphics/runetek7/animation/RT7AnimationSampler.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class RT7AnimationSampler {
    public:
        // virtual methods in vtable order
        virtual ~RT7AnimationSampler();
        virtual void Update(const Array<LabelData>& labelDatas, const math::Matrix44T<float>& matrix44);
        virtual void GetRT5BoneTransforms(WrapArray<math::Matrix43T<float>>& wrapArray,
                                          const eastl::vector_map<unsigned short, unsigned short>& arg2,
                                          const eastl::vector_map<unsigned short, unsigned short>& arg3,
                                          const math::Matrix44T<float>& matrix44) const;
        virtual void GetLabelData(WrapArray<float>& wrapArray,
                                  const eastl::vector_map<unsigned short, unsigned short>& arg2,
                                  AnimationLabelType animationLabelType) const;
        void SetUseAsyncOptimisedPath(bool arg1);
        RT7AnimationSampler();
        void UpdateAsyncOptimised(const Array<LabelData>& labelDatas, const math::Matrix44T<float>& matrix44,
                                  const AnimationInfo& animationInfo);
        void UpdateImmediate(const Array<LabelData>& labelDatas, const math::Matrix44T<float>& matrix44,
                             const AnimationInfo& animationInfo);
        void GetRT5BoneTransformsAsyncOptimised(WrapArray<math::Matrix43T<float>>& wrapArray,
                                                const eastl::vector_map<unsigned short, unsigned short>& arg2,
                                                const eastl::vector_map<unsigned short, unsigned short>& arg3,
                                                const math::Matrix44T<float>& matrix44) const;
        void GetRT5BoneTransformsImmediate(WrapArray<math::Matrix43T<float>>& wrapArray,
                                           const eastl::vector_map<unsigned short, unsigned short>& arg2,
                                           const eastl::vector_map<unsigned short, unsigned short>& arg3,
                                           const math::Matrix44T<float>& matrix44) const;
        void SetAnimation(const AnimationInfo& animationInfo);

    private:
        uint8_t _unknown_8[16];
        uint8_t field_24;
        uint8_t _unknown_25[55];
        unsigned long long field_80;
        uint8_t _unknown_88[8];
        unsigned int field_96;
        int field_100;
        uint8_t _unknown_104[1];
        uint8_t field_105;
        uint8_t _unknown_106[22];
        bool m_useAsyncOptimisedPath;
        uint8_t _unknown_129[59];
    };

    // 0x10098ba20
    void RT7AnimationSampler::SetAnimation(const AnimationInfo& animationInfo) {
        field_80 = animationInfo;
    }

    // 0x100991ac0
    RT7AnimationSampler::~RT7AnimationSampler() {
        field_32.~VertexTransformData();
    }

} // namespace jag::graphics
