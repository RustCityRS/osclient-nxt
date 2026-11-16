// libs/graphics/runetek7/model/ModelMaterial.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "ModelMaterial.h"

namespace jag::graphics {
    // 0x10031b0b0: ModelMaterial::GetHideFacesMode() const has the same machine code as oldscape::dash3d::NXTRenderer::LogicThread_GetRenderCanvas()

    // 0x100441e50: ModelMaterial::GetRefractionParams() const has the same machine code as SkyBox::GetCubeMap() const

    // 0x1007b8920: ModelMaterial::GetTextureAtlasReference() const has the same machine code as TerrainMaterial::GetTextureAtlasReference() const

    // 0x10080dc90
    void ModelMaterial::DestroyRenderingResources() {
        DestroyRenderingResources();
        if (m_environmentMap->operator_cast_to_bool() != '\0') {
            DestroyEnvironmentMap();
        }
    }

    // 0x10080e6c0
    void ModelMaterial::Init(const Material& material, bool arg2) {
        unsigned char arg1;
        AlphaMode* alphaMode;
        uint64_t in_register_00000011;

        if ((int)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2) == 0) {
            alphaMode = (AlphaMode*)material.GetLastUpdateTimeNS();
        } else {
            alphaMode = (AlphaMode*)AlphaMode::ALPHA_BLENDED;
        }
        SetRasteriserState(alphaMode);
        SetShaderProgram((BlendMode*)material.GetStartTimeNS());
        auto puVar4 = material.GetLastUpdateTimeNS();
        if (puVar4 == AlphaMode::ALPHA_TESTED) {
            arg1 = material.GetMaxLevels();
        } else {
            arg1 = '\0';
        }
        SetAlphaTestThreshold(arg1);
        SetMaxLowestValue(material.GetUIHeight());
        SetEndPosition(material.GetSeqDelay());
        bool bVar1 = (bool)material.IsRT7();
        uint8_t uVar3 = false;
        SetOption(0, bVar1);
        bVar1 = (bool)material.HasSpecularMap();
        SetOption(1, bVar1);
        bVar1 = (bool)material.HasEmissiveMap();
        SetOption(2, bVar1);
        bVar1 = (bool)material.IsGlobalEnvironmentMapped();
        SetOption(3, bVar1);
        if (!(material.IsRT7())) {
            uVar3 = material.HasHDRMap();
        }
        SetOption(4, (bool)uVar3);
        if (!(material.IsRT7())) {
            uVar3 = material.IsWeighted();
        } else {
            uVar3 = false;
        }
        SetOption(5, (bool)uVar3);
        bVar1 = (bool)material.IsUnlit();
        SetOption(6, bVar1);
        bVar1 = (bool)material.HasForcedTextures();
        SetOption(9, bVar1);
        bVar1 = (bool)material.IsShadowCaster();
        SetOption(7, bVar1);
        bVar1 = (bool)material.IsShadowReceiver();
        SetOption(8, bVar1);
        bVar1 = (bool)material.HasHighlighting();
        SetOption(12, bVar1);
        bVar1 = (bool)material.HasTransparencyCutout();
        SetOption(13, bVar1);
        puVar4 = (uint8_t*)material.GetRenderStateNXT();
        m_hideFacesMode = puVar4;
        float arg1_01 = (float)material.GetRefractionAmount();
        float fVar6 = (float)material.GetRefractionIndex();
        float arg3 = (float)material.GetRefractionDepthBias();
        auto pfVar5 = m_refractionParams.qw();
        m_refractionParams.Set(arg1_01, 1.000293f / fVar6, arg3, *pfVar5);
        if (IsRefractionEnabled()) {
            puVar4 = (uint8_t*)data();
            if (puVar4 != AlphaMode::ALPHA_OPAQUE) {
                SetRasteriserState((AlphaMode*)AlphaMode::ALPHA_OPAQUE);
            }
        }
    }

    // 0x10080fc80
    ModelMaterial* ModelMaterial::operator=(const ModelMaterial& modelMaterial) {
        *this = modelMaterial;
        (*((field_528 + 8))) = (*((modelMaterial.field_528 + 8)));
        m_refractionParams = modelMaterial.m_refractionParams;
        m_hideFacesMode = modelMaterial.m_hideFacesMode;
        return this;
    }

    // 0x100810140
    void ModelMaterial::InitRenderPassEffects(bool arg1) {
        initializer_list<EffectType>* local_a8;
        uint64_t uStack_a0;

        bool arg2 = (*((field_528 + 8))) != nullptr;
        auto pEVar3 = GetRenderPassEffect(4);
        uint64_t local_68 = 4917132776155855214;
        uint64_t uStack_60 = 19490407761861184;
        uint64_t local_78 = 2531622362380384311;
        uint64_t uStack_70 = 3616725031943347237;
        uint32_t local_88 = 2014384656;
        uint32_t uStack_84 = 493506323;
        uint32_t uStack_80 = 387273297;
        uint32_t uStack_7c = 437852182;
        uint64_t local_98 = 506097522914230528;
        uint32_t uStack_90 = 185207048;
        uint32_t uStack_8c = 252579084;
        uint32_t uStack_59 = 1566328692;
        uint64_t* local_48 = &local_98;
        uint64_t local_40 = 67;
        new (&local_a8) EffectList(local_48);
        *(initializer_list<EffectType>**)pEVar3 = local_a8;
        *(uint64_t*)(pEVar3 + 8) = uStack_a0;
        bool bVar2 = (bool)GetOption(0);
        pEVar3->Set(59, bVar2);
        pEVar3->Set(74, arg1);
        pEVar3->Set(63, arg2);
        pEVar3->Set(26, true);
        bVar2 = (bool)GetOption(11);
        pEVar3->Set(55, bVar2);
        bVar2 = (bool)GetOption(0);
        pEVar3->Set(56, bVar2);
        bVar2 = (bool)GetOption(13);
        pEVar3->Set(117, bVar2);
        uint8_t* this_00 = field_528;
        this_00->AddFormatType(4);
        pEVar3 = (EffectList*)GetRenderPassEffect(2);
        auto puVar4 = GetRenderPassEffect(4);
        uint64_t uVar1 = puVar4[1];
        *(uint64_t*)pEVar3 = *puVar4;
        *(uint64_t*)(pEVar3 + 8) = uVar1;
        pEVar3->Add(87);
        this_00->AddFormatType(2);
        pEVar3 = (EffectList*)GetRenderPassEffect(3);
        local_48 = (uint64_t*)8378132640334441039;
        local_40 = (((uint64_t)local_40._2_6_ << 16) | (uint16_t)23643);
        local_a8 = (initializer_list<EffectType>*)&local_48;
        uStack_a0 = 10;
        new (&local_98) EffectList(local_a8);
        *(uint64_t*)pEVar3 = local_98;
        *(unsigned long*)(pEVar3 + 8) = (((uint64_t)uStack_8c << 32) | (uint32_t)uStack_90);
        bVar2 = (bool)GetOption(0);
        pEVar3->Set(59, bVar2);
        pEVar3->Set(74, arg1);
        pEVar3->Set(63, arg2);
        auto puVar5 = data();
        pEVar3->Set(81, puVar5 != AlphaMode::ALPHA_OPAQUE);
        bVar2 = (bool)GetOption(13);
        pEVar3->Set(117, bVar2);
        this_00->AddFormatType(3);
        pEVar3 = (EffectList*)GetRenderPassEffect(9);
        local_48 = (uint64_t*)(((uint64_t)local_48._3_5_ << 24) | (uint32_t)1785679);
        local_a8 = (initializer_list<EffectType>*)&local_48;
        uStack_a0 = 3;
        new (&local_98) EffectList(local_a8);
        *(uint64_t*)pEVar3 = local_98;
        *(unsigned long*)(pEVar3 + 8) = (((uint64_t)uStack_8c << 32) | (uint32_t)uStack_90);
        bVar2 = (bool)GetOption(0);
        pEVar3->Set(59, bVar2);
        pEVar3->Set(74, arg1);
        pEVar3->Set(63, arg2);
        puVar5 = (uint8_t*)data();
        pEVar3->Set(81, puVar5 != AlphaMode::ALPHA_OPAQUE);
        this_00->AddFormatType(9);
        pEVar3 = (EffectList*)GetRenderPassEffect(0);
        local_48._0_4_ = 608125263;
        local_a8 = (initializer_list<EffectType>*)&local_48;
        uStack_a0 = 4;
        new (&local_98) EffectList(local_a8);
        *(uint64_t*)pEVar3 = local_98;
        *(unsigned long*)(pEVar3 + 8) = (((uint64_t)uStack_8c << 32) | (uint32_t)uStack_90);
        bVar2 = (bool)GetOption(0);
        pEVar3->Set(59, bVar2);
        pEVar3->Set(74, arg1);
        puVar5 = (uint8_t*)data();
        pEVar3->Set(63, puVar5 != AlphaMode::ALPHA_OPAQUE && arg2);
        puVar5 = (uint8_t*)data();
        pEVar3->Set(81, puVar5 != AlphaMode::ALPHA_OPAQUE);
        this_00->AddFormatType(0);
        pEVar3 = (EffectList*)GetRenderPassEffect(1);
        local_48 = (uint64_t*)(((uint64_t)local_48._4_4_ << 32) | (uint32_t)608125263);
        local_a8 = (initializer_list<EffectType>*)&local_48;
        uStack_a0 = 4;
        new (&local_98) EffectList(local_a8);
        *(uint64_t*)pEVar3 = local_98;
        *(unsigned long*)(pEVar3 + 8) = (((uint64_t)uStack_8c << 32) | (uint32_t)uStack_90);
        bVar2 = (bool)GetOption(0);
        pEVar3->Set(59, bVar2);
        pEVar3->Set(74, arg1);
        puVar5 = (uint8_t*)data();
        pEVar3->Set(63, puVar5 != AlphaMode::ALPHA_OPAQUE && arg2);
        puVar5 = (uint8_t*)data();
        pEVar3->Set(81, puVar5 != AlphaMode::ALPHA_OPAQUE);
        this_00->AddFormatType(1);
        pEVar3 = (EffectList*)GetRenderPassEffect(5);
        local_88 = 374493469;
        uStack_84 = 1058609175;
        uStack_80 = 1161707803;
        local_98 = 722834354493063424;
        uStack_90 = 235736075;
        uStack_8c = 1326518800;
        local_48 = &local_98;
        local_40 = 28;
        new (&local_a8) EffectList(local_48);
        *(initializer_list<EffectType>**)pEVar3 = local_a8;
        *(uint64_t*)(pEVar3 + 8) = uStack_a0;
        bVar2 = (bool)GetOption(0);
        pEVar3->Set(59, bVar2);
        pEVar3->Set(63, arg2);
        this_00->AddFormatType(5);
        pEVar3 = (EffectList*)GetRenderPassEffect(8);
        local_48 = (uint64_t*)(((uint64_t)local_48._4_4_ << 32) | (uint32_t)1780170575);
        uStack_a0 = 4;
        local_a8 = (initializer_list<EffectType>*)&local_48;
        new (&local_98) EffectList(local_a8);
        *(uint64_t*)pEVar3 = local_98;
        *(unsigned long*)(pEVar3 + 8) = (((uint64_t)uStack_8c << 32) | (uint32_t)uStack_90);
        bVar2 = (bool)GetOption(0);
        pEVar3->Set(59, bVar2);
        pEVar3->Set(74, arg1);
        pEVar3->Set(63, arg2);
        puVar5 = (uint8_t*)data();
        pEVar3->Set(81, puVar5 != AlphaMode::ALPHA_OPAQUE);
        this_00->AddFormatType(8);
    }

    // 0x100811320
    void ModelMaterial::UpdateEnvironmentMap(TextureManager& textureManager) {
        ReturnValue local_38;

        int iVar2 = GetAliveCount();
        bool cVar1 = m_environmentMap->operator_cast_to_bool();
        if (iVar2 < 0) {
            if (cVar1) {
                DestroyEnvironmentMap();
            }
        } else if (!cVar1) {
            iVar2 = GetAliveCount();
            local_38 = textureManager.GetDefaultTextureCube(iVar2, true);
            *m_environmentMap = local_38;
        }
    }

    // 0x10081fc10
    void ModelMaterial::SetTextureAtlasReference(const shared_ptr<TextureAtlasReference>& textureAtlasReference) {
        (*((field_528 + 8))) = textureAtlasReference;
        uint8_t uVar1 = false;
        bool arg2 = (*((field_528 + 8))) != nullptr;
        auto pEVar2 = GetRenderPassEffect(4);
        pEVar2->Set(63, arg2);
        pEVar2 = (EffectList*)GetRenderPassEffect(2);
        pEVar2->Set(63, arg2);
        pEVar2 = (EffectList*)GetRenderPassEffect(5);
        pEVar2->Set(63, arg2);
        pEVar2 = (EffectList*)GetRenderPassEffect(3);
        pEVar2->Set(63, arg2);
        pEVar2 = (EffectList*)GetRenderPassEffect(9);
        pEVar2->Set(63, arg2);
        pEVar2 = (EffectList*)GetRenderPassEffect(0);
        if (arg2) {
            uVar1 = IsAlpha();
        }
        pEVar2->Set(63, (bool)uVar1);
        pEVar2 = (EffectList*)GetRenderPassEffect(1);
        if (arg2) {
            uVar1 = IsAlpha();
        } else {
            uVar1 = false;
        }
        pEVar2->Set(63, (bool)uVar1);
        pEVar2 = (EffectList*)GetRenderPassEffect(8);
        pEVar2->Set(63, arg2);
    }

    // 0x1008216e0
    ModelMaterial::ModelMaterial() : RenderMaterial() {
        new ((field_528 + 8)) shared_ptr();
        new (m_environmentMap) shared_ptr();
        new (&m_refractionParams) ImVec4(0.0, 1.52, 0.0, 64.0);
        m_hideFacesMode = HideFacesMode::NEVER;
        SetOption(7, true);
    }

    // 0x1008217a0
    ModelMaterial::ModelMaterial(ModelMaterial&& modelMaterial) : RenderMaterial(modelMaterial) {
        ((field_528 + 8))->shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(*((modelMaterial.field_528 + 8)));
        m_environmentMap->shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(modelMaterial.m_environmentMap);
        uint64_t uVar1 = modelMaterial.field_584;
        m_refractionParams = modelMaterial.m_refractionParams;
        field_584 = uVar1;
        m_hideFacesMode = modelMaterial.m_hideFacesMode;
    }

    // 0x100821830
    ModelMaterial::ModelMaterial(const ModelMaterial& modelMaterial) : RenderMaterial(modelMaterial) {
        new ((field_528 + 8)) shared_ptr((modelMaterial.field_528 + 8));
        new (m_environmentMap) shared_ptr(modelMaterial.m_environmentMap);
        uint64_t uVar1 = modelMaterial.field_584;
        m_refractionParams = modelMaterial.m_refractionParams;
        field_584 = uVar1;
        m_hideFacesMode = modelMaterial.m_hideFacesMode;
    }

    // 0x1008218c0
    void ModelMaterial::DestroyEnvironmentMap() {
        BaseApp* this_00;
        shared_ptr<oldscape::dash3d::Decor> local_e8;
        shared_ptr<oldscape::dash3d::Decor> local_d8;
        function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0> local_c8[160];
        long local_28;

        if (!(this_thread::IsMainThread())) {
            local_e8 = shared_ptr(m_environmentMap);
            this_00 = BaseApp::GetAppInstance();
            local_d8 = shared_ptr(&local_e8);
            fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                ModelMaterial::DestroyEnvironmentMap()::__4, void>(local_c8, &local_d8);
            this_00->QueueMainThreadEvent(*local_c8);
            DestroyEnvironmentMap()::$_4::~__4(&local_d8);
        }
        m_environmentMap->reset();
    }

    // 0x10082e820
    ModelMaterial::DestroyEnvironmentMap()::$_4::~$_4() {}

    // 0x10084a560
    ModelMaterial::DestroyEnvironmentMap()::$_4::$_4($_4&& arg1) {
        shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(arg1);
    }

    // 0x10084a5b0
    ModelMaterial::DestroyEnvironmentMap()::$_4::$_4(const $_4& arg1) : shared_ptr(arg1) {}

} // namespace jag::graphics
