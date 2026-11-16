// libs/hal/render/state/BlendState.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.hal.render

namespace jag::render {
    class BlendState {
    public:
        class Desc;
        GetDesc() const;
        BlendState();
        ~BlendState();
        void Destroy();
        Create(Desc const&);
        void ReleaseNativeResources();

        // data members, from how the methods use this: 80 bytes
        int field_0;        // offset 0
        undefined1 field_4; // offset 4
        char _unknown_5[3];
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
        undefined8 field_40; // offset 40
        undefined8 field_48; // offset 48
        undefined8 field_56; // offset 56
        undefined8 field_64; // offset 64
        undefined4 field_72; // offset 72
        char _unknown_76[4];
    };

    class BlendState::Desc {
    public:
        Desc();
        void SetToDefault();
        byte operator!=(Desc const&) const;
        bool operator==(Desc const&) const;

        // data members, from how the methods use this: 12 bytes
        char field_0; // offset 0
        char field_1; // offset 1
        char _unknown_2[10];
    };

    // 0x100c26300, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // BlendState::Desc::Desc(): jumps straight to the base-object constructor

    // 0x100c26640, 80 bytes, inline, placed by class name and debug map
    // BlendState::Desc::SetToDefault()
    void BlendState::Desc::SetToDefault() {
        RenderTargetBlendDesc* this_00;
        RenderTargetBlendDesc* pRVar1;

        field_0 = '\0';
        field_1 = '\0';
        this_00 = (RenderTargetBlendDesc*)(&field_4)->begin();
        pRVar1 = (RenderTargetBlendDesc*)(&field_4)->end();
        for (; this_00 != pRVar1; this_00 = this_00 + 1) {
            this_00->SetToDefault();
        }
    }

    // 0x100c26940, 16 bytes, placed by debug map only (low confidence)
    // RenderContextStateCache::ValidateBoundFBO() const
    void RenderContextStateCache::ValidateBoundFBO() {}

    // 0x100c283e0, 16 bytes, inline, placed by class name
    // BlendState::Desc::operator!=(BlendState::Desc const&) const
    /* BlendState::Desc::TEMPNAMEPLACEHOLDERVALUE(BlendState::Desc const&)
   const */

    byte BlendState::Desc::operator!=(Desc* param_1) {
        return operator==(this, param_1) ^ 1;
    }

    // 0x100c32d40, 48 bytes, base-object constructor, inline, placed by class name
    // BlendState::Desc::Desc()
    void BlendState::Desc::Desc() {
        new (&field_4) std::array<RenderTargetBlendDesc, 2ul>();
        SetToDefault(this);
    }

    // 0x100c34f70, 48 bytes, inline, placed by class name
    // BlendState::Desc::operator==(BlendState::Desc const&) const
    /* BlendState::Desc::TEMPNAMEPLACEHOLDERVALUE(BlendState::Desc const&)
   const */

    bool BlendState::Desc::operator==(Desc* param_1) {
        if ((field_0 == param_1->field_0) && (field_1 == param_1->field_1)) {
            return std::operator==((array*)&field_4, (array*)&param_1->field_4);
        }
        return false;
    }

} // namespace jag::render
