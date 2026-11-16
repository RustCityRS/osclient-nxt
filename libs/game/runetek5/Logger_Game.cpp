// libs/game/runetek5/Logger_Game.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

namespace jag::game {
    // 0x1039bc1a8, set at startup by ___cxx_global_var_init.13
    logger::LogStream LOGGER_SCENE;

    // 0x1039bc238, set at startup by ___cxx_global_var_init.16
    logger::LogStream LOGGER_LIGHTPROBE;

    // 0x1039bc2c8, set at startup by ___cxx_global_var_init.18
    logger::LogStream LOGGER_SYNCING;

    // 0x1039bc358, set at startup by ___cxx_global_var_init.20
    logger::LogStream LOGGER_MINIMAP;

    // 0x1039bc3e8, set at startup by ___cxx_global_var_init.22
    logger::LogStream LOGGER_WORLDMAP;

    // 0x1003d1610
    char* LODLevelToString(LODLevel lodLevel) {
        if ((uint8_t)lodLevel < 7) {
            return (&PTR_s_Max_100efe608)[(char)(uint8_t)lodLevel];
        }
        return "Unknown";
    }

    // 0x1004125e0
    LODLevel operator+(LODLevel lodLevel, int arg2) {
        uint8_t local_b[3];

        local_b[0] = (char)arg2 + (char)lodLevel;
        local_b[1] = 0;
        local_b[2] = 6;
        return math::Clamp<LODLevel>(*local_b, *((local_b + 1)), *((local_b + 2))) & 255;
    }

    // 0x10048f920
    char* GetEntityTypeString(EntityType entityType) {
        if ((uint8_t)entityType < 19) {
            return (&PTR_s_LOCATION_100f01448)[(char)(uint8_t)entityType];
        }
        return "UNKNOWN";
    }

    // 0x10048fa20
    void SetLightingFromEnv(graphics::EffectManager& effectManager,
                            const MapEnvironmentSettings& mapEnvironmentSettings, long long arg3, float arg4,
                            bool arg5) {
        unsigned long long uVar1;
        SunlightDirectLighting* sunlightDirectLighting;
        uint64_t* puVar3;
        EnvFogSettings* this_00;
        EnvLightingSettings* pEVar4;
        SunlightShadows* this_01;
        ScaleManager* this_02;
        GlobalEnvironmentMapping* this_03;
        OpenGLView* this_04;
        float fVar5;
        uint32_t uVar6;
        uint8_t local_b8[16];
        uint32_t local_a8;
        uint32_t uStack_a4;
        uint32_t uStack_a0;
        uint32_t uStack_9c;
        uint64_t local_98;
        uint64_t local_88;
        uint32_t local_80;
        float local_74;
        uint64_t local_70;
        uint32_t local_68;
        uint64_t local_60;
        uint32_t local_58;
        uint64_t local_50;
        float local_48;
        float local_34;

        unsigned long long local_40 = FrameTime::GetCurrentTimeMS();
        if (effectManager.IsEnabled(29)) {
            sunlightDirectLighting =
                (SunlightDirectLighting*)effectManager.GetEffect<graphics::SunlightDirectLighting>(29);
            puVar3 = (uint64_t*)mapEnvironmentSettings.SSOBeginPtr();
            local_b8._0_8_ = *puVar3;
            local_b8._8_8_ = puVar3[1];
            uVar6 = *(uint32_t*)(puVar3 + 2);
            uStack_a4 = *(uint32_t*)((long)puVar3 + 20);
            uStack_a0 = *(uint32_t*)(puVar3 + 3);
            uStack_9c = *(uint32_t*)((long)puVar3 + 28);
            local_98 = puVar3[4];
            local_a8 = uVar6;
            sunlightDirectLighting->UseGammaCorrection(arg5);
            local_88 = math::operator-((Vector3T<float>*)local_b8->y());
            local_80 = uVar6;
            sunlightDirectLighting->SetDirection(local_88, arg3, local_40);
            this_00 = (EnvFogSettings*)mapEnvironmentSettings.SSOBeginPtr();
            local_34 = (float)this_00->GetFogDepthAngleFalloff();
            local_70 = math::Colour3FromR8G8B8A8(local_b8->GetX());
            local_68 = uVar6;
            if (arg5) {
                local_60 = math::SRGBToLinear(local_70);
                local_58 = uVar6;
            } else {
                local_60 = local_70;
                local_58 = uVar6;
            }
            uVar6 = local_58;
            local_50 = *local_34 * local_60;
            uVar1 = local_40;
            local_48 = (float)uVar6;
            sunlightDirectLighting->SetColour(local_50, arg3, local_40);
            pEVar4 = (EnvLightingSettings*)mapEnvironmentSettings.SSOBeginPtr();
            fVar5 = (float)pEVar4->GetAmbientLight();
            local_74 = fVar5;
            local_50 = (*((arg4 + 1.0) * fVar5)) * local_60;
            local_48 = fVar5;
            sunlightDirectLighting->SetAmbientColour(local_50, arg3, uVar1);
            sunlightDirectLighting->SetTweakValues(local_88, local_70, local_34, local_74, arg4,
                                                   (uint8_t)(unsigned int)arg5);
        }
        if (effectManager.IsEnabled(30)) {
            this_01 = (SunlightShadows*)effectManager.GetEffect<graphics::SunlightDirectLighting>(30);
            this_02 = (ScaleManager*)mapEnvironmentSettings.SSOBeginPtr();
            fVar5 = (float)this_02->GetGameScale();
            this_01->SetSunlightShadowStrength(fVar5, arg3, local_40);
        }
        if (effectManager.IsEnabled(51)) {
            this_03 = (GlobalEnvironmentMapping*)effectManager.GetEffect<graphics::SunlightDirectLighting>(51);
            this_04 = (OpenGLView*)mapEnvironmentSettings.SSOBeginPtr();
            fVar5 = (float)this_04->GetMainRenderTargetScaleFactor();
            uVar1 = local_40;
            this_03->SetSpecularHorizonOcclusionScale(fVar5, arg3, local_40);
            pEVar4 = (EnvLightingSettings*)mapEnvironmentSettings.SSOBeginPtr();
            fVar5 = (float)pEVar4->GetEnvMapIrradianceScale();
            this_03->SetEnvironmentMapIrradianceScale(fVar5, arg3, uVar1);
        }
    }

