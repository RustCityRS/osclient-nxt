// libs/game/runetek5/Logger_Game.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

namespace jag::game {
    // 0x1039bc1a8, 144 bytes, __common; set at startup by ___cxx_global_var_init.13
    logger::LogStream LOGGER_SCENE;

    // 0x1039bc238, 144 bytes, __common; set at startup by ___cxx_global_var_init.16
    logger::LogStream LOGGER_LIGHTPROBE;

    // 0x1039bc2c8, 144 bytes, __common; set at startup by ___cxx_global_var_init.18
    logger::LogStream LOGGER_SYNCING;

    // 0x1039bc358, 144 bytes, __common; set at startup by ___cxx_global_var_init.20
    logger::LogStream LOGGER_MINIMAP;

    // 0x1039bc3e8, 152 bytes, __common; set at startup by ___cxx_global_var_init.22
    logger::LogStream LOGGER_WORLDMAP;

    // 0x1003d1610, 48 bytes, inline, placed by class name
    // LODLevelToString(LODLevel)
    char* LODLevelToString(byte param_1) {
        if (param_1 < 7) {
            return (&PTR_s_Max_100efe608)[(char)param_1];
        }
        return "Unknown";
    }

    // 0x1004125e0, 64 bytes, inline, placed by class name
    // operator+(LODLevel, int)
    /* TEMPNAMEPLACEHOLDERVALUE(LODLevel, int) */

    undefined1 operator+(char param_1, char param_2) {
        char local_b[3];

        local_b[0] = param_2 + param_1;
        local_b[1] = 0;
        local_b[2] = 6;
        return math::Clamp<LODLevel>(local_b, local_b + 1, local_b + 2);
    }

    // 0x10048f920, 48 bytes, placed by class name
    // GetEntityTypeString(EntityType)
    char* GetEntityTypeString(byte param_1) {
        if (param_1 < 19) {
            return (&PTR_s_LOCATION_100f01448)[(char)param_1];
        }
        return "UNKNOWN";
    }

    // 0x10048fa20, 624 bytes, placed by class name
    // SetLightingFromEnv(graphics::EffectManager&, MapEnvironmentSettings const&, long long, float, bool)
    void SetLightingFromEnv(EffectManager* param_1, MapEnvironmentSettings* param_2, longlong param_3, float param_4,
                            bool param_5) {
        ulonglong uVar1;
        char cVar2;
        uint uVar3;
        SunlightDirectLighting* this;
        vector* pvVar4;
        math* this_00;
        EnvFogSettings* this_01;
        EnvLightingSettings* pEVar5;
        SunlightShadows* this_02;
        ScaleManager* this_03;
        GlobalEnvironmentMapping* this_04;
        OpenGLView* this_05;
        type* ptVar6;
        Vector3T* pVVar7;
        float fVar8;
        undefined1 local_b8[16];
        float local_a8;
        undefined4 uStack_a4;
        undefined4 uStack_a0;
        undefined4 uStack_9c;
        undefined8 local_98;
        undefined8 local_88;
        float local_80;
        float local_74;
        Vector3T local_70[8];
        float local_68;
        Vector3T local_60[8];
        float local_58;
        undefined8 local_50;
        float local_48;
        ulonglong local_40;
        float local_34;

        local_40 = FrameTime::GetCurrentTimeMS();
        cVar2 = param_1->IsEnabled(29);
        if (cVar2 != '\0') {
            ptVar6 = (type*)29;
            this = graphics::EffectManager::GetEffect<graphics::SunlightDirectLighting>(param_1);
            pvVar4 = param_2->SSOBeginPtr(ptVar6);
            local_b8._0_8_ = *(undefined8*)pvVar4;
            local_b8._8_8_ = *(undefined8*)(pvVar4 + 8);
            fVar8 = *(float*)(pvVar4 + 16);
            uStack_a4 = *(undefined4*)(pvVar4 + 20);
            uStack_a0 = *(undefined4*)(pvVar4 + 24);
            uStack_9c = *(undefined4*)(pvVar4 + 28);
            local_98 = *(undefined8*)(pvVar4 + 32);
            pVVar7 = (Vector3T*)(ulong)param_5;
            local_a8 = fVar8;
            UseGammaCorrection(param_5);
            this_00 = (math*)local_b8->y();
            local_88 = math::operator-(this_00, pVVar7);
            ptVar6 = (type*)&local_88;
            local_80 = fVar8;
            graphics::SunlightDirectLighting::SetDirection((Vector3T*)this, (longlong)ptVar6, param_3);
            this_01 = (EnvFogSettings*)param_2->SSOBeginPtr(ptVar6);
            local_34 = (float)this_01->GetFogDepthAngleFalloff();
            uVar3 = local_b8->GetX();
            local_70 = (Vector3T[8])math::Colour3FromR8G8B8A8(uVar3);
            local_68 = fVar8;
            if (param_5) {
                local_60 = (Vector3T[8])local_70->SRGBToLinear(ptVar6);
                local_58 = fVar8;
            } else {
                local_60 = local_70;
                local_58 = fVar8;
            }
            fVar8 = local_58;
            local_50 = math::operator*(local_60, local_34);
            ptVar6 = (type*)&local_50;
            local_48 = fVar8;
            graphics::SunlightDirectLighting::SetColour((Vector3T*)this, (longlong)ptVar6, param_3);
            pEVar5 = (EnvLightingSettings*)param_2->SSOBeginPtr(ptVar6);
            fVar8 = (float)pEVar5->GetAmbientLight();
            local_74 = fVar8;
            local_50 = math::operator*(local_60, (param_4 + 1.0) * fVar8);
            local_48 = fVar8;
            graphics::SunlightDirectLighting::SetAmbientColour((Vector3T*)this, (longlong)&local_50, param_3);
            SetTweakValues((Vector3T*)&local_88, local_70, local_34, local_74, param_4, SUB41((uint)param_5, 0));
        }
        cVar2 = param_1->IsEnabled(30);
        if (cVar2 != '\0') {
            ptVar6 = (type*)30;
            this_02 = (SunlightShadows*)graphics::EffectManager::GetEffect<graphics::SunlightDirectLighting>(param_1);
            this_03 = (ScaleManager*)param_2->SSOBeginPtr(ptVar6);
            fVar8 = (float)this_03->GetGameScale();
            this_02->SetSunlightShadowStrength(fVar8, param_3, local_40);
        }
        cVar2 = param_1->IsEnabled(51);
        if (cVar2 != '\0') {
            ptVar6 = (type*)51;
            this_04 = (GlobalEnvironmentMapping*)graphics::EffectManager::GetEffect<graphics::SunlightDirectLighting>(
                param_1);
            this_05 = (OpenGLView*)param_2->SSOBeginPtr(ptVar6);
            fVar8 = (float)this_05->GetMainRenderTargetScaleFactor();
            uVar1 = local_40;
            ptVar6 = (type*)param_3;
            this_04->SetSpecularHorizonOcclusionScale(fVar8, param_3, local_40);
            pEVar5 = (EnvLightingSettings*)param_2->SSOBeginPtr(ptVar6);
            fVar8 = (float)pEVar5->GetEnvMapIrradianceScale();
            this_04->SetEnvironmentMapIrradianceScale(fVar8, param_3, uVar1);
        }
    }

