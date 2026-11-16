// libs/graphics/runetek7/lighting/shadowmapping/PointLightSMManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "PointLightSMManager.h"

namespace jag::graphics {
    // 0x100f44144
    int32_t PointLightSMManager::m_ClearShadowMapDepthAtlas = 1;

    // 0x100f44148
    float PointLightSMManager::m_occludedShadowCasterFrustumScale = 50.0f;

    // 0x103bc03d0
    bool PointLightSMManager::m_ShowShadowMapDepthAtlas;

    // 0x103bc03d1
    bool PointLightSMManager::m_showPointLightFaceCameraFrustums;

    // 0x103bc03d2
    bool PointLightSMManager::m_showShadowCastingLights;

    // 0x103bc03d3
    bool PointLightSMManager::m_showShadowCastingLightDst;

    // 0x103bc03d4
    bool PointLightSMManager::m_cullOccludedShadowCasters;

    // 0x103bc03d5
    bool PointLightSMManager::m_showOccludedShadowCasterFrustums;

    // 0x103bc03d6
    bool PointLightSMManager::m_enableForcedUpdates;

    // 0x100009ca0: PointLightSMManager::GetConfig() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x1001b8a60, the same machine code as oldscape::OSRenderCore_RenderThread_Common::GetConstRenderStateNXT() const
    RenderToTextureHelper* PointLightSMManager::GetRenderToTexture() {
        return m_pRenderToTexture;
    }

    // 0x1001cd990: PointLightSMManager::GetShadowCubeMapAtlasRT() const has the same machine code as PointLightIndicesEffect::GetVisiblePointLights()

    // 0x1001d2000: PointLightSMManager::GetRenderTargetsManager() has the same machine code as oldscape::rseven::OSRenderCore_TextureDataProvider::GetTexturesCompressedDXTArchive() const

    // 0x1001fb280: PointLightSMManager::GetShadowCubeMapAtlasPacker() const has the same machine code as http::CRMData::GetActionInfo() const

    // 0x100396010: PointLightSMManager::GetActivePointLightSM() const has the same machine code as oldscape::auth::SteamAuthLibWrapper::GetGameToken()

    // 0x1008adb70
    bool PointLightSMManager::IsActive(PointLightSM* pointLightSM) const {
        function<bool_(int, int, int, int)>** ppfVar1;
        function<bool_(int, int, int, int)>** ppfVar2;

        uint8_t* this_00 = &field_192;
        PointLightSM* local_20 = pointLightSM;
        ppfVar1 = (function<bool_(int, int, int, int)>**)this_00->HeapBeginPtr();
        ppfVar2 = (function<bool_(int, int, int, int)>**)this_00->end();
        ppfVar1 = eastl::find<std::function<bool(input::TextCommand)>**, std::function<bool(input::TextCommand)>*>(
            ppfVar1, ppfVar2, local_20);
        ppfVar2 = (function<bool_(int, int, int, int)>**)this_00->end();
        return ppfVar1 != ppfVar2;
    }

