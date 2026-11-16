// libs/graphics/runetek7/particles/ParticleEmitter.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "ParticleEmitter.h"

namespace jag::graphics {
    // 0x100f43878, 4 bytes, __data
    ParticleEmitter::m_debugIsolatedEmitter = -1;

    // 0x100f4387c, 4 bytes, __data
    ParticleEmitter::m_debugIsolatedAffector = -1;

    // 0x1039bd330, 1 bytes, __common; zero-initialised
    ParticleEmitter::m_debugEmitters;

    // 0x1039bd331, 7 bytes, __common; zero-initialised
    ParticleEmitter::m_debugIsolatedEmitterHistory;

    // 0x1039bd338, 32 bytes, __common; set at startup by ___cxx_global_var_init.10
    eastl::vector<math::Vector3T<float>, eastl::allocator> ParticleEmitter::m_debugEmitterPositions =
        vector<math::Vector3T<float>, eastl::allocator>();

    // 0x1039bd358, 32 bytes, __common; set at startup by ___cxx_global_var_init.11
    eastl::vector<math::Vector3T<float>, eastl::allocator> ParticleEmitter::m_debugEmitterNormals =
        vector<math::Vector3T<float>, eastl::allocator>();

    // 0x1039bd378, 1 bytes, __common; zero-initialised
    ParticleEmitter::m_debugStopEffectors;

    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    ParticleEmitter::GetEmitterSource() const;

    // 0x100023f30: the linker folded this into oldscape::option::IOption::GetName() const, which has identical code
    ParticleEmitterTemplate* ParticleEmitter::GetEmitterTemplate() const;

    // 0x1004900d0: the linker folded this into game::MapEnvironmentSettings::GetVolumetricSettings() const, which has identical code
    ParticleEmitter::GetParticles() const;

    // 0x1007c9ed0, 304 bytes, base-object constructor, placed by class name
    // ParticleEmitter::ParticleEmitter(shared_ptr<ModelParticleSource> const&, ParticleManager*, ParticleSystem*)
    void ParticleEmitter::ParticleEmitter(shared_ptr* param_1, ParticleManager* param_2, ParticleSystem* param_3) {
        new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        field_68 = 0;
        m_emitterTemplate = (ParticleEmitterTemplate*)0;
        field_24 = (ParticleManager*)0;
        field_32 = (ParticleSystem*)0;
        field_40 = (long*)0;
        field_72 = 4294967295;
        new (&field_76) math::Vector3T<int>();
        new (&field_88) math::Vector3T<int>();
        new (&field_100) math::Vector3T<int>();
        new (&field_112) math::Vector3T<int>();
        new (&field_124) math::Vector3T<int>();
        field_136 = '\0';
        field_137 = '\x01';
        field_140 = 0;
        field_144 = 0;
        m_enabled = true;
        field_149 = false;
        new (&field_160) eastl::fixed_vector<Particle, 128ul, true, eastl::allocator>();
        m_hidden = false;
        new (&field_10456) Array<int, SafeBucketAllocatorEASTL>();
        new (&field_10480) Array<int, SafeBucketAllocatorEASTL>();
        field_10504 = 0.0;
        field_10508 = 0.0;
        field_10512 = 0.0;
        field_10516 = 0.0;
        field_10520 = 0.0;
        Initialise(this, param_1, param_2, param_3);
    }

