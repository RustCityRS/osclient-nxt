// libs/graphics/runetek7/particles/ParticleEffectorTemplate.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "ParticleEffectorTemplate.h"

namespace jag::graphics {
    // 0x1007c9d90, 304 bytes, placed by class name and debug map
    // ParticleEffectorTemplate::Initialise(int, ParticleEffectorRaw const&)
    void ParticleEffectorTemplate::Initialise(int param_1, ParticleEffectorRaw* param_2) {
        char cVar1;
        int iVar2;
        undefined8 uVar3;
        float fVar4;
        float local_24;

        field_0 = param_1;
        (&field_4, (Vector3T*)&param_2->field_16)->SetXYZ();
        fVar4 = (float)(&field_4)->Length();
        field_16 = fVar4;
        field_32 = param_2->field_36;
        field_36 = param_2->field_40;
        field_40 = param_2->field_28;
        fVar4 = param_2->field_8;
        field_24 = fVar4;
        local_24 = 0.0;
        math::SinCos(&local_24, &field_28, fVar4);
        if (param_2->field_32 == 0) {
            fVar4 = 1.0;
        } else {
            fVar4 = (float)(int)param_2->field_32;
        }
        field_44 = fVar4;
        iVar2 = field_40;
        if (iVar2 == 2) {
            fVar4 = (field_16 * 8.0) / fVar4;
        } else {
            if (iVar2 != 1) {
                if (iVar2 == 0) {
                    field_20 = 3.4028235e+38;
                    cVar1 = param_2->field_44;
                } else {
                    uVar3 = logger::default_logger();
                    logger::Logger::Log(uVar3, 0, 2,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "graphics/runetek7/particles/ParticleEffectorTemplate.cpp",
                                        47, "ParticleEffectorTemplate: Unrecognised falloff type: %i", field_40);
                    cVar1 = param_2->field_44;
                }
                goto joined_r0x0001007c9eba;
            }
            fVar4 = (field_16 * 8.0) / fVar4;
            fVar4 = fVar4 * fVar4;
        }
        field_20 = fVar4;
        cVar1 = param_2->field_44;
    joined_r0x0001007c9eba:
        if (cVar1 != '\0') {
            field_16 = -field_16;
        }
    }

} // namespace jag::graphics
