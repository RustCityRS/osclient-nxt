// libs/graphics/runetek7/effects/fog/FogEffect.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "FogEffect.h"

namespace jag::graphics {
    // 0x100d4fb00
    float FogEffect::FOGCONSTANT_ANGLE_FALLOFF_DEFAULT = 32.0f;

    // 0x100d4fb04
    float FogEffect::FOGDEPTH_ANGLE_FALLOFF_DEFAULT = 8.0f;

    // 0x100d4fb08
    int32_t FogEffect::FOG_ANGLE_OFFSET_DEFAULT = 0;

    // 0x103bc0850, set at startup by ___cxx_global_var_init.290
    ImVec4 FogEffect::FOGCOLOUR_DEFAULT = ImVec4(0.0, 0.0, 0.0, 1.0);

    // 0x103bc0860, set at startup by ___cxx_global_var_init.291
    math::Point<float> FogEffect::FOGDISTANCE_DEFAULT = Point<float>(100000.0, 100000.0);

    // 0x1009362d0
    unsigned long FogEffect::Initialise() {
        uint8_t uVar1 = CreateRenderingResources();
        UpdateShaderConstants();
        return uVar1 & 4294967295;
    }

    // 0x100936300
    void FogEffect::UpdateShaderConstants() {
        field_64.Update(0, &field_32);
    }

    // 0x100936320
    void FogEffect::Update() {
        uint64_t local_58[2];
        uint64_t local_48[3];

        unsigned long long uVar2 = FrameTime::GetCurrentTimeMS();
        bool cVar1 = field_16->GetEffectManager()->IsEnabled(94);
        unsigned long long arg1 = 18446744073709551615;
        if (cVar1) {
            arg1 = uVar2;
        }
        local_58[0] = field_144.GetValue(arg1);
        local_48[0] = *local_58 * *m_fogIntensity;
        field_32 = *local_48;
        local_48[0] = field_208.GetValue(arg1);
        field_240 = *local_48;
        float local_30 = field_244;
        float local_2c = 1.0 / (local_30 - field_240);
        float local_24 = (float)field_248.GetValue(arg1);
        float local_28 = field_240 / field_244;
        float fVar3 = (float)field_280.GetValue(arg1);
        fVar3 = (float)pow(local_28, fVar3);
        local_24 = local_24 * fVar3;
        fVar3 = (float)field_312.GetValue(arg1);
        field_48.Set(local_2c, local_30, local_24, fVar3);
        UpdateShaderConstants();
    }

    // 0x100936520
    uint8_t* FogEffect::GetShaderConsts() const {
        return &field_32;
    }

    // 0x100936550
    void FogEffect::BindConstBufferToShader(const render::ShaderProgram& shaderProgram) const {
        unsigned int arg1;
        unsigned int arg3;

        long lVar1 = ((MapArea*)Instance())->GetOrigin();
        if (*(char*)(lVar1 + 120) != '\0') {
            if (BindConstBufferToShader(render::ShaderProgram const&)::distanceFogConstBlockName == '\0') {
                if (___cxa_guard_acquire(
                        &BindConstBufferToShader(render::ShaderProgram const&)::distanceFogConstBlockName) != 0) {
                    new ((HashedString*)&BindConstBufferToShader(
                        render::ShaderProgram const&)::distanceFogConstBlockName) HashedString("DistanceFog");
                    ___cxa_guard_release(
                        &BindConstBufferToShader(render::ShaderProgram const&)::distanceFogConstBlockName);
                }
            }
            arg1 = field_136;
            arg3 = field_64.GetAmplitude();
            shaderProgram.BindConstBufferSlot(
                arg1,
                *((HashedString*)&BindConstBufferToShader(render::ShaderProgram const&)::distanceFogConstBlockName),
                arg3);
        }
    }

    // 0x100936600
    void FogEffect::CreateRenderingResources() {
        field_64.Create(1, &field_32);
    }

    // 0x100936640
    void FogEffect::DestroyRenderingResources() {
        field_64.Destroy();
    }

    // 0x100936650
    void FogEffect::OnEndFrame() {
        field_64.RotateBuffers();
    }

    // 0x100936660
    void FogEffect::SetShaderConstants(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                       Shader& shader) const {
        unsigned int arg1;
        RenderPipelineState* this_01;
        ShaderConstBuffer* shaderConstBuffer;
        ShaderProgram* this_02;
        HashedString* pHVar2;

        long lVar1 = ((MapArea*)Instance())->GetOrigin();
        if (*(char*)(lVar1 + 120) == '\0') {
            this_02 = shader.GetProgram();
            pHVar2 = (HashedString*)graphics::operator*(51);
            this_02->SetShaderConstVector4(pHVar2, &field_32);
            pHVar2 = (HashedString*)graphics::operator*(52);
            this_02->SetShaderConstVector4(pHVar2, &field_48);
        } else {
            this_01 = (RenderPipelineState*)drawCallState.GetRenderPipelineState();
            arg1 = field_136;
            shaderConstBuffer = (ShaderConstBuffer*)field_64.CurrentBuffer();
            this_01->SetPSShaderConstBuffer(arg1, shaderConstBuffer);
        }
    }

