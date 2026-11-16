// libs/graphics/runetek7/caustics/CausticsManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "CausticsManager.h"

namespace jag::graphics {
    // 0x1000b9950: CausticsManager::GetCullFrustum() const has the same machine code as oldscape::ScriptVarType::GetDefaultValue() const

    // 0x100324d40: CausticsManager::GetViewTransforms() const has the same machine code as oldscape::graphics::NXTPixToolkit::GetPix2D()

    // 0x1004c69a0: CausticsManager::GetCausticsPlaneHeight() const has the same machine code as game::WaterType::GetEmissiveFlowRotationDegrees() const

    // 0x100960180
    CausticsManager::CausticsManager(render::RenderTargetsManager& renderTargetsManager)
        : Config(), field_440(renderTargetsManager) {}

    // 0x100960220
    CausticsManager::~CausticsManager() {
        Destroy();
        field_424.~shared_ptr();
        field_408.~shared_ptr();
        field_392.~shared_ptr();
    }

    // 0x100960290
    void CausticsManager::Destroy() {
        DestroyRenderingResources();
    }

    // 0x1009602b0
    void CausticsManager::Initialise(const CausticsManager::Config& config) {
        if (CreateRenderingResources(config) != '\0') {
            field_0 = config.field_0;
        }
    }

    // 0x1009602e0
    void CausticsManager::CreateRenderingResources(const CausticsManager::Config& config) {
        AutoSingleton<ShaderThreadPoolSingleton> local_20;

        CreateRenderTargets(config);
    }

    // 0x100960320
    void CausticsManager::DestroyRenderingResources() {
        AutoSingleton<ShaderThreadPoolSingleton> local_18;

        field_440->Unregister(field_392);
        field_440->Unregister(field_408);
        field_440->Unregister(field_424);
    }

    // 0x100960380
    CausticsManager* CausticsManager::GetCausticsMapViewport() const {
        int* in_RSI;

        new (this) render::Viewport(0, 0, *in_RSI, *in_RSI, 0.0, 1.0);
        return this;
    }

    // 0x1009603b0
    CausticsManager* CausticsManager::GetCausticsComputeMapViewport() const {
        long in_RSI;

        new (this) render::Viewport(0, 0, *(int*)(in_RSI + 4), *(int*)(in_RSI + 4), 0.0, 1.0);
        return this;
    }

    // 0x1009603e0
    void CausticsManager::GetCausticsIntegerMapRenderTargets(render::RenderTargetData& renderTargetData) {
        renderTargetData.field_0 = (RenderTargets*)field_392.end();
    }

    // 0x100960400
    void CausticsManager::GetCausticsFloatMapRenderTargets(render::RenderTargetData& renderTargetData) {
        renderTargetData.field_0 = (RenderTargets*)field_408.end();
    }

    // 0x100960420
    void CausticsManager::GetCausticsComputeMapRenderTargets(render::RenderTargetData& renderTargetData) {
        renderTargetData.field_0 = (RenderTargets*)field_424.end();
    }

