// libs/graphics/runetek5/ParticleEmitterRaw.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class ParticleEmitterRaw {
    public:
        void Decode(int arg1, PacketT<Array<unsigned char>>& arg2);
        void PostDecode();
        void CorrectMinMaxValues<int>(int& arg1, int& arg2) const;
        void CorrectMinMaxValues<float>(float& arg1, float& arg2) const;
        ParticleEmitterRaw(const ParticleEmitterRaw& particleEmitterRaw);
        ~ParticleEmitterRaw();
        ParticleEmitterRaw();

    private:
        int field_0;
        uint8_t _unknown_4[4];
        float field_8;
        float field_12;
        float field_16;
        float field_20;
        unsigned int field_24;
        int field_28;
        int field_32;
        unsigned int field_36;
        int field_40;
        uint32_t field_44;
        unsigned int field_48;
        unsigned int field_52;
        unsigned int field_56;
        unsigned int field_60;
        unsigned int field_64;
        uint32_t field_68;
        uint32_t field_72;
        uint8_t field_76;
        uint8_t _unknown_77[3];
        uint32_t field_80;
        unsigned int field_84;
        unsigned int field_88;
        unsigned int field_92;
        unsigned int field_96;
        unsigned int field_100;
        unsigned int field_104;
        int field_108;
        int field_112;
        unsigned int field_116;
        bool field_120;
        bool field_121;
        uint8_t _unknown_122[2];
        unsigned int field_124;
        unsigned int field_128;
        unsigned int field_132;
        uint8_t field_136;
        uint8_t field_137;
        uint8_t _unknown_138[2];
        float field_140;
        float field_144;
        unsigned int field_148;
        uint8_t field_152;
        uint8_t field_153;
        uint8_t field_154;
        uint8_t field_155;
        unsigned int field_156;
        float field_160;
        float field_164;
        uint8_t _unknown_168[56];
    };

    // 0x10097d8d0
    void ParticleEmitterRaw::CorrectMinMaxValues<int>(int& arg1, int& arg2) const {
        if (arg2 < arg1) {
            std::swap<int>(arg1, arg2);
        }
    }

    // 0x10097d8f0
    void ParticleEmitterRaw::CorrectMinMaxValues<float>(float& arg1, float& arg2) const {
        if (arg2 <= arg1 && arg1 != arg2) {
            std::swap<float>(arg1, arg2);
        }
    }

    // 0x10099af70
    ParticleEmitterRaw::~ParticleEmitterRaw() {
        field_216.~Array();
        field_192.~Array();
        field_168.~Array();
    }

    // 0x10099afc0
    ParticleEmitterRaw::ParticleEmitterRaw() : field_20(0.0), field_24(0), field_28(0), field_32(0) {
        *(uint64_t*)&field_4 = 0;
        field_12 = 0.0;
        field_16 = 0.0;
        field_36 = 0;
        field_40 = 0;
        field_44 = 4294967295;
        field_48 = 100;
        field_52 = 0;
        field_56 = 0;
        field_60 = 4294967295;
        field_64 = 100;
        field_68 = 0;
        field_72 = 0;
        field_76 = 1;
        field_80 = 4294967295;
        field_84 = 100;
        field_88 = 100;
        field_92 = 0;
        field_96 = 0;
        field_100 = 0;
        field_104 = 0;
        field_108 = -2;
        field_112 = -2;
        field_116 = 0;
        field_120 = true;
        field_121 = true;
        field_124 = 4294967295;
        field_128 = 4294967295;
        field_132 = 0;
        field_136 = 1;
        field_137 = 0;
        field_140 = 0.0;
        field_144 = 0.0;
        field_148 = 0;
        field_152 = 1;
        field_153 = 0;
        field_154 = 1;
        field_155 = 0;
        field_156 = 4294967295;
        field_160 = 0.0;
        field_164 = 0.0;
        new (&field_168) Array<unsigned int>();
        new (&field_192) Array<unsigned int>();
        new (&field_216) Array<unsigned int>();
    }

    // 0x10099b0d0
    ParticleEmitterRaw::ParticleEmitterRaw(const ParticleEmitterRaw& particleEmitterRaw) {
        _memcpy(this, particleEmitterRaw, 168);
        new (&field_168) Array<unsigned int>(&particleEmitterRaw.field_168);
        new (&field_192) Array<unsigned int>(&particleEmitterRaw.field_192);
        new (&field_216) Array<unsigned int>(&particleEmitterRaw.field_216);
    }

} // namespace jag::graphics
