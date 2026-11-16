// libs/game/runetek5/scene/StaticPointLight.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "StaticPointLight.h"

namespace jag::game {
    // 0x100f38ef0
    float StaticPointLight::m_positionJitterOverrideRadius = 6.0f;

    // 0x100f38ef4
    int32_t StaticPointLight::m_positionJitterOverrideRadiusRandom = 1;

    // 0x100f38ef8
    int32_t StaticPointLight::m_positionJitterOverrideIntensityStrength = 1050253722;

    // 0x100f38efc
    int32_t StaticPointLight::m_positionJitterOverrideMoveTimeMS = 120;

    // 0x100f38f00
    int32_t StaticPointLight::m_positionJitterOverrideMoveTimeOffsetRandomMS = 60;

    // 0x100f38f04
    int32_t StaticPointLight::m_positionJitterOverrideMovePower = 1058642330;

    // 0x1039b4e80
    bool StaticPointLight::m_forceShadowsOn;

    // 0x1039b4e81
    bool StaticPointLight::m_positionJitterOverride;

    // 0x1039b4e88, set at startup by ___cxx_global_var_init
    Array<double> StaticPointLight::mPerlinNoise = Array<double>();

    // 0x10000c2f0: StaticPointLight::SetLevel(int) has the same machine code as math::Rect<int>::SetX(int)

    // 0x10002d850: StaticPointLight::GetInfluenceRanges() has the same machine code as oldscape::option::Option<int>::GetDefaultValue() const

    // 0x10002d850: StaticPointLight::GetInfluenceRanges() const has the same machine code as oldscape::option::Option<int>::GetDefaultValue() const

    // 0x1000602b0: StaticPointLight::GetUseTerrainHeight() const has the same machine code as oldscape::widgets::ScrollBarWidget::ThumbIsVisible() const

    // 0x100060710: StaticPointLight::GetLightType() const has the same machine code as oldscape::widgets::ScrollBarWidget::GetThumbBounds() const

    // 0x100066b70: StaticPointLight::GetSourceMapSquareX() const has the same machine code as oldscape::widgets::Widget::GetTextColour() const

    // 0x1000b7a70: StaticPointLight::GetDynamicID() const has the same machine code as oldscape::minimenu::MinimenuEntry::GetObjType() const

    // 0x1000b7a80: StaticPointLight::GetScriptId() const has the same machine code as oldscape::minimenu::MinimenuEntry::GetObjCount() const

    // 0x1000b9960: StaticPointLight::GetLevel() const has the same machine code as oldscape::ScriptVarType::GetID() const

    // 0x1000e39e0: StaticPointLight::GetAttenuationFalloff() const has the same machine code as oldscape::graphics::NXTPixScreen::GetZoomValue() const

    // 0x1001117e0: StaticPointLight::GetSourceMapSquareZ() const has the same machine code as oldscape::jagex3::Js5::GetIndexCrc() const

    // 0x10012f260: StaticPointLight::GetPhase() const has the same machine code as oldscape::social::OnlinePlayerData<oldscape::social::FriendChatUser>::GetWorldId() const

    // 0x10014e180: StaticPointLight::GetPosition() const has the same machine code as math::Vector2T<float>::y() const

    // 0x1001acac0: StaticPointLight::GetLightLevelsBelow() const has the same machine code as Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>::IsNull()

    // 0x1001bc270: StaticPointLight::SetLightsLevelsAbove(bool) has the same machine code as oldscape::VBOMapper::SetMappingSupport(bool)

    // 0x1001be5d0: StaticPointLight::GetFlickerType() const has the same machine code as graphics::SunlightOptions::GetShadowQuality() const

    // 0x1003ca920: StaticPointLight::IsValid() const has the same machine code as MapElementType::GetShowOnWorldMap() const

    // 0x1003f65a0: StaticPointLight::GetRadius() const has the same machine code as EntityRoute::GetStalledTickCount() const

