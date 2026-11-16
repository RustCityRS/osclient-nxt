// libs/ui/components/ComponentBehaviourConfigs.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::ui {
    class ComponentOpConfig {
    public:
        void SetTargetVerb(const char* str);
        void SetOpBaseName(const char* str);
        void Decode(PacketT<Array<unsigned char>>& arg1, int arg2);
        uint8_t* GetOpName(int arg1) const;
        void SetOpName(int arg1, const char* str);
        uint32_t GetOpCursor(int arg1) const;
        void SetOpCursor(int arg1, int arg2);
        ComponentOpConfig();
        ~ComponentOpConfig();

    private:
        uint8_t _unknown_0[136];
        uint16_t field_136;
        uint8_t _unknown_138[6];
    };

} // namespace jag::ui
