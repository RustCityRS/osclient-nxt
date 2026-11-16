// libs/hal/render/state/DepthStencilState.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

#include "DepthStencilState.h"

namespace jag::render {
    // 0x100009d50: DepthStencilState::GetDesc() const has the same machine code as eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second()

    // 0x100bf38a0
    uint64_t DepthStencilState::Create(const DepthStencilState::Desc& desc) {
        field_56 = *(uint32_t*)(desc.field_36 + 12);
        uint64_t uVar2 = *(uint64_t*)desc;
        uint64_t uVar3 = *(uint64_t*)&desc.field_8;
        uint64_t uVar4 = *(uint64_t*)&desc.field_16;
        uint64_t uVar5 = *(uint64_t*)&desc.field_24;
        uint64_t uVar6 = *(uint64_t*)(desc.field_36 + 4);
        field_40 = *(uint64_t*)&desc.field_32;
        field_48 = uVar6;
        field_24 = uVar4;
        field_32 = uVar5;
        field_8 = uVar2;
        field_16 = uVar3;
        return 1;
    }

    // 0x100bf4160
    DepthStencilState::DepthStencilState() : RenderResource() {}

    // 0x100bf4190
    DepthStencilState::~DepthStencilState() {
        Destroy();
    }

    // 0x100bf41c0
    void DepthStencilState::Destroy() {
        MarkAsDead();
    }

    // 0x100bf41d0
    void DepthStencilState::ReleaseNativeResources() {}

} // namespace jag::render
