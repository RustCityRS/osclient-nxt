// libs/hal/render/state/BlendState.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

#include "BlendState.h"

namespace jag::render {
    // 0x100009d50: the linker folded this into eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second(), which has identical code
    BlendState::GetDesc() const;

    // 0x100bf2b60, 48 bytes, base-object constructor, placed by class name and debug map
    // BlendState::BlendState()
    void BlendState::BlendState() {
        new (this) RenderResource();
        new (&field_8) Desc();
    }

    // 0x100bf2b90, 16 bytes, complete-object constructor, placed by class name and debug map
    // BlendState::BlendState(): jumps straight to the base-object constructor

    // 0x100bf2ba0, 48 bytes, base-object destructor, placed by class name and debug map
    // BlendState::~BlendState()
    void BlendState::~BlendState() {
        Destroy(this);
        ~RenderResource();
    }

    // 0x100bf2bd0, 16 bytes, placed by class name and debug map
    // BlendState::Destroy()
    void BlendState::Destroy() {
        MarkAsDead();
    }

    // 0x100bf2be0, 16 bytes, complete-object destructor, placed by class name and debug map
    // BlendState::~BlendState(): jumps straight to the base-object destructor

    // 0x100bf2bf0, 48 bytes, placed by class name and debug map
    // BlendState::Create(BlendState::Desc const&)
    undefined8 BlendState::Create(Desc* param_1) {
        undefined4 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        undefined8 uVar8;

        uVar1 = *(undefined4*)&param_1[5].field_4;
        field_72 = uVar1;
        uVar2 = *(undefined8*)param_1;
        uVar3 = *(undefined8*)&param_1->field_8;
        uVar4 = *(undefined8*)&param_1[1].field_4;
        uVar5 = *(undefined8*)(param_1 + 2);
        uVar6 = *(undefined8*)&param_1[2].field_8;
        uVar7 = *(undefined8*)&param_1[3].field_4;
        uVar8 = *(undefined8*)&param_1[4].field_8;
        field_56 = *(undefined8*)(param_1 + 4);
        field_64 = uVar8;
        field_40 = uVar6;
        field_48 = uVar7;
        field_24 = uVar4;
        field_32 = uVar5;
        field_8 = uVar2;
        field_16 = uVar3;
        return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8), 1);
    }

    // 0x100bf2c20, 16 bytes, placed by class name and debug map
    // BlendState::ReleaseNativeResources()
    void BlendState::ReleaseNativeResources() {}

} // namespace jag::render
