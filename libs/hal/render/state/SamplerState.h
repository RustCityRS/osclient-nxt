// libs/hal/render/state/SamplerState.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.hal.render

namespace jag::render {
    class SamplerState {
    public:
        class Desc;
        GetDesc() const;
        SamplerState* operator=(SamplerState const&);
        SamplerState();
        Create(Desc const&);
        ~SamplerState();
        void Destroy();
        void ReleaseNativeResources();

        // data members, from how the methods use this: 56 bytes
        undefined8 field_0; // offset 0
        char _unknown_8[4];
        undefined8 field_12; // offset 12
        undefined8 field_20; // offset 20
        char _unknown_28[20];
        undefined8 field_48; // offset 48
    };

    class SamplerState::Desc {
    public:
        byte operator!=(Desc const&) const;
        operator==(Desc const&) const;
        Desc();
        Desc* operator=(Desc const&);
        void SetToDefault();

        // data members, from how the methods use this: 60 bytes
        int field_0;         // offset 0
        int field_4;         // offset 4
        int field_8;         // offset 8
        int field_12;        // offset 12
        float field_16;      // offset 16
        float field_20;      // offset 20
        undefined4 field_24; // offset 24
        char _unknown_28[20];
        float field_48; // offset 48
        float field_52; // offset 52
        char _unknown_56[4];
    };

    // 0x100bcdc20, 32 bytes, inline, placed by class name and debug map
    // SamplerState::operator=(SamplerState const&)
    /* SamplerState::TEMPNAMEPLACEHOLDERVALUE(SamplerState const&) */

    SamplerState* SamplerState::operator=(SamplerState* param_1) {
        Desc::operator=((Desc*)this, (Desc*)param_1);
        return this;
    }

    // 0x100bcdff0, 16 bytes, inline, placed by class name and debug map
    // SamplerState::Desc::operator!=(SamplerState::Desc const&) const
    /* SamplerState::Desc::TEMPNAMEPLACEHOLDERVALUE(SamplerState::Desc const&)
   const */

    byte SamplerState::Desc::operator!=(Desc* param_1) {
        return operator==(this, param_1) ^ 1;
    }

    // 0x100bce000, 16 bytes, complete-object constructor, placed by debug map only (low confidence)
    // GLMinMagFilter::GLMinMagFilter(Filter): jumps straight to the base-object constructor

    // 0x100bd2160, 144 bytes, inline, placed by class name
    // SamplerState::Desc::operator==(SamplerState::Desc const&) const
    /* SamplerState::Desc::TEMPNAMEPLACEHOLDERVALUE(SamplerState::Desc const&)
   const */

    undefined8 SamplerState::Desc::operator==(Desc* param_1) {
        bool bVar1;
        undefined7 extraout_var;

        if ((((((field_0 == param_1->field_0) && (field_4 == param_1->field_4)) && (field_8 == param_1->field_8)) &&
              ((field_12 == param_1->field_12 && (field_16 == param_1->field_16)))) &&
             ((field_20 == param_1->field_20 &&
               ((field_24 == param_1->field_24 &&
                 (bVar1 = math::operator==((Vector4T*)&field_32, (Vector4T*)&param_1->field_32), bVar1)))))) &&
            (field_48 == param_1->field_48)) {
            return CONCAT71(extraout_var, field_52 == param_1->field_52);
        }
        return 0;
    }

    // 0x100bf3770, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // SamplerState::Desc::Desc(): jumps straight to the base-object constructor

    // 0x100bf3970, 64 bytes, inline, placed by class name and debug map
    // SamplerState::Desc::operator=(SamplerState::Desc const&)
    /* SamplerState::Desc::TEMPNAMEPLACEHOLDERVALUE(SamplerState::Desc const&)
    */

    Desc* SamplerState::Desc::operator=(Desc* param_1) {
        float fVar1;
        float fVar2;
        undefined4 uVar3;
        int iVar4;
        int iVar5;
        int iVar6;

        fVar1 = param_1->field_16;
        fVar2 = param_1->field_20;
        uVar3 = param_1->field_24;
        field_12 = param_1->field_12;
        field_16 = fVar1;
        field_20 = fVar2;
        field_24 = uVar3;
        iVar4 = param_1->field_4;
        iVar5 = param_1->field_8;
        iVar6 = param_1->field_12;
        field_0 = param_1->field_0;
        field_4 = iVar4;
        field_8 = iVar5;
        field_12 = iVar6;
        math::Rect<float>::operator=((Rect<float>*)&field_32, (Rect*)&param_1->field_32);
        fVar1 = param_1->field_52;
        field_48 = param_1->field_48;
        field_52 = fVar1;
        return this;
    }

    // 0x100bf8540, 48 bytes, base-object constructor, inline, placed by class name
    // SamplerState::Desc::Desc()
    void SamplerState::Desc::Desc() {
        new (&field_32) math::Vector4T<float>();
        SetToDefault(this);
    }

    // 0x100bf8570, 80 bytes, inline, placed by class name
    // SamplerState::Desc::SetToDefault()
    void SamplerState::Desc::SetToDefault() {
        field_0 = 7;
        field_4 = 33071;
        field_8 = 33071;
        field_12 = 33071;
        field_16 = 0.0;
        field_20 = 1.0;
        field_24 = 512;
        (&field_32, (Vector4T*)PTR_ZERO_100ee6708)->Set();
        field_48 = -3.4028235e+38;
        field_52 = 3.4028235e+38;
    }

} // namespace jag::render

namespace jag::fixedfunction {
    // 0x100bce3e0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Texture::ReleaseNativeResources(char const*)::$_11, void>(render::Texture::ReleaseNativeResources(char const*)::$_11&&): jumps straight to the base-object constructor

    // 0x100bce530, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::Texture::GenerateMipMaps()::$_12, void>(render::Texture::GenerateMipMaps()::$_12&&): jumps straight to the base-object constructor

} // namespace jag::fixedfunction