    // 0x100960440
    uint64_t CausticsManager::CreateRenderTargets(const CausticsManager::Config& config) {
        uint64_t extraout_var;
        uint8_t local_158[64];
        uint8_t local_d8[72];
        uint8_t local_80[80];

        new (local_80) render::Texture::Desc();
        local_80._0_4_ = *(uint32_t*)&config.field_0;
        local_80._12_4_ = 13;
        RenderTargetsManager* pRVar1 = field_440;
        uint64_t local_e8 = local_80._48_8_;
        char cStack_e0 = local_80[56];
        uint32_t uStack_df = local_80._57_3_;
        uint32_t uStack_dc = local_80._60_4_;
        uint8_t local_f8 = local_80[32];
        uint32_t uStack_f7 = local_80._33_3_;
        uint32_t uStack_f4 = local_80._36_4_;
        uint64_t uStack_f0 = local_80._40_8_;
        uint32_t local_108 = local_80._16_4_;
        int iStack_104 = local_80._20_4_;
        int iStack_100 = local_80._24_4_;
        int iStack_fc = local_80._28_4_;
        uint64_t local_118 = (((uint64_t)local_80._0_4_ << 32) | (uint32_t)local_80._0_4_);
        int local_110 = local_80._8_4_;
        uint32_t local_10c = 13;
        local_d8._64_8_ = config;
        local_80._4_4_ = local_80._0_4_;
        new (local_d8) render::Texture::Desc();
        new (local_158) render::Texture::Desc();
        ((local_80 + 64))
            ->Register(pRVar1, 14766593, *3553, (int)&local_118, DAT_00000001, (unsigned int)(Desc*)local_158, false);
        uint8_t* puVar12 = &field_392;
        *puVar12 = (*((local_80 + 64)));
        ((local_80 + 64))->~shared_ptr();
        shared_ptr<render::RenderTargets>* local_90 = (shared_ptr<render::RenderTargets>*)puVar12;
        bool bVar3 = *puVar12 != nullptr;
        local_80._12_4_ = 21;
        pRVar1 = field_440;
        local_e8 = local_80._48_8_;
        cStack_e0 = local_80[56];
        uStack_df = local_80._57_3_;
        uStack_dc = local_80._60_4_;
        local_f8 = local_80[32];
        uStack_f7 = local_80._33_3_;
        uStack_f4 = local_80._36_4_;
        uStack_f0 = local_80._40_8_;
        local_108 = local_80._16_4_;
        iStack_104 = local_80._20_4_;
        iStack_100 = local_80._24_4_;
        iStack_fc = local_80._28_4_;
        local_118 = (((uint64_t)local_80._4_4_ << 32) | (uint32_t)local_80._0_4_);
        local_110 = local_80._8_4_;
        local_10c = 21;
        new (local_d8) render::Texture::Desc();
        new (local_158) render::Texture::Desc();
        ((local_80 + 64))
            ->Register(pRVar1, 14766609, *3553, (int)&local_118, DAT_00000001, (unsigned int)(Desc*)local_158, false);
        puVar12 = &field_408;
        *puVar12 = (*((local_80 + 64)));
        ((local_80 + 64))->~shared_ptr();
        shared_ptr<render::RenderTargets>* local_88 = (shared_ptr<render::RenderTargets>*)puVar12;
        bool bVar4 = *puVar12 != nullptr;
        local_80._0_4_ = *(int*)((long)(uint64_t*)local_d8._64_8_ + 4);
        local_80._12_4_ = 23;
        pRVar1 = field_440;
        local_e8 = local_80._48_8_;
        cStack_e0 = local_80[56];
        uStack_df = local_80._57_3_;
        uStack_dc = local_80._60_4_;
        local_f8 = local_80[32];
        uStack_f7 = local_80._33_3_;
        uStack_f4 = local_80._36_4_;
        uStack_f0 = local_80._40_8_;
        local_108 = local_80._16_4_;
        iStack_104 = local_80._20_4_;
        iStack_100 = local_80._24_4_;
        iStack_fc = local_80._28_4_;
        local_118 = (((uint64_t)local_80._0_4_ << 32) | (uint32_t)local_80._0_4_);
        local_110 = local_80._8_4_;
        local_10c = 23;
        local_80._4_4_ = local_80._0_4_;
        new (local_d8) render::Texture::Desc();
        new (local_158) render::Texture::Desc();
        ((local_80 + 64))
            ->Register(pRVar1, 14766623, *3553, (int)&local_118, DAT_00000001, (unsigned int)(Desc*)local_158, false);
        puVar12 = &field_424;
        *puVar12 = (*((local_80 + 64)));
        ((local_80 + 64))->~shared_ptr();
        bool bVar5 = *puVar12 != nullptr;
        unsigned long uVar11 = (((uint64_t)extraout_var << 8) | (uint8_t)bVar5) & 4294967295;
        uint8_t bVar10 = (uint8_t)uVar11 & (bVar3 && bVar4);
        if (bVar10 == 0) {
            LogAssert("success",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "caustics/CausticsManager.cpp",
                      99, "CausticsManager: Failed to create caustics target textures");
        }
        RenderTargets* pRVar6 = (RenderTargets*)(*local_90).operator->();
        auto pvVar7 = pRVar6->GetColourTargetTextures();
        uint64_t* puVar8 = (uint64_t*)(*pvVar7)[0];
        long* plVar2 = (long*)*puVar8;
        long lVar9 = pvVar7->Instance();
        (**(void (**)(...))(*plVar2 + 24))(plVar2, lVar9 + 80, 0);
        pRVar6 = (RenderTargets*)(*local_88).operator->();
        pvVar7 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                     pRVar6->GetColourTargetTextures();
        puVar8 = (uint64_t*)(*pvVar7)[0];
        plVar2 = (long*)*puVar8;
        lVar9 = pvVar7->Instance();
        (**(void (**)(...))(*plVar2 + 24))(plVar2, lVar9 + 272, 0);
        pRVar6 = (RenderTargets*)(*puVar12).operator->();
        pvVar7 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                     pRVar6->GetColourTargetTextures();
        puVar8 = (uint64_t*)(*pvVar7)[0];
        plVar2 = (long*)*puVar8;
        lVar9 = pvVar7->Instance();
        (**(void (**)(...))(*plVar2 + 24))(plVar2, lVar9 + 80, 0);
        return bVar10;
    }

