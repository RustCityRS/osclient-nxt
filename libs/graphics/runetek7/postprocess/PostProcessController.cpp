// libs/graphics/runetek7/postprocess/PostProcessController.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "PostProcessController.h"

namespace jag::graphics {
    // 0x100f438a0
    int32_t PostProcessController::m_Operators__[20] = {
        0, 0, 14649548, 1, 1, 0, 14649570, 1, 2, 0, 14649592, 1, 3, 0, 14649606, 1, 4, 0, 14649624, 1,
    };

    // 0x100f438f0
    int32_t PostProcessController::m_fxaaQuality__[16] = {
        0, 0, 14649637, 1, 1, 0, 14649648, 1, 2, 0, 14649659, 1, 3, 0, 14649670, 1,
    };

    // 0x100f43930
    int32_t PostProcessController::m_kawaseKernelSize__[24] = {
        0, 0, 14649681, 1, 1, 0, 14649685, 1, 2, 0, 14649691, 1,
        3, 0, 14649697, 1, 4, 0, 14649703, 1, 5, 0, 14649709, 1,
    };

    // 0x100f43990
    int32_t PostProcessController::m_dualFilteringBlurKernelSize__[20] = {
        0, 0, 14649681, 1, 1, 0, 14649717, 1, 2, 0, 14649723, 1, 3, 0, 14649729, 1, 4, 0, 14649735, 1,
    };

    // 0x100f439e0
    int32_t PostProcessController::m_bloomQuality__[15] = {
        0, 0, 14649743, 1, 1, 0, 14649756, 1, 2, 0, 14649769, 1, 0, 0, 0,
    };

    // 0x103bbd398, set at startup by ___cxx_global_var_init.141
    StringEnum PostProcessController::m_Operators =
        StringEnum((StringEnumEntry*)&PostProcessController::m_Operators__, 5);

    // 0x103bbd3a8, set at startup by ___cxx_global_var_init.146
    StringEnum PostProcessController::m_fxaaQuality =
        StringEnum((StringEnumEntry*)&PostProcessController::m_fxaaQuality__, 4);

    // 0x103bbd3b8, set at startup by ___cxx_global_var_init.153
    StringEnum PostProcessController::m_kawaseKernelSize =
        StringEnum((StringEnumEntry*)&PostProcessController::m_kawaseKernelSize__, 6);

    // 0x103bbd3c8, set at startup by ___cxx_global_var_init.158
    StringEnum PostProcessController::m_dualFilteringBlurKernelSize =
        StringEnum((StringEnumEntry*)&PostProcessController::m_dualFilteringBlurKernelSize__, 5);

    // 0x103bbd3d8, set at startup by ___cxx_global_var_init.162
    StringEnum PostProcessController::m_bloomQuality =
        StringEnum((StringEnumEntry*)&PostProcessController::m_bloomQuality__, 3);

    // 0x10000b300: PostProcessController::SetRT7Core(RT7Core*) has the same machine code as eastl::string::Layout::SetHeapSize(unsigned long)

    // 0x1007df2f0
    void PostProcessController::SetPostProcessManager(postprocess::PostProcessManager* postProcessManager) {
        bool cVar1;
        uint8_t local_2a0[40];
        uint8_t local_98;

        if (postProcessManager == nullptr) {
            LogAssert("postProcessManager != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "postprocess/PostProcessController.cpp",
                      53, nullptr);
        }
        field_0 = postProcessManager;
        long lVar2 = ((MapArea*)Instance())->GetOrigin();
        while (cVar1 = field_16.empty(), !cVar1) {
            eastl::stack<PostProcessController::Config, eastl::fixed_vector<PostProcessController::Config, 2ul>>::pop();
        }
        new (local_2a0) Config();
        if (postProcessManager->GetAvgLuminanceFilter() == 0) {
            local_98 = 0;
            local_f8[44] = (Transitionable<float>)0;
        } else {
            local_98 = 1;
            local_f8[44] = (Transitionable<float>)1;
            if (*(char*)(lVar2 + 157) == '\0' && *(char*)(lVar2 + 158) == '\0') {
                local_f8[44] = (Transitionable<float>)*(uint8_t*)(lVar2 + 159);
            }
        }
        uint8_t local_1c4 = 1;
        uint8_t local_1bf = *(uint8_t*)(lVar2 + 165);
        uint32_t local_94 = 3;
        (*((local_2a0 + 8))) = DEF_RS_MIN_BLACK_LUM;
        Transitionable<float> local_278 = DEF_RS_MAX_WHITE_LUM;
        Transitionable<float> local_258 = DEF_RS_EXPOSURE_KEY;
        Transitionable<float> local_218 = DEF_RS_MAX_AUTO_EXPOSURE;
        Transitionable<float> local_f8 = 1.0;
        PushConfig(*local_2a0);
    }

