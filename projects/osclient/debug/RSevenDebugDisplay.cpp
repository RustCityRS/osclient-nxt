// projects/osclient/debug/RSevenDebugDisplay.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "RSevenDebugDisplay.h"
#include "libs/hal/file/file.h"

namespace jag::oldscape {
    // 0x100061f90
    RSevenDebugDisplay::RSevenDebugDisplay()
        : DebugDisplay<RSevenDebugDisplay>(), field_64(1.0), field_68(1.0), field_72(1.0), field_76(1.0), field_80(1.0),
          field_84(0.8), field_88(0.8), field_92(40.0), field_96(1.0, 0.7, 0.5), field_112(0.025, 0.025, 0.025),
          field_124(1.0), field_128(1.0), field_424(0) {
        ReturnValue local_38;

        (&field_16)->assign("RSeven Settings");
        field_64 = 0.0;
        make_shared<FileRSevenDebugPresetProvider>(&local_38);
        (&field_432)->operator=(&local_38);
    }

    // 0x1000622a0
    void RSevenDebugDisplay::GetConfiguration(RSevenDebugConfiguration& rSevenDebugConfiguration) {
        SimpleScatteringParams* simpleScatteringParams;
        uint32_t extraout_XMM0_Da;
        uint32_t extraout_XMM0_Da_00;
        uint32_t extraout_XMM0_Db;
        map<eastl::string, RSevenDebugDisplay::RT7EffectToggle> local_50;

        auto pCVar7 = Client::Instance();
        uint8_t uVar5 = ((world*)pCVar7->field_19184.operator->())->GetShowDebugPointLight();
        rSevenDebugConfiguration.field_0 = uVar5;
        GetActiveEffectsList(&local_50);
        rSevenDebugConfiguration.field_8 = local_50;
        uint64_t uVar8 = GetFogParams();
        *(uint64_t*)&rSevenDebugConfiguration.field_60 = uVar8;
        *(uint32_t*)((long)&rSevenDebugConfiguration.field_64 + 4) = extraout_XMM0_Da;
        auto pOVar9 = OSRenderCore_LogicThread_RSeven::Instance();
        simpleScatteringParams = (SimpleScatteringParams*)pOVar9->GetLightScatteringParams();
        rSevenDebugConfiguration.field_72 = *simpleScatteringParams;
        rSevenDebugConfiguration.field_136 = jag::graphics::SSAOPass::m_SSAOMode;
        pOVar9 = OSRenderCore_LogicThread_RSeven::Instance();
        auto puVar10 = pOVar9->GetSSAOParams();
        uVar8 = puVar10[1];
        uint64_t uVar1 = puVar10[2];
        uint64_t uVar2 = puVar10[3];
        uint64_t uVar3 = puVar10[4];
        uint64_t uVar4 = puVar10[5];
        rSevenDebugConfiguration.field_140 = *puVar10;
        rSevenDebugConfiguration.field_148 = uVar8;
        *(uint64_t*)&rSevenDebugConfiguration.field_156 = uVar1;
        *(uint64_t*)((long)&rSevenDebugConfiguration.field_160 + 4) = uVar2;
        *(uint64_t*)((long)&rSevenDebugConfiguration.field_168 + 4) = uVar3;
        rSevenDebugConfiguration.field_180 = (char)uVar4;
        rSevenDebugConfiguration.field_181 = (int32_t)((unsigned long)uVar4 >> 8);
        rSevenDebugConfiguration.field_184 = (int)((unsigned long)uVar4 >> 32);
        uVar5 = rseven::MapRebuildHandler_LogicThread::GetBlendTerrain();
        rSevenDebugConfiguration.field_188 = uVar5;
        pOVar9 = OSRenderCore_LogicThread_RSeven::Instance();
        auto sunlightOptions = pOVar9->GetSunlightOptions();
        rSevenDebugConfiguration.field_192 = *sunlightOptions;
        uVar8 = GetTonemappingParams();
        *(uint64_t*)(rSevenDebugConfiguration.field_192 + 60) = uVar8;
        *(unsigned long*)((long)&rSevenDebugConfiguration.field_256 + 4) =
            (((uint64_t)extraout_XMM0_Db << 32) | (uint32_t)extraout_XMM0_Da_00);
        rSevenDebugConfiguration.field_272 = field_64;
        pCVar7 = Client::Instance();
        uint32_t uVar6 = ((DeviceOptions*)pCVar7->field_8376.operator->())->GetAntialiasingSampleLevel();
        *(uint32_t*)&rSevenDebugConfiguration.field_352 = uVar6;
    }

    // 0x1000623f0
    RSevenDebugDisplay* RSevenDebugDisplay::GetActiveEffectsList() {
        pair<eastl::string const, RSevenDebugDisplay::RT7EffectToggle>* arg1;
        ReturnValue local_88;
        uint8_t local_58;
        bool local_31;

        new (this) eastl::map(local_78);
        auto this_00 = OSRenderCore_LogicThread_RSeven::Instance();
        auto this_01 = this_00->GetEffectList();
        auto this_02 = GetEffectToggles((RSevenDebugDisplay*)this_00);
        uint64_t local_50 = this_02->begin();
        uint64_t local_48 = this_02->end();
        while (true) {
            if (local_50 != local_48 == '\0')
                break;
            arg1 = (pair<eastl::string const, RSevenDebugDisplay::RT7EffectToggle>*)*local_50;
            local_78 = eastl::pair(*arg1);
            local_31 = (bool)this_01->Contains((unsigned int)local_58);
            local_88 = emplace<eastl::stringconst&, bool>(local_78, local_31);
            ++local_50;
        }
        return this;
    }

    // 0x100062550
    unsigned long RSevenDebugDisplay::GetFogParams() {
        Fog* this_00 = Client::Instance()->GetFog();
        unsigned int uVar1 = this_00->Enabled();
        unsigned int uVar2 = this_00->FogIntensity();
        this_00->FogDistance();
        return (unsigned long)uVar1 & 255 | (unsigned long)uVar2 << 32;
    }

    // 0x1000625c0
    unsigned long RSevenDebugDisplay::GetTonemappingParams() {
        long lVar3 = OSRenderCore_LogicThread_RSeven::Instance()->GetPostProcessConfig();
        uint8_t bVar1 = *(uint8_t*)(lVar3 + 520);
        unsigned int* puVar4 = (unsigned int*)((lVar3 + 72))->second();
        unsigned int uVar2 = *puVar4;
        ((lVar3 + 40))->second();
        ((lVar3 + 8))->second();
        return (unsigned long)uVar2 << 32 | (unsigned long)bVar1;
    }

