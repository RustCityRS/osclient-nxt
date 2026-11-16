// libs/graphics/runetek7/renderer/Renderer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "Renderer.h"

namespace jag::graphics {
    // 0x100009e70: Renderer::GatherSceneGraphDrawableElements(eastl::vector<std::pair<GraphEntity*, GraphEntityTransformData>>&, SceneViewData const&, GraphNode*, EffectManager const&) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: Renderer::GatherSceneGraphDrawableElements(unsigned int, SceneViewData const&, GraphNode*, int, EffectManager const&) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100102fc0: Renderer::GetDrawableQueue() has the same machine code as oldscape::rs2lib::InputField::GetPlaceholderContents() const

    // 0x1007e40b0
    Renderer::Renderer(
        RT7Core* rt7Core,
        const eastl::fixed_vector<DrawableQueue::RenderPassDrawableGroupsConfig, 10ul>& renderPassDrawableGroupsConfigs,
        unsigned long arg3, unsigned long arg4)
        : field_8(rt7Core) {
        auto threadPool = rt7Core->GetImmediateThreadPool();
        new (&m_drawableQueue) DrawableQueue(threadPool, renderPassDrawableGroupsConfigs);
        field_16.reserve(arg4);
        field_48.reserve(arg3);
    }

    // 0x1007e4250
    Renderer::~Renderer() {
        field_48.~vector();
        field_16.~vector();
    }

    // 0x1007e42c0
    void Renderer::AddDrawableList(DrawableList* drawableList) {
        function<bool_(int, int, int, int)>** ppfVar1;
        function<bool_(int, int, int, int)>** ppfVar2;

        uint8_t* this_00 = &field_16;
        DrawableList* local_20 = drawableList;
        ppfVar1 = (function<bool_(int, int, int, int)>**)this_00->HeapBeginPtr();
        ppfVar2 = (function<bool_(int, int, int, int)>**)this_00->end();
        ppfVar1 = eastl::find<std::function<bool(input::TextCommand)>**, std::function<bool(input::TextCommand)>*>(
            ppfVar1, ppfVar2, local_20);
        ppfVar2 = (function<bool_(int, int, int, int)>**)this_00->end();
        if (ppfVar1 == ppfVar2) {
            this_00->push_back(local_20);
        }
    }

    // 0x1007e4370
    void Renderer::RemoveDrawableList(DrawableList* drawableList) {
        function<bool_(int, int, int, int)>** ppfVar1;
        function<bool_(int, int, int, int)>** ppfVar2;

        uint8_t* this_00 = &field_16;
        DrawableList* local_20 = drawableList;
        ppfVar1 = (function<bool_(int, int, int, int)>**)this_00->HeapBeginPtr();
        ppfVar2 = (function<bool_(int, int, int, int)>**)this_00->end();
        ppfVar1 = eastl::find<std::function<bool(input::TextCommand)>**, std::function<bool(input::TextCommand)>*>(
            ppfVar1, ppfVar2, local_20);
        ppfVar2 = (function<bool_(int, int, int, int)>**)this_00->end();
        if (ppfVar1 != ppfVar2) {
            this_00->erase_unsorted(ppfVar1);
        }
    }

    // 0x1007e4420
    void Renderer::AddDrawable(Drawable* drawable) {
        function<bool_(int, int, int, int)>** ppfVar1;
        function<bool_(int, int, int, int)>** ppfVar2;

        uint8_t* this_00 = &field_48;
        Drawable* local_20 = drawable;
        ppfVar1 = (function<bool_(int, int, int, int)>**)this_00->HeapBeginPtr();
        ppfVar2 = (function<bool_(int, int, int, int)>**)this_00->end();
        ppfVar1 = eastl::find<std::function<bool(input::TextCommand)>**, std::function<bool(input::TextCommand)>*>(
            ppfVar1, ppfVar2, local_20);
        ppfVar2 = (function<bool_(int, int, int, int)>**)this_00->end();
        if (ppfVar1 == ppfVar2) {
            this_00->push_back(local_20);
        }
    }

