// libs/graphics/runetek7/effects/EffectManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "EffectManager.h"

namespace jag::graphics {
    // 0x100009ca0: EffectManager::EnabledEffectList() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x10092aa10
    EffectManager::EffectManager(RT7Core& rt7Core) : EffectList() {
        MakeEffect<Effect>(this, rt7Core, 0);
        MakeEffect<Effect>(this, rt7Core, 1);
        MakeEffect<Effect>(this, rt7Core, 2);
        MakeEffect<Effect>(this, rt7Core, 3);
        MakeEffect<Effect>(this, rt7Core, 4);
        MakeEffect<Effect>(this, rt7Core, 5);
        MakeEffect<Effect>(this, rt7Core, 6);
        MakeEffect<Effect>(this, rt7Core, 7);
        MakeEffect<Effect>(this, rt7Core, 8);
        MakeEffect<DebugEmissiveEffect>(this, rt7Core, 9);
        MakeEffect<Effect>(this, rt7Core, 10);
        MakeEffect<Effect>(this, rt7Core, 11);
        MakeEffect<Effect>(this, rt7Core, 12);
        MakeEffect<Effect>(this, rt7Core, 13);
        MakeEffect<Effect>(this, rt7Core, 14);
        MakeEffect<DebugTexelDensityEffect>(this, rt7Core, 15);
        MakeEffect<Effect>(this, rt7Core, 16);
        MakeEffect<Effect>(this, rt7Core, 17);
        MakeEffect<Effect>(this, rt7Core, 18);
        MakeEffect<DebugMaterialHighlightEffect>(this, rt7Core, 19);
        MakeEffect<Effect>(this, rt7Core, 20);
        MakeEffect<Effect>(this, rt7Core, 21);
        MakeEffect<Effect>(this, rt7Core, 22);
        MakeEffect<Effect>(this, rt7Core, 23);
        MakeEffect<Effect>(this, rt7Core, 24);
        MakeEffect<Effect>(this, rt7Core, 25);
        MakeEffect<Effect>(this, rt7Core, 26);
        MakeEffect<Effect>(this, rt7Core, 27);
        MakeEffect<DeferredShadows>(this, rt7Core, 28);
        MakeEffect<SunlightDirectLighting>(this, rt7Core, 29);
        MakeEffect<SunlightShadows>(this, rt7Core, 30);
        MakeEffect<Effect>(this, rt7Core, 31);
        MakeEffect<Effect>(this, rt7Core, 32);
        MakeEffect<Effect>(this, rt7Core, 33);
        MakeEffect<Effect>(this, rt7Core, 34);
        MakeEffect<PointLightShadows>(this, rt7Core, 35);
        MakeEffect<PointLightSMPassEffect>(this, rt7Core, 36);
        MakeEffect<Effect>(this, rt7Core, 37);
        MakeEffect<Effect>(this, rt7Core, 38);
        MakeEffect<Effect>(this, rt7Core, 39);
        MakeEffect<Effect>(this, rt7Core, 40);
        MakeEffect<Effect>(this, rt7Core, 41);
        MakeEffect<Effect>(this, rt7Core, 42);
        MakeEffect<Effect>(this, rt7Core, 43);
        MakeEffect<Caustics>(this, rt7Core, 44);
        MakeEffect<Effect>(this, rt7Core, 45);
        MakeEffect<Effect>(this, rt7Core, 46);
        MakeEffect<Effect>(this, rt7Core, 47);
        MakeEffect<LightScatteringEffect>(this, rt7Core, 48);
        MakeEffect<Effect>(this, rt7Core, 49);
        MakeEffect<VolumetricScatteringEffect>(this, rt7Core, 50);
        MakeEffect<GlobalEnvironmentMapping>(this, rt7Core, 51);
        MakeEffect<Effect>(this, rt7Core, 52);
        MakeEffect<Effect>(this, rt7Core, 53);
        MakeEffect<ViewportMapEffect>(this, rt7Core, 54);
        MakeEffect<Effect>(this, rt7Core, 55);
        MakeEffect<Effect>(this, rt7Core, 56);
        MakeEffect<FogEffect>(this, rt7Core, 57);
        MakeEffect<Effect>(this, rt7Core, 58);
        MakeEffect<Effect>(this, rt7Core, 59);
        MakeEffect<Effect>(this, rt7Core, 60);
        MakeEffect<Effect>(this, rt7Core, 61);
        MakeEffect<Effect>(this, rt7Core, 62);
        MakeEffect<Effect>(this, rt7Core, 63);
        MakeEffect<Effect>(this, rt7Core, 64);
        MakeEffect<Effect>(this, rt7Core, 65);
        MakeEffect<Effect>(this, rt7Core, 66);
        MakeEffect<Effect>(this, rt7Core, 67);
        MakeEffect<Effect>(this, rt7Core, 68);
        MakeEffect<Effect>(this, rt7Core, 69);
        MakeEffect<Effect>(this, rt7Core, 70);
        MakeEffect<Effect>(this, rt7Core, 71);
        MakeEffect<Effect>(this, rt7Core, 72);
        MakeEffect<Effect>(this, rt7Core, 73);
        MakeEffect<Effect>(this, rt7Core, 74);
        MakeEffect<Effect>(this, rt7Core, 75);
        MakeEffect<Effect>(this, rt7Core, 76);
        MakeEffect<Effect>(this, rt7Core, 77);
        MakeEffect<Effect>(this, rt7Core, 78);
        MakeEffect<ViewTransformsEffect>(this, rt7Core, 79);
        MakeEffect<VertexTransforms2D>(this, rt7Core, 80);
        MakeEffect<Effect>(this, rt7Core, 81);
        MakeEffect<Effect>(this, rt7Core, 82);
        MakeEffect<Effect>(this, rt7Core, 83);
        MakeEffect<Effect>(this, rt7Core, 84);
        MakeEffect<Effect>(this, rt7Core, 85);
        MakeEffect<Effect>(this, rt7Core, 86);
        MakeEffect<ClipPlaneEffect>(this, rt7Core, 87);
        MakeEffect<Effect>(this, rt7Core, 88);
        MakeEffect<Effect>(this, rt7Core, 89);
        MakeEffect<Effect>(this, rt7Core, 90);
        MakeEffect<Effect>(this, rt7Core, 91);
        MakeEffect<Effect>(this, rt7Core, 92);
        MakeEffect<Effect>(this, rt7Core, 93);
        MakeEffect<Effect>(this, rt7Core, 94);
        MakeEffect<Effect>(this, rt7Core, 95);
        MakeEffect<Effect>(this, rt7Core, 96);
        MakeEffect<Effect>(this, rt7Core, 97);
        MakeEffect<WaterCommonShaderEffect>(this, rt7Core, 98);
        MakeEffect<WaterNormalMapsShaderEffect>(this, rt7Core, 99);
        MakeEffect<WaterFoamShaderEffect>(this, rt7Core, 100);
        MakeEffect<WaterExtinctionShaderEffect>(this, rt7Core, 101);
        MakeEffect<WaterEmissiveShaderEffect>(this, rt7Core, 102);
        MakeEffect<Effect>(this, rt7Core, 103);
        MakeEffect<Effect>(this, rt7Core, 104);
        MakeEffect<Effect>(this, rt7Core, 105);
        MakeEffect<ViewportLookupScale>(this, rt7Core, 106);
        MakeEffect<PlanarReflection>(this, rt7Core, 107);
        MakeEffect<Refraction>(this, rt7Core, 108);
        MakeEffect<Effect>(this, rt7Core, 109);
        MakeEffect<SSAOEffect>(this, rt7Core, 110);
        MakeEffect<Effect>(this, rt7Core, 111);
        MakeEffect<Effect>(this, rt7Core, 112);
        MakeEffect<Effect>(this, rt7Core, 113);
        MakeEffect<Effect>(this, rt7Core, 114);
        MakeEffect<Effect>(this, rt7Core, 115);
        MakeEffect<Effect>(this, rt7Core, 116);
        MakeEffect<StippleCutoutEffect>(this, rt7Core, 117);
        MakeEffect<Effect>(this, rt7Core, 118);
        MakeEffect<DebugTerrainSpecularEffect>(this, rt7Core, 119);
        MakeEffect<Effect>(this, rt7Core, 120);
    }

