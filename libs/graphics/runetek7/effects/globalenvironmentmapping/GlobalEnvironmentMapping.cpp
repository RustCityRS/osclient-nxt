// libs/graphics/runetek7/effects/globalenvironmentmapping/GlobalEnvironmentMapping.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "GlobalEnvironmentMapping.h"

namespace jag::graphics {
    // 0x100d4ba10, 4 bytes, __const
    GlobalEnvironmentMapping::SPECULAR_HORIZON_OCCLUSION_SCALE_DEFAULT = 1066192077;

    // 0x100d4ba14, 4 bytes, __const
    float GlobalEnvironmentMapping::ENVIRONMENT_MAP_IRRADIANCE_SCALE_DEFAULT = 2.75f;

    // 0x100f44a70, 16 bytes, __data
    GlobalEnvironmentMapping::VertPosUV::m_VertexAttribNames = {"aPos", "aTexCoord"};

    // 0x103bc0760, 80 bytes, __common; set at startup by ___cxx_global_var_init.178
    render::VertexElementDesc GlobalEnvironmentMapping::VertPosUV::m_VertexElemDescs[2] = {
        /* [0] */ VertexElementDesc(0, "aPos", 2, 0, 0, 0),
        /* [1] */ VertexElementDesc(0, "aTexCoord", 1, 0, 5, 0),
    };

