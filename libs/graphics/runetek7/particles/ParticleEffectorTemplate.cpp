// libs/graphics/runetek7/particles/ParticleEffectorTemplate.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "ParticleEffectorTemplate.h"

namespace jag::graphics {
    // 0x1007c9d90
    void ParticleEffectorTemplate::Initialise(int arg1, const ParticleEffectorRaw& particleEffectorRaw) {
        bool cVar1;

        field_0 = arg1;
        field_4.SetXYZ(particleEffectorRaw.field_16);
        float fVar3 = (float)field_4.Length();
        field_16 = fVar3;
        field_32 = particleEffectorRaw.field_36;
        field_36 = particleEffectorRaw.field_40;
        field_40 = particleEffectorRaw.field_28;
        fVar3 = particleEffectorRaw.field_8;
        field_24 = fVar3;
        float local_24 = 0.0;
        math::SinCos(&local_24, &field_28, fVar3);
        if (particleEffectorRaw.field_32 == 0) {
            fVar3 = 1.0;
        } else {
            fVar3 = (float)(int)particleEffectorRaw.field_32;
        }
        field_44 = fVar3;
        int iVar2 = field_40;
        if (iVar2 == 2) {
            fVar3 = (field_16 * 8.0) / fVar3;
        } else {
            if (iVar2 != 1) {
                if (iVar2 == 0) {
                    field_20 = 3.4028235e+38;
                    cVar1 = particleEffectorRaw.field_44;
                } else {
                    (logger::default_logger())
                        ->Log(false, 2,
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "particles/ParticleEffectorTemplate.cpp",
                              47, "ParticleEffectorTemplate: Unrecognised falloff type: %i", field_40);
                    cVar1 = particleEffectorRaw.field_44;
                }
                goto joined_r0x0001007c9eba;
            }
            fVar3 = (field_16 * 8.0) / fVar3;
            fVar3 = fVar3 * fVar3;
        }
        field_20 = fVar3;
        cVar1 = particleEffectorRaw.field_44;
    joined_r0x0001007c9eba:
        if (cVar1) {
            field_16 = -field_16;
        }
    }

} // namespace jag::graphics
