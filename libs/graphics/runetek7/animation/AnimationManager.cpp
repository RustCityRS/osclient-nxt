// libs/graphics/runetek7/animation/AnimationManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "AnimationManager.h"

namespace jag::graphics {
    // 0x100f44c80, 1 bytes, __data
    AnimationManager::m_tweenBones = 1;

    // 0x100f44c81, 1 bytes, __data
    AnimationManager::m_tweenLabels = 1;

    // 0x103bc0f80, 24 bytes, __common; zero-initialised
    AnimationManager::IDENTITY_STATE_LABELS;

    // 0x103bc0f98, 24 bytes, __common; zero-initialised
    AnimationManager::IDENTITY_STATE_BILLBOARD_LABELS;

    // 0x103bc0fb0, 24 bytes, __common; zero-initialised
    AnimationManager::IDENTITY_STATE_BONES;

    // 0x103bc0fc8, 24 bytes, __common; zero-initialised
    AnimationManager::IDENTITY_SKIP_TWEENBONE;

    // 0x103bc0fe0, 16 bytes, __common; zero-initialised
    AnimationManager::IDENTITY_ANIMATION;

    // 0x103bc0ff0, 80 bytes, __common; set at startup by ___cxx_global_var_init.108
    VertexAnimation AnimationManager::IDENTITY_VERTEX_ANIMATION = VertexAnimation();

    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    AnimationManager::GetTimeNSPtr();

    // 0x100009d10: the linker folded this into eastl::string::Layout::HeapBeginPtr(), which has identical code
    AnimationManager::GetTimeNS() const;

    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    AnimationManager::~AnimationManager();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    AnimationManager::~AnimationManager();

    // 0x10097ee10, 16 bytes, placed by class name and debug map
    // AnimationManager::Initialise()
    void AnimationManager::Initialise() {}

    // 0x100989450, 112 bytes, placed by class name
    // AnimationManager::$_3::operator()() const
    /* AnimationManager::$_3::TEMPNAMEPLACEHOLDERVALUE() const */

    void AnimationManager::$_3::operator()() {
        Matrix43T<float>* this_00;
        Matrix43T<float>* pMVar1;

        new (&IDENTITY_STATE_BONES) Array<math::Matrix43T<float>, eastl::allocator>(800);
        this_00 = (Matrix43T<float>*)IDENTITY_STATE_BONES.data();
        pMVar1 = (Matrix43T<float>*)IDENTITY_STATE_BONES.end();
        for (; this_00 != pMVar1; this_00 = this_00 + 48) {
            this_00->SetToIdentity();
        }
    }

    // 0x1009894c0, 144 bytes, placed by class name
    // AnimationManager::$_4::operator()() const
    /* AnimationManager::$_4::TEMPNAMEPLACEHOLDERVALUE() const */

    void AnimationManager::$_4::operator()() {
        long lVar1;
        undefined4* puVar2;
        ulong uVar3;
        uint uVar4;
        ulong uVar5;

        new (&IDENTITY_STATE_LABELS) Array<float, eastl::allocator>(128);
        lVar1 = IDENTITY_STATE_LABELS.end();
        if (lVar1 != 0) {
            uVar4 = 1;
            uVar5 = 0;
            do {
                puVar2 = (undefined4*)Array<float, eastl::allocator>::operator[](
                    (Array<float, eastl::allocator>*)&IDENTITY_STATE_LABELS, uVar5);
                *puVar2 = 0;
                uVar5 = (ulong)uVar4;
                uVar3 = IDENTITY_STATE_LABELS.end();
                uVar4 = uVar4 + 1;
            } while (uVar5 < uVar3);
        }
    }

    // 0x100989550, 176 bytes, placed by class name
    // AnimationManager::$_5::operator()() const
    /* AnimationManager::$_5::TEMPNAMEPLACEHOLDERVALUE() const */

    void AnimationManager::$_5::operator()() {
        long lVar1;
        ulong uVar2;
        undefined4* puVar3;
        uint uVar4;
        ulong uVar5;

        new (&IDENTITY_STATE_BILLBOARD_LABELS) Array<float, eastl::allocator>(80);
        lVar1 = IDENTITY_STATE_BILLBOARD_LABELS.end();
        if (lVar1 != 0) {
            uVar4 = 1;
            uVar5 = 0;
            do {
                if ((uVar4 - 1 & 6) == 2) {
                    puVar3 = (undefined4*)Array<float, eastl::allocator>::operator[](
                        (Array<float, eastl::allocator>*)&IDENTITY_STATE_BILLBOARD_LABELS, uVar5);
                    *puVar3 = 1065353216;
                } else {
                    puVar3 = (undefined4*)Array<float, eastl::allocator>::operator[](
                        (Array<float, eastl::allocator>*)&IDENTITY_STATE_BILLBOARD_LABELS, uVar5);
                    *puVar3 = 0;
                }
                uVar5 = (ulong)uVar4;
                uVar2 = IDENTITY_STATE_BILLBOARD_LABELS.end();
                uVar4 = uVar4 + 1;
            } while (uVar5 < uVar2);
        }
    }

    // 0x100989600, 144 bytes, placed by class name
    // AnimationManager::$_6::operator()() const
    /* AnimationManager::$_6::TEMPNAMEPLACEHOLDERVALUE() const */

    void AnimationManager::$_6::operator()() {
        long lVar1;
        undefined1* puVar2;
        ulong uVar3;
        uint uVar4;
        ulong uVar5;

        new (&IDENTITY_SKIP_TWEENBONE) Array<unsigned char, eastl::allocator>(800);
        lVar1 = IDENTITY_SKIP_TWEENBONE.end();
        if (lVar1 != 0) {
            uVar4 = 1;
            uVar5 = 0;
            do {
                puVar2 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](
                    (Array<unsigned char, eastl::allocator>*)&IDENTITY_SKIP_TWEENBONE, uVar5);
                *puVar2 = 0;
                uVar5 = (ulong)uVar4;
                uVar3 = IDENTITY_SKIP_TWEENBONE.end();
                uVar4 = uVar4 + 1;
            } while (uVar5 < uVar3);
        }
    }

    // 0x100989740, 32 bytes, base-object constructor, placed by class name
    // AnimationManager::AnimationManager()
    void AnimationManager::AnimationManager() {
        new (this) Singleton<AnimationManager>();
        *this = (AnimationManager)0;
    }

    // 0x1009897b0, 16 bytes, complete-object constructor, placed by class name
    // AnimationManager::AnimationManager(): jumps straight to the base-object constructor

    // 0x1009a7520, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.108
    void ___cxx_global_var_init_108() {
        new (&AnimationManager::IDENTITY_VERTEX_ANIMATION) VertexAnimation();
        ___cxa_atexit(PTR__VertexAnimation_100ee69d0, &AnimationManager::IDENTITY_VERTEX_ANIMATION, 4294967296);
    }

} // namespace jag::graphics
