// libs/graphics/runetek7/particles/Particle.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.graphics

namespace jag::graphics {
    class Particle {
    public:
        void GetPosition() const;
        uint32_t GetViewDst() const;
        float GetSize() const;
        LocData GetRGBA() const;
        float GetRotation2D() const;
        Particle* operator=(Particle&& particle);
        Particle(const ParticleEmitter& particleEmitter, float arg2, float arg3, float arg4, float arg5, float arg6,
                 float arg7, unsigned int arg8, bool arg9, bool arg10);
        static int64_t m_enableFrameInterpolation; // = 1
        static bool m_showParticles;               // = 1
        static bool m_showOverdraw;                // = 0
        static bool m_showWorldAABB;               // = 0

    private:
        uint32_t field_0;
        uint32_t field_4;
        uint32_t field_8;
        uint32_t m_viewDst;
        uint8_t _unknown_16[12];
        float field_28;
        float m_size;
        float field_36;
        float field_40;
        float field_44;
        uint64_t field_48;
        uint64_t field_56;
        float m_rotation2D;
        LocData m_rGBA;
    };

    class ParticleModuleUpdateParams {
    public:
        ParticleModuleUpdateParams();

        uint8_t _unknown_0[52];
    };

    class ParticleModuleUpdateState {
    public:
        ParticleModuleUpdateState();
    };

    class ParticleRGBA {
    public:
        ParticleRGBA(float arg1, float arg2, float arg3, float arg4);
    };

    template <typename...> // 1 instantiations, e.g. <math::Vector2T<float> >
    class ParticleVertexData {
    public:
        ParticleVertexData();
        ParticleVertexData<math::Vector2T<float>>*
        operator=(const ParticleVertexData<math::Vector2T<float>>& particleVertexData);
    };

    template <
        typename...> // 5 instantiations, e.g. <ParticleData::MaterialSlotRotationData>, <ParticleData::PositionTimeData>, <ParticleData::UVAnimationData>
    class ParticleVertexDataProxy {
    public:
        class SplatOp;
        ParticleVertexDataProxy<>();
        ParticleVertexDataProxy<ParticleData::PositionTimeData>*
        operator=(const ParticleVertexDataProxy<ParticleData::PositionTimeData>& particleVertexDataProxy);
        ParticleVertexDataProxy<math::Vector3T<float>>* operator+=(const math::Vector3T<float>& vector3);
        ParticleVertexDataProxy<math::Vector3T<float>>* operator=(math::Vector3T<float>&& vector3);
        ParticleVertexDataProxy<ParticleData::MaterialSlotRotationData>*
        operator=(math::ColourStorage8888<math::ABGR8StorageLayout>&& uvAnimationData);
        ParticleVertexDataProxy(ParticleData::PositionTimeData&& positionTimeData);
        ParticleVertexDataProxy<ParticleData::PositionTimeData>*
        operator=(ParticleData::PositionTimeData&& positionTimeData);
        ParticleVertexDataProxy(math::Vector3T<float>&& vector3);
        ParticleVertexDataProxy(math::ColourStorage8888<math::ABGR8StorageLayout>&& colourStorage8888);
        ParticleVertexDataProxy(ParticleData::MaterialSlotRotationData&& materialSlotRotationData);
        ParticleVertexDataProxy(ParticleData::UVAnimationData&& uvAnimationData);
        ParticleVertexDataProxy<math::Vector3T<float> const&, float&>(const math::Vector3T<float>& vector3,
                                                                      float& arg2);
    };

    template <typename...> // 1 instantiations, e.g.
    class ParticleVertexDataProxy::SplatOp {
    public:
        ~SplatOp();
    };

    // 0x1007d0da0
    ParticleVertexDataProxy<ParticleData::PositionTimeData>::ParticleVertexDataProxy<>() {
        uint8_t local_28[12];

        new (local_28) math::Vector3T();
        uint32_t local_1c = 0;
        ParticleVertexDataProxy(this, (PositionTimeData*)local_28);
    }