    // 0x1007df4b0
    void PostProcessController::PushConfig(const PostProcessController::Config& config) {
        field_16.push(config);
        auto config_00 = GetCurrentConfig();
        ApplyConfig(*config_00);
    }

    // 0x1007df4e0
    void PostProcessController::Update(float arg1) {
        auto config = GetCurrentConfig();
        config->field_208.DoTransition(FrameTime::GetCurrentTimeMS());
        ApplyConfig(*config);
    }

    // 0x1007df530
    void PostProcessController::ApplyConfig(const PostProcessController::Config& config) {
        ReturnValue result;
        TextureFormatBitSet textureFormatBitSet;
        unsigned int* puVar5;
        TextureManager* textureType;
        shared_ptr<render::Texture>* psVar6;
        DebugUIElement* pDVar7;
        unsigned long arg1;
        uint8_t local_1c0[336];
        array<postprocess::ColourCorrectionConfig::Remapping, 3ul>* local_70;
        long local_68;
        Config* local_60;
        shared_ptr<oldscape::ClientNpc> local_58;
        array<shared_ptr<render::Texture>, 3ul>* local_48;
        uint8_t local_40[16];

        if (field_0 == nullptr) {
            LogAssert("m_postProcessManager != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "postprocess/PostProcessController.cpp",
                      287, nullptr);
        }
        _memcpy((void*)field_0->second(), &config.field_8, 193);
        auto psVar3 = field_0->GetEffect(1);
        if (shared_ptr::operator_cast_to_bool(psVar3)) {
            static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(&local_58);
            new (local_1c0) postprocess::ColourGradingBloomEffectConfig(config.field_208);
            if (field_0->GetAvgLuminanceFilter() == 0) {
                local_1c0[260] = false;
                local_1c0[312] = false;
            }
            ((ColourGradingBloomEffect*)local_58.operator->())->SetConfig(*local_1c0);
            local_60 = config;
            local_40._8_8_ = this;
            local_68 = ((compressed_pair_imp<
                            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>*)local_58.operator->())
                           ->second();
            local_70 = (array<postprocess::ColourCorrectionConfig::Remapping, 3ul>*)(local_68 + 20);
            local_48 = (array<shared_ptr<render::Texture>, 3ul>*)(local_68 + 48);
            &result = (ReturnValue*)(local_1c0 + 320);
            arg1 = 0;
            do {
                puVar5 = (unsigned int*)(*local_70)[arg1];
                textureFormatBitSet.m_bits = *puVar5;
                if ((int)textureFormatBitSet.m_bits < 0) {
                    void result;
                    psVar6 = (shared_ptr<render::Texture>*)(*local_48)[arg1];
                    *psVar6 = result;
                } else {
                    new (local_40) callstack::Callstack();
                    local_40->AddFormatType(5);
                    if (*(uint64_t*)(local_40._8_8_ + 8) == 0) {
                        LogAssert("m_rt7Core != nullptr",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "runetek7/postprocess/PostProcessController.cpp",
                                  316, nullptr);
                    }
                    textureType = (*(RT7Core**)(local_40._8_8_ + 8))->GetTextureManager();
                    result = TextureManager::GetHALTexture(textureType, (unsigned int)TextureType::SPRITE,
                                                           textureFormatBitSet, local_40[0], false);
                    psVar6 = (shared_ptr<render::Texture>*)(*local_48)[arg1];
                    *psVar6 = result;
                }
                result.~shared_ptr();
                arg1 = arg1 + 1;
            } while (arg1 != 3);
            this = (PostProcessController*)local_40._8_8_;
            config = local_60;
        }
        psVar3 = field_0->GetEffect(2);
        if (shared_ptr::operator_cast_to_bool(psVar3)) {
            static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(
                (shared_ptr<oldscape::ClientNpc>*)local_1c0);
            pDVar7 = (DebugUIElement*)(*local_1c0).operator->();
            pDVar7->NotifyDebugRegistration((bool)config.field_528);
            ((FXAAEffect*)(*local_1c0).operator->())->SetQuality(config.field_532);
        }
        psVar3 = field_0->GetEffect(3);
        if (shared_ptr::operator_cast_to_bool(psVar3)) {
            static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(
                (shared_ptr<oldscape::ClientNpc>*)local_1c0);
            pDVar7 = (DebugUIElement*)(*local_1c0).operator->();
            pDVar7->NotifyDebugRegistration((bool)config.field_536);
            ((OutlineAndShadowEffect*)(*local_1c0).operator->())
                ->SetConfig(*((OutlineAndShadowEffectConfig*)((long)&config.field_537 + 3)));
        }
        psVar3 = field_0->GetEffect(4);
        if (shared_ptr::operator_cast_to_bool(psVar3)) {
            static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(
                (shared_ptr<oldscape::ClientNpc>*)local_1c0);
            pDVar7 = (DebugUIElement*)(*local_1c0).operator->();
            pDVar7->NotifyDebugRegistration(*(bool*)&config.field_552);
        }
        psVar3 = field_0->GetEffect(6);
        if (shared_ptr::operator_cast_to_bool(psVar3)) {
            static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(
                (shared_ptr<oldscape::ClientNpc>*)local_1c0);
            pDVar7 = (DebugUIElement*)(*local_1c0).operator->();
            pDVar7->NotifyDebugRegistration(*(bool*)((long)&config.field_552 + 1));
            ((DepthOfFieldEffect*)(*local_1c0).operator->())
                ->SetConfig(*((DepthOfFieldEffectConfig*)((long)&config.field_554 + 2)));
        }
    }

