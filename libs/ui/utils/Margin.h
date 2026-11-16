// libs/ui/utils/Margin.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::ui {
    class Margin {
    public:
        begin();
        end();
        Margin(PacketT<Array<unsigned char, eastl::allocator>>&);
        void ApplyTo(int&, int&, int&, int&) const;
        bool Valid() const;
        GetValidOr(Margin const&) const;
        void LoadFromStylesheet(StyleEntryID, StyleSheet const&);
        Margin(unsigned char);
        char GetHeight() const;
        char GetWidth() const;
        Margin();
        void GetValidOr(unsigned char) const;

        // data members, from how the methods use this: 4 bytes
        byte field_0; // offset 0
        byte field_1; // offset 1
        byte field_2; // offset 2
        byte field_3; // offset 3
    };

    // 0x100676fb0, 48 bytes, inline, placed by class name and debug map
    // Margin::Valid() const
    bool Margin::Valid() {
        if (((field_0 == 255) || (field_1 == 255)) || (field_2 == 255)) {
            return false;
        }
        return field_3 != 255;
    }

    // 0x100688ed0, 16 bytes, complete-object constructor, inline, placed by class name
    // Margin::Margin(unsigned char): jumps straight to the base-object constructor

    // 0x10068cb10, 32 bytes, inline, placed by class name
    // Margin::GetHeight() const
    char Margin::GetHeight() {
        byte bVar1;
        byte bVar2;

        bVar1 = field_1;
        if (field_1 == 255) {
            bVar1 = 0;
        }
        bVar2 = field_3;
        if (field_3 == 255) {
            bVar2 = 0;
        }
        return bVar2 + bVar1;
    }

    // 0x10068ec30, 32 bytes, inline, placed by class name
    // Margin::GetWidth() const
    char Margin::GetWidth() {
        byte bVar1;
        byte bVar2;

        bVar1 = field_0;
        if (field_0 == 255) {
            bVar1 = 0;
        }
        bVar2 = field_2;
        if (field_2 == 255) {
            bVar2 = 0;
        }
        return bVar2 + bVar1;
    }

    // 0x1006910b0, 16 bytes, complete-object constructor, inline, placed by class name
    // Margin::Margin(): jumps straight to the base-object constructor

    // 0x1006a7370, 48 bytes, inline, placed by class name
    // Margin::GetValidOr(unsigned char) const
    void Margin::GetValidOr(uchar param_1) {
        Margin local_20[2];

        Margin(local_20, param_1);
        GetValidOr(this, local_20);
    }

    // 0x1006af760, 16 bytes, base-object constructor, inline, placed by class name
    // Margin::Margin(unsigned char)
    void Margin::Margin(uchar param_1) {
        undefined3 in_register_00000031;

        *this = (Margin)(CONCAT31(in_register_00000031, param_1) * 16843009);
    }

} // namespace jag::ui
