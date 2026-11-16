// libs/graphics/runetek7/lighting/shadowmapping/PointLightSMManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "PointLightSMManager.h"

namespace jag::graphics {
    // 0x100f44144, 4 bytes, __data
    PointLightSMManager::m_ClearShadowMapDepthAtlas = 1;

    // 0x100f44148, 4 bytes, __data
    float PointLightSMManager::m_occludedShadowCasterFrustumScale = 50.0f;

    // 0x103bc03d0, 1 bytes, __common; zero-initialised
    PointLightSMManager::m_ShowShadowMapDepthAtlas;

    // 0x103bc03d1, 1 bytes, __common; zero-initialised
    PointLightSMManager::m_showPointLightFaceCameraFrustums;

    // 0x103bc03d2, 1 bytes, __common; zero-initialised
    PointLightSMManager::m_showShadowCastingLights;

    // 0x103bc03d3, 1 bytes, __common; zero-initialised
    PointLightSMManager::m_showShadowCastingLightDst;

    // 0x103bc03d4, 1 bytes, __common; zero-initialised
    PointLightSMManager::m_cullOccludedShadowCasters;

    // 0x103bc03d5, 1 bytes, __common; zero-initialised
    PointLightSMManager::m_showOccludedShadowCasterFrustums;

    // 0x103bc03d6, 2 bytes, __common; zero-initialised
    PointLightSMManager::m_enableForcedUpdates;

    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    PointLightSMManager::GetConfig() const;

    // 0x1001b8a60: the linker folded this into oldscape::OSRenderCore_RenderThread_Common::GetConstRenderStateNXT() const, which has identical code
    RenderToTextureHelper* PointLightSMManager::GetRenderToTexture();

    // 0x1001cd990: the linker folded this into PointLightIndicesEffect::GetVisiblePointLights(), which has identical code
    shared_ptr PointLightSMManager::GetShadowCubeMapAtlasRT() const;

    // 0x1001d2000: the linker folded this into oldscape::rseven::OSRenderCore_TextureDataProvider::GetTexturesCompressedDXTArchive() const, which has identical code
    RenderTargetsManager* PointLightSMManager::GetRenderTargetsManager();

    // 0x1001fb280: the linker folded this into http::CRMData::GetActionInfo() const, which has identical code
    PointLightSMManager::GetShadowCubeMapAtlasPacker() const;

    // 0x100396010: the linker folded this into oldscape::auth::SteamAuthLibWrapper::GetGameToken(), which has identical code
    PointLightSMManager::GetActivePointLightSM() const;

    // 0x1008adb70, 96 bytes, placed by class name and debug map
    // PointLightSMManager::IsActive(PointLightSM*) const
    bool PointLightSMManager::IsActive(PointLightSM* param_1) {
        function** ppfVar1;
        function** ppfVar2;
        undefined1* this_00;
        PointLightSM* local_20;

        this_00 = &field_192;
        local_20 = param_1;
        ppfVar1 = (function**)this_00->HeapBeginPtr();
        ppfVar2 = (function**)this_00->end();
        ppfVar1 = eastl::find<std::function<bool(input::TextCommand)>**, std::function<bool(input::TextCommand)>*>(
            ppfVar1, ppfVar2, (function**)&local_20);
        ppfVar2 = (function**)this_00->end();
        return ppfVar1 != ppfVar2;
    }

