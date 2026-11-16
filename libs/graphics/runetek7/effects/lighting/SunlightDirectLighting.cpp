// libs/graphics/runetek7/effects/lighting/SunlightDirectLighting.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "SunlightDirectLighting.h"

namespace jag::graphics {
    // 0x100f444b8
    int64_t SunlightDirectLighting::m_ambientScale = 1065353216;

    // 0x10002d850: SunlightDirectLighting::GetSunlight() const has the same machine code as oldscape::option::Option<int>::GetDefaultValue() const

    // 0x100917700
    unsigned long SunlightDirectLighting::Initialise() {
        uint64_t local_28[2];

        uint8_t uVar1 = CreateRenderingResources();
        local_28[0] = GetDirection(0);
        SetDirection(*local_28, 0, 0);
        local_28[0] = GetAmbientColour(0);
        SetAmbientColour(*local_28, 0, 0);
        local_28[0] = GetColour(0);
        SetColour(*local_28, 0, 0);
        return uVar1 & 4294967295;
    }

    // 0x100917790
    void SunlightDirectLighting::SetDirection(const math::Vector3T<float>& vector3, long long arg2,
                                              unsigned long long arg3) {
        field_32.SetDirection(vector3, arg2, arg3);
        Update();
    }

    // 0x1009177c0
    void SunlightDirectLighting::SetAmbientColour(const math::Vector3T<float>& vector3, long long arg2,
                                                  unsigned long long arg3) {
        field_32.SetAmbientColour(vector3, arg2, arg3);
        Update();
    }

    // 0x100917800
    void SunlightDirectLighting::SetColour(const math::Vector3T<float>& vector3, long long arg2,
                                           unsigned long long arg3) {
        field_32.SetColour(vector3, arg2, arg3);
        Update();
    }

    // 0x100917840
    void SunlightDirectLighting::Update() {
        uint64_t local_50[2];
        ReturnValue local_40;

        unsigned long long uVar2 = FrameTime::GetCurrentTimeMS();
        bool cVar1 = field_16->GetEffectManager()->IsEnabled(94);
        unsigned long long arg1 = 18446744073709551615;
        if (cVar1) {
            arg1 = uVar2;
        }
        uint8_t* this_00 = &field_32;
        local_50[0] = this_00->GetDirection(arg1);
        local_40[0] = (ReturnValue)math::operator-((Vector3T<float>*)local_50);
        ReturnValue* vector3 = local_40 = math::Vector3T<float>::Normalize();
        field_224.Set(*vector3, 0.0);
        local_50[0] = this_00->GetAmbientColour(arg1);
        local_40[0] = (ReturnValue)*m_ambientScale * *local_50;
        field_240.Set(local_40, 1.0);
        local_40[0] = (ReturnValue)this_00->GetColour(arg1);
        field_256.Set(local_40, 1.0);
        field_272.Update(0, &field_224);
    }

    // 0x1009179c0
    void SunlightDirectLighting::SetShaderConstants(render::DrawCallState& drawCallState,
                                                    render::RenderContext& renderContext, Shader& shader) const {
        RenderContext* renderContext_00;

        auto shaderProgram = shader.GetProgram();
        SetShaderConstants(drawCallState, *renderContext_00, *shaderProgram);
    }

    // 0x1009179f0
    void SunlightDirectLighting::SetShaderConstants(render::DrawCallState& drawCallState,
                                                    render::RenderContext& renderContext,
                                                    const render::ShaderProgram& shaderProgram) const {
        unsigned int arg1;
        RenderPipelineState* this_01;
        ShaderConstBuffer* shaderConstBuffer;
        HashedString* pHVar2;

        long lVar1 = ((MapArea*)Instance())->GetOrigin();
        if (*(char*)(lVar1 + 120) == '\0') {
            pHVar2 = (HashedString*)graphics::operator*(13);
            shaderProgram.SetShaderConstVector3(pHVar2, &field_224);
            pHVar2 = (HashedString*)graphics::operator*(16);
            shaderProgram.SetShaderConstVector3(pHVar2, &field_240);
            pHVar2 = (HashedString*)graphics::operator*(14);
            shaderProgram.SetShaderConstVector3(pHVar2, &field_256);
        } else {
            this_01 = (RenderPipelineState*)drawCallState.GetRenderPipelineState();
            arg1 = field_344;
            shaderConstBuffer = (ShaderConstBuffer*)field_272.CurrentBuffer();
            this_01->SetPSShaderConstBuffer(arg1, shaderConstBuffer);
        }
    }

