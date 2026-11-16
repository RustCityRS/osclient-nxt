// libs/ui/utils/Margin.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::ui {
    class Margin {
    public:
        void begin();
        Vector2T<int>* end();
        Margin(PacketT<Array<unsigned char>>& arg1);
        void ApplyTo(int& arg1, int& arg2, int& arg3, int& arg4) const;
        bool Valid() const;
        Margin GetValidOr(const Margin& margin) const;
        void LoadFromStylesheet(StyleEntryID styleEntryID, const StyleSheet& styleSheet);
        Margin(unsigned char arg1);
        char GetHeight() const;
        char GetWidth() const;
        Margin();
        void GetValidOr(unsigned char arg1) const;

    private:
        uint8_t field_0;
        uint8_t field_1;
        uint8_t field_2;
        uint8_t field_3;
    };

    // 0x100676fb0
    bool Margin::Valid() const {
        if (((field_0 == 255) || (field_1 == 255)) || (field_2 == 255)) {
            return false;
        }
        return field_3 != 255;
    }

    // 0x10068cb10
    char Margin::GetHeight() const {
        uint8_t bVar1 = field_1;
        if (field_1 == 255) {
            bVar1 = 0;
        }
        uint8_t bVar2 = field_3;
        if (field_3 == 255) {
            bVar2 = 0;
        }
        return bVar2 + bVar1;
    }

    // 0x10068ec30
    char Margin::GetWidth() const {
        uint8_t bVar1 = field_0;
        if (field_0 == 255) {
            bVar1 = 0;
        }
        uint8_t bVar2 = field_2;
        if (field_2 == 255) {
            bVar2 = 0;
        }
        return bVar2 + bVar1;
    }

    // 0x1006a7370
    void Margin::GetValidOr(unsigned char arg1) const {
        Margin local_20;

        Margin(&local_20, arg1);
        GetValidOr(&local_20);
    }

    // 0x1006af760
    Margin::Margin(unsigned char arg1) {
        uint32_t in_register_00000031;

        *this = (Margin)((((uint32_t)in_register_00000031 << 8) | (uint8_t)arg1) * 16843009);
    }

} // namespace jag::ui
