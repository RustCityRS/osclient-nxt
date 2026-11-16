// libs/graphics/postprocess/PostProcessManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.postprocess

#include "PostProcessManager.h"

namespace jag::postprocess {
    // 0x100009d50: the linker folded this into eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second(), which has identical code
    PostProcessManager::GetPostProcessParams();

    // 0x100102fa0: the linker folded this into oldscape::rs2lib::InputField::GetSelectionStart() const, which has identical code
    PostProcessManager::GetRenderTargetsManager();

    // 0x1001c4880: the linker folded this into graphics::RT7Core::GetPostProcessManager(), which has identical code
    PostProcessManager::GetBrightPassFilter();

    // 0x1003c1fc0: the linker folded this into game::LocationContainer::GetDynamicChangedLocations() const, which has identical code
    PostProcessManager::GetDownSampledSourceDepthMinRTs() const;

    // 0x100547950: the linker folded this into ui::Component::GetServerConfig(), which has identical code
    PostProcessManager::GetDownSampledSourceRTs() const;

    // 0x1009a9bb0, 720 bytes, base-object constructor, placed by class name
    // PostProcessManager::PostProcessManager(render::RenderTargetsManager*, unsigned int)
    void PostProcessManager::PostProcessManager(RenderTargetsManager* param_1, uint param_2) {
        undefined1* this_00;

        field_0 = '\0';
        field_1 = '\0';
        new (&field_8) PostProcessParams();
        m_pRenderTargetsManager = param_1;
        new (&field_216) eastl::vector<shared_ptr<PostProcessEffect>, eastl::allocator>();
        new (field_248, (_func_decltype_nullptr*)param_1)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_264, (_func_decltype_nullptr*)param_1)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_280, (_func_decltype_nullptr*)param_1)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_296) Array<shared_ptr<render::RenderTargets>, eastl::allocator>();
        new (&field_320) Array<shared_ptr<render::RenderTargets>, eastl::allocator>();
        new (&field_344) Array<shared_ptr<render::RenderTargets>, eastl::allocator>();
        new (field_368, (_func_decltype_nullptr*)param_1)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_384, (_func_decltype_nullptr*)param_1)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        this_00 = &field_1232;
        new (&field_400, (RenderToTextureHelper*)this_00) DownSamplerFilter();
        new (&field_408, (RenderToTextureHelper*)this_00) DepthDownSamplerFilter();
        new (&field_448, param_1, (RenderToTextureHelper*)this_00) BrightPassFilter();
        new (&field_680, param_1, (RenderToTextureHelper*)this_00) GaussianBlurFilter();
        new (&field_728, param_1, (RenderToTextureHelper*)this_00) KawaseBlurFilter();
        new (&field_968, param_1, (RenderToTextureHelper*)this_00) DualFilteringBlurFilter();
        std::unique_ptr<AvgLuminanceFilter, std::default_delete<AvgLuminanceFilter>>::unique_ptr<true, void>(
            (unique_ptr<AvgLuminanceFilter, std::default_delete<AvgLuminanceFilter>>*)&field_1016);
        new (&field_1024) ViewTransforms();
        new (this_00) graphicutils::RenderToTextureHelper();
        if (param_1 == (RenderTargetsManager*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pRenderTargetsManager != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "PostProcessManager.cpp",
                      21, (char*)0);
        }
        (&field_216, (ulong)param_2)->reserve();
    }

    // 0x1009a9fa0, 16 bytes, complete-object constructor, placed by class name
    // PostProcessManager::PostProcessManager(render::RenderTargetsManager*, unsigned int): jumps straight to the base-object constructor

    // 0x1009a9fb0, 432 bytes, base-object destructor, placed by class name
    // PostProcessManager::~PostProcessManager()
    void PostProcessManager::~PostProcessManager() {
        Destroy(this);
        (&field_1232)->~RenderToTextureHelper();
        (&field_1016)->~unique_ptr();
        (&field_968)->~DualFilteringBlurFilter();
        (&field_728)->~KawaseBlurFilter();
        (&field_680)->~GaussianBlurFilter();
        (&field_448)->~BrightPassFilter();
        (&field_408)->~DepthDownSamplerFilter();
        field_384->~shared_ptr();
        field_368->~shared_ptr();
        (&field_344)->~Array();
        (&field_320)->~Array();
        (&field_296)->~Array();
        field_280->~shared_ptr();
        field_264->~shared_ptr();
        field_248->~shared_ptr();
        (&field_216)->~vector();
    }

    // 0x1009aa160, 80 bytes, placed by class name
    // PostProcessManager::Destroy()
    void PostProcessManager::Destroy() {
        (&field_216)->clear();
        DestroyRenderingResources(this);
        if ((&field_1016)->operator_cast_to_bool()) {
            (&field_1016, (AvgLuminanceFilter*)0)->reset();
        }
    }

    // 0x1009aa1b0, 16 bytes, complete-object destructor, placed by class name
    // PostProcessManager::~PostProcessManager(): jumps straight to the base-object destructor

    // 0x1009aa1c0, 512 bytes, placed by class name
    // PostProcessManager::Init()
    byte PostProcessManager::Init() {
        char cVar1;
        byte bVar2;
        byte bVar3;
        byte bVar4;
        MapArea* this_00;
        long lVar7;
        NXTPixScreen* this_01;
        undefined8 uVar8;
        long* plVar9;
        unique_ptr local_40[8];
        undefined1* local_38;

        this_00 = (MapArea*)Instance();
        lVar7 = this_00->GetOrigin();
        if (*(char*)(lVar7 + 189) == '\0') {
        LAB_1009aa200:
            uVar8 = logger::default_logger();
            logger::Logger::Log(uVar8, 0, 5,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "postprocess/PostProcessManager.cpp",
                                59, "PostProcessManager: Using Vertex/Pixel AvgLuminanceFilter");
            local_38 = &field_1232;
            std::make_unique<AvgLuminanceFilterDownsample, render::RenderTargetsManager*&,
                             graphicutils::RenderToTextureHelper*>((RenderTargetsManager**)local_40,
                                                                   (RenderToTextureHelper**)&m_pRenderTargetsManager);
        } else {
            this_01 = (NXTPixScreen*)this_00->Instance();
            if (this_01->GetUIHeight() == 3)
                goto LAB_1009aa200;
            uVar8 = logger::default_logger();
            logger::Logger::Log(uVar8, 0, 5,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "postprocess/PostProcessManager.cpp",
                                45, "PostProcessManager: Using Compute AvgLuminanceFilter");
            local_38 = &field_1232;
            std::make_unique<AvgLuminanceFilterCompute, render::RenderTargetsManager*&,
                             graphicutils::RenderToTextureHelper*>((RenderTargetsManager**)local_40,
                                                                   (RenderToTextureHelper**)&m_pRenderTargetsManager);
            std::unique_ptr<AvgLuminanceFilter, std::default_delete<AvgLuminanceFilter>>::operator=(
                (unique_ptr<AvgLuminanceFilter, std::default_delete<AvgLuminanceFilter>>*)&field_1016, local_40);
            local_40->~unique_ptr();
            plVar9 = (long*)std::unique_ptr<AvgLuminanceFilter, std::default_delete<AvgLuminanceFilter>>::operator->(
                (unique_ptr<AvgLuminanceFilter, std::default_delete<AvgLuminanceFilter>>*)&field_1016);
            cVar1 = (**(code**)(*plVar9 + 16))(plVar9);
            if (cVar1 != '\0')
                goto LAB_1009aa317;
            uVar8 = logger::default_logger();
            logger::Logger::Log(
                uVar8, 0, 5,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                "PostProcessManager.cpp",
                53,
                "PostProcessManager: could not initialize compute, falling back to Vertex/Pixel AvgLuminanceFilter");
            local_38 = &field_1232;
            std::make_unique<AvgLuminanceFilterDownsample, render::RenderTargetsManager*&,
                             graphicutils::RenderToTextureHelper*>((RenderTargetsManager**)local_40,
                                                                   (RenderToTextureHelper**)&m_pRenderTargetsManager);
        }
        std::unique_ptr<AvgLuminanceFilter, std::default_delete<AvgLuminanceFilter>>::operator=(
            (unique_ptr<AvgLuminanceFilter, std::default_delete<AvgLuminanceFilter>>*)&field_1016, local_40);
        local_40->~unique_ptr();
        plVar9 = (long*)std::unique_ptr<AvgLuminanceFilter, std::default_delete<AvgLuminanceFilter>>::operator->(
            (unique_ptr<AvgLuminanceFilter, std::default_delete<AvgLuminanceFilter>>*)&field_1016);
        cVar1 = (**(code**)(*plVar9 + 16))(plVar9);
        if (cVar1 == '\0') {
            (&field_1016, (AvgLuminanceFilter*)0)->reset();
        }
    LAB_1009aa317:
        bVar2 = (&field_680)->Init();
        bVar3 = (&field_728)->Init();
        bVar4 = (&field_968)->Init();
        return (&field_408, false)->Init() & bVar4 & bVar3 & bVar2;
    }

    // 0x1009aad70, 224 bytes, placed by class name
    // PostProcessManager::DestroyRenderingResources()
    void PostProcessManager::DestroyRenderingResources() {
        long* plVar2;
        shared_ptr<PostProcessEffect>* psVar3;
        shared_ptr<PostProcessEffect>* this_00;

        if ((&field_1016)->operator_cast_to_bool()) {
            plVar2 = (long*)std::unique_ptr<AvgLuminanceFilter, std::default_delete<AvgLuminanceFilter>>::operator->(
                (unique_ptr<AvgLuminanceFilter, std::default_delete<AvgLuminanceFilter>>*)&field_1016);
            (**(code**)(*plVar2 + 24))(plVar2);
        }
        (&field_448)->Destroy();
        (&field_680)->Destroy();
        (&field_728)->Destroy();
        (&field_968)->Destroy();
        (&field_408)->Destroy();
        this_00 = (shared_ptr<PostProcessEffect>*)(&field_216)->HeapBeginPtr();
        psVar3 = (shared_ptr<PostProcessEffect>*)(&field_216)->end();
        for (; this_00 != psVar3; this_00 = this_00 + 16) {
            plVar2 = (long*)shared_ptr<PostProcessEffect>::operator->(this_00);
            (**(code**)(*plVar2 + 48))(plVar2);
        }
        DestroyRenderTargets(this);
        render::RenderTargets::SafeReset((shared_ptr*)field_248);
        render::RenderTargets::SafeReset((shared_ptr*)field_368);
    }

    // 0x1009aae70, 224 bytes, placed by class name
    // PostProcessManager::CreateRenderingResources()
    ulong PostProcessManager::CreateRenderingResources() {
        bool bVar1;
        byte bVar2;
        byte bVar3;
        byte bVar4;
        byte bVar5;
        undefined4 uVar6;
        long* plVar7;
        shared_ptr<PostProcessEffect>* this_00;
        shared_ptr<PostProcessEffect>* psVar8;
        ulong uVar9;

        bVar1 = (&field_1016)->operator_cast_to_bool();
        bVar2 = 1;
        if (bVar1) {
            plVar7 = (long*)std::unique_ptr<AvgLuminanceFilter, std::default_delete<AvgLuminanceFilter>>::operator->(
                (unique_ptr<AvgLuminanceFilter, std::default_delete<AvgLuminanceFilter>>*)&field_1016);
            bVar2 = (**(code**)(*plVar7 + 16))(plVar7);
        }
        bVar3 = (&field_680)->Init();
        bVar4 = (&field_728)->Init();
        bVar5 = (&field_968)->Init();
        uVar6 = (&field_408, false)->Init();
        uVar9 = (ulong)CONCAT31((int3)((uint)uVar6 >> 8), (byte)uVar6 & bVar5 & bVar4 & bVar3 & bVar2);
        this_00 = (shared_ptr<PostProcessEffect>*)(&field_216)->HeapBeginPtr();
        psVar8 = (shared_ptr<PostProcessEffect>*)(&field_216)->end();
        for (; this_00 != psVar8; this_00 = this_00 + 16) {
            plVar7 = (long*)shared_ptr<PostProcessEffect>::operator->(this_00);
            bVar2 = (**(code**)(*plVar7 + 40))(plVar7);
            uVar9 = CONCAT71((int7)(uVar9 >> 8), (byte)uVar9 & bVar2);
        }
        return uVar9;
    }

    // 0x1009ab0f0, 288 bytes, placed by class name
    // PostProcessManager::DestroyRenderTargets()
    void PostProcessManager::DestroyRenderTargets() {
        shared_ptr* psVar2;
        shared_ptr* psVar3;

        psVar3 = (shared_ptr*)(&field_296)->data();
        psVar2 = (shared_ptr*)(&field_296)->end();
        for (; psVar3 != psVar2; psVar3 = psVar3 + 1) {
            (m_pRenderTargetsManager, psVar3)->Unregister();
        }
        psVar3 = (shared_ptr*)(&field_320)->data();
        psVar2 = (shared_ptr*)(&field_320)->end();
        for (; psVar3 != psVar2; psVar3 = psVar3 + 1) {
            (m_pRenderTargetsManager, psVar3)->Unregister();
        }
        psVar3 = (shared_ptr*)(&field_344)->data();
        psVar2 = (shared_ptr*)(&field_344)->end();
        for (; psVar3 != psVar2; psVar3 = psVar3 + 1) {
            (m_pRenderTargetsManager, psVar3)->Unregister();
        }
        (m_pRenderTargetsManager, (shared_ptr*)field_264)->Unregister();
        (m_pRenderTargetsManager, (shared_ptr*)field_280)->Unregister();
        if (field_384->operator_cast_to_bool()) {
            (m_pRenderTargetsManager, (shared_ptr*)field_384)->Unregister();
        }
    }

    // 0x1009ab210, 176 bytes, placed by class name
    // PostProcessManager::AddEffect(shared_ptr<PostProcessEffect> const&)
    void PostProcessManager::AddEffect(shared_ptr* param_1) {
        shared_ptr* psVar1;
        shared_ptr* psVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined1* this_00;

        this_00 = &field_216;
        psVar1 = (shared_ptr*)this_00->HeapBeginPtr();
        psVar2 = (shared_ptr*)this_00->end();
        psVar1 = eastl::find<shared_ptr<game::Entity>*, shared_ptr<game::Entity>>(psVar1, psVar2, param_1);
        psVar2 = (shared_ptr*)this_00->end();
        if (psVar1 == psVar2) {
            this_00->push_back(param_1);
            uVar3 = this_00->HeapBeginPtr();
            uVar4 = this_00->end();
            eastl::sort<shared_ptr<PostProcessEffect>*, (shared_ptr<PostProcessEffect> const&)->AddEffect()::__0>(
                uVar3, uVar4);
        } else {
            psVar2 = (shared_ptr*)this_00->end();
            if (psVar1 == psVar2) {
                /* WARNING: Subroutine does not return */
                LogAssert("it != m_effects.end()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                          "PostProcessManager.cpp",
                          153, "Effect already added!");
            }
        }
    }

    // 0x1009ab320, 96 bytes, placed by class name
    // PostProcessManager::RemoveEffect(shared_ptr<PostProcessEffect> const&)
    void PostProcessManager::RemoveEffect(shared_ptr* param_1) {
        shared_ptr* psVar1;
        shared_ptr* psVar2;
        undefined1* this_00;

        this_00 = &field_216;
        psVar1 = (shared_ptr*)this_00->HeapBeginPtr();
        psVar2 = (shared_ptr*)this_00->end();
        psVar1 = eastl::find<shared_ptr<game::Entity>*, shared_ptr<game::Entity>>(psVar1, psVar2, param_1);
        psVar2 = (shared_ptr*)this_00->end();
        if (psVar1 != psVar2) {
            this_00->erase(psVar1);
        }
    }

    // 0x1009ab3e0, 2320 bytes, placed by class name
    // PostProcessManager::RenderEffects(render::RenderContext&, render::RenderTargets const*, render::Texture const*, render::Texture const*, render::Viewport const&, ViewTransforms const&, float, unsigned int, bool, graphics::ViewRenderTargets*)
    /* WARNING: Type propagation algorithm not settling */
    /* PostProcessManager::RenderEffects(render::RenderContext&,
   render::RenderTargets const*, render::Texture const*, render::Texture const*,
   render::Viewport const&, ViewTransforms const&, float, unsigned int, bool,
   graphics::ViewRenderTargets*) */

    void PostProcessManager::RenderEffects(RenderContext* param_1, RenderTargets* param_2, Texture* param_3,
                                           Texture* param_4, Viewport* param_5, ViewTransforms* param_6, float param_7,
                                           uint param_8, bool param_9, ViewRenderTargets* param_10) {
        undefined1* puVar1;
        undefined8 uVar2;
        Viewport* pVVar3;
        Layout* this_00;
        RenderContext* this_01;
        PostProcessManager* pPVar4;
        char cVar5;
        byte bVar6;
        byte bVar7;
        bool bVar8;
        int iVar9;
        shared_ptr<PostProcessEffect>* psVar10;
        shared_ptr<PostProcessEffect>* psVar11;
        long* plVar12;
        int* piVar13;
        long lVar14;
        Desc* pDVar15;
        undefined8* puVar16;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* pvVar17;
        RenderTargets* pRVar18;
        Texture* pTVar19;
        shared_ptr* this_02;
        ulonglong uVar20;
        shared_ptr<render::RenderTargets>* this_03;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_04;
        long* plVar21;
        Texture* pTVar22;
        uint uVar23;
        byte bVar24;
        undefined4 uVar25;
        undefined1 local_f8[8];
        undefined1 local_f0[8];
        Desc local_e8;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_a0[16];
        Viewport* local_90;
        float local_84;
        Layout* local_80;
        RenderTargets* local_78;
        RenderTargets* local_70;
        undefined8 local_68;
        undefined8 local_60;
        Texture* local_58;
        RenderTargets* local_50;
        RenderContext* local_48;
        PostProcessManager* local_40;
        uint local_38;
        char local_31;

        local_84 = param_7;
        local_48 = param_1;
        local_40 = this;
        if (param_2 == (RenderTargets*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pDstRT",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "PostProcessManager.cpp",
                      183, (char*)0);
        }
        if (param_3 == (Texture*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pSrcColourTexture != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "PostProcessManager.cpp",
                      184, (char*)0);
        }
        ViewTransforms::operator=((ViewTransforms*)&field_1024, param_6);
        iVar9 = GetEnabledEffectCount(this);
        local_78 = param_2;
        if (iVar9 < 1) {
            pvVar17 =
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                    param_2->GetColourTargetTextures();
            plVar12 = (long*)eastl::vector<
                render::Texture*,
                eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar17, 0);
            if ((Texture*)*plVar12 != param_3) {
                puVar1 = field_248;
                pRVar18 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                    (shared_ptr<render::RenderTargets>*)puVar1);
                pRVar18->BindColourTargetTexture(param_3, 0, 0, 34069);
                pRVar18 = (RenderTargets*)puVar1->end();
                this_01 = local_48;
                local_48->SetRenderTargets(pRVar18);
                new (&local_e8) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(pRVar18);
                shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(
                    local_a0, (_func_decltype_nullptr*)pRVar18);
                this_01->ResolveColourTargetData(local_78, 16384, (Rect*)&local_e8, local_a0);
                pRVar18 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                    (shared_ptr<render::RenderTargets>*)puVar1);
                pRVar18->Invalidate();
                pRVar18 = (RenderTargets*)this_01->GetBackBuffer();
                this_01->SetRenderTargets(pRVar18);
            }
        } else {
            puVar1 = &field_216;
            local_90 = param_5;
            psVar10 = (shared_ptr<PostProcessEffect>*)puVar1->HeapBeginPtr();
            local_80 = (Layout*)puVar1;
            psVar11 = (shared_ptr<PostProcessEffect>*)puVar1->end();
            local_58 = param_4;
            if (psVar10 == psVar11) {
                bVar24 = 0;
            } else {
                bVar24 = 0;
                do {
                    plVar12 = (long*)shared_ptr<PostProcessEffect>::operator->(psVar10);
                    cVar5 = (**(code**)(*plVar12 + 32))(plVar12);
                    if (cVar5 != '\0') {
                        plVar12 = (long*)shared_ptr<PostProcessEffect>::operator->(psVar10);
                        bVar6 = (**(code**)(*plVar12 + 56))(plVar12);
                        bVar24 = bVar24 | bVar6;
                    }
                    psVar10 = psVar10 + 16;
                } while (psVar10 != psVar11);
            }
            pVVar3 = local_90;
            bVar7 = bVar24 >> 4 & 1 | bVar24;
            bVar6 = bVar7 | 2;
            if ((bVar24 & 12) == 0) {
                bVar6 = bVar7;
            }
            local_38 = (uint)bVar6;
            local_60 = (long*)(CONCAT44(local_60._4_4_, local_38) & 18446744069414584322);
            if (((bVar6 & 2) != 0) && (local_58 == (Texture*)0)) {
                /* WARNING: Subroutine does not return */
                LogAssert(
                    "((requirements & PostProcessEffectRequirements::DEPTH) == 0) || (pSrcDepthTexture != nullptr)",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                    "PostProcessManager.cpp",
                    215, (char*)0);
            }
            if ((param_9) && ((iVar9 = local_90->field_8, piVar13 = (int*)param_3->second(),
                               iVar9 != *piVar13 || (iVar9 = pVVar3->field_12, lVar14 = param_3->second(),
                                                     iVar9 != *(int*)(lVar14 + 4))))) {
                pPVar4 = local_40;
                PerformViewportResolve(local_40, local_48, param_3, local_58, pVVar3, bVar6);
                pRVar18 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                    (shared_ptr<render::RenderTargets>*)pPVar4->field_384);
                pvVar17 = (vector<render::Texture*,
                                  eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                              pRVar18->GetColourTargetTextures();
                puVar16 = (undefined8*)eastl::vector<
                    render::Texture*,
                    eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar17, 0);
                param_3 = (Texture*)*puVar16;
                pRVar18 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                    (shared_ptr<render::RenderTargets>*)pPVar4->field_384);
                pTVar19 = (Texture*)pRVar18->GetDepthStencilTargetTexture();
            } else {
                pTVar19 = local_58;
            }
            local_58 = param_3;
            pDVar15 = (Desc*)param_3->second();
            if (pTVar19 == (Texture*)0) {
                new (&local_e8) render::Texture::Desc();
            } else {
                puVar16 = (undefined8*)pTVar19->second();
                local_e8._0_8_ = *puVar16;
                local_e8._8_8_ = puVar16[1];
                local_e8._16_8_ = puVar16[2];
                local_e8._24_8_ = puVar16[3];
                local_e8._32_8_ = puVar16[4];
                local_e8._40_8_ = puVar16[5];
                local_e8.field_48 = puVar16[6];
                local_e8._56_8_ = puVar16[7];
            }
            this = local_40;
            cVar5 = CreateRenderTargets(local_40, pDVar15, &local_e8, param_8, bVar6);
            if (cVar5 == '\0') {
                return;
            }
            if (((int)local_60 != 0) && (pTVar19 == (Texture*)0)) {
                /* WARNING: Subroutine does not return */
                LogAssert("pSrcDepthTexture != nullptr",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                          "PostProcessManager.cpp",
                          236, (char*)0);
            }
            local_70 = (RenderTargets*)field_280->end();
            local_50 = (RenderTargets*)field_264->end();
            pTVar22 = local_58;
            local_40 = (PostProcessManager*)CONCAT71(local_40._1_7_, 1);
            if (((int)local_60 == 0) && (lVar14 = local_58->second(), *(uint*)(lVar14 + 16) < 2)) {
                pvVar17 = (vector<render::Texture*,
                                  eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                              local_78->GetColourTargetTextures();
                plVar12 = (long*)eastl::vector<
                    render::Texture*,
                    eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar17, 0);
                local_40 = (PostProcessManager*)CONCAT71(local_40._1_7_, pTVar22 == (Texture*)*plVar12);
            }
            local_31 = cVar5;
            if ((byte)local_40 == '\0') {
                local_68 = 0;
            } else {
                puVar1 = field_248;
                pRVar18 = (RenderTargets*)puVar1->end();
                local_48->SetRenderTargets(pRVar18);
                pRVar18 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                    (shared_ptr<render::RenderTargets>*)puVar1);
                local_68 = 0;
                pRVar18->BindColourTargetTexture(pTVar22, 0, 0, 34069);
                if ((int)local_60 != 0) {
                    if (pTVar19 == (Texture*)0) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("pSrcDepthTexture",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "postprocess/PostProcessManager.cpp",
                                  251, "An enabled effect requires depth, but no depth texture was provided");
                    }
                    pRVar18 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                        (shared_ptr<render::RenderTargets>*)puVar1);
                    pRVar18->BindDepthStencilTargetTexture(pTVar19);
                    local_68 = local_50->GetDepthStencilTargetTexture();
                    pTVar22 = pTVar19;
                }
                pRVar18 = local_50;
                uVar23 = (int)local_60 << 7;
                new (&local_e8) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(pTVar22);
                shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(
                    local_a0, (_func_decltype_nullptr*)pTVar22);
                local_48->ResolveColourTargetData(pRVar18, uVar23 | 16384, (Rect*)&local_e8, local_a0);
                pTVar22 = local_58;
            }
            if ((local_38 & 1) != 0) {
                if ((byte)local_40 != '\0') {
                    pvVar17 = (vector<render::Texture*,
                                      eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                                  local_50->GetColourTargetTextures();
                    puVar16 = (undefined8*)eastl::vector<
                        render::Texture*,
                        eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar17,
                                                                                                               0);
                    pTVar22 = (Texture*)*puVar16;
                }
                uVar23 = (&field_296)->end();
                (&field_400, local_48, (Array*)&field_296, pTVar22, uVar23)->DownSample2x2();
            }
            if ((local_38 & 4) != 0) {
                if ((int)local_60 == 0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("requirements & PostProcessEffectRequirements::DEPTH",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                              "postprocess/PostProcessManager.cpp",
                              266, (char*)0);
                }
                WrapArray<unsigned char const>::WrapArray<Array<unsigned char, eastl::allocator>>(
                    (WrapArray<unsigned char const>*)&local_e8, (Array*)&field_320);
                pTVar19 = (Texture*)local_50->GetDepthStencilTargetTexture();
                uVar23 = (&field_320)->end();
                (&field_408, local_48, (WrapArray*)&local_e8, pTVar19, uVar23, false)->DownSample2x2();
            }
            if ((local_38 & 8) != 0) {
                if ((int)local_60 == 0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("requirements & PostProcessEffectRequirements::DEPTH",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                              "postprocess/PostProcessManager.cpp",
                              271, (char*)0);
                }
                WrapArray<unsigned char const>::WrapArray<Array<unsigned char, eastl::allocator>>(
                    (WrapArray<unsigned char const>*)&local_e8, (Array*)&field_344);
                pTVar19 = (Texture*)local_50->GetDepthStencilTargetTexture();
                uVar23 = (&field_344)->end();
                (&field_408, local_48, (WrapArray*)&local_e8, pTVar19, uVar23, true)->DownSample2x2();
            }
            if ((local_38 & 16) != 0) {
                bVar8 = (&field_1016)->operator_cast_to_bool();
                if (bVar8) {
                    this_02 = (shared_ptr*)Array<shared_ptr<render::RenderTargets>, eastl::allocator>::operator[](
                        (Array<shared_ptr<render::RenderTargets>, eastl::allocator>*)&field_296, 1);
                    bVar8 = shared_ptr::operator_cast_to_bool(this_02);
                    if (bVar8) {
                        uVar20 = FrameTime::GetCurrentTimeMS();
                        plVar12 =
                            (long*)std::unique_ptr<AvgLuminanceFilter, std::default_delete<AvgLuminanceFilter>>::
                            operator->(
                                (unique_ptr<AvgLuminanceFilter, std::default_delete<AvgLuminanceFilter>>*)&field_1016);
                        this_03 = (shared_ptr<render::RenderTargets>*)
                            Array<shared_ptr<render::RenderTargets>, eastl::allocator>::operator[](
                                (Array<shared_ptr<render::RenderTargets>, eastl::allocator>*)&field_296, 1);
                        pRVar18 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(this_03);
                        pvVar17 = (vector<render::Texture*,
                                          eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                                      pRVar18->GetColourTargetTextures();
                        puVar16 = (undefined8*)eastl::vector<
                            render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                            eastl::allocator>>::operator[](pvVar17, 0);
                        uVar2 = *puVar16;
                        uVar25 = (&field_168, uVar20)->GetValue();
                        (**(code**)(*plVar12 + 40))(local_84, uVar25, plVar12, local_48, uVar2, param_10);
                    }
                }
            }
            eastl::vector<unsigned long,
                          eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::rbegin();
            eastl::vector<ObjStackEntry, eastl::allocator>::rend();
            eastl::find_if<eastl::reverse_iterator<shared_ptr<PostProcessEffect>*>,
                           (render::RenderContext&)
                               ->RenderEffects(render::RenderTargets_const*, render::Texture_const*,
                                               render::Texture_const*, render::Viewport_const&, ViewTransforms_const&,
                                               float, unsigned int, bool, graphics::ViewRenderTargets*)::__1>(
                (reverse_iterator*)local_a0, local_f8, local_f0);
            eastl::vector<ObjStackEntry, eastl::allocator>::rend();
            bVar8 = eastl::operator!=((reverse_iterator*)local_a0, (reverse_iterator*)&local_e8);
            if (bVar8) {
                this_04 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                              eastl::reverse_iterator<shared_ptr<PostProcessEffect>*>::operator->(
                                  (reverse_iterator<shared_ptr<PostProcessEffect>*>*)local_a0);
                plVar12 = (long*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_04);
            } else {
                plVar12 = (long*)0;
            }
            this_00 = local_80;
            psVar10 = (shared_ptr<PostProcessEffect>*)
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(local_80);
            psVar11 = (shared_ptr<PostProcessEffect>*)this_00->end();
            pTVar19 = (Texture*)0;
            if (psVar10 != psVar11) {
                local_60 = plVar12;
                do {
                    plVar21 = (long*)psVar10->end();
                    if (plVar21 == plVar12)
                        break;
                    plVar21 = (long*)shared_ptr<PostProcessEffect>::operator->(psVar10);
                    cVar5 = (**(code**)(*plVar21 + 32))(plVar21);
                    if (cVar5 != '\0') {
                        bVar8 = pTVar19 != (Texture*)0;
                        pTVar19 = local_58;
                        if ((bVar8 | (byte)local_40) == 1) {
                            pvVar17 =
                                (vector<render::Texture*,
                                        eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                                    local_50->GetColourTargetTextures();
                            puVar16 = (undefined8*)
                                eastl::vector<render::Texture*,
                                              eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                            eastl::allocator>>::operator[](pvVar17, 0);
                            pTVar19 = (Texture*)*puVar16;
                        }
                        pvVar17 = (vector<render::Texture*,
                                          eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                                      local_70->GetColourTargetTextures();
                        puVar16 = (undefined8*)eastl::vector<
                            render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                            eastl::allocator>>::operator[](pvVar17, 0);
                        piVar13 = (int*)(*puVar16)->second();
                        iVar9 = *piVar13;
                        pvVar17 = (vector<render::Texture*,
                                          eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                                      local_70->GetColourTargetTextures();
                        puVar16 = (undefined8*)eastl::vector<
                            render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                            eastl::allocator>>::operator[](pvVar17, 0);
                        lVar14 = (*puVar16)->second();
                        new (&local_e8) render::Viewport(0, 0, iVar9, *(int*)(lVar14 + 4), 0.0, 1.0);
                        plVar12 = (long*)shared_ptr<PostProcessEffect>::operator->(psVar10);
                        (**(code**)(*plVar12 + 16))(plVar12, local_48, local_70, pTVar19, local_68, &local_e8, param_10,
                                                    this);
                        local_50->Invalidate();
                        eastl::swap<oldscape::graphics::Pix8*>((Pix8**)&local_70, (Pix8**)&local_50);
                        plVar12 = local_60;
                    }
                    psVar10 = psVar10 + 16;
                    psVar11 = (shared_ptr<PostProcessEffect>*)local_80->end();
                } while (psVar10 != psVar11);
            }
            cVar5 = local_31;
            if (plVar12 != (long*)0) {
                pTVar22 = local_58;
                if ((pTVar19 != (Texture*)0 | (byte)local_40) == 1) {
                    pvVar17 = (vector<render::Texture*,
                                      eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                                  local_50->GetColourTargetTextures();
                    puVar16 = (undefined8*)eastl::vector<
                        render::Texture*,
                        eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar17,
                                                                                                               0);
                    pTVar22 = (Texture*)*puVar16;
                }
                (**(code**)(*plVar12 + 16))(plVar12, local_48, local_78, pTVar22, local_68, local_90, param_10, this);
                local_50->Invalidate();
            }
            DestroyRenderTargets(this);
            if (cVar5 == '\0') {
                return;
            }
        }
        pRVar18 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
            (shared_ptr<render::RenderTargets>*)field_248);
        pRVar18->Unbind();
    }

    // 0x1009abcf0, 128 bytes, placed by class name
    // PostProcessManager::GetEnabledEffectCount() const
    int PostProcessManager::GetEnabledEffectCount() {
        byte bVar1;
        shared_ptr<PostProcessEffect>* this_00;
        shared_ptr<PostProcessEffect>* psVar2;
        WorldmapRenderer* this_01;
        int iVar3;

        this_00 = (shared_ptr<PostProcessEffect>*)(&field_216)->HeapBeginPtr();
        psVar2 = (shared_ptr<PostProcessEffect>*)(&field_216)->end();
        if (this_00 == psVar2) {
            iVar3 = 0;
        } else {
            iVar3 = 0;
            do {
                this_01 = (WorldmapRenderer*)shared_ptr<PostProcessEffect>::operator->(this_00);
                bVar1 = this_01->IsValid();
                iVar3 = iVar3 + (uint)bVar1;
                this_00 = this_00 + 16;
            } while (this_00 != psVar2);
        }
        return iVar3;
    }

    // 0x1009abd70, 816 bytes, placed by class name
    // PostProcessManager::PerformViewportResolve(render::RenderContext&, render::Texture const*, render::Texture const*, render::Viewport const&, unsigned char)
    void PostProcessManager::PerformViewportResolve(RenderContext* param_1, Texture* param_2, Texture* param_3,
                                                    Viewport* param_4, uchar param_5) {
        undefined4 uVar1;
        int iVar2;
        undefined8 uVar3;
        Texture* this_00;
        bool bVar4;
        undefined4* puVar5;
        undefined4* puVar6;
        RenderTargets* pRVar7;
        undefined8* puVar8;
        int* piVar9;
        long lVar10;
        shared_ptr<render::RenderTargets>* psVar11;
        Viewport* pVVar12;
        undefined7 in_register_00000089;
        byte bVar13;
        undefined8 in_stack_fffffffffffffea8;
        uint uVar14;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_138[16];
        undefined8 local_128;
        undefined8 uStack_120;
        undefined8 local_118;
        undefined8 uStack_110;
        undefined8 local_108;
        undefined8 uStack_100;
        undefined8 local_f8;
        undefined8 uStack_f0;
        undefined1 local_e8[64];
        undefined1 local_a8[72];
        undefined1 local_60[24];
        shared_ptr<render::RenderTargets>* local_48;
        Viewport* local_40;
        Texture* local_38;

        uVar14 = (uint)((ulong)in_stack_fffffffffffffea8 >> 32);
        local_40 = (Viewport*)CONCAT44(local_40._4_4_, (int)CONCAT71(in_register_00000089, param_5));
        psVar11 = (shared_ptr<render::RenderTargets>*)field_368;
        local_a8._64_8_ = param_1;
        bVar4 = psVar11->operator_cast_to_bool();
        local_60._16_8_ = this;
        local_48 = psVar11;
        if (!bVar4) {
            local_38 = param_3;
            puVar5 = (undefined4*)param_2->second();
            new (&local_128) std::array<render::Texture::Desc, 2ul>();
            psVar11 = local_48;
            uVar1 = *puVar5;
            puVar6 = (undefined4*)std::array<render::Texture::Desc, 2ul>::operator[]((ulong)&local_128);
            *puVar6 = uVar1;
            puVar6[1] = puVar5[1];
            puVar6[3] = puVar5[3];
            make_shared<render::RenderTargets>((jag*)local_a8);
            shared_ptr<render::RenderTargets>::operator=(psVar11, (shared_ptr*)local_a8);
            local_a8->~shared_ptr();
            pRVar7 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(psVar11);
            new (local_a8) render::Texture::Desc();
            psVar11 = local_48;
            pRVar7->Create("ViewportResolveAliasRT", 3553, &local_128, 0, local_a8, (ulong)uVar14 << 32);
            param_3 = local_38;
        }
        uVar3 = local_60._16_8_;
        pRVar7 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(psVar11);
        pRVar7->BindColourTargetTexture(param_2, 0, 0, 34069);
        if (param_3 != (Texture*)0) {
            pRVar7 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(psVar11);
            pRVar7->BindDepthStencilTargetTexture(param_3);
        }
        local_38 = (Texture*)(uVar3 + 384);
        bVar4 = local_38->operator_cast_to_bool();
        if (bVar4) {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_viewportResolveRT",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "PostProcessManager.cpp",
                      567, (char*)0);
        }
        puVar8 = (undefined8*)param_2->second();
        local_128 = *puVar8;
        uStack_120 = puVar8[1];
        local_118 = puVar8[2];
        uStack_110 = puVar8[3];
        local_108 = puVar8[4];
        uStack_100 = puVar8[5];
        local_f8 = puVar8[6];
        uStack_f0 = puVar8[7];
        new (local_e8) render::Texture::Desc();
        new (local_a8) render::Texture::Desc();
        iVar2 = param_4->field_8;
        piVar9 = (int*)std::array<render::Texture::Desc, 2ul>::operator[]((ulong)&local_128);
        bVar13 = (byte)local_40;
        *piVar9 = iVar2;
        piVar9[1] = param_4->field_12;
        if ((param_3 != (Texture*)0) && (((ulong)local_40 & 2) != 0)) {
            lVar10 = param_3->second();
            local_a8._8_4_ = *(int*)(lVar10 + 8);
            local_a8._12_4_ = *(int*)(lVar10 + 12);
            local_a8._16_8_ = *(undefined8*)(lVar10 + 16);
            local_a8._24_8_ = *(undefined8*)(lVar10 + 24);
            local_a8._32_8_ = *(undefined8*)(lVar10 + 32);
            local_a8._40_8_ = *(undefined8*)(lVar10 + 40);
            local_a8._48_8_ = *(undefined8*)(lVar10 + 48);
            local_a8._56_8_ = *(undefined8*)(lVar10 + 56);
            local_a8._0_4_ = param_4->field_8;
            local_a8._4_4_ = param_4->field_12;
        }
        local_40 = param_4;
        local_60->Register(*(RenderTargetsManager**)(local_60._16_8_ + 208), "ViewportResolveRT", 3553, &local_128, 1,
                           local_a8, 0, 1);
        this_00 = local_38;
        shared_ptr<render::RenderTargets>::operator=((shared_ptr<render::RenderTargets>*)local_38,
                                                     (shared_ptr*)local_60);
        local_60->~shared_ptr();
        psVar11 = local_48;
        pRVar7 = (RenderTargets*)local_48->end();
        uVar3 = local_a8._64_8_;
        local_a8._64_8_->SetRenderTargets(pRVar7);
        pRVar7 = (RenderTargets*)this_00->end();
        pVVar12 = local_40;
        local_60->GetScreenRect();
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_138,
                                                                                 (_func_decltype_nullptr*)pVVar12);
        uVar3->ResolveColourTargetData(pRVar7, (uint)(bVar13 & 2) << 7 | 16384, (Rect*)local_60, (Rect*)local_138);
        pRVar7 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(psVar11);
        pRVar7->Unbind();
    }

    // 0x1009ac0a0, 1760 bytes, placed by class name
    // PostProcessManager::CreateRenderTargets(render::Texture::Desc const&, render::Texture::Desc const&, unsigned int, unsigned char)
    ulong PostProcessManager::CreateRenderTargets(Desc* param_1, Desc* param_2, uint param_3, uchar param_4) {
        uint uVar1;
        RenderTargetsManager* pRVar2;
        bool bVar3;
        int* piVar4;
        RenderTargets* this_00;
        long lVar5;
        ulong uVar6;
        undefined8 uVar7;
        shared_ptr<render::RenderTargets>* psVar8;
        shared_ptr* psVar9;
        ulong uVar10;
        int iVar11;
        undefined1* puVar12;
        undefined7 in_register_00000081;
        undefined8 uVar13;
        char* pcVar14;
        PostProcessManager* pPVar15;
        undefined4 uVar18;
        undefined1* puVar16;
        Desc* pDVar17;
        undefined1 local_188[64];
        undefined8 local_148;
        undefined8 uStack_140;
        undefined8 local_138;
        undefined8 uStack_130;
        undefined8 local_128;
        undefined8 uStack_120;
        undefined8 local_118;
        undefined8 uStack_110;
        undefined8 local_108;
        undefined8 uStack_100;
        undefined8 local_f8;
        undefined8 uStack_f0;
        undefined8 local_e8;
        undefined8 uStack_e0;
        undefined8 local_d8;
        undefined8 uStack_d0;
        undefined1 local_c8[72];
        uint* local_80;
        ulong local_78;
        shared_ptr local_70;
        int local_54;
        AutoSingleton<ShaderThreadPoolSingleton> local_50[8];
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_48;
        uint local_3c;
        PostProcessManager* local_38;

        local_48 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)CONCAT44(local_48._4_4_, param_3);
        local_38 = this;
        local_50->~AutoSingleton("Post_Processing");
        new (&local_148) std::array<render::Texture::Desc, 2ul>();
        iVar11 = param_1->field_0;
        piVar4 = (int*)std::array<render::Texture::Desc, 2ul>::operator[]((ulong)&local_148);
        *piVar4 = iVar11;
        piVar4[1] = param_1->field_4;
        piVar4[3] = param_1->field_12;
        new (local_c8) render::Texture::Desc();
        pPVar15 = local_38;
        local_3c = (uint)CONCAT71(in_register_00000081, param_4);
        if ((param_4 & 2) != 0) {
            local_c8._0_4_ = param_2->field_0;
            local_c8._4_4_ = param_2->field_4;
            local_c8._12_4_ = param_2->field_12;
        }
        local_188->Register(local_38->m_pRenderTargetsManager, "PostProcessEffectSrcRT", 3553, &local_148, 1,
                            (Desc*)local_c8, 0, 1);
        shared_ptr<render::RenderTargets>::operator=((shared_ptr<render::RenderTargets>*)pPVar15->field_264,
                                                     (shared_ptr*)local_188);
        pDVar17 = (Desc*)local_188;
        pDVar17->~shared_ptr();
        puVar12 = pPVar15->field_248;
        bVar3 = puVar12->operator_cast_to_bool();
        if (!bVar3) {
            make_shared<render::RenderTargets>((jag*)local_188);
            shared_ptr<render::RenderTargets>::operator=((shared_ptr<render::RenderTargets>*)puVar12,
                                                         (shared_ptr*)local_188);
            local_188->~shared_ptr();
            this_00 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)puVar12);
            this_00->Create("PostProcessResolveRT", 0);
        }
        pPVar15 = local_38;
        pRVar2 = local_38->m_pRenderTargetsManager;
        render::Texture::Desc::Desc(pDVar17);
        local_70.Register(pRVar2, "PostProcessEffectDstRT", 3553, &local_148, 1, pDVar17, 0, 1);
        puVar12 = pPVar15->field_280;
        shared_ptr<render::RenderTargets>::operator=((shared_ptr<render::RenderTargets>*)puVar12, &local_70);
        local_70.~shared_ptr();
        bVar3 = puVar12->operator_cast_to_bool();
        if (bVar3) {
            uVar10 = (ulong)local_48 & 4294967295;
            if ((local_3c & 1) != 0) {
                new (&local_148) std::array<render::Texture::Desc, 2ul>();
                pDVar17 = param_1;
                uVar1 = param_1->field_0;
                local_80 = (uint*)std::array<render::Texture::Desc, 2ul>::operator[]((ulong)&local_148);
                pPVar15 = local_38;
                *local_80 = uVar1;
                local_80[1] = pDVar17->field_4;
                local_80[3] = pDVar17->field_12;
                puVar12 = &local_38->field_296;
                local_78 = uVar10;
                puVar12->set_max_size(uVar10, 0);
                local_48 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)puVar12;
                lVar5 = puVar12->end();
                if (lVar5 != 0) {
                    puVar12 = &DAT_00000001;
                    uVar10 = 0;
                    do {
                        local_54 = (int)puVar12 + -1;
                        *local_80 = *local_80 >> 1;
                        local_80[1] = local_80[1] >> 1;
                        local_c8._64_8_ = puVar12;
                        new (local_188) eastl::basic_string<char, BucketAllocatorEASTL>("PostProcessDownsampleRT%d");
                        pRVar2 = pPVar15->m_pRenderTargetsManager;
                        uVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        pDVar17 = (Desc*)local_c8;
                        render::Texture::Desc::Desc(pDVar17);
                        local_70.Register(pRVar2, uVar7, 3553, &local_148, 1, pDVar17, 0, 1);
                        uVar18 = (undefined4)((ulong)pDVar17 >> 32);
                        psVar8 = (shared_ptr<render::RenderTargets>*)
                            Array<shared_ptr<render::RenderTargets>, eastl::allocator>::operator[](
                                (Array<shared_ptr<render::RenderTargets>, eastl::allocator>*)local_48, uVar10);
                        shared_ptr<render::RenderTargets>::operator=(psVar8, &local_70);
                        local_70.~shared_ptr();
                        psVar9 = (shared_ptr*)Array<shared_ptr<render::RenderTargets>, eastl::allocator>::operator[](
                            (Array<shared_ptr<render::RenderTargets>, eastl::allocator>*)local_48, uVar10);
                        pPVar15 = local_38;
                        uVar7 = local_c8._64_8_;
                        bVar3 = shared_ptr::operator_cast_to_bool(psVar9);
                        if (!bVar3) {
                            uVar7 = logger::default_logger();
                            logger::Logger::Log(uVar7, 0, 2,
                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                                "graphics/postprocess/PostProcessManager.cpp",
                                                470, "Failed to create downsample target %u",
                                                CONCAT44(uVar18, local_54));
                            DestroyRenderTargets(pPVar15);
                            local_188->~basic_string();
                            uVar6 = 0;
                            goto LAB_1009ac6e3;
                        }
                        local_188->~basic_string();
                        uVar10 = uVar7 & 4294967295;
                        uVar6 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(local_48);
                        puVar12 = (undefined1*)(ulong)((int)uVar7 + 1);
                    } while (uVar10 < uVar6);
                }
                uVar10 = local_78;
            }
            uVar6 = CONCAT71((int7)((ulong)puVar12 >> 8), 1);
            if ((local_3c & 12) != 0) {
                new (local_c8) render::Texture::Desc();
                local_c8._0_4_ = param_1->field_0;
                local_c8._4_4_ = param_1->field_4;
                local_c8._12_4_ = 22;
                puVar12 = &local_38->field_320;
                puVar12->set_max_size(uVar10, 0);
                puVar12->set_max_size(uVar10, 0);
                lVar5 = puVar12->end();
                if (lVar5 != 0) {
                    local_48 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&local_38->field_344;
                    uVar6 = 0;
                    do {
                        local_c8._0_4_ = (uint)local_c8._0_4_ >> 1;
                        local_c8._4_4_ = (uint)local_c8._4_4_ >> 1;
                        iVar11 = (int)uVar6;
                        if ((local_3c & 4) != 0) {
                            pRVar2 = local_38->m_pRenderTargetsManager;
                            local_d8 = 0;
                            uStack_d0 = 0;
                            local_e8 = 0;
                            uStack_e0 = 0;
                            local_f8 = 0;
                            uStack_f0 = 0;
                            local_108 = 0;
                            uStack_100 = 0;
                            local_118 = 0;
                            uStack_110 = 0;
                            local_128 = 0;
                            uStack_120 = 0;
                            local_138 = 0;
                            uStack_130 = 0;
                            local_148 = 0;
                            uStack_140 = 0;
                            new (&local_148) std::array<render::Texture::Desc, 2ul>();
                            puVar16 = local_c8;
                            local_188->Register(pRVar2, "PostProcessDownsampleDepthMinRT", 3553,
                                                (array<render::Texture::Desc, 2ul>*)&local_148, 0, puVar16, 0, 1);
                            uVar18 = (undefined4)((ulong)puVar16 >> 32);
                            psVar8 = (shared_ptr<render::RenderTargets>*)
                                Array<shared_ptr<render::RenderTargets>, eastl::allocator>::operator[](
                                    (Array<shared_ptr<render::RenderTargets>, eastl::allocator>*)puVar12, uVar6);
                            shared_ptr<render::RenderTargets>::operator=(psVar8, (shared_ptr*)local_188);
                            local_188->~shared_ptr();
                            psVar9 =
                                (shared_ptr*)Array<shared_ptr<render::RenderTargets>, eastl::allocator>::operator[](
                                    (Array<shared_ptr<render::RenderTargets>, eastl::allocator>*)puVar12, uVar6);
                            bVar3 = shared_ptr::operator_cast_to_bool(psVar9);
                            if (!bVar3) {
                                uVar7 = logger::default_logger();
                                pDVar17 = (Desc*)CONCAT44(uVar18, iVar11);
                                pcVar14 = "Failed to create min depth downsample target %u";
                                uVar13 = 497;
                                goto LAB_1009ac44f;
                            }
                        }
                        if ((local_3c & 8) != 0) {
                            pRVar2 = local_38->m_pRenderTargetsManager;
                            local_d8 = 0;
                            uStack_d0 = 0;
                            local_e8 = 0;
                            uStack_e0 = 0;
                            local_f8 = 0;
                            uStack_f0 = 0;
                            local_108 = 0;
                            uStack_100 = 0;
                            local_118 = 0;
                            uStack_110 = 0;
                            local_128 = 0;
                            uStack_120 = 0;
                            local_138 = 0;
                            uStack_130 = 0;
                            local_148 = 0;
                            uStack_140 = 0;
                            new (&local_148) std::array<render::Texture::Desc, 2ul>();
                            puVar16 = local_c8;
                            local_188->Register(pRVar2, "PostProcessDownsampleDepthMaxRT", 3553,
                                                (array<render::Texture::Desc, 2ul>*)&local_148, 0, puVar16, 0, 1);
                            uVar18 = (undefined4)((ulong)puVar16 >> 32);
                            psVar8 = (shared_ptr<render::RenderTargets>*)
                                Array<shared_ptr<render::RenderTargets>, eastl::allocator>::operator[](
                                    (Array<shared_ptr<render::RenderTargets>, eastl::allocator>*)local_48, uVar6);
                            shared_ptr<render::RenderTargets>::operator=(psVar8, (shared_ptr*)local_188);
                            local_188->~shared_ptr();
                            psVar9 =
                                (shared_ptr*)Array<shared_ptr<render::RenderTargets>, eastl::allocator>::operator[](
                                    (Array<shared_ptr<render::RenderTargets>, eastl::allocator>*)local_48, uVar6);
                            bVar3 = shared_ptr::operator_cast_to_bool(psVar9);
                            if (!bVar3) {
                                uVar7 = logger::default_logger();
                                pDVar17 = (Desc*)CONCAT44(uVar18, iVar11);
                                pcVar14 = "Failed to create max depth downsample target %u";
                                uVar13 = 507;
                                goto LAB_1009ac44f;
                            }
                        }
                        uVar6 = (ulong)(iVar11 + 1);
                        uVar10 = puVar12->end();
                    } while (uVar6 < uVar10);
                }
                uVar6 = CONCAT71((int7)(uVar6 >> 8), 1);
            }
        } else {
            uVar7 = logger::default_logger();
            pcVar14 = "Failed to create PostProcess destination resolve target";
            uVar13 = 446;
        LAB_1009ac44f:
            uVar6 = 0;
            logger::Logger::Log(uVar7, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "postprocess/PostProcessManager.cpp",
                                uVar13, pcVar14, pDVar17);
            DestroyRenderTargets(local_38);
        }
    LAB_1009ac6e3:
        return uVar6 & 4294967295;
    }

    // 0x1009acdd0, 768 bytes, placed by class name
    // PostProcessManager::RenderDebug(render::Viewport const&)
    void PostProcessManager::RenderDebug(Viewport* param_1) {
        undefined1* this_00;
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                    eastl::allocator>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>* this_01;
        PostProcessManager* pPVar1;
        Viewport* pVVar2;
        bool bVar3;
        char cVar4;
        int iVar5;
        long lVar6;
        ulong uVar7;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_02;
        RenderTargets* this_03;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* this_04;
        undefined8* puVar8;
        uint* puVar9;
        long* plVar10;
        vector* pvVar11;
        float* pfVar12;
        shared_ptr<PostProcessEffect>* this_05;
        shared_ptr<PostProcessEffect>* psVar13;
        WorldmapRenderer* this_06;
        uint uVar14;
        type* ptVar15;
        Array<shared_ptr<render::RenderTargets>, eastl::allocator>* this_07;
        ulong uVar16;
        ImVec4 local_98[16];
        Point<float> local_88[8];
        undefined1 local_80[16];
        undefined1 local_70[16];
        Point<float> local_60[8];
        PostProcessManager* local_58;
        uint local_4c;
        float local_48;
        float local_44;
        Viewport* local_40;
        float local_38;
        float local_34;

        local_58 = this;
        local_40 = param_1;
        if (field_0 != '\0') {
            this_07 = (Array<shared_ptr<render::RenderTargets>, eastl::allocator>*)&field_296;
            lVar6 = this_07->end();
            if (lVar6 != 0) {
                local_34 = 0.0;
                uVar14 = 1;
                uVar16 = 0;
                local_70._8_8_ = this_07;
                do {
                    this_02 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                        Array<shared_ptr<render::RenderTargets>, eastl::allocator>::operator[](this_07, uVar16);
                    this_03 =
                        (RenderTargets*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(
                            this_02);
                    if (this_03 == (RenderTargets*)0) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("pDownSampledRT",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "postprocess/PostProcessManager.cpp",
                                  355, (char*)0);
                    }
                    local_4c = uVar14;
                    this_04 = (vector<render::Texture*,
                                      eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                                  this_03->GetColourTargetTextures();
                    ptVar15 = (type*)0;
                    puVar8 = (undefined8*)eastl::vector<
                        render::Texture*,
                        eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](this_04,
                                                                                                               0);
                    this_01 = (compressed_pair_imp<
                               eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                       eastl::allocator>>::Layout,
                               eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>*)*puVar8;
                    if (this_01 ==
                        (compressed_pair_imp<
                            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                    eastl::allocator>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>*)0) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("pDownSampledTex",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "postprocess/PostProcessManager.cpp",
                                  356, (char*)0);
                    }
                    math::Point<float>::Point(local_60, 0.0, local_34);
                    puVar9 = (uint*)eastl::compressed_pair_imp<
                        eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>::second(this_01);
                    pVVar2 = local_40;
                    uVar14 = *puVar9;
                    iVar5 = local_40->field_8;
                    lVar6 = eastl::compressed_pair_imp<
                        eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>::second(this_01);
                    local_38 = (float)*(uint*)(lVar6 + 4) / (float)pVVar2->field_12;
                    plVar10 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                    if (plVar10 != (long*)0) {
                        local_48 = (float)uVar14 / (float)iVar5;
                        pvVar11 = local_60->SSOBeginPtr(ptVar15);
                        local_44 = *(float*)pvVar11;
                        pfVar12 = (float*)local_60->y();
                        ImVec4::ImVec4(local_98, local_44, *pfVar12, local_48, local_38);
                        new ((local_80 + 8)) math::Point<float>(0.0, 0.0);
                        math::Point<float>::Point(local_88, 1.0, 1.0);
                        new (local_70) math::ColourStorage8888<math::ARGB8StorageLayout>(255, 255, 255, 255);
                        iVar5 = local_70->GetX();
                        new (local_80) oldscape::sidebars::SideBarData(iVar5, 0);
                        (**(code**)(*plVar10 + 112))(plVar10, this_01, local_98, local_80 + 8, local_88, 0, 0, 0,
                                                     (SideBarData*)local_80);
                    }
                    uVar14 = local_4c;
                    this_07 = (Array<shared_ptr<render::RenderTargets>, eastl::allocator>*)local_70._8_8_;
                    local_34 = local_34 + local_38;
                    uVar16 = (ulong)local_4c;
                    uVar7 = local_70._8_8_->end();
                    uVar14 = uVar14 + 1;
                } while (uVar16 < uVar7);
            }
        }
        pPVar1 = local_58;
        if (local_58->field_1 != '\0') {
            this_00 = &local_58->field_1016;
            bVar3 = this_00->operator_cast_to_bool();
            if (bVar3) {
                plVar10 =
                    (long*)std::unique_ptr<AvgLuminanceFilter, std::default_delete<AvgLuminanceFilter>>::operator->(
                        (unique_ptr<AvgLuminanceFilter, std::default_delete<AvgLuminanceFilter>>*)this_00);
                (**(code**)(*plVar10 + 48))(plVar10, local_40);
            }
        }
        this_05 = (shared_ptr<PostProcessEffect>*)(&pPVar1->field_216)->HeapBeginPtr();
        psVar13 = (shared_ptr<PostProcessEffect>*)(&pPVar1->field_216)->end();
        for (; this_05 != psVar13; this_05 = this_05 + 16) {
            this_06 = (WorldmapRenderer*)shared_ptr<PostProcessEffect>::operator->(this_05);
            cVar4 = this_06->IsValid();
            if (cVar4 != '\0') {
                plVar10 = (long*)shared_ptr<PostProcessEffect>::operator->(this_05);
                (**(code**)(*plVar10 + 24))(plVar10, local_40);
            }
        }
    }

    // 0x1009ad0d0, 128 bytes, placed by class name
    // PostProcessManager::GetEffect(int) const
    shared_ptr<PostProcessEffect>* PostProcessManager::GetEffect(int param_1) {
        shared_ptr<PostProcessEffect>* this_00;
        shared_ptr<PostProcessEffect>* psVar2;
        Minimap* this_01;

        this_00 = (shared_ptr<PostProcessEffect>*)(&field_216)->HeapBeginPtr();
        psVar2 = (shared_ptr<PostProcessEffect>*)(&field_216)->end();
        while (true) {
            if (this_00 == psVar2) {
                return (shared_ptr<PostProcessEffect>*)&PostProcessEffect::NullPostProcessEffect;
            }
            this_01 = (Minimap*)shared_ptr<PostProcessEffect>::operator->(this_00);
            if (this_01->GetLevel() == param_1)
                break;
            this_00 = this_00 + 16;
        }
        return this_00;
    }

} // namespace jag::postprocess