    // 0x100917ab0
    void SunlightDirectLighting::SetSunlight(const DirectionalLight& directionalLight) {
        field_32 = directionalLight;
        Update();
    }

    // 0x100917b60
    void SunlightDirectLighting::SetAntiColour(const math::Vector3T<float>& vector3, long long arg2,
                                               unsigned long long arg3) {
        field_32.SetAntiColour(vector3, arg2, arg3);
    }

    // 0x100917b80
    void SunlightDirectLighting::BindConstBufferToShader(const render::ShaderProgram& shaderProgram) const {
        unsigned int arg1;
        unsigned int arg3;

        long lVar1 = ((MapArea*)Instance())->GetOrigin();
        if (*(char*)(lVar1 + 120) != '\0') {
            if (BindConstBufferToShader(render::ShaderProgram const&)::sunlightConstBlockName == '\0') {
                if (___cxa_guard_acquire(
                        &BindConstBufferToShader(render::ShaderProgram const&)::sunlightConstBlockName) != 0) {
                    new ((HashedString*)&BindConstBufferToShader(render::ShaderProgram const&)::sunlightConstBlockName)
                        HashedString("Sunlight");
                    ___cxa_guard_release(
                        &BindConstBufferToShader(render::ShaderProgram const&)::sunlightConstBlockName);
                }
            }
            arg1 = field_344;
            arg3 = field_272.GetAmplitude();
            shaderProgram.BindConstBufferSlot(
                arg1, *((HashedString*)&BindConstBufferToShader(render::ShaderProgram const&)::sunlightConstBlockName),
                arg3);
        }
    }

    // 0x100917c30
    uint32_t SunlightDirectLighting::CreateRenderingResources() {
        uint32_t uVar1 = field_272.Create(1, nullptr);
        Update();
        return uVar1;
    }

    // 0x100917c80
    void SunlightDirectLighting::DestroyRenderingResources() {
        field_272.Destroy();
    }

    // 0x100917ca0
    void SunlightDirectLighting::OnEndFrame() {
        field_272.RotateBuffers();
    }

    // 0x100917cc0
    void SunlightDirectLighting::InitialiseTweakVars(tweak::ContainerGroup& containerGroup,
                                                     EffectManager& effectManager) {
        Range<float>* in_R8;
        function<void_(tweak::Event const&)>* in_R9;
        shared_ptr<tweak::Container> local_88;
        long local_30;

        eastl::string local_68("Sunlight");
        (containerGroup._vptr[7].Clear)(&local_88, containerGroup, &local_68);
        auto str = local_88.operator->();
        local_78.AddGroup(str);
        Container* pCVar1 = (Container*)*local_78;
        CreateTweakDirectionSlider(*pCVar1, "X", &field_360);
        pCVar1 = (Container*)*local_78;
        CreateTweakDirectionSlider(*pCVar1, "Y", &field_364);
        pCVar1 = (Container*)*local_78;
        CreateTweakDirectionSlider(*pCVar1, "Z", &field_368);
        pCVar1 = (Container*)local_88.operator->();
        Point<float> local_98(0.0, 1.0);
        Point<float> local_90(0.0, 10.0);
        std::function<void(tweak::Event const&)>::function<
            SunlightDirectLighting::InitialiseTweakVars(tweak::ContainerGroup&, EffectManager&)::__0, void>(
            (function<void(tweak::Event const&)>*)&local_68, (__0*)this);
        pCVar1->AddColourPickerHDR("Sun Colour", false, &local_68, in_R8, in_R9);
        pCVar1 = (Container*)local_88.operator->();
        std::function<void(tweak::Event const&)>::function<
            SunlightDirectLighting::InitialiseTweakVars(tweak::ContainerGroup&, EffectManager&)::__1, void>(
            (function<void(tweak::Event const&)>*)&local_68, (__1*)this);
        pCVar1->AddGradientSlider("Ambient", 0.0, 10.0, 0.001, local_68);
    }

    // 0x100917ef0
    void SunlightDirectLighting::CreateTweakDirectionSlider(tweak::Container& container, const char* str, float* arg3) {
        function<void(tweak::Event const&)> local_58[48];
        long local_28;

        std::function<void(tweak::Event const&)>::function<
            SunlightDirectLighting::CreateTweakDirectionSlider(tweak::Container&, char const*, float*)::__2, void>(
            local_58, (__2*)this);
        container.AddGradientSlider(str, -100.0, 100.0, 1.0, *local_58);
    }