    // 0x10092d5b0, 352 bytes, base-object constructor, placed by class name and debug map
    // GlobalEnvironmentMapping::GlobalEnvironmentMapping(RT7Core&)
    void GlobalEnvironmentMapping::GlobalEnvironmentMapping(RT7Core* param_1) {
        _func_decltype_nullptr* p_Var1;

        new (this) ShaderEffect(param_1);
        field_0 = &PTR__GlobalEnvironmentMapping_100f19d40;
        new (&field_32) ClipPlaneShaderConsts();
        field_48 = 0;
        field_56 = 0;
        new (field_64, (_func_decltype_nullptr*)param_1) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_80, (_func_decltype_nullptr*)param_1) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_96, (_func_decltype_nullptr*)param_1) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        field_112 = 4294967295;
        field_116 = 0;
        field_117 = '\0';
        new (&field_128, 0.125) math::Vector4T<float>();
        new (&field_144, (float*)&SPECULAR_HORIZON_OCCLUSION_SCALE_DEFAULT) math::Transitionable<float>();
        p_Var1 = (_func_decltype_nullptr*)&ENVIRONMENT_MAP_IRRADIANCE_SCALE_DEFAULT;
        new (&field_176, (float*)&ENVIRONMENT_MAP_IRRADIANCE_SCALE_DEFAULT) math::Transitionable<float>();
        new (field_208, p_Var1) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_224) render::VertexDeclaration();
        new (&field_320) render::VertexBuffer();
        new (field_400) render::InputAssemblerState();
    }

    // 0x10092d710: the linker folded this into GlobalEnvironmentMapping::ShaderConsts::ShaderConsts(), which has identical code
    ClipPlaneShaderConsts::ClipPlaneShaderConsts();

    // 0x10092d720, 16 bytes, complete-object constructor, placed by class name and debug map
    // GlobalEnvironmentMapping::GlobalEnvironmentMapping(RT7Core&): jumps straight to the base-object constructor

    // 0x10092d730, 208 bytes, base-object destructor, placed by class name and debug map
    // GlobalEnvironmentMapping::~GlobalEnvironmentMapping()
    void GlobalEnvironmentMapping::~GlobalEnvironmentMapping() {
        NpcUID* extraout_RDX;
        NpcUID* in_RSI;

        field_0 = &PTR__GlobalEnvironmentMapping_100f19d40;
        DestroyRenderingResources(this);
        field_400->~InputAssemblerState();
        (&field_320)->~VertexBuffer();
        (&field_224)->~VertexDeclaration();
        field_208->~shared_ptr();
        field_96->~shared_ptr();
        field_80->~shared_ptr();
        field_64->~shared_ptr();
        eastl::destruct<oldscape::highlight::NpcUID*>((eastl*)this, in_RSI, extraout_RDX);
    }

    // 0x10092d800, 16 bytes, complete-object destructor, placed by class name and debug map
    // GlobalEnvironmentMapping::~GlobalEnvironmentMapping(): jumps straight to the base-object destructor

    // 0x10092d810, 32 bytes, deleting destructor, placed by class name and debug map
    // GlobalEnvironmentMapping::~GlobalEnvironmentMapping()
    void GlobalEnvironmentMapping::~GlobalEnvironmentMapping() {
        ~GlobalEnvironmentMapping(this);
        operator_delete(this);
    }

    // 0x10092d830, 64 bytes, placed by class name and debug map
    // GlobalEnvironmentMapping::Initialise()
    undefined8 GlobalEnvironmentMapping::Initialise() {
        uint uVar1;
        undefined8 uVar2;

        uVar1 = field_16->GetPSTextureSlotManager();
        uVar1 = ShaderResourceSlotManager::RegisterSlotID(uVar1);
        field_112 = uVar1;
        if (uVar1 == 4294967295) {
            uVar2 = 0;
        } else {
            uVar2 = (*(code*)field_0[9])(this);
        }
        return uVar2;
    }

    // 0x10092d870, 192 bytes, placed by class name and debug map
    // GlobalEnvironmentMapping::SetShaderConstants(render::DrawCallState&, render::RenderContext&, Shader&) const
    void GlobalEnvironmentMapping::SetShaderConstants(DrawCallState* param_1, RenderContext* param_2, Shader* param_3) {
        uint uVar1;
        int iVar2;
        ShaderProgram* this_00;
        Texture* pTVar3;
        RenderPipelineState* this_01;
        HashedString* pHVar4;

        this_00 = (ShaderProgram*)param_3->GetProgram();
        pTVar3 = (Texture*)GetCurrentTexture(this, true);
        if (pTVar3 == (Texture*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("currentTexture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "globalenvironmentmapping/GlobalEnvironmentMapping.cpp",
                      40, (char*)0);
        }
        this_01 = (RenderPipelineState*)param_1->GetRenderPipelineState();
        uVar1 = field_112;
        pHVar4 = (HashedString*)graphics::operator*((graphics*)20);
        iVar2 = this_00->GetConstIndex(pHVar4);
        this_01->SetPSTextureSamplerPair(uVar1, pTVar3, iVar2, 0, true);
        pHVar4 = (HashedString*)graphics::operator*((graphics*)53);
        this_00->SetShaderConstVector4(pHVar4, (Vector4T*)&field_32);
    }

    // 0x10092d930, 208 bytes, placed by class name and debug map
    // GlobalEnvironmentMapping::GetCurrentTexture(bool) const
    undefined8 GlobalEnvironmentMapping::GetCurrentTexture(bool param_1) {
        bool bVar1;
        char cVar2;
        undefined8 uVar3;
        RenderTargets* pRVar4;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* this_00;
        undefined8* puVar5;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;
        undefined1* this_02;

        this_01 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)field_208;
        bVar1 = this_01->operator_cast_to_bool();
        if (bVar1) {
        LAB_10092d953:
            uVar3 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_01);
        } else {
            if ((!param_1) || (field_56 <= field_48)) {
                bVar1 = operator!=((shared_ptr*)field_80, (_func_decltype_nullptr*)0);
                if (bVar1) {
                    uVar3 = field_80->end();
                    return uVar3;
                }
            }
            if (field_117 == '\0') {
                this_01 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)field_80;
                bVar1 = this_01->operator_cast_to_bool();
                if (bVar1)
                    goto LAB_10092d953;
            }
            this_02 = field_64;
            bVar1 = this_02->operator_cast_to_bool();
            if (bVar1) {
                pRVar4 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                    (shared_ptr<render::RenderTargets>*)this_02);
                cVar2 = pRVar4->HasColourTargets();
                if (cVar2 != '\0') {
                    pRVar4 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                        (shared_ptr<render::RenderTargets>*)this_02);
                    this_00 = (vector<render::Texture*,
                                      eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                                  pRVar4->GetColourTargetTextures();
                    puVar5 = (undefined8*)eastl::vector<
                        render::Texture*,
                        eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](this_00,
                                                                                                               0);
                    return *puVar5;
                }
            }
            uVar3 = 0;
        }
        return uVar3;
    }

    // 0x10092da00, 176 bytes, placed by class name and debug map
    // GlobalEnvironmentMapping::SetTexture(shared_ptr<render::TextureCube> const&, unsigned long long, unsigned long long)
    void GlobalEnvironmentMapping::SetTexture(shared_ptr* param_1, ulonglong param_2, ulonglong param_3) {
        undefined1* this_00;
        bool bVar1;

        if (param_2 == 0) {
            shared_ptr<render::TextureCube>::operator=((shared_ptr<render::TextureCube>*)field_80, param_1);
            shared_ptr<render::TextureCube>::reset();
            field_48 = 0;
            field_56 = 0;
        } else {
            this_00 = field_96;
            bVar1 = this_00->operator_cast_to_bool();
            if (bVar1) {
                shared_ptr<render::TextureCube>::operator=((shared_ptr<render::TextureCube>*)field_80,
                                                           (shared_ptr*)this_00);
            }
            shared_ptr<render::TextureCube>::operator=((shared_ptr<render::TextureCube>*)this_00, param_1);
            field_48 = param_3;
            field_56 = param_2 + param_3;
            field_117 = '\0';
        }
        bVar1 = field_80->operator_cast_to_bool();
        if (!bVar1) {
            bVar1 = field_96->operator_cast_to_bool();
            if (!bVar1) {
                ClearTextures(this);
            }
        }
    }

    // 0x10092db30, 320 bytes, placed by class name and debug map
    // GlobalEnvironmentMapping::ClearTextures()
    void GlobalEnvironmentMapping::ClearTextures() {
        undefined1* this_00;
        int iVar1;
        undefined4 uVar2;
        RenderContext* this_01;
        RenderTargets* pRVar3;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* pvVar4;
        undefined8* puVar5;
        int* piVar6;
        long lVar7;
        RenderContext* this_02;
        int iVar8;
        undefined1 local_58[32];
        GlobalEnvironmentMapping* local_38;

        this_01 = (RenderContext*)GetRenderContext();
        this_00 = field_64;
        local_58._24_8_ = &field_128;
        iVar8 = 0;
        local_38 = this;
        do {
            pRVar3 = (RenderTargets*)this_00->end();
            this_01->SetRenderTargets(pRVar3);
            pRVar3 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)this_00);
            uVar2 = render::GetCubeMapFace(iVar8);
            pRVar3->SetTargetCubeMapFace(0, uVar2);
            pRVar3 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)this_00);
            pvVar4 =
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                    pRVar3->GetColourTargetTextures();
            puVar5 = (undefined8*)
                eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                              eastl::allocator>>::operator[](pvVar4, 0);
            piVar6 = (int*)(*puVar5)->second();
            iVar1 = *piVar6;
            pRVar3 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)this_00);
            pvVar4 =
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                    pRVar3->GetColourTargetTextures();
            puVar5 = (undefined8*)
                eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                              eastl::allocator>>::operator[](pvVar4, 0);
            lVar7 = (*puVar5)->second();
            new (local_58) render::Viewport(0, 0, iVar1, *(int*)(lVar7 + 4), 0.0, 1.0);
            this_02 = this_01;
            this_01->SetViewports(local_58, 1);
            lVar7 = this_02->Instance();
            this_01->SetBlendState((BlendState*)(lVar7 + 1524));
            this_01->ClearRenderTargets(local_58._24_8_, 1);
            iVar8 = iVar8 + 1;
        } while (iVar8 != 6);
        local_38->field_116 = 1;
    }

    // 0x10092dc70, 192 bytes, placed by class name and debug map
    // GlobalEnvironmentMapping::SetTextureOverride(shared_ptr<render::TextureCube> const&, unsigned long long)
    void GlobalEnvironmentMapping::SetTextureOverride(shared_ptr* param_1, ulonglong param_2) {
        uint uVar1;
        Mixer* this_00;
        float fVar2;
        float fVar3;

        shared_ptr<render::TextureCube>::operator=((shared_ptr<render::TextureCube>*)field_208, param_1);
        this_00 = (Mixer*)GetCurrentTexture(this, true);
        if (this_00 == (Mixer*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("currentTexture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "globalenvironmentmapping/GlobalEnvironmentMapping.cpp",
                      79, (char*)0);
        }
        uVar1 = this_00->GetStreamCountLastMix();
        fVar2 = (float)(&field_144, param_2)->GetValue();
        fVar3 = (float)(&field_176, param_2)->GetValue();
        (&field_32, (float)uVar1, 8192.0, fVar2, fVar3)->Set();
    }

    // 0x10092dd30, 64 bytes, placed by class name and debug map
    // GlobalEnvironmentMapping::DestroyTextures()
    void GlobalEnvironmentMapping::DestroyTextures() {
        RenderTargetsManager* this_00;

        this_00 = (RenderTargetsManager*)field_16->GetRenderTargetsManager();
        this_00->Unregister(field_64);
        shared_ptr<render::TextureCube>::reset();
        shared_ptr<render::TextureCube>::reset();
    }

    // 0x10092dd70, 592 bytes, placed by class name and debug map
    // GlobalEnvironmentMapping::CreateRenderingResources()
    byte GlobalEnvironmentMapping::CreateRenderingResources() {
        bool bVar1;
        byte bVar2;
        byte bVar3;
        MapArea* this_00;
        long lVar4;
        undefined8 uVar5;
        void* pvVar6;
        Desc* this_01;
        undefined1 local_138[64];
        undefined1 local_f8[20];
        undefined1 auStack_e4[12];
        undefined8 local_d8;
        undefined1 auStack_d0[16];
        undefined1 auStack_c0[8];
        undefined1 local_b8[64];
        undefined1 local_78[56];
        char cStack_40;
        undefined6 uStack_3e;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_38[16];

        this_01 = (Desc*)local_78;
        render::Texture::Desc::Desc(this_01);
        local_78._0_4_ = 128;
        local_78._4_4_ = 128;
        this_00 = (MapArea*)this_01->Instance();
        lVar4 = this_00->GetOrigin();
        local_78._12_4_ = 8 - (uint)(*(char*)(lVar4 + 147) == '\0');
        local_78[32] = 1;
        uVar5 = field_16->GetRenderTargetsManager();
        local_f8._12_4_ = local_78._12_4_;
        local_f8._8_4_ = (float)local_78._8_4_;
        local_d8 = CONCAT71(local_78._33_7_, local_78[32]);
        auStack_c0 = (undefined1[8])CONCAT62(uStack_3e, CONCAT11(1, cStack_40));
        auStack_d0._8_8_ = local_78._48_8_;
        auStack_d0._0_8_ = local_78._40_8_;
        local_f8._16_4_ = local_78._16_4_;
        auStack_e4._0_4_ = local_78._20_4_;
        auStack_e4._4_8_ = local_78._24_8_;
        local_f8._0_8_ = local_78._0_8_;
        new (local_b8) render::Texture::Desc();
        new (local_138) render::Texture::Desc();
        local_38->Register(uVar5, "GlobalEnvironmentMapping", 34067, local_f8, 1, local_138, 1, 1);
        shared_ptr<render::RenderTargets>::operator=((shared_ptr<render::RenderTargets>*)field_64,
                                                     (shared_ptr*)local_38);
        local_38->~shared_ptr();
        bVar1 = operator!=((shared_ptr*)field_64, (_func_decltype_nullptr*)0);
        new (local_f8) math::ColourHSL(-1.0, 1.0, 0.0);
        new ((local_f8 + 12)) math::Point<float>(0.0, 1.0);
        new (auStack_e4) math::ColourHSL(1.0, 1.0, 0.0);
        new (&local_d8) math::Point<float>(1.0, 1.0);
        new (auStack_d0) math::ColourHSL(-1.0, -1.0, 0.0);
        new ((auStack_d0 + 12)) math::Point<float>(0.0, 0.0);
        new ((auStack_c0 + 4)) math::ColourHSL(1.0, -1.0, 0.0);
        new ((local_b8 + 8)) math::Point<float>(1.0, 0.0);
        pvVar6 = (void*)local_f8->data();
        bVar2 = (&field_320, 80, 0, pvVar6)->Create();
        bVar3 = render::VertexDeclaration::Create((VertexElementDesc*)&field_224, 4357621600, (void*)2, 0);
        field_116 = 0;
        field_117 = '\0';
        return bVar3 & bVar1 & bVar2;
    }

    // 0x10092dfd0, 64 bytes, placed by class name and debug map
    // GlobalEnvironmentMapping::DestroyRenderingResources()
    void GlobalEnvironmentMapping::DestroyRenderingResources() {
        DestroyTextures(this);
        (&field_320)->Destroy();
        (&field_224)->Destroy();
        field_400->Destroy();
    }

    // 0x10092e010, 608 bytes, placed by class name and debug map
    // GlobalEnvironmentMapping::MainLogic(unsigned long long, EffectManager&)
    void GlobalEnvironmentMapping::MainLogic(ulonglong param_1, EffectManager* param_2) {
        undefined1* this_00;
        undefined1* this_01;
        ulong uVar1;
        ulong uVar2;
        char cVar3;
        bool bVar4;
        undefined4 uVar5;
        uint uVar6;
        RenderContext* pRVar7;
        RenderTargets* pRVar8;
        Texture* pTVar9;
        Texture* pTVar10;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* this_02;
        undefined8* puVar11;
        Mixer* this_03;
        RT7Core* this_04;
        int iVar12;
        float fVar13;
        float fVar14;

        if (field_116 == '\0') {
            ClearTextures(this);
        }
        cVar3 = param_2->IsEnabled();
        if (cVar3 != '\0') {
            uVar1 = field_56;
            if ((uVar1 == 0) || (param_1 < uVar1)) {
                if (field_48 < uVar1) {
                    bVar4 = operator!=((shared_ptr*)field_80, (_func_decltype_nullptr*)0);
                    if (bVar4) {
                        this_00 = field_96;
                        this_04 = (RT7Core*)this_00;
                        bVar4 = operator!=((shared_ptr*)this_00, (_func_decltype_nullptr*)0);
                        if (bVar4) {
                            uVar1 = field_48;
                            uVar2 = field_56;
                            pRVar7 = (RenderContext*)this_04->GetRenderContext();
                            this_01 = field_64;
                            iVar12 = 0;
                            do {
                                pRVar8 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                                    (shared_ptr<render::RenderTargets>*)this_01);
                                uVar5 = render::GetCubeMapFace(iVar12);
                                pRVar8->SetTargetCubeMapFace(0, uVar5);
                                pRVar8 = (RenderTargets*)this_01->end();
                                pTVar9 = (Texture*)field_80->end();
                                pTVar10 = (Texture*)this_00->end();
                                RenderBlendedQuadToFace(this, pRVar7, pRVar8, pTVar9, pTVar10, iVar12,
                                                        (float)(param_1 - uVar1) / (float)(uVar2 - uVar1));
                                iVar12 = iVar12 + 1;
                            } while (iVar12 != 6);
                            pRVar8 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                                (shared_ptr<render::RenderTargets>*)this_01);
                            this_02 =
                                (vector<render::Texture*,
                                        eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                                    pRVar8->GetColourTargetTextures();
                            puVar11 = (undefined8*)
                                eastl::vector<render::Texture*,
                                              eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                            eastl::allocator>>::operator[](this_02, 0);
                            (*puVar11)->GenerateMipMaps();
                            field_117 = '\x01';
                        }
                    }
                }
            } else {
                field_48 = 0;
                field_56 = 0;
                shared_ptr<render::TextureCube>::operator=((shared_ptr<render::TextureCube>*)field_80,
                                                           (shared_ptr*)field_96);
                shared_ptr<render::TextureCube>::reset();
            }
        }
        bVar4 = (bool)param_2->IsEnabled(94);
        this_03 = (Mixer*)GetCurrentTexture(this, bVar4);
        if (this_03 == (Mixer*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("currentTexture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "globalenvironmentmapping/GlobalEnvironmentMapping.cpp",
                      200, (char*)0);
        }
        uVar6 = this_03->GetStreamCountLastMix();
        fVar13 = (float)(&field_144, param_1)->GetValue();
        fVar14 = (float)(&field_176, param_1)->GetValue();
        (&field_32, (float)uVar6, 8192.0, fVar13, fVar14)->Set();
    }

    // 0x10092e270, 768 bytes, placed by class name and debug map
    // GlobalEnvironmentMapping::RenderBlendedQuadToFace(render::RenderContext&, render::RenderTargets*, render::Texture const*, render::Texture const*, int, float)
    void GlobalEnvironmentMapping::RenderBlendedQuadToFace(RenderContext* param_1, RenderTargets* param_2,
                                                           Texture* param_3, Texture* param_4, int param_5,
                                                           float param_6) {
        int iVar1;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* pvVar2;
        undefined8* puVar3;
        int* piVar4;
        long lVar5;
        ShaderManager* pSVar6;
        undefined8 uVar7;
        shared_ptr<Shader>* this_00;
        Shader* this_01;
        ShaderProgram* this_02;
        Layout* this_03;
        VertexDeclaration* pVVar8;
        Viewport* pVVar9;
        OutputMergerState* this_04;
        RenderPipelineState* pRVar10;
        DrawCallState* this_05;
        undefined1 local_a8[24];
        DrawCallState local_90;
        Texture* local_60;
        Texture* local_58;
        RenderContext* local_50;
        int local_48;
        float local_44;
        HashedString local_40;

        local_60 = param_3;
        local_50 = param_1;
        local_48 = param_5;
        local_44 = param_6;
        if (param_3 == (Texture*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("srcTextureA",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "globalenvironmentmapping/GlobalEnvironmentMapping.cpp",
                      219, (char*)0);
        }
        local_58 = param_4;
        if (param_4 == (Texture*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("srcTextureB",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "globalenvironmentmapping/GlobalEnvironmentMapping.cpp",
                      220, (char*)0);
        }
        pvVar2 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                     param_2->GetColourTargetTextures();
        puVar3 = (undefined8*)
            eastl::vector<render::Texture*,
                          eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar2,
                                                                                                                 0);
        piVar4 = (int*)(*puVar3)->second();
        iVar1 = *piVar4;
        pvVar2 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                     param_2->GetColourTargetTextures();
        puVar3 = (undefined8*)
            eastl::vector<render::Texture*,
                          eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar2,
                                                                                                                 0);
        lVar5 = (*puVar3)->second();
        new (local_a8) render::Viewport(0, 0, iVar1, *(int*)(lVar5 + 4), 0.0, 1.0);
        pSVar6 = (ShaderManager*)field_16->GetShaderManager();
        uVar7 = field_16->GetEffectManager();
        new ((local_a8 + 24)) EffectList();
        this_00 =
            (shared_ptr<Shader>*)pSVar6->GetShader(23, uVar7, (EffectList*)(local_a8 + 24), &field_224, 0, 4294967295);
        this_01 = (Shader*)shared_ptr<Shader>::operator->(this_00);
        this_02 = (ShaderProgram*)this_01->GetProgram();
        this_05 = (DrawCallState*)(local_a8 + 24);
        render::DrawCallState::DrawCallState(this_05);
        this_03 = (Layout*)this_05->GetRenderPipelineState();
        lVar5 = this_05->Instance();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::Layout::
            SetHeapSize(this_03, lVar5 + 1080);
        pVVar8 = (VertexDeclaration*)this_02->second();
        (field_400, pVVar8, (VertexBuffer*)&field_320)->SetVertexStreamData();
        ((local_a8 + 24))->SetInputAssemblerState(field_400);
        pVVar9 = (Viewport*)((local_a8 + 24))->GetOutputMergerState();
        render::OutputMergerState::SetViewports(pVVar9, (uint)local_a8);
        this_04 = (OutputMergerState*)((local_a8 + 24))->GetOutputMergerState();
        this_04->SetRenderTargets(param_2);
        pRVar10 = (RenderPipelineState*)((local_a8 + 24))->GetRenderPipelineState();
        pRVar10->SetShaderProgram(this_02);
        new (&local_40) HashedString("sTextureCubeA");
        iVar1 = this_02->GetConstIndex(&local_40);
        pRVar10 = (RenderPipelineState*)((local_a8 + 24))->GetRenderPipelineState();
        pRVar10->SetPSTextureSamplerPair(0, local_60, iVar1, 0, false);
        new (&local_40) HashedString("sTextureCubeB");
        iVar1 = this_02->GetConstIndex(&local_40);
        pRVar10 = (RenderPipelineState*)((local_a8 + 24))->GetRenderPipelineState();
        pRVar10->SetPSTextureSamplerPair(1, local_58, iVar1, 0, false);
        new (&local_40) HashedString("uCubemapFace");
        this_02->SetShaderConstInt1(&local_40, local_48);
        new (&local_40) HashedString("uLerpValue");
        this_02->SetShaderConstFloat1(&local_40, local_44);
        local_50->DrawPrimitives(local_a8 + 24, 5, 0, 4);
        ((local_a8 + 24))->~DrawCallState();
    }

    // 0x10094cfc0, 96 bytes, placed by the data it initialises
    // ___cxx_global_var_init.178
    void ___cxx_global_var_init_178() {
        new (&GlobalEnvironmentMapping::VertPosUV::m_VertexElemDescs) render::VertexElementDesc(0, "aPos", 2, 0, 0, 0);
        new (&DAT_103bc0788) render::VertexElementDesc(0, "aTexCoord", 1, 0, 5, 0);
    }

} // namespace jag::graphics
