// libs/graphics/runetek7/particles/ParticleEmitter.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "ParticleEmitter.h"

namespace jag::graphics {
    // 0x100f43878
    int32_t ParticleEmitter::m_debugIsolatedEmitter = -1;

    // 0x100f4387c
    int32_t ParticleEmitter::m_debugIsolatedAffector = -1;

    // 0x1039bd330
    bool ParticleEmitter::m_debugEmitters;

    // 0x1039bd331
    bool ParticleEmitter::m_debugIsolatedEmitterHistory;

    // 0x1039bd338, set at startup by ___cxx_global_var_init.10
    eastl::vector<math::Vector3T<float>> ParticleEmitter::m_debugEmitterPositions = vector<math::Vector3T<float>>();

    // 0x1039bd358, set at startup by ___cxx_global_var_init.11
    eastl::vector<math::Vector3T<float>> ParticleEmitter::m_debugEmitterNormals = vector<math::Vector3T<float>>();

    // 0x1039bd378
    bool ParticleEmitter::m_debugStopEffectors;

    // 0x100009ca0: ParticleEmitter::GetEmitterSource() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x100023f30: ParticleEmitter::GetEmitterTemplate() const has the same machine code as oldscape::option::IOption::GetName() const

    // 0x1004900d0: ParticleEmitter::GetParticles() const has the same machine code as game::MapEnvironmentSettings::GetVolumetricSettings() const

    // 0x1007c9ed0
    ParticleEmitter::ParticleEmitter(const shared_ptr<ModelParticleSource>& modelParticleSource,
                                     ParticleManager* particleManager, ParticleSystem* particleSystem)
        : shared_ptr(), field_68(0), m_emitterTemplate(nullptr), field_24(nullptr), field_32(nullptr),
          field_40(nullptr), field_72(4294967295) {
        field_136 = '\0';
        field_137 = '\x01';
        field_140 = 0;
        field_144 = 0;
        m_enabled = true;
        field_149 = false;
        new (&field_160) eastl::fixed_vector<Particle, 128ul>();
        m_hidden = false;
        new (&field_10456) Array<int, SafeBucketAllocatorEASTL>();
        new (&field_10480) Array<int, SafeBucketAllocatorEASTL>();
        field_10504 = 0.0;
        field_10508 = 0.0;
        field_10512 = 0.0;
        field_10516 = 0.0;
        field_10520 = 0.0;
        Initialise(modelParticleSource, particleManager, particleSystem);
    }