    // 0x100062670
    void RSevenDebugDisplay::SetConfiguration(const RSevenDebugConfiguration& rSevenDebugConfiguration) {
        auto pCVar6 = Client::Instance();
        auto pwVar7 = pCVar6->field_19184.operator->();
        pwVar7->SetShowDebugPointLight((bool)rSevenDebugConfiguration.field_0);
        RSevenDebugDisplay* pRVar10 = this;
        SetActiveEffects(rSevenDebugConfiguration.field_8);
        SetFogParams(pRVar10, (DistanceFogParams*)&rSevenDebugConfiguration.field_60);
        auto pOVar8 = OSRenderCore_LogicThread_RSeven::Instance();
        auto this_00 = pOVar8->GetLightScatteringParamsMutable();
        *this_00 = rSevenDebugConfiguration.field_72;
        jag::graphics::SSAOPass::m_SSAOMode = rSevenDebugConfiguration.field_136;
        pOVar8 = OSRenderCore_LogicThread_RSeven::Instance();
        auto puVar9 = pOVar8->GetSSAOParams();
        uint64_t uVar1 = rSevenDebugConfiguration.field_148;
        uint64_t uVar2 = *(uint64_t*)&rSevenDebugConfiguration.field_156;
        uint64_t uVar3 = *(uint64_t*)((long)&rSevenDebugConfiguration.field_160 + 4);
        uint64_t uVar4 = *(uint64_t*)((long)&rSevenDebugConfiguration.field_168 + 4);
        uint64_t uVar5 = *(uint64_t*)&rSevenDebugConfiguration.field_180;
        *puVar9 = rSevenDebugConfiguration.field_140;
        puVar9[1] = uVar1;
        puVar9[2] = uVar2;
        puVar9[3] = uVar3;
        puVar9[4] = uVar4;
        puVar9[5] = uVar5;
        rseven::MapRebuildHandler_LogicThread::SetBlendTerrain((bool)rSevenDebugConfiguration.field_188);
        pOVar8 = OSRenderCore_LogicThread_RSeven::Instance();
        auto this_01 = pOVar8->GetSunlightOptions();
        *this_01 = rSevenDebugConfiguration.field_192;
        pRVar10 = this;
        SetActiveEffects(rSevenDebugConfiguration.field_8);
        SetTonemappingParams(pRVar10, (TonemappingParams*)(rSevenDebugConfiguration.field_192 + 60));
        pCVar6 = Client::Instance();
        pwVar7 = (world*)pCVar6->field_19184.operator->();
        pwVar7->SetShowDebugPointLight((bool)rSevenDebugConfiguration.field_0);
        pCVar6 = Client::Instance();
        ((DeviceOptions*)pCVar6->field_8376.operator->())
            ->SetAntialiasingSampleLevel(*(int*)&rSevenDebugConfiguration.field_352);
        field_64 = rSevenDebugConfiguration.field_272;
        pOVar8 = OSRenderCore_LogicThread_RSeven::Instance();
        auto this_03 = pOVar8->GetVolumetricScatteringParamsMutable();
        *this_03 = field_64;
        pCVar6 = Client::Instance();
        pCVar6->RequestMapRebuild();
    }

    // 0x1000627d0
    void RSevenDebugDisplay::SetActiveEffects(const eastl::map<eastl::string, bool>& arg1) {
        uint8_t bVar1;
        pair<eastl::string const, RSevenDebugDisplay::RT7EffectToggle>* arg1_00;
        long lVar3;
        hash_node<eastl::string, false> local_80;
        uint8_t local_60;
        uint64_t local_58;
        uint64_t local_38;

        auto this_00 = OSRenderCore_LogicThread_RSeven::Instance();
        auto local_50 = this_00->GetEffectListMutable();
        auto this_01 = GetEffectToggles((RSevenDebugDisplay*)this_00);
        uint64_t local_48 = this_01->begin();
        uint64_t local_40 = this_01->end();
        bool cVar2 = local_48 != local_40;
        if (cVar2) {
            do {
                arg1_00 = (pair<eastl::string const, RSevenDebugDisplay::RT7EffectToggle>*)*local_48;
                local_80 = eastl::pair(*arg1_00);
                local_38 = arg1.find(local_80);
                local_58 = arg1.end();
                cVar2 = local_38 != local_58;
                bVar1 = local_60;
                if (cVar2) {
                    lVar3 = *local_38;
                    local_50->Set((unsigned int)bVar1, *(bool*)(lVar3 + 32));
                }
                ++local_48;
                cVar2 = local_48 != local_40;
            } while (cVar2);
        }
    }

    // 0x100062900
    void RSevenDebugDisplay::SetFogParams(const DistanceFogParams& distanceFogParams) {
        auto this_00 = Client::Instance();
        auto this_01 = this_00->GetFog();
        unsigned long long arg2 = FrameTime::GetCurrentTimeMS();
        this_01->SetEnabled((bool)*distanceFogParams, arg2);
        this_00->SetFogIntensity(*(float*)(distanceFogParams + 4));
        this_00->SetFogDistance(*(float*)(distanceFogParams + 8));
    }

    // 0x100062960
    void RSevenDebugDisplay::SetTonemappingParams(const TonemappingParams& tonemappingParams) {
        long lVar1 = OSRenderCore_LogicThread_RSeven::Instance()->GetPostProcessConfig();
        *(uint8_t*)(lVar1 + 520) = tonemappingParams.field_0;
        (*((lVar1 + 72))) = tonemappingParams.field_4;
        (*((lVar1 + 40))) = (*((float*)((long)&tonemappingParams.field_4 + 4)));
        (*((lVar1 + 8))) = tonemappingParams.field_12;
    }

    // 0x1000629f0
    void RSevenDebugDisplay::DrawDebug() {
        Point<float> local_20;

        if (field_48[0] != '\0') {
            local_20 = jag::math::Point(475.0, 550.0);
            ImGui::SetNextWindowSize(local_20, 4);
        }
        DrawDebug();
    }

    // 0x100062a90
    void RSevenDebugDisplay::DrawDisplay() {
        if (ImGui::CollapsingHeader("Controls", 0)) {
            DrawRSevenToggle();
            DrawFreezeToggle();
        }
        if (ImGui::CollapsingHeader("Distance fog", 0)) {
            DrawFogControls();
        }
        if (ImGui::CollapsingHeader("Effects", 0)) {
            DrawEffectToggles();
            DrawTerrainBlendToggle();
            DrawDebugPointLightToggle();
        }
        char* pcVar2 = "Anti-Aliasing";
        if (ImGui::CollapsingHeader("Anti-Aliasing", 0)) {
            DrawAntiAliasingControls((RSevenDebugDisplay*)pcVar2);
        }
        if (ImGui::CollapsingHeader("Light scattering", 0)) {
            DrawLightScatteringControls();
        }
        if (ImGui::CollapsingHeader("Lighting", 0)) {
            ImGui::TextUnformatted("Ambient", nullptr);
            ImGui::Separator();
            DrawSunlightAmbientColorPicker();
            DrawSunlightAmbientIntensityControls();
            ImGui::TextUnformatted("Sun", nullptr);
            ImGui::Separator();
            DrawSunlightColorPicker();
            DrawSunlightDirectionControls();
            DrawSunlightIntensityControls();
            pcVar2 = "Shadows";
            ImGui::TextUnformatted("Shadows", nullptr);
            ImGui::Separator();
            DrawShadowQualityPicker((RSevenDebugDisplay*)pcVar2);
            DrawShadowStrengthControls();
        }
        if (ImGui::CollapsingHeader("SSAO", 0)) {
            DrawSSAOControls();
        }
        if (ImGui::CollapsingHeader("Tonemapping", 0)) {
            DrawTonemappingControls();
        }
        if (ImGui::CollapsingHeader("Volumetrics", 0)) {
            DrawVolumetricScatteringControls();
        }
        if (ImGui::CollapsingHeader("Presets", 0)) {
            DrawPresetControls();
        }
    }

