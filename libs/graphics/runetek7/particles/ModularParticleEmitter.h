// libs/graphics/runetek7/particles/ModularParticleEmitter.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class ModularParticleEmitter {
    public:
        GetParticles() const;
        GetEmitterTemplate() const;
        IsEmitting() const;
        GetAABB() const;
        void SetEmitting(bool);
        ~ModularParticleEmitter();
        ModularParticleEmitter(ModularParticleEmitterTemplate const&);
        Update(float, math::Matrix44T<float> const&, math::Matrix44T<float> const&, bool);
        void TickModules(float, float, math::Matrix44T<float> const&, math::Matrix44T<float> const&);
        void Restart();
        void SortParticles();
        CalculateViewDistances(math::Vector4T<float> const&);
        void TranslateParticles(math::Vector3T<float> const&);
        void RenderDebug(math::Matrix44T<float> const&) const;
        void SetAtlasMaterialSettingsSlotXY(unsigned short);
        ModularParticleEmitter(ModularParticleEmitter&&);

        // data members, from how the methods use this: 296 bytes
        ModularParticleEmitterTemplate* field_0; // offset 0
        ushort m_atlasMaterialSettingsSlotXY;    // offset 8
        undefined2 field_10;                     // offset 10
        Callstack field_12;                      // offset 12
        char _unknown_28[268];
    };

    // 0x1007f1a60, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // ModularParticleEmitter::~ModularParticleEmitter(): jumps straight to the base-object destructor

    // 0x1007f1a70, 16 bytes, base-object destructor, inline, placed by class name and debug map
    // ModularParticleEmitter::~ModularParticleEmitter()
    void ModularParticleEmitter::~ModularParticleEmitter() {
        ((field_12 + 12))->~ParticleData();
    }

    // 0x10082c0a0, 16 bytes, inline, placed by class name
    // ModularParticleEmitter::SetAtlasMaterialSettingsSlotXY(unsigned short)
    void ModularParticleEmitter::SetAtlasMaterialSettingsSlotXY(ushort param_1) {
        m_atlasMaterialSettingsSlotXY = param_1;
    }

    // 0x100850860, 16 bytes, complete-object constructor, inline, placed by class name
    // ModularParticleEmitter::ModularParticleEmitter(ModularParticleEmitter&&): jumps straight to the base-object constructor

    // 0x100850880, 112 bytes, base-object constructor, inline, placed by class name
    // ModularParticleEmitter::ModularParticleEmitter(ModularParticleEmitter&&)
    void ModularParticleEmitter::ModularParticleEmitter(ModularParticleEmitter* param_1) {
        ushort uVar1;
        undefined2 uVar2;
        undefined1 uVar3;
        undefined1 uVar4;
        undefined1 uVar5;
        undefined1 uVar6;

        *(undefined8*)(field_12 + 4) = *(undefined8*)(param_1->field_12 + 4);
        uVar1 = param_1->m_atlasMaterialSettingsSlotXY;
        uVar2 = param_1->field_10;
        uVar3 = param_1->field_12[0];
        uVar4 = param_1->field_12[1];
        uVar5 = param_1->field_12[2];
        uVar6 = param_1->field_12[3];
        field_0 = param_1->field_0;
        m_atlasMaterialSettingsSlotXY = uVar1;
        field_10 = uVar2;
        field_12[0] = uVar3;
        field_12[1] = uVar4;
        field_12[2] = uVar5;
        field_12[3] = uVar6;
        new ((field_12 + 12), (ParticleData*)(param_1->field_12 + 12)) ParticleData();
        new (&field_288, (AABB*)&param_1->field_288) math::AABB();
    }

} // namespace jag::graphics
