// libs/graphics/runetek7/particles/ParticleEmitterTemplate.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class ParticleEmitterTemplate {
    public:
        void GetRandomLifetime() const;
        void GetRandomSpeed() const;
        void GetRandomSize() const;
        uint GetRandomRGBA() const;
        void GetRandomRotationRate() const;
        ulong GetRandomRotationSpawn() const;
        void GetRandomEmissionRate() const;
        void Initialise(int, ParticleEmitterRaw const&);
        ~ParticleEmitterTemplate();
        ParticleEmitterTemplate(ParticleEmitterTemplate&&);
        ParticleEmitterTemplate();

        // data members, from how the methods use this: 288 bytes
        int field_0;         // offset 0
        undefined4 field_4;  // offset 4
        undefined4 field_8;  // offset 8
        undefined4 field_12; // offset 12
        undefined4 field_16; // offset 16
        float field_20;      // offset 20
        float field_24;      // offset 24
        undefined4 field_28; // offset 28
        float field_32;      // offset 32
        float field_36;      // offset 36
        float field_40;      // offset 40
        float field_44;      // offset 44
        uint field_48;       // offset 48
        uint field_52;       // offset 52
        int field_56;        // offset 56
        float field_60;      // offset 60
        float field_64;      // offset 64
        float field_68;      // offset 68
        float field_72;      // offset 72
        uint field_76;       // offset 76
        float field_80;      // offset 80
        uint field_84;       // offset 84
        undefined1 field_88; // offset 88
        char _unknown_89[3];
        uint field_92;        // offset 92
        uint field_96;        // offset 96
        uint field_100;       // offset 100
        undefined4 field_104; // offset 104
        undefined1 field_108; // offset 108
        undefined1 field_109; // offset 109
        undefined1 field_110; // offset 110
        char _unknown_111[1];
        undefined1 field_112; // offset 112
        char _unknown_113[3];
        float field_116;      // offset 116
        float field_120;      // offset 120
        float field_124;      // offset 124
        float field_128;      // offset 128
        float field_132;      // offset 132
        undefined4 field_136; // offset 136
        undefined4 field_140; // offset 140
        undefined1 field_144; // offset 144
        char _unknown_145[3];
        uint field_148; // offset 148
        uint field_152; // offset 152
        uint field_156; // offset 156
        uint field_160; // offset 160
        uint field_164; // offset 164
        uint field_168; // offset 168
        uint field_172; // offset 172
        uint field_176; // offset 176
        uint field_180; // offset 180
        uint field_184; // offset 184
        uint field_188; // offset 188
        uint field_192; // offset 192
        char _unknown_196[12];
        float field_208; // offset 208
        float field_212; // offset 212
        float field_216; // offset 216
        uint field_220;  // offset 220
        float field_224; // offset 224
        float field_228; // offset 228
        char _unknown_232[56];
    };

    // 0x1007cb180, 32 bytes, inline, placed by class name and debug map
    // ParticleEmitterTemplate::GetRandomLifetime() const
    void ParticleEmitterTemplate::GetRandomLifetime() {
        math::FRandMT(field_32, field_36);
    }

    // 0x1007cb1a0, 32 bytes, inline, placed by class name and debug map
    // ParticleEmitterTemplate::GetRandomSpeed() const
    void ParticleEmitterTemplate::GetRandomSpeed() {
        math::FRandMT(field_40, field_44);
    }

    // 0x1007cb1c0, 32 bytes, inline, placed by class name and debug map
    // ParticleEmitterTemplate::GetRandomSize() const
    void ParticleEmitterTemplate::GetRandomSize() {
        math::FRandMT(field_64, field_68);
    }

    // 0x1007cb2f0, 32 bytes, inline, placed by class name
    // ParticleEmitterTemplate::GetRandomRotationRate() const
    void ParticleEmitterTemplate::GetRandomRotationRate() {
        math::FRandMT(field_116, field_120);
    }

    // 0x1007cb580, 32 bytes, inline, placed by class name
    // ParticleEmitterTemplate::GetRandomEmissionRate() const
    void ParticleEmitterTemplate::GetRandomEmissionRate() {
        math::FRandMT(field_20, field_24);
    }

    // 0x1007ec170, 16 bytes, complete-object destructor, inline, placed by class name
    // ParticleEmitterTemplate::~ParticleEmitterTemplate(): jumps straight to the base-object destructor

    // 0x1007ec180, 64 bytes, base-object destructor, inline, placed by class name
    // ParticleEmitterTemplate::~ParticleEmitterTemplate()
    void ParticleEmitterTemplate::~ParticleEmitterTemplate() {
        (&field_280)->~Array();
        (&field_256)->~Array();
        (&field_232)->~Array();
    }

    // 0x1007f1bc0, 16 bytes, complete-object constructor, inline, placed by class name
    // ParticleEmitterTemplate::ParticleEmitterTemplate(ParticleEmitterTemplate&&): jumps straight to the base-object constructor

    // 0x1007f1bd0, 16 bytes, complete-object constructor, inline, placed by class name
    // ParticleEmitterTemplate::ParticleEmitterTemplate(): jumps straight to the base-object constructor

    // 0x1007f1be0, 288 bytes, base-object constructor, inline, placed by class name
    // ParticleEmitterTemplate::ParticleEmitterTemplate()
    void ParticleEmitterTemplate::ParticleEmitterTemplate() {
        field_0 = -1;
        field_4 = 0;
        field_8 = 0;
        field_12 = 0;
        field_16 = 0;
        field_20 = 0.0;
        field_24 = 0.0;
        field_28 = 0;
        field_32 = 0.0;
        field_32 = 0.0;
        field_36 = 0.0;
        field_40 = 0.0;
        field_44 = 0.0;
        field_48 = 8388608;
        field_52 = 8388608;
        field_56 = 0;
        field_60 = 0.0;
        field_64 = 0.0;
        field_68 = 0.0;
        field_72 = 1.1754944e-38;
        field_76 = 8388608;
        field_80 = 0.0;
        field_84 = 0;
        field_88 = 1;
        field_92 = 0;
        field_96 = 8388608;
        field_100 = 8388608;
        field_104 = 4294967295;
        field_108 = 1;
        field_109 = 1;
        field_110 = 0;
        field_111 = 0;
        field_112 = 0;
        field_116 = 0.0;
        field_120 = 0.0;
        field_124 = 0.0;
        field_128 = 0.0;
        field_132 = 0.0;
        field_136 = 4294967294;
        field_140 = 4294967294;
        field_144 = 1;
        field_148 = 0;
        field_152 = 0;
        field_156 = 0;
        field_160 = 0;
        field_164 = 0;
        field_168 = 0;
        field_172 = 0;
        field_176 = 0;
        field_180 = 0;
        field_184 = 0;
        field_188 = 0;
        field_192 = 0;
        new (&field_208, 1.1754944e-38, 1.1754944e-38, 1.1754944e-38, 1.1754944e-38) ImVec4();
        field_224 = 1.1754944e-38;
        field_228 = 0.0;
        new (&field_232) Array<unsigned int, eastl::allocator>();
        new (&field_256) Array<unsigned int, eastl::allocator>();
        new (&field_280) Array<unsigned int, eastl::allocator>();
    }

    // 0x1007f1d00, 96 bytes, base-object constructor, inline, placed by class name
    // ParticleEmitterTemplate::ParticleEmitterTemplate(ParticleEmitterTemplate&&)
    void ParticleEmitterTemplate::ParticleEmitterTemplate(ParticleEmitterTemplate* param_1) {
        _memcpy(this, param_1, 232);
        new (&field_232, (Array*)&param_1->field_232) Array<unsigned int, eastl::allocator>();
        new (&field_256, (Array*)&param_1->field_256) Array<unsigned int, eastl::allocator>();
        new (&field_280, (Array*)&param_1->field_280) Array<unsigned int, eastl::allocator>();
    }

} // namespace jag::graphics