    // 0x1008adc50, 560 bytes, placed by class name and debug map
    // PointLightSMManager::FreePointLightSM(PointLightSM*)
    void PointLightSMManager::FreePointLightSM(PointLightSM* param_1) {
        PointLightSMManager* pPVar1;
        NXTPixToolkit* pNVar2;
        char cVar3;
        uint uVar4;
        SimplePool<PointLightSM>* pSVar5;
        Layout* this_00;
        array<graphicutils::TextureAtlasSlot2D, 6ul>* this_01;
        TextureAtlasSlot2D* this_02;
        TextureAtlasSlot2D* pTVar6;
        TextureAtlasSlotPacker* this_03;
        function** ppfVar7;
        function** ppfVar8;
        PointLightSM** ppPVar9;
        undefined1* puVar10;
        ulong local_60;
        array<graphicutils::TextureAtlasSlot2D, 6ul>* local_58;
        unique_ptr<SimplePool<PointLightSM>, std::default_delete<SimplePool<PointLightSM>>>* local_50;
        scoped_lock<std::mutex> local_48[8];
        PointLightSMManager* local_40;
        NXTPixToolkit* local_38;

        local_38 = (NXTPixToolkit*)param_1;
        std::scoped_lock<std::mutex>::scoped_lock(local_48, (mutex*)&field_128);
        if (local_38 == (NXTPixToolkit*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pPointLightSM",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "lighting/shadowmapping/PointLightSMManager.cpp",
                      191, (char*)0);
        }
        puVar10 = &field_120;
        pSVar5 =
            (SimplePool<PointLightSM>*)
                std::unique_ptr<SimplePool<PointLightSM>, std::default_delete<SimplePool<PointLightSM>>>::operator->(
                    (unique_ptr<SimplePool<PointLightSM>, std::default_delete<SimplePool<PointLightSM>>>*)puVar10);
        cVar3 = pSVar5->empty();
        if (cVar3 == '\0') {
            cVar3 = IsActive(this, (PointLightSM*)local_38);
            pNVar2 = local_38;
            if (cVar3 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("IsActive(pPointLightSM)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "lighting/shadowmapping/PointLightSMManager.cpp",
                          194, (char*)0);
            }
            if (local_38 != (NXTPixToolkit*)0) {
                pSVar5 =
                    (SimplePool<PointLightSM>*)std::
                        unique_ptr<SimplePool<PointLightSM>, std::default_delete<SimplePool<PointLightSM>>>::operator->(
                            (unique_ptr<SimplePool<PointLightSM>, std::default_delete<SimplePool<PointLightSM>>>*)
                                puVar10);
                cVar3 = pSVar5->IsAddressAllocated(pNVar2);
                if (cVar3 != '\0') {
                    local_50 =
                        (unique_ptr<SimplePool<PointLightSM>, std::default_delete<SimplePool<PointLightSM>>>*)puVar10;
                    local_40 = this;
                    this_00 = (Layout*)local_38->GetScreen();
                    this_01 = (array<graphicutils::TextureAtlasSlot2D, 6ul>*)eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                            eastl::allocator>>::Layout::HeapBeginPtr(this_00);
                    local_58 = (array<graphicutils::TextureAtlasSlot2D, 6ul>*)this_00->end();
                    if (this_01 != local_58) {
                        puVar10 = &local_40->field_112;
                        do {
                            this_02 =
                                (TextureAtlasSlot2D*)std::array<graphicutils::TextureAtlasSlot2D, 6ul>::begin(this_01);
                            pTVar6 =
                                (TextureAtlasSlot2D*)std::array<graphicutils::TextureAtlasSlot2D, 6ul>::end(this_01);
                            for (; this_02 != pTVar6; this_02 = (TextureAtlasSlot2D*)&this_02->field_6) {
                                cVar3 = this_02->IsValid();
                                if (cVar3 == '\0') {
                                    /* WARNING: Subroutine does not return */
                                    LogAssert("cubeMapFaceAtlaSlot.IsValid()",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "graphics/runetek7/lighting/shadowmapping/PointLightSMManager.cpp",
                                              204, (char*)0);
                                }
                                this_03 =
                                    (TextureAtlasSlotPacker*)
                                        std::unique_ptr<graphicutils::TextureAtlasSlotPacker,
                                                        std::default_delete<graphicutils::TextureAtlasSlotPacker>>::
                                        operator->(
                                            (unique_ptr<graphicutils::TextureAtlasSlotPacker,
                                                        std::default_delete<graphicutils::TextureAtlasSlotPacker>>*)
                                                puVar10);
                                this_03->FreeSlot2D(this_02);
                            }
                            this_01 = this_01 + 256;
                        } while (this_01 != local_58);
                    }
                    pPVar1 = local_40;
                    puVar10 = &local_40->field_224;
                    uVar4 = local_38->GetID();
                    local_60 = (ulong)uVar4;
                    puVar10->push(&local_60);
                    puVar10 = &pPVar1->field_192;
                    ppfVar7 = (function**)puVar10->HeapBeginPtr();
                    ppfVar8 = (function**)puVar10->end();
                    ppPVar9 = (PointLightSM**)eastl::find<std::function<bool(input::TextCommand)>**,
                                                          std::function<bool(input::TextCommand)>*>(
                        ppfVar7, ppfVar8, (function**)&local_38);
                    puVar10->erase(ppPVar9);
                    pSVar5 = (SimplePool<PointLightSM>*)
                                 std::unique_ptr<SimplePool<PointLightSM>,
                                                 std::default_delete<SimplePool<PointLightSM>>>::operator->(local_50);
                    pSVar5->Destroy(local_38);
                }
            }
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_48);
    }

    // 0x1008ae3e0, 96 bytes, placed by class name
    // PointLightSMManager::Config::GetMinShadowCubeMapFaceResolution() const
    uint PointLightSMManager::Config::GetMinShadowCubeMapFaceResolution() {
        int iVar1;
        char cVar2;
        uint uVar3;

        iVar1 = field_4;
        uVar3 = field_8;
        while (iVar1 = iVar1 + -1, iVar1 != 0) {
            uVar3 = uVar3 >> 1;
        }
        if ((uVar3 == 0) || (cVar2 = math::IsPowerOf2(uVar3), cVar2 == '\0')) {
            /* WARNING: Subroutine does not return */
            LogAssert("shadowCubeMapFaceResolution > 0 && math::IsPowerOf2(shadowCubeMapFaceResolution)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "lighting/shadowmapping/PointLightSMManager.cpp",
                      28, (char*)0);
        }
        return uVar3;
    }