    // 0x10048fd20
    void SetFogScatteringFromEnv(graphics::EffectManager& effectManager,
                                 const MapEnvironmentSettings& mapEnvironmentSettings, long long arg3, bool arg4,
                                 const LODSettings& lodSettings, float arg6, float arg7) {
        bool bVar1;
        unsigned int uVar3;
        CommandLine* commandLine;
        FogEffect* this_00;
        LightScatteringEffect* this_01;
        Layout* this_02;
        uint64_t* puVar4;
        uint64_t in_register_00000009;
        float fVar5;
        uint8_t local_c8[16];
        uint64_t local_b8;
        uint64_t uStack_b0;
        uint64_t local_a8;
        uint64_t uStack_a0;
        uint64_t local_98;
        uint64_t uStack_90;
        long long local_80;
        unsigned long long local_78;
        MapEnvironmentSettings* local_70;
        EffectManager* local_68;
        float local_48;
        float local_44;
        float local_40;

        uint32_t local_4c = (uint32_t)(((uint64_t)in_register_00000009 << 8) | (uint8_t)arg4);
        unsigned long long arg3_00 = FrameTime::GetCurrentTimeMS();
        new (&local_48) math::Vector3T();
        if (effectManager.IsEnabled(57)) {
            local_80 = arg3;
            local_78 = arg3_00;
            local_70 = mapEnvironmentSettings;
            commandLine = (CommandLine*)mapEnvironmentSettings.get_overflow_allocator();
            local_68 = effectManager;
            this_00 = effectManager.GetEffect<graphics::SunlightDirectLighting>(57);
            uVar3 = commandLine->GetZ();
            local_c8._0_8_ = math::Colour3FromR8G8B8A8(uVar3);
            local_c8._8_4_ = arg7;
            local_48.Set(*local_c8);
            bVar1 = local_4c._0_1_;
            this_00->SetTweakValues(local_48, local_4c._0_1_);
            this_00->SetFogIntensity(0.5);
            if (bVar1 != false) {
                local_c8._0_8_ = math::SRGBToLinear(local_48);
                local_c8._8_4_ = arg7;
                local_48.SetXYZ(*local_c8);
            }
            new (local_c8) ImVec4(local_48, local_44, local_40, 255.0);
            fVar5 = (float)commandLine->GetOutlineRadiusAdjustment();
            graphics::FogEffect::CalculateFogNearFarPlane(0.0, 0.0, arg6, arg7, fVar5);
            arg3_00 = local_78;
            arg3 = local_80;
            this_00->SetFogColour(*local_c8, local_80, local_78);
            uVar3 = commandLine->GetPos();
            this_00->SetFogDistance(lodSettings.GetFogRange(uVar3, 0.0, 0.0), arg3, arg3_00);
            fVar5 = (float)commandLine->GetAmbientLight();
            this_00->SetFogConstantAngleFalloff(fVar5, arg3, arg3_00);
            fVar5 = (float)commandLine->GetFogDepthAngleFalloff();
            this_00->SetFogDepthAngleFalloff(fVar5, arg3, arg3_00);
            fVar5 = (float)commandLine->GetRightClip();
            this_00->SetFogAngleOffset(fVar5, arg3, arg3_00);
            local_48 *= 0.5;
            effectManager = local_68;
            mapEnvironmentSettings = local_70;
        }
        if (effectManager.IsEnabled(48)) {
            this_01 = (LightScatteringEffect*)effectManager.GetEffect<graphics::SunlightDirectLighting>(48);
            this_02 = (Layout*)mapEnvironmentSettings.GetOrigin();
            puVar4 = (uint64_t*)this_02->SSOBeginPtr();
            local_c8._0_8_ = *puVar4;
            local_c8._8_8_ = puVar4[1];
            local_b8 = puVar4[2];
            uStack_b0 = puVar4[3];
            local_a8 = puVar4[4];
            uStack_a0 = puVar4[5];
            local_98 = puVar4[6];
            uStack_90 = puVar4[7];
            if (local_b8.SloppyCompare(*((Vector3T<float>*)&graphics::DEF_INSCATTERING_AMOUNT), 0.002)) {
                local_b8.SetXYZ(local_48);
            }
            this_01->SetScatteringParams(*local_c8, arg3, arg3_00);
        }
    }

