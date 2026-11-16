// libs/graphics/runetek7/effects/globalenvironmentmapping/GlobalEnvironmentMapping.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "GlobalEnvironmentMapping.h"

namespace jag::graphics {
    // 0x100d4ba10
    int32_t GlobalEnvironmentMapping::SPECULAR_HORIZON_OCCLUSION_SCALE_DEFAULT = 1066192077;

    // 0x100d4ba14
    float GlobalEnvironmentMapping::ENVIRONMENT_MAP_IRRADIANCE_SCALE_DEFAULT = 2.75f;

    // 0x100f44a70
    const void* GlobalEnvironmentMapping::VertPosUV::m_VertexAttribNames[2] = {"aPos", "aTexCoord"};

    // 0x103bc0760, set at startup by ___cxx_global_var_init.178
    render::VertexElementDesc GlobalEnvironmentMapping::VertPosUV::m_VertexElemDescs[2] = {
        /* [0] */ VertexElementDesc(0, "aPos", 2, false, 0, 0),
        /* [1] */ VertexElementDesc(0, "aTexCoord", 1, false, 5, 0),
    };

    // 0x10092d5b0
    GlobalEnvironmentMapping::GlobalEnvironmentMapping(RT7Core& rt7Core)
        : ShaderEffect(rt7Core), field_48(0), field_56(0), field_112(4294967295), field_116(0) {
        field_117 = '\0';
        new (&field_128) math::Vector4T(0.125);
        new (&field_144) math::Transitionable<float>(SPECULAR_HORIZON_OCCLUSION_SCALE_DEFAULT);
        new (&field_176) math::Transitionable<float>(ENVIRONMENT_MAP_IRRADIANCE_SCALE_DEFAULT);
        new (field_208) shared_ptr();
        new (&field_224) render::VertexDeclaration();
        new (&field_320) render::VertexBuffer();
        new (field_400) render::InputAssemblerState();
    }

    // 0x10092d710: ClipPlaneShaderConsts::ClipPlaneShaderConsts() has the same machine code as GlobalEnvironmentMapping::ShaderConsts::ShaderConsts()

    // 0x10092d730
    GlobalEnvironmentMapping::~GlobalEnvironmentMapping() {
        DestroyRenderingResources();
        field_400->~InputAssemblerState();
        field_320.~VertexBuffer();
        field_224.~VertexDeclaration();
        field_208->~shared_ptr();
        field_96->~shared_ptr();
        field_80->~shared_ptr();
        field_64->~shared_ptr();
        destruct<oldscape::highlight::NpcUID*>();
    }

    // 0x10092d830
    uint8_t GlobalEnvironmentMapping::Initialise() {
        uint8_t uVar1;

        unsigned int uVar2 = field_16->GetPSTextureSlotManager();
        uVar2 = ShaderResourceSlotManager::RegisterSlotID(uVar2);
        field_112 = uVar2;
        if (uVar2 == 4294967295) {
            uVar1 = 0;
        } else {
            uVar1 = CreateRenderingResources();
        }
        return uVar1;
    }

    // 0x10092d870
    void GlobalEnvironmentMapping::SetShaderConstants(render::DrawCallState& drawCallState,
                                                      render::RenderContext& renderContext, Shader& shader) const {
        auto this_00 = shader.GetProgram();
        auto texture = GetCurrentTexture(true);
        if (texture == nullptr) {
            LogAssert("currentTexture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "globalenvironmentmapping/GlobalEnvironmentMapping.cpp",
                      40, nullptr);
        }
        RenderPipelineState* this_01 = (RenderPipelineState*)drawCallState.GetRenderPipelineState();
        unsigned int arg1 = field_112;
        auto pHVar1 = graphics::operator*(20);
        int arg3 = this_00->GetConstIndex(*pHVar1);
        this_01->SetPSTextureSamplerPair(arg1, texture, arg3, nullptr, true);
        pHVar1 = (HashedString*)graphics::operator*(53);
        this_00->SetShaderConstVector4(pHVar1, &field_32);
    }

