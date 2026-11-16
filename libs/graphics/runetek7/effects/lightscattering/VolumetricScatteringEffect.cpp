// libs/graphics/runetek7/effects/lightscattering/VolumetricScatteringEffect.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "VolumetricScatteringEffect.h"

namespace jag::graphics {
    // 0x100932690, 816 bytes, base-object constructor, placed by class name and debug map
    // VolumetricScatteringEffect::VolumetricScatteringEffect(RT7Core&)
    void VolumetricScatteringEffect::VolumetricScatteringEffect(RT7Core* param_1) {
        RenderToTextureHelper* pRVar2;
        ColourHSL local_40;

        new (this) ShaderEffect(param_1);
        field_0 = &PTR__VolumetricScatteringEffect_100f19e50;
        field_24 = false;
        field_25 = 0;
        field_26 = false;
        field_27 = false;
        field_28 = false;
        field_29 = false;
        field_32 = 32;
        field_36 = true;
        field_37 = '\x01';
        field_40 = 4;
        new (&field_48) math::Matrix44T<float>();
        new (&field_112) math::Matrix44T<float>();
        new (&field_176) math::Vector4T<float>();
        new (&field_192) math::Vector3T<int>();
        field_208 = param_1;
        field_216 = (RenderTargetsManager*)param_1->GetRenderTargetsManager();
        new (field_224, (_func_decltype_nullptr*)param_1)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_240, (_func_decltype_nullptr*)param_1)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_256, (_func_decltype_nullptr*)param_1)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        field_272 = false;
        field_273 = 0;
        new (field_280, (_func_decltype_nullptr*)param_1)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_296, (_func_decltype_nullptr*)param_1)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_312, (_func_decltype_nullptr*)param_1)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_328, (_func_decltype_nullptr*)param_1)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        std::unique_ptr<render::Texture, std::default_delete<render::Texture>>::unique_ptr<true, void>(
            (unique_ptr<render::Texture, std::default_delete<render::Texture>>*)&field_344);
        new (&field_352) render::InputAssemblerState();
        local_40.field_0 = 0.0;
        new (&field_552, &local_40.field_0) math::Transitionable<float>();
        local_40.field_0 = 1.0;
        new (&field_584, &local_40.field_0) math::Transitionable<float>();
        local_40.field_0 = 1.0;
        new (&field_616, &local_40.field_0) math::Transitionable<float>();
        local_40.field_0 = 1.0;
        new (&field_648, &local_40.field_0) math::Transitionable<float>();
        local_40.field_0 = 1.0;
        new (&field_680, &local_40.field_0) math::Transitionable<float>();
        local_40.field_0 = 0.8;
        new (&field_712, &local_40.field_0) math::Transitionable<float>();
        local_40.field_0 = 0.8;
        new (&field_744, &local_40.field_0) math::Transitionable<float>();
        local_40.field_0 = 40.0;
        new (&field_776, &local_40.field_0) math::Transitionable<float>();
        new (&local_40) math::ColourHSL(1.0, 0.7, 0.5);
        new (&field_808, (Vector3T*)&local_40) math::Transitionable<math::Vector3T<float>>();
        new (&local_40) math::ColourHSL(0.025, 0.025, 0.025);
        new (&field_856, (Vector3T*)&local_40) math::Transitionable<math::Vector3T<float>>();
        new (&m_params) VolumetricScatteringParams();
        new (&field_992) math::Vector3T<int>();
        new (&field_1008) math::Vector3T<int>();
        pRVar2 = (RenderToTextureHelper*)param_1->GetRenderToTexture();
        new (&field_1024, pRVar2) postprocess::DepthDownSamplerFilter();
    }

    // 0x100932a10, 16 bytes, complete-object constructor, placed by class name
    // VolumetricScatteringEffect::VolumetricScatteringEffect(RT7Core&): jumps straight to the base-object constructor

    // 0x100932a20, 304 bytes, base-object destructor, placed by class name
    // VolumetricScatteringEffect::~VolumetricScatteringEffect()
    void VolumetricScatteringEffect::~VolumetricScatteringEffect() {
        NpcUID* extraout_RDX;
        NpcUID* in_RSI;

        field_0 = &PTR__VolumetricScatteringEffect_100f19e50;
        DestroyRenderingResources(this);
        (&field_1024)->~DepthDownSamplerFilter();
        (&field_352)->~InputAssemblerState();
        (&field_344)->~unique_ptr();
        field_328->~shared_ptr();
        field_312->~shared_ptr();
        field_296->~shared_ptr();
        field_280->~shared_ptr();
        field_256->~shared_ptr();
        field_240->~shared_ptr();
        field_224->~shared_ptr();
        eastl::destruct<oldscape::highlight::NpcUID*>((eastl*)this, in_RSI, extraout_RDX);
    }

    // 0x100932b60, 16 bytes, complete-object destructor, placed by class name
    // VolumetricScatteringEffect::~VolumetricScatteringEffect(): jumps straight to the base-object destructor

    // 0x100932b70, 32 bytes, deleting destructor, placed by class name
    // VolumetricScatteringEffect::~VolumetricScatteringEffect()
    void VolumetricScatteringEffect::~VolumetricScatteringEffect() {
        ~VolumetricScatteringEffect(this);
        operator_delete(this);
    }

    // 0x100932b90, 16 bytes, placed by class name
    // VolumetricScatteringEffect::Initialise()
    void VolumetricScatteringEffect::Initialise() {
        (*(code*)field_0[9])();
    }

    // 0x100932ba0, 1088 bytes, placed by class name
    // VolumetricScatteringEffect::Update(EffectManager const&, SceneViewData const&)
    void VolumetricScatteringEffect::Update(EffectManager* param_1, SceneViewData* param_2) {
        undefined1* this_00;
        Desc DVar1;
        Desc DVar2;
        EffectManager* pEVar3;
        char cVar4;
        bool bVar5;
        byte bVar6;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_01;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* this_02;
        undefined8* puVar7;
        undefined1(*pauVar8)[64];
        RenderTargets* pRVar9;
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                    eastl::allocator>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>* pcVar10;
        vector<render::Viewport, eastl::fixed_vector_allocator<24ul, 2ul, 4ul, 0ul, true, eastl::allocator>>* this_03;
        long lVar11;
        Matrix44T* pMVar12;
        undefined4* puVar13;
        float* pfVar14;
        vector* pvVar15;
        int iVar16;
        bool bVar17;
        undefined4 uVar18;
        float fVar19;
        undefined1 in_stack_ffffffffffffff18[12];
        ImVec4 aIStack_da[2];
        Matrix44T local_d8;
        undefined8 uStack_a0;
        undefined1 local_98[64];
        undefined8 local_58;
        undefined4 uStack_50;
        float fStack_4c;
        undefined8 local_48;
        undefined4 uStack_40;
        float fStack_3c;
        EffectManager* local_38;

        if (*(long*)&param_2->field_368 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("false",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "lightscattering/VolumetricScatteringEffect.cpp",
                      51, "No valid forward lighting render target required for volumetric rendering");
        }
        UpdateParams(this);
        if (*(long*)&param_2->field_368 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("viewData.m_renderTargets.m_pRenderTargets",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "lightscattering/VolumetricScatteringEffect.cpp",
                      57, (char*)0);
        }
        local_38 = param_1;
        this_01 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true,
                                                             eastl::allocator>>*)(*(RenderTargets**)&param_2->field_368)
                      ->GetColourTargetTextures();
        cVar4 = eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
            this_01);
        if (cVar4 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!viewData.m_renderTargets.m_pRenderTargets->GetColourTargetTextures().empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "lightscattering/VolumetricScatteringEffect.cpp",
                      58, (char*)0);
        }
        this_02 =
            (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                    eastl::allocator>>*)(*(RenderTargets**)&param_2
                                                                                              ->field_368)
                ->GetColourTargetTextures();
        puVar7 = (undefined8*)
            eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                          eastl::allocator>>::operator[](this_02, 0);
        pauVar8 = (undefined1(*)[64])(*puVar7)->second();
        this_00 = field_280;
        bVar5 = operator!=((shared_ptr*)this_00, (_func_decltype_nullptr*)0);
        if (bVar5) {
            pRVar9 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)this_00);
            pcVar10 =
                (compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                             eastl::allocator>>::Layout,
                                     eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>*)
                    pRVar9->GetDepthStencilTargetTexture();
            puVar7 = (undefined8*)eastl::compressed_pair_imp<
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
                eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>::second(pcVar10);
            local_98._0_8_ = *puVar7;
            local_98._8_8_ = puVar7[1];
            local_98._16_8_ = puVar7[2];
            local_98._24_8_ = puVar7[3];
            local_98._32_8_ = puVar7[4];
            local_98._40_8_ = puVar7[5];
            local_98._48_8_ = puVar7[6];
            local_98._56_8_ = puVar7[7];
        } else {
            new (local_98) render::Texture::Desc();
        }
        this_03 =
            (vector<render::Viewport, eastl::fixed_vector_allocator<24ul, 2ul, 4ul, 0ul, true, eastl::allocator>>*)
                param_2->GetStaticChildren();
        lVar11 =
            eastl::vector<render::Viewport, eastl::fixed_vector_allocator<24ul, 2ul, 4ul, 0ul, true,
                                                                          eastl::allocator>>::operator[](this_03, 0);
        if (*(uint*)*pauVar8 < *(uint*)(lVar11 + 8)) {
            /* WARNING: Subroutine does not return */
            LogAssert("(uint)viewport.m_Width <= colourTextureDesc.m_Width",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "lightscattering/VolumetricScatteringEffect.cpp",
                      64, (char*)0);
        }
        if (*(uint*)(*pauVar8 + 4) < *(uint*)(lVar11 + 12)) {
            /* WARNING: Subroutine does not return */
            LogAssert("(uint)viewport.m_Height <= colourTextureDesc.m_Height",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "lightscattering/VolumetricScatteringEffect.cpp",
                      65, (char*)0);
        }
        if ((*(int*)(lVar11 + 8) != local_98._0_4_) || (*(int*)(lVar11 + 12) != local_98._4_4_)) {
            pcVar10 =
                (compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                             eastl::allocator>>::Layout,
                                     eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>,
                                     0>*)(*(RenderTargets**)&param_2->field_368)
                    ->GetDepthStencilTargetTexture();
            puVar7 = (undefined8*)eastl::compressed_pair_imp<
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
                eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>::second(pcVar10);
            DVar1._64_4_ = (int)*puVar7;
            DVar1._0_64_ = *pauVar8;
            DVar2.field_56 = in_stack_ffffffffffffff18[0];
            DVar2._57_3_ = in_stack_ffffffffffffff18._1_3_;
            DVar2.field_60 = in_stack_ffffffffffffff18._4_4_;
            DVar2._64_4_ = in_stack_ffffffffffffff18._8_4_;
            DVar2._0_56_ = *(undefined1(*)[56])(puVar7 + 1);
            cVar4 = CreateRenderTargets(this, DVar1, DVar2, *(uint*)(lVar11 + 8), *(uint*)(lVar11 + 12));
            if (cVar4 == '\0') {
                return;
            }
        }
        pRVar9 =
            (RenderTargets*)shared_ptr<render::RenderTargets>::operator->((shared_ptr<render::RenderTargets>*)this_00);
        pcVar10 =
            (compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                         eastl::allocator>>::Layout,
                                 eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>*)
                pRVar9->GetDepthStencilTargetTexture();
        lVar11 = eastl::compressed_pair_imp<
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>::second(pcVar10);
        pEVar3 = local_38;
        bVar17 = 1 < *(uint*)(lVar11 + 16);
        bVar5 = field_272;
        if (bVar5 != bVar17) {
            field_272 = bVar17;
        }
        cVar4 = local_38->IsEnabled(31);
        iVar16 = 0;
        if (cVar4 == '\0') {
            cVar4 = pEVar3->IsEnabled(32);
            iVar16 = 1;
            if (cVar4 == '\0') {
                cVar4 = pEVar3->IsEnabled(33);
                iVar16 = 2;
                if (cVar4 == '\0') {
                    bVar6 = pEVar3->IsEnabled(34);
                    iVar16 = (uint)bVar6 * 4 + -1;
                }
            }
        }
        if (iVar16 == field_544) {
            if (bVar5 == bVar17)
                goto LAB_100932e6e;
        } else {
            field_544 = iVar16;
        }
        CreateShaders(this);
    LAB_100932e6e:
        pMVar12 = (Matrix44T*)param_2->GetScreen();
        math::Matrix44T<float>::operator=((Matrix44T<float>*)&field_48, pMVar12);
        pMVar12 = (Matrix44T*)param_2->GetImmediateThreadPool();
        math::Matrix44Inverse<float>((Matrix44T*)&field_112, (float*)0, pMVar12);
        puVar7 = (undefined8*)param_2->GetOrigin();
        local_d8._0_8_ = *puVar7;
        local_d8._8_8_ = puVar7[1];
        local_d8._16_8_ = puVar7[2];
        local_d8._24_8_ = puVar7[3];
        local_d8._32_8_ = puVar7[4];
        local_d8._40_8_ = puVar7[5];
        local_d8._48_8_ = puVar7[6];
        uStack_a0 = puVar7[7];
        pMVar12 = &local_d8;
        pMVar12->Invert(0);
        uVar18 = 0;
        fVar19 = 0.0;
        new (&local_48) ImVec4(0.0, 0.0, -1.0, 1.0);
        local_58 = math::operator*((Vector4T*)&local_48, pMVar12);
        uStack_50 = uVar18;
        fStack_4c = fVar19;
        math::Vector4T<float>::operator/=((Vector4T<float>*)(local_98 + 64), fVar19);
        uVar18 = 0;
        fVar19 = 0.0;
        ImVec4::ImVec4(aIStack_da + -14, 0.0, 0.0, 1.0, 1.0);
        local_48 = math::operator*((Vector4T*)(aIStack_da + -14), pMVar12);
        uStack_40 = uVar18;
        fStack_3c = fVar19;
        math::Vector4T<float>::operator/=((Vector4T<float>*)&local_48, fVar19);
        puVar13 = (undefined4*)((local_98 + 64))->second();
        local_38 = (EffectManager*)CONCAT44(local_38._4_4_, *puVar13);
        pfVar14 = (float*)local_48.second();
        fVar19 = *pfVar14;
        (&field_176, fVar19 * local_38._0_4_, local_38._0_4_ - fVar19, fVar19, 1.0 / fVar19)->Set();
        pvVar15 = param_2->SSOBeginPtr(pMVar12);
        (&field_192, (Vector3T*)pvVar15)->SetXYZ();
    }

    // 0x100932fe0, 352 bytes, placed by class name
    // VolumetricScatteringEffect::UpdateParams()
    void VolumetricScatteringEffect::UpdateParams() {
        ulonglong uVar1;
        EffectManager* pEVar2;
        char cVar3;
        ulonglong uVar4;
        float fVar5;
        undefined8 local_30[2];

        uVar1 = FrameTime::GetCurrentTimeMS();
        pEVar2 = (EffectManager*)field_208->GetEffectManager();
        cVar3 = pEVar2->IsEnabled(94);
        uVar4 = 18446744073709551615;
        if (cVar3 != '\0') {
            uVar4 = uVar1;
        }
        fVar5 = (float)(&field_552, uVar4)->GetValue();
        m_params = fVar5;
        fVar5 = (float)(&field_584, uVar4)->GetValue();
        field_916 = fVar5;
        fVar5 = (float)(&field_616, uVar4)->GetValue();
        field_920 = fVar5;
        fVar5 = (float)(&field_648, uVar4)->GetValue();
        field_924 = fVar5;
        fVar5 = (float)(&field_680, uVar4)->GetValue();
        field_928 = fVar5;
        fVar5 = (float)(&field_712, uVar4)->GetValue();
        field_932 = fVar5;
        fVar5 = (float)(&field_744, uVar4)->GetValue();
        field_936 = fVar5;
        fVar5 = (float)(&field_776, uVar4)->GetValue();
        field_940 = fVar5;
        local_30[0] = (&field_808, uVar4)->GetValue();
        (&field_944, (Vector3T*)local_30)->SetXYZ();
        local_30[0] = (&field_856, uVar4)->GetValue();
        (&field_960, (Vector3T*)local_30)->SetXYZ();
    }

    // 0x100933190, 1088 bytes, placed by class name
    // VolumetricScatteringEffect::CreateRenderTargets(render::Texture::Desc, render::Texture::Desc, unsigned int, unsigned int)
    ulong VolumetricScatteringEffect::CreateRenderTargets(Desc param_1, Desc param_2, uint param_3, uint param_4) {
        undefined1* puVar1;
        RenderTargetsManager* pRVar2;
        bool bVar3;
        RenderTargets* pRVar4;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* this_00;
        undefined8* puVar5;
        long lVar6;
        long* plVar7;
        ulong uVar8;
        uint uStack000000000000004c;
        RenderTargetsManager local_118;
        int iStack_d0;
        int iStack_cc;
        undefined4 local_c8;
        int iStack_c4;
        int iStack_c0;
        int iStack_bc;
        undefined1 local_b8;
        undefined3 uStack_b7;
        undefined4 uStack_b4;
        undefined1 uStack_b0;
        undefined7 uStack_af;
        undefined8 local_a8;
        char cStack_a0;
        undefined3 uStack_9f;
        undefined4 uStack_9c;
        Desc local_98;
        shared_ptr* local_50;
        shared_ptr* local_48;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_40[16];

        DestroyRenderTargets(this);
        param_1.field_16 = 1;
        pRVar2 = field_216;
        local_a8 = param_1.field_48;
        cStack_a0 = param_1.field_56;
        uStack_9f = param_1._57_3_;
        uStack_9c = param_1.field_60;
        local_b8 = param_1.field_32;
        uStack_b7 = param_1._33_3_;
        uStack_b4 = param_1.field_36;
        uStack_b0 = param_1.field_40;
        uStack_af = param_1._41_7_;
        local_c8 = 1;
        iStack_c4 = param_1.field_20;
        iStack_c0 = param_1.field_24;
        iStack_bc = param_1.field_28;
        local_118._68_4_ = param_4;
        local_118._64_4_ = param_3;
        iStack_d0 = param_1.field_8;
        iStack_cc = param_1.field_12;
        param_1.field_0 = param_3;
        param_1.field_4 = param_4;
        param_1._64_4_ = param_3;
        uStack000000000000004c = param_4;
        new (&local_98) render::Texture::Desc();
        local_118.Register(pRVar2, "ResolvedRT", 3553, &local_118.field_64, 1, &param_1.field_64, 0, 1);
        puVar1 = field_280;
        shared_ptr<render::RenderTargets>::operator=((shared_ptr<render::RenderTargets>*)puVar1,
                                                     (shared_ptr*)&local_118);
        local_118.~shared_ptr();
        bVar3 = puVar1->operator_cast_to_bool();
        if (bVar3) {
            pRVar4 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)puVar1);
            this_00 =
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                    pRVar4->GetColourTargetTextures();
            puVar5 = (undefined8*)eastl::vector<
                render::Texture*,
                eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](this_00, 0);
            plVar7 = (long*)*puVar5;
            lVar6 = this_00->Instance();
            (**(code**)(*plVar7 + 24))(plVar7, lVar6 + 80, 0);
            pRVar4 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)puVar1);
            plVar7 = (long*)pRVar4->GetDepthStencilTargetTexture();
            lVar6 = pRVar4->Instance();
            (**(code**)(*plVar7 + 24))(plVar7, lVar6 + 80, 0);
            uVar8 = CONCAT71((int7)((ulong)plVar7 >> 8), 1);
            if (field_37 == '\0')
                goto LAB_100933593;
            param_1.field_0 = param_3 >> 1;
            param_1.field_4 = param_4 >> 1;
            pRVar2 = field_216;
            local_a8 = param_1.field_48;
            cStack_a0 = param_1.field_56;
            uStack_9f = param_1._57_3_;
            uStack_9c = param_1.field_60;
            local_b8 = param_1.field_32;
            uStack_b7 = param_1._33_3_;
            uStack_b4 = param_1.field_36;
            uStack_b0 = param_1.field_40;
            uStack_af = param_1._41_7_;
            local_c8 = param_1.field_16;
            iStack_c4 = param_1.field_20;
            iStack_c0 = param_1.field_24;
            iStack_bc = param_1.field_28;
            local_118._68_4_ = param_1.field_4;
            local_118._64_4_ = param_1.field_0;
            iStack_d0 = param_1.field_8;
            iStack_cc = param_1.field_12;
            uStack000000000000004c = param_1.field_4;
            param_1._64_4_ = param_1.field_0;
            new (&local_98) render::Texture::Desc();
            local_118.Register(pRVar2, "HalfResDepthRT", 3553, &local_118.field_64, 0, &param_1.field_64, 0, 1);
            puVar1 = field_296;
            shared_ptr<render::RenderTargets>::operator=((shared_ptr<render::RenderTargets>*)puVar1,
                                                         (shared_ptr*)&local_118);
            local_118.~shared_ptr();
            bVar3 = puVar1->operator_cast_to_bool();
            if (bVar3) {
                pRVar4 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                    (shared_ptr<render::RenderTargets>*)puVar1);
                plVar7 = (long*)pRVar4->GetDepthStencilTargetTexture();
                lVar6 = pRVar4->Instance();
                (**(code**)(*plVar7 + 24))(plVar7, lVar6 + 80, 0);
            }
            pRVar2 = field_216;
            local_118._68_4_ = param_1.field_4;
            local_118._64_4_ = param_1.field_0;
            local_a8 = param_1.field_48;
            cStack_a0 = param_1.field_56;
            uStack_9f = param_1._57_3_;
            uStack_9c = param_1.field_60;
            local_b8 = param_1.field_32;
            uStack_b7 = param_1._33_3_;
            uStack_b4 = param_1.field_36;
            uStack_b0 = param_1.field_40;
            uStack_af = param_1._41_7_;
            local_c8 = param_1.field_16;
            iStack_c4 = param_1.field_20;
            iStack_c0 = param_1.field_24;
            iStack_bc = param_1.field_28;
            iStack_d0 = param_1.field_8;
            iStack_cc = param_1.field_12;
            local_50 = (shared_ptr*)puVar1;
            new (&local_98) render::Texture::Desc();
            new (&local_118) render::Texture::Desc();
            local_40->Register(pRVar2, "HalfResVolumetricsRT1", 3553, &local_118.field_64, 1, &local_118, 0, 1);
            local_48 = (shared_ptr*)field_312;
            shared_ptr<render::RenderTargets>::operator=((shared_ptr<render::RenderTargets>*)local_48,
                                                         (shared_ptr*)local_40);
            local_40->~shared_ptr();
            pRVar2 = field_216;
            local_118._68_4_ = param_1.field_4;
            local_118._64_4_ = param_1.field_0;
            local_a8 = param_1.field_48;
            cStack_a0 = param_1.field_56;
            uStack_9f = param_1._57_3_;
            uStack_9c = param_1.field_60;
            local_b8 = param_1.field_32;
            uStack_b7 = param_1._33_3_;
            uStack_b4 = param_1.field_36;
            uStack_b0 = param_1.field_40;
            uStack_af = param_1._41_7_;
            local_c8 = param_1.field_16;
            iStack_c4 = param_1.field_20;
            iStack_c0 = param_1.field_24;
            iStack_bc = param_1.field_28;
            iStack_d0 = param_1.field_8;
            iStack_cc = param_1.field_12;
            new (&local_98) render::Texture::Desc();
            new (&local_118) render::Texture::Desc();
            local_40->Register(pRVar2, "HalfResVolumetricsRT2", 3553, &local_118.field_64, 1, &local_118, 0, 1);
            shared_ptr<render::RenderTargets>::operator=((shared_ptr<render::RenderTargets>*)field_328,
                                                         (shared_ptr*)local_40);
            local_40->~shared_ptr();
            bVar3 = shared_ptr::operator_cast_to_bool(local_50);
            uVar8 = CONCAT71((int7)((ulong)&local_118 >> 8), 1);
            if (bVar3) {
                bVar3 = shared_ptr::operator_cast_to_bool(local_48);
                if (bVar3) {
                    bVar3 = field_328->operator_cast_to_bool();
                    if (bVar3)
                        goto LAB_100933593;
                }
            }
            DestroyRenderTargets(this);
        }
        uVar8 = 0;
    LAB_100933593:
        return uVar8 & 4294967295;
    }

    // 0x1009335d0, 160 bytes, placed by class name
    // VolumetricScatteringEffect::CreateShaders()
    undefined8 VolumetricScatteringEffect::CreateShaders() {
        undefined4 uVar1;
        char cVar2;
        bool bVar3;

        field_273 = 0;
        if (field_272 == false) {
            bVar3 = false;
        } else {
            bVar3 = field_37 == '\0';
        }
        uVar1 = field_40;
        cVar2 = field_37;
        GetPos();
        cVar2 = CreateRaymarchShader(this, bVar3, uVar1, cVar2);
        if (cVar2 != '\0') {
            cVar2 = CreateDepthDownsampleShader(SUB81(this, 0));
            if ((cVar2 != '\0') && (cVar2 = CreateBilateralBlurShader(SUB81(this, 0)), cVar2 != '\0')) {
                cVar2 = CreateBilateralUpsampleShader(this, field_272);
                if (cVar2 != '\0') {
                    return 1;
                }
            }
        }
        return 0;
    }

    // 0x1009336a0, 64 bytes, placed by class name
    // VolumetricScatteringEffect::CreateRenderingResources()
    undefined8 VolumetricScatteringEffect::CreateRenderingResources() {
        char cVar1;

        cVar1 = CreateBayesianDitherTexture(this);
        if (cVar1 != '\0') {
            cVar1 = CreateShaders(this);
            if (cVar1 != '\0') {
                return 1;
            }
        }
        (*(code*)field_0[10])(this);
        return 0;
    }

    // 0x1009336e0, 16 bytes, placed by class name
    // VolumetricScatteringEffect::CreateNoiseTexture()
    undefined1 VolumetricScatteringEffect::CreateNoiseTexture() {
        return 1;
    }

    // 0x1009336f0, 112 bytes, placed by class name
    // VolumetricScatteringEffect::CreateBayesianDitherTexture()
    void VolumetricScatteringEffect::CreateBayesianDitherTexture() {
        uchar* puVar2;
        undefined8 local_28;
        undefined8 uStack_20;
        long local_18;

        local_18 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_28 = 6980650618488651776;
        uStack_20 = 5823278496701526064;
        puVar2 = (uchar*)local_28.data();
        if (SetDitherTexture(this, puVar2, 4, 4) != '\0') {
            field_40 = 4;
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_18) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100933760, 48 bytes, placed by class name
    // VolumetricScatteringEffect::DestroyRenderingResources()
    void VolumetricScatteringEffect::DestroyRenderingResources() {
        DestroyShaders(this);
        DestroyRenderTargets(this);
        (&field_344, (Texture*)0)->reset();
    }

    // 0x100933790, 112 bytes, placed by class name
    // VolumetricScatteringEffect::DestroyShaders()
    void VolumetricScatteringEffect::DestroyShaders() {
        ShaderProgramManager* pSVar1;
        Singleton<render::ShaderProgramManager>* this_00;

        (&field_1024)->Destroy();
        this_00 = (Singleton<render::ShaderProgramManager>*)&field_352;
        this_00->Destroy();
        pSVar1 = (ShaderProgramManager*)this_00->Instance();
        pSVar1->Unregister(field_224);
        pSVar1 = (ShaderProgramManager*)pSVar1->Instance();
        pSVar1->Unregister(field_240);
        pSVar1 = (ShaderProgramManager*)pSVar1->Instance();
        pSVar1->Unregister(field_256);
    }

    // 0x100933800, 96 bytes, placed by class name
    // VolumetricScatteringEffect::DestroyRenderTargets()
    void VolumetricScatteringEffect::DestroyRenderTargets() {
        (field_216, (shared_ptr*)field_280)->Unregister();
        (field_216, (shared_ptr*)field_296)->Unregister();
        (field_216, (shared_ptr*)field_312)->Unregister();
        (field_216, (shared_ptr*)field_328)->Unregister();
    }

    // 0x100933890, 1616 bytes, placed by class name
    // VolumetricScatteringEffect::InitialiseTweakVars(tweak::ContainerGroup&, EffectManager&)
    void VolumetricScatteringEffect::InitialiseTweakVars(ContainerGroup* param_1, EffectManager* param_2) {
        Container* pCVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined1 local_c8[24];
        undefined8 local_b0;
        Container* local_a8;
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
        new (local_68) eastl::string("Volumetrics", (allocator*)&local_88);
        (*(code*)param_1->field_0[30])(local_80, param_1, (eastl::string*)local_68);
        local_68->~basic_string();
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->(local_80);
        local_88 = Tweaky_LambdaToggleEffect;
        local_b0 = std::ref<EffectManager>(param_2);
        local_69 = 50;
        std::bind<void (*)(EffectManager&, tweak::Event_const&, EffectType_const&),
                  std::reference_wrapper<EffectManager>, std::placeholders::__ph<1> const&, EffectType>(
            (_func_void_EffectManager_ptr_Event_ptr_EffectType_ptr*)local_c8, (reference_wrapper*)&local_88,
            (__ph*)&local_b0, &local_69);
        std::function<void(tweak::Event_const&)>::function<
            std::__bind<void (*)(EffectManager&, tweak::Event_const&, EffectType_const&),
                        std::reference_wrapper<EffectManager>, std::placeholders::__ph<1> const&, EffectType>,
            void>(local_68);
        pCVar1->AddCheckBox("Volumetric Scattering enabled", local_68, false);
        std::function<void(tweak::Event_const&)>::~function((function<void(tweak::Event_const&)>*)local_68);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->(local_80);
        local_68[0] = (float*)(&field_552)->second();
        tweak::Container::AddSlider<float>(pCVar1, "Density", 0.0, 10.0, 0.1, local_68);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->(local_80);
        local_68[0] = (float*)(&field_584)->second();
        tweak::Container::AddSlider<float>(pCVar1, "Inscattering amount", 0.0, 10.0, 0.1, local_68);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->(local_80);
        local_68[0] = (float*)(&field_616)->second();
        tweak::Container::AddSlider<float>(pCVar1, "Outscattering amount", 0.0, 10.0, 0.1, local_68);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->(local_80);
        local_68[0] = (float*)(&field_648)->second();
        tweak::Container::AddSlider<float>(pCVar1, "Skybox Density Multiplier", 0.0, 5.0, 0.1, local_68);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->(local_80);
        local_68[0] = (float*)(&field_680)->second();
        tweak::Container::AddSlider<float>(pCVar1, "Shadow Exaggeration Factor", 0.0, 11.0, 0.1, local_68);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->(local_80);
        local_68[0] = (float*)(&field_712)->second();
        tweak::Container::AddSlider<float>(pCVar1, "Scattering direction (G)", -1.0, 1.0, 0.001, local_68);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->(local_80);
        local_68[0] = (float*)(&field_744)->second();
        tweak::Container::AddSlider<float>(pCVar1, "Sky Scattering Direction (G)", -1.0, 1.0, 0.001, local_68);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->(local_80);
        local_68[0] = (float*)(&field_776)->second();
        tweak::Container::AddSlider<float>(pCVar1, "Edge sharpness", 0.0, 512.0, 1.0, local_68);
        uVar2 = (&field_808)->GetDefaultValue();
        uVar3 = shared_ptr<tweak::Container>::operator->(local_80);
        new (&local_a8) math::Point<float>(0.0, 1.0);
        new (&local_a0) math::Point<float>(0.0, 10.0);
        local_a8._0_4_->AddColourPickerHDR(local_a0, uVar3, "Lit Fog Colour", uVar2, &field_972);
        uVar2 = (&field_856)->GetDefaultValue();
        uVar3 = shared_ptr<tweak::Container>::operator->(local_80);
        new (&local_98) math::Point<float>(0.0, 1.0);
        new (&local_90) math::Point<float>(0.0, 10.0);
        local_98._0_4_->AddColourPickerHDR(local_90, uVar3, "Unlit Fog Colour", uVar2, &field_976);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->(local_80);
        std::function<void(tweak::Event_const&)>::function<
            VolumetricScatteringEffect::InitialiseTweakVars(tweak::ContainerGroup&, EffectManager&)::__4, void>(
            (function*)local_68, this, this);
        pCVar1->AddButton("Reload shaders", local_68);
        std::function<void(tweak::Event_const&)>::~function((function<void(tweak::Event_const&)>*)local_68);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->(local_80);
        local_68[0] = (float*)&field_32;
        tweak::Container::AddSlider<int>(pCVar1, "Samples", 1.0, 128.0, 1.0, (int**)local_68);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->(local_80);
        pCVar1->AddCheckBox("Bilateral Blur", &field_36);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->(local_80);
        std::function<void(tweak::Event_const&)>::function<
            VolumetricScatteringEffect::InitialiseTweakVars(tweak::ContainerGroup&, EffectManager&)::__5, void>(
            (function*)local_68, this);
        pCVar1->AddCheckBox("Use half-res rendering", local_68, false);
        std::function<void(tweak::Event_const&)>::~function((function<void(tweak::Event_const&)>*)local_68);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->(local_80);
        pCVar1->AddCheckBox("Show dither texture", &field_24);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->(local_80);
        std::function<void(tweak::Event_const&)>::function<
            VolumetricScatteringEffect::InitialiseTweakVars(tweak::ContainerGroup&, EffectManager&)::__6, void>(
            (function*)local_68, this);
        pCVar1->AddButton("Create Bayesian Dither Texture", local_68);
        std::function<void(tweak::Event_const&)>::~function((function<void(tweak::Event_const&)>*)local_68);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->(local_80);
        std::function<void(tweak::Event_const&)>::function<
            VolumetricScatteringEffect::InitialiseTweakVars(tweak::ContainerGroup&, EffectManager&)::__7, void>(
            (function*)local_68, this);
        pCVar1->AddButton("Create Blue Noise Dither Texture", local_68);
        std::function<void(tweak::Event_const&)>::~function((function<void(tweak::Event_const&)>*)local_68);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->(local_80);
        pCVar1->AddCheckBox("Show depth RenderTarget", &field_26);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->(local_80);
        pCVar1->AddCheckBox("Show half-res depth RT", &field_27);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->(local_80);
        pCVar1->AddCheckBox("Show half-res raymarch RT1", &field_28);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->(local_80);
        pCVar1->AddCheckBox("Show half-res raymarch RT2", &field_29);
        local_80->~shared_ptr();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100933ff0, 256 bytes, placed by class name
    // VolumetricScatteringEffect::SetParams(VolumetricScatteringParams const&, long long, unsigned long long)
    void VolumetricScatteringEffect::SetParams(VolumetricScatteringParams* param_1, longlong param_2,
                                               ulonglong param_3) {
        (&field_552, (float*)param_1, param_2, param_3)->SetValue();
        (&field_584, (float*)((long)&param_1->field_0 + 4), param_2, param_3)->SetValue();
        (&field_616, (float*)&param_1->field_8, param_2, param_3)->SetValue();
        (&field_648, (float*)((long)&param_1->field_8 + 4), param_2, param_3)->SetValue();
        (&field_680, (float*)&param_1->field_16, param_2, param_3)->SetValue();
        (&field_712, (float*)((long)&param_1->field_16 + 4), param_2, param_3)->SetValue();
        (&field_744, (float*)&param_1->field_24, param_2, param_3)->SetValue();
        (&field_776, (float*)((long)&param_1->field_24 + 4), param_2, param_3)->SetValue();
        (&field_808, (Vector3T*)param_1->field_32, param_2, param_3)->SetValue();
        (&field_856, (Vector3T*)param_1->field_48, param_2, param_3)->SetValue();
    }

    // 0x100934170, 688 bytes, placed by class name
    // VolumetricScatteringEffect::CreateRaymarchShader(bool, int, bool, GraphicsQuality)
    ulong VolumetricScatteringEffect::CreateRaymarchShader(long param_1, int param_2, int param_3, char param_4) {
        ostream* poVar1;
        char* pcVar2;
        char* pcVar3;
        VertexElementDesc* pVVar4;
        long lVar5;
        uint uVar6;
        undefined8 extraout_RDX;
        undefined8 extraout_RDX_00;
        undefined8 uVar7;
        ostream* this;
        undefined1 local_190[280];
        EffectList local_78[16];
        shared_ptr local_68;
        DirLightShadowMapping local_58[24];
        DirLightShadowMapping local_40[24];

        EffectList::EffectList(local_78);
        uVar7 = extraout_RDX;
        if (param_2 != 0) {
            local_78->Add(89);
            uVar7 = extraout_RDX_00;
        }
        uVar6 = 31;
        if (*(int*)(param_1 + 544) - 1U < 3) {
            uVar6 = *(int*)(param_1 + 544) + 31U & 255;
        }
        local_78->Add(uVar6, uVar7, uVar6);
        new (local_190) RT7PixelShaderSourceStream(local_78, 2, 1, 2, 1, 1, 1, 24);
        if (param_4 != '\0') {
            std::operator<<((ostream*)(local_190 + 16), "#define OUTPUT_SCATTERING_ONLY 1\n");
        }
        this = (ostream*)(local_190 + 16);
        poVar1 = std::operator<<(
            this,
            "UNIFORM_BUFFER_BEGIN(SunlightViewTransform)\n   uniform mat4 uSunlightViewMatrix;\nUNIFORM_BUFFER_END\n");
        local_40->BuildUniforms();
        poVar1 = std::operator<<(poVar1, (basic_string*)local_40);
        local_58->BuildFSFragment(5);
        std::operator<<(poVar1, (basic_string*)local_58);
        local_58->~basic_string();
        local_40->~basic_string();
        local_40->BuildUniforms();
        std::operator<<(this, (basic_string*)local_40);
        local_40->~basic_string();
        poVar1 = std::operator<<(this, "vec2 DITHER_SIZE = vec2(");
        poVar1 = (ostream*)std::ostream::operator<<(poVar1, param_3);
        std::operator<<(poVar1, ".0);\n");
        poVar1 = std::operator<<(this, "vec2 INV_DITHER_SIZE = vec2(");
        poVar1 = (ostream*)std::ostream::operator<<(poVar1, 1.0 / (float)param_3);
        std::operator<<(poVar1, ");\n");
        pcVar2 = (char*)shadersourceprovider::GetShaderString(110);
        std::operator<<(this, pcVar2);
        pcVar2 = (char*)Instance();
        local_40->BuildVSFragment();
        pcVar3 = (char*)local_40->c_str();
        local_58->str();
        pVVar4 = (VertexElementDesc*)local_58->c_str();
        local_68.RegisterFromSourceString(pcVar2, pcVar3, pVVar4, 62757712, '\x02');
        shared_ptr<render::ShaderProgram>::operator=((shared_ptr<render::ShaderProgram>*)(param_1 + 224), &local_68);
        local_68.~shared_ptr();
        local_58->~basic_string();
        local_40->~basic_string();
        lVar5 = ((param_1 + 224))->end();
        local_190->~RT7PixelShaderSourceStream();
        return CONCAT71((int7)((ulong)pcVar3 >> 8), lVar5 != 0) & 4294967295;
    }

    // 0x100934420, 32 bytes, placed by class name
    // VolumetricScatteringEffect::CreateDepthDownsampleShader(bool)
    void VolumetricScatteringEffect::CreateDepthDownsampleShader(bool param_1) {
        bool in_SIL;
        undefined7 in_register_00000039;

        ((CONCAT71(in_register_00000039, param_1) + 1024))->Init(in_SIL);
    }

    // 0x100934440, 352 bytes, placed by class name
    // VolumetricScatteringEffect::CreateBilateralBlurShader(bool)
    ulong VolumetricScatteringEffect::CreateBilateralBlurShader(bool param_1) {
        char* pcVar1;
        char* pcVar2;
        VertexElementDesc* pVVar3;
        long lVar4;
        undefined7 in_register_00000039;
        ostream* this;
        shared_ptr<render::ShaderProgram>* this_00;
        undefined1 local_178[280];
        PostProcessVS local_60[24];
        basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_48[24];
        shared_ptr local_30;

        new (local_178) render::PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
        pcVar1 = (char*)shadersourceprovider::GetShaderString(2);
        this = (ostream*)(local_178 + 16);
        std::operator<<(this, pcVar1);
        pcVar1 = (char*)Instance();
        local_60->BuildVSFragment();
        pcVar2 = (char*)local_60->c_str();
        std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::str(local_48);
        pVVar3 = (VertexElementDesc*)local_48->c_str();
        local_30.RegisterFromSourceString(pcVar1, pcVar2, pVVar3, 62757712, '\x02');
        this_00 = (shared_ptr<render::ShaderProgram>*)(CONCAT71(in_register_00000039, param_1) + 240);
        shared_ptr<render::ShaderProgram>::operator=(this_00, &local_30);
        local_30.~shared_ptr();
        local_48->~basic_string();
        local_60->~basic_string();
        lVar4 = this_00->end();
        local_178->~PixelShaderSourceStream();
        return CONCAT71((int7)((ulong)pcVar2 >> 8), lVar4 != 0) & 4294967295;
    }

    // 0x1009345a0, 432 bytes, placed by class name
    // VolumetricScatteringEffect::CreateBilateralUpsampleShader(bool)
    ulong VolumetricScatteringEffect::CreateBilateralUpsampleShader(bool param_1) {
        char* pcVar1;
        char* pcVar2;
        VertexElementDesc* pVVar3;
        long lVar4;
        ostream* this_00;
        undefined1 local_178[280];
        basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_60[24];
        shared_ptr local_48;
        DirLights local_38[24];

        new (local_178) render::PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
        local_38->BuildUniforms();
        this_00 = (ostream*)(local_178 + 16);
        std::operator<<(this_00, (basic_string*)local_38);
        local_38->~basic_string();
        if (param_1) {
            std::operator<<(this_00, "#define MSAA;\n");
        }
        std::operator<<(this_00, "#define USE_TEXTURE_GATHER 1;\n");
        pcVar1 = (char*)shadersourceprovider::GetShaderString(3);
        std::operator<<(this_00, pcVar1);
        pcVar1 = (char*)this_00->Instance();
        local_38->BuildVSFragment();
        pcVar2 = (char*)local_38->c_str();
        std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::str(local_60);
        pVVar3 = (VertexElementDesc*)local_60->c_str();
        local_48.RegisterFromSourceString(pcVar1, pcVar2, pVVar3, 62757712, '\x02');
        shared_ptr<render::ShaderProgram>::operator=((shared_ptr<render::ShaderProgram>*)field_256, &local_48);
        local_48.~shared_ptr();
        local_60->~basic_string();
        local_38->~basic_string();
        lVar4 = field_256->end();
        local_178->~PixelShaderSourceStream();
        return CONCAT71((int7)((ulong)pcVar2 >> 8), lVar4 != 0) & 4294967295;
    }

    // 0x1009348b0, 240 bytes, placed by class name
    // VolumetricScatteringEffect::SetDitherTexture(unsigned char const*, int, int)
    undefined4 VolumetricScatteringEffect::SetDitherTexture(uchar* param_1, int param_2, int param_3) {
        undefined4 uVar1;
        Texture2D* this_00;
        long* plVar2;
        long lVar3;
        unique_ptr<render::Texture2D, std::default_delete<render::Texture2D>>* this_01;
        undefined1 local_80[88];
        unique_ptr<render::Texture2D, std::default_delete<render::Texture2D>> local_28[8];

        new ((local_80 + 64)) render::ResourceDataT<unsigned char const>(param_1, 0, 0, false);
        new (local_80) render::Texture::Desc();
        local_80[32] = 0;
        local_80._12_4_ = 23;
        local_80._0_4_ = param_2;
        local_80._4_4_ = param_3;
        std::make_unique<render::Texture2D, char const(&)[14]>((char*)local_28);
        this_00 = (Texture2D*)std::unique_ptr<render::Texture2D, std::default_delete<render::Texture2D>>::operator->(
            local_28);
        uVar1 = this_00->Create(local_80, (ResourceDataT*)(local_80 + 64), param_3 * param_2);
        if ((char)uVar1 != '\0') {
            this_01 = local_28;
            plVar2 =
                (long*)std::unique_ptr<render::Texture2D, std::default_delete<render::Texture2D>>::operator->(this_01);
            lVar3 = this_01->Instance();
            (**(code**)(*plVar2 + 24))(plVar2, lVar3 + 144, 0);
            std::unique_ptr<render::Texture, std::default_delete<render::Texture>>::operator=(
                (unique_ptr<render::Texture, std::default_delete<render::Texture>>*)&field_344, (unique_ptr*)local_28);
        }
        std::unique_ptr<render::Texture2D, std::default_delete<render::Texture2D>>::~unique_ptr(local_28);
        ((local_80 + 64))->~ResourceDataT();
        return uVar1;
    }

    // 0x1009349b0, 48 bytes, placed by class name
    // VolumetricScatteringEffect::CreateBlueNoiseDitherTexture()
    void VolumetricScatteringEffect::CreateBlueNoiseDitherTexture() {
        field_40 = 128;
        SetDitherTexture(this, &BlueNoise::Values, 128, 128);
    }

    // 0x100934a80, 112 bytes, placed by class name
    // VolumetricScatteringEffect::IsReady() const
    bool VolumetricScatteringEffect::IsReady() {
        bool bVar1;
        char cVar2;

        bVar1 = field_224->operator_cast_to_bool();
        if ((((bVar1) && (cVar2 = (&field_1024)->IsReady(), cVar2 != '\0')) &&
             (bVar1 = field_240->operator_cast_to_bool(), bVar1)) &&
            (bVar1 = field_256->operator_cast_to_bool(), bVar1)) {
            bVar1 = (&field_344)->operator_cast_to_bool();
            return bVar1;
        }
        return false;
    }

    // 0x100934b50, 112 bytes, placed by class name
    // VolumetricScatteringEffect::UsePostProcessShader(render::DrawCallState&, graphicutils::RenderToTextureHelper const&, render::ShaderProgram const&)
    void VolumetricScatteringEffect::UsePostProcessShader(DrawCallState* param_1, RenderToTextureHelper* param_2,
                                                          ShaderProgram* param_3) {
        VertexDeclaration* pVVar1;
        VertexBuffer* pVVar2;
        RenderPipelineState* this_00;

        pVVar1 = (VertexDeclaration*)param_3->second();
        pVVar2 = (VertexBuffer*)param_2->GetBoneIDMap();
        (&field_352, pVVar1, pVVar2)->SetVertexStreamData();
        this_00 = (RenderPipelineState*)param_1->GetRenderPipelineState();
        this_00->SetShaderProgram(param_3);
        param_1->SetInputAssemblerState((InputAssemblerState*)&field_352);
    }

    // 0x100934bc0, 160 bytes, placed by class name
    // VolumetricScatteringEffect::CanSkip(EffectManager const&) const
    ulong VolumetricScatteringEffect::CanSkip(EffectManager* param_1) {
        char cVar1;
        ulonglong uVar2;
        undefined8 unaff_R12;
        undefined7 uVar4;
        ulong uVar3;
        float fVar5;

        uVar2 = FrameTime::GetCurrentTimeMS();
        cVar1 = param_1->IsEnabled(30);
        uVar4 = (undefined7)((ulong)unaff_R12 >> 8);
        uVar3 = CONCAT71(uVar4, 1);
        if (cVar1 != '\0') {
            cVar1 = param_1->IsEnabled(29);
            if (cVar1 != '\0') {
                fVar5 = (float)(&field_552, uVar2)->GetValue();
                if (fVar5 != 0.0) {
                    fVar5 = (float)(&field_584, uVar2)->GetValue();
                    if (fVar5 == 0.0) {
                        fVar5 = (float)(&field_616, uVar2)->GetValue();
                        uVar3 = CONCAT71(uVar4, fVar5 == 0.0);
                    } else {
                        uVar3 = 0;
                    }
                }
            }
        }
        return uVar3 & 4294967295;
    }

    // 0x100934c60, 32 bytes, placed by class name
    // VolumetricScatteringEffect::IsSupported() const
    void VolumetricScatteringEffect::IsSupported() {
        RenderDevice* this_00;
        undefined4 uVar1;

        this_00 = (RenderDevice*)Instance();
        uVar1 = this_00->GetGpuMemoryProfile();
        render::operator>=(uVar1, 1);
    }

    // 0x100934c90, 64 bytes, placed by class name
    // VolumetricScatteringEffect::OnQualityChange(GraphicsQuality)
    undefined8 VolumetricScatteringEffect::OnQualityChange(int param_2) {
        if (((*(code*)field_0[5])() == '\0') || (DestroyShaders(this), param_2 == -1)) {
            return 0;
        }
        return CreateShaders(this);
    }

    // 0x100934cd0, 3136 bytes, placed by class name
    // VolumetricScatteringEffect::Render(render::RenderContext&, render::RenderTargets const*, render::Texture const*, render::Viewport const&, graphicutils::RenderToTextureHelper const&)
    void VolumetricScatteringEffect::Render(RenderContext* param_1, RenderTargets* param_2, Texture* param_3,
                                            Viewport* param_4, RenderToTextureHelper* param_5) {
        undefined1* this_00;
        RenderContext* pRVar1;
        bool bVar2;
        char cVar3;
        int iVar4;
        EffectManager* this_01;
        undefined8* puVar5;
        ShaderProgram* pSVar6;
        RenderTargets* pRVar7;
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                    eastl::allocator>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>* pcVar8;
        int* piVar9;
        long lVar10;
        Texture* pTVar11;
        Layout* pLVar12;
        Viewport* pVVar13;
        OutputMergerState* pOVar14;
        RenderPipelineState* pRVar15;
        HashedString* pHVar16;
        DrawCallState* pDVar17;
        SunlightShadows* this_02;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* pvVar18;
        ShaderProgram* this_03;
        float fVar19;
        undefined4 uVar20;
        Data local_148;
        undefined8 uStack_120;
        Viewport* local_110;
        Vector4T* local_108;
        shared_ptr<render::RenderTargets>* local_100;
        undefined8 local_f8;
        float fStack_f0;
        undefined4 uStack_ec;
        RenderTargets* local_e8;
        Vector3T* local_e0;
        Vector3T* local_d8;
        SunlightDirectLighting* local_d0;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_c8[16];
        WrapArray<unsigned char> local_b8[8];
        float local_b0;
        float local_ac;
        undefined8 local_a8;
        undefined8 uStack_a0;
        undefined8 local_98;
        SunlightDirectLighting* local_88;
        shared_ptr* local_80;
        AutoSingleton<ShaderThreadPoolSingleton> local_78[8];
        RenderToTextureHelper* local_70;
        DrawCallState local_68;
        RenderContext* local_38;

        local_70 = param_5;
        local_78->~AutoSingleton("Post_Processing");
        local_80 = (shared_ptr*)field_280;
        bVar2 = shared_ptr::operator_cast_to_bool(local_80);
        if (!bVar2) {
            return;
        }
        local_98._0_4_ = param_4->field_16;
        local_98._4_4_ = param_4->field_20;
        local_a8._0_4_ = param_4->field_0;
        local_a8._4_4_ = param_4->field_4;
        uStack_a0._0_4_ = param_4->field_8;
        uStack_a0._4_4_ = param_4->field_12;
        local_110 = param_4;
        local_e8 = param_2;
        local_38 = param_1;
        this_01 = (EffectManager*)field_208->GetEffectManager();
        local_88 = EffectManager::GetEffect<SunlightDirectLighting>(this_01, 106);
        puVar5 = (undefined8*)local_88->GetDefaultValue();
        local_148._0_8_ = *puVar5;
        local_148._8_8_ = puVar5[1];
        iVar4 = *(int*)(puVar5 + 2);
        local_148._20_4_ = *(undefined4*)((long)puVar5 + 20);
        local_148._24_4_ = *(undefined4*)(puVar5 + 3);
        local_148._28_4_ = *(undefined4*)((long)puVar5 + 28);
        local_148._32_8_ = puVar5[4];
        uStack_120 = puVar5[5];
        local_148._16_4_ = iVar4;
        if (field_273 == '\0') {
            new (&local_68) EffectList();
            local_68.Add(106);
            local_68.Add(29);
            local_68.Add(30);
            pSVar6 = (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator->(
                (shared_ptr<render::ShaderProgram>*)field_256);
            pSVar6->WaitForAsyncCompile();
            pSVar6 = (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator*(
                (shared_ptr<render::ShaderProgram>*)field_256);
            this_01->BindConstBufferToShader(pSVar6, (EffectList*)&local_68);
            pSVar6 = (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator->(
                (shared_ptr<render::ShaderProgram>*)field_224);
            pSVar6->WaitForAsyncCompile();
            pSVar6 = (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator*(
                (shared_ptr<render::ShaderProgram>*)field_224);
            this_01->BindConstBufferToShader(pSVar6, (EffectList*)&local_68);
            field_273 = 1;
        }
        local_68.m_pInputAssemblerState = (InputAssemblerState*)math::operator*((Vector3T*)&field_944, field_972);
        local_e0 = (Vector3T*)&field_992;
        local_68.m_pRenderPipelineState._0_4_ = iVar4;
        local_e0->SetXYZ((Vector3T*)&local_68);
        local_68.m_pInputAssemblerState = (InputAssemblerState*)math::operator*((Vector3T*)&field_960, field_976);
        local_d8 = (Vector3T*)&field_1008;
        pDVar17 = &local_68;
        local_68.m_pRenderPipelineState._0_4_ = iVar4;
        local_d8->SetXYZ(pDVar17);
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_c8,
                                                                                 (_func_decltype_nullptr*)pDVar17);
        if (field_37 == '\0') {
            shared_ptr<render::RenderTargets>::operator=((shared_ptr<render::RenderTargets>*)local_c8, local_80);
        } else {
            this_00 = field_296;
            bVar2 = this_00->operator_cast_to_bool();
            if (!bVar2)
                goto LAB_1009358a7;
            cVar3 = (&field_1024)->IsReady();
            if (cVar3 == '\0')
                goto LAB_1009358a7;
            pRVar7 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)this_00);
            pcVar8 =
                (compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                             eastl::allocator>>::Layout,
                                     eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>*)
                    pRVar7->GetDepthStencilTargetTexture();
            piVar9 = (int*)eastl::compressed_pair_imp<
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
                eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>::second(pcVar8);
            iVar4 = *piVar9;
            pRVar7 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)this_00);
            pcVar8 =
                (compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                             eastl::allocator>>::Layout,
                                     eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>*)
                    pRVar7->GetDepthStencilTargetTexture();
            lVar10 = eastl::compressed_pair_imp<
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
                eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>::second(pcVar8);
            new (&local_68) render::Viewport(0, 0, iVar4, *(int*)(lVar10 + 4), 0.0, 1.0);
            WrapArray<unsigned char>::WrapArray(local_b8, this_00, 1);
            pRVar7 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)local_80);
            pTVar11 = (Texture*)pRVar7->GetDepthStencilTargetTexture();
            (&field_1024, local_38, local_b8, pTVar11, 1, true)->DownSample2x2();
            local_a8 = 0;
            uStack_a0 = CONCAT44(uStack_a0._4_4_ / 2, (int)uStack_a0 / 2);
            new (local_b8) math::Point<float>(
                (float)(int)local_68.m_pRenderPipelineState + (float)(int)local_68.m_pRenderPipelineState,
                (float)local_68.m_pRenderPipelineState._4_4_ + (float)local_68.m_pRenderPipelineState._4_4_);
            local_88->SetViewportLookupScale((Viewport*)&local_68, local_b8);
            shared_ptr<render::RenderTargets>::operator=((shared_ptr<render::RenderTargets>*)local_c8,
                                                         (shared_ptr*)this_00);
        }
        uVar20 = 0;
        fVar19 = (float)uStack_a0._4_4_;
        new (local_b8) ImVec4((float)(int)uStack_a0, fVar19, 1.0 / (float)(int)uStack_a0, 1.0 / fVar19);
        local_d0 = EffectManager::GetEffect<SunlightDirectLighting>(this_01, 29);
        new (&local_68) render::DrawCallState();
        pDVar17 = &local_68;
        pLVar12 = (Layout*)pDVar17->GetRenderPipelineState();
        lVar10 = pDVar17->Instance();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::Layout::
            SetHeapSize(pLVar12, lVar10 + 1080);
        pSVar6 =
            (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator*((shared_ptr<render::ShaderProgram>*)field_224);
        UsePostProcessShader(this, &local_68, local_70, pSVar6);
        pVVar13 = (Viewport*)local_68.GetOutputMergerState();
        render::OutputMergerState::SetViewports(pVVar13, (uint)&local_a8);
        if (field_37 == '\0') {
            pOVar14 = (OutputMergerState*)local_68.GetOutputMergerState();
            pOVar14->SetRenderTargets(local_e8);
            pRVar15 = (RenderPipelineState*)local_68.GetRenderPipelineState();
            pRVar7 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)local_80);
            pvVar18 =
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                    pRVar7->GetColourTargetTextures();
            puVar5 = (undefined8*)eastl::vector<
                render::Texture*,
                eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar18, 0);
            pTVar11 = (Texture*)*puVar5;
            pHVar16 = (HashedString*)postprocess::operator*((postprocess*)2);
            iVar4 = pSVar6->GetConstIndex(pHVar16);
            pRVar15->SetPSTextureSamplerPair(0, pTVar11, iVar4, 0, false);
        } else {
            pOVar14 = (OutputMergerState*)local_68.GetOutputMergerState();
            pRVar7 = (RenderTargets*)field_312->end();
            pOVar14->SetRenderTargets(pRVar7);
        }
        pRVar15 = (RenderPipelineState*)local_68.GetRenderPipelineState();
        pRVar7 =
            (RenderTargets*)shared_ptr<render::RenderTargets>::operator->((shared_ptr<render::RenderTargets>*)local_c8);
        pTVar11 = (Texture*)pRVar7->GetDepthStencilTargetTexture();
        pHVar16 = (HashedString*)graphics::operator*((graphics*)179);
        iVar4 = pSVar6->GetConstIndex(pHVar16);
        pRVar15->SetPSTextureSamplerPair(1, pTVar11, iVar4, 0, false);
        pRVar15 = (RenderPipelineState*)local_68.GetRenderPipelineState();
        pTVar11 = (Texture*)(&field_344)->get();
        pHVar16 = (HashedString*)graphics::operator*((graphics*)180);
        iVar4 = pSVar6->GetConstIndex(pHVar16);
        pRVar15->SetPSTextureSamplerPair(2, pTVar11, iVar4, 0, false);
        pHVar16 = (HashedString*)graphics::operator*((graphics*)2);
        pSVar6->SetShaderConstMatrix4(pHVar16, 1, (Matrix44T*)&field_48, 1);
        pHVar16 = (HashedString*)graphics::operator*((graphics*)7);
        pSVar6->SetShaderConstMatrix4(pHVar16, 1, (Matrix44T*)&field_112, 1);
        pHVar16 = (HashedString*)graphics::operator*((graphics*)111);
        pSVar6->SetShaderConstVector3(pHVar16, (Vector3T*)&field_192);
        local_88->SetShaderConstants(&local_68, local_38, pSVar6);
        pHVar16 = (HashedString*)graphics::operator*((graphics*)193);
        local_108 = (Vector4T*)&field_176;
        pSVar6->SetShaderConstVector4(pHVar16, local_108);
        pHVar16 = (HashedString*)graphics::operator*((graphics*)185);
        pSVar6->SetShaderConstInt1(pHVar16, field_32);
        local_f8 = PackMieGParams(field_936);
        fStack_f0 = fVar19;
        uStack_ec = uVar20;
        pDVar17 = (DrawCallState*)graphics::operator*((graphics*)183);
        pSVar6->SetShaderConstVector4(pDVar17, (Vector4T*)&local_f8);
        if (field_37 == '\0') {
            pHVar16 = (HashedString*)graphics::operator*((graphics*)187);
            pSVar6->SetShaderConstVector3(pHVar16, local_e0);
            pDVar17 = (DrawCallState*)graphics::operator*((graphics*)188);
            pSVar6->SetShaderConstVector3(pDVar17, local_d8);
        }
        SetSharedShaderConstants(this, pDVar17, pSVar6);
        this_02 = (SunlightShadows*)EffectManager::GetEffect<SunlightDirectLighting>(this_01, 30);
        pRVar1 = local_38;
        this_02->SetShaderConstantsDirect(&local_68, local_38, pSVar6);
        local_d0->SetShaderConstants(&local_68, pRVar1, pSVar6);
        local_70->RenderQuad(pRVar1, &local_68);
        local_68.~DrawCallState();
        if (field_37 != '\0') {
            if (field_36 != false) {
                new (&local_68) render::DrawCallState();
                pDVar17 = &local_68;
                pLVar12 = (Layout*)pDVar17->GetRenderPipelineState();
                lVar10 = pDVar17->Instance();
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::SetHeapSize(pLVar12, lVar10 + 1080);
                pSVar6 = (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator*(
                    (shared_ptr<render::ShaderProgram>*)field_240);
                UsePostProcessShader(this, &local_68, local_70, pSVar6);
                pVVar13 = (Viewport*)local_68.GetOutputMergerState();
                render::OutputMergerState::SetViewports(pVVar13, (uint)&local_a8);
                pOVar14 = (OutputMergerState*)local_68.GetOutputMergerState();
                local_100 = (shared_ptr<render::RenderTargets>*)field_328;
                pRVar7 = (RenderTargets*)local_100->end();
                pOVar14->SetRenderTargets(pRVar7);
                pRVar15 = (RenderPipelineState*)local_68.GetRenderPipelineState();
                pRVar7 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                    (shared_ptr<render::RenderTargets>*)field_312);
                pvVar18 = (vector<render::Texture*,
                                  eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                              pRVar7->GetColourTargetTextures();
                puVar5 = (undefined8*)eastl::vector<
                    render::Texture*,
                    eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar18, 0);
                pTVar11 = (Texture*)*puVar5;
                pHVar16 = (HashedString*)postprocess::operator*((postprocess*)2);
                iVar4 = pSVar6->GetConstIndex(pHVar16);
                pRVar15->SetPSTextureSamplerPair(0, pTVar11, iVar4, 0, false);
                pRVar15 = (RenderPipelineState*)local_68.GetRenderPipelineState();
                pRVar7 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                    (shared_ptr<render::RenderTargets>*)local_c8);
                pTVar11 = (Texture*)pRVar7->GetDepthStencilTargetTexture();
                pHVar16 = (HashedString*)graphics::operator*((graphics*)179);
                iVar4 = pSVar6->GetConstIndex(pHVar16);
                pRVar15->SetPSTextureSamplerPair(1, pTVar11, iVar4, 0, false);
                new (&local_f8) ImVec4(local_b0, 0.0, field_940, 0.0);
                pHVar16 = (HashedString*)graphics::operator*((graphics*)194);
                pSVar6->SetShaderConstVector4(pHVar16, (Vector4T*)&local_f8);
                local_70->RenderQuad(local_38, &local_68);
                pVVar13 = (Viewport*)local_68.GetOutputMergerState();
                render::OutputMergerState::SetViewports(pVVar13, (uint)&local_a8);
                pOVar14 = (OutputMergerState*)local_68.GetOutputMergerState();
                pRVar7 = (RenderTargets*)field_312->end();
                pOVar14->SetRenderTargets(pRVar7);
                pRVar15 = (RenderPipelineState*)local_68.GetRenderPipelineState();
                pRVar7 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(local_100);
                pvVar18 = (vector<render::Texture*,
                                  eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                              pRVar7->GetColourTargetTextures();
                puVar5 = (undefined8*)eastl::vector<
                    render::Texture*,
                    eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar18, 0);
                pTVar11 = (Texture*)*puVar5;
                pHVar16 = (HashedString*)postprocess::operator*((postprocess*)2);
                iVar4 = pSVar6->GetConstIndex(pHVar16);
                pRVar15->SetPSTextureSamplerPair(0, pTVar11, iVar4, 0, false);
                local_f8.Set(0.0, local_ac, field_940, 0.0);
                pHVar16 = (HashedString*)graphics::operator*((graphics*)194);
                pSVar6->SetShaderConstVector4(pHVar16, (Vector4T*)&local_f8);
                local_70->RenderQuad(local_38, &local_68);
                local_68.~DrawCallState();
            }
            new (&local_68) render::DrawCallState();
            pDVar17 = &local_68;
            pLVar12 = (Layout*)pDVar17->GetRenderPipelineState();
            lVar10 = pDVar17->Instance();
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::
                Layout::SetHeapSize(pLVar12, lVar10 + 1080);
            this_03 = (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator*(
                (shared_ptr<render::ShaderProgram>*)field_256);
            UsePostProcessShader(this, &local_68, local_70, this_03);
            pVVar13 = (Viewport*)local_68.GetOutputMergerState();
            render::OutputMergerState::SetViewports(pVVar13, (uint)local_110);
            pOVar14 = (OutputMergerState*)local_68.GetOutputMergerState();
            pOVar14->SetRenderTargets(local_e8);
            pRVar15 = (RenderPipelineState*)local_68.GetRenderPipelineState();
            pRVar7 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)local_80);
            pvVar18 =
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                    pRVar7->GetColourTargetTextures();
            puVar5 = (undefined8*)eastl::vector<
                render::Texture*,
                eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar18, 0);
            pTVar11 = (Texture*)*puVar5;
            pHVar16 = (HashedString*)postprocess::operator*((postprocess*)2);
            pSVar6 = this_03;
            iVar4 = this_03->GetConstIndex(pHVar16);
            lVar10 = pSVar6->Instance();
            pRVar15->SetPSTextureSamplerPair(0, pTVar11, iVar4, (SamplerState*)(lVar10 + 272), false);
            pRVar15 = (RenderPipelineState*)local_68.GetRenderPipelineState();
            pRVar7 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)local_80);
            pTVar11 = (Texture*)pRVar7->GetDepthStencilTargetTexture();
            pHVar16 = (HashedString*)graphics::operator*((graphics*)179);
            pSVar6 = this_03;
            iVar4 = this_03->GetConstIndex(pHVar16);
            lVar10 = pSVar6->Instance();
            pRVar15->SetPSTextureSamplerPair(1, pTVar11, iVar4, (SamplerState*)(lVar10 + 272), false);
            pRVar15 = (RenderPipelineState*)local_68.GetRenderPipelineState();
            pRVar7 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)field_312);
            pvVar18 =
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                    pRVar7->GetColourTargetTextures();
            puVar5 = (undefined8*)eastl::vector<
                render::Texture*,
                eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar18, 0);
            pTVar11 = (Texture*)*puVar5;
            pHVar16 = (HashedString*)graphics::operator*((graphics*)195);
            pSVar6 = this_03;
            iVar4 = this_03->GetConstIndex(pHVar16);
            lVar10 = pSVar6->Instance();
            pRVar15->SetPSTextureSamplerPair(2, pTVar11, iVar4, (SamplerState*)(lVar10 + 272), false);
            pRVar15 = (RenderPipelineState*)local_68.GetRenderPipelineState();
            pRVar7 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)field_296);
            pTVar11 = (Texture*)pRVar7->GetDepthStencilTargetTexture();
            pHVar16 = (HashedString*)graphics::operator*((graphics*)196);
            pSVar6 = this_03;
            iVar4 = this_03->GetConstIndex(pHVar16);
            lVar10 = pSVar6->Instance();
            pRVar15->SetPSTextureSamplerPair(3, pTVar11, iVar4, (SamplerState*)(lVar10 + 272), false);
            local_88->SetShaderConstants(&local_68, local_38, this_03);
            pHVar16 = (HashedString*)graphics::operator*((graphics*)193);
            this_03->SetShaderConstVector4(pHVar16, local_108);
            pHVar16 = (HashedString*)graphics::operator*((graphics*)187);
            this_03->SetShaderConstVector3(pHVar16, local_e0);
            pHVar16 = (HashedString*)graphics::operator*((graphics*)188);
            this_03->SetShaderConstVector3(pHVar16, local_d8);
            local_d0->SetShaderConstants(&local_68, local_38, this_03);
            local_70->RenderQuad(local_38, &local_68);
            local_68.~DrawCallState();
        }
        local_88->SetData(&local_148);
    LAB_1009358a7:
        local_c8->~shared_ptr();
    }

    // 0x1009359c0, 160 bytes, placed by class name
    // VolumetricScatteringEffect::SetSharedShaderConstants(render::DrawCallState&, render::ShaderProgram const&) const
    void VolumetricScatteringEffect::SetSharedShaderConstants(DrawCallState* param_1, ShaderProgram* param_2) {
        HashedString* pHVar1;
        float fVar2;
        ImVec4 local_38[16];
        undefined8 local_28[2];

        local_28[0] = PackMieGParams(field_932);
        pHVar1 = (HashedString*)graphics::operator*((graphics*)182);
        param_2->SetShaderConstVector4(pHVar1, local_28);
        fVar2 = m_params * 1e-06;
        ImVec4::ImVec4(local_38, field_916 * fVar2, fVar2 * field_920, field_924, field_928);
        pHVar1 = (HashedString*)graphics::operator*((graphics*)184);
        param_2->SetShaderConstVector4(pHVar1, local_38);
    }

    // 0x100935a60, 512 bytes, placed by class name
    // VolumetricScatteringEffect::RenderDebug(render::Viewport const&) const
    void VolumetricScatteringEffect::RenderDebug(Viewport* param_1) {
        char cVar1;
        RenderTargets* pRVar2;
        undefined8* puVar3;
        bool bVar4;
        Texture* pTVar5;
        VolumetricScatteringEffect* pVVar6;
        undefined1* puVar7;
        float fVar8;
        Point<float> local_30[12];
        float local_24;

        if (field_24 == false) {
            fVar8 = 0.0;
            cVar1 = field_26;
        } else {
            math::Point<float>::Point(local_30, 0.0, 0.0);
            pVVar6 = (VolumetricScatteringEffect*)&field_344;
            pTVar5 = (Texture*)pVVar6->get();
            fVar8 = (float)RenderDebugImage(pVVar6, pTVar5, (Vector2T*)local_30, "Dither Texture", param_1, false);
            cVar1 = field_26;
        }
        if (cVar1 != '\0') {
            local_24 = fVar8;
            math::Point<float>::Point(local_30, 0.0, fVar8);
            puVar7 = field_280;
            pVVar6 = (VolumetricScatteringEffect*)puVar7;
            bVar4 = puVar7->operator_cast_to_bool();
            if (bVar4) {
                pVVar6 = (VolumetricScatteringEffect*)shared_ptr<render::RenderTargets>::operator->(
                    (shared_ptr<render::RenderTargets>*)puVar7);
                pTVar5 = (Texture*)pVVar6->GetDepthStencilTargetTexture();
            } else {
                pTVar5 = (Texture*)0;
            }
            fVar8 = (float)RenderDebugImage(pVVar6, pTVar5, (Vector2T*)local_30, "DepthRT", param_1, true);
            fVar8 = local_24 + fVar8;
        }
        if (field_27 != false) {
            local_24 = fVar8;
            math::Point<float>::Point(local_30, 0.0, fVar8);
            puVar7 = field_296;
            pVVar6 = (VolumetricScatteringEffect*)puVar7;
            bVar4 = puVar7->operator_cast_to_bool();
            if (bVar4) {
                pVVar6 = (VolumetricScatteringEffect*)shared_ptr<render::RenderTargets>::operator->(
                    (shared_ptr<render::RenderTargets>*)puVar7);
                pTVar5 = (Texture*)pVVar6->GetDepthStencilTargetTexture();
            } else {
                pTVar5 = (Texture*)0;
            }
            fVar8 = (float)RenderDebugImage(pVVar6, pTVar5, (Vector2T*)local_30, "HalfResDepthRT", param_1, true);
            fVar8 = local_24 + fVar8;
        }
        if (field_28 != false) {
            local_24 = fVar8;
            math::Point<float>::Point(local_30, 0.0, fVar8);
            puVar7 = field_312;
            pVVar6 = (VolumetricScatteringEffect*)puVar7;
            bVar4 = puVar7->operator_cast_to_bool();
            if (bVar4) {
                pRVar2 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                    (shared_ptr<render::RenderTargets>*)puVar7);
                pVVar6 = (VolumetricScatteringEffect*)pRVar2->GetColourTargetTextures();
                puVar3 = (undefined8*)eastl::vector<
                    render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[]((vector<render::Texture*,
                                   eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)pVVar6,
                           0);
                pTVar5 = (Texture*)*puVar3;
            } else {
                pTVar5 = (Texture*)0;
            }
            fVar8 =
                (float)RenderDebugImage(pVVar6, pTVar5, (Vector2T*)local_30, "HalfResVolumetricsRT1", param_1, false);
            fVar8 = local_24 + fVar8;
        }
        if (field_29 != false) {
            math::Point<float>::Point(local_30, 0.0, fVar8);
            puVar7 = field_328;
            pVVar6 = (VolumetricScatteringEffect*)puVar7;
            bVar4 = puVar7->operator_cast_to_bool();
            if (bVar4) {
                pRVar2 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                    (shared_ptr<render::RenderTargets>*)puVar7);
                pVVar6 = (VolumetricScatteringEffect*)pRVar2->GetColourTargetTextures();
                puVar3 = (undefined8*)eastl::vector<
                    render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[]((vector<render::Texture*,
                                   eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)pVVar6,
                           0);
                pTVar5 = (Texture*)*puVar3;
            } else {
                pTVar5 = (Texture*)0;
            }
            RenderDebugImage(pVVar6, pTVar5, (Vector2T*)local_30, "HalfResVolumetricsRT2", param_1, false);
        }
    }

    // 0x100935c60, 1264 bytes, placed by class name
    // VolumetricScatteringEffect::RenderDebugImage(render::Texture const*, math::Vector2T<float> const&, char const*, render::Viewport const&, bool) const
    void VolumetricScatteringEffect::RenderDebugImage(Texture* param_1, Vector2T* param_2, char* param_3,
                                                      Viewport* param_4, bool param_5) {
        int iVar1;
        uint* puVar2;
        long lVar3;
        long* plVar4;
        vector* pvVar5;
        float* pfVar6;
        char* pcVar7;
        undefined7 in_register_00000089;
        SideBarData local_138[2];
        undefined1 local_118[8];
        undefined1 local_110[8];
        uint local_fc;
        CoordMapSquare local_f8;
        float local_ec;
        float local_e8;
        float local_e4;
        ImVec4 local_e0[168];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (param_1 == (Texture*)0) {
            new (local_e0) eastl::fixed_string<char, 128, true, eastl::allocator>(param_3);
            local_e0->append(" is missing!");
            plVar4 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar4 != (long*)0) {
                new (&local_f8) math::Point<float>(8.0, *(float*)(param_2 + 4) + 4.0);
                pcVar7 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                new (local_110) eastl::allocator("EASTL basic_string");
                new (local_138) eastl::string(pcVar7, local_110);
                new (local_118) math::ColourStorage8888<math::ARGB8StorageLayout>(255, 255, 255, 255);
                iVar1 = local_118->GetX();
                new ((local_110 + 8)) oldscape::sidebars::SideBarData(iVar1, 0);
                (**(code**)(*plVar4 + 144))(plVar4, &local_f8, local_138, local_110 + 8);
                local_138->~basic_string();
            }
            /* WARNING: Subroutine does not return */
            local_e0->~fixed_string();
        }
        local_fc = (uint)CONCAT71(in_register_00000089, param_5);
        puVar2 = (uint*)param_1->second();
        local_e8 = (float)*puVar2 / (float)param_4->field_8;
        lVar3 = param_1->second();
        local_e4 = (float)*(uint*)(lVar3 + 4) / (float)param_4->field_12;
        lVar3 = param_1->second();
        if (*(uint*)(lVar3 + 8) < 2) {
            plVar4 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar4 != (long*)0) {
                pvVar5 = param_2->SSOBeginPtr(param_1);
                local_ec = *(float*)pvVar5;
                pfVar6 = (float*)param_2->y();
                ImVec4::ImVec4(local_e0, local_ec, *pfVar6, local_e8, local_e4);
                new (local_138) math::Point<float>(0.0, 0.0);
                new (&local_f8) math::Point<float>(1.0, 1.0);
                new ((local_110 + 8)) math::ColourStorage8888<math::ARGB8StorageLayout>(255, 255, 255, 255);
                iVar1 = ((local_110 + 8))->GetX();
                new (local_110) oldscape::sidebars::SideBarData(iVar1, 0);
                (**(code**)(*plVar4 + 112))(plVar4, param_1, local_e0, local_138, &local_f8, 0, local_fc & 255, 0,
                                            (SideBarData*)local_110);
            }
        } else {
            lVar3 = param_1->second();
            local_e8 = local_e8 * (float)*(uint*)(lVar3 + 8);
            plVar4 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar4 != (long*)0) {
                pvVar5 = param_2->SSOBeginPtr(param_1);
                local_ec = *(float*)pvVar5;
                pfVar6 = (float*)param_2->y();
                ImVec4::ImVec4(local_e0, local_ec, *pfVar6, local_e8, local_e4);
                new (&local_f8) math::ColourStorage8888<math::ARGB8StorageLayout>(255, 255, 255, 255);
                iVar1 = local_f8.GetX();
                oldscape::sidebars::SideBarData::SideBarData(local_138, iVar1, 0);
                (**(code**)(*plVar4 + 128))(plVar4, param_1, local_e0, 0, (undefined1)local_fc, local_138);
            }
        }
        if (param_3 != (char*)0) {
            plVar4 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar4 != (long*)0) {
                new (local_138) math::Point<float>(local_e8, local_e4 * 0.5 + *(float*)(param_2 + 4));
                new (&local_f8) eastl::allocator("EASTL basic_string");
                new (local_e0) eastl::string(param_3, (allocator*)&local_f8);
                new ((local_110 + 8)) math::ColourStorage8888<math::ARGB8StorageLayout>(255, 255, 255, 255);
                iVar1 = ((local_110 + 8))->GetX();
                new (local_110) oldscape::sidebars::SideBarData(iVar1, 0);
                (**(code**)(*plVar4 + 144))(plVar4, local_138, local_e0, local_110);
                local_e0->~basic_string();
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail(local_e4);
        }
    }

    // 0x100936160, 288 bytes, placed by class name
    // VolumetricScatteringEffect::SetShaderConstants(render::DrawCallState&, render::RenderContext&, Shader&) const
    void VolumetricScatteringEffect::SetShaderConstants(DrawCallState* param_1, RenderContext* param_2,
                                                        Shader* param_3) {
        ShaderProgram* this_00;
        HashedString* pHVar1;
        Matrix44T local_68;

        this_00 = (ShaderProgram*)param_3->GetProgram();
        SetSharedShaderConstants(this, param_1, this_00);
        pHVar1 = (HashedString*)graphics::operator*((graphics*)187);
        this_00->SetShaderConstVector3(pHVar1, (Vector3T*)&field_992);
        pHVar1 = (HashedString*)graphics::operator*((graphics*)188);
        this_00->SetShaderConstVector3(pHVar1, (Vector3T*)&field_1008);
        new (&local_68) math::Matrix44T<float>(0.0, 8.0, 2.0, 10.0, 12.0, 4.0, 14.0, 6.0, 3.0, 11.0, 1.0, 9.0, 15.0,
                                               7.0, 13.0, 5.0);
        math::Matrix44T<float>::operator*=((Matrix44T<float>*)&local_68, 0.0625);
        pHVar1 = (HashedString*)graphics::operator*((graphics*)189);
        this_00->SetShaderConstMatrix4(pHVar1, 1, &local_68, 1);
    }

    // 0x100947bf0, 80 bytes, placed by class name
    // VolumetricScatteringEffect::InitialiseTweakVars(tweak::ContainerGroup&, EffectManager&)::$_4::operator()(tweak::Event const&) const
    /* VolumetricScatteringEffect::InitialiseTweakVars(tweak::ContainerGroup&,
   EffectManager&)::$_4::TEMPNAMEPLACEHOLDERVALUE(tweak::Event const&) const */

    void VolumetricScatteringEffect::InitialiseTweakVars(tweak::ContainerGroup&,
                                                         EffectManager&)::$_4::operator()(Event* param_1) {
        long lVar1;
        ShaderManager* pSVar2;

        if (param_1->field_16 == 2) {
            lVar1 = *(long*)(this + 8);
            shadersourceprovider::ClearResourceCache();
            DestroyShaders(*(VolumetricScatteringEffect**)this);
            CreateShaders(*(VolumetricScatteringEffect**)this);
            pSVar2 = (ShaderManager*)(*(RT7Core**)(lVar1 + 208))->GetShaderManager();
            pSVar2->ReloadShadersFromSource(0);
        }
    }

    // 0x100948f00, 64 bytes, placed by class name
    // VolumetricScatteringEffect::InitialiseTweakVars(tweak::ContainerGroup&, EffectManager&)::$_5::operator()(tweak::Event const&) const
    /* VolumetricScatteringEffect::InitialiseTweakVars(tweak::ContainerGroup&,
   EffectManager&)::$_5::TEMPNAMEPLACEHOLDERVALUE(tweak::Event const&) const */

    void VolumetricScatteringEffect::InitialiseTweakVars(tweak::ContainerGroup&,
                                                         EffectManager&)::$_5::operator()(Event* param_1) {
        VolumetricScatteringEffect* this_00;
        long* plVar2;

        if (param_1->field_16 == 3) {
            this_00 = *(VolumetricScatteringEffect**)this;
            plVar2 = (long*)shared_ptr<tweak::Control>::operator->((shared_ptr<tweak::Control>*)param_1);
            this_00->field_37 = (**(code**)(*plVar2 + 120))(plVar2);
            CreateShaders(this_00);
        }
    }

    // 0x100949830, 48 bytes, placed by class name
    // VolumetricScatteringEffect::InitialiseTweakVars(tweak::ContainerGroup&, EffectManager&)::$_6::operator()(tweak::Event const&) const
    /* VolumetricScatteringEffect::InitialiseTweakVars(tweak::ContainerGroup&,
   EffectManager&)::$_6::TEMPNAMEPLACEHOLDERVALUE(tweak::Event const&) const */

    void VolumetricScatteringEffect::InitialiseTweakVars(tweak::ContainerGroup&,
                                                         EffectManager&)::$_6::operator()(Event* param_1) {
        if (param_1->field_16 == 2) {
            CreateBayesianDitherTexture(*(VolumetricScatteringEffect**)this);
            DestroyShaders(*(VolumetricScatteringEffect**)this);
            CreateShaders(*(VolumetricScatteringEffect**)this);
        }
    }

    // 0x10094a150, 48 bytes, placed by class name
    // VolumetricScatteringEffect::InitialiseTweakVars(tweak::ContainerGroup&, EffectManager&)::$_7::operator()(tweak::Event const&) const
    /* VolumetricScatteringEffect::InitialiseTweakVars(tweak::ContainerGroup&,
   EffectManager&)::$_7::TEMPNAMEPLACEHOLDERVALUE(tweak::Event const&) const */

    void VolumetricScatteringEffect::InitialiseTweakVars(tweak::ContainerGroup&,
                                                         EffectManager&)::$_7::operator()(Event* param_1) {
        if (param_1->field_16 == 2) {
            CreateBlueNoiseDitherTexture(*(VolumetricScatteringEffect**)this);
            DestroyShaders(*(VolumetricScatteringEffect**)this);
            CreateShaders(*(VolumetricScatteringEffect**)this);
        }
    }

} // namespace jag::graphics
