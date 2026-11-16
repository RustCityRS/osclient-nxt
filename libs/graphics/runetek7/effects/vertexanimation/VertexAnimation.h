// libs/graphics/runetek7/effects/vertexanimation/VertexAnimation.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class VertexAnimation {
    public:
        void GetBoneTransforms() const;
        shared_ptr GetAnimationStateProvider() const;
        VertexAnimation(VertexAnimation&& vertexAnimation);
        VertexAnimation(const VertexAnimation& vertexAnimation);
        bool GetAnimatesTransparency() const;
        void ClearAnimationStateProvider();
        void SetAnimationStateProvider(const shared_ptr<AnimationStateProvider>& animationStateProvider);
        void SetMaxSize(unsigned int arg1, unsigned int arg2, unsigned int arg3);
        void SetShaderConstants(render::RenderContext& renderContext, Shader& shader) const;
        void DeferredUpdateAnimation(const eastl::vector_map<unsigned short, unsigned short>* arg1,
                                     const eastl::vector_map<unsigned short, unsigned short>* arg2,
                                     const eastl::vector_map<unsigned short, unsigned short>* arg3,
                                     const eastl::vector_map<unsigned short, unsigned short>* arg4);
        unsigned long
        DetermineHasTransparentLabels(const eastl::vector_map<unsigned short, unsigned short>& arg1) const;
        void UpdateAnimation(ThreadPool& threadPool, unsigned int arg2,
                             const eastl::vector_map<unsigned short, unsigned short>* arg3,
                             const eastl::vector_map<unsigned short, unsigned short>* arg4,
                             const eastl::vector_map<unsigned short, unsigned short>* arg5,
                             const eastl::vector_map<unsigned short, unsigned short>* arg6,
                             const Array<LabelData>& labelDatas, const math::Matrix44T<float>& matrix44);
        void EndUpdateAnimation();
        VertexAnimation();
        ~VertexAnimation();

    private:
        uint8_t _unknown_0[48];
        shared_ptr m_animationStateProvider;
        unsigned int field_64;
        unsigned int field_68;
        uint8_t field_72;
        uint8_t _unknown_73[3];
    };

    // 0x10082dba0
    VertexAnimation::VertexAnimation(VertexAnimation&& vertexAnimation) : VertexTransformData(vertexAnimation) {
        m_animationStateProvider->shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            vertexAnimation.m_animationStateProvider);
        field_72 = vertexAnimation.field_72;
        unsigned int uVar1 = vertexAnimation.field_68;
        field_64 = vertexAnimation.field_64;
        field_68 = uVar1;
    }

    // 0x10082dd60
    VertexAnimation::VertexAnimation(const VertexAnimation& vertexAnimation)
        : VertexTransformData(vertexAnimation), m_animationStateProvider(vertexAnimation.m_animationStateProvider),
          field_72(vertexAnimation.field_72) {
        unsigned int uVar1 = vertexAnimation.field_68;
        field_64 = vertexAnimation.field_64;
        field_68 = uVar1;
    }

    // 0x10082de70
    bool VertexAnimation::GetAnimatesTransparency() const {
        long* plVar2;

        if (m_animationStateProvider->operator_cast_to_bool()) {
            plVar2 = (long*)(*m_animationStateProvider).operator->();
            if ((**(void (**)(...))(*plVar2 + 48))(plVar2)) {
                return field_72 != '\0';
            }
        }
        return false;
    }

    // 0x10082e160
    void VertexAnimation::ClearAnimationStateProvider() {
        m_animationStateProvider->reset();
    }

    // 0x1008669c0
    void VertexAnimation::SetAnimationStateProvider(const shared_ptr<AnimationStateProvider>& animationStateProvider) {
        *m_animationStateProvider = animationStateProvider;
    }

    // 0x100866b00
    void VertexAnimation::SetMaxSize(unsigned int arg1, unsigned int arg2, unsigned int arg3) {
        SetMaxSize((unsigned long)arg1, (unsigned long)(arg2 << 2), (unsigned long)(arg3 << 3));
    }

    // 0x1009917b0
    VertexAnimation::VertexAnimation() : VertexTransformData(), field_64(2147483647), field_68(0), field_72(0) {}

    // 0x1009917f0
    VertexAnimation::~VertexAnimation() {
        m_animationStateProvider->~shared_ptr();
    }

} // namespace jag::graphics

namespace jag::math {
    // 0x10080dd10
    float frand(float arg1, float arg2) {
        int iVar1 = _rand();
        return (arg2 - arg1) * 4.656613e-10 * (float)iVar1 + arg1;
    }

} // namespace jag::math
