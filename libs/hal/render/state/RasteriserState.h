// libs/hal/render/state/RasteriserState.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.hal.render

namespace jag::render {
    class RasteriserState {
    public:
        class Desc;
        GetDesc() const;
        RasteriserState();
        Create(Desc const&);
        void Destroy();
        ~RasteriserState();
        void ReleaseNativeResources();

        // data members, from how the methods use this: 33 bytes
        int field_0;        // offset 0
        undefined1 field_4; // offset 4
        char _unknown_5[3];
        undefined8 field_8; // offset 8
        char _unknown_16[1];
        undefined8 field_17; // offset 17
        undefined8 field_25; // offset 25
    };

    class RasteriserState::Desc {
    public:
        Desc();
        void SetToDefault();
        byte operator!=(Desc const&) const;
        operator==(Desc const&) const;

        // data members, from how the methods use this: 25 bytes
        int field_0;         // offset 0
        int field_4;         // offset 4
        float field_8;       // offset 8
        float field_12;      // offset 12
        float field_16;      // offset 16
        char field_20;       // offset 20
        char field_21;       // offset 21
        char field_22;       // offset 22
        char field_23;       // offset 23
        undefined1 field_24; // offset 24
    };

    // 0x100009d50: the linker folded this into eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second(), which has identical code
    RasteriserState::GetDesc() const;

    // 0x100bf3750, 16 bytes, complete-object constructor, placed by class name
    // RasteriserState::RasteriserState(): jumps straight to the base-object constructor

    // 0x100bf38d0, 32 bytes, placed by class name
    // RasteriserState::Create(RasteriserState::Desc const&)
    undefined1 RasteriserState::Create(Desc* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;

        uVar1 = *(undefined8*)param_1;
        uVar2 = *(undefined8*)&param_1->field_8;
        uVar3 = *(undefined8*)((long)&param_1->field_16 + 1);
        field_17 = *(undefined8*)((long)&param_1->field_8 + 1);
        field_25 = uVar3;
        field_8 = uVar1;
        *(undefined8*)&field_16 = uVar2;
        return 1;
    }

    // 0x100bf3900, 16 bytes, placed by class name
    // RasteriserState::Destroy()
    void RasteriserState::Destroy() {
        MarkAsDead();
    }

    // 0x100bf3920, 16 bytes, complete-object destructor, placed by class name
    // RasteriserState::~RasteriserState(): jumps straight to the base-object destructor

    // 0x100bf5660, 48 bytes, base-object constructor, placed by class name
    // RasteriserState::RasteriserState()
    void RasteriserState::RasteriserState() {
        new (this) RenderResource();
        new (&field_8) Desc();
    }

    // 0x100bf5690, 48 bytes, base-object destructor, placed by class name
    // RasteriserState::~RasteriserState()
    void RasteriserState::~RasteriserState() {
        Destroy(this);
        ~RenderResource();
    }

    // 0x100bf56c0, 16 bytes, placed by class name
    // RasteriserState::ReleaseNativeResources()
    void RasteriserState::ReleaseNativeResources() {}

    // 0x100c262f0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // RasteriserState::Desc::Desc(): jumps straight to the base-object constructor

    // 0x100c26610, 48 bytes, inline, placed by class name
    // RasteriserState::Desc::SetToDefault()
    void RasteriserState::Desc::SetToDefault() {
        field_0 = 6914;
        field_4 = 1028;
        field_8 = 0.0;
        field_12 = 0.0;
        field_16 = 1.0;
        field_20 = '\x01';
        field_21 = '\0';
        field_22 = '\x01';
        field_23 = '\0';
        field_24 = 0;
    }

    // 0x100c283d0, 16 bytes, inline, placed by class name
    // RasteriserState::Desc::operator!=(RasteriserState::Desc const&) const
    /* RasteriserState::Desc::TEMPNAMEPLACEHOLDERVALUE(RasteriserState::Desc
   const&) const */

    byte RasteriserState::Desc::operator!=(Desc* param_1) {
        return operator==(this, param_1) ^ 1;
    }

    // 0x100c32d30, 16 bytes, base-object constructor, inline, placed by class name
    // RasteriserState::Desc::Desc()
    void RasteriserState::Desc::Desc() {
        SetToDefault(this);
    }

    // 0x100c34f00, 112 bytes, inline, placed by class name
    // RasteriserState::Desc::operator==(RasteriserState::Desc const&) const
    /* RasteriserState::Desc::TEMPNAMEPLACEHOLDERVALUE(RasteriserState::Desc
   const&) const */

    undefined4 RasteriserState::Desc::operator==(Desc* param_1) {
        undefined4 uVar1;

        if ((((((field_0 == param_1->field_0) && (field_4 == param_1->field_4)) && (field_8 == param_1->field_8)) &&
              ((field_12 == param_1->field_12 && (field_16 == param_1->field_16)))) &&
             ((field_20 == param_1->field_20 &&
               ((field_21 == param_1->field_21 && (field_22 == param_1->field_22)))))) &&
            (field_23 == param_1->field_23)) {
            uVar1 = CONCAT31((int3)((uint)field_4 >> 8), field_24 == param_1->field_24);
        } else {
            uVar1 = 0;
        }
        return uVar1;
    }

} // namespace jag::render
