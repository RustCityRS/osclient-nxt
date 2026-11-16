// libs/hal/render/state/BlendState.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

#include "BlendState.h"

namespace jag::render {
    // 0x100009d50: BlendState::GetDesc() const has the same machine code as eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second()

    // 0x100bf2b60
    BlendState::BlendState() : RenderResource() {}

    // 0x100bf2ba0
    BlendState::~BlendState() {
        Destroy();
    }

    // 0x100bf2bd0
    void BlendState::Destroy() {
        MarkAsDead();
    }

    // 0x100bf2bf0
    uint64_t BlendState::Create(const BlendState::Desc& desc) {
        field_72 = *(uint32_t*)&desc[5].field_4;
        uint64_t uVar2 = *(uint64_t*)desc;
        uint64_t uVar3 = *(uint64_t*)&desc.field_8;
        uint64_t uVar4 = *(uint64_t*)&desc[1].field_4;
        uint64_t uVar5 = *(uint64_t*)(desc + 2);
        uint64_t uVar6 = *(uint64_t*)&desc[2].field_8;
        uint64_t uVar7 = *(uint64_t*)&desc[3].field_4;
        uint64_t uVar8 = *(uint64_t*)&desc[4].field_8;
        field_56 = *(uint64_t*)(desc + 4);
        field_64 = uVar8;
        field_40 = uVar6;
        field_48 = uVar7;
        field_24 = uVar4;
        field_32 = uVar5;
        field_8 = uVar2;
        field_16 = uVar3;
        return 1;
    }

    // 0x100bf2c20
    void BlendState::ReleaseNativeResources() {}

} // namespace jag::render
