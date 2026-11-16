// libs/graphics/runetek7/effects/lightscattering/LightScatteringEffect.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "LightScatteringEffect.h"

namespace jag::graphics {
    // 0x10036f4c0: LightScatteringEffect::GetHorizonFalloff() has the same machine code as GeometryBatch::GetFaceTransparencyBuffer()

    // 0x1003c1fc0: LightScatteringEffect::GetScatteringDensity() has the same machine code as game::LocationContainer::GetDynamicChangedLocations() const

    // 0x1004ab8a0: LightScatteringEffect::GetScatteringStartDistance() has the same machine code as game::EnvironmentOverride::GetVolumetricOverrides() const

    // 0x100931680
    unsigned long LightScatteringEffect::Initialise() {
        uint8_t uVar1 = CreateRenderingResources();
        field_448.SetValue(1.0, 0, 0);
        field_480.SetValue(1.0, 0, 0);
        field_512.SetValue(1.0, 0, 0);
        UpdateShaderConstants();
        return uVar1 & 4294967295;
    }

    // 0x100931700
    void LightScatteringEffect::UpdateShaderConstants() {
        long lVar1 = ((MapArea*)Instance())->GetOrigin();
        if (*(char*)(lVar1 + 120) != '\0') {
            field_96.Update(0, field_32);
        }
    }

    // 0x100931740
    void LightScatteringEffect::Update() {
        uint64_t local_40[2];
        uint64_t local_30[2];

        unsigned long long uVar2 = FrameTime::GetCurrentTimeMS();
        bool cVar1 = field_16->GetEffectManager()->IsEnabled(94);
        unsigned long long arg1 = 18446744073709551615;
        if (cVar1) {
            arg1 = uVar2;
        }
        local_30[0] = field_176.GetValue(arg1);
        float fVar3 = (float)field_512.GetValue(arg1);
        local_40[0] = *fVar3 * *local_30;
        field_32->SetXYZ(*local_40);
        local_30[0] = field_224.GetValue(arg1);
        fVar3 = (float)field_480.GetValue(arg1);
        local_40[0] = *fVar3 * *local_30;
        ((field_32 + 16))->SetXYZ(*local_40);
        local_30[0] = field_272.GetValue(arg1);
        fVar3 = (float)field_448.GetValue(arg1);
        local_40[0] = *fVar3 * *local_30;
        ((field_32 + 32))->SetXYZ(*local_40);
        fVar3 = (float)field_320.GetValue(arg1);
        float arg2 = (float)field_352.GetValue(arg1);
        float arg3 = (float)field_384.GetValue(arg1);
        float arg4 = (float)field_416.GetValue(arg1);
        ((field_32 + 48))->Set(fVar3 * 1000.0, arg2, arg3, arg4);
        UpdateShaderConstants();
    }