    // 0x1007e44d0
    void Renderer::RemoveDrawable(Drawable* drawable) {
        function<bool_(int, int, int, int)>** arg1;
        function<bool_(int, int, int, int)>** arg2;

        uint8_t* this_00 = &field_48;
        Drawable* local_20 = drawable;
        arg1 = (function<bool_(int, int, int, int)>**)this_00->HeapBeginPtr();
        arg2 = (function<bool_(int, int, int, int)>**)this_00->end();
        Drawable** arg1_00 = (Drawable**)
            eastl::find<std::function<bool(input::TextCommand)>**, std::function<bool(input::TextCommand)>*>(arg1, arg2,
                                                                                                             local_20);
        auto ppDVar1 = this_00->end();
        if (arg1_00 != ppDVar1) {
            this_00->erase_unsorted(arg1_00);
        }
    }

    // 0x1007e4580
    void Renderer::RenderView(unsigned int arg1, int arg2, const SceneViewData& sceneViewData, GraphNode* graphNode,
                              EffectManager& effectManager, bool arg6) {
        long lVar1;
        uint32_t in_register_00000034;
        uint32_t in_register_0000003c;
        uint64_t in_register_00000089;
        bool in_stack_00000008;

        EffectManager* effectManager_00 = (EffectManager*)(((uint64_t)in_register_00000089 << 8) | (uint8_t)arg6);
        RT7Core* rT7Core = (RT7Core*)(((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1);
        RenderContext* renderContext_00 = (RenderContext*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg2);
        lVar1._0_1_ = rT7Core->field_8;
        lVar1._1_3_ = *(uint32_t*)&rT7Core->field_9;
        lVar1._4_4_ = rT7Core->field_12;
        if (lVar1 == 0) {
            LogAssert("m_rt7Core != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "renderer/Renderer.cpp",
                      75, nullptr);
        }
        auto renderContext = rT7Core->GetRenderContext();
        local_40.m_stackFrames = 0;
        Callstack local_40;
        RenderViewBegin((Renderer*)rT7Core, renderContext_00, (SceneViewData*)graphNode, effectManager_00,
                        (RenderPassBitSet*)&local_40);
        GatherDrawableElements((Renderer*)rT7Core, arg2, (SceneViewData*)graphNode, (GraphNode*)effectManager,
                               (int)sceneViewData, effectManager_00);
        local_40.field_8 = 0;
        local_40._9_3_ = 0;
        new (&local_40.field_8) callstack::Callstack();
        RenderViewRenderPasses((Renderer*)rT7Core, (SceneViewData*)graphNode, renderContext, in_stack_00000008,
                               effectManager_00, (RenderPassBitSet*)&local_40.field_8);
    }

    // 0x1007e4650
    void Renderer::RenderViewBegin(render::RenderContext& renderContext, const SceneViewData& sceneViewData,
                                   EffectManager& effectManager, const RenderPassBitSet& renderPassBitSet) {
        unsigned int arg1;
        ViewTransformsEffect* this_02;
        Matrix44T<float>* matrix441;
        Matrix44T<float>* matrix442;

        uint8_t* this_00 = &sceneViewData.field_520;
        auto plVar3 = this_00->HeapBeginPtr();
        auto plVar4 = this_00->end();
        if (plVar3 != plVar4) {
            do {
                if (*plVar3 == 0) {
                    LogAssert("renderPass != nullptr",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "renderer/Renderer.cpp",
                              136, nullptr);
                }
                if (renderPassBitSet.GetX() == 0) {
                LAB_1007e46a0:
                    (**(void (**)(...))(*(long*)*plVar3 + 16))((long*)*plVar3, field_8, effectManager, sceneViewData,
                                                               &m_drawableQueue);
                } else {
                    arg1 = (*plVar3)->GetPos();
                    if (renderPassBitSet.HasFormatType(arg1) != '\0')
                        goto LAB_1007e46a0;
                }
                plVar3 = plVar3 + 1;
            } while (plVar3 != plVar4);
        }
        if (this_00->size() != 0) {
            ((ViewTransforms*)sceneViewData.SSOBeginPtr())->GetNearFarPlaneDistances(0.0, 0.0);
            this_02 = (ViewTransformsEffect*)effectManager.GetEffect<SunlightDirectLighting>(79);
            matrix441 = (Matrix44T<float>*)sceneViewData.GetScreen();
            matrix442 = (Matrix44T<float>*)sceneViewData.GetOrigin();
            this_02->SetViewTransforms(*matrix441, *matrix442, 0.0, 0.0);
        }
    }

    // 0x1007e4790
    void Renderer::GatherDrawableElements(unsigned int arg1, const SceneViewData& sceneViewData, GraphNode* graphNode,
                                          int arg4, const EffectManager& effectManager) {
        uint8_t* this_00 = &m_drawableQueue;
        this_00->ClearAllGroupsInAllPasses();
        SetupDrawableGroups();
        auto puVar1 = field_16.HeapBeginPtr();
        auto puVar2 = field_16.end();
        for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
            (**(void (**)(...))(*(long*)*puVar1 + 16))((long*)*puVar1, this_00, field_8, sceneViewData, effectManager);
        }
        puVar1 = (uint64_t*)field_48.HeapBeginPtr();
        puVar2 = (uint64_t*)field_48.end();
        for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
            (**(void (**)(...))(*(long*)*puVar1 + 16))((long*)*puVar1, this_00, field_8, sceneViewData, effectManager);
        }
        GatherSceneGraphDrawableElements((unsigned long)arg1, sceneViewData, graphNode,
                                         (unsigned long)(unsigned int)arg4, effectManager);
    }