    // 0x1008adc50
    void PointLightSMManager::FreePointLightSM(PointLightSM* pointLightSM) {
        PointLightSMManager* pPVar1;
        NXTPixToolkit* pointLightSM_00;
        unsigned int uVar3;
        Layout* this_00;
        array<graphicutils::TextureAtlasSlot2D, 6ul>* this_01;
        TextureAtlasSlot2D* this_02;
        TextureAtlasSlot2D* pTVar5;
        TextureAtlasSlotPacker* this_03;
        function<bool_(int, int, int, int)>** arg1;
        function<bool_(int, int, int, int)>** arg2;
        PointLightSM** arg1_00;
        unsigned long local_60;
        array<graphicutils::TextureAtlasSlot2D, 6ul>* local_58;
        unique_ptr<SimplePool<PointLightSM>>* local_50;
        PointLightSMManager* local_40;

        NXTPixToolkit* local_38 = (NXTPixToolkit*)pointLightSM;
        scoped_lock<std::mutex> local_48(field_128);
        if (local_38 == nullptr) {
            LogAssert("pPointLightSM",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "lighting/shadowmapping/PointLightSMManager.cpp",
                      191, nullptr);
        }
        uint8_t* puVar6 = &field_120;
        SimplePool<PointLightSM>* pSVar4 = (SimplePool<PointLightSM>*)(*puVar6).operator->();
        bool cVar2 = pSVar4->empty();
        if (!cVar2) {
            cVar2 = IsActive(local_38);
            pointLightSM_00 = local_38;
            if (!cVar2) {
                LogAssert("IsActive(pPointLightSM)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "lighting/shadowmapping/PointLightSMManager.cpp",
                          194, nullptr);
            }
            if (local_38 != nullptr) {
                pSVar4 = (SimplePool<PointLightSM>*)(*puVar6).operator->();
                cVar2 = pSVar4->IsAddressAllocated(pointLightSM_00);
                if (cVar2) {
                    local_50 = (unique_ptr<SimplePool<PointLightSM>>*)puVar6;
                    local_40 = this;
                    this_00 = (Layout*)local_38->GetScreen();
                    this_01 = (array<graphicutils::TextureAtlasSlot2D, 6ul>*)this_00->HeapBeginPtr();
                    local_58 = (array<graphicutils::TextureAtlasSlot2D, 6ul>*)this_00->end();
                    if (this_01 != local_58) {
                        puVar6 = &local_40->field_112;
                        do {
                            this_02 = (TextureAtlasSlot2D*)this_01->begin();
                            pTVar5 = (TextureAtlasSlot2D*)this_01->end();
                            for (; this_02 != pTVar5; this_02 = (TextureAtlasSlot2D*)&this_02->field_6) {
                                cVar2 = this_02->IsValid();
                                if (!cVar2) {
                                    LogAssert("cubeMapFaceAtlaSlot.IsValid()",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "graphics/runetek7/lighting/shadowmapping/PointLightSMManager.cpp",
                                              204, nullptr);
                                }
                                this_03 = (TextureAtlasSlotPacker*)(*puVar6).operator->();
                                this_03->FreeSlot2D(*this_02);
                            }
                            this_01 = this_01 + 256;
                        } while (this_01 != local_58);
                    }
                    pPVar1 = local_40;
                    puVar6 = &local_40->field_224;
                    uVar3 = local_38->GetID();
                    local_60 = (unsigned long)uVar3;
                    puVar6->push(local_60);
                    puVar6 = &pPVar1->field_192;
                    arg1 = (function<bool_(int, int, int, int)>**)puVar6->HeapBeginPtr();
                    arg2 = (function<bool_(int, int, int, int)>**)puVar6->end();
                    arg1_00 =
                        (PointLightSM**)eastl::find<std::function<bool(input::TextCommand)>**,
                                                    std::function<bool(input::TextCommand)>*>(arg1, arg2, local_38);
                    puVar6->erase(arg1_00);
                    pSVar4 = (SimplePool<PointLightSM>*)(*local_50).operator->();
                    pSVar4->Destroy(local_38);
                }
            }
        }
    }

    // 0x1008ae3e0
    unsigned int PointLightSMManager::Config::GetMinShadowCubeMapFaceResolution() const {
        bool cVar2;

        int iVar1 = field_4;
        unsigned int arg1 = field_8;
        while (iVar1 = iVar1 - 1, iVar1 != 0) {
            arg1 = arg1 >> 1;
        }
        if ((arg1 == 0) || (cVar2 = math::IsPowerOf2(arg1), !cVar2)) {
            LogAssert("shadowCubeMapFaceResolution > 0 && math::IsPowerOf2(shadowCubeMapFaceResolution)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "lighting/shadowmapping/PointLightSMManager.cpp",
                      28, nullptr);
        }
        return arg1;
    }

    // 0x1008ae440
    int PointLightSMManager::Config::GetShadowCubeMapAtlasSlotCount(unsigned int arg1) const {
        int iVar1;
        unsigned int uVar2;

        int iVar3 = field_4;
        if (iVar3 == 0) {
            iVar1 = 0;
        } else {
            uVar2 = field_8;
            iVar1 = 0;
            do {
                iVar1 = iVar1 + (uVar2 * uVar2 * field_0 * 6) / (arg1 * arg1);
                uVar2 = uVar2 >> 1;
                iVar3 = iVar3 - 1;
            } while (iVar3 != 0);
        }
        return iVar1;
    }

