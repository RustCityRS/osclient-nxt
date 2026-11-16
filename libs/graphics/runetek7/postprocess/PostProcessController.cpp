// libs/graphics/runetek7/postprocess/PostProcessController.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "PostProcessController.h"

namespace jag::graphics {
    // 0x100f438a0, 80 bytes, __data
    PostProcessController::m_Operators__ = {
        0, 0, 14649548, 1, 1, 0, 14649570, 1, 2, 0, 14649592, 1, 3, 0, 14649606, 1, 4, 0, 14649624, 1,
    };

    // 0x100f438f0, 64 bytes, __data
    PostProcessController::m_fxaaQuality__ = {
        0, 0, 14649637, 1, 1, 0, 14649648, 1, 2, 0, 14649659, 1, 3, 0, 14649670, 1,
    };

    // 0x100f43930, 96 bytes, __data
    PostProcessController::m_kawaseKernelSize__ = {
        0, 0, 14649681, 1, 1, 0, 14649685, 1, 2, 0, 14649691, 1,
        3, 0, 14649697, 1, 4, 0, 14649703, 1, 5, 0, 14649709, 1,
    };

    // 0x100f43990, 80 bytes, __data
    PostProcessController::m_dualFilteringBlurKernelSize__ = {
        0, 0, 14649681, 1, 1, 0, 14649717, 1, 2, 0, 14649723, 1, 3, 0, 14649729, 1, 4, 0, 14649735, 1,
    };

    // 0x100f439e0, 60 bytes, __data
    PostProcessController::m_bloomQuality__ = {
        0, 0, 14649743, 1, 1, 0, 14649756, 1, 2, 0, 14649769, 1, 0, 0, 0,
    };

    // 0x103bbd398, 16 bytes, __common; set at startup by ___cxx_global_var_init.141
    StringEnum PostProcessController::m_Operators =
        StringEnum((StringEnumEntry*)&PostProcessController::m_Operators__, 5);

    // 0x103bbd3a8, 16 bytes, __common; set at startup by ___cxx_global_var_init.146
    StringEnum PostProcessController::m_fxaaQuality =
        StringEnum((StringEnumEntry*)&PostProcessController::m_fxaaQuality__, 4);

    // 0x103bbd3b8, 16 bytes, __common; set at startup by ___cxx_global_var_init.153
    StringEnum PostProcessController::m_kawaseKernelSize =
        StringEnum((StringEnumEntry*)&PostProcessController::m_kawaseKernelSize__, 6);

    // 0x103bbd3c8, 16 bytes, __common; set at startup by ___cxx_global_var_init.158
    StringEnum PostProcessController::m_dualFilteringBlurKernelSize =
        StringEnum((StringEnumEntry*)&PostProcessController::m_dualFilteringBlurKernelSize__, 5);

    // 0x103bbd3d8, 16 bytes, __common; set at startup by ___cxx_global_var_init.162
    StringEnum PostProcessController::m_bloomQuality =
        StringEnum((StringEnumEntry*)&PostProcessController::m_bloomQuality__, 3);

    // 0x10000b300: the linker folded this into eastl::string::Layout::SetHeapSize(unsigned long), which has identical code
    PostProcessController::SetRT7Core(RT7Core*);