    // 0x100931980
    void LightScatteringEffect::InitialiseTweakVars(tweak::ContainerGroup& containerGroup,
                                                    EffectManager& effectManager) {
        Range<float>* in_R9;
        uint8_t local_150[24];
        uint8_t local_138[24];
        void_______jag__graphics__EffectManager___jag__tweak__Event_const___jag__graphics__EffectType_const___std__function<
            void_(tweak::EditBoxEvent<float> const&)>
            _ local_120[24];
        void_______jag__graphics__EffectManager___jag__tweak__Event_const___jag__graphics__EffectType_const___std__function<
            void_(tweak::EditBoxEvent<float> const&)>
            _ local_108[24];
        void_______jag__graphics__EffectManager___jag__tweak__Event_const___jag__graphics__EffectType_const___std__function<
            void_(tweak::EditBoxEvent<float> const&)>
            _ local_f0[24];
        void_______jag__graphics__EffectManager___jag__tweak__Event_const___jag__graphics__EffectType_const___std__function<
            void_(tweak::EditBoxEvent<float> const&)>
            _ local_d8[24];
        shared_ptr<tweak::Container> local_90;
        __0 local_70;
        float* local_68[6];
        long local_38;

        new (local_68) eastl::string("Simple Scattering");
        (containerGroup._vptr[7].Clear)(&local_90, containerGroup, (eastl::string*)local_68);
        auto pCVar2 = local_90.operator->();
        void* local_78 = Tweaky_LambdaToggleEffect;
        uint64_t local_80 = std::ref<EffectManager>(effectManager);
        uint8_t local_69 = 48;
        reference_wrapper<EffectManager>* prVar5 = (reference_wrapper<EffectManager>*)&local_78;
        std::bind<void (*)(EffectManager&, tweak::Event const&, EffectType const&),
                  std::reference_wrapper<EffectManager>, std::placeholders::__ph<1> const&, EffectType>(
            (void_______jag__graphics__EffectManager___jag__tweak__Event_const___jag__graphics__EffectType_const__)
                local_150,
            *prVar5, local_80, local_69);
        local_68->function<
            std::__bind<void (*)(EffectManager&, tweak::Event const&, EffectType const&),
                        std::reference_wrapper<EffectManager>, std::placeholders::__ph<1> const&, EffectType>,
            void>(prVar5);
        pCVar2->AddCheckBox("SimpleScattering", *local_68, false);
        pCVar2 = (Container*)local_90.operator->();
        local_78 = Tweaky_LambdaToggleEffect;
        local_80 = std::ref<EffectManager>(effectManager);
        local_69 = 49;
        prVar5 = (reference_wrapper<EffectManager>*)&local_78;
        std::bind<void (*)(EffectManager&, tweak::Event const&, EffectType const&),
                  std::reference_wrapper<EffectManager>, std::placeholders::__ph<1> const&, EffectType>(
            (void_______jag__graphics__EffectManager___jag__tweak__Event_const___jag__graphics__EffectType_const__)
                local_138,
            *prVar5, local_80, local_69);
        local_68->function<
            std::__bind<void (*)(EffectManager&, tweak::Event const&, EffectType const&),
                        std::reference_wrapper<EffectManager>, std::placeholders::__ph<1> const&, EffectType>,
            void>(prVar5);
        pCVar2->AddCheckBox("Skybox Scattering", *local_68, false);
        pCVar2 = (Container*)local_90.operator->();
        local_68[0] = (float*)field_320.second();
        pCVar2->AddSlider<float>("Scattering Density", 0.0, 0.001, 1e-06, *local_68);
        pCVar2 = (Container*)local_90.operator->();
        uint8_t* puVar1 = PTR_Tweaky_LambdaEditFieldChange<float> _100ee6a38;
        local_78 = (void (*)(...))PTR_Tweaky_LambdaEditFieldChange<float> _100ee6a38;
        local_80 = std::ref<EffectManager>(effectManager);
        local_69 = 48;
        prVar5 = (reference_wrapper<EffectManager>*)&local_78;
        std::bind<void (*)(EffectManager&, tweak::Event const&, EffectType const&,
                           std::function<void(tweak::EditBoxEvent<float> const&)>),
                  std::reference_wrapper<EffectManager>, std::placeholders::__ph<1> const&, EffectType,
                  (tweak::ContainerGroup&)->InitialiseTweakVars(EffectManager&)::__0>(
            local_120, prVar5, (__ph<1>*)&local_80, (EffectType*)&local_69, &local_70);
        std::function<void(tweak::Event const&)>::function<
            std::__bind<void (*)(EffectManager&, tweak::Event const&, EffectType const&,
                                 std::function<void(tweak::EditBoxEvent<float> const&)>),
                        std::reference_wrapper<EffectManager>, std::placeholders::__ph<1> const&, EffectType,
                        (tweak::ContainerGroup&)->InitialiseTweakVars(EffectManager&)::__0>,
            void>((function<void(tweak::Event const&)>*)local_68, prVar5);
        pCVar2->AddEditField("ScatteringDensity", 100, *local_68);
        pCVar2 = (Container*)local_90.operator->();
        local_78 = (void (*)(...))puVar1;
        local_80 = std::ref<EffectManager>(effectManager);
        local_69 = 48;
        prVar5 = (reference_wrapper<EffectManager>*)&local_78;
        std::bind<void (*)(EffectManager&, tweak::Event const&, EffectType const&,
                           std::function<void(tweak::EditBoxEvent<float> const&)>),
                  std::reference_wrapper<EffectManager>, std::placeholders::__ph<1> const&, EffectType,
                  (tweak::ContainerGroup&)->InitialiseTweakVars(EffectManager&)::__1>(
            local_108, prVar5, (__ph<1>*)&local_80, (EffectType*)&local_69, &local_70);
        std::function<void(tweak::Event const&)>::function<
            std::__bind<void (*)(EffectManager&, tweak::Event const&, EffectType const&,
                                 std::function<void(tweak::EditBoxEvent<float> const&)>),
                        std::reference_wrapper<EffectManager>, std::placeholders::__ph<1> const&, EffectType,
                        (tweak::ContainerGroup&)->InitialiseTweakVars(EffectManager&)::__1>,
            void>((function<void(tweak::Event const&)>*)local_68, prVar5);
        pCVar2->AddEditField("ScatteringStartDistance", 100, *local_68);
        pCVar2 = (Container*)local_90.operator->();
        local_78 = (void (*)(...))puVar1;
        local_80 = std::ref<EffectManager>(effectManager);
        local_69 = 48;
        prVar5 = (reference_wrapper<EffectManager>*)&local_78;
        std::bind<void (*)(EffectManager&, tweak::Event const&, EffectType const&,
                           std::function<void(tweak::EditBoxEvent<float> const&)>),
                  std::reference_wrapper<EffectManager>, std::placeholders::__ph<1> const&, EffectType,
                  (tweak::ContainerGroup&)->InitialiseTweakVars(EffectManager&)::__2>(
            local_f0, prVar5, (__ph<1>*)&local_80, (EffectType*)&local_69, &local_70);
        std::function<void(tweak::Event const&)>::function<
            std::__bind<void (*)(EffectManager&, tweak::Event const&, EffectType const&,
                                 std::function<void(tweak::EditBoxEvent<float> const&)>),
                        std::reference_wrapper<EffectManager>, std::placeholders::__ph<1> const&, EffectType,
                        (tweak::ContainerGroup&)->InitialiseTweakVars(EffectManager&)::__2>,
            void>((function<void(tweak::Event const&)>*)local_68, prVar5);
        pCVar2->AddEditField("ScatteringObjectFalloff", 100, *local_68);
        pCVar2 = (Container*)local_90.operator->();
        local_78 = (void (*)(...))puVar1;
        local_80 = std::ref<EffectManager>(effectManager);
        local_69 = 48;
        prVar5 = (reference_wrapper<EffectManager>*)&local_78;
        __3* arg5 = &local_70;
        std::bind<void (*)(EffectManager&, tweak::Event const&, EffectType const&,
                           std::function<void(tweak::EditBoxEvent<float> const&)>),
                  std::reference_wrapper<EffectManager>, std::placeholders::__ph<1> const&, EffectType,
                  (tweak::ContainerGroup&)->InitialiseTweakVars(EffectManager&)::__3>(
            local_d8, prVar5, (__ph<1>*)&local_80, (EffectType*)&local_69, arg5);
        std::function<void(tweak::Event const&)>::function<
            std::__bind<void (*)(EffectManager&, tweak::Event const&, EffectType const&,
                                 std::function<void(tweak::EditBoxEvent<float> const&)>),
                        std::reference_wrapper<EffectManager>, std::placeholders::__ph<1> const&, EffectType,
                        (tweak::ContainerGroup&)->InitialiseTweakVars(EffectManager&)::__3>,
            void>((function<void(tweak::Event const&)>*)local_68, prVar5);
        pCVar2->AddEditField("ScatteringHoizonFalloff", 100, *local_68);
        pCVar2 = (Container*)local_90.operator->();
        auto pVVar3 = field_272.GetDefaultValue();
        auto pfVar4 = field_448.second();
        Point<float> local_c0(0.0, 1.0);
        Point<float> local_b8(0.0, 10.0);
        pCVar2->AddColourPickerHDR("Scattering Tint", pVVar3, pfVar4, arg5, in_R9);
        pCVar2 = (Container*)local_90.operator->();
        pVVar3 = (Vector3T<float>*)field_176.GetDefaultValue();
        pfVar4 = (float*)field_512.second();
        Point<float> local_b0(0.0, 1.0);
        Point<float> local_a8(0.0, 10.0);
        pCVar2->AddColourPickerHDR("Outscattering Amount", pVVar3, pfVar4, arg5, in_R9);
        pCVar2 = (Container*)local_90.operator->();
        pVVar3 = (Vector3T<float>*)field_224.GetDefaultValue();
        pfVar4 = (float*)field_480.second();
        Point<float> local_a0(0.0, 1.0);
        Point<float> local_98(0.0, 10.0);
        pCVar2->AddColourPickerHDR("Inscattering Amount", pVVar3, pfVar4, arg5, in_R9);
    }

