// libs/graphics/runetek7/model/ModelMaterial.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "ModelMaterial.h"

namespace jag::graphics {
    // 0x10031b0b0: the linker folded this into oldscape::dash3d::NXTRenderer::LogicThread_GetRenderCanvas(), which has identical code
    ModelMaterial::GetHideFacesMode() const;

    // 0x100441e50: the linker folded this into SkyBox::GetCubeMap() const, which has identical code
    ModelMaterial::GetRefractionParams() const;

    // 0x1007b8920: the linker folded this into TerrainMaterial::GetTextureAtlasReference() const, which has identical code
    ModelMaterial::GetTextureAtlasReference() const;

    // 0x10080d400, 16 bytes, complete-object constructor, placed by class name and debug map
    // ModelMaterial::ModelMaterial(): jumps straight to the base-object constructor

    // 0x10080d690, 16 bytes, complete-object constructor, placed by class name
    // ModelMaterial::ModelMaterial(ModelMaterial&&): jumps straight to the base-object constructor

    // 0x10080d9e0, 16 bytes, complete-object constructor, placed by class name
    // ModelMaterial::ModelMaterial(ModelMaterial const&): jumps straight to the base-object constructor

    // 0x10080dc90, 48 bytes, placed by class name
    // ModelMaterial::DestroyRenderingResources()
    void ModelMaterial::DestroyRenderingResources() {
        DestroyRenderingResources();
        if (m_environmentMap->operator_cast_to_bool()) {
            DestroyEnvironmentMap(this);
        }
    }

    // 0x10080e6c0, 640 bytes, placed by class name
    // ModelMaterial::Init(Material const&, bool)
    void ModelMaterial::Init(Material* param_1, bool param_2) {
        uchar uVar1;
        bool bVar2;
        char cVar3;
        undefined1 uVar4;
        undefined4 uVar5;
        int iVar6;
        RasteriserState* pRVar7;
        ShaderProgram* pSVar8;
        undefined* puVar9;
        float* pfVar10;
        undefined7 in_register_00000011;
        float fVar11;
        float fVar12;
        float fVar13;

        if ((int)CONCAT71(in_register_00000011, param_2) == 0) {
            pRVar7 = (RasteriserState*)param_1->GetLastUpdateTimeNS();
        } else {
            pRVar7 = (RasteriserState*)AlphaMode::ALPHA_BLENDED;
        }
        SetRasteriserState(pRVar7);
        pSVar8 = (ShaderProgram*)param_1->GetStartTimeNS();
        SetShaderProgram(pSVar8);
        puVar9 = (undefined*)param_1->GetLastUpdateTimeNS();
        if (puVar9 == AlphaMode::ALPHA_TESTED) {
            uVar1 = param_1->GetMaxLevels();
        } else {
            uVar1 = '\0';
        }
        SetAlphaTestThreshold(uVar1);
        uVar5 = param_1->GetUIHeight();
        SetMaxLowestValue(uVar5);
        iVar6 = param_1->GetSeqDelay();
        SetEndPosition(iVar6);
        bVar2 = (bool)param_1->IsRT7();
        uVar4 = false;
        SetOption(0, bVar2);
        bVar2 = (bool)param_1->HasSpecularMap();
        SetOption(1, bVar2);
        bVar2 = (bool)param_1->HasEmissiveMap();
        SetOption(2, bVar2);
        bVar2 = (bool)param_1->IsGlobalEnvironmentMapped();
        SetOption(3, bVar2);
        cVar3 = param_1->IsRT7();
        if (cVar3 == '\0') {
            uVar4 = param_1->HasHDRMap();
        }
        SetOption(4, (bool)uVar4);
        cVar3 = param_1->IsRT7();
        if (cVar3 == '\0') {
            uVar4 = param_1->IsWeighted();
        } else {
            uVar4 = false;
        }
        SetOption(5, (bool)uVar4);
        bVar2 = (bool)param_1->IsUnlit();
        SetOption(6, bVar2);
        bVar2 = (bool)param_1->HasForcedTextures();
        SetOption(9, bVar2);
        bVar2 = (bool)param_1->IsShadowCaster();
        SetOption(7, bVar2);
        bVar2 = (bool)param_1->IsShadowReceiver();
        SetOption(8, bVar2);
        bVar2 = (bool)param_1->HasHighlighting();
        SetOption(12, bVar2);
        bVar2 = (bool)param_1->HasTransparencyCutout();
        SetOption(13, bVar2);
        puVar9 = (undefined*)param_1->GetRenderStateNXT();
        m_hideFacesMode = puVar9;
        fVar11 = (float)param_1->GetRefractionAmount();
        fVar12 = (float)param_1->GetRefractionIndex();
        fVar13 = (float)param_1->GetRefractionDepthBias();
        pfVar10 = (float*)(&m_refractionParams)->qw();
        (&m_refractionParams, fVar11, 1.000293 / fVar12, fVar13, *pfVar10)->Set();
        cVar3 = IsRefractionEnabled(this);
        if (cVar3 != '\0') {
            puVar9 = (undefined*)data();
            if (puVar9 != AlphaMode::ALPHA_OPAQUE) {
                SetRasteriserState((RasteriserState*)AlphaMode::ALPHA_OPAQUE);
            }
        }
    }

