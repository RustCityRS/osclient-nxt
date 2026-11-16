// libs/game/runetek5/scene/StaticPointLight.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "StaticPointLight.h"

namespace jag::game {
    // 0x100f38ef0, 4 bytes, __data
    float StaticPointLight::m_positionJitterOverrideRadius = 6.0f;

    // 0x100f38ef4, 4 bytes, __data
    StaticPointLight::m_positionJitterOverrideRadiusRandom = 1;

    // 0x100f38ef8, 4 bytes, __data
    StaticPointLight::m_positionJitterOverrideIntensityStrength = 1050253722;

    // 0x100f38efc, 4 bytes, __data
    StaticPointLight::m_positionJitterOverrideMoveTimeMS = 120;

    // 0x100f38f00, 4 bytes, __data
    StaticPointLight::m_positionJitterOverrideMoveTimeOffsetRandomMS = 60;

    // 0x100f38f04, 4 bytes, __data
    StaticPointLight::m_positionJitterOverrideMovePower = 1058642330;

    // 0x1039b4e80, 1 bytes, __common; zero-initialised
    StaticPointLight::m_forceShadowsOn;

    // 0x1039b4e81, 7 bytes, __common; zero-initialised
    StaticPointLight::m_positionJitterOverride;

    // 0x1039b4e88, 24 bytes, __common; set at startup by ___cxx_global_var_init
    Array<double, eastl::allocator> StaticPointLight::mPerlinNoise = Array<double, eastl::allocator>();

    // 0x10000c2f0: the linker folded this into math::Rect<int>::SetX(int), which has identical code
    StaticPointLight::SetLevel(int);

    // 0x10002d850: the linker folded this into oldscape::option::Option<int>::GetDefaultValue() const, which has identical code
    StaticPointLight::GetInfluenceRanges();

    // 0x10002d850: the linker folded this into oldscape::option::Option<int>::GetDefaultValue() const, which has identical code
    StaticPointLight::GetInfluenceRanges() const;

    // 0x1000602b0: the linker folded this into oldscape::widgets::ScrollBarWidget::ThumbIsVisible() const, which has identical code
    bool StaticPointLight::GetUseTerrainHeight() const;

    // 0x100060710: the linker folded this into oldscape::widgets::ScrollBarWidget::GetThumbBounds() const, which has identical code
    shared_ptr StaticPointLight::GetLightType() const;

    // 0x100066b70: the linker folded this into oldscape::widgets::Widget::GetTextColour() const, which has identical code
    int StaticPointLight::GetSourceMapSquareX() const;

    // 0x1000b7a70: the linker folded this into oldscape::minimenu::MinimenuEntry::GetObjType() const, which has identical code
    StaticPointLight::GetDynamicID() const;

    // 0x1000b7a80: the linker folded this into oldscape::minimenu::MinimenuEntry::GetObjCount() const, which has identical code
    int StaticPointLight::GetScriptId() const;

    // 0x1000b9960: the linker folded this into oldscape::ScriptVarType::GetID() const, which has identical code
    uint StaticPointLight::GetLevel() const;

    // 0x1000e39e0: the linker folded this into oldscape::graphics::NXTPixScreen::GetZoomValue() const, which has identical code
    float StaticPointLight::GetAttenuationFalloff() const;

    // 0x1001117e0: the linker folded this into oldscape::jagex3::Js5::GetIndexCrc() const, which has identical code
    StaticPointLight::GetSourceMapSquareZ() const;

    // 0x10012f260: the linker folded this into oldscape::social::OnlinePlayerData<oldscape::social::FriendChatUser>::GetWorldId() const, which has identical code
    uint StaticPointLight::GetPhase() const;

    // 0x10014e180: the linker folded this into math::Vector2T<float>::y() const, which has identical code
    StaticPointLight::GetPosition() const;

    // 0x1001acac0: the linker folded this into Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator> >::IsNull(), which has identical code
    byte StaticPointLight::GetLightLevelsBelow() const;

    // 0x1001bc270: the linker folded this into oldscape::VBOMapper::SetMappingSupport(bool), which has identical code
    StaticPointLight::SetLightsLevelsAbove(bool);

    // 0x1001be5d0: the linker folded this into graphics::SunlightOptions::GetShadowQuality() const, which has identical code
    uint StaticPointLight::GetFlickerType() const;

