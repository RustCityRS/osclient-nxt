// libs/graphics/postprocess/effects/ColourGradingBloomEffect.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.postprocess

#include "ColourGradingBloomEffect.h"

namespace jag::postprocess {
    // 0x100f450c0, 48 bytes, __data
    ColourGradingBloomEffectConfig::m_blurMethodNames__ = {0, 0, 14779048, 1, 1, 0, 14779057, 1, 2, 0, 14779064, 1};

    // 0x103bc1690, 16 bytes, __common; set at startup by ___cxx_global_var_init.43
    StringEnum ColourGradingBloomEffectConfig::m_blurMethodNames =
        StringEnum((StringEnumEntry*)&ColourGradingBloomEffectConfig::m_blurMethodNames__, 3);

    // 0x100009d00: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::second(), which has identical code
    ColourGradingBloomEffect::GetConfig();

    // 0x1009ae680, 96 bytes, placed by debug map only (low confidence)
    // ColourGradingBloomEffectConfig::DoTransition(unsigned long long)
    void ColourGradingBloomEffectConfig::DoTransition(ulonglong param_1) {
        float fVar1;

        (field_16, param_1)->DoTransition();
        fVar1 = (float)(&field_176, param_1)->GetValue();
        field_168 = fVar1;
        fVar1 = (float)(&field_216, param_1)->GetValue();
        field_208 = fVar1;
        fVar1 = (float)(&field_272, param_1)->GetValue();
        field_268 = fVar1;
    }

