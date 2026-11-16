// libs/game/runetek5/config/effectanimtype/EffectAnimType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class EffectAnimType {
    public:
        // virtual methods in vtable order
        virtual ~EffectAnimType();
        virtual DecodeType(PacketT<Array<unsigned char, eastl::allocator>>&, unsigned int);
        virtual PostDecode();
        GetSeqID() const;
        GetRotation() const;
        GetObeyExtraSeqSettings() const;
        bool ShouldHillRotate() const;
        CastsShadows() const;
        shared_ptr* GetModel(DataStatus const*&, graphics::RT7Core*);
        EffectAnimType(BaseTemplateConfigTypeList<EffectAnimType>*, int);

        // data members, from how the methods use this: 194 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[16];
        BaseTemplateConfigTypeList* field_24; // offset 24
        int field_32;                         // offset 32
        char _unknown_36[20];
        undefined4 field_56; // offset 56
        undefined4 field_60; // offset 60
        char _unknown_64[96];
        float field_160;                   // offset 160
        float field_164;                   // offset 164
        undefined4 field_168;              // offset 168
        undefined1 m_obeyExtraSeqSettings; // offset 172
        char _unknown_173[3];
        undefined4 field_176; // offset 176
        uint field_180;       // offset 180
        undefined1 field_184; // offset 184
        char _unknown_185[1];
        short field_186; // offset 186
        char _unknown_188[6];
    };

    // 0x1003f8580, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // EffectAnimType::GetRotation() const
    /* input::Input::GetMouseX() const */

    float input::Input::GetMouseX() {
        return m_mouseX;
    }

    // 0x1003f8590, 16 bytes, inline, placed by class name and debug map
    // EffectAnimType::GetObeyExtraSeqSettings() const
    undefined1 EffectAnimType::GetObeyExtraSeqSettings() {
        return m_obeyExtraSeqSettings;
    }

    // 0x1003f8ef0, 16 bytes, inline, placed by class name and debug map
    // EffectAnimType::ShouldHillRotate() const
    bool EffectAnimType::ShouldHillRotate() {
        return field_176 == 3;
    }

    // 0x1003f9260, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // EffectAnimType::CastsShadows() const
    /* graphics::AnimationParameters::GetPaused() const */

    undefined1 graphics::AnimationParameters::GetPaused() {
        return m_paused;
    }

    // 0x10054ff50, 32 bytes, deleting destructor, inline, placed by class name
    // EffectAnimType::~EffectAnimType()
    void EffectAnimType::~EffectAnimType() {
        ~EffectAnimType(this);
        operator_delete(this);
    }

    // 0x1005e56f0, 16 bytes, complete-object destructor, inline, placed by class name
    // EffectAnimType::~EffectAnimType(): jumps straight to the base-object destructor

    // 0x1005e5700, 80 bytes, base-object destructor, inline, placed by class name
    // EffectAnimType::~EffectAnimType()
    void EffectAnimType::~EffectAnimType() {
        field_0 = &PTR__EffectAnimType_100f04218;
        (&field_136)->~Array();
        (&field_112)->~Array();
        (&field_88)->~Array();
        (&field_64)->~Array();
        ~ConfigType();
    }

    // 0x1005e5950, 16 bytes, complete-object constructor, inline, placed by class name
    // EffectAnimType::EffectAnimType(BaseTemplateConfigTypeList<EffectAnimType>*, int): jumps straight to the base-object constructor

    // 0x1005e5960, 240 bytes, base-object constructor, inline, placed by class name
    // EffectAnimType::EffectAnimType(BaseTemplateConfigTypeList<EffectAnimType>*, int)
    void EffectAnimType::EffectAnimType(BaseTemplateConfigTypeList* param_1, int param_2) {
        new (this) ConfigType<EffectAnimType>(param_1, param_2);
        new (this) MakeSharedPool<EffectAnimType, 256>();
        field_0 = &PTR__EffectAnimType_100f04218;
        field_60 = 4294967295;
        new (&field_64) Array<unsigned short, eastl::allocator>();
        new (&field_88) Array<unsigned short, eastl::allocator>();
        new (&field_112) Array<unsigned short, eastl::allocator>();
        new (&field_136) Array<unsigned short, eastl::allocator>();
        field_160 = 1.0;
        field_164 = 1.0;
        field_168 = 0;
        m_obeyExtraSeqSettings = 0;
        field_176 = 0;
        field_184 = 1;
        field_186 = 64;
    }

} // namespace jag::game