    // 0x100490080
    void SetVolumetricsFromEnv(graphics::EffectManager& effectManager,
                               const MapEnvironmentSettings& mapEnvironmentSettings, long long arg3) {
        VolumetricScatteringParams* volumetricScatteringParams;

        auto volumetricScatteringEffect = effectManager.GetEffect<graphics::SunlightDirectLighting>(50);
        unsigned long long arg3_00 = FrameTime::GetCurrentTimeMS();
        auto this_00 = mapEnvironmentSettings.GetParticles();
        volumetricScatteringParams = (VolumetricScatteringParams*)this_00->SSOBeginPtr();
        volumetricScatteringEffect->SetParams(*volumetricScatteringParams, arg3, arg3_00);
    }

    // 0x1004900e0
    void SetPostProcessingFromEnv(graphics::PostProcessController::Config& config,
                                  graphics::EffectManager& effectManager,
                                  const MapEnvironmentSettings& mapEnvironmentSettings, long long arg4, bool arg5) {
        PostProcessParams* postProcessParams;
        uint32_t* puVar2;
        uint32_t* puVar5;
        float local_68[6];

        unsigned long long arg3 = FrameTime::GetCurrentTimeMS();
        auto pcVar1 = mapEnvironmentSettings.GetParentLocationType();
        postProcessParams = (PostProcessParams*)pcVar1->second();
        config.field_8.SetTransition(*postProcessParams, arg4, arg3);
        config.field_520 = ((Skybox*)mapEnvironmentSettings.GetParentLocationType())->ShowSkybox();
        uint32_t uVar4 = ((CoordMapSquare*)mapEnvironmentSettings.GetParentLocationType())->GetZ();
        *(uint32_t*)&config.field_524 = uVar4;
        auto this_01 = mapEnvironmentSettings.GetVertexDataBuffer();
        local_68[0] = (float)this_01->GetAlpha();
        auto this_02 = mapEnvironmentSettings.GetVertexDataBuffer();
        float local_34 = (float)this_02->GetBrightpassThreshold();
        auto this_03 = mapEnvironmentSettings.GetVertexDataBuffer();
        float local_38 = (float)this_03->GetOverbright();
        if ((local_68[0] < 0.5) && (local_34 < 1.1)) {
            local_34 = 1.1;
        }
        config.field_384.SetValue(local_34, arg4, arg3);
        config.field_480.SetValue(*local_68, arg4, arg3);
        Config* local_48 = config;
        unsigned long long local_40 = arg3;
        config.field_424.SetValue(local_38, arg4, arg3);
        pcVar1 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)
                     mapEnvironmentSettings.GetIrradianceEffect();
        auto this_04 = pcVar1->second();
        auto this_05 = mapEnvironmentSettings.GetIrradianceEffect();
        auto this_06 = this_05->GetDevCredentialsOutputDirectory();
        new (local_68) std::array<postprocess::ColourCorrectionConfig::Remapping, 3ul>();
        unsigned long arg1 = 0;
        do {
            puVar2 = (uint32_t*)(*this_04)[arg1];
            uVar4 = *puVar2;
            puVar5 = (uint32_t*)(*local_68)[arg1];
            *puVar5 = uVar4;
            puVar2 = (uint32_t*)(*this_06)[arg1];
            puVar5[1] = *puVar2;
            arg1 = arg1 + 1;
        } while (arg1 != 3);
        local_48->field_224.SetColourRemap(*local_68, arg4, local_40);
    }

    // 0x100491350
    bool IsFlagBitPresent(unsigned long long arg1, EnvironmentOverrideFlagBit environmentOverrideFlagBit) {
        return (arg1 >> ((unsigned long)environmentOverrideFlagBit & 63) & 1) != 0;
    }

    // 0x1005379b0
    void AppendFormattedNumber(eastl::fixed_string<char, 64>& str, unsigned long long arg2, const Language* language) {
        long lVar2;
        uint64_t uVar3;
        uint64_t* puVar4;
        uint64_t uVar5;
        uint64_t uVar6;
        ReturnValue local_100;

        fixed_string<char, 64> local_98;
        local_98.sprintf("%llu", arg2);
        int iVar1 = local_98.size();
        unsigned long uVar7 = (unsigned long)iVar1;
        while (3 < (long)uVar7) {
            uVar7 = uVar7 - 3;
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::replace(
                &local_98, uVar7, 0, 1, ',');
        }
        uVar7 = local_98.size();
        if (uVar7 < 19) {
            uVar7 = local_98.size();
            if (uVar7 < 16) {
                uVar7 = local_98.size();
                if (uVar7 < 13) {
                    uVar7 = local_98.size();
                    if (uVar7 < 10) {
                        uVar7 = local_98.size();
                        if (uVar7 < 7) {
                            uVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                            str.sprintf("%s%s%s", "<col=ffff00>", uVar6, "</col>");
                        }
                        lVar2 = local_98.size();
                        local_100 = local_98.substr(0, lVar2 - 4);
                        uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        puVar4 = (uint64_t*)(*(
                            (array<char const*, 7ul>*)&LocalisedText::THOUSAND))[(unsigned long)language->field_8];
                        uVar6 = *puVar4;
                        uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        str.sprintf(" %s%s%s (%s)%s", "<col=ffffff>", uVar3, uVar6, uVar5, "</col>");
                    } else {
                        lVar2 = local_98.size();
                        local_100 = local_98.substr(0, lVar2 - 8);
                        uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        puVar4 = (uint64_t*)(*(
                            (array<char const*, 7ul>*)&LocalisedText::MILLION))[(unsigned long)language->field_8];
                        uVar6 = *puVar4;
                        uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        str.sprintf(" %s%s%s (%s)%s", "<col=00ff80>", uVar3, uVar6, uVar5, "</col>");
                    }
                } else {
                    lVar2 = local_98.size();
                    local_100 = local_98.substr(0, lVar2 - 11);
                    uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    puVar4 = (uint64_t*)(*(
                        (array<char const*, 7ul>*)&LocalisedText::BILLION))[(unsigned long)language->field_8];
                    uVar6 = *puVar4;
                    uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    str.sprintf(" %s%s%s (%s)%s", "<col=00ff80>", uVar3, uVar6, uVar5, "</col>");
                }
            } else {
                lVar2 = local_98.size();
                local_100 = local_98.substr(0, lVar2 - 14);
                uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                puVar4 = (uint64_t*)(*(
                    (array<char const*, 7ul>*)&LocalisedText::TRILLION))[(unsigned long)language->field_8];
                uVar6 = *puVar4;
                uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                str.sprintf(" %s%s%s (%s)%s", "<col=00ff80>", uVar3, uVar6, uVar5, "</col>");
            }
        } else {
            lVar2 = local_98.size();
            local_100 = local_98.substr(0, lVar2 - 17);
            uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            puVar4 =
                (uint64_t*)(*((array<char const*, 7ul>*)&LocalisedText::QUADRILLION))[(unsigned long)language->field_8];
            uVar6 = *puVar4;
            uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            str.sprintf(" %s%s%s (%s)%s", "<col=00ff80>", uVar3, uVar6, uVar5, "</col>");
        }
    }

    // 0x100537f10
    void GetLinkObjTextString(eastl::fixed_string<char, 256>* str, int arg2, unsigned long long arg3,
                              const ConfigProvider& configProvider, const Language* language) {
        bool cVar1;
        char cVar2;
        shared_ptr* shared_ptr;
        Mouse* this_00;
        basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>* this_01;
        uint64_t uVar3;
        uint64_t uVar4;
        char* str_00;
        unsigned long arg2_00;
        fixed_string<char, 64> local_a0;

        *str = "";
        if (arg2 != -1) {
            shared_ptr = (shared_ptr*)configProvider.GetConfig<ObjType>(arg2, nullptr);
            cVar1 = shared_ptr::operator_cast_to_bool(shared_ptr);
            if (cVar1) {
                this_00 = (Mouse*)(*shared_ptr).operator->();
                this_01 = (basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>*)
                              this_00->GetScaledMousePosition();
                cVar2 = ((ObjType*)(*shared_ptr).operator->())->GetStackable();
                if ((arg3 != 1 || cVar2 == '\x01') && (arg3 != 18446744073709551615)) {
                    local_a0 = eastl::fixed_string<char, 64>();
                    AppendFormattedNumber(&local_a0, arg3, language);
                    uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    str->sprintf("%s%s%s %s", "<col=ff9040>", uVar3, "</col> x", uVar4);
                }
                str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                arg2_00 = this_01->size();
                str->assign(str_00, arg2_00);
                uVar3 = 1;
                if (cVar1)
                    goto LAB_10053804c;
            }
        }
        uVar3 = 0;
    LAB_10053804c:
        return uVar3;
    }

    // 0x100538090
    void GetLinkObjCountString(eastl::fixed_string<char, 32>* str, int arg2, unsigned long long arg3,
                               ui::LinkObjCountDisplayMode linkObjCountDisplayMode, ConfigProvider* configProvider,
                               const Language* language) {
        unsigned int uVar2;
        shared_ptr<ObjType>* shared_ptr;
        ObjType* pOVar3;
        LocationContainer* this_00;
        uint64_t* puVar4;
        unsigned long uVar5;
        unsigned long arg1;
        uint8_t** this_01;
        unsigned long uVar7;

        *str = "";
        uint64_t uVar6 = 0;
        if ((-1 < (long)arg3) && (arg2 != -1)) {
            uVar6 = 0;
            shared_ptr = configProvider->GetConfig<ObjType>(arg2, nullptr);
            pOVar3 = (ObjType*)shared_ptr->end();
            if (pOVar3 != nullptr) {
                pOVar3 = pOVar3->GetStackSizeAlt(arg3);
                uVar6 = 1;
                if ((char)linkObjCountDisplayMode != '\x01') {
                    if ((char)linkObjCountDisplayMode != '\x02') {
                        return 1;
                    }
                    if ((pOVar3->GetStackable() != '\x01') && (arg3 == 1)) {
                        return 1;
                    }
                }
                this_00 = (LocationContainer*)configProvider->GetGraphicsDefaults();
                if (arg3 < 100000) {
                    uVar2 = this_00->GetObjStackColourUnits();
                    str->sprintf("<col=%08X>%llu%s", (unsigned long)uVar2, arg3, "</col>");
                } else {
                    if (arg3 < 10000000) {
                        uVar2 = this_00->GetObjStackColourThousands();
                        uVar7 = (unsigned long)uVar2;
                        uVar5 = arg3 / 1000;
                        arg1 = (unsigned long)language->field_8;
                        this_01 = &LocalisedText::THOUSAND_SHORT;
                    } else if (arg3 >> 10 < 9765625) {
                        uVar2 = this_00->GetEffectAnimID();
                        uVar7 = (unsigned long)uVar2;
                        uVar5 = arg3 / 1000000;
                        arg1 = (unsigned long)language->field_8;
                        this_01 = &LocalisedText::MILLION_SHORT;
                    } else if (arg3 >> 13 < 1220703125) {
                        uVar2 = this_00->GetMinGridZ();
                        uVar7 = (unsigned long)uVar2;
                        uVar5 = arg3 / 1000000000;
                        arg1 = (unsigned long)language->field_8;
                        this_01 = &LocalisedText::BILLION_SHORT;
                    } else if (arg3 < 10000000000000000) {
                        uVar2 = this_00->GetObjStackColourTrillions();
                        uVar7 = (unsigned long)uVar2;
                        uVar5 = arg3 / 1000000000000;
                        arg1 = (unsigned long)language->field_8;
                        this_01 = &LocalisedText::TRILLION_SHORT;
                    } else {
                        uVar2 = this_00->GetID();
                        uVar7 = (unsigned long)uVar2;
                        uVar5 = arg3 / 1000000000000000;
                        arg1 = (unsigned long)language->field_8;
                        this_01 = &LocalisedText::QUADRILLION_SHORT;
                    }
                    puVar4 = (uint64_t*)(*this_01)[arg1];
                    str->sprintf("<col=%08X>%llu%s%s", uVar7, uVar5, *puVar4, "</col>");
                }
            }
        }
        return uVar6;
    }

    // 0x1005fde30
    void SetShadowQualityEffect(graphics::EffectManager& effectManager, graphics::GraphicsQuality graphicsQuality) {
        effectManager.EnableEffect(31, false);
        effectManager.EnableEffect(32, false);
        effectManager.EnableEffect(33, false);
        effectManager.EnableEffect(34, false);
        if (graphicsQuality < 4) {
            effectManager.EnableEffect((unsigned int)(uint8_t)((char)graphicsQuality + 31), true);
        }
    }

    // 0x100607d00
    math::QuaternionT<float> JagSlerp<math::QuaternionT<float>, float>(const math::QuaternionT<float>& quaternion1,
                                                                       const math::QuaternionT<float>& quaternion2,
                                                                       float arg3, float arg4) {
        ReturnValue* in_RDX;
        ReturnValue result;
        QuaternionT<float> local_60;
        ReturnValue local_50;

        &result = &local_50;
        math::QuaternionT<float> result;
        float local_38 = math::QuaternionDot<float>(quaternion2, *in_RDX);
        float fVar1 = (float)::abs(1.0 - local_38);
        if (arg4 <= fVar1) {
            if (local_38 < 0.0) {
                quaternion2 = &local_60;
                math::operator-(quaternion2);
            }
            local_50 = quaternion2;
            result *= (1.0 - arg3);
            local_60** arg3;
            result += local_60;
            result = math::QuaternionT<float>::Normalise();
        } else {
            &result = in_RDX;
        }
        new (quaternion1) math::QuaternionT<float>(result);
        return quaternion1;
    }

    // 0x100616a30
    math::QuaternionT<double> JagSlerp<math::QuaternionT<double>, double>(const math::QuaternionT<double>& quaternion1,
                                                                          const math::QuaternionT<double>& quaternion2,
                                                                          double arg3, double arg4) {
        ReturnValue* in_RDX;
        ReturnValue result;
        QuaternionT<double> local_88;
        ReturnValue local_68;

        &result = &local_68;
        math::QuaternionT<double> result;
        double local_40 = math::QuaternionDot<double>(quaternion2, *in_RDX);
        double dVar1 = (double)::abs(1.0 - local_40);
        if (arg4 <= dVar1) {
            if (local_40 < 0.0) {
                quaternion2 = &local_88;
                math::operator-(quaternion2);
            }
            local_68 = quaternion2;
            result *= (1.0 - arg3);
            local_88** arg3;
            result += local_88;
            result = math::QuaternionT<double>::Normalise();
        } else {
            &result = in_RDX;
        }
        ReturnValue RVar2 = result;
        ReturnValue RVar3 = &result[1];
        ReturnValue RVar4 = &result[3];
        *(ReturnValue*)(quaternion1 + 16) = &result[2];
        *(ReturnValue*)(quaternion1 + 24) = RVar4;
        *(ReturnValue*)quaternion1 = RVar2;
        *(ReturnValue*)(quaternion1 + 8) = RVar3;
        return quaternion1;
    }

    // 0x10065e750
    bool operator<(const AssetWorkerJob& assetWorkerJob1, const AssetWorkerJob& assetWorkerJob2) {
        auto pTVar1 = assetWorkerJob1.field_16.operator->();
        int iVar2 = pTVar1->GetMaxLineWidth();
        pTVar1 = (TextRun*)assetWorkerJob2.field_16.operator->();
        int iVar3 = pTVar1->GetMaxLineWidth();
        return iVar2 < iVar3;
    }

    // 0x1006736d0
    void ___cxx_global_var_init_13(void) {

        fixed_string<char, 32> local_60(" Misc.");
        fixed_string<char, 32> local_a8("Scene");
        new ((LogStream*)&LOGGER_SCENE) logger::LogStream(&local_60, &local_a8, 3);
    }

    // 0x1006737a0
    void ___cxx_global_var_init_16(void) {

        fixed_string<char, 32> local_60("Light Probes");
        fixed_string<char, 32> local_a8("Scene");
        new ((LogStream*)&LOGGER_LIGHTPROBE) logger::LogStream(&local_60, &local_a8, 3);
    }

    // 0x100673870
    void ___cxx_global_var_init_18(void) {

        fixed_string<char, 32> local_60("ServerSyncing");
        fixed_string<char, 32> local_a8("Scene");
        new ((LogStream*)&LOGGER_SYNCING) logger::LogStream(&local_60, &local_a8, 3);
    }

    // 0x100673940
    void ___cxx_global_var_init_20(void) {

        fixed_string<char, 32> local_60("MiniMap");
        fixed_string<char, 32> local_a8("Scene");
        new ((LogStream*)&LOGGER_MINIMAP) logger::LogStream(&local_60, &local_a8, 3);
    }

    // 0x100673a10
    void ___cxx_global_var_init_22(void) {

        fixed_string<char, 32> local_60("World Map");
        fixed_string<char, 32> local_a8("Scene");
        new ((LogStream*)&LOGGER_WORLDMAP) logger::LogStream(&local_60, &local_a8, 3);
    }

    // 0x100673ae0
    void ___cxx_global_var_init_24(void) {
        Matrix33T<float> local_50;

        math::Matrix33Scaling<float>(1.0, 1.0, -1.0);
        Vector3T<int> local_28;
        new ((Matrix44T<float>*)&graphics::MAYA_ANIM_INVERT_MATRIX) math::Matrix44T<float>(local_50, local_28);
    }

    // 0x100673b40
    void ___cxx_global_var_init_25(void) {
        new ((ColourHSL*)&graphics::WORLD_ORTHOGONAL) math::ColourHSL(-1.5707964, -1.5707964, 0.0);
    }

    // 0x100673b60
    void ___cxx_global_var_init_39(void) {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_100ee5578) HashedString("LUMINANCE_ADAPTED");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048);
            }
        }
    }

    // 0x100673bc0
    void ___cxx_global_var_init_41(void) {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee5588) HashedString("LUMINANCE_ADAPTED_PREVIOUS");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058);
            }
        }
    }

    // 0x100673c20
    void ___cxx_global_var_init_43(void) {
        if (*PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050) != 0) {
                new (PTR_VIEWRT_LUMINANCE_AVERAGE_100ee5580) HashedString("VIEWRT_LUMINANCE_AVERAGE");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050);
            }
        }
    }

    // 0x100673c80
    void ___cxx_global_var_init_54(void) {
        uint8_t* puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100673cc0
    void ___cxx_global_var_init_55(void) {
        uint8_t* puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100673d00
    void ___cxx_global_var_init_56(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100673d40
    void ___cxx_global_var_init_57(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<ShaderThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5950,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100673d80
    void ___cxx_global_var_init_58(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) math::Point(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100673db0
    void ___cxx_global_var_init_59(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100673df0
    void ___cxx_global_var_init_60(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100673e30
    void ___cxx_global_var_init_61(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49c8;
        if (*PTR_m_pSingleton_100ee49c8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderProgramManager>::~unique_ptr, PTR_m_pSingleton_100ee6c38,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100673e70
    void ___cxx_global_var_init_62(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49d0;
        if (*PTR_m_pSingleton_100ee49d0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VertexDeclarationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c40,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100673eb0
    void ___cxx_global_var_init_63(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee47e0;
        if (*PTR_ZERO_100ee47e0 == '\0') {
            new (PTR_ZERO_100ee66e8) math::ColourHSL(0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100673ef0
    void ___cxx_global_var_init_64(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4988;
        if (*PTR_m_pSingleton_100ee4988 == '\0') {
            ___cxa_atexit(std::unique_ptr<SoundManager>::~unique_ptr, PTR_m_pSingleton_100ee6bf8, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100673f30
    void ___cxx_global_var_init_65(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49a0;
        if (*PTR_m_pSingleton_100ee49a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::RenderDevice>::~unique_ptr, PTR_m_pSingleton_100ee6c10, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100673f70
    void ___cxx_global_var_init_66(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4520;
        if (*PTR_m_mutex_100ee4520 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100673fb0
    void ___cxx_global_var_init_67(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4500;
        if (*PTR_m_mutex_100ee4500 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5dc0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100673ff0
    void ___cxx_global_var_init_68(void) {
        uint8_t* puVar1 = PTR_RIGHT_100ee47e8;
        if (*PTR_RIGHT_100ee47e8 == '\0') {
            new (PTR_RIGHT_100ee66f0) math::ColourHSL(1.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100674030
    void ___cxx_global_var_init_69(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee45b0;
        if (*PTR_m_mutex_100ee45b0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100674070
    void ___cxx_global_var_init_70(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49d8;
        if (*PTR_m_pSingleton_100ee49d8 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphics::AnimationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c48,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006740b0
    void ___cxx_global_var_init_71(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4820;
        if (*PTR_ZERO_100ee4820 == '\0') {
            new (PTR_ZERO_100ee6728)
                math::Matrix44T<float>(0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100674110
    void ___cxx_global_var_init_72(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee45d8;
        if (*PTR_m_mutex_100ee45d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100674190
    void ___cxx_global_var_init_74(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee44c8;
        if (*PTR_m_mutex_100ee44c8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5d50, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006741d0
    void ___cxx_global_var_init_75(void) {
        uint8_t* puVar2 = PTR_NullConfigType_100ee6570;
        uint8_t* puVar1 = PTR_NullConfigType_100ee4718;
        if (*PTR_NullConfigType_100ee4718 == '\0') {
            new (PTR_NullConfigType_100ee6570) shared_ptr();
            ___cxa_atexit(PTR__shared_ptr_100ee52a0, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100674210
    void ___cxx_global_var_init_76(void) {
        uint8_t* puVar1 = PTR_IDENTITY_100ee4828;
        if (*PTR_IDENTITY_100ee4828 == '\0') {
            new (PTR_IDENTITY_100ee6730)
                math::Matrix44T<float>(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100674270
    void ___cxx_global_var_init_77(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4590;
        if (*PTR_m_mutex_100ee4590 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ee0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006742b0
    void ___cxx_global_var_init_78(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4290;
        if (*PTR_m_pSingleton_100ee4290 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphicutils::BatchDestroyManager>::~unique_ptr, PTR_m_pSingleton_100ee5940,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006742f0
    void ___cxx_global_var_init_79(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4560;
        if (*PTR_m_mutex_100ee4560 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e80, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100674370
    void ___cxx_global_var_init_81(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee43d0;
        if (*PTR_m_mutex_100ee43d0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5b68, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006743b0
    void ___cxx_global_var_init_82(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4628;
        if (*PTR_m_mutex_100ee4628 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee6010, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006743f0
    void __GLOBAL__sub_I_unity_0_cxx_cxx(void) {
        uint64_t uVar1 = _objc_autoreleasePoolPush();
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

    // 0x1006e0fa0
    bool DecodeRawVariable<int, eastl::fixed_vector<unsigned char, 512ul>>(
        std::variant<int, unsigned int, bool, float, eastl::string, jag::console::VarAny>& arg1,
        const eastl::fixed_vector<unsigned char, 512ul>& arg2, int arg3, const eastl::string& str) {
        int* arg1_00;
        Logger* logger;
        uint64_t uVar2;
        uint64_t uVar3;

        long lVar1 = arg2.size();
        if (lVar1 == 4) {
            arg1_00 = (int*)arg2.HeapBeginPtr();
            arg1 = *arg1_00;
        } else {
            logger = logger::default_logger();
            uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar3 = arg2.size();
            logger->Log(false, 2,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/shared/console/"
                        "GameConsole.cpp",
                        22, "Console variable %d (%s) has an invalid size (expected %d bytes, got %d)",
                        (unsigned long)(unsigned int)arg3, uVar2, 4, uVar3);
        }
        return lVar1 == 4;
    }

    // 0x1006e1050
    bool DecodeRawVariable<unsigned int, eastl::fixed_vector<unsigned char, 512ul>>(
        std::variant<int, unsigned int, bool, float, eastl::string, jag::console::VarAny>& arg1,
        const eastl::fixed_vector<unsigned char, 512ul>& arg2, int arg3, const eastl::string& str) {
        unsigned int* arg1_00;
        Logger* logger;
        uint64_t uVar2;
        uint64_t uVar3;

        long lVar1 = arg2.size();
        if (lVar1 == 4) {
            arg1_00 = (unsigned int*)arg2.HeapBeginPtr();
            arg1 = *arg1_00;
        } else {
            logger = logger::default_logger();
            uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar3 = arg2.size();
            logger->Log(false, 2,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/shared/console/"
                        "GameConsole.cpp",
                        22, "Console variable %d (%s) has an invalid size (expected %d bytes, got %d)",
                        (unsigned long)(unsigned int)arg3, uVar2, 4, uVar3);
        }
        return lVar1 == 4;
    }

    // 0x1006e1100
    bool DecodeRawVariable<float, eastl::fixed_vector<unsigned char, 512ul>>(
        std::variant<int, unsigned int, bool, float, eastl::string, jag::console::VarAny>& arg1,
        const eastl::fixed_vector<unsigned char, 512ul>& arg2, int arg3, const eastl::string& str) {
        float* arg1_00;
        Logger* logger;
        uint64_t uVar2;
        uint64_t uVar3;

        long lVar1 = arg2.size();
        if (lVar1 == 4) {
            arg1_00 = (float*)arg2.HeapBeginPtr();
            arg1 = *arg1_00;
        } else {
            logger = logger::default_logger();
            uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar3 = arg2.size();
            logger->Log(false, 2,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/shared/console/"
                        "GameConsole.cpp",
                        22, "Console variable %d (%s) has an invalid size (expected %d bytes, got %d)",
                        (unsigned long)(unsigned int)arg3, uVar2, 4, uVar3);
        }
        return lVar1 == 4;
    }

    // 0x1006e11b0
    bool DecodeRawVariable<bool, eastl::fixed_vector<unsigned char, 512ul>>(
        std::variant<int, unsigned int, bool, float, eastl::string, jag::console::VarAny>& arg1,
        const eastl::fixed_vector<unsigned char, 512ul>& arg2, int arg3, const eastl::string& str) {
        bool* arg1_00;
        Logger* logger;
        uint64_t uVar2;
        uint64_t uVar3;

        long lVar1 = arg2.size();
        if (lVar1 == 1) {
            arg1_00 = (bool*)arg2.HeapBeginPtr();
            arg1 = *arg1_00;
        } else {
            logger = logger::default_logger();
            uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar3 = arg2.size();
            logger->Log(false, 2,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/shared/console/"
                        "GameConsole.cpp",
                        22, "Console variable %d (%s) has an invalid size (expected %d bytes, got %d)",
                        (unsigned long)(unsigned int)arg3, uVar2, 1, uVar3);
        }
        return lVar1 == 1;
    }

    // 0x1006e5290
    void IsSpace(char arg1) {
        if ((((uint8_t)((uint8_t)arg1 - 32) < 64) &&
             ((9223372036854784001U >> ((unsigned long)((uint8_t)arg1 - 32 & 255) & 63) & 1) != 0)) ||
            (arg1 == -96)) {
            return 1;
        }
        return 0;
    }

    // 0x1006e5850
    char MaxDisplayLen(Namespace namespace) {
        return (namespace == 2) * '\b' + '\f';
    }

} // namespace jag::game
