// libs/hal/render/state/SamplerState.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

#include "SamplerState.h"

namespace jag::render {
    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    SamplerState::GetDesc() const;

    // 0x100bf3730, 16 bytes, complete-object constructor, placed by class name and debug map
    // SamplerState::SamplerState(): jumps straight to the base-object constructor

    // 0x100bf3780, 16 bytes, placed by class name
    // SamplerState::Create(SamplerState::Desc const&)
    undefined1 SamplerState::Create(Desc* param_1) {
        Desc::operator=((Desc*)this, param_1);
        return 1;
    }

    // 0x100bf3950, 16 bytes, complete-object destructor, placed by class name
    // SamplerState::~SamplerState(): jumps straight to the base-object destructor

    // 0x100bf56d0, 16 bytes, base-object constructor, placed by class name
    // SamplerState::SamplerState()
    void SamplerState::SamplerState() {
        new (this) Desc();
    }

    // 0x100bf56e0, 16 bytes, base-object destructor, placed by class name
    // SamplerState::~SamplerState()
    void SamplerState::~SamplerState() {}

    // 0x100bf56f0, 16 bytes, placed by class name
    // SamplerState::Destroy()
    void SamplerState::Destroy() {}

    // 0x100bf5700, 16 bytes, placed by class name
    // SamplerState::ReleaseNativeResources()
    void SamplerState::ReleaseNativeResources() {}

} // namespace jag::render
