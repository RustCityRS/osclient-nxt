// libs/graphics/runetek7/effects/EffectManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "EffectManager.h"

namespace jag::graphics {
    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    EffectManager::EnabledEffectList() const;

    // 0x10092aa10, 2032 bytes, base-object constructor, placed by class name and debug map
    // EffectManager::EffectManager(RT7Core&)
    void EffectManager::EffectManager(RT7Core* param_1) {
        new (this) EffectList();
        new (&field_16) EffectList();
        new (&field_32) EffectList();
        new (&field_48) EffectList();
        new (&field_64) std::array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>();
        MakeEffect<Effect>(this, param_1, 0);
        MakeEffect<Effect>(this, param_1, 1);
        MakeEffect<Effect>(this, param_1, 2);
        MakeEffect<Effect>(this, param_1, 3);
        MakeEffect<Effect>(this, param_1, 4);
        MakeEffect<Effect>(this, param_1, 5);
        MakeEffect<Effect>(this, param_1, 6);
        MakeEffect<Effect>(this, param_1, 7);
        MakeEffect<Effect>(this, param_1, 8);
        MakeEffect<DebugEmissiveEffect>(this, param_1, 9);
        MakeEffect<Effect>(this, param_1, 10);
        MakeEffect<Effect>(this, param_1, 11);
        MakeEffect<Effect>(this, param_1, 12);
        MakeEffect<Effect>(this, param_1, 13);
        MakeEffect<Effect>(this, param_1, 14);
        MakeEffect<DebugTexelDensityEffect>(this, param_1, 15);
        MakeEffect<Effect>(this, param_1, 16);
        MakeEffect<Effect>(this, param_1, 17);
        MakeEffect<Effect>(this, param_1, 18);
        MakeEffect<DebugMaterialHighlightEffect>(this, param_1, 19);
        MakeEffect<Effect>(this, param_1, 20);
        MakeEffect<Effect>(this, param_1, 21);
        MakeEffect<Effect>(this, param_1, 22);
        MakeEffect<Effect>(this, param_1, 23);
        MakeEffect<Effect>(this, param_1, 24);
        MakeEffect<Effect>(this, param_1, 25);
        MakeEffect<Effect>(this, param_1, 26);
        MakeEffect<Effect>(this, param_1, 27);
        MakeEffect<DeferredShadows>(this, param_1, 28);
        MakeEffect<SunlightDirectLighting>(this, param_1, 29);
        MakeEffect<SunlightShadows>(this, param_1, 30);
        MakeEffect<Effect>(this, param_1, 31);
        MakeEffect<Effect>(this, param_1, 32);
        MakeEffect<Effect>(this, param_1, 33);
        MakeEffect<Effect>(this, param_1, 34);
        MakeEffect<PointLightShadows>(this, param_1, 35);
        MakeEffect<PointLightSMPassEffect>(this, param_1, 36);
        MakeEffect<Effect>(this, param_1, 37);
        MakeEffect<Effect>(this, param_1, 38);
        MakeEffect<Effect>(this, param_1, 39);
        MakeEffect<Effect>(this, param_1, 40);
        MakeEffect<Effect>(this, param_1, 41);
        MakeEffect<Effect>(this, param_1, 42);
        MakeEffect<Effect>(this, param_1, 43);
        MakeEffect<Caustics>(this, param_1, 44);
        MakeEffect<Effect>(this, param_1, 45);
        MakeEffect<Effect>(this, param_1, 46);
        MakeEffect<Effect>(this, param_1, 47);
        MakeEffect<LightScatteringEffect>(this, param_1, 48);
        MakeEffect<Effect>(this, param_1, 49);
        MakeEffect<VolumetricScatteringEffect>(this, param_1, 50);
        MakeEffect<GlobalEnvironmentMapping>(this, param_1, 51);
        MakeEffect<Effect>(this, param_1, 52);
        MakeEffect<Effect>(this, param_1, 53);
        MakeEffect<ViewportMapEffect>(this, param_1, 54);
        MakeEffect<Effect>(this, param_1, 55);
        MakeEffect<Effect>(this, param_1, 56);
        MakeEffect<FogEffect>(this, param_1, 57);
        MakeEffect<Effect>(this, param_1, 58);
        MakeEffect<Effect>(this, param_1, 59);
        MakeEffect<Effect>(this, param_1, 60);
        MakeEffect<Effect>(this, param_1, 61);
        MakeEffect<Effect>(this, param_1, 62);
        MakeEffect<Effect>(this, param_1, 63);
        MakeEffect<Effect>(this, param_1, 64);
        MakeEffect<Effect>(this, param_1, 65);
        MakeEffect<Effect>(this, param_1, 66);
        MakeEffect<Effect>(this, param_1, 67);
        MakeEffect<Effect>(this, param_1, 68);
        MakeEffect<Effect>(this, param_1, 69);
        MakeEffect<Effect>(this, param_1, 70);
        MakeEffect<Effect>(this, param_1, 71);
        MakeEffect<Effect>(this, param_1, 72);
        MakeEffect<Effect>(this, param_1, 73);
        MakeEffect<Effect>(this, param_1, 74);
        MakeEffect<Effect>(this, param_1, 75);
        MakeEffect<Effect>(this, param_1, 76);
        MakeEffect<Effect>(this, param_1, 77);
        MakeEffect<Effect>(this, param_1, 78);
        MakeEffect<ViewTransformsEffect>(this, param_1, 79);
        MakeEffect<VertexTransforms2D>(this, param_1, 80);
        MakeEffect<Effect>(this, param_1, 81);
        MakeEffect<Effect>(this, param_1, 82);
        MakeEffect<Effect>(this, param_1, 83);
        MakeEffect<Effect>(this, param_1, 84);
        MakeEffect<Effect>(this, param_1, 85);
        MakeEffect<Effect>(this, param_1, 86);
        MakeEffect<ClipPlaneEffect>(this, param_1, 87);
        MakeEffect<Effect>(this, param_1, 88);
        MakeEffect<Effect>(this, param_1, 89);
        MakeEffect<Effect>(this, param_1, 90);
        MakeEffect<Effect>(this, param_1, 91);
        MakeEffect<Effect>(this, param_1, 92);
        MakeEffect<Effect>(this, param_1, 93);
        MakeEffect<Effect>(this, param_1, 94);
        MakeEffect<Effect>(this, param_1, 95);
        MakeEffect<Effect>(this, param_1, 96);
        MakeEffect<Effect>(this, param_1, 97);
        MakeEffect<WaterCommonShaderEffect>(this, param_1, 98);
        MakeEffect<WaterNormalMapsShaderEffect>(this, param_1, 99);
        MakeEffect<WaterFoamShaderEffect>(this, param_1, 100);
        MakeEffect<WaterExtinctionShaderEffect>(this, param_1, 101);
        MakeEffect<WaterEmissiveShaderEffect>(this, param_1, 102);
        MakeEffect<Effect>(this, param_1, 103);
        MakeEffect<Effect>(this, param_1, 104);
        MakeEffect<Effect>(this, param_1, 105);
        MakeEffect<ViewportLookupScale>(this, param_1, 106);
        MakeEffect<PlanarReflection>(this, param_1, 107);
        MakeEffect<Refraction>(this, param_1, 108);
        MakeEffect<Effect>(this, param_1, 109);
        MakeEffect<SSAOEffect>(this, param_1, 110);
        MakeEffect<Effect>(this, param_1, 111);
        MakeEffect<Effect>(this, param_1, 112);
        MakeEffect<Effect>(this, param_1, 113);
        MakeEffect<Effect>(this, param_1, 114);
        MakeEffect<Effect>(this, param_1, 115);
        MakeEffect<Effect>(this, param_1, 116);
        MakeEffect<StippleCutoutEffect>(this, param_1, 117);
        MakeEffect<Effect>(this, param_1, 118);
        MakeEffect<DebugTerrainSpecularEffect>(this, param_1, 119);
        MakeEffect<Effect>(this, param_1, 120);
    }