    // 0x1009320a0
    void Tweaky_LambdaEditFieldChange<float>(EffectManager& effectManager, const tweak::Event& event,
                                             const EffectType& effectType,
                                             std::function<void(tweak::EditBoxEvent<float> const&)> callback) {
        float local_34;

        auto plVar1 = event.operator->();
        char* str = (char*)(**(void (**)(...))(*plVar1 + 136))(plVar1);
        FromText<float>(str, &local_34);
        auto effect = effectManager.GetEffect<SunlightDirectLighting>((unsigned int)(uint8_t)(char)*effectType);
        EditBoxEvent<float> local_50(local_34, effect, event);
        std::function<void(tweak::EditBoxEvent<float> const&)>::operator()(
            (function<void(tweak::EditBoxEvent<float> const&)>*)callback, &local_50);
    }

    // 0x100932240
    void LightScatteringEffect::SetScatteringParams(const SimpleScatteringParams& simpleScatteringParams,
                                                    long long arg2, unsigned long long arg3) {
        SetOutscatteringAmount(simpleScatteringParams, arg2, arg3);
        SetInscatteringAmount(simpleScatteringParams.field_16, arg2, arg3);
        SetScatteringTintColour(simpleScatteringParams.field_32, arg2, arg3);
        uint8_t* this_00 = &simpleScatteringParams.field_48;
        auto pfVar1 = this_00->SSOBeginPtr();
        SetScatteringDensity(*pfVar1, arg2, arg3);
        pfVar1 = (float*)this_00->y();
        SetScatteringStartDistance(*pfVar1, arg2, arg3);
        pfVar1 = (float*)this_00->second();
        SetObjectFalloff(*pfVar1, arg2, arg3);
        pfVar1 = (float*)this_00->qw();
        SetHorizonFalloff(*pfVar1, arg2, arg3);
    }

