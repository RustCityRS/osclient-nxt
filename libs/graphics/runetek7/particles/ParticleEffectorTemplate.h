// libs/graphics/runetek7/particles/ParticleEffectorTemplate.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class ParticleEffectorTemplate {
    public:
        void Initialise(int arg1, const ParticleEffectorRaw& particleEffectorRaw);
        ParticleEffectorTemplate();

    private:
        int field_0;
        uint8_t _unknown_4[12];
        float field_16;
        float field_20;
        float field_24;
        float field_28;
        uint32_t field_32;
        uint32_t field_36;
        int field_40;
        float field_44;
        uint8_t _unknown_48[4];
    };

    // 0x1007f1e50
    ParticleEffectorTemplate::ParticleEffectorTemplate() : field_0(0) {}

    // 0x1007f2dd0
    ParticleVertexDataProxy<ParticleData::PositionTimeData>::ParticleVertexDataProxy(
        ParticleData::PositionTimeData&& positionTimeData) {
        long lVar1 = 0;
        do {
            new ((this + lVar1)) ParticleData::PositionTimeData();
            lVar1 = lVar1 + 16;
        } while (lVar1 != 64);
        operator=(this, positionTimeData);
    }

    // 0x1007f2e20
    ParticleVertexDataProxy<ParticleData::PositionTimeData>*
    ParticleVertexDataProxy<ParticleData::PositionTimeData>::operator=(
        ParticleData::PositionTimeData&& positionTimeData) {
        PositionTimeData* pPVar1 = (PositionTimeData*)(*((this + 48))) = positionTimeData;
        pPVar1 = (PositionTimeData*)(*((this + 32))) = *pPVar1;
        pPVar1 = (PositionTimeData*)(*((this + 16))) = *pPVar1;
        *this = *pPVar1;
        return this;
    }

    // 0x1007f2e70
    ParticleVertexDataProxy<math::Vector3T<float>>::ParticleVertexDataProxy(math::Vector3T<float>&& vector3) {
        long lVar1 = 0;
        do {
            new ((this + lVar1)) math::Vector3T();
            lVar1 = lVar1 + 12;
        } while (lVar1 != 48);
        operator=(this, vector3);
    }

    // 0x1007f2ed0
    ParticleVertexDataProxy<math::ColourStorage8888<math::ABGR8StorageLayout>>::ParticleVertexDataProxy(
        math::ColourStorage8888<math::ABGR8StorageLayout>&& colourStorage8888) {
        long lVar1 = 0;
        do {
            new ((this + lVar1)) callstack::Callstack();
            lVar1 = lVar1 + 4;
        } while (lVar1 != 16);
        *this = colourStorage8888;
    }

    // 0x1007f2f30
    ParticleVertexDataProxy<ParticleData::MaterialSlotRotationData>::ParticleVertexDataProxy(
        ParticleData::MaterialSlotRotationData&& materialSlotRotationData) {
        operator=(this, (UVAnimationData*)materialSlotRotationData);
    }

    // 0x1007f2f50
    ParticleVertexDataProxy<ParticleData::UVAnimationData>::ParticleVertexDataProxy(
        ParticleData::UVAnimationData&& uvAnimationData) {
        long lVar1 = 0;
        do {
            new ((this + lVar1)) ParticleData::UVAnimationData();
            lVar1 = lVar1 + 4;
        } while (lVar1 != 16);
        *this = uvAnimationData;
    }

    // 0x1007f2fb0
    ParticleData::UVAnimationData::UVAnimationData() {
        field_0 = '\0';
        new (&field_2) eastl::bitset();
        field_3 = 0;
    }

} // namespace jag::graphics