    // 0x1007df2f0, 400 bytes, placed by class name and debug map
    // PostProcessController::SetPostProcessManager(postprocess::PostProcessManager*)
    void PostProcessController::SetPostProcessManager(PostProcessManager* param_1) {
        char cVar1;
        MapArea* this_00;
        long lVar2;
        undefined1 local_2a0[40];
        Transitionable<float> local_278[32];
        Transitionable<float> local_258[64];
        Transitionable<float> local_218[84];
        undefined1 local_1c4;
        undefined1 local_1bf;
        Transitionable<float> local_f8[96];
        undefined1 local_98;
        undefined4 local_94;
        float local_2c;

        if (param_1 == (PostProcessManager*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("postProcessManager != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "postprocess/PostProcessController.cpp",
                      53, (char*)0);
        }
        field_0 = param_1;
        this_00 = (MapArea*)Instance();
        lVar2 = this_00->GetOrigin();
        while (cVar1 = field_16->empty(), cVar1 == '\0') {
            field_16->pop();
        }
        new (local_2a0) Config();
        if (param_1->GetAvgLuminanceFilter() == 0) {
            local_98 = 0;
            local_f8[44] = (Transitionable<float>)0;
        } else {
            local_98 = 1;
            local_f8[44] = (Transitionable<float>)1;
            if (*(char*)(lVar2 + 157) == '\0' && *(char*)(lVar2 + 158) == '\0') {
                local_f8[44] = (Transitionable<float>)*(undefined1*)(lVar2 + 159);
            }
        }
        local_1c4 = 1;
        local_1bf = *(undefined1*)(lVar2 + 165);
        local_94 = 3;
        math::Transitionable<float>::operator=((Transitionable<float>*)(local_2a0 + 8), (float*)&DEF_RS_MIN_BLACK_LUM);
        math::Transitionable<float>::operator=(local_278, (float*)&DEF_RS_MAX_WHITE_LUM);
        math::Transitionable<float>::operator=(local_258, (float*)&DEF_RS_EXPOSURE_KEY);
        math::Transitionable<float>::operator=(local_218, (float*)&DEF_RS_MAX_AUTO_EXPOSURE);
        local_2c = 1.0;
        math::Transitionable<float>::operator=(local_f8, &local_2c);
        PushConfig((Config*)this);
        local_2a0->~Config();
    }

    // 0x1007df4b0, 48 bytes, placed by class name and debug map
    // PostProcessController::PushConfig(PostProcessController::Config const&)
    void PostProcessController::PushConfig(Config* param_1) {
        Config* pCVar1;

        eastl::stack<PostProcessController::Config, eastl::fixed_vector<PostProcessController::Config, 2ul, true,
                                                                        eastl::allocator>>::push((Config*)&param_1
                                                                                                     ->field_16);
        pCVar1 = (Config*)GetCurrentConfig((PostProcessController*)param_1);
        ApplyConfig((PostProcessController*)param_1, pCVar1);
    }

    // 0x1007df4e0, 80 bytes, placed by class name and debug map
    // PostProcessController::Update(float)
    void PostProcessController::Update(float param_1) {
        Config* pCVar1;
        ulonglong uVar2;

        pCVar1 = (Config*)GetCurrentConfig(this);
        uVar2 = FrameTime::GetCurrentTimeMS();
        (&pCVar1->field_208, uVar2)->DoTransition();
        ApplyConfig(this, pCVar1);
    }

    // 0x1007df530, 1136 bytes, placed by class name and debug map
    // PostProcessController::ApplyConfig(PostProcessController::Config const&)
    void PostProcessController::ApplyConfig(Config* param_1) {
        int iVar1;
        bool bVar2;
        uint uVar3;
        void* pvVar4;
        shared_ptr* psVar5;
        long lVar6;
        ColourGradingBloomEffect* this_00;
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                    eastl::allocator>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>* this_01;
        int* piVar7;
        shared_ptr<render::Texture>* psVar8;
        DebugUIElement* pDVar9;
        FXAAEffect* pFVar10;
        OutlineAndShadowEffect* this_02;
        DepthOfFieldEffect* this_03;
        shared_ptr* extraout_RDX;
        shared_ptr* extraout_RDX_00;
        shared_ptr* extraout_RDX_01;
        shared_ptr* extraout_RDX_02;
        shared_ptr* extraout_RDX_03;
        ulong uVar11;
        undefined1 local_1c0[336];
        array<postprocess::ColourCorrectionConfig::Remapping, 3ul>* local_70;
        long local_68;
        Config* local_60;
        shared_ptr local_58;
        array<shared_ptr<render::Texture>, 3ul>* local_48;
        undefined1 local_40[16];

        if (field_0 == (PostProcessManager*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_postProcessManager != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "postprocess/PostProcessController.cpp",
                      287, (char*)0);
        }
        pvVar4 = (void*)field_0->second();
        _memcpy(pvVar4, &param_1->field_8, 193);
        psVar5 = (shared_ptr*)(field_0, 1)->GetEffect();
        bVar2 = shared_ptr::operator_cast_to_bool(psVar5);
        if (bVar2) {
            static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(&local_58, (jag*)psVar5,
                                                                                         extraout_RDX);
            new (local_1c0)
                postprocess::ColourGradingBloomEffectConfig((ColourGradingBloomEffectConfig*)&param_1->field_208);
            lVar6 = field_0->GetAvgLuminanceFilter();
            if (lVar6 == 0) {
                local_1c0[260] = false;
                local_1c0[312] = false;
            }
            this_00 = (ColourGradingBloomEffect*)shared_ptr<postprocess::ColourGradingBloomEffect>::operator->(
                (shared_ptr<postprocess::ColourGradingBloomEffect>*)&local_58);
            this_00->SetConfig(local_1c0);
            local_60 = param_1;
            local_40._8_8_ = this;
            this_01 =
                (compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                             eastl::allocator>>::Layout,
                                     eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>*)
                    shared_ptr<postprocess::ColourGradingBloomEffect>::operator->(
                        (shared_ptr<postprocess::ColourGradingBloomEffect>*)&local_58);
            local_68 = eastl::compressed_pair_imp<
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
                eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>::second(this_01);
            local_70 = (array<postprocess::ColourCorrectionConfig::Remapping, 3ul>*)(local_68 + 20);
            local_48 = (array<shared_ptr<render::Texture>, 3ul>*)(local_68 + 48);
            psVar5 = (shared_ptr*)(local_1c0 + 320);
            uVar11 = 0;
            do {
                piVar7 =
                    (int*)std::array<postprocess::ColourCorrectionConfig::Remapping, 3ul>::operator[](local_70, uVar11);
                iVar1 = *piVar7;
                if (iVar1 < 0) {
                    new (psVar5) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
                    psVar8 = (shared_ptr<render::Texture>*)std::array<shared_ptr<render::Texture>, 3ul>::operator[](
                        local_48, uVar11);
                    shared_ptr<render::Texture>::operator=(psVar8, psVar5);
                } else {
                    new (local_40) callstack::Callstack();
                    local_40->AddFormatType(5);
                    if (*(undefined8*)(local_40._8_8_ + 8) == 0) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("m_rt7Core != nullptr",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "runetek7/postprocess/PostProcessController.cpp",
                                  316, (char*)0);
                    }
                    uVar3 = (*(RT7Core**)(local_40._8_8_ + 8))->GetTextureManager();
                    TextureManager::GetHALTexture((TextureType*)psVar5, uVar3,
                                                  (TextureFormatBitSet)(uint)TextureType::SPRITE, SUB41(iVar1, 0),
                                                  local_40[0]);
                    psVar8 = (shared_ptr<render::Texture>*)std::array<shared_ptr<render::Texture>, 3ul>::operator[](
                        local_48, uVar11);
                    shared_ptr<render::Texture>::operator=(psVar8, psVar5);
                }
                psVar5->~shared_ptr();
                uVar11 = uVar11 + 1;
            } while (uVar11 != 3);
            local_1c0->~ColourGradingBloomEffectConfig();
            local_58.~shared_ptr();
            this = (PostProcessController*)local_40._8_8_;
            param_1 = local_60;
        }
        psVar5 = (shared_ptr*)(field_0, 2)->GetEffect();
        bVar2 = shared_ptr::operator_cast_to_bool(psVar5);
        if (bVar2) {
            static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>((shared_ptr*)local_1c0,
                                                                                         (jag*)psVar5, extraout_RDX_00);
            pDVar9 = (DebugUIElement*)shared_ptr<postprocess::FXAAEffect>::operator->(
                (shared_ptr<postprocess::FXAAEffect>*)local_1c0);
            pDVar9->NotifyDebugRegistration((bool)param_1->field_528);
            pFVar10 = (FXAAEffect*)shared_ptr<postprocess::FXAAEffect>::operator->(
                (shared_ptr<postprocess::FXAAEffect>*)local_1c0);
            pFVar10->SetQuality(param_1->field_532);
            local_1c0->~shared_ptr();
        }
        psVar5 = (shared_ptr*)(field_0, 3)->GetEffect();
        bVar2 = shared_ptr::operator_cast_to_bool(psVar5);
        if (bVar2) {
            static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>((shared_ptr*)local_1c0,
                                                                                         (jag*)psVar5, extraout_RDX_01);
            pDVar9 = (DebugUIElement*)shared_ptr<postprocess::OutlineAndShadowEffect>::operator->(
                (shared_ptr<postprocess::OutlineAndShadowEffect>*)local_1c0);
            pDVar9->NotifyDebugRegistration((bool)param_1->field_536);
            this_02 = (OutlineAndShadowEffect*)shared_ptr<postprocess::OutlineAndShadowEffect>::operator->(
                (shared_ptr<postprocess::OutlineAndShadowEffect>*)local_1c0);
            this_02->SetConfig((OutlineAndShadowEffectConfig*)((long)&param_1->field_537 + 3));
            local_1c0->~shared_ptr();
        }
        psVar5 = (shared_ptr*)(field_0, 4)->GetEffect();
        bVar2 = shared_ptr::operator_cast_to_bool(psVar5);
        if (bVar2) {
            static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>((shared_ptr*)local_1c0,
                                                                                         (jag*)psVar5, extraout_RDX_02);
            pDVar9 = (DebugUIElement*)shared_ptr<postprocess::EquirectangularEffect>::operator->(
                (shared_ptr<postprocess::EquirectangularEffect>*)local_1c0);
            pDVar9->NotifyDebugRegistration(*(bool*)&param_1->field_552);
            local_1c0->~shared_ptr();
        }
        psVar5 = (shared_ptr*)(field_0, 6)->GetEffect();
        bVar2 = shared_ptr::operator_cast_to_bool(psVar5);
        if (bVar2) {
            static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>((shared_ptr*)local_1c0,
                                                                                         (jag*)psVar5, extraout_RDX_03);
            pDVar9 = (DebugUIElement*)shared_ptr<postprocess::DepthOfFieldEffect>::operator->(
                (shared_ptr<postprocess::DepthOfFieldEffect>*)local_1c0);
            pDVar9->NotifyDebugRegistration(*(bool*)((long)&param_1->field_552 + 1));
            this_03 = (DepthOfFieldEffect*)shared_ptr<postprocess::DepthOfFieldEffect>::operator->(
                (shared_ptr<postprocess::DepthOfFieldEffect>*)local_1c0);
            this_03->SetConfig((DepthOfFieldEffectConfig*)((long)&param_1->field_554 + 2));
            local_1c0->~shared_ptr();
        }
    }

