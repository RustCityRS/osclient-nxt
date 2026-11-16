// libs/graphics/runetek7/effects/caustics/Caustics.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.graphics

namespace jag::graphics {
    class Caustics {
    public:
        // virtual methods in vtable order
        virtual ~Caustics();
        virtual bool Initialise();
        virtual bool IsSupported() const;
        virtual void SetShaderConstants(render::DrawCallState&, render::RenderContext&, Shader&) const;
        virtual OnQualityChange(GraphicsQuality);
        WaterParameters GetCausticsManager();
        Caustics(RT7Core&);
        void SetParameters(WaterParameters const&);

        // data members, from how the methods use this: 564 bytes
        undefined** field_0; // offset 0, vtable pointer
        uint field_8;        // offset 8
        char _unknown_12[4];
        RT7Core* field_16; // offset 16
        uint field_24;     // offset 24
        float field_28;    // offset 28
        float field_32;    // offset 32
        float field_36;    // offset 36
        float field_40;    // offset 40
        float field_44;    // offset 44
        float field_48;    // offset 48
        float field_52;    // offset 52
        float field_56;    // offset 56
        char _unknown_60[4];
        WaterParameters m_causticsManager; // offset 64
    };

    // 0x100049810: the linker folded this into oldscape::option::Option<oldscape::WindowSavedPosition>::GetDefaultValue() const, which has identical code
    WaterParameters Caustics::GetCausticsManager();

    // 0x10092cea0, 128 bytes, base-object constructor, placed by class name
    // Caustics::Caustics(RT7Core&)
    void Caustics::Caustics(RT7Core* param_1) {
        RenderTargetsManager* pRVar1;

        new (this) ShaderEffect(param_1);
        field_0 = &PTR__Caustics_100f19cc0;
        field_24 = 4294967295;
        field_28 = 5.0;
        field_32 = 0.18;
        field_36 = 2400.0;
        field_40 = 3.0;
        field_44 = 100.0;
        field_48 = 200.0;
        field_52 = 700.0;
        field_56 = 2300.0;
        pRVar1 = (RenderTargetsManager*)param_1->GetRenderTargetsManager();
        new (m_causticsManager, pRVar1) CausticsManager();
    }

    // 0x10092cf50, 16 bytes, complete-object constructor, placed by class name
    // Caustics::Caustics(RT7Core&): jumps straight to the base-object constructor

    // 0x10092cf60, 48 bytes, placed by class name
    // Caustics::Initialise()
    bool Caustics::Initialise() {
        uint uVar1;

        uVar1 = field_16->GetPSTextureSlotManager();
        uVar1 = ShaderResourceSlotManager::RegisterSlotID(uVar1);
        field_24 = uVar1;
        return uVar1 != 4294967295;
    }

    // 0x10092cfa0, 144 bytes, placed by class name
    // Caustics::SetParameters(WaterParameters const&)
    void Caustics::SetParameters(WaterParameters* param_1) {
        float fVar1;

        fVar1 = (float)param_1->GetCausticsScale();
        field_28 = fVar1;
        fVar1 = (float)param_1->GetCausticsRefractionScale();
        field_32 = fVar1;
        fVar1 = (float)param_1->GetCausticsDepthFadeCutoff();
        field_36 = fVar1;
        fVar1 = (float)param_1->GetCausticsDepthFadeScale();
        field_40 = fVar1;
        fVar1 = (float)param_1->GetCausticsEdgeFadeStart();
        field_44 = fVar1;
        fVar1 = (float)param_1->GetCausticsEdgeFadeEnd();
        field_48 = fVar1;
        fVar1 = (float)param_1->GetCausticsOverWaterFadeStart();
        field_52 = fVar1;
        fVar1 = (float)param_1->GetCausticsOverWaterFadeEnd();
        field_56 = fVar1;
    }

    // 0x10092d030, 96 bytes, placed by class name
    // Caustics::OnQualityChange(GraphicsQuality)
    undefined8 Caustics::OnQualityChange(int param_2) {
        Config local_20;

        if ((*(code*)field_0[5])() != '\0') {
            m_causticsManager->Destroy();
            if (param_2 != -1) {
                new (&local_20) CausticsManager::Config();
                return (m_causticsManager, &local_20)->Initialise();
            }
        }
        return 0;
    }