    // 0x1008ae440, 80 bytes, placed by class name
    // PointLightSMManager::Config::GetShadowCubeMapAtlasSlotCount(unsigned int) const
    int PointLightSMManager::Config::GetShadowCubeMapAtlasSlotCount(uint param_1) {
        int iVar1;
        uint uVar2;
        int iVar3;

        iVar3 = field_4;
        if (iVar3 == 0) {
            iVar1 = 0;
        } else {
            uVar2 = field_8;
            iVar1 = 0;
            do {
                iVar1 = iVar1 + (uVar2 * uVar2 * field_0 * 6) / (param_1 * param_1);
                uVar2 = uVar2 >> 1;
                iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
        }
        return iVar1;
    }

    // 0x1008ae490, 304 bytes, base-object constructor, placed by class name
    // PointLightSMManager::PointLightSMManager(render::RenderTargetsManager*, graphicutils::RenderToTextureHelper*)
    void PointLightSMManager::PointLightSMManager(RenderTargetsManager* param_1, RenderToTextureHelper* param_2) {
        char cVar1;

        new (this) Config();
        m_pRenderTargetsManager = param_1;
        m_pRenderToTexture = param_2;
        new (m_shadowCubeMapAtlasRT, (_func_decltype_nullptr*)param_1)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        std::unique_ptr<graphicutils::TextureAtlasSlotPacker,
                        std::default_delete<graphicutils::TextureAtlasSlotPacker>>::unique_ptr<true,
                                                                                               void>(
            (unique_ptr<graphicutils::TextureAtlasSlotPacker,
                        std::default_delete<graphicutils::TextureAtlasSlotPacker>>*)&field_112);
        std::unique_ptr<SimplePool<PointLightSM>, std::default_delete<SimplePool<PointLightSM>>>::unique_ptr<true,
                                                                                                             void>(
            (unique_ptr<SimplePool<PointLightSM>, std::default_delete<SimplePool<PointLightSM>>>*)&field_120);
        new (&field_128) std::mutex();
        new (&field_192) eastl::vector<PointLightSM*, eastl::allocator>();
        new (&field_224) eastl::stack<unsigned long, eastl::vector<unsigned long, eastl::allocator>>();
        if ((m_pRenderTargetsManager == (RenderTargetsManager*)0) ||
            (m_pRenderToTexture == (RenderToTextureHelper*)0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pRenderTargetsManager && m_pRenderToTexture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "lighting/shadowmapping/PointLightSMManager.cpp",
                      54, (char*)0);
        }
        cVar1 = (&field_192)->empty();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_allocatedPointLightSM.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "lighting/shadowmapping/PointLightSMManager.cpp",
                      55, (char*)0);
        }
    }

    // 0x1008ae660, 16 bytes, complete-object constructor, placed by class name
    // PointLightSMManager::PointLightSMManager(render::RenderTargetsManager*, graphicutils::RenderToTextureHelper*): jumps straight to the base-object constructor

    // 0x1008ae670, 544 bytes, placed by class name
    // PointLightSMManager::Init(PointLightSMManager::Config const&)
    undefined4 PointLightSMManager::Init(Config* param_1) {
        double dVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        undefined8 uVar8;
        uint uVar9;
        undefined4 uVar10;
        TcpConnectionMessageBase* this_00;
        vector* this_01;
        type* ptVar11;
        TextureAtlasQuality local_60[8];
        double local_58;
        undefined8 local_50;
        undefined8 local_48;
        undefined4 uStack_40;
        undefined4 uStack_3c;
        undefined4 uStack_38;
        undefined8 uStack_34;
        bool local_29;

        if (4 < (uint)param_1->field_0) {
            /* WARNING: Subroutine does not return */
            LogAssert("config.m_maxShadowCastingPointLights <= MAX_SHADOW_CASTING_POINT_LIGHTS",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "lighting/shadowmapping/PointLightSMManager.cpp",
                      60, (char*)0);
        }
        if (4 < (uint)param_1->field_4) {
            /* WARNING: Subroutine does not return */
            LogAssert("config.m_maxPointLightShadowMapLODs <= MAX_POINT_LIGHT_SHADOWS_LODS",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "lighting/shadowmapping/PointLightSMManager.cpp",
                      61, (char*)0);
        }
        uVar9 = param_1->GetMinShadowCubeMapFaceResolution();
        local_50 = (TextureAtlasUsage*)CONCAT44(local_50._4_4_, uVar9);
        uVar9 = param_1->GetShadowCubeMapAtlasSlotCount(uVar9);
        local_58 = (double)uVar9;
        dVar1 = (double)_ceil(SUB84(SQRT(local_58), 0));
        uVar9 = math::RoundFloatToInt(dVar1);
        uVar10 = math::RoundUpToPowerOf2(uVar9);
        local_50 = (TextureAtlasUsage*)CONCAT44(uVar10, (undefined4)local_50);
        local_48 = 0;
        uStack_40 = 0;
        uStack_3c = 0;
        uStack_38 = 0;
        uStack_34 = 0;
        local_29 = false;
        std::make_unique<graphicutils::TextureAtlasSlotPacker, graphicutils::TextureAtlasQuality&,
                         graphicutils::TextureAtlasUsage_const*&, bool>(local_60, (TextureAtlasUsage**)&local_50,
                                                                        &local_29);
        std::unique_ptr<graphicutils::TextureAtlasSlotPacker,
                        std::default_delete<graphicutils::TextureAtlasSlotPacker>>::
        operator=((unique_ptr<graphicutils::TextureAtlasSlotPacker,
                              std::default_delete<graphicutils::TextureAtlasSlotPacker>>*)&field_112,
                  (unique_ptr*)local_60);
        local_60->~unique_ptr();
        this_00 =
            (TcpConnectionMessageBase*)std::unique_ptr<graphicutils::TextureAtlasSlotPacker,
                                                       std::default_delete<graphicutils::TextureAtlasSlotPacker>>::
            operator->((unique_ptr<graphicutils::TextureAtlasSlotPacker,
                                   std::default_delete<graphicutils::TextureAtlasSlotPacker>>*)&field_112);
        uVar9 = this_00->GetEndPosition();
        if ((double)uVar9 < local_58) {
            /* WARNING: Subroutine does not return */
            LogAssert("totalSlotsRequired <= m_shadowCubeMapAtlasPacker->GetTotalSlots()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "lighting/shadowmapping/PointLightSMManager.cpp",
                      83, (char*)0);
        }
        if (*(float*)((long)&param_1->field_16 + 4) <= *(float*)&param_1->field_16) {
            /* WARNING: Subroutine does not return */
            LogAssert("config.m_startFadeDistance < config.m_maxViewDistance",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "lighting/shadowmapping/PointLightSMManager.cpp",
                      86, (char*)0);
        }
        std::make_unique<SimplePool<PointLightSM>, unsigned int const&>((uint*)&local_50);
        std::unique_ptr<SimplePool<PointLightSM>, std::default_delete<SimplePool<PointLightSM>>>::operator=(
            (unique_ptr<SimplePool<PointLightSM>, std::default_delete<SimplePool<PointLightSM>>>*)&field_120,
            (unique_ptr*)&local_50);
        local_50.~unique_ptr();
        ptVar11 = (type*)(ulong)(uint)param_1->field_0;
        (&field_192, (ulong)ptVar11)->reserve();
        this_01 = (&field_224, ptVar11)->SSOBeginPtr();
        this_01->reserve((ulong)(uint)param_1->field_0);
        local_50 = (TextureAtlasUsage*)0;
        if (param_1->field_0 != 0) {
            do {
                (&field_224, &local_50)->push();
                local_50 = local_50 + 1;
            } while (local_50 < (TextureAtlasUsage*)(ulong)(uint)param_1->field_0);
        }
        uVar10 = CreateRenderingResources(this, *(uint*)&param_1->field_12);
        if ((char)uVar10 == '\0') {
            Destroy(this);
        } else {
            uVar2 = param_1->field_68;
            field_60 = *(undefined8*)&param_1->field_60;
            field_68 = uVar2;
            uVar2 = *(undefined8*)param_1;
            uVar3 = *(undefined8*)&param_1->field_8;
            uVar4 = param_1->field_16;
            uVar5 = param_1->field_24;
            uVar6 = *(undefined8*)&param_1->field_32;
            uVar7 = *(undefined8*)&param_1->field_40;
            uVar8 = *(undefined8*)((long)&param_1->field_52 + 4);
            field_48 = *(undefined8*)&param_1->field_48;
            *(undefined8*)&field_56 = uVar8;
            field_32 = uVar6;
            field_40 = uVar7;
            field_16 = uVar4;
            field_24 = uVar5;
            field_0 = uVar2;
            field_8 = uVar3;
        }
        return uVar10;
    }

    // 0x1008aea50, 544 bytes, placed by class name
    // PointLightSMManager::CreateRenderingResources(unsigned int)
    ulong PointLightSMManager::CreateRenderingResources(uint param_1) {
        undefined1* this_00;
        RenderTargetsManager* pRVar1;
        bool bVar2;
        TextureAtlasSlotPacker* pTVar3;
        undefined7 extraout_var;
        BuiltinStates* this_01;
        RenderTargets* this_02;
        long* plVar4;
        undefined8 uVar5;
        SamplerState* this_03;
        undefined1 local_108[64];
        undefined1 local_c8[16];
        SamplerState local_b8;
        undefined8 uStack_80;
        undefined8 local_78;
        undefined8 uStack_70;
        undefined8 local_68;
        undefined8 uStack_60;
        undefined8 local_58;
        undefined8 uStack_50;
        undefined8 local_48;
        undefined8 uStack_40;
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (m_pRenderTargetsManager == (RenderTargetsManager*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pRenderTargetsManager != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "lighting/shadowmapping/PointLightSMManager.cpp",
                      239, (char*)0);
        }
        new (local_108) render::Texture::Desc();
        local_108._12_4_ = render::GetFormatFromDepthStencilBits(param_1, 0, false);
        pTVar3 = (TextureAtlasSlotPacker*)std::unique_ptr<graphicutils::TextureAtlasSlotPacker,
                                                          std::default_delete<graphicutils::TextureAtlasSlotPacker>>::
                 operator->((unique_ptr<graphicutils::TextureAtlasSlotPacker,
                                        std::default_delete<graphicutils::TextureAtlasSlotPacker>>*)&field_112);
        local_108._0_4_ = pTVar3->GetTextureResolution();
        pTVar3 = (TextureAtlasSlotPacker*)std::unique_ptr<graphicutils::TextureAtlasSlotPacker,
                                                          std::default_delete<graphicutils::TextureAtlasSlotPacker>>::
                 operator->((unique_ptr<graphicutils::TextureAtlasSlotPacker,
                                        std::default_delete<graphicutils::TextureAtlasSlotPacker>>*)&field_112);
        local_108._4_4_ = pTVar3->GetTextureResolution();
        pRVar1 = m_pRenderTargetsManager;
        local_48 = 0;
        uStack_40 = 0;
        local_58 = 0;
        uStack_50 = 0;
        local_68 = 0;
        uStack_60 = 0;
        local_78 = 0;
        uStack_70 = 0;
        local_b8.field_48 = 0;
        uStack_80 = 0;
        local_b8._32_4_ = 0;
        local_b8._36_4_ = 0;
        local_b8._40_4_ = 0;
        local_b8._44_4_ = 0;
        local_b8._16_8_ = 0;
        local_b8._24_8_ = 0;
        local_b8.field_0 = 0;
        local_b8._8_8_ = 0;
        new ((local_c8 + 16)) std::array<render::Texture::Desc, 2ul>();
        local_c8->Register(pRVar1, "PointLightShadowMapAtlas", 3553,
                           (array<render::Texture::Desc, 2ul>*)(local_c8 + 16), 0, local_108, 1, 1);
        this_00 = m_shadowCubeMapAtlasRT;
        shared_ptr<render::RenderTargets>::operator=((shared_ptr<render::RenderTargets>*)this_00,
                                                     (shared_ptr*)local_c8);
        local_c8->~shared_ptr();
        bVar2 = this_00->operator_cast_to_bool();
        if (bVar2) {
            this_03 = (SamplerState*)(local_c8 + 16);
            render::SamplerState::SamplerState(this_03);
            this_01 = (BuiltinStates*)this_03->Instance();
            this_01->CreateShadowSamplerState((SamplerState*)(local_c8 + 16));
            this_02 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)this_00);
            plVar4 = (long*)this_02->GetDepthStencilTargetTexture();
            (**(code**)(*plVar4 + 24))(plVar4, local_c8 + 16, 1);
            ((local_c8 + 16))->~SamplerState();
        } else {
            uVar5 = logger::default_logger();
            logger::Logger::Log(uVar5, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/lighting/shadowmapping/PointLightSMManager.cpp",
                                255, "Failed to create point light shadow map texture atlas");
            DestroyRenderingResources(this);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return CONCAT71(extraout_var, bVar2) & 4294967295;
    }

    // 0x1008aec70, 192 bytes, placed by class name
    // PointLightSMManager::Destroy()
    void PointLightSMManager::Destroy() {
        undefined1* this_00;
        char cVar1;
        SimplePool<PointLightSM>* this_01;
        type* in_RSI;

        DestroyRenderingResources(this);
        (&field_224, in_RSI)->SSOBeginPtr();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        cVar1 = (&field_192)->empty();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_allocatedPointLightSM.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "lighting/shadowmapping/PointLightSMManager.cpp",
                      116, (char*)0);
        }
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        this_00 = &field_120;
        if (this_00->operator_cast_to_bool()) {
            this_01 =
                (SimplePool<PointLightSM>*)std::
                    unique_ptr<SimplePool<PointLightSM>, std::default_delete<SimplePool<PointLightSM>>>::operator->(
                        (unique_ptr<SimplePool<PointLightSM>, std::default_delete<SimplePool<PointLightSM>>>*)this_00);
            cVar1 = this_01->empty();
            if (cVar1 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("m_pointLightSMPool->empty()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "lighting/shadowmapping/PointLightSMManager.cpp",
                          122, (char*)0);
            }
        }
        this_00->release();
        (&field_112)->release();
    }

    // 0x1008aed30, 64 bytes, placed by class name
    // PointLightSMManager::DestroyRenderingResources()
    void PointLightSMManager::DestroyRenderingResources() {
        TextureAtlasSlotPacker* this_00;

        (m_pRenderTargetsManager, (shared_ptr*)m_shadowCubeMapAtlasRT)->Unregister();
        if ((&field_112)->operator_cast_to_bool()) {
            this_00 =
                (TextureAtlasSlotPacker*)std::unique_ptr<graphicutils::TextureAtlasSlotPacker,
                                                         std::default_delete<graphicutils::TextureAtlasSlotPacker>>::
                operator->((unique_ptr<graphicutils::TextureAtlasSlotPacker,
                                       std::default_delete<graphicutils::TextureAtlasSlotPacker>>*)&field_112);
            this_00->ClearTextureSlots();
        }
    }

    // 0x1008aede0, 736 bytes, placed by class name
    // PointLightSMManager::AllocPointLightSM()
    PointLightSM* PointLightSMManager::AllocPointLightSM() {
        byte bVar1;
        uint uVar2;
        int iVar3;
        int iVar4;
        SimplePool<PointLightSM>* pSVar5;
        ulong uVar6;
        TextureAtlasReference* this_00;
        ulong uVar7;
        array<graphicutils::TextureAtlasSlot2D, 6ul>* paVar8;
        undefined4* puVar9;
        TextureAtlasSlot2D* this_01;
        ulong* puVar10;
        unique_ptr<SimplePool<PointLightSM>, std::default_delete<SimplePool<PointLightSM>>>* puVar11;
        undefined8* puVar12;
        undefined8* puVar13;
        undefined8 uVar14;
        PointLightSMManager* pPVar15;
        PointLightSM* pPVar16;
        uint uVar17;
        byte bVar18;
        undefined1* puVar19;
        Array<std::array<graphicutils::TextureAtlasSlot2D, 6ul>, BucketAllocatorEASTL> local_80[24];
        PointLightSMManager* local_68;
        scoped_lock<std::mutex> local_60[8];
        PointLightSM* local_58;
        unique_ptr<SimplePool<PointLightSM>, std::default_delete<SimplePool<PointLightSM>>>* local_50;
        undefined8 local_48;
        PointLightSMManager* local_40;
        byte local_31;

        std::scoped_lock<std::mutex>::scoped_lock(local_60, (mutex*)&field_128);
        puVar19 = &field_120;
        local_40 = this;
        pSVar5 =
            (SimplePool<PointLightSM>*)
                std::unique_ptr<SimplePool<PointLightSM>, std::default_delete<SimplePool<PointLightSM>>>::operator->(
                    (unique_ptr<SimplePool<PointLightSM>, std::default_delete<SimplePool<PointLightSM>>>*)puVar19);
        uVar6 = pSVar5->size();
        this_00 =
            (TextureAtlasReference*)
                std::unique_ptr<SimplePool<PointLightSM>, std::default_delete<SimplePool<PointLightSM>>>::operator->(
                    (unique_ptr<SimplePool<PointLightSM>, std::default_delete<SimplePool<PointLightSM>>>*)puVar19);
        uVar7 = this_00->GetTextureAtlas();
        pPVar15 = local_40;
        if (uVar6 < uVar7) {
            uVar17 = *(uint*)&local_40->field_8;
            Array<std::array<graphicutils::TextureAtlasSlot2D, 6ul>, BucketAllocatorEASTL>::Array(
                local_80, (ulong) * (uint*)((long)&local_40->field_0 + 4));
            local_50 = (unique_ptr<SimplePool<PointLightSM>, std::default_delete<SimplePool<PointLightSM>>>*)puVar19;
            if (*(int*)((long)&pPVar15->field_0 + 4) == 0) {
                bVar18 = 1;
            LAB_1008aef14:
                local_31 = bVar18;
                puVar10 = (ulong*)(&pPVar15->field_224)->top();
                local_48 = *puVar10;
                (&pPVar15->field_224)->pop();
                pSVar5 = (SimplePool<PointLightSM>*)
                             std::unique_ptr<SimplePool<PointLightSM>,
                                             std::default_delete<SimplePool<PointLightSM>>>::operator->(local_50);
                pPVar15 = local_40;
                local_68 = local_40;
                local_58 = SimplePool<PointLightSM>::Create<
                    Array<std::array<graphicutils::TextureAtlasSlot2D, 6ul>, BucketAllocatorEASTL>&,
                    PointLightSMManager*, unsigned long&>(pSVar5, (Array*)local_80, &local_68, &local_48);
                puVar19 = &pPVar15->field_192;
                puVar19->push_back(&local_58);
                puVar11 = (unique_ptr<SimplePool<PointLightSM>, std::default_delete<SimplePool<PointLightSM>>>*)
                              puVar19->HeapBeginPtr();
                local_40 = (PointLightSMManager*)puVar19;
                local_50 = (unique_ptr<SimplePool<PointLightSM>, std::default_delete<SimplePool<PointLightSM>>>*)
                               puVar19->end();
                if (puVar11 != local_50) {
                    do {
                        iVar3 = (*(PointLightSM**)puVar11)->GetID();
                        pPVar15 = local_40;
                        puVar12 = (undefined8*)local_40->HeapBeginPtr();
                        puVar13 = (undefined8*)pPVar15->end();
                        for (; puVar12 != puVar13; puVar12 = puVar12 + 1) {
                            if ((*(PointLightSM**)puVar11 != (PointLightSM*)*puVar12) &&
                                (iVar4 = (*puVar12)->GetID(), iVar3 == iVar4)) {
                                /* WARNING: Subroutine does not return */
                                LogAssert("_id != _pointLightSM->GetID()",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                          "graphics/runetek7/lighting/shadowmapping/PointLightSMManager.cpp",
                                          172, (char*)0);
                            }
                        }
                        puVar11 = puVar11 + 8;
                    } while (puVar11 != local_50);
                }
                pPVar16 = local_58;
                bVar18 = local_31;
            } else {
                puVar19 = &pPVar15->field_112;
                bVar1 = 1;
                pPVar16 = (PointLightSM*)0;
                do {
                    if ((bVar1 & 1) != 0) {
                        uVar6 = 0;
                        do {
                            uVar2 = std::unique_ptr<graphicutils::TextureAtlasSlotPacker,
                                                    std::default_delete<graphicutils::TextureAtlasSlotPacker>>::
                                    operator->((
                                        unique_ptr<graphicutils::TextureAtlasSlotPacker,
                                                   std::default_delete<graphicutils::TextureAtlasSlotPacker>>*)puVar19);
                            local_48.AllocSlot2D(uVar2, uVar17);
                            paVar8 = (array<graphicutils::TextureAtlasSlot2D, 6ul>*)
                                Array<std::array<graphicutils::TextureAtlasSlot2D, 6ul>,
                                      BucketAllocatorEASTL>::operator[](local_80, (ulong)pPVar16);
                            puVar9 = (undefined4*)std::array<graphicutils::TextureAtlasSlot2D, 6ul>::operator[](paVar8,
                                                                                                                uVar6);
                            *puVar9 = (undefined4)local_48;
                            *(ushort*)(puVar9 + 1) = local_48._4_2_;
                            paVar8 = (array<graphicutils::TextureAtlasSlot2D, 6ul>*)
                                Array<std::array<graphicutils::TextureAtlasSlot2D, 6ul>,
                                      BucketAllocatorEASTL>::operator[](local_80, (ulong)pPVar16);
                            this_01 =
                                (TextureAtlasSlot2D*)std::array<graphicutils::TextureAtlasSlot2D, 6ul>::operator[](
                                    paVar8, uVar6);
                            bVar1 = this_01->IsValid();
                            if (4 < uVar6)
                                break;
                            uVar6 = uVar6 + 1;
                        } while (bVar1 != 0);
                        pPVar15 = local_40;
                    }
                    pPVar16 = (PointLightSM*)((long)&pPVar16->field_0 + 1);
                    bVar18 = bVar1 & 1;
                } while ((pPVar16 < (PointLightSM*)(ulong) * (uint*)((long)&pPVar15->field_0 + 4)) &&
                         (uVar17 = uVar17 >> 1, (bVar1 & 1) != 0));
                if ((bVar1 & 1) != 0)
                    goto LAB_1008aef14;
                uVar14 = logger::default_logger();
                logger::Logger::Log(
                    uVar14, 0, 3,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/lighting/"
                    "shadowmapping/PointLightSMManager.cpp",
                    181,
                    "Unable to allocate point light shadow map from atlas, insufficient number of slots available");
            }
            local_80->~Array();
            if (bVar18 != 0)
                goto LAB_1008af067;
        }
        pPVar16 = (PointLightSM*)0;
    LAB_1008af067:
        std::scoped_lock<std::mutex>::~scoped_lock(local_60);
        return pPVar16;
    }

    // 0x1008af360, 112 bytes, placed by class name
    // PointLightSMManager::ResetActivePointLightSMPasses()
    void PointLightSMManager::ResetActivePointLightSMPasses() {
        undefined8* puVar1;
        undefined8* puVar2;
        scoped_lock<std::mutex> local_20[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_20, (mutex*)&field_128);
        puVar1 = (undefined8*)(&field_192)->HeapBeginPtr();
        puVar2 = (undefined8*)(&field_192)->end();
        for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
            (*puVar1)->ResetPasses();
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_20);
    }

    // 0x1008af430, 976 bytes, placed by class name
    // PointLightSMManager::RegisterTweaks(tweak::ContainerGroup&, eastl::string const&)
    void PointLightSMManager::RegisterTweaks(ContainerGroup* param_1, basic_string* param_2) {
        ContainerGroup* pCVar1;
        char* pcVar2;
        Container* pCVar3;
        ulong uVar4;
        float* local_90;
        shared_ptr<tweak::Container> local_88[16];
        ContainerGroup* local_78;
        float* local_70[4];
        allocator local_50[16];
        shared_ptr<tweak::Container> local_40[16];

        local_78 = param_1;
        pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::allocator::allocator(local_50, "EASTL basic_string");
        new (local_70) eastl::string(pcVar2, local_50);
        (**(code**)(*(long*)param_2 + 240))(local_88, param_2, (eastl::string*)local_70);
        local_70->~basic_string();
        pcVar2 = (char*)shared_ptr<tweak::Container>::operator->(local_88);
        local_50->AddGroup(pcVar2);
        pCVar3 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)local_50);
        pCVar1 = local_78;
        pCVar3->AddCheckBox("Show Shadow Map Atlas Depth", (bool*)&m_ShowShadowMapDepthAtlas);
        pCVar3 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)local_50);
        pCVar3->AddCheckBox("Clear Shadow Map Atlas Depth", (bool*)&m_ClearShadowMapDepthAtlas);
        pCVar3 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)local_50);
        pCVar3->AddCheckBox("Show Point Light Face Camera Frustums", (bool*)&m_showPointLightFaceCameraFrustums);
        pCVar3 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)local_50);
        pCVar3->AddCheckBox("Show Shadow Casting Lights", (bool*)&m_showShadowCastingLights);
        pCVar3 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)local_50);
        pCVar3->AddCheckBox("Show Shadow Casting Light Distances", (bool*)&m_showShadowCastingLightDst);
        pcVar2 = (char*)shared_ptr<tweak::Container>::operator->(local_88);
        local_40->AddGroup(pcVar2);
        pCVar3 = (Container*)shared_ptr<tweak::Container>::operator->(local_40);
        pCVar3->AddCheckBox("Enable Forced Updates", (bool*)&m_enableForcedUpdates);
        pCVar3 = (Container*)shared_ptr<tweak::Container>::operator->(local_40);
        local_70[0] = (float*)&pCVar1->field_16;
        tweak::Container::AddSlider<float>(pCVar3, "Start Fade Distance", 0.0, 1.0, 0.0001, local_70);
        pCVar3 = (Container*)shared_ptr<tweak::Container>::operator->(local_40);
        local_70[0] = (float*)&pCVar1->field_20;
        tweak::Container::AddSlider<float>(pCVar3, "Max View Distance", 0.0, 50000.0, 0.0001, local_70);
        pCVar3 = (Container*)shared_ptr<tweak::Container>::operator->(local_40);
        local_70[0] = (float*)&pCVar1->field_28;
        tweak::Container::AddSlider<float>(pCVar3, "LOD Bias", -1.0, 1.0, 0.0001, local_70);
        pCVar3 = (Container*)shared_ptr<tweak::Container>::operator->(local_40);
        local_70[0] = (float*)&pCVar1->field_32;
        tweak::Container::AddSlider<float>(pCVar3, "Normal Bias", -100.0, 0.0, 0.001, local_70);
        uVar4 = 0;
        do {
            new (local_70) eastl::string("LOD %i Shadow Bias", uVar4);
            pCVar3 = (Container*)shared_ptr<tweak::Container>::operator->(local_40);
            pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_90 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)&pCVar1->field_36, uVar4);
            tweak::Container::AddSlider<float>(pCVar3, pcVar2, -1.0, 0.0, 0.0001, &local_90);
            local_70->~basic_string();
            uVar4 = uVar4 + 1;
        } while (uVar4 != 4);
        pCVar3 = (Container*)shared_ptr<tweak::Container>::operator->(local_40);
        pCVar1 = local_78;
        local_70[0] = (float*)&local_78->field_24;
        tweak::Container::AddSlider<float>(pCVar3, "Min Point Light Shadow Radius", 0.0, 10000.0, 1.0, local_70);
        pCVar3 = (Container*)shared_ptr<tweak::Container>::operator->(local_40);
        local_70[0] = (float*)&pCVar1->field_72;
        tweak::Container::AddSlider<float>(pCVar3, "Disk Filter UV Radius", 0.0, 10.0, 0.0001, local_70);
        local_40->~shared_ptr();
        local_50->~shared_ptr();
        local_88->~shared_ptr();
    }

    // 0x1008af800, 256 bytes, placed by class name
    // PointLightSMManager::RenderDebug() const
    void PointLightSMManager::RenderDebug() {
        int iVar1;
        RenderTargets* this_00;
        undefined8 uVar2;
        long* plVar3;
        ImVec4 local_60[16];
        Point<float> local_50[8];
        Point<float> local_48[8];
        SideBarData local_40;

        if (m_ShowShadowMapDepthAtlas != '\0') {
            this_00 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)m_shadowCubeMapAtlasRT);
            uVar2 = this_00->GetDepthStencilTargetTexture();
            plVar3 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar3 != (long*)0) {
                ImVec4::ImVec4(local_60, 0.0, 0.0, 0.5, 0.5);
                math::Point<float>::Point(local_50, 0.0, 0.0);
                math::Point<float>::Point(local_48, 1.0, 1.0);
                new (&local_40.field_8) math::ColourStorage8888<math::ARGB8StorageLayout>(255, 255, 255, 255);
                iVar1 = local_40.field_8.GetX();
                new (&local_40) oldscape::sidebars::SideBarData(iVar1, 0);
                (**(code**)(*plVar3 + 112))(plVar3, uVar2, local_60, local_50, local_48, 0, 1, 0, &local_40);
            }
        }
    }

} // namespace jag::graphics