    // 0x100062c00
    void RSevenDebugDisplay::DrawRSevenToggle() {
        auto pCVar2 = Client::Instance();
        bool local_9 = (bool)pCVar2->GetUsingRSeven();
        if (ImGui::Checkbox("Enable RT7 renderer", &local_9) != '\0') {
            pCVar2 = Client::Instance();
            pCVar2->SetUsingRSeven(local_9, false);
        }
    }

    // 0x100062c50
    void RSevenDebugDisplay::DrawFreezeToggle() {
        uint64_t in_RAX;

        uint64_t uStack_18 = in_RAX;
        auto client = Client::Instance();
        uStack_18._7_1_ = client->Frozen();
        if (ImGui::Checkbox("Freeze world", (bool*)((long)&uStack_18 + 7)) != '\0') {
            client->SetFrozen((bool)uStack_18._7_1_);
        }
    }

    // 0x100062c90
    void RSevenDebugDisplay::DrawFogControls() {
        auto client = Client::Instance();
        auto this_00 = client->GetFog();
        bool local_21 = (bool)this_00->Enabled();
        ImGui::Checkbox("Enabled", &local_21);
        bool arg1 = local_21;
        unsigned long long arg2 = FrameTime::GetCurrentTimeMS();
        this_00->SetEnabled(arg1, arg2);
        float local_2c = (float)this_00->FogDistance();
        if (ImGui::DragFloat("Distance", &local_2c, 0.1, 0.0, 64.0, "%.3f", 0)) {
            client->SetFogDistance(local_2c);
        }
        float local_28 = (float)this_00->FogIntensity();
        if (ImGui::DragFloat("Intensity", &local_28, 0.001, 0.0, 1.0, "%.3f", 0)) {
            client->SetFogIntensity(local_28);
        }
    }

    // 0x100062d80
    void RSevenDebugDisplay::DrawEffectToggles() {
        pair<eastl::string const, RSevenDebugDisplay::RT7EffectToggle>* arg1;
        RSevenDebugDisplay* this_01;
        uint8_t local_60[32];
        RT7EffectToggle local_40;
        eastl local_38;
        obj_iterator local_30;

        auto this_00 = GetEffectToggles();
        &local_38 = (eastl[8])this_00->begin();
        &local_30 = (obj_iterator[8])this_00->end();
        bool cVar1 = local_38 != local_30;
        if (cVar1) {
            do {
                arg1 = (pair<eastl::string const, RSevenDebugDisplay::RT7EffectToggle>*)*local_38;
                this_01 = (RSevenDebugDisplay*)local_60;
                new (local_60) eastl::pair(*arg1);
                DrawEffectToggle(this_01, (eastl::string*)local_60, &local_40);
                ++local_38;
                cVar1 = local_38 != local_30;
            } while (cVar1);
        }
    }

    // 0x100062e30
    void RSevenDebugDisplay::DrawTerrainBlendToggle() {
        bool local_9 = (bool)rseven::MapRebuildHandler_LogicThread::GetBlendTerrain();
        if (ImGui::Checkbox("Terrain blending", &local_9) != '\0') {
            rseven::MapRebuildHandler_LogicThread::SetBlendTerrain(local_9);
            Client::Instance()->RequestMapRebuild();
        }
    }

    // 0x100062e70
    void RSevenDebugDisplay::DrawDebugPointLightToggle() {
        auto pCVar2 = Client::Instance();
        auto pwVar3 = pCVar2->field_19184.operator->();
        bool local_9 = (bool)pwVar3->GetShowDebugPointLight();
        if (ImGui::Checkbox("Demo point light", &local_9) != '\0') {
            pCVar2 = Client::Instance();
            pwVar3 = (world*)pCVar2->field_19184.operator->();
            pwVar3->SetShowDebugPointLight(local_9);
        }
    }

    // 0x100062ed0
    void RSevenDebugDisplay::DrawAntiAliasingControls() {
        char* pcVar4;
        char* str2;
        long lVar5;
        int iVar6;
        nullopt_t in_ESI;
        vector<char> local_78;
        ReturnValue local_58;

        auto pCVar2 = Client::Instance();
        auto pDVar3 = pCVar2->field_8376.operator->();
        int local_34 = pDVar3->GetAntialiasingSampleLevel();
        int local_38 = pDVar3->GetMaxAntialisingLevel();
        if (DrawAntiAliasingControls()::levelTitles == '\0') {
            iVar6 = ___cxa_guard_acquire(&DrawAntiAliasingControls()::levelTitles);
            if (iVar6 != 0) {
                new ((optional<eastl::vector<char>>*)&DrawAntiAliasingControls()::levelTitles)
                    eastl::optional<eastl::vector<char>>(in_ESI);
                ___cxa_atexit(PTR__optional_100ee6e18, &DrawAntiAliasingControls()::levelTitles, 4294967296);
                ___cxa_guard_release(&DrawAntiAliasingControls()::levelTitles);
            }
        }
        if (((MainLoopFrameTimer*)&DrawAntiAliasingControls()::levelTitles)->GetFastUpdateLoopEnabled() == '\0') {
            local_78 = eastl::vector<char>();
            pcVar4 = (char*)local_78.end();
            local_58[0]._0_4_ = 6710863;
            local_78.insert(pcVar4, &local_58);
            if (1 < local_38) {
                iVar6 = 1;
                do {
                    pcVar4 = (char*)local_78.end();
                    local_58[0]._0_4_ = 1094800205;
                    local_58[0]._4_1_ = 120;
                    local_78.insert(pcVar4, &local_58);
                    local_58 = eastl::to_string(1 << ((uint8_t)iVar6 & 31));
                    pcVar4 = (char*)local_78.end();
                    str2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    lVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::end();
                    local_78.insert<char*>(pcVar4, str2, (lVar5 + 1));
                    iVar6 = iVar6 + 1;
                } while (local_38 != iVar6);
            }
            local_58[0]._0_4_ = local_58[0]._0_4_ & 4294967040;
            local_78.push_back(local_58);
            (&DrawAntiAliasingControls()::levelTitles)->operator=(&local_78);
        }
        Layout* this_00 = (Layout*)((optional<eastl::vector<char>>*)&DrawAntiAliasingControls()::levelTitles)->value();
        pcVar4 = (char*)this_00->HeapBeginPtr();
        ImGui::Combo("Sample Level", &local_34, pcVar4, -1);
        pCVar2 = Client::Instance();
        pDVar3 = (DeviceOptions*)pCVar2->field_8376.operator->();
        iVar6 = pDVar3->GetAntialiasingSampleLevel();
        if (iVar6 != local_34) {
            pCVar2 = Client::Instance();
            pDVar3 = (DeviceOptions*)pCVar2->field_8376.operator->();
            pDVar3->SetAntialiasingSampleLevel(local_34);
        }
    }

