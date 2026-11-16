// libs/graphics/runetek5/ParticleEmitterRaw.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class ParticleEmitterRaw {
    public:
        void Decode(int, PacketT<Array<unsigned char, eastl::allocator>>&);
        void PostDecode();
        void CorrectMinMaxValues<int>(int&, int&) const;
        void CorrectMinMaxValues<float>(float&, float&) const;
        ParticleEmitterRaw(ParticleEmitterRaw const&);
        ~ParticleEmitterRaw();
        ParticleEmitterRaw();

        // data members, from how the methods use this: 224 bytes
        int field_0; // offset 0
        char _unknown_4[4];
        float field_8;       // offset 8
        float field_12;      // offset 12
        float field_16;      // offset 16
        float field_20;      // offset 20
        uint field_24;       // offset 24
        int field_28;        // offset 28
        int field_32;        // offset 32
        uint field_36;       // offset 36
        int field_40;        // offset 40
        undefined4 field_44; // offset 44
        uint field_48;       // offset 48
        uint field_52;       // offset 52
        uint field_56;       // offset 56
        uint field_60;       // offset 60
        uint field_64;       // offset 64
        undefined4 field_68; // offset 68
        undefined4 field_72; // offset 72
        undefined1 field_76; // offset 76
        char _unknown_77[3];
        undefined4 field_80; // offset 80
        uint field_84;       // offset 84
        uint field_88;       // offset 88
        uint field_92;       // offset 92
        uint field_96;       // offset 96
        uint field_100;      // offset 100
        uint field_104;      // offset 104
        int field_108;       // offset 108
        int field_112;       // offset 112
        uint field_116;      // offset 116
        bool field_120;      // offset 120
        bool field_121;      // offset 121
        char _unknown_122[2];
        uint field_124;       // offset 124
        uint field_128;       // offset 128
        uint field_132;       // offset 132
        undefined1 field_136; // offset 136
        undefined1 field_137; // offset 137
        char _unknown_138[2];
        float field_140;      // offset 140
        float field_144;      // offset 144
        uint field_148;       // offset 148
        undefined1 field_152; // offset 152
        undefined1 field_153; // offset 153
        undefined1 field_154; // offset 154
        undefined1 field_155; // offset 155
        uint field_156;       // offset 156
        float field_160;      // offset 160
        float field_164;      // offset 164
        char _unknown_168[56];
    };

    // 0x10097d8d0, 32 bytes, inline, placed by class name and debug map
    // void ParticleEmitterRaw::CorrectMinMaxValues<int>(int&, int&) const
    void ParticleEmitterRaw::CorrectMinMaxValues<int>(int* param_1, int* param_2) {
        if (*param_2 < *param_1) {
            std::swap<int>(param_1, param_2);
        }
    }

    // 0x10097d8f0, 32 bytes, inline, placed by class name and debug map
    // void ParticleEmitterRaw::CorrectMinMaxValues<float>(float&, float&) const
    void ParticleEmitterRaw::CorrectMinMaxValues<float>(float* param_1, float* param_2) {
        if (*param_2 <= *param_1 && *param_1 != *param_2) {
            std::swap<float>(param_1, param_2);
        }
    }

    // 0x10099af10, 16 bytes, complete-object constructor, inline, placed by class name
    // ParticleEmitterRaw::ParticleEmitterRaw(ParticleEmitterRaw const&): jumps straight to the base-object constructor

    // 0x10099af60, 16 bytes, complete-object destructor, inline, placed by class name
    // ParticleEmitterRaw::~ParticleEmitterRaw(): jumps straight to the base-object destructor

    // 0x10099af70, 64 bytes, base-object destructor, inline, placed by class name
    // ParticleEmitterRaw::~ParticleEmitterRaw()
    void ParticleEmitterRaw::~ParticleEmitterRaw() {
        (&field_216)->~Array();
        (&field_192)->~Array();
        (&field_168)->~Array();
    }

    // 0x10099afb0, 16 bytes, complete-object constructor, inline, placed by class name
    // ParticleEmitterRaw::ParticleEmitterRaw(): jumps straight to the base-object constructor

    // 0x10099afc0, 272 bytes, base-object constructor, inline, placed by class name
    // ParticleEmitterRaw::ParticleEmitterRaw()
    void ParticleEmitterRaw::ParticleEmitterRaw() {
        field_20 = 0.0;
        field_24 = 0;
        field_28 = 0;
        field_32 = 0;
        *(undefined8*)&field_4 = 0;
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
        new (&field_168) Array<unsigned int, eastl::allocator>();
        new (&field_192) Array<unsigned int, eastl::allocator>();
        new (&field_216) Array<unsigned int, eastl::allocator>();
    }

    // 0x10099b0d0, 144 bytes, base-object constructor, inline, placed by class name
    // ParticleEmitterRaw::ParticleEmitterRaw(ParticleEmitterRaw const&)
    void ParticleEmitterRaw::ParticleEmitterRaw(ParticleEmitterRaw* param_1) {
        _memcpy(this, param_1, 168);
        new (&field_168, (Array*)&param_1->field_168) Array<unsigned int, eastl::allocator>();
        new (&field_192, (Array*)&param_1->field_192) Array<unsigned int, eastl::allocator>();
        new (&field_216, (Array*)&param_1->field_216) Array<unsigned int, eastl::allocator>();
    }

} // namespace jag::graphics
