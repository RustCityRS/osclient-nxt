// libs/graphics/runetek5/MaterialRaw.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class MaterialRaw {
    public:
        bool IsValid() const;
        MaterialRaw();
        void Decode(int arg1, PacketT<Array<unsigned char>>& arg2);
        void DecodeRT5(PacketT<Array<unsigned char>>& arg1);
        void DecodeRT7(PacketT<Array<unsigned char>>& arg1);
        uint32_t SizeCodeToSize(unsigned int arg1);
        float AnimationSpeedUnpackValue(short arg1);
        int AnimationSpeedPackValue(float arg1);

    private:
        uint8_t m_valid;
        uint8_t _unknown_1[3];
        int field_4;
        char field_8;
        uint8_t _unknown_9[3];
        uint32_t field_12;
        uint8_t field_16;
        uint8_t field_17;
        uint8_t field_18;
        uint8_t field_19;
        char field_20;
        uint8_t _unknown_21[3];
        uint32_t field_24;
        uint32_t field_28;
        uint8_t field_32;
        bool field_33;
        uint8_t _unknown_34[2];
        uint32_t field_36;
        uint8_t field_40;
        uint8_t _unknown_41[3];
        int field_44;
        int field_48;
        uint32_t field_52;
        bool field_56;
        uint8_t _unknown_57[3];
        unsigned int field_60;
        bool field_64;
        bool field_65;
        uint8_t field_66;
        uint8_t field_67;
        unsigned int field_68;
        uint8_t field_72;
        uint8_t _unknown_73[3];
        int field_76;
        int field_80;
        int field_84;
        uint32_t field_88;
        uint32_t field_92;
        uint32_t field_96;
        uint32_t field_100;
        uint32_t field_104;
        uint32_t field_108;
        uint32_t field_112;
        uint32_t field_116;
        uint8_t* field_120;
        uint32_t field_128;
        uint32_t field_132;
        uint32_t field_136;
        uint32_t field_140;
        uint8_t _unknown_144[16];
        uint8_t field_160;
        uint8_t field_161;
        uint8_t field_162;
        uint8_t _unknown_163[1];
        uint32_t field_164;
        uint32_t field_168;
        uint32_t field_172;
        uint32_t field_176;
        uint32_t field_180;
        uint8_t* field_184;
        uint8_t* field_192;
        unsigned int field_200;
        uint8_t _unknown_204[4];
        uint8_t* field_208;
        uint8_t* field_216;
        uint16_t field_224;
        uint8_t field_226;
        uint8_t field_227;
        uint8_t _unknown_228[4];
    };

} // namespace jag::graphics
