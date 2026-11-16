// libs/graphics/runetek7/effects/caustics/Caustics.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.graphics

namespace jag::graphics {
    class Caustics {
    public:
        // virtual methods in vtable order
        virtual ~Caustics();
        virtual bool Initialise();
        virtual bool IsSupported() const;
        virtual void SetShaderConstants(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                        Shader& shader) const;
        virtual uint64_t OnQualityChange(GraphicsQuality graphicsQuality);
        WaterParameters GetCausticsManager();
        Caustics(RT7Core& rt7Core);
        void SetParameters(const WaterParameters& waterParameters);

    private:
        GraphicsQuality field_8;
        uint8_t _unknown_12[4];
        RT7Core* field_16;
        unsigned int field_24;
        float field_28;
        float field_32;
        float field_36;
        float field_40;
        float field_44;
        float field_48;
        float field_52;
        float field_56;
        uint8_t _unknown_60[4];
        WaterParameters m_causticsManager;
    };

    // 0x100049810: Caustics::GetCausticsManager() has the same machine code as oldscape::option::Option<oldscape::WindowSavedPosition>::GetDefaultValue() const

    // 0x10092cea0
    Caustics::Caustics(RT7Core& rt7Core)
        : ShaderEffect(rt7Core), field_24(4294967295), field_28(5.0), field_32(0.18), field_36(2400.0), field_40(3.0),
          field_44(100.0), field_48(200.0), field_52(700.0), field_56(2300.0) {
        auto renderTargetsManager = rt7Core.GetRenderTargetsManager();
        new (m_causticsManager) CausticsManager(*renderTargetsManager);
    }

    // 0x10092cf60
    bool Caustics::Initialise() {
        unsigned int uVar1 = field_16->GetPSTextureSlotManager();
        uVar1 = ShaderResourceSlotManager::RegisterSlotID(uVar1);
        field_24 = uVar1;
        return uVar1 != 4294967295;
    }

    // 0x10092cfa0
    void Caustics::SetParameters(const WaterParameters& waterParameters) {
        float fVar1 = (float)waterParameters.GetCausticsScale();
        field_28 = fVar1;
        fVar1 = (float)waterParameters.GetCausticsRefractionScale();
        field_32 = fVar1;
        fVar1 = (float)waterParameters.GetCausticsDepthFadeCutoff();
        field_36 = fVar1;
        fVar1 = (float)waterParameters.GetCausticsDepthFadeScale();
        field_40 = fVar1;
        fVar1 = (float)waterParameters.GetCausticsEdgeFadeStart();
        field_44 = fVar1;
        fVar1 = (float)waterParameters.GetCausticsEdgeFadeEnd();
        field_48 = fVar1;
        fVar1 = (float)waterParameters.GetCausticsOverWaterFadeStart();
        field_52 = fVar1;
        fVar1 = (float)waterParameters.GetCausticsOverWaterFadeEnd();
        field_56 = fVar1;
    }

    // 0x10092d030
    uint64_t Caustics::OnQualityChange(GraphicsQuality graphicsQuality) {
        Config local_20;

        if (IsSupported() != '\0') {
            m_causticsManager->Destroy();
            if (graphicsQuality != 4294967295) {
                local_20 = CausticsManager::Config();
                return m_causticsManager->Initialise(local_20);
            }
        }
        return 0;
    }

    // 0x10092d0a0
    void Caustics::SetShaderConstants(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                      Shader& shader) const {
        auto this_01 = shader.GetProgram();
        RenderPipelineState* this_02 = (RenderPipelineState*)drawCallState.GetRenderPipelineState();
        unsigned int uVar1 = field_24;
        uint8_t* this_00 = m_causticsManager;
        auto texture = this_00->GetCausticsFloatMapAtlas();
        auto pHVar3 = graphics::operator*(70);
        int iVar2 = this_01->GetConstIndex(*pHVar3);
        this_02->SetPSTextureSamplerPair(uVar1, texture, iVar2, nullptr, true);
        pHVar3 = (HashedString*)graphics::operator*(73);
        iVar2 = this_01->GetConstIndex(*pHVar3);
        float fVar8 = (float)this_00->GetEmissiveMapMaterialScale();
        this_01->SetShaderConstFloat1(iVar2, fVar8 - field_44);
        pHVar3 = (HashedString*)graphics::operator*(74);
        iVar2 = this_01->GetConstIndex(*pHVar3);
        auto this_03 = this_00->GetWorld();
        auto matrix44 = this_03->GetImmediateThreadPool();
        this_01->SetShaderConstMatrix4(iVar2, 1, matrix44, 1);
        pHVar3 = (HashedString*)graphics::operator*(71);
        auto pcVar4 = this_00->GetCausticsIntegerMapAtlas();
        auto puVar5 = pcVar4->second();
        uVar1 = *puVar5;
        pcVar4 = (compressed_pair_imp<
                  eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                  eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>*)this_00->GetCausticsIntegerMapAtlas();
        long lVar6 = pcVar4->second();
        this_01->SetShaderConstFloat2(pHVar3, (float)uVar1, (float)*(unsigned int*)(lVar6 + 4));
        pHVar3 = (HashedString*)graphics::operator*(72);
        auto pcVar7 = this_00->GetCausticsComputeMapAtlas();
        puVar5 = (unsigned int*)pcVar7->second();
        uVar1 = *puVar5;
        pcVar7 = this_00->GetCausticsComputeMapAtlas();
        lVar6 = pcVar7->second();
        this_01->SetShaderConstFloat2(pHVar3, (float)uVar1, (float)*(unsigned int*)(lVar6 + 4));
        pHVar3 = (HashedString*)graphics::operator*(75);
        iVar2 = this_01->GetConstIndex(*pHVar3);
        this_01->SetShaderConstFloat1(iVar2, field_28 * 0.001);
        pHVar3 = (HashedString*)graphics::operator*(76);
        iVar2 = this_01->GetConstIndex(*pHVar3);
        this_01->SetShaderConstFloat1(iVar2, field_32);
        pHVar3 = (HashedString*)graphics::operator*(77);
        iVar2 = this_01->GetConstIndex(*pHVar3);
        this_01->SetShaderConstFloat4(iVar2, field_36, field_40, field_44, field_48);
        pHVar3 = (HashedString*)graphics::operator*(78);
        iVar2 = this_01->GetConstIndex(*pHVar3);
        this_01->SetShaderConstFloat2(iVar2, field_52, field_56);
    }

    // 0x10092d2f0
    bool Caustics::IsSupported() const {
        long lVar1 = ((MapArea*)Instance())->GetOrigin();
        return *(char*)(lVar1 + 160) != '\0' && *(char*)(lVar1 + 222) != '\0';
    }

    // 0x100939710
    Caustics::~Caustics() {
        m_causticsManager->~CausticsManager();
        destruct<oldscape::highlight::NpcUID*>();
    }

} // namespace jag::graphics