    // 0x10043b140
    StaticPointLight::StaticPointLight()
        : MakeSharedPool<StaticPointLight, 64>(), m_level(4294967295), m_lightLevelsBelow(0), m_lightLevelsAbove(false),
          m_flickerType(4294967295), field_60(4294967295), m_rGB(0), m_radius(0), field_72(0),
          m_useTerrainHeight(true) {
        WrapArray<unsigned char const> local_30;

        *(uint64_t*)&field_80 = 18446744069414584320;
        new (m_lightType) shared_ptr();
        m_scriptId = -1;
        m_dynamicID = -1;
        m_intensity = 15.0;
        m_attenuationFalloff = 3.5;
        m_backlightRatio = 0.0;
        m_shadowsEnabled = false;
        m_shadowStrength = 1.0;
        field_132 = 0;
        m_phase = 0;
        field_140 = 0;
        field_144 = 0;
        m_valid = 1;
        field_149 = 1;
        new (&field_160) math::AABB();
        if (mPerlinNoise.data() == 0) {
            mPerlinNoise.set_max_size(2048, 0);
            local_30.WrapArray<Array<unsigned char>>(mPerlinNoise);
            math::GradientPerlinNoise::GenerateGradientNoise1d(&local_30, 8.0, 255);
        }
        AssignCalculatedParameters();
    }

    // 0x10043b2e0
    void StaticPointLight::AssignCalculatedParameters() {
        uint32_t uVar1;
        uint32_t uVar2;

        switch (m_flickerType) {
        case 2:
            field_60 = 1;
            goto LAB_10043b3f5;
        case 3:
            field_60 = 1;
            field_144 = 0;
            uVar1 = 4096;
            uVar2 = 2048;
            break;
        case 4:
            field_60 = 4;
            goto LAB_10043b3f5;
        case 5:
            field_60 = 4;
            goto LAB_10043b412;
        case 6:
            field_60 = 3;
            goto LAB_10043b42f;
        case 7:
            field_60 = 3;
            field_144 = 1280;
            uVar1 = 4096;
            uVar2 = 768;
            break;
        case 8:
            field_60 = 3;
            field_144 = 1024;
            uVar1 = 2048;
            uVar2 = 1024;
            break;
        case 9:
            field_60 = 3;
            field_144 = 1024;
            uVar1 = 4096;
            uVar2 = 1024;
            break;
        case 10:
            field_60 = 3;
            field_144 = 1536;
            uVar1 = 2048;
            uVar2 = 512;
            break;
        case 11:
            field_60 = 3;
            goto LAB_10043b44c;
        case 12:
            field_60 = 2;
        LAB_10043b3f5:
            field_144 = 0;
        LAB_10043b3ff:
            uVar2 = 2048;
            uVar1 = 2048;
            break;
        case 13:
            field_60 = 2;
        LAB_10043b412:
            field_144 = 0;
            uVar1 = 8192;
            uVar2 = 2048;
            break;
        case 14:
            field_60 = 1;
        LAB_10043b42f:
            field_144 = 1280;
            uVar1 = 2048;
            uVar2 = 768;
            break;
        case 15:
            field_60 = 1;
        LAB_10043b44c:
            field_144 = 1536;
            uVar1 = 4096;
            uVar2 = 512;
            break;
        case 16:
            field_60 = 1;
            field_144 = 1792;
            uVar1 = 8192;
            uVar2 = 256;
            break;
        default:
            field_144 = 0;
            field_60 = 0;
            goto LAB_10043b3ff;
        }
        field_140 = uVar2;
        field_132 = uVar1;
    }