    // 0x100063100
    void RSevenDebugDisplay::DrawLightScatteringControls() {
        SimpleScatteringParams* simpleScatteringParams;
        uint8_t local_78[16];
        uint64_t local_58[2];
        Layout local_48;

        auto pOVar5 = OSRenderCore_LogicThread_RSeven::Instance();
        auto puVar6 = pOVar5->GetLightScatteringParams();
        local_78._0_8_ = *puVar6;
        local_78._8_8_ = puVar6[1];
        uint64_t local_68 = puVar6[2];
        uint64_t uStack_60 = puVar6[3];
        local_58[0] = puVar6[4];
        local_58[1] = puVar6[5];
        &local_48 = (Layout[8])puVar6[6];
        uint64_t uStack_40 = puVar6[7];
        auto pfVar7 = local_58->SSOBeginPtr();
        char local_31 = ImGui::ColorEdit3("Scattering tint", pfVar7, 0);
        pfVar7 = (float*)local_68.SSOBeginPtr();
        bool cVar1 = ImGui::ColorEdit3("Inscattering amount", pfVar7, 0);
        pfVar7 = (float*)local_78->SSOBeginPtr();
        bool cVar2 = ImGui::ColorEdit3("Outscattering amount", pfVar7, 0);
        pfVar7 = (float*)local_48.SSOBeginPtr();
        bool cVar3 = ImGui::DragFloat("Density", pfVar7, 0.0001, 0.0, 1.0, "%.3f", 0);
        pfVar7 = (float*)local_48.y();
        bool cVar4 = ImGui::DragFloat("Start distance", pfVar7, 0.5, 0.0, 17500.0, "%.3f", 0);
        if ((((local_31 != '\0') || (cVar1)) || (cVar2)) || ((cVar3 || (cVar4)))) {
            pOVar5 = OSRenderCore_LogicThread_RSeven::Instance();
            simpleScatteringParams = pOVar5->GetLightScatteringParamsMutable();
            *simpleScatteringParams = *local_78;
        }
    }

    // 0x100063250
    void RSevenDebugDisplay::DrawSunlightAmbientColorPicker() {
        uint64_t local_18[2];

        auto pOVar1 = OSRenderCore_LogicThread_RSeven::Instance();
        local_18[0] = ((SunlightOptions*)pOVar1->GetSunlightOptions())->GetAmbientColour();
        ImGui::ColorEdit3("Ambient Color", local_18, 0);
        pOVar1 = OSRenderCore_LogicThread_RSeven::Instance();
        jag::graphics::SunlightOptions::SetAmbientColour((Vector3T<float>*)pOVar1->GetSunlightOptions());
    }

    // 0x1000632b0
    void RSevenDebugDisplay::DrawSunlightAmbientIntensityControls() {
        auto pOVar1 = OSRenderCore_LogicThread_RSeven::Instance();
        auto pSVar2 = pOVar1->GetSunlightOptions();
        float local_c = (float)pSVar2->GetAmbientIntensity();
        ImGui::DragFloat("Ambient Intensity", &local_c, 0.01, 0.0, 1.0, "%.2f", 0);
        pOVar1 = OSRenderCore_LogicThread_RSeven::Instance();
        pSVar2 = (SunlightOptions*)pOVar1->GetSunlightOptions();
        pSVar2->SetAmbientIntensity(local_c);
    }

    // 0x100063320
    void RSevenDebugDisplay::DrawSunlightColorPicker() {
        uint64_t local_18[2];

        auto pOVar1 = OSRenderCore_LogicThread_RSeven::Instance();
        local_18[0] = ((DebugEllipsoid<DebugDataBasic>*)pOVar1->GetSunlightOptions())->GetCentrePos();
        ImGui::ColorEdit3("Sunlight Color", local_18, 0);
        pOVar1 = OSRenderCore_LogicThread_RSeven::Instance();
        jag::graphics::SunlightOptions::SetSunColour((Vector3T<float>*)pOVar1->GetSunlightOptions());
    }

    // 0x100063380
    void RSevenDebugDisplay::DrawSunlightDirectionControls() {
        uint64_t in_RAX;
        float local_18;

        float local_14 = (float)((unsigned long)in_RAX >> 32);
        auto pOVar1 = OSRenderCore_LogicThread_RSeven::Instance();
        uint32_t uVar3 = ((EntityHighlightGlobalState*)pOVar1->GetSunlightOptions())->GetOutlineRadiusAdjustment();
        _local_18 = (((uint64_t)local_14 << 32) | (uint32_t)uVar3);
        pOVar1 = OSRenderCore_LogicThread_RSeven::Instance();
        auto this_00 = pOVar1->GetSunlightOptions();
        float fVar4 = (float)this_00->GetAmbientLight();
        fVar4 = (float)jag::math::Rad2Deg(fVar4);
        local_14 = fVar4;
        ImGui::DragFloat("Sun Height", &local_18, 0.01, 0.0, 1.0, "%.2f", 0);
        ImGui::DragFloat("Sun Angle", &local_14, 1.0, 0.0, 360.0, "%.f", 0);
        pOVar1 = OSRenderCore_LogicThread_RSeven::Instance();
        auto pSVar2 = pOVar1->GetSunlightOptions();
        pSVar2->SetSunElevation(local_18);
        pOVar1 = OSRenderCore_LogicThread_RSeven::Instance();
        pSVar2 = (SunlightOptions*)pOVar1->GetSunlightOptions();
        fVar4 = (float)jag::math::Deg2Rad(local_14);
        pSVar2->SetSunAngle(fVar4);
    }

    // 0x100063460
    void RSevenDebugDisplay::DrawSunlightIntensityControls() {
        auto pOVar1 = OSRenderCore_LogicThread_RSeven::Instance();
        auto envLightingSettings = pOVar1->GetSunlightOptions();
        float local_c = (float)envLightingSettings->GetEnvMapIrradianceScale();
        ImGui::DragFloat("Sunlight Intensity", &local_c, 0.01, 0.0, 1.0, "%.2f", 0);
        pOVar1 = OSRenderCore_LogicThread_RSeven::Instance();
        ((SunlightOptions*)pOVar1->GetSunlightOptions())->SetSunIntensity(local_c);
    }