    // 0x10048fd20, 704 bytes, placed by class name
    // SetFogScatteringFromEnv(graphics::EffectManager&, MapEnvironmentSettings const&, long long, bool, LODSettings const&, float, float)
    void SetFogScatteringFromEnv(EffectManager* param_1, MapEnvironmentSettings* param_2, longlong param_3,
                                 bool param_4, LODSettings* param_5, float param_6, float param_7) {
        bool bVar1;
        char cVar2;
        uint uVar3;
        ulonglong uVar4;
        CommandLine* this;
        SunlightDirectLighting* this_00;
        LightScatteringEffect* this_01;
        Layout* this_02;
        vector* pvVar5;
        undefined7 in_register_00000009;
        float fVar7;
        undefined1 local_c8[16];
        undefined8 local_b8;
        undefined8 uStack_b0;
        undefined8 local_a8;
        undefined8 uStack_a0;
        undefined8 local_98;
        undefined8 uStack_90;
        undefined8 local_88;
        ulonglong local_80;
        ulonglong local_78;
        MapEnvironmentSettings* local_70;
        EffectManager* local_68;
        undefined4 local_4c;
        float local_48;
        float local_44;
        float local_40;
        float local_38;
        float local_34;

        local_4c = (undefined4)CONCAT71(in_register_00000009, param_4);
        uVar4 = FrameTime::GetCurrentTimeMS();
        new (&local_48) math::Vector3T<int>();
        cVar2 = param_1->IsEnabled(57);
        if (cVar2 != '\0') {
            local_80 = param_3;
            local_78 = uVar4;
            local_70 = param_2;
            this = (CommandLine*)param_2->get_overflow_allocator();
            local_68 = param_1;
            this_00 = graphics::EffectManager::GetEffect<graphics::SunlightDirectLighting>(param_1, 57);
            uVar3 = GetZ();
            local_c8._0_8_ = math::Colour3FromR8G8B8A8(uVar3);
            local_c8._8_4_ = param_7;
            local_48.Set(local_c8);
            bVar1 = local_4c._0_1_;
            this_00->SetTweakValues((Vector3T*)(Vector3T<float>*)&local_48, local_4c._0_1_);
            this_00->SetFogIntensity(0.5);
            if (bVar1 != false) {
                local_c8._0_8_ = local_48.SRGBToLinear((Vector3T*)(Vector3T<float>*)&local_48);
                local_c8._8_4_ = param_7;
                local_48.SetXYZ(local_c8);
            }
            new (local_c8) ImVec4(local_48, local_44, local_40, 255.0);
            local_38 = 0.0;
            local_34 = 0.0;
            fVar7 = (float)GetOutlineRadiusAdjustment();
            graphics::FogEffect::CalculateFogNearFarPlane(&local_38, &local_34, param_6, param_7, fVar7);
            uVar4 = local_78;
            param_3 = local_80;
            graphics::FogEffect::SetFogColour((Vector4T*)this_00, (longlong)local_c8, local_80);
            uVar3 = GetPos();
            local_88 = param_5->GetFogRange(uVar3, local_38, local_34);
            this_00->SetFogDistance((pair*)&local_88, param_3, uVar4);
            fVar7 = (float)GetAmbientLight();
            this_00->SetFogConstantAngleFalloff(fVar7, param_3, uVar4);
            fVar7 = (float)GetFogDepthAngleFalloff();
            this_00->SetFogDepthAngleFalloff(fVar7, param_3, uVar4);
            fVar7 = (float)GetRightClip();
            this_00->SetFogAngleOffset(fVar7, param_3, uVar4);
            math::Vector3T<float>::operator*=((Vector3T<float>*)&local_48, 0.5);
            param_1 = local_68;
            param_2 = local_70;
        }
        cVar2 = param_1->IsEnabled(48);
        if (cVar2 != '\0') {
            this_01 =
                (LightScatteringEffect*)graphics::EffectManager::GetEffect<graphics::SunlightDirectLighting>(param_1);
            this_02 = (Layout*)param_2->GetOrigin();
            pvVar5 = eastl::string::Layout::SSOBeginPtr(this_02, (type*)48);
            local_c8._0_8_ = *(undefined8*)pvVar5;
            local_c8._8_8_ = *(undefined8*)(pvVar5 + 8);
            local_b8 = *(undefined8*)(pvVar5 + 16);
            uStack_b0 = *(undefined8*)(pvVar5 + 24);
            local_a8 = *(undefined8*)(pvVar5 + 32);
            uStack_a0 = *(undefined8*)(pvVar5 + 40);
            local_98 = *(undefined8*)(pvVar5 + 48);
            uStack_90 = *(undefined8*)(pvVar5 + 56);
            cVar2 = local_b8.SloppyCompare((Vector3T*)&graphics::DEF_INSCATTERING_AMOUNT, 0.002);
            if (cVar2 != '\0') {
                local_b8.SetXYZ((Vector3T*)&local_48);
            }
            this_01->SetScatteringParams(local_c8, param_3, uVar4);
        }
    }

    // 0x100490080, 80 bytes, placed by class name
    // SetVolumetricsFromEnv(graphics::EffectManager&, MapEnvironmentSettings const&, long long)
    void SetVolumetricsFromEnv(EffectManager* param_1, MapEnvironmentSettings* param_2, longlong param_3) {
        VolumetricScatteringEffect* this;
        ulonglong uVar1;
        Layout* this_00;
        VolumetricScatteringParams* pVVar2;

        this = (VolumetricScatteringEffect*)graphics::EffectManager::GetEffect<graphics::SunlightDirectLighting>();
        uVar1 = FrameTime::GetCurrentTimeMS();
        this_00 = (Layout*)param_2->GetParticles();
        pVVar2 = (VolumetricScatteringParams*)eastl::string::Layout::SSOBeginPtr(this_00, (type*)50);
        SetParams(pVVar2, param_3, uVar1);
    }