    // 0x1007df9b0
    void PostProcessController::PopConfig() {
        Config* config;

        unsigned long uVar1 = field_16.size();
        if (1 < uVar1) {
            eastl::stack<PostProcessController::Config, eastl::fixed_vector<PostProcessController::Config, 2ul>>::pop();
            config = (Config*)GetCurrentConfig();
            ApplyConfig(*config);
        }
    }

    // 0x1007dfa00
    void PostProcessController::RegisterTweaks(tweak::ContainerGroup& containerGroup) {
        long lVar6;
        shared_ptr<tweak::Container> local_b0;
        shared_ptr<tweak::Container> local_88;
        float* local_78[2];
        Container_vtbl* local_68[6];

        if (field_0 == nullptr) {
            LogAssert("m_postProcessManager != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "postprocess/PostProcessController.cpp",
                      130, nullptr);
        }
        long lVar3 = field_16.size();
        if (lVar3 != 1) {
            LogAssert("m_configStack.size() == 1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "postprocess/PostProcessController.cpp",
                      131, nullptr);
        }
        bool* arg2 = (bool*)
            eastl::stack<PostProcessController::Config, eastl::fixed_vector<PostProcessController::Config, 2ul>>::top();
        new (local_78) eastl::allocator("EASTL basic_string");
        new (local_68) eastl::string("PostProcessing", local_78);
        (containerGroup._vptr[7].Clear)(&local_88, containerGroup, (eastl::string*)local_68);
        auto pCVar4 = local_88.operator->();
        PostProcessController* pPVar1 = this;
        pCVar4->AddCheckBox("PostProcessingEnabled", *arg2);
        pCVar4 = (Container*)local_88.operator->();
        pCVar4->AddCheckBox("AdaptiveLumEnabled", *(arg2 + 200));
        pCVar4 = (Container*)local_88.operator->();
        std::function<void(tweak::Event const&)>::function<
            PostProcessController::RegisterTweaks(tweak::ContainerGroup&)::__17, void>(
            (function<void(tweak::Event const&)>*)local_68, (__17*)pPVar1);
        pCVar4->AddButton("Reload Shaders", *local_68);
        pCVar4 = (Container*)local_88.operator->();
        pPVar1 = this;
        pCVar4->AddCheckBox("ShowAvgLumRTs", field_0->field_1);
        pCVar4 = (Container*)local_88.operator->();
        pCVar4->AddCheckBox("ShowDownSampledRTs", *pPVar1->field_0);
        lVar3 = ((MapArea*)&local_88->Instance())->GetOrigin();
        auto local_a0 = pPVar1->field_0->GetEffect(1);
        new (local_78) eastl::allocator("EASTL basic_string");
        new (local_68) eastl::string("ColourGrading", local_78);
        (containerGroup._vptr[7].Clear)(&local_88, containerGroup, (eastl::string*)local_68);
        arg2[524] = true;
        arg2[525] = false;
        arg2[526] = false;
        arg2[527] = false;
        (*((arg2 + 8))) = DEF_RS_MIN_BLACK_LUM;
        (*((arg2 + 40))) = DEF_RS_MAX_WHITE_LUM;
        (*((arg2 + 72))) = DEF_RS_EXPOSURE_KEY;
        (*((arg2 + 136))) = DEF_RS_MAX_AUTO_EXPOSURE;
        auto pcVar5 = local_88.operator->();
        local_68->AddGroup(pcVar5);
        pCVar4 = (Container*)(*local_68).operator->();
        pCVar4->AddCheckBox("ToneMappingEnabled", *(arg2 + 520));
        pCVar4 = (Container*)(*local_68).operator->();
        pCVar4->AddEnum("ToneMapOperators", &m_Operators, (arg2 + 524));
        pCVar4 = (Container*)(*local_68).operator->();
        local_78[0] = (float*)((arg2 + 8))->second();
        pCVar4->AddSlider<float>("MinBlackLum", 0.0, 0.25, 1e-06, *local_78);
        pCVar4 = (Container*)(*local_68).operator->();
        local_78[0] = (float*)((arg2 + 40))->second();
        pCVar4->AddSlider<float>("MaxWhiteLum", 0.0, 25.0, 0.01, *local_78);
        pCVar4 = (Container*)(*local_68).operator->();
        local_78[0] = (float*)((arg2 + 72))->second();
        pCVar4->AddSlider<float>("ExposureKey", 0.0, 5.0, 1e-06, *local_78);
        pCVar4 = (Container*)(*local_68).operator->();
        local_78[0] = (float*)((arg2 + 104))->second();
        pCVar4->AddSlider<float>("MinAllowedExposure", 0.0, 7.5, 1e-06, *local_78);
        pCVar4 = (Container*)(*local_68).operator->();
        local_78[0] = (float*)((arg2 + 136))->second();
        pCVar4->AddSlider<float>("MaxAllowedExposure", 0.0, 7.5, 1e-06, *local_78);
        pCVar4 = (Container*)(*local_68).operator->();
        local_78[0] = (float*)((arg2 + 168))->second();
        pCVar4->AddSlider<float>("ExposureSpeedMul", 0.0, 5.0, 0.001, *local_78);
        shared_ptr* psVar7 = local_a0;
        bool cVar2 = shared_ptr::operator_cast_to_bool(local_a0);
        if (cVar2) {
            static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(
                (shared_ptr<oldscape::ClientNpc>*)local_78);
            pcVar5 = (char*)local_88.operator->();
            local_b0.AddGroup(pcVar5);
            pCVar4 = (Container*)local_b0.operator->();
            pCVar4->AddCheckBox("ColourCorrectionEnabled", *(arg2 + 224));
            pCVar4 = (Container*)local_b0.operator->();
            lVar6 = (*local_78).operator->();
            pCVar4->AddCheckBox("UseIdentityLUT", *((lVar6 + 22)));
            pCVar4 = (Container*)local_b0.operator->();
            lVar6 = (*local_78).operator->();
            pCVar4->AddCheckBox("ShowColourCorrectionTextures", *((lVar6 + 21)));
            psVar7 = local_a0;
        }
        cVar2 = shared_ptr::operator_cast_to_bool(psVar7);
        if ((cVar2) &&
            (((*(char*)(lVar3 + 157) != '\0' || (*(char*)(lVar3 + 158) != '\0')) || (*(char*)(lVar3 + 159) != '\0')))) {
            static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(&local_88);
            local_68[0] = (Container_vtbl*)(((uint64_t)local_68[0]._4_4_ << 32) | (uint32_t)1065353216);
            (*((arg2 + 424))) = *local_68;
            new (local_68) eastl::string("Bloom");
            (containerGroup._vptr[7].Clear)(local_78, containerGroup, local_68);
            pCVar4 = (Container*)(*local_78).operator->();
            local_68[0] = (Container_vtbl*)((arg2 + 384))->second();
            pCVar4->AddSlider<float>("BrightPassLumThreshold", 0.0, 10.0, 1e-05, *local_68);
            pCVar4 = (Container*)(*local_78).operator->();
            local_68[0] = (Container_vtbl*)((arg2 + 424))->second();
            pCVar4->AddSlider<float>("BrightPassMaxWhiteLum", 0.0, 20.0, 0.01, *local_68);
            pCVar4 = (Container*)(*local_78).operator->();
            local_68[0] = (Container_vtbl*)(arg2 + 456);
            pCVar4->AddSlider<float>("BrightPassBlurAmount", 0.0, 10.0, 0.01, *local_68);
            pCVar4 = (Container*)(*local_78).operator->();
            pCVar4->AddCheckBox("BloomEnabled", *(arg2 + 468));
            pCVar4 = (Container*)(*local_78).operator->();
            pCVar4->AddEnum("BlurMethod", (StringEnum*)&postprocess::ColourGradingBloomEffectConfig::m_blurMethodNames,
                            (arg2 + 208));
            pCVar4 = (Container*)(*local_78).operator->();
            pCVar4->AddEnum("KawaseKernelSize", &m_kawaseKernelSize, (arg2 + 212));
            pCVar4 = (Container*)(*local_78).operator->();
            pCVar4->AddEnum("DualFilteringKernelSize", &m_dualFilteringBlurKernelSize, (arg2 + 216));
            pCVar4 = (Container*)(*local_78).operator->();
            local_68[0] = (Container_vtbl*)((arg2 + 480))->second();
            pCVar4->AddSlider<float>("BloomScale", 0.0, 2.0, 0.0001, *local_68);
            pCVar4 = (Container*)(*local_78).operator->();
            std::function<void(tweak::Event const&)>::function<
                PostProcessController::RegisterTweaks(tweak::ContainerGroup&)::__18, void>(
                (function<void(tweak::Event const&)>*)local_68, (__18*)this);
            pCVar4->AddEnum("BloomQuality", &m_bloomQuality, (arg2 + 472), *local_68);
            pCVar4 = (Container*)(*local_78).operator->();
            lVar3 = local_88.operator->();
            pCVar4->AddCheckBox("ShowBrightPassRTs", *((lVar3 + 20)));
        }
        new (local_78) eastl::allocator("EASTL basic_string");
        new (local_68) eastl::string("FXAA", local_78);
        (containerGroup._vptr[7].Clear)(&local_88, containerGroup, (eastl::string*)local_68);
        psVar7 = field_0->GetEffect(2);
        cVar2 = shared_ptr::operator_cast_to_bool(psVar7);
        if (cVar2) {
            pCVar4 = (Container*)local_88.operator->();
            pCVar4->AddCheckBox("FXAAEnabled", *(arg2 + 528));
            pCVar4 = (Container*)local_88.operator->();
            pCVar4->AddEnum("FXAA Quality", &m_fxaaQuality, (arg2 + 532));
        }
        new (local_78) eastl::allocator("EASTL basic_string");
        new (local_68) eastl::string("Depth of Field", local_78);
        (containerGroup._vptr[7].Clear)(&local_88, containerGroup, (eastl::string*)local_68);
        psVar7 = field_0->GetEffect(6);
        cVar2 = shared_ptr::operator_cast_to_bool(psVar7);
        if (cVar2) {
            static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(
                (shared_ptr<oldscape::ClientNpc>*)local_68);
            pCVar4 = (Container*)local_88.operator->();
            pCVar4->AddCheckBox("Enabled", *(arg2 + 553));
            pCVar4 = (Container*)local_88.operator->();
            pCVar4->AddCheckBox("Enable Near", *(arg2 + 610));
            pCVar4 = (Container*)local_88.operator->();
            pCVar4->AddCheckBox("Enable Far", *(arg2 + 611));
            pCVar4 = (Container*)local_88.operator->();
            pCVar4->AddCheckBox("Bokeh", *(arg2 + 608));
            pCVar4 = (Container*)local_88.operator->();
            lVar3 = (*local_68).operator->();
            pCVar4->AddCheckBox("Show Focus RTs", *((lVar3 + 20)));
            pCVar4 = (Container*)local_88.operator->();
            lVar3 = (*local_68).operator->();
            pCVar4->AddCheckBox("Show Blur RTs", *((lVar3 + 21)));
            pCVar4 = (Container*)local_88.operator->();
            local_78[0] = (float*)(arg2 + 556);
            pCVar4->AddSlider<float>("Near Start", 0.0, 30000.0, 10.0, *local_78);
            pCVar4 = (Container*)local_88.operator->();
            local_78[0] = (float*)(arg2 + 560);
            pCVar4->AddSlider<float>("Near Start Distance", 0.0, 30000.0, 10.0, *local_78);
            pCVar4 = (Container*)local_88.operator->();
            local_78[0] = (float*)(arg2 + 564);
            pCVar4->AddSlider<float>("Far Start", 0.0, 50000.0, 10.0, *local_78);
            pCVar4 = (Container*)local_88.operator->();
            local_78[0] = (float*)(arg2 + 568);
            pCVar4->AddSlider<float>("Far Start Distance", 0.0, 80000.0, 10.0, *local_78);
            pCVar4 = (Container*)local_88.operator->();
            local_78[0] = (float*)(arg2 + 572);
            pCVar4->AddSlider<float>("Focal Point", 0.0, 50000.0, 10.0, *local_78);
            pCVar4 = (Container*)local_88.operator->();
            local_78[0] = (float*)(arg2 + 592);
            pCVar4->AddSlider<unsigned int>("Near Downsample Factor", 0.0, 3.0, 1.0, *local_78);
            pCVar4 = (Container*)local_88.operator->();
            local_78[0] = (float*)(arg2 + 596);
            pCVar4->AddSlider<unsigned int>("Far Downsample Factor", 0.0, 3.0, 1.0, *local_78);
            pCVar4 = (Container*)local_88.operator->();
            pCVar4->AddCheckBox("2x Source Resolution (Near + Far)", *(arg2 + 609));
            pCVar4 = (Container*)local_88.operator->();
            local_78[0] = (float*)(arg2 + 604);
            pCVar4->AddSlider<unsigned int>("Focus Downsample Factor", 0.0, 3.0, 1.0, *local_78);
            pCVar4 = (Container*)local_88.operator->();
            local_78[0] = (float*)(arg2 + 600);
            pCVar4->AddSlider<unsigned int>("Depth Downsample Factor", 0.0, 2.0, 1.0, *local_78);
            pCVar4 = (Container*)local_88.operator->();
            local_78[0] = (float*)(arg2 + 576);
            pCVar4->AddSlider<float>("Bokeh Min", 0.0, 2.0, 0.01, *local_78);
            pCVar4 = (Container*)local_88.operator->();
            local_78[0] = (float*)(arg2 + 580);
            pCVar4->AddSlider<float>("Bokeh Max", 0.0, 2.0, 0.01, *local_78);
            pCVar4 = (Container*)local_88.operator->();
            local_78[0] = (float*)(arg2 + 584);
            pCVar4->AddSlider<float>("Bokeh Near Multiplier", 0.0, 5.0, 0.05, *local_78);
            pCVar4 = (Container*)local_88.operator->();
            local_78[0] = (float*)(arg2 + 588);
            pCVar4->AddSlider<float>("Bokeh Far Multiplier", 0.0, 5.0, 0.05, *local_78);
            pCVar4 = (Container*)local_88.operator->();
            pCVar4->AddEnum("Near KawaseKernelSize", &m_kawaseKernelSize, (arg2 + 616));
            pCVar4 = (Container*)local_88.operator->();
            pCVar4->AddEnum("Far KawaseKernelSize", &m_kawaseKernelSize, (arg2 + 612));
            pCVar4 = (Container*)local_88.operator->();
            pCVar4->AddEnum("Focus KawaseKernelSize", &m_kawaseKernelSize, (arg2 + 620));
        }
    }

    // 0x1007feb50
    void
    PostProcessController::RegisterTweaks(tweak::ContainerGroup&)::$_17::operator()(const tweak::Event& event) const {
        long* plVar1;

        if ((event.field_16 == 2) && (plVar1 = field_0, *plVar1 != 0)) {
            shadersourceprovider::ClearResourceCache();
            (*plVar1)->DestroyRenderingResources();
            (*plVar1)->CreateRenderingResources();
        }
    }

    // 0x1007ff480
    void
    PostProcessController::RegisterTweaks(tweak::ContainerGroup&)::$_18::operator()(const tweak::Event& event) const {
        PostProcessController* this_00;
        BloomQuality bloomQuality;
        Enum* this_01;
        long lVar1;

        if ((event.field_16 & 4294967294) == 2) {
            this_00 = field_0;
            this_01 = (Enum*)event.end();
            lVar1 = GetCurrentConfig(this_00);
            bloomQuality = m_bloomQuality.GetIndex(this_01->GetEnumValue());
            ((lVar1 + 208))->SetBloomQuality(bloomQuality);
        }
    }

} // namespace jag::graphics