    // 0x1007d0df0
    ParticleVertexDataProxy<math::Vector3T<float>>::ParticleVertexDataProxy<>() {

        Vector3T<int> local_28;
        ParticleVertexDataProxy(this, &local_28);
    }

    // 0x1007d0e20
    ParticleVertexDataProxy<math::ColourStorage8888<math::ABGR8StorageLayout>>::ParticleVertexDataProxy<>() {
        uint8_t local_20[8];

        new (local_20) callstack::Callstack();
        ParticleVertexDataProxy(this, (ColourStorage8888<math::ABGR8StorageLayout>*)local_20);
    }

    // 0x1007d0e50
    ParticleVertexDataProxy<ParticleData::MaterialSlotRotationData>::ParticleVertexDataProxy<>() {
        uint32_t local_10[2];

        local_10[0] = 0;
        ParticleVertexDataProxy(this, (MaterialSlotRotationData*)local_10);
    }

    // 0x1007d0e70
    ParticleVertexDataProxy<ParticleData::UVAnimationData>::ParticleVertexDataProxy<>() {
        unsigned long in_RAX;

        uint64_t local_18 = in_RAX & 18446744073709486080;
        new ((bitset<4ul, unsigned char>*)((long)&local_18 + 2)) eastl::bitset();
        local_18._3_1_ = 0;
        ParticleVertexDataProxy(this, (UVAnimationData*)&local_18);
    }

    // 0x1007d0f20
    ParticleVertexDataProxy<ParticleData::PositionTimeData>*
    ParticleVertexDataProxy<ParticleData::PositionTimeData>::operator=(
        const ParticleVertexDataProxy<ParticleData::PositionTimeData>& particleVertexDataProxy) {
        long lVar1 = 0;
        do {
            (*((this + lVar1))) = (*((particleVertexDataProxy + lVar1)));
            lVar1 = lVar1 + 16;
        } while (lVar1 != 64);
        return this;
    }

    // 0x1007d0fb0
    ParticleVertexData<math::Vector2T<float>>* ParticleVertexData<math::Vector2T<float>>::operator=(
        const ParticleVertexData<math::Vector2T<float>>& particleVertexData) {
        long lVar1 = 0;
        do {
            (*((this + lVar1))) = (*((particleVertexData + lVar1)));
            lVar1 = lVar1 + 8;
        } while (lVar1 != 32);
        return this;
    }

    // 0x1007d16c0
    void ParticleData::GetCount() const {
        field_120.size();
    }

    // 0x1007dba90
    ParticleVertexDataProxy<ParticleData::MaterialSlotRotationData>*
    ParticleVertexDataProxy<math::ColourStorage8888<math::ABGR8StorageLayout>>::operator=(
        math::ColourStorage8888<math::ABGR8StorageLayout>&& uvAnimationData) {
        uint32_t uVar1;

        uVar1._0_1_ = uvAnimationData.field_0;
        uVar1._1_2_ = *(uint16_t*)&uvAnimationData.field_1;
        uVar1._3_1_ = uvAnimationData.field_3;
        *(uint32_t*)(this + 12) = uVar1;
        *(uint32_t*)(this + 8) = uVar1;
        *(uint32_t*)(this + 4) = uVar1;
        *(uint32_t*)this = uVar1;
        return this;
    }

    // 0x1007eb510
    Particle* Particle::operator=(Particle&& particle) {
        SetXYZ(particle);
        m_viewDst = particle.m_viewDst;
        field_16.SetXYZ(particle.field_16);
        float fVar5 = particle.m_size;
        float fVar6 = particle.field_36;
        float fVar7 = particle.field_40;
        uint64_t uVar1 = *(uint64_t*)&particle.field_44;
        uint64_t uVar2 = *(uint64_t*)((long)&particle.field_48 + 4);
        uint64_t uVar3 = *(uint64_t*)((long)&particle.field_56 + 3);
        uint64_t uVar4 = *(uint64_t*)((long)&particle.m_rotation2D + 3);
        field_28 = particle.field_28;
        m_size = fVar5;
        field_36 = fVar6;
        field_40 = fVar7;
        *(uint64_t*)&field_44 = uVar1;
        *(uint64_t*)((long)&field_48 + 4) = uVar2;
        *(uint64_t*)((long)&field_56 + 3) = uVar3;
        *(uint64_t*)((long)&m_rotation2D + 3) = uVar4;
        return this;
    }