    // 0x1008ae490
    PointLightSMManager::PointLightSMManager(render::RenderTargetsManager* renderTargetsManager,
                                             graphicutils::RenderToTextureHelper* renderToTextureHelper)
        : Config(), m_pRenderTargetsManager(renderTargetsManager), m_pRenderToTexture(renderToTextureHelper) {
        field_112.unique_ptr<true, void>();
        field_120.unique_ptr<true, void>();
        new (&field_128) std::mutex();
        new (&field_192) eastl::vector<PointLightSM*>();
        new (&field_224) eastl::stack<unsigned long, eastl::vector<unsigned long>>();
        if ((m_pRenderTargetsManager == nullptr) || (m_pRenderToTexture == nullptr)) {
            LogAssert("m_pRenderTargetsManager && m_pRenderToTexture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "lighting/shadowmapping/PointLightSMManager.cpp",
                      54, nullptr);
        }
        if (field_192.empty() == '\0') {
            LogAssert("m_allocatedPointLightSM.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "lighting/shadowmapping/PointLightSMManager.cpp",
                      55, nullptr);
        }
    }

    // 0x1008ae670
    uint32_t PointLightSMManager::Init(const PointLightSMManager::Config& config) {
        uint64_t uVar1;
        uint64_t uVar2;
        uint64_t uVar3;
        uint64_t uVar4;
        uint8_t uVar5;
        uint32_t uVar6;
        uint32_t uVar7;
        uint32_t uVar8;
        int iVar9;
        int iVar10;
        uint32_t uVar11;
        ReturnValue RVar14;
        TextureAtlasQuality local_60;
        ReturnValue local_50;

        if (4 < (unsigned int)config.field_0) {
            LogAssert("config.m_maxShadowCastingPointLights <= MAX_SHADOW_CASTING_POINT_LIGHTS",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "lighting/shadowmapping/PointLightSMManager.cpp",
                      60, nullptr);
        }
        if (4 < (unsigned int)config.field_4) {
            LogAssert("config.m_maxPointLightShadowMapLODs <= MAX_POINT_LIGHT_SHADOWS_LODS",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "lighting/shadowmapping/PointLightSMManager.cpp",
                      61, nullptr);
        }
        local_50._0_4_ = config.GetMinShadowCubeMapFaceResolution();
        unsigned int uVar12 = config.GetShadowCubeMapAtlasSlotCount(local_50._0_4_);
        double local_58 = (double)uVar12;
        uVar12 = math::RoundFloatToInt((double)_ceil((uint32_t)(SQRT(local_58))));
        uint32_t uVar13 = math::RoundUpToPowerOf2(uVar12);
        local_50._4_4_ = uVar13;
        uint64_t local_48 = 0;
        uint32_t uStack_40 = 0;
        uint32_t uStack_3c = 0;
        uint32_t uStack_38 = 0;
        uint64_t uStack_34 = 0;
        bool local_29 = false;
        std::make_unique<graphicutils::TextureAtlasSlotPacker, graphicutils::TextureAtlasQuality&,
                         graphicutils::TextureAtlasUsage const*&, bool>(local_60, local_50, local_29);
        field_112 = local_60;
        uVar12 = ((TcpConnectionMessageBase*)field_112.operator->())->GetEndPosition();
        if ((double)uVar12 < local_58) {
            LogAssert("totalSlotsRequired <= m_shadowCubeMapAtlasPacker->GetTotalSlots()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "lighting/shadowmapping/PointLightSMManager.cpp",
                      83, nullptr);
        }
        if (*(float*)((long)&config.field_16 + 4) <= *(float*)&config.field_16) {
            LogAssert("config.m_startFadeDistance < config.m_maxViewDistance",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "lighting/shadowmapping/PointLightSMManager.cpp",
                      86, nullptr);
        }
        local_50 = std::make_unique<SimplePool<PointLightSM>, unsigned int const&>(config);
        field_120 = local_50;
        field_192.reserve((unsigned long)(unsigned int)config.field_0);
        ((vector<unsigned long>*)field_224.SSOBeginPtr())->reserve((unsigned long)(unsigned int)config.field_0);
        local_50 = (ReturnValue)0;
        if (config.field_0 != 0) {
            do {
                field_224.push(local_50);
                local_50 = (ReturnValue)((long)local_50 + 1);
                RVar14._4_4_ = 0;
                RVar14._0_4_ = config.field_0;
            } while ((unsigned long)local_50 < (unsigned long)RVar14);
        }
        uVar13 = CreateRenderingResources(*(unsigned int*)&config.field_12);
        if ((char)uVar13 == '\0') {
            Destroy();
        } else {
            uVar5 = config.field_64;
            uVar6 = *(uint32_t*)&config.field_65;
            uVar1 = config.field_68;
            field_60 = config.field_60;
            field_64 = uVar5;
            field_65 = uVar6;
            field_68 = uVar1;
            iVar9 = config.field_0;
            iVar10 = config.field_4;
            uVar12 = config.field_8;
            uVar11 = *(uint32_t*)&config.field_12;
            uVar1 = config.field_16;
            uVar2 = config.field_24;
            uVar7 = config.field_32;
            uVar8 = *(uint32_t*)&config.field_36;
            uVar3 = *(uint64_t*)&config.field_40;
            uVar4 = *(uint64_t*)((long)&config.field_52 + 4);
            field_48 = *(uint64_t*)&config.field_48;
            *(uint64_t*)&field_56 = uVar4;
            field_32 = uVar7;
            field_36 = uVar8;
            field_40 = uVar3;
            field_16 = uVar1;
            field_24 = uVar2;
            field_0 = iVar9;
            field_4 = iVar10;
            field_8 = uVar12;
            field_12 = uVar11;
        }
        return uVar13;
    }

