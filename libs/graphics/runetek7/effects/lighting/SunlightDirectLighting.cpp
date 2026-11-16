// libs/graphics/runetek7/effects/lighting/SunlightDirectLighting.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "SunlightDirectLighting.h"

namespace jag::graphics {
    // 0x100f444b8, 8 bytes, __data
    SunlightDirectLighting::m_ambientScale = 1065353216;

    // 0x10002d850: the linker folded this into oldscape::option::Option<int>::GetDefaultValue() const, which has identical code
    SunlightDirectLighting::GetSunlight() const;

    // 0x100917700, 144 bytes, placed by class name and debug map
    // SunlightDirectLighting::Initialise()
    undefined4 SunlightDirectLighting::Initialise() {
        undefined4 uVar1;
        undefined8 local_28[2];

        uVar1 = (*(code*)field_0[9])();
        local_28[0] = GetDirection(this, 0);
        SetDirection((Vector3T*)this, (longlong)local_28, 0);
        local_28[0] = GetAmbientColour(this, 0);
        SetAmbientColour((Vector3T*)this, (longlong)local_28, 0);
        local_28[0] = GetColour(this, 0);
        SetColour((Vector3T*)this, (longlong)local_28, 0);
        return uVar1;
    }

    // 0x100917790, 48 bytes, placed by class name and debug map
    // SunlightDirectLighting::SetDirection(math::Vector3T<float> const&, long long, unsigned long long)
    void SunlightDirectLighting::SetDirection(Vector3T* param_1, longlong param_2, ulonglong param_3) {
        DirectionalLight::SetDirection(param_1 + 32, param_2, param_3);
        Update((SunlightDirectLighting*)param_1);
    }

    // 0x1009177c0, 48 bytes, placed by class name and debug map
    // SunlightDirectLighting::SetAmbientColour(math::Vector3T<float> const&, long long, unsigned long long)
    void SunlightDirectLighting::SetAmbientColour(Vector3T* param_1, longlong param_2, ulonglong param_3) {
        DirectionalLight::SetAmbientColour(param_1 + 32, param_2, param_3);
        Update((SunlightDirectLighting*)param_1);
    }

    // 0x100917800, 48 bytes, placed by class name and debug map
    // SunlightDirectLighting::SetColour(math::Vector3T<float> const&, long long, unsigned long long)
    void SunlightDirectLighting::SetColour(Vector3T* param_1, longlong param_2, ulonglong param_3) {
        DirectionalLight::SetColour(param_1 + 32, param_2, param_3);
        Update((SunlightDirectLighting*)param_1);
    }

    // 0x100917840, 304 bytes, placed by class name and debug map
    // SunlightDirectLighting::Update()
    void SunlightDirectLighting::Update() {
        undefined1* this_00;
        EffectManager* pEVar1;
        char cVar2;
        Vector3T* pVVar3;
        Vector3T* pVVar4;
        Vector3T local_50[16];
        undefined8 local_40[2];

        pVVar3 = (Vector3T*)FrameTime::GetCurrentTimeMS();
        pEVar1 = (EffectManager*)field_16->GetEffectManager();
        cVar2 = pEVar1->IsEnabled(94);
        pVVar4 = (Vector3T*)18446744073709551615;
        if (cVar2 != '\0') {
            pVVar4 = pVVar3;
        }
        this_00 = &field_32;
        pVVar3 = pVVar4;
        local_50._0_8_ = this_00->GetDirection((ulonglong)pVVar4);
        local_40[0] = math::operator-((math*)local_50, pVVar3);
        pVVar3 = (Vector3T*)local_40->Normalize();
        (&field_224, pVVar3, 0.0)->Set();
        local_50._0_8_ = this_00->GetAmbientColour((ulonglong)pVVar4);
        local_40[0] = math::operator*(local_50, m_ambientScale);
        (&field_240, (Vector3T*)local_40, 1.0)->Set();
        local_40[0] = this_00->GetColour((ulonglong)pVVar4);
        (&field_256, (Vector3T*)local_40, 1.0)->Set();
        (&field_272, 0, (Data*)&field_224)->Update();
    }