    // 0x10092d930
    uint64_t GlobalEnvironmentMapping::GetCurrentTexture(bool arg1) const {
        uint64_t uVar3;
        RenderTargets* pRVar4;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* this_00;
        uint64_t* puVar5;
        uint8_t* this_02;

        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01 =
            (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)field_208;
        bool cVar1 = this_01->operator_cast_to_bool();
        if (!cVar1) {
            if ((!arg1) || (field_56 <= field_48)) {
                if (*field_80 != nullptr) {
                    uVar3 = field_80->end();
                    return uVar3;
                }
            }
            if (field_117 == '\0') {
                this_01 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)field_80;
                cVar1 = this_01->operator_cast_to_bool();
                if (cVar1)
                    goto LAB_10092d953;
            }
            this_02 = field_64;
            cVar1 = this_02->operator_cast_to_bool();
            if (cVar1) {
                pRVar4 = (RenderTargets*)(*this_02).operator->();
                cVar1 = pRVar4->HasColourTargets();
                if (cVar1) {
                    pRVar4 = (RenderTargets*)(*this_02).operator->();
                    this_00 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                                  pRVar4->GetColourTargetTextures();
                    puVar5 = (uint64_t*)(*this_00)[0];
                    return *puVar5;
                }
            }
            uVar3 = 0;
        } else {
        LAB_10092d953:
            uVar3 = this_01->end();
        }
        return uVar3;
    }

    // 0x10092da00
    void GlobalEnvironmentMapping::SetTexture(const shared_ptr<render::TextureCube>& textureCube,
                                              unsigned long long arg2, unsigned long long arg3) {
        uint8_t* this_00;

        if (arg2 == 0) {
            *field_80 = textureCube;
            field_96->reset();
            field_48 = 0;
            field_56 = 0;
        } else {
            this_00 = field_96;
            if (this_00->operator_cast_to_bool()) {
                *field_80 = *this_00;
            }
            *this_00 = textureCube;
            field_48 = arg3;
            field_56 = arg2 + arg3;
            field_117 = '\0';
        }
        if (!(field_80->operator_cast_to_bool())) {
            if (!(field_96->operator_cast_to_bool())) {
                ClearTextures();
            }
        }
    }

    // 0x10092db30
    void GlobalEnvironmentMapping::ClearTextures() {
        int arg3;
        CubeFace cubeFace;
        RenderTargets* pRVar1;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* pvVar2;
        uint64_t* puVar3;
        int* piVar4;
        long lVar5;
        RenderContext* this_02;
        uint8_t local_58[32];

        auto this_01 = GetRenderContext();
        uint8_t* this_00 = field_64;
        local_58._24_8_ = &field_128;
        int arg1 = 0;
        do {
            pRVar1 = (RenderTargets*)this_00->end();
            this_01->SetRenderTargets(pRVar1);
            pRVar1 = (RenderTargets*)(*this_00).operator->();
            cubeFace = render::GetCubeMapFace(arg1);
            pRVar1->SetTargetCubeMapFace(0, cubeFace);
            pRVar1 = (RenderTargets*)(*this_00).operator->();
            pvVar2 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                         pRVar1->GetColourTargetTextures();
            puVar3 = (uint64_t*)(*pvVar2)[0];
            piVar4 = (int*)(*puVar3)->second();
            arg3 = *piVar4;
            pRVar1 = (RenderTargets*)(*this_00).operator->();
            pvVar2 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                         pRVar1->GetColourTargetTextures();
            puVar3 = (uint64_t*)(*pvVar2)[0];
            lVar5 = (*puVar3)->second();
            new (local_58) render::Viewport(0, 0, arg3, *(int*)(lVar5 + 4), 0.0, 1.0);
            this_02 = this_01;
            this_01->SetViewports(local_58, 1);
            lVar5 = this_02->Instance();
            this_01->SetBlendState((lVar5 + 1524));
            this_01->ClearRenderTargets(local_58._24_8_, 1);
            arg1 = arg1 + 1;
        } while (arg1 != 6);
        field_116 = 1;
    }

    // 0x10092dc70
    void GlobalEnvironmentMapping::SetTextureOverride(const shared_ptr<render::TextureCube>& textureCube,
                                                      unsigned long long arg2) {
        *field_208 = textureCube;
        auto this_00 = GetCurrentTexture(true);
        if (this_00 == nullptr) {
            LogAssert("currentTexture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "globalenvironmentmapping/GlobalEnvironmentMapping.cpp",
                      79, nullptr);
        }
        unsigned int uVar1 = this_00->GetStreamCountLastMix();
        float arg3 = (float)field_144.GetValue(arg2);
        float arg4 = (float)field_176.GetValue(arg2);
        field_32.Set((float)uVar1, 8192.0, arg3, arg4);
    }

    // 0x10092dd30
    void GlobalEnvironmentMapping::DestroyTextures() {
        ((RenderTargetsManager*)field_16->GetRenderTargetsManager())->Unregister(*field_64);
        field_80->reset();
        field_96->reset();
    }

    // 0x10092dd70
    uint8_t GlobalEnvironmentMapping::CreateRenderingResources() {
        uint8_t local_138[64];
        uint8_t local_f8[20];
        uint8_t auStack_e4[12];
        uint8_t auStack_d0[16];
        uint8_t auStack_c0[8];
        uint8_t local_b8[64];
        uint8_t local_78[56];
        char cStack_40;
        uint64_t uStack_3e;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_38;

        Desc* this_01 = (Desc*)local_78;
        new (this_01) render::Texture::Desc();
        local_78._0_4_ = 128;
        local_78._4_4_ = 128;
        long lVar4 = ((MapArea*)this_01->Instance())->GetOrigin();
        local_78._12_4_ = 8 - (unsigned int)(*(char*)(lVar4 + 147) == '\0');
        local_78[32] = 1;
        auto str = field_16->GetRenderTargetsManager();
        local_f8._12_4_ = local_78._12_4_;
        local_f8._8_4_ = (float)local_78._8_4_;
        uint64_t local_d8 = (((uint64_t)local_78._33_7_ << 8) | (uint8_t)local_78[32]);
        auStack_c0 = (uint8_t[8])(((uint64_t)uStack_3e << 16) | (uint16_t)((((uint16_t)1 << 8) | (uint8_t)cStack_40)));
        auStack_d0._8_8_ = local_78._48_8_;
        auStack_d0._0_8_ = local_78._40_8_;
        local_f8._16_4_ = local_78._16_4_;
        auStack_e4._0_4_ = local_78._20_4_;
        auStack_e4._4_8_ = local_78._24_8_;
        local_f8._0_8_ = local_78._0_8_;
        new (local_b8) render::Texture::Desc();
        new (local_138) render::Texture::Desc();
        local_38.Register(str, 14755326, *34067, (int)local_f8, DAT_00000001, (unsigned int)(Desc*)local_138, true);
        *field_64 = local_38;
        bool bVar1 = *field_64 != nullptr;
        new (local_f8) math::ColourHSL(-1.0, 1.0, 0.0);
        new ((local_f8 + 12)) math::Point(0.0, 1.0);
        new (auStack_e4) math::ColourHSL(1.0, 1.0, 0.0);
        new (&local_d8) math::Point(1.0, 1.0);
        new (auStack_d0) math::ColourHSL(-1.0, -1.0, 0.0);
        new ((auStack_d0 + 12)) math::Point(0.0, 0.0);
        new ((auStack_c0 + 4)) math::ColourHSL(1.0, -1.0, 0.0);
        new ((local_b8 + 8)) math::Point(1.0, 0.0);
        auto arg3 = local_f8->data();
        uint8_t bVar2 = field_320.Create(80, 0, arg3);
        uint8_t bVar3 = field_224.Create((VertexElementDesc*)&VertPosUV::m_VertexElemDescs, 2, nullptr, 0);
        field_116 = 0;
        field_117 = '\0';
        return bVar3 & bVar1 & bVar2;
    }

    // 0x10092dfd0
    void GlobalEnvironmentMapping::DestroyRenderingResources() {
        DestroyTextures();
        field_320.Destroy();
        field_224.Destroy();
        field_400->Destroy();
    }

    // 0x10092e010
    void GlobalEnvironmentMapping::MainLogic(unsigned long long arg1, EffectManager& effectManager) {
        uint8_t* midiPlayerMainThread;
        uint8_t* this_00;
        unsigned long uVar1;
        unsigned long uVar2;
        bool bVar4;
        CubeFace cubeFace;
        RenderContext* renderContext;
        RenderTargets* pRVar6;
        Texture* texture1;
        Texture* texture2;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* this_01;
        uint64_t* puVar7;
        RT7Core* this_03;
        int arg1_00;

        if (field_116 == '\0') {
            ClearTextures();
        }
        if (effectManager.IsEnabled(94) != '\0') {
            uVar1 = field_56;
            if ((uVar1 == 0) || (arg1 < uVar1)) {
                if (field_48 < uVar1) {
                    bVar4 = *field_80 != nullptr;
                    if (bVar4) {
                        midiPlayerMainThread = field_96;
                        this_03 = (RT7Core*)midiPlayerMainThread;
                        bVar4 = *midiPlayerMainThread != nullptr;
                        if (bVar4) {
                            uVar1 = field_48;
                            uVar2 = field_56;
                            renderContext = (RenderContext*)this_03->GetRenderContext();
                            this_00 = field_64;
                            arg1_00 = 0;
                            do {
                                pRVar6 = (RenderTargets*)(*this_00).operator->();
                                cubeFace = render::GetCubeMapFace(arg1_00);
                                pRVar6->SetTargetCubeMapFace(0, cubeFace);
                                pRVar6 = (RenderTargets*)this_00->end();
                                texture1 = (Texture*)field_80->end();
                                texture2 = (Texture*)midiPlayerMainThread->end();
                                RenderBlendedQuadToFace(*renderContext, pRVar6, texture1, texture2, arg1_00,
                                                        (float)(arg1 - uVar1) / (float)(uVar2 - uVar1));
                                arg1_00 = arg1_00 + 1;
                            } while (arg1_00 != 6);
                            pRVar6 = (RenderTargets*)(*this_00).operator->();
                            this_01 =
                                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                                    pRVar6->GetColourTargetTextures();
                            puVar7 = (uint64_t*)(*this_01)[0];
                            (*puVar7)->GenerateMipMaps();
                            field_117 = '\x01';
                        }
                    }
                }
            } else {
                field_48 = 0;
                field_56 = 0;
                *field_80 = *field_96;
                field_96->reset();
            }
        }
        bVar4 = (bool)effectManager.IsEnabled(94);
        auto this_02 = GetCurrentTexture(bVar4);
        if (this_02 == nullptr) {
            LogAssert("currentTexture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "globalenvironmentmapping/GlobalEnvironmentMapping.cpp",
                      200, nullptr);
        }
        unsigned int uVar5 = this_02->GetStreamCountLastMix();
        float arg3 = (float)field_144.GetValue(arg1);
        float arg4 = (float)field_176.GetValue(arg1);
        field_32.Set((float)uVar5, 8192.0, arg3, arg4);
    }

    // 0x10092e270
    void GlobalEnvironmentMapping::RenderBlendedQuadToFace(render::RenderContext& renderContext,
                                                           render::RenderTargets* renderTargets,
                                                           const render::Texture* texture1,
                                                           const render::Texture* texture2, int arg5, float arg6) {
        VertexDeclaration* vertexDeclaration;
        uint8_t local_a8[72];

        if (texture1 == nullptr) {
            LogAssert("srcTextureA",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "globalenvironmentmapping/GlobalEnvironmentMapping.cpp",
                      219, nullptr);
        }
        if (texture2 == nullptr) {
            LogAssert("srcTextureB",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "globalenvironmentmapping/GlobalEnvironmentMapping.cpp",
                      220, nullptr);
        }
        auto pvVar2 = renderTargets->GetColourTargetTextures();
        uint64_t* puVar3 = (uint64_t*)(*pvVar2)[0];
        int* piVar4 = (int*)(*puVar3)->second();
        int iVar1 = *piVar4;
        pvVar2 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                     renderTargets->GetColourTargetTextures();
        puVar3 = (uint64_t*)(*pvVar2)[0];
        long lVar5 = (*puVar3)->second();
        new (local_a8) render::Viewport(0, 0, iVar1, *(int*)(lVar5 + 4), 0.0, 1.0);
        auto pSVar6 = field_16->GetShaderManager();
        auto effectList = field_16->GetEffectManager();
        new ((local_a8 + 24)) EffectList();
        auto this_00 =
            ShaderManager::GetShader((ShaderType)pSVar6, *23, *effectList, *((local_a8 + 24)), (char)this + 224, 0);
        ShaderProgram* this_02 = ((Shader*)(*this_00).operator->())->GetProgram();
        DrawCallState* this_04 = (DrawCallState*)(local_a8 + 24);
        new (this_04) render::DrawCallState();
        auto this_03 = this_04->GetRenderPipelineState();
        lVar5 = this_04->Instance();
        this_03->SetHeapSize((lVar5 + 1080));
        vertexDeclaration = (VertexDeclaration*)this_02->second();
        field_400->SetVertexStreamData(vertexDeclaration, &field_320);
        ((local_a8 + 24))->SetInputAssemblerState(field_400);
        OutputMergerState* pOVar7 = ((local_a8 + 24))->GetOutputMergerState();
        pOVar7->SetViewports(local_a8, 1);
        pOVar7 = ((local_a8 + 24))->GetOutputMergerState();
        pOVar7->SetRenderTargets(renderTargets);
        RenderPipelineState* pRVar8 = (RenderPipelineState*)((local_a8 + 24))->GetRenderPipelineState();
        pRVar8->SetShaderProgram(this_02);
        HashedString local_40("sTextureCubeA");
        iVar1 = this_02->GetConstIndex(local_40);
        pRVar8 = (RenderPipelineState*)((local_a8 + 24))->GetRenderPipelineState();
        pRVar8->SetPSTextureSamplerPair(0, texture1, iVar1, nullptr, false);
        local_40 = HashedString("sTextureCubeB");
        iVar1 = this_02->GetConstIndex(local_40);
        pRVar8 = (RenderPipelineState*)((local_a8 + 24))->GetRenderPipelineState();
        pRVar8->SetPSTextureSamplerPair(1, texture2, iVar1, nullptr, false);
        local_40 = HashedString("uCubemapFace");
        this_02->SetShaderConstInt1(&local_40, arg5);
        local_40 = HashedString("uLerpValue");
        this_02->SetShaderConstFloat1(&local_40, arg6);
        renderContext.DrawPrimitives(*((local_a8 + 24)), 5, 0, 4);
        ((local_a8 + 24))->~DrawCallState();
    }

} // namespace jag::graphics
