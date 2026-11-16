// libs/graphics/runetek7/particles/ParticleEmitter.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class ParticleEmitter {
    public:
        GetEmitterSource() const;
        ParticleEmitterTemplate* GetEmitterTemplate() const;
        GetParticles() const;
        ParticleEmitter(shared_ptr<ModelParticleSource> const&, ParticleManager*, ParticleSystem*);
        void Initialise(shared_ptr<ModelParticleSource> const&, ParticleManager*, ParticleSystem*);
        Update(float, math::AABB&, bool);
        void CheckLevelHeightsProvider();
        void UpdatePositions();
        void CheckEmissionQueue(float);
        UpdateActiveParticles(float);
        void UpdateConePositions();
        GetConeDirection();
        void GetNewParticleDirection(math::Vector3T<float>&);
        void GetNewParticlePosition(math::Vector3T<float>&);
        bool GenerateNewParticle();
        void SortParticles();
        bool IsHidden() const;
        void UpdatePosition(math::Vector3T<float> const&, math::Vector3T<float> const&, math::Vector3T<float> const&);
        void TranslateParticles(math::Vector3T<float> const&);
        void RenderDebug() const;
        CalculateViewDistances(math::Vector4T<float> const&);
        void UpdateAge(float);
        void UpdateSpeed(float);
        void UpdateLocalAndWorldEffectors(float);
        void UpdateGlobalEffectors(float);
        void UpdatePosition(float);
        void ImposeBoundaryLimits();
        void UpdateSize(float);
        void UpdateBoundingBox(math::AABB&);
        void UpdateColoursAndRotation(float);
        bool CanBatch(MaterialManager const&, shared_ptr<ModelParticleSource> const&) const;
        void SetEnabled(bool);
        void Hide(bool);
        void SetAtlasMaterialSettingsSlotXY(unsigned short);
        ~ParticleEmitter();
        byte ShouldRender() const;
        ushort GetAtlasMaterialSettingsSlotXY() const;
        ParticleEmitter* operator=(ParticleEmitter&&);
        ParticleEmitter(ParticleEmitter&&);
        static /* 4 bytes */ m_debugIsolatedEmitter;  // = -1
        static /* 4 bytes */ m_debugIsolatedAffector; // = -1
        static /* 1 bytes */ m_debugEmitters;
        static /* 7 bytes */ m_debugIsolatedEmitterHistory;
        static eastl::vector<math::Vector3T<float>, eastl::allocator> /* 32 bytes */
            m_debugEmitterPositions; // = vector<math::Vector3T<float>,eastl::allocator>()
        static eastl::vector<math::Vector3T<float>, eastl::allocator> /* 32 bytes */
            m_debugEmitterNormals; // = vector<math::Vector3T<float>,eastl::allocator>()
        static /* 1 bytes */ m_debugStopEffectors;

        // data members, from how the methods use this: 10532 bytes
        char _unknown_0[16];
        ParticleEmitterTemplate* m_emitterTemplate; // offset 16
        ParticleManager* field_24;                  // offset 24
        ParticleSystem* field_32;                   // offset 32
        long* field_40;                             // offset 40
        undefined1 field_48;                        // offset 48
        undefined7 field_49;                        // offset 49
        undefined8 field_56;                        // offset 56
        char _unknown_64[4];
        undefined1 field_68; // offset 68
        undefined3 field_69; // offset 69
        uint field_72;       // offset 72
        char _unknown_76[36];
        float field_112; // offset 112
        float field_116; // offset 116
        float field_120; // offset 120
        char _unknown_124[12];
        char field_136;       // offset 136
        char field_137;       // offset 137
        undefined2 field_138; // offset 138
        int field_140;        // offset 140
        int field_144;        // offset 144
        bool m_enabled;       // offset 148
        bool field_149;       // offset 149
        char _unknown_150[10298];
        bool m_hidden; // offset 10448
        char _unknown_10449[55];
        float field_10504;                    // offset 10504
        float field_10508;                    // offset 10508
        float field_10512;                    // offset 10512
        float field_10516;                    // offset 10516
        float field_10520;                    // offset 10520
        ushort m_atlasMaterialSettingsSlotXY; // offset 10524
        char _unknown_10526[6];
    };

    // 0x1007cb5e0, 16 bytes, inline, placed by class name
    // ParticleEmitter::IsHidden() const
    undefined1 ParticleEmitter::IsHidden() {
        return m_hidden;
    }

    // 0x1007d19f0, 16 bytes, inline, placed by class name
    // ParticleEmitter::SetEnabled(bool)
    void ParticleEmitter::SetEnabled(bool param_1) {
        m_enabled = param_1;
    }

    // 0x1007d1eb0, 16 bytes, inline, placed by class name
    // ParticleEmitter::Hide(bool)
    void ParticleEmitter::Hide(bool param_1) {
        m_hidden = param_1;
    }

    // 0x1007d3800, 16 bytes, inline, placed by class name
    // ParticleEmitter::SetAtlasMaterialSettingsSlotXY(unsigned short)
    void ParticleEmitter::SetAtlasMaterialSettingsSlotXY(ushort param_1) {
        m_atlasMaterialSettingsSlotXY = param_1;
    }

    // 0x1007e61f0, 16 bytes, complete-object destructor, inline, placed by class name
    // ParticleEmitter::~ParticleEmitter(): jumps straight to the base-object destructor

    // 0x1007e6200, 64 bytes, base-object destructor, inline, placed by class name
    // ParticleEmitter::~ParticleEmitter()
    void ParticleEmitter::~ParticleEmitter() {
        (&field_10480)->~Array();
        (&field_10456)->~Array();
        (&field_160)->~fixed_vector();
        ~shared_ptr();
    }

    // 0x1007e7360, 16 bytes, inline, placed by class name
    // ParticleEmitter::ShouldRender() const
    byte ParticleEmitter::ShouldRender() {
        return IsHidden(this) ^ 1;
    }

    // 0x1007e7440, 16 bytes, inline, placed by class name
    // ParticleEmitter::GetAtlasMaterialSettingsSlotXY() const
    ushort ParticleEmitter::GetAtlasMaterialSettingsSlotXY() {
        return m_atlasMaterialSettingsSlotXY;
    }

    // 0x1007ebbe0, 32 bytes, inline, placed by class name
    // auto ParticleEmitter::UpdateAge(float)::$_1::operator()<Particle>(Particle&) const
    /* auto 
   ParticleEmitter::UpdateAge(float)::$_1::TEMPNAMEPLACEHOLDERVALUE(Particle&)
   const */

    undefined8 ParticleEmitter::UpdateAge(float)::$_1::operator()(Particle* param_1) {
        float* pfVar1;
        float fVar2;

        pfVar1 = *(float**)this;
        fVar2 = param_1->field_36 + *pfVar1;
        param_1->field_36 = fVar2;
        return CONCAT71((int7)((ulong)pfVar1 >> 8), param_1->field_40 <= fVar2);
    }

    // 0x1007ebe90, 48 bytes, inline, placed by class name
    // auto ParticleEmitter::ImposeBoundaryLimits()::$_2::operator()<Particle>(Particle&) const
    /* auto 
   ParticleEmitter::ImposeBoundaryLimits()::$_2::TEMPNAMEPLACEHOLDERVALUE(Particle&)
   const */

    undefined8 ParticleEmitter::ImposeBoundaryLimits()::$_2::operator()(Particle* param_1) {
        undefined8 uVar1;

        uVar1 = CONCAT71((int7)((ulong) * (int**)this >> 8), 1);
        if ((float)**(int**)this <= (float)param_1->field_4) {
            uVar1 = CONCAT71((int7)((ulong) * (int**)(this + 8) >> 8),
                             (float)**(int**)(this + 8) <= (float)param_1->field_4);
        }
        return uVar1;
    }

    // 0x1007f5b10, 256 bytes, inline, placed by class name
    // ParticleEmitter::operator=(ParticleEmitter&&)
    /* ParticleEmitter::TEMPNAMEPLACEHOLDERVALUE(ParticleEmitter&&) */

    ParticleEmitter* ParticleEmitter::operator=(ParticleEmitter* param_1) {
        undefined8 uVar1;
        ParticleManager* pPVar2;
        ParticleSystem* pPVar3;
        long* plVar4;
        undefined1 uVar5;
        undefined7 uVar6;
        undefined3 uVar7;
        uint uVar8;
        char cVar9;
        undefined2 uVar10;
        int iVar11;
        float fVar12;
        float fVar13;
        float fVar14;

        shared_ptr<ModelParticleSource>::operator=((shared_ptr<ModelParticleSource>*)this, (shared_ptr*)param_1);
        pPVar2 = param_1->field_24;
        pPVar3 = param_1->field_32;
        plVar4 = param_1->field_40;
        uVar5 = param_1->field_48;
        uVar6 = param_1->field_49;
        uVar1 = param_1->field_56;
        m_emitterTemplate = param_1->m_emitterTemplate;
        field_24 = pPVar2;
        field_32 = pPVar3;
        field_40 = plVar4;
        field_48 = uVar5;
        field_49 = uVar6;
        field_56 = uVar1;
        uVar5 = param_1->field_68;
        uVar7 = param_1->field_69;
        uVar8 = param_1->field_72;
        *(undefined8*)((long)&field_56 + 4) = *(undefined8*)((long)&param_1->field_56 + 4);
        field_68 = uVar5;
        field_69 = uVar7;
        field_72 = uVar8;
        (&field_76, (Vector3T*)&param_1->field_76)->SetXYZ();
        (&field_88, (Vector3T*)&param_1->field_88)->SetXYZ();
        (&field_100, (Vector3T*)&param_1->field_100)->SetXYZ();
        (&field_112, (Vector3T*)&param_1->field_112)->SetXYZ();
        (&field_124, (Vector3T*)&param_1->field_124)->SetXYZ();
        cVar9 = param_1->field_137;
        uVar10 = param_1->field_138;
        iVar11 = param_1->field_140;
        uVar1 = *(undefined8*)((long)&param_1->field_140 + 2);
        field_136 = param_1->field_136;
        field_137 = cVar9;
        field_138 = uVar10;
        field_140 = iVar11;
        *(undefined8*)((long)&field_140 + 2) = uVar1;
        eastl::fixed_vector<Particle, 128ul, true, eastl::allocator>::operator=(
            (fixed_vector<Particle, 128ul, true, eastl::allocator>*)&field_160, (fixed_vector*)&param_1->field_160);
        m_hidden = param_1->m_hidden;
        Array<int, SafeBucketAllocatorEASTL>::operator=((Array<int, SafeBucketAllocatorEASTL>*)&field_10456,
                                                        (Array*)&param_1->field_10456);
        Array<int, SafeBucketAllocatorEASTL>::operator=((Array<int, SafeBucketAllocatorEASTL>*)&field_10480,
                                                        (Array*)&param_1->field_10480);
        fVar12 = param_1->field_10508;
        fVar13 = param_1->field_10512;
        fVar14 = param_1->field_10516;
        field_10504 = param_1->field_10504;
        field_10508 = fVar12;
        field_10512 = fVar13;
        field_10516 = fVar14;
        *(undefined8*)((long)&field_10516 + 2) = *(undefined8*)((long)&param_1->field_10516 + 2);
        return this;
    }

    // 0x1007f65e0, 16 bytes, complete-object constructor, inline, placed by class name
    // ParticleEmitter::ParticleEmitter(ParticleEmitter&&): jumps straight to the base-object constructor

    // 0x1007f6600, 160 bytes, base-object constructor, inline, placed by class name
    // ParticleEmitter::ParticleEmitter(ParticleEmitter&&)
    void ParticleEmitter::ParticleEmitter(ParticleEmitter* param_1) {
        float fVar1;
        float fVar2;
        float fVar3;

        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)this, (shared_ptr*)param_1);
        _memcpy(&m_emitterTemplate, &param_1->m_emitterTemplate, 134);
        new (&field_160, (fixed_vector*)&param_1->field_160)
            eastl::fixed_vector<Particle, 128ul, true, eastl::allocator>();
        m_hidden = param_1->m_hidden;
        new (&field_10456, (Array*)&param_1->field_10456) Array<int, SafeBucketAllocatorEASTL>();
        new (&field_10480, (Array*)&param_1->field_10480) Array<int, SafeBucketAllocatorEASTL>();
        *(undefined8*)((long)&field_10516 + 2) = *(undefined8*)((long)&param_1->field_10516 + 2);
        fVar1 = param_1->field_10508;
        fVar2 = param_1->field_10512;
        fVar3 = param_1->field_10516;
        field_10504 = param_1->field_10504;
        field_10508 = fVar1;
        field_10512 = fVar2;
        field_10516 = fVar3;
    }

} // namespace jag::graphics