    // 0x100917fc0
    void SunlightDirectLighting::SetTweakValues(const math::Vector3T<float>& vector31,
                                                const math::Vector3T<float>& vector32, float arg3, float arg4,
                                                float arg5, bool arg6) {
        field_360.SetXYZ(vector31);
        field_348.SetXYZ(vector32);
        field_372 = arg3;
        field_376 = arg4;
        m_brightnessOffset = arg5;
        field_384 = arg6;
    }

    // 0x100918040
    void SunlightDirectLighting::UseGammaCorrection(bool arg1) {
        field_384 = arg1;
    }

    // 0x100918050
    void SunlightDirectLighting::SetBrightnessOffset(float arg1) {
        m_brightnessOffset = arg1;
    }

    // 0x100924b70
    void SunlightDirectLighting::InitialiseTweakVars(tweak::ContainerGroup&,
                                                     EffectManager&)::$_0::operator()(const tweak::Event& event) const {
        uint64_t local_40;
        uint32_t local_38;
        uint64_t local_30[2];

        SunlightDirectLighting* this_00 = *(SunlightDirectLighting**)this;
        auto this_01 = event.end();
        if (event.field_16 == 3) {
            local_40 = this_01->GetColour3();
            this_00->field_348.SetXYZ(local_40);
            this_00->field_372 = (float)this_01->GetIntensity();
            local_38 = *(uint32_t*)&this_00->field_356;
            local_40 = *(uint64_t*)&this_00->field_348;
            if (this_00->field_384 != false) {
                local_30[0] = math::SRGBToLinear(local_40);
                local_40.SetXYZ(*local_30);
            }
            local_30[0] = *this_00->field_372 * local_40;
            SetColour(this_00, (Vector3T<float>*)local_30, 0, 0);
            local_30[0] = (*((this_00->m_brightnessOffset + 1.0) * this_00->field_376)) * local_40;
            SetAmbientColour(this_00, (Vector3T<float>*)local_30, 0, 0);
        } else if (event.field_16 == 1) {
            this_01->SetColour(this_00->field_348);
            this_01->SetIntensity(this_00->field_372);
        }
    }

    // 0x1009255a0
    void SunlightDirectLighting::InitialiseTweakVars(tweak::ContainerGroup&,
                                                     EffectManager&)::$_1::operator()(const tweak::Event& event) const {
        float fVar1;
        uint64_t local_68;
        float local_60;
        Gradient local_58;
        Gradient local_38;

        SunlightDirectLighting* this_00 = *(SunlightDirectLighting**)this;
        auto this_01 = event.end();
        if (event.field_16 == 3) {
            fVar1 = (float)this_01->GetCurrentValue();
            this_00->field_376 = fVar1;
            fVar1 = (this_00->m_brightnessOffset + 1.0) * fVar1;
            if (this_00->field_384 == false) {
                local_58.field_8 = *(float*)&this_00->field_356;
                local_58.field_0 = *(uint32_t*)&this_00->field_348;
                local_58.field_4 = *(uint32_t*)&this_00->field_352;
                local_60 = fVar1;
            } else {
                local_38.field_0 = fVar1;
                local_58._0_8_ = math::SRGBToLinear(this_00->field_348);
                local_60 = local_38.field_0;
                local_58.field_8 = fVar1;
            }
            local_68 = *local_60 * local_58;
            SetAmbientColour(this_00, (Vector3T<float>*)&local_68, 0, 0);
        } else if (event.field_16 == 1) {
            this_01->SetSlider<float>(this_00->field_376);
            local_38._0_8_ = math::Colour4FromR8G8B8A8(255);
            local_58._16_8_ = math::Colour4FromR8G8B8A8(4294967295);
            local_58.field_0 = local_38.field_0;
            local_58.field_4 = local_38.field_4;
            this_01->SetGradient(local_58);
        }
    }

    // 0x100926050
    void SunlightDirectLighting::CreateTweakDirectionSlider(tweak::Container&, char const*,
                                                            float*)::$_2::operator()(const tweak::Event& event) const {
        uint32_t uVar1;

        SunlightDirectLighting* this_00 = *(SunlightDirectLighting**)this;
        auto this_01 = event.end();
        if (event.field_16 == 3) {
            uVar1 = this_01->GetCurrentValue();
            **(uint32_t**)(this + 8) = uVar1;
            SetDirection(this_00, (Vector3T<float>*)&this_00->field_360, 0, 0);
        } else if (event.field_16 == 1) {
            this_01->SetSlider<float>(**(float**)(this + 8));
            this_01->SetGradient(2290649343, 2290649343);
        }
    }

} // namespace jag::graphics
