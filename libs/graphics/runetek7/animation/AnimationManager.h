// libs/graphics/runetek7/animation/AnimationManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class AnimationManager {
    public:
        GetTimeNSPtr();
        GetTimeNS() const;
        ~AnimationManager();
        long GetTimeElapsedSinceNS(unsigned long long);
        GetTweenBones() const;
        GetTweenLabels() const;
        void Initialise();
        AnimationManager();
        static /* 1 bytes */ m_tweenBones;  // = 1
        static /* 1 bytes */ m_tweenLabels; // = 1
        static /* 24 bytes */ IDENTITY_STATE_LABELS;
        static /* 24 bytes */ IDENTITY_STATE_BILLBOARD_LABELS;
        static /* 24 bytes */ IDENTITY_STATE_BONES;
        static /* 24 bytes */ IDENTITY_SKIP_TWEENBONE;
        static /* 16 bytes */ IDENTITY_ANIMATION;
        static VertexAnimation /* 80 bytes */ IDENTITY_VERTEX_ANIMATION; // = VertexAnimation()

        // data members, from how the methods use this: 8 bytes
        char _unknown_0[8];
    };

    // 0x10094fe30, 64 bytes, inline, placed by class name and debug map
    // AnimationManager::GetTimeElapsedSinceNS(unsigned long long)
    long AnimationManager::GetTimeElapsedSinceNS(ulonglong param_1) {
        Layout* pLVar1;
        long lVar3;

        pLVar1 = (Layout*)param_1->Instance();
        if (eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                Layout::HeapBeginPtr(pLVar1) < param_1) {
            lVar3 = 0;
        } else {
            pLVar1 = (Layout*)pLVar1->Instance();
            lVar3 =
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(pLVar1);
            lVar3 = lVar3 - param_1;
        }
        return lVar3;
    }

    // 0x100950bc0, 16 bytes, inline, placed by class name
    // AnimationManager::GetTweenBones() const
    undefined8 AnimationManager::GetTweenBones() {
        return CONCAT71(16839756, m_tweenBones);
    }

    // 0x100951560, 16 bytes, inline, placed by class name
    // AnimationManager::GetTweenLabels() const
    undefined8 AnimationManager::GetTweenLabels() {
        return CONCAT71(16839756, m_tweenLabels);
    }

} // namespace jag::graphics