    // 0x1009179c0, 48 bytes, placed by class name
    // SunlightDirectLighting::SetShaderConstants(render::DrawCallState&, render::RenderContext&, Shader&) const
    void SunlightDirectLighting::SetShaderConstants(DrawCallState* param_1, RenderContext* param_2, Shader* param_3) {
        undefined1 auVar1[16];

        auVar1 = param_3->GetProgram();
        SetShaderConstants(this, param_1, auVar1._8_8_, auVar1._0_8_);
    }

    // 0x1009179f0, 192 bytes, placed by class name
    // SunlightDirectLighting::SetShaderConstants(render::DrawCallState&, render::RenderContext&, render::ShaderProgram const&) const
    void SunlightDirectLighting::SetShaderConstants(DrawCallState* param_1, RenderContext* param_2,
                                                    ShaderProgram* param_3) {
        uint uVar1;
        MapArea* this_00;
        long lVar2;
        RenderPipelineState* this_01;
        ShaderConstBuffer* pSVar3;
        HashedString* pHVar4;

        this_00 = (MapArea*)Instance();
        lVar2 = this_00->GetOrigin();
        if (*(char*)(lVar2 + 120) == '\0') {
            pHVar4 = (HashedString*)graphics::operator*((graphics*)13);
            param_3->SetShaderConstVector3(pHVar4, (Vector3T*)&field_224);
            pHVar4 = (HashedString*)graphics::operator*((graphics*)16);
            param_3->SetShaderConstVector3(pHVar4, (Vector3T*)&field_240);
            pHVar4 = (HashedString*)graphics::operator*((graphics*)14);
            param_3->SetShaderConstVector3(pHVar4, (Vector3T*)&field_256);
        } else {
            this_01 = (RenderPipelineState*)param_1->GetRenderPipelineState();
            uVar1 = field_344;
            pSVar3 = (ShaderConstBuffer*)(&field_272)->CurrentBuffer();
            this_01->SetPSShaderConstBuffer(uVar1, pSVar3);
        }
    }

    // 0x100917ab0, 48 bytes, placed by class name
    // SunlightDirectLighting::SetSunlight(DirectionalLight const&)
    void SunlightDirectLighting::SetSunlight(DirectionalLight* param_1) {
        DirectionalLight::operator=((DirectionalLight*)&field_32, param_1);
        Update(this);
    }

    // 0x100917b60, 16 bytes, placed by class name
    // SunlightDirectLighting::SetAntiColour(math::Vector3T<float> const&, long long, unsigned long long)
    void SunlightDirectLighting::SetAntiColour(Vector3T* param_1, longlong param_2, ulonglong param_3) {
        DirectionalLight::SetAntiColour(param_1 + 32, param_2, param_3);
    }

    // 0x100917b80, 176 bytes, placed by class name
    // SunlightDirectLighting::BindConstBufferToShader(render::ShaderProgram const&) const
    void SunlightDirectLighting::BindConstBufferToShader(ShaderProgram* param_1) {
        uint uVar1;
        MapArea* this_00;
        long lVar2;
        uint uVar3;
        int iVar4;

        this_00 = (MapArea*)Instance();
        lVar2 = this_00->GetOrigin();
        if (*(char*)(lVar2 + 120) != '\0') {
            if (BindConstBufferToShader(render::ShaderProgram_const&)::sunlightConstBlockName == '\0') {
                iVar4 = ___cxa_guard_acquire(
                    &BindConstBufferToShader(render::ShaderProgram_const&)::sunlightConstBlockName);
                if (iVar4 != 0) {
                    new (&BindConstBufferToShader(render::ShaderProgram_const&)::sunlightConstBlockName)
                        HashedString("Sunlight");
                    ___cxa_guard_release(
                        &BindConstBufferToShader(render::ShaderProgram_const&)::sunlightConstBlockName);
                }
            }
            uVar1 = field_344;
            uVar3 = (&field_272)->GetAmplitude();
            param_1->BindConstBufferSlot(
                uVar1, (HashedString*)&BindConstBufferToShader(render::ShaderProgram_const&)::sunlightConstBlockName,
                uVar3);
        }
    }

