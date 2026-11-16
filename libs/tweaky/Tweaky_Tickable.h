// libs/tweaky/Tweaky_Tickable.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::tweak {
    class Tickable {
    public:
        // virtual methods in vtable order
        virtual ~Tickable();
        virtual ResetToDefault();
        virtual void Draw(int, int);
        virtual ulong GetControlSize(int&, int&);
        virtual void __pure_slot_6() = 0;
        virtual void __pure_slot_8() = 0;
        virtual void InitDefault();
        virtual IsTicked() const;
        virtual void SetTicked(bool);
        virtual LoadSettings(TweakSettingsValue const&);
        virtual void SaveSettings(TweakSettingsValue&);
        Tickable(int, int, Control::Type, eastl::string const&, bool);

        // data members, from how the methods use this: 213 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[16];
        int field_24; // offset 24
        int field_28; // offset 28
        char _unknown_32[4];
        uint field_36; // offset 36
        uint field_40; // offset 40
        char _unknown_44[92];
        int field_136; // offset 136
        int field_140; // offset 140
        int field_144; // offset 144
        int field_148; // offset 148
        char _unknown_152[8];
        Event field_160; // offset 160
        char _unknown_184[24];
        undefined1 field_208; // offset 208
        char _unknown_209[2];
        bool m_ticked;        // offset 211
        undefined1 field_212; // offset 212
    };

    // 0x100a514d0, 32 bytes, inline, placed by class name and debug map
    // Tickable::InitDefault()
    /* RadioButton::InitDefault() */

    void RadioButton::InitDefault() {
        *(char*)&field_212 = field_211;
    }

    // 0x100a514f0, 16 bytes, inline, placed by class name and debug map
    // Tickable::IsTicked() const
    undefined1 Tickable::IsTicked() {
        return m_ticked;
    }

    // 0x100a51500, 16 bytes, inline, placed by class name and debug map
    // Tickable::SetTicked(bool)
    void Tickable::SetTicked(bool param_1) {
        m_ticked = param_1;
    }

    // 0x100a55140, 48 bytes, base-object constructor, inline, placed by class name
    // Tickable::Tickable(int, int, Control::Type, eastl::string const&, bool)
    void Tickable::Tickable() {
        bool in_R9B;

        Control::Control();
        field_0 = &PTR__OptionStore_100f1da00;
        m_ticked = in_R9B;
        field_212 = in_R9B;
    }

} // namespace jag::tweak