    // 0x1000634d0
    void RSevenDebugDisplay::DrawShadowQualityPicker() {
        uint64_t* puVar7;
        uint64_t* puVar8;
        char* pcVar9;
        long lVar10;
        nullopt_t in_ESI;
        ReturnValue local_98;
        eastl::string local_88;
        vector<char> local_60;
        char* local_40;

        auto pOVar5 = OSRenderCore_LogicThread_RSeven::Instance();
        auto pMVar6 = pOVar5->GetSunlightOptions();
        GraphicsQuality local_34 = pMVar6->GetSpriteID();
        if (DrawShadowQualityPicker()::menuOptions == '\0') {
            if (___cxa_guard_acquire(&DrawShadowQualityPicker()::menuOptions) != 0) {
                new ((optional<eastl::vector<char>>*)&DrawShadowQualityPicker()::menuOptions)
                    eastl::optional<eastl::vector<char>>(in_ESI);
                ___cxa_atexit(PTR__optional_100ee6e18, &DrawShadowQualityPicker()::menuOptions, 4294967296);
                ___cxa_guard_release(&DrawShadowQualityPicker()::menuOptions);
            }
        }
        if (((MainLoopFrameTimer*)&DrawShadowQualityPicker()::menuOptions)->GetFastUpdateLoopEnabled() == '\0') {
            GetEnumValueNames<jag::graphics::GraphicsQuality>(&local_98);
            local_60 = eastl::vector<char>();
            puVar7 = (uint64_t*)local_98.end();
            puVar8 = (uint64_t*)local_98.end();
            if (puVar7 != puVar8) {
                do {
                    pcVar9 = (char*)*puVar7;
                    local_88 = eastl::string(pcVar9);
                    local_40 = (char*)local_60.end();
                    pcVar9 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    lVar10 = eastl::basic_string<char, BucketAllocatorEASTL>::end();
                    local_60.insert<char*>(local_40, pcVar9, (lVar10 + 1));
                    puVar7 = puVar7 + 1;
                } while (puVar7 != puVar8);
            }
            local_88[0] = (eastl::string)0;
            local_60.push_back(local_88);
            (&DrawShadowQualityPicker()::menuOptions)->operator=(&local_60);
        }
        Layout* this_00 = (Layout*)((optional<eastl::vector<char>>*)&DrawShadowQualityPicker()::menuOptions)->value();
        pcVar9 = (char*)this_00->HeapBeginPtr();
        ImGui::Combo("Shadow Quality", &local_34, pcVar9, -1);
        GraphicsQuality GVar1 = local_34;
        pOVar5 = OSRenderCore_LogicThread_RSeven::Instance();
        pMVar6 = (MSIType*)pOVar5->GetSunlightOptions();
        auto GVar3 = pMVar6->GetSpriteID();
        if (GVar1 != GVar3) {
            pOVar5 = OSRenderCore_LogicThread_RSeven::Instance();
            ((SunlightOptions*)pOVar5->GetSunlightOptions())->SetShadowQuality(local_34);
        }
    }

    // 0x1000636e0
    void RSevenDebugDisplay::DrawShadowStrengthControls() {
        auto pOVar1 = OSRenderCore_LogicThread_RSeven::Instance();
        auto histogram = pOVar1->GetSunlightOptions();
        float local_c = (float)histogram->GetMean();
        ImGui::DragFloat("Shadow Intensity", &local_c, 0.01, 0.0, 1.0, "%.2f", 0);
        pOVar1 = OSRenderCore_LogicThread_RSeven::Instance();
        ((SunlightOptions*)pOVar1->GetSunlightOptions())->SetShadowStrength(local_c);
    }

    // 0x100063750
    void RSevenDebugDisplay::DrawSSAOControls() {
        int local_1c = jag::graphics::SSAOPass::m_SSAOMode - 1;
        ImGui::Combo("Mode", &local_1c, "Alchemy", -1);
        jag::graphics::SSAOPass::m_SSAOMode = local_1c + 1;
        auto oSRenderCore_LogicThread_RSeven = OSRenderCore_LogicThread_RSeven::Instance();
        auto arg2 = oSRenderCore_LogicThread_RSeven->GetSSAOParams();
        if (jag::graphics::SSAOPass::m_SSAOMode == 1) {
            ImGui::DragFloat("Radius", arg2 + 7, 1.0, 0.0, 128.0, "%.3f", 0);
            ImGui::DragFloat("Bias", arg2 + 8, 0.01, 0.0, 1.0, "%.3f", 0);
            ImGui::DragFloat("Sigma", arg2 + 9, 0.1, 0.0, 10.0, "%.3f", 0);
        } else {
            ImGui::DragFloat("Radius", arg2, 1.0, 0.0, 128.0, "%.3f", 0);
            ImGui::DragFloat("Bias", arg2 + 1, 0.01, 0.0, 1.0, "%.3f", 0);
            ImGui::DragFloat("Sigma", arg2 + 5, 0.1, 0.0, 10.0, "%.3f", 0);
            ImGui::Checkbox("Blur", (arg2 + 10));
        }
    }

    // 0x1000638d0
    void RSevenDebugDisplay::DrawTonemappingControls() {
        unsigned long long arg3;

        long lVar4 = OSRenderCore_LogicThread_RSeven::Instance()->GetPostProcessConfig();
        ImGui::Checkbox("Enabled", (lVar4 + 520));
        float* pfVar5 = (float*)((lVar4 + 8))->second();
        float local_3c = *pfVar5;
        pfVar5 = (float*)((lVar4 + 40))->second();
        float local_38 = *pfVar5;
        pfVar5 = (float*)((lVar4 + 72))->second();
        float local_34 = *pfVar5;
        bool cVar1 = ImGui::DragFloat("Exposure", &local_34, 0.005, 0.0, 1.0, "%.3f", 0);
        bool cVar2 = ImGui::DragFloat("Min black luminance", &local_3c, 0.005, 0.0, 1.0, "%.3f", 0);
        bool cVar3 = ImGui::DragFloat("Max white luminance", &local_38, 0.005, 0.0, 1.0, "%.3f", 0);
        if (((cVar1) || (cVar2)) || (cVar3)) {
            arg3 = FrameTime::GetCurrentTimeMS();
            ((lVar4 + 8))->SetValue(local_3c, 600, arg3);
            ((lVar4 + 40))->SetValue(local_38, 600, arg3);
            ((lVar4 + 72))->SetValue(local_34, 600, arg3);
        }
    }

    // 0x100063a30
    void RSevenDebugDisplay::DrawVolumetricScatteringControls() {
        VolumetricScatteringParams* this_01;

        bool cVar1 = ImGui::DragFloat("Bilateral blur depth falloff", &field_92, 1.0, 0.0, 100.0, "%.3f", 0);
        bool cVar2 = ImGui::DragFloat("Density", &field_64, 0.05, 0.0, 10.0, "%.3f", 0);
        bool cVar3 = ImGui::DragFloat("Exaggeration", &field_80, 0.05, 0.0, 10.0, "%.3f", 0);
        bool cVar4 = ImGui::DragFloat("G", &field_84, 0.01, -1.0, 1.0, "%.3f", 0);
        bool cVar5 = ImGui::DragFloat("Inscattering", &field_68, 0.05, 0.0, 10.0, "%.3f", 0);
        bool cVar6 = ImGui::ColorEdit3("Lit fog colour", field_96, 0);
        bool cVar7 = ImGui::DragFloat("Lit fog intensity", &field_124, 0.05, 0.0, 10.0, "%.3f", 0);
        bool cVar8 = ImGui::DragFloat("Outscattering", &field_72, 0.05, 0.0, 10.0, "%.3f", 0);
        bool cVar9 = ImGui::DragFloat("Sky G", &field_88, 0.01, -1.0, 1.0, "%.3f", 0);
        bool cVar10 = ImGui::DragFloat("Skybox density multiplier", &field_76, 0.05, 0.0, 10.0, "%.3f", 0);
        bool cVar11 = ImGui::ColorEdit3("Unlit fog colour", &field_112, 0);
        bool cVar12 = ImGui::DragFloat("Unlit fog intensity", &field_128, 0.05, 0.0, 10.0, "%.3f", 0);
        if (((((cVar1) || (cVar2)) || (cVar3)) ||
             ((((cVar4 || (cVar5)) || ((cVar6 || ((cVar7 || (cVar8)))))) || (cVar9)))) ||
            (((cVar10 || (cVar11)) || (cVar12)))) {
            this_01 = OSRenderCore_LogicThread_RSeven::Instance()->GetVolumetricScatteringParamsMutable();
            *this_01 = field_64;
        }
    }