    // 0x100917c30, 48 bytes, placed by class name
    // SunlightDirectLighting::CreateRenderingResources()
    undefined4 SunlightDirectLighting::CreateRenderingResources() {
        undefined4 uVar1;

        uVar1 = (&field_272, 1, (Data*)0)->Create();
        Update(this);
        return uVar1;
    }

    // 0x100917c80, 32 bytes, placed by class name
    // SunlightDirectLighting::DestroyRenderingResources()
    void SunlightDirectLighting::DestroyRenderingResources() {
        (&field_272)->Destroy();
    }

    // 0x100917ca0, 32 bytes, placed by class name
    // SunlightDirectLighting::OnEndFrame()
    void SunlightDirectLighting::OnEndFrame() {
        (&field_272)->RotateBuffers();
    }

    // 0x100917cc0, 560 bytes, placed by class name
    // SunlightDirectLighting::InitialiseTweakVars(tweak::ContainerGroup&, EffectManager&)
    void SunlightDirectLighting::InitialiseTweakVars(ContainerGroup* param_1, EffectManager* param_2) {
        char* pcVar1;
        Container* pCVar2;
        undefined8 uVar3;
        Container* local_98;
        undefined8 local_90;
        shared_ptr<tweak::Container> local_88[16];
        allocator local_78[16];
        eastl::string local_68[56];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::allocator::allocator(local_78, "EASTL basic_string");
        eastl::string::basic_string(local_68, "Sunlight", local_78);
        (*(code*)param_1->field_0[30])(local_88, param_1, local_68);
        eastl::string::~basic_string(local_68);
        pcVar1 = (char*)shared_ptr<tweak::Container>::operator->(local_88);
        local_78->AddGroup(pcVar1);
        pCVar2 = (Container*)shared_ptr<tweak::Container>::operator*((shared_ptr<tweak::Container>*)local_78);
        CreateTweakDirectionSlider(this, pCVar2, "X", &field_360);
        pCVar2 = (Container*)shared_ptr<tweak::Container>::operator*((shared_ptr<tweak::Container>*)local_78);
        CreateTweakDirectionSlider(this, pCVar2, "Y", &field_364);
        pCVar2 = (Container*)shared_ptr<tweak::Container>::operator*((shared_ptr<tweak::Container>*)local_78);
        CreateTweakDirectionSlider(this, pCVar2, "Z", &field_368);
        uVar3 = shared_ptr<tweak::Container>::operator->(local_88);
        new (&local_98) math::Point<float>(0.0, 1.0);
        new (&local_90) math::Point<float>(0.0, 10.0);
        std::function<void(tweak::Event_const&)>::function<
            SunlightDirectLighting::InitialiseTweakVars(tweak::ContainerGroup&, EffectManager&)::__0, void>(local_68,
                                                                                                            this);
        local_98->AddColourPickerHDR(local_90, uVar3, "Sun Colour", 0, local_68);
        std::function<void(tweak::Event_const&)>::~function((function<void(tweak::Event_const&)>*)local_68);
        pCVar2 = (Container*)shared_ptr<tweak::Container>::operator->(local_88);
        std::function<void(tweak::Event_const&)>::function<
            SunlightDirectLighting::InitialiseTweakVars(tweak::ContainerGroup&, EffectManager&)::__1, void>(
            (function*)local_68, this);
        pCVar2->AddGradientSlider("Ambient", 0.0, 10.0, 0.001, local_68);
        std::function<void(tweak::Event_const&)>::~function((function<void(tweak::Event_const&)>*)local_68);
        local_78->~shared_ptr();
        local_88->~shared_ptr();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100917ef0, 160 bytes, placed by class name
    // SunlightDirectLighting::CreateTweakDirectionSlider(tweak::Container&, char const*, float*)
    void SunlightDirectLighting::CreateTweakDirectionSlider(Container* param_1, char* param_2, float* param_3) {
        function local_58[48];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        std::function<void(tweak::Event_const&)>::function<
            SunlightDirectLighting::CreateTweakDirectionSlider(tweak::Container&, char const*, float*)::__2, void>(
            local_58, this, param_3);
        param_1->AddGradientSlider(param_2, -100.0, 100.0, 1.0, local_58);
        std::function<void(tweak::Event_const&)>::~function((function<void(tweak::Event_const&)>*)local_58);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100917fc0, 128 bytes, placed by class name
    // SunlightDirectLighting::SetTweakValues(math::Vector3T<float> const&, math::Vector3T<float> const&, float, float, float, bool)
    void SunlightDirectLighting::SetTweakValues(Vector3T* param_1, Vector3T* param_2, float param_3, float param_4,
                                                float param_5, bool param_6) {
        (&field_360, param_1)->SetXYZ();
        (&field_348, param_2)->SetXYZ();
        field_372 = param_3;
        field_376 = param_4;
        m_brightnessOffset = param_5;
        field_384 = param_6;
    }

    // 0x100918040, 16 bytes, placed by class name
    // SunlightDirectLighting::UseGammaCorrection(bool)
    void SunlightDirectLighting::UseGammaCorrection(bool param_1) {
        field_384 = param_1;
    }

    // 0x100918050, 16 bytes, placed by class name
    // SunlightDirectLighting::SetBrightnessOffset(float)
    void SunlightDirectLighting::SetBrightnessOffset(float param_1) {
        m_brightnessOffset = param_1;
    }

    // 0x100924b70, 320 bytes, placed by class name
    // SunlightDirectLighting::InitialiseTweakVars(tweak::ContainerGroup&, EffectManager&)::$_0::operator()(tweak::Event const&) const
    /* SunlightDirectLighting::InitialiseTweakVars(tweak::ContainerGroup&,
   EffectManager&)::$_0::TEMPNAMEPLACEHOLDERVALUE(tweak::Event const&) const */

    void SunlightDirectLighting::InitialiseTweakVars(tweak::ContainerGroup&,
                                                     EffectManager&)::$_0::operator()(Event* param_1) {
        Vector3T* pVVar1;
        ColourPicker* this_00;
        Vector3T* pVVar2;
        undefined4 uVar3;
        Vector3T local_40[8];
        float local_38;
        undefined8 local_30[2];

        pVVar1 = *(Vector3T**)this;
        this_00 = (ColourPicker*)param_1->end();
        if (param_1->field_16 == 3) {
            local_40 = (Vector3T[8])this_00->GetColour3();
            pVVar2 = local_40;
            ((pVVar1 + 348))->SetXYZ(pVVar2);
            uVar3 = this_00->GetIntensity();
            *(undefined4*)(pVVar1 + 372) = uVar3;
            local_38 = *(float*)(pVVar1 + 356);
            local_40 = *(Vector3T(*)[8])(pVVar1 + 348);
            if (pVVar1[384] != (Vector3T)0) {
                local_30[0] = local_40->SRGBToLinear(pVVar2);
                local_40->SetXYZ(local_30);
            }
            local_30[0] = math::operator*(local_40, *(float*)(pVVar1 + 372));
            SetColour(pVVar1, (longlong)local_30, 0);
            local_30[0] = math::operator*(local_40, (*(float*)(pVVar1 + 380) + 1.0) * *(float*)(pVVar1 + 376));
            SetAmbientColour(pVVar1, (longlong)local_30, 0);
        } else if (param_1->field_16 == 1) {
            this_00->SetColour(pVVar1 + 348);
            this_00->SetIntensity(*(float*)(pVVar1 + 372));
        }
    }

    // 0x1009255a0, 272 bytes, placed by class name
    // SunlightDirectLighting::InitialiseTweakVars(tweak::ContainerGroup&, EffectManager&)::$_1::operator()(tweak::Event const&) const
    /* SunlightDirectLighting::InitialiseTweakVars(tweak::ContainerGroup&,
   EffectManager&)::$_1::TEMPNAMEPLACEHOLDERVALUE(tweak::Event const&) const */

    void SunlightDirectLighting::InitialiseTweakVars(tweak::ContainerGroup&,
                                                     EffectManager&)::$_1::operator()(Event* param_1) {
        math* this_00;
        Vector3T* pVVar1;
        GradientSlider* this_01;
        float fVar3;
        undefined8 local_68;
        float local_60;
        Gradient local_58;
        Gradient local_38;

        pVVar1 = *(Vector3T**)this;
        this_01 = (GradientSlider*)param_1->end();
        if (param_1->field_16 == 3) {
            fVar3 = (float)this_01->GetCurrentValue();
            *(float*)(pVVar1 + 376) = fVar3;
            fVar3 = (*(float*)(pVVar1 + 380) + 1.0) * fVar3;
            this_00 = (math*)(pVVar1 + 348);
            if (pVVar1[384] == (Vector3T)0) {
                local_58.field_8 = *(float*)(pVVar1 + 356);
                local_58.field_0 = this_00->field_0;
                local_58.field_4 = this_00->field_4;
                local_60 = fVar3;
            } else {
                local_38.field_0 = fVar3;
                local_58._0_8_ = this_00->SRGBToLinear(param_1);
                local_60 = local_38.field_0;
                local_58.field_8 = fVar3;
            }
            local_68 = math::operator*((Vector3T*)&local_58, local_60);
            SetAmbientColour(pVVar1, (longlong)&local_68, 0);
        } else if (param_1->field_16 == 1) {
            tweak::Slider::SetSlider<float>((Slider*)this_01, *(float*)(pVVar1 + 376));
            local_38._0_8_ = math::Colour4FromR8G8B8A8(255);
            local_58._16_8_ = math::Colour4FromR8G8B8A8(4294967295);
            local_58.field_0 = local_38.field_0;
            local_58.field_4 = local_38.field_4;
            this_01->SetGradient(&local_58);
        }
    }

    // 0x100926050, 128 bytes, placed by class name
    // SunlightDirectLighting::CreateTweakDirectionSlider(tweak::Container&, char const*, float*)::$_2::operator()(tweak::Event const&) const
    /* SunlightDirectLighting::CreateTweakDirectionSlider(tweak::Container&, char
   const*, float*)::$_2::TEMPNAMEPLACEHOLDERVALUE(tweak::Event const&) const */

    void SunlightDirectLighting::CreateTweakDirectionSlider(tweak::Container&, char const*,
                                                            float*)::$_2::operator()(Event* param_1) {
        Vector3T* pVVar1;
        GradientSlider* this_00;
        undefined4 uVar2;

        pVVar1 = *(Vector3T**)this;
        this_00 = (GradientSlider*)param_1->end();
        if (param_1->field_16 == 3) {
            uVar2 = this_00->GetCurrentValue();
            **(undefined4**)(this + 8) = uVar2;
            SetDirection(pVVar1, (longlong)(pVVar1 + 360), 0);
        } else if (param_1->field_16 == 1) {
            tweak::Slider::SetSlider<float>((Slider*)this_00, **(float**)(this + 8));
            this_00->SetGradient(2290649343, 2290649343);
        }
    }

} // namespace jag::graphics