    // 0x100936700
    void FogEffect::InitialiseTweakVars(tweak::ContainerGroup& containerGroup, EffectManager& effectManager) {
        reference_wrapper<EffectManager>* reference_wrapper;
        Range<float>* in_R8;
        function<void_(tweak::Event const&)>* in_R9;
        uint8_t local_b8[24];
        shared_ptr<tweak::Container> local_80;
        float* local_68[6];
        long local_38;

        new (local_68) eastl::string("Distance Fog");
        (containerGroup._vptr[7].Clear)(&local_80, containerGroup, (eastl::string*)local_68);
        auto pCVar1 = local_80.operator->();
        void* local_88 = Tweaky_LambdaToggleEffect;
        uint64_t local_a0 = std::ref<EffectManager>(effectManager);
        uint8_t local_69 = 57;
        reference_wrapper = (reference_wrapper<EffectManager>*)&local_88;
        std::bind<void (*)(EffectManager&, tweak::Event const&, EffectType const&),
                  std::reference_wrapper<EffectManager>, std::placeholders::__ph<1> const&, EffectType>(
            (void_______jag__graphics__EffectManager___jag__tweak__Event_const___jag__graphics__EffectType_const__)
                local_b8,
            *reference_wrapper, local_a0, local_69);
        local_68->function<
            std::__bind<void (*)(EffectManager&, tweak::Event const&, EffectType const&),
                        std::reference_wrapper<EffectManager>, std::placeholders::__ph<1> const&, EffectType>,
            void>(reference_wrapper);
        pCVar1->AddCheckBox("Distance Fog", *local_68, false);
        pCVar1 = (Container*)local_80.operator->();
        local_68[0] = (float*)field_208.second();
        pCVar1->AddSlider<float>("Distance Fog Start", 0.0, 100000.0, 10.0, *local_68);
        pCVar1 = (Container*)local_80.operator->();
        long lVar2 = field_208.second();
        local_68[0] = (float*)(lVar2 + 4);
        pCVar1->AddSlider<float>("Distance Fog End", 0.0, 100000.0, 10.0, *local_68);
        pCVar1 = (Container*)local_80.operator->();
        Point<float> local_98(0.0, 1.0);
        Point<float> local_90(0.0, 10.0);
        std::function<void(tweak::Event const&)>::function<
            FogEffect::InitialiseTweakVars(tweak::ContainerGroup&, EffectManager&)::__8, void>(
            (function<void(tweak::Event const&)>*)local_68, (__8*)this);
        pCVar1->AddColourPickerHDR("Fog Colour", false, local_68, in_R8, in_R9);
        pCVar1 = (Container*)local_80.operator->();
        local_68[0] = (float*)field_248.second();
        pCVar1->AddSlider<float>("Constant Angle Falloff", 0.0, 128.0, 1.0, *local_68);
        pCVar1 = (Container*)local_80.operator->();
        local_68[0] = (float*)field_280.second();
        pCVar1->AddSlider<float>("Depth Angle Falloff", 0.0, 128.0, 1.0, *local_68);
        pCVar1 = (Container*)local_80.operator->();
        local_68[0] = (float*)field_312.second();
        pCVar1->AddSlider<float>("Angle Offset", -1.0, 1.0, 0.0125, *local_68);
    }

    // 0x100936a50
    void FogEffect::SetTweakValues(const math::Vector3T<float>& vector3, bool arg2) {
        field_348.SetXYZ(vector3);
        field_360 = arg2;
    }

    // 0x100936a80
    void FogEffect::SetFogColour(const math::Vector4T<float>& vector4, long long arg2, unsigned long long arg3) {
        field_144.SetValue(vector4, arg2, arg3);
    }

    // 0x100936aa0
    void FogEffect::SetFogIntensity(float arg1) {
        m_fogIntensity = arg1;
    }

    // 0x100936ab0
    void FogEffect::SetFogDistance(const eastl::pair<float, float>& arg1, long long arg2, unsigned long long arg3) {

        Point<float> local_38(*(float*)arg1, *(float*)(arg1 + 4));
        field_208.SetValue(local_38 / *64.0, arg2, arg3);
    }

    // 0x100936bd0
    bool FogEffect::WithinFoggedArea(float arg1) const {
        return field_240 * field_240 < arg1;
    }

    // 0x100936bf0
    void FogEffect::CalculateFogNearFarPlane(float& arg1, float& arg2, float arg3, float arg4, float arg5) {
        arg1 = arg3 * 64.0;
        arg2 = arg4;
        if (0.0 < arg5) {
            arg2 = (float)eastl::min<float>(arg5, arg4);
        }
        arg2 = arg2 * 64.0;
    }

    // 0x10094ae70
    void FogEffect::InitialiseTweakVars(tweak::ContainerGroup&,
                                        EffectManager&)::$_8::operator()(const tweak::Event& event) const {
        float arg1;
        uint64_t local_48;
        uint32_t local_40;
        uint64_t local_38[3];

        FogEffect* this_00 = *(FogEffect**)this;
        auto this_01 = event.end();
        if (event.field_16 == 3) {
            local_38[0] = this_01->GetColour3();
            this_00->field_348.SetXYZ(*local_38);
            local_40 = *(uint32_t*)&this_00->field_356;
            local_48 = *(uint64_t*)&this_00->field_348;
            arg1 = (float)this_01->GetIntensity();
            SetFogIntensity(this_00, arg1);
            if (this_00->field_360 != false) {
                local_38[0] = math::SRGBToLinear(local_48);
                local_48.SetXYZ(*local_38);
            }
            new (local_38) math::Vector4T(local_48, 1.0);
            SetFogColour(this_00, (Vector4T<float>*)local_38, 0, 0);
        } else if (event.field_16 == 1) {
            this_01->SetColour(this_00->field_348);
            this_01->SetIntensity(this_00->m_fogIntensity);
        }
    }

} // namespace jag::graphics

// 0x100936510
void pow(float arg1, float arg2) {
    _powf();
}

namespace jag::math {
    // 0x100936b20
    Vector2T<float> operator/ <float>(const Vector2T<float>& vector2, float arg2) {

        return local_10(*(float*)vector2 * (1.0 / arg2), (1.0 / arg2) * *(float*)(vector2 + 4));
        return local_10;
    }

} // namespace jag::math
