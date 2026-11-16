// libs/graphics/runetek7/effects/fog/FogEffect.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "FogEffect.h"

namespace jag::graphics {
    // 0x100d4fb00, 4 bytes, __const
    float FogEffect::FOGCONSTANT_ANGLE_FALLOFF_DEFAULT = 32.0f;

    // 0x100d4fb04, 4 bytes, __const
    float FogEffect::FOGDEPTH_ANGLE_FALLOFF_DEFAULT = 8.0f;

    // 0x100d4fb08, 4 bytes, __const
    FogEffect::FOG_ANGLE_OFFSET_DEFAULT = 0;

    // 0x103bc0850, 16 bytes, __common; set at startup by ___cxx_global_var_init.290
    ImVec4 FogEffect::FOGCOLOUR_DEFAULT = ImVec4(0.0, 0.0, 0.0, 1.0);

    // 0x103bc0860, 8 bytes, __common; set at startup by ___cxx_global_var_init.291
    math::Point<float> FogEffect::FOGDISTANCE_DEFAULT = Point<float>(100000.0, 100000.0);

    // 0x1009362d0, 48 bytes, placed by class name and debug map
    // FogEffect::Initialise()
    undefined4 FogEffect::Initialise() {
        undefined4 uVar1;

        uVar1 = (*(code*)field_0[9])();
        UpdateShaderConstants(this);
        return uVar1;
    }

    // 0x100936300, 32 bytes, placed by class name and debug map
    // FogEffect::UpdateShaderConstants()
    void FogEffect::UpdateShaderConstants() {
        (&field_64, 0, (FogShaderConsts*)&field_32)->Update();
    }

    // 0x100936320, 352 bytes, placed by class name and debug map
    // FogEffect::Update()
    void FogEffect::Update() {
        ulonglong uVar1;
        EffectManager* pEVar2;
        char cVar3;
        ulonglong uVar4;
        float fVar5;
        undefined8 local_58[2];
        undefined8 local_48[3];
        float local_30;
        float local_2c;
        float local_28;
        float local_24;

        uVar1 = FrameTime::GetCurrentTimeMS();
        pEVar2 = (EffectManager*)field_16->GetEffectManager();
        cVar3 = pEVar2->IsEnabled(94);
        uVar4 = 18446744073709551615;
        if (cVar3 != '\0') {
            uVar4 = uVar1;
        }
        local_58[0] = (&field_144, uVar4)->GetValue();
        local_48[0] = math::operator*((Vector4T*)local_58, m_fogIntensity);
        math::Rect<float>::operator=((Rect<float>*)&field_32, (Rect*)local_48);
        local_48[0] = (&field_208, uVar4)->GetValue();
        math::Vector2T<float>::operator=((Vector2T<float>*)&field_240, (Vector2T*)local_48);
        local_30 = field_244;
        local_2c = 1.0 / (local_30 - field_240);
        local_24 = (float)(&field_248, uVar4)->GetValue();
        local_28 = field_240 / field_244;
        fVar5 = (float)(&field_280, uVar4)->GetValue();
        fVar5 = (float)pow(local_28, fVar5);
        local_24 = local_24 * fVar5;
        fVar5 = (float)(&field_312, uVar4)->GetValue();
        (&field_48, local_2c, local_30, local_24, fVar5)->Set();
        UpdateShaderConstants(this);
    }

    // 0x100936520, 16 bytes, placed by class name and debug map
    // FogEffect::GetShaderConsts() const
    undefined1* FogEffect::GetShaderConsts() {
        return &field_32;
    }

