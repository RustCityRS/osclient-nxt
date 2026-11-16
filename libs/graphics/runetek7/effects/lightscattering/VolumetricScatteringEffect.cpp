// libs/graphics/runetek7/effects/lightscattering/VolumetricScatteringEffect.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "VolumetricScatteringEffect.h"

namespace jag::graphics {
    // 0x100932690
    VolumetricScatteringEffect::VolumetricScatteringEffect(RT7Core& rt7Core)
        : ShaderEffect(rt7Core), field_24(false), field_25(0), field_26(false), field_27(false), field_28(false),
          field_29(false), field_32(32), field_36(true), field_37(1), field_40(4), field_208(rt7Core) {
        field_216 = (RenderTargetsManager*)rt7Core.GetRenderTargetsManager();
        new (field_224) shared_ptr();
        new (field_240) shared_ptr();
        new (field_256) shared_ptr();
        field_272 = false;
        field_273 = 0;
        new (field_280) shared_ptr();
        new (field_296) shared_ptr();
        new (field_312) shared_ptr();
        new (field_328) shared_ptr();
        field_344.unique_ptr<true, void>();
        new (&field_352) render::InputAssemblerState();
        local_40.field_0 = 0.0;
        new (&field_552) math::Transitionable<float>(local_40.field_0);
        local_40.field_0 = 1.0;
        new (&field_584) math::Transitionable<float>(local_40.field_0);
        local_40.field_0 = 1.0;
        new (&field_616) math::Transitionable<float>(local_40.field_0);
        local_40.field_0 = 1.0;
        new (&field_648) math::Transitionable<float>(local_40.field_0);
        local_40.field_0 = 1.0;
        new (&field_680) math::Transitionable<float>(local_40.field_0);
        local_40.field_0 = 0.8;
        new (&field_712) math::Transitionable<float>(local_40.field_0);
        local_40.field_0 = 0.8;
        new (&field_744) math::Transitionable<float>(local_40.field_0);
        local_40.field_0 = 40.0;
        new (&field_776) math::Transitionable<float>(local_40.field_0);
        ColourHSL local_40(1.0, 0.7, 0.5);
        new (&field_808) math::Transitionable<math::Vector3T<float>>(local_40);
        local_40 = math::ColourHSL(0.025, 0.025, 0.025);
        new (&field_856) math::Transitionable<math::Vector3T<float>>(local_40);
        new (&m_params) VolumetricScatteringParams();
        new (&field_992) math::Vector3T();
        new (&field_1008) math::Vector3T();
        auto renderToTextureHelper = rt7Core.GetRenderToTexture();
        new (&field_1024) postprocess::DepthDownSamplerFilter(renderToTextureHelper);
    }

    // 0x100932a20
    VolumetricScatteringEffect::~VolumetricScatteringEffect() {
        DestroyRenderingResources();
        field_1024.~DepthDownSamplerFilter();
        field_352.~InputAssemblerState();
        field_344.~unique_ptr();
        field_328->~shared_ptr();
        field_312->~shared_ptr();
        field_296->~shared_ptr();
        field_280->~shared_ptr();
        field_256->~shared_ptr();
        field_240->~shared_ptr();
        field_224->~shared_ptr();
        destruct<oldscape::highlight::NpcUID*>();
    }

    // 0x100932b90
    void VolumetricScatteringEffect::Initialise() {
        CreateRenderingResources();
    }