    // 0x1007e4880
    void Renderer::RenderViewRenderPasses(const SceneViewData& sceneViewData, render::RenderContext& renderContext,
                                          bool arg3, EffectManager& effectManager,
                                          const RenderPassBitSet& renderPassBitSet) {
        uint8_t* puVar1;
        bool cVar2;
        uint64_t in_register_00000009;
        DrawCallState local_88;

        uint32_t local_34 = (uint32_t)(((uint64_t)in_register_00000009 << 8) | (uint8_t)arg3);
        Renderer* local_40 = this;
        auto plVar4 = sceneViewData.field_520.HeapBeginPtr();
        auto local_58 = sceneViewData.field_520.end();
        if (plVar4 != local_58) {
            puVar1 = &local_40->m_drawableQueue;
            do {
                if (*plVar4 == 0) {
                    LogAssert("renderPass != nullptr",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "renderer/Renderer.cpp",
                              165, nullptr);
                }
                if (renderPassBitSet.GetX() == 0) {
                LAB_1007e493c:
                    local_88 = render::DrawCallState();
                    cVar2 = (**(void (**)(...))(*(long*)*plVar4 + 24))((long*)*plVar4, &local_88, renderContext,
                                                                       effectManager, sceneViewData, puVar1);
                    if (cVar2) {
                        (**(void (**)(...))(*(long*)*plVar4 + 40))((long*)*plVar4, local_40->field_8, &local_88,
                                                                   effectManager, sceneViewData, puVar1);
                        (**(void (**)(...))(*(long*)*plVar4 + 32))((long*)*plVar4, &local_88, renderContext,
                                                                   effectManager, puVar1);
                        if ((char)local_34 != '\0') {
                            (**(void (**)(...))(*(long*)*plVar4 + 48))((long*)*plVar4, effectManager, puVar1);
                        }
                    }
                } else {
                    cVar2 = renderPassBitSet.HasFormatType((*plVar4)->GetPos());
                    if (cVar2)
                        goto LAB_1007e493c;
                }
                plVar4 = plVar4 + 1;
            } while (plVar4 != local_58);
        }
    }

