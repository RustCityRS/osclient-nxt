// libs/graphics/runetek7/particles/ParticleSOASort.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "ParticleSOASort.h"
#include "Particle.h"

namespace jag::graphics::helpers {
    // 0x1007d0c30
    ParticleDataValueProxy::ParticleDataValueProxy(unsigned long arg1, ParticleData* particleData) {
        ParticleVertexDataProxy<ParticleData::PositionTimeData>* particleVertexDataProxy;
        ParticleVertexData<math::Vector2T<float> _>* particleVertexData;

        field_20.ParticleVertexDataProxy<>();
        new (&field_84) ParticleVertexData<math::Vector2T<float>>();
        field_116.ParticleVertexDataProxy<>();
        field_164.ParticleVertexDataProxy<>();
        field_180.ParticleVertexDataProxy<>();
        field_196.ParticleVertexDataProxy<>();
        uint32_t* puVar2 = (uint32_t*)(*particleData)[arg1];
        field_0 = *puVar2;
        puVar2 = (uint32_t*)particleData->field_24[arg1];
        field_4 = *puVar2;
        puVar2 = (uint32_t*)particleData->field_48[arg1];
        field_8 = *puVar2;
        puVar2 = (uint32_t*)particleData->field_72[arg1];
        field_12 = *puVar2;
        puVar2 = (uint32_t*)particleData->field_96[arg1];
        field_16 = *puVar2;
        particleVertexDataProxy =
            (ParticleVertexDataProxy<ParticleData::PositionTimeData>*)particleData->field_120[arg1];
        field_20 = *particleVertexDataProxy;
        particleVertexData = (ParticleVertexData<math::Vector2T<float> _>*)particleData->field_144[arg1];
        field_84 = *particleVertexData;
        Matrix43T<float>* matrix43 = &particleData->field_168[arg1];
        field_116 = *matrix43;
        uint64_t* puVar3 = &particleData->field_192[arg1];
        uint64_t uVar1 = puVar3[1];
        field_164 = *puVar3;
        field_172 = uVar1;
        puVar3 = &particleData->field_216[arg1];
        uVar1 = puVar3[1];
        field_180 = *puVar3;
        field_188 = uVar1;
        puVar3 = &particleData->field_240[arg1];
        uVar1 = puVar3[1];
        field_196 = *puVar3;
        field_204 = uVar1;
    }

} // namespace jag::graphics::helpers
