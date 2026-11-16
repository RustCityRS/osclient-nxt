// libs/graphics/runetek7/effects/lightscattering/LightScatteringEffect.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "LightScatteringEffect.h"

namespace jag::graphics {
    // 0x10036f4c0: the linker folded this into GeometryBatch::GetFaceTransparencyBuffer(), which has identical code
    LightScatteringEffect::GetHorizonFalloff();

    // 0x1003c1fc0: the linker folded this into game::LocationContainer::GetDynamicChangedLocations() const, which has identical code
    LightScatteringEffect::GetScatteringDensity();

    // 0x1004ab8a0: the linker folded this into game::EnvironmentOverride::GetVolumetricOverrides() const, which has identical code
    LightScatteringEffect::GetScatteringStartDistance();

    // 0x100931680, 128 bytes, placed by class name and debug map
    // LightScatteringEffect::Initialise()
    undefined4 LightScatteringEffect::Initialise() {
        undefined4 uVar1;
        float local_24;
        float local_20;
        float local_1c;

        uVar1 = (*(code*)field_0[9])();
        local_24 = 1.0;
        (&field_448, &local_24, 0, 0)->SetValue();
        local_20 = 1.0;
        (&field_480, &local_20, 0, 0)->SetValue();
        local_1c = 1.0;
        (&field_512, &local_1c, 0, 0)->SetValue();
        UpdateShaderConstants(this);
        return uVar1;
    }

    // 0x100931700, 64 bytes, placed by class name and debug map
    // LightScatteringEffect::UpdateShaderConstants()
    void LightScatteringEffect::UpdateShaderConstants() {
        MapArea* this_00;
        long lVar1;

        this_00 = (MapArea*)Instance();
        lVar1 = this_00->GetOrigin();
        if (*(char*)(lVar1 + 120) != '\0') {
            (&field_96, 0, (SimpleScatteringParams*)field_32)->Update();
        }
    }

    // 0x100931740, 416 bytes, placed by class name and debug map
    // LightScatteringEffect::Update()
    void LightScatteringEffect::Update() {
        ulonglong uVar1;
        EffectManager* pEVar2;
        char cVar3;
        ulonglong uVar4;
        float fVar5;
        float fVar6;
        float fVar7;
        float fVar8;
        undefined8 local_40[2];
        undefined8 local_30[2];

        uVar1 = FrameTime::GetCurrentTimeMS();
        pEVar2 = (EffectManager*)field_16->GetEffectManager();
        cVar3 = pEVar2->IsEnabled(94);
        uVar4 = 18446744073709551615;
        if (cVar3 != '\0') {
            uVar4 = uVar1;
        }
        local_30[0] = (&field_176, uVar4)->GetValue();
        fVar5 = (float)(&field_512, uVar4)->GetValue();
        local_40[0] = math::operator*((Vector3T*)local_30, fVar5);
        (field_32, (Vector3T*)local_40)->SetXYZ();
        local_30[0] = (&field_224, uVar4)->GetValue();
        fVar5 = (float)(&field_480, uVar4)->GetValue();
        local_40[0] = math::operator*((Vector3T*)local_30, fVar5);
        ((field_32 + 16), (Vector3T*)local_40)->SetXYZ();
        local_30[0] = (&field_272, uVar4)->GetValue();
        fVar5 = (float)(&field_448, uVar4)->GetValue();
        local_40[0] = math::operator*((Vector3T*)local_30, fVar5);
        ((field_32 + 32), (Vector3T*)local_40)->SetXYZ();
        fVar5 = (float)(&field_320, uVar4)->GetValue();
        fVar6 = (float)(&field_352, uVar4)->GetValue();
        fVar7 = (float)(&field_384, uVar4)->GetValue();
        fVar8 = (float)(&field_416, uVar4)->GetValue();
        ((field_32 + 48), fVar5 * 1000.0, fVar6, fVar7, fVar8)->Set();
        UpdateShaderConstants(this);
    }