    // 0x10092d0a0, 592 bytes, placed by class name
    // Caustics::SetShaderConstants(render::DrawCallState&, render::RenderContext&, Shader&) const
    void Caustics::SetShaderConstants(DrawCallState* param_1, RenderContext* param_2, Shader* param_3) {
        undefined1* this_00;
        uint uVar1;
        int iVar2;
        ShaderProgram* this_01;
        RenderPipelineState* this_02;
        Texture* pTVar3;
        HashedString* pHVar4;
        RT7Core* this_03;
        Matrix44T* pMVar5;
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                    eastl::allocator>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>* pcVar6;
        uint* puVar7;
        long lVar8;
        float fVar9;

        this_01 = (ShaderProgram*)param_3->GetProgram();
        this_02 = (RenderPipelineState*)param_1->GetRenderPipelineState();
        uVar1 = field_24;
        this_00 = m_causticsManager;
        pTVar3 = (Texture*)this_00->GetCausticsFloatMapAtlas();
        pHVar4 = (HashedString*)graphics::operator*((graphics*)70);
        iVar2 = this_01->GetConstIndex(pHVar4);
        this_02->SetPSTextureSamplerPair(uVar1, pTVar3, iVar2, 0, true);
        pHVar4 = (HashedString*)graphics::operator*((graphics*)73);
        iVar2 = this_01->GetConstIndex(pHVar4);
        fVar9 = (float)this_00->GetEmissiveMapMaterialScale();
        this_01->SetShaderConstFloat1(iVar2, fVar9 - field_44);
        pHVar4 = (HashedString*)graphics::operator*((graphics*)74);
        iVar2 = this_01->GetConstIndex(pHVar4);
        this_03 = (RT7Core*)this_00->GetWorld();
        pMVar5 = (Matrix44T*)this_03->GetImmediateThreadPool();
        this_01->SetShaderConstMatrix4(iVar2, 1, pMVar5, 1);
        pHVar4 = (HashedString*)graphics::operator*((graphics*)71);
        pcVar6 =
            (compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                         eastl::allocator>>::Layout,
                                 eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>*)
                this_00->GetCausticsIntegerMapAtlas();
        puVar7 = (uint*)eastl::compressed_pair_imp<
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>::second(pcVar6);
        uVar1 = *puVar7;
        pcVar6 =
            (compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                         eastl::allocator>>::Layout,
                                 eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>*)
                this_00->GetCausticsIntegerMapAtlas();
        lVar8 = eastl::compressed_pair_imp<
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>::second(pcVar6);
        this_01->SetShaderConstFloat2(pHVar4, (float)uVar1, (float)*(uint*)(lVar8 + 4));
        pHVar4 = (HashedString*)graphics::operator*((graphics*)72);
        pcVar6 =
            (compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                         eastl::allocator>>::Layout,
                                 eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>*)
                this_00->GetCausticsComputeMapAtlas();
        puVar7 = (uint*)eastl::compressed_pair_imp<
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>::second(pcVar6);
        uVar1 = *puVar7;
        pcVar6 =
            (compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                         eastl::allocator>>::Layout,
                                 eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>*)
                this_00->GetCausticsComputeMapAtlas();
        lVar8 = eastl::compressed_pair_imp<
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>::second(pcVar6);
        this_01->SetShaderConstFloat2(pHVar4, (float)uVar1, (float)*(uint*)(lVar8 + 4));
        pHVar4 = (HashedString*)graphics::operator*((graphics*)75);
        iVar2 = this_01->GetConstIndex(pHVar4);
        this_01->SetShaderConstFloat1(iVar2, field_28 * 0.001);
        pHVar4 = (HashedString*)graphics::operator*((graphics*)76);
        iVar2 = this_01->GetConstIndex(pHVar4);
        this_01->SetShaderConstFloat1(iVar2, field_32);
        pHVar4 = (HashedString*)graphics::operator*((graphics*)77);
        iVar2 = this_01->GetConstIndex(pHVar4);
        this_01->SetShaderConstFloat4(iVar2, field_36, field_40, field_44, field_48);
        pHVar4 = (HashedString*)graphics::operator*((graphics*)78);
        iVar2 = this_01->GetConstIndex(pHVar4);
        this_01->SetShaderConstFloat2(iVar2, field_52, field_56);
    }

    // 0x10092d2f0, 48 bytes, placed by class name
    // Caustics::IsSupported() const
    bool Caustics::IsSupported() {
        MapArea* this_00;
        long lVar1;

        this_00 = (MapArea*)Instance();
        lVar1 = this_00->GetOrigin();
        return *(char*)(lVar1 + 160) != '\0' && *(char*)(lVar1 + 222) != '\0';
    }

    // 0x100937e90, 16 bytes, complete-object destructor, inline, placed by class name
    // Caustics::~Caustics(): jumps straight to the base-object destructor

    // 0x100937ea0, 32 bytes, deleting destructor, inline, placed by class name
    // Caustics::~Caustics()
    void Caustics::~Caustics() {
        ~Caustics(this);
        operator_delete(this);
    }

    // 0x100939710, 48 bytes, base-object destructor, inline, placed by class name
    // Caustics::~Caustics()
    void Caustics::~Caustics() {
        NpcUID* extraout_RDX;
        NpcUID* in_RSI;

        field_0 = &PTR__Caustics_100f19cc0;
        m_causticsManager->~CausticsManager();
        eastl::destruct<oldscape::highlight::NpcUID*>((eastl*)this, in_RSI, extraout_RDX);
    }

} // namespace jag::graphics