    // 0x100936550, 176 bytes, placed by class name and debug map
    // FogEffect::BindConstBufferToShader(render::ShaderProgram const&) const
    void FogEffect::BindConstBufferToShader(ShaderProgram* param_1) {
        uint uVar1;
        MapArea* this_00;
        long lVar2;
        uint uVar3;
        int iVar4;

        this_00 = (MapArea*)Instance();
        lVar2 = this_00->GetOrigin();
        if (*(char*)(lVar2 + 120) != '\0') {
            if (BindConstBufferToShader(render::ShaderProgram_const&)::distanceFogConstBlockName == '\0') {
                iVar4 = ___cxa_guard_acquire(
                    &BindConstBufferToShader(render::ShaderProgram_const&)::distanceFogConstBlockName);
                if (iVar4 != 0) {
                    new (&BindConstBufferToShader(render::ShaderProgram_const&)::distanceFogConstBlockName)
                        HashedString("DistanceFog");
                    ___cxa_guard_release(
                        &BindConstBufferToShader(render::ShaderProgram_const&)::distanceFogConstBlockName);
                }
            }
            uVar1 = field_136;
            uVar3 = (&field_64)->GetAmplitude();
            param_1->BindConstBufferSlot(
                uVar1, (HashedString*)&BindConstBufferToShader(render::ShaderProgram_const&)::distanceFogConstBlockName,
                uVar3);
        }
    }

    // 0x100936600, 32 bytes, placed by class name and debug map
    // FogEffect::CreateRenderingResources()
    void FogEffect::CreateRenderingResources() {
        (&field_64, 1, (FogShaderConsts*)&field_32)->Create();
    }

    // 0x100936640, 16 bytes, placed by class name and debug map
    // FogEffect::DestroyRenderingResources()
    void FogEffect::DestroyRenderingResources() {
        (&field_64)->Destroy();
    }

    // 0x100936650, 16 bytes, placed by class name and debug map
    // FogEffect::OnEndFrame()
    void FogEffect::OnEndFrame() {
        (&field_64)->RotateBuffers();
    }

    // 0x100936660, 160 bytes, placed by class name and debug map
    // FogEffect::SetShaderConstants(render::DrawCallState&, render::RenderContext&, Shader&) const
    void FogEffect::SetShaderConstants(DrawCallState* param_1, RenderContext* param_2, Shader* param_3) {
        uint uVar1;
        MapArea* this_00;
        long lVar2;
        RenderPipelineState* this_01;
        ShaderConstBuffer* pSVar3;
        ShaderProgram* this_02;
        HashedString* pHVar4;

        this_00 = (MapArea*)Instance();
        lVar2 = this_00->GetOrigin();
        if (*(char*)(lVar2 + 120) == '\0') {
            this_02 = (ShaderProgram*)param_3->GetProgram();
            pHVar4 = (HashedString*)graphics::operator*((graphics*)51);
            this_02->SetShaderConstVector4(pHVar4, (Vector4T*)&field_32);
            pHVar4 = (HashedString*)graphics::operator*((graphics*)52);
            this_02->SetShaderConstVector4(pHVar4, (Vector4T*)&field_48);
        } else {
            this_01 = (RenderPipelineState*)param_1->GetRenderPipelineState();
            uVar1 = field_136;
            pSVar3 = (ShaderConstBuffer*)(&field_64)->CurrentBuffer();
            this_01->SetPSShaderConstBuffer(uVar1, pSVar3);
        }
    }