    // 0x1007e49e0
    void Renderer::RenderViewEnd(render::RenderContext& renderContext) {}

    // 0x1007e49f0
    void Renderer::RenderView(eastl::vector<std::pair<GraphEntity*, GraphEntityTransformData>>& pairs,
                              const SceneViewData& sceneViewData, GraphNode* graphNode, EffectManager& effectManager,
                              bool arg5, const RenderPassBitSet& renderPassBitSet) {
        uint64_t in_register_00000081;
        RenderPassBitSet* in_stack_00000008;

        EffectManager* effectManager_00 = (EffectManager*)(((uint64_t)in_register_00000081 << 8) | (uint8_t)arg5);
        if (*(long*)(pairs + 8) == 0) {
            LogAssert("m_rt7Core != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "renderer/Renderer.cpp",
                      98, nullptr);
        }
        GatherDrawableElements((Renderer*)pairs,
                               (vector<std::pair<GraphEntity*, GraphEntityTransformData>>*)sceneViewData,
                               (SceneViewData*)graphNode, (GraphNode*)effectManager, effectManager_00);
        auto renderContext = pairs.GetRenderContext();
        RenderViewBegin((Renderer*)pairs, (RenderContext*)sceneViewData, (SceneViewData*)graphNode, effectManager_00,
                        in_stack_00000008);
        RenderViewRenderPasses((Renderer*)pairs, (SceneViewData*)graphNode, renderContext, (uint8_t)renderPassBitSet,
                               effectManager_00, in_stack_00000008);
    }

    // 0x1007e4a90
    void Renderer::GatherDrawableElements(eastl::vector<std::pair<GraphEntity*, GraphEntityTransformData>>& pairs,
                                          const SceneViewData& sceneViewData, GraphNode* graphNode,
                                          const EffectManager& effectManager) {
        uint8_t* this_00 = &m_drawableQueue;
        this_00->ClearAllGroupsInAllPasses();
        SetupDrawableGroups();
        auto puVar1 = field_16.HeapBeginPtr();
        auto puVar2 = field_16.end();
        for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
            (**(void (**)(...))(*(long*)*puVar1 + 16))((long*)*puVar1, this_00, field_8, sceneViewData, effectManager);
        }
        puVar1 = (uint64_t*)field_48.HeapBeginPtr();
        puVar2 = (uint64_t*)field_48.end();
        for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
            (**(void (**)(...))(*(long*)*puVar1 + 16))((long*)*puVar1, this_00, field_8, sceneViewData, effectManager);
        }
        GatherSceneGraphDrawableElements(pairs, sceneViewData, graphNode, effectManager);
    }

    // 0x1007e4b80
    void Renderer::RenderView(const SceneViewData& sceneViewData, EffectManager& effectManager, bool arg3,
                              const RenderPassBitSet& renderPassBitSet) {
        int local_38[2];

        if (field_8 == nullptr) {
            LogAssert("m_rt7Core != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "renderer/Renderer.cpp",
                      117, nullptr);
        }
        auto renderContext = GetRenderContext();
        local_38[0] = 0;
        new (local_38) callstack::Callstack();
        RenderViewBegin(sceneViewData, sceneViewData, effectManager, *local_38);
        RenderViewRenderPasses(sceneViewData, *renderContext, arg3, effectManager, renderPassBitSet);
    }

    // 0x1007e4c20
    void Renderer::SetupDrawableGroups() {
        unsigned int uVar1 = ForwardLightingPass::GetSortByMaterial();
        auto pCVar2 = m_drawableQueue.GetDrawableGroup(4, 0);
        int arg1 = (uVar1 & 255) * 2;
        new (pCVar2) oldscape::ServerConnectionWorkItem(arg1);
        pCVar2 = m_drawableQueue.GetDrawableGroup(4, 1);
        new (pCVar2) oldscape::ServerConnectionWorkItem(arg1);
    }

} // namespace jag::graphics