    // 0x1003ca920: the linker folded this into MapElementType::GetShowOnWorldMap() const, which has identical code
    StaticPointLight::IsValid() const;

    // 0x1003f65a0: the linker folded this into EntityRoute::GetStalledTickCount() const, which has identical code
    uint StaticPointLight::GetRadius() const;

    // 0x10043b140, 304 bytes, base-object constructor, placed by class name and debug map
    // StaticPointLight::StaticPointLight()
    void StaticPointLight::StaticPointLight() {
        long lVar1;
        _func_decltype_nullptr* in_RSI;
        WrapArray<unsigned char const> local_30[16];

        new (this) MakeSharedPool<StaticPointLight, 64>();
        m_level = 4294967295;
        new (&field_4) math::Vector3T<int>();
        m_lightLevelsBelow = 0;
        m_lightsLevelsAbove = false;
        new (&field_32) Array<unsigned int, eastl::allocator>();
        m_flickerType = 4294967295;
        field_60 = 4294967295;
        m_rGB = 0;
        m_radius = 0;
        field_72 = 0;
        m_useTerrainHeight = true;
        *(undefined8*)&field_80 = 18446744069414584320;
        new (m_lightType, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
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
        lVar1 = mPerlinNoise.data();
        if (lVar1 == 0) {
            mPerlinNoise.set_max_size(2048, 0);
            WrapArray<unsigned char const>::WrapArray<Array<unsigned char, eastl::allocator>>(local_30,
                                                                                              (Array*)&mPerlinNoise);
            math::GradientPerlinNoise::GenerateGradientNoise1d(0, local_30, 255);
        }
        AssignCalculatedParameters(this);
    }

    // 0x10043b2e0, 496 bytes, placed by class name and debug map
    // StaticPointLight::AssignCalculatedParameters()
    void StaticPointLight::AssignCalculatedParameters() {
        undefined4 uVar1;
        undefined4 uVar2;

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

    // 0x10043b4d0, 16 bytes, complete-object constructor, placed by class name and debug map
    // StaticPointLight::StaticPointLight(): jumps straight to the base-object constructor

    // 0x10043b4e0, 656 bytes, base-object constructor, placed by class name and debug map
    // StaticPointLight::StaticPointLight(StaticPointLight const*, math::Vector3T<float> const&, int)
    void StaticPointLight::StaticPointLight(StaticPointLight* param_1, Vector3T* param_2, int param_3) {
        bool bVar2;
        uint uVar4;
        int iVar5;
        long lVar7;
        Array* pAVar8;
        shared_ptr* psVar9;
        float fVar11;
        WrapArray<unsigned char const> local_50[16];
        Array<unsigned int, eastl::allocator>* local_38;

        new (this) MakeSharedPool<StaticPointLight, 64>();
        m_level = 4294967295;
        new (&field_4) math::Vector3T<int>();
        m_lightLevelsBelow = 0;
        m_lightsLevelsAbove = false;
        local_38 = (Array<unsigned int, eastl::allocator>*)&field_32;
        Array<unsigned int, eastl::allocator>::Array(local_38);
        m_flickerType = 4294967295;
        field_60 = 4294967295;
        m_rGB = 0;
        m_radius = 0;
        field_72 = 0;
        m_useTerrainHeight = true;
        *(undefined8*)&field_80 = 18446744069414584320;
        new (m_lightType, (_func_decltype_nullptr*)param_1)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
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
        if (param_1 != (StaticPointLight*)0) {
            if (IsValid(param_1) != '\0') {
                lVar7 = mPerlinNoise.data();
                if (lVar7 == 0) {
                    mPerlinNoise.set_max_size(2048, 0);
                    WrapArray<unsigned char const>::WrapArray<Array<unsigned char, eastl::allocator>>(
                        local_50, (Array*)&mPerlinNoise);
                    math::GradientPerlinNoise::GenerateGradientNoise1d(0, local_50, 255);
                }
                uVar4 = param_1->GetX();
                if (param_3 != -1) {
                    uVar4 = param_3;
                }
                m_level = uVar4;
                bVar2 = (bool)param_1->IsToggled();
                m_lightsLevelsAbove = bVar2;
                m_lightLevelsBelow = GetLightLevelsBelow(param_1);
                (&field_4, param_2)->SetXYZ();
                pAVar8 = (Array*)param_1->GetDefaultValue();
                Array<unsigned int, eastl::allocator>::operator=(local_38, pAVar8);
                uVar4 = param_1->GetDuration();
                m_radius = uVar4;
                uVar4 = param_1->GetAmplitude();
                m_rGB = uVar4;
                uVar4 = param_1->GetSpriteID();
                m_flickerType = uVar4;
                uVar4 = param_1->GetLastNumVerts();
                m_phase = uVar4;
                iVar5 = param_1->GetMaxMapZ();
                m_scriptId = iVar5;
                uVar4 = param_1->GetLoopLength();
                m_lightTypeToLoad = uVar4;
                psVar9 = (shared_ptr*)param_1->GetBoneIDMap();
                shared_ptr<LightType>::operator=((shared_ptr<LightType>*)m_lightType, psVar9);
                fVar11 = (float)GetIntensity(param_1);
                m_intensity = fVar11;
                fVar11 = (float)GetAttenuationFalloff(param_1);
                m_attenuationFalloff = fVar11;
                fVar11 = (float)GetBacklightRatio(param_1);
                m_backlightRatio = fVar11;
                if (m_lightTypeToLoad == 4294967295) {
                    AssignCalculatedParameters(this);
                }
                bVar2 = (bool)GetShadowsEnabled(param_1);
                m_shadowsEnabled = bVar2;
                fVar11 = (float)param_1->GetMaterialAnimationH();
                m_shadowStrength = fVar11;
                iVar5 = param_1->GetMaxLineWidth();
                m_sourceMapSquareX = iVar5;
                m_sourceMapSquareZ = param_1->GetCompletedGold();
                field_149 = 1;
                if (m_forceShadowsOn != '\0') {
                    m_shadowsEnabled = true;
                    m_shadowStrength = 1.0;
                }
                return;
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssert("existingPointLight && existingPointLight->IsValid()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                  "StaticPointLight.cpp",
                  46, (char*)0);
    }

    // 0x10043b7a0, 16 bytes, complete-object constructor, placed by class name and debug map
    // StaticPointLight::StaticPointLight(StaticPointLight const*, math::Vector3T<float> const&, int): jumps straight to the base-object constructor

    // 0x10043b7b0, 1312 bytes, placed by class name and debug map
    // StaticPointLight::Initialise(PacketT<Array<unsigned char, eastl::allocator> >&)
    void StaticPointLight::Initialise(PacketT* param_1) {
        undefined1* this_00;
        byte bVar1;
        char cVar2;
        ushort uVar3;
        short sVar4;
        uint uVar5;
        long lVar6;
        float* pfVar7;
        undefined8 uVar8;
        uint* puVar9;
        uint uVar10;
        ulong uVar11;
        uint uVar12;
        float fVar13;
        float fVar14;
        float local_16c;
        float local_168;
        float local_164;
        float local_160;
        float local_15c;
        LogStream local_158;
        LogStream local_c8;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        lVar6 = param_1->GetDataPtr();
        if (lVar6 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("dataPacket.GetDataPtr()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "StaticPointLight.cpp",
                      95, (char*)0);
        }
        lVar6 = param_1->GetDataPtr();
        if (lVar6 == 0)
            goto LAB_10043bc8f;
        bVar1 = param_1->g1();
        m_lightsLevelsAbove = (bool)(bVar1 >> 3 & 1);
        m_lightLevelsBelow = bVar1 >> 4 & 1;
        m_level = bVar1 & 7;
        uVar3 = param_1->g2();
        local_15c = (float)uVar3;
        this_00 = &field_4;
        pfVar7 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)this_00, 0);
        *pfVar7 = local_15c;
        uVar3 = param_1->g2();
        local_15c = (float)uVar3;
        pfVar7 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)this_00, 2);
        *pfVar7 = local_15c;
        pfVar7 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)this_00, 0);
        if (*pfVar7 <= 0.0 && *pfVar7 != 0.0) {
        LAB_10043b8fe:
            uVar8 = logger::default_logger();
            new (&local_c8) logger::LogStream((LogStream*)&LOGGER_SCENE);
            pfVar7 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)this_00, 0);
            local_15c = *pfVar7;
            pfVar7 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)this_00, 2);
            logger::Logger::Log(
                (double)local_15c, (double)*pfVar7, 4665729213955833856, uVar8, 0, &local_c8, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                "StaticPointLight.cpp",
                115, "Static point light position (%0.3f, %0.3f) is outside of the map square bounds (%0.3f)");
            local_c8.~LogStream();
            m_valid = 0;
        } else {
            pfVar7 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)this_00, 0);
            if (8192.0 < *pfVar7 || *pfVar7 == 8192.0)
                goto LAB_10043b8fe;
            pfVar7 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)this_00, 2);
            if (*pfVar7 <= 0.0 && *pfVar7 != 0.0)
                goto LAB_10043b8fe;
            pfVar7 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)this_00, 2);
            if (8192.0 < *pfVar7 || *pfVar7 == 8192.0)
                goto LAB_10043b8fe;
        }
        uVar3 = param_1->g2();
        local_15c = (float)uVar3;
        pfVar7 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)this_00, 1);
        *pfVar7 = local_15c;
        bVar1 = param_1->g1();
        SetRadiusGrid(this, (uint)bVar1, false);
        (&field_32, (ulong)field_72, 0)->set_max_size();
        if (field_72 != 0) {
            uVar11 = 0;
            do {
                uVar3 = param_1->g2();
                uVar5 = field_72;
                uVar12 = uVar5 - 1;
                if (uVar3 >> 8 < uVar5) {
                    uVar12 = (uint)(uVar3 >> 8);
                }
                uVar10 = uVar5 - uVar12;
                if ((uint)(byte)uVar3 <= uVar5 - uVar12) {
                    uVar10 = (uint)(byte)uVar3;
                }
                puVar9 = (uint*)Array<unsigned int, eastl::allocator>::operator[](
                    (Array<unsigned int, eastl::allocator>*)&field_32, uVar11);
                *puVar9 = uVar12 << 8 | uVar10;
                uVar11 = uVar11 + 1;
            } while (uVar11 < field_72);
        }
        pfVar7 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)this_00, 0);
        local_15c = -64.0;
        local_160 = *pfVar7 + -64.0;
        pfVar7 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)this_00, 0);
        fVar13 = (float)floor(*pfVar7 * 0.0078125);
        fVar13 = (float)::abs(fVar13 * -128.0 + local_160);
        fVar13 = (float)ceil(fVar13);
        pfVar7 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)this_00, 2);
        local_15c = local_15c + *pfVar7;
        pfVar7 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)this_00, 2);
        fVar14 = (float)floor(*pfVar7 * 0.0078125);
        fVar14 = (float)::abs(fVar14 * -128.0 + local_15c);
        fVar14 = (float)ceil(fVar14);
        uVar5 = eastl::max<unsigned int>((uint)(long)fVar13, (uint)(long)fVar14);
        if (m_radius <= uVar5) {
            uVar8 = logger::default_logger();
            new (&local_158) logger::LogStream((LogStream*)&LOGGER_SCENE);
            logger::Logger::Log(uVar8, 0, &local_158, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "scene/StaticPointLight.cpp",
                                169, "Static point light has an invalid offset");
            local_158.~LogStream();
        }
        uVar3 = param_1->g2();
        uVar5 = math::RunetekColour::HSLToRGB(uVar3);
        m_rGB = uVar5;
        bVar1 = param_1->g1();
        m_flickerType = bVar1 & 31;
        m_phase = (bVar1 & 224) << 3;
        sVar4 = param_1->g2s();
        m_scriptId = (int)sVar4;
        if (m_flickerType == 31) {
            uVar3 = param_1->g2();
            m_lightTypeToLoad = (uint)uVar3;
        } else {
            AssignCalculatedParameters(this);
        }
        fVar13 = (float)param_1->gFloat();
        m_intensity = fVar13;
        fVar13 = (float)param_1->gFloat();
        m_attenuationFalloff = fVar13;
        fVar13 = (float)param_1->gFloat();
        m_backlightRatio = fVar13;
        cVar2 = param_1->g1();
        m_shadowsEnabled = cVar2 != '\0';
        local_16c = (float)param_1->gFloat();
        local_168 = 0.0;
        local_164 = 1.0;
        pfVar7 = std::clamp<float>(&local_16c, &local_168, &local_164);
        m_shadowStrength = *pfVar7;
        if (m_forceShadowsOn != '\0') {
            m_shadowsEnabled = true;
            m_shadowStrength = 1.0;
        }
        field_149 = 1;
    LAB_10043bc8f:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10043bcd0, 336 bytes, placed by class name and debug map
    // StaticPointLight::SetRadiusGrid(unsigned int, bool)
    void StaticPointLight::SetRadiusGrid(uint param_1, bool param_2) {
        uint uVar1;
        undefined8 uVar2;
        undefined4* puVar3;
        ulong uVar4;
        ulong uVar5;
        LogStream local_c8;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (64 < param_1) {
            uVar2 = logger::default_logger();
            new (&local_c8) logger::LogStream((LogStream*)&LOGGER_SCENE);
            logger::Logger::Log(uVar2, 0, &local_c8, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "scene/StaticPointLight.cpp",
                                218, "Static point light has an invalid radius (%u > %u max), invalidating light",
                                param_1, 64);
            local_c8.~LogStream();
            m_valid = 0;
        }
        uVar1 = param_1 * 2 + 1;
        if (field_72 != uVar1) {
            field_72 = uVar1;
            m_radius = param_1 << 7 | 64;
            field_149 = 1;
        }
        if (param_2) {
            (&field_32, (ulong)field_72, 1)->set_max_size();
            uVar5 = (ulong)field_72;
            if (field_72 != 0) {
                uVar4 = 0;
                do {
                    puVar3 = (undefined4*)Array<unsigned int, eastl::allocator>::operator[](
                        (Array<unsigned int, eastl::allocator>*)&field_32, uVar4);
                    *puVar3 = (int)uVar5;
                    uVar4 = uVar4 + 1;
                    uVar5 = (ulong)field_72;
                } while (uVar4 < uVar5);
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10043be60, 96 bytes, placed by class name and debug map
    // StaticPointLight::SetRadius(float, bool)
    void StaticPointLight::SetRadius(float param_1, bool param_2) {
        undefined7 in_register_00000031;
        float fVar1;

        fVar1 = (float)ceil(param_1 * 0.0078125 + 0.5);
        field_72 = (uint)(long)fVar1;
        if ((int)CONCAT71(in_register_00000031, param_2) != 0) {
            SetRadiusGrid(this, (uint)(long)fVar1, true);
        }
        m_radius = (uint)(long)param_1;
    }

    // 0x10043bec0, 48 bytes, placed by class name and debug map
    // StaticPointLight::AffectsLevel(int) const
    bool StaticPointLight::AffectsLevel(int param_1) {
        byte bVar1;
        uint uVar2;
        bool bVar3;

        uVar2 = m_level;
        bVar3 = true;
        if (uVar2 != param_1) {
            if ((int)uVar2 < param_1) {
                bVar1 = m_lightsLevelsAbove;
            } else {
                if ((int)uVar2 <= param_1) {
                    return false;
                }
                bVar1 = m_lightLevelsBelow;
            }
            bVar3 = bVar1 != 0;
        }
        return bVar3;
    }

    // 0x10043bef0, 208 bytes, placed by class name and debug map
    // StaticPointLight::LoadLightType(ConfigProvider*)
    ulong StaticPointLight::LoadLightType(ConfigProvider* param_1) {
        undefined1* this_00;
        undefined4 uVar2;
        shared_ptr* psVar3;
        MSIType* pMVar4;
        LightType* this_01;
        HitmarkType* this_02;
        undefined8 unaff_RBX;
        ulong uVar5;

        uVar5 = CONCAT71((int7)((ulong)unaff_RBX >> 8), 1);
        if (m_lightTypeToLoad != 4294967295) {
            if (param_1 == (ConfigProvider*)0) {
                uVar5 = 0;
            } else {
                uVar5 = 0;
                psVar3 = ConfigProvider::GetConfig<LightType>(param_1, m_lightTypeToLoad, (DataStatus**)0);
                this_00 = m_lightType;
                shared_ptr<LightType>::operator=((shared_ptr<LightType>*)this_00, psVar3);
                if (this_00->operator_cast_to_bool()) {
                    pMVar4 = (MSIType*)shared_ptr<LightType>::operator->((shared_ptr<LightType>*)this_00);
                    uVar2 = pMVar4->GetSpriteID();
                    field_60 = uVar2;
                    pMVar4 = (MSIType*)shared_ptr<LightType>::operator->((shared_ptr<LightType>*)this_00);
                    uVar2 = pMVar4->GetTint();
                    field_144 = uVar2;
                    this_01 = (LightType*)shared_ptr<LightType>::operator->((shared_ptr<LightType>*)this_00);
                    uVar2 = this_01->GetAmplitude();
                    field_140 = uVar2;
                    this_02 = (HitmarkType*)shared_ptr<LightType>::operator->((shared_ptr<LightType>*)this_00);
                    uVar2 = this_02->GetDuration();
                    field_132 = uVar2;
                    m_lightTypeToLoad = 4294967295;
                    uVar5 = 1;
                }
            }
        }
        return uVar5 & 4294967295;
    }

    // 0x10043c070, 288 bytes, placed by class name and debug map
    // StaticPointLight::CalculateIntensity(ConfigProvider*, unsigned int, bool)
    float StaticPointLight::CalculateIntensity(ConfigProvider* param_1, uint param_2, bool param_3) {
        char cVar1;
        uint uVar2;
        double* pdVar3;
        uint uVar4;
        float fVar5;

        cVar1 = LoadLightType(this, param_1);
        uVar2 = 2048;
        if (((cVar1 == '\0') || (param_3)) || (4 < field_60 - 1))
            goto switchD_10043c0db_caseD_2;
        uVar2 = (param_2 * field_132) / 50 + m_phase & 2047;
        switch (field_60) {
        case 1:
            fVar5 = (float)::sin((float)uVar2 * 0.0030679617);
            fVar5 = fVar5 * 1024.0 + 1024.0;
            goto LAB_10043c11e;
        case 3:
            pdVar3 = (double*)Array<double, eastl::allocator>::operator[](
                (Array<double, eastl::allocator>*)&mPerlinNoise, (ulong)uVar2);
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
        return m_intensity * 0.00048828125 * (float)(((int)(uVar2 * field_140) >> 11) + field_144);
    }

    // 0x10043c1a0, 208 bytes, placed by class name and debug map
    // StaticPointLight::GetWorldAABB()
    undefined1* StaticPointLight::GetWorldAABB() {
        ColourHSL local_78;
        Vector3T<float> local_68[16];
        undefined8 local_58;
        undefined4 local_50;
        undefined8 local_48;
        undefined4 local_40;
        undefined8 local_38;
        undefined4 local_30;

        if (field_149 != '\0') {
            new (&local_78)
                math::ColourHSL((float)(m_sourceMapSquareX << 13), 0.0, (float)(int)(m_sourceMapSquareZ << 13));
            local_58 = math::operator+((Vector3T*)&field_4, (Vector3T*)&local_78);
            local_50 = 0;
            math::Vector3T<float>::Vector3T(local_68, (float)m_radius);
            local_48 = math::operator-((Vector3T*)&local_58, (Vector3T*)local_68);
            local_40 = 0;
            local_38 = math::operator+((Vector3T*)&local_58, (Vector3T*)local_68);
            local_30 = 0;
            (&field_160, (Vector3T*)&local_48, (Vector3T*)&local_38)->Set();
            field_149 = 0;
        }
        return &field_160;
    }

    // 0x10043c270, 912 bytes, placed by class name and debug map
    // StaticPointLight::CalculatePositionJitter(ConfigProvider*, graphics::PointLightPositionJitterData&)
    void StaticPointLight::CalculatePositionJitter(ConfigProvider* param_1, PointLightPositionJitterData* param_2) {
        undefined8* this_00;
        undefined8* this_01;
        undefined* puVar1;
        bool bVar2;
        undefined4 uVar3;
        int iVar4;
        int iVar5;
        SoundInstance* this_02;
        MidiTask* this_03;
        WorldmapAreaMetadata* this_04;
        NXTPixScreen* this_05;
        LightType* this_06;
        StaticPointLight* this_07;
        ulonglong uVar6;
        int* piVar7;
        Vector3T* extraout_RDX;
        undefined1* this_08;
        undefined8 unaff_R12;
        float fVar8;
        float fVar9;
        float local_60;
        float local_5c;
        int local_58;
        undefined4 local_54;
        float local_50;
        float local_4c;
        undefined8 local_48;
        float local_40;
        float local_3c;
        float local_38;
        float local_34;

        this_07 = this;
        LoadLightType(this, param_1);
        if (m_positionJitterOverride == '\0') {
            this_08 = m_lightType;
            this_07 = (StaticPointLight*)this_08;
            bVar2 = this_08->operator_cast_to_bool();
            if (bVar2) {
                this_02 = (SoundInstance*)shared_ptr<LightType>::operator->((shared_ptr<LightType>*)this_08);
                local_38 = (float)this_02->GetSoundSpatialSizeMin();
                this_03 = (MidiTask*)shared_ptr<LightType>::operator->((shared_ptr<LightType>*)this_08);
                uVar3 = this_03->HasError();
                this_04 = (WorldmapAreaMetadata*)shared_ptr<LightType>::operator->((shared_ptr<LightType>*)this_08);
                iVar5 = this_04->GetMinMapX();
                this_05 = (NXTPixScreen*)shared_ptr<LightType>::operator->((shared_ptr<LightType>*)this_08);
                iVar4 = this_05->GetUIHeight();
                this_06 = (LightType*)shared_ptr<LightType>::operator->((shared_ptr<LightType>*)this_08);
                local_3c = (float)this_06->GetJitterMovePower();
                this_07 = (StaticPointLight*)shared_ptr<LightType>::operator->((shared_ptr<LightType>*)this_08);
                local_5c = (float)this_07->GetJitterIntensityStrength();
                fVar8 = local_38;
                fVar9 = local_3c;
            } else {
                fVar9 = 1.0;
                local_5c = 0.0;
                iVar5 = 1000;
                uVar3 = 0;
                iVar4 = 1000;
                fVar8 = 0.0;
            }
        } else {
            uVar3 = (undefined4)CONCAT71((int7)((ulong)unaff_R12 >> 8), m_positionJitterOverrideRadiusRandom != '\0');
            local_5c = m_positionJitterOverrideIntensityStrength;
            fVar8 = m_positionJitterOverrideRadius;
            fVar9 = m_positionJitterOverrideMovePower;
            iVar5 = m_positionJitterOverrideMoveTimeMS;
            iVar4 = m_positionJitterOverrideMoveTimeOffsetRandomMS;
        }
        puVar1 = PTR_ZERO_100ee66e8;
        if (fVar8 == 0.0) {
            (&param_2->field_16, (Vector3T*)PTR_ZERO_100ee66e8)->SetXYZ();
            (&param_2->field_28, (Vector3T*)puVar1)->SetXYZ();
            (&param_2->field_40, (Vector3T*)puVar1)->SetXYZ();
            param_2->field_52 = 1065353216;
        } else {
            local_3c = fVar9;
            local_38 = fVar8;
            uVar6 = SystemTimer::GetTimeMS<std::chrono::steady_clock>((SystemTimer*)this_07);
            if ((ulong)(param_2->field_8 + param_2->field_0) < uVar6) {
                this_00 = &param_2->field_40;
                this_01 = &param_2->field_28;
                local_58 = iVar5;
                local_54 = uVar3;
                this_01->SetXYZ(this_00);
                local_50 = (float)math::FRand(2.0);
                local_4c = (float)math::FRand(2.0);
                fVar8 = (float)math::FRand(2.0);
                this_00->Set(local_50, local_4c, fVar8);
                new (&local_48) math::Vector3T<float>(1.0);
                math::Vector3T<float>::operator-=((Vector3T<float>*)this_00, (Vector3T*)&local_48);
                math::Vector3T<float>::operator*=((Vector3T<float>*)this_00, 0.5);
                this_00->Normalize();
                math::Vector3T<float>::operator*=((Vector3T<float>*)this_00, local_38);
                if ((char)local_54 != '\0') {
                    fVar8 = (float)math::FRand(1.0);
                    math::Vector3T<float>::operator*=((Vector3T<float>*)this_00, fVar8);
                }
                bVar2 = math::operator==((Vector3T*)this_01, (Vector3T*)PTR_ZERO_100ee66e8);
                if (bVar2) {
                    this_01->SetXYZ(this_00);
                }
                param_2->field_0 = uVar6;
                local_48 = (ulong)local_48._4_4_ << 32;
                iVar5 = math::Rand(iVar4 * 2);
                local_34 = (float)((local_58 - iVar4) + iVar5);
                piVar7 = std::max<int>((int*)&local_48, (int*)&local_34);
                param_2->field_8 = (long)*piVar7;
            }
            local_48 = CONCAT44(local_48._4_4_, (float)(uVar6 - param_2->field_0) / (float)(ulong)param_2->field_8);
            local_34 = 0.0;
            local_60 = 1.0;
            fVar9 = math::Clamp<float>((float*)&local_48, &local_34, &local_60);
            fVar8 = local_3c;
            fVar9 = (float)pow(fVar9, local_3c);
            local_48 = math::Lerp<math::Vector3T<float>, float>((math*)&param_2->field_28,
                                                                (Vector3T*)&param_2->field_40, extraout_RDX, fVar9);
            local_40 = fVar8;
            (&param_2->field_16, (Vector3T*)&local_48)->SetXYZ();
            local_48 = CONCAT44(local_48._4_4_, 1065353216);
            fVar8 = (float)(&param_2->field_16)->Length();
            local_34 = 1.0 - fVar8 / local_38;
            fVar8 = math::Lerp<float, float>((float*)&local_48, &local_34, local_5c);
            param_2->field_52 = fVar8;
        }
    }

    // 0x10043c6b0, 336 bytes, placed by class name
    // StaticPointLight::operator==(StaticPointLight const&) const
    /* StaticPointLight::TEMPNAMEPLACEHOLDERVALUE(StaticPointLight const&) const
    */

    bool StaticPointLight::operator==(StaticPointLight* param_1) {
        bool bVar1;
        char cVar2;
        shared_ptr* extraout_RDX;

        if (((((((m_level == param_1->m_level) &&
                 (bVar1 = math::operator==((Vector3T*)&field_4, (Vector3T*)&param_1->field_4), bVar1)) &&
                (m_lightLevelsBelow == param_1->m_lightLevelsBelow)) &&
               (((m_lightsLevelsAbove == param_1->m_lightsLevelsAbove && (m_rGB == param_1->m_rGB)) &&
                 ((m_radius == param_1->m_radius &&
                   ((field_72 == param_1->field_72 && (m_lightTypeToLoad == param_1->m_lightTypeToLoad)))))))) &&
              ((bVar1 = operator==((jag*)m_lightType, (shared_ptr*)param_1->m_lightType, extraout_RDX),
                bVar1 && (((m_scriptId == param_1->m_scriptId && (field_132 == param_1->field_132)) &&
                           (m_phase == param_1->m_phase)))))) &&
             (((field_140 == param_1->field_140 && (field_144 == param_1->field_144)) &&
               (((m_flickerType == param_1->m_flickerType &&
                  ((field_60 == param_1->field_60 &&
                    (cVar2 = Array<unsigned int, eastl::allocator>::operator==(
                         (Array<unsigned int, eastl::allocator>*)&field_32, (Array*)&param_1->field_32),
                     cVar2 != '\0')))) &&
                 (m_intensity == param_1->m_intensity)))))) &&
            (((m_attenuationFalloff == param_1->m_attenuationFalloff &&
               (m_backlightRatio == param_1->m_backlightRatio)) &&
              (m_shadowsEnabled == param_1->m_shadowsEnabled)))) {
            return m_shadowStrength == param_1->m_shadowStrength;
        }
        return false;
    }

    // 0x10045fc70, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init
    void ___cxx_global_var_init() {
        new (&StaticPointLight::mPerlinNoise) Array<double, eastl::allocator>();
        ___cxa_atexit(PTR__Array_100ee67e8, &StaticPointLight::mPerlinNoise, 4294967296);
    }

} // namespace jag::game

// 0x10043be20, 16 bytes, placed by neighbouring functions
// ceil(float)
void ceil(float param_1) {
    _ceilf();
}

// 0x10043be30, 16 bytes, placed by neighbouring functions
// abs(float)
ulong abs(float param_1) {
    undefined4 in_XMM0_Db;

    return CONCAT44(in_XMM0_Db, param_1) & 9223372034707292159;
}

// 0x10043be40, 16 bytes, placed by neighbouring functions
// floor(float)
void floor(float param_1) {
    _floorf();
}

// 0x10043c190, 16 bytes, placed by neighbouring functions
// sin(float)
void sin(float param_1) {
    _sinf();
}