    // 0x10080fc80, 80 bytes, placed by class name
    // ModelMaterial::operator=(ModelMaterial const&)
    /* ModelMaterial::TEMPNAMEPLACEHOLDERVALUE(ModelMaterial const&) */

    ModelMaterial* ModelMaterial::operator=(ModelMaterial* param_1) {
        RenderMaterial::operator=((RenderMaterial*)this, (RenderMaterial*)param_1);
        shared_ptr<TextureAtlasReference>::operator=((shared_ptr<TextureAtlasReference>*)field_536,
                                                     (shared_ptr*)param_1->field_536);
        math::Rect<float>::operator=((Rect<float>*)&m_refractionParams, (Rect*)&param_1->m_refractionParams);
        m_hideFacesMode = param_1->m_hideFacesMode;
        return this;
    }

    // 0x100810140, 1616 bytes, placed by class name
    // ModelMaterial::InitRenderPassEffects(bool)
    void ModelMaterial::InitRenderPassEffects(bool param_1) {
        undefined1* puVar1;
        undefined4 uVar2;
        undefined4 uVar3;
        undefined4 uVar4;
        bool bVar5;
        undefined1 uVar6;
        EffectList* pEVar7;
        undefined4* puVar8;
        undefined* puVar9;
        undefined7 in_register_00000031;
        ulong uVar10;
        undefined8** local_a8;
        undefined8 uStack_a0;
        undefined8 local_98;
        undefined4 uStack_90;
        undefined4 uStack_8c;
        undefined4 local_88;
        undefined4 uStack_84;
        undefined4 uStack_80;
        undefined4 uStack_7c;
        undefined8 local_78;
        undefined8 uStack_70;
        undefined8 local_68;
        undefined7 uStack_60;
        undefined4 uStack_59;
        undefined8* local_48;
        undefined8 local_40;
        long local_38;

        uVar10 = CONCAT71(in_register_00000031, param_1);
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        bVar5 = operator!=((shared_ptr*)field_536, (_func_decltype_nullptr*)0);
        pEVar7 = (EffectList*)GetRenderPassEffect(4);
        local_68 = 4917132776155855214;
        uStack_60 = 19490407761861184;
        local_78 = 2531622362380384311;
        uStack_70 = 3616725031943347237;
        local_88 = 2014384656;
        uStack_84 = 493506323;
        uStack_80 = 387273297;
        uStack_7c = 437852182;
        local_98 = 506097522914230528;
        uStack_90 = 185207048;
        uStack_8c = 252579084;
        uStack_59 = 1566328692;
        local_48 = &local_98;
        local_40 = 67;
        new (&local_a8) EffectList((initializer_list*)&local_48);
        *(undefined8***)pEVar7 = local_a8;
        *(undefined8*)(pEVar7 + 8) = uStack_a0;
        uVar6 = GetOption(0);
        pEVar7->Set(59, uVar6);
        pEVar7->Set(74, uVar10 & 4294967295);
        pEVar7->Set(63);
        pEVar7->Set(26, 1);
        uVar6 = GetOption(11);
        pEVar7->Set(55, uVar6);
        uVar6 = GetOption(0);
        pEVar7->Set(56, uVar6);
        uVar6 = GetOption(13);
        pEVar7->Set(117, uVar6);
        puVar1 = &field_528;
        puVar1->AddFormatType(4);
        pEVar7 = (EffectList*)GetRenderPassEffect(2);
        puVar8 = (undefined4*)GetRenderPassEffect(4);
        uVar2 = puVar8[1];
        uVar3 = puVar8[2];
        uVar4 = puVar8[3];
        *(undefined4*)pEVar7 = *puVar8;
        *(undefined4*)(pEVar7 + 4) = uVar2;
        *(undefined4*)(pEVar7 + 8) = uVar3;
        *(undefined4*)(pEVar7 + 12) = uVar4;
        pEVar7->Add(87);
        puVar1->AddFormatType(2);
        pEVar7 = (EffectList*)GetRenderPassEffect(3);
        local_48 = (undefined8*)8378132640334441039;
        local_40 = CONCAT62(local_40._2_6_, 23643);
        local_a8 = &local_48;
        uStack_a0 = 10;
        new (&local_98) EffectList((initializer_list*)&local_a8);
        *(undefined8*)pEVar7 = local_98;
        *(ulong*)(pEVar7 + 8) = CONCAT44(uStack_8c, uStack_90);
        uVar6 = GetOption(0);
        pEVar7->Set(59, uVar6);
        pEVar7->Set(74, uVar10 & 4294967295);
        pEVar7->Set(63, bVar5);
        puVar9 = (undefined*)data();
        pEVar7->Set(81, puVar9 != AlphaMode::ALPHA_OPAQUE);
        uVar6 = GetOption(13);
        pEVar7->Set(117, uVar6);
        puVar1->AddFormatType(3);
        pEVar7 = (EffectList*)GetRenderPassEffect(9);
        local_48 = (undefined8*)CONCAT53(local_48._3_5_, 1785679);
        local_a8 = &local_48;
        uStack_a0 = 3;
        new (&local_98) EffectList((initializer_list*)&local_a8);
        *(undefined8*)pEVar7 = local_98;
        *(ulong*)(pEVar7 + 8) = CONCAT44(uStack_8c, uStack_90);
        uVar6 = GetOption(0);
        pEVar7->Set(59, uVar6);
        pEVar7->Set(74, uVar10 & 4294967295);
        pEVar7->Set(63, bVar5);
        puVar9 = (undefined*)data();
        pEVar7->Set(81, puVar9 != AlphaMode::ALPHA_OPAQUE);
        puVar1->AddFormatType(9);
        pEVar7 = (EffectList*)GetRenderPassEffect(0);
        local_48._0_4_ = 608125263;
        local_a8 = &local_48;
        uStack_a0 = 4;
        new (&local_98) EffectList((initializer_list*)&local_a8);
        *(undefined8*)pEVar7 = local_98;
        *(ulong*)(pEVar7 + 8) = CONCAT44(uStack_8c, uStack_90);
        uVar6 = GetOption(0);
        pEVar7->Set(59, uVar6);
        pEVar7->Set(74, uVar10 & 4294967295);
        puVar9 = (undefined*)data();
        pEVar7->Set(63, puVar9 != AlphaMode::ALPHA_OPAQUE && bVar5);
        puVar9 = (undefined*)data();
        pEVar7->Set(81, puVar9 != AlphaMode::ALPHA_OPAQUE);
        puVar1->AddFormatType(0);
        pEVar7 = (EffectList*)GetRenderPassEffect(1);
        local_48 = (undefined8*)CONCAT44(local_48._4_4_, 608125263);
        local_a8 = &local_48;
        uStack_a0 = 4;
        new (&local_98) EffectList((initializer_list*)&local_a8);
        *(undefined8*)pEVar7 = local_98;
        *(ulong*)(pEVar7 + 8) = CONCAT44(uStack_8c, uStack_90);
        uVar6 = GetOption(0);
        pEVar7->Set(59, uVar6);
        pEVar7->Set(74, uVar10 & 4294967295);
        puVar9 = (undefined*)data();
        pEVar7->Set(63, puVar9 != AlphaMode::ALPHA_OPAQUE && bVar5);
        puVar9 = (undefined*)data();
        pEVar7->Set(81, puVar9 != AlphaMode::ALPHA_OPAQUE);
        puVar1->AddFormatType(1);
        pEVar7 = (EffectList*)GetRenderPassEffect(5);
        local_88 = 374493469;
        uStack_84 = 1058609175;
        uStack_80 = 1161707803;
        local_98 = 722834354493063424;
        uStack_90 = 235736075;
        uStack_8c = 1326518800;
        local_48 = &local_98;
        local_40 = 28;
        new (&local_a8) EffectList((initializer_list*)&local_48);
        *(undefined8***)pEVar7 = local_a8;
        *(undefined8*)(pEVar7 + 8) = uStack_a0;
        uVar6 = GetOption(0);
        pEVar7->Set(59, uVar6);
        pEVar7->Set(63, bVar5);
        puVar1->AddFormatType(5);
        pEVar7 = (EffectList*)GetRenderPassEffect(8);
        local_48 = (undefined8*)CONCAT44(local_48._4_4_, 1780170575);
        uStack_a0 = 4;
        local_a8 = &local_48;
        new (&local_98) EffectList((initializer_list*)&local_a8);
        *(undefined8*)pEVar7 = local_98;
        *(ulong*)(pEVar7 + 8) = CONCAT44(uStack_8c, uStack_90);
        uVar6 = GetOption(0);
        pEVar7->Set(59, uVar6);
        pEVar7->Set(74, uVar10 & 4294967295);
        pEVar7->Set(63, bVar5);
        puVar9 = (undefined*)data();
        pEVar7->Set(81, puVar9 != AlphaMode::ALPHA_OPAQUE);
        puVar1->AddFormatType(8);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100811320, 160 bytes, placed by class name
    // ModelMaterial::UpdateEnvironmentMap(TextureManager&)
    void ModelMaterial::UpdateEnvironmentMap(TextureManager* param_1) {
        bool bVar1;
        int iVar2;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_38[16];

        iVar2 = GetAliveCount();
        bVar1 = m_environmentMap->operator_cast_to_bool();
        if (iVar2 < 0) {
            if (bVar1) {
                DestroyEnvironmentMap(this);
            }
        } else if (!bVar1) {
            bVar1 = (bool)GetAliveCount();
            local_38->GetDefaultTextureCube((int)param_1, bVar1);
            shared_ptr<render::TextureCube>::operator=((shared_ptr<render::TextureCube>*)m_environmentMap,
                                                       (shared_ptr*)local_38);
            local_38->~shared_ptr();
        }
    }

    // 0x10081fc10, 336 bytes, placed by class name
    // ModelMaterial::SetTextureAtlasReference(shared_ptr<TextureAtlasReference> const&)
    void ModelMaterial::SetTextureAtlasReference(shared_ptr* param_1) {
        bool bVar1;
        undefined1 uVar2;
        EffectList* pEVar3;

        shared_ptr<TextureAtlasReference>::operator=((shared_ptr<TextureAtlasReference>*)field_536, param_1);
        uVar2 = 0;
        bVar1 = operator!=((shared_ptr*)field_536, (_func_decltype_nullptr*)0);
        pEVar3 = (EffectList*)GetRenderPassEffect(4);
        pEVar3->Set(63, bVar1);
        pEVar3 = (EffectList*)GetRenderPassEffect(2);
        pEVar3->Set(63, bVar1);
        pEVar3 = (EffectList*)GetRenderPassEffect(5);
        pEVar3->Set(63, bVar1);
        pEVar3 = (EffectList*)GetRenderPassEffect(3);
        pEVar3->Set(63, bVar1);
        pEVar3 = (EffectList*)GetRenderPassEffect(9);
        pEVar3->Set(63, bVar1);
        pEVar3 = (EffectList*)GetRenderPassEffect(0);
        if (bVar1) {
            uVar2 = IsAlpha();
        }
        pEVar3->Set(63, uVar2);
        pEVar3 = (EffectList*)GetRenderPassEffect(1);
        if (bVar1) {
            uVar2 = IsAlpha();
        } else {
            uVar2 = 0;
        }
        pEVar3->Set(63, uVar2);
        pEVar3 = (EffectList*)GetRenderPassEffect(8);
        pEVar3->Set(63, bVar1);
    }

    // 0x1008216e0, 192 bytes, base-object constructor, placed by class name
    // ModelMaterial::ModelMaterial()
    void ModelMaterial::ModelMaterial() {
        _func_decltype_nullptr* in_RSI;

        new (this) RenderMaterial();
        field_0 = &PTR__ModelMaterial_100f157d8;
        new (field_536, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (m_environmentMap, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&m_refractionParams, 0.0, 1.52, 0.0, 64.0) ImVec4();
        m_hideFacesMode = HideFacesMode::NEVER;
        SetOption(7, true);
    }

    // 0x1008217a0, 144 bytes, base-object constructor, placed by class name
    // ModelMaterial::ModelMaterial(ModelMaterial&&)
    void ModelMaterial::ModelMaterial(ModelMaterial* param_1) {
        undefined8 uVar1;

        new (this) RenderMaterial(param_1);
        field_0 = &PTR__ModelMaterial_100f157d8;
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)field_536, (shared_ptr*)param_1->field_536);
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)m_environmentMap, (shared_ptr*)param_1->m_environmentMap);
        uVar1 = param_1->field_584;
        m_refractionParams = param_1->m_refractionParams;
        field_584 = uVar1;
        m_hideFacesMode = param_1->m_hideFacesMode;
    }

    // 0x100821830, 144 bytes, base-object constructor, placed by class name
    // ModelMaterial::ModelMaterial(ModelMaterial const&)
    void ModelMaterial::ModelMaterial(ModelMaterial* param_1) {
        undefined8 uVar1;

        new (this) RenderMaterial(param_1);
        field_0 = &PTR__ModelMaterial_100f157d8;
        new (field_536, (shared_ptr*)param_1->field_536) shared_ptr<oldscape::dash3d::Decor>();
        new (m_environmentMap, (shared_ptr*)param_1->m_environmentMap) shared_ptr<oldscape::dash3d::Decor>();
        uVar1 = param_1->field_584;
        m_refractionParams = param_1->m_refractionParams;
        field_584 = uVar1;
        m_hideFacesMode = param_1->m_hideFacesMode;
    }

    // 0x1008218c0, 272 bytes, placed by class name
    // ModelMaterial::DestroyEnvironmentMap()
    void ModelMaterial::DestroyEnvironmentMap() {
        BaseApp* this_00;
        shared_ptr local_e8;
        shared_ptr<oldscape::dash3d::Decor> local_d8[16];
        function local_c8;
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (this_thread::IsMainThread() == '\0') {
            new (&local_e8) shared_ptr<oldscape::dash3d::Decor>(m_environmentMap);
            this_00 = (BaseApp*)BaseApp::GetAppInstance();
            shared_ptr<oldscape::dash3d::Decor>::shared_ptr(local_d8, &local_e8);
            fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                ModelMaterial::DestroyEnvironmentMap()::__4, void>(
                (function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8, (__4*)local_d8);
            this_00->QueueMainThreadEvent(&local_c8);
            fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
                (function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8);
            DestroyEnvironmentMap()::$_4::~__4((__4*)local_d8);
            local_e8.~shared_ptr();
        }
        shared_ptr<render::TextureCube>::reset();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100821a80, 16 bytes, complete-object destructor, placed by class name
    // ModelMaterial::DestroyEnvironmentMap()::$_4::~$_4(): jumps straight to the base-object destructor

    // 0x10082e820, 16 bytes, base-object destructor, placed by class name
    // ModelMaterial::DestroyEnvironmentMap()::$_4::~$_4()
    /* ~$_4() */

    void ModelMaterial::DestroyEnvironmentMap()::$_4::~__4() {
        ~shared_ptr();
    }

    // 0x10084a550, 16 bytes, complete-object constructor, placed by class name
    // ModelMaterial::DestroyEnvironmentMap()::$_4::$_4($_4&&): jumps straight to the base-object constructor

    // 0x10084a560, 16 bytes, base-object constructor, placed by class name
    // ModelMaterial::DestroyEnvironmentMap()::$_4::$_4($_4&&)
    /* $_4($_4&&) */

    void ModelMaterial::DestroyEnvironmentMap()::$_4::__4(__4* param_1) {
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)this, (shared_ptr*)param_1);
    }

    // 0x10084a5a0, 16 bytes, complete-object constructor, placed by class name
    // ModelMaterial::DestroyEnvironmentMap()::$_4::$_4($_4 const&): jumps straight to the base-object constructor

    // 0x10084a5b0, 16 bytes, base-object constructor, placed by class name
    // ModelMaterial::DestroyEnvironmentMap()::$_4::$_4($_4 const&)
    /* $_4($_4 const&) */

    void ModelMaterial::DestroyEnvironmentMap()::$_4::__4(__4* param_1) {
        new (this) shared_ptr<oldscape::dash3d::Decor>(param_1);
    }

} // namespace jag::graphics
