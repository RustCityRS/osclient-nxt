// libs/graphics/runetek7/animation/AnimationManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "AnimationManager.h"

namespace jag::graphics {
    // 0x100f44c80
    bool AnimationManager::m_tweenBones = 1;

    // 0x100f44c81
    bool AnimationManager::m_tweenLabels = 1;

    // 0x103bc0f80
    Array<float> AnimationManager::IDENTITY_STATE_LABELS;

    // 0x103bc0f98
    Array<float> AnimationManager::IDENTITY_STATE_BILLBOARD_LABELS;

    // 0x103bc0fb0
    Array<math::Matrix43T<float>> AnimationManager::IDENTITY_STATE_BONES;

    // 0x103bc0fc8
    Array<unsigned char> AnimationManager::IDENTITY_SKIP_TWEENBONE;

    // 0x103bc0fe0
    shared_ptr<Animation> AnimationManager::IDENTITY_ANIMATION;

    // 0x103bc0ff0, set at startup by ___cxx_global_var_init.108
    VertexAnimation AnimationManager::IDENTITY_VERTEX_ANIMATION = VertexAnimation();

    // 0x100009ca0: AnimationManager::GetTimeNSPtr() has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x100009d10: AnimationManager::GetTimeNS() const has the same machine code as eastl::string::Layout::HeapBeginPtr()

    // 0x100022b10: AnimationManager::~AnimationManager() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: AnimationManager::~AnimationManager() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x10097ee10
    void AnimationManager::Initialise() {}

    // 0x100989450
    void AnimationManager::$_3::operator()() const {
        new (&IDENTITY_STATE_BONES) Array<math::Matrix43T<float>>(800);
        auto this_00 = IDENTITY_STATE_BONES.data();
        auto pMVar1 = IDENTITY_STATE_BONES.end();
        for (; this_00 != pMVar1; this_00 = this_00 + 48) {
            this_00->SetToIdentity();
        }
    }

    // 0x1009894c0
    void AnimationManager::$_4::operator()() const {
        uint32_t* puVar2;
        unsigned long uVar3;
        unsigned int uVar4;
        unsigned long arg1;

        new (&IDENTITY_STATE_LABELS) Array<float>(128);
        if (IDENTITY_STATE_LABELS.end() != 0) {
            uVar4 = 1;
            arg1 = 0;
            do {
                puVar2 = &IDENTITY_STATE_LABELS[arg1];
                *puVar2 = 0;
                arg1 = (unsigned long)uVar4;
                uVar3 = IDENTITY_STATE_LABELS.end();
                uVar4 = uVar4 + 1;
            } while (arg1 < uVar3);
        }
    }

    // 0x100989550
    void AnimationManager::$_5::operator()() const {
        unsigned long uVar2;
        uint32_t* puVar3;
        unsigned int uVar4;
        unsigned long arg1;

        new (&IDENTITY_STATE_BILLBOARD_LABELS) Array<float>(80);
        if (IDENTITY_STATE_BILLBOARD_LABELS.end() != 0) {
            uVar4 = 1;
            arg1 = 0;
            do {
                if ((uVar4 - 1 & 6) == 2) {
                    puVar3 = &IDENTITY_STATE_BILLBOARD_LABELS[arg1];
                    *puVar3 = 1065353216;
                } else {
                    puVar3 = &IDENTITY_STATE_BILLBOARD_LABELS[arg1];
                    *puVar3 = 0;
                }
                arg1 = (unsigned long)uVar4;
                uVar2 = IDENTITY_STATE_BILLBOARD_LABELS.end();
                uVar4 = uVar4 + 1;
            } while (arg1 < uVar2);
        }
    }

    // 0x100989600
    void AnimationManager::$_6::operator()() const {
        uint8_t* puVar2;
        unsigned long uVar3;
        unsigned int uVar4;
        unsigned long arg1;

        new (&IDENTITY_SKIP_TWEENBONE) Array<unsigned char>(800);
        if (IDENTITY_SKIP_TWEENBONE.end() != 0) {
            uVar4 = 1;
            arg1 = 0;
            do {
                puVar2 = &IDENTITY_SKIP_TWEENBONE[arg1];
                *puVar2 = 0;
                arg1 = (unsigned long)uVar4;
                uVar3 = IDENTITY_SKIP_TWEENBONE.end();
                uVar4 = uVar4 + 1;
            } while (arg1 < uVar3);
        }
    }

    // 0x100989740
    AnimationManager::AnimationManager() : Singleton<AnimationManager>() {
        *this = (AnimationManager)0;
    }

} // namespace jag::graphics