    // 0x1009ae6e0, 304 bytes, base-object constructor, placed by class name and debug map
    // ColourGradingBloomEffect::ColourGradingBloomEffect(render::RenderTargetsManager&, AvgLuminanceFilter const*, int, int)
    void ColourGradingBloomEffect::ColourGradingBloomEffect(RenderTargetsManager* param_1, AvgLuminanceFilter* param_2,
                                                            int param_3, int param_4) {
        undefined4 uVar1;
        _func_decltype_nullptr* p_Var2;
        hash local_40[8];
        equal_to local_38[8];

        p_Var2 = (_func_decltype_nullptr*)(ulong)(uint)param_3;
        new (this) PostProcessEffect(param_3, param_4);
        field_0 = &PTR__ColourGradingBloomEffect_100f1c3b0;
        field_20 = '\0';
        field_21 = '\0';
        field_22 = 0;
        new (field_24) ColourGradingBloomEffectConfig();
        *(undefined4*)(field_24 + 320) = 0;
        field_352 = param_1;
        new (field_360, p_Var2) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_376, p_Var2) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_392, p_Var2) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_408, local_40, local_38)
            eastl::fixed_hash_map<ColourGradingBloomEffectConfig, shared_ptr<render::ShaderProgram>, 16ul, 17ul, true,
                                  eastl::hash<ColourGradingBloomEffectConfig>,
                                  eastl::equal_to<ColourGradingBloomEffectConfig>, false, eastl::allocator>();
        new (field_6512) render::InputAssemblerState();
        if (param_2 != (AvgLuminanceFilter*)0) {
            uVar1 = param_2->GetValue();
            *(undefined4*)(field_24 + 320) = uVar1;
        }
    }

    // 0x1009ae850, 16 bytes, complete-object constructor, placed by class name
    // ColourGradingBloomEffect::ColourGradingBloomEffect(render::RenderTargetsManager&, AvgLuminanceFilter const*, int, int): jumps straight to the base-object constructor

    // 0x1009ae860, 208 bytes, base-object destructor, placed by class name
    // ColourGradingBloomEffect::~ColourGradingBloomEffect()
    void ColourGradingBloomEffect::~ColourGradingBloomEffect() {
        field_0 = &PTR__ColourGradingBloomEffect_100f1c3b0;
        Destroy(this);
        field_6512->~InputAssemblerState();
        (&field_408)->~fixed_hash_map();
        field_392->~shared_ptr();
        field_376->~shared_ptr();
        field_360->~shared_ptr();
        field_24->~ColourGradingBloomEffectConfig();
        ~AutoSingleton();
    }

    // 0x1009ae930, 16 bytes, complete-object destructor, placed by class name
    // ColourGradingBloomEffect::~ColourGradingBloomEffect(): jumps straight to the base-object destructor

    // 0x1009ae940, 32 bytes, deleting destructor, placed by class name
    // ColourGradingBloomEffect::~ColourGradingBloomEffect()
    void ColourGradingBloomEffect::~ColourGradingBloomEffect() {
        ~ColourGradingBloomEffect(this);
        operator_delete(this);
    }

    // 0x1009ae960, 384 bytes, placed by class name
    // ColourGradingBloomEffect::Init()
    undefined8 ColourGradingBloomEffect::Init() {
        undefined1 uVar1;
        undefined1 uVar2;
        undefined1 uVar3;
        undefined4 uVar4;
        char cVar5;
        undefined4 uVar6;
        VertexElementDesc* pVVar7;
        shared_ptr<render::ShaderProgram>* this_00;
        Singleton<render::ShaderProgramManager>* this_01;
        PostProcessVS local_90[24];
        ColourGradingBloomComposite local_78[24];
        shared_ptr local_60;
        char* local_50;
        char* local_48;
        hash_map<ColourGradingBloomEffectConfig, shared_ptr<render::ShaderProgram>,
                 eastl::hash<ColourGradingBloomEffectConfig>, eastl::equal_to<ColourGradingBloomEffectConfig>,
                 eastl::fixed_hashtable_allocator<18ul, 344ul, 16ul, 8ul, 0ul, true, eastl::allocator>, false>*
            local_40;
        uint local_34;

        this_01 = (Singleton<render::ShaderProgramManager>*)&field_408;
        local_40 =
            (hash_map<ColourGradingBloomEffectConfig, shared_ptr<render::ShaderProgram>,
                      eastl::hash<ColourGradingBloomEffectConfig>, eastl::equal_to<ColourGradingBloomEffectConfig>,
                      eastl::fixed_hashtable_allocator<18ul, 344ul, 16ul, 8ul, 0ul, true, eastl::allocator>, false>*)
                this_01;
        cVar5 = this_01->empty();
        if (cVar5 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_colourGradingBloomShader.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "effects/ColourGradingBloomEffect.cpp",
                      50, (char*)0);
        }
        local_50 = (char*)this_01->Instance();
        local_90->BuildVSFragment();
        local_48 = (char*)local_90->c_str();
        uVar4 = *(undefined4*)(field_24 + 316);
        local_34 = (uint)(byte)field_24[312];
        uVar1 = field_24[260];
        uVar2 = field_24[12];
        uVar3 = field_24[16];
        uVar6 = ((field_24 + 16))->CountColourMappings();
        local_78->BuildFSFragment(uVar4, local_34, uVar1, uVar2, uVar3, uVar6, field_24[17],
                                  *(undefined4*)(field_24 + 320));
        pVVar7 = (VertexElementDesc*)local_78->c_str();
        local_60.RegisterFromSourceString(local_50, local_48, pVVar7, 62757712, '\x02');
        this_00 = (shared_ptr<render::ShaderProgram>*)eastl::hash_map<
            ColourGradingBloomEffectConfig, shared_ptr<render::ShaderProgram>,
            eastl::hash<ColourGradingBloomEffectConfig>, eastl::equal_to<ColourGradingBloomEffectConfig>,
            eastl::fixed_hashtable_allocator<18ul, 344ul, 16ul, 8ul, 0ul, true, eastl::allocator>,
            false>::operator[](local_40, (ColourGradingBloomEffectConfig*)field_24);
        shared_ptr<render::ShaderProgram>::operator=(this_00, &local_60);
        local_60.~shared_ptr();
        local_78->~basic_string();
        local_90->~basic_string();
        CreateRenderingResources(this);
        return 1;
    }

    // 0x1009aed70, 32 bytes, placed by class name
    // ColourGradingBloomEffect::CreateRenderingResources()
    undefined1 ColourGradingBloomEffect::CreateRenderingResources() {
        CreateIdentityLUT(this, (bool)field_24[17]);
        return 1;
    }

    // 0x1009aed90, 208 bytes, placed by class name
    // ColourGradingBloomEffect::Destroy()
    void ColourGradingBloomEffect::Destroy() {
        long lVar1;
        ShaderProgramManager* this_00;
        bool bVar2;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        Layout* this_01;
        eastl local_50[16];
        hashtable_iterator_base local_40[16];

        DestroyRenderTargets(this);
        eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                         eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                         eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        bVar2 = eastl::operator!=(local_50, local_40, extraout_RDX);
        if (bVar2) {
            do {
                this_01 = (Layout*)local_50;
                lVar1 = local_50->HeapBeginPtr();
                this_00 = (ShaderProgramManager*)this_01->Instance();
                this_00->Unregister((shared_ptr*)(lVar1 + 320));
                eastl::hashtable_iterator<
                    eastl::pair<ColourGradingBloomEffectConfig_const, shared_ptr<render::ShaderProgram>>, false,
                    false>::operator++((hashtable_iterator<eastl::pair<ColourGradingBloomEffectConfig_const,
                                                                       shared_ptr<render::ShaderProgram>>,
                                                           false, false>*)local_50);
                bVar2 = eastl::operator!=(local_50, local_40, extraout_RDX_00);
            } while (bVar2);
        }
        (&field_408)->clear();
        field_6512->Destroy();
        DestroyRenderingResources(this);
    }

    // 0x1009aee60, 64 bytes, placed by class name
    // ColourGradingBloomEffect::DestroyRenderTargets()
    void ColourGradingBloomEffect::DestroyRenderTargets() {
        (field_352, (shared_ptr*)field_376)->Unregister();
        (field_352, (shared_ptr*)field_360)->Unregister();
    }

    // 0x1009aeef0, 112 bytes, placed by class name
    // ColourGradingBloomEffect::DestroyRenderingResources()
    void ColourGradingBloomEffect::DestroyRenderingResources() {
        shared_ptr local_28;

        field_6512->Destroy();
        new (&local_28) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        shared_ptr<render::Texture>::operator=((shared_ptr<render::Texture>*)field_392, &local_28);
        local_28.~shared_ptr();
        ((field_24 + 16))->Reset();
    }

    // 0x1009aef60, 768 bytes, placed by class name
    // ColourGradingBloomEffect::CreateIdentityLUT(bool)
    void ColourGradingBloomEffect::CreateIdentityLUT(bool param_1) {
        shared_ptr<render::Texture>* this_00;
        ulong uVar2;
        char* pcVar3;
        undefined1* puVar4;
        uchar* puVar5;
        Texture3D* this_01;
        Texture2D* this_02;
        int iVar6;
        uint uVar7;
        ulong uVar8;
        undefined7 in_register_00000031;
        int iVar9;
        int iVar10;
        char cVar11;
        Array<unsigned char, eastl::allocator> local_f0[24];
        undefined1 local_d8[88];
        ulong local_80;
        ulong local_78;
        ulong local_70;
        ulong local_68;
        shared_ptr<render::Texture>* local_60;
        int local_54;
        int local_50;
        int local_4c;
        shared_ptr local_48;
        undefined4 local_34;

        local_34 = (undefined4)CONCAT71(in_register_00000031, param_1);
        puVar4 = field_392;
        uVar8 = 0;
        if (operator!=((shared_ptr*)puVar4, (_func_decltype_nullptr*)0)) {
            new (local_d8) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
            shared_ptr<render::Texture>::operator=((shared_ptr<render::Texture>*)puVar4, (shared_ptr*)local_d8);
            local_d8->~shared_ptr();
        }
        local_60 = (shared_ptr<render::Texture>*)puVar4;
        Array<unsigned char, eastl::allocator>::Array(local_f0, 16384);
        do {
            local_4c = (int)uVar8;
            local_70 = (ulong)(uint)(local_4c * 16);
            local_50 = local_4c * 17;
            local_4c = local_4c << 8;
            uVar2 = 0;
            local_68 = uVar8;
            do {
                iVar9 = (int)uVar2;
                local_54 = iVar9 * 17;
                iVar10 = iVar9 * 256 + (int)local_70;
                local_80 = (ulong)(uint)(iVar9 * 16 + local_4c);
                cVar11 = '\0';
                iVar9 = 0;
                local_78 = uVar2;
                do {
                    iVar6 = iVar10;
                    if ((char)local_34 != '\0') {
                        iVar6 = (int)local_80;
                    }
                    uVar7 = (iVar6 + iVar9) * 4;
                    pcVar3 = (char*)Array<unsigned char, eastl::allocator>::operator[](local_f0, (ulong)uVar7);
                    *pcVar3 = cVar11;
                    puVar4 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](local_f0,
                                                                                             (long)(int)(uVar7 | 1));
                    *puVar4 = (char)local_54;
                    puVar4 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](local_f0,
                                                                                             (long)(int)(uVar7 | 2));
                    *puVar4 = (char)local_50;
                    puVar4 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](local_f0,
                                                                                             (long)(int)(uVar7 | 3));
                    *puVar4 = 255;
                    iVar9 = iVar9 + 1;
                    cVar11 = cVar11 + '\x11';
                } while (iVar9 != 16);
                uVar7 = (int)local_78 + 1;
                uVar2 = (ulong)uVar7;
            } while (uVar7 != 16);
            uVar7 = (int)local_68 + 1;
            uVar8 = (ulong)uVar7;
        } while (uVar7 != 16);
        puVar5 = (uchar*)local_f0->data();
        new ((local_d8 + 64)) render::ResourceDataT<unsigned char const>(puVar5, 0, 0, false);
        new (local_d8) render::Texture::Desc();
        this_00 = local_60;
        local_d8._12_4_ = 7;
        if ((char)local_34 == '\0') {
            local_d8._0_4_ = 256;
            local_d8._4_4_ = 16;
            local_d8[32] = 0;
            make_shared<render::Texture2D, char const(&)[31]>((jag*)&local_48, "IdentityLUT2D");
            this_02 = (Texture2D*)shared_ptr<render::Texture2D>::operator->((shared_ptr<render::Texture2D>*)&local_48);
            this_02->Create(local_d8, (ResourceDataT*)(local_d8 + 64), 0);
            shared_ptr<render::Texture>::operator=(this_00, &local_48);
            local_48.~shared_ptr();
        } else {
            local_d8._0_4_ = 16;
            local_d8._4_4_ = 16;
            local_d8._8_4_ = 16;
            local_d8[32] = 0;
            make_shared<render::Texture3D, char const(&)[32]>((jag*)&local_48, "IdentityLUT3D");
            this_01 = (Texture3D*)shared_ptr<render::Texture3D>::operator->((shared_ptr<render::Texture3D>*)&local_48);
            this_01->Create(local_d8, (ResourceDataT*)(local_d8 + 64));
            shared_ptr<render::Texture>::operator=(this_00, &local_48);
            local_48.~shared_ptr();
        }
        ((local_d8 + 64))->~ResourceDataT();
        local_f0->~Array();
    }

    // 0x1009af380, 2432 bytes, placed by class name
    // ColourGradingBloomEffect::Render(render::RenderContext&, render::RenderTargets const*, render::Texture const*, render::Texture const*, render::Viewport const&, graphics::ViewRenderTargets*, PostProcessManager&)
    void ColourGradingBloomEffect::Render(RenderContext* param_1, RenderTargets* param_2, Texture* param_3,
                                          Texture* param_4, Viewport* param_5, ViewRenderTargets* param_6,
                                          PostProcessManager* param_7) {
        array<ColourCorrectionConfig::Remapping, 3ul>* this_00;
        undefined1* puVar1;
        Transitionable<float> TVar2;
        undefined* puVar3;
        ShaderProgram* this_01;
        ColourGradingBloomEffect* pCVar4;
        bool bVar5;
        char cVar6;
        int iVar7;
        uint uVar8;
        Transitionable<float>* this_02;
        long lVar9;
        shared_ptr* psVar10;
        RenderTargets* pRVar11;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* pvVar12;
        long* plVar13;
        Array<shared_ptr<render::RenderTargets>, eastl::allocator>* this_03;
        shared_ptr<render::RenderTargets>* this_04;
        undefined8* puVar14;
        Desc* pDVar15;
        undefined8 uVar16;
        undefined8 uVar17;
        KawaseBlurFilter* pKVar18;
        DualFilteringBlurFilter* pDVar19;
        GaussianBlurFilter* this_05;
        RenderTargets* this_06;
        compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>* this_07;
        RenderPipelineState* pRVar20;
        Layout* this_08;
        Viewport* pVVar21;
        OutputMergerState* this_09;
        shared_ptr<render::ShaderProgram>* this_10;
        VertexDeclaration* pVVar22;
        GeometryBatch* this_11;
        VertexBuffer* pVVar23;
        ulonglong uVar24;
        HashedString* pHVar25;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_12;
        Texture* pTVar26;
        RenderToTextureHelper* this_13;
        ColourGradingBloomEffect* pCVar27;
        DrawCallState* pDVar28;
        TextureSamplerStateTracker* this_14;
        ulong uVar29;
        Texture* this_15;
        ulong uVar30;
        float fVar31;
        BrightPassFilter* pBVar34;
        undefined1 auVar32[16];
        HashedString HVar33;
        TextureSamplerStateTracker local_b8;
        DrawCallState local_98;
        float local_64;
        RenderTargets* local_60;
        RenderContext* local_58;
        shared_ptr<render::RenderTargets>* local_50;
        Texture* local_48;
        ShaderProgram* local_40;
        ColourGradingBloomEffect* local_38;

        local_58 = param_1;
        local_40 = (ShaderProgram*)param_5;
        this_02 = (Transitionable<float>*)param_7->second();
        lVar9 = param_7->GetAvgLuminanceFilter();
        local_60 = param_2;
        local_48 = param_3;
        local_38 = this;
        if (lVar9 == 0) {
            pTVar26 = (Texture*)0;
        } else {
            if ((field_24[260] == '\0') && (field_24[312] == '\0')) {
                pTVar26 = (Texture*)0;
            } else {
                TVar2 = this_02[192];
                if (param_6 == (ViewRenderTargets*)0) {
                    plVar13 = (long*)param_7->GetAvgLuminanceFilter();
                    if (TVar2 == (Transitionable<float>)0) {
                        pTVar26 = (Texture*)(**(code**)(*plVar13 + 56))(plVar13);
                    } else {
                        pTVar26 = (Texture*)(**(code**)(*plVar13 + 64))();
                    }
                } else {
                    puVar14 = (undefined8*)PTR_VIEWRT_LUMINANCE_ADAPTED_100ee5578;
                    if (TVar2 == (Transitionable<float>)0) {
                        puVar14 = (undefined8*)PTR_VIEWRT_LUMINANCE_AVERAGE_100ee5580;
                    }
                    puVar3 = PTR_VIEWRT_LUMINANCE_ADAPTED_100ee5578;
                    if (TVar2 == (Transitionable<float>)0) {
                        puVar3 = PTR_VIEWRT_LUMINANCE_AVERAGE_100ee5580;
                    }
                    HVar33.field_8 = *(undefined8*)(puVar3 + 8);
                    HVar33.field_0 = (char*)*puVar14;
                    psVar10 = (shared_ptr*)param_6->Get(HVar33);
                    bVar5 = shared_ptr::operator_cast_to_bool(psVar10);
                    if (!bVar5) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("luminanceRT",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "postprocess/effects/ColourGradingBloomEffect.cpp",
                                  184, (char*)0);
                    }
                    pRVar11 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                        (shared_ptr<render::RenderTargets>*)psVar10);
                    pvVar12 = (vector<render::Texture*,
                                      eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                                  pRVar11->GetColourTargetTextures();
                    plVar13 = (long*)eastl::vector<
                        render::Texture*,
                        eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar12,
                                                                                                               0);
                    pTVar26 = (Texture*)*plVar13;
                    if (pTVar26 == (Texture*)0) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("pAvgLuminanceTex",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "postprocess/effects/ColourGradingBloomEffect.cpp",
                                  187, (char*)0);
                    }
                }
            }
            if ((pTVar26 != (Texture*)0) && (local_38->field_24[260] != '\0')) {
                this_03 =
                    (Array<shared_ptr<render::RenderTargets>, eastl::allocator>*)param_7->GetDownSampledSourceRTs();
                pCVar27 = local_38;
                this_15 = local_48;
                if ((long)*(int*)(local_38->field_24 + 304) != 18446744073709551615) {
                    psVar10 = (shared_ptr*)Array<shared_ptr<render::RenderTargets>, eastl::allocator>::operator[](
                        this_03, (long)*(int*)(local_38->field_24 + 304));
                    bVar5 = shared_ptr::operator_cast_to_bool(psVar10);
                    pCVar27 = local_38;
                    if (!bVar5) {
                        return;
                    }
                    this_04 = (shared_ptr<render::RenderTargets>*)
                        Array<shared_ptr<render::RenderTargets>, eastl::allocator>::operator[](
                            this_03, (long)*(int*)(local_38->field_24 + 304));
                    pRVar11 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(this_04);
                    pvVar12 = (vector<render::Texture*,
                                      eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                                  pRVar11->GetColourTargetTextures();
                    puVar14 = (undefined8*)eastl::vector<
                        render::Texture*,
                        eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar12,
                                                                                                               0);
                    this_15 = (Texture*)*puVar14;
                }
                DestroyRenderTargets(pCVar27);
                pDVar15 = (Desc*)this_15->second();
                cVar6 = CreateRenderTargets(pCVar27, pDVar15);
                if (cVar6 != '\0') {
                    uVar16 = param_7->GetVertexDataBuffer();
                    pCVar27 = local_38;
                    local_50 = (shared_ptr<render::RenderTargets>*)local_38->field_360;
                    uVar17 = shared_ptr<render::RenderTargets>::operator*(local_50);
                    pBVar34._0_4_->Filter(*(undefined4*)(pCVar27->field_24 + 168), uVar16, local_58, uVar17, this_15,
                                          pTVar26, *(undefined4*)(pCVar27->field_24 + 316), this_02,
                                          *(undefined4*)(pCVar27->field_24 + 320));
                    if (*(int*)pCVar27->field_24 == 2) {
                        pDVar19 = (DualFilteringBlurFilter*)param_7->GetDualFilteringBlurFilter();
                        uVar16 = shared_ptr<render::RenderTargets>::operator*(
                            (shared_ptr<render::RenderTargets>*)local_38->field_376);
                        pRVar11 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(local_50);
                        pvVar12 = (vector<render::Texture*,
                                          eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                                      pRVar11->GetColourTargetTextures();
                        puVar14 = (undefined8*)eastl::vector<
                            render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                            eastl::allocator>>::operator[](pvVar12, 0);
                        pDVar19->BlurMultiPass(local_58, uVar16, *puVar14);
                    } else if (*(int*)pCVar27->field_24 == 1) {
                        pKVar18 = (KawaseBlurFilter*)param_7->GetKawaseBlurFilter();
                        uVar16 = shared_ptr<render::RenderTargets>::operator*(
                            (shared_ptr<render::RenderTargets>*)local_38->field_376);
                        pRVar11 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(local_50);
                        pvVar12 = (vector<render::Texture*,
                                          eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                                      pRVar11->GetColourTargetTextures();
                        puVar14 = (undefined8*)eastl::vector<
                            render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                            eastl::allocator>>::operator[](pvVar12, 0);
                        pKVar18->BlurMultiPass(local_58, uVar16, *puVar14);
                    } else {
                        this_05 = (GaussianBlurFilter*)param_7->GetGaussianBlurFilter();
                        pCVar27 = local_38;
                        pRVar11 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator*(
                            (shared_ptr<render::RenderTargets>*)local_38->field_376);
                        this_06 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(local_50);
                        pvVar12 = (vector<render::Texture*,
                                          eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                                      this_06->GetColourTargetTextures();
                        puVar14 = (undefined8*)eastl::vector<
                            render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                            eastl::allocator>>::operator[](pvVar12, 0);
                        this_05->BlurMultiPass13Tap(local_58, pRVar11, (Texture*)*puVar14,
                                                    *(float*)(pCVar27->field_24 + 248),
                                                    *(int*)(pCVar27->field_24 + 308), 0);
                    }
                }
            }
        }
        pDVar28 = &local_98;
        render::DrawCallState::DrawCallState(pDVar28);
        this_07 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                      pDVar28->GetRenderPipelineState();
        auVar32 = pDVar28->Instance();
        eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
            this_07, (EntityHighlight**)(auVar32._0_8_ + 1524), auVar32._8_8_);
        pDVar28 = &local_98;
        pRVar20 = (RenderPipelineState*)pDVar28->GetRenderPipelineState();
        lVar9 = pDVar28->Instance();
        pRVar20->SetRasteriserState((RasteriserState*)(lVar9 + 1200));
        pDVar28 = &local_98;
        this_08 = (Layout*)pDVar28->GetRenderPipelineState();
        lVar9 = pDVar28->Instance();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::Layout::
            SetHeapSize(this_08, lVar9 + 1080);
        pVVar21 = (Viewport*)local_98.GetOutputMergerState();
        render::OutputMergerState::SetViewports(pVVar21, (uint)local_40);
        this_09 = (OutputMergerState*)local_98.GetOutputMergerState();
        this_09->SetRenderTargets(local_60);
        this_10 = (shared_ptr<render::ShaderProgram>*)eastl::hash_map<
            ColourGradingBloomEffectConfig, shared_ptr<render::ShaderProgram>,
            eastl::hash<ColourGradingBloomEffectConfig>, eastl::equal_to<ColourGradingBloomEffectConfig>,
            eastl::fixed_hashtable_allocator<18ul, 344ul, 16ul, 8ul, 0ul, true, eastl::allocator>, false>::
        operator[](
            (hash_map<ColourGradingBloomEffectConfig, shared_ptr<render::ShaderProgram>,
                      eastl::hash<ColourGradingBloomEffectConfig>, eastl::equal_to<ColourGradingBloomEffectConfig>,
                      eastl::fixed_hashtable_allocator<18ul, 344ul, 16ul, 8ul, 0ul, true, eastl::allocator>,
                      false>*)&local_38->field_408,
            (ColourGradingBloomEffectConfig*)local_38->field_24);
        local_40 = (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator*(this_10);
        pRVar20 = (RenderPipelineState*)local_98.GetRenderPipelineState();
        this_01 = local_40;
        pRVar20->SetShaderProgram(local_40);
        puVar1 = local_38->field_6512;
        pVVar22 = (VertexDeclaration*)this_01->second();
        this_11 = (GeometryBatch*)param_7->GetRenderToTexture();
        pVVar23 = (VertexBuffer*)this_11->GetBoneIDMap();
        puVar1->SetVertexStreamData(pVVar22, pVVar23);
        local_98.SetInputAssemblerState(puVar1);
        uVar24 = FrameTime::GetCurrentTimeMS();
        pHVar25 = (HashedString*)postprocess::operator*((postprocess*)5);
        fVar31 = (float)this_02->GetValue(uVar24);
        local_40->SetShaderConstFloat1(pHVar25, fVar31);
        pHVar25 = (HashedString*)postprocess::operator*((postprocess*)6);
        fVar31 = (float)(this_02 + 32)->GetValue(uVar24);
        local_40->SetShaderConstFloat1(pHVar25, fVar31);
        pHVar25 = (HashedString*)postprocess::operator*((postprocess*)8);
        fVar31 = (float)(this_02 + 64)->GetValue(uVar24);
        local_40->SetShaderConstFloat1(pHVar25, fVar31);
        pHVar25 = (HashedString*)postprocess::operator*((postprocess*)9);
        fVar31 = (float)(this_02 + 96)->GetValue(uVar24);
        local_40->SetShaderConstFloat1(pHVar25, fVar31);
        pHVar25 = (HashedString*)postprocess::operator*((postprocess*)10);
        fVar31 = (float)(this_02 + 128)->GetValue(uVar24);
        local_40->SetShaderConstFloat1(pHVar25, fVar31);
        pHVar25 = (HashedString*)postprocess::operator*((postprocess*)26);
        local_40->SetShaderConstFloat1(pHVar25, *(float*)(local_38->field_24 + 268));
        pHVar25 = (HashedString*)postprocess::operator*((postprocess*)0);
        iVar7 = local_40->GetConstIndex(pHVar25);
        pRVar20 = (RenderPipelineState*)local_98.GetRenderPipelineState();
        pRVar20->SetPSTextureSamplerPair(0, local_48, iVar7, 0, false);
        if ((pTVar26 != (Texture*)0) && (local_38->field_24[312] != '\0')) {
            pHVar25 = (HashedString*)postprocess::operator*((postprocess*)&DAT_00000001);
            iVar7 = local_40->GetConstIndex(pHVar25);
            pRVar20 = (RenderPipelineState*)local_98.GetRenderPipelineState();
            pRVar20->SetPSTextureSamplerPair(1, pTVar26, iVar7, 0, false);
        }
        lVar9 = param_7->GetAvgLuminanceFilter();
        pCVar27 = local_38;
        if ((lVar9 != 0) && (local_38->field_24[260] != '\0')) {
            puVar1 = local_38->field_376;
            bVar5 = puVar1->operator_cast_to_bool();
            if (bVar5) {
                pRVar11 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                    (shared_ptr<render::RenderTargets>*)puVar1);
                pvVar12 = (vector<render::Texture*,
                                  eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                              pRVar11->GetColourTargetTextures();
                puVar14 = (undefined8*)eastl::vector<
                    render::Texture*,
                    eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar12, 0);
                pTVar26 = (Texture*)*puVar14;
                pHVar25 = (HashedString*)postprocess::operator*((postprocess*)27);
                iVar7 = local_40->GetConstIndex(pHVar25);
                pRVar20 = (RenderPipelineState*)local_98.GetRenderPipelineState();
                pRVar20->SetPSTextureSamplerPair(2, pTVar26, iVar7, 0, false);
                this_14 = &local_b8;
                render::TextureSamplerStateTracker::TextureSamplerStateTracker(this_14, pTVar26);
                lVar9 = this_14->Instance();
                (*(code*)pTVar26->field_0[3])(pTVar26, lVar9 + 208, 0);
                local_b8.~TextureSamplerStateTracker();
            }
        }
        pCVar4 = local_38;
        if (pCVar27->field_24[16] != '\0') {
            uVar8 = ((local_38->field_24 + 16))->CountColourMappings();
            uVar29 = (ulong)uVar8;
            local_60 = (RenderTargets*)CONCAT44(local_60._4_4_, uVar8);
            if (0 < (int)uVar8) {
                puVar1 = local_38->field_392;
                uVar30 = 0;
                do {
                    psVar10 = (shared_ptr*)std::array<shared_ptr<render::Texture>, 3ul>::operator[](
                        (array<shared_ptr<render::Texture>, 3ul>*)(pCVar4->field_24 + 48), uVar30);
                    bVar5 = operator==(psVar10, (_func_decltype_nullptr*)0);
                    if ((bVar5) || (local_38->field_22 != '\0')) {
                        shared_ptr<render::Texture>::operator=((shared_ptr<render::Texture>*)psVar10,
                                                               (shared_ptr*)puVar1);
                    }
                    uVar30 = uVar30 + 1;
                } while (uVar29 != uVar30);
            }
            this_00 = (array<ColourCorrectionConfig::Remapping, 3ul>*)(local_38->field_24 + 20);
            if ((int)local_60 < 1) {
                fVar31 = 0.0;
            } else {
                fVar31 = 0.0;
                uVar30 = 0;
                do {
                    local_48 = (Texture*)CONCAT44(local_48._4_4_, fVar31);
                    lVar9 = std::array<ColourCorrectionConfig::Remapping, 3ul>::operator[](this_00, uVar30);
                    fVar31 = local_48._0_4_ + *(float*)(lVar9 + 4);
                    uVar30 = uVar30 + 1;
                } while (uVar29 != uVar30);
            }
            local_48 = (Texture*)CONCAT44(local_48._4_4_, fVar31);
            if (1.000001 < fVar31) {
                /* WARNING: Subroutine does not return */
                LogAssert("totalWeight <= 1.000001f",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                          "effects/ColourGradingBloomEffect.cpp",
                          317, "Total colour remap weightings should never be over 1!");
            }
            local_48 = (Texture*)CONCAT44(local_48._4_4_, 1.0 - fVar31);
            lVar9 = std::array<ColourCorrectionConfig::Remapping, 3ul>::operator[](this_00, 0);
            local_50 = (shared_ptr<render::RenderTargets>*)CONCAT44(local_50._4_4_, *(undefined4*)(lVar9 + 4));
            lVar9 = std::array<ColourCorrectionConfig::Remapping, 3ul>::operator[](this_00, 1);
            local_64 = *(float*)(lVar9 + 4);
            lVar9 = std::array<ColourCorrectionConfig::Remapping, 3ul>::operator[](this_00, 2);
            new (&local_b8) ImVec4(local_48._0_4_, local_50._0_4_, local_64, *(float*)(lVar9 + 4));
            pHVar25 = (HashedString*)postprocess::operator*((postprocess*)32);
            local_40->SetShaderConstVector4(pHVar25, (Vector4T*)&local_b8);
            if (0 < (int)local_60) {
                uVar30 = 0;
                do {
                    pHVar25 = (HashedString*)std::array<render::ShaderProgramVariable, 48ul>::operator[](uVar30 + 33);
                    iVar7 = local_40->GetConstIndex(pHVar25);
                    pRVar20 = (RenderPipelineState*)local_98.GetRenderPipelineState();
                    this_12 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                        std::array<shared_ptr<render::Texture>, 3ul>::operator[](
                            (array<shared_ptr<render::Texture>, 3ul>*)(pCVar4->field_24 + 48), uVar30);
                    pTVar26 =
                        (Texture*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_12);
                    pRVar20->SetPSTextureSamplerPair((int)uVar30 + 3, pTVar26, iVar7, 0, false);
                    uVar30 = uVar30 + 1;
                } while (uVar29 != uVar30);
            }
        }
        this_13 = (RenderToTextureHelper*)param_7->GetRenderToTexture();
        this_13->RenderQuad(local_58, &local_98);
        lVar9 = param_7->GetAvgLuminanceFilter();
        if ((lVar9 != 0) && (local_38->field_24[260] != '\0')) {
            puVar1 = local_38->field_360;
            bVar5 = puVar1->operator_cast_to_bool();
            if (bVar5) {
                pRVar11 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                    (shared_ptr<render::RenderTargets>*)puVar1);
                pRVar11->Invalidate();
                (local_38->field_352, (shared_ptr*)puVar1)->Unregister();
            }
        }
        local_98.~DrawCallState();
    }

    // 0x1009afdf0, 400 bytes, placed by class name
    // ColourGradingBloomEffect::CreateRenderTargets(render::Texture::Desc const&)
    bool ColourGradingBloomEffect::CreateRenderTargets(Desc* param_1) {
        undefined1* this_00;
        undefined1* this_01;
        RenderTargetsManager* pRVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        undefined8 uVar8;
        bool bVar9;
        undefined8* puVar10;
        array<render::Texture::Desc, 2ul> local_100[128];
        undefined1 local_80[80];

        std::array<render::Texture::Desc, 2ul>::array(local_100);
        puVar10 = (undefined8*)std::array<render::Texture::Desc, 2ul>::operator[]((ulong)local_100);
        uVar2 = *(undefined8*)&param_1->field_8;
        uVar3 = *(undefined8*)&param_1->field_16;
        uVar4 = *(undefined8*)&param_1->field_24;
        uVar5 = *(undefined8*)&param_1->field_32;
        uVar6 = *(undefined8*)&param_1->field_40;
        uVar7 = param_1->field_48;
        uVar8 = *(undefined8*)&param_1->field_56;
        *puVar10 = *(undefined8*)param_1;
        puVar10[1] = uVar2;
        puVar10[2] = uVar3;
        puVar10[3] = uVar4;
        puVar10[4] = uVar5;
        puVar10[5] = uVar6;
        puVar10[6] = uVar7;
        puVar10[7] = uVar8;
        *(int*)((long)puVar10 + 12) = param_1->field_12;
        *(undefined4*)(puVar10 + 3) = 0;
        *(undefined1*)(puVar10 + 4) = 0;
        pRVar1 = field_352;
        new (local_80) render::Texture::Desc();
        ((local_80 + 64))->Register(pRVar1, "BloomBrightPassRT", 3553, local_100, 1, local_80, 0, 1);
        this_00 = field_360;
        shared_ptr<render::RenderTargets>::operator=((shared_ptr<render::RenderTargets>*)this_00,
                                                     (shared_ptr*)(local_80 + 64));
        ((local_80 + 64))->~shared_ptr();
        pRVar1 = field_352;
        new (local_80) render::Texture::Desc();
        ((local_80 + 64))->Register(pRVar1, "BloomBrightPassBlurRT", 3553, local_100, 1, local_80, 0, 1);
        this_01 = field_376;
        shared_ptr<render::RenderTargets>::operator=((shared_ptr<render::RenderTargets>*)this_01,
                                                     (shared_ptr*)(local_80 + 64));
        ((local_80 + 64))->~shared_ptr();
        bVar9 = this_00->operator_cast_to_bool();
        if (bVar9) {
            bVar9 = this_01->operator_cast_to_bool();
            if (bVar9)
                goto LAB_1009aff3c;
        }
        DestroyRenderTargets(this);
    LAB_1009aff3c:
        bVar9 = this_00->operator_cast_to_bool();
        if (bVar9) {
            bVar9 = this_01->operator_cast_to_bool();
        } else {
            bVar9 = false;
        }
        return bVar9;
    }

    // 0x1009b1330, 928 bytes, placed by class name
    // ColourGradingBloomEffect::RenderDebug(render::Viewport const&)
    void ColourGradingBloomEffect::RenderDebug(Viewport* param_1) {
        uint uVar1;
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                    eastl::allocator>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>* this_00;
        ColourGradingBloomEffect* this_01;
        Viewport* pVVar2;
        bool bVar3;
        int iVar4;
        RenderTargets* this_02;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* this_03;
        undefined8* puVar5;
        uint* puVar6;
        long lVar7;
        long* plVar8;
        vector* pvVar9;
        float* pfVar10;
        Texture* pTVar11;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_04;
        char* pcVar12;
        ulong uVar13;
        type* ptVar14;
        float fVar15;
        Point<float> local_c0[8];
        Point<float> local_b8[8];
        undefined1 local_b0[16];
        Point<float> local_a0[12];
        float local_94;
        ColourGradingBloomEffect* local_90;
        Viewport* local_88;
        array<ColourCorrectionConfig::Remapping, 3ul>* local_80;
        float local_78;
        float local_74;
        ImVec4 local_70[56];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_74 = 20.0 / (float)param_1->field_12;
        local_90 = this;
        local_88 = param_1;
        if (field_20 != '\0') {
            bVar3 = field_376->operator_cast_to_bool();
            if (bVar3) {
                this_02 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                    (shared_ptr<render::RenderTargets>*)field_376);
                this_03 = (vector<render::Texture*,
                                  eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                              this_02->GetColourTargetTextures();
                ptVar14 = (type*)0;
                puVar5 = (undefined8*)eastl::vector<
                    render::Texture*,
                    eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](this_03, 0);
                this_00 =
                    (compressed_pair_imp<
                        eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>*)*puVar5;
                if (this_00 ==
                    (compressed_pair_imp<
                        eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>*)0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("pBrightPassTex",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                              "postprocess/effects/ColourGradingBloomEffect.cpp",
                              351, (char*)0);
                }
                math::Point<float>::Point(local_a0, 0.0, local_74);
                puVar6 = (uint*)eastl::compressed_pair_imp<
                    eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
                    eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>::second(this_00);
                pVVar2 = local_88;
                uVar1 = *puVar6;
                iVar4 = local_88->field_8;
                lVar7 = eastl::compressed_pair_imp<
                    eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
                    eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>::second(this_00);
                local_78 = (float)*(uint*)(lVar7 + 4) / (float)pVVar2->field_12;
                plVar8 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                if (plVar8 != (long*)0) {
                    local_80 = (array<ColourCorrectionConfig::Remapping, 3ul>*)CONCAT44(local_80._4_4_,
                                                                                        (float)uVar1 / (float)iVar4);
                    pvVar9 = local_a0->SSOBeginPtr(ptVar14);
                    local_94 = *(float*)pvVar9;
                    pfVar10 = (float*)local_a0->y();
                    ImVec4::ImVec4(local_70, local_94, *pfVar10, local_80._0_4_, local_78);
                    math::Point<float>::Point(local_c0, 0.0, 0.0);
                    math::Point<float>::Point(local_b8, 1.0, 1.0);
                    new ((local_b0 + 8)) math::ColourStorage8888<math::ARGB8StorageLayout>(255, 255, 255, 255);
                    iVar4 = ((local_b0 + 8))->GetX();
                    new (local_b0) oldscape::sidebars::SideBarData(iVar4, 0);
                    (**(code**)(*plVar8 + 112))(plVar8, this_00, local_70, local_c0, local_b8, 0, 0, 0,
                                                (SideBarData*)local_b0);
                }
                local_74 = local_74 + local_78;
                this = local_90;
            }
        }
        this_01 = local_90;
        if (field_21 != '\0') {
            pTVar11 = (Texture*)local_90->field_392->end();
            if (pTVar11 != (Texture*)0) {
                new (local_70) math::Point<float>(0.0, local_74);
                fVar15 =
                    (float)RenderDebugLUT(this_01, pTVar11, (Vector2T*)local_70, "Identity Look-Up Table", local_88);
                local_74 = local_74 + fVar15;
            }
            local_80 = (array<ColourCorrectionConfig::Remapping, 3ul>*)(this_01->field_24 + 20);
            uVar13 = 0;
            do {
                this_04 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                    std::array<shared_ptr<render::Texture>, 3ul>::operator[](
                        (array<shared_ptr<render::Texture>, 3ul>*)(this_01->field_24 + 48), uVar13);
                pTVar11 =
                    (Texture*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_04);
                if (pTVar11 != (Texture*)0) {
                    math::Point<float>::Point(local_a0, 0.0, local_74);
                    lVar7 = std::array<ColourCorrectionConfig::Remapping, 3ul>::operator[](local_80, uVar13);
                    local_78 = *(float*)(lVar7 + 4) * 100.0;
                    new (local_70) eastl::fixed_string<char, 16, true, eastl::allocator>();
                    eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 16ul, 1ul, 0ul, true,
                                                                            eastl::allocator>>::sprintf((char*)local_70,
                                                                                                        (double)
                                                                                                            local_78,
                                                                                                        "%.5f%%");
                    pcVar12 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    fVar15 = (float)RenderDebugLUT(local_90, pTVar11, (Vector2T*)local_a0, pcVar12, local_88);
                    local_74 = local_74 + fVar15;
                    /* WARNING: Subroutine does not return */
                    local_70->~fixed_string();
                }
                uVar13 = uVar13 + 1;
            } while (uVar13 != 3);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1009b16d0, 752 bytes, placed by class name
    // ColourGradingBloomEffect::RenderDebugLUT(render::Texture const*, math::Vector2T<float> const&, char const*, render::Viewport const&)
    float ColourGradingBloomEffect::RenderDebugLUT(Texture* param_1, Vector2T* param_2, char* param_3,
                                                   Viewport* param_4) {
        int iVar1;
        uint* puVar2;
        long lVar3;
        long* plVar4;
        vector* pvVar5;
        float* pfVar6;
        ImVec4 local_80[32];
        undefined1 local_58[16];
        undefined1 local_48[8];
        undefined1 local_40[12];
        float local_34;

        puVar2 = (uint*)param_1->second();
        local_34 = (float)*puVar2 / (float)param_4->field_8;
        lVar3 = param_1->second();
        local_40._8_4_ = (float)*(uint*)(lVar3 + 4) / (float)param_4->field_12;
        if (field_24[17] == '\0') {
            plVar4 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar4 != (long*)0) {
                pvVar5 = param_2->SSOBeginPtr(param_1);
                local_40._4_4_ = *(undefined4*)pvVar5;
                pfVar6 = (float*)param_2->y();
                ImVec4::ImVec4(local_80, (float)local_40._4_4_, *pfVar6, local_34, (float)local_40._8_4_);
                new (local_48) math::Point<float>(0.0, 0.0);
                new (local_58) math::Point<float>(1.0, 1.0);
                new (local_40) math::ColourStorage8888<math::ARGB8StorageLayout>(255, 255, 255, 255);
                iVar1 = local_40->GetX();
                new ((local_58 + 8)) oldscape::sidebars::SideBarData(iVar1, 0);
                (**(code**)(*plVar4 + 112))(plVar4, param_1, local_80, local_48, (Point<float>*)local_58, 0, 0, 0,
                                            (SideBarData*)(local_58 + 8));
            }
        } else {
            lVar3 = param_1->second();
            local_34 = local_34 * (float)*(uint*)(lVar3 + 8);
            plVar4 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar4 != (long*)0) {
                pvVar5 = param_2->SSOBeginPtr(param_1);
                local_40._4_4_ = *(undefined4*)pvVar5;
                pfVar6 = (float*)param_2->y();
                ImVec4::ImVec4(local_80, (float)local_40._4_4_, *pfVar6, local_34, (float)local_40._8_4_);
                new (local_58) math::ColourStorage8888<math::ARGB8StorageLayout>(255, 255, 255, 255);
                iVar1 = local_58->GetX();
                new (local_48) oldscape::sidebars::SideBarData(iVar1, 0);
                (**(code**)(*plVar4 + 128))(plVar4, param_1, local_80, 0, 0, (SideBarData*)local_48);
            }
        }
        plVar4 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
        if (plVar4 != (long*)0) {
            new (local_48) math::Point<float>(local_34, (float)local_40._8_4_ * 0.5 + *(float*)(param_2 + 4));
            new (local_58) eastl::allocator("EASTL basic_string");
            new (local_80) eastl::string(param_3, local_58);
            new (local_40) math::ColourStorage8888<math::ARGB8StorageLayout>(255, 255, 255, 255);
            iVar1 = local_40->GetX();
            new ((local_58 + 8)) oldscape::sidebars::SideBarData(iVar1, 0);
            (**(code**)(*plVar4 + 144))(plVar4, local_48, local_80, local_58 + 8);
            local_80->~basic_string();
        }
        return (float)local_40._8_4_;
    }

    // 0x1009b19c0, 32 bytes, placed by class name
    // ColourGradingBloomEffect::GetRequirements() const
    byte ColourGradingBloomEffect::GetRequirements() {
        return field_24[312] << 4 | field_24[260];
    }

    // 0x1009b19e0, 480 bytes, placed by class name
    // ColourGradingBloomEffect::SetConfig(ColourGradingBloomEffectConfig const&)
    void ColourGradingBloomEffect::SetConfig(ColourGradingBloomEffectConfig* param_1) {
        undefined1* this_00;
        int iVar2;
        char* pcVar4;
        VertexElementDesc* pVVar5;
        shared_ptr<render::ShaderProgram>* this_01;
        ColourCorrectionConfig* this_02;
        undefined1 local_88[16];
        ColourGradingBloomComposite local_78[24];
        shared_ptr local_60;
        hashtable_iterator_base local_50[24];
        char* local_38;

        eastl::hashtable<
            ColourGradingBloomEffectConfig,
            eastl::pair<ColourGradingBloomEffectConfig_const, shared_ptr<render::ShaderProgram>>,
            eastl::fixed_hashtable_allocator<18ul, 344ul, 16ul, 8ul, 0ul, true, eastl::allocator>,
            eastl::use_first<eastl::pair<ColourGradingBloomEffectConfig_const, shared_ptr<render::ShaderProgram>>>,
            eastl::equal_to<ColourGradingBloomEffectConfig>, eastl::hash<ColourGradingBloomEffectConfig>,
            eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
            true>::find((ColourGradingBloomEffectConfig*)local_88);
        local_50._0_16_ = (&field_408)->end();
        if (!eastl::operator==((eastl*)local_88, local_50, local_50._8_8_))
            goto LAB_1009b1b72;
        this_00 = param_1->field_16;
        this_02 = (ColourCorrectionConfig*)this_00;
        iVar2 = this_00->CountColourMappings();
        if (((((bool)field_24[260] == param_1->field_260) && ((bool)field_24[312] == param_1->field_312)) &&
             ((bool)field_24[12] == param_1->field_12)) &&
            ((*(int*)(field_24 + 316) == param_1->field_316 && (field_24[16] == *this_00)))) {
            this_02 = (ColourCorrectionConfig*)(field_24 + 16);
            if ((this_02->CountColourMappings() != iVar2) || (field_24[17] != param_1->field_16[1]))
                goto LAB_1009b1a9e;
        } else {
        LAB_1009b1a9e:
            local_38 = (char*)this_02->Instance();
            local_50->BuildVSFragment();
            pcVar4 = (char*)local_50->c_str();
            local_78->BuildFSFragment(param_1->field_316, param_1->field_312, param_1->field_260, param_1->field_12,
                                      param_1->field_16[0], iVar2, param_1->field_16[1],
                                      *(undefined4*)(field_24 + 320));
            pVVar5 = (VertexElementDesc*)local_78->c_str();
            local_60.RegisterFromSourceString(local_38, pcVar4, pVVar5, 62757712, '\x02');
            this_01 = (shared_ptr<render::ShaderProgram>*)eastl::hash_map<
                ColourGradingBloomEffectConfig, shared_ptr<render::ShaderProgram>,
                eastl::hash<ColourGradingBloomEffectConfig>, eastl::equal_to<ColourGradingBloomEffectConfig>,
                eastl::fixed_hashtable_allocator<18ul, 344ul, 16ul, 8ul, 0ul, true, eastl::allocator>, false>::
            operator[](
                (hash_map<ColourGradingBloomEffectConfig, shared_ptr<render::ShaderProgram>,
                          eastl::hash<ColourGradingBloomEffectConfig>, eastl::equal_to<ColourGradingBloomEffectConfig>,
                          eastl::fixed_hashtable_allocator<18ul, 344ul, 16ul, 8ul, 0ul, true, eastl::allocator>,
                          false>*)&field_408,
                param_1);
            shared_ptr<render::ShaderProgram>::operator=(this_01, &local_60);
            local_60.~shared_ptr();
            local_78->~basic_string();
            local_50->~basic_string();
        }
        if (field_24[17] != param_1->field_16[1]) {
            CreateIdentityLUT(this, (bool)param_1->field_16[1]);
        }
    LAB_1009b1b72:
        ColourGradingBloomEffectConfig::operator=((ColourGradingBloomEffectConfig*)field_24, param_1);
    }

    // 0x1009be4d0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.43
    void ___cxx_global_var_init_43() {
        new (&ColourGradingBloomEffectConfig::m_blurMethodNames)
            StringEnum((StringEnumEntry*)&ColourGradingBloomEffectConfig::m_blurMethodNames__, 3);
        ___cxa_atexit(StringEnum::~StringEnum, &ColourGradingBloomEffectConfig::m_blurMethodNames, 4294967296);
    }

} // namespace jag::postprocess