    // 0x100932420
    void LightScatteringEffect::SetShaderConstants(render::DrawCallState& drawCallState,
                                                   render::RenderContext& renderContext, Shader& shader) const {
        unsigned int arg1;
        RenderPipelineState* this_02;
        ShaderConstBuffer* shaderConstBuffer;
        HashedString* pHVar2;

        auto this_00 = shader.GetProgram();
        long lVar1 = ((MapArea*)shader.Instance())->GetOrigin();
        if (*(char*)(lVar1 + 120) == '\0') {
            pHVar2 = (HashedString*)graphics::operator*(59);
            this_00->SetShaderConstVector3(pHVar2, field_32);
            pHVar2 = (HashedString*)graphics::operator*(60);
            this_00->SetShaderConstVector3(pHVar2, (field_32 + 16));
            pHVar2 = (HashedString*)graphics::operator*(61);
            this_00->SetShaderConstVector3(pHVar2, (field_32 + 32));
            pHVar2 = (HashedString*)graphics::operator*(62);
            this_00->SetShaderConstVector4(pHVar2, (field_32 + 48));
        } else {
            this_02 = (RenderPipelineState*)drawCallState.GetRenderPipelineState();
            arg1 = field_168;
            shaderConstBuffer = (ShaderConstBuffer*)field_96.CurrentBuffer();
            this_02->SetPSShaderConstBuffer(arg1, shaderConstBuffer);
        }
    }

    // 0x100932580
    void LightScatteringEffect::BindConstBufferToShader(const render::ShaderProgram& shaderProgram) const {
        unsigned int arg1;
        unsigned int arg3;

        long lVar1 = ((MapArea*)Instance())->GetOrigin();
        if (*(char*)(lVar1 + 120) != '\0') {
            if (BindConstBufferToShader(render::ShaderProgram const&)::simpleScatteringConstBlockName == '\0') {
                if (___cxa_guard_acquire(
                        &BindConstBufferToShader(render::ShaderProgram const&)::simpleScatteringConstBlockName) != 0) {
                    new ((HashedString*)&BindConstBufferToShader(
                        render::ShaderProgram const&)::simpleScatteringConstBlockName) HashedString("SimpleScattering");
                    ___cxa_guard_release(
                        &BindConstBufferToShader(render::ShaderProgram const&)::simpleScatteringConstBlockName);
                }
            }
            arg1 = field_168;
            arg3 = field_96.GetAmplitude();
            shaderProgram.BindConstBufferSlot(arg1,
                                              *((HashedString*)&BindConstBufferToShader(
                                                  render::ShaderProgram const&)::simpleScatteringConstBlockName),
                                              arg3);
        }
    }

    // 0x100932630
    void LightScatteringEffect::CreateRenderingResources() {
        field_96.Create(1, field_32);
    }

    // 0x100932650
    void LightScatteringEffect::DestroyRenderingResources() {
        field_96.Destroy();
    }

    // 0x100932670
    void LightScatteringEffect::OnEndFrame() {
        field_96.RotateBuffers();
    }

} // namespace jag::graphics