    // 0x10043b4e0
    StaticPointLight::StaticPointLight(const StaticPointLight* staticPointLight, const math::Vector3T<float>& vector3,
                                       int arg3)
        : MakeSharedPool<StaticPointLight, 64>(), m_level(4294967295), m_lightLevelsBelow(0),
          m_lightLevelsAbove(false) {
        bool bVar2;
        unsigned int uVar4;
        int iVar6;
        Array<unsigned int>* arg1;
        shared_ptr<LightType>* lightType;
        float fVar9;
        WrapArray<unsigned char const> local_50;

        Array<unsigned int>* local_38 = (Array<unsigned int>*)&field_32;
        new (local_38) Array<unsigned int>();
        m_flickerType = 4294967295;
        field_60 = 4294967295;
        m_rGB = 0;
        m_radius = 0;
        field_72 = 0;
        m_useTerrainHeight = true;
        *(uint64_t*)&field_80 = 18446744069414584320;
        new (m_lightType) shared_ptr();
        m_scriptId = -1;
        m_dynamicID = -1;
        m_intensity = 15.0;
        m_attenuationFalloff = 3.5;
        m_backlightRatio = 0.0;
        m_shadowsEnabled = false;
        m_shadowStrength = 1.0;
        field_132 = 0;
        m_phase = 0;
        field_140 = 0;
        field_144 = 0;
        m_valid = 1;
        field_149 = 1;
        new (&field_160) math::AABB();
        if (staticPointLight != nullptr) {
            if (IsValid(staticPointLight) != '\0') {
                if (mPerlinNoise.data() == 0) {
                    mPerlinNoise.set_max_size(2048, 0);
                    local_50.WrapArray<Array<unsigned char>>(mPerlinNoise);
                    math::GradientPerlinNoise::GenerateGradientNoise1d(&local_50, 8.0, 255);
                }
                uVar4 = staticPointLight->GetX();
                if (arg3 != -1) {
                    uVar4 = arg3;
                }
                m_level = uVar4;
                bVar2 = (bool)staticPointLight->IsToggled();
                m_lightLevelsAbove = bVar2;
                m_lightLevelsBelow = GetLightLevelsBelow(staticPointLight);
                field_4.SetXYZ(vector3);
                arg1 = (Array<unsigned int>*)staticPointLight->GetDefaultValue();
                *local_38 = *arg1;
                uVar4 = staticPointLight->GetDuration();
                m_radius = uVar4;
                uVar4 = staticPointLight->GetAmplitude();
                m_rGB = uVar4;
                m_flickerType = staticPointLight->GetSpriteID();
                uVar4 = staticPointLight->GetLastNumVerts();
                m_phase = uVar4;
                iVar6 = staticPointLight->GetMaxMapZ();
                m_scriptId = iVar6;
                uVar4 = staticPointLight->GetLoopLength();
                m_lightTypeToLoad = uVar4;
                lightType = (shared_ptr<LightType>*)staticPointLight->GetBoneIDMap();
                *m_lightType = *lightType;
                fVar9 = (float)GetIntensity(staticPointLight);
                m_intensity = fVar9;
                fVar9 = (float)GetAttenuationFalloff(staticPointLight);
                m_attenuationFalloff = fVar9;
                fVar9 = (float)GetBacklightRatio(staticPointLight);
                m_backlightRatio = fVar9;
                if (m_lightTypeToLoad == 4294967295) {
                    AssignCalculatedParameters();
                }
                bVar2 = (bool)GetShadowsEnabled(staticPointLight);
                m_shadowsEnabled = bVar2;
                fVar9 = (float)staticPointLight->GetMaterialAnimationH();
                m_shadowStrength = fVar9;
                iVar6 = staticPointLight->GetMaxLineWidth();
                m_sourceMapSquareX = iVar6;
                m_sourceMapSquareZ = staticPointLight->GetCompletedGold();
                field_149 = 1;
                if (m_forceShadowsOn != '\0') {
                    m_shadowsEnabled = true;
                    m_shadowStrength = 1.0;
                }
                return;
            }
        }
        LogAssert("existingPointLight && existingPointLight->IsValid()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                  "StaticPointLight.cpp",
                  46, nullptr);
    }

