// libs/hal/render/state/SamplerState.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

#include "SamplerState.h"

namespace jag::render {
    // 0x100009ca0: SamplerState::GetDesc() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x100bf3780
    uint8_t SamplerState::Create(const SamplerState::Desc& desc) {
        *this = desc;
        return 1;
    }

    // 0x100bf56d0
    SamplerState::SamplerState() : Desc() {}

    // 0x100bf56e0
    SamplerState::~SamplerState() {}

    // 0x100bf56f0
    void SamplerState::Destroy() {}

    // 0x100bf5700
    void SamplerState::ReleaseNativeResources() {}

} // namespace jag::render
