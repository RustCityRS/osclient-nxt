// projects/osclient/debug/RSevenDebugDisplay.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "RSevenDebugDisplay.h"
#include "libs/hal/file/file.h"

namespace jag::oldscape {
    // 0x100061f90, 304 bytes, base-object constructor, placed by class name
    // RSevenDebugDisplay::RSevenDebugDisplay()
    void RSevenDebugDisplay::RSevenDebugDisplay() {
        _func_decltype_nullptr* in_RSI;
        shared_ptr local_38;

        new (this) DebugDisplay<RSevenDebugDisplay>();
        field_0 = &PTR__RSevenDebugDisplay_100ef2790;
        field_64 = 1.0;
        field_68 = 1.0;
        field_72 = 1.0;
        field_76 = 1.0;
        field_80 = 1.0;
        field_84 = 0.8;
        field_88 = 0.8;
        field_92 = 40.0;
        new (field_96, 1.0, 0.7, 0.5) jag::math::ColourHSL();
        new (&field_112, 0.025, 0.025, 0.025) jag::math::ColourHSL();
        field_124 = 1.0;
        field_128 = 1.0;
        eastl::fixed_string<char, 256, false, eastl::allocator>::fixed_string();
        field_424 = 0;
        new (&field_432, in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        (&field_16, "RSeven Settings")->assign();
        field_64 = 0.0;
        make_shared<FileRSevenDebugPresetProvider>((jag*)&local_38);
        shared_ptr<RSevenDebugPresetProvider>::operator=((shared_ptr<RSevenDebugPresetProvider>*)&field_432, &local_38);
        local_38.~shared_ptr();
    }

    // 0x100062290, 16 bytes, complete-object constructor, placed by class name
    // RSevenDebugDisplay::RSevenDebugDisplay(): jumps straight to the base-object constructor

    // 0x1000622a0, 320 bytes, placed by class name
    // RSevenDebugDisplay::GetConfiguration(RSevenDebugConfiguration&)
    void RSevenDebugDisplay::GetConfiguration(RSevenDebugConfiguration* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined1 uVar5;
        undefined4 uVar6;
        long lVar7;
        world* this_00;
        undefined8 uVar8;
        OSRenderCore_LogicThread_RSeven* pOVar9;
        SimpleScatteringParams* pSVar10;
        undefined8* puVar11;
        SunlightOptions* pSVar12;
        DeviceOptions* this_01;
        RSevenDebugDisplay* this_02;
        undefined4 extraout_XMM0_Da;
        undefined4 extraout_XMM0_Da_00;
        undefined4 extraout_XMM0_Db;
        undefined1 local_50[48];

        lVar7 = Client::Instance();
        this_00 = (world*)std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
            (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)(lVar7 + 19184));
        uVar5 = this_00->GetShowDebugPointLight();
        param_1->field_0 = uVar5;
        GetActiveEffectsList((RSevenDebugDisplay*)local_50);
        eastl::map<eastl::string, bool, eastl::less<eastl::string>, eastl::allocator>::operator=(
            (map<eastl::string, bool, eastl::less<eastl::string>, eastl::allocator>*)&param_1->field_8, (map*)local_50);
        pOVar9 = (OSRenderCore_LogicThread_RSeven*)local_50;
        pOVar9->~map();
        uVar8 = GetFogParams((RSevenDebugDisplay*)pOVar9);
        *(undefined8*)&param_1->field_60 = uVar8;
        *(undefined4*)((long)&param_1->field_64 + 4) = extraout_XMM0_Da;
        pOVar9 = (OSRenderCore_LogicThread_RSeven*)pOVar9->Instance();
        pSVar10 = (SimpleScatteringParams*)pOVar9->GetLightScatteringParams();
        pOVar9 = (OSRenderCore_LogicThread_RSeven*)&param_1->field_72;
        jag::graphics::SimpleScatteringParams::operator=((SimpleScatteringParams*)pOVar9, pSVar10);
        param_1->field_136 = jag::graphics::SSAOPass::m_SSAOMode;
        pOVar9 = (OSRenderCore_LogicThread_RSeven*)pOVar9->Instance();
        puVar11 = (undefined8*)pOVar9->GetSSAOParams();
        uVar8 = puVar11[1];
        uVar1 = puVar11[2];
        uVar2 = puVar11[3];
        uVar3 = puVar11[4];
        uVar4 = puVar11[5];
        param_1->field_140 = *puVar11;
        param_1->field_148 = uVar8;
        *(undefined8*)&param_1->field_156 = uVar1;
        *(undefined8*)((long)&param_1->field_160 + 4) = uVar2;
        *(undefined8*)((long)&param_1->field_168 + 4) = uVar3;
        param_1->field_180 = (char)uVar4;
        param_1->field_181 = (int3)((ulong)uVar4 >> 8);
        param_1->field_184 = (int)((ulong)uVar4 >> 32);
        uVar5 = rseven::MapRebuildHandler_LogicThread::GetBlendTerrain();
        param_1->field_188 = uVar5;
        pOVar9 = (OSRenderCore_LogicThread_RSeven*)pOVar9->Instance();
        pSVar12 = (SunlightOptions*)pOVar9->GetSunlightOptions();
        this_02 = (RSevenDebugDisplay*)param_1->field_192;
        jag::graphics::SunlightOptions::operator=((SunlightOptions*)this_02, pSVar12);
        uVar8 = GetTonemappingParams(this_02);
        *(undefined8*)(param_1->field_192 + 60) = uVar8;
        *(ulong*)((long)&param_1->field_256 + 4) = CONCAT44(extraout_XMM0_Db, extraout_XMM0_Da_00);
        jag::graphics::VolumetricScatteringParams::operator=((VolumetricScatteringParams*)&param_1->field_272,
                                                             (VolumetricScatteringParams*)&field_64);
        lVar7 = Client::Instance();
        this_01 =
            (DeviceOptions*)
                std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                    (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)(lVar7 + 8376));
        uVar6 = this_01->GetAntialiasingSampleLevel();
        *(undefined4*)&param_1->field_352 = uVar6;
    }

    // 0x1000623f0, 288 bytes, placed by class name
    // RSevenDebugDisplay::GetActiveEffectsList()
    RSevenDebugDisplay* RSevenDebugDisplay::GetActiveEffectsList() {
        OSRenderCore_LogicThread_RSeven* this_00;
        EffectList* pEVar2;
        pair* ppVar3;
        undefined8 extraout_RDX;
        undefined1 auVar4[16];
        basic_string local_88[16];
        allocator local_78[32];
        undefined1 local_58;
        undefined8 local_50;
        undefined8 local_48;
        undefined1 local_31;

        eastl::allocator::allocator(local_78, "EASTL map");
        eastl::map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                   eastl::less<eastl::string>, eastl::allocator>::map((allocator*)this);
        this_00 = (OSRenderCore_LogicThread_RSeven*)Instance();
        pEVar2 = (EffectList*)this_00->GetEffectList();
        GetEffectToggles((RSevenDebugDisplay*)this_00);
        local_50 = eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                                 eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true,
                                 true>::begin();
        auVar4 =
            eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                          eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true, true>::end();
        while (true) {
            local_48 = auVar4._0_8_;
            if (!eastl::operator!=((eastl*)&local_50, (hashtable_iterator_base*)&local_48, auVar4._8_8_))
                break;
            ppVar3 = (pair*)eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*((rbtree_iterator<
                       eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                       eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                       eastl::pair<unsigned int const,
                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_50);
            new (local_78) eastl::pair<eastl::stringconst, RSevenDebugDisplay::RT7EffectToggle>(ppVar3);
            local_31 = pEVar2->Contains(local_58);
            eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                          eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true,
                          true>::emplace<eastl::stringconst&, bool>(local_88, (bool*)(RSevenDebugDisplay*)this);
            local_78->~hash_node();
            eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator++(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const,
                                eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_50);
            auVar4._8_8_ = extraout_RDX;
            auVar4._0_8_ = local_48;
        }
        return (RSevenDebugDisplay*)this;
    }

    // 0x100062550, 96 bytes, placed by class name
    // RSevenDebugDisplay::GetFogParams()
    ulong RSevenDebugDisplay::GetFogParams() {
        uint uVar1;
        Client* this_00;
        Fog* this_01;
        uint uVar2;

        this_00 = (Client*)Client::Instance();
        this_01 = (Fog*)this_00->GetFog();
        uVar1 = this_01->Enabled();
        uVar2 = this_01->FogIntensity();
        this_01->FogDistance();
        return (ulong)uVar1 & 255 | (ulong)uVar2 << 32;
    }

    // 0x1000625c0, 128 bytes, placed by class name
    // RSevenDebugDisplay::GetTonemappingParams()
    ulong RSevenDebugDisplay::GetTonemappingParams() {
        byte bVar1;
        uint uVar2;
        OSRenderCore_LogicThread_RSeven* this_00;
        long lVar3;
        uint* puVar4;

        this_00 = (OSRenderCore_LogicThread_RSeven*)Instance();
        lVar3 = this_00->GetPostProcessConfig();
        bVar1 = *(byte*)(lVar3 + 520);
        puVar4 = (uint*)((lVar3 + 72))->second();
        uVar2 = *puVar4;
        ((lVar3 + 40))->second();
        ((lVar3 + 8))->second();
        return (ulong)uVar2 << 32 | (ulong)bVar1;
    }

    // 0x100062670, 352 bytes, placed by class name
    // RSevenDebugDisplay::SetConfiguration(RSevenDebugConfiguration const&)
    void RSevenDebugDisplay::SetConfiguration(RSevenDebugConfiguration* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        long lVar6;
        world* pwVar7;
        OSRenderCore_LogicThread_RSeven* pOVar8;
        undefined8* puVar9;
        SunlightOptions* this_00;
        DeviceOptions* this_01;
        VolumetricScatteringParams* this_02;
        Client* this_03;
        float* this_05;

        lVar6 = Client::Instance();
        pwVar7 = (world*)std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
            (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)(lVar6 + 19184));
        pwVar7->SetShowDebugPointLight((bool)param_1->field_0);
        pOVar8 = (OSRenderCore_LogicThread_RSeven*)this;
        SetActiveEffects(this, (map*)&param_1->field_8);
        SetFogParams((RSevenDebugDisplay*)pOVar8, (DistanceFogParams*)&param_1->field_60);
        pOVar8 = (OSRenderCore_LogicThread_RSeven*)pOVar8->Instance();
        pOVar8 = (OSRenderCore_LogicThread_RSeven*)pOVar8->GetLightScatteringParamsMutable();
        jag::graphics::SimpleScatteringParams::operator=((SimpleScatteringParams*)pOVar8,
                                                         (SimpleScatteringParams*)&param_1->field_72);
        jag::graphics::SSAOPass::m_SSAOMode = param_1->field_136;
        pOVar8 = (OSRenderCore_LogicThread_RSeven*)pOVar8->Instance();
        puVar9 = (undefined8*)pOVar8->GetSSAOParams();
        uVar1 = param_1->field_148;
        uVar2 = *(undefined8*)&param_1->field_156;
        uVar3 = *(undefined8*)((long)&param_1->field_160 + 4);
        uVar4 = *(undefined8*)((long)&param_1->field_168 + 4);
        uVar5 = *(undefined8*)&param_1->field_180;
        *puVar9 = param_1->field_140;
        puVar9[1] = uVar1;
        puVar9[2] = uVar2;
        puVar9[3] = uVar3;
        puVar9[4] = uVar4;
        puVar9[5] = uVar5;
        pOVar8 = (OSRenderCore_LogicThread_RSeven*)(ulong)(byte)param_1->field_188;
        rseven::MapRebuildHandler_LogicThread::SetBlendTerrain((bool)param_1->field_188);
        pOVar8 = (OSRenderCore_LogicThread_RSeven*)pOVar8->Instance();
        this_00 = (SunlightOptions*)pOVar8->GetSunlightOptions();
        jag::graphics::SunlightOptions::operator=(this_00, (SunlightOptions*)param_1->field_192);
        SetActiveEffects(this, (map*)&param_1->field_8);
        SetTonemappingParams((RSevenDebugDisplay*)this, (TonemappingParams*)(param_1->field_192 + 60));
        lVar6 = Client::Instance();
        pwVar7 = (world*)std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
            (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)(lVar6 + 19184));
        pwVar7->SetShowDebugPointLight((bool)param_1->field_0);
        lVar6 = Client::Instance();
        this_01 =
            (DeviceOptions*)
                std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                    (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)(lVar6 + 8376));
        this_01->SetAntialiasingSampleLevel(*(int*)&param_1->field_352);
        this_05 = &field_64;
        pOVar8 = (OSRenderCore_LogicThread_RSeven*)this_05;
        jag::graphics::VolumetricScatteringParams::operator=((VolumetricScatteringParams*)this_05,
                                                             (VolumetricScatteringParams*)&param_1->field_272);
        pOVar8 = (OSRenderCore_LogicThread_RSeven*)pOVar8->Instance();
        this_02 = (VolumetricScatteringParams*)pOVar8->GetVolumetricScatteringParamsMutable();
        jag::graphics::VolumetricScatteringParams::operator=(this_02, (VolumetricScatteringParams*)this_05);
        this_03 = (Client*)Client::Instance();
        this_03->RequestMapRebuild();
    }

    // 0x1000627d0, 304 bytes, placed by class name
    // RSevenDebugDisplay::SetActiveEffects(eastl::map<eastl::string, bool, eastl::less<eastl::string >, eastl::allocator> const&)
    void RSevenDebugDisplay::SetActiveEffects(map* param_1) {
        pair* ppVar1;
        long lVar2;
        undefined1 uVar3;
        bool bVar4;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* extraout_RDX_01;
        OSRenderCore_LogicThread_RSeven* this_00;
        hash_node<eastl::string, false> local_80[32];
        undefined1 local_60;
        undefined8 local_58;
        EffectList* local_50;
        undefined8 local_48;
        undefined8 local_40;
        undefined8 local_38;

        this_00 = (OSRenderCore_LogicThread_RSeven*)Instance();
        local_50 = (EffectList*)this_00->GetEffectListMutable();
        GetEffectToggles((RSevenDebugDisplay*)this_00);
        local_48 = eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                                 eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true,
                                 true>::begin();
        local_40 =
            eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                          eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true, true>::end();
        bVar4 = eastl::operator!=((eastl*)&local_48, (hashtable_iterator_base*)&local_40, extraout_RDX);
        if (bVar4) {
            do {
                ppVar1 = (pair*)eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator*(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_48);
                new (local_80) eastl::pair<eastl::stringconst, RSevenDebugDisplay::RT7EffectToggle>(ppVar1);
                local_38 =
                    eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                                  eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true,
                                  true>::find((basic_string*)param_1);
                local_58 = eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>,
                                         eastl::less<eastl::string>, eastl::allocator,
                                         eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true, true>::end();
                bVar4 = eastl::operator!=((eastl*)&local_38, (hashtable_iterator_base*)&local_58, extraout_RDX_01);
                uVar3 = local_60;
                if (bVar4) {
                    lVar2 = eastl::rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                    operator*(
                        (rbtree_iterator<eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                                         eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                                         eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe,
                                                                                       eastl::allocator>>&>*)&local_38);
                    local_50->Set(uVar3, *(undefined1*)(lVar2 + 32));
                }
                eastl::hash_node<eastl::string, false>::~hash_node(local_80);
                eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator++(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_48);
                bVar4 = eastl::operator!=((eastl*)&local_48, (hashtable_iterator_base*)&local_40, extraout_RDX_00);
            } while (bVar4);
        }
    }

    // 0x100062900, 96 bytes, placed by class name
    // RSevenDebugDisplay::SetFogParams(DistanceFogParams const&)
    void RSevenDebugDisplay::SetFogParams(DistanceFogParams* param_1) {
        Client* this_00;
        Fog* this_01;
        ulonglong uVar1;

        this_00 = (Client*)Client::Instance();
        this_01 = (Fog*)this_00->GetFog();
        uVar1 = FrameTime::GetCurrentTimeMS();
        this_01->SetEnabled((bool)*param_1, uVar1);
        this_00->SetFogIntensity(*(float*)(param_1 + 4));
        this_00->SetFogDistance(*(float*)(param_1 + 8));
    }

    // 0x100062960, 112 bytes, placed by class name
    // RSevenDebugDisplay::SetTonemappingParams(TonemappingParams const&)
    void RSevenDebugDisplay::SetTonemappingParams(TonemappingParams* param_1) {
        OSRenderCore_LogicThread_RSeven* this_00;
        long lVar1;

        this_00 = (OSRenderCore_LogicThread_RSeven*)Instance();
        lVar1 = this_00->GetPostProcessConfig();
        *(undefined1*)(lVar1 + 520) = param_1->field_0;
        jag::math::Transitionable<float>::operator=((Transitionable<float>*)(lVar1 + 72), (float*)&param_1->field_4);
        jag::math::Transitionable<float>::operator=((Transitionable<float>*)(lVar1 + 40),
                                                    (float*)((long)&param_1->field_4 + 4));
        jag::math::Transitionable<float>::operator=((Transitionable<float>*)(lVar1 + 8), (float*)&param_1->field_12);
    }

    // 0x1000629f0, 80 bytes, placed by class name
    // RSevenDebugDisplay::DrawDebug()
    void RSevenDebugDisplay::DrawDebug() {
        Point<float> local_20[8];

        if (field_48[0] != '\0') {
            jag::math::Point<float>::Point(local_20, 475.0, 550.0);
            ImGui::SetNextWindowSize((ImVec2*)local_20, 4);
        }
        DrawDebug();
    }

    // 0x100062a90, 368 bytes, placed by class name
    // RSevenDebugDisplay::DrawDisplay()
    void RSevenDebugDisplay::DrawDisplay() {
        char cVar1;
        char* pcVar2;

        pcVar2 = "Controls";
        cVar1 = ImGui::CollapsingHeader("Controls", 0);
        if (cVar1 != '\0') {
            DrawRSevenToggle((RSevenDebugDisplay*)pcVar2);
            DrawFreezeToggle((RSevenDebugDisplay*)pcVar2);
        }
        pcVar2 = "Distance fog";
        cVar1 = ImGui::CollapsingHeader("Distance fog", 0);
        if (cVar1 != '\0') {
            DrawFogControls((RSevenDebugDisplay*)pcVar2);
        }
        cVar1 = ImGui::CollapsingHeader("Effects", 0);
        if (cVar1 != '\0') {
            DrawEffectToggles(this);
            DrawTerrainBlendToggle((RSevenDebugDisplay*)this);
            DrawDebugPointLightToggle((RSevenDebugDisplay*)this);
        }
        pcVar2 = "Anti-Aliasing";
        cVar1 = ImGui::CollapsingHeader("Anti-Aliasing", 0);
        if (cVar1 != '\0') {
            DrawAntiAliasingControls((RSevenDebugDisplay*)pcVar2);
        }
        pcVar2 = "Light scattering";
        cVar1 = ImGui::CollapsingHeader("Light scattering", 0);
        if (cVar1 != '\0') {
            DrawLightScatteringControls((RSevenDebugDisplay*)pcVar2);
        }
        cVar1 = ImGui::CollapsingHeader("Lighting", 0);
        if (cVar1 != '\0') {
            pcVar2 = "Ambient";
            ImGui::TextUnformatted("Ambient", (char*)0);
            ImGui::Separator();
            DrawSunlightAmbientColorPicker((RSevenDebugDisplay*)pcVar2);
            DrawSunlightAmbientIntensityControls((RSevenDebugDisplay*)pcVar2);
            pcVar2 = "Sun";
            ImGui::TextUnformatted("Sun", (char*)0);
            ImGui::Separator();
            DrawSunlightColorPicker((RSevenDebugDisplay*)pcVar2);
            DrawSunlightDirectionControls((RSevenDebugDisplay*)pcVar2);
            DrawSunlightIntensityControls((RSevenDebugDisplay*)pcVar2);
            pcVar2 = "Shadows";
            ImGui::TextUnformatted("Shadows", (char*)0);
            ImGui::Separator();
            DrawShadowQualityPicker((RSevenDebugDisplay*)pcVar2);
            DrawShadowStrengthControls((RSevenDebugDisplay*)pcVar2);
        }
        cVar1 = ImGui::CollapsingHeader("SSAO", 0);
        if (cVar1 != '\0') {
            DrawSSAOControls();
        }
        pcVar2 = "Tonemapping";
        cVar1 = ImGui::CollapsingHeader("Tonemapping", 0);
        if (cVar1 != '\0') {
            DrawTonemappingControls((RSevenDebugDisplay*)pcVar2);
        }
        cVar1 = ImGui::CollapsingHeader("Volumetrics", 0);
        if (cVar1 != '\0') {
            DrawVolumetricScatteringControls(this);
        }
        cVar1 = ImGui::CollapsingHeader("Presets", 0);
        if (cVar1 != '\0') {
            DrawPresetControls(this);
        }
    }

    // 0x100062c00, 80 bytes, placed by class name
    // RSevenDebugDisplay::DrawRSevenToggle()
    void RSevenDebugDisplay::DrawRSevenToggle() {
        Client* pCVar1;
        bool local_9;

        pCVar1 = (Client*)Client::Instance();
        local_9 = (bool)pCVar1->GetUsingRSeven();
        if (ImGui::Checkbox("Enable RT7 renderer", &local_9) != '\0') {
            pCVar1 = (Client*)Client::Instance();
            pCVar1->SetUsingRSeven(local_9, false);
        }
    }

    // 0x100062c50, 64 bytes, placed by class name
    // RSevenDebugDisplay::DrawFreezeToggle()
    void RSevenDebugDisplay::DrawFreezeToggle() {
        undefined1 in_AL;
        undefined7 in_register_00000001;
        Client* this_00;
        undefined8 uStack_18;

        uStack_18 = CONCAT71(in_register_00000001, in_AL);
        this_00 = (Client*)Client::Instance();
        uStack_18._7_1_ = this_00->Frozen();
        if (ImGui::Checkbox("Freeze world", (bool*)((long)&uStack_18 + 7)) != '\0') {
            this_00->SetFrozen((bool)uStack_18._7_1_);
        }
    }

    // 0x100062c90, 240 bytes, placed by class name
    // RSevenDebugDisplay::DrawFogControls()
    void RSevenDebugDisplay::DrawFogControls() {
        ulonglong uVar1;
        bool bVar2;
        char cVar3;
        Client* this_00;
        Fog* this_01;
        float local_2c;
        float local_28;
        bool local_21;

        this_00 = (Client*)Client::Instance();
        this_01 = (Fog*)this_00->GetFog();
        local_21 = (bool)this_01->Enabled();
        ImGui::Checkbox("Enabled", &local_21);
        bVar2 = local_21;
        uVar1 = FrameTime::GetCurrentTimeMS();
        this_01->SetEnabled(bVar2, uVar1);
        local_2c = (float)this_01->FogDistance();
        cVar3 = ImGui::DragFloat("Distance", &local_2c, 0.1, 0.0, 64.0, "%.3f", 0);
        if (cVar3 != '\0') {
            this_00->SetFogDistance(local_2c);
        }
        local_28 = (float)this_01->FogIntensity();
        cVar3 = ImGui::DragFloat("Intensity", &local_28, 0.001, 0.0, 1.0, "%.3f", 0);
        if (cVar3 != '\0') {
            this_00->SetFogIntensity(local_28);
        }
    }

    // 0x100062d80, 176 bytes, placed by class name
    // RSevenDebugDisplay::DrawEffectToggles()
    void RSevenDebugDisplay::DrawEffectToggles() {
        pair* ppVar1;
        bool bVar2;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        RSevenDebugDisplay* this_00;
        undefined1 local_60[32];
        RT7EffectToggle local_40[8];
        eastl local_38[8];
        hashtable_iterator_base local_30[8];

        GetEffectToggles(this);
        local_38 =
            (eastl[8])eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                                    eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true,
                                    true>::begin();
        local_30 = (hashtable_iterator_base[8])
            eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                          eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true, true>::end();
        bVar2 = eastl::operator!=(local_38, local_30, extraout_RDX);
        if (bVar2) {
            do {
                ppVar1 = (pair*)eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator*(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)local_38);
                this_00 = (RSevenDebugDisplay*)local_60;
                new (local_60) eastl::pair<eastl::stringconst, RSevenDebugDisplay::RT7EffectToggle>(ppVar1);
                DrawEffectToggle(this_00, (basic_string*)local_60, local_40);
                local_60->~hash_node();
                eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator++(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)local_38);
                bVar2 = eastl::operator!=(local_38, local_30, extraout_RDX_00);
            } while (bVar2);
        }
    }

    // 0x100062e30, 64 bytes, placed by class name
    // RSevenDebugDisplay::DrawTerrainBlendToggle()
    void RSevenDebugDisplay::DrawTerrainBlendToggle() {
        Client* this_00;
        bool local_9;

        local_9 = (bool)rseven::MapRebuildHandler_LogicThread::GetBlendTerrain();
        if (ImGui::Checkbox("Terrain blending", &local_9) != '\0') {
            rseven::MapRebuildHandler_LogicThread::SetBlendTerrain(local_9);
            this_00 = (Client*)Client::Instance();
            this_00->RequestMapRebuild();
        }
    }

    // 0x100062e70, 96 bytes, placed by class name
    // RSevenDebugDisplay::DrawDebugPointLightToggle()
    void RSevenDebugDisplay::DrawDebugPointLightToggle() {
        long lVar1;
        world* pwVar2;
        bool local_9;

        lVar1 = Client::Instance();
        pwVar2 = (world*)std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
            (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)(lVar1 + 19184));
        local_9 = (bool)pwVar2->GetShowDebugPointLight();
        if (ImGui::Checkbox("Demo point light", &local_9) != '\0') {
            lVar1 = Client::Instance();
            pwVar2 = (world*)std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
                (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)(lVar1 + 19184));
            pwVar2->SetShowDebugPointLight(local_9);
        }
    }

    // 0x100062ed0, 560 bytes, placed by class name
    // RSevenDebugDisplay::DrawAntiAliasingControls()
    void RSevenDebugDisplay::DrawAntiAliasingControls() {
        bool bVar1;
        long lVar2;
        DeviceOptions* pDVar3;
        undefined8 uVar4;
        char* pcVar5;
        char* pcVar6;
        Layout* this_00;
        int iVar7;
        vector<char, eastl::allocator> local_78[32];
        uint local_58;
        undefined1 local_54;
        int local_38;
        int local_34;

        lVar2 = Client::Instance();
        pDVar3 = (DeviceOptions*)
                     std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->((
                         unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)(lVar2 + 8376));
        local_34 = pDVar3->GetAntialiasingSampleLevel();
        local_38 = pDVar3->GetMaxAntialisingLevel();
        if (DrawAntiAliasingControls()::levelTitles == '\0') {
            iVar7 = ___cxa_guard_acquire(&DrawAntiAliasingControls()::levelTitles);
            if (iVar7 != 0) {
                new (&DrawAntiAliasingControls()::levelTitles) eastl::optional<eastl::vector<char, eastl::allocator>>();
                ___cxa_atexit(PTR__optional_100ee6e18, &DrawAntiAliasingControls()::levelTitles, 4294967296);
                ___cxa_guard_release(&DrawAntiAliasingControls()::levelTitles);
            }
        }
        bVar1 = (&DrawAntiAliasingControls()::levelTitles)->GetFastUpdateLoopEnabled();
        if (!bVar1) {
            eastl::vector<char, eastl::allocator>::vector(local_78);
            uVar4 = local_78->end();
            local_58 = 6710863;
            eastl::vector<char, eastl::allocator>::insert(local_78, uVar4, &local_58, 4);
            if (1 < local_38) {
                iVar7 = 1;
                do {
                    uVar4 = local_78->end();
                    local_58 = 1094800205;
                    local_54 = 120;
                    local_78->insert(uVar4, (eastl*)&local_58, 5);
                    local_58.to_string(1 << ((byte)iVar7 & 31));
                    pcVar5 = (char*)local_78->end();
                    pcVar6 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    eastl::basic_string<char, BucketAllocatorEASTL>::end();
                    eastl::vector<char, eastl::allocator>::insert<char*>((char*)local_78, pcVar5, pcVar6);
                    local_58.~basic_string();
                    iVar7 = iVar7 + 1;
                } while (local_38 != iVar7);
            }
            local_58 = local_58 & 4294967040;
            eastl::vector<char, eastl::allocator>::push_back(local_78, (char*)&local_58);
            eastl::optional<eastl::vector<char, eastl::allocator>>::operator=(
                (optional<eastl::vector<char, eastl::allocator>>*)&DrawAntiAliasingControls()::levelTitles,
                (vector*)local_78);
            eastl::vector<char, eastl::allocator>::~vector(local_78);
        }
        this_00 = (Layout*)eastl::optional<eastl::vector<char, eastl::allocator>>::value();
        pcVar5 = (char*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(this_00);
        ImGui::Combo("Sample Level", &local_34, pcVar5, -1);
        lVar2 = Client::Instance();
        pDVar3 = (DeviceOptions*)
                     std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->((
                         unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)(lVar2 + 8376));
        iVar7 = pDVar3->GetAntialiasingSampleLevel();
        if (iVar7 != local_34) {
            lVar2 = Client::Instance();
            pDVar3 =
                (DeviceOptions*)
                    std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                        (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)(lVar2 + 8376));
            pDVar3->SetAntialiasingSampleLevel(local_34);
        }
    }

    // 0x100063100, 336 bytes, placed by class name
    // RSevenDebugDisplay::DrawLightScatteringControls()
    void RSevenDebugDisplay::DrawLightScatteringControls() {
        char cVar1;
        char cVar2;
        char cVar3;
        char cVar4;
        OSRenderCore_LogicThread_RSeven* pOVar5;
        undefined8* puVar6;
        vector* pvVar7;
        float* pfVar8;
        SimpleScatteringParams* this_00;
        type* in_RSI;
        char* this_01;
        undefined1 local_78[16];
        undefined8 local_68;
        undefined8 uStack_60;
        undefined8 local_58[2];
        Layout local_48[8];
        undefined8 uStack_40;
        char local_31;

        pOVar5 = (OSRenderCore_LogicThread_RSeven*)Instance();
        puVar6 = (undefined8*)pOVar5->GetLightScatteringParams();
        local_78._0_8_ = *puVar6;
        local_78._8_8_ = puVar6[1];
        local_68 = puVar6[2];
        uStack_60 = puVar6[3];
        local_58[0] = puVar6[4];
        local_58[1] = puVar6[5];
        local_48 = (Layout[8])puVar6[6];
        uStack_40 = puVar6[7];
        pvVar7 = local_58->SSOBeginPtr(in_RSI);
        local_31 = ImGui::ColorEdit3("Scattering tint", (float*)pvVar7, 0);
        pvVar7 = local_68.SSOBeginPtr(pvVar7);
        cVar1 = ImGui::ColorEdit3("Inscattering amount", (float*)pvVar7, 0);
        pvVar7 = local_78->SSOBeginPtr(pvVar7);
        cVar2 = ImGui::ColorEdit3("Outscattering amount", (float*)pvVar7, 0);
        pvVar7 = eastl::string::Layout::SSOBeginPtr(local_48, (type*)pvVar7);
        cVar3 = ImGui::DragFloat("Density", (float*)pvVar7, 0.0001, 0.0, 1.0, "%.3f", 0);
        pfVar8 = (float*)local_48->y();
        this_01 = "Start distance";
        cVar4 = ImGui::DragFloat("Start distance", pfVar8, 0.5, 0.0, 17500.0, "%.3f", 0);
        if ((((local_31 != '\0') || (cVar1 != '\0')) || (cVar2 != '\0')) || ((cVar3 != '\0' || (cVar4 != '\0')))) {
            pOVar5 = (OSRenderCore_LogicThread_RSeven*)this_01->Instance();
            this_00 = (SimpleScatteringParams*)pOVar5->GetLightScatteringParamsMutable();
            jag::graphics::SimpleScatteringParams::operator=(this_00, (SimpleScatteringParams*)local_78);
        }
    }

    // 0x100063250, 96 bytes, placed by class name
    // RSevenDebugDisplay::DrawSunlightAmbientColorPicker()
    void RSevenDebugDisplay::DrawSunlightAmbientColorPicker() {
        OSRenderCore_LogicThread_RSeven* pOVar1;
        SunlightOptions* this_00;
        undefined8 uVar2;
        char* this_01;
        undefined4 in_XMM1_Da;
        undefined8 local_18;
        undefined4 local_10;

        pOVar1 = (OSRenderCore_LogicThread_RSeven*)Instance();
        this_00 = (SunlightOptions*)pOVar1->GetSunlightOptions();
        local_18 = this_00->GetAmbientColour();
        this_01 = "Ambient Color";
        local_10 = in_XMM1_Da;
        ImGui::ColorEdit3("Ambient Color", (float*)&local_18, 0);
        pOVar1 = (OSRenderCore_LogicThread_RSeven*)this_01->Instance();
        uVar2 = pOVar1->GetSunlightOptions();
        local_18->SetAmbientColour(local_10, uVar2);
    }

    // 0x1000632b0, 112 bytes, placed by class name
    // RSevenDebugDisplay::DrawSunlightAmbientIntensityControls()
    void RSevenDebugDisplay::DrawSunlightAmbientIntensityControls() {
        OSRenderCore_LogicThread_RSeven* pOVar1;
        SunlightOptions* pSVar2;
        char* this_00;
        float local_c;

        pOVar1 = (OSRenderCore_LogicThread_RSeven*)Instance();
        pSVar2 = (SunlightOptions*)pOVar1->GetSunlightOptions();
        local_c = (float)pSVar2->GetAmbientIntensity();
        this_00 = "Ambient Intensity";
        ImGui::DragFloat("Ambient Intensity", &local_c, 0.01, 0.0, 1.0, "%.2f", 0);
        pOVar1 = (OSRenderCore_LogicThread_RSeven*)this_00->Instance();
        pSVar2 = (SunlightOptions*)pOVar1->GetSunlightOptions();
        pSVar2->SetAmbientIntensity(local_c);
    }

    // 0x100063320, 96 bytes, placed by class name
    // RSevenDebugDisplay::DrawSunlightColorPicker()
    void RSevenDebugDisplay::DrawSunlightColorPicker() {
        OSRenderCore_LogicThread_RSeven* pOVar1;
        DebugEllipsoid<DebugDataBasic>* this_00;
        undefined8 uVar2;
        char* this_01;
        undefined4 in_XMM1_Da;
        undefined8 local_18;
        undefined4 local_10;

        pOVar1 = (OSRenderCore_LogicThread_RSeven*)Instance();
        this_00 = (DebugEllipsoid<DebugDataBasic>*)pOVar1->GetSunlightOptions();
        local_18 = DebugEllipsoid<DebugDataBasic>::GetCentrePos(this_00);
        this_01 = "Sunlight Color";
        local_10 = in_XMM1_Da;
        ImGui::ColorEdit3("Sunlight Color", (float*)&local_18, 0);
        pOVar1 = (OSRenderCore_LogicThread_RSeven*)this_01->Instance();
        uVar2 = pOVar1->GetSunlightOptions();
        local_18->SetSunColour(local_10, uVar2);
    }

    // 0x100063380, 224 bytes, placed by class name
    // RSevenDebugDisplay::DrawSunlightDirectionControls()
    void RSevenDebugDisplay::DrawSunlightDirectionControls() {
        undefined8 in_RAX;
        OSRenderCore_LogicThread_RSeven* pOVar1;
        EnvLightingSettings* this_00;
        SunlightOptions* this_01;
        char* this_02;
        undefined4 uVar2;
        float fVar3;
        float local_18;
        float local_14;

        local_14 = (float)((ulong)in_RAX >> 32);
        pOVar1 = (OSRenderCore_LogicThread_RSeven*)Instance();
        pOVar1 = (OSRenderCore_LogicThread_RSeven*)pOVar1->GetSunlightOptions();
        uVar2 = pOVar1->GetOutlineRadiusAdjustment();
        _local_18 = CONCAT44(local_14, uVar2);
        pOVar1 = (OSRenderCore_LogicThread_RSeven*)pOVar1->Instance();
        this_00 = (EnvLightingSettings*)pOVar1->GetSunlightOptions();
        fVar3 = (float)this_00->GetAmbientLight();
        fVar3 = (float)jag::math::Rad2Deg(fVar3);
        local_14 = fVar3;
        ImGui::DragFloat("Sun Height", &local_18, 0.01, 0.0, 1.0, "%.2f", 0);
        this_02 = "Sun Angle";
        ImGui::DragFloat("Sun Angle", &local_14, 1.0, 0.0, 360.0, "%.f", 0);
        pOVar1 = (OSRenderCore_LogicThread_RSeven*)this_02->Instance();
        pOVar1 = (OSRenderCore_LogicThread_RSeven*)pOVar1->GetSunlightOptions();
        pOVar1->SetSunElevation(local_18);
        pOVar1 = (OSRenderCore_LogicThread_RSeven*)pOVar1->Instance();
        this_01 = (SunlightOptions*)pOVar1->GetSunlightOptions();
        fVar3 = (float)jag::math::Deg2Rad(local_14);
        this_01->SetSunAngle(fVar3);
    }

    // 0x100063460, 112 bytes, placed by class name
    // RSevenDebugDisplay::DrawSunlightIntensityControls()
    void RSevenDebugDisplay::DrawSunlightIntensityControls() {
        OSRenderCore_LogicThread_RSeven* pOVar1;
        EnvLightingSettings* this_00;
        SunlightOptions* this_01;
        char* this_02;
        float local_c;

        pOVar1 = (OSRenderCore_LogicThread_RSeven*)Instance();
        this_00 = (EnvLightingSettings*)pOVar1->GetSunlightOptions();
        local_c = (float)this_00->GetEnvMapIrradianceScale();
        this_02 = "Sunlight Intensity";
        ImGui::DragFloat("Sunlight Intensity", &local_c, 0.01, 0.0, 1.0, "%.2f", 0);
        pOVar1 = (OSRenderCore_LogicThread_RSeven*)this_02->Instance();
        this_01 = (SunlightOptions*)pOVar1->GetSunlightOptions();
        this_01->SetSunIntensity(local_c);
    }

    // 0x1000634d0, 528 bytes, placed by class name
    // RSevenDebugDisplay::DrawShadowQualityPicker()
    void RSevenDebugDisplay::DrawShadowQualityPicker() {
        bool bVar1;
        int iVar2;
        int iVar3;
        OSRenderCore_LogicThread_RSeven* pOVar4;
        MSIType* this_00;
        undefined8* puVar5;
        undefined8* puVar6;
        char* pcVar7;
        Layout* this_01;
        SunlightOptions* pSVar8;
        char* this_02;
        jag local_98[16];
        eastl::string local_88[32];
        allocator local_68[8];
        vector<char, eastl::allocator> local_60[32];
        char* local_40;
        int local_34;

        pOVar4 = (OSRenderCore_LogicThread_RSeven*)Instance();
        this_00 = (MSIType*)pOVar4->GetSunlightOptions();
        local_34 = this_00->GetSpriteID();
        if (DrawShadowQualityPicker()::menuOptions == '\0') {
            iVar3 = ___cxa_guard_acquire(&DrawShadowQualityPicker()::menuOptions);
            if (iVar3 != 0) {
                new (&DrawShadowQualityPicker()::menuOptions) eastl::optional<eastl::vector<char, eastl::allocator>>();
                ___cxa_atexit(PTR__optional_100ee6e18, &DrawShadowQualityPicker()::menuOptions, 4294967296);
                ___cxa_guard_release(&DrawShadowQualityPicker()::menuOptions);
            }
        }
        bVar1 = (&DrawShadowQualityPicker()::menuOptions)->GetFastUpdateLoopEnabled();
        if (!bVar1) {
            GetEnumValueNames<jag::graphics::GraphicsQuality>(local_98);
            eastl::vector<char, eastl::allocator>::vector(local_60);
            puVar5 = (undefined8*)local_98->end();
            puVar6 = (undefined8*)local_98->end();
            if (puVar5 != puVar6) {
                do {
                    pcVar7 = (char*)*puVar5;
                    eastl::allocator::allocator(local_68, "EASTL basic_string");
                    eastl::string::basic_string(local_88, pcVar7, local_68);
                    local_40 = (char*)local_60->end();
                    pcVar7 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    eastl::basic_string<char, BucketAllocatorEASTL>::end();
                    eastl::vector<char, eastl::allocator>::insert<char*>((char*)local_60, local_40, pcVar7);
                    eastl::string::~basic_string(local_88);
                    puVar5 = puVar5 + 1;
                } while (puVar5 != puVar6);
            }
            local_88[0] = (eastl::string)0;
            eastl::vector<char, eastl::allocator>::push_back(local_60, (char*)local_88);
            eastl::optional<eastl::vector<char, eastl::allocator>>::operator=(
                (optional<eastl::vector<char, eastl::allocator>>*)&DrawShadowQualityPicker()::menuOptions,
                (vector*)local_60);
            eastl::vector<char, eastl::allocator>::~vector(local_60);
        }
        this_01 = (Layout*)eastl::optional<eastl::vector<char, eastl::allocator>>::value();
        pcVar7 = (char*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(this_01);
        this_02 = "Shadow Quality";
        ImGui::Combo("Shadow Quality", &local_34, pcVar7, -1);
        iVar3 = local_34;
        pOVar4 = (OSRenderCore_LogicThread_RSeven*)this_02->Instance();
        pOVar4 = (OSRenderCore_LogicThread_RSeven*)pOVar4->GetSunlightOptions();
        iVar2 = pOVar4->GetSpriteID();
        if (iVar3 != iVar2) {
            pOVar4 = (OSRenderCore_LogicThread_RSeven*)pOVar4->Instance();
            pSVar8 = (SunlightOptions*)pOVar4->GetSunlightOptions();
            pSVar8->SetShadowQuality(local_34);
        }
    }

    // 0x1000636e0, 112 bytes, placed by class name
    // RSevenDebugDisplay::DrawShadowStrengthControls()
    void RSevenDebugDisplay::DrawShadowStrengthControls() {
        OSRenderCore_LogicThread_RSeven* pOVar1;
        Histogram<float, 10>* this_00;
        SunlightOptions* this_01;
        char* this_02;
        float local_c;

        pOVar1 = (OSRenderCore_LogicThread_RSeven*)Instance();
        this_00 = (Histogram<float, 10>*)pOVar1->GetSunlightOptions();
        local_c = (float)jag::math::Histogram<float, 10>::GetMean(this_00);
        this_02 = "Shadow Intensity";
        ImGui::DragFloat("Shadow Intensity", &local_c, 0.01, 0.0, 1.0, "%.2f", 0);
        pOVar1 = (OSRenderCore_LogicThread_RSeven*)this_02->Instance();
        this_01 = (SunlightOptions*)pOVar1->GetSunlightOptions();
        this_01->SetShadowStrength(local_c);
    }

    // 0x100063750, 384 bytes, placed by class name
    // RSevenDebugDisplay::DrawSSAOControls()
    void RSevenDebugDisplay::DrawSSAOControls() {
        OSRenderCore_LogicThread_RSeven* this;
        float* pfVar1;
        char* this_00;
        int local_1c;

        local_1c = jag::graphics::SSAOPass::m_SSAOMode + -1;
        this_00 = "Mode";
        ImGui::Combo("Mode", &local_1c, "Alchemy", -1);
        jag::graphics::SSAOPass::m_SSAOMode = local_1c + 1;
        this = (OSRenderCore_LogicThread_RSeven*)this_00->Instance();
        pfVar1 = (float*)GetSSAOParams();
        if (jag::graphics::SSAOPass::m_SSAOMode == 1) {
            ImGui::DragFloat("Radius", pfVar1 + 7, 1.0, 0.0, 128.0, "%.3f", 0);
            ImGui::DragFloat("Bias", pfVar1 + 8, 0.01, 0.0, 1.0, "%.3f", 0);
            ImGui::DragFloat("Sigma", pfVar1 + 9, 0.1, 0.0, 10.0, "%.3f", 0);
        } else {
            ImGui::DragFloat("Radius", pfVar1, 1.0, 0.0, 128.0, "%.3f", 0);
            ImGui::DragFloat("Bias", pfVar1 + 1, 0.01, 0.0, 1.0, "%.3f", 0);
            ImGui::DragFloat("Sigma", pfVar1 + 5, 0.1, 0.0, 10.0, "%.3f", 0);
            ImGui::Checkbox("Blur", (bool*)(pfVar1 + 10));
        }
    }

    // 0x1000638d0, 352 bytes, placed by class name
    // RSevenDebugDisplay::DrawTonemappingControls()
    void RSevenDebugDisplay::DrawTonemappingControls() {
        OSRenderCore_LogicThread_RSeven* this_00;
        float* pfVar1;
        char cVar2;
        char cVar3;
        char cVar4;
        long lVar5;
        ulonglong uVar6;
        float local_3c;
        float local_38;
        float local_34;

        this_00 = (OSRenderCore_LogicThread_RSeven*)Instance();
        lVar5 = this_00->GetPostProcessConfig();
        ImGui::Checkbox("Enabled", (bool*)(lVar5 + 520));
        pfVar1 = (float*)((lVar5 + 8))->second();
        local_3c = *pfVar1;
        pfVar1 = (float*)((lVar5 + 40))->second();
        local_38 = *pfVar1;
        pfVar1 = (float*)((lVar5 + 72))->second();
        local_34 = *pfVar1;
        cVar2 = ImGui::DragFloat("Exposure", &local_34, 0.005, 0.0, 1.0, "%.3f", 0);
        cVar3 = ImGui::DragFloat("Min black luminance", &local_3c, 0.005, 0.0, 1.0, "%.3f", 0);
        cVar4 = ImGui::DragFloat("Max white luminance", &local_38, 0.005, 0.0, 1.0, "%.3f", 0);
        if (((cVar2 != '\0') || (cVar3 != '\0')) || (cVar4 != '\0')) {
            uVar6 = FrameTime::GetCurrentTimeMS();
            ((lVar5 + 8))->SetValue(&local_3c, 600, uVar6);
            ((lVar5 + 40))->SetValue(&local_38, 600, uVar6);
            ((lVar5 + 72))->SetValue(&local_34, 600, uVar6);
        }
    }

    // 0x100063a30, 624 bytes, placed by class name
    // RSevenDebugDisplay::DrawVolumetricScatteringControls()
    void RSevenDebugDisplay::DrawVolumetricScatteringControls() {
        OSRenderCore_LogicThread_RSeven* this_00;
        VolumetricScatteringParams* this_01;
        char cVar1;
        char cVar2;
        char cVar3;
        char cVar4;
        char cVar5;
        char cVar6;
        char cVar7;
        char cVar8;
        char cVar9;
        char cVar10;
        char cVar11;
        char cVar12;
        char* this_02;

        cVar1 = ImGui::DragFloat("Bilateral blur depth falloff", &field_92, 1.0, 0.0, 100.0, "%.3f", 0);
        cVar2 = ImGui::DragFloat("Density", &field_64, 0.05, 0.0, 10.0, "%.3f", 0);
        cVar3 = ImGui::DragFloat("Exaggeration", &field_80, 0.05, 0.0, 10.0, "%.3f", 0);
        cVar4 = ImGui::DragFloat("G", &field_84, 0.01, -1.0, 1.0, "%.3f", 0);
        cVar5 = ImGui::DragFloat("Inscattering", &field_68, 0.05, 0.0, 10.0, "%.3f", 0);
        cVar6 = ImGui::ColorEdit3("Lit fog colour", (float*)field_96, 0);
        cVar7 = ImGui::DragFloat("Lit fog intensity", &field_124, 0.05, 0.0, 10.0, "%.3f", 0);
        cVar8 = ImGui::DragFloat("Outscattering", &field_72, 0.05, 0.0, 10.0, "%.3f", 0);
        cVar9 = ImGui::DragFloat("Sky G", &field_88, 0.01, -1.0, 1.0, "%.3f", 0);
        cVar10 = ImGui::DragFloat("Skybox density multiplier", &field_76, 0.05, 0.0, 10.0, "%.3f", 0);
        cVar11 = ImGui::ColorEdit3("Unlit fog colour", &field_112, 0);
        this_02 = "Unlit fog intensity";
        cVar12 = ImGui::DragFloat("Unlit fog intensity", &field_128, 0.05, 0.0, 10.0, "%.3f", 0);
        if (((((cVar1 != '\0') || (cVar2 != '\0')) || (cVar3 != '\0')) ||
             ((((cVar4 != '\0' || (cVar5 != '\0')) || ((cVar6 != '\0' || ((cVar7 != '\0' || (cVar8 != '\0')))))) ||
               (cVar9 != '\0')))) ||
            (((cVar10 != '\0' || (cVar11 != '\0')) || (cVar12 != '\0')))) {
            this_00 = (OSRenderCore_LogicThread_RSeven*)this_02->Instance();
            this_01 = (VolumetricScatteringParams*)this_00->GetVolumetricScatteringParamsMutable();
            jag::graphics::VolumetricScatteringParams::operator=(this_01, (VolumetricScatteringParams*)&field_64);
        }
    }

    // 0x100063ca0, 128 bytes, placed by class name
    // RSevenDebugDisplay::DrawPresetControls()
    void RSevenDebugDisplay::DrawPresetControls() {
        long* plVar1;
        ulong* puVar3;
        ulong local_28;
        ulong local_20;

        local_28 = 0;
        plVar1 = (long*)shared_ptr<RSevenDebugPresetProvider>::operator->(
            (shared_ptr<RSevenDebugPresetProvider>*)&field_432);
        local_20 = (**(code**)(*plVar1 + 8))(plVar1)-1;
        puVar3 = std::clamp<unsigned long>(&field_424, &local_28, &local_20);
        field_424 = *puVar3;
        DrawPresetSelectionBox(this);
        DrawPresetManipulationButtons(this);
        DrawPresetSaveInterface(this);
    }

    // 0x100063d20, 128 bytes, placed by class name
    // RSevenDebugDisplay::DrawEffectToggle(eastl::string const&, RSevenDebugDisplay::RT7EffectToggle const&)
    void RSevenDebugDisplay::DrawEffectToggle(basic_string* param_1, RT7EffectToggle* param_2) {
        EffectList* pEVar1;
        Client* this_00;
        OSRenderCore_LogicThread_RSeven* pOVar3;
        bool local_19;

        pOVar3 = (OSRenderCore_LogicThread_RSeven*)Instance();
        pEVar1 = (EffectList*)pOVar3->GetEffectList();
        local_19 = (bool)pEVar1->Contains(*param_2);
        pOVar3 = (OSRenderCore_LogicThread_RSeven*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        if (ImGui::Checkbox((char*)pOVar3, &local_19) != '\0') {
            pOVar3 = (OSRenderCore_LogicThread_RSeven*)pOVar3->Instance();
            pEVar1 = (EffectList*)pOVar3->GetEffectListMutable();
            pEVar1->Set(*param_2, local_19);
            if (param_2[1] != (RT7EffectToggle)0) {
                this_00 = (Client*)Client::Instance();
                this_00->RequestMapRebuild();
            }
        }
    }

    // 0x100063da0, 704 bytes, placed by class name
    // RSevenDebugDisplay::GetEffectToggles()
    void RSevenDebugDisplay::GetEffectToggles() {
        bool bVar1;
        int iVar2;
        long lVar3;
        unique_ptr* puVar4;
        unique_ptr local_190[48];
        map local_160[8];
        allocator local_158[8];
        undefined2 local_150[4];
        undefined2 local_148[4];
        undefined2 local_140[4];
        undefined2 local_138[4];
        undefined2 local_130[4];
        undefined2 local_128[4];
        undefined1 local_120[8];
        pair<eastl::stringconst, RSevenDebugDisplay::RT7EffectToggle> local_118[40];
        pair<eastl::stringconst, RSevenDebugDisplay::RT7EffectToggle> local_f0[40];
        pair<eastl::stringconst, RSevenDebugDisplay::RT7EffectToggle> local_c8[40];
        pair<eastl::stringconst, RSevenDebugDisplay::RT7EffectToggle> local_a0[40];
        pair<eastl::stringconst, RSevenDebugDisplay::RT7EffectToggle> local_78[40];
        pair<eastl::stringconst, RSevenDebugDisplay::RT7EffectToggle> local_50[40];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (GetEffectToggles()::toggles == '\0') {
            this = (RSevenDebugDisplay*)&GetEffectToggles()::toggles;
            iVar2 = ___cxa_guard_acquire();
            if (iVar2 != 0) {
                ___cxa_atexit(
                    std::unique_ptr<
                        eastl::map<eastl::string, RSevenDebugDisplay::RT7EffectToggle, eastl::less<eastl::string>,
                                   eastl::allocator>,
                        std::default_delete<eastl::map<eastl::string, RSevenDebugDisplay::RT7EffectToggle,
                                                       eastl::less<eastl::string>, eastl::allocator>>>::~unique_ptr,
                    &GetEffectToggles()::toggles, 4294967296);
                this = (RSevenDebugDisplay*)&GetEffectToggles()::toggles;
                ___cxa_guard_release();
            }
        }
        bVar1 = operator_cast_to_bool();
        if (!bVar1) {
            local_150[0] = 39;
            eastl::pair<eastl::stringconst, RSevenDebugDisplay::RT7EffectToggle>::pair<char const(&)[22], void>(
                local_118, "Discretized luminance", (RT7EffectToggle*)local_150);
            local_148[0] = 48;
            eastl::pair<eastl::stringconst, RSevenDebugDisplay::RT7EffectToggle>::pair<char const(&)[17], void>(
                local_f0, "Light scattering", (RT7EffectToggle*)local_148);
            local_140[0] = 299;
            eastl::pair<eastl::stringconst, RSevenDebugDisplay::RT7EffectToggle>::pair<char const(&)[19], void>(
                local_c8, "Per-model lighting", (RT7EffectToggle*)local_140);
            local_138[0] = 110;
            eastl::pair<eastl::stringconst, RSevenDebugDisplay::RT7EffectToggle>::pair<char const(&)[5], void>(
                local_a0, "SSAO", (RT7EffectToggle*)local_138);
            local_130[0] = 30;
            eastl::pair<eastl::stringconst, RSevenDebugDisplay::RT7EffectToggle>::pair<char const(&)[12], void>(
                local_78, "Sun shadows", (RT7EffectToggle*)local_130);
            local_128[0] = 94;
            eastl::pair<eastl::stringconst, RSevenDebugDisplay::RT7EffectToggle>::pair<char const(&)[12], void>(
                local_50, "Transitions", (RT7EffectToggle*)local_128);
            eastl::allocator::allocator(local_158, "EASTL map");
            eastl::map<eastl::string, RSevenDebugDisplay::RT7EffectToggle, eastl::less<eastl::string>,
                       eastl::allocator>::map(local_190, local_118, 6, local_120, local_158);
            puVar4 = local_190;
            std::make_unique<eastl::map<eastl::string, RSevenDebugDisplay::RT7EffectToggle, eastl::less<eastl::string>,
                                        eastl::allocator>,
                             eastl::map<eastl::string, RSevenDebugDisplay::RT7EffectToggle, eastl::less<eastl::string>,
                                        eastl::allocator>>(local_160);
            std::unique_ptr<eastl::map<eastl::string, RSevenDebugDisplay::RT7EffectToggle, eastl::less<eastl::string>,
                                       eastl::allocator>,
                            std::default_delete<eastl::map<eastl::string, RSevenDebugDisplay::RT7EffectToggle,
                                                           eastl::less<eastl::string>, eastl::allocator>>>::
            operator=(
                (unique_ptr<eastl::map<eastl::string, RSevenDebugDisplay::RT7EffectToggle, eastl::less<eastl::string>,
                                       eastl::allocator>,
                            std::default_delete<eastl::map<eastl::string, RSevenDebugDisplay::RT7EffectToggle,
                                                           eastl::less<eastl::string>, eastl::allocator>>>*)local_160,
                puVar4);
            local_160->~unique_ptr();
            local_190->~map();
            lVar3 = 200;
            do {
                this = (RSevenDebugDisplay*)(local_118 + lVar3);
                ~hash_node();
                lVar3 = lVar3 + -40;
            } while (lVar3 != -40);
        }
        std::unique_ptr<eastl::map<eastl::string, RSevenDebugDisplay::RT7EffectToggle, eastl::less<eastl::string>,
                                   eastl::allocator>,
                        std::default_delete<eastl::map<eastl::string, RSevenDebugDisplay::RT7EffectToggle,
                                                       eastl::less<eastl::string>, eastl::allocator>>>::
        operator*((unique_ptr<eastl::map<eastl::string, RSevenDebugDisplay::RT7EffectToggle, eastl::less<eastl::string>,
                                         eastl::allocator>,
                              std::default_delete<eastl::map<eastl::string, RSevenDebugDisplay::RT7EffectToggle,
                                                             eastl::less<eastl::string>, eastl::allocator>>>*)this);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1000644b0, 272 bytes, placed by class name
    // RSevenDebugDisplay::DrawPresetSelectionBox()
    void RSevenDebugDisplay::DrawPresetSelectionBox() {
        undefined1* this_00;
        long lVar1;
        ulong uVar2;
        char cVar3;
        long* plVar4;
        ulong uVar5;
        char* pcVar6;
        Point<float> local_40[15];
        bool local_31;

        this_00 = &field_432;
        plVar4 =
            (long*)shared_ptr<RSevenDebugPresetProvider>::operator->((shared_ptr<RSevenDebugPresetProvider>*)this_00);
        lVar1 = (**(code**)(*plVar4 + 8))(plVar4);
        if (lVar1 == 0) {
            pcVar6 = "No presets";
        } else {
            plVar4 = (long*)shared_ptr<RSevenDebugPresetProvider>::operator->(
                (shared_ptr<RSevenDebugPresetProvider>*)this_00);
            pcVar6 = (char*)(**(code**)(*plVar4 + 16))(plVar4, field_424);
        }
        cVar3 = ImGui::BeginCombo("Preset", pcVar6, 0);
        if (cVar3 != '\0') {
            plVar4 = (long*)shared_ptr<RSevenDebugPresetProvider>::operator->(
                (shared_ptr<RSevenDebugPresetProvider>*)this_00);
            lVar1 = (**(code**)(*plVar4 + 8))(plVar4);
            if (lVar1 != 0) {
                uVar5 = 0;
                do {
                    local_31 = uVar5 == field_424;
                    plVar4 = (long*)shared_ptr<RSevenDebugPresetProvider>::operator->(
                        (shared_ptr<RSevenDebugPresetProvider>*)this_00);
                    pcVar6 = (char*)(**(code**)(*plVar4 + 16))(plVar4, uVar5);
                    jag::math::Point<float>::Point(local_40, 0.0, 0.0);
                    cVar3 = ImGui::Selectable(pcVar6, &local_31, 0, (ImVec2*)local_40);
                    if (cVar3 != '\0') {
                        field_424 = uVar5;
                    }
                    uVar5 = uVar5 + 1;
                    plVar4 = (long*)shared_ptr<RSevenDebugPresetProvider>::operator->(
                        (shared_ptr<RSevenDebugPresetProvider>*)this_00);
                    uVar2 = (**(code**)(*plVar4 + 8))(plVar4);
                } while (uVar5 < uVar2);
            }
            ImGui::EndCombo();
        }
    }

    // 0x1000645c0, 448 bytes, placed by class name
    // RSevenDebugDisplay::DrawPresetManipulationButtons()
    void RSevenDebugDisplay::DrawPresetManipulationButtons() {
        RSevenDebugConfiguration* pRVar2;
        char* pcVar3;
        char cVar4;
        long* plVar5;
        undefined8* puVar6;
        Point<float> local_20[8];

        jag::math::Point<float>::Point(local_20, 0.0, 0.0);
        cVar4 = ImGui::Button("Apply", (ImVec2*)local_20);
        if (cVar4 != '\0') {
            plVar5 = (long*)shared_ptr<RSevenDebugPresetProvider>::operator->(
                (shared_ptr<RSevenDebugPresetProvider>*)&field_432);
            if ((**(code**)(*plVar5 + 8))(plVar5) != 0) {
                plVar5 = (long*)shared_ptr<RSevenDebugPresetProvider>::operator->(
                    (shared_ptr<RSevenDebugPresetProvider>*)&field_432);
                pRVar2 = (RSevenDebugConfiguration*)(**(code**)(*plVar5 + 24))(plVar5, field_424);
                SetConfiguration(this, pRVar2);
            }
        }
        ImGui::SameLine(0.0, -1.0);
        jag::math::Point<float>::Point(local_20, 0.0, 0.0);
        cVar4 = ImGui::Button("Reload", (ImVec2*)local_20);
        if (cVar4 != '\0') {
            plVar5 = (long*)shared_ptr<RSevenDebugPresetProvider>::operator->(
                (shared_ptr<RSevenDebugPresetProvider>*)&field_432);
            (**(code**)(*plVar5 + 32))(plVar5);
        }
        ImGui::SameLine(0.0, -1.0);
        jag::math::Point<float>::Point(local_20, 0.0, 0.0);
        cVar4 = ImGui::Button("Delete", (ImVec2*)local_20);
        if (cVar4 != '\0') {
            plVar5 = (long*)shared_ptr<RSevenDebugPresetProvider>::operator->(
                (shared_ptr<RSevenDebugPresetProvider>*)&field_432);
            (**(code**)(*plVar5 + 56))(plVar5, field_424);
        }
        ImGui::SameLine(0.0, -1.0);
        jag::math::Point<float>::Point(local_20, 0.0, 0.0);
        cVar4 = ImGui::Button("Reset to default", (ImVec2*)local_20);
        if (cVar4 != '\0') {
            plVar5 = (long*)shared_ptr<RSevenDebugPresetProvider>::operator->(
                (shared_ptr<RSevenDebugPresetProvider>*)&field_432);
            (**(code**)(*plVar5 + 40))(plVar5);
        }
        ImGui::SameLine(0.0, -1.0);
        jag::math::Point<float>::Point(local_20, 0.0, 0.0);
        cVar4 = ImGui::Button("Copy preset path", (ImVec2*)local_20);
        if (cVar4 != '\0') {
            puVar6 = (undefined8*)shared_ptr<RSevenDebugPresetProvider>::operator->(
                (shared_ptr<RSevenDebugPresetProvider>*)&field_432);
            pcVar3 = (char*)(**(code**)*puVar6)(puVar6);
            ImGui::SetClipboardText(pcVar3);
        }
    }

    // 0x100064780, 272 bytes, placed by class name
    // RSevenDebugDisplay::DrawPresetSaveInterface()
    void RSevenDebugDisplay::DrawPresetSaveInterface() {
        char* pcVar2;
        ulong uVar3;
        long* plVar4;
        undefined8 uVar5;
        RSevenDebugConfiguration local_198;
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar3 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::capacity();
        ImGui::InputText("Preset name", pcVar2, uVar3, 0, (_func_int_ImGuiInputTextCallbackData_ptr*)0, (void*)0);
        new (&local_198) jag::math::Point<float>(0.0, 0.0);
        if (ImGui::Button("Save", (ImVec2*)&local_198) != '\0') {
            new (&local_198) RSevenDebugConfiguration();
            GetConfiguration(this, &local_198);
            plVar4 = (long*)shared_ptr<RSevenDebugPresetProvider>::operator->(
                (shared_ptr<RSevenDebugPresetProvider>*)&field_432);
            uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            (**(code**)(*plVar4 + 48))(plVar4, uVar5, &local_198);
            local_198.~RSevenDebugConfiguration();
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100064a60, 368 bytes, base-object constructor, placed by neighbouring functions
    // FileRSevenDebugPresetProvider::FileRSevenDebugPresetProvider()
    void FileRSevenDebugPresetProvider::FileRSevenDebugPresetProvider() {
        CharReader* pCVar2;
        char* pcVar3;
        unique_ptr<Json::CharReader, std::default_delete<Json::CharReader>> local_170[8];
        FileRSevenDebugPresetProvider local_168[5];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new (this) RSevenDebugPresetProvider();
        field_0 = &PTR_PresetLocation_100ef27d8;
        new (&field_8) eastl::vector<FileRSevenDebugPresetProvider::RSevenDebugPreset, eastl::allocator>();
        std::unique_ptr<Json::CharReader, std::default_delete<Json::CharReader>>::unique_ptr<true, void>(
            (unique_ptr<Json::CharReader, std::default_delete<Json::CharReader>>*)&field_40);
        new (&field_48) eastl::string();
        new (local_168) Json::CharReaderBuilder();
        pCVar2 = (CharReader*)local_168->newCharReader();
        std::unique_ptr<Json::CharReader, std::default_delete<Json::CharReader>>::unique_ptr<true, void>(local_170,
                                                                                                         pCVar2);
        std::unique_ptr<Json::CharReader, std::default_delete<Json::CharReader>>::operator=(
            (unique_ptr<Json::CharReader, std::default_delete<Json::CharReader>>*)&field_40, (unique_ptr*)local_170);
        std::unique_ptr<Json::CharReader, std::default_delete<Json::CharReader>>::~unique_ptr(local_170);
        local_168->~CharReaderBuilder();
        GetPresetDirectory(local_168);
        pcVar3 = (char*)local_168->GetName();
        (&field_48, pcVar3)->assign();
        if (local_168->Exists() == '\0') {
            (*(code*)field_0[5])(this);
        } else {
            (*(code*)field_0[4])(this);
        }
        local_168->~pair();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100064c60, 160 bytes, placed by neighbouring functions
    // FileRSevenDebugPresetProvider::GetPresetDirectory() const
    FileRSevenDebugPresetProvider* FileRSevenDebugPresetProvider::GetPresetDirectory() {
        char* pcVar1;
        Filename local_158[19];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pcVar1 = (char*)GetDefaultUserFolder();
        GameShell3Cache::GetOSRSCacheFolderName();
        Filename::operator/(local_158, pcVar1);
        Filename::operator/((Filename*)this, (char*)local_158);
        local_158->~pair();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return this;
    }

    // 0x100064d10, 16 bytes, complete-object constructor, placed by neighbouring functions
    // FileRSevenDebugPresetProvider::FileRSevenDebugPresetProvider(): jumps straight to the base-object constructor

    // 0x100064d20, 16 bytes, placed by neighbouring functions
    // FileRSevenDebugPresetProvider::PresetLocation() const
    void FileRSevenDebugPresetProvider::PresetLocation() {
        eastl::basic_string<char, BucketAllocatorEASTL>::begin();
    }

    // 0x100064d30, 16 bytes, placed by neighbouring functions
    // FileRSevenDebugPresetProvider::PresetCount() const
    void FileRSevenDebugPresetProvider::PresetCount() {
        (&field_8)->size();
    }

    // 0x100064d60, 96 bytes, placed by __FILE__ string
    // FileRSevenDebugPresetProvider::PresetName(unsigned long) const
    void FileRSevenDebugPresetProvider::PresetName(ulong param_1) {
        if ((*(code*)field_0[1])() <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("i < PresetCount()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/debug/"
                      "RSevenDebugDisplay.cpp",
                      615, "Preset index out-of-bounds.");
        }
        eastl::vector<FileRSevenDebugPresetProvider::RSevenDebugPreset, eastl::allocator>::operator[](
            (vector<FileRSevenDebugPresetProvider::RSevenDebugPreset, eastl::allocator>*)&field_8, param_1);
        eastl::basic_string<char, BucketAllocatorEASTL>::begin();
    }

    // 0x100064e10, 80 bytes, placed by __FILE__ string
    // FileRSevenDebugPresetProvider::PresetConfiguration(unsigned long) const
    void FileRSevenDebugPresetProvider::PresetConfiguration(ulong param_1) {
        if ((*(code*)field_0[1])() <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("i < PresetCount()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/debug/"
                      "RSevenDebugDisplay.cpp",
                      621, "Preset index out-of-bounds.");
        }
        eastl::vector<FileRSevenDebugPresetProvider::RSevenDebugPreset, eastl::allocator>::operator[](
            (vector<FileRSevenDebugPresetProvider::RSevenDebugPreset, eastl::allocator>*)&field_8, param_1);
    }

    // 0x100064e60, 464 bytes, placed by __FILE__ string
    // FileRSevenDebugPresetProvider::Reload()
    void FileRSevenDebugPresetProvider::Reload() {
        char cVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        Filename* this_00;
        Filename* pFVar4;
        ClientCompositeZone* this_01;
        File* pFVar5;
        Filename local_190[2];
        undefined1 local_170[8];
        FileRSevenDebugPresetProvider local_168[5];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        (&field_8)->clear();
        GetPresetDirectory((FileRSevenDebugPresetProvider*)(local_170 + 8));
        cVar1 = ((local_170 + 8))->Exists();
        if (cVar1 != '\0') {
            local_190->GetAllFiles();
            uVar2 = local_190->HeapBeginPtr();
            uVar3 = local_190->end();
            eastl::sort<Filename*, FileRSevenDebugPresetProvider::Reload()::__3>(uVar2, uVar3);
            this_00 = (Filename*)local_190->HeapBeginPtr();
            pFVar4 = (Filename*)local_190->end();
            if (this_00 != pFVar4) {
                do {
                    std::make_unique<File, Filename_const&, int const&>((Filename*)local_170, (int*)this_00);
                    this_01 = (ClientCompositeZone*)std::unique_ptr<File, std::default_delete<File>>::operator->(
                        (unique_ptr<File, std::default_delete<File>>*)local_170);
                    cVar1 = this_01->IsValid();
                    if (cVar1 == '\0') {
                    LAB_100064f6d:
                        uVar2 = logger::default_logger();
                        uVar3 = this_00->GetName();
                        logger::Logger::Log(uVar2, 0, 3,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                            "osclient/debug/RSevenDebugDisplay.cpp",
                                            639, "Could not load preset file %s", uVar3);
                    } else {
                        pFVar5 = (File*)std::unique_ptr<File, std::default_delete<File>>::operator*(
                            (unique_ptr<File, std::default_delete<File>>*)local_170);
                        cVar1 = AddPresetFromFile(this, this_00, pFVar5);
                        if (cVar1 == '\0')
                            goto LAB_100064f6d;
                    }
                    local_170->~unique_ptr();
                    this_00 = this_00 + 19;
                } while (this_00 != pFVar4);
            }
            local_190->~vector();
        }
        ((local_170 + 8))->~pair();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1000650d0, 592 bytes, placed by neighbouring functions
    // FileRSevenDebugPresetProvider::AddPresetFromFile(Filename const&, File const&)
    ulong FileRSevenDebugPresetProvider::AddPresetFromFile(Filename* param_1, File* param_2) {
        uint uVar2;
        ulong uVar3;
        char* pcVar4;
        long lVar5;
        long lVar6;
        long* plVar7;
        undefined8 uVar8;
        undefined8 uVar9;
        Value local_370[40];
        undefined1 local_348[24];
        eastl::string local_318[32];
        undefined1 local_2f8[704];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::string::basic_string(local_318);
        uVar3 = param_2->length(0);
        eastl::string::set_capacity(local_318, uVar3);
        uVar3 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::capacity();
        eastl::string::force_size(local_318, uVar3);
        Json::Value::Value(local_370);
        pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar2 = param_2->length(0);
        lVar5 = param_2->read(pcVar4, uVar2, 0, 0);
        lVar6 = param_2->length(0);
        if (lVar5 == lVar6) {
            plVar7 = (long*)std::unique_ptr<Json::CharReader, std::default_delete<Json::CharReader>>::operator->(
                (unique_ptr<Json::CharReader, std::default_delete<Json::CharReader>>*)&field_40);
            uVar8 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar9 = eastl::basic_string<char, BucketAllocatorEASTL>::end();
            if ((**(code**)(*plVar7 + 16))(plVar7, uVar8, uVar9, local_370, 0) != '\0') {
                new (local_2f8) RSevenDebugPreset();
                Filename::operator=((Filename*)(local_2f8 + 368), param_1);
                ((local_348 + 24))->GetFile();
                StripExtensionIfPresent<eastl::basic_string<char, BucketAllocatorEASTL>>(
                    (FileRSevenDebugPresetProvider*)local_348, (basic_string*)(local_348 + 24));
                pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                ((local_2f8 + 672))->assign(pcVar4);
                local_348->~basic_string();
                ((local_348 + 24))->~basic_string();
                JsonDeserialize<RSevenDebugConfiguration>(local_370, (RSevenDebugConfiguration*)local_2f8);
                (&field_8, (RSevenDebugPreset*)local_2f8)->push_back();
                local_2f8->~RSevenDebugPreset();
                uVar3 = CONCAT71((int7)((ulong)plVar7 >> 8), 1);
                goto LAB_100065276;
            }
        }
        uVar3 = 0;
    LAB_100065276:
        Json::Value::~Value(local_370);
        eastl::string::~basic_string(local_318);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar3 & 4294967295;
    }

    // 0x100065330, 96 bytes, placed by __FILE__ string
    // FileRSevenDebugPresetProvider::Reset()
    void FileRSevenDebugPresetProvider::Reset() {
        undefined8 uVar2;

        if (ClearPresetDirectory() == '\0') {
            uVar2 = logger::default_logger();
            logger::Logger::Log(uVar2, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "debug/RSevenDebugDisplay.cpp",
                                649, "Could not clear preset directory");
        }
        AddDefaultConfigurations(this);
        (*(code*)field_0[4])(this);
    }

    // 0x100065390, 288 bytes, placed by neighbouring functions
    // FileRSevenDebugPresetProvider::ClearPresetDirectory() const
    ulong FileRSevenDebugPresetProvider::ClearPresetDirectory() {
        char cVar1;
        Filename* this;
        Filename* pFVar2;
        undefined8 unaff_R14;
        ulong uVar3;
        Filename local_178[2];
        FileRSevenDebugPresetProvider local_158[5];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        GetPresetDirectory(local_158);
        cVar1 = local_158->Exists();
        uVar3 = CONCAT71((int7)((ulong)unaff_R14 >> 8), 1);
        if (cVar1 != '\0') {
            local_178->GetAllFiles();
            this = (Filename*)local_178->HeapBeginPtr();
            pFVar2 = (Filename*)local_178->end();
            for (; this != pFVar2; this = this + 19) {
                cVar1 = Remove(0);
                if (cVar1 == '\0') {
                    local_178->~vector();
                    uVar3 = 0;
                    goto LAB_100065447;
                }
            }
            local_178->~vector();
        }
    LAB_100065447:
        local_158->~pair();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar3 & 4294967295;
    }

    // 0x1000654b0, 1152 bytes, placed by neighbouring functions
    // FileRSevenDebugPresetProvider::AddDefaultConfigurations()
    void FileRSevenDebugPresetProvider::AddDefaultConfigurations() {
        map<eastl::string, bool, eastl::less<eastl::string>, eastl::allocator>* this_00;
        undefined1* puVar1;
        allocator local_310[8];
        RSevenDebugConfiguration local_308;
        undefined1 local_198[136];
        undefined8 local_110;
        undefined4 local_f0;
        undefined1 local_dc;
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        ___bzero((RSevenDebugConfiguration*)local_198, 368);
        new (local_198) RSevenDebugConfiguration();
        eastl::allocator::allocator(local_310, "EASTL basic_string");
        new (&local_308) eastl::string("Discretized luminance", local_310);
        this_00 = (map<eastl::string, bool, eastl::less<eastl::string>, eastl::allocator>*)(local_198 + 8);
        puVar1 = (undefined1*)eastl::map<eastl::string, bool, eastl::less<eastl::string>, eastl::allocator>::operator[](
            this_00, (basic_string*)&local_308);
        *puVar1 = 1;
        local_308.~basic_string();
        eastl::allocator::allocator(local_310, "EASTL basic_string");
        new (&local_308) eastl::string("Per-model lighting", local_310);
        puVar1 = (undefined1*)eastl::map<eastl::string, bool, eastl::less<eastl::string>, eastl::allocator>::operator[](
            this_00, (basic_string*)&local_308);
        *puVar1 = 1;
        local_308.~basic_string();
        eastl::allocator::allocator(local_310, "EASTL basic_string");
        new (&local_308) eastl::string("SSAO", local_310);
        puVar1 = (undefined1*)eastl::map<eastl::string, bool, eastl::less<eastl::string>, eastl::allocator>::operator[](
            this_00, (basic_string*)&local_308);
        *puVar1 = 0;
        local_308.~basic_string();
        eastl::allocator::allocator(local_310, "EASTL basic_string");
        new (&local_308) eastl::string("Sun shadows", local_310);
        puVar1 = (undefined1*)eastl::map<eastl::string, bool, eastl::less<eastl::string>, eastl::allocator>::operator[](
            this_00, (basic_string*)&local_308);
        *puVar1 = 0;
        local_308.~basic_string();
        eastl::allocator::allocator(local_310, "EASTL basic_string");
        new (&local_308) eastl::string("Transitions", local_310);
        puVar1 = (undefined1*)eastl::map<eastl::string, bool, eastl::less<eastl::string>, eastl::allocator>::operator[](
            this_00, (basic_string*)&local_308);
        *puVar1 = 0;
        local_308.~basic_string();
        local_dc = 0;
        (*(code*)field_0[6])(this, "Fake SD", local_198);
        ___bzero(&local_308, 368);
        new (&local_308) RSevenDebugConfiguration();
        RSevenDebugConfiguration::operator=((RSevenDebugConfiguration*)local_198, &local_308);
        local_308.~RSevenDebugConfiguration();
        eastl::allocator::allocator(local_310, "EASTL basic_string");
        new (&local_308) eastl::string("Discretized luminance", local_310);
        puVar1 = (undefined1*)eastl::map<eastl::string, bool, eastl::less<eastl::string>, eastl::allocator>::operator[](
            this_00, (basic_string*)&local_308);
        *puVar1 = 0;
        local_308.~basic_string();
        eastl::allocator::allocator(local_310, "EASTL basic_string");
        new (&local_308) eastl::string("Per-model lighting", local_310);
        puVar1 = (undefined1*)eastl::map<eastl::string, bool, eastl::less<eastl::string>, eastl::allocator>::operator[](
            this_00, (basic_string*)&local_308);
        *puVar1 = 0;
        local_308.~basic_string();
        eastl::allocator::allocator(local_310, "EASTL basic_string");
        new (&local_308) eastl::string("SSAO", local_310);
        puVar1 = (undefined1*)eastl::map<eastl::string, bool, eastl::less<eastl::string>, eastl::allocator>::operator[](
            this_00, (basic_string*)&local_308);
        *puVar1 = 1;
        local_308.~basic_string();
        eastl::allocator::allocator(local_310, "EASTL basic_string");
        new (&local_308) eastl::string("Sun shadows", local_310);
        puVar1 = (undefined1*)eastl::map<eastl::string, bool, eastl::less<eastl::string>, eastl::allocator>::operator[](
            this_00, (basic_string*)&local_308);
        *puVar1 = 1;
        local_308.~basic_string();
        eastl::allocator::allocator(local_310, "EASTL basic_string");
        new (&local_308) eastl::string("Transitions", local_310);
        puVar1 = (undefined1*)eastl::map<eastl::string, bool, eastl::less<eastl::string>, eastl::allocator>::operator[](
            this_00, (basic_string*)&local_308);
        *puVar1 = 1;
        local_308.~basic_string();
        local_dc = 1;
        local_110 = 4790141153661943810;
        local_f0 = 1082130432;
        (*(code*)field_0[6])(this, "Full HD", local_198);
        local_198->~RSevenDebugConfiguration();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100065930, 752 bytes, placed by __FILE__ string
    // FileRSevenDebugPresetProvider::SavePreset(char const*, RSevenDebugConfiguration const&)
    void FileRSevenDebugPresetProvider::SavePreset(char* param_1, RSevenDebugConfiguration* param_2) {
        char cVar1;
        undefined8 uVar2;
        char* pcVar3;
        ClientCompositeZone* this_00;
        File* this_01;
        long lVar4;
        long lVar5;
        eastl::string local_2f8[32];
        allocator local_2d8[32];
        allocator local_2b8[8];
        Filename local_2b0[2];
        Filename local_290[19];
        FileRSevenDebugPresetProvider local_160[5];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        GetPresetDirectory(local_160);
        cVar1 = local_160->Exists();
        if (cVar1 == '\0') {
            cVar1 = local_160->CreateDirectories(0);
            if (cVar1 == '\0') {
                uVar2 = logger::default_logger();
                logger::Logger::Log(uVar2, 0, 3,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/debug/RSevenDebugDisplay.cpp",
                                    662, "Could not create preset file directory to save %s.", param_1);
            }
        }
        JsonSerialize<RSevenDebugConfiguration>((oldscape*)local_290, param_2);
        Json::Value::toStyledString();
        pcVar3 = (char*)local_2b0->c_str();
        eastl::allocator::allocator(local_2d8, "EASTL basic_string");
        eastl::string::basic_string(local_2f8, pcVar3, local_2d8);
        local_2b0->~string();
        local_290->~Value();
        eastl::allocator::allocator(local_2b8, "EASTL basic_string");
        new (local_2d8) eastl::string(param_1, local_2b8);
        eastl::operator+((eastl*)local_2b0, (basic_string*)local_2d8, (value_type*)".json");
        Filename::operator/(local_290, (Filename*)local_160, (fixed_string*)local_2b0);
        local_2b0->~basic_string();
        local_2d8->~basic_string();
        std::make_unique<File, Filename&, int const&>(local_2b0, (int*)local_290);
        this_00 = (ClientCompositeZone*)std::unique_ptr<File, std::default_delete<File>>::operator->(
            (unique_ptr<File, std::default_delete<File>>*)local_2b0);
        cVar1 = this_00->IsValid();
        if (cVar1 != '\0') {
            this_01 = (File*)std::unique_ptr<File, std::default_delete<File>>::operator->(
                (unique_ptr<File, std::default_delete<File>>*)local_2b0);
            lVar4 = this_01->write(local_2f8, 0);
            lVar5 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            if (lVar4 == lVar5)
                goto LAB_100065b2c;
        }
        uVar2 = logger::default_logger();
        logger::Logger::Log(uVar2, 0, 3,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/debug/"
                            "RSevenDebugDisplay.cpp",
                            671, "Could not write preset file %s.", param_1);
    LAB_100065b2c:
        (*(code*)field_0[4])(this);
        local_2b0->~unique_ptr();
        local_290->~pair();
        eastl::string::~basic_string(local_2f8);
        local_160->~pair();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100065c50, 208 bytes, placed by __FILE__ string
    // FileRSevenDebugPresetProvider::DeletePreset(unsigned long)
    void FileRSevenDebugPresetProvider::DeletePreset(ulong param_1) {
        long lVar3;
        undefined8 uVar4;
        undefined8 uVar5;

        if ((*(code*)field_0[1])() <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("i < PresetCount()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/debug/"
                      "RSevenDebugDisplay.cpp",
                      679, "Preset index out-of-bounds.");
        }
        lVar3 = eastl::vector<FileRSevenDebugPresetProvider::RSevenDebugPreset, eastl::allocator>::operator[](
            (vector<FileRSevenDebugPresetProvider::RSevenDebugPreset, eastl::allocator>*)&field_8, param_1);
        if (((lVar3 + 368))->RemoveFile(0) == '\0') {
            uVar4 = logger::default_logger();
            eastl::vector<FileRSevenDebugPresetProvider::RSevenDebugPreset, eastl::allocator>::operator[](
                (vector<FileRSevenDebugPresetProvider::RSevenDebugPreset, eastl::allocator>*)&field_8, param_1);
            uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            logger::Logger::Log(uVar4, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "debug/RSevenDebugDisplay.cpp",
                                682, "Could not delete preset file %s.", uVar5);
        }
        (*(code*)field_0[4])(this);
    }

} // namespace jag::oldscape