    // 0x1007fab00
    ParticleVertexDataProxy<ParticleData::PositionTimeData>::SplatOp::~SplatOp() {
        PositionTimeData* pPVar1 = (PositionTimeData*)(*((PlaneT<float>*)&(*(PositionTimeData**)this)->field_16)) =
            (*(*(PositionTimeData**)this));
        pPVar1 = (PositionTimeData*)(*((PlaneT<float>*)(*(long*)this + 32))) = *pPVar1;
        (*((PlaneT<float>*)(*(long*)this + 48))) = *pPVar1;
    }

    // 0x1007fb3a0
    ParticleVertexDataProxy<ParticleData::MaterialSlotRotationData>::SplatOp::~SplatOp() {
        uint32_t uVar1 = **(uint32_t**)this;
        (*(uint32_t**)this)[1] = uVar1;
        *(uint32_t*)(*(long*)this + 8) = uVar1;
        *(uint32_t*)(*(long*)this + 12) = uVar1;
    }

    // 0x1007fb500
    ParticleVertexDataProxy<math::Vector3T<float>>::SplatOp::~SplatOp() {
        Vector3T<float>* pVVar1 =
            (Vector3T<float>*)((Vector4T<float>*)(*(Vector3T<float>**)this + 12))->SetXYZ(*(*(Vector3T<float>**)this));
        pVVar1 = (Vector3T<float>*)((Vector4T<float>*)(*(long*)this + 24))->SetXYZ(*pVVar1);
        ((Vector4T<float>*)(*(long*)this + 36))->SetXYZ(*pVVar1);
    }

} // namespace jag::graphics

namespace jag::graphics::helpers {
    class ParticleDataRefProxy {
    public:
        ParticleDataRefProxy(unsigned long arg1, ParticleData* particleData);
        ParticleDataRefProxy* operator=(const ParticleDataValueProxy& particleDataValueProxy);
        ParticleDataRefProxy* operator=(ParticleDataRefProxy&& particleDataRefProxy);
        operator ParticleDataValueProxy() const;

    private:
        unsigned long field_0;
        ParticleData* field_8;
    };

    class ParticleDataValueProxy {
    public:
        ParticleDataValueProxy(unsigned long arg1, ParticleData* particleData);
        bool operator>(const ParticleDataValueProxy& particleDataValueProxy) const;

    private:
        uint32_t field_0;
        uint32_t field_4;
        uint32_t field_8;
        uint32_t field_12;
        uint32_t field_16;
        uint8_t _unknown_20[144];
        uint64_t field_164;
        uint64_t field_172;
        uint64_t field_180;
        uint64_t field_188;
        uint64_t field_196;
        uint64_t field_204;
    };

    class ParticleSOAIterator {
    public:
        void operator++();
        ParticleSOAIterator(unsigned long arg1, ParticleData* particleData);
        uint64_t operator!=(const ParticleSOAIterator& particleSOAIterator) const;
        long operator-(const ParticleSOAIterator& particleSOAIterator) const;
        ParticleSOAIterator operator+(unsigned long arg1) const;
        ParticleDataRefProxy operator*() const;
        ParticleSOAIterator operator-(unsigned long arg1) const;
        reverse_iterator<char*>* operator--();
        unsigned long operator>=(const ParticleSOAIterator& particleSOAIterator) const;
        uint64_t operator<(const ParticleSOAIterator& particleSOAIterator) const;

    private:
        unsigned long field_0;
        ParticleData* field_8;
    };

    // 0x1007d1120
    ParticleDataRefProxy::ParticleDataRefProxy(unsigned long arg1, ParticleData* particleData)
        : field_0(arg1), field_8(particleData) {}