    // 0x1007ca020, 672 bytes, placed by class name
    // ParticleEmitter::Initialise(shared_ptr<ModelParticleSource> const&, ParticleManager*, ParticleSystem*)
    void ParticleEmitter::Initialise(shared_ptr* param_1, ParticleManager* param_2, ParticleSystem* param_3) {
        undefined1* this_00;
        undefined4 uVar1;
        int iVar2;
        bool bVar3;
        uint uVar4;
        uint uVar5;
        Minimap* this_01;
        undefined4* puVar7;
        int* piVar8;
        undefined8 uVar9;
        uint* puVar10;
        ulong uVar12;
        ulong uVar13;

        bVar3 = shared_ptr::operator_cast_to_bool(param_1);
        if (((bVar3) && (param_2 != (ParticleManager*)0)) && (param_3 != (ParticleSystem*)0)) {
            bVar3 = shared_ptr::operator_cast_to_bool(param_1);
            if (bVar3) {
                this_01 =
                    (Minimap*)shared_ptr<ModelParticleSource>::operator->((shared_ptr<ModelParticleSource>*)param_1);
                uVar4 = this_01->GetLevel();
                m_emitterTemplate = (ParticleEmitterTemplate*)param_2->GetEmitterTemplate(uVar4);
                field_10504 = (float)math::FRandMT(1.0);
                uVar4 = (&m_emitterTemplate->field_232)->end();
                if (0 < (int)uVar4) {
                    uVar12 = 0;
                    (&field_10456, (long)(int)uVar4, 0)->set_max_size();
                    do {
                        puVar7 = (undefined4*)Array<unsigned int, eastl::allocator>::operator[](
                            (Array<unsigned int, eastl::allocator>*)&m_emitterTemplate->field_232, uVar12);
                        uVar1 = *puVar7;
                        puVar7 = (undefined4*)Array<int, SafeBucketAllocatorEASTL>::operator[](
                            (Array<int, SafeBucketAllocatorEASTL>*)&field_10456, uVar12);
                        *puVar7 = uVar1;
                        uVar12 = uVar12 + 1;
                    } while (uVar4 != uVar12);
                }
                uVar4 = (&m_emitterTemplate->field_280)->end();
                uVar5 = (&m_emitterTemplate->field_256)->end();
                if ((0 < (int)uVar4) || (0 < (int)uVar5)) {
                    this_00 = &field_10480;
                    uVar12 = 0;
                    this_00->set_max_size((long)(int)(uVar5 + uVar4), 0);
                    if (0 < (int)uVar5) {
                        uVar13 = 0;
                        do {
                            piVar8 = (int*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)&m_emitterTemplate->field_256, uVar13);
                            iVar2 = *piVar8;
                            uVar12 = uVar13 + 1;
                            piVar8 = (int*)Array<int, SafeBucketAllocatorEASTL>::operator[](
                                (Array<int, SafeBucketAllocatorEASTL>*)this_00, uVar13);
                            *piVar8 = iVar2 + 1;
                            uVar13 = uVar12;
                        } while (uVar5 != uVar12);
                    }
                    if (0 < (int)uVar4) {
                        uVar13 = 0;
                        do {
                            puVar10 = (uint*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)&m_emitterTemplate->field_280, uVar13);
                            uVar5 = *puVar10;
                            puVar10 = (uint*)Array<int, SafeBucketAllocatorEASTL>::operator[](
                                (Array<int, SafeBucketAllocatorEASTL>*)this_00, uVar12 + uVar13);
                            *puVar10 = ~uVar5;
                            uVar13 = uVar13 + 1;
                        } while (uVar4 != uVar13);
                    }
                }
                shared_ptr<ModelParticleSource>::operator=((shared_ptr<ModelParticleSource>*)this, param_1);
                field_24 = param_2;
                field_32 = param_3;
                field_40 = (long*)param_2->GetHeightProvider();
                if ((m_debugIsolatedEmitter != -1) && (m_emitterTemplate->field_0 == m_debugIsolatedEmitter)) {
                    eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
                    eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
                }
            } else {
                uVar9 = logger::default_logger();
                logger::Logger::Log(uVar9, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                    "runetek7/particles/ParticleEmitter.cpp",
                                    90, "ParticleEmitter: Unknown spec constructor");
            }
            return;
        }
        /* WARNING: Subroutine does not return */
        LogAssert("emitterSource && particleManager && parentSystem",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/particles/"
                  "ParticleEmitter.cpp",
                  33, (char*)0);
    }

    // 0x1007ca2e0, 16 bytes, complete-object constructor, placed by class name
    // ParticleEmitter::ParticleEmitter(shared_ptr<ModelParticleSource> const&, ParticleManager*, ParticleSystem*): jumps straight to the base-object constructor

    // 0x1007ca580, 320 bytes, placed by class name
    // ParticleEmitter::Update(float, math::AABB&, bool)
    undefined8 ParticleEmitter::Update(float param_1, AABB* param_2, bool param_3) {
        float fVar1;
        float fVar2;
        uint in_XMM0_Db;
        uint uVar3;
        uint in_XMM0_Dc;
        uint uVar4;
        uint in_XMM0_Dd;
        uint uVar5;
        float fVar6;
        undefined1 local_68[32];
        float local_48;
        uint uStack_44;
        uint uStack_40;
        uint uStack_3c;
        float local_38;
        uint uStack_34;
        uint uStack_30;
        uint uStack_2c;
        float local_24;

        if (field_136 != '\0') {
            if (!param_3) {
                field_140 = field_140 + 1;
            }
            if (field_144 + 50 < field_140) {
                return 1;
            }
            if ((m_debugIsolatedEmitter != -1) && (m_emitterTemplate->field_0 != m_debugIsolatedEmitter)) {
                return 1;
            }
            local_38 = param_1;
            uStack_34 = in_XMM0_Db;
            uStack_30 = in_XMM0_Dc;
            uStack_2c = in_XMM0_Dd;
            CheckLevelHeightsProvider(this);
            if (0.0 < local_38) {
                uVar3 = uStack_34;
                uVar4 = uStack_30;
                uVar5 = uStack_2c;
                do {
                    fVar6 = local_38 + -0.02;
                    fVar1 = (float)-(uint)(0.02 < local_38);
                    uStack_34 = 0;
                    uStack_30 = 0;
                    uStack_2c = 0;
                    if (0.02 <= local_38) {
                        local_38 = 0.02;
                    }
                    fVar2 = local_38;
                    if ((m_enabled != false) && (field_149 == false)) {
                        uStack_34 = 0;
                        uStack_30 = 0;
                        uStack_2c = 0;
                        local_48 = fVar6;
                        uStack_44 = uVar3;
                        uStack_40 = uVar4;
                        uStack_3c = uVar5;
                        local_24 = local_38;
                        if (field_137 != '\0') {
                            local_38 = fVar1;
                            UpdatePositions(this);
                            fVar1 = local_38;
                        }
                        local_38 = fVar1;
                        CheckEmissionQueue(this, local_24);
                        fVar2 = local_24;
                        fVar6 = local_48;
                        uVar3 = uStack_44;
                        uVar4 = uStack_40;
                        uVar5 = uStack_3c;
                        fVar1 = local_38;
                    }
                    uStack_34 = uVar3 & uStack_34;
                    uStack_30 = uVar4 & uStack_30;
                    uStack_2c = uVar5 & uStack_2c;
                    local_38 = (float)(~(uint)fVar1 & 3212836864 | (uint)fVar6 & (uint)fVar1);
                    UpdateActiveParticles((ParticleEmitter*)local_68, fVar2);
                    math::AABB::operator=(param_2, (AABB*)local_68);
                    uVar3 = uStack_34;
                    uVar4 = uStack_30;
                    uVar5 = uStack_2c;
                } while (0.0 < local_38);
            }
        }
        return 0;
    }

    // 0x1007ca6c0, 640 bytes, placed by class name
    // ParticleEmitter::CheckLevelHeightsProvider()
    void ParticleEmitter::CheckLevelHeightsProvider() {
        undefined1* this_00;
        float fVar1;
        uint uVar2;
        long* plVar3;
        int iVar5;
        int iVar6;
        int* piVar7;
        uint* puVar8;
        undefined8 uVar9;
        undefined8 uVar10;
        ulong uVar11;
        int iVar12;
        fixed_string<char, 512, true, eastl::allocator> local_260[552];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        plVar3 = field_40;
        if ((plVar3 != (long*)0) && (field_68 != '\0')) {
            this_00 = &field_48;
            if ((**(code**)*plVar3)(plVar3, this_00, &field_112) != '\0') {
                field_68 = 0;
                field_72 = 0;
                fVar1 = field_116;
                uVar11 = 0;
                do {
                    piVar7 = (int*)std::array<int, 5ul>::operator[]((array<int, 5ul>*)this_00, uVar11);
                    if (*piVar7 < (int)fVar1) {
                        field_72 = (uint)uVar11;
                        goto LAB_1007ca8f9;
                    }
                    uVar11 = uVar11 + 1;
                } while (uVar11 != 5);
                if ((m_emitterTemplate->field_136 != -2) || (m_emitterTemplate->field_140 != -2)) {
                    eastl::fixed_string<char, 512, true, eastl::allocator>::fixed_string(local_260);
                    iVar12 = m_emitterTemplate->field_136;
                    if (iVar12 != -2) {
                        if (iVar12 == -1) {
                            local_260->append("killonabovelevel=current");
                        } else {
                            eastl::basic_string<
                                char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                                append_sprintf((char*)local_260, "killonabovelevel=%d");
                        }
                        if (m_emitterTemplate->field_140 != -2) {
                            local_260->append(" and ");
                        }
                    }
                    iVar12 = m_emitterTemplate->field_140;
                    if (iVar12 != -2) {
                        if (iVar12 == -1) {
                            local_260->append("killonbelowlevel=current");
                        } else {
                            eastl::basic_string<
                                char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                                append_sprintf((char*)local_260, "killonbelowlevel=%d");
                        }
                    }
                    puVar8 = (uint*)this_00->front();
                    uVar2 = *puVar8;
                    puVar8 = (uint*)this_00->back();
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                        append_sprintf((char*)local_260, " [Floor bottom = %d, Ceiling Top = %d, Emitter height = %d]",
                                       (ulong)uVar2, (ulong)*puVar8, (ulong)(uint)(int)field_116);
                    iVar5 = (int)field_112;
                    iVar12 = iVar5 + 511;
                    if (-1 < iVar5) {
                        iVar12 = iVar5;
                    }
                    iVar6 = (int)field_120;
                    iVar5 = iVar6 + 511;
                    if (-1 < iVar6) {
                        iVar5 = iVar6;
                    }
                    uVar9 = logger::default_logger();
                    iVar6 = m_emitterTemplate->field_0;
                    uVar10 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::begin();
                    logger::Logger::Log(uVar9, 1, 3,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "graphics/runetek7/particles/ParticleEmitter.cpp",
                                        460, "Particle Emitter %d at %d,%d,%d,%d is out of bounds of all levels - %s",
                                        iVar6, iVar12 >> 15, iVar5 >> 15, iVar12 >> 9 & 63, iVar5 >> 9 & 63, uVar10);
                    /* WARNING: Subroutine does not return */
                    local_260->~fixed_string();
                }
            }
        }
    LAB_1007ca8f9:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1007ca940, 288 bytes, placed by class name
    // ParticleEmitter::UpdatePositions()
    void ParticleEmitter::UpdatePositions() {
        undefined1* puVar1;
        long* plVar2;
        Vector3T* this_00;
        undefined8 local_70;
        float local_68;
        undefined8 local_60[2];
        undefined8 local_50[2];
        undefined8 local_40[2];

        local_68 = field_120;
        local_70._0_4_ = field_112;
        local_70._4_4_ = field_116;
        puVar1 = &field_76;
        local_60[0] = math::operator+((Vector3T*)puVar1, (Vector3T*)&field_88);
        local_40[0] = math::operator+((Vector3T*)local_60, (Vector3T*)&field_100);
        local_50[0] = math::operator/((Vector3T*)local_40, 3.0);
        (&field_112, (Vector3T*)local_50)->SetXYZ();
        local_50[0] = math::operator-((Vector3T*)&field_88, (Vector3T*)puVar1);
        local_40[0] = math::operator-((Vector3T*)&field_100, (Vector3T*)puVar1);
        this_00 = math::Vector3Cross<float>((Vector3T*)&field_124, (Vector3T*)local_50, (Vector3T*)local_40);
        this_00->Normalize();
        if (((float)m_emitterTemplate->field_8 != 0.0) || ((float)m_emitterTemplate->field_16 != 0.0)) {
            UpdateConePositions(this);
        }
        field_137 = '\0';
        plVar2 = field_40;
        if (plVar2 != (long*)0) {
            if ((**(code**)(*plVar2 + 8))(plVar2, &local_70, &field_112) != '\0') {
                field_68 = 1;
            }
        }
    }

    // 0x1007caa60, 144 bytes, placed by class name
    // ParticleEmitter::CheckEmissionQueue(float)
    void ParticleEmitter::CheckEmissionQueue(float param_1) {
        bool bVar1;
        int iVar3;
        float fVar4;
        float fVar5;

        fVar4 = (float)m_emitterTemplate->GetRandomEmissionRate();
        fVar4 = fVar4 * param_1 + field_10504;
        field_10504 = fVar4;
        if (1.0 <= fVar4) {
            fVar5 = (float)_floorf();
            iVar3 = (int)fVar5;
            field_10504 = fVar4 - (float)(int)fVar5;
            if (0 < iVar3) {
                do {
                    if (GenerateNewParticle(this) == '\0') {
                        return;
                    }
                    bVar1 = 1 < iVar3;
                    iVar3 = iVar3 + -1;
                } while (bVar1);
            }
        }
    }

    // 0x1007caaf0, 192 bytes, placed by class name
    // ParticleEmitter::UpdateActiveParticles(float)
    ParticleEmitter* ParticleEmitter::UpdateActiveParticles(float param_1) {
        ParticleEmitter* in_RSI;

        if (in_RSI->field_24 == (ParticleManager*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_particleManager",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/ParticleEmitter.cpp",
                      1319, (char*)0);
        }
        UpdateAge(in_RSI, param_1);
        UpdateSpeed(in_RSI, param_1);
        UpdateLocalAndWorldEffectors(in_RSI, param_1);
        UpdateGlobalEffectors(in_RSI, param_1);
        UpdatePosition(in_RSI, param_1);
        ImposeBoundaryLimits(in_RSI);
        UpdateSize(in_RSI, param_1);
        new (this) math::AABB();
        UpdateBoundingBox(in_RSI, (AABB*)this);
        UpdateColoursAndRotation(in_RSI, param_1);
        return this;
    }

    // 0x1007cabb0, 304 bytes, placed by class name
    // ParticleEmitter::UpdateConePositions()
    void ParticleEmitter::UpdateConePositions() {
        undefined1* this_00;
        float fVar1;
        float fVar2;
        ParticleEmitterTemplate* pPVar3;
        float* pfVar4;
        vector* pvVar5;
        type* in_RSI;
        float fVar6;
        float fVar7;
        float fVar8;

        this_00 = &field_124;
        pfVar4 = (float*)this_00->second();
        fVar1 = *pfVar4;
        pvVar5 = this_00->SSOBeginPtr(in_RSI);
        fVar6 = (float)atan2(fVar1, *(float*)pvVar5);
        pfVar4 = (float*)this_00->y();
        fVar1 = *pfVar4;
        pvVar5 = this_00->SSOBeginPtr(in_RSI);
        fVar7 = *(float*)pvVar5;
        pvVar5 = this_00->SSOBeginPtr(in_RSI);
        fVar8 = *(float*)pvVar5;
        pfVar4 = (float*)this_00->second();
        fVar2 = *pfVar4;
        pfVar4 = (float*)this_00->second();
        fVar7 = (float)::sqrt(fVar2 * *pfVar4 + fVar7 * fVar8);
        fVar7 = (float)atan2(fVar1, fVar7);
        pPVar3 = m_emitterTemplate;
        fVar1 = (float)pPVar3->field_4;
        fVar8 = (float)pPVar3->field_8 - fVar1;
        field_10512 = fVar8;
        field_10508 = fVar8 * -0.5 + fVar6 + fVar1;
        fVar1 = (float)pPVar3->field_12;
        fVar8 = (float)pPVar3->field_16 - fVar1;
        field_10520 = fVar8;
        field_10516 = (fVar1 - fVar7) + fVar8 * -0.5;
    }

    // 0x1007cad90, 240 bytes, placed by class name
    // ParticleEmitter::GetConeDirection()
    undefined8 ParticleEmitter::GetConeDirection() {
        float fVar1;
        undefined8 uVar2;
        ColourHSL local_48;
        float local_38;
        undefined4 uStack_34;
        undefined4 uStack_30;
        undefined4 uStack_2c;
        float local_1c;
        float local_18;
        float local_14;

        local_18 = field_10508;
        fVar1 = (float)math::FRandMT(field_10512);
        local_18 = fVar1 + local_18;
        local_14 = field_10516;
        fVar1 = (float)math::FRandMT(field_10520);
        fVar1 = (float)fmod(fVar1 + local_14, 3.1415927);
        local_38 = (float)(~-(uint)(0.0 <= fVar1) & (uint)(fVar1 + 3.1415927) | (uint)fVar1 & -(uint)(0.0 <= fVar1));
        uStack_34 = 0;
        uStack_30 = 0;
        uStack_2c = 0;
        local_14 = (float)::sin(local_38);
        local_1c = (float)::cos(local_18);
        local_1c = local_1c * local_14;
        local_38 = (float)::cos(local_38);
        fVar1 = (float)::sin(local_18);
        new (&local_48) math::ColourHSL(local_1c, local_38, local_14 * fVar1);
        uVar2._0_4_ = local_48.field_0;
        uVar2._4_4_ = local_48.field_4;
        return uVar2;
    }

    // 0x1007caeb0, 128 bytes, placed by class name
    // ParticleEmitter::GetNewParticleDirection(math::Vector3T<float>&)
    void ParticleEmitter::GetNewParticleDirection(Vector3T* param_1) {
        Vector3T* pVVar1;
        undefined8 local_28[2];

        if (m_emitterTemplate == (ParticleEmitterTemplate*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_emitterTemplate",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/ParticleEmitter.cpp",
                      224, (char*)0);
        }
        if (((float)m_emitterTemplate->field_8 == 0.0) && ((float)m_emitterTemplate->field_16 == 0.0)) {
            pVVar1 = (Vector3T*)&field_124;
        } else {
            local_28[0] = GetConeDirection(this);
            pVVar1 = (Vector3T*)local_28;
        }
        param_1->SetXYZ(pVVar1);
    }

    // 0x1007caf30, 272 bytes, placed by class name
    // ParticleEmitter::GetNewParticlePosition(math::Vector3T<float>&)
    void ParticleEmitter::GetNewParticlePosition(Vector3T* param_1) {
        float fVar1;
        float fVar2;
        undefined8 local_68;
        float local_60;
        undefined8 local_58;
        float local_50;
        undefined8 local_48;
        float local_40;
        undefined8 local_38;
        float local_30;
        undefined8 local_28;
        float local_20;
        float local_1c;

        local_1c = (float)math::FRandMT(1.0);
        fVar2 = (float)math::FRandMT(1.0);
        local_60 = fVar2 + local_1c;
        fVar2 = (float)(~-(uint)(1.0 < local_60) & (uint)fVar2 | (uint)(1.0 - fVar2) & -(uint)(1.0 < local_60));
        if (1.0 < local_60) {
            local_1c = 1.0 - local_1c;
        }
        fVar1 = local_1c;
        local_1c = 1.0 - (fVar2 + local_1c);
        local_48 = math::operator*((Vector3T*)&field_76, fVar1);
        local_40 = local_60;
        local_38 = math::operator*((Vector3T*)&field_88, fVar2);
        local_30 = local_60;
        local_58 = math::operator+((Vector3T*)&local_48, (Vector3T*)&local_38);
        local_50 = local_60;
        local_28 = math::operator*((Vector3T*)&field_100, local_1c);
        local_20 = local_60;
        local_68 = math::operator+((Vector3T*)&local_58, (Vector3T*)&local_28);
        param_1->SetXYZ((Vector3T*)&local_68);
    }

    // 0x1007cb040, 320 bytes, placed by class name
    // ParticleEmitter::GenerateNewParticle()
    bool ParticleEmitter::GenerateNewParticle() {
        ulong uVar1;
        Particle* pPVar2;
        float local_50;
        float local_4c;
        float local_48;
        uint local_44;
        float local_40;
        float local_3c;
        float local_38;
        bool local_32;
        bool local_31;

        if (field_24 == (ParticleManager*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_particleManager",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/ParticleEmitter.cpp",
                      256, (char*)0);
        }
        uVar1 = (&field_160)->size();
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
            pPVar2 =
                eastl::vector<Particle, eastl::fixed_vector_allocator<80ul, 128ul, 16ul, 0ul, true, eastl::allocator>>::
                    emplace_back<ParticleEmitter&, float&, float&, float, float&, float&, float&, unsigned int&, bool,
                                 bool>((vector<Particle, eastl::fixed_vector_allocator<80ul, 128ul, 16ul, 0ul, true,
                                                                                       eastl::allocator>>*)&field_160,
                                       this, &local_4c, &local_48, &local_38, &local_50, &local_40, &local_3c,
                                       &local_44, &local_32, &local_31);
            GetNewParticleDirection(this, (Vector3T*)&pPVar2->field_16);
            GetNewParticlePosition(this, (Vector3T*)pPVar2);
        }
        return uVar1 < 2049;
    }

    // 0x1007cb5a0, 64 bytes, placed by class name
    // ParticleEmitter::SortParticles()
    void ParticleEmitter::SortParticles() {
        undefined8 uVar1;
        undefined8 uVar2;

        if (IsHidden(this) == '\0') {
            uVar1 = (&field_160)->HeapBeginPtr();
            uVar2 = (&field_160)->end();
            eastl::sort<Particle*, ParticleEmitter::SortParticles()::__0>(uVar1, uVar2);
        }
    }

    // 0x1007cb600, 544 bytes, placed by class name
    // ParticleEmitter::UpdatePosition(math::Vector3T<float> const&, math::Vector3T<float> const&, math::Vector3T<float> const&)
    void ParticleEmitter::UpdatePosition(Vector3T* param_1, Vector3T* param_2, Vector3T* param_3) {
        undefined1* this_00;
        undefined1* this_01;
        undefined1* this_02;
        bool bVar1;
        Vector3T* this_03;
        undefined8 local_80[2];
        undefined8 local_70;
        float local_64;
        undefined8 local_60[2];
        undefined8 local_50[2];
        undefined8 local_40[2];

        this_00 = &field_76;
        bVar1 = math::operator!=(param_1, (Vector3T*)this_00);
        if (bVar1) {
            this_00->SetXYZ(param_1);
            field_137 = '\x01';
        }
        this_01 = &field_88;
        bVar1 = math::operator!=(param_2, (Vector3T*)this_01);
        if (bVar1) {
            this_01->SetXYZ(param_2);
            field_137 = '\x01';
        }
        this_02 = &field_100;
        bVar1 = math::operator!=(param_3, (Vector3T*)this_02);
        if (bVar1) {
            this_02->SetXYZ(param_3);
            field_137 = '\x01';
        }
        field_136 = '\x01';
        if ((((m_debugIsolatedEmitterHistory != '\0') && (m_debugIsolatedEmitter != -1)) &&
             (m_emitterTemplate->field_0 == m_debugIsolatedEmitter)) &&
            (field_137 != '\0')) {
            new (&local_70) math::Vector3T<int>();
            new (local_60) math::Vector3T<int>();
            local_80[0] = math::operator+((Vector3T*)this_00, (Vector3T*)this_01);
            local_40[0] = math::operator+((Vector3T*)local_80, (Vector3T*)this_02);
            local_50[0] = math::operator/((Vector3T*)local_40, 3.0);
            local_70.Set(local_50);
            local_50[0] = math::operator-((Vector3T*)this_01, (Vector3T*)this_00);
            local_40[0] = math::operator-((Vector3T*)this_02, (Vector3T*)this_00);
            this_03 = math::Vector3Cross<float>((Vector3T*)local_60, (Vector3T*)local_50, (Vector3T*)local_40);
            this_03->Normalize();
            m_debugEmitterPositions.push_back((Vector3T*)&local_70);
            m_debugEmitterNormals.push_back(local_60);
        }
        local_70 = math::operator-((Vector3T*)this_01, (Vector3T*)this_00);
        local_64 = math::Vector3Dot<float>((Vector3T*)&local_70, (Vector3T*)&local_70);
        local_60[0] = math::operator-((Vector3T*)this_02, (Vector3T*)this_00);
        field_149 = math::Vector3Dot<float>((Vector3T*)local_60, (Vector3T*)local_60) < 1e-07 && local_64 < 1e-07;
        field_144 = field_140;
    }

    // 0x1007cb870, 144 bytes, placed by class name
    // ParticleEmitter::TranslateParticles(math::Vector3T<float> const&)
    void ParticleEmitter::TranslateParticles(Vector3T* param_1) {
        Vector3T<float>* this_00;
        Vector3T<float>* pVVar1;

        this_00 = (Vector3T<float>*)(&field_160)->HeapBeginPtr();
        pVVar1 = (Vector3T<float>*)(&field_160)->end();
        for (; this_00 != pVVar1; this_00 = this_00 + 80) {
            math::Vector3T<float>::operator+=(this_00, param_1);
        }
        math::Vector3T<float>::operator+=((Vector3T<float>*)&field_76, param_1);
        math::Vector3T<float>::operator+=((Vector3T<float>*)&field_88, param_1);
        math::Vector3T<float>::operator+=((Vector3T<float>*)&field_100, param_1);
        field_137 = '\x01';
    }

    // 0x1007cb930, 2528 bytes, placed by class name
    // ParticleEmitter::RenderDebug() const
    void ParticleEmitter::RenderDebug() {
        uint uVar1;
        int iVar2;
        uint uVar3;
        char cVar4;
        uint uVar5;
        long lVar6;
        Vector3T* pVVar7;
        long* plVar8;
        float* pfVar9;
        char* pcVar10;
        char* pcVar11;
        uint* puVar12;
        uint* puVar13;
        undefined4* puVar14;
        char* pcVar15;
        undefined1* puVar16;
        ParticleEmitter* pPVar17;
        SideBarData local_308;
        uint local_2fc;
        undefined1 local_2f8[16];
        ParticleEmitter* local_2e8;
        SideBarData local_2e0[6];
        SideBarData local_298[4];
        Sphere local_260[27];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_2e8 = this;
        if ((m_debugIsolatedEmitterHistory == '\0') || (m_debugIsolatedEmitter == -1)) {
            lVar6 = m_debugEmitterPositions.size();
            if (lVar6 != 0) {
                eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
                eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
            }
        } else {
            lVar6 = m_debugEmitterPositions.size();
            if (lVar6 != 0) {
                pVVar7 = (Vector3T*)eastl::vector<math::Vector3T<float>, eastl::allocator>::operator[](
                    (vector<math::Vector3T<float>, eastl::allocator>*)&m_debugEmitterPositions, 0);
                local_2f8._8_8_ = eastl::vector<math::Vector3T<float>, eastl::allocator>::operator[](
                    (vector<math::Vector3T<float>, eastl::allocator>*)&m_debugEmitterNormals, 0);
                plVar8 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                if (plVar8 != (long*)0) {
                    math::Sphere::Sphere(local_260, pVVar7, 1.0);
                    oldscape::sidebars::SideBarData::SideBarData(local_2e0, -1, 3);
                    (**(code**)(*plVar8 + 32))(plVar8, local_260, local_2e0);
                }
                plVar8 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                if (plVar8 != (long*)0) {
                    local_2e0[0]._0_8_ = math::operator*((Vector3T*)local_2f8._8_8_, 32.0);
                    local_260[0]._0_8_ = math::operator+(pVVar7, (Vector3T*)local_2e0);
                    oldscape::sidebars::SideBarData::SideBarData(local_298, -1, 1);
                    (**(code**)(*plVar8 + 24))(plVar8, pVVar7, local_260, local_298);
                }
                new (local_260) eastl::fixed_string<char, 512, true, eastl::allocator>();
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                    sprintf((char*)local_260, "%d", 0);
                local_298[0]._8_4_ = *(undefined4*)(pVVar7 + 8);
                local_298[0]._0_8_ = *(undefined8*)pVVar7;
                pfVar9 = (float*)local_298->y();
                *pfVar9 = *pfVar9 + -50.0;
                plVar8 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                if (plVar8 != (long*)0) {
                    pcVar10 = (char*)eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::begin();
                    new (local_2f8) eastl::allocator("EASTL basic_string");
                    new (local_2e0) eastl::string(pcVar10, local_2f8);
                    new (&local_308) oldscape::sidebars::SideBarData(-1, 1);
                    (**(code**)(*plVar8 + 136))(plVar8, local_298, local_2e0, &local_308);
                    local_2e0->~basic_string();
                }
                /* WARNING: Subroutine does not return */
                local_260->~fixed_string();
            }
        }
        if (m_debugEmitters == '\0') {
            if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
                /* WARNING: Subroutine does not return */
                ___stack_chk_fail();
            }
            return;
        }
        new (local_260) eastl::fixed_string<char, 512, true, eastl::allocator>();
        pPVar17 = local_2e8;
        uVar1 = local_2e8->m_emitterTemplate->field_0;
        uVar5 = (&local_2e8->field_160)->size();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::sprintf(
            (char*)local_260, "Emitter %d (%u)", (ulong)uVar1, (ulong)uVar5);
        if (((float)pPVar17->m_emitterTemplate->field_4 != 0.0) ||
            ((float)pPVar17->m_emitterTemplate->field_8 != 0.0)) {
            new (local_2e0) eastl::fixed_string<char, 16, true, eastl::allocator>();
            new (local_298) eastl::fixed_string<char, 16, true, eastl::allocator>();
            pcVar10 = ToText<16, true>((fixed_string*)local_2e0, (float)pPVar17->m_emitterTemplate->field_4);
            pcVar11 = ToText<16, true>((fixed_string*)local_298, (float)pPVar17->m_emitterTemplate->field_8);
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                append_sprintf((char*)local_260, " [az:%s %s]", pcVar10, pcVar11);
            /* WARNING: Subroutine does not return */
            local_298->~fixed_string();
        }
        if (((float)pPVar17->m_emitterTemplate->field_12 != 0.0) ||
            ((float)pPVar17->m_emitterTemplate->field_16 != 0.0)) {
            new (local_2e0) eastl::fixed_string<char, 16, true, eastl::allocator>();
            new (local_298) eastl::fixed_string<char, 16, true, eastl::allocator>();
            pcVar10 = ToText<16, true>((fixed_string*)local_2e0, (float)pPVar17->m_emitterTemplate->field_12);
            pcVar11 = ToText<16, true>((fixed_string*)local_298, (float)pPVar17->m_emitterTemplate->field_16);
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                append_sprintf((char*)local_260, " [zen:%s %s]", pcVar10, pcVar11);
            /* WARNING: Subroutine does not return */
            local_298->~fixed_string();
        }
        iVar2 = pPVar17->m_emitterTemplate->field_136;
        if (iVar2 != -2) {
            new (local_2e0) eastl::fixed_string<char, 16, true, eastl::allocator>();
            if (iVar2 == -1) {
                pcVar10 = "this";
            } else {
                pcVar10 = ToText<16, true>((fixed_string*)local_2e0, iVar2, 10);
            }
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                append_sprintf((char*)local_260, " [above %s]", pcVar10);
            /* WARNING: Subroutine does not return */
            local_2e0->~fixed_string();
        }
        iVar2 = pPVar17->m_emitterTemplate->field_140;
        if (iVar2 != -2) {
            new (local_2e0) eastl::fixed_string<char, 16, true, eastl::allocator>();
            if (iVar2 == -1) {
                pcVar10 = "this";
            } else {
                pcVar10 = ToText<16, true>((fixed_string*)local_2e0, iVar2, 10);
            }
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                append_sprintf((char*)local_260, " [below %s]", pcVar10);
            /* WARNING: Subroutine does not return */
            local_2e0->~fixed_string();
        }
        puVar16 = &pPVar17->m_emitterTemplate->field_232;
        cVar4 = puVar16->empty();
        local_2f8._8_4_ = 4294967295;
        if (cVar4 == '\0') {
            new (local_2e0) eastl::fixed_string<char, 32, true, eastl::allocator>();
            puVar12 = (uint*)puVar16->data();
            puVar13 = (uint*)puVar16->end();
            if (puVar12 != puVar13) {
                pcVar10 = " [Aff:";
                do {
                    uVar1 = *puVar12;
                    lVar6 = (local_2e8->field_32, uVar1)->GetGlobalEffectorTemplate();
                    iVar2 = *(int*)(lVar6 + 32);
                    pcVar11 = ToText<32, true>((fixed_string*)local_2e0, (Vector3T*)(lVar6 + 4));
                    pcVar15 = "Pos";
                    if (iVar2 == 0) {
                        pcVar15 = "Accel";
                    }
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                        append_sprintf((char*)local_260, "%s%u (%s %s)", pcVar10, (ulong)uVar1, pcVar15, pcVar11);
                    puVar12 = puVar12 + 1;
                    pcVar10 = ", ";
                } while (puVar12 != puVar13);
            }
            local_260->append("]");
            /* WARNING: Subroutine does not return */
            local_2e0->~fixed_string();
        }
        puVar16 = &pPVar17->m_emitterTemplate->field_280;
        cVar4 = puVar16->empty();
        if (cVar4 == '\0') {
            new (local_2e0) eastl::fixed_string<char, 32, true, eastl::allocator>();
            puVar12 = (uint*)puVar16->data();
            puVar13 = (uint*)puVar16->end();
            if (puVar12 != puVar13) {
                pcVar10 = " [LocalEff:";
                do {
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                        append_sprintf((char*)local_260, "%s%u", pcVar10, (ulong)*puVar12);
                    puVar12 = puVar12 + 1;
                    pcVar10 = ", ";
                } while (puVar12 != puVar13);
            }
            local_260->append("]");
            /* WARNING: Subroutine does not return */
            local_2e0->~fixed_string();
        }
        if ((pPVar17->field_68 == '\0') &&
            ((pPVar17->m_emitterTemplate->field_136 != -2 || (pPVar17->m_emitterTemplate->field_140 != -2)))) {
            puVar16 = &pPVar17->field_48;
            puVar12 = (uint*)std::array<int, 5ul>::operator[]((array<int, 5ul>*)puVar16, 0);
            local_2fc = *puVar12;
            puVar12 = (uint*)std::array<int, 5ul>::operator[]((array<int, 5ul>*)puVar16, 1);
            uVar1 = *puVar12;
            puVar12 = (uint*)std::array<int, 5ul>::operator[]((array<int, 5ul>*)puVar16, 2);
            uVar5 = *puVar12;
            puVar12 = (uint*)std::array<int, 5ul>::operator[]((array<int, 5ul>*)puVar16, 3);
            uVar3 = *puVar12;
            puVar14 = (undefined4*)std::array<int, 5ul>::operator[]((array<int, 5ul>*)puVar16, 4);
            pPVar17 = local_2e8;
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                append_sprintf((char*)local_260, " [H:%d,%d,%d,%d,%d]", (ulong)local_2fc, (ulong)uVar1, (ulong)uVar5,
                               (ulong)uVar3, *puVar14);
        }
        plVar8 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
        if (plVar8 != (long*)0) {
            pcVar10 = (char*)eastl::basic_string<
                char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::begin();
            new (local_298) eastl::allocator("EASTL basic_string");
            new (local_2e0) eastl::string(pcVar10, local_298);
            new (local_2f8) oldscape::sidebars::SideBarData(-1, 0);
            (**(code**)(*plVar8 + 136))(plVar8, &pPVar17->field_112, local_2e0, local_2f8);
            local_2e0->~basic_string();
        }
        plVar8 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
        if (plVar8 != (long*)0) {
            local_298[0]._0_8_ = math::operator*((Vector3T*)&pPVar17->field_124, 256.0);
            local_2e0[0]._0_8_ = math::operator+((Vector3T*)&pPVar17->field_112, (Vector3T*)local_298);
            new (local_2f8) oldscape::sidebars::SideBarData(-1, 1);
            (**(code**)(*plVar8 + 24))(plVar8, &pPVar17->field_112, local_2e0, local_2f8);
        }
        plVar8 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
        if (plVar8 != (long*)0) {
            oldscape::sidebars::SideBarData::SideBarData(local_2e0, -1, 1);
            (**(code**)(*plVar8 + 24))(plVar8, &pPVar17->field_76, &pPVar17->field_88, local_2e0);
        }
        plVar8 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
        if (plVar8 != (long*)0) {
            oldscape::sidebars::SideBarData::SideBarData(local_2e0, -1, 1);
            (**(code**)(*plVar8 + 24))(plVar8, &pPVar17->field_76, &pPVar17->field_100, local_2e0);
        }
        plVar8 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
        if (plVar8 != (long*)0) {
            oldscape::sidebars::SideBarData::SideBarData(local_2e0, -1, 1);
            (**(code**)(*plVar8 + 24))(plVar8, &pPVar17->field_88, &pPVar17->field_100, local_2e0);
        }
        /* WARNING: Subroutine does not return */
        local_260->~fixed_string();
    }

    // 0x1007cc4e0, 288 bytes, placed by class name
    // ParticleEmitter::CalculateViewDistances(math::Vector4T<float> const&)
    undefined8 ParticleEmitter::CalculateViewDistances(Vector4T* param_1) {
        int iVar1;
        long lVar2;
        float* pfVar3;
        ulong uVar4;
        undefined1* this_00;
        undefined8 local_48;
        float local_40;
        float local_3c;
        float local_38;
        float local_34;

        local_38 = 3.4028235e+38;
        local_34 = -3.4028235e+38;
        this_00 = &field_160;
        iVar1 = this_00->size();
        if (-1 < iVar1 + -1) {
            uVar4 = (ulong)(iVar1 + -1);
            do {
                pfVar3 = (float*)eastl::vector<
                    Particle, eastl::fixed_vector_allocator<80ul, 128ul, 16ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<Particle, eastl::fixed_vector_allocator<80ul, 128ul, 16ul, 0ul, true, eastl::allocator>>*)
                        this_00,
                    uVar4);
                local_40 = pfVar3[2] * *(float*)(param_1 + 8) + pfVar3[1] * *(float*)(param_1 + 4) +
                           *pfVar3 * *(float*)param_1 + *(float*)(param_1 + 12);
                local_3c = local_40;
                if ((local_40 != 3.4028235e+38) && (0.0 < local_40)) {
                    pfVar3 = std::min<float>(&local_38, &local_40);
                    local_38 = *pfVar3;
                    pfVar3 = std::max<float>(&local_34, &local_40);
                    local_34 = *pfVar3;
                }
                lVar2 = eastl::vector<Particle,
                                      eastl::fixed_vector_allocator<80ul, 128ul, 16ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<Particle, eastl::fixed_vector_allocator<80ul, 128ul, 16ul, 0ul, true, eastl::allocator>>*)
                        this_00,
                    uVar4);
                *(float*)(lVar2 + 12) = local_3c;
                uVar4 = uVar4 - 1;
            } while (-1 < (int)uVar4);
        }
        std::pair<float, float>::pair<float&, float&, false>((pair<float, float>*)&local_48, &local_38, &local_34);
        return local_48;
    }

    // 0x1007cc660, 96 bytes, placed by class name
    // ParticleEmitter::UpdateAge(float)
    void ParticleEmitter::UpdateAge(float param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        Particle* pPVar3;
        Particle* pPVar4;
        undefined1* this_00;
        float local_1c;

        this_00 = &field_160;
        local_1c = param_1;
        uVar1 = this_00->HeapBeginPtr();
        uVar2 = this_00->end();
        pPVar3 = eastl::remove_if<Particle*, float->UpdateAge()::__1>(uVar1, uVar2, &local_1c);
        pPVar4 = (Particle*)this_00->end();
        this_00->erase(pPVar3, pPVar4);
    }

    // 0x1007cc780, 880 bytes, placed by class name
    // ParticleEmitter::UpdateSpeed(float)
    void ParticleEmitter::UpdateSpeed(float param_1) {
        int iVar1;
        ParticleEmitterTemplate* pPVar2;
        Vector3T* pVVar3;
        Vector3T* pVVar4;
        long lVar5;
        long lVar6;
        float fVar7;
        float fVar8;
        float fVar9;
        float fVar10;
        undefined8 local_48;
        float local_40;
        float local_38;
        float local_34;

        pPVar2 = m_emitterTemplate;
        fVar9 = pPVar2->field_224 * param_1;
        iVar1 = pPVar2->field_56;
        if (iVar1 == 0) {
            if ((float)pPVar2->field_48 != 1.1754944e-38) {
                lVar5 = (&field_160)->HeapBeginPtr();
                lVar6 = (&field_160)->end();
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
            fVar7 = param_1 * pPVar2->field_60;
            if (iVar1 == 2) {
                fVar8 = (float)pPVar2->field_48;
                fVar10 = fVar9;
                pVVar3 = (Vector3T*)(&field_160)->HeapBeginPtr();
                pVVar4 = (Vector3T*)(&field_160)->end();
                if (fVar8 == 1.1754944e-38) {
                    if (pVVar3 != pVVar4) {
                        do {
                            local_48 = math::operator-(pVVar3, (Vector3T*)&field_112);
                            local_40 = fVar10;
                            fVar9 = (float)local_48.LengthSq();
                            local_48 = CONCAT44(local_48._4_4_, fVar9 * fVar7);
                            local_38 = 0.0;
                            local_34 = 1.0;
                            fVar9 = math::Clamp<float>((float*)&local_48, &local_38, &local_34);
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
                        local_48 = math::operator-(pVVar3, (Vector3T*)&field_112);
                        local_40 = fVar10;
                        fVar8 = (float)local_48.LengthSq();
                        local_48 = CONCAT44(local_48._4_4_, fVar8 * fVar7);
                        local_38 = 0.0;
                        local_34 = 1.0;
                        fVar8 = math::Clamp<float>((float*)&local_48, &local_38, &local_34);
                        fVar10 = *(float*)(pVVar3 + 28) - fVar8 * *(float*)(pVVar3 + 28);
                        *(float*)(pVVar3 + 28) = fVar10;
                        pVVar3 = pVVar3 + 80;
                    } while (pVVar3 != pVVar4);
                }
            } else if (iVar1 == 1) {
                fVar8 = (float)pPVar2->field_48;
                fVar10 = fVar9;
                pVVar3 = (Vector3T*)(&field_160)->HeapBeginPtr();
                pVVar4 = (Vector3T*)(&field_160)->end();
                if (fVar8 == 1.1754944e-38) {
                    if (pVVar3 != pVVar4) {
                        do {
                            local_48 = math::operator-(pVVar3, (Vector3T*)&field_112);
                            local_40 = fVar10;
                            fVar9 = (float)local_48.Length();
                            local_48 = CONCAT44(local_48._4_4_, fVar9 * fVar7);
                            local_38 = 0.0;
                            local_34 = 1.0;
                            fVar9 = math::Clamp<float>((float*)&local_48, &local_38, &local_34);
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
                        local_48 = math::operator-(pVVar3, (Vector3T*)&field_112);
                        local_40 = fVar10;
                        fVar8 = (float)local_48.Length();
                        local_48 = CONCAT44(local_48._4_4_, fVar8 * fVar7);
                        local_38 = 0.0;
                        local_34 = 1.0;
                        fVar8 = math::Clamp<float>((float*)&local_48, &local_38, &local_34);
                        fVar10 = *(float*)(pVVar3 + 28) - fVar8 * *(float*)(pVVar3 + 28);
                        *(float*)(pVVar3 + 28) = fVar10;
                        pVVar3 = pVVar3 + 80;
                    } while (pVVar3 != pVVar4);
                }
            }
        }
    }

    // 0x1007ccaf0, 1264 bytes, placed by class name
    // ParticleEmitter::UpdateLocalAndWorldEffectors(float)
    void ParticleEmitter::UpdateLocalAndWorldEffectors(float param_1) {
        undefined1* this_00;
        uint uVar1;
        ParticleEffector* this_01;
        Layout* this_02;
        char cVar2;
        uint* puVar3;
        uint* puVar4;
        undefined8* puVar5;
        long lVar6;
        Layout* pLVar7;
        vector* pvVar8;
        float* pfVar9;
        Vector3T<float>* this_03;
        Vector3T<float>* pVVar10;
        Vector3T* pVVar11;
        undefined8 uVar12;
        uint uVar13;
        ColourHSL* pCVar14;
        float fVar15;
        float fVar16;
        vector local_110[24];
        ColourHSL local_f8;
        undefined8 local_e8;
        float local_e0;
        ColourHSL local_d8;
        Vector2T<int>* local_c8;
        undefined8* local_c0;
        undefined8* local_b8;
        Layout* local_b0;
        uint* local_a8;
        uint* local_a0;
        ParticleEmitter* local_98;
        undefined8 local_90;
        float local_88;
        Vector3T local_80[16];
        ColourHSL local_70;
        float local_60;
        float local_5c;
        float local_58;
        undefined4 uStack_54;
        undefined4 uStack_50;
        undefined4 uStack_4c;
        float local_3c;
        float local_38;
        byte local_31;

        this_00 = &field_10480;
        local_98 = this;
        cVar2 = this_00->empty();
        if (cVar2 == '\0') {
            eastl::vector<ParticleEffector_const*, BucketAllocatorEASTL>::vector();
            puVar3 = (uint*)this_00->data();
            puVar4 = (uint*)this_00->end();
            if (puVar3 != puVar4) {
                local_b0 = (Layout*)&local_98->field_160;
                local_a0 = puVar4;
                do {
                    uVar1 = *puVar3;
                    uVar13 = ~uVar1;
                    if (-1 < (int)uVar1) {
                        uVar13 = uVar1 - 1;
                    }
                    local_a8 = puVar3;
                    if ((m_debugIsolatedAffector == 4294967295) || (uVar13 == m_debugIsolatedAffector)) {
                        pVVar11 = (Vector3T*)local_110;
                        (local_98->field_32, local_110, uVar13)->GetEffectors();
                        puVar5 = (undefined8*)local_110->HeapBeginPtr();
                        local_b8 = (undefined8*)local_110->end();
                        if (puVar5 != local_b8) {
                            local_5c = *(float*)(&DAT_100d4aba0 + (ulong)(uVar1 >> 31) * 4);
                            do {
                                this_01 = (ParticleEffector*)*puVar5;
                                lVar6 = this_01->data();
                                pLVar7 = (Layout*)this_01->GetForceDirection();
                                pvVar8 = eastl::string::Layout::SSOBeginPtr(pLVar7, (type*)pVVar11);
                                local_38 = *(float*)pvVar8;
                                local_c8 = (Vector2T<int>*)(lVar6 + 4);
                                pfVar9 = (float*)local_c8->y();
                                local_58 = *pfVar9;
                                pfVar9 = (float*)pLVar7->second();
                                new (&local_f8) math::ColourHSL(local_38, local_58, *pfVar9);
                                if (((*(float*)(lVar6 + 24) != 0.0) && (*(float*)(lVar6 + 24) != 6.2831855)) &&
                                    (*(float*)(lVar6 + 16) <= 0.0 && *(float*)(lVar6 + 16) != 0.0)) {
                                    math::Vector3T<float>::operator*=((Vector3T<float>*)&local_f8, -1.0);
                                }
                                local_3c = 0.0625;
                                if (*(int*)(lVar6 + 40) == 1) {
                                LAB_1007cccf7:
                                    local_3c = local_3c * *(float*)(lVar6 + 44);
                                } else {
                                    local_3c = 0.0;
                                    if (*(int*)(lVar6 + 40) == 2) {
                                        local_3c = 0.00390625;
                                        goto LAB_1007cccf7;
                                    }
                                }
                                fVar15 = *(float*)(lVar6 + 24);
                                local_31 = fVar15 != 0.0;
                                fVar16 = 6.2831855;
                                local_c0 = puVar5;
                                local_e8 = math::Vector3Normalize<float>((Vector3T*)&local_f8);
                                this_02 = local_b0;
                                local_e0 = fVar16;
                                this_03 = (Vector3T<float>*)eastl::basic_string<
                                    char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                                    Layout::HeapBeginPtr(local_b0);
                                pVVar10 = (Vector3T<float>*)this_02->end();
                                if (this_03 != pVVar10) {
                                    local_31 = local_31 & fVar15 != 6.2831855;
                                    do {
                                        pVVar11 = (Vector3T*)this_01->get_overflow_allocator();
                                        local_90 = math::operator-((Vector3T*)this_03, pVVar11);
                                        local_88 = fVar16;
                                        fVar15 = (float)local_90.LengthSq();
                                        if (fVar15 < *(float*)(lVar6 + 20) || fVar15 == *(float*)(lVar6 + 20)) {
                                            local_58 = fVar15;
                                            fVar15 = (float)::sqrt(fVar15);
                                            local_38 = 1.0;
                                            if (fVar15 != 0.0) {
                                                local_38 = local_58;
                                            }
                                            fVar16 = (float)(-(uint)(fVar15 == 0.0) & 1065353216);
                                            local_58 = (float)(~-(uint)(fVar15 == 0.0) & (uint)fVar15 | (uint)fVar16);
                                            uStack_54 = 0;
                                            uStack_50 = 0;
                                            uStack_4c = 0;
                                            if (local_31 != 0) {
                                                pVVar11 = (Vector3T*)&local_90;
                                                fVar15 = math::Vector3Dot<float>((Vector3T*)&local_e8, pVVar11);
                                                if ((fVar15 * local_5c) / local_58 < *(float*)(lVar6 + 28))
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
                                            new (local_80) math::Vector3T<int>();
                                            if (*(int*)(lVar6 + 36) == 0) {
                                                pLVar7 = (Layout*)this_01->GetForceDirection();
                                                pvVar8 = eastl::string::Layout::SSOBeginPtr(pLVar7, (type*)pVVar11);
                                                local_58 = *(float*)pvVar8 - local_38;
                                                pfVar9 = (float*)local_c8->y();
                                                local_60 = *pfVar9 - local_38;
                                                pfVar9 = (float*)pLVar7->second();
                                                fVar16 = local_60;
                                                new (&local_70) math::ColourHSL(local_58, local_60, *pfVar9 - local_38);
                                                local_d8._0_8_ = math::operator*((Vector3T*)&local_70, param_1);
                                                pCVar14 = &local_d8;
                                                local_d8.field_8 = fVar16;
                                            } else {
                                                local_70._0_8_ = math::operator*(
                                                    (Vector3T*)&local_90, (*(float*)(lVar6 + 16) * param_1) / local_58);
                                                pCVar14 = &local_70;
                                                local_70.field_8 = fVar16;
                                            }
                                            local_80->SetXYZ(pCVar14);
                                            if (*(int*)(lVar6 + 32) == 1) {
                                                pVVar11 = local_80;
                                                math::Vector3T<float>::operator+=(this_03, pVVar11);
                                            } else if (*(int*)(lVar6 + 32) == 0) {
                                                pVVar11 = local_80;
                                                math::Vector3T<float>::operator+=(this_03 + 16, pVVar11);
                                                this_03[74] = (Vector3T<float>)1;
                                            } else {
                                                uVar12 = logger::default_logger();
                                                pVVar11 = (Vector3T*)&DAT_00000001;
                                                logger::Logger::Log(
                                                    uVar12, 1, 2,
                                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                    "libs/graphics/runetek7/particles/ParticleEmitter.cpp",
                                                    914, "Unhandled forceType %d in local/world effector",
                                                    *(undefined4*)(lVar6 + 32));
                                            }
                                        }
                                    LAB_1007ccd80:
                                        this_03 = this_03 + 80;
                                    } while (this_03 != pVVar10);
                                }
                                puVar5 = local_c0 + 1;
                            } while (puVar5 != local_b8);
                        }
                    }
                    puVar3 = local_a8 + 1;
                } while (puVar3 != local_a0);
            }
            local_110->~vector();
        }
    }

    // 0x1007cd0a0, 400 bytes, placed by class name
    // ParticleEmitter::UpdateGlobalEffectors(float)
    void ParticleEmitter::UpdateGlobalEffectors(float param_1) {
        Layout* this_00;
        uint* puVar1;
        uint* puVar2;
        undefined8 uVar3;
        long lVar4;
        long lVar5;
        Vector3T<float>* this_01;
        Vector3T<float>* pVVar6;
        undefined8 local_58[2];
        ParticleEmitter* local_48;
        Layout* local_40;

        local_48 = this;
        puVar1 = (uint*)(&field_10456)->data();
        puVar2 = (uint*)(&field_10456)->end();
        if (puVar1 != puVar2) {
            local_40 = (Layout*)&local_48->field_160;
            do {
                if ((m_debugIsolatedAffector == 4294967295) || (*puVar1 == m_debugIsolatedAffector)) {
                    lVar4 = (local_48->field_32, *puVar1)->GetGlobalEffectorTemplate();
                    local_58[0] = math::operator*((Vector3T*)(lVar4 + 4), param_1);
                    this_00 = local_40;
                    if (*(int*)(lVar4 + 32) == 1) {
                        this_01 = (Vector3T<float>*)eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                eastl::allocator>>::Layout::HeapBeginPtr(local_40);
                        pVVar6 = (Vector3T<float>*)this_00->end();
                        for (; this_01 != pVVar6; this_01 = this_01 + 80) {
                            math::Vector3T<float>::operator+=(this_01, (Vector3T*)local_58);
                        }
                    } else if (*(int*)(lVar4 + 32) == 0) {
                        lVar4 = eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                eastl::allocator>>::Layout::HeapBeginPtr(local_40);
                        lVar5 = this_00->end();
                        for (; lVar4 != lVar5; lVar4 = lVar4 + 80) {
                            math::Vector3T<float>::operator+=((Vector3T<float>*)(lVar4 + 16), (Vector3T*)local_58);
                            *(undefined1*)(lVar4 + 74) = 1;
                        }
                    } else {
                        uVar3 = logger::default_logger();
                        logger::Logger::Log(uVar3, 1, 2,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "graphics/runetek7/particles/ParticleEmitter.cpp",
                                            1025, "Unhandled forceType %d in global effector",
                                            *(undefined4*)(lVar4 + 32));
                    }
                }
                puVar1 = puVar1 + 1;
            } while (puVar1 != puVar2);
        }
    }

    // 0x1007cd230, 352 bytes, placed by class name
    // ParticleEmitter::UpdatePosition(float)
    void ParticleEmitter::UpdatePosition(float param_1) {
        Vector3T<float>* this_00;
        Vector3T<float>* this_01;
        Vector3T<float>* pVVar1;
        vector* pvVar2;
        float* pfVar3;
        Vector3T* in_RSI;
        undefined8 local_38;

        this_01 = (Vector3T<float>*)(&field_160)->HeapBeginPtr();
        pVVar1 = (Vector3T<float>*)(&field_160)->end();
        if (this_01 == pVVar1) {
            return;
        }
        do {
            if (this_01[74] != (Vector3T<float>)0) {
                this_00 = this_01 + 16;
                while (
                    (((pvVar2 = this_00->SSOBeginPtr(in_RSI),
                       32767.0 < *(float*)pvVar2 || (pvVar2 = this_00->SSOBeginPtr(in_RSI),
                                                     *(float*)pvVar2 <= -32767.0 && *(float*)pvVar2 != -32767.0)) ||
                      (pfVar3 = (float*)this_00->y(), 32767.0 < *pfVar3)) ||
                     (((pfVar3 = (float*)this_00->y(), *pfVar3 <= -32767.0 && *pfVar3 != -32767.0 ||
                                                           (pfVar3 = (float*)this_00->second(), 32767.0 < *pfVar3)) ||
                       (pfVar3 = (float*)this_00->second(), *pfVar3 <= -32767.0 && *pfVar3 != -32767.0))))) {
                    math::Vector3T<float>::operator*=(this_00, 0.5);
                    *(float*)(this_01 + 28) = *(float*)(this_01 + 28) + *(float*)(this_01 + 28);
                }
                this_01[74] = (Vector3T<float>)0;
            }
            local_38 = math::operator*((Vector3T*)(this_01 + 16), *(float*)(this_01 + 28) * param_1);
            in_RSI = (Vector3T*)&local_38;
            math::Vector3T<float>::operator+=(this_01, (Vector3T*)&local_38);
            this_01 = this_01 + 80;
        } while (this_01 != pVVar1);
    }

    // 0x1007cd390, 240 bytes, placed by class name
    // ParticleEmitter::ImposeBoundaryLimits()
    void ParticleEmitter::ImposeBoundaryLimits() {
        ParticleEmitterTemplate* pPVar1;
        bool bVar2;
        undefined4* puVar3;
        eastl* peVar4;
        undefined8 uVar5;
        Particle* pPVar6;
        Particle* pPVar7;
        uint uVar8;
        undefined1* this_00;
        undefined4 local_28;
        undefined4 local_24;

        pPVar1 = m_emitterTemplate;
        uVar8 = pPVar1->field_136;
        if ((uVar8 == 4294967294) && (pPVar1->field_140 == -2)) {
            return;
        }
        if (field_68 != '\0') {
            return;
        }
        local_28 = 2147483648;
        local_24 = 2147483647;
        if (uVar8 != 4294967294) {
            if (uVar8 == 4294967295) {
                uVar8 = field_72;
            }
            if (uVar8 < 4) {
                puVar3 = (undefined4*)std::array<int, 5ul>::operator[]((array<int, 5ul>*)&field_48, (ulong)(uVar8 + 1));
                local_24 = *puVar3;
                bVar2 = true;
                goto LAB_1007cd3fc;
            }
        }
        bVar2 = false;
    LAB_1007cd3fc:
        uVar8 = pPVar1->field_140;
        if (uVar8 != 4294967294) {
            if (uVar8 == 4294967295) {
                uVar8 = field_72;
            }
            if (uVar8 < 5) {
                puVar3 = (undefined4*)std::array<int, 5ul>::operator[]((array<int, 5ul>*)&field_48, (long)(int)uVar8);
                local_28 = *puVar3;
                bVar2 = true;
            }
        }
        if (bVar2) {
            this_00 = &field_160;
            peVar4 = (eastl*)this_00->HeapBeginPtr();
            uVar5 = this_00->end();
            pPVar6 = eastl::remove_if<Particle*, ParticleEmitter::ImposeBoundaryLimits()::__2>(peVar4, uVar5, &local_28,
                                                                                               &local_24);
            pPVar7 = (Particle*)this_00->end();
            this_00->erase(pPVar6, pPVar7);
        }
    }

    // 0x1007cd4c0, 224 bytes, placed by class name
    // ParticleEmitter::UpdateSize(float)
    void ParticleEmitter::UpdateSize(float param_1) {
        float fVar1;
        ParticleEmitterTemplate* pPVar2;
        long lVar3;
        long lVar4;
        float fVar5;
        float fVar6;

        fVar5 = param_1 * m_emitterTemplate->field_228;
        fVar1 = (float)m_emitterTemplate->field_76;
        lVar3 = (&field_160)->HeapBeginPtr();
        lVar4 = (&field_160)->end();
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

    // 0x1007cd5a0, 192 bytes, placed by class name
    // ParticleEmitter::UpdateBoundingBox(math::AABB&)
    void ParticleEmitter::UpdateBoundingBox(AABB* param_1) {
        Vector3T* pVVar1;
        Vector3T* pVVar2;
        Vector3T<float> local_50[16];
        undefined8 local_40[2];

        pVVar1 = (Vector3T*)(&field_160)->HeapBeginPtr();
        pVVar2 = (Vector3T*)(&field_160)->end();
        if (pVVar1 != pVVar2) {
            do {
                math::Vector3T<float>::Vector3T(local_50, *(float*)(pVVar1 + 32));
                local_40[0] = math::operator+(pVVar1, (Vector3T*)local_50);
                param_1->AddPoint(local_40);
                local_40[0] = math::operator-(pVVar1, (Vector3T*)local_50);
                param_1->AddPoint(local_40);
                pVVar1 = pVVar1 + 80;
            } while (pVVar1 != pVVar2);
        }
    }

    // 0x1007cd660, 624 bytes, placed by class name
    // ParticleEmitter::UpdateColoursAndRotation(float)
    void ParticleEmitter::UpdateColoursAndRotation(float param_1) {
        char cVar1;
        uint uVar2;
        ParticleEmitterTemplate* pPVar3;
        byte bVar4;
        long lVar5;
        long lVar6;
        undefined1 uVar7;
        float fVar8;
        undefined4 local_38;
        float local_34;

        lVar5 = (&field_160)->HeapBeginPtr();
        lVar6 = (&field_160)->end();
        if (lVar5 != lVar6) {
            do {
                if (*(char*)(lVar5 + 72) == '\0') {
                LAB_1007cd7c0:
                    cVar1 = *(char*)(lVar5 + 73);
                } else {
                    pPVar3 = m_emitterTemplate;
                    if (*(float*)(lVar5 + 36) < (float)pPVar3->field_96) {
                        *(float*)(lVar5 + 48) = pPVar3->field_208 * param_1 + *(float*)(lVar5 + 48);
                        *(float*)(lVar5 + 52) = pPVar3->field_212 * param_1 + *(float*)(lVar5 + 52);
                        *(float*)(lVar5 + 56) = pPVar3->field_216 * param_1 + *(float*)(lVar5 + 56);
                        local_38 = 0;
                        local_34 = 255.0;
                        fVar8 = math::Clamp<float>((float*)(lVar5 + 48), (float*)&local_38, &local_34);
                        *(float*)(lVar5 + 48) = fVar8;
                        local_38 = 0;
                        local_34 = 255.0;
                        fVar8 = math::Clamp<float>((float*)(lVar5 + 52), (float*)&local_38, &local_34);
                        *(float*)(lVar5 + 52) = fVar8;
                        local_38 = 0;
                        local_34 = 255.0;
                        fVar8 = math::Clamp<float>((float*)(lVar5 + 56), (float*)&local_38, &local_34);
                        *(float*)(lVar5 + 56) = fVar8;
                        ((lVar5 + 68))
                            ->Set((uchar)(int)*(float*)(lVar5 + 48), (uchar)(int)*(float*)(lVar5 + 52),
                                  (uchar)(int)fVar8, (uchar)(int)*(float*)(lVar5 + 60));
                        goto LAB_1007cd7c0;
                    }
                    *(undefined1*)(lVar5 + 72) = 0;
                    uVar2 = pPVar3->field_92;
                    bVar4 = ((lVar5 + 68))->GetShape();
                    new (&local_38) math::ColourStorage8888<math::RGBA8StorageLayout>((uint)bVar4 | uVar2 & 4294967040);
                    *(undefined4*)(lVar5 + 68) = local_38;
                    cVar1 = *(char*)(lVar5 + 73);
                }
                if (cVar1 != '\0') {
                    pPVar3 = m_emitterTemplate;
                    if ((float)pPVar3->field_100 <= *(float*)(lVar5 + 36)) {
                        *(undefined1*)(lVar5 + 73) = 0;
                        uVar7 = (undefined1)pPVar3->field_92;
                    } else {
                        *(float*)(lVar5 + 60) = (float)pPVar3->field_220 * param_1 + *(float*)(lVar5 + 60);
                        local_38 = 0;
                        local_34 = 255.0;
                        fVar8 = math::Clamp<float>((float*)(lVar5 + 60), (float*)&local_38, &local_34);
                        *(float*)(lVar5 + 60) = fVar8;
                        uVar7 = (undefined1)(int)fVar8;
                    }
                    new ((lVar5 + 68)) std::__cxx_atomic_base_impl<bool>((bool)uVar7);
                }
                if (*(float*)(lVar5 + 44) != 0.0) {
                    fVar8 = (float)fmod(*(float*)(lVar5 + 64) - *(float*)(lVar5 + 44) * param_1, 6.2831855);
                    *(float*)(lVar5 + 64) = fVar8;
                    if (fVar8 < 0.0) {
                        *(float*)(lVar5 + 64) = fVar8 + 6.2831855;
                    }
                }
                lVar5 = lVar5 + 80;
            } while (lVar5 != lVar6);
        }
    }

    // 0x1007cd8f0, 144 bytes, placed by class name
    // ParticleEmitter::CanBatch(MaterialManager const&, shared_ptr<ModelParticleSource> const&) const
    bool ParticleEmitter::CanBatch(MaterialManager* param_1, shared_ptr* param_2) {
        ParticleManager* this_00;
        char cVar1;
        char cVar2;
        uint uVar3;
        int iVar4;
        int iVar5;
        long lVar6;
        Material* this_01;
        Minimap* this_02;
        Material* this_03;
        bool bVar7;

        lVar6 = data();
        this_01 = (Material*)param_1->GetMaterial(*(int*)(lVar6 + 104));
        this_00 = field_24;
        this_02 = (Minimap*)shared_ptr<ModelParticleSource>::operator->((shared_ptr<ModelParticleSource>*)param_2);
        uVar3 = this_02->GetLevel();
        lVar6 = this_00->GetEmitterTemplate(uVar3);
        this_03 = (Material*)param_1->GetMaterial(*(int*)(lVar6 + 104));
        cVar1 = this_01->IsRT7();
        cVar2 = this_03->IsRT7();
        if (cVar1 == cVar2) {
            iVar4 = this_01->GetSeqDelay();
            iVar5 = this_03->GetSeqDelay();
            bVar7 = iVar4 == iVar5;
        } else {
            bVar7 = false;
        }
        return bVar7;
    }

    // 0x1007eb450, 48 bytes, placed by class name
    // ParticleEmitter::SortParticles()::$_0::operator()(Particle const&, Particle const&) const
    /* ParticleEmitter::SortParticles()::$_0::TEMPNAMEPLACEHOLDERVALUE(Particle
   const&, Particle const&) const */

    bool ParticleEmitter::SortParticles()::$_0::operator()(Particle* param_1, Particle* param_2) {
        float fVar1;
        float fVar2;

        fVar1 = (float)param_1->GetOutlineRadiusAdjustment();
        fVar2 = (float)param_2->GetOutlineRadiusAdjustment();
        return fVar2 < fVar1;
    }

    // 0x1008044b0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.10
    void ___cxx_global_var_init_10() {
        new (&ParticleEmitter::m_debugEmitterPositions) eastl::vector<math::Vector3T<float>, eastl::allocator>();
        ___cxa_atexit(PTR__vector_100ee6d38, &ParticleEmitter::m_debugEmitterPositions, 4294967296);
    }

    // 0x1008044f0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.11
    void ___cxx_global_var_init_11() {
        new (&ParticleEmitter::m_debugEmitterNormals) eastl::vector<math::Vector3T<float>, eastl::allocator>();
        ___cxa_atexit(PTR__vector_100ee6d38, &ParticleEmitter::m_debugEmitterNormals, 4294967296);
    }

} // namespace jag::graphics

// 0x1007cace0, 16 bytes, placed by neighbouring functions
// atan2(float, float)
void atan2(float param_1, float param_2) {
    _atan2f();
}

// 0x1007cacf0, 64 bytes, placed by neighbouring functions
// sqrt(float)
undefined8 sqrt(float param_1) {
    uint in_XMM0_Db;
    undefined4 in_XMM0_Dc;
    undefined4 in_XMM0_Dd;
    undefined1 in_XMM1[16];
    undefined1 auVar1[16];
    float fVar2;

    auVar1._4_4_ = in_XMM0_Db;
    auVar1._0_4_ = param_1;
    auVar1._8_4_ = in_XMM0_Dc;
    auVar1._12_4_ = in_XMM0_Dd;
    auVar1 = rsqrtss(in_XMM1, auVar1);
    fVar2 = param_1 * auVar1._0_4_;
    return CONCAT44(~(in_XMM0_Db & 2147483647) & in_XMM0_Db,
                    ~-(uint)(ABS(param_1) < 1.1754944e-38) & (uint)((fVar2 * auVar1._0_4_ + -3.0) * fVar2 * -0.5));
}

// 0x1007cae80, 16 bytes, placed by neighbouring functions
// fmod(float, float)
void fmod(float param_1, float param_2) {
    _fmodf();
}

// 0x1007cae90, 16 bytes, placed by neighbouring functions
// sin(float)
void sin(float param_1) {
    _sinf();
}

// 0x1007caea0, 16 bytes, placed by neighbouring functions
// cos(float)
void cos(float param_1) {
    _cosf();
}
