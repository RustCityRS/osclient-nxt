// libs/hal/render/synchronisation/OGL/SyncFenceDec_OGL.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.hal.render

namespace jag::render {
    // 0x100bc81a0, 16 bytes, base-object constructor, placed by debug map only (low confidence)
    // SyncFence::SyncFence()
    void SyncFence::SyncFence() {
        field_0 = (__GLsync*)0;
    }

    // 0x100bc81b0, 16 bytes, complete-object constructor, placed by debug map only (low confidence)
    // SyncFence::SyncFence(): jumps straight to the base-object constructor

    // 0x100bc81c0, 16 bytes, base-object destructor, placed by debug map only (low confidence)
    // SyncFence::~SyncFence()
    void SyncFence::~SyncFence() {
        Destroy(this);
    }

    // 0x100bc81d0, 16 bytes, placed by debug map only (low confidence)
    // SyncFence::Destroy()
    void SyncFence::Destroy() {
        ReleaseNativeResources(this);
    }

    // 0x100bc81e0, 16 bytes, complete-object destructor, placed by debug map only (low confidence)
    // SyncFence::~SyncFence(): jumps straight to the base-object destructor

    // 0x100bc81f0, 32 bytes, base-object constructor, placed by debug map only (low confidence)
    // SyncFence::SyncFence(SyncFence&&)
    void SyncFence::SyncFence(SyncFence* param_1) {
        field_0 = param_1->field_0;
        param_1->field_0 = (__GLsync*)0;
    }

    // 0x100bc8210, 16 bytes, complete-object constructor, placed by debug map only (low confidence)
    // SyncFence::SyncFence(SyncFence&&): jumps straight to the base-object constructor

    // 0x100bc8220, 32 bytes, placed by debug map only (low confidence)
    // SyncFence::operator=(SyncFence&&)
    /* SyncFence::TEMPNAMEPLACEHOLDERVALUE(SyncFence&&) */

    SyncFence* SyncFence::operator=(SyncFence* param_1) {
        field_0 = (__GLsync*)0;
        std::swap<__GLsync*>(&field_0, &param_1->field_0);
        return this;
    }

} // namespace jag::render
