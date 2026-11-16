// libs/graphics/runetek7/particles/ModularParticleEmitter.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class ModularParticleEmitter {
    public:
        void GetParticles() const;
        void GetEmitterTemplate() const;
        bool IsEmitting() const;
        uint8_t* GetAABB() const;
        void SetEmitting(bool arg1);
        ~ModularParticleEmitter();
        ModularParticleEmitter(const ModularParticleEmitterTemplate& modularParticleEmitterTemplate);
        uint8_t Update(float arg1, const math::Matrix44T<float>& matrix441, const math::Matrix44T<float>& matrix442,
                       bool arg4);
        void TickModules(float arg1, float arg2, const math::Matrix44T<float>& matrix441,
                         const math::Matrix44T<float>& matrix442);
        void Restart();
        void SortParticles();
        uint64_t CalculateViewDistances(const math::Vector4T<float>& vector4);
        void TranslateParticles(const math::Vector3T<float>& vector3);
        void RenderDebug(const math::Matrix44T<float>& matrix44) const;
        void SetAtlasMaterialSettingsSlotXY(unsigned short arg1);
        ModularParticleEmitter(ModularParticleEmitter&& modularParticleEmitter);

    private:
        ModularParticleEmitterTemplate* field_0;
        unsigned short m_atlasMaterialSettingsSlotXY;
        uint16_t field_10;
        Callstack field_12;
        uint8_t _unknown_28[268];
    };

    // 0x1007f1a70
    ModularParticleEmitter::~ModularParticleEmitter() {
        ((field_12 + 12))->~ParticleData();
    }

    // 0x10082c0a0
    void ModularParticleEmitter::SetAtlasMaterialSettingsSlotXY(unsigned short arg1) {
        m_atlasMaterialSettingsSlotXY = arg1;
    }

    // 0x100850880
    ModularParticleEmitter::ModularParticleEmitter(ModularParticleEmitter&& modularParticleEmitter) {
        *(uint64_t*)(field_12 + 4) = *(uint64_t*)(modularParticleEmitter.field_12 + 4);
        unsigned short uVar1 = modularParticleEmitter.m_atlasMaterialSettingsSlotXY;
        uint16_t uVar2 = modularParticleEmitter.field_10;
        uint8_t uVar3 = modularParticleEmitter.field_12[0];
        uint8_t uVar4 = modularParticleEmitter.field_12[1];
        uint8_t uVar5 = modularParticleEmitter.field_12[2];
        uint8_t uVar6 = modularParticleEmitter.field_12[3];
        field_0 = modularParticleEmitter.field_0;
        m_atlasMaterialSettingsSlotXY = uVar1;
        field_10 = uVar2;
        field_12[0] = uVar3;
        field_12[1] = uVar4;
        field_12[2] = uVar5;
        field_12[3] = uVar6;
        new ((field_12 + 12)) ParticleData(*((modularParticleEmitter.field_12 + 12)));
        new (&field_288) math::AABB(modularParticleEmitter.field_288);
    }

} // namespace jag::graphics