    // 0x100931980, 1472 bytes, placed by class name and debug map
    // LightScatteringEffect::InitialiseTweakVars(tweak::ContainerGroup&, EffectManager&)
    void LightScatteringEffect::InitialiseTweakVars(ContainerGroup* param_1, EffectManager* param_2) {
        undefined* puVar1;
        Container* pCVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined1 local_150[24];
        undefined1 local_138[24];
        undefined1 local_120[24];
        undefined1 local_108[24];
        undefined1 local_f0[24];
        undefined1 local_d8[24];
        Container* local_c0;
        undefined8 local_b8;
        Container* local_b0;
        undefined8 local_a8;
        Container* local_a0;
        undefined8 local_98;
        shared_ptr<tweak::Container> local_90[16];
        undefined8 local_80;
        code* local_78;
        undefined1 local_70[8];
        Terrain* local_68[6];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new (&local_78) eastl::allocator("EASTL basic_string");
        new (local_68) eastl::string("Simple Scattering", (allocator*)&local_78);
        (*(code*)param_1->field_0[30])(local_90, param_1, (eastl::string*)local_68);
        local_68->~basic_string();
        pCVar2 = (Container*)shared_ptr<tweak::Container>::operator->(local_90);
        local_78 = Tweaky_LambdaToggleEffect;
        local_80 = std::ref<EffectManager>(param_2);
        local_70[7] = 48;
        std::bind<void (*)(EffectManager&, tweak::Event_const&, EffectType_const&),
                  std::reference_wrapper<EffectManager>, std::placeholders::__ph<1> const&, EffectType>(
            (_func_void_EffectManager_ptr_Event_ptr_EffectType_ptr*)local_150, (reference_wrapper*)&local_78,
            (__ph*)&local_80, local_70 + 7);
        std::function<void(tweak::Event_const&)>::function<
            std::__bind<void (*)(EffectManager&, tweak::Event_const&, EffectType_const&),
                        std::reference_wrapper<EffectManager>, std::placeholders::__ph<1> const&, EffectType>,
            void>(local_68);
        pCVar2->AddCheckBox("SimpleScattering", local_68, false);
        std::function<void(tweak::Event_const&)>::~function((function<void(tweak::Event_const&)>*)local_68);
        pCVar2 = (Container*)shared_ptr<tweak::Container>::operator->(local_90);
        local_78 = Tweaky_LambdaToggleEffect;
        local_80 = std::ref<EffectManager>(param_2);
        local_70[7] = 49;
        std::bind<void (*)(EffectManager&, tweak::Event_const&, EffectType_const&),
                  std::reference_wrapper<EffectManager>, std::placeholders::__ph<1> const&, EffectType>(
            (_func_void_EffectManager_ptr_Event_ptr_EffectType_ptr*)local_138, (reference_wrapper*)&local_78,
            (__ph*)&local_80, local_70 + 7);
        std::function<void(tweak::Event_const&)>::function<
            std::__bind<void (*)(EffectManager&, tweak::Event_const&, EffectType_const&),
                        std::reference_wrapper<EffectManager>, std::placeholders::__ph<1> const&, EffectType>,
            void>(local_68);
        pCVar2->AddCheckBox("Skybox Scattering", local_68, false);
        std::function<void(tweak::Event_const&)>::~function((function<void(tweak::Event_const&)>*)local_68);
        pCVar2 = (Container*)shared_ptr<tweak::Container>::operator->(local_90);
        local_68[0] = (Terrain*)(&field_320)->second();
        tweak::Container::AddSlider<float>(pCVar2, "Scattering Density", 0.0, 0.001, 1e-06, (float**)local_68);
        pCVar2 = (Container*)shared_ptr<tweak::Container>::operator->(local_90);
        puVar1 = PTR_Tweaky_LambdaEditFieldChange<float> _100ee6a38;
        local_78 = (code*)PTR_Tweaky_LambdaEditFieldChange<float> _100ee6a38;
        local_80 = std::ref<EffectManager>(param_2);
        local_70[7] = 48;
        std::bind<void (*)(EffectManager&, tweak::Event_const&, EffectType_const&,
                           std::function<void(tweak::EditBoxEvent<float> const&)>),
                  std::reference_wrapper<EffectManager>, std::placeholders::__ph<1> const&, EffectType,
                  (tweak::ContainerGroup&)->InitialiseTweakVars(EffectManager&)::__0>(
            (_func_void_EffectManager_ptr_Event_ptr_EffectType_ptr_function*)local_120, (reference_wrapper*)&local_78,
            (__ph*)&local_80, local_70 + 7, (__0*)local_70);
        std::function<void(tweak::Event_const&)>::function<
            std::__bind<void (*)(EffectManager&, tweak::Event_const&, EffectType_const&,
                                 std::function<void(tweak::EditBoxEvent<float> const&)>),
                        std::reference_wrapper<EffectManager>, std::placeholders::__ph<1> const&, EffectType,
                        (tweak::ContainerGroup&)->InitialiseTweakVars(EffectManager&)::__0>,
            void>((function*)local_68);
        pCVar2->AddEditField("ScatteringDensity", 100, local_68);
        std::function<void(tweak::Event_const&)>::~function((function<void(tweak::Event_const&)>*)local_68);
        pCVar2 = (Container*)shared_ptr<tweak::Container>::operator->(local_90);
        local_78 = (code*)puVar1;
        local_80 = std::ref<EffectManager>(param_2);
        local_70[7] = 48;
        std::bind<void (*)(EffectManager&, tweak::Event_const&, EffectType_const&,
                           std::function<void(tweak::EditBoxEvent<float> const&)>),
                  std::reference_wrapper<EffectManager>, std::placeholders::__ph<1> const&, EffectType,
                  (tweak::ContainerGroup&)->InitialiseTweakVars(EffectManager&)::__1>(
            (_func_void_EffectManager_ptr_Event_ptr_EffectType_ptr_function*)local_108, (reference_wrapper*)&local_78,
            (__ph*)&local_80, local_70 + 7, (__1*)local_70);
        std::function<void(tweak::Event_const&)>::function<
            std::__bind<void (*)(EffectManager&, tweak::Event_const&, EffectType_const&,
                                 std::function<void(tweak::EditBoxEvent<float> const&)>),
                        std::reference_wrapper<EffectManager>, std::placeholders::__ph<1> const&, EffectType,
                        (tweak::ContainerGroup&)->InitialiseTweakVars(EffectManager&)::__1>,
            void>((function*)local_68);
        pCVar2->AddEditField("ScatteringStartDistance", 100, local_68);
        std::function<void(tweak::Event_const&)>::~function((function<void(tweak::Event_const&)>*)local_68);
        pCVar2 = (Container*)shared_ptr<tweak::Container>::operator->(local_90);
        local_78 = (code*)puVar1;
        local_80 = std::ref<EffectManager>(param_2);
        local_70[7] = 48;
        std::bind<void (*)(EffectManager&, tweak::Event_const&, EffectType_const&,
                           std::function<void(tweak::EditBoxEvent<float> const&)>),
                  std::reference_wrapper<EffectManager>, std::placeholders::__ph<1> const&, EffectType,
                  (tweak::ContainerGroup&)->InitialiseTweakVars(EffectManager&)::__2>(
            (_func_void_EffectManager_ptr_Event_ptr_EffectType_ptr_function*)local_f0, (reference_wrapper*)&local_78,
            (__ph*)&local_80, local_70 + 7, (__2*)local_70);
        std::function<void(tweak::Event_const&)>::function<
            std::__bind<void (*)(EffectManager&, tweak::Event_const&, EffectType_const&,
                                 std::function<void(tweak::EditBoxEvent<float> const&)>),
                        std::reference_wrapper<EffectManager>, std::placeholders::__ph<1> const&, EffectType,
                        (tweak::ContainerGroup&)->InitialiseTweakVars(EffectManager&)::__2>,
            void>((function*)local_68);
        pCVar2->AddEditField("ScatteringObjectFalloff", 100, local_68);
        std::function<void(tweak::Event_const&)>::~function((function<void(tweak::Event_const&)>*)local_68);
        pCVar2 = (Container*)shared_ptr<tweak::Container>::operator->(local_90);
        local_78 = (code*)puVar1;
        local_80 = std::ref<EffectManager>(param_2);
        local_70[7] = 48;
        std::bind<void (*)(EffectManager&, tweak::Event_const&, EffectType_const&,
                           std::function<void(tweak::EditBoxEvent<float> const&)>),
                  std::reference_wrapper<EffectManager>, std::placeholders::__ph<1> const&, EffectType,
                  (tweak::ContainerGroup&)->InitialiseTweakVars(EffectManager&)::__3>(
            (_func_void_EffectManager_ptr_Event_ptr_EffectType_ptr_function*)local_d8, (reference_wrapper*)&local_78,
            (__ph*)&local_80, local_70 + 7, (__3*)local_70);
        std::function<void(tweak::Event_const&)>::function<
            std::__bind<void (*)(EffectManager&, tweak::Event_const&, EffectType_const&,
                                 std::function<void(tweak::EditBoxEvent<float> const&)>),
                        std::reference_wrapper<EffectManager>, std::placeholders::__ph<1> const&, EffectType,
                        (tweak::ContainerGroup&)->InitialiseTweakVars(EffectManager&)::__3>,
            void>((function*)local_68);
        pCVar2->AddEditField("ScatteringHoizonFalloff", 100, local_68);
        std::function<void(tweak::Event_const&)>::~function((function<void(tweak::Event_const&)>*)local_68);
        uVar3 = shared_ptr<tweak::Container>::operator->(local_90);
        uVar4 = (&field_272)->GetDefaultValue();
        uVar5 = (&field_448)->second();
        new (&local_c0) math::Point<float>(0.0, 1.0);
        new (&local_b8) math::Point<float>(0.0, 10.0);
        local_c0._0_4_->AddColourPickerHDR(local_b8, uVar3, "Scattering Tint", uVar4, uVar5);
        uVar3 = shared_ptr<tweak::Container>::operator->(local_90);
        uVar4 = (&field_176)->GetDefaultValue();
        uVar5 = (&field_512)->second();
        new (&local_b0) math::Point<float>(0.0, 1.0);
        new (&local_a8) math::Point<float>(0.0, 10.0);
        local_b0._0_4_->AddColourPickerHDR(local_a8, uVar3, "Outscattering Amount", uVar4, uVar5);
        uVar3 = shared_ptr<tweak::Container>::operator->(local_90);
        uVar4 = (&field_224)->GetDefaultValue();
        uVar5 = (&field_480)->second();
        new (&local_a0) math::Point<float>(0.0, 1.0);
        new (&local_98) math::Point<float>(0.0, 10.0);
        local_a0._0_4_->AddColourPickerHDR(local_98, uVar3, "Inscattering Amount", uVar4, uVar5);
        local_90->~shared_ptr();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1009320a0, 128 bytes, inline, placed by debug map only (low confidence)
    // void Tweaky_LambdaEditFieldChange<float>(EffectManager&, tweak::Event const&, EffectType const&, std::function<void (tweak::EditBoxEvent<float> const&)>)
    /* void Tweaky_LambdaEditFieldChange<float>(EffectManager&,
   tweak::Event const&, EffectType const&, std::function<void
   (tweak::EditBoxEvent<float> const&)>) */

    void Tweaky_LambdaEditFieldChange<float>(EffectManager* param_1, Event* param_2, undefined1* param_3,
                                             function<void(tweak::EditBoxEvent<float> const&)>* param_4) {
        long* plVar1;
        SunlightDirectLighting* pSVar2;
        undefined1 auVar3[16];
        EditBoxEvent<float> local_50[28];
        float local_34;

        plVar1 = (long*)shared_ptr<tweak::Control>::operator->((shared_ptr<tweak::Control>*)param_2);
        auVar3 = (**(code**)(*plVar1 + 136))(plVar1);
        FromText<float>(auVar3._0_8_, (char*)&local_34, auVar3._8_8_);
        pSVar2 = EffectManager::GetEffect<SunlightDirectLighting>(param_1, *param_3);
        tweak::EditBoxEvent<float>::EditBoxEvent(local_50, &local_34, (Effect*)pSVar2, param_2);
        std::function<void(tweak::EditBoxEvent<float> const&)>::operator()(param_4, (EditBoxEvent*)local_50);
    }

    // 0x100932240, 192 bytes, placed by class name and debug map
    // LightScatteringEffect::SetScatteringParams(SimpleScatteringParams const&, long long, unsigned long long)
    void LightScatteringEffect::SetScatteringParams(SimpleScatteringParams* param_1, longlong param_2,
                                                    ulonglong param_3) {
        vector* pvVar1;
        float* pfVar2;
        undefined1* this_00;
        type* ptVar3;

        SetOutscatteringAmount((Vector3T*)this, (longlong)param_1, param_2);
        SetInscatteringAmount((Vector3T*)this, (longlong)&param_1->field_16, param_2);
        ptVar3 = (type*)&param_1->field_32;
        SetScatteringTintColour((Vector3T*)this, (longlong)ptVar3, param_2);
        this_00 = &param_1->field_48;
        pvVar1 = this_00->SSOBeginPtr(ptVar3);
        SetScatteringDensity(this, *(float*)pvVar1, param_2, param_3);
        pfVar2 = (float*)this_00->y();
        SetScatteringStartDistance(this, *pfVar2, param_2, param_3);
        pfVar2 = (float*)this_00->second();
        SetObjectFalloff(this, *pfVar2, param_2, param_3);
        pfVar2 = (float*)this_00->qw();
        SetHorizonFalloff(this, *pfVar2, param_2, param_3);
    }

    // 0x100932420, 208 bytes, placed by class name and debug map
    // LightScatteringEffect::SetShaderConstants(render::DrawCallState&, render::RenderContext&, Shader&) const
    void LightScatteringEffect::SetShaderConstants(DrawCallState* param_1, RenderContext* param_2, Shader* param_3) {
        uint uVar1;
        ShaderProgram* this_00;
        MapArea* this_01;
        long lVar2;
        RenderPipelineState* this_02;
        ShaderConstBuffer* pSVar3;
        HashedString* pHVar4;

        this_00 = (ShaderProgram*)param_3->GetProgram();
        this_01 = (MapArea*)param_3->Instance();
        lVar2 = this_01->GetOrigin();
        if (*(char*)(lVar2 + 120) == '\0') {
            pHVar4 = (HashedString*)graphics::operator*((graphics*)59);
            this_00->SetShaderConstVector3(pHVar4, field_32);
            pHVar4 = (HashedString*)graphics::operator*((graphics*)60);
            this_00->SetShaderConstVector3(pHVar4, (Vector3T*)(field_32 + 16));
            pHVar4 = (HashedString*)graphics::operator*((graphics*)61);
            this_00->SetShaderConstVector3(pHVar4, (Vector3T*)(field_32 + 32));
            pHVar4 = (HashedString*)graphics::operator*((graphics*)62);
            this_00->SetShaderConstVector4(pHVar4, (Vector4T*)(field_32 + 48));
        } else {
            this_02 = (RenderPipelineState*)param_1->GetRenderPipelineState();
            uVar1 = field_168;
            pSVar3 = (ShaderConstBuffer*)(&field_96)->CurrentBuffer();
            this_02->SetPSShaderConstBuffer(uVar1, pSVar3);
        }
    }

    // 0x100932580, 176 bytes, placed by class name
    // LightScatteringEffect::BindConstBufferToShader(render::ShaderProgram const&) const
    void LightScatteringEffect::BindConstBufferToShader(ShaderProgram* param_1) {
        uint uVar1;
        MapArea* this_00;
        long lVar2;
        uint uVar3;
        int iVar4;

        this_00 = (MapArea*)Instance();
        lVar2 = this_00->GetOrigin();
        if (*(char*)(lVar2 + 120) != '\0') {
            if (BindConstBufferToShader(render::ShaderProgram_const&)::simpleScatteringConstBlockName == '\0') {
                iVar4 = ___cxa_guard_acquire(
                    &BindConstBufferToShader(render::ShaderProgram_const&)::simpleScatteringConstBlockName);
                if (iVar4 != 0) {
                    new (&BindConstBufferToShader(render::ShaderProgram_const&)::simpleScatteringConstBlockName)
                        HashedString("SimpleScattering");
                    ___cxa_guard_release(
                        &BindConstBufferToShader(render::ShaderProgram_const&)::simpleScatteringConstBlockName);
                }
            }
            uVar1 = field_168;
            uVar3 = (&field_96)->GetAmplitude();
            param_1->BindConstBufferSlot(
                uVar1,
                (HashedString*)&BindConstBufferToShader(render::ShaderProgram_const&)::simpleScatteringConstBlockName,
                uVar3);
        }
    }

    // 0x100932630, 32 bytes, placed by class name
    // LightScatteringEffect::CreateRenderingResources()
    void LightScatteringEffect::CreateRenderingResources() {
        (&field_96, 1, (SimpleScatteringParams*)field_32)->Create();
    }

    // 0x100932650, 16 bytes, placed by class name
    // LightScatteringEffect::DestroyRenderingResources()
    void LightScatteringEffect::DestroyRenderingResources() {
        (&field_96)->Destroy();
    }

    // 0x100932670, 16 bytes, placed by class name
    // LightScatteringEffect::OnEndFrame()
    void LightScatteringEffect::OnEndFrame() {
        (&field_96)->RotateBuffers();
    }

} // namespace jag::graphics