    // 0x1007df9b0, 64 bytes, placed by class name and debug map
    // PostProcessController::PopConfig()
    void PostProcessController::PopConfig() {
        ulong uVar1;
        Config* pCVar2;

        uVar1 = field_16->size();
        if (1 < uVar1) {
            field_16->pop();
            pCVar2 = (Config*)GetCurrentConfig(this);
            ApplyConfig(this, pCVar2);
        }
    }

    // 0x1007dfa00, 3856 bytes, placed by class name and debug map
    // PostProcessController::RegisterTweaks(tweak::ContainerGroup&)
    void PostProcessController::RegisterTweaks(ContainerGroup* param_1) {
        PostProcessController* pPVar1;
        bool bVar2;
        long lVar3;
        bool* pbVar4;
        Container* pCVar5;
        MapArea* this_00;
        char* pcVar6;
        long lVar7;
        shared_ptr* psVar8;
        shared_ptr* extraout_RDX;
        shared_ptr* extraout_RDX_00;
        shared_ptr* extraout_RDX_01;
        shared_ptr<tweak::Container> local_b0[16];
        shared_ptr* local_a0;
        PostProcessController* local_90;
        shared_ptr local_88;
        bool* local_78[2];
        shared_ptr local_68[3];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (field_0 == (PostProcessManager*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_postProcessManager != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "postprocess/PostProcessController.cpp",
                      130, (char*)0);
        }
        local_90 = this;
        lVar3 = field_16->size();
        if (lVar3 != 1) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_configStack.size() == 1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "postprocess/PostProcessController.cpp",
                      131, (char*)0);
        }
        pbVar4 = (bool*)field_16->top();
        new (local_78) eastl::allocator("EASTL basic_string");
        new (local_68) eastl::string("PostProcessing", local_78);
        (*(code*)param_1->field_0[30])(&local_88, param_1, local_68);
        local_68->~basic_string();
        pCVar5 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)&local_88);
        pPVar1 = local_90;
        pCVar5->AddCheckBox("PostProcessingEnabled", pbVar4);
        pCVar5 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)&local_88);
        pCVar5->AddCheckBox("AdaptiveLumEnabled", pbVar4 + 200);
        pCVar5 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)&local_88);
        std::function<void(tweak::Event_const&)>::function<
            PostProcessController::RegisterTweaks(tweak::ContainerGroup&)::__17, void>(local_68, pPVar1);
        pCVar5->AddButton("Reload Shaders", local_68);
        std::function<void(tweak::Event_const&)>::~function((function<void(tweak::Event_const&)>*)local_68);
        pCVar5 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)&local_88);
        pPVar1 = local_90;
        pCVar5->AddCheckBox("ShowAvgLumRTs", (bool*)&local_90->field_0->field_1);
        pCVar5 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)&local_88);
        pCVar5->AddCheckBox("ShowDownSampledRTs", pPVar1->field_0);
        psVar8 = &local_88;
        psVar8->~shared_ptr();
        this_00 = (MapArea*)psVar8->Instance();
        lVar3 = this_00->GetOrigin();
        local_a0 = (shared_ptr*)(pPVar1->field_0, 1)->GetEffect();
        new (local_78) eastl::allocator("EASTL basic_string");
        new (local_68) eastl::string("ColourGrading", local_78);
        (*(code*)param_1->field_0[30])(&local_88, param_1, local_68);
        local_68->~basic_string();
        pbVar4[524] = true;
        pbVar4[525] = false;
        pbVar4[526] = false;
        pbVar4[527] = false;
        math::Transitionable<float>::operator=((Transitionable<float>*)(pbVar4 + 8), (float*)&DEF_RS_MIN_BLACK_LUM);
        math::Transitionable<float>::operator=((Transitionable<float>*)(pbVar4 + 40), (float*)&DEF_RS_MAX_WHITE_LUM);
        math::Transitionable<float>::operator=((Transitionable<float>*)(pbVar4 + 72), (float*)&DEF_RS_EXPOSURE_KEY);
        math::Transitionable<float>::operator=((Transitionable<float>*)(pbVar4 + 136),
                                               (float*)&DEF_RS_MAX_AUTO_EXPOSURE);
        pcVar6 = (char*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)&local_88);
        local_68->AddGroup(pcVar6);
        pCVar5 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)local_68);
        pCVar5->AddCheckBox("ToneMappingEnabled", pbVar4 + 520);
        pCVar5 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)local_68);
        pCVar5->AddEnum("ToneMapOperators", (StringEnum*)&m_Operators, (int*)(pbVar4 + 524));
        pCVar5 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)local_68);
        local_78[0] = (bool*)((pbVar4 + 8))->second();
        tweak::Container::AddSlider<float>(pCVar5, "MinBlackLum", 0.0, 0.25, 1e-06, (float**)local_78);
        pCVar5 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)local_68);
        local_78[0] = (bool*)((pbVar4 + 40))->second();
        tweak::Container::AddSlider<float>(pCVar5, "MaxWhiteLum", 0.0, 25.0, 0.01, (float**)local_78);
        pCVar5 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)local_68);
        local_78[0] = (bool*)((pbVar4 + 72))->second();
        tweak::Container::AddSlider<float>(pCVar5, "ExposureKey", 0.0, 5.0, 1e-06, (float**)local_78);
        pCVar5 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)local_68);
        local_78[0] = (bool*)((pbVar4 + 104))->second();
        tweak::Container::AddSlider<float>(pCVar5, "MinAllowedExposure", 0.0, 7.5, 1e-06, (float**)local_78);
        pCVar5 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)local_68);
        local_78[0] = (bool*)((pbVar4 + 136))->second();
        tweak::Container::AddSlider<float>(pCVar5, "MaxAllowedExposure", 0.0, 7.5, 1e-06, (float**)local_78);
        pCVar5 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)local_68);
        local_78[0] = (bool*)((pbVar4 + 168))->second();
        tweak::Container::AddSlider<float>(pCVar5, "ExposureSpeedMul", 0.0, 5.0, 0.001, (float**)local_78);
        psVar8 = local_a0;
        bVar2 = shared_ptr::operator_cast_to_bool(local_a0);
        if (bVar2) {
            static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>((shared_ptr*)local_78,
                                                                                         (jag*)psVar8, extraout_RDX);
            pcVar6 = (char*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)&local_88);
            local_b0->AddGroup(pcVar6);
            pCVar5 = (Container*)shared_ptr<tweak::Container>::operator->(local_b0);
            pCVar5->AddCheckBox("ColourCorrectionEnabled", pbVar4 + 224);
            pCVar5 = (Container*)shared_ptr<tweak::Container>::operator->(local_b0);
            lVar7 = shared_ptr<postprocess::ColourGradingBloomEffect>::operator->(
                (shared_ptr<postprocess::ColourGradingBloomEffect>*)local_78);
            pCVar5->AddCheckBox("UseIdentityLUT", (bool*)(lVar7 + 22));
            pCVar5 = (Container*)shared_ptr<tweak::Container>::operator->(local_b0);
            lVar7 = shared_ptr<postprocess::ColourGradingBloomEffect>::operator->(
                (shared_ptr<postprocess::ColourGradingBloomEffect>*)local_78);
            pCVar5->AddCheckBox("ShowColourCorrectionTextures", (bool*)(lVar7 + 21));
            local_b0->~shared_ptr();
            local_78->~shared_ptr();
            psVar8 = local_a0;
        }
        local_68->~shared_ptr();
        local_88.~shared_ptr();
        bVar2 = shared_ptr::operator_cast_to_bool(psVar8);
        if ((bVar2) &&
            (((*(char*)(lVar3 + 157) != '\0' || (*(char*)(lVar3 + 158) != '\0')) || (*(char*)(lVar3 + 159) != '\0')))) {
            static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(&local_88, (jag*)local_a0,
                                                                                         extraout_RDX_00);
            local_68[0]._0_4_ = 1065353216;
            math::Transitionable<float>::operator=((Transitionable<float>*)(pbVar4 + 424), (float*)local_68);
            new (local_b0) eastl::allocator("EASTL basic_string");
            new (local_68) eastl::string("Bloom", local_b0);
            (*(code*)param_1->field_0[30])((shared_ptr*)local_78, param_1, local_68);
            local_68->~basic_string();
            pCVar5 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)local_78);
            local_68[0]._0_8_ = ((pbVar4 + 384))->second();
            tweak::Container::AddSlider<float>(pCVar5, "BrightPassLumThreshold", 0.0, 10.0, 1e-05, (float**)local_68);
            pCVar5 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)local_78);
            local_68[0]._0_8_ = ((pbVar4 + 424))->second();
            tweak::Container::AddSlider<float>(pCVar5, "BrightPassMaxWhiteLum", 0.0, 20.0, 0.01, (float**)local_68);
            pCVar5 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)local_78);
            local_68[0]._0_8_ = pbVar4 + 456;
            tweak::Container::AddSlider<float>(pCVar5, "BrightPassBlurAmount", 0.0, 10.0, 0.01, (float**)local_68);
            pCVar5 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)local_78);
            pCVar5->AddCheckBox("BloomEnabled", pbVar4 + 468);
            pCVar5 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)local_78);
            pCVar5->AddEnum("BlurMethod", (StringEnum*)&postprocess::ColourGradingBloomEffectConfig::m_blurMethodNames,
                            (int*)(pbVar4 + 208));
            pCVar5 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)local_78);
            pCVar5->AddEnum("KawaseKernelSize", (StringEnum*)&m_kawaseKernelSize, (int*)(pbVar4 + 212));
            pCVar5 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)local_78);
            pCVar5->AddEnum("DualFilteringKernelSize", (StringEnum*)&m_dualFilteringBlurKernelSize,
                            (int*)(pbVar4 + 216));
            pCVar5 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)local_78);
            local_68[0]._0_8_ = ((pbVar4 + 480))->second();
            tweak::Container::AddSlider<float>(pCVar5, "BloomScale", 0.0, 2.0, 0.0001, (float**)local_68);
            pCVar5 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)local_78);
            std::function<void(tweak::Event_const&)>::function<
                PostProcessController::RegisterTweaks(tweak::ContainerGroup&)::__18, void>(local_68, local_90);
            pCVar5->AddEnum("BloomQuality", (StringEnum*)&m_bloomQuality, (int*)(pbVar4 + 472), local_68);
            std::function<void(tweak::Event_const&)>::~function((function<void(tweak::Event_const&)>*)local_68);
            pCVar5 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)local_78);
            lVar3 = shared_ptr<postprocess::ColourGradingBloomEffect>::operator->(
                (shared_ptr<postprocess::ColourGradingBloomEffect>*)&local_88);
            pCVar5->AddCheckBox("ShowBrightPassRTs", (bool*)(lVar3 + 20));
            local_78->~shared_ptr();
            local_88.~shared_ptr();
        }
        new (local_78) eastl::allocator("EASTL basic_string");
        new (local_68) eastl::string("FXAA", local_78);
        (*(code*)param_1->field_0[30])(&local_88, param_1, local_68);
        local_68->~basic_string();
        psVar8 = (shared_ptr*)(local_90->field_0, 2)->GetEffect();
        bVar2 = shared_ptr::operator_cast_to_bool(psVar8);
        if (bVar2) {
            pCVar5 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)&local_88);
            pCVar5->AddCheckBox("FXAAEnabled", pbVar4 + 528);
            pCVar5 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)&local_88);
            pCVar5->AddEnum("FXAA Quality", (StringEnum*)&m_fxaaQuality, (int*)(pbVar4 + 532));
        }
        local_88.~shared_ptr();
        new (local_78) eastl::allocator("EASTL basic_string");
        new (local_68) eastl::string("Depth of Field", local_78);
        (*(code*)param_1->field_0[30])(&local_88, param_1, local_68);
        local_68->~basic_string();
        psVar8 = (shared_ptr*)(local_90->field_0, 6)->GetEffect();
        bVar2 = shared_ptr::operator_cast_to_bool(psVar8);
        if (bVar2) {
            static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(local_68, (jag*)psVar8,
                                                                                         extraout_RDX_01);
            pCVar5 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)&local_88);
            pCVar5->AddCheckBox("Enabled", pbVar4 + 553);
            pCVar5 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)&local_88);
            pCVar5->AddCheckBox("Enable Near", pbVar4 + 610);
            pCVar5 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)&local_88);
            pCVar5->AddCheckBox("Enable Far", pbVar4 + 611);
            pCVar5 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)&local_88);
            pCVar5->AddCheckBox("Bokeh", pbVar4 + 608);
            pCVar5 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)&local_88);
            lVar3 = shared_ptr<postprocess::DepthOfFieldEffect>::operator->(
                (shared_ptr<postprocess::DepthOfFieldEffect>*)local_68);
            pCVar5->AddCheckBox("Show Focus RTs", (bool*)(lVar3 + 20));
            pCVar5 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)&local_88);
            lVar3 = shared_ptr<postprocess::DepthOfFieldEffect>::operator->(
                (shared_ptr<postprocess::DepthOfFieldEffect>*)local_68);
            pCVar5->AddCheckBox("Show Blur RTs", (bool*)(lVar3 + 21));
            pCVar5 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)&local_88);
            local_78[0] = pbVar4 + 556;
            tweak::Container::AddSlider<float>(pCVar5, "Near Start", 0.0, 30000.0, 10.0, (float**)local_78);
            pCVar5 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)&local_88);
            local_78[0] = pbVar4 + 560;
            tweak::Container::AddSlider<float>(pCVar5, "Near Start Distance", 0.0, 30000.0, 10.0, (float**)local_78);
            pCVar5 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)&local_88);
            local_78[0] = pbVar4 + 564;
            tweak::Container::AddSlider<float>(pCVar5, "Far Start", 0.0, 50000.0, 10.0, (float**)local_78);
            pCVar5 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)&local_88);
            local_78[0] = pbVar4 + 568;
            tweak::Container::AddSlider<float>(pCVar5, "Far Start Distance", 0.0, 80000.0, 10.0, (float**)local_78);
            pCVar5 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)&local_88);
            local_78[0] = pbVar4 + 572;
            tweak::Container::AddSlider<float>(pCVar5, "Focal Point", 0.0, 50000.0, 10.0, (float**)local_78);
            pCVar5 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)&local_88);
            local_78[0] = pbVar4 + 592;
            tweak::Container::AddSlider<unsigned int>(pCVar5, "Near Downsample Factor", 0.0, 3.0, 1.0,
                                                      (uint**)local_78);
            pCVar5 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)&local_88);
            local_78[0] = pbVar4 + 596;
            tweak::Container::AddSlider<unsigned int>(pCVar5, "Far Downsample Factor", 0.0, 3.0, 1.0, (uint**)local_78);
            pCVar5 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)&local_88);
            pCVar5->AddCheckBox("2x Source Resolution (Near + Far)", pbVar4 + 609);
            pCVar5 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)&local_88);
            local_78[0] = pbVar4 + 604;
            tweak::Container::AddSlider<unsigned int>(pCVar5, "Focus Downsample Factor", 0.0, 3.0, 1.0,
                                                      (uint**)local_78);
            pCVar5 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)&local_88);
            local_78[0] = pbVar4 + 600;
            tweak::Container::AddSlider<unsigned int>(pCVar5, "Depth Downsample Factor", 0.0, 2.0, 1.0,
                                                      (uint**)local_78);
            pCVar5 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)&local_88);
            local_78[0] = pbVar4 + 576;
            tweak::Container::AddSlider<float>(pCVar5, "Bokeh Min", 0.0, 2.0, 0.01, (float**)local_78);
            pCVar5 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)&local_88);
            local_78[0] = pbVar4 + 580;
            tweak::Container::AddSlider<float>(pCVar5, "Bokeh Max", 0.0, 2.0, 0.01, (float**)local_78);
            pCVar5 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)&local_88);
            local_78[0] = pbVar4 + 584;
            tweak::Container::AddSlider<float>(pCVar5, "Bokeh Near Multiplier", 0.0, 5.0, 0.05, (float**)local_78);
            pCVar5 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)&local_88);
            local_78[0] = pbVar4 + 588;
            tweak::Container::AddSlider<float>(pCVar5, "Bokeh Far Multiplier", 0.0, 5.0, 0.05, (float**)local_78);
            pCVar5 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)&local_88);
            pCVar5->AddEnum("Near KawaseKernelSize", (StringEnum*)&m_kawaseKernelSize, (int*)(pbVar4 + 616));
            pCVar5 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)&local_88);
            pCVar5->AddEnum("Far KawaseKernelSize", (StringEnum*)&m_kawaseKernelSize, (int*)(pbVar4 + 612));
            pCVar5 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)&local_88);
            pCVar5->AddEnum("Focus KawaseKernelSize", (StringEnum*)&m_kawaseKernelSize, (int*)(pbVar4 + 620));
            local_68->~shared_ptr();
        }
        local_88.~shared_ptr();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1007feb50, 64 bytes, placed by class name
    // PostProcessController::RegisterTweaks(tweak::ContainerGroup&)::$_17::operator()(tweak::Event const&) const
    /* PostProcessController::RegisterTweaks(tweak::ContainerGroup&)::$_17::TEMPNAMEPLACEHOLDERVALUE(tweak::Event
   const&) const */

    void PostProcessController::RegisterTweaks(tweak::ContainerGroup&)::$_17::operator()(Event* param_1) {
        long* plVar1;

        if ((param_1->field_16 == 2) && (plVar1 = *(long**)this, *plVar1 != 0)) {
            shadersourceprovider::ClearResourceCache();
            (*plVar1)->DestroyRenderingResources();
            (*plVar1)->CreateRenderingResources();
        }
    }

    // 0x1007ff480, 96 bytes, placed by class name
    // PostProcessController::RegisterTweaks(tweak::ContainerGroup&)::$_18::operator()(tweak::Event const&) const
    /* PostProcessController::RegisterTweaks(tweak::ContainerGroup&)::$_18::TEMPNAMEPLACEHOLDERVALUE(tweak::Event
   const&) const */

    void PostProcessController::RegisterTweaks(tweak::ContainerGroup&)::$_18::operator()(Event* param_1) {
        PostProcessController* this_00;
        int iVar1;
        undefined4 uVar2;
        Enum* this_01;
        long lVar3;

        if ((param_1->field_16 & 4294967294) == 2) {
            this_00 = *(PostProcessController**)this;
            this_01 = (Enum*)param_1->end();
            lVar3 = GetCurrentConfig(this_00);
            iVar1 = this_01->GetEnumValue();
            uVar2 = m_bloomQuality.GetIndex(iVar1);
            ((lVar3 + 208))->SetBloomQuality(uVar2);
        }
    }

    // 0x100804530, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.141
    void ___cxx_global_var_init_141() {
        new (&PostProcessController::m_Operators)
            StringEnum((StringEnumEntry*)&PostProcessController::m_Operators__, 5);
        ___cxa_atexit(StringEnum::~StringEnum, &PostProcessController::m_Operators, 4294967296);
    }

    // 0x100804570, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.146
    void ___cxx_global_var_init_146() {
        new (&PostProcessController::m_fxaaQuality)
            StringEnum((StringEnumEntry*)&PostProcessController::m_fxaaQuality__, 4);
        ___cxa_atexit(StringEnum::~StringEnum, &PostProcessController::m_fxaaQuality, 4294967296);
    }

    // 0x1008045b0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.153
    void ___cxx_global_var_init_153() {
        new (&PostProcessController::m_kawaseKernelSize)
            StringEnum((StringEnumEntry*)&PostProcessController::m_kawaseKernelSize__, 6);
        ___cxa_atexit(StringEnum::~StringEnum, &PostProcessController::m_kawaseKernelSize, 4294967296);
    }

    // 0x1008045f0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.158
    void ___cxx_global_var_init_158() {
        new (&PostProcessController::m_dualFilteringBlurKernelSize)
            StringEnum((StringEnumEntry*)&PostProcessController::m_dualFilteringBlurKernelSize__, 5);
        ___cxa_atexit(StringEnum::~StringEnum, &PostProcessController::m_dualFilteringBlurKernelSize, 4294967296);
    }

    // 0x100804630, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.162
    void ___cxx_global_var_init_162() {
        new (&PostProcessController::m_bloomQuality)
            StringEnum((StringEnumEntry*)&PostProcessController::m_bloomQuality__, 3);
        ___cxa_atexit(StringEnum::~StringEnum, &PostProcessController::m_bloomQuality, 4294967296);
    }

} // namespace jag::graphics