    // 0x10043b7b0
    void StaticPointLight::Initialise(PacketT<Array<unsigned char>>& arg1) {
        unsigned int uVar5;
        Logger* pLVar8;
        unsigned int* puVar9;
        unsigned int uVar10;
        unsigned long arg1_00;
        unsigned int uVar11;
        LogStream local_158;
        LogStream local_c8;

        long lVar6 = arg1.GetDataPtr();
        if (lVar6 == 0) {
            LogAssert("dataPacket.GetDataPtr()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "StaticPointLight.cpp",
                      95, nullptr);
        }
        lVar6 = arg1.GetDataPtr();
        if (lVar6 == 0)
            goto LAB_10043bc8f;
        uint8_t bVar1 = arg1.g1();
        m_lightLevelsAbove = (bool)(bVar1 >> 3 & 1);
        m_lightLevelsBelow = bVar1 >> 4 & 1;
        m_level = bVar1 & 7;
        unsigned short uVar3 = arg1.g2();
        float local_15c = (float)uVar3;
        uint8_t* this_00 = &field_4;
        float* pfVar7 = (float*)(*this_00)[0];
        *pfVar7 = local_15c;
        uVar3 = arg1.g2();
        local_15c = (float)uVar3;
        pfVar7 = (float*)(*this_00)[2];
        *pfVar7 = local_15c;
        pfVar7 = (float*)(*this_00)[0];
        if (*pfVar7 <= 0.0 && *pfVar7 != 0.0) {
        LAB_10043b8fe:
            pLVar8 = logger::default_logger();
            local_c8 = logger::LogStream(LOGGER_SCENE);
            pfVar7 = (float*)(*this_00)[0];
            local_15c = *pfVar7;
            pfVar7 = (float*)(*this_00)[2];
            ((uint8_t)pLVar8)
                ->Log(nullptr, (LogLevel)&local_c8, 3, 14431198, 115, (double)local_15c, (double)*pfVar7,
                      4665729213955833856,
                      "Static point light position (%0.3f, %0.3f) is outside of the map square bounds (%0.3f)");
            m_valid = 0;
        } else {
            pfVar7 = (float*)(*this_00)[0];
            if (8192.0 < *pfVar7 || *pfVar7 == 8192.0)
                goto LAB_10043b8fe;
            pfVar7 = (float*)(*this_00)[2];
            if (*pfVar7 <= 0.0 && *pfVar7 != 0.0)
                goto LAB_10043b8fe;
            pfVar7 = (float*)(*this_00)[2];
            if (8192.0 < *pfVar7 || *pfVar7 == 8192.0)
                goto LAB_10043b8fe;
        }
        uVar3 = arg1.g2();
        local_15c = (float)uVar3;
        pfVar7 = (float*)(*this_00)[1];
        *pfVar7 = local_15c;
        bVar1 = arg1.g1();
        SetRadiusGrid((unsigned int)bVar1, false);
        field_32.set_max_size((unsigned long)field_72, 0);
        if (field_72 != 0) {
            arg1_00 = 0;
            do {
                uVar3 = arg1.g2();
                uVar5 = field_72;
                uVar11 = uVar5 - 1;
                if (uVar3 >> 8 < uVar5) {
                    uVar11 = (unsigned int)(uVar3 >> 8);
                }
                uVar10 = uVar5 - uVar11;
                if ((unsigned int)(uint8_t)uVar3 <= uVar5 - uVar11) {
                    uVar10 = (unsigned int)(uint8_t)uVar3;
                }
                puVar9 = (unsigned int*)field_32[arg1_00];
                *puVar9 = uVar11 << 8 | uVar10;
                arg1_00 = arg1_00 + 1;
            } while (arg1_00 < field_72);
        }
        pfVar7 = (float*)(*this_00)[0];
        local_15c = -64.0;
        float local_160 = *pfVar7 - 64.0;
        pfVar7 = (float*)(*this_00)[0];
        float fVar12 = (float)::floor(*pfVar7 * 0.0078125f);
        fVar12 = (float)::abs(fVar12 * -128.0 + local_160);
        fVar12 = (float)ceil(fVar12);
        pfVar7 = (float*)(*this_00)[2];
        local_15c = local_15c + *pfVar7;
        pfVar7 = (float*)(*this_00)[2];
        float fVar13 = (float)::floor(*pfVar7 * 0.0078125f);
        fVar13 = (float)::abs(fVar13 * -128.0 + local_15c);
        fVar13 = (float)ceil(fVar13);
        uVar5 = eastl::max<unsigned int>((unsigned int)(long)fVar12, (unsigned int)(long)fVar13);
        if (m_radius <= uVar5) {
            pLVar8 = logger::default_logger();
            local_158 = logger::LogStream(LOGGER_SCENE);
            ((uint8_t)pLVar8)
                ->Log(nullptr, (LogLevel)&local_158, 3, 14431198, 169, "Static point light has an invalid offset");
        }
        uVar3 = arg1.g2();
        uVar5 = math::RunetekColour::HSLToRGB(uVar3);
        m_rGB = uVar5;
        bVar1 = arg1.g1();
        m_flickerType = bVar1 & 31;
        m_phase = (bVar1 & 224) << 3;
        short sVar4 = arg1.g2s();
        m_scriptId = (int)sVar4;
        if (m_flickerType == 31) {
            uVar3 = arg1.g2();
            m_lightTypeToLoad = (unsigned int)uVar3;
        } else {
            AssignCalculatedParameters();
        }
        fVar12 = (float)arg1.gFloat();
        m_intensity = fVar12;
        fVar12 = (float)arg1.gFloat();
        m_attenuationFalloff = fVar12;
        fVar12 = (float)arg1.gFloat();
        m_backlightRatio = fVar12;
        m_shadowsEnabled = arg1.g1() != '\0';
        float local_16c = (float)arg1.gFloat();
        pfVar7 = std::clamp<float>(local_16c, 0.0, 1.0);
        m_shadowStrength = *pfVar7;
        if (m_forceShadowsOn != '\0') {
            m_shadowsEnabled = true;
            m_shadowStrength = 1.0;
        }
        field_149 = 1;
    LAB_10043bc8f:
    }