    // 0x100932ba0
    void VolumetricScatteringEffect::Update(const EffectManager& effectManager, const SceneViewData& sceneViewData) {
        Desc desc1;
        Desc desc2;
        uint8_t bVar3;
        uint8_t(*pauVar5)[64];
        RenderTargets* pRVar6;
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>* pcVar7;
        uint8_t in_stack_ffffffffffffff18[12];
        ImVec4 aIStack_da;
        uint8_t local_98[64];
        uint64_t local_48;

        if (*(long*)&sceneViewData.field_368 == 0) {
            LogAssert("false",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "lightscattering/VolumetricScatteringEffect.cpp",
                      51, "No valid forward lighting render target required for volumetric rendering");
        }
        UpdateParams();
        if (*(long*)&sceneViewData.field_368 == 0) {
            LogAssert("viewData.m_renderTargets.m_pRenderTargets",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "lightscattering/VolumetricScatteringEffect.cpp",
                      57, nullptr);
        }
        EffectManager* local_38 = effectManager;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* this_01 =
            (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)(*(RenderTargets**)&sceneViewData
                                                                                         .field_368)
                ->GetColourTargetTextures();
        bool cVar1 = this_01->empty();
        if (cVar1) {
            LogAssert("!viewData.m_renderTargets.m_pRenderTargets->GetColourTargetTextures().empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "lightscattering/VolumetricScatteringEffect.cpp",
                      58, nullptr);
        }
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* this_02 =
            (vector<render::Texture*,
                    eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)(*(RenderTargets**)&sceneViewData
                                                                                    .field_368)
                ->GetColourTargetTextures();
        uint64_t* puVar4 = (uint64_t*)(*this_02)[0];
        pauVar5 = (uint8_t(*)[64])(*puVar4)->second();
        uint8_t* midiPlayerMainThread = field_280;
        bool bVar2 = *midiPlayerMainThread != nullptr;
        if (bVar2) {
            pRVar6 = (RenderTargets*)(*midiPlayerMainThread).operator->();
            pcVar7 = (compressed_pair_imp<
                      eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                      eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>*)
                         pRVar6->GetDepthStencilTargetTexture();
            puVar4 = (uint64_t*)pcVar7->second();
            local_98._0_8_ = *puVar4;
            local_98._8_8_ = puVar4[1];
            local_98._16_8_ = puVar4[2];
            local_98._24_8_ = puVar4[3];
            local_98._32_8_ = puVar4[4];
            local_98._40_8_ = puVar4[5];
            local_98._48_8_ = puVar4[6];
            local_98._56_8_ = puVar4[7];
        } else {
            new (local_98) render::Texture::Desc();
        }
        auto this_03 = sceneViewData.GetStaticChildren();
        long lVar8 = (*this_03)[0];
        if (*(unsigned int*)*pauVar5 < *(unsigned int*)(lVar8 + 8)) {
            LogAssert("(uint)viewport.m_Width <= colourTextureDesc.m_Width",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "lightscattering/VolumetricScatteringEffect.cpp",
                      64, nullptr);
        }
        if (*(unsigned int*)(*pauVar5 + 4) < *(unsigned int*)(lVar8 + 12)) {
            LogAssert("(uint)viewport.m_Height <= colourTextureDesc.m_Height",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "lightscattering/VolumetricScatteringEffect.cpp",
                      65, nullptr);
        }
        if ((*(int*)(lVar8 + 8) != local_98._0_4_) || (*(int*)(lVar8 + 12) != local_98._4_4_)) {
            pcVar7 = (compressed_pair_imp<
                      eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                      eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>*)(*(RenderTargets**)&sceneViewData
                                                                                          .field_368)
                         ->GetDepthStencilTargetTexture();
            puVar4 = (uint64_t*)pcVar7->second();
            desc1._64_4_ = (int)*puVar4;
            desc1._0_64_ = *pauVar5;
            desc2.field_56 = in_stack_ffffffffffffff18[0];
            desc2._57_3_ = in_stack_ffffffffffffff18._1_3_;
            desc2.field_60 = in_stack_ffffffffffffff18._4_4_;
            desc2._64_4_ = in_stack_ffffffffffffff18._8_4_;
            desc2._0_56_ = *(uint8_t(*)[56])(puVar4 + 1);
            cVar1 = CreateRenderTargets(desc1, desc2, *(unsigned int*)(lVar8 + 8), *(unsigned int*)(lVar8 + 12));
            if (!cVar1) {
                return;
            }
        }
        pRVar6 = (RenderTargets*)(*midiPlayerMainThread).operator->();
        pcVar7 = (compressed_pair_imp<
                  eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                  eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>*)pRVar6->GetDepthStencilTargetTexture();
        lVar8 = pcVar7->second();
        EffectManager* this_00 = local_38;
        bool bVar14 = 1 < *(unsigned int*)(lVar8 + 16);
        bVar2 = field_272;
        if (bVar2 != bVar14) {
            field_272 = bVar14;
        }
        cVar1 = local_38->IsEnabled(31);
        int iVar13 = 0;
        if (!cVar1) {
            cVar1 = this_00->IsEnabled(32);
            iVar13 = 1;
            if (!cVar1) {
                cVar1 = this_00->IsEnabled(33);
                iVar13 = 2;
                if (!cVar1) {
                    bVar3 = this_00->IsEnabled(34);
                    iVar13 = (unsigned int)bVar3 * 4 - 1;
                }
            }
        }
        if (iVar13 == field_544) {
            if (bVar2 == bVar14)
                goto LAB_100932e6e;
        } else {
            field_544 = iVar13;
        }
        CreateShaders();
    LAB_100932e6e:
        auto pMVar9 = sceneViewData.GetScreen();
        field_48 = *pMVar9;
        pMVar9 = (Matrix44T<float>*)sceneViewData.GetImmediateThreadPool();
        math::Matrix44Inverse<float>(field_112, nullptr, *pMVar9);
        auto pRVar10 = sceneViewData.GetOrigin();
        ReturnValue local_d8 = *pRVar10;
        ReturnValue RStack_d0 = pRVar10[1];
        ReturnValue local_c8 = pRVar10[2];
        ReturnValue RStack_c0 = pRVar10[3];
        ReturnValue local_b8 = pRVar10[4];
        ReturnValue RStack_b0 = pRVar10[5];
        ReturnValue local_a8 = pRVar10[6];
        ReturnValue RStack_a0 = pRVar10[7];
        local_d8 = math::Matrix44T<float>::Invert(nullptr);
        uint32_t uVar15 = 0;
        float fVar16 = 0.0;
        new (&local_48) ImVec4(0.0, 0.0, -1.0, 1.0);
        uint64_t local_58 = local_48 * local_d8;
        uint32_t uStack_50 = uVar15;
        float fStack_4c = fVar16;
        (*((local_98 + 64))) /= fVar16;
        uVar15 = 0;
        fVar16 = 0.0;
        new (&aIStack_da - 14) ImVec4(0.0, 0.0, 1.0, 1.0);
        local_48 = (*((&aIStack_da - 14))) * local_d8;
        uint32_t uStack_40 = uVar15;
        float fStack_3c = fVar16;
        local_48 /= fVar16;
        uint32_t* puVar11 = (uint32_t*)((local_98 + 64))->second();
        local_38 = (EffectManager*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)(*puVar11));
        auto pfVar12 = local_48.second();
        fVar16 = *pfVar12;
        field_176.Set(fVar16 * local_38._0_4_, local_38._0_4_ - fVar16, fVar16, 1.0 / fVar16);
        Vector3T<float>* vector3 = (Vector3T<float>*)sceneViewData.SSOBeginPtr();
        field_192.SetXYZ(*vector3);
    }

    // 0x100932fe0
    void VolumetricScatteringEffect::UpdateParams() {
        uint64_t local_30[2];

        unsigned long long uVar2 = FrameTime::GetCurrentTimeMS();
        bool cVar1 = field_208->GetEffectManager()->IsEnabled(94);
        unsigned long long arg1 = 18446744073709551615;
        if (cVar1) {
            arg1 = uVar2;
        }
        float fVar3 = (float)field_552.GetValue(arg1);
        m_params = fVar3;
        fVar3 = (float)field_584.GetValue(arg1);
        field_916 = fVar3;
        fVar3 = (float)field_616.GetValue(arg1);
        field_920 = fVar3;
        fVar3 = (float)field_648.GetValue(arg1);
        field_924 = fVar3;
        fVar3 = (float)field_680.GetValue(arg1);
        field_928 = fVar3;
        fVar3 = (float)field_712.GetValue(arg1);
        field_932 = fVar3;
        fVar3 = (float)field_744.GetValue(arg1);
        field_936 = fVar3;
        fVar3 = (float)field_776.GetValue(arg1);
        field_940 = fVar3;
        local_30[0] = field_808.GetValue(arg1);
        field_944.SetXYZ(*local_30);
        local_30[0] = field_856.GetValue(arg1);
        field_960.SetXYZ(*local_30);
    }

    // 0x100933190
    unsigned long VolumetricScatteringEffect::CreateRenderTargets(render::Texture::Desc desc1,
                                                                  render::Texture::Desc desc2, unsigned int arg3,
                                                                  unsigned int arg4) {
        RenderTargets* pRVar4;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* this_00;
        uint64_t* puVar5;
        long lVar6;
        long* plVar7;
        unsigned long uVar8;
        RenderTargetsManager local_118;
        shared_ptr* local_50;
        shared_ptr* local_48;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_40;

        DestroyRenderTargets();
        desc1.field_16 = 1;
        RenderTargetsManager* pRVar2 = field_216;
        uint64_t local_a8 = desc1.field_48;
        char cStack_a0 = desc1.field_56;
        uint32_t uStack_9f = desc1._57_3_;
        uint32_t uStack_9c = desc1.field_60;
        uint8_t local_b8 = desc1.field_32;
        uint32_t uStack_b7 = desc1._33_3_;
        uint32_t uStack_b4 = desc1.field_36;
        uint8_t uStack_b0 = desc1.field_40;
        uint64_t uStack_af = desc1._41_7_;
        uint32_t local_c8 = 1;
        int iStack_c4 = desc1.field_20;
        int iStack_c0 = desc1.field_24;
        int iStack_bc = desc1.field_28;
        local_118._68_4_ = arg4;
        local_118._64_4_ = arg3;
        int iStack_d0 = desc1.field_8;
        int iStack_cc = desc1.field_12;
        desc1.field_0 = arg3;
        desc1.field_4 = arg4;
        desc1._64_4_ = arg3;
        unsigned int uStack000000000000004c = arg4;
        Desc local_98;
        local_118.Register(pRVar2, 14758042, *3553, (int)&local_118 + 64, DAT_00000001, (int)&desc1 + 64, false);
        uint8_t* puVar1 = field_280;
        *puVar1 = local_118;
        bool cVar3 = puVar1->operator_cast_to_bool();
        if (cVar3) {
            pRVar4 = (RenderTargets*)(*puVar1).operator->();
            this_00 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                          pRVar4->GetColourTargetTextures();
            puVar5 = (uint64_t*)(*this_00)[0];
            plVar7 = (long*)*puVar5;
            lVar6 = this_00->Instance();
            (**(void (**)(...))(*plVar7 + 24))(plVar7, lVar6 + 80, 0);
            pRVar4 = (RenderTargets*)(*puVar1).operator->();
            plVar7 = (long*)pRVar4->GetDepthStencilTargetTexture();
            lVar6 = pRVar4->Instance();
            (**(void (**)(...))(*plVar7 + 24))(plVar7, lVar6 + 80, 0);
            uVar8 = (((uint64_t)((int64_t)((unsigned long)plVar7 >> 8)) << 8) | (uint8_t)1);
            if (field_37 == 0)
                goto LAB_100933593;
            desc1.field_0 = arg3 >> 1;
            desc1.field_4 = arg4 >> 1;
            pRVar2 = field_216;
            local_a8 = desc1.field_48;
            cStack_a0 = desc1.field_56;
            uStack_9f = desc1._57_3_;
            uStack_9c = desc1.field_60;
            local_b8 = desc1.field_32;
            uStack_b7 = desc1._33_3_;
            uStack_b4 = desc1.field_36;
            uStack_b0 = desc1.field_40;
            uStack_af = desc1._41_7_;
            local_c8 = desc1.field_16;
            iStack_c4 = desc1.field_20;
            iStack_c0 = desc1.field_24;
            iStack_bc = desc1.field_28;
            local_118._68_4_ = desc1.field_4;
            local_118._64_4_ = desc1.field_0;
            iStack_d0 = desc1.field_8;
            iStack_cc = desc1.field_12;
            uStack000000000000004c = desc1.field_4;
            desc1._64_4_ = desc1.field_0;
            local_98 = render::Texture::Desc();
            local_118.Register(pRVar2, 14758053, *3553, (int)&local_118 + 64, nullptr, (int)&desc1 + 64, false);
            puVar1 = field_296;
            *puVar1 = local_118;
            cVar3 = puVar1->operator_cast_to_bool();
            if (cVar3) {
                pRVar4 = (RenderTargets*)(*puVar1).operator->();
                plVar7 = (long*)pRVar4->GetDepthStencilTargetTexture();
                lVar6 = pRVar4->Instance();
                (**(void (**)(...))(*plVar7 + 24))(plVar7, lVar6 + 80, 0);
            }
            pRVar2 = field_216;
            local_118._68_4_ = desc1.field_4;
            local_118._64_4_ = desc1.field_0;
            local_a8 = desc1.field_48;
            cStack_a0 = desc1.field_56;
            uStack_9f = desc1._57_3_;
            uStack_9c = desc1.field_60;
            local_b8 = desc1.field_32;
            uStack_b7 = desc1._33_3_;
            uStack_b4 = desc1.field_36;
            uStack_b0 = desc1.field_40;
            uStack_af = desc1._41_7_;
            local_c8 = desc1.field_16;
            iStack_c4 = desc1.field_20;
            iStack_c0 = desc1.field_24;
            iStack_bc = desc1.field_28;
            iStack_d0 = desc1.field_8;
            iStack_cc = desc1.field_12;
            local_50 = (shared_ptr*)puVar1;
            local_98 = render::Texture::Desc();
            local_118 = render::Texture::Desc();
            local_40.Register(pRVar2, 14758068, *3553, (int)&local_118 + 64, DAT_00000001, (unsigned int)&local_118,
                              false);
            local_48 = (shared_ptr*)field_312;
            *local_48 = local_40;
            pRVar2 = field_216;
            local_118._68_4_ = desc1.field_4;
            local_118._64_4_ = desc1.field_0;
            local_a8 = desc1.field_48;
            cStack_a0 = desc1.field_56;
            uStack_9f = desc1._57_3_;
            uStack_9c = desc1.field_60;
            local_b8 = desc1.field_32;
            uStack_b7 = desc1._33_3_;
            uStack_b4 = desc1.field_36;
            uStack_b0 = desc1.field_40;
            uStack_af = desc1._41_7_;
            local_c8 = desc1.field_16;
            iStack_c4 = desc1.field_20;
            iStack_c0 = desc1.field_24;
            iStack_bc = desc1.field_28;
            iStack_d0 = desc1.field_8;
            iStack_cc = desc1.field_12;
            local_98 = render::Texture::Desc();
            local_118 = render::Texture::Desc();
            local_40.Register(pRVar2, 14758090, *3553, (int)&local_118 + 64, DAT_00000001, (unsigned int)&local_118,
                              false);
            *field_328 = local_40;
            cVar3 = shared_ptr::operator_cast_to_bool(local_50);
            uVar8 = (((uint64_t)((int64_t)((unsigned long)&local_118 >> 8)) << 8) | (uint8_t)1);
            if (cVar3) {
                cVar3 = shared_ptr::operator_cast_to_bool(local_48);
                if (cVar3) {
                    cVar3 = field_328->operator_cast_to_bool();
                    if (cVar3)
                        goto LAB_100933593;
                }
            }
            DestroyRenderTargets();
        }
        uVar8 = 0;
    LAB_100933593:
        return uVar8 & 4294967295;
    }

    // 0x1009335d0
    uint64_t VolumetricScatteringEffect::CreateShaders() {
        bool bVar4;

        field_273 = 0;
        if (field_272 == false) {
            bVar4 = false;
        } else {
            bVar4 = field_37 == 0;
        }
        uint32_t uVar2 = field_40;
        uint8_t bVar1 = field_37;
        GetPos();
        bool cVar3 = CreateRaymarchShader((uint8_t)this, (unsigned int)bVar4, (uint8_t)uVar2, (unsigned int)bVar1);
        if (((cVar3) && (cVar3 = CreateDepthDownsampleShader(field_272), cVar3)) &&
            (cVar3 = CreateBilateralBlurShader((uint8_t)this), cVar3)) {
            cVar3 = CreateBilateralUpsampleShader(field_272);
            if (cVar3) {
                return 1;
            }
        }
        return 0;
    }

    // 0x1009336a0
    uint64_t VolumetricScatteringEffect::CreateRenderingResources() {

        if (CreateBayesianDitherTexture()) {
            if (CreateShaders()) {
                return 1;
            }
        }
        DestroyRenderingResources();
        return 0;
    }

    // 0x1009336e0
    void VolumetricScatteringEffect::CreateNoiseTexture() {
        return 1;
    }

    // 0x1009336f0
    void VolumetricScatteringEffect::CreateBayesianDitherTexture() {
        uint64_t uStack_20 = 5823278496701526064;
        unsigned char* arg1 = (unsigned char*)(6980650618488651776).data();
        if (SetDitherTexture(arg1, 4, 4) != '\0') {
            field_40 = 4;
        }
    }

    // 0x100933760
    void VolumetricScatteringEffect::DestroyRenderingResources() {
        DestroyShaders();
        DestroyRenderTargets();
        field_344.reset(nullptr);
    }

    // 0x100933790
    void VolumetricScatteringEffect::DestroyShaders() {
        field_1024.Destroy();
        Singleton<render::ShaderProgramManager>* this_00 = (Singleton<render::ShaderProgramManager>*)&field_352;
        this_00->Destroy();
        auto pSVar1 = this_00->Instance();
        pSVar1->Unregister(*field_224);
        pSVar1 = (ShaderProgramManager*)pSVar1->Instance();
        pSVar1->Unregister(*field_240);
        pSVar1 = (ShaderProgramManager*)pSVar1->Instance();
        pSVar1->Unregister(*field_256);
    }

    // 0x100933800
    void VolumetricScatteringEffect::DestroyRenderTargets() {
        field_216->Unregister(*field_280);
        field_216->Unregister(*field_296);
        field_216->Unregister(*field_312);
        field_216->Unregister(*field_328);
    }

    // 0x100933890
    void VolumetricScatteringEffect::InitialiseTweakVars(tweak::ContainerGroup& containerGroup,
                                                         EffectManager& effectManager) {
        reference_wrapper<EffectManager>* reference_wrapper;
        Range<float>* in_R8;
        Range<float>* in_R9;
        uint8_t local_c8[24];
        shared_ptr<tweak::Container> local_80;
        float* local_68[6];

        new (local_68) eastl::string("Volumetrics");
        (containerGroup._vptr[7].Clear)(&local_80, containerGroup, (eastl::string*)local_68);
        auto pCVar1 = local_80.operator->();
        void* local_88 = Tweaky_LambdaToggleEffect;
        uint64_t local_b0 = std::ref<EffectManager>(effectManager);
        reference_wrapper = (reference_wrapper<EffectManager>*)&local_88;
        std::bind<void (*)(EffectManager&, tweak::Event const&, EffectType const&),
                  std::reference_wrapper<EffectManager>, std::placeholders::__ph<1> const&, EffectType>(
            (void_______jag__graphics__EffectManager___jag__tweak__Event_const___jag__graphics__EffectType_const__)
                local_c8,
            *reference_wrapper, local_b0, 50);
        local_68->function<
            std::__bind<void (*)(EffectManager&, tweak::Event const&, EffectType const&),
                        std::reference_wrapper<EffectManager>, std::placeholders::__ph<1> const&, EffectType>,
            void>(reference_wrapper);
        pCVar1->AddCheckBox("Volumetric Scattering enabled", *local_68, false);
        pCVar1 = (Container*)local_80.operator->();
        local_68[0] = (float*)field_552.second();
        pCVar1->AddSlider<float>("Density", 0.0, 10.0, 0.1, *local_68);
        pCVar1 = (Container*)local_80.operator->();
        local_68[0] = (float*)field_584.second();
        pCVar1->AddSlider<float>("Inscattering amount", 0.0, 10.0, 0.1, *local_68);
        pCVar1 = (Container*)local_80.operator->();
        local_68[0] = (float*)field_616.second();
        pCVar1->AddSlider<float>("Outscattering amount", 0.0, 10.0, 0.1, *local_68);
        pCVar1 = (Container*)local_80.operator->();
        local_68[0] = (float*)field_648.second();
        pCVar1->AddSlider<float>("Skybox Density Multiplier", 0.0, 5.0, 0.1, *local_68);
        pCVar1 = (Container*)local_80.operator->();
        local_68[0] = (float*)field_680.second();
        pCVar1->AddSlider<float>("Shadow Exaggeration Factor", 0.0, 11.0, 0.1, *local_68);
        pCVar1 = (Container*)local_80.operator->();
        local_68[0] = (float*)field_712.second();
        pCVar1->AddSlider<float>("Scattering direction (G)", -1.0, 1.0, 0.001, *local_68);
        pCVar1 = (Container*)local_80.operator->();
        local_68[0] = (float*)field_744.second();
        pCVar1->AddSlider<float>("Sky Scattering Direction (G)", -1.0, 1.0, 0.001, *local_68);
        pCVar1 = (Container*)local_80.operator->();
        local_68[0] = (float*)field_776.second();
        pCVar1->AddSlider<float>("Edge sharpness", 0.0, 512.0, 1.0, *local_68);
        auto pVVar2 = field_808.GetDefaultValue();
        pCVar1 = (Container*)local_80.operator->();
        Point<float> local_a8(0.0, 1.0);
        Point<float> local_a0(0.0, 10.0);
        pCVar1->AddColourPickerHDR("Lit Fog Colour", pVVar2, &field_972, in_R8, in_R9);
        pVVar2 = (Vector3T<float>*)field_856.GetDefaultValue();
        pCVar1 = (Container*)local_80.operator->();
        Point<float> local_98(0.0, 1.0);
        Point<float> local_90(0.0, 10.0);
        pCVar1->AddColourPickerHDR("Unlit Fog Colour", pVVar2, &field_976, in_R8, in_R9);
        pCVar1 = (Container*)local_80.operator->();
        std::function<void(tweak::Event const&)>::function<
            VolumetricScatteringEffect::InitialiseTweakVars(tweak::ContainerGroup&, EffectManager&)::__4, void>(
            (function<void(tweak::Event const&)>*)local_68, (__4*)this);
        pCVar1->AddButton("Reload shaders", *local_68);
        pCVar1 = (Container*)local_80.operator->();
        local_68[0] = (float*)&field_32;
        pCVar1->AddSlider<int>("Samples", 1.0, 128.0, 1.0, *local_68);
        pCVar1 = (Container*)local_80.operator->();
        pCVar1->AddCheckBox("Bilateral Blur", field_36);
        pCVar1 = (Container*)local_80.operator->();
        std::function<void(tweak::Event const&)>::function<
            VolumetricScatteringEffect::InitialiseTweakVars(tweak::ContainerGroup&, EffectManager&)::__5, void>(
            (function<void(tweak::Event const&)>*)local_68, (__5*)this);
        pCVar1->AddCheckBox("Use half-res rendering", *local_68, false);
        pCVar1 = (Container*)local_80.operator->();
        pCVar1->AddCheckBox("Show dither texture", field_24);
        pCVar1 = (Container*)local_80.operator->();
        std::function<void(tweak::Event const&)>::function<
            VolumetricScatteringEffect::InitialiseTweakVars(tweak::ContainerGroup&, EffectManager&)::__6, void>(
            (function<void(tweak::Event const&)>*)local_68, (__6*)this);
        pCVar1->AddButton("Create Bayesian Dither Texture", *local_68);
        pCVar1 = (Container*)local_80.operator->();
        std::function<void(tweak::Event const&)>::function<
            VolumetricScatteringEffect::InitialiseTweakVars(tweak::ContainerGroup&, EffectManager&)::__7, void>(
            (function<void(tweak::Event const&)>*)local_68, (__7*)this);
        pCVar1->AddButton("Create Blue Noise Dither Texture", *local_68);
        pCVar1 = (Container*)local_80.operator->();
        pCVar1->AddCheckBox("Show depth RenderTarget", field_26);
        pCVar1 = (Container*)local_80.operator->();
        pCVar1->AddCheckBox("Show half-res depth RT", field_27);
        pCVar1 = (Container*)local_80.operator->();
        pCVar1->AddCheckBox("Show half-res raymarch RT1", field_28);
        pCVar1 = (Container*)local_80.operator->();
        pCVar1->AddCheckBox("Show half-res raymarch RT2", field_29);
    }

    // 0x100933ff0
    void VolumetricScatteringEffect::SetParams(const VolumetricScatteringParams& volumetricScatteringParams,
                                               long long arg2, unsigned long long arg3) {
        field_552.SetValue(volumetricScatteringParams, arg2, arg3);
        field_584.SetValue(*((float*)((long)&volumetricScatteringParams.field_0 + 4)), arg2, arg3);
        field_616.SetValue(volumetricScatteringParams.field_8, arg2, arg3);
        field_648.SetValue(*((float*)((long)&volumetricScatteringParams.field_8 + 4)), arg2, arg3);
        field_680.SetValue(volumetricScatteringParams.field_16, arg2, arg3);
        field_712.SetValue(*((float*)((long)&volumetricScatteringParams.field_16 + 4)), arg2, arg3);
        field_744.SetValue(volumetricScatteringParams.field_24, arg2, arg3);
        field_776.SetValue(*((float*)((long)&volumetricScatteringParams.field_24 + 4)), arg2, arg3);
        field_808.SetValue(volumetricScatteringParams.field_32, arg2, arg3);
        field_856.SetValue(volumetricScatteringParams.field_48, arg2, arg3);
    }

    // 0x100934170
    unsigned long VolumetricScatteringEffect::CreateRaymarchShader(bool arg1, int arg2, bool arg3,
                                                                   GraphicsQuality graphicsQuality) {
        VertexElementDesc* vertexElementDesc;
        uint64_t in_register_00000011;
        uint64_t in_register_00000039;
        basic_ostream<char, std::char_traits<char> _>* basic_ostream;
        shared_ptr<render::ShaderProgram>* shared_ptr;
        uint8_t local_190[280];
        ReturnValue local_68;

        EffectList local_78;
        if (arg2 != 0) {
            local_78.Add(89);
        }
        int iVar5 = *(int*)((((uint64_t)in_register_00000039 << 8) | (uint8_t)arg1) + 544);
        uint8_t bVar4 = 31;
        if (iVar5 - 1U < 3) {
            bVar4 = (char)iVar5 + 31;
        }
        local_78.Add((unsigned int)bVar4);
        new (local_190) RT7PixelShaderSourceStream(local_78, 2, 1, 2, 1, 1, 1, 24);
        if ((char)graphicsQuality != '\0') {
            std::operator<<((basic_ostream<char, std::char_traits<char> _>*)(local_190 + 16),
                            "#define OUTPUT_SCATTERING_ONLY 1\n");
        }
        basic_ostream = (basic_ostream<char, std::char_traits<char> _>*)(local_190 + 16);
        basic_ostream<char, std::char_traits<char> _>* pbVar1 = std::operator<<(
            basic_ostream,
            "UNIFORM_BUFFER_BEGIN(SunlightViewTransform)\n   uniform mat4 uSunlightViewMatrix;\nUNIFORM_BUFFER_END\n");
        auto local_40 = DirLightShadowMapping::BuildUniforms();
        pbVar1 = std::operator<<(pbVar1, &local_40);
        auto local_58 = DirLightShadowMapping::BuildFSFragment(5);
        std::operator<<(pbVar1, &local_58);
        local_40 = DirLights::BuildUniforms();
        std::operator<<(basic_ostream,
                        (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_40);
        pbVar1 = std::operator<<(basic_ostream, "vec2 DITHER_SIZE = vec2(");
        iVar5 = (int)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg3);
        pbVar1 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar1, iVar5);
        std::operator<<(pbVar1, ".0);\n");
        pbVar1 = std::operator<<(basic_ostream, "vec2 INV_DITHER_SIZE = vec2(");
        pbVar1 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar1,
                                                                                          1.0 / (float)iVar5);
        std::operator<<(pbVar1, ");\n");
        auto pcVar2 = shadersourceprovider::GetShaderString(110);
        std::operator<<(basic_ostream, pcVar2);
        pcVar2 = (char*)basic_ostream->Instance();
        local_40 = postprocess::PostProcessVS::BuildVSFragment();
        auto str2 = local_40.c_str();
        local_58 = local_190->str();
        vertexElementDesc = (VertexElementDesc*)local_58.c_str();
        local_68.RegisterFromSourceString(pcVar2, str2, vertexElementDesc, 62757712, '\x02');
        shared_ptr =
            (shared_ptr<render::ShaderProgram>*)((((uint64_t)in_register_00000039 << 8) | (uint8_t)arg1) + 224);
        *shared_ptr = local_68;
        long lVar3 = shared_ptr->end();
        return lVar3 != 0 & 4294967295;
    }

    // 0x100934420
    void VolumetricScatteringEffect::CreateDepthDownsampleShader(bool arg1) {
        field_1024.Init(arg1);
    }

    // 0x100934440
    unsigned long VolumetricScatteringEffect::CreateBilateralBlurShader(bool arg1) {
        VertexElementDesc* vertexElementDesc;
        uint64_t in_register_00000039;
        basic_ostream<char, std::char_traits<char> _>* basic_ostream;
        shared_ptr<render::ShaderProgram>* shared_ptr;
        uint8_t local_178[280];
        ReturnValue local_30;

        new (local_178) render::PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
        auto pcVar1 = shadersourceprovider::GetShaderString(2);
        basic_ostream = (basic_ostream<char, std::char_traits<char> _>*)(local_178 + 16);
        std::operator<<(basic_ostream, pcVar1);
        pcVar1 = (char*)basic_ostream->Instance();
        auto local_60 = postprocess::PostProcessVS::BuildVSFragment();
        auto str2 = local_60.c_str();
        auto local_48 = local_178->str();
        vertexElementDesc = (VertexElementDesc*)local_48.c_str();
        local_30.RegisterFromSourceString(pcVar1, str2, vertexElementDesc, 62757712, '\x02');
        shared_ptr =
            (shared_ptr<render::ShaderProgram>*)((((uint64_t)in_register_00000039 << 8) | (uint8_t)arg1) + 240);
        *shared_ptr = local_30;
        long lVar2 = shared_ptr->end();
        return lVar2 != 0 & 4294967295;
    }

    // 0x1009345a0
    unsigned long VolumetricScatteringEffect::CreateBilateralUpsampleShader(bool arg1) {
        VertexElementDesc* vertexElementDesc;
        basic_ostream<char, std::char_traits<char> _>* basic_ostream;
        uint8_t local_178[280];
        ReturnValue local_48;

        new (local_178) render::PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
        auto local_38 = DirLights::BuildUniforms();
        basic_ostream = (basic_ostream<char, std::char_traits<char> _>*)(local_178 + 16);
        std::operator<<(basic_ostream,
                        (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_38);
        if (arg1) {
            std::operator<<(basic_ostream, "#define MSAA;\n");
        }
        std::operator<<(basic_ostream, "#define USE_TEXTURE_GATHER 1;\n");
        auto pcVar1 = shadersourceprovider::GetShaderString(3);
        std::operator<<(basic_ostream, pcVar1);
        pcVar1 = (char*)basic_ostream->Instance();
        local_38 = postprocess::PostProcessVS::BuildVSFragment();
        auto str2 = local_38.c_str();
        auto local_60 = local_178->str();
        vertexElementDesc = (VertexElementDesc*)local_60.c_str();
        local_48.RegisterFromSourceString(pcVar1, str2, vertexElementDesc, 62757712, '\x02');
        *field_256 = local_48;
        long lVar2 = field_256->end();
        return lVar2 != 0 & 4294967295;
    }

    // 0x1009348b0
    uint32_t VolumetricScatteringEffect::SetDitherTexture(const unsigned char* arg1, int arg2, int arg3) {
        long* plVar2;
        long lVar3;
        uint8_t local_80[88];
        unique_ptr<render::Texture2D> local_28;

        new ((local_80 + 64)) render::ResourceDataT(arg1, 0, 0, false);
        new (local_80) render::Texture::Desc();
        local_80[32] = 0;
        local_80._12_4_ = 23;
        local_80._0_4_ = arg2;
        local_80._4_4_ = arg3;
        std::make_unique<render::Texture2D, char const(&)[14]>(&local_28);
        uint32_t uVar1 = ((Texture2D*)local_28.operator->())->Create(*local_80, (local_80 + 64), arg3 * arg2);
        if ((char)uVar1 != '\0') {
            plVar2 = (long*)(*&local_28).operator->();
            lVar3 = &local_28->Instance();
            (**(void (**)(...))(*plVar2 + 24))(plVar2, lVar3 + 144, 0);
            (&field_344)->operator=(&local_28);
        }
        ((local_80 + 64))->~ResourceDataT();
        return uVar1;
    }

    // 0x1009349b0
    void VolumetricScatteringEffect::CreateBlueNoiseDitherTexture() {
        field_40 = 128;
        SetDitherTexture(&BlueNoise::Values, 128, 128);
    }

    // 0x100934a80
    bool VolumetricScatteringEffect::IsReady() const {
        bool cVar1 = field_224->operator_cast_to_bool();
        if ((((!cVar1) || (cVar1 = field_1024.IsReady(), !cVar1)) ||
             (cVar1 = field_240->operator_cast_to_bool(), !cVar1)) ||
            (cVar1 = field_256->operator_cast_to_bool(), !cVar1)) {
            return 0;
        }
        return (&field_344)->operator_cast_to_bool();
    }

    // 0x100934b50
    void
    VolumetricScatteringEffect::UsePostProcessShader(render::DrawCallState& drawCallState,
                                                     const graphicutils::RenderToTextureHelper& renderToTextureHelper,
                                                     const render::ShaderProgram& shaderProgram) {
        VertexDeclaration* vertexDeclaration;

        vertexDeclaration = (VertexDeclaration*)shaderProgram.second();
        VertexBuffer* vertexBuffer = (VertexBuffer*)renderToTextureHelper.GetBoneIDMap();
        field_352.SetVertexStreamData(vertexDeclaration, vertexBuffer);
        ((RenderPipelineState*)drawCallState.GetRenderPipelineState())->SetShaderProgram(shaderProgram);
        drawCallState.SetInputAssemblerState(&field_352);
    }

    // 0x100934bc0
    unsigned long VolumetricScatteringEffect::CanSkip(const EffectManager& effectManager) const {
        uint64_t unaff_R12;
        float fVar4;

        unsigned long long arg1 = FrameTime::GetCurrentTimeMS();
        bool cVar1 = effectManager.IsEnabled(30);
        uint64_t uVar3 = (uint64_t)((unsigned long)unaff_R12 >> 8);
        unsigned long uVar2 = (((uint64_t)uVar3 << 8) | (uint8_t)1);
        if (cVar1) {
            cVar1 = effectManager.IsEnabled(29);
            if (cVar1) {
                fVar4 = (float)field_552.GetValue(arg1);
                if (fVar4 != 0.0) {
                    fVar4 = (float)field_584.GetValue(arg1);
                    if (fVar4 == 0.0) {
                        fVar4 = (float)field_616.GetValue(arg1);
                        uVar2 = (((uint64_t)uVar3 << 8) | (uint8_t)(fVar4 == 0.0));
                    } else {
                        uVar2 = 0;
                    }
                }
            }
        }
        return uVar2 & 4294967295;
    }

    // 0x100934c60
    void VolumetricScatteringEffect::IsSupported() const {
        ((RenderDevice*)Instance())->GetGpuMemoryProfile() >= 1;
    }

    // 0x100934c90
    uint64_t VolumetricScatteringEffect::OnQualityChange(GraphicsQuality graphicsQuality) {
        if ((IsSupported() == '\0') || (DestroyShaders(), graphicsQuality == 4294967295)) {
            return 0;
        }
        return CreateShaders();
    }

    // 0x100934cd0
    void VolumetricScatteringEffect::Render(render::RenderContext& renderContext,
                                            const render::RenderTargets* renderTargets, const render::Texture* texture,
                                            const render::Viewport& viewport,
                                            const graphicutils::RenderToTextureHelper& renderToTextureHelper) {
        uint8_t* particle;
        ShaderProgram* pSVar4;
        RenderTargets* pRVar5;
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>* pcVar6;
        int* piVar7;
        long lVar8;
        Texture* pTVar9;
        RenderPipelineState* pRVar12;
        HashedString* pHVar13;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* pvVar15;
        ShaderProgram* shaderProgram;
        Data local_148;
        shared_ptr<render::RenderTargets>* local_100;
        float local_b0;
        float local_ac;
        Viewport local_a8;
        AutoSingleton<ShaderThreadPoolSingleton> local_78;

        shared_ptr<render::RenderTargets>* local_80 = (shared_ptr<render::RenderTargets>*)field_280;
        bool cVar1 = local_80->operator_cast_to_bool();
        if (!cVar1) {
            return;
        }
        local_a8.field_16 = viewport.field_16;
        local_a8.field_20 = viewport.field_20;
        local_a8.field_0 = viewport.field_0;
        local_a8.field_4 = viewport.field_4;
        local_a8.field_8 = viewport.field_8;
        local_a8.field_12 = viewport.field_12;
        auto this_00 = field_208->GetEffectManager();
        auto local_88 = this_00->GetEffect<SunlightDirectLighting>(106);
        uint64_t* puVar3 = (uint64_t*)local_88->GetDefaultValue();
        local_148._0_8_ = *puVar3;
        local_148._8_8_ = puVar3[1];
        int iVar2 = *(int*)(puVar3 + 2);
        local_148._20_4_ = *(uint32_t*)((long)puVar3 + 20);
        local_148._24_4_ = *(uint32_t*)(puVar3 + 3);
        local_148._28_4_ = *(uint32_t*)((long)puVar3 + 28);
        local_148._32_8_ = puVar3[4];
        uint64_t uStack_120 = puVar3[5];
        local_148._16_4_ = iVar2;
        if (field_273 == '\0') {
            local_68 = EffectList();
            local_68.Add(106);
            local_68.Add(29);
            local_68.Add(30);
            pSVar4 = (ShaderProgram*)(*field_256).operator->();
            pSVar4->WaitForAsyncCompile();
            pSVar4 = (ShaderProgram*)**field_256;
            this_00->BindConstBufferToShader(*pSVar4, local_68);
            pSVar4 = (ShaderProgram*)(*field_224).operator->();
            pSVar4->WaitForAsyncCompile();
            pSVar4 = (ShaderProgram*)**field_224;
            this_00->BindConstBufferToShader(*pSVar4, local_68);
            field_273 = 1;
        }
        local_68.m_pInputAssemblerState = (InputAssemblerState*)*field_972 * field_944;
        Vector3T<float>* local_e0 = (Vector3T<float>*)&field_992;
        local_68.m_pRenderPipelineState._0_4_ = iVar2;
        local_e0->SetXYZ(local_68);
        local_68.m_pInputAssemblerState = (InputAssemblerState*)*field_976 * field_960;
        Vector3T<float>* local_d8 = (Vector3T<float>*)&field_1008;
        local_68.m_pRenderPipelineState._0_4_ = iVar2;
        local_d8->SetXYZ(local_68);
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_c8;
        if (field_37 == 0) {
            local_c8 = *local_80;
        } else {
            particle = field_296;
            cVar1 = particle->operator_cast_to_bool();
            if (!cVar1)
                goto LAB_1009358a7;
            cVar1 = field_1024.IsReady();
            if (!cVar1)
                goto LAB_1009358a7;
            pRVar5 = (RenderTargets*)(*particle).operator->();
            pcVar6 = (compressed_pair_imp<
                      eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                      eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>*)
                         pRVar5->GetDepthStencilTargetTexture();
            piVar7 = (int*)pcVar6->second();
            iVar2 = *piVar7;
            pRVar5 = (RenderTargets*)(*particle).operator->();
            pcVar6 = (compressed_pair_imp<
                      eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                      eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>*)
                         pRVar5->GetDepthStencilTargetTexture();
            lVar8 = pcVar6->second();
            local_68 = render::Viewport(0, 0, iVar2, *(int*)(lVar8 + 4), 0.0, 1.0);
            local_b8 = WrapArray(particle, 1);
            pRVar5 = (RenderTargets*)(*local_80).operator->();
            pTVar9 = (Texture*)pRVar5->GetDepthStencilTargetTexture();
            field_1024.DownSample2x2(renderContext, local_b8, *pTVar9, 1, true);
            local_a8.field_0 = 0;
            local_a8.field_4 = 0;
            local_a8.field_12 = local_a8.field_12 / 2;
            local_a8.field_8 = local_a8.field_8 / 2;
            local_b8 = math::Point(
                (float)(int)local_68.m_pRenderPipelineState + (float)(int)local_68.m_pRenderPipelineState,
                (float)local_68.m_pRenderPipelineState._4_4_ + (float)local_68.m_pRenderPipelineState._4_4_);
            local_88->SetViewportLookupScale(local_68, local_b8);
            local_c8 = *particle;
        }
        float arg2 = (float)local_a8.field_12;
        WrapArray<unsigned char> local_b8((float)local_a8.field_8, arg2, 1.0 / (float)local_a8.field_8, 1.0 / arg2);
        auto local_d0 = this_00->GetEffect<SunlightDirectLighting>(29);
        DrawCallState local_68;
        DrawCallState* pDVar14 = &local_68;
        auto pLVar10 = pDVar14->GetRenderPipelineState();
        lVar8 = pDVar14->Instance();
        pLVar10->SetHeapSize((lVar8 + 1080));
        pSVar4 = (ShaderProgram*)**field_224;
        UsePostProcessShader(local_68, renderToTextureHelper, *pSVar4);
        auto pOVar11 = local_68.GetOutputMergerState();
        pOVar11->SetViewports(&local_a8, 1);
        if (field_37 == 0) {
            pOVar11 = local_68.GetOutputMergerState();
            pOVar11->SetRenderTargets(renderTargets);
            pRVar12 = (RenderPipelineState*)local_68.GetRenderPipelineState();
            pRVar5 = (RenderTargets*)(*local_80).operator->();
            pvVar15 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                          pRVar5->GetColourTargetTextures();
            puVar3 = (uint64_t*)(*pvVar15)[0];
            pTVar9 = (Texture*)*puVar3;
            pHVar13 = (HashedString*)postprocess::operator*(2);
            iVar2 = pSVar4->GetConstIndex(*pHVar13);
            pRVar12->SetPSTextureSamplerPair(0, pTVar9, iVar2, nullptr, false);
        } else {
            pOVar11 = local_68.GetOutputMergerState();
            pRVar5 = (RenderTargets*)field_312->end();
            pOVar11->SetRenderTargets(pRVar5);
        }
        pRVar12 = (RenderPipelineState*)local_68.GetRenderPipelineState();
        pRVar5 = (RenderTargets*)local_c8.operator->();
        pTVar9 = (Texture*)pRVar5->GetDepthStencilTargetTexture();
        pHVar13 = (HashedString*)graphics::operator*(179);
        iVar2 = pSVar4->GetConstIndex(*pHVar13);
        pRVar12->SetPSTextureSamplerPair(1, pTVar9, iVar2, nullptr, false);
        pRVar12 = (RenderPipelineState*)local_68.GetRenderPipelineState();
        pTVar9 = (Texture*)field_344.get();
        pHVar13 = (HashedString*)graphics::operator*(180);
        iVar2 = pSVar4->GetConstIndex(*pHVar13);
        pRVar12->SetPSTextureSamplerPair(2, pTVar9, iVar2, nullptr, false);
        pHVar13 = (HashedString*)graphics::operator*(2);
        pSVar4->SetShaderConstMatrix4(pHVar13, 1, &field_48, 1);
        pHVar13 = (HashedString*)graphics::operator*(7);
        pSVar4->SetShaderConstMatrix4(pHVar13, 1, &field_112, 1);
        pHVar13 = (HashedString*)graphics::operator*(111);
        pSVar4->SetShaderConstVector3(pHVar13, &field_192);
        local_88->SetShaderConstants(local_68, renderContext, *pSVar4);
        pHVar13 = (HashedString*)graphics::operator*(193);
        Vector4T<float>* local_108 = (Vector4T<float>*)&field_176;
        pSVar4->SetShaderConstVector4(pHVar13, local_108);
        pHVar13 = (HashedString*)graphics::operator*(185);
        pSVar4->SetShaderConstInt1(pHVar13, field_32);
        uint64_t local_f8 = PackMieGParams(field_936);
        float fStack_f0 = arg2;
        uint32_t uStack_ec = 0;
        pDVar14 = (DrawCallState*)graphics::operator*(183);
        pSVar4->SetShaderConstVector4(pDVar14, &local_f8);
        if (field_37 == 0) {
            pHVar13 = (HashedString*)graphics::operator*(187);
            pSVar4->SetShaderConstVector3(pHVar13, local_e0);
            pDVar14 = (DrawCallState*)graphics::operator*(188);
            pSVar4->SetShaderConstVector3(pDVar14, local_d8);
        }
        SetSharedShaderConstants(*pDVar14, *pSVar4);
        ((SunlightShadows*)this_00->GetEffect<SunlightDirectLighting>(30))
            ->SetShaderConstantsDirect(local_68, renderContext, *pSVar4);
        local_d0->SetShaderConstants(local_68, renderContext, *pSVar4);
        renderToTextureHelper.RenderQuad(renderContext, local_68);
        if (field_37 != 0) {
            if (field_36 != false) {
                local_68 = render::DrawCallState();
                pDVar14 = &local_68;
                pLVar10 = (Layout*)pDVar14->GetRenderPipelineState();
                lVar8 = pDVar14->Instance();
                pLVar10->SetHeapSize((lVar8 + 1080));
                pSVar4 = (ShaderProgram*)**field_240;
                UsePostProcessShader(local_68, renderToTextureHelper, *pSVar4);
                pOVar11 = local_68.GetOutputMergerState();
                pOVar11->SetViewports(&local_a8, 1);
                pOVar11 = local_68.GetOutputMergerState();
                local_100 = (shared_ptr<render::RenderTargets>*)field_328;
                pRVar5 = (RenderTargets*)local_100->end();
                pOVar11->SetRenderTargets(pRVar5);
                pRVar12 = (RenderPipelineState*)local_68.GetRenderPipelineState();
                pRVar5 = (RenderTargets*)(*field_312).operator->();
                pvVar15 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                              pRVar5->GetColourTargetTextures();
                puVar3 = (uint64_t*)(*pvVar15)[0];
                pTVar9 = (Texture*)*puVar3;
                pHVar13 = (HashedString*)postprocess::operator*(2);
                iVar2 = pSVar4->GetConstIndex(*pHVar13);
                pRVar12->SetPSTextureSamplerPair(0, pTVar9, iVar2, nullptr, false);
                pRVar12 = (RenderPipelineState*)local_68.GetRenderPipelineState();
                pRVar5 = (RenderTargets*)local_c8.operator->();
                pTVar9 = (Texture*)pRVar5->GetDepthStencilTargetTexture();
                pHVar13 = (HashedString*)graphics::operator*(179);
                iVar2 = pSVar4->GetConstIndex(*pHVar13);
                pRVar12->SetPSTextureSamplerPair(1, pTVar9, iVar2, nullptr, false);
                new (&local_f8) ImVec4(local_b0, 0.0, field_940, 0.0);
                pHVar13 = (HashedString*)graphics::operator*(194);
                pSVar4->SetShaderConstVector4(pHVar13, &local_f8);
                renderToTextureHelper.RenderQuad(renderContext, local_68);
                pOVar11 = local_68.GetOutputMergerState();
                pOVar11->SetViewports(&local_a8, 1);
                pOVar11 = local_68.GetOutputMergerState();
                pRVar5 = (RenderTargets*)field_312->end();
                pOVar11->SetRenderTargets(pRVar5);
                pRVar12 = (RenderPipelineState*)local_68.GetRenderPipelineState();
                pRVar5 = (RenderTargets*)(*local_100).operator->();
                pvVar15 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                              pRVar5->GetColourTargetTextures();
                puVar3 = (uint64_t*)(*pvVar15)[0];
                pTVar9 = (Texture*)*puVar3;
                pHVar13 = (HashedString*)postprocess::operator*(2);
                iVar2 = pSVar4->GetConstIndex(*pHVar13);
                pRVar12->SetPSTextureSamplerPair(0, pTVar9, iVar2, nullptr, false);
                local_f8.Set(0.0, local_ac, field_940, 0.0);
                pHVar13 = (HashedString*)graphics::operator*(194);
                pSVar4->SetShaderConstVector4(pHVar13, &local_f8);
                renderToTextureHelper.RenderQuad(renderContext, local_68);
            }
            local_68 = render::DrawCallState();
            pDVar14 = &local_68;
            pLVar10 = (Layout*)pDVar14->GetRenderPipelineState();
            lVar8 = pDVar14->Instance();
            pLVar10->SetHeapSize((lVar8 + 1080));
            shaderProgram = (ShaderProgram*)**field_256;
            UsePostProcessShader(local_68, renderToTextureHelper, *shaderProgram);
            pOVar11 = local_68.GetOutputMergerState();
            pOVar11->SetViewports(viewport, 1);
            pOVar11 = local_68.GetOutputMergerState();
            pOVar11->SetRenderTargets(renderTargets);
            pRVar12 = (RenderPipelineState*)local_68.GetRenderPipelineState();
            pRVar5 = (RenderTargets*)(*local_80).operator->();
            pvVar15 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                          pRVar5->GetColourTargetTextures();
            puVar3 = (uint64_t*)(*pvVar15)[0];
            pTVar9 = (Texture*)*puVar3;
            pHVar13 = (HashedString*)postprocess::operator*(2);
            pSVar4 = shaderProgram;
            iVar2 = shaderProgram->GetConstIndex(*pHVar13);
            lVar8 = pSVar4->Instance();
            pRVar12->SetPSTextureSamplerPair(0, pTVar9, iVar2, (lVar8 + 272), false);
            pRVar12 = (RenderPipelineState*)local_68.GetRenderPipelineState();
            pRVar5 = (RenderTargets*)(*local_80).operator->();
            pTVar9 = (Texture*)pRVar5->GetDepthStencilTargetTexture();
            pHVar13 = (HashedString*)graphics::operator*(179);
            pSVar4 = shaderProgram;
            iVar2 = shaderProgram->GetConstIndex(*pHVar13);
            lVar8 = pSVar4->Instance();
            pRVar12->SetPSTextureSamplerPair(1, pTVar9, iVar2, (lVar8 + 272), false);
            pRVar12 = (RenderPipelineState*)local_68.GetRenderPipelineState();
            pRVar5 = (RenderTargets*)(*field_312).operator->();
            pvVar15 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                          pRVar5->GetColourTargetTextures();
            puVar3 = (uint64_t*)(*pvVar15)[0];
            pTVar9 = (Texture*)*puVar3;
            pHVar13 = (HashedString*)graphics::operator*(195);
            pSVar4 = shaderProgram;
            iVar2 = shaderProgram->GetConstIndex(*pHVar13);
            lVar8 = pSVar4->Instance();
            pRVar12->SetPSTextureSamplerPair(2, pTVar9, iVar2, (lVar8 + 272), false);
            pRVar12 = (RenderPipelineState*)local_68.GetRenderPipelineState();
            pRVar5 = (RenderTargets*)(*field_296).operator->();
            pTVar9 = (Texture*)pRVar5->GetDepthStencilTargetTexture();
            pHVar13 = (HashedString*)graphics::operator*(196);
            pSVar4 = shaderProgram;
            iVar2 = shaderProgram->GetConstIndex(*pHVar13);
            lVar8 = pSVar4->Instance();
            pRVar12->SetPSTextureSamplerPair(3, pTVar9, iVar2, (lVar8 + 272), false);
            local_88->SetShaderConstants(local_68, renderContext, *shaderProgram);
            pHVar13 = (HashedString*)graphics::operator*(193);
            shaderProgram->SetShaderConstVector4(pHVar13, local_108);
            pHVar13 = (HashedString*)graphics::operator*(187);
            shaderProgram->SetShaderConstVector3(pHVar13, local_e0);
            pHVar13 = (HashedString*)graphics::operator*(188);
            shaderProgram->SetShaderConstVector3(pHVar13, local_d8);
            local_d0->SetShaderConstants(local_68, renderContext, *shaderProgram);
            renderToTextureHelper.RenderQuad(renderContext, local_68);
        }
        local_88->SetData(local_148);
    LAB_1009358a7:
    }

    // 0x1009359c0
    void VolumetricScatteringEffect::SetSharedShaderConstants(render::DrawCallState& drawCallState,
                                                              const render::ShaderProgram& shaderProgram) const {
        uint64_t local_28[2];

        local_28[0] = PackMieGParams(field_932);
        auto pHVar1 = graphics::operator*(182);
        shaderProgram.SetShaderConstVector4(pHVar1, local_28);
        float fVar2 = m_params * 1e-06;
        ImVec4 local_38(field_916 * fVar2, fVar2 * field_920, field_924, field_928);
        pHVar1 = (HashedString*)graphics::operator*(184);
        shaderProgram.SetShaderConstVector4(pHVar1, &local_38);
    }

    // 0x100935a60
    void VolumetricScatteringEffect::RenderDebug(const render::Viewport& viewport) const {
        RenderTargets* pRVar1;
        uint64_t* puVar2;
        bool cVar3;
        Texture* pTVar4;
        VolumetricScatteringEffect* pVVar5;
        uint8_t* puVar6;
        float fVar7;
        Point<float> local_30;
        float local_24;

        if (field_24 == false) {
            fVar7 = 0.0;
            cVar3 = field_26;
        } else {
            local_30 = math::Point(0.0, 0.0);
            pVVar5 = (VolumetricScatteringEffect*)&field_344;
            pTVar4 = (Texture*)pVVar5->get();
            fVar7 = (float)RenderDebugImage(pVVar5, pTVar4, &local_30, "Dither Texture", viewport, false);
            cVar3 = field_26;
        }
        if (cVar3) {
            local_24 = fVar7;
            local_30 = math::Point(0.0, fVar7);
            puVar6 = field_280;
            pVVar5 = (VolumetricScatteringEffect*)puVar6;
            cVar3 = puVar6->operator_cast_to_bool();
            if (!cVar3) {
                pTVar4 = nullptr;
            } else {
                pVVar5 = (VolumetricScatteringEffect*)(*puVar6).operator->();
                pTVar4 = (Texture*)pVVar5->GetDepthStencilTargetTexture();
            }
            fVar7 = (float)RenderDebugImage(pVVar5, pTVar4, &local_30, "DepthRT", viewport, true);
            fVar7 = local_24 + fVar7;
        }
        if (field_27 != false) {
            local_24 = fVar7;
            local_30 = math::Point(0.0, fVar7);
            puVar6 = field_296;
            pVVar5 = (VolumetricScatteringEffect*)puVar6;
            cVar3 = puVar6->operator_cast_to_bool();
            if (!cVar3) {
                pTVar4 = nullptr;
            } else {
                pVVar5 = (VolumetricScatteringEffect*)(*puVar6).operator->();
                pTVar4 = (Texture*)pVVar5->GetDepthStencilTargetTexture();
            }
            fVar7 = (float)RenderDebugImage(pVVar5, pTVar4, &local_30, "HalfResDepthRT", viewport, true);
            fVar7 = local_24 + fVar7;
        }
        if (field_28 != false) {
            local_24 = fVar7;
            local_30 = math::Point(0.0, fVar7);
            puVar6 = field_312;
            pVVar5 = (VolumetricScatteringEffect*)puVar6;
            cVar3 = puVar6->operator_cast_to_bool();
            if (!cVar3) {
                pTVar4 = nullptr;
            } else {
                pRVar1 = (RenderTargets*)(*puVar6).operator->();
                pVVar5 = (VolumetricScatteringEffect*)pRVar1->GetColourTargetTextures();
                puVar2 = (uint64_t*)(*pVVar5)[0];
                pTVar4 = (Texture*)*puVar2;
            }
            fVar7 = (float)RenderDebugImage(pVVar5, pTVar4, &local_30, "HalfResVolumetricsRT1", viewport, false);
            fVar7 = local_24 + fVar7;
        }
        if (field_29 != false) {
            local_30 = math::Point(0.0, fVar7);
            puVar6 = field_328;
            pVVar5 = (VolumetricScatteringEffect*)puVar6;
            cVar3 = puVar6->operator_cast_to_bool();
            if (!cVar3) {
                pTVar4 = nullptr;
            } else {
                pRVar1 = (RenderTargets*)(*puVar6).operator->();
                pVVar5 = (VolumetricScatteringEffect*)pRVar1->GetColourTargetTextures();
                puVar2 = (uint64_t*)(*pVVar5)[0];
                pTVar4 = (Texture*)*puVar2;
            }
            RenderDebugImage(pVVar5, pTVar4, &local_30, "HalfResVolumetricsRT2", viewport, false);
        }
    }

    // 0x100935c60
    void VolumetricScatteringEffect::RenderDebugImage(const render::Texture* texture,
                                                      const math::Vector2T<float>& vector2, const char* str,
                                                      const render::Viewport& viewport, bool arg5) const {
        int iVar1;
        long* plVar4;
        float* pfVar5;
        char* str_00;
        uint64_t in_register_00000089;
        SideBarData local_138;
        uint8_t local_118[8];
        uint8_t local_110[8];
        CoordMapSquare local_f8;
        float local_ec;
        ImVec4 local_e0;

        if (texture == nullptr) {
            local_e0 = eastl::fixed_string<char, 128>(str);
            local_e0.append(" is missing!");
            plVar4 = DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar4 != nullptr) {
                local_f8 = math::Point(8.0, *(float*)(vector2 + 4) + 4.0);
                str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                new (local_110) eastl::allocator("EASTL basic_string");
                local_138 = eastl::string(str_00, local_110);
                new (local_118) math::ColourStorage8888(255, 255, 255, 255);
                iVar1 = local_118->GetX();
                new ((local_110 + 8)) oldscape::sidebars::SideBarData(iVar1, 0);
                (**(void (**)(...))(*plVar4 + 144))(plVar4, &local_f8, &local_138, local_110 + 8);
            }
        }
        unsigned int local_fc = (unsigned int)(((uint64_t)in_register_00000089 << 8) | (uint8_t)arg5);
        auto puVar2 = texture->second();
        float local_e8 = (float)*puVar2 / (float)viewport.field_8;
        long lVar3 = texture->second();
        float local_e4 = (float)*(unsigned int*)(lVar3 + 4) / (float)viewport.field_12;
        lVar3 = texture->second();
        if (*(unsigned int*)(lVar3 + 8) < 2) {
            plVar4 = DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar4 != nullptr) {
                pfVar5 = (float*)vector2.SSOBeginPtr();
                local_ec = *pfVar5;
                pfVar5 = (float*)vector2.y();
                local_e0 = ImVec4(local_ec, *pfVar5, local_e8, local_e4);
                local_138 = math::Point(0.0, 0.0);
                local_f8 = math::Point(1.0, 1.0);
                new ((local_110 + 8)) math::ColourStorage8888(255, 255, 255, 255);
                iVar1 = ((local_110 + 8))->GetX();
                new (local_110) oldscape::sidebars::SideBarData(iVar1, 0);
                (**(void (**)(...))(*plVar4 + 112))(plVar4, texture, &local_e0, &local_138, &local_f8, 0,
                                                    local_fc & 255, 0, (SideBarData*)local_110);
            }
        } else {
            lVar3 = texture->second();
            local_e8 = local_e8 * (float)*(unsigned int*)(lVar3 + 8);
            plVar4 = DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar4 != nullptr) {
                pfVar5 = (float*)vector2.SSOBeginPtr();
                local_ec = *pfVar5;
                pfVar5 = (float*)vector2.y();
                local_e0 = ImVec4(local_ec, *pfVar5, local_e8, local_e4);
                local_f8 = math::ColourStorage8888(255, 255, 255, 255);
                iVar1 = local_f8.GetX();
                local_138 = oldscape::sidebars::SideBarData(iVar1, 0);
                (**(void (**)(...))(*plVar4 + 128))(plVar4, texture, &local_e0, 0, (uint8_t)local_fc, &local_138);
            }
        }
        if (str != nullptr) {
            plVar4 = DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar4 != nullptr) {
                local_138 = math::Point(local_e8, local_e4 * 0.5 + *(float*)(vector2 + 4));
                local_e0 = eastl::string(str);
                new ((local_110 + 8)) math::ColourStorage8888(255, 255, 255, 255);
                iVar1 = ((local_110 + 8))->GetX();
                new (local_110) oldscape::sidebars::SideBarData(iVar1, 0);
                (**(void (**)(...))(*plVar4 + 144))(plVar4, &local_138, &local_e0, local_110);
            }
        }
    }

    // 0x100936160
    void VolumetricScatteringEffect::SetShaderConstants(render::DrawCallState& drawCallState,
                                                        render::RenderContext& renderContext, Shader& shader) const {
        auto shaderProgram = shader.GetProgram();
        SetSharedShaderConstants(drawCallState, *shaderProgram);
        auto pHVar1 = graphics::operator*(187);
        shaderProgram->SetShaderConstVector3(pHVar1, &field_992);
        pHVar1 = (HashedString*)graphics::operator*(188);
        shaderProgram->SetShaderConstVector3(pHVar1, &field_1008);
        Matrix44T<float> local_68(0.0, 8.0, 2.0, 10.0, 12.0, 4.0, 14.0, 6.0, 3.0, 11.0, 1.0, 9.0, 15.0, 7.0, 13.0, 5.0);
        local_68 *= 0.0625;
        pHVar1 = (HashedString*)graphics::operator*(189);
        shaderProgram->SetShaderConstMatrix4(pHVar1, 1, &local_68, 1);
    }

    // 0x100947bf0
    void
    VolumetricScatteringEffect::InitialiseTweakVars(tweak::ContainerGroup&,
                                                    EffectManager&)::$_4::operator()(const tweak::Event& event) const {
        long lVar1;

        if (event.field_16 == 2) {
            lVar1 = *(long*)(this + 8);
            shadersourceprovider::ClearResourceCache();
            DestroyShaders(*(VolumetricScatteringEffect**)this);
            CreateShaders(*(VolumetricScatteringEffect**)this);
            ((*(RT7Core**)(lVar1 + 208))->GetShaderManager())->ReloadShadersFromSource(0);
        }
    }

    // 0x100948f00
    void
    VolumetricScatteringEffect::InitialiseTweakVars(tweak::ContainerGroup&,
                                                    EffectManager&)::$_5::operator()(const tweak::Event& event) const {
        VolumetricScatteringEffect* this_00;
        long* plVar2;

        if (event.field_16 == 3) {
            this_00 = *(VolumetricScatteringEffect**)this;
            plVar2 = (long*)event.operator->();
            this_00->field_37 = (**(void (**)(...))(*plVar2 + 120))(plVar2);
            CreateShaders(this_00);
        }
    }

    // 0x100949830
    void
    VolumetricScatteringEffect::InitialiseTweakVars(tweak::ContainerGroup&,
                                                    EffectManager&)::$_6::operator()(const tweak::Event& event) const {
        if (event.field_16 == 2) {
            CreateBayesianDitherTexture(*(VolumetricScatteringEffect**)this);
            DestroyShaders(*(VolumetricScatteringEffect**)this);
            CreateShaders(*(VolumetricScatteringEffect**)this);
        }
    }

    // 0x10094a150
    void
    VolumetricScatteringEffect::InitialiseTweakVars(tweak::ContainerGroup&,
                                                    EffectManager&)::$_7::operator()(const tweak::Event& event) const {
        if (event.field_16 == 2) {
            CreateBlueNoiseDitherTexture(*(VolumetricScatteringEffect**)this);
            DestroyShaders(*(VolumetricScatteringEffect**)this);
            CreateShaders(*(VolumetricScatteringEffect**)this);
        }
    }

} // namespace jag::graphics
