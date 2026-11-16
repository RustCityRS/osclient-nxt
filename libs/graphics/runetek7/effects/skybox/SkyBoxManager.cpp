// libs/graphics/runetek7/effects/skybox/SkyBoxManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "SkyBoxManager.h"

namespace jag::graphics {
    // 0x10091c610
    SkyBoxManager::SkyBoxManager(RT7Core& rt7Core) : field_0(rt7Core) {
        RenderPassDrawableGroupsConfig local_168;

        new (&local_168) DrawableQueue::RenderPassDrawableGroupsConfig(4, 16, 2);
        fixed_vector<DrawableQueue::RenderPassDrawableGroupsConfig, 10ul> local_150(&local_168, DAT_00000001);
        new (field_384) Renderer(rt7Core, local_150, 16, 0);
        new (&field_6712) eastl::vector<SkyBoxEntry>();
        this[1].field_16[8] = 0;
    }

    // 0x10091c750
    void SkyBoxManager::Destroy() {
        DestroyRenderingResources();
    }

    // 0x10091c760
    void SkyBoxManager::DestroyRenderingResources() {
        RenderTargetsManager* this_00;
        PointLightShadows* this_01;
        shared_ptr<render::RenderTargets>* renderTargets;
        AutoSingleton<ShaderThreadPoolSingleton> local_30;

        long lVar1 = field_6712.HeapBeginPtr();
        long lVar2 = field_6712.end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 32) {
            this_00 = (RenderTargetsManager*)field_0->GetRenderTargetsManager();
            this_01 = (PointLightShadows*)(*((lVar1 + 8))).operator->();
            renderTargets = (shared_ptr<render::RenderTargets>*)this_01->GetPointLightSMManager();
            this_00->Unregister(*renderTargets);
        }
    }

    // 0x10091c7f0
    void SkyBoxManager::MainLogic() {
        auto arg3 = SystemTimer::GetTimeMS<std::chrono::steady_clock>();
        uint8_t* this_00 = &field_6712;
        auto pSVar1 = this_00->HeapBeginPtr();
        auto pSVar2 = this_00->end();
        pSVar1 = std::remove_if<SkyBoxEntry*, SkyBoxManager::MainLogic()::__5>(pSVar1, pSVar2, arg3);
        pSVar2 = (SkyBoxEntry*)this_00->end();
        this_00->erase(pSVar1, pSVar2);
    }

    // 0x10091c960
    uint64_t SkyBoxManager::GetSkyBoxTexture(int arg1) {
        SkyBoxEntry* pSVar2;
        SkyBoxEntry* pSVar3;
        PointLightShadows* this_00;
        shared_ptr* this_01;
        RenderTargets* this_02;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* this_03;
        uint64_t* puVar4;
        uint8_t* this_04;

        if ((this[1].field_16[8] == '\0') || (arg1 != -1)) {
            this_04 = &field_6712;
            pSVar2 = (SkyBoxEntry*)this_04->HeapBeginPtr();
            pSVar3 = (SkyBoxEntry*)this_04->end();
            pSVar2 = eastl::find_if<SkyBoxEntry const*, int->GetSkyBoxTexture()::__6>(
                pSVar2, pSVar3, (__6*)(unsigned long)(unsigned int)arg1);
            pSVar3 = (SkyBoxEntry*)this_04->end();
            if (pSVar2 != pSVar3) {
                this_00 = (PointLightShadows*)pSVar2->field_8.operator->();
                this_01 = (shared_ptr*)this_00->GetPointLightSMManager();
                if (shared_ptr::operator_cast_to_bool(this_01) != '\0') {
                    this_02 = (RenderTargets*)(*this_01).operator->();
                    this_03 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                                  this_02->GetColourTargetTextures();
                    puVar4 = (uint64_t*)(*this_03)[0];
                    return *puVar4;
                }
            }
        }
        return 0;
    }

    // 0x10091ca70
    void SkyBoxManager::SetViewTransforms(const ViewTransforms& viewTransforms) {
        uint8_t* this_00 = field_16;
        *this_00 = viewTransforms;
        auto matrix441 = this_00->GetScreen();
        auto matrix442 = this_00->GetOrigin();
        field_224->Set(*matrix441, *matrix442);
    }

    // 0x10091cac0
    void
    SkyBoxManager::Render(unsigned int arg1, int arg2, EffectManager& effectManager, const render::Viewport& viewport,
                          std::function<bool(std::array<math::IntersectionType, 10ul>&, math::Frustum&,
                                             math::Frustum const&, int, math::AABB const&, math::OBB const&)>& callback,
                          GraphRoot* graphRoot) {
        shared_ptr<SkyBox>* this_00;
        WorldmapAreaMetadata* this_01;
        SkyBox* pSVar4;
        PointLightShadows* this_02;
        SkyBox* this_04;
        Vector4T<float>* vector4;
        Rect<float>* this_05;
        DrawableQueue* pDVar5;
        uint32_t uVar6;
        Callstack local_29a8;
        WorldmapAreaMetadata* local_2980;
        uint8_t local_2d8[416];

        EffectManager* local_2990 = effectManager;
        new (local_2d8) SceneViewData();
        Viewport local_1620(0, 0, viewport.field_8, viewport.field_12, 0.0, 1.0);
        EffectStateSaveRestore local_2970(&local_1620, DAT_00000001);
        local_2d8->SetRenderTargetViewports(local_2970);
        local_2d8->SetTransforms(*field_16);
        uVar6._0_1_ = 0;
        uVar6._1_3_ = 0;
        local_29c8 = ImVec4(0.0, 0.0, 0.0, 0.0);
        uint32_t local_138 = 3;
        uint8_t local_68 = 1;
        auto renderPass = field_0->GetForwardLightingPass();
        RT7Core* this_06 = (RT7Core*)local_2d8;
        this_06->RenderPassPushBack(renderPass);
        auto local_2988 = this_06->GetRenderContext();
        local_1620 = eastl::fixed_map<EffectType, bool, 121ul>();
        local_2970[0].field_0._0_1_ = 50;
        uint8_t* puVar2 = &local_1620[local_2970];
        *puVar2 = 0;
        local_2970[0].field_0._0_1_ = 108;
        puVar2 = &local_1620[local_2970];
        *puVar2 = 0;
        auto effectManager_00 = field_0->GetEffectManager();
        local_2970 = EffectStateSaveRestore(*effectManager_00, local_1620);
        auto piVar3 = field_6712.HeapBeginPtr();
        auto local_29b0 = field_6712.end();
        if (piVar3 != local_29b0) {
            local_2980 = (WorldmapAreaMetadata*)((SkyBoxManager*)this)->field_384;
            do {
                this_00 = (shared_ptr<SkyBox>*)(piVar3 + 2);
                pSVar4 = (SkyBox*)(*this_00).operator->();
                if (pSVar4->UpdateRenderTargets(*(((SkyBoxManager*)this)->field_0), viewport.field_8,
                                                viewport.field_12) != '\0') {
                    if (*piVar3 == -1) {
                        (SkyBoxManager*)this[1].field_16[8] = 1;
                    }
                    this_02 = (PointLightShadows*)(*this_00).operator->();
                    local_2d8._368_8_ = ((vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                                             this_02->GetPointLightSMManager())
                                            ->end();
                    pSVar4 = (SkyBox*)(*this_00).operator->();
                    this_04 = (SkyBox*)(*this_00).operator->();
                    vector4 = (Vector4T<float>*)this_04->GetClearColour();
                    local_29a8._0_8_ = pSVar4->GetDesiredClearColour(*vector4);
                    local_29a8._8_4_ = uVar6;
                    local_29a8._12_4_ = 0;
                    this_05 = (Rect<float>*)(*((local_2d8 + 384)))[0];
                    *this_05 = local_29a8;
                    local_29a8.m_stackFrames = 0;
                    local_29a8 = callstack::Callstack();
                    local_2980->RenderViewBegin(*local_2988, *local_2d8, *local_2990, local_29a8);
                    pSVar4 = (SkyBox*)(*this_00).operator->();
                    pDVar5 = (DrawableQueue*)local_2980->GetOrigin();
                    pSVar4->GatherForwardDrawableElements(*pDVar5, *(((SkyBoxManager*)this)->field_0), *local_2d8,
                                                          *local_2990);
                    local_29a8.m_stackFrames = 0;
                    local_29a8 = callstack::Callstack();
                    this_01 = local_2980;
                    local_2980->RenderViewRenderPasses(*local_2d8, *local_2988, false, *local_2990, local_29a8);
                    pDVar5 = (DrawableQueue*)this_01->GetOrigin();
                    pDVar5->ClearAllGroupsInAllPasses();
                    local_2980->RenderViewEnd(*local_2988);
                    if (*piVar3 == -1) {
                        (SkyBoxManager*)this[1].field_16[8] = 0;
                    }
                }
                piVar3 = piVar3 + 8;
            } while (piVar3 != local_29b0);
        }
    }

    // 0x10091cf20
    void SkyBoxManager::CreateRenderingResources() {
        AutoSingleton<ShaderThreadPoolSingleton> local_10;

        return 1;
    }

    // 0x10091cf50
    auto SkyBoxManager::RegisterSkyBox(int arg1) {
        SkyBoxEntry local_58;
        MakeSharedPool<SkyBox, 16> local_38;

        uint8_t* this_00 = &field_6712;
        int local_24 = arg1;
        auto pSVar1 = this_00->HeapBeginPtr();
        auto pSVar2 = this_00->end();
        pSVar1 = eastl::find_if<SkyBoxEntry*, int->RegisterSkyBox()::__7>(pSVar1, pSVar2, (__7*)&local_24);
        pSVar2 = (SkyBoxEntry*)this_00->end();
        if (pSVar1 == pSVar2) {
            MakeSharedPool<SkyBox, 16>::MakeShared<>(&local_38);
            local_58 = SkyBoxEntry(local_24, local_38);
            this_00->push_back(local_58);
            result.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(local_38);
        } else {
            pSVar1->field_24 = SystemTimer::GetTimeMS<std::chrono::steady_clock>();
            auto result(&pSVar1->field_8);
        }
        return result;
    }

    // 0x10091d1e0
    void SkyBoxManager::DestroySkyBox(shared_ptr<SkyBox> skyBox) {
        shared_ptr<render::RenderTargets>* renderTargets;

        uint8_t* this_00 = &field_6712;
        auto pSVar1 = this_00->HeapBeginPtr();
        auto pSVar2 = this_00->end();
        pSVar1 = eastl::find_if<SkyBoxEntry*, (shared_ptr<SkyBox>)->DestroySkyBox()::__8>(pSVar1, pSVar2, (__8*)skyBox);
        pSVar2 = (SkyBoxEntry*)this_00->end();
        if (pSVar1 == pSVar2) {
            LogAssert("found != m_skyBoxes.end()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "skybox/SkyBoxManager.cpp",
                      175, nullptr);
        }
        this_00->erase(pSVar1);
        auto this_01 = field_0->GetRenderTargetsManager();
        PointLightShadows* this_02 = (PointLightShadows*)(*skyBox).operator->();
        renderTargets = (shared_ptr<render::RenderTargets>*)this_02->GetPointLightSMManager();
        this_01->Unregister(*renderTargets);
    }

    // 0x10091d340
    void SkyBoxManager::UnregisterRenderTargets() {
        RenderTargetsManager* this_00;
        PointLightShadows* this_01;
        shared_ptr<render::RenderTargets>* renderTargets;

        long lVar1 = field_6712.HeapBeginPtr();
        long lVar2 = field_6712.end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 32) {
            this_00 = (RenderTargetsManager*)field_0->GetRenderTargetsManager();
            this_01 = (PointLightShadows*)(*((lVar1 + 8))).operator->();
            renderTargets = (shared_ptr<render::RenderTargets>*)this_01->GetPointLightSMManager();
            this_00->Unregister(*renderTargets);
        }
    }

    // 0x1009285e0
    uint64_t SkyBoxManager::MainLogic()::$_5::operator()(SkyBoxEntry& skyBoxEntry) const {
        uint64_t uVar1;

        if ((skyBoxEntry.field_0 < 0) || (uVar1 = 1, field_0 - skyBoxEntry.field_24 < 10001)) {
            ((SkyBox*)skyBoxEntry.field_8.operator->())->MainLogic();
            uVar1 = 0;
        }
        return uVar1;
    }

    // 0x100928780
    uint32_t SkyBoxManager::GetSkyBoxTexture(int)::$_6::operator()(const SkyBoxEntry& skyBoxEntry) const {
        return skyBoxEntry.field_0 == field_0;
    }

    // 0x1009287c0
    uint32_t SkyBoxManager::RegisterSkyBox(int)::$_7::operator()(const SkyBoxEntry& skyBoxEntry) const {
        return skyBoxEntry.field_0 == *field_0;
    }

} // namespace jag::graphics