    // 0x10043bcd0
    void StaticPointLight::SetRadiusGrid(unsigned int arg1, bool arg2) {
        Logger* pLVar2;
        uint32_t* puVar3;
        unsigned long arg1_00;
        unsigned long uVar4;
        LogStream local_c8;

        if (64 < arg1) {
            pLVar2 = logger::default_logger();
            local_c8 = logger::LogStream(LOGGER_SCENE);
            ((uint8_t)pLVar2)
                ->Log(nullptr, (LogLevel)&local_c8, 8, 14431198, 218,
                      "Static point light has an invalid radius (%u > %u max), invalidating light", arg1, 64);
            m_valid = 0;
        }
        unsigned int uVar1 = arg1 * 2 + 1;
        if (field_72 != uVar1) {
            field_72 = uVar1;
            m_radius = arg1 << 7 | 64;
            field_149 = 1;
        }
        if (arg2) {
            field_32.set_max_size((unsigned long)field_72, 1);
            uVar4 = (unsigned long)field_72;
            if (field_72 != 0) {
                arg1_00 = 0;
                do {
                    puVar3 = &field_32[arg1_00];
                    *puVar3 = (int)uVar4;
                    arg1_00 = arg1_00 + 1;
                    uVar4 = (unsigned long)field_72;
                } while (arg1_00 < uVar4);
            }
        }
    }