    // 0x100063ca0
    void RSevenDebugDisplay::DrawPresetControls() {
        auto plVar1 = field_432.operator->();
        unsigned long local_20 = (**(void (**)(...))(*plVar1 + 8))(plVar1)-1;
        auto puVar3 = std::clamp<unsigned long>(field_424, 0, local_20);
        field_424 = *puVar3;
        DrawPresetSelectionBox();
        DrawPresetManipulationButtons();
        DrawPresetSaveInterface();
    }

    // 0x100063d20
    void RSevenDebugDisplay::DrawEffectToggle(const eastl::string& str,
                                              const RSevenDebugDisplay::RT7EffectToggle& rt7EffectToggle) {
        auto pOVar2 = OSRenderCore_LogicThread_RSeven::Instance();
        auto pEVar3 = pOVar2->GetEffectList();
        bool local_19 = (bool)pEVar3->Contains((unsigned int)(uint8_t)*rt7EffectToggle);
        char* str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        if (ImGui::Checkbox(str_00, &local_19) != '\0') {
            pOVar2 = OSRenderCore_LogicThread_RSeven::Instance();
            pEVar3 = pOVar2->GetEffectListMutable();
            pEVar3->Set((unsigned int)(uint8_t)*rt7EffectToggle, local_19);
            if (rt7EffectToggle[1] != (RT7EffectToggle)0) {
                Client::Instance()->RequestMapRebuild();
            }
        }
    }

    // 0x100063da0
    void RSevenDebugDisplay::GetEffectToggles() {
        long lVar3;
        map<eastl::string, RSevenDebugDisplay::RT7EffectToggle> local_190;
        ReturnValue local_160;
        uint16_t local_150[4];
        uint16_t local_148[4];
        uint16_t local_140[4];
        uint16_t local_138[4];
        uint16_t local_130[4];
        uint16_t local_128[4];
        allocator local_120;
        pair<eastl::stringconst, RSevenDebugDisplay::RT7EffectToggle> local_118;
        pair<eastl::stringconst, RSevenDebugDisplay::RT7EffectToggle> local_f0;
        pair<eastl::stringconst, RSevenDebugDisplay::RT7EffectToggle> local_c8;
        pair<eastl::stringconst, RSevenDebugDisplay::RT7EffectToggle> local_a0;
        pair<eastl::stringconst, RSevenDebugDisplay::RT7EffectToggle> local_78;
        pair<eastl::stringconst, RSevenDebugDisplay::RT7EffectToggle> local_50;

        if (GetEffectToggles()::toggles == '\0') {
            this = (RSevenDebugDisplay*)&GetEffectToggles()::toggles;
            if (___cxa_guard_acquire() != 0) {
                ___cxa_atexit(
                    std::unique_ptr<eastl::map<eastl::string, RSevenDebugDisplay::RT7EffectToggle>>::~unique_ptr,
                    &GetEffectToggles()::toggles, 4294967296);
                this = (RSevenDebugDisplay*)&GetEffectToggles()::toggles;
                ___cxa_guard_release();
            }
        }
        if (operator_cast_to_bool() == '\0') {
            local_150[0] = 39;
            local_118.pair<char const(&)[22], void>("Discretized luminance", *local_150);
            local_148[0] = 48;
            local_f0.pair<char const(&)[17], void>("Light scattering", *local_148);
            local_140[0] = 299;
            local_c8.pair<char const(&)[19], void>("Per-model lighting", *local_140);
            local_138[0] = 110;
            local_a0.pair<char const(&)[5], void>("SSAO", *local_138);
            local_130[0] = 30;
            local_78.pair<char const(&)[12], void>("Sun shadows", *local_130);
            local_128[0] = 94;
            local_50.pair<char const(&)[12], void>("Transitions", *local_128);
            local_190 = eastl::map(&local_118, *6, local_120);
            local_160 = std::make_unique<eastl::map<eastl::string, RSevenDebugDisplay::RT7EffectToggle>,
                                         eastl::map<eastl::string, RSevenDebugDisplay::RT7EffectToggle>>(*&local_190);
            local_160 = *&local_190;
            lVar3 = 200;
            do {
                this = (RSevenDebugDisplay*)(&local_118 + lVar3);
                ~hash_node();
                lVar3 = lVar3 - 40;
            } while (lVar3 != -40);
        }
        **this;
    }

    // 0x1000644b0
    void RSevenDebugDisplay::DrawPresetSelectionBox() {
        ImGui* this_01;
        unsigned long uVar2;
        unsigned long uVar5;
        char* str2;
        ImVec2* in_R8;
        Point<float> local_40;
        char local_31;

        uint8_t* this_00 = &field_432;
        long* plVar4 = (long*)(*this_00).operator->();
        long lVar1 = (**(void (**)(...))(*plVar4 + 8))(plVar4);
        if (lVar1 == 0) {
            str2 = "No presets";
        } else {
            plVar4 = (long*)(*this_00).operator->();
            str2 = (char*)(**(void (**)(...))(*plVar4 + 16))(plVar4, field_424);
        }
        if (ImGui::BeginCombo("Preset", str2, 0)) {
            plVar4 = (long*)(*this_00).operator->();
            lVar1 = (**(void (**)(...))(*plVar4 + 8))(plVar4);
            if (lVar1 != 0) {
                uVar5 = 0;
                do {
                    local_31 = uVar5 == field_424;
                    plVar4 = (long*)(*this_00).operator->();
                    this_01 = (ImGui*)(**(void (**)(...))(*plVar4 + 16))(plVar4, uVar5);
                    local_40 = jag::math::Point(0.0, 0.0);
                    if (this_01->Selectable(&local_31, nullptr, (int)&local_40, *in_R8)) {
                        field_424 = uVar5;
                    }
                    uVar5 = uVar5 + 1;
                    plVar4 = (long*)(*this_00).operator->();
                    uVar2 = (**(void (**)(...))(*plVar4 + 8))(plVar4);
                } while (uVar5 < uVar2);
            }
            ImGui::EndCombo();
        }
    }