    // 0x1008aea50
    uint32_t PointLightSMManager::CreateRenderingResources(unsigned int arg1) {
        RenderTargets* this_02;
        long* plVar3;
        SamplerState* this_04;
        uint8_t local_108[64];
        uint8_t local_c8[16];
        SamplerState local_b8;

        if (m_pRenderTargetsManager == nullptr) {
            LogAssert("m_pRenderTargetsManager != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "lighting/shadowmapping/PointLightSMManager.cpp",
                      239, nullptr);
        }
        new (local_108) render::Texture::Desc();
        local_108._12_4_ = render::GetFormatFromDepthStencilBits(arg1, 0, false);
        auto pTVar2 = field_112.operator->();
        local_108._0_4_ = pTVar2->GetTextureResolution();
        pTVar2 = (TextureAtlasSlotPacker*)field_112.operator->();
        local_108._4_4_ = pTVar2->GetTextureResolution();
        RenderTargetsManager* str = m_pRenderTargetsManager;
        uint64_t local_48 = 0;
        uint64_t uStack_40 = 0;
        uint64_t local_58 = 0;
        uint64_t uStack_50 = 0;
        uint64_t local_68 = 0;
        uint64_t uStack_60 = 0;
        uint64_t local_78 = 0;
        uint64_t uStack_70 = 0;
        local_b8.field_48 = 0.0;
        local_b8.field_52 = 0.0;
        uint64_t uStack_80 = 0;
        local_b8._32_4_ = 0;
        local_b8._36_4_ = 0;
        local_b8._40_4_ = 0;
        local_b8._44_4_ = 0;
        local_b8.field_16 = 0.0;
        local_b8.field_20 = 0.0;
        local_b8.field_24 = 0;
        local_b8._28_4_ = 0;
        local_b8.field_0 = 0;
        local_b8.field_4 = 0;
        local_b8.field_8 = 0;
        local_b8.field_12 = 0;
        new ((local_c8 + 16)) std::array<render::Texture::Desc, 2ul>();
        local_c8->Register(str, 14733611, *3553, (int)(array<render::Texture::Desc, 2ul>*)(local_c8 + 16), nullptr,
                           (unsigned int)(Desc*)local_108, true);
        uint8_t* this_00 = m_shadowCubeMapAtlasRT;
        *this_00 = *local_c8;
        uint32_t uVar1 = this_00->operator_cast_to_bool();
        if ((char)uVar1 == '\0') {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "lighting/shadowmapping/PointLightSMManager.cpp",
                      255, "Failed to create point light shadow map texture atlas");
            DestroyRenderingResources();
        } else {
            this_04 = (SamplerState*)(local_c8 + 16);
            new (this_04) render::SamplerState();
            ((BuiltinStates*)this_04->Instance())->CreateShadowSamplerState(*((local_c8 + 16)));
            this_02 = (RenderTargets*)(*this_00).operator->();
            plVar3 = (long*)this_02->GetDepthStencilTargetTexture();
            (**(void (**)(...))(*plVar3 + 24))(plVar3, local_c8 + 16, 1);
            ((local_c8 + 16))->~SamplerState();
        }
        return uVar1;
    }

    // 0x1008aec70
    void PointLightSMManager::Destroy() {

        DestroyRenderingResources();
        ((vector<eastl::pair<int, int>>*)field_224.SSOBeginPtr())->clear();
        if (!(field_192.empty())) {
            LogAssert("m_allocatedPointLightSM.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "lighting/shadowmapping/PointLightSMManager.cpp",
                      116, nullptr);
        }
        field_192.clear();
        if ((&field_120)->operator_cast_to_bool()) {
            if (!(((SimplePool<PointLightSM>*)field_120.operator->())->empty())) {
                LogAssert("m_pointLightSMPool->empty()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "lighting/shadowmapping/PointLightSMManager.cpp",
                          122, nullptr);
            }
        }
        std::unique_ptr<SimplePool<PointLightSM>>::release();
        std::unique_ptr<graphicutils::TextureAtlasSlotPacker>::release();
    }

    // 0x1008aed30
    void PointLightSMManager::DestroyRenderingResources() {
        m_pRenderTargetsManager->Unregister(*m_shadowCubeMapAtlasRT);
        if ((&field_112)->operator_cast_to_bool() != '\0') {
            ((TextureAtlasSlotPacker*)field_112.operator->())->ClearTextureSlots();
        }
    }

    // 0x1008aede0
    PointLightSM* PointLightSMManager::AllocPointLightSM() {
        uint8_t bVar1;
        int iVar2;
        int iVar3;
        array<graphicutils::TextureAtlasSlot2D, 6ul>* paVar7;
        uint32_t* puVar8;
        ReturnValue* pRVar9;
        unique_ptr<SimplePool<PointLightSM>>* puVar10;
        uint64_t* puVar11;
        uint64_t* puVar12;
        PointLightSM* arg1;
        unsigned int arg1_00;
        uint8_t bVar14;
        Array<std::array<graphicutils::TextureAtlasSlot2D, 6ul>, BucketAllocatorEASTL> local_80;
        PointLightSMManager* local_68;
        PointLightSM* local_58;
        unique_ptr<SimplePool<PointLightSM>>* local_50;
        ReturnValue local_48;
        uint8_t local_31;

        scoped_lock<std::mutex> local_60(field_128);
        uint8_t* puVar15 = &field_120;
        PointLightSMManager* local_40 = this;
        SimplePool<PointLightSM>* pSVar4 = (SimplePool<PointLightSM>*)(*puVar15).operator->();
        unsigned long uVar5 = pSVar4->size();
        unsigned long uVar6 = ((TextureAtlasReference*)(*puVar15).operator->())->GetTextureAtlas();
        PointLightSMManager* pPVar13 = local_40;
        if (uVar5 < uVar6) {
            arg1_00 = local_40->field_8;
            local_80 = Array<std::array<graphicutils::TextureAtlasSlot2D, 6ul>, BucketAllocatorEASTL>(
                (unsigned long)(unsigned int)local_40->field_4);
            local_50 = (unique_ptr<SimplePool<PointLightSM>>*)puVar15;
            if (pPVar13->field_4 == 0) {
                bVar14 = 1;
            LAB_1008aef14:
                local_31 = bVar14;
                pRVar9 = (ReturnValue*)eastl::stack<unsigned long, eastl::vector<unsigned long>>::top();
                local_48 = *pRVar9;
                eastl::stack<unsigned long, eastl::vector<unsigned long>>::pop();
                pSVar4 = (SimplePool<PointLightSM>*)(*local_50).operator->();
                pPVar13 = local_40;
                local_68 = local_40;
                local_58 =
                    pSVar4->Create<Array<std::array<graphicutils::TextureAtlasSlot2D, 6ul>, BucketAllocatorEASTL>&,
                                   PointLightSMManager*, unsigned long&>(local_80, local_68, local_48);
                puVar15 = &pPVar13->field_192;
                puVar15->push_back(local_58);
                puVar10 = (unique_ptr<SimplePool<PointLightSM>>*)puVar15->HeapBeginPtr();
                local_40 = (PointLightSMManager*)puVar15;
                local_50 = (unique_ptr<SimplePool<PointLightSM>>*)puVar15->end();
                if (puVar10 != local_50) {
                    do {
                        iVar2 = (*(PointLightSM**)puVar10)->GetID();
                        pPVar13 = local_40;
                        puVar11 = (uint64_t*)local_40->HeapBeginPtr();
                        puVar12 = (uint64_t*)pPVar13->end();
                        for (; puVar11 != puVar12; puVar11 = puVar11 + 1) {
                            if ((*(PointLightSM**)puVar10 != (PointLightSM*)*puVar11) &&
                                (iVar3 = (*puVar11)->GetID(), iVar2 == iVar3)) {
                                LogAssert("_id != _pointLightSM->GetID()",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                          "graphics/runetek7/lighting/shadowmapping/PointLightSMManager.cpp",
                                          172, nullptr);
                            }
                        }
                        puVar10 = puVar10 + 8;
                    } while (puVar10 != local_50);
                }
                arg1 = local_58;
                bVar14 = local_31;
            } else {
                puVar15 = &pPVar13->field_112;
                bVar1 = 1;
                arg1 = nullptr;
                do {
                    if ((bVar1 & 1) != 0) {
                        uVar5 = 0;
                        do {
                            local_48 = ((TextureAtlasSlotPacker*)(*puVar15).operator->())->AllocSlot2D(arg1_00, 0);
                            paVar7 = &local_80[(unsigned long)arg1];
                            puVar8 = (uint32_t*)(*paVar7)[uVar5];
                            *puVar8 = local_48._0_4_;
                            *(uint16_t*)(puVar8 + 1) = local_48._4_2_;
                            paVar7 = &local_80[(unsigned long)arg1];
                            bVar1 = ((TextureAtlasSlot2D*)(*paVar7)[uVar5])->IsValid();
                            if (4 < uVar5)
                                break;
                            uVar5 = uVar5 + 1;
                        } while (bVar1 != 0);
                        pPVar13 = local_40;
                    }
                    arg1 = (PointLightSM*)((long)&arg1->_vptr + 1);
                    bVar14 = bVar1 & 1;
                } while ((arg1 < (PointLightSM*)(unsigned long)(unsigned int)pPVar13->field_4) &&
                         (arg1_00 = arg1_00 >> 1, (bVar1 & 1) != 0));
                if ((bVar1 & 1) != 0)
                    goto LAB_1008aef14;
                (logger::default_logger())
                    ->Log(
                        false, 3,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                        "lighting/shadowmapping/PointLightSMManager.cpp",
                        181,
                        "Unable to allocate point light shadow map from atlas, insufficient number of slots available");
            }
            if (bVar14 != 0)
                goto LAB_1008af067;
        }
        arg1 = nullptr;
    LAB_1008af067:
        return arg1;
    }

    // 0x1008af360
    void PointLightSMManager::ResetActivePointLightSMPasses() {
        scoped_lock<std::mutex> local_20(field_128);
        auto puVar1 = field_192.HeapBeginPtr();
        auto puVar2 = field_192.end();
        for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
            (*puVar1)->ResetPasses();
        }
    }

    // 0x1008af430
    void PointLightSMManager::RegisterTweaks(tweak::ContainerGroup& containerGroup, const eastl::string& str) {
        char* str_00;
        float* local_90;
        shared_ptr<tweak::Container> local_88;
        float* local_70[4];
        shared_ptr<tweak::Container> local_40;

        PointLightSMManager* local_78 = this;
        char* pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        new (local_70) eastl::string(pcVar2);
        (containerGroup._vptr[7].Clear)(&local_88, containerGroup, (eastl::string*)local_70);
        pcVar2 = (char*)local_88.operator->();
        local_50.AddGroup(pcVar2);
        auto pCVar3 = local_50.operator->();
        PointLightSMManager* pPVar1 = local_78;
        pCVar3->AddCheckBox("Show Shadow Map Atlas Depth", m_ShowShadowMapDepthAtlas);
        pCVar3 = (Container*)local_50.operator->();
        pCVar3->AddCheckBox("Clear Shadow Map Atlas Depth", m_ClearShadowMapDepthAtlas);
        pCVar3 = (Container*)local_50.operator->();
        pCVar3->AddCheckBox("Show Point Light Face Camera Frustums", m_showPointLightFaceCameraFrustums);
        pCVar3 = (Container*)local_50.operator->();
        pCVar3->AddCheckBox("Show Shadow Casting Lights", m_showShadowCastingLights);
        pCVar3 = (Container*)local_50.operator->();
        pCVar3->AddCheckBox("Show Shadow Casting Light Distances", m_showShadowCastingLightDst);
        pcVar2 = (char*)local_88.operator->();
        local_40.AddGroup(pcVar2);
        pCVar3 = (Container*)local_40.operator->();
        pCVar3->AddCheckBox("Enable Forced Updates", m_enableForcedUpdates);
        pCVar3 = (Container*)local_40.operator->();
        local_70[0] = (float*)&pPVar1->field_16;
        pCVar3->AddSlider<float>("Start Fade Distance", 0.0, 1.0, 0.0001, *local_70);
        pCVar3 = (Container*)local_40.operator->();
        local_70[0] = (float*)((long)&pPVar1->field_16 + 4);
        pCVar3->AddSlider<float>("Max View Distance", 0.0, 50000.0, 0.0001, *local_70);
        pCVar3 = (Container*)local_40.operator->();
        local_70[0] = (float*)((long)&pPVar1->field_24 + 4);
        pCVar3->AddSlider<float>("LOD Bias", -1.0, 1.0, 0.0001, *local_70);
        pCVar3 = (Container*)local_40.operator->();
        local_70[0] = (float*)&pPVar1->field_32;
        pCVar3->AddSlider<float>("Normal Bias", -100.0, 0.0, 0.001, *local_70);
        pcVar2 = nullptr;
        do {
            new (local_70) eastl::string((CtorSprintf*)"LOD %i Shadow Bias", pcVar2);
            pCVar3 = (Container*)local_40.operator->();
            str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_90 = &pPVar1->field_36[(unsigned long)pcVar2];
            pCVar3->AddSlider<float>(str_00, -1.0, 0.0, 0.0001, local_90);
            pcVar2 = pcVar2 + 1;
        } while (pcVar2 != (char*)4);
        pCVar3 = (Container*)local_40.operator->();
        pPVar1 = local_78;
        local_70[0] = (float*)&local_78->field_24;
        pCVar3->AddSlider<float>("Min Point Light Shadow Radius", 0.0, 10000.0, 1.0, *local_70);
        pCVar3 = (Container*)local_40.operator->();
        local_70[0] = (float*)((long)&pPVar1->field_68 + 4);
        pCVar3->AddSlider<float>("Disk Filter UV Radius", 0.0, 10.0, 0.0001, *local_70);
    }

    // 0x1008af800
    void PointLightSMManager::RenderDebug() const {
        int arg1;
        uint64_t uVar1;
        long* plVar2;
        ImVec4 local_60;
        Point<float> local_50;
        Point<float> local_48;
        SideBarData local_40;

        if (m_ShowShadowMapDepthAtlas != '\0') {
            uVar1 = ((RenderTargets*)(*m_shadowCubeMapAtlasRT).operator->())->GetDepthStencilTargetTexture();
            plVar2 = DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar2 != nullptr) {
                local_60 = ImVec4(0.0, 0.0, 0.5, 0.5);
                local_50 = math::Point(0.0, 0.0);
                local_48 = math::Point(1.0, 1.0);
                new (&local_40.field_8) math::ColourStorage8888(255, 255, 255, 255);
                arg1 = local_40.field_8.GetX();
                local_40 = oldscape::sidebars::SideBarData(arg1, 0);
                (**(void (**)(...))(*plVar2 + 112))(plVar2, uVar1, &local_60, &local_50, &local_48, 0, 1, 0, &local_40);
            }
        }
    }

} // namespace jag::graphics
