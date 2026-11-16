// libs/graphics/runetek7/particles/ParticleSOASort.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "ParticleSOASort.h"
#include "Particle.h"

namespace jag::graphics::helpers {
    // 0x1007d0c30, 368 bytes, base-object constructor, placed by debug map only (low confidence)
    // ParticleDataValueProxy::ParticleDataValueProxy(unsigned long, ParticleData*)
    void ParticleDataValueProxy::ParticleDataValueProxy(ulong param_1, ParticleData* param_2) {
        undefined8 uVar1;
        undefined4* puVar2;
        ParticleVertexDataProxy* pPVar3;
        ParticleVertexData* pPVar4;
        undefined8* puVar5;

        ParticleVertexDataProxy<ParticleData::PositionTimeData>::ParticleVertexDataProxy<>(
            (ParticleVertexDataProxy<ParticleData::PositionTimeData>*)&field_20);
        new (&field_84) ParticleVertexData<math::Vector2T<float>>();
        ParticleVertexDataProxy<math::Vector3T<float>>::ParticleVertexDataProxy<>(
            (ParticleVertexDataProxy<math::Vector3T<float>>*)&field_116);
        ParticleVertexDataProxy<math::ColourStorage8888<math::ABGR8StorageLayout>>::ParticleVertexDataProxy<>(
            (ParticleVertexDataProxy<math::ColourStorage8888<math::ABGR8StorageLayout>>*)&field_164);
        ParticleVertexDataProxy<ParticleData::MaterialSlotRotationData>::ParticleVertexDataProxy<>(
            (ParticleVertexDataProxy<ParticleData::MaterialSlotRotationData>*)&field_180);
        ParticleVertexDataProxy<ParticleData::UVAnimationData>::ParticleVertexDataProxy<>(
            (ParticleVertexDataProxy<ParticleData::UVAnimationData>*)&field_196);
        puVar2 = (undefined4*)eastl::vector<float, SafeBucketAllocatorEASTL>::operator[](
            (vector<float, SafeBucketAllocatorEASTL>*)param_2, param_1);
        field_0 = *puVar2;
        puVar2 = (undefined4*)eastl::vector<float, SafeBucketAllocatorEASTL>::operator[](
            (vector<float, SafeBucketAllocatorEASTL>*)&param_2->field_24, param_1);
        field_4 = *puVar2;
        puVar2 = (undefined4*)eastl::vector<float, SafeBucketAllocatorEASTL>::operator[](
            (vector<float, SafeBucketAllocatorEASTL>*)&param_2->field_48, param_1);
        field_8 = *puVar2;
        puVar2 = (undefined4*)eastl::vector<float, SafeBucketAllocatorEASTL>::operator[](
            (vector<float, SafeBucketAllocatorEASTL>*)&param_2->field_72, param_1);
        field_12 = *puVar2;
        puVar2 = (undefined4*)eastl::vector<float, SafeBucketAllocatorEASTL>::operator[](
            (vector<float, SafeBucketAllocatorEASTL>*)&param_2->field_96, param_1);
        field_16 = *puVar2;
        pPVar3 = (ParticleVertexDataProxy*)eastl::
            vector<ParticleVertexDataProxy<ParticleData::PositionTimeData>, SafeBucketAllocatorEASTL>::operator[](
                (vector<ParticleVertexDataProxy<ParticleData::PositionTimeData>, SafeBucketAllocatorEASTL>*)&param_2
                    ->field_120,
                param_1);
        ParticleVertexDataProxy<ParticleData::PositionTimeData>::operator=(
            (ParticleVertexDataProxy<ParticleData::PositionTimeData>*)&field_20, pPVar3);
        pPVar4 = (ParticleVertexData*)
            eastl::vector<ParticleVertexData<math::Vector2T<float>>, SafeBucketAllocatorEASTL>::operator[](
                (vector<ParticleVertexData<math::Vector2T<float>>, SafeBucketAllocatorEASTL>*)&param_2->field_144,
                param_1);
        ParticleVertexData<math::Vector2T<float>>::operator=((ParticleVertexData<math::Vector2T<float>>*)&field_84,
                                                             pPVar4);
        pPVar3 = (ParticleVertexDataProxy*)
            eastl::vector<ParticleVertexDataProxy<math::Vector3T<float>>, SafeBucketAllocatorEASTL>::operator[](
                (vector<ParticleVertexDataProxy<math::Vector3T<float>>, SafeBucketAllocatorEASTL>*)&param_2->field_168,
                param_1);
        ParticleVertexDataProxy<math::Vector3T<float>>::operator=(
            (ParticleVertexDataProxy<math::Vector3T<float>>*)&field_116, pPVar3);
        puVar5 = (undefined8*)eastl::vector<ParticleVertexDataProxy<math::ColourStorage8888<math::ABGR8StorageLayout>>,
                                            SafeBucketAllocatorEASTL>::
        operator[]((vector<ParticleVertexDataProxy<math::ColourStorage8888<math::ABGR8StorageLayout>>,
                           SafeBucketAllocatorEASTL>*)&param_2->field_192,
                   param_1);
        uVar1 = puVar5[1];
        field_164 = *puVar5;
        field_172 = uVar1;
        puVar5 = (undefined8*)
            eastl::vector<ParticleVertexDataProxy<ParticleData::MaterialSlotRotationData>, SafeBucketAllocatorEASTL>::
            operator[]((vector<ParticleVertexDataProxy<ParticleData::MaterialSlotRotationData>,
                               SafeBucketAllocatorEASTL>*)&param_2->field_216,
                       param_1);
        uVar1 = puVar5[1];
        field_180 = *puVar5;
        field_188 = uVar1;
        puVar5 = (undefined8*)
            eastl::vector<ParticleVertexDataProxy<ParticleData::UVAnimationData>, SafeBucketAllocatorEASTL>::operator[](
                (vector<ParticleVertexDataProxy<ParticleData::UVAnimationData>, SafeBucketAllocatorEASTL>*)&param_2
                    ->field_240,
                param_1);
        uVar1 = puVar5[1];
        field_196 = *puVar5;
        field_204 = uVar1;
    }

} // namespace jag::graphics::helpers