    // 0x1000645c0
    void RSevenDebugDisplay::DrawPresetManipulationButtons() {
        RSevenDebugConfiguration* rSevenDebugConfiguration;
        long* plVar3;
        uint64_t* puVar4;

        Point<float> local_20(0.0, 0.0);
        if (ImGui::Button("Apply", local_20)) {
            plVar3 = (long*)field_432.operator->();
            if ((**(void (**)(...))(*plVar3 + 8))(plVar3) != 0) {
                plVar3 = (long*)field_432.operator->();
                rSevenDebugConfiguration =
                    (RSevenDebugConfiguration*)(**(void (**)(...))(*plVar3 + 24))(plVar3, field_424);
                SetConfiguration(*rSevenDebugConfiguration);
            }
        }
        ImGui::SameLine(0.0, -1.0);
        local_20 = jag::math::Point(0.0, 0.0);
        if (ImGui::Button("Reload", local_20)) {
            plVar3 = (long*)field_432.operator->();
            (**(void (**)(...))(*plVar3 + 32))(plVar3);
        }
        ImGui::SameLine(0.0, -1.0);
        local_20 = jag::math::Point(0.0, 0.0);
        if (ImGui::Button("Delete", local_20)) {
            plVar3 = (long*)field_432.operator->();
            (**(void (**)(...))(*plVar3 + 56))(plVar3, field_424);
        }
        ImGui::SameLine(0.0, -1.0);
        local_20 = jag::math::Point(0.0, 0.0);
        if (ImGui::Button("Reset to default", local_20)) {
            plVar3 = (long*)field_432.operator->();
            (**(void (**)(...))(*plVar3 + 40))(plVar3);
        }
        ImGui::SameLine(0.0, -1.0);
        local_20 = jag::math::Point(0.0, 0.0);
        if (ImGui::Button("Copy preset path", local_20)) {
            puVar4 = (uint64_t*)field_432.operator->();
            ImGui::SetClipboardText((char*)(**(void (**)(...))*puVar4)(puVar4));
        }
    }

    // 0x100064780
    void RSevenDebugDisplay::DrawPresetSaveInterface() {
        long* plVar2;
        uint64_t uVar3;

        char* str2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        unsigned long arg3 = field_144.capacity();
        ImGui::InputText("Preset name", str2, arg3, 0, nullptr, nullptr);
        RSevenDebugConfiguration local_198(0.0, 0.0);
        if (ImGui::Button("Save", local_198) != '\0') {
            local_198 = RSevenDebugConfiguration();
            GetConfiguration(local_198);
            plVar2 = (long*)field_432.operator->();
            uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            (**(void (**)(...))(*plVar2 + 48))(plVar2, uVar3, &local_198);
        }
    }

    // 0x100064a60
    FileRSevenDebugPresetProvider::FileRSevenDebugPresetProvider() : RSevenDebugPresetProvider() {
        unique_ptr<Json::CharReader> local_170;

        field_40.unique_ptr<true, void>();
        new (&field_48) eastl::string();
        FileRSevenDebugPresetProvider local_168;
        auto charReader = local_168.newCharReader();
        local_170.unique_ptr<true, void>(charReader);
        field_40 = local_170;
        GetPresetDirectory(&local_168);
        auto str = local_168.GetName();
        (&field_48)->assign(str);
        if (local_168.Exists() == '\0') {
            Reset();
        } else {
            Reload();
        }
    }

    // 0x100064c60
    FileRSevenDebugPresetProvider* FileRSevenDebugPresetProvider::GetPresetDirectory() const {
        auto this_00 = SystemPaths::GetDefaultUserFolder();
        auto str = GameShell3Cache::GetOSRSCacheFolderName();
        Filename local_158 = *this_00 / str;
        *this = local_158 / "gfx_presets";
        return this;
    }

    // 0x100064d20
    void FileRSevenDebugPresetProvider::PresetLocation() const {
        eastl::basic_string<char, BucketAllocatorEASTL>::begin();
    }

    // 0x100064d30
    void FileRSevenDebugPresetProvider::PresetCount() const {
        field_8.size();
    }

    // 0x100064d60
    void FileRSevenDebugPresetProvider::PresetName(unsigned long arg1) const {
        uint64_t extraout_var;

        uint8_t uVar1 = PresetCount();
        if ((((uint64_t)extraout_var << 8) | (uint8_t)uVar1) <= arg1) {
            LogAssert("i < PresetCount()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/debug/"
                      "RSevenDebugDisplay.cpp",
                      615, "Preset index out-of-bounds.");
        }
        field_8[arg1];
        eastl::basic_string<char, BucketAllocatorEASTL>::begin();
    }

    // 0x100064e10
    void FileRSevenDebugPresetProvider::PresetConfiguration(unsigned long arg1) const {
        uint64_t extraout_var;

        uint8_t uVar1 = PresetCount();
        if ((((uint64_t)extraout_var << 8) | (uint8_t)uVar1) <= arg1) {
            LogAssert("i < PresetCount()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/debug/"
                      "RSevenDebugDisplay.cpp",
                      621, "Preset index out-of-bounds.");
        }
        field_8[arg1];
    }

    // 0x100064e60
    void FileRSevenDebugPresetProvider::Reload() {
        Filename* pFVar2;
        Filename* pFVar3;
        File* file;
        Logger* this_01;
        char* pcVar4;
        uint8_t auVar5[16];
        ReturnValue local_190;
        unique_ptr<File> local_170;
        FileRSevenDebugPresetProvider local_168;

        field_8.clear();
        GetPresetDirectory(&local_168);
        bool cVar1 = local_168.Exists();
        if (cVar1) {
            local_190 = local_168.GetAllFiles();
            pFVar2 = (Filename*)local_190.HeapBeginPtr();
            auVar5 = local_190.end();
            eastl::sort<Filename*, FileRSevenDebugPresetProvider::Reload()::__3>(pFVar2, auVar5._0_8_, auVar5._8_8_);
            pFVar2 = (Filename*)local_190.HeapBeginPtr();
            pFVar3 = (Filename*)local_190.end();
            if (pFVar2 != pFVar3) {
                do {
                    std::make_unique<File, Filename const&, int const&>(local_170, *pFVar2);
                    cVar1 = ((ClientCompositeZone*)local_170.operator->())->IsValid();
                    if (!cVar1) {
                    LAB_100064f6d:
                        this_01 = logger::default_logger();
                        pcVar4 = pFVar2->GetName();
                        this_01->Log(false, 3,
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                     "osclient/debug/RSevenDebugDisplay.cpp",
                                     639, "Could not load preset file %s", pcVar4);
                    } else {
                        file = (File*)*local_170;
                        cVar1 = AddPresetFromFile(*pFVar2, *file);
                        if (!cVar1)
                            goto LAB_100064f6d;
                    }
                    pFVar2 = pFVar2 + 304;
                } while (pFVar2 != pFVar3);
            }
        }
    }

    // 0x1000650d0
    unsigned long FileRSevenDebugPresetProvider::AddPresetFromFile(const Filename& filename, const File& file) {
        long* plVar6;
        uint64_t uVar7;
        uint64_t uVar8;
        basic_string<char, BucketAllocatorEASTL> local_348;
        ReturnValue local_330;
        uint8_t local_2f8[672];
        eastl::string local_58;

        eastl::string local_318;
        unsigned long uVar2 = file.length(nullptr);
        local_318.set_capacity(uVar2);
        uVar2 = local_318.capacity();
        local_318.force_size(uVar2);
        Value local_370(0);
        char* pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        unsigned int arg2 = file.length(nullptr);
        long lVar4 = file.read(pcVar3, arg2, 0, nullptr);
        long lVar5 = file.length(nullptr);
        if (lVar4 == lVar5) {
            plVar6 = (long*)field_40.operator->();
            uVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar8 = eastl::basic_string<char, BucketAllocatorEASTL>::end();
            if ((**(void (**)(...))(*plVar6 + 16))(plVar6, uVar7, uVar8, &local_370, 0) != '\0') {
                new (local_2f8) RSevenDebugPreset();
                (*((local_2f8 + 368))) = filename;
                local_330.GetFile(filename);
                StripExtensionIfPresent<eastl::basic_string<char, BucketAllocatorEASTL>>(&local_348);
                pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                eastl::string::assign(&local_58, pcVar3);
                JsonDeserialize<RSevenDebugConfiguration>(&local_370, (RSevenDebugConfiguration*)local_2f8);
                field_8.push_back(*local_2f8);
                uVar2 = (((uint64_t)((int64_t)((unsigned long)plVar6 >> 8)) << 8) | (uint8_t)1);
                goto LAB_100065276;
            }
        }
        uVar2 = 0;
    LAB_100065276:
        return uVar2 & 4294967295;
    }

