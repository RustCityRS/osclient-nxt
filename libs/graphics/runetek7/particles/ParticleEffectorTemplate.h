// libs/graphics/runetek7/particles/ParticleEffectorTemplate.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class ParticleEffectorTemplate {
    public:
        void Initialise(int, ParticleEffectorRaw const&);
        ParticleEffectorTemplate();

        // data members, from how the methods use this: 52 bytes
        int field_0; // offset 0
        char _unknown_4[12];
        float field_16;      // offset 16
        float field_20;      // offset 20
        float field_24;      // offset 24
        float field_28;      // offset 28
        undefined4 field_32; // offset 32
        undefined4 field_36; // offset 36
        int field_40;        // offset 40
        float field_44;      // offset 44
        char _unknown_48[4];
    };

    // 0x1007f1e40, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // ParticleEffectorTemplate::ParticleEffectorTemplate(): jumps straight to the base-object constructor

    // 0x1007f1e50, 32 bytes, base-object constructor, inline, placed by class name and debug map
    // ParticleEffectorTemplate::ParticleEffectorTemplate()
    void ParticleEffectorTemplate::ParticleEffectorTemplate() {
        field_0 = 0;
        new (&field_4) math::Vector3T<int>();
    }

    // 0x1007f2dc0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ParticleVertexDataProxy<ParticleData::PositionTimeData>::ParticleVertexDataProxy(ParticleData::PositionTimeData&&): jumps straight to the base-object constructor

    // 0x1007f2dd0, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ParticleVertexDataProxy<ParticleData::PositionTimeData>::ParticleVertexDataProxy(ParticleData::PositionTimeData&&)
    void ParticleVertexDataProxy<ParticleData::PositionTimeData>::ParticleVertexDataProxy(PositionTimeData* param_1) {
        long lVar1;

        lVar1 = 0;
        do {
            new ((this + lVar1)) ParticleData::PositionTimeData();
            lVar1 = lVar1 + 16;
        } while (lVar1 != 64);
        operator=(this, param_1);
    }

    // 0x1007f2e20, 64 bytes, inline, placed by debug map only (low confidence)
    // ParticleVertexDataProxy<ParticleData::PositionTimeData>::operator=(ParticleData::PositionTimeData&&)
    /* ParticleVertexDataProxy<ParticleData::PositionTimeData>::TEMPNAMEPLACEHOLDERVALUE(ParticleData::PositionTimeData&&)
    */

    ParticleVertexDataProxy<ParticleData::PositionTimeData>*
    ParticleVertexDataProxy<ParticleData::PositionTimeData>::operator=(PositionTimeData* param_1) {
        PlaneT* pPVar1;

        pPVar1 = (PlaneT*)math::PlaneT<float>::operator=((PlaneT<float>*)(this + 48), (PlaneT*)param_1);
        pPVar1 = (PlaneT*)math::PlaneT<float>::operator=((PlaneT<float>*)(this + 32), pPVar1);
        pPVar1 = (PlaneT*)math::PlaneT<float>::operator=((PlaneT<float>*)(this + 16), pPVar1);
        math::PlaneT<float>::operator=((PlaneT<float>*)this, pPVar1);
        return this;
    }

    // 0x1007f2e60, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ParticleVertexDataProxy<math::Vector3T<float> >::ParticleVertexDataProxy(math::Vector3T<float>&&): jumps straight to the base-object constructor

    // 0x1007f2e70, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ParticleVertexDataProxy<math::Vector3T<float> >::ParticleVertexDataProxy(math::Vector3T<float>&&)
    /* ParticleVertexDataProxy<math::Vector3T<float>
   >::ParticleVertexDataProxy(math::Vector3T<float> const&) */

    void ParticleVertexDataProxy<math::Vector3T<float>>::ParticleVertexDataProxy(Vector3T* param_1) {
        long lVar1;

        lVar1 = 0;
        do {
            new ((this + lVar1)) math::Vector3T<int>();
            lVar1 = lVar1 + 12;
        } while (lVar1 != 48);
        operator=(this, param_1);
    }

    // 0x1007f2ec0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ParticleVertexDataProxy<math::ColourStorage8888<math::ABGR8StorageLayout> >::ParticleVertexDataProxy(math::ColourStorage8888<math::ABGR8StorageLayout>&&): jumps straight to the base-object constructor

    // 0x1007f2ed0, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ParticleVertexDataProxy<math::ColourStorage8888<math::ABGR8StorageLayout> >::ParticleVertexDataProxy(math::ColourStorage8888<math::ABGR8StorageLayout>&&)
    void ParticleVertexDataProxy<math::ColourStorage8888<math::ABGR8StorageLayout>>::ParticleVertexDataProxy(
        ColourStorage8888* param_1) {
        long lVar1;

        lVar1 = 0;
        do {
            new ((this + lVar1)) callstack::Callstack();
            lVar1 = lVar1 + 4;
        } while (lVar1 != 16);
        ParticleVertexDataProxy<ParticleData::MaterialSlotRotationData>::operator=(
            (ParticleVertexDataProxy<ParticleData::MaterialSlotRotationData>*)this, (MaterialSlotRotationData*)param_1);
    }

    // 0x1007f2f20, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ParticleVertexDataProxy<ParticleData::MaterialSlotRotationData>::ParticleVertexDataProxy(ParticleData::MaterialSlotRotationData&&): jumps straight to the base-object constructor

    // 0x1007f2f30, 16 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ParticleVertexDataProxy<ParticleData::MaterialSlotRotationData>::ParticleVertexDataProxy(ParticleData::MaterialSlotRotationData&&)
    void ParticleVertexDataProxy<ParticleData::MaterialSlotRotationData>::ParticleVertexDataProxy(
        MaterialSlotRotationData* param_1) {
        operator=(this, param_1);
    }

    // 0x1007f2f40, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ParticleVertexDataProxy<ParticleData::UVAnimationData>::ParticleVertexDataProxy(ParticleData::UVAnimationData&&): jumps straight to the base-object constructor

    // 0x1007f2f50, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ParticleVertexDataProxy<ParticleData::UVAnimationData>::ParticleVertexDataProxy(ParticleData::UVAnimationData&&)
    /* ParticleVertexDataProxy<ParticleData::UVAnimationData>::ParticleVertexDataProxy(ParticleData::UVAnimationData
   const&) */

    void ParticleVertexDataProxy<ParticleData::UVAnimationData>::ParticleVertexDataProxy(UVAnimationData* param_1) {
        long lVar1;

        lVar1 = 0;
        do {
            new ((this + lVar1)) ParticleData::UVAnimationData();
            lVar1 = lVar1 + 4;
        } while (lVar1 != 16);
        ParticleVertexDataProxy<ParticleData::MaterialSlotRotationData>::operator=(
            (ParticleVertexDataProxy<ParticleData::MaterialSlotRotationData>*)this, (MaterialSlotRotationData*)param_1);
    }

    // 0x1007f2fa0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ParticleData::UVAnimationData::UVAnimationData(): jumps straight to the base-object constructor

    // 0x1007f2fb0, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ParticleData::UVAnimationData::UVAnimationData()
    void ParticleData::UVAnimationData::UVAnimationData() {
        field_0 = '\0';
        new (&field_2) eastl::bitset<4ul, unsigned char>();
        field_3 = 0;
    }

} // namespace jag::graphics
