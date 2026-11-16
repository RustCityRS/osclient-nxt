// libs/hal/render/state/DepthStencilState.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::render {
    class DepthStencilState {
    public:
        class Desc;
        GetDesc() const;
        DepthStencilState();
        Create(Desc const&);
        ~DepthStencilState();
        void Destroy();
        void ReleaseNativeResources();

        // data members, from how the methods use this: 64 bytes
        int field_0;        // offset 0
        undefined1 field_4; // offset 4
        char _unknown_5[3];
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
        undefined8 field_40; // offset 40
        undefined8 field_48; // offset 48
        undefined4 field_56; // offset 56
        char _unknown_60[4];
    };

    class DepthStencilState::Desc {
    public:
        Desc();
        void SetToDefault();
        byte operator!=(Desc const&) const;
        operator==(Desc const&) const;

        // data members, from how the methods use this: 44 bytes
        char field_0;  // offset 0
        char field_1;  // offset 1
        char field_2;  // offset 2
        char field_3;  // offset 3
        float field_4; // offset 4
        float field_8; // offset 8
        int field_12;  // offset 12
        char field_16; // offset 16
        char field_17; // offset 17
        char field_18; // offset 18
        char _unknown_19[25];
    };

    // 0x100c262e0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // DepthStencilState::Desc::Desc(): jumps straight to the base-object constructor

    // 0x100c265f0, 32 bytes, inline, placed by class name
    // DepthStencilState::Desc::SetToDefault()
    void DepthStencilState::Desc::SetToDefault() {
        field_0 = '\x01';
        field_1 = '\x01';
        field_2 = '\x01';
        field_3 = '\0';
        field_4 = 0.0;
        field_8 = 1.0;
        field_12 = 513;
        field_16 = '\0';
        field_17 = -1;
        field_18 = -1;
        field_19 = 0;
    }

    // 0x100c283c0, 16 bytes, inline, placed by class name
    // DepthStencilState::Desc::operator!=(DepthStencilState::Desc const&) const
    /* DepthStencilState::Desc::TEMPNAMEPLACEHOLDERVALUE(DepthStencilState::Desc
   const&) const */

    byte DepthStencilState::Desc::operator!=(Desc* param_1) {
        return operator==(this, param_1) ^ 1;
    }

    // 0x100c32cd0, 48 bytes, base-object constructor, inline, placed by class name
    // DepthStencilState::Desc::Desc()
    void DepthStencilState::Desc::Desc() {
        new (&field_20) StencilOpDesc();
        new (&field_36) StencilOpDesc();
        SetToDefault(this);
    }

    // 0x100c34e60, 160 bytes, inline, placed by class name
    // DepthStencilState::Desc::operator==(DepthStencilState::Desc const&) const
    /* DepthStencilState::Desc::TEMPNAMEPLACEHOLDERVALUE(DepthStencilState::Desc
   const&) const */

    undefined8 DepthStencilState::Desc::operator==(Desc* param_1) {
        char cVar1;
        undefined8 uVar2;

        if ((((((field_0 == param_1->field_0) && (field_1 == param_1->field_1)) && (field_2 == param_1->field_2)) &&
              ((field_3 == param_1->field_3 && (field_4 == param_1->field_4)))) &&
             ((field_8 == param_1->field_8 && ((field_12 == param_1->field_12 && (field_16 == param_1->field_16)))))) &&
            ((field_17 == param_1->field_17 &&
              ((field_18 == param_1->field_18 &&
                (cVar1 = StencilOpDesc::operator==((StencilOpDesc*)&field_20, (StencilOpDesc*)&param_1->field_20),
                 cVar1 != '\0')))))) {
            uVar2 = StencilOpDesc::operator==((StencilOpDesc*)&field_36, (StencilOpDesc*)&param_1->field_36);
            return uVar2;
        }
        return 0;
    }

} // namespace jag::render
