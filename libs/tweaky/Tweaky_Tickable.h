// libs/tweaky/Tweaky_Tickable.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::tweak {
    class Tickable {
    public:
        // virtual methods in vtable order
        virtual ~Tickable();
        virtual void ResetToDefault();
        virtual void Draw(int arg1, int arg2);
        virtual unsigned long GetControlSize(int& arg1, int& arg2);
        virtual void __pure_slot_6() = 0;
        virtual void __pure_slot_8() = 0;
        virtual void InitDefault();
        virtual bool IsTicked() const;
        virtual void SetTicked(bool arg1);
        virtual uint64_t LoadSettings(const TweakSettingsValue& tweakSettingsValue);
        virtual void SaveSettings(TweakSettingsValue& tweakSettingsValue);
        Tickable(int arg1, int arg2, Control::Type arg3, const eastl::string& str, bool arg5);

    private:
        uint8_t _unknown_8[16];
        int field_24;
        int field_28;
        Type field_32;
        unsigned int field_36;
        unsigned int field_40;
        uint8_t _unknown_44[92];
        int field_136;
        int field_140;
        int field_144;
        int field_148;
        uint8_t _unknown_152[8];
        Event field_160;
        uint8_t _unknown_184[24];
        bool field_208;
        char field_209;
        bool field_210;
        bool m_ticked;
        bool field_212;
    };

    // 0x100a514d0
    void Tickable::InitDefault() {
        *(char*)&field_212 = field_211;
    }

    // 0x100a514f0
    bool Tickable::IsTicked() const {
        return m_ticked;
    }

    // 0x100a51500
    void Tickable::SetTicked(bool arg1) {
        m_ticked = arg1;
    }

    // 0x100a55140
    Tickable::Tickable(int arg1, int arg2, Control::Type arg3, const eastl::string& str, bool arg5)
        : Control(arg1, arg2, arg3, str), m_ticked(arg5), field_212(arg5) {}

} // namespace jag::tweak