    // 0x1004900e0, 464 bytes, placed by class name
    // SetPostProcessingFromEnv(graphics::PostProcessController::Config&, graphics::EffectManager&, MapEnvironmentSettings const&, long long, bool)
    void SetPostProcessingFromEnv(Config* param_1, EffectManager* param_2, MapEnvironmentSettings* param_3,
                                  longlong param_4, bool param_5) {
        ulonglong uVar1;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* pcVar2;
        PostProcessParams* pPVar3;
        Skybox* this;
        CoordMapSquare* this_00;
        EntityHighlightState* this_01;
        EnvBloomSettings* this_02;
        EnvLightProbeSettings* this_03;
        vector<int, eastl::fixed_vector_allocator<4ul, 3ul, 4ul, 0ul, true, eastl::allocator>>* this_04;
        LoginManager* this_05;
        vector<float, eastl::fixed_vector_allocator<4ul, 3ul, 4ul, 0ul, true, eastl::allocator>>* this_06;
        undefined4* puVar4;
        undefined1 uVar5;
        undefined4 uVar6;
        undefined4* puVar7;
        ulong uVar8;
        float local_68[6];
        longlong local_50;
        Config* local_48;
        ulonglong local_40;
        float local_38;
        float local_34;

        uVar1 = FrameTime::GetCurrentTimeMS();
        pcVar2 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                      eastl::allocator, 0>*)param_3->GetParentLocationType();
        pPVar3 = (PostProcessParams*)
            eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator, 0>::second(pcVar2);
        (&param_1->field_8, pPVar3, param_4, uVar1)->SetTransition();
        this = (Skybox*)param_3->GetParentLocationType();
        uVar5 = ShowSkybox();
        param_1->field_520 = uVar5;
        this_00 = (CoordMapSquare*)param_3->GetParentLocationType();
        uVar6 = this_00->GetZ();
        *(undefined4*)&param_1->field_524 = uVar6;
        this_01 = (EntityHighlightState*)param_3->GetVertexDataBuffer();
        local_68[0] = (float)this_01->GetAlpha();
        this_02 = (EnvBloomSettings*)param_3->GetVertexDataBuffer();
        local_34 = (float)this_02->GetBrightpassThreshold();
        this_03 = (EnvLightProbeSettings*)param_3->GetVertexDataBuffer();
        local_38 = (float)this_03->GetOverbright();
        if ((local_68[0] < 0.5) && (local_34 < 1.1)) {
            local_34 = 1.1;
        }
        (&param_1->field_384, &local_34, param_4, uVar1)->SetValue();
        (&param_1->field_480, local_68, param_4, uVar1)->SetValue();
        local_50 = param_4;
        local_48 = param_1;
        local_40 = uVar1;
        (&param_1->field_424, &local_38, param_4, uVar1)->SetValue();
        pcVar2 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                      eastl::allocator, 0>*)param_3->GetIrradianceEffect();
        this_04 = (vector<int, eastl::fixed_vector_allocator<4ul, 3ul, 4ul, 0ul, true, eastl::allocator>>*)
            eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator, 0>::second(pcVar2);
        this_05 = (LoginManager*)param_3->GetIrradianceEffect();
        this_06 = (vector<float, eastl::fixed_vector_allocator<4ul, 3ul, 4ul, 0ul, true, eastl::allocator>>*)
                      this_05->GetDevCredentialsOutputDirectory();
        new (local_68) std::array<postprocess::ColourCorrectionConfig::Remapping, 3ul>();
        uVar8 = 0;
        do {
            puVar4 = (undefined4*)eastl::vector<
                int, eastl::fixed_vector_allocator<4ul, 3ul, 4ul, 0ul, true, eastl::allocator>>::operator[](this_04,
                                                                                                            uVar8);
            uVar6 = *puVar4;
            puVar7 = (undefined4*)std::array<postprocess::ColourCorrectionConfig::Remapping, 3ul>::operator[](
                (array<postprocess::ColourCorrectionConfig::Remapping, 3ul>*)local_68, uVar8);
            *puVar7 = uVar6;
            puVar4 = (undefined4*)eastl::vector<
                float, eastl::fixed_vector_allocator<4ul, 3ul, 4ul, 0ul, true, eastl::allocator>>::operator[](this_06,
                                                                                                              uVar8);
            puVar7[1] = *puVar4;
            uVar8 = uVar8 + 1;
        } while (uVar8 != 3);
        (&local_48->field_224, (array*)local_68, local_50, local_40)->SetColourRemap();
    }

    // 0x100491350, 16 bytes, inline, placed by class name
    // IsFlagBitPresent(unsigned long long, EnvironmentOverrideFlagBit)
    bool IsFlagBitPresent(ulong param_1, ulong param_2) {
        return (param_1 >> (param_2 & 63) & 1) != 0;
    }

    // 0x1005379b0, 1072 bytes, placed by class name
    // AppendFormattedNumber(eastl::fixed_string<char, 64, true, eastl::allocator>&, unsigned long long, Language const*)
    void AppendFormattedNumber(fixed_string* param_1, ulonglong param_2, Language* param_3) {
        int iVar1;
        undefined8 uVar2;
        undefined8* puVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        ulong uVar6;
        fixed_string<char, 40, true, eastl::allocator> local_100[104];
        fixed_string<char, 64, true, eastl::allocator> local_98[104];
        undefined8 local_30;

        local_30 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 64, true, eastl::allocator>::fixed_string(local_98);
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::sprintf(
            (char*)local_98, "%llu", param_2);
        iVar1 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        uVar6 = (ulong)iVar1;
        while (3 < (long)uVar6) {
            uVar6 = uVar6 - 3;
            local_98->replace(uVar6, 0, 1, ', ');
        }
        uVar6 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        if (uVar6 < 19) {
            uVar6 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            if (uVar6 < 16) {
                uVar6 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                if (uVar6 < 13) {
                    uVar6 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                    if (uVar6 < 10) {
                        uVar6 = eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                        if (uVar6 < 7) {
                            uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                            eastl::basic_string<
                                char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                                sprintf((char*)param_1, "%s%s%s", "<col=ffff00>", uVar5, "</col>");
                            /* WARNING: Subroutine does not return */
                            local_98->~fixed_string();
                        }
                        eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                        eastl::fixed_string<char, 64, true, eastl::allocator>::substr((ulong)local_100,
                                                                                      (ulong)local_98);
                        uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        puVar3 = (undefined8*)std::array<char const*, 7ul>::operator[](
                            (array<char const*, 7ul>*)&LocalisedText::THOUSAND, (ulong)param_3->field_8);
                        uVar5 = *puVar3;
                        uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                            sprintf((char*)param_1, " %s%s%s (%s)%s", "<col=ffffff>", uVar2, uVar5, uVar4, "</col>");
                    } else {
                        eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                        eastl::fixed_string<char, 64, true, eastl::allocator>::substr((ulong)local_100,
                                                                                      (ulong)local_98);
                        uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        puVar3 = (undefined8*)std::array<char const*, 7ul>::operator[](
                            (array<char const*, 7ul>*)&LocalisedText::MILLION, (ulong)param_3->field_8);
                        uVar5 = *puVar3;
                        uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                            sprintf((char*)param_1, " %s%s%s (%s)%s", "<col=00ff80>", uVar2, uVar5, uVar4, "</col>");
                    }
                } else {
                    eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                    eastl::fixed_string<char, 64, true, eastl::allocator>::substr((ulong)local_100, (ulong)local_98);
                    uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    puVar3 = (undefined8*)std::array<char const*, 7ul>::operator[](
                        (array<char const*, 7ul>*)&LocalisedText::BILLION, (ulong)param_3->field_8);
                    uVar5 = *puVar3;
                    uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                        sprintf((char*)param_1, " %s%s%s (%s)%s", "<col=00ff80>", uVar2, uVar5, uVar4, "</col>");
                }
            } else {
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                eastl::fixed_string<char, 64, true, eastl::allocator>::substr((ulong)local_100, (ulong)local_98);
                uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                puVar3 = (undefined8*)std::array<char const*, 7ul>::operator[](
                    (array<char const*, 7ul>*)&LocalisedText::TRILLION, (ulong)param_3->field_8);
                uVar5 = *puVar3;
                uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    sprintf((char*)param_1, " %s%s%s (%s)%s", "<col=00ff80>", uVar2, uVar5, uVar4, "</col>");
            }
        } else {
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            eastl::fixed_string<char, 64, true, eastl::allocator>::substr((ulong)local_100, (ulong)local_98);
            uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            puVar3 = (undefined8*)std::array<char const*, 7ul>::operator[](
                (array<char const*, 7ul>*)&LocalisedText::QUADRILLION, (ulong)param_3->field_8);
            uVar5 = *puVar3;
            uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                sprintf((char*)param_1, " %s%s%s (%s)%s", "<col=00ff80>", uVar2, uVar5, uVar4, "</col>");
        }
        /* WARNING: Subroutine does not return */
        eastl::fixed_string<char, 40, true, eastl::allocator>::~fixed_string(local_100);
    }

    // 0x100537f10, 384 bytes, placed by class name
    // GetLinkObjTextString(eastl::fixed_string<char, 256, true, eastl::allocator>*, int, unsigned long long, ConfigProvider const&, Language const*)
    undefined8 GetLinkObjTextString(fixed_string* param_1, int param_2, ulonglong param_3, ConfigProvider* param_4,
                                    Language* param_5) {
        char cVar2;
        shared_ptr* this;
        Mouse* this_00;
        ObjType* this_01;
        undefined8 uVar3;
        undefined8 uVar4;
        char* pcVar5;
        ulong uVar6;
        fixed_string<char, 64, true, eastl::allocator> local_a0[104];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 16, true, eastl::allocator>::operator=(
            (fixed_string<char, 16, true, eastl::allocator>*)param_1, "");
        if (param_2 != -1) {
            this = ConfigProvider::GetConfig<ObjType>(param_4, param_2, (DataStatus**)0);
            if (shared_ptr::operator_cast_to_bool(this)) {
                this_00 = (Mouse*)shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)this);
                this_00->GetScaledMousePosition();
                this_01 = (ObjType*)shared_ptr<ObjType>::operator->((shared_ptr<ObjType>*)this);
                cVar2 = this_01->GetStackable();
                if ((param_3 != 1 || cVar2 == '\x01') && (param_3 != 18446744073709551615)) {
                    eastl::fixed_string<char, 64, true, eastl::allocator>::fixed_string(local_a0);
                    AppendFormattedNumber((fixed_string*)local_a0, param_3, param_5);
                    uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true,
                                                                            eastl::allocator>>::sprintf((char*)param_1,
                                                                                                        "%s%s%s %s",
                                                                                                        "<col=ff9040>",
                                                                                                        uVar3,
                                                                                                        "</col> x",
                                                                                                        uVar4);
                    /* WARNING: Subroutine does not return */
                    local_a0->~fixed_string();
                }
                pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                uVar6 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                param_1->assign(pcVar5, uVar6);
                uVar3 = 1;
                goto LAB_10053804c;
            }
        }
        uVar3 = 0;
    LAB_10053804c:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar3;
    }

    // 0x100538090, 592 bytes, placed by class name
    // GetLinkObjCountString(eastl::fixed_string<char, 32, true, eastl::allocator>*, int, unsigned long long, ui::LinkObjCountDisplayMode, ConfigProvider*, Language const*)
    undefined8 GetLinkObjCountString(fixed_string<char, 16, true, eastl::allocator>* param_1, int param_2,
                                     ulong param_3, char param_4, ConfigProvider* param_5, long param_6) {
        uint uVar2;
        shared_ptr* this;
        ObjType* pOVar3;
        Location* this_00;
        undefined8* puVar4;
        ulong uVar5;
        undefined** this_01;
        undefined8 uVar6;
        ulong uVar7;

        eastl::fixed_string<char, 16, true, eastl::allocator>::operator=(param_1, "");
        uVar6 = 0;
        if ((-1 < (long)param_3) && (param_2 != -1)) {
            uVar6 = 0;
            this = ConfigProvider::GetConfig<ObjType>(param_5, param_2, (DataStatus**)0);
            pOVar3 = (ObjType*)end();
            if (pOVar3 != (ObjType*)0) {
                pOVar3 = (ObjType*)pOVar3->GetStackSizeAlt(param_3);
                uVar6 = 1;
                if (param_4 != '\x01') {
                    if (param_4 != '\x02') {
                        return 1;
                    }
                    if ((pOVar3->GetStackable() != '\x01') && (param_3 == 1)) {
                        return 1;
                    }
                }
                this_00 = (Location*)param_5->GetGraphicsDefaults();
                if (param_3 < 100000) {
                    uVar2 = this_00->GetObjStackColourUnits();
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 32ul, 1ul, 0ul, true, eastl::allocator>>::
                        sprintf((char*)param_1, "<col=%08X>%llu%s", (ulong)uVar2, param_3, "</col>");
                } else {
                    if (param_3 < 10000000) {
                        uVar2 = this_00->GetObjStackColourThousands();
                        uVar7 = (ulong)uVar2;
                        param_3 = param_3 / 1000;
                        uVar5 = (ulong) * (uint*)(param_6 + 8);
                        this_01 = &LocalisedText::THOUSAND_SHORT;
                    } else if (param_3 >> 10 < 9765625) {
                        uVar2 = this_00->GetEffectAnimID();
                        uVar7 = (ulong)uVar2;
                        param_3 = param_3 / 1000000;
                        uVar5 = (ulong) * (uint*)(param_6 + 8);
                        this_01 = &LocalisedText::MILLION_SHORT;
                    } else if (param_3 >> 13 < 1220703125) {
                        uVar2 = this_00->GetMinGridZ();
                        uVar7 = (ulong)uVar2;
                        param_3 = param_3 / 1000000000;
                        uVar5 = (ulong) * (uint*)(param_6 + 8);
                        this_01 = &LocalisedText::BILLION_SHORT;
                    } else if (param_3 < 10000000000000000) {
                        uVar2 = this_00->GetObjStackColourTrillions();
                        uVar7 = (ulong)uVar2;
                        param_3 = param_3 / 1000000000000;
                        uVar5 = (ulong) * (uint*)(param_6 + 8);
                        this_01 = &LocalisedText::TRILLION_SHORT;
                    } else {
                        uVar2 = this_00->GetID();
                        uVar7 = (ulong)uVar2;
                        param_3 = param_3 / 1000000000000000;
                        uVar5 = (ulong) * (uint*)(param_6 + 8);
                        this_01 = &LocalisedText::QUADRILLION_SHORT;
                    }
                    puVar4 =
                        (undefined8*)std::array<char const*, 7ul>::operator[]((array<char const*, 7ul>*)this_01, uVar5);
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 32ul, 1ul, 0ul, true, eastl::allocator>>::
                        sprintf((char*)param_1, "<col=%08X>%llu%s%s", uVar7, param_3, *puVar4, "</col>");
                }
            }
        }
        return uVar6;
    }

    // 0x1005fde30, 112 bytes, placed by class name
    // SetShadowQualityEffect(graphics::EffectManager&, graphics::GraphicsQuality)
    void SetShadowQualityEffect(EffectManager* param_1, uint param_2) {
        param_1->EnableEffect(31, 0);
        param_1->EnableEffect(32, 0);
        param_1->EnableEffect(33, 0);
        param_1->EnableEffect(34, 0);
        if (param_2 < 4) {
            param_1->EnableEffect((char)param_2 + '\x1f', 1);
        }
    }

    // 0x100607d00, 240 bytes, inline, placed by class name
    // math::QuaternionT<float> JagSlerp<math::QuaternionT<float>, float>(math::QuaternionT<float> const&, math::QuaternionT<float> const&, float, float)
    game* JagSlerp<math::QuaternionT<float>, float>(QuaternionT* param_1, QuaternionT* param_2, float param_3,
                                                    float param_4) {
        QuaternionT<float>* this_00;
        float fVar1;
        undefined1 local_60[16];
        QuaternionT<float> local_50[20];
        float local_38;

        this_00 = local_50;
        math::QuaternionT<float>::QuaternionT(this_00);
        local_38 = math::QuaternionDot<float>(param_1, param_2);
        fVar1 = (float)::abs(1.0 - local_38);
        if (param_4 <= fVar1) {
            if (local_38 < 0.0) {
                math::operator-((math*)local_60, param_1);
                param_1 = (QuaternionT*)local_60;
            }
            math::Rect<float>::operator=((Rect<float>*)local_50, (Rect*)param_1);
            math::Vector4T<float>::operator*=((Vector4T<float>*)this_00, 1.0 - param_3);
            math::operator*((math*)local_60, param_2, param_3);
            math::QuaternionT<float>::operator+=(this_00, (QuaternionT*)local_60);
            this_00->Normalise();
        } else {
            this_00 = (QuaternionT<float>*)param_2;
        }
        new (this) math::QuaternionT<float>(this_00);
        return this;
    }

    // 0x100616a30, 256 bytes, inline, placed by class name
    // math::QuaternionT<double> JagSlerp<math::QuaternionT<double>, double>(math::QuaternionT<double> const&, math::QuaternionT<double> const&, double, double)
    game* JagSlerp<math::QuaternionT<double>, double>(QuaternionT* param_1, QuaternionT* param_2, double param_3,
                                                      double param_4) {
        double dVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        QuaternionT<double>* this_00;
        undefined1 local_88[32];
        QuaternionT<double> local_68[32];
        double local_40;

        this_00 = local_68;
        math::QuaternionT<double>::QuaternionT(this_00);
        local_40 = math::QuaternionDot<double>(param_1, param_2);
        dVar1 = (double)::abs(1.0 - local_40);
        if (param_4 <= dVar1) {
            if (local_40 < 0.0) {
                math::operator-((math*)local_88, param_1);
                param_1 = (QuaternionT*)local_88;
            }
            math::QuaternionT<double>::operator=(local_68, param_1);
            math::QuaternionT<double>::operator*=(this_00, 1.0 - param_3);
            math::operator*((math*)local_88, param_2, param_3);
            math::QuaternionT<double>::operator+=(this_00, (QuaternionT*)local_88);
            this_00->Normalise();
        } else {
            this_00 = (QuaternionT<double>*)param_2;
        }
        uVar2 = *(undefined8*)this_00;
        uVar3 = *(undefined8*)(this_00 + 8);
        uVar4 = *(undefined8*)(this_00 + 24);
        field_16 = *(undefined8*)(this_00 + 16);
        field_24 = uVar4;
        field_0 = uVar2;
        field_8 = uVar3;
        return this;
    }

    // 0x10065e750, 64 bytes, inline, placed by class name
    // operator<(AssetWorkerJob const&, AssetWorkerJob const&)
    /* TEMPNAMEPLACEHOLDERVALUE(AssetWorkerJob const&, AssetWorkerJob
   const&) */

    bool operator<(AssetWorkerJob* param_1, AssetWorkerJob* param_2) {
        TextRun* pTVar1;
        int iVar2;
        int iVar3;

        pTVar1 = (TextRun*)shared_ptr<AssetJob>::operator->((shared_ptr<AssetJob>*)&param_1->field_16);
        iVar2 = pTVar1->GetMaxLineWidth();
        pTVar1 = (TextRun*)shared_ptr<AssetJob>::operator->((shared_ptr<AssetJob>*)&param_2->field_16);
        iVar3 = pTVar1->GetMaxLineWidth();
        return iVar2 < iVar3;
    }

    // 0x1006736d0, 208 bytes, placed by the data it initialises
    // ___cxx_global_var_init.13
    void ___cxx_global_var_init_13() {
        fixed_string<char, 32, true, eastl::allocator> local_a8[72];
        fixed_string<char, 32, true, eastl::allocator> local_60[72];
        undefined8 local_18;

        local_18 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 32, true, eastl::allocator>::fixed_string(local_60, " Misc.");
        eastl::fixed_string<char, 32, true, eastl::allocator>::fixed_string(local_a8, "Scene");
        new (&LOGGER_SCENE) logger::LogStream(local_60, local_a8, 3);
        /* WARNING: Subroutine does not return */
        local_a8->~fixed_string();
    }

    // 0x1006737a0, 208 bytes, placed by the data it initialises
    // ___cxx_global_var_init.16
    void ___cxx_global_var_init_16() {
        fixed_string<char, 32, true, eastl::allocator> local_a8[72];
        fixed_string<char, 32, true, eastl::allocator> local_60[72];
        undefined8 local_18;

        local_18 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 32, true, eastl::allocator>::fixed_string(local_60, "Light Probes");
        eastl::fixed_string<char, 32, true, eastl::allocator>::fixed_string(local_a8, "Scene");
        new (&LOGGER_LIGHTPROBE) logger::LogStream(local_60, local_a8, 3);
        /* WARNING: Subroutine does not return */
        local_a8->~fixed_string();
    }

    // 0x100673870, 208 bytes, placed by the data it initialises
    // ___cxx_global_var_init.18
    void ___cxx_global_var_init_18() {
        fixed_string<char, 32, true, eastl::allocator> local_a8[72];
        fixed_string<char, 32, true, eastl::allocator> local_60[72];
        undefined8 local_18;

        local_18 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 32, true, eastl::allocator>::fixed_string(local_60, "ServerSyncing");
        eastl::fixed_string<char, 32, true, eastl::allocator>::fixed_string(local_a8, "Scene");
        new (&LOGGER_SYNCING) logger::LogStream(local_60, local_a8, 3);
        /* WARNING: Subroutine does not return */
        local_a8->~fixed_string();
    }

    // 0x100673940, 208 bytes, placed by the data it initialises
    // ___cxx_global_var_init.20
    void ___cxx_global_var_init_20() {
        fixed_string<char, 32, true, eastl::allocator> local_a8[72];
        fixed_string<char, 32, true, eastl::allocator> local_60[72];
        undefined8 local_18;

        local_18 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 32, true, eastl::allocator>::fixed_string(local_60, "MiniMap");
        eastl::fixed_string<char, 32, true, eastl::allocator>::fixed_string(local_a8, "Scene");
        new (&LOGGER_MINIMAP) logger::LogStream(local_60, local_a8, 3);
        /* WARNING: Subroutine does not return */
        local_a8->~fixed_string();
    }

    // 0x100673a10, 208 bytes, placed by the data it initialises
    // ___cxx_global_var_init.22
    void ___cxx_global_var_init_22() {
        fixed_string<char, 32, true, eastl::allocator> local_a8[72];
        fixed_string<char, 32, true, eastl::allocator> local_60[72];
        undefined8 local_18;

        local_18 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 32, true, eastl::allocator>::fixed_string(local_60, "World Map");
        eastl::fixed_string<char, 32, true, eastl::allocator>::fixed_string(local_a8, "Scene");
        new (&LOGGER_WORLDMAP) logger::LogStream(local_60, local_a8, 3);
        /* WARNING: Subroutine does not return */
        local_a8->~fixed_string();
    }

    // 0x100673ae0, 96 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.24
    void ___cxx_global_var_init_24() {
        undefined1 local_50[40];
        Vector3T<int> local_28[16];

        math::Matrix33Scaling<float>((math*)local_50, 1.0, 1.0, -1.0);
        math::Vector3T<int>::Vector3T(local_28);
        new (&graphics::MAYA_ANIM_INVERT_MATRIX) math::Matrix44T<float>(local_50, local_28);
    }

    // 0x100673b40, 32 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.25
    void ___cxx_global_var_init_25() {
        new (&graphics::WORLD_ORTHOGONAL) math::ColourHSL(-1.5707964, -1.5707964, 0.0);
    }

    // 0x100673b60, 96 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.39
    void ___cxx_global_var_init_39() {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_100ee5578) HashedString("LUMINANCE_ADAPTED");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048);
            }
        }
    }

    // 0x100673bc0, 96 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.41
    void ___cxx_global_var_init_41() {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee5588) HashedString("LUMINANCE_ADAPTED_PREVIOUS");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058);
            }
        }
    }

    // 0x100673c20, 96 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.43
    void ___cxx_global_var_init_43() {
        if (*PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050) != 0) {
                new (PTR_VIEWRT_LUMINANCE_AVERAGE_100ee5580) HashedString("VIEWRT_LUMINANCE_AVERAGE");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050);
            }
        }
    }

    // 0x100673c80, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.54
    void ___cxx_global_var_init_54() {
        undefined* puVar1;

        puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100673cc0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.55
    void ___cxx_global_var_init_55() {
        undefined* puVar1;

        puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100673d00, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.56
    void ___cxx_global_var_init_56() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton, std::default_delete<ThreadPoolSingleton>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100673d40, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.57
    void ___cxx_global_var_init_57() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<ShaderThreadPoolSingleton, std::default_delete<ShaderThreadPoolSingleton>>::~unique_ptr,
                PTR_m_pSingleton_100ee5950, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100673d80, 48 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.58
    void ___cxx_global_var_init_58() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) math::Point<float>(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100673db0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.59
    void ___cxx_global_var_init_59() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100673df0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.60
    void ___cxx_global_var_init_60() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100673e30, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.61
    void ___cxx_global_var_init_61() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49c8;
        if (*PTR_m_pSingleton_100ee49c8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderProgramManager,
                                          std::default_delete<render::ShaderProgramManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c38, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100673e70, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.62
    void ___cxx_global_var_init_62() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49d0;
        if (*PTR_m_pSingleton_100ee49d0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VertexDeclarationManager,
                                          std::default_delete<render::VertexDeclarationManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c40, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100673eb0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.63
    void ___cxx_global_var_init_63() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee47e0;
        if (*PTR_ZERO_100ee47e0 == '\0') {
            new (PTR_ZERO_100ee66e8) math::ColourHSL(0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100673ef0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.64
    void ___cxx_global_var_init_64() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4988;
        if (*PTR_m_pSingleton_100ee4988 == '\0') {
            ___cxa_atexit(std::unique_ptr<SoundManager, std::default_delete<SoundManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6bf8, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100673f30, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.65
    void ___cxx_global_var_init_65() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49a0;
        if (*PTR_m_pSingleton_100ee49a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::RenderDevice, std::default_delete<render::RenderDevice>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c10, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100673f70, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.66
    void ___cxx_global_var_init_66() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4520;
        if (*PTR_m_mutex_100ee4520 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100673fb0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.67
    void ___cxx_global_var_init_67() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4500;
        if (*PTR_m_mutex_100ee4500 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5dc0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100673ff0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.68
    void ___cxx_global_var_init_68() {
        undefined* puVar1;

        puVar1 = PTR_RIGHT_100ee47e8;
        if (*PTR_RIGHT_100ee47e8 == '\0') {
            new (PTR_RIGHT_100ee66f0) math::ColourHSL(1.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100674030, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.69
    void ___cxx_global_var_init_69() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee45b0;
        if (*PTR_m_mutex_100ee45b0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100674070, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.70
    void ___cxx_global_var_init_70() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49d8;
        if (*PTR_m_pSingleton_100ee49d8 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphics::AnimationManager,
                                          std::default_delete<graphics::AnimationManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c48, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006740b0, 96 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.71
    void ___cxx_global_var_init_71() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4820;
        if (*PTR_ZERO_100ee4820 == '\0') {
            new (PTR_ZERO_100ee6728)
                math::Matrix44T<float>(0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100674110, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.72
    void ___cxx_global_var_init_72() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee45d8;
        if (*PTR_m_mutex_100ee45d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100674190, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.74
    void ___cxx_global_var_init_74() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee44c8;
        if (*PTR_m_mutex_100ee44c8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5d50, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006741d0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.75
    void ___cxx_global_var_init_75(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullConfigType_100ee6570;
        puVar1 = PTR_NullConfigType_100ee4718;
        if (*PTR_NullConfigType_100ee4718 == '\0') {
            new (PTR_NullConfigType_100ee6570) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee52a0, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100674210, 96 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.76
    void ___cxx_global_var_init_76() {
        undefined* puVar1;

        puVar1 = PTR_IDENTITY_100ee4828;
        if (*PTR_IDENTITY_100ee4828 == '\0') {
            new (PTR_IDENTITY_100ee6730)
                math::Matrix44T<float>(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100674270, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.77
    void ___cxx_global_var_init_77() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4590;
        if (*PTR_m_mutex_100ee4590 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ee0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006742b0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.78
    void ___cxx_global_var_init_78() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4290;
        if (*PTR_m_pSingleton_100ee4290 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphicutils::BatchDestroyManager,
                                          std::default_delete<graphicutils::BatchDestroyManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5940, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006742f0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.79
    void ___cxx_global_var_init_79() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4560;
        if (*PTR_m_mutex_100ee4560 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e80, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100674370, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.81
    void ___cxx_global_var_init_81() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee43d0;
        if (*PTR_m_mutex_100ee43d0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5b68, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006743b0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.82
    void ___cxx_global_var_init_82() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4628;
        if (*PTR_m_mutex_100ee4628 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee6010, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006743f0, 104 bytes, placed by debug map only (low confidence)
    // __GLOBAL__sub_I_unity_0_cxx.cxx
    void __GLOBAL__sub_I_unity_0_cxx_cxx() {
        undefined8 uVar1;

        uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init();
        ___cxx_global_var_init_1();
        ___cxx_global_var_init_3();
        ___cxx_global_var_init_4();
        ___cxx_global_var_init_6();
        ___cxx_global_var_init_7();
        ___cxx_global_var_init_9();
        ___cxx_global_var_init_11();
        ___cxx_global_var_init_13();
        ___cxx_global_var_init_16();
        ___cxx_global_var_init_18();
        ___cxx_global_var_init_20();
        ___cxx_global_var_init_22();
        ___cxx_global_var_init_24();
        ___cxx_global_var_init_25();
        _objc_autoreleasePoolPop(uVar1);
    }

    // 0x1006e0fa0, 176 bytes, inline, placed by class name
    // bool DecodeRawVariable<int, eastl::fixed_vector<unsigned char, 512ul, true, eastl::allocator> >(std::variant<int, unsigned int, bool, float, eastl::string, jag::console::VarAny>&, eastl::fixed_vector<unsigned char, 512ul, true, eastl::allocator> const&, int, eastl::string const&)
    /* bool DecodeRawVariable<int, eastl::fixed_vector<unsigned char, 512ul, true,
   eastl::allocator> >(std::variant<int, unsigned int, bool, float, eastl::basic_string<char,
   eastl::allocator>, jag::console::VarAny>&, eastl::fixed_vector<unsigned char, 512ul, true,
   eastl::allocator> const&, int, eastl::string const&) */

    bool game::DecodeRawVariable<int, eastl::fixed_vector<unsigned char, 512ul, true, eastl::allocator>>(
        variant* param_1, fixed_vector* param_2, int param_3, basic_string* param_4) {
        long lVar1;
        int* piVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;

        lVar1 = param_2->size();
        if (lVar1 == 4) {
            piVar2 = (int*)param_2->HeapBeginPtr();
            std::variant<int, unsigned int, bool, float, eastl::string, jag::console::VarAny>::operator=(
                (variant<int, unsigned int, bool, float, eastl::string, jag::console::VarAny>*)param_1, piVar2);
        } else {
            uVar3 = logger::default_logger();
            uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar5 = param_2->size();
            logger::Logger::Log(uVar3, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/shared/"
                                "console/GameConsole.cpp",
                                22, "Console variable %d (%s) has an invalid size (expected %d bytes, got %d)", param_3,
                                uVar4, 4, uVar5);
        }
        return lVar1 == 4;
    }

    // 0x1006e1050, 176 bytes, inline, placed by class name
    // bool DecodeRawVariable<unsigned int, eastl::fixed_vector<unsigned char, 512ul, true, eastl::allocator> >(std::variant<int, unsigned int, bool, float, eastl::string, jag::console::VarAny>&, eastl::fixed_vector<unsigned char, 512ul, true, eastl::allocator> const&, int, eastl::string const&)
    /* bool DecodeRawVariable<unsigned int, eastl::fixed_vector<unsigned char, 512ul, true,
   eastl::allocator> >(std::variant<int, unsigned int, bool, float, eastl::basic_string<char,
   eastl::allocator>, jag::console::VarAny>&, eastl::fixed_vector<unsigned char, 512ul, true,
   eastl::allocator> const&, int, eastl::string const&) */

    bool game::DecodeRawVariable<unsigned int, eastl::fixed_vector<unsigned char, 512ul, true, eastl::allocator>>(
        variant* param_1, fixed_vector* param_2, int param_3, basic_string* param_4) {
        long lVar1;
        uint* puVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;

        lVar1 = param_2->size();
        if (lVar1 == 4) {
            puVar2 = (uint*)param_2->HeapBeginPtr();
            std::variant<int, unsigned int, bool, float, eastl::string, jag::console::VarAny>::operator=(
                (variant<int, unsigned int, bool, float, eastl::string, jag::console::VarAny>*)param_1, puVar2);
        } else {
            uVar3 = logger::default_logger();
            uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar5 = param_2->size();
            logger::Logger::Log(uVar3, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/shared/"
                                "console/GameConsole.cpp",
                                22, "Console variable %d (%s) has an invalid size (expected %d bytes, got %d)", param_3,
                                uVar4, 4, uVar5);
        }
        return lVar1 == 4;
    }

    // 0x1006e1100, 176 bytes, inline, placed by class name
    // bool DecodeRawVariable<float, eastl::fixed_vector<unsigned char, 512ul, true, eastl::allocator> >(std::variant<int, unsigned int, bool, float, eastl::string, jag::console::VarAny>&, eastl::fixed_vector<unsigned char, 512ul, true, eastl::allocator> const&, int, eastl::string const&)
    /* bool DecodeRawVariable<float, eastl::fixed_vector<unsigned char, 512ul, true,
   eastl::allocator> >(std::variant<int, unsigned int, bool, float, eastl::basic_string<char,
   eastl::allocator>, jag::console::VarAny>&, eastl::fixed_vector<unsigned char, 512ul, true,
   eastl::allocator> const&, int, eastl::string const&) */

    bool game::DecodeRawVariable<float, eastl::fixed_vector<unsigned char, 512ul, true, eastl::allocator>>(
        variant* param_1, fixed_vector* param_2, int param_3, basic_string* param_4) {
        long lVar1;
        float* pfVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;

        lVar1 = param_2->size();
        if (lVar1 == 4) {
            pfVar2 = (float*)param_2->HeapBeginPtr();
            std::variant<int, unsigned int, bool, float, eastl::string, jag::console::VarAny>::operator=(
                (variant<int, unsigned int, bool, float, eastl::string, jag::console::VarAny>*)param_1, pfVar2);
        } else {
            uVar3 = logger::default_logger();
            uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar5 = param_2->size();
            logger::Logger::Log(uVar3, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/shared/"
                                "console/GameConsole.cpp",
                                22, "Console variable %d (%s) has an invalid size (expected %d bytes, got %d)", param_3,
                                uVar4, 4, uVar5);
        }
        return lVar1 == 4;
    }

    // 0x1006e11b0, 176 bytes, inline, placed by class name
    // bool DecodeRawVariable<bool, eastl::fixed_vector<unsigned char, 512ul, true, eastl::allocator> >(std::variant<int, unsigned int, bool, float, eastl::string, jag::console::VarAny>&, eastl::fixed_vector<unsigned char, 512ul, true, eastl::allocator> const&, int, eastl::string const&)
    /* bool DecodeRawVariable<bool, eastl::fixed_vector<unsigned char, 512ul, true,
   eastl::allocator> >(std::variant<int, unsigned int, bool, float, eastl::basic_string<char,
   eastl::allocator>, jag::console::VarAny>&, eastl::fixed_vector<unsigned char, 512ul, true,
   eastl::allocator> const&, int, eastl::string const&) */

    bool game::DecodeRawVariable<bool, eastl::fixed_vector<unsigned char, 512ul, true, eastl::allocator>>(
        variant* param_1, fixed_vector* param_2, int param_3, basic_string* param_4) {
        long lVar1;
        bool* pbVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;

        lVar1 = param_2->size();
        if (lVar1 == 1) {
            pbVar2 = (bool*)param_2->HeapBeginPtr();
            std::variant<int, unsigned int, bool, float, eastl::string, jag::console::VarAny>::operator=(
                (variant<int, unsigned int, bool, float, eastl::string, jag::console::VarAny>*)param_1, pbVar2);
        } else {
            uVar3 = logger::default_logger();
            uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar5 = param_2->size();
            logger::Logger::Log(uVar3, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/shared/"
                                "console/GameConsole.cpp",
                                22, "Console variable %d (%s) has an invalid size (expected %d bytes, got %d)", param_3,
                                uVar4, 1, uVar5);
        }
        return lVar1 == 1;
    }

    // 0x1006e5290, 48 bytes, inline, placed by class name
    // IsSpace(char)
    undefined8 IsSpace(char param_1) {
        if ((((byte)((byte)param_1 - 32) < 64) &&
             ((9223372036854784001U >> ((ulong)((byte)param_1 - 32 & 255) & 63) & 1) != 0)) ||
            (param_1 == -96)) {
            return 1;
        }
        return 0;
    }

    // 0x1006e5850, 32 bytes, inline, placed by class name
    // MaxDisplayLen(Namespace)
    char MaxDisplayLen(int param_1) {
        return (param_1 == 2) * '\b' + '\f';
    }

} // namespace jag::game