    // 0x10092bcf0, 16 bytes, complete-object constructor, placed by class name and debug map
    // EffectManager::EffectManager(RT7Core&): jumps straight to the base-object constructor

    // 0x10092bd00, 80 bytes, placed by class name and debug map
    // EffectManager::Destroy()
    void EffectManager::Destroy() {
        unique_ptr<Effect, std::default_delete<Effect>>* this_00;
        unique_ptr<Effect, std::default_delete<Effect>>* puVar1;

        this_00 = (unique_ptr<Effect, std::default_delete<Effect>>*)(&field_64)->begin();
        puVar1 = (unique_ptr<Effect, std::default_delete<Effect>>*)(&field_64)->end();
        for (; this_00 != puVar1; this_00 = this_00 + 8) {
            std::unique_ptr<Effect, std::default_delete<Effect>>::reset(this_00, (Effect*)0);
        }
    }

    // 0x10092bdb0, 112 bytes, placed by class name and debug map
    // EffectManager::CreateRenderingResources()
    void EffectManager::CreateRenderingResources() {
        unique_ptr<Effect, std::default_delete<Effect>>* this_00;
        long* plVar2;
        ulong uVar3;

        uVar3 = 0;
        do {
            if ((&field_48, uVar3 & 255)->Contains() != '\0') {
                this_00 = (unique_ptr<Effect, std::default_delete<Effect>>*)
                    std::array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>::operator[](
                        (array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>*)&field_64, uVar3);
                plVar2 = (long*)std::unique_ptr<Effect, std::default_delete<Effect>>::operator->(this_00);
                (**(code**)(*plVar2 + 72))(plVar2);
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 != 121);
    }

    // 0x10092be40, 112 bytes, placed by class name and debug map
    // EffectManager::DestroyRenderingResources()
    void EffectManager::DestroyRenderingResources() {
        unique_ptr<Effect, std::default_delete<Effect>>* this_00;
        long* plVar2;
        ulong uVar3;

        uVar3 = 0;
        do {
            if ((&field_48, uVar3 & 255)->Contains() != '\0') {
                this_00 = (unique_ptr<Effect, std::default_delete<Effect>>*)
                    std::array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>::operator[](
                        (array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>*)&field_64, uVar3);
                plVar2 = (long*)std::unique_ptr<Effect, std::default_delete<Effect>>::operator->(this_00);
                (**(code**)(*plVar2 + 80))(plVar2);
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 != 121);
    }

    // 0x10092beb0, 96 bytes, placed by class name and debug map
    // EffectManager::InitialiseTweakVars(tweak::ContainerGroup&)
    void EffectManager::InitialiseTweakVars(ContainerGroup* param_1) {
        unique_ptr<Effect, std::default_delete<Effect>>* this_00;
        unique_ptr<Effect, std::default_delete<Effect>>* puVar1;
        long* plVar2;

        this_00 = (unique_ptr<Effect, std::default_delete<Effect>>*)(&field_64)->begin();
        puVar1 = (unique_ptr<Effect, std::default_delete<Effect>>*)(&field_64)->end();
        for (; this_00 != puVar1; this_00 = this_00 + 8) {
            plVar2 = (long*)std::unique_ptr<Effect, std::default_delete<Effect>>::operator->(this_00);
            (**(code**)(*plVar2 + 96))(plVar2, param_1, this);
        }
    }

    // 0x10092bf10, 128 bytes, placed by class name and debug map
    // EffectManager::SetEffectsQuality(GraphicsQuality)
    void EffectManager::SetEffectsQuality(undefined4 param_2) {
        SunlightDirectLighting* pSVar2;
        ulong uVar3;
        undefined8 local_38;
        undefined8 uStack_30;

        local_38 = field_48;
        uStack_30 = field_56;
        EffectList::operator&=((EffectList*)&local_38, (EffectList*)&field_16);
        uVar3 = 0;
        do {
            if (local_38.Contains(uVar3 & 255) != '\0') {
                pSVar2 = GetEffect<SunlightDirectLighting>(this, uVar3 & 255);
                pSVar2->SetQuality(param_2);
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 != 121);
    }

    // 0x10092bfa0, 288 bytes, placed by class name and debug map
    // EffectManager::EnableEffect(EffectType, bool)
    void EffectManager::EnableEffect(byte param_2, int param_3) {
        char cVar1;
        SunlightDirectLighting* pSVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        char* pcVar6;
        undefined* puVar8;

        if (param_3 == 0) {
            Remove(param_2);
            goto LAB_10092c09a;
        }
        pSVar2 = GetEffect<SunlightDirectLighting>(this, (ulong)param_2);
        cVar1 = (&field_48, (ulong)param_2)->Contains();
        if (cVar1 == '\0') {
            cVar1 = (*(code*)pSVar2->field_0[5])(pSVar2);
            if (cVar1 == '\0') {
                uVar3 = logger::default_logger();
                puVar8 = (&EffectTypeStrings)[(ulong)param_2];
                pcVar6 = "Effect %s not enabled as it is unsupported";
                uVar4 = 3;
                uVar5 = 130;
            } else {
                pSVar2 = GetEffect<SunlightDirectLighting>(this, (ulong)param_2);
                cVar1 = (*(code*)pSVar2->field_0[2])(pSVar2);
                if (cVar1 != '\0')
                    goto LAB_10092bfdb;
                uVar3 = logger::default_logger();
                puVar8 = (&EffectTypeStrings)[(ulong)param_2];
                pcVar6 = "Failed to initialise effect %s";
                uVar4 = 2;
                uVar5 = 125;
            }
            logger::Logger::Log(uVar3, 0, uVar4,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/effects/EffectManager.cpp",
                                uVar5, pcVar6, puVar8);
        } else {
        LAB_10092bfdb:
            Add((ulong)param_2);
            (&field_48, (ulong)param_2)->Add();
        }
    LAB_10092c09a:
        field_32 = field_0;
        field_40 = field_8;
        EffectList::operator&=((EffectList*)&field_32, (EffectList*)&field_16);
    }

    // 0x10092c0c0, 64 bytes, placed by class name and debug map
    // EffectManager::ToggleEffect(EffectType)
    byte EffectManager::ToggleEffect(undefined4 param_2) {
        byte bVar1;

        bVar1 = IsEnabled();
        EnableEffect(this, param_2, bVar1 ^ 1);
        return bVar1 ^ 1;
    }

    // 0x10092c100, 48 bytes, placed by class name and debug map
    // EffectManager::BuildShaderEffectList(EffectList const&) const
    undefined1[16] EffectManager::BuildShaderEffectList(EffectList* param_1) {
        undefined1 auVar1[16];
        undefined8 local_18;
        undefined8 uStack_10;

        local_18 = field_0;
        uStack_10 = field_8;
        EffectList::operator&=((EffectList*)&local_18, param_1);
        auVar1._8_8_ = uStack_10;
        auVar1._0_8_ = local_18;
        return auVar1;
    }

    // 0x10092c130, 176 bytes, placed by class name and debug map
    // EffectManager::SetShaderConstants(render::DrawCallState&, render::RenderContext&, Shader&, EffectList)
    void EffectManager::SetShaderConstants(DrawCallState* param_1, RenderContext* param_2, Shader* param_3,
                                           EffectList param_4) {
        vector* this;
        ulong uVar1;
        unique_ptr<Effect, std::default_delete<Effect>>* this_00;
        long* plVar2;
        undefined8 in_RCX;
        EffectList* pEVar3;
        EffectList local_50[16];
        undefined8 local_40;

        pEVar3 = (EffectList*)(param_1->field_24 + 8);
        local_40 = in_RCX;
        EffectList::operator&=(local_50, pEVar3);
        this = local_50->SSOBeginPtr(pEVar3);
        uVar1 = DoFindFirst();
        if (uVar1 < 121) {
            do {
                this_00 = (unique_ptr<Effect, std::default_delete<Effect>>*)
                    std::array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>::operator[](
                        (array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>*)&param_1[1]
                            .m_pOutputMergerState,
                        uVar1);
                plVar2 = (long*)std::unique_ptr<Effect, std::default_delete<Effect>>::operator->(this_00);
                (**(code**)(*plVar2 + 56))(plVar2, param_2, param_3, local_40);
                uVar1 = DoFindNext(uVar1);
            } while (uVar1 < 121);
        }
    }

    // 0x10092c2a0, 176 bytes, placed by class name and debug map
    // EffectManager::BindConstBufferToShader(render::ShaderProgram const&, EffectList const&) const
    void EffectManager::BindConstBufferToShader(ShaderProgram* param_1, EffectList* param_2) {
        char cVar1;
        MapArea* this_00;
        long lVar2;
        vector* this_01;
        unique_ptr<Effect, std::default_delete<Effect>>* this_02;
        long* plVar3;
        ShaderProgram* pSVar4;
        ShaderProgram* pSVar5;

        pSVar5 = param_1;
        pSVar4 = param_1;
        cVar1 = param_1->IsReady();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("shaderProgram.IsReady()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "EffectManager.cpp",
                      179, (char*)0);
        }
        this_00 = (MapArea*)pSVar4->Instance();
        lVar2 = this_00->GetOrigin();
        if (*(char*)(lVar2 + 120) != '\0') {
            pSVar4 = (ShaderProgram*)0;
            do {
                this_01 = param_2->SSOBeginPtr(pSVar5);
                pSVar5 = pSVar4;
                cVar1 = eastl::bitset<121ul, unsigned long long>::operator[](
                    (bitset<121ul, unsigned long long>*)this_01, (ulong)pSVar4);
                if (cVar1 != '\0') {
                    this_02 = (unique_ptr<Effect, std::default_delete<Effect>>*)
                        std::array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>::operator[](
                            (array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>*)&field_64,
                            (ulong)pSVar4);
                    plVar3 = (long*)std::unique_ptr<Effect, std::default_delete<Effect>>::operator->(this_02);
                    pSVar5 = param_1;
                    (**(code**)(*plVar3 + 64))(plVar3);
                }
                pSVar4 = (ShaderProgram*)((long)&pSVar4->field_0 + 1);
            } while (pSVar4 != (ShaderProgram*)121);
        }
    }

    // 0x10092c3a0, 96 bytes, placed by class name and debug map
    // EffectManager::RenderDebug(render::Viewport const&) const
    void EffectManager::RenderDebug(Viewport* param_1) {
        unique_ptr<Effect, std::default_delete<Effect>>* this_00;
        unique_ptr<Effect, std::default_delete<Effect>>* puVar1;
        long* plVar2;

        this_00 = (unique_ptr<Effect, std::default_delete<Effect>>*)(&field_64)->begin();
        puVar1 = (unique_ptr<Effect, std::default_delete<Effect>>*)(&field_64)->end();
        for (; this_00 != puVar1; this_00 = this_00 + 8) {
            plVar2 = (long*)std::unique_ptr<Effect, std::default_delete<Effect>>::operator->(this_00);
            (**(code**)(*plVar2 + 48))(plVar2, param_1);
        }
    }

    // 0x10092c430, 112 bytes, placed by class name and debug map
    // EffectManager::OnEndFrame()
    void EffectManager::OnEndFrame() {
        unique_ptr<Effect, std::default_delete<Effect>>* this_00;
        long* plVar2;
        ulong uVar3;

        uVar3 = 0;
        do {
            if ((&field_48, uVar3 & 255)->Contains() != '\0') {
                this_00 = (unique_ptr<Effect, std::default_delete<Effect>>*)
                    std::array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>::operator[](
                        (array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>*)&field_64, uVar3);
                plVar2 = (long*)std::unique_ptr<Effect, std::default_delete<Effect>>::operator->(this_00);
                (**(code**)(*plVar2 + 88))(plVar2);
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 != 121);
    }

    // 0x10092c4a0, 128 bytes, placed by class name and debug map
    // EffectManager::SetEffectQuality(EffectType, GraphicsQuality)
    ulong EffectManager::SetEffectQuality(undefined1 param_2, int param_3) {
        char cVar1;
        uint uVar3;
        SunlightDirectLighting* this_00;
        undefined8 unaff_R14;
        ulong uVar4;

        cVar1 = (&field_48)->Contains();
        uVar4 = CONCAT71((int7)((ulong)unaff_R14 >> 8), 1);
        if (cVar1 != '\0') {
            this_00 = GetEffect<SunlightDirectLighting>(this, param_2);
            if (this_00->GetPos() != param_3) {
                uVar3 = this_00->SetQuality(param_3);
                uVar4 = (ulong)uVar3;
                if ((char)uVar3 == '\0') {
                    DisableEffect(this, param_2);
                }
            }
        }
        return uVar4 & 4294967295;
    }

    // 0x10092c520, 32 bytes, placed by class name and debug map
    // EffectManager::GetEffectQuality(EffectType) const
    void EffectManager::GetEffectQuality() {
        PlanarReflection* this;

        this = GetEffect<PlanarReflection>();
        GetPos();
    }

    // 0x10092c540, 32 bytes, placed by debug map only (low confidence)
    // Tweaky_ToggleEffect(EffectManager&, EffectType const&, bool)
    void Tweaky_ToggleEffect(EffectManager* param_1, EffectType* param_2, bool param_3) {
        undefined7 in_register_00000011;

        if ((int)CONCAT71(in_register_00000011, param_3) == 0) {
            param_1->DisableEffect(*param_2);
            return;
        }
        param_1->EnableEffect(*param_2, 1);
    }

    // 0x10092c560, 48 bytes, placed by debug map only (low confidence)
    // Tweaky_ToggleEffect(EffectManager&, EffectType const&)
    void Tweaky_ToggleEffect(EffectManager* param_1, EffectType* param_2) {
        byte bVar1;

        bVar1 = param_1->IsEnabled(*param_2);
        Tweaky_ToggleEffect(param_1, param_2, (bool)(bVar1 ^ 1));
    }

    // 0x10092c590, 112 bytes, placed by debug map only (low confidence)
    // Tweaky_LambdaToggleEffect(EffectManager&, tweak::Event const&, EffectType const&)
    void Tweaky_LambdaToggleEffect(EffectManager* param_1, Event* param_2, EffectType* param_3) {
        undefined1 uVar1;
        bool bVar2;
        long* plVar3;

        if (param_2->field_16 == 3) {
            plVar3 = (long*)shared_ptr<tweak::Control>::operator->((shared_ptr<tweak::Control>*)param_2);
            bVar2 = (bool)(**(code**)(*plVar3 + 120))(plVar3);
            Tweaky_ToggleEffect(param_1, param_3, bVar2);
        } else if (param_2->field_16 == 1) {
            plVar3 = (long*)shared_ptr<tweak::Control>::operator->((shared_ptr<tweak::Control>*)param_2);
            uVar1 = param_1->IsEnabled(*param_3);
            (**(code**)(*plVar3 + 128))(plVar3, uVar1);
        }
    }

    // 0x10092c640, 96 bytes, placed by debug map only (low confidence)
    // Tweaky_LambdaToggleEffectDisablePostProcessing(RT7Core&, tweak::Event const&, EffectType const&)
    void Tweaky_LambdaToggleEffectDisablePostProcessing(RT7Core* param_1, Event* param_2, EffectType* param_3) {
        EffectManager* pEVar1;
        PostProcessController* this;
        byte* pbVar2;
        byte bVar3;
        long* plVar4;

        pEVar1 = (EffectManager*)param_1->GetEffectManager();
        Tweaky_LambdaToggleEffect(pEVar1, param_2, param_3);
        if (param_2->field_16 == 3) {
            plVar4 = (long*)shared_ptr<tweak::Control>::operator->((shared_ptr<tweak::Control>*)param_2);
            bVar3 = (**(code**)(*plVar4 + 120))(plVar4);
            this = (PostProcessController*)param_1->GetPostProcessController();
            pbVar2 = (byte*)GetCurrentConfig();
            *pbVar2 = bVar3 ^ 1;
        }
    }

} // namespace jag::graphics