    // 0x10092bd00
    void EffectManager::Destroy() {
        unique_ptr<Effect>* this_00 = (unique_ptr<Effect>*)std::array<std::unique_ptr<Effect>, 121ul>::begin();
        unique_ptr<Effect>* puVar1 = (unique_ptr<Effect>*)std::array<std::unique_ptr<Effect>, 121ul>::end();
        for (; this_00 != puVar1; this_00 = this_00 + 8) {
            this_00->reset(nullptr);
        }
    }

    // 0x10092bdb0
    void EffectManager::CreateRenderingResources() {
        unique_ptr<Effect>* this_00;
        long* plVar2;

        unsigned long arg1 = 0;
        do {
            if (field_48.Contains((EffectType)arg1 & 255) != '\0') {
                this_00 = &field_64[arg1];
                plVar2 = (long*)(*this_00).operator->();
                (**(void (**)(...))(*plVar2 + 72))(plVar2);
            }
            arg1 = arg1 + 1;
        } while (arg1 != 121);
    }

    // 0x10092be40
    void EffectManager::DestroyRenderingResources() {
        unique_ptr<Effect>* this_00;
        long* plVar2;

        unsigned long arg1 = 0;
        do {
            if (field_48.Contains((EffectType)arg1 & 255) != '\0') {
                this_00 = &field_64[arg1];
                plVar2 = (long*)(*this_00).operator->();
                (**(void (**)(...))(*plVar2 + 80))(plVar2);
            }
            arg1 = arg1 + 1;
        } while (arg1 != 121);
    }