    // 0x10043be60
    void StaticPointLight::SetRadius(float arg1, bool arg2) {
        uint64_t in_register_00000031;

        float fVar1 = (float)ceil(arg1 * 0.0078125f + 0.5);
        field_72 = (unsigned int)(long)fVar1;
        if ((int)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg2) != 0) {
            SetRadiusGrid((unsigned int)(long)fVar1, true);
        }
        m_radius = (unsigned int)(long)arg1;
    }

    // 0x10043bec0
    bool StaticPointLight::AffectsLevel(int arg1) const {
        uint8_t bVar1;

        unsigned int uVar2 = m_level;
        bool bVar3 = true;
        if (uVar2 != arg1) {
            if ((int)uVar2 < arg1) {
                bVar1 = m_lightLevelsAbove;
            } else {
                if ((int)uVar2 <= arg1) {
                    return false;
                }
                bVar1 = m_lightLevelsBelow;
            }
            bVar3 = bVar1 != 0;
        }
        return bVar3;
    }

    // 0x10043bef0
    unsigned long StaticPointLight::LoadLightType(ConfigProvider* configProvider) {
        uint8_t* this_00;
        uint32_t uVar2;
        shared_ptr<LightType>* lightType;
        MSIType* pMVar3;
        uint64_t unaff_RBX;

        unsigned long uVar4 = (((uint64_t)((int64_t)((unsigned long)unaff_RBX >> 8)) << 8) | (uint8_t)1);
        if (m_lightTypeToLoad != 4294967295) {
            if (configProvider == nullptr) {
                uVar4 = 0;
            } else {
                uVar4 = 0;
                lightType = configProvider->GetConfig<LightType>(m_lightTypeToLoad, nullptr);
                this_00 = m_lightType;
                *this_00 = *lightType;
                if (this_00->operator_cast_to_bool() != '\0') {
                    pMVar3 = (MSIType*)(*this_00).operator->();
                    uVar2 = pMVar3->GetSpriteID();
                    field_60 = uVar2;
                    pMVar3 = (MSIType*)(*this_00).operator->();
                    uVar2 = pMVar3->GetTint();
                    field_144 = uVar2;
                    uVar2 = ((LightType*)(*this_00).operator->())->GetAmplitude();
                    field_140 = uVar2;
                    uVar2 = ((HitmarkType*)(*this_00).operator->())->GetDuration();
                    field_132 = uVar2;
                    m_lightTypeToLoad = 4294967295;
                    uVar4 = 1;
                }
            }
        }
        return uVar4 & 4294967295;
    }

    // 0x10043c070
    float StaticPointLight::CalculateIntensity(ConfigProvider* configProvider, unsigned int arg2, bool arg3) {
        double* pdVar3;
        unsigned int uVar4;
        float fVar5;

        bool cVar1 = LoadLightType(configProvider);
        unsigned int uVar2 = 2048;
        if (((!cVar1) || (arg3)) || (4 < field_60 - 1))
            goto switchD_10043c0db_caseD_2;
        uVar2 = (arg2 * field_132) / 50 + m_phase & 2047;
        switch (field_60) {
        case 1:
            fVar5 = (float)::sin((float)uVar2 * 0.0030679617f);
            fVar5 = fVar5 * 1024.0 + 1024.0;
            goto LAB_10043c11e;
        case 3:
            pdVar3 = &mPerlinNoise[(unsigned long)uVar2];
            fVar5 = (float)(*pdVar3 * 2048.0);
        LAB_10043c11e:
            uVar2 = math::RoundFloatToInt(fVar5);
            break;
        case 4:
            uVar2 = uVar2 * 2 & 2048;
            break;
        case 5:
            uVar4 = 2048 - uVar2;
            if (uVar2 < 1024) {
                uVar4 = uVar2;
            }
            uVar2 = uVar4 * 2;
        }
    switchD_10043c0db_caseD_2:
        return m_intensity * 0.00048828125f * (float)(((int)(uVar2 * field_140) >> 11) + field_144);
    }

    // 0x10043c1a0
    uint8_t* StaticPointLight::GetWorldAABB() {
        ColourHSL local_78;
        Vector3T<float> local_68;
        uint64_t local_58;
        uint32_t local_50;
        uint64_t local_48;
        uint32_t local_40;
        uint64_t local_38;
        uint32_t local_30;

        if (field_149 != '\0') {
            local_78 = math::ColourHSL((float)(m_sourceMapSquareX << 13), 0.0, (float)(int)(m_sourceMapSquareZ << 13));
            local_58 = field_4 + local_78;
            local_50 = 0;
            local_68 = math::Vector3T((float)m_radius);
            local_48 = local_58 - local_68;
            local_40 = 0;
            local_38 = local_58 + local_68;
            local_30 = 0;
            field_160.Set(local_48, local_38);
            field_149 = 0;
        }
        return &field_160;
    }

    // 0x10043c270
    void
    StaticPointLight::CalculatePositionJitter(ConfigProvider* configProvider,
                                              graphics::PointLightPositionJitterData& pointLightPositionJitterData) {
        void result;
        uint64_t result;
        uint64_t* this_00;
        uint32_t uVar3;
        int iVar4;
        int iVar5;
        SoundInstance* this_01;
        LightType* pLVar6;
        unsigned long long uVar7;
        int* piVar8;
        uint8_t* this_05;
        uint64_t unaff_R12;
        float fVar9;
        float fVar10;
        float local_5c;
        int local_58;
        uint32_t local_54;
        float local_50;
        float local_4c;
        uint64_t local_48;
        float local_40;
        float local_3c;
        float local_38;
        float local_34;

        LoadLightType(configProvider);
        if (m_positionJitterOverride == '\0') {
            this_05 = m_lightType;
            if (this_05->operator_cast_to_bool() == '\0') {
                fVar10 = 1.0;
                local_5c = 0.0;
                iVar5 = 1000;
                uVar3 = 0;
                iVar4 = 1000;
                fVar9 = 0.0;
            } else {
                this_01 = (SoundInstance*)(*this_05).operator->();
                local_38 = (float)this_01->GetSoundSpatialSizeMin();
                uVar3 = ((MidiTask*)(*this_05).operator->())->HasError();
                iVar5 = ((WorldmapAreaMetadata*)(*this_05).operator->())->GetMinMapX();
                iVar4 = ((NXTPixScreen*)(*this_05).operator->())->GetUIHeight();
                pLVar6 = (LightType*)(*this_05).operator->();
                local_3c = (float)pLVar6->GetJitterMovePower();
                pLVar6 = (LightType*)(*this_05).operator->();
                local_5c = (float)pLVar6->GetJitterIntensityStrength();
                fVar9 = local_38;
                fVar10 = local_3c;
            }
        } else {
            uVar3 = (uint32_t)(((uint64_t)((int64_t)((unsigned long)unaff_R12 >> 8)) << 8) |
                               (uint8_t)(m_positionJitterOverrideRadiusRandom != '\0'));
            local_5c = m_positionJitterOverrideIntensityStrength;
            fVar9 = m_positionJitterOverrideRadius;
            fVar10 = m_positionJitterOverrideMovePower;
            iVar5 = m_positionJitterOverrideMoveTimeMS;
            iVar4 = m_positionJitterOverrideMoveTimeOffsetRandomMS;
        }
        uint8_t* vector3 = PTR_ZERO_100ee66e8;
        if (fVar9 == 0.0) {
            pointLightPositionJitterData.field_16.SetXYZ(*PTR_ZERO_100ee66e8);
            pointLightPositionJitterData.field_28.SetXYZ(*vector3);
            pointLightPositionJitterData.field_40.SetXYZ(*vector3);
            pointLightPositionJitterData.field_52 = 1065353216;
        } else {
            local_3c = fVar10;
            local_38 = fVar9;
            uVar7 = SystemTimer::GetTimeMS<std::chrono::steady_clock>();
            if ((unsigned long)(pointLightPositionJitterData.field_8 + pointLightPositionJitterData.field_0) < uVar7) {
                &result = &pointLightPositionJitterData.field_40;
                this_00 = &pointLightPositionJitterData.field_28;
                local_58 = iVar5;
                local_54 = uVar3;
                this_00->SetXYZ(result);
                local_50 = (float)math::FRand(2.0);
                local_4c = (float)math::FRand(2.0);
                fVar9 = (float)math::FRand(2.0);
                result.Set(local_50, local_4c, fVar9);
                new (&local_48) math::Vector3T(1.0);
                result -= local_48;
                result *= 0.5;
                result = math::Vector3T<float>::Normalize();
                result *= local_38;
                if ((char)local_54 != '\0') {
                    fVar9 = (float)math::FRand(1.0);
                    result *= fVar9;
                }
                if (*this_00 == *PTR_ZERO_100ee66e8) {
                    this_00->SetXYZ(result);
                }
                pointLightPositionJitterData.field_0 = uVar7;
                local_48 = (unsigned long)local_48._4_4_ << 32;
                iVar5 = math::Rand(iVar4 * 2);
                local_34 = (float)((local_58 - iVar4) + iVar5);
                piVar8 = std::max<int>(local_48, local_34);
                pointLightPositionJitterData.field_8 = (long)*piVar8;
            }
            local_48 = (((uint64_t)local_48._4_4_ << 32) |
                        (uint32_t)((float)(uVar7 - pointLightPositionJitterData.field_0) /
                                   (float)(unsigned long)pointLightPositionJitterData.field_8));
            local_34 = 0.0;
            fVar10 = math::Clamp<float>(local_48, local_34, 1.0);
            fVar9 = local_3c;
            fVar10 = (float)pow(fVar10, local_3c);
            local_48 = math::Lerp<math::Vector3T<float>, float>(pointLightPositionJitterData.field_28,
                                                                pointLightPositionJitterData.field_40, fVar10);
            local_40 = fVar9;
            pointLightPositionJitterData.field_16.SetXYZ(local_48);
            local_48 = (((uint64_t)local_48._4_4_ << 32) | (uint32_t)1065353216);
            fVar9 = (float)pointLightPositionJitterData.field_16.Length();
            local_34 = 1.0 - fVar9 / local_38;
            fVar9 = math::Lerp<float, float>(local_48, local_34, local_5c);
            pointLightPositionJitterData.field_52 = fVar9;
        }
    }

    // 0x10043c6b0
    bool StaticPointLight::operator==(const StaticPointLight& staticPointLight) const {
        bool bVar1;
        bool cVar2;

        if (((((((m_level == staticPointLight.m_level) && (bVar1 = field_4 == staticPointLight.field_4, bVar1)) &&
                (m_lightLevelsBelow == staticPointLight.m_lightLevelsBelow)) &&
               (((m_lightLevelsAbove == staticPointLight.m_lightLevelsAbove && (m_rGB == staticPointLight.m_rGB)) &&
                 ((m_radius == staticPointLight.m_radius &&
                   ((field_72 == staticPointLight.field_72 &&
                     (m_lightTypeToLoad == staticPointLight.m_lightTypeToLoad)))))))) &&
              ((bVar1 = *m_lightType == staticPointLight.m_lightType,
                bVar1 && (((m_scriptId == staticPointLight.m_scriptId && (field_132 == staticPointLight.field_132)) &&
                           (m_phase == staticPointLight.m_phase)))))) &&
             (((field_140 == staticPointLight.field_140 && (field_144 == staticPointLight.field_144)) &&
               (((m_flickerType == staticPointLight.m_flickerType &&
                  ((field_60 == staticPointLight.field_60 &&
                    (cVar2 = field_32 == staticPointLight.field_32, cVar2)))) &&
                 (m_intensity == staticPointLight.m_intensity)))))) &&
            (((m_attenuationFalloff == staticPointLight.m_attenuationFalloff &&
               (m_backlightRatio == staticPointLight.m_backlightRatio)) &&
              (m_shadowsEnabled == staticPointLight.m_shadowsEnabled)))) {
            return m_shadowStrength == staticPointLight.m_shadowStrength;
        }
        return false;
    }

} // namespace jag::game

// 0x10043be20
void ceil(float arg1) {
    _ceilf();
}

// 0x10043be30
unsigned long abs(float arg1) {
    uint32_t in_XMM0_Db;

    return (((uint64_t)in_XMM0_Db << 32) | (uint32_t)arg1) & 9223372034707292159;
}

// 0x10043be40
void floor(float arg1) {
    _floorf();
}

// 0x10043c190
void sin(float arg1) {
    _sinf();
}