    // 0x1007d1140
    ParticleDataRefProxy* ParticleDataRefProxy::operator=(const ParticleDataValueProxy& particleDataValueProxy) {
        uint32_t uVar1 = particleDataValueProxy.field_0;
        uint32_t* puVar3 = (uint32_t*)(*field_8)[field_0];
        *puVar3 = uVar1;
        uVar1 = particleDataValueProxy.field_4;
        puVar3 = &field_8->field_24[field_0];
        *puVar3 = uVar1;
        uVar1 = particleDataValueProxy.field_8;
        puVar3 = &field_8->field_48[field_0];
        *puVar3 = uVar1;
        ParticleVertexDataProxy<math::Vector3T<float>>* this_00 = &field_8->field_168[field_0];
        *this_00 = particleDataValueProxy.field_116;
        uVar1 = particleDataValueProxy.field_12;
        puVar3 = &field_8->field_72[field_0];
        *puVar3 = uVar1;
        uVar1 = particleDataValueProxy.field_16;
        puVar3 = &field_8->field_96[field_0];
        *puVar3 = uVar1;
        ParticleVertexDataProxy<ParticleData::PositionTimeData>* this_01 = &field_8->field_120[field_0];
        *this_01 = particleDataValueProxy.field_20;
        ParticleVertexData<math::Vector2T<float>>* this_02 = &field_8->field_144[field_0];
        *this_02 = particleDataValueProxy.field_84;
        uint64_t* puVar4 = &field_8->field_192[field_0];
        uint64_t uVar2 = particleDataValueProxy.field_172;
        *puVar4 = particleDataValueProxy.field_164;
        puVar4[1] = uVar2;
        puVar4 = &field_8->field_216[field_0];
        uVar2 = particleDataValueProxy.field_188;
        *puVar4 = particleDataValueProxy.field_180;
        puVar4[1] = uVar2;
        puVar4 = &field_8->field_240[field_0];
        uVar2 = particleDataValueProxy.field_204;
        *puVar4 = particleDataValueProxy.field_196;
        puVar4[1] = uVar2;
        return this;
    }