    // 0x1007ca020
    void ParticleEmitter::Initialise(const shared_ptr<ModelParticleSource>& modelParticleSource,
                                     ParticleManager* particleManager, ParticleSystem* particleSystem) {
        uint8_t* this_00;
        uint32_t uVar1;
        int iVar2;
        unsigned int uVar4;
        unsigned int uVar5;
        uint32_t* puVar7;
        int* piVar8;
        unsigned int* puVar9;
        unsigned long uVar11;
        unsigned long uVar12;

        bool cVar3 = modelParticleSource.operator_cast_to_bool();
        if (((!cVar3) || (particleManager == nullptr)) || (particleSystem == nullptr)) {
            LogAssert("emitterSource && particleManager && parentSystem",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/ParticleEmitter.cpp",
                      33, nullptr);
        }
        cVar3 = modelParticleSource.operator_cast_to_bool();
        if (!cVar3) {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/ParticleEmitter.cpp",
                      90, "ParticleEmitter: Unknown spec constructor");
        } else {
            uVar4 = ((Minimap*)modelParticleSource.operator->())->GetLevel();
            m_emitterTemplate = (ParticleEmitterTemplate*)particleManager->GetEmitterTemplate(uVar4);
            field_10504 = (float)math::FRandMT(1.0);
            uVar4 = m_emitterTemplate->field_232.end();
            if (0 < (int)uVar4) {
                uVar11 = 0;
                field_10456.set_max_size((long)(int)uVar4, 0);
                do {
                    puVar7 = &m_emitterTemplate->field_232[uVar11];
                    uVar1 = *puVar7;
                    puVar7 = &field_10456[uVar11];
                    *puVar7 = uVar1;
                    uVar11 = uVar11 + 1;
                } while (uVar4 != uVar11);
            }
            uVar4 = m_emitterTemplate->field_280.end();
            uVar5 = m_emitterTemplate->field_256.end();
            if ((0 < (int)uVar4) || (0 < (int)uVar5)) {
                this_00 = &field_10480;
                uVar11 = 0;
                this_00->set_max_size((long)(int)(uVar5 + uVar4), 0);
                if (0 < (int)uVar5) {
                    uVar12 = 0;
                    do {
                        piVar8 = &m_emitterTemplate->field_256[uVar12];
                        iVar2 = *piVar8;
                        uVar11 = uVar12 + 1;
                        piVar8 = (int*)(*this_00)[uVar12];
                        *piVar8 = iVar2 + 1;
                        uVar12 = uVar11;
                    } while (uVar5 != uVar11);
                }
                if (0 < (int)uVar4) {
                    uVar12 = 0;
                    do {
                        puVar9 = &m_emitterTemplate->field_280[uVar12];
                        uVar5 = *puVar9;
                        puVar9 = (unsigned int*)(*this_00)[uVar11 + uVar12];
                        *puVar9 = ~uVar5;
                        uVar12 = uVar12 + 1;
                    } while (uVar4 != uVar12);
                }
            }
            *this = modelParticleSource;
            field_24 = particleManager;
            field_32 = particleSystem;
            field_40 = (long*)particleManager->GetHeightProvider();
            if ((m_debugIsolatedEmitter != -1) && (m_emitterTemplate->field_0 == m_debugIsolatedEmitter)) {
                m_debugEmitterPositions.clear();
                m_debugEmitterNormals.clear();
            }
        }
    }

    // 0x1007ca580
    uint64_t ParticleEmitter::Update(float arg1, math::AABB& aabb, bool arg3) {
        float fVar1;
        float arg1_00;
        unsigned int in_XMM0_Db;
        unsigned int uVar2;
        unsigned int in_XMM0_Dc;
        unsigned int uVar3;
        unsigned int in_XMM0_Dd;
        unsigned int uVar4;
        float fVar5;
        uint8_t local_68[32];
        float local_48;
        unsigned int uStack_44;
        unsigned int uStack_40;
        unsigned int uStack_3c;
        float local_38;
        unsigned int uStack_34;
        unsigned int uStack_30;
        unsigned int uStack_2c;
        float local_24;

        if (field_136 != '\0') {
            if (!arg3) {
                field_140 = field_140 + 1;
            }
            if (field_144 + 50 < field_140) {
                return 1;
            }
            if ((m_debugIsolatedEmitter != -1) && (m_emitterTemplate->field_0 != m_debugIsolatedEmitter)) {
                return 1;
            }
            local_38 = arg1;
            uStack_34 = in_XMM0_Db;
            uStack_30 = in_XMM0_Dc;
            uStack_2c = in_XMM0_Dd;
            CheckLevelHeightsProvider();
            if (0.0 < local_38) {
                uVar2 = uStack_34;
                uVar3 = uStack_30;
                uVar4 = uStack_2c;
                do {
                    fVar5 = local_38 - 0.02;
                    fVar1 = (float)-(unsigned int)(0.02 < local_38);
                    uStack_34 = 0;
                    uStack_30 = 0;
                    uStack_2c = 0;
                    if (0.02 <= local_38) {
                        local_38 = 0.02;
                    }
                    arg1_00 = local_38;
                    if ((m_enabled != false) && (field_149 == false)) {
                        uStack_34 = 0;
                        uStack_30 = 0;
                        uStack_2c = 0;
                        local_48 = fVar5;
                        uStack_44 = uVar2;
                        uStack_40 = uVar3;
                        uStack_3c = uVar4;
                        local_24 = local_38;
                        if (field_137 != '\0') {
                            local_38 = fVar1;
                            UpdatePositions();
                            fVar1 = local_38;
                        }
                        local_38 = fVar1;
                        CheckEmissionQueue(local_24);
                        arg1_00 = local_24;
                        fVar5 = local_48;
                        uVar2 = uStack_44;
                        uVar3 = uStack_40;
                        uVar4 = uStack_3c;
                        fVar1 = local_38;
                    }
                    uStack_34 = uVar2 & uStack_34;
                    uStack_30 = uVar3 & uStack_30;
                    uStack_2c = uVar4 & uStack_2c;
                    local_38 = (float)(~(unsigned int)fVar1 & 3212836864 | (unsigned int)fVar5 & (unsigned int)fVar1);
                    UpdateActiveParticles((ParticleEmitter*)local_68, arg1_00);
                    aabb = *local_68;
                    uVar2 = uStack_34;
                    uVar3 = uStack_30;
                    uVar4 = uStack_2c;
                } while (0.0 < local_38);
            }
        }
        return 0;
    }

    // 0x1007ca6c0
    void ParticleEmitter::CheckLevelHeightsProvider() {
        uint8_t* this_00;
        float fVar1;
        unsigned int uVar2;
        int iVar5;
        int iVar6;
        int* piVar7;
        unsigned int* puVar8;
        Logger* this_01;
        uint64_t uVar9;
        unsigned long arg1;
        int iVar10;
        fixed_string<char, 512> local_260;

        long* plVar3 = field_40;
        if ((plVar3 != nullptr) && (field_68 != '\0')) {
            this_00 = &field_48;
            if ((**(void (**)(...))*plVar3)(plVar3, this_00, &field_112) != '\0') {
                field_68 = 0;
                field_72 = 0;
                fVar1 = field_116;
                arg1 = 0;
                do {
                    piVar7 = (int*)(*this_00)[arg1];
                    if (*piVar7 < (int)fVar1) {
                        field_72 = (unsigned int)arg1;
                        goto LAB_1007ca8f9;
                    }
                    arg1 = arg1 + 1;
                } while (arg1 != 5);
                if ((m_emitterTemplate->field_136 != -2) || (m_emitterTemplate->field_140 != -2)) {
                    local_260 = eastl::fixed_string<char, 512>();
                    iVar10 = m_emitterTemplate->field_136;
                    if (iVar10 != -2) {
                        if (iVar10 == -1) {
                            local_260.append("killonabovelevel=current");
                        } else {
                            local_260.append_sprintf("killonabovelevel=%d");
                        }
                        if (m_emitterTemplate->field_140 != -2) {
                            local_260.append(" and ");
                        }
                    }
                    iVar10 = m_emitterTemplate->field_140;
                    if (iVar10 != -2) {
                        if (iVar10 == -1) {
                            local_260.append("killonbelowlevel=current");
                        } else {
                            local_260.append_sprintf("killonbelowlevel=%d");
                        }
                    }
                    puVar8 = (unsigned int*)this_00->front();
                    uVar2 = *puVar8;
                    puVar8 = (unsigned int*)this_00->back();
                    local_260.append_sprintf(" [Floor bottom = %d, Ceiling Top = %d, Emitter height = %d]",
                                             (unsigned long)uVar2, (unsigned long)*puVar8,
                                             (unsigned long)(unsigned int)(int)field_116);
                    iVar5 = (int)field_112;
                    iVar10 = iVar5 + 511;
                    if (-1 < iVar5) {
                        iVar10 = iVar5;
                    }
                    iVar6 = (int)field_120;
                    iVar5 = iVar6 + 511;
                    if (-1 < iVar6) {
                        iVar5 = iVar6;
                    }
                    this_01 = logger::default_logger();
                    iVar6 = m_emitterTemplate->field_0;
                    uVar9 = local_260.begin();
                    this_01->Log(true, 3,
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                 "runetek7/particles/ParticleEmitter.cpp",
                                 460, "Particle Emitter %d at %d,%d,%d,%d is out of bounds of all levels - %s", iVar6,
                                 iVar10 >> 15, iVar5 >> 15, iVar10 >> 9 & 63, iVar5 >> 9 & 63, uVar9);
                }
            }
        }
    LAB_1007ca8f9:
    }

    // 0x1007ca940
    void ParticleEmitter::UpdatePositions() {
        void result;
        ReturnValue result;
        uint64_t local_70;
        uint64_t local_60[2];
        uint64_t local_50[2];
        uint64_t local_40[2];

        float local_68 = field_120;
        local_70._0_4_ = field_112;
        local_70._4_4_ = field_116;
        uint8_t* vector31 = &field_76;
        local_60[0] = *vector31 + field_88;
        local_40[0] = *local_60 + field_100;
        local_50[0] = *local_40 / *3.0;
        field_112.SetXYZ(*local_50);
        local_50[0] = field_88 - *vector31;
        local_40[0] = field_100 - *vector31;
        &result = (ReturnValue*)math::Vector3Cross<float>(field_124, *local_50, *local_40);
        result = math::Vector3T<float>::Normalize();
        if (((float)m_emitterTemplate->field_8 != 0.0) || ((float)m_emitterTemplate->field_16 != 0.0)) {
            UpdateConePositions();
        }
        field_137 = '\0';
        long* plVar1 = field_40;
        if (plVar1 != nullptr) {
            if ((**(void (**)(...))(*plVar1 + 8))(plVar1, &local_70, &field_112) != '\0') {
                field_68 = 1;
            }
        }
    }

    // 0x1007caa60
    void ParticleEmitter::CheckEmissionQueue(float arg1) {
        bool bVar1;
        int iVar3;
        float fVar5;

        float fVar4 = (float)m_emitterTemplate->GetRandomEmissionRate();
        fVar4 = fVar4 * arg1 + field_10504;
        field_10504 = fVar4;
        if (1.0 <= fVar4) {
            fVar5 = (float)_floorf();
            iVar3 = (int)fVar5;
            field_10504 = fVar4 - (float)(int)fVar5;
            if (0 < iVar3) {
                do {
                    if (GenerateNewParticle() == '\0') {
                        return;
                    }
                    bVar1 = 1 < iVar3;
                    iVar3 = iVar3 - 1;
                } while (bVar1);
            }
        }
    }

    // 0x1007caaf0
    ParticleEmitter* ParticleEmitter::UpdateActiveParticles(float arg1) {
        ParticleEmitter* in_RSI;

        if (in_RSI->field_24 == nullptr) {
            LogAssert("m_particleManager",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/ParticleEmitter.cpp",
                      1319, nullptr);
        }
        UpdateAge(in_RSI, arg1);
        UpdateSpeed(in_RSI, arg1);
        UpdateLocalAndWorldEffectors(in_RSI, arg1);
        UpdateGlobalEffectors(in_RSI, arg1);
        UpdatePosition(in_RSI, arg1);
        ImposeBoundaryLimits(in_RSI);
        UpdateSize(in_RSI, arg1);
        new (this) math::AABB();
        UpdateBoundingBox(in_RSI, (AABB*)this);
        UpdateColoursAndRotation(in_RSI, arg1);
        return this;
    }

    // 0x1007cabb0
    void ParticleEmitter::UpdateConePositions() {
        uint8_t* this_00 = &field_124;
        auto pfVar4 = this_00->second();
        float fVar1 = *pfVar4;
        pfVar4 = (float*)this_00->SSOBeginPtr();
        float fVar5 = (float)atan2(fVar1, *pfVar4);
        pfVar4 = (float*)this_00->y();
        fVar1 = *pfVar4;
        pfVar4 = (float*)this_00->SSOBeginPtr();
        float fVar6 = *pfVar4;
        pfVar4 = (float*)this_00->SSOBeginPtr();
        float fVar7 = *pfVar4;
        pfVar4 = (float*)this_00->second();
        float fVar2 = *pfVar4;
        pfVar4 = (float*)this_00->second();
        fVar6 = (float)::sqrt(fVar2 * *pfVar4 + fVar6 * fVar7);
        fVar6 = (float)atan2(fVar1, fVar6);
        ParticleEmitterTemplate* pPVar3 = m_emitterTemplate;
        fVar1 = (float)pPVar3->field_4;
        fVar7 = (float)pPVar3->field_8 - fVar1;
        field_10512 = fVar7;
        field_10508 = fVar7 * -0.5 + fVar5 + fVar1;
        fVar1 = (float)pPVar3->field_12;
        fVar7 = (float)pPVar3->field_16 - fVar1;
        field_10520 = fVar7;
        field_10516 = (fVar1 - fVar6) + fVar7 * -0.5;
    }

    // 0x1007cad90
    uint64_t ParticleEmitter::GetConeDirection() {
        uint64_t uVar2;

        float local_18 = field_10508;
        float fVar1 = (float)math::FRandMT(field_10512);
        local_18 = fVar1 + local_18;
        float local_14 = field_10516;
        fVar1 = (float)math::FRandMT(field_10520);
        fVar1 = (float)fmod(fVar1 + local_14, 3.1415927f);
        float local_38 = (float)(~-(unsigned int)(0.0 <= fVar1) & (unsigned int)(fVar1 + 3.1415927f) |
                                 (unsigned int)fVar1 & -(unsigned int)(0.0 <= fVar1));
        uint32_t uStack_34 = 0;
        uint32_t uStack_30 = 0;
        uint32_t uStack_2c = 0;
        local_14 = (float)::sin(local_38);
        float local_1c = (float)::cos(local_18);
        local_1c = local_1c * local_14;
        local_38 = (float)::cos(local_38);
        fVar1 = (float)::sin(local_18);
        ColourHSL local_48(local_1c, local_38, local_14 * fVar1);
        uVar2._0_4_ = local_48.field_0;
        uVar2._4_4_ = local_48.field_4;
        return uVar2;
    }

    // 0x1007caeb0
    void ParticleEmitter::GetNewParticleDirection(math::Vector3T<float>& vector3) {
        Vector3T<float>* vector3_00;
        uint64_t local_28[2];

        if (m_emitterTemplate == nullptr) {
            LogAssert("m_emitterTemplate",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/ParticleEmitter.cpp",
                      224, nullptr);
        }
        if (((float)m_emitterTemplate->field_8 == 0.0) && ((float)m_emitterTemplate->field_16 == 0.0)) {
            vector3_00 = (Vector3T<float>*)&field_124;
        } else {
            local_28[0] = GetConeDirection();
            vector3_00 = (Vector3T<float>*)local_28;
        }
        vector3.SetXYZ(*vector3_00);
    }

    // 0x1007caf30
    void ParticleEmitter::GetNewParticlePosition(math::Vector3T<float>& vector3) {
        float local_1c = (float)math::FRandMT(1.0);
        float fVar1 = (float)math::FRandMT(1.0);
        float local_60 = fVar1 + local_1c;
        fVar1 = (float)(~-(unsigned int)(1.0 < local_60) & (unsigned int)fVar1 |
                        (unsigned int)(1.0 - fVar1) & -(unsigned int)(1.0 < local_60));
        if (1.0 < local_60) {
            local_1c = 1.0 - local_1c;
        }
        float arg1 = local_1c;
        local_1c = 1.0 - (fVar1 + local_1c);
        uint64_t local_48 = *arg1 * field_76;
        float local_40 = local_60;
        uint64_t local_38 = *fVar1 * field_88;
        float local_30 = local_60;
        uint64_t local_58 = local_48 + local_38;
        float local_50 = local_60;
        uint64_t local_28 = *local_1c * field_100;
        float local_20 = local_60;
        vector3.SetXYZ(local_58 + local_28);
    }

    // 0x1007cb040
    bool ParticleEmitter::GenerateNewParticle() {
        Particle* vector3;
        float local_50;
        float local_4c;
        float local_48;
        unsigned int local_44;
        float local_40;
        float local_3c;
        float local_38;
        bool local_32;
        bool local_31;

        if (field_24 == nullptr) {
            LogAssert("m_particleManager",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/ParticleEmitter.cpp",
                      256, nullptr);
        }
        unsigned long uVar1 = field_160.size();
        if (uVar1 < 2049) {
            local_50 = (float)m_emitterTemplate->GetRandomLifetime();
            local_4c = (float)m_emitterTemplate->GetRandomSpeed();
            local_48 = (float)m_emitterTemplate->GetRandomSize();
            local_44 = m_emitterTemplate->GetRandomRGBA();
            local_40 = (float)m_emitterTemplate->GetRandomRotationRate();
            local_3c = (float)m_emitterTemplate->GetRandomRotationSpawn();
            local_38 = 0.0;
            local_32 = (float)m_emitterTemplate->field_96 != 1.1754944e-38;
            local_31 = (float)m_emitterTemplate->field_100 != 1.1754944e-38;
            vector3 =
                eastl::vector<Particle, eastl::fixed_vector_allocator<80ul, 128ul, 16ul, 0ul, true>>::emplace_back<
                    ParticleEmitter&, float&, float&, float, float&, float&, float&, unsigned int&, bool, bool>(
                    (vector<Particle, eastl::fixed_vector_allocator<80ul, 128ul, 16ul, 0ul, true>>*)&field_160, this,
                    &local_4c, &local_48, &local_38, &local_50, &local_40, &local_3c, &local_44, &local_32, &local_31);
            GetNewParticleDirection(vector3->field_16);
            GetNewParticlePosition(*vector3);
        }
        return uVar1 < 2049;
    }

    // 0x1007cb5a0
    void ParticleEmitter::SortParticles() {
        Particle* particle1;
        Particle* particle2;
        __0* arg3;

        if (IsHidden() == '\0') {
            particle1 = (Particle*)field_160.HeapBeginPtr();
            particle2 = (Particle*)field_160.end();
            eastl::sort<Particle*, ParticleEmitter::SortParticles()::__0>(particle1, particle2, arg3);
        }
    }

    // 0x1007cb600
    void ParticleEmitter::UpdatePosition(const math::Vector3T<float>& vector31, const math::Vector3T<float>& vector32,
                                         const math::Vector3T<float>& vector33) {
        void result;
        ReturnValue result;
        uint64_t local_80[2];
        uint64_t local_70;
        uint64_t local_60[2];
        uint64_t local_50[2];
        uint64_t local_40[2];

        uint8_t* vector32_00 = &field_76;
        if (vector31 != *vector32_00) {
            vector32_00->SetXYZ(vector31);
            field_137 = '\x01';
        }
        uint8_t* vector32_01 = &field_88;
        if (vector32 != *vector32_01) {
            vector32_01->SetXYZ(vector32);
            field_137 = '\x01';
        }
        uint8_t* vector32_02 = &field_100;
        if (vector33 != *vector32_02) {
            vector32_02->SetXYZ(vector33);
            field_137 = '\x01';
        }
        field_136 = '\x01';
        if ((((m_debugIsolatedEmitterHistory != '\0') && (m_debugIsolatedEmitter != -1)) &&
             (m_emitterTemplate->field_0 == m_debugIsolatedEmitter)) &&
            (field_137 != '\0')) {
            new (&local_70) math::Vector3T();
            new (local_60) math::Vector3T();
            local_80[0] = *vector32_00 + *vector32_01;
            local_40[0] = *local_80 + *vector32_02;
            local_50[0] = *local_40 / *3.0;
            local_70.Set(*local_50);
            local_50[0] = *vector32_01 - *vector32_00;
            local_40[0] = *vector32_02 - *vector32_00;
            &result = (ReturnValue*)math::Vector3Cross<float>(*local_60, *local_50, *local_40);
            result = math::Vector3T<float>::Normalize();
            m_debugEmitterPositions.push_back(local_70);
            m_debugEmitterNormals.push_back(*local_60);
        }
        local_70 = *vector32_01 - *vector32_00;
        float local_64 = math::Vector3Dot<float>(local_70, local_70);
        local_60[0] = *vector32_02 - *vector32_00;
        field_149 = math::Vector3Dot<float>(*local_60, *local_60) < 1e-07 && local_64 < 1e-07;
        field_144 = field_140;
    }

    // 0x1007cb870
    void ParticleEmitter::TranslateParticles(const math::Vector3T<float>& vector3) {
        auto this_00 = field_160.HeapBeginPtr();
        auto pVVar1 = field_160.end();
        for (; this_00 != pVVar1; this_00 = this_00 + 80) {
            *this_00 += vector3;
        }
        field_76 += vector3;
        field_88 += vector3;
        field_100 += vector3;
        field_137 = '\x01';
    }

    // 0x1007cb930
    void ParticleEmitter::RenderDebug() const {
        unsigned int uVar3;
        long lVar6;
        Vector3T<float>* vector3;
        long* plVar7;
        float* pfVar8;
        char* pcVar9;
        char* pcVar10;
        unsigned int* puVar11;
        unsigned int* puVar12;
        uint32_t* puVar13;
        char* pcVar14;
        SideBarData local_308;
        unsigned int local_2fc;
        uint8_t local_2f8[16];
        SideBarData local_2e0;
        SideBarData local_298;

        if ((m_debugIsolatedEmitterHistory == '\0') || (m_debugIsolatedEmitter == -1)) {
            lVar6 = m_debugEmitterPositions.size();
            if (lVar6 != 0) {
                m_debugEmitterPositions.clear();
                m_debugEmitterNormals.clear();
            }
        } else {
            lVar6 = m_debugEmitterPositions.size();
            if (lVar6 != 0) {
                vector3 = &m_debugEmitterPositions[0];
                local_2f8._8_8_ = m_debugEmitterNormals[0];
                plVar7 = DebugPrimitiveCollectorBasic::GetCollector("");
                if (plVar7 != nullptr) {
                    local_260 = math::Sphere(*vector3, 1.0);
                    local_2e0 = oldscape::sidebars::SideBarData(-1, 3);
                    (**(void (**)(...))(*plVar7 + 32))(plVar7, &local_260, &local_2e0);
                }
                plVar7 = DebugPrimitiveCollectorBasic::GetCollector("");
                if (plVar7 != nullptr) {
                    local_2e0[0]._0_8_ = *32.0 * *local_2f8._8_8_;
                    local_260[0]._0_8_ = *vector3 + local_2e0;
                    local_298 = oldscape::sidebars::SideBarData(-1, 1);
                    (**(void (**)(...))(*plVar7 + 24))(plVar7, vector3, &local_260);
                }
                local_260 = eastl::fixed_string<char, 512>();
                local_260.sprintf("%d", 0);
                local_298[0]._8_4_ = *(uint32_t*)(vector3 + 8);
                local_298[0]._0_8_ = *(uint64_t*)vector3;
                pfVar8 = (float*)local_298.y();
                *pfVar8 = *pfVar8 - 50.0;
                plVar7 = DebugPrimitiveCollectorBasic::GetCollector("");
                if (plVar7 != nullptr) {
                    pcVar9 = (char*)local_260.begin();
                    new (local_2f8) eastl::allocator("EASTL basic_string");
                    local_2e0 = eastl::string(pcVar9, local_2f8);
                    local_308 = oldscape::sidebars::SideBarData(-1, 1);
                    (**(void (**)(...))(*plVar7 + 136))(plVar7, &local_298, &local_2e0, &local_308);
                }
            }
        }
        if (m_debugEmitters == '\0') {
            return;
        }
        Sphere local_260;
        ParticleEmitter* pPVar16 = this;
        unsigned int uVar1 = m_emitterTemplate->field_0;
        unsigned int uVar5 = field_160.size();
        local_260.sprintf("Emitter %d (%u)", (unsigned long)uVar1, (unsigned long)uVar5);
        if (((float)pPVar16->m_emitterTemplate->field_4 != 0.0) ||
            ((float)pPVar16->m_emitterTemplate->field_8 != 0.0)) {
            local_2e0 = eastl::fixed_string<char, 16>();
            local_298 = eastl::fixed_string<char, 16>();
            pcVar9 = ToText<16, true>(&local_2e0, (float)pPVar16->m_emitterTemplate->field_4);
            pcVar10 = ToText<16, true>(&local_298, (float)pPVar16->m_emitterTemplate->field_8);
            local_260.append_sprintf(" [az:%s %s]", pcVar9, pcVar10);
        }
        if (((float)pPVar16->m_emitterTemplate->field_12 != 0.0) ||
            ((float)pPVar16->m_emitterTemplate->field_16 != 0.0)) {
            local_2e0 = eastl::fixed_string<char, 16>();
            local_298 = eastl::fixed_string<char, 16>();
            pcVar9 = ToText<16, true>(&local_2e0, (float)pPVar16->m_emitterTemplate->field_12);
            pcVar10 = ToText<16, true>(&local_298, (float)pPVar16->m_emitterTemplate->field_16);
            local_260.append_sprintf(" [zen:%s %s]", pcVar9, pcVar10);
        }
        int iVar2 = pPVar16->m_emitterTemplate->field_136;
        if (iVar2 != -2) {
            local_2e0 = eastl::fixed_string<char, 16>();
            if (iVar2 == -1) {
                pcVar9 = "this";
            } else {
                pcVar9 = ToText<16, true>(&local_2e0, iVar2, 10);
            }
            local_260.append_sprintf(" [above %s]", pcVar9);
        }
        iVar2 = pPVar16->m_emitterTemplate->field_140;
        if (iVar2 != -2) {
            local_2e0 = eastl::fixed_string<char, 16>();
            if (iVar2 == -1) {
                pcVar9 = "this";
            } else {
                pcVar9 = ToText<16, true>(&local_2e0, iVar2, 10);
            }
            local_260.append_sprintf(" [below %s]", pcVar9);
        }
        uint8_t* puVar15 = &pPVar16->m_emitterTemplate->field_232;
        bool cVar4 = puVar15->empty();
        local_2f8._8_4_ = 4294967295;
        if (!cVar4) {
            local_2e0 = eastl::fixed_string<char, 32>();
            puVar11 = (unsigned int*)puVar15->data();
            puVar12 = (unsigned int*)puVar15->end();
            if (puVar11 != puVar12) {
                pcVar9 = " [Aff:";
                do {
                    uVar1 = *puVar11;
                    lVar6 = field_32->GetGlobalEffectorTemplate(uVar1);
                    iVar2 = *(int*)(lVar6 + 32);
                    pcVar10 = ToText<32, true>(&local_2e0, (Vector3T<float>*)(lVar6 + 4));
                    pcVar14 = "Pos";
                    if (iVar2 == 0) {
                        pcVar14 = "Accel";
                    }
                    local_260.append_sprintf("%s%u (%s %s)", pcVar9, (unsigned long)uVar1, pcVar14, pcVar10);
                    puVar11 = puVar11 + 1;
                    pcVar9 = ", ";
                } while (puVar11 != puVar12);
            }
            local_260.append("]");
        }
        puVar15 = &pPVar16->m_emitterTemplate->field_280;
        cVar4 = puVar15->empty();
        if (!cVar4) {
            local_2e0 = eastl::fixed_string<char, 32>();
            puVar11 = (unsigned int*)puVar15->data();
            puVar12 = (unsigned int*)puVar15->end();
            if (puVar11 != puVar12) {
                pcVar9 = " [LocalEff:";
                do {
                    local_260.append_sprintf("%s%u", pcVar9, (unsigned long)*puVar11);
                    puVar11 = puVar11 + 1;
                    pcVar9 = ", ";
                } while (puVar11 != puVar12);
            }
            local_260.append("]");
        }
        if ((pPVar16->field_68 == '\0') &&
            ((pPVar16->m_emitterTemplate->field_136 != -2 || (pPVar16->m_emitterTemplate->field_140 != -2)))) {
            puVar15 = &pPVar16->field_48;
            puVar11 = (unsigned int*)(*puVar15)[0];
            local_2fc = *puVar11;
            puVar11 = (unsigned int*)(*puVar15)[1];
            uVar1 = *puVar11;
            puVar11 = (unsigned int*)(*puVar15)[2];
            uVar5 = *puVar11;
            puVar11 = (unsigned int*)(*puVar15)[3];
            uVar3 = *puVar11;
            puVar13 = (uint32_t*)(*puVar15)[4];
            pPVar16 = this;
            local_260.append_sprintf(" [H:%d,%d,%d,%d,%d]", (unsigned long)local_2fc, (unsigned long)uVar1,
                                     (unsigned long)uVar5, (unsigned long)uVar3, *puVar13);
        }
        plVar7 = DebugPrimitiveCollectorBasic::GetCollector("");
        if (plVar7 != nullptr) {
            pcVar9 = (char*)local_260.begin();
            local_2e0 = eastl::string(pcVar9);
            new (local_2f8) oldscape::sidebars::SideBarData(-1, 0);
            (**(void (**)(...))(*plVar7 + 136))(plVar7, &pPVar16->field_112, &local_2e0, local_2f8);
        }
        plVar7 = DebugPrimitiveCollectorBasic::GetCollector("");
        if (plVar7 != nullptr) {
            local_298[0]._0_8_ = *256.0 * pPVar16->field_124;
            local_2e0[0]._0_8_ = pPVar16->field_112 + local_298;
            new (local_2f8) oldscape::sidebars::SideBarData(-1, 1);
            (**(void (**)(...))(*plVar7 + 24))(plVar7, &pPVar16->field_112, &local_2e0, local_2f8);
        }
        plVar7 = DebugPrimitiveCollectorBasic::GetCollector("");
        if (plVar7 != nullptr) {
            local_2e0 = oldscape::sidebars::SideBarData(-1, 1);
            (**(void (**)(...))(*plVar7 + 24))(plVar7, &pPVar16->field_76, &pPVar16->field_88, &local_2e0);
        }
        plVar7 = DebugPrimitiveCollectorBasic::GetCollector("");
        if (plVar7 != nullptr) {
            local_2e0 = oldscape::sidebars::SideBarData(-1, 1);
            (**(void (**)(...))(*plVar7 + 24))(plVar7, &pPVar16->field_76, &pPVar16->field_100, &local_2e0);
        }
        plVar7 = DebugPrimitiveCollectorBasic::GetCollector("");
        if (plVar7 != nullptr) {
            local_2e0 = oldscape::sidebars::SideBarData(-1, 1);
            (**(void (**)(...))(*plVar7 + 24))(plVar7, &pPVar16->field_88, &pPVar16->field_100, &local_2e0);
        }
    }

    // 0x1007cc4e0
    uint64_t ParticleEmitter::CalculateViewDistances(const math::Vector4T<float>& vector4) {
        long lVar2;
        float* pfVar3;
        unsigned long arg1;
        uint64_t local_48;
        float local_40;
        float local_3c;

        float local_38 = 3.4028235e+38;
        float local_34 = -3.4028235e+38;
        uint8_t* this_00 = &field_160;
        int iVar1 = this_00->size();
        if (-1 < iVar1 - 1) {
            arg1 = (unsigned long)(iVar1 - 1);
            do {
                pfVar3 = (float*)(*this_00)[arg1];
                local_40 = pfVar3[2] * *(float*)(vector4 + 8) + pfVar3[1] * *(float*)(vector4 + 4) +
                           *pfVar3 * *(float*)vector4 + *(float*)(vector4 + 12);
                local_3c = local_40;
                if ((local_40 != 3.4028235e+38) && (0.0 < local_40)) {
                    pfVar3 = std::min<float>(local_38, local_40);
                    local_38 = *pfVar3;
                    pfVar3 = std::max<float>(local_34, local_40);
                    local_34 = *pfVar3;
                }
                lVar2 = (*this_00)[arg1];
                *(float*)(lVar2 + 12) = local_3c;
                arg1 = arg1 - 1;
            } while (-1 < (int)arg1);
        }
        local_48.pair<float&, float&, false>(local_38, local_34);
        return local_48;
    }

    // 0x1007cc660
    void ParticleEmitter::UpdateAge(float arg1) {
        uint8_t* this_00 = &field_160;
        float local_1c = arg1;
        auto pPVar1 = this_00->HeapBeginPtr();
        auto pPVar2 = this_00->end();
        pPVar1 = eastl::remove_if<Particle*, float->UpdateAge()::__1>(pPVar1, pPVar2, (__1*)&local_1c);
        pPVar2 = (Particle*)this_00->end();
        this_00->erase(pPVar1, pPVar2);
    }

    // 0x1007cc780
    void ParticleEmitter::UpdateSpeed(float arg1) {
        Vector3T<float>* pVVar3;
        Vector3T<float>* pVVar4;
        long lVar5;
        long lVar6;
        float fVar7;
        float fVar8;
        float fVar10;
        uint64_t local_48;
        float local_40;
        float local_38;
        float local_34;

        ParticleEmitterTemplate* pPVar2 = m_emitterTemplate;
        float fVar9 = pPVar2->field_224 * arg1;
        int iVar1 = pPVar2->field_56;
        if (iVar1 == 0) {
            if ((float)pPVar2->field_48 != 1.1754944e-38) {
                lVar5 = field_160.HeapBeginPtr();
                lVar6 = field_160.end();
                if (lVar5 != lVar6) {
                    fVar7 = (float)m_emitterTemplate->field_52;
                    do {
                        if (*(float*)(lVar5 + 36) <= fVar7 && fVar7 != *(float*)(lVar5 + 36)) {
                            *(float*)(lVar5 + 28) = *(float*)(lVar5 + 28) + fVar9;
                        }
                        lVar5 = lVar5 + 80;
                    } while (lVar5 != lVar6);
                }
            }
        } else {
            fVar7 = arg1 * pPVar2->field_60;
            if (iVar1 == 2) {
                fVar8 = (float)pPVar2->field_48;
                fVar10 = fVar9;
                pVVar3 = (Vector3T<float>*)field_160.HeapBeginPtr();
                pVVar4 = (Vector3T<float>*)field_160.end();
                if (fVar8 == 1.1754944e-38) {
                    if (pVVar3 != pVVar4) {
                        do {
                            local_48 = *pVVar3 - field_112;
                            local_40 = fVar10;
                            fVar9 = (float)local_48.LengthSq();
                            local_48 = (((uint64_t)local_48._4_4_ << 32) | (uint32_t)(fVar9 * fVar7));
                            local_38 = 0.0;
                            local_34 = 1.0;
                            fVar9 = math::Clamp<float>(local_48, local_38, local_34);
                            fVar10 = *(float*)(pVVar3 + 28) - fVar9 * *(float*)(pVVar3 + 28);
                            *(float*)(pVVar3 + 28) = fVar10;
                            pVVar3 = pVVar3 + 80;
                        } while (pVVar3 != pVVar4);
                    }
                } else if (pVVar3 != pVVar4) {
                    do {
                        if (*(float*)(pVVar3 + 36) < (float)m_emitterTemplate->field_52) {
                            *(float*)(pVVar3 + 28) = *(float*)(pVVar3 + 28) + fVar9;
                        }
                        local_48 = *pVVar3 - field_112;
                        local_40 = fVar10;
                        fVar8 = (float)local_48.LengthSq();
                        local_48 = (((uint64_t)local_48._4_4_ << 32) | (uint32_t)(fVar8 * fVar7));
                        local_38 = 0.0;
                        local_34 = 1.0;
                        fVar8 = math::Clamp<float>(local_48, local_38, local_34);
                        fVar10 = *(float*)(pVVar3 + 28) - fVar8 * *(float*)(pVVar3 + 28);
                        *(float*)(pVVar3 + 28) = fVar10;
                        pVVar3 = pVVar3 + 80;
                    } while (pVVar3 != pVVar4);
                }
            } else if (iVar1 == 1) {
                fVar8 = (float)pPVar2->field_48;
                fVar10 = fVar9;
                pVVar3 = (Vector3T<float>*)field_160.HeapBeginPtr();
                pVVar4 = (Vector3T<float>*)field_160.end();
                if (fVar8 == 1.1754944e-38) {
                    if (pVVar3 != pVVar4) {
                        do {
                            local_48 = *pVVar3 - field_112;
                            local_40 = fVar10;
                            fVar9 = (float)local_48.Length();
                            local_48 = (((uint64_t)local_48._4_4_ << 32) | (uint32_t)(fVar9 * fVar7));
                            local_38 = 0.0;
                            local_34 = 1.0;
                            fVar9 = math::Clamp<float>(local_48, local_38, local_34);
                            fVar10 = *(float*)(pVVar3 + 28) - fVar9 * *(float*)(pVVar3 + 28);
                            *(float*)(pVVar3 + 28) = fVar10;
                            pVVar3 = pVVar3 + 80;
                        } while (pVVar3 != pVVar4);
                    }
                } else if (pVVar3 != pVVar4) {
                    do {
                        if (*(float*)(pVVar3 + 36) < (float)m_emitterTemplate->field_52) {
                            *(float*)(pVVar3 + 28) = *(float*)(pVVar3 + 28) + fVar9;
                        }
                        local_48 = *pVVar3 - field_112;
                        local_40 = fVar10;
                        fVar8 = (float)local_48.Length();
                        local_48 = (((uint64_t)local_48._4_4_ << 32) | (uint32_t)(fVar8 * fVar7));
                        local_38 = 0.0;
                        local_34 = 1.0;
                        fVar8 = math::Clamp<float>(local_48, local_38, local_34);
                        fVar10 = *(float*)(pVVar3 + 28) - fVar8 * *(float*)(pVVar3 + 28);
                        *(float*)(pVVar3 + 28) = fVar10;
                        pVVar3 = pVVar3 + 80;
                    } while (pVVar3 != pVVar4);
                }
            }
        }
    }

    // 0x1007ccaf0
    void ParticleEmitter::UpdateLocalAndWorldEffectors(float arg1) {
        unsigned int uVar1;
        ParticleEffector* this_01;
        Layout* this_02;
        unsigned int* puVar3;
        unsigned int* puVar4;
        uint64_t* puVar5;
        long lVar6;
        Layout* pLVar7;
        float* pfVar8;
        Vector3T<float>* vector31;
        Vector3T<float>* pVVar9;
        Vector3T<float>* vector32;
        unsigned int arg2;
        ColourHSL* vector3;
        float fVar10;
        float fVar11;
        vector<ParticleEffector const*, BucketAllocatorEASTL> local_110[24];
        ColourHSL local_f8;
        uint64_t local_e8;
        float local_e0;
        ColourHSL local_d8;
        Vector2T<int>* local_c8;
        uint64_t* local_c0;
        uint64_t* local_b8;
        Layout* local_b0;
        unsigned int* local_a8;
        unsigned int* local_a0;
        uint64_t local_90;
        float local_88;
        Vector3T<float> local_80;
        ColourHSL local_70;
        float local_60;
        float local_5c;
        float local_58;
        uint32_t uStack_54;
        uint32_t uStack_50;
        uint32_t uStack_4c;
        float local_3c;
        float local_38;
        uint8_t local_31;

        uint8_t* this_00 = &field_10480;
        ParticleEmitter* local_98 = this;
        if (this_00->empty() == '\0') {
            new (local_110) eastl::vector<ParticleEffector const*, BucketAllocatorEASTL>();
            puVar3 = (unsigned int*)this_00->data();
            puVar4 = (unsigned int*)this_00->end();
            if (puVar3 != puVar4) {
                local_b0 = (Layout*)&local_98->field_160;
                local_a0 = puVar4;
                do {
                    uVar1 = *puVar3;
                    arg2 = ~uVar1;
                    if (-1 < (int)uVar1) {
                        arg2 = uVar1 - 1;
                    }
                    local_a8 = puVar3;
                    if ((m_debugIsolatedAffector == 4294967295) || (arg2 == m_debugIsolatedAffector)) {
                        local_98->field_32->GetEffectors(*local_110, arg2);
                        puVar5 = (uint64_t*)local_110->HeapBeginPtr();
                        local_b8 = (uint64_t*)local_110->end();
                        if (puVar5 != local_b8) {
                            local_5c = *(float*)(&DAT_100d4aba0 + (unsigned long)(uVar1 >> 31) * 4);
                            do {
                                this_01 = (ParticleEffector*)*puVar5;
                                lVar6 = this_01->data();
                                pLVar7 = (Layout*)this_01->GetForceDirection();
                                pfVar8 = (float*)pLVar7->SSOBeginPtr();
                                local_38 = *pfVar8;
                                local_c8 = (Vector2T<int>*)(lVar6 + 4);
                                pfVar8 = (float*)local_c8->y();
                                local_58 = *pfVar8;
                                pfVar8 = (float*)pLVar7->second();
                                local_f8 = math::ColourHSL(local_38, local_58, *pfVar8);
                                if (((*(float*)(lVar6 + 24) != 0.0) && (*(float*)(lVar6 + 24) != 6.2831855f)) &&
                                    (*(float*)(lVar6 + 16) <= 0.0 && *(float*)(lVar6 + 16) != 0.0)) {
                                    local_f8 *= -1.0;
                                }
                                local_3c = 0.0625;
                                if (*(int*)(lVar6 + 40) == 1) {
                                LAB_1007cccf7:
                                    local_3c = local_3c * *(float*)(lVar6 + 44);
                                } else {
                                    local_3c = 0.0;
                                    if (*(int*)(lVar6 + 40) == 2) {
                                        local_3c = 0.00390625f;
                                        goto LAB_1007cccf7;
                                    }
                                }
                                fVar10 = *(float*)(lVar6 + 24);
                                local_31 = fVar10 != 0.0;
                                fVar11 = 6.2831855f;
                                local_c0 = puVar5;
                                local_e8 = math::Vector3Normalize<float>(local_f8);
                                this_02 = local_b0;
                                local_e0 = fVar11;
                                vector31 = (Vector3T<float>*)local_b0->HeapBeginPtr();
                                pVVar9 = (Vector3T<float>*)this_02->end();
                                if (vector31 != pVVar9) {
                                    local_31 = local_31 & fVar10 != 6.2831855f;
                                    do {
                                        vector32 = (Vector3T<float>*)this_01->get_overflow_allocator();
                                        local_90 = *vector31 - *vector32;
                                        local_88 = fVar11;
                                        fVar10 = (float)local_90.LengthSq();
                                        if (fVar10 < *(float*)(lVar6 + 20) || fVar10 == *(float*)(lVar6 + 20)) {
                                            local_58 = fVar10;
                                            fVar10 = (float)::sqrt(fVar10);
                                            local_38 = 1.0;
                                            if (fVar10 != 0.0) {
                                                local_38 = local_58;
                                            }
                                            fVar11 = (float)(-(unsigned int)(fVar10 == 0.0) & 1065353216);
                                            local_58 = (float)(~-(unsigned int)(fVar10 == 0.0) & (unsigned int)fVar10 |
                                                               (unsigned int)fVar11);
                                            uStack_54 = 0;
                                            uStack_50 = 0;
                                            uStack_4c = 0;
                                            if (local_31 != 0) {
                                                fVar10 = math::Vector3Dot<float>(local_e8, local_90);
                                                if ((fVar10 * local_5c) / local_58 < *(float*)(lVar6 + 28))
                                                    goto LAB_1007ccd80;
                                            }
                                            if (*(int*)(lVar6 + 40) == 2) {
                                            LAB_1007cce5d:
                                                local_38 = local_38 * local_3c;
                                            } else {
                                                local_38 = 0.0;
                                                if (*(int*)(lVar6 + 40) == 1) {
                                                    local_38 = local_58;
                                                    goto LAB_1007cce5d;
                                                }
                                            }
                                            local_80 = math::Vector3T();
                                            if (*(int*)(lVar6 + 36) == 0) {
                                                pLVar7 = (Layout*)this_01->GetForceDirection();
                                                pfVar8 = (float*)pLVar7->SSOBeginPtr();
                                                local_58 = *pfVar8 - local_38;
                                                pfVar8 = (float*)local_c8->y();
                                                local_60 = *pfVar8 - local_38;
                                                pfVar8 = (float*)pLVar7->second();
                                                fVar11 = local_60;
                                                local_70 = math::ColourHSL(local_58, local_60, *pfVar8 - local_38);
                                                local_d8._0_8_ = *arg1 * local_70;
                                                vector3 = &local_d8;
                                                local_d8.field_8 = fVar11;
                                            } else {
                                                local_70._0_8_ =
                                                    (*((*(float*)(lVar6 + 16) * arg1) / local_58)) * local_90;
                                                vector3 = &local_70;
                                                local_70.field_8 = fVar11;
                                            }
                                            local_80.SetXYZ(*vector3);
                                            if (*(int*)(lVar6 + 32) == 1) {
                                                *vector31 += local_80;
                                            } else if (*(int*)(lVar6 + 32) == 0) {
                                                (*(vector31 + 16)) += local_80;
                                                vector31[74] = (Vector3T<float>)1;
                                            } else {
                                                (logger::default_logger())
                                                    ->Log(true, 2,
                                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                          "OSRS-OS1669-BOXR/libs/graphics/runetek7/particles/"
                                                          "ParticleEmitter.cpp",
                                                          914, "Unhandled forceType %d in local/world effector",
                                                          *(uint32_t*)(lVar6 + 32));
                                            }
                                        }
                                    LAB_1007ccd80:
                                        vector31 = vector31 + 80;
                                    } while (vector31 != pVVar9);
                                }
                                puVar5 = local_c0 + 1;
                            } while (puVar5 != local_b8);
                        }
                    }
                    puVar3 = local_a8 + 1;
                } while (puVar3 != local_a0);
            }
        }
    }

    // 0x1007cd0a0
    void ParticleEmitter::UpdateGlobalEffectors(float arg1) {
        Layout* this_00;
        long lVar3;
        long lVar4;
        Vector3T<float>* this_02;
        Vector3T<float>* pVVar5;
        uint64_t local_58[2];
        Layout* local_40;

        ParticleEmitter* local_48 = this;
        auto puVar1 = field_10456.data();
        auto puVar2 = field_10456.end();
        if (puVar1 != puVar2) {
            local_40 = (Layout*)&local_48->field_160;
            do {
                if ((m_debugIsolatedAffector == 4294967295) || (*puVar1 == m_debugIsolatedAffector)) {
                    lVar3 = local_48->field_32->GetGlobalEffectorTemplate(*puVar1);
                    local_58[0] = *arg1 * (*((lVar3 + 4)));
                    this_00 = local_40;
                    if (*(int*)(lVar3 + 32) == 1) {
                        this_02 = (Vector3T<float>*)local_40->HeapBeginPtr();
                        pVVar5 = (Vector3T<float>*)this_00->end();
                        for (; this_02 != pVVar5; this_02 = this_02 + 80) {
                            *this_02 += *local_58;
                        }
                    } else if (*(int*)(lVar3 + 32) == 0) {
                        lVar3 = local_40->HeapBeginPtr();
                        lVar4 = this_00->end();
                        for (; lVar3 != lVar4; lVar3 = lVar3 + 80) {
                            (*((lVar3 + 16))) += *local_58;
                            *(uint8_t*)(lVar3 + 74) = 1;
                        }
                    } else {
                        (logger::default_logger())
                            ->Log(true, 2,
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "runetek7/particles/ParticleEmitter.cpp",
                                  1025, "Unhandled forceType %d in global effector", *(uint32_t*)(lVar3 + 32));
                    }
                }
                puVar1 = puVar1 + 1;
            } while (puVar1 != puVar2);
        }
    }

    // 0x1007cd230
    void ParticleEmitter::UpdatePosition(float arg1) {
        Vector3T<float>* this_00;
        float* pfVar2;
        uint64_t local_38;

        auto this_01 = field_160.HeapBeginPtr();
        auto pVVar1 = field_160.end();
        if (this_01 == pVVar1) {
            return;
        }
        do {
            if (this_01[74] != (Vector3T<float>)0) {
                this_00 = this_01 + 16;
                while (
                    (((pfVar2 = (float*)this_00->SSOBeginPtr(),
                       32767.0 < *pfVar2 ||
                           (pfVar2 = (float*)this_00->SSOBeginPtr(), *pfVar2 <= -32767.0 && *pfVar2 != -32767.0)) ||
                      (pfVar2 = (float*)this_00->y(), 32767.0 < *pfVar2)) ||
                     (((pfVar2 = (float*)this_00->y(), *pfVar2 <= -32767.0 && *pfVar2 != -32767.0 ||
                                                           (pfVar2 = (float*)this_00->second(), 32767.0 < *pfVar2)) ||
                       (pfVar2 = (float*)this_00->second(), *pfVar2 <= -32767.0 && *pfVar2 != -32767.0))))) {
                    *this_00 *= 0.5;
                    *(float*)(this_01 + 28) = *(float*)(this_01 + 28) + *(float*)(this_01 + 28);
                }
                this_01[74] = (Vector3T<float>)0;
            }
            local_38 = (*(*(float*)(this_01 + 28) * arg1)) * (*(this_01 + 16));
            *this_01 += local_38;
            this_01 = this_01 + 80;
        } while (this_01 != pVVar1);
    }

    // 0x1007cd390
    void ParticleEmitter::ImposeBoundaryLimits() {
        bool bVar2;
        uint32_t* puVar3;
        Particle* pPVar4;
        Particle* pPVar5;
        uint8_t* this_00;

        ParticleEmitterTemplate* pPVar1 = m_emitterTemplate;
        unsigned int uVar6 = pPVar1->field_136;
        if ((uVar6 == 4294967294) && (pPVar1->field_140 == -2)) {
            return;
        }
        if (field_68 != '\0') {
            return;
        }
        uint32_t local_28 = 2147483648;
        uint32_t local_24 = 2147483647;
        if (uVar6 != 4294967294) {
            if (uVar6 == 4294967295) {
                uVar6 = field_72;
            }
            if (uVar6 < 4) {
                puVar3 = &field_48[(unsigned long)(uVar6 + 1)];
                local_24 = *puVar3;
                bVar2 = true;
                goto LAB_1007cd3fc;
            }
        }
        bVar2 = false;
    LAB_1007cd3fc:
        uVar6 = pPVar1->field_140;
        if (uVar6 != 4294967294) {
            if (uVar6 == 4294967295) {
                uVar6 = field_72;
            }
            if (uVar6 < 5) {
                puVar3 = &field_48[(long)(int)uVar6];
                local_28 = *puVar3;
                bVar2 = true;
            }
        }
        if (bVar2) {
            this_00 = &field_160;
            pPVar4 = (Particle*)this_00->HeapBeginPtr();
            pPVar5 = (Particle*)this_00->end();
            pPVar4 = eastl::remove_if<Particle*, ParticleEmitter::ImposeBoundaryLimits()::__2>(pPVar4, pPVar5,
                                                                                               (__2*)&local_28);
            pPVar5 = (Particle*)this_00->end();
            this_00->erase(pPVar4, pPVar5);
        }
    }

    // 0x1007cd4c0
    void ParticleEmitter::UpdateSize(float arg1) {
        ParticleEmitterTemplate* pPVar2;
        float fVar6;

        float fVar5 = arg1 * m_emitterTemplate->field_228;
        float fVar1 = (float)m_emitterTemplate->field_76;
        long lVar3 = field_160.HeapBeginPtr();
        long lVar4 = field_160.end();
        if (fVar1 <= 1.1754944e-38) {
            if (lVar3 != lVar4) {
                fVar1 = (float)m_emitterTemplate->field_76;
                do {
                    if (*(float*)(lVar3 + 36) <= fVar1 && fVar1 != *(float*)(lVar3 + 36)) {
                        *(float*)(lVar3 + 32) = *(float*)(lVar3 + 32) + fVar5;
                    }
                    lVar3 = lVar3 + 80;
                } while (lVar3 != lVar4);
            }
        } else if (lVar3 != lVar4) {
            pPVar2 = m_emitterTemplate;
            fVar1 = (float)pPVar2->field_76;
            do {
                if (fVar1 < *(float*)(lVar3 + 36) || fVar1 == *(float*)(lVar3 + 36)) {
                    fVar6 = pPVar2->field_72;
                } else {
                    fVar6 = *(float*)(lVar3 + 32) + fVar5;
                }
                *(float*)(lVar3 + 32) = fVar6;
                lVar3 = lVar3 + 80;
            } while (lVar3 != lVar4);
        }
    }

    // 0x1007cd5a0
    void ParticleEmitter::UpdateBoundingBox(math::AABB& aabb) {
        Vector3T<float> local_50;
        uint64_t local_40[2];

        auto vector31 = field_160.HeapBeginPtr();
        auto pVVar1 = field_160.end();
        if (vector31 != pVVar1) {
            do {
                local_50 = math::Vector3T(*(float*)(vector31 + 32));
                local_40[0] = *vector31 + local_50;
                aabb.AddPoint(*local_40);
                local_40[0] = *vector31 - local_50;
                aabb.AddPoint(*local_40);
                vector31 = vector31 + 80;
            } while (vector31 != pVVar1);
        }
    }

    // 0x1007cd660
    void ParticleEmitter::UpdateColoursAndRotation(float arg1) {
        bool cVar1;
        unsigned int uVar2;
        ParticleEmitterTemplate* pPVar3;
        uint8_t bVar4;
        uint8_t arg1_00;
        float fVar7;
        uint32_t local_38;
        float local_34;

        long lVar5 = field_160.HeapBeginPtr();
        long lVar6 = field_160.end();
        if (lVar5 != lVar6) {
            do {
                if (*(char*)(lVar5 + 72) == '\0') {
                LAB_1007cd7c0:
                    cVar1 = *(char*)(lVar5 + 73);
                } else {
                    pPVar3 = m_emitterTemplate;
                    if (*(float*)(lVar5 + 36) < (float)pPVar3->field_96) {
                        *(float*)(lVar5 + 48) = pPVar3->field_208 * arg1 + *(float*)(lVar5 + 48);
                        *(float*)(lVar5 + 52) = pPVar3->field_212 * arg1 + *(float*)(lVar5 + 52);
                        *(float*)(lVar5 + 56) = pPVar3->field_216 * arg1 + *(float*)(lVar5 + 56);
                        local_38 = 0;
                        local_34 = 255.0;
                        fVar7 = math::Clamp<float>(*((lVar5 + 48)), local_38, local_34);
                        *(float*)(lVar5 + 48) = fVar7;
                        local_38 = 0;
                        local_34 = 255.0;
                        fVar7 = math::Clamp<float>(*((lVar5 + 52)), local_38, local_34);
                        *(float*)(lVar5 + 52) = fVar7;
                        local_38 = 0;
                        local_34 = 255.0;
                        fVar7 = math::Clamp<float>(*((lVar5 + 56)), local_38, local_34);
                        *(float*)(lVar5 + 56) = fVar7;
                        ((lVar5 + 68))
                            ->Set((unsigned char)(int)*(float*)(lVar5 + 48), (unsigned char)(int)*(float*)(lVar5 + 52),
                                  (unsigned char)(int)fVar7, (unsigned char)(int)*(float*)(lVar5 + 60));
                        goto LAB_1007cd7c0;
                    }
                    *(uint8_t*)(lVar5 + 72) = 0;
                    uVar2 = pPVar3->field_92;
                    bVar4 = ((lVar5 + 68))->GetShape();
                    new (&local_38) math::ColourStorage8888((unsigned int)bVar4 | uVar2 & 4294967040);
                    *(uint32_t*)(lVar5 + 68) = local_38;
                    cVar1 = *(char*)(lVar5 + 73);
                }
                if (cVar1) {
                    pPVar3 = m_emitterTemplate;
                    if ((float)pPVar3->field_100 <= *(float*)(lVar5 + 36)) {
                        *(uint8_t*)(lVar5 + 73) = 0;
                        arg1_00 = (uint8_t)pPVar3->field_92;
                    } else {
                        *(float*)(lVar5 + 60) = (float)pPVar3->field_220 * arg1 + *(float*)(lVar5 + 60);
                        local_38 = 0;
                        local_34 = 255.0;
                        fVar7 = math::Clamp<float>(*((lVar5 + 60)), local_38, local_34);
                        *(float*)(lVar5 + 60) = fVar7;
                        arg1_00 = (uint8_t)(int)fVar7;
                    }
                    new ((lVar5 + 68)) std::__cxx_atomic_base_impl((bool)arg1_00);
                }
                if (*(float*)(lVar5 + 44) != 0.0) {
                    fVar7 = (float)fmod(*(float*)(lVar5 + 64) - *(float*)(lVar5 + 44) * arg1, 6.2831855f);
                    *(float*)(lVar5 + 64) = fVar7;
                    if (fVar7 < 0.0) {
                        *(float*)(lVar5 + 64) = fVar7 + 6.2831855f;
                    }
                }
                lVar5 = lVar5 + 80;
            } while (lVar5 != lVar6);
        }
    }

    // 0x1007cd8f0
    bool ParticleEmitter::CanBatch(const MaterialManager& materialManager,
                                   const shared_ptr<ModelParticleSource>& modelParticleSource) const {
        int iVar3;
        int iVar4;
        bool bVar6;

        long lVar5 = data();
        auto this_01 = materialManager.GetMaterial(*(int*)(lVar5 + 104));
        lVar5 = field_24->GetEmitterTemplate(((Minimap*)modelParticleSource.operator->())->GetLevel());
        auto this_03 = materialManager.GetMaterial(*(int*)(lVar5 + 104));
        bool cVar1 = this_01->IsRT7();
        char cVar2 = this_03->IsRT7();
        if (cVar1 == cVar2) {
            iVar3 = this_01->GetSeqDelay();
            iVar4 = this_03->GetSeqDelay();
            bVar6 = iVar3 == iVar4;
        } else {
            bVar6 = false;
        }
        return bVar6;
    }

    // 0x1007eb450
    bool ParticleEmitter::SortParticles()::$_0::operator()(const Particle& particle1, const Particle& particle2) const {
        float fVar1 = (float)GetOutlineRadiusAdjustment();
        return (float)particle1.GetOutlineRadiusAdjustment() < fVar1;
    }

} // namespace jag::graphics

