// libs/graphics/runetek7/particles/ParticleEmitterTemplate.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class ParticleEmitterTemplate {
    public:
        void GetRandomLifetime() const;
        void GetRandomSpeed() const;
        void GetRandomSize() const;
        unsigned int GetRandomRGBA() const;
        void GetRandomRotationRate() const;
        unsigned long GetRandomRotationSpawn() const;
        void GetRandomEmissionRate() const;
        void Initialise(int arg1, const ParticleEmitterRaw& particleEmitterRaw);
        ~ParticleEmitterTemplate();
        ParticleEmitterTemplate(ParticleEmitterTemplate&& particleEmitterTemplate);
        ParticleEmitterTemplate();

    private:
        int field_0;
        uint32_t field_4;
        uint32_t field_8;
        uint32_t field_12;
        uint32_t field_16;
        float field_20;
        float field_24;
        uint32_t field_28;
        float field_32;
        float field_36;
        float field_40;
        float field_44;
        unsigned int field_48;
        unsigned int field_52;
        int field_56;
        float field_60;
        float field_64;
        float field_68;
        float field_72;
        unsigned int field_76;
        float field_80;
        unsigned int field_84;
        uint8_t field_88;
        uint8_t _unknown_89[3];
        unsigned int field_92;
        unsigned int field_96;
        unsigned int field_100;
        uint32_t field_104;
        uint8_t field_108;
        uint8_t field_109;
        uint8_t field_110;
        uint8_t _unknown_111[1];
        uint8_t field_112;
        uint8_t _unknown_113[3];
        float field_116;
        float field_120;
        float field_124;
        float field_128;
        float field_132;
        uint32_t field_136;
        uint32_t field_140;
        uint8_t field_144;
        uint8_t _unknown_145[3];
        unsigned int field_148;
        unsigned int field_152;
        unsigned int field_156;
        unsigned int field_160;
        unsigned int field_164;
        unsigned int field_168;
        unsigned int field_172;
        unsigned int field_176;
        unsigned int field_180;
        unsigned int field_184;
        unsigned int field_188;
        unsigned int field_192;
        uint8_t _unknown_196[12];
        float field_208;
        float field_212;
        float field_216;
        unsigned int field_220;
        float field_224;
        float field_228;
        uint8_t _unknown_232[56];
    };

    // 0x1007cb180
    void ParticleEmitterTemplate::GetRandomLifetime() const {
        math::FRandMT(field_32, field_36);
    }

    // 0x1007cb1a0
    void ParticleEmitterTemplate::GetRandomSpeed() const {
        math::FRandMT(field_40, field_44);
    }

    // 0x1007cb1c0
    void ParticleEmitterTemplate::GetRandomSize() const {
        math::FRandMT(field_64, field_68);
    }

    // 0x1007cb2f0
    void ParticleEmitterTemplate::GetRandomRotationRate() const {
        math::FRandMT(field_116, field_120);
    }

    // 0x1007cb580
    void ParticleEmitterTemplate::GetRandomEmissionRate() const {
        math::FRandMT(field_20, field_24);
    }

    // 0x1007ec180
    ParticleEmitterTemplate::~ParticleEmitterTemplate() {
        field_280.~Array();
        field_256.~Array();
        field_232.~Array();
    }

    // 0x1007f1be0
    ParticleEmitterTemplate::ParticleEmitterTemplate()
        : field_0(-1), field_4(0), field_8(0), field_12(0), field_16(0), field_20(0.0), field_24(0.0), field_28(0),
          field_32(0.0), field_32(0.0), field_36(0.0), field_40(0.0), field_44(0.0), field_48(8388608),
          field_52(8388608), field_56(0), field_60(0.0), field_64(0.0), field_68(0.0), field_72(1.1754944e-38),
          field_76(8388608), field_80(0.0), field_84(0), field_88(1), field_92(0), field_96(8388608),
          field_100(8388608), field_104(4294967295), field_108(1), field_109(1), field_110(0), field_111(0),
          field_112(0), field_116(0.0), field_120(0.0), field_124(0.0), field_128(0.0), field_132(0.0),
          field_136(4294967294), field_140(4294967294), field_144(1), field_148(0), field_152(0), field_156(0),
          field_160(0), field_164(0), field_168(0), field_172(0), field_176(0), field_180(0), field_184(0),
          field_188(0), field_192(0), field_208(1.1754944e-38, 1.1754944e-38, 1.1754944e-38, 1.1754944e-38),
          field_224(1.1754944e-38), field_228(0.0) {}

    // 0x1007f1d00
    ParticleEmitterTemplate::ParticleEmitterTemplate(ParticleEmitterTemplate&& particleEmitterTemplate) {
        _memcpy(this, particleEmitterTemplate, 232);
        new (&field_232) Array<unsigned int>(&particleEmitterTemplate.field_232);
        new (&field_256) Array<unsigned int>(&particleEmitterTemplate.field_256);
        new (&field_280) Array<unsigned int>(&particleEmitterTemplate.field_280);
    }

} // namespace jag::graphics
