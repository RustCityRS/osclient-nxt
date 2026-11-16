// libs/hal/render/synchronisation/OGL/SyncFenceDec_OGL.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.hal.render

namespace jag::render {
    // 0x100bc81a0
    SyncFence::SyncFence() : field_0(0) {}

    // 0x100bc81c0
    SyncFence::~SyncFence() {
        Destroy();
    }

    // 0x100bc81d0
    void SyncFence::Destroy() {
        ReleaseNativeResources();
    }

    // 0x100bc81f0
    SyncFence::SyncFence(SyncFence&& syncFence) : field_0(syncFence.field_0) {
        syncFence.field_0 = 0;
    }

    // 0x100bc8220
    SyncFence* SyncFence::operator=(SyncFence&& syncFence) {
        field_0 = 0;
        std::swap<__GLsync*>(*this, syncFence);
        return this;
    }

} // namespace jag::render
