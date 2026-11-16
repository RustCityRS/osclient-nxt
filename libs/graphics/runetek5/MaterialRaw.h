// libs/graphics/runetek5/MaterialRaw.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class MaterialRaw {
    public:
        IsValid() const;
        MaterialRaw();
        void Decode(int, PacketT<Array<unsigned char, eastl::allocator>>&);
        void DecodeRT5(PacketT<Array<unsigned char, eastl::allocator>>&);
        void DecodeRT7(PacketT<Array<unsigned char, eastl::allocator>>&);
        SizeCodeToSize(unsigned int);
        float AnimationSpeedUnpackValue(short);
        int AnimationSpeedPackValue(float);

        // data members, from how the methods use this: 232 bytes
        undefined1 field_0; // offset 0
        char _unknown_1[3];
        int field_4;  // offset 4
        char field_8; // offset 8
        char _unknown_9[3];
        undefined4 field_12; // offset 12
        byte field_16;       // offset 16
        byte field_17;       // offset 17
        byte field_18;       // offset 18
        byte field_19;       // offset 19
        char field_20;       // offset 20
        char _unknown_21[3];
        undefined4 field_24; // offset 24
        undefined4 field_28; // offset 28
        byte field_32;       // offset 32
        bool field_33;       // offset 33
        char _unknown_34[2];
        undefined4 field_36; // offset 36
        undefined1 field_40; // offset 40
        char _unknown_41[3];
        int field_44;        // offset 44
        int field_48;        // offset 48
        undefined4 field_52; // offset 52
        bool field_56;       // offset 56
        char _unknown_57[3];
        uint field_60;       // offset 60
        bool field_64;       // offset 64
        bool field_65;       // offset 65
        undefined1 field_66; // offset 66
        undefined1 field_67; // offset 67
        uint field_68;       // offset 68
        byte field_72;       // offset 72
        char _unknown_73[3];
        int field_76;         // offset 76
        int field_80;         // offset 80
        int field_84;         // offset 84
        undefined4 field_88;  // offset 88
        undefined4 field_92;  // offset 92
        undefined4 field_96;  // offset 96
        undefined4 field_100; // offset 100
        undefined4 field_104; // offset 104
        undefined4 field_108; // offset 108
        undefined4 field_112; // offset 112
        undefined4 field_116; // offset 116
        undefined* field_120; // offset 120
        undefined4 field_128; // offset 128
        undefined4 field_132; // offset 132
        undefined4 field_136; // offset 136
        undefined4 field_140; // offset 140
        char _unknown_144[16];
        byte field_160; // offset 160
        byte field_161; // offset 161
        byte field_162; // offset 162
        char _unknown_163[1];
        undefined4 field_164; // offset 164
        undefined4 field_168; // offset 168
        undefined4 field_172; // offset 172
        undefined4 field_176; // offset 176
        undefined4 field_180; // offset 180
        undefined* field_184; // offset 184
        undefined* field_192; // offset 192
        uint field_200;       // offset 200
        char _unknown_204[4];
        undefined* field_208; // offset 208
        undefined* field_216; // offset 216
        undefined2 field_224; // offset 224
        byte field_226;       // offset 226
        byte field_227;       // offset 227
        char _unknown_228[4];
    };

} // namespace jag::graphics