    // 0x10092beb0
    void EffectManager::InitialiseTweakVars(tweak::ContainerGroup& containerGroup) {
        long* plVar2;

        unique_ptr<Effect>* this_00 = (unique_ptr<Effect>*)std::array<std::unique_ptr<Effect>, 121ul>::begin();
        unique_ptr<Effect>* puVar1 = (unique_ptr<Effect>*)std::array<std::unique_ptr<Effect>, 121ul>::end();
        for (; this_00 != puVar1; this_00 = this_00 + 8) {
            plVar2 = (long*)(*this_00).operator->();
            (**(void (**)(...))(*plVar2 + 96))(plVar2, containerGroup, this);
        }
    }

    // 0x10092bf10
    void EffectManager::SetEffectsQuality(GraphicsQuality graphicsQuality) {
        uint64_t local_38 = field_48;
        uint64_t uStack_30 = field_56;
        local_38 &= field_16;
        long lVar2 = 0;
        do {
            if (local_38.Contains((EffectType)lVar2 & 255) != '\0') {
                GetEffect<SunlightDirectLighting>(this, (EffectType)lVar2 & 255)->SetQuality(graphicsQuality);
            }
            lVar2 = lVar2 + 1;
        } while (lVar2 != 121);
    }

    // 0x10092bfa0
    void EffectManager::EnableEffect(EffectType effectType, bool arg2) {
        Logger* this_00;
        LogLevel logLevel;
        uint64_t in_register_00000011;
        int arg4;
        char* str2;
        uint8_t* puVar4;

        if ((int)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2) == 0) {
            Remove(effectType & 255);
            goto LAB_10092c09a;
        }
        unsigned long uVar3 = (unsigned long)effectType & 255;
        EffectType effectType_00 = (EffectType)uVar3;
        auto pFVar2 = GetEffect<SunlightDirectLighting>(this, effectType_00);
        bool cVar1 = field_48.Contains(effectType_00);
        if (!cVar1) {
            cVar1 = pFVar2->IsValidValue();
            if (!cVar1) {
                this_00 = logger::default_logger();
                puVar4 = (&EffectTypeStrings)[uVar3];
                str2 = "Effect %s not enabled as it is unsupported";
                logLevel = 3;
                arg4 = 130;
            } else {
                pFVar2 = GetEffect<SunlightDirectLighting>(this, effectType_00);
                cVar1 = pFVar2->Initialise();
                if (cVar1)
                    goto LAB_10092bfdb;
                this_00 = logger::default_logger();
                puVar4 = (&EffectTypeStrings)[uVar3];
                str2 = "Failed to initialise effect %s";
                logLevel = 2;
                arg4 = 125;
            }
            this_00->Log(false, logLevel,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                         "effects/EffectManager.cpp",
                         arg4, str2, puVar4);
        } else {
        LAB_10092bfdb:
            Add(effectType_00);
            field_48.Add(effectType_00);
        }
    LAB_10092c09a:
        field_32 = field_0;
        field_40 = field_8;
        field_32 &= field_16;
    }

    // 0x10092c0c0
    uint8_t EffectManager::ToggleEffect(EffectType effectType) {
        uint8_t bVar1 = IsEnabled(effectType);
        EnableEffect(effectType, (bool)(bVar1 ^ 1));
        return bVar1 ^ 1;
    }

    // 0x10092c100
    uint8_t[16] EffectManager::BuildShaderEffectList(const EffectList& effectList) const {
        uint8_t auVar1[16];

        uint64_t local_18 = field_0;
        uint64_t uStack_10 = field_8;
        local_18 &= effectList;
        auVar1._8_8_ = uStack_10;
        auVar1._0_8_ = local_18;
        return auVar1;
    }

    // 0x10092c130
    void EffectManager::SetShaderConstants(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                           Shader& shader, EffectList effectList) {
        unique_ptr<Effect>* this_01;
        long* plVar1;
        EffectList local_50;

        local_50 &= field_32;
        auto this_00 = local_50.SSOBeginPtr();
        unsigned long arg1 = this_00->DoFindFirst();
        if (arg1 < 121) {
            do {
                this_01 = &field_64[arg1];
                plVar1 = (long*)(*this_01).operator->();
                (**(void (**)(...))(*plVar1 + 56))(plVar1, drawCallState, renderContext, shader);
                arg1 = this_00->DoFindNext(arg1);
            } while (arg1 < 121);
        }
    }

    // 0x10092c2a0
    void EffectManager::BindConstBufferToShader(const render::ShaderProgram& shaderProgram,
                                                const EffectList& effectList) const {
        bitset<121ul, unsigned long long>* this_01;
        unique_ptr<Effect>* this_02;
        long* plVar3;
        unsigned long arg1;

        if (!(shaderProgram.IsReady())) {
            LogAssert("shaderProgram.IsReady()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "EffectManager.cpp",
                      179, nullptr);
        }
        long lVar2 = ((MapArea*)shaderProgram.Instance())->GetOrigin();
        if (*(char*)(lVar2 + 120) != '\0') {
            arg1 = 0;
            do {
                this_01 = (bitset<121ul, unsigned long long>*)effectList.SSOBeginPtr();
                if ((*this_01)[arg1]) {
                    this_02 = &field_64[arg1];
                    plVar3 = (long*)(*this_02).operator->();
                    (**(void (**)(...))(*plVar3 + 64))(plVar3, shaderProgram);
                }
                arg1 = arg1 + 1;
            } while (arg1 != 121);
        }
    }

    // 0x10092c3a0
    void EffectManager::RenderDebug(const render::Viewport& viewport) const {
        long* plVar2;

        auto this_00 = field_64.begin();
        auto puVar1 = field_64.end();
        for (; this_00 != puVar1; this_00 = this_00 + 8) {
            plVar2 = (long*)(*this_00).operator->();
            (**(void (**)(...))(*plVar2 + 48))(plVar2, viewport);
        }
    }

    // 0x10092c430
    void EffectManager::OnEndFrame() {
        unique_ptr<Effect>* this_00;
        long* plVar2;

        unsigned long arg1 = 0;
        do {
            if (field_48.Contains((EffectType)arg1 & 255) != '\0') {
                this_00 = &field_64[arg1];
                plVar2 = (long*)(*this_00).operator->();
                (**(void (**)(...))(*plVar2 + 88))(plVar2);
            }
            arg1 = arg1 + 1;
        } while (arg1 != 121);
    }

    // 0x10092c4a0
    unsigned long EffectManager::SetEffectQuality(EffectType effectType, GraphicsQuality graphicsQuality) {
        unsigned int uVar3;
        FogEffect* this_00;
        uint64_t unaff_R14;

        bool cVar1 = field_48.Contains(effectType);
        unsigned long uVar4 = (((uint64_t)((int64_t)((unsigned long)unaff_R14 >> 8)) << 8) | (uint8_t)1);
        if (cVar1) {
            this_00 = GetEffect<SunlightDirectLighting>(this, effectType & 255);
            if (this_00->GetPos() != graphicsQuality) {
                uVar3 = this_00->SetQuality(graphicsQuality);
                uVar4 = (unsigned long)uVar3;
                if ((char)uVar3 == '\0') {
                    DisableEffect(effectType & 255);
                }
            }
        }
        return uVar4 & 4294967295;
    }

    // 0x10092c520
    void EffectManager::GetEffectQuality(EffectType effectType) const {
        GetEffect<PlanarReflection>(this, effectType)->GetPos();
    }

    // 0x10092c540
    void Tweaky_ToggleEffect(EffectManager& effectManager, const EffectType& effectType, bool arg3) {
        uint64_t in_register_00000011;

        if ((int)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg3) == 0) {
            effectManager.DisableEffect((unsigned int)(uint8_t)(char)*effectType);
            return;
        }
        effectManager.EnableEffect((unsigned int)(uint8_t)(char)*effectType, true);
    }

    // 0x10092c560
    void Tweaky_ToggleEffect(EffectManager& effectManager, const EffectType& effectType) {
        uint8_t bVar1 = effectManager.IsEnabled((unsigned int)(uint8_t)(char)*effectType);
        Tweaky_ToggleEffect(effectManager, effectType, (bool)(bVar1 ^ 1));
    }

    // 0x10092c590
    void Tweaky_LambdaToggleEffect(EffectManager& effectManager, const tweak::Event& event,
                                   const EffectType& effectType) {
        uint8_t uVar1;
        bool arg3;
        long* plVar2;

        if (event.field_16 == 3) {
            plVar2 = (long*)event.operator->();
            arg3 = (bool)(**(void (**)(...))(*plVar2 + 120))(plVar2);
            Tweaky_ToggleEffect(effectManager, effectType, arg3);
        } else if (event.field_16 == 1) {
            plVar2 = (long*)event.operator->();
            uVar1 = effectManager.IsEnabled((unsigned int)(uint8_t)(char)*effectType);
            (**(void (**)(...))(*plVar2 + 128))(plVar2, uVar1);
        }
    }

    // 0x10092c640
    void Tweaky_LambdaToggleEffectDisablePostProcessing(RT7Core& rt7Core, const tweak::Event& event,
                                                        const EffectType& effectType) {
        uint8_t bVar1;
        long* plVar2;
        PostProcessController* postProcessController;
        uint8_t* pbVar3;

        Tweaky_LambdaToggleEffect(rt7Core.GetEffectManager(), event, effectType);
        if (event.field_16 == 3) {
            plVar2 = (long*)event.operator->();
            bVar1 = (**(void (**)(...))(*plVar2 + 120))(plVar2);
            postProcessController = rt7Core.GetPostProcessController();
            pbVar3 = (uint8_t*)postProcessController->GetCurrentConfig();
            *pbVar3 = bVar1 ^ 1;
        }
    }

} // namespace jag::graphics