namespace jag::math {
    // 0x1007ca350, 64 bytes, inline, placed by debug map only (low confidence)
    // FRandMT(float)
    void FRandMT(float param_1) {
        mersenne_twister_engine* pmVar1;
        param_type local_28[12];

        pmVar1 = (mersenne_twister_engine*)getMersenneTwistorEngine();
        std::uniform_real_distribution<float>::param_type::param_type(local_28, 0.0, param_1);
        std::uniform_real_distribution<float>::operator()(pmVar1, local_28);
    }

    // 0x1007cad30, 96 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<float>& Vector3Cross<float>(Vector3T<float>&, Vector3T<float> const&, Vector3T<float> const&)
    Vector3T* Vector3Cross<float>(Vector3T* param_1, Vector3T* param_2, Vector3T* param_3) {
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;

        fVar1 = *(float*)(param_3 + 8);
        fVar2 = *(float*)(param_2 + 8);
        *(float*)param_1 = *(float*)(param_2 + 4) * fVar1 - *(float*)(param_3 + 4) * fVar2;
        fVar3 = *(float*)param_3;
        fVar4 = *(float*)param_2;
        *(float*)(param_1 + 4) = fVar2 * fVar3 - fVar1 * fVar4;
        *(float*)(param_1 + 8) = fVar4 * *(float*)(param_3 + 4) - fVar3 * *(float*)(param_2 + 4);
        return param_1;
    }

} // namespace jag::math
