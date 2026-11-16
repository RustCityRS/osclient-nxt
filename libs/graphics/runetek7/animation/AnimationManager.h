// libs/graphics/runetek7/animation/AnimationManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class AnimationManager {
    public:
        void GetTimeNSPtr();
        void GetTimeNS() const;
        ~AnimationManager();
        Animation* GetTimeElapsedSinceNS(unsigned long long arg1);
        uint64_t GetTweenBones() const;
        uint64_t GetTweenLabels() const;
        void Initialise();
        AnimationManager();
        static bool m_tweenBones;  // = 1
        static bool m_tweenLabels; // = 1
        static Array<float> IDENTITY_STATE_LABELS;
        static Array<float> IDENTITY_STATE_BILLBOARD_LABELS;
        static Array<math::Matrix43T<float>> IDENTITY_STATE_BONES;
        static Array<unsigned char> IDENTITY_SKIP_TWEENBONE;
        static shared_ptr<Animation> IDENTITY_ANIMATION;
        static VertexAnimation IDENTITY_VERTEX_ANIMATION; // = VertexAnimation()

        uint8_t _unknown_0[8];
    };

    // 0x10094fe30
    Animation* AnimationManager::GetTimeElapsedSinceNS(unsigned long long arg1) {
        long lVar3;
        Animation* pAVar4;

        auto pLVar1 = arg1->Instance();
        if (pLVar1->HeapBeginPtr() < arg1) {
            pAVar4 = nullptr;
        } else {
            pLVar1 = (Layout*)pLVar1->Instance();
            lVar3 = pLVar1->HeapBeginPtr();
            pAVar4 = (Animation*)(lVar3 - arg1);
        }
        return pAVar4;
    }

    // 0x100950bc0
    uint64_t AnimationManager::GetTweenBones() const {
        return m_tweenBones;
    }

    // 0x100951560
    uint64_t AnimationManager::GetTweenLabels() const {
        return m_tweenLabels;
    }

} // namespace jag::graphics