    // 0x100960800
    uint64_t CausticsManager::GetCausticsIntegerMapAtlas() const {
        uint64_t uVar2;
        uint64_t* puVar3;

        auto this_00 = field_392.operator->();
        auto this_01 = this_00->GetColourTargetTextures();
        if (this_01->empty() == '\0') {
            puVar3 = (uint64_t*)(*this_01)[0];
            uVar2 = *puVar3;
        } else {
            uVar2 = 0;
        }
        return uVar2;
    }

    // 0x100960850
    uint64_t CausticsManager::GetCausticsFloatMapAtlas() const {
        uint64_t uVar2;
        uint64_t* puVar3;

        auto this_00 = field_408.operator->();
        auto this_01 = this_00->GetColourTargetTextures();
        if (this_01->empty() == '\0') {
            puVar3 = (uint64_t*)(*this_01)[0];
            uVar2 = *puVar3;
        } else {
            uVar2 = 0;
        }
        return uVar2;
    }

    // 0x1009608a0
    void CausticsManager::GetCausticsComputeMapAtlas() const {
        compressed_pair_imp<
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, _64ul, _1ul, _0ul, true> _>::Layout,
            eastl::fixed_vector_allocator<1ul, _64ul, _1ul, _0ul, true>, _0>* pcVar2;
        uint64_t* puVar3;

        auto this_00 = field_424.operator->();
        auto this_01 = this_00->GetColourTargetTextures();
        if (this_01->empty() == '\0') {
            puVar3 = (uint64_t*)(*this_01)[0];
            pcVar2 = (compressed_pair_imp<
                      eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, _64ul, _1ul, _0ul, true> _>::Layout,
                      eastl::fixed_vector_allocator<1ul, _64ul, _1ul, _0ul, true>, _0>*)*puVar3;
        } else {
            pcVar2 = nullptr;
        }
        return pcVar2;
    }

    // 0x1009608f0
    void CausticsManager::Update(const ViewTransforms& viewTransforms, float arg2) {
        auto matrix441 = viewTransforms.GetScreen();
        auto matrix442 = viewTransforms.GetOrigin();
        m_cullFrustum->Set(*matrix441, *matrix442);
        *m_viewTransforms = viewTransforms;
        m_causticsPlaneHeight = arg2;
    }

} // namespace jag::graphics