    // 0x1007d12c0
    ParticleDataRefProxy* ParticleDataRefProxy::operator=(ParticleDataRefProxy&& particleDataRefProxy) {
        ParticleVertexDataProxy<math::Vector3T<float> _>* particleVertexDataProxy1;
        ParticleVertexDataProxy<math::Vector3T<float> _>* particleVertexDataProxy2;
        ParticleVertexDataProxy<ParticleData::PositionTimeData>* particleVertexDataProxy1_00;
        ParticleVertexDataProxy<ParticleData::PositionTimeData>* particleVertexDataProxy2_00;
        ParticleVertexData<math::Vector2T<float> _>* particleVertexData1;
        ParticleVertexData<math::Vector2T<float> _>* particleVertexData2;
        ParticleVertexDataProxy<math::ColourStorage8888<math::ABGR8StorageLayout> _>* particleVertexDataProxy1_01;
        ParticleVertexDataProxy<math::ColourStorage8888<math::ABGR8StorageLayout> _>* particleVertexDataProxy2_01;
        ParticleVertexDataProxy<ParticleData::MaterialSlotRotationData>* particleVertexDataProxy1_02;
        ParticleVertexDataProxy<ParticleData::MaterialSlotRotationData>* particleVertexDataProxy2_02;
        ParticleVertexDataProxy<ParticleData::UVAnimationData>* particleVertexDataProxy1_03;
        ParticleVertexDataProxy<ParticleData::UVAnimationData>* particleVertexDataProxy2_03;

        float* pfVar1 = (float*)(*field_8)[field_0];
        float* pfVar2 = (float*)(*field_8)[particleDataRefProxy.field_0];
        std::swap<float>(*pfVar1, *pfVar2);
        pfVar1 = &field_8->field_24[field_0];
        pfVar2 = &field_8->field_24[particleDataRefProxy.field_0];
        std::swap<float>(*pfVar1, *pfVar2);
        pfVar1 = &field_8->field_48[field_0];
        pfVar2 = &field_8->field_48[particleDataRefProxy.field_0];
        std::swap<float>(*pfVar1, *pfVar2);
        particleVertexDataProxy1 = (ParticleVertexDataProxy<math::Vector3T<float> _>*)field_8->field_168[field_0];
        particleVertexDataProxy2 =
            (ParticleVertexDataProxy<math::Vector3T<float> _>*)field_8->field_168[particleDataRefProxy.field_0];
        std::swap<ParticleVertexDataProxy<math::Vector3T<float>>>(*particleVertexDataProxy1, *particleVertexDataProxy2);
        pfVar1 = &field_8->field_72[field_0];
        pfVar2 = &field_8->field_72[particleDataRefProxy.field_0];
        std::swap<float>(*pfVar1, *pfVar2);
        pfVar1 = &field_8->field_96[field_0];
        pfVar2 = &field_8->field_96[particleDataRefProxy.field_0];
        std::swap<float>(*pfVar1, *pfVar2);
        particleVertexDataProxy1_00 =
            (ParticleVertexDataProxy<ParticleData::PositionTimeData>*)field_8->field_120[field_0];
        particleVertexDataProxy2_00 =
            (ParticleVertexDataProxy<ParticleData::PositionTimeData>*)field_8->field_120[particleDataRefProxy.field_0];
        std::swap<ParticleVertexDataProxy<ParticleData::PositionTimeData>>(*particleVertexDataProxy1_00,
                                                                           *particleVertexDataProxy2_00);
        particleVertexData1 = (ParticleVertexData<math::Vector2T<float> _>*)field_8->field_144[field_0];
        particleVertexData2 =
            (ParticleVertexData<math::Vector2T<float> _>*)field_8->field_144[particleDataRefProxy.field_0];
        std::swap<ParticleVertexData<math::Vector2T<float>>>(*particleVertexData1, *particleVertexData2);
        particleVertexDataProxy1_01 =
            (ParticleVertexDataProxy<math::ColourStorage8888<math::ABGR8StorageLayout> _>*)field_8->field_192[field_0];
        particleVertexDataProxy2_01 = (ParticleVertexDataProxy<math::ColourStorage8888<math::ABGR8StorageLayout> _>*)
                                          field_8->field_192[particleDataRefProxy.field_0];
        std::swap<ParticleVertexDataProxy<math::ColourStorage8888<math::ABGR8StorageLayout>>>(
            *particleVertexDataProxy1_01, *particleVertexDataProxy2_01);
        particleVertexDataProxy1_02 =
            (ParticleVertexDataProxy<ParticleData::MaterialSlotRotationData>*)field_8->field_216[field_0];
        particleVertexDataProxy2_02 = (ParticleVertexDataProxy<ParticleData::MaterialSlotRotationData>*)
                                          field_8->field_216[particleDataRefProxy.field_0];
        std::swap<ParticleVertexDataProxy<ParticleData::MaterialSlotRotationData>>(*particleVertexDataProxy1_02,
                                                                                   *particleVertexDataProxy2_02);
        particleVertexDataProxy1_03 =
            (ParticleVertexDataProxy<ParticleData::UVAnimationData>*)field_8->field_240[field_0];
        particleVertexDataProxy2_03 =
            (ParticleVertexDataProxy<ParticleData::UVAnimationData>*)field_8->field_240[particleDataRefProxy.field_0];
        std::swap<ParticleVertexDataProxy<ParticleData::UVAnimationData>>(*particleVertexDataProxy1_03,
                                                                          *particleVertexDataProxy2_03);
        return this;
    }

    // 0x1007d1650
    ParticleSOAIterator::ParticleSOAIterator(unsigned long arg1, ParticleData* particleData)
        : field_0(arg1), field_8(particleData) {}

    // 0x1007d1670
    void SortParticleData(ParticleData& particleData) {
        __5* in_R8;

        ParticleSOAIterator local_30(0, particleData);
        unsigned long arg1 = particleData.GetCount();
        ParticleSOAIterator local_20(arg1, particleData);
        eastl::sort<ParticleSOAIterator, SortParticleData(*(ParticleData&))::__5>(local_30, local_20, in_R8);
    }

} // namespace jag::graphics::helpers
