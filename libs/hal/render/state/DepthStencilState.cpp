// libs/hal/render/state/DepthStencilState.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

#include "DepthStencilState.h"

namespace jag::render {
    // 0x100009d50: the linker folded this into eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second(), which has identical code
    DepthStencilState::GetDesc() const;

    // 0x100bf3740, 16 bytes, complete-object constructor, placed by class name and debug map
    // DepthStencilState::DepthStencilState(): jumps straight to the base-object constructor

    // 0x100bf38a0, 48 bytes, placed by class name
    // DepthStencilState::Create(DepthStencilState::Desc const&)
    undefined8 DepthStencilState::Create(Desc* param_1) {
        float fVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;

        fVar1 = param_1[1].field_4;
        field_56 = fVar1;
        uVar2 = *(undefined8*)param_1;
        uVar3 = *(undefined8*)&param_1->field_8;
        uVar4 = *(undefined8*)&param_1->field_16;
        uVar5 = *(undefined8*)&param_1->field_24;
        uVar6 = *(undefined8*)&param_1->field_40;
        field_40 = *(undefined8*)&param_1->field_32;
        field_48 = uVar6;
        field_24 = uVar4;
        field_32 = uVar5;
        field_8 = uVar2;
        field_16 = uVar3;
        return CONCAT71((uint7)(uint3)((uint)fVar1 >> 8), 1);
    }

    // 0x100bf3940, 16 bytes, complete-object destructor, placed by class name
    // DepthStencilState::~DepthStencilState(): jumps straight to the base-object destructor

    // 0x100bf4160, 48 bytes, base-object constructor, placed by class name
    // DepthStencilState::DepthStencilState()
    void DepthStencilState::DepthStencilState() {
        new (this) RenderResource();
        new (&field_8) Desc();
    }

    // 0x100bf4190, 48 bytes, base-object destructor, placed by class name
    // DepthStencilState::~DepthStencilState()
    void DepthStencilState::~DepthStencilState() {
        Destroy(this);
        ~RenderResource();
    }

    // 0x100bf41c0, 16 bytes, placed by class name
    // DepthStencilState::Destroy()
    void DepthStencilState::Destroy() {
        MarkAsDead();
    }

    // 0x100bf41d0, 16 bytes, placed by class name
    // DepthStencilState::ReleaseNativeResources()
    void DepthStencilState::ReleaseNativeResources() {}

} // namespace jag::render