    // 0x100936700, 832 bytes, placed by class name and debug map
    // FogEffect::InitialiseTweakVars(tweak::ContainerGroup&, EffectManager&)
    void FogEffect::InitialiseTweakVars(ContainerGroup* param_1, EffectManager* param_2) {
        Container* pCVar1;
        long lVar2;
        undefined8 uVar3;
        undefined1 local_b8[24];
        undefined8 local_a0;
        Container* local_98;
        undefined8 local_90;
        code* local_88;
        shared_ptr<tweak::Container> local_80[23];
        EffectType local_69;
        float* local_68[6];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new (&local_88) eastl::allocator("EASTL basic_string");
        new (local_68) eastl::string("Distance Fog", (allocator*)&local_88);
        (*(code*)param_1->field_0[30])(local_80, param_1, (eastl::string*)local_68);
        local_68->~basic_string();
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->(local_80);
        local_88 = Tweaky_LambdaToggleEffect;
        local_a0 = std::ref<EffectManager>(param_2);
        local_69 = 57;
        std::bind<void (*)(EffectManager&, tweak::Event_const&, EffectType_const&),
                  std::reference_wrapper<EffectManager>, std::placeholders::__ph<1> const&, EffectType>(
            (_func_void_EffectManager_ptr_Event_ptr_EffectType_ptr*)local_b8, (reference_wrapper*)&local_88,
            (__ph*)&local_a0, &local_69);
        std::function<void(tweak::Event_const&)>::function<
            std::__bind<void (*)(EffectManager&, tweak::Event_const&, EffectType_const&),
                        std::reference_wrapper<EffectManager>, std::placeholders::__ph<1> const&, EffectType>,
            void>(local_68);
        pCVar1->AddCheckBox("Distance Fog", local_68, false);
        std::function<void(tweak::Event_const&)>::~function((function<void(tweak::Event_const&)>*)local_68);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->(local_80);
        local_68[0] = (float*)(&field_208)->second();
        tweak::Container::AddSlider<float>(pCVar1, "Distance Fog Start", 0.0, 100000.0, 10.0, local_68);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->(local_80);
        lVar2 = (&field_208)->second();
        local_68[0] = (float*)(lVar2 + 4);
        tweak::Container::AddSlider<float>(pCVar1, "Distance Fog End", 0.0, 100000.0, 10.0, local_68);
        uVar3 = shared_ptr<tweak::Container>::operator->(local_80);
        new (&local_98) math::Point<float>(0.0, 1.0);
        new (&local_90) math::Point<float>(0.0, 10.0);
        std::function<void(tweak::Event_const&)>::function<
            FogEffect::InitialiseTweakVars(tweak::ContainerGroup&, EffectManager&)::__8, void>(local_68, this);
        local_98._0_4_->AddColourPickerHDR(local_90, uVar3, "Fog Colour", 0, local_68);
        std::function<void(tweak::Event_const&)>::~function((function<void(tweak::Event_const&)>*)local_68);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->(local_80);
        local_68[0] = (float*)(&field_248)->second();
        tweak::Container::AddSlider<float>(pCVar1, "Constant Angle Falloff", 0.0, 128.0, 1.0, local_68);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->(local_80);
        local_68[0] = (float*)(&field_280)->second();
        tweak::Container::AddSlider<float>(pCVar1, "Depth Angle Falloff", 0.0, 128.0, 1.0, local_68);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->(local_80);
        local_68[0] = (float*)(&field_312)->second();
        tweak::Container::AddSlider<float>(pCVar1, "Angle Offset", -1.0, 1.0, 0.0125, local_68);
        local_80->~shared_ptr();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100936a50, 48 bytes, placed by class name and debug map
    // FogEffect::SetTweakValues(math::Vector3T<float> const&, bool)
    void FogEffect::SetTweakValues(Vector3T* param_1, bool param_2) {
        (&field_348, param_1)->SetXYZ();
        field_360 = param_2;
    }

    // 0x100936a80, 32 bytes, placed by class name and debug map
    // FogEffect::SetFogColour(math::Vector4T<float> const&, long long, unsigned long long)
    void FogEffect::SetFogColour(Vector4T* param_1, longlong param_2, ulonglong param_3) {
        ulonglong in_RCX;

        ((param_1 + 144))->SetValue(param_2, param_3, in_RCX);
    }

    // 0x100936aa0, 16 bytes, placed by class name and debug map
    // FogEffect::SetFogIntensity(float)
    void FogEffect::SetFogIntensity(float param_1) {
        m_fogIntensity = param_1;
    }

    // 0x100936ab0, 112 bytes, placed by class name and debug map
    // FogEffect::SetFogDistance(eastl::pair<float, float> const&, long long, unsigned long long)
    void FogEffect::SetFogDistance(pair* param_1, longlong param_2, ulonglong param_3) {
        Point<float> local_38[8];
        undefined8 local_30;

        math::Point<float>::Point(local_38, *(float*)param_1, *(float*)(param_1 + 4));
        local_30 = math::operator/((Vector2T*)local_38, 64.0);
        (&field_208, (Vector2T*)&local_30, param_2, param_3)->SetValue();
    }

    // 0x100936bd0, 32 bytes, placed by class name and debug map
    // FogEffect::WithinFoggedArea(float) const
    bool FogEffect::WithinFoggedArea(float param_1) {
        return field_240 * field_240 < param_1;
    }

    // 0x100936bf0, 80 bytes, placed by class name and debug map
    // FogEffect::CalculateFogNearFarPlane(float&, float&, float, float, float)
    void FogEffect::CalculateFogNearFarPlane(float* param_1, float* param_2, float param_3, float param_4,
                                             float param_5) {
        float fVar1;

        *param_1 = param_3 * 64.0;
        *param_2 = param_4;
        if (0.0 < param_5) {
            fVar1 = (float)eastl::min<float>(param_5, param_4);
            *param_2 = fVar1;
        }
        *param_2 = *param_2 * 64.0;
    }

    // 0x10094ae70, 256 bytes, placed by class name
    // FogEffect::InitialiseTweakVars(tweak::ContainerGroup&, EffectManager&)::$_8::operator()(tweak::Event const&) const
    /* FogEffect::InitialiseTweakVars(tweak::ContainerGroup&,
   EffectManager&)::$_8::TEMPNAMEPLACEHOLDERVALUE(tweak::Event const&) const */

    void FogEffect::InitialiseTweakVars(tweak::ContainerGroup&, EffectManager&)::$_8::operator()(Event* param_1) {
        FogEffect* this_00;
        ColourPicker* this_01;
        Vector3T* pVVar1;
        float fVar2;
        Vector3T local_48[8];
        float local_40;
        undefined8 local_38[3];

        this_00 = *(FogEffect**)this;
        this_01 = (ColourPicker*)param_1->end();
        if (param_1->field_16 == 3) {
            local_38[0] = this_01->GetColour3();
            pVVar1 = (Vector3T*)local_38;
            (&this_00->field_348, pVVar1)->SetXYZ();
            local_40 = *(float*)&this_00->field_356;
            local_48._0_4_ = *(float*)&this_00->field_348;
            local_48._4_4_ = *(float*)&this_00->field_352;
            fVar2 = (float)this_01->GetIntensity();
            SetFogIntensity(this_00, fVar2);
            if (this_00->field_360 != false) {
                local_38[0] = local_48->SRGBToLinear(pVVar1);
                local_48->SetXYZ(local_38);
            }
            new (local_38) math::Vector4T<float>(local_48, 1.0);
            SetFogColour((Vector4T*)this_00, (longlong)local_38, 0);
        } else if (param_1->field_16 == 1) {
            this_01->SetColour((Vector3T*)&this_00->field_348);
            this_01->SetIntensity(this_00->m_fogIntensity);
        }
    }

    // 0x10094d110, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.290
    void ___cxx_global_var_init_290() {
        new (&FogEffect::FOGCOLOUR_DEFAULT) ImVec4(0.0, 0.0, 0.0, 1.0);
    }

    // 0x10094d140, 32 bytes, placed by the data it initialises
    // ___cxx_global_var_init.291
    void ___cxx_global_var_init_291() {
        new (&FogEffect::FOGDISTANCE_DEFAULT) math::Point<float>(100000.0, 100000.0);
    }

} // namespace jag::graphics

// 0x100936510, 16 bytes, placed by neighbouring functions
// pow(float, float)
void pow(float param_1, float param_2) {
    _powf();
}

namespace jag::math {
    // 0x100936b20, 64 bytes, inline, placed by debug map only (low confidence)
    // Vector2T<float> operator/<float>(Vector2T<float> const&, float)
    /* Vector2T<float> TEMPNAMEPLACEHOLDERVALUE(Vector2T<float> const&,
   float) */

    undefined8 operator/(Vector2T* param_1, float param_2) {
        undefined8 local_10;

        new (&local_10) Point<float>(*(float*)param_1 * (1.0 / param_2), (1.0 / param_2) * *(float*)(param_1 + 4));
        return local_10;
    }

} // namespace jag::math