    // 0x100065330
    void FileRSevenDebugPresetProvider::Reset() {
        if (ClearPresetDirectory() == '\0') {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/debug/"
                      "RSevenDebugDisplay.cpp",
                      649, "Could not clear preset directory");
        }
        AddDefaultConfigurations();
        Reload();
    }

    // 0x100065390
    unsigned long FileRSevenDebugPresetProvider::ClearPresetDirectory() const {
        Filename* this_00;
        Filename* pFVar2;
        uint64_t unaff_R14;
        ReturnValue local_178;
        FileRSevenDebugPresetProvider local_158;

        GetPresetDirectory(&local_158);
        bool cVar1 = local_158.Exists();
        unsigned long uVar3 = (((uint64_t)((int64_t)((unsigned long)unaff_R14 >> 8)) << 8) | (uint8_t)1);
        if (cVar1) {
            local_178 = local_158.GetAllFiles();
            this_00 = (Filename*)local_178.HeapBeginPtr();
            pFVar2 = (Filename*)local_178.end();
            for (; this_00 != pFVar2; this_00 = this_00 + 304) {
                cVar1 = this_00->Remove(nullptr);
                if (!cVar1) {
                    uVar3 = 0;
                    goto LAB_100065447;
                }
            }
        }
    LAB_100065447:
        return uVar3 & 4294967295;
    }

    // 0x1000654b0
    void FileRSevenDebugPresetProvider::AddDefaultConfigurations() {
        uint8_t local_198[136];

        ___bzero((RSevenDebugConfiguration*)local_198, 368);
        new (local_198) RSevenDebugConfiguration();
        RSevenDebugConfiguration local_308("Discretized luminance");
        map<eastl::string, bool>* this_00 = (map<eastl::string, bool>*)(local_198 + 8);
        uint8_t* puVar1 = (uint8_t*)(*this_00)[local_308];
        *puVar1 = 1;
        local_308 = eastl::string("Per-model lighting");
        puVar1 = (uint8_t*)(*this_00)[local_308];
        *puVar1 = 1;
        local_308 = eastl::string("SSAO");
        puVar1 = (uint8_t*)(*this_00)[local_308];
        *puVar1 = 0;
        local_308 = eastl::string("Sun shadows");
        puVar1 = (uint8_t*)(*this_00)[local_308];
        *puVar1 = 0;
        local_308 = eastl::string("Transitions");
        puVar1 = (uint8_t*)(*this_00)[local_308];
        *puVar1 = 0;
        uint8_t local_dc = 0;
        SavePreset((RSevenDebugConfiguration*)"Fake SD");
        ___bzero(&local_308, 368);
        local_308 = RSevenDebugConfiguration();
        *local_198 = local_308;
        local_308 = eastl::string("Discretized luminance");
        puVar1 = (uint8_t*)(*this_00)[local_308];
        *puVar1 = 0;
        local_308 = eastl::string("Per-model lighting");
        puVar1 = (uint8_t*)(*this_00)[local_308];
        *puVar1 = 0;
        local_308 = eastl::string("SSAO");
        puVar1 = (uint8_t*)(*this_00)[local_308];
        *puVar1 = 1;
        local_308 = eastl::string("Sun shadows");
        puVar1 = (uint8_t*)(*this_00)[local_308];
        *puVar1 = 1;
        local_308 = eastl::string("Transitions");
        puVar1 = (uint8_t*)(*this_00)[local_308];
        *puVar1 = 1;
        local_dc = 1;
        uint64_t local_110 = 4790141153661943810;
        uint32_t local_f0 = 1082130432;
        SavePreset((RSevenDebugConfiguration*)"Full HD");
    }

    // 0x100065930
    void FileRSevenDebugPresetProvider::SavePreset(const char* str,
                                                   const RSevenDebugConfiguration& rSevenDebugConfiguration) {
        Logger* pLVar2;
        long lVar3;
        long lVar4;
        uint8_t local_290[608];

        GetPresetDirectory((FileRSevenDebugPresetProvider*)(local_290 + 304));
        if (!(((local_290 + 304))->Exists())) {
            if (!(((local_290 + 304))->CreateDirectories(nullptr))) {
                pLVar2 = logger::default_logger();
                pLVar2->Log(false, 3,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/debug/"
                            "RSevenDebugDisplay.cpp",
                            662, "Could not create preset file directory to save %s.", str);
            }
        }
        JsonSerialize<RSevenDebugConfiguration>((RSevenDebugConfiguration*)local_290);
        auto local_2b0 = local_290->toStyledString();
        auto str_00 = std::string::c_str(&local_2b0);
        eastl::string local_2f8(str_00);
        std::string::~string(&local_2b0);
        local_2d8 = eastl::string(str);
        local_2b0 + local_2d8;
        *local_290 = (*((local_290 + 304))) / &local_2b0;
        local_2b0 = std::make_unique<File, Filename&, int const&>(*local_290, *(&File::TEXT_CREATE_MODE));
        if (((ClientCompositeZone*)local_2b0.operator->())->IsValid()) {
            lVar3 = ((File*)local_2b0.operator->())->write(&local_2f8, nullptr);
            lVar4 = local_2f8.size();
            if (lVar3 == lVar4)
                goto LAB_100065b2c;
        }
        pLVar2 = logger::default_logger();
        pLVar2->Log(false, 3,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/debug/"
                    "RSevenDebugDisplay.cpp",
                    671, "Could not write preset file %s.", str);
    LAB_100065b2c:
        Reload();
        ((local_290 + 304))->~pair();
    }

    // 0x100065c50
    void FileRSevenDebugPresetProvider::DeletePreset(unsigned long arg1) {
        uint64_t extraout_var;
        Logger* this_00;
        uint64_t uVar4;

        uint8_t uVar1 = PresetCount();
        if ((((uint64_t)extraout_var << 8) | (uint8_t)uVar1) <= arg1) {
            LogAssert("i < PresetCount()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/debug/"
                      "RSevenDebugDisplay.cpp",
                      679, "Preset index out-of-bounds.");
        }
        if (((field_8[arg1] + 368))->RemoveFile(nullptr) == '\0') {
            this_00 = logger::default_logger();
            field_8[arg1];
            uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            this_00->Log(false, 3,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/debug/"
                         "RSevenDebugDisplay.cpp",
                         682, "Could not delete preset file %s.", uVar4);
        }
        Reload();
    }

} // namespace jag::oldscape
