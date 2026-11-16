// libs/graphics/runetek7/particles/ParticleEmitter.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class ParticleEmitter {
    public:
        void GetEmitterSource() const;
        ParticleEmitterTemplate* GetEmitterTemplate() const;
        uint8_t* GetParticles() const;
        ParticleEmitter(const shared_ptr<ModelParticleSource>& modelParticleSource, ParticleManager* particleManager,
                        ParticleSystem* particleSystem);
        void Initialise(const shared_ptr<ModelParticleSource>& modelParticleSource, ParticleManager* particleManager,
                        ParticleSystem* particleSystem);
        uint64_t Update(float arg1, math::AABB& aabb, bool arg3);
        void CheckLevelHeightsProvider();
        void UpdatePositions();
        void CheckEmissionQueue(float arg1);
        ParticleEmitter* UpdateActiveParticles(float arg1);
        void UpdateConePositions();
        uint64_t GetConeDirection();
        void GetNewParticleDirection(math::Vector3T<float>& vector3);
        void GetNewParticlePosition(math::Vector3T<float>& vector3);
        bool GenerateNewParticle();
        void SortParticles();
        bool IsHidden() const;
        void UpdatePosition(const math::Vector3T<float>& vector31, const math::Vector3T<float>& vector32,
                            const math::Vector3T<float>& vector33);
        void TranslateParticles(const math::Vector3T<float>& vector3);
        void RenderDebug() const;
        uint64_t CalculateViewDistances(const math::Vector4T<float>& vector4);
        void UpdateAge(float arg1);
        void UpdateSpeed(float arg1);
        void UpdateLocalAndWorldEffectors(float arg1);
        void UpdateGlobalEffectors(float arg1);
        void UpdatePosition(float arg1);
        void ImposeBoundaryLimits();
        void UpdateSize(float arg1);
        void UpdateBoundingBox(math::AABB& aabb);
        void UpdateColoursAndRotation(float arg1);
        bool CanBatch(const MaterialManager& materialManager,
                      const shared_ptr<ModelParticleSource>& modelParticleSource) const;
        void SetEnabled(bool arg1);
        void Hide(bool arg1);
        void SetAtlasMaterialSettingsSlotXY(unsigned short arg1);
        ~ParticleEmitter();
        bool ShouldRender() const;
        unsigned short GetAtlasMaterialSettingsSlotXY() const;
        ParticleEmitter* operator=(ParticleEmitter&& particleEmitter);
        ParticleEmitter(ParticleEmitter&& particleEmitter);
        static int32_t m_debugIsolatedEmitter;  // = -1
        static int32_t m_debugIsolatedAffector; // = -1
        static bool m_debugEmitters;
        static bool m_debugIsolatedEmitterHistory;
        static eastl::vector<math::Vector3T<float>> m_debugEmitterPositions; // = vector<math::Vector3T<float>>()
        static eastl::vector<math::Vector3T<float>> m_debugEmitterNormals;   // = vector<math::Vector3T<float>>()
        static bool m_debugStopEffectors;

    private:
        uint8_t _unknown_0[16];
        ParticleEmitterTemplate* m_emitterTemplate;
        ParticleManager* field_24;
        ParticleSystem* field_32;
        long* field_40;
        uint8_t field_48;
        uint8_t field_49[7];
        uint64_t field_56;
        uint8_t _unknown_64[4];
        uint8_t field_68;
        uint8_t field_69[3];
        unsigned int field_72;
        uint8_t _unknown_76[36];
        float field_112;
        float field_116;
        float field_120;
        uint8_t _unknown_124[12];
        char field_136;
        char field_137;
        uint16_t field_138;
        int field_140;
        int field_144;
        bool m_enabled;
        bool field_149;
        uint8_t _unknown_150[10298];
        bool m_hidden;
        uint8_t _unknown_10449[55];
        float field_10504;
        float field_10508;
        float field_10512;
        float field_10516;
        float field_10520;
        unsigned short m_atlasMaterialSettingsSlotXY;
        uint8_t _unknown_10526[6];
    };

    // 0x1007cb5e0
    bool ParticleEmitter::IsHidden() const {
        return m_hidden;
    }

    // 0x1007d19f0
    void ParticleEmitter::SetEnabled(bool arg1) {
        m_enabled = arg1;
    }

    // 0x1007d1eb0
    void ParticleEmitter::Hide(bool arg1) {
        m_hidden = arg1;
    }

    // 0x1007d3800
    void ParticleEmitter::SetAtlasMaterialSettingsSlotXY(unsigned short arg1) {
        m_atlasMaterialSettingsSlotXY = arg1;
    }

    // 0x1007e6200
    ParticleEmitter::~ParticleEmitter() {
        field_10480.~Array();
        field_10456.~Array();
        field_160.~fixed_vector();
    }

    // 0x1007e7360
    bool ParticleEmitter::ShouldRender() const {
        return IsHidden() ^ 1;
    }

    // 0x1007e7440
    unsigned short ParticleEmitter::GetAtlasMaterialSettingsSlotXY() const {
        return m_atlasMaterialSettingsSlotXY;
    }

    // 0x1007ebbe0
    auto ParticleEmitter::UpdateAge(float)::$_1::operator()<Particle>(Particle& particle) const {
        float* pfVar1 = field_0;
        float fVar2 = particle.field_36 + *pfVar1;
        particle.field_36 = fVar2;
        return (auto)(((uint64_t)((int64_t)((unsigned long)pfVar1 >> 8)) << 8) | (uint8_t)(particle.field_40 <= fVar2));
    }

    // 0x1007ebe90
    auto ParticleEmitter::ImposeBoundaryLimits()::$_2::operator()<Particle>(Particle& particle) const {
        auto aVar1 = (auto)(((uint64_t)((int64_t)((unsigned long)field_0 >> 8)) << 8) | (uint8_t)1);
        if ((float)*field_0 <= (float)particle.field_4) {
            aVar1 = (auto)(((uint64_t)((int64_t)((unsigned long)field_8 >> 8)) << 8) |
                           (uint8_t)((float)*field_8 <= (float)particle.field_4));
        }
        return aVar1;
    }

    // 0x1007f5b10
    ParticleEmitter* ParticleEmitter::operator=(ParticleEmitter&& particleEmitter) {
        *this = particleEmitter;
        ParticleManager* pPVar2 = particleEmitter.field_24;
        ParticleSystem* pPVar3 = particleEmitter.field_32;
        long* plVar4 = particleEmitter.field_40;
        uint8_t uVar5 = particleEmitter.field_48;
        uint64_t uVar6 = particleEmitter.field_49;
        uint64_t uVar1 = particleEmitter.field_56;
        m_emitterTemplate = particleEmitter.m_emitterTemplate;
        field_24 = pPVar2;
        field_32 = pPVar3;
        field_40 = plVar4;
        field_48 = uVar5;
        field_49 = uVar6;
        field_56 = uVar1;
        uVar5 = particleEmitter.field_68;
        uint32_t uVar7 = particleEmitter.field_69;
        unsigned int uVar8 = particleEmitter.field_72;
        *(uint64_t*)((long)&field_56 + 4) = *(uint64_t*)((long)&particleEmitter.field_56 + 4);
        field_68 = uVar5;
        field_69 = uVar7;
        field_72 = uVar8;
        field_76.SetXYZ(particleEmitter.field_76);
        field_88.SetXYZ(particleEmitter.field_88);
        field_100.SetXYZ(particleEmitter.field_100);
        field_112.SetXYZ(particleEmitter.field_112);
        field_124.SetXYZ(particleEmitter.field_124);
        char cVar9 = particleEmitter.field_137;
        uint16_t uVar10 = particleEmitter.field_138;
        int iVar11 = particleEmitter.field_140;
        uVar1 = *(uint64_t*)((long)&particleEmitter.field_140 + 2);
        field_136 = particleEmitter.field_136;
        field_137 = cVar9;
        field_138 = uVar10;
        field_140 = iVar11;
        *(uint64_t*)((long)&field_140 + 2) = uVar1;
        field_160 = particleEmitter.field_160;
        m_hidden = particleEmitter.m_hidden;
        field_10456 = particleEmitter.field_10456;
        field_10480 = particleEmitter.field_10480;
        float fVar12 = particleEmitter.field_10508;
        float fVar13 = particleEmitter.field_10512;
        float fVar14 = particleEmitter.field_10516;
        field_10504 = particleEmitter.field_10504;
        field_10508 = fVar12;
        field_10512 = fVar13;
        field_10516 = fVar14;
        *(uint64_t*)((long)&field_10516 + 2) = *(uint64_t*)((long)&particleEmitter.field_10516 + 2);
        return this;
    }

    // 0x1007f6600
    ParticleEmitter::ParticleEmitter(ParticleEmitter&& particleEmitter) {
        shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(particleEmitter);
        _memcpy(&m_emitterTemplate, &particleEmitter.m_emitterTemplate, 134);
        new (&field_160) eastl::fixed_vector<Particle, 128ul>(particleEmitter.field_160);
        m_hidden = particleEmitter.m_hidden;
        new (&field_10456) Array<int, SafeBucketAllocatorEASTL>(particleEmitter.field_10456);
        new (&field_10480) Array<int, SafeBucketAllocatorEASTL>(particleEmitter.field_10480);
        *(uint64_t*)((long)&field_10516 + 2) = *(uint64_t*)((long)&particleEmitter.field_10516 + 2);
        float fVar1 = particleEmitter.field_10508;
        float fVar2 = particleEmitter.field_10512;
        float fVar3 = particleEmitter.field_10516;
        field_10504 = particleEmitter.field_10504;
        field_10508 = fVar1;
        field_10512 = fVar2;
        field_10516 = fVar3;
    }

} // namespace jag::graphics

namespace jag::math {
    // 0x1007ca350
    void FRandMT(float arg1) {
        uniform_real_distribution<float>* uniform_real_distribution;
        param_type* extraout_RDX;

        uniform_real_distribution = (uniform_real_distribution<float>*)getMersenneTwistorEngine();
        param_type local_28(0.0, arg1);
        std::uniform_real_distribution<float>::operator()(uniform_real_distribution, &local_28, extraout_RDX);
    }

    // 0x1007cad30
    Vector3T<float>& Vector3Cross<float>(Vector3T<float>& vector31, const Vector3T<float>& vector32,
                                         const Vector3T<float>& vector33) {
        float fVar1 = *(float*)(vector33 + 8);
        float fVar2 = *(float*)(vector32 + 8);
        *(float*)vector31 = *(float*)(vector32 + 4) * fVar1 - *(float*)(vector33 + 4) * fVar2;
        float fVar3 = *(float*)vector33;
        float fVar4 = *(float*)vector32;
        *(float*)(vector31 + 4) = fVar2 * fVar3 - fVar1 * fVar4;
        *(float*)(vector31 + 8) = fVar4 * *(float*)(vector33 + 4) - fVar3 * *(float*)(vector32 + 4);
        return vector31;
    }

} // namespace jag::math