// 0x1007cace0
void atan2(float arg1, float arg2) {
    _atan2f();
}

// 0x1007cacf0
void sqrt(float arg1) {
    unsigned int in_XMM0_Db;
    uint32_t in_XMM0_Dc;
    uint32_t in_XMM0_Dd;
    uint8_t in_XMM1[16];
    uint8_t auVar1[16];

    auVar1._4_4_ = in_XMM0_Db;
    auVar1._0_4_ = arg1;
    auVar1._8_4_ = in_XMM0_Dc;
    auVar1._12_4_ = in_XMM0_Dd;
    auVar1 = rsqrtss(in_XMM1, auVar1);
    float fVar2 = arg1 * auVar1._0_4_;
    return (((uint64_t)(~(in_XMM0_Db & 2147483647) & in_XMM0_Db) << 32) |
            (uint32_t)(~-(unsigned int)(ABS(arg1) < 1.1754944e-38) &
                       (unsigned int)((fVar2 * auVar1._0_4_ - 3.0) * fVar2 * -0.5)));
}

// 0x1007cae80
void fmod(float arg1, float arg2) {
    _fmodf();
}

// 0x1007cae90
void sin(float arg1) {
    _sinf();
}

// 0x1007caea0
void cos(float arg1) {
    _cosf();
}
