// libs/graphics/runetek7/renderer/Renderer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "Renderer.h"

namespace jag::graphics {
    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    Renderer::GatherSceneGraphDrawableElements(
        eastl::vector<std::pair<GraphEntity*, GraphEntityTransformData>, eastl::allocator>&, SceneViewData const&,
        GraphNode*, EffectManager const&);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    Renderer::GatherSceneGraphDrawableElements(unsigned int, SceneViewData const&, GraphNode*, int,
                                               EffectManager const&);

    // 0x100102fc0: the linker folded this into oldscape::rs2lib::InputField::GetPlaceholderContents() const, which has identical code
    Renderer::GetDrawableQueue();

    // 0x1007e40b0, 192 bytes, base-object constructor, placed by class name and debug map
    // Renderer::Renderer(RT7Core*, eastl::fixed_vector<DrawableQueue::RenderPassDrawableGroupsConfig, 10ul, true, eastl::allocator> const&, unsigned long, unsigned long)
    void Renderer::Renderer(RT7Core* param_1, fixed_vector* param_2, ulong param_3, ulong param_4) {
        ThreadPool* pTVar1;

        field_0 = &PTR__Renderer_100f14d90;
        field_8 = param_1;
        new (&field_16) eastl::vector<DrawableList*, eastl::allocator>();
        new (&field_48) eastl::vector<Drawable*, eastl::allocator>();
        pTVar1 = (ThreadPool*)param_1->GetImmediateThreadPool();
        new (field_80, pTVar1, param_2) DrawableQueue();
        (&field_16, param_4)->reserve();
        (&field_48, param_3)->reserve();
    }

    // 0x1007e4240, 16 bytes, complete-object constructor, placed by class name and debug map
    // Renderer::Renderer(RT7Core*, eastl::fixed_vector<DrawableQueue::RenderPassDrawableGroupsConfig, 10ul, true, eastl::allocator> const&, unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1007e4250, 64 bytes, base-object destructor, placed by class name and debug map
    // Renderer::~Renderer()
    void Renderer::~Renderer() {
        field_0 = &PTR__Renderer_100f14d90;
        field_80->~DrawableQueue();
        (&field_48)->~vector();
        (&field_16)->~vector();
    }

    // 0x1007e4290, 16 bytes, complete-object destructor, placed by class name and debug map
    // Renderer::~Renderer(): jumps straight to the base-object destructor

    // 0x1007e42a0, 32 bytes, deleting destructor, placed by class name and debug map
    // Renderer::~Renderer()
    void Renderer::~Renderer() {
        ~Renderer(this);
        operator_delete(this);
    }

    // 0x1007e42c0, 96 bytes, placed by class name and debug map
    // Renderer::AddDrawableList(DrawableList*)
    void Renderer::AddDrawableList(DrawableList* param_1) {
        function** ppfVar1;
        function** ppfVar2;
        undefined1* this_00;
        DrawableList* local_20;

        this_00 = &field_16;
        local_20 = param_1;
        ppfVar1 = (function**)this_00->HeapBeginPtr();
        ppfVar2 = (function**)this_00->end();
        ppfVar1 = eastl::find<std::function<bool(input::TextCommand)>**, std::function<bool(input::TextCommand)>*>(
            ppfVar1, ppfVar2, (function**)&local_20);
        ppfVar2 = (function**)this_00->end();
        if (ppfVar1 == ppfVar2) {
            this_00->push_back(&local_20);
        }
    }

    // 0x1007e4370, 96 bytes, placed by class name and debug map
    // Renderer::RemoveDrawableList(DrawableList*)
    void Renderer::RemoveDrawableList(DrawableList* param_1) {
        function** ppfVar1;
        function** ppfVar2;
        undefined1* this_00;
        DrawableList* local_20;

        this_00 = &field_16;
        local_20 = param_1;
        ppfVar1 = (function**)this_00->HeapBeginPtr();
        ppfVar2 = (function**)this_00->end();
        ppfVar1 = eastl::find<std::function<bool(input::TextCommand)>**, std::function<bool(input::TextCommand)>*>(
            ppfVar1, ppfVar2, (function**)&local_20);
        ppfVar2 = (function**)this_00->end();
        if (ppfVar1 != ppfVar2) {
            this_00->erase_unsorted(ppfVar1);
        }
    }

    // 0x1007e4420, 96 bytes, placed by class name and debug map
    // Renderer::AddDrawable(Drawable*)
    void Renderer::AddDrawable(Drawable* param_1) {
        function** ppfVar1;
        function** ppfVar2;
        undefined1* this_00;
        Drawable* local_20;

        this_00 = &field_48;
        local_20 = param_1;
        ppfVar1 = (function**)this_00->HeapBeginPtr();
        ppfVar2 = (function**)this_00->end();
        ppfVar1 = eastl::find<std::function<bool(input::TextCommand)>**, std::function<bool(input::TextCommand)>*>(
            ppfVar1, ppfVar2, (function**)&local_20);
        ppfVar2 = (function**)this_00->end();
        if (ppfVar1 == ppfVar2) {
            this_00->push_back(&local_20);
        }
    }

    // 0x1007e44d0, 96 bytes, placed by class name and debug map
    // Renderer::RemoveDrawable(Drawable*)
    void Renderer::RemoveDrawable(Drawable* param_1) {
        function** ppfVar1;
        function** ppfVar2;
        Drawable** ppDVar3;
        Drawable** ppDVar4;
        undefined1* this_00;
        Drawable* local_20;

        this_00 = &field_48;
        local_20 = param_1;
        ppfVar1 = (function**)this_00->HeapBeginPtr();
        ppfVar2 = (function**)this_00->end();
        ppDVar3 = (Drawable**)
            eastl::find<std::function<bool(input::TextCommand)>**, std::function<bool(input::TextCommand)>*>(
                ppfVar1, ppfVar2, (function**)&local_20);
        ppDVar4 = (Drawable**)this_00->end();
        if (ppDVar3 != ppDVar4) {
            this_00->erase_unsorted(ppDVar3);
        }
    }

    // 0x1007e4580, 208 bytes, placed by class name and debug map
    // Renderer::RenderView(unsigned int, int, SceneViewData const&, GraphNode*, EffectManager&, bool)
    void Renderer::RenderView(uint param_1, int param_2, SceneViewData* param_3, GraphNode* param_4,
                              EffectManager* param_5, bool param_6) {
        RenderContext* pRVar1;
        undefined4 in_register_00000034;
        RenderContext* pRVar2;
        Callstack local_40;

        pRVar2 = (RenderContext*)CONCAT44(in_register_00000034, param_1);
        if (field_8 == (RT7Core*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_rt7Core != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "renderer/Renderer.cpp",
                      75, (char*)0);
        }
        pRVar1 = (RenderContext*)GetRenderContext();
        local_40.field_0 = 0;
        new (&local_40) callstack::Callstack();
        RenderViewBegin(this, pRVar2, param_3, param_5, (RenderPassBitSet*)&local_40);
        GatherDrawableElements(this, param_1, param_3, param_4, param_2, param_5);
        local_40.field_8 = 0;
        local_40._9_3_ = 0;
        new (&local_40.field_8) callstack::Callstack();
        RenderViewRenderPasses(this, param_3, pRVar1, param_6, param_5, (RenderPassBitSet*)&local_40.field_8);
    }

    // 0x1007e4650, 320 bytes, placed by class name and debug map
    // Renderer::RenderViewBegin(render::RenderContext&, SceneViewData const&, EffectManager&, RenderPassBitSet const&)
    void Renderer::RenderViewBegin(RenderContext* param_1, SceneViewData* param_2, EffectManager* param_3,
                                   RenderPassBitSet* param_4) {
        RenderPass** this_00;
        uint uVar3;
        long* plVar4;
        long* plVar5;
        long lVar6;
        ViewTransforms* this_01;
        SunlightDirectLighting* pSVar7;
        Matrix44T* pMVar8;
        float local_38;
        float local_34;

        this_00 = &param_2->field_520;
        plVar4 = (long*)this_00->HeapBeginPtr();
        plVar5 = (long*)this_00->end();
        if (plVar4 != plVar5) {
            do {
                if (*plVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("renderPass != nullptr",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "renderer/Renderer.cpp",
                              136, (char*)0);
                }
                if (param_4->GetX() == 0) {
                LAB_1007e46a0:
                    param_1 = (RenderContext*)field_8;
                    (**(code**)(*(long*)*plVar4 + 16))((long*)*plVar4, param_1, param_3, param_2, field_80);
                } else {
                    uVar3 = (*plVar4)->GetPos();
                    param_1 = (RenderContext*)(ulong)uVar3;
                    if (param_4->HasFormatType() != '\0')
                        goto LAB_1007e46a0;
                }
                plVar4 = plVar4 + 1;
            } while (plVar4 != plVar5);
        }
        lVar6 = this_00->size();
        if (lVar6 != 0) {
            local_38 = 0.0;
            local_34 = 0.0;
            this_01 = (ViewTransforms*)param_2->SSOBeginPtr(param_1);
            this_01->GetNearFarPlaneDistances(&local_38, &local_34);
            pSVar7 = EffectManager::GetEffect<SunlightDirectLighting>(param_3, 79);
            pMVar8 = (Matrix44T*)param_2->GetScreen();
            param_2->GetOrigin();
            ViewTransformsEffect::SetViewTransforms((Matrix44T*)pSVar7, pMVar8, local_38, local_34);
        }
    }

    // 0x1007e4790, 240 bytes, placed by class name and debug map
    // Renderer::GatherDrawableElements(unsigned int, SceneViewData const&, GraphNode*, int, EffectManager const&)
    void Renderer::GatherDrawableElements(uint param_1, SceneViewData* param_2, GraphNode* param_3, int param_4,
                                          EffectManager* param_5) {
        undefined1* this_00;
        undefined8* puVar1;
        undefined8* puVar2;

        this_00 = field_80;
        this_00->ClearAllGroupsInAllPasses();
        SetupDrawableGroups(this);
        puVar1 = (undefined8*)(&field_16)->HeapBeginPtr();
        puVar2 = (undefined8*)(&field_16)->end();
        for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
            (**(code**)(*(long*)*puVar1 + 16))((long*)*puVar1, this_00, field_8, param_2, param_5);
        }
        puVar1 = (undefined8*)(&field_48)->HeapBeginPtr();
        puVar2 = (undefined8*)(&field_48)->end();
        for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
            (**(code**)(*(long*)*puVar1 + 16))((long*)*puVar1, this_00, field_8, param_2, param_5);
        }
        (*(code*)field_0[2])(this, param_1, param_2, param_3, param_4, param_5);
    }

    // 0x1007e4880, 352 bytes, placed by class name and debug map
    // Renderer::RenderViewRenderPasses(SceneViewData const&, render::RenderContext&, bool, EffectManager&, RenderPassBitSet const&)
    void Renderer::RenderViewRenderPasses(SceneViewData* param_1, RenderContext* param_2, bool param_3,
                                          EffectManager* param_4, RenderPassBitSet* param_5) {
        undefined1* puVar1;
        char cVar2;
        undefined4 uVar4;
        long* plVar5;
        undefined7 in_register_00000009;
        DrawCallState local_88;
        long* local_58;
        SceneViewData* local_50;
        undefined4 local_34;

        local_34 = (undefined4)CONCAT71(in_register_00000009, param_3);
        local_50 = param_1;
        plVar5 = (long*)(&param_1->field_520)->HeapBeginPtr();
        local_58 = (long*)(&param_1->field_520)->end();
        if (plVar5 != local_58) {
            puVar1 = ((Renderer*)this)->field_80;
            do {
                if (*plVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("renderPass != nullptr",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "renderer/Renderer.cpp",
                              165, (char*)0);
                }
                if (param_5->GetX() == 0) {
                LAB_1007e493c:
                    new (&local_88) render::DrawCallState();
                    cVar2 = (**(code**)(*(long*)*plVar5 + 24))((long*)*plVar5, &local_88, param_2, param_4, local_50,
                                                               puVar1);
                    if (cVar2 != '\0') {
                        (**(code**)(*(long*)*plVar5 + 40))((long*)*plVar5, ((Renderer*)this)->field_8, &local_88,
                                                           param_4, local_50, puVar1);
                        (**(code**)(*(long*)*plVar5 + 32))((long*)*plVar5, &local_88, param_2, param_4, puVar1);
                        if ((char)local_34 != '\0') {
                            (**(code**)(*(long*)*plVar5 + 48))((long*)*plVar5, param_4, puVar1);
                        }
                    }
                    local_88.~DrawCallState();
                } else {
                    uVar4 = (*plVar5)->GetPos();
                    cVar2 = param_5->HasFormatType(uVar4);
                    if (cVar2 != '\0')
                        goto LAB_1007e493c;
                }
                plVar5 = plVar5 + 1;
            } while (plVar5 != local_58);
        }
    }

    // 0x1007e49e0, 16 bytes, placed by class name and debug map
    // Renderer::RenderViewEnd(render::RenderContext&)
    void Renderer::RenderViewEnd(RenderContext* param_1) {}

    // 0x1007e49f0, 160 bytes, placed by class name and debug map
    // Renderer::RenderView(eastl::vector<std::pair<GraphEntity*, GraphEntityTransformData>, eastl::allocator>&, SceneViewData const&, GraphNode*, EffectManager&, bool, RenderPassBitSet const&)
    /* Renderer::RenderView(eastl::vector<std::pair<GraphEntity*,
   GraphEntityTransformData>, eastl::allocator>&, SceneViewData
   const&, GraphNode*, EffectManager&, bool,
   RenderPassBitSet const&) */

    void Renderer::RenderView(vector* param_1, SceneViewData* param_2, GraphNode* param_3, EffectManager* param_4,
                              bool param_5, RenderPassBitSet* param_6) {
        RenderContext* pRVar1;

        if (field_8 == (RT7Core*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_rt7Core != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "renderer/Renderer.cpp",
                      98, (char*)0);
        }
        GatherDrawableElements(this, param_1, param_2, param_3, param_4);
        pRVar1 = (RenderContext*)GetRenderContext();
        RenderViewBegin(this, (RenderContext*)param_1, param_2, param_4, param_6);
        RenderViewRenderPasses(this, param_2, pRVar1, param_5, param_4, param_6);
    }

    // 0x1007e4a90, 240 bytes, placed by class name and debug map
    // Renderer::GatherDrawableElements(eastl::vector<std::pair<GraphEntity*, GraphEntityTransformData>, eastl::allocator>&, SceneViewData const&, GraphNode*, EffectManager const&)
    /* Renderer::GatherDrawableElements(eastl::vector<std::pair<GraphEntity*,
   GraphEntityTransformData>, eastl::allocator>&, SceneViewData
   const&, GraphNode*, EffectManager const&) */

    void Renderer::GatherDrawableElements(vector* param_1, SceneViewData* param_2, GraphNode* param_3,
                                          EffectManager* param_4) {
        undefined1* this_00;
        undefined8* puVar1;
        undefined8* puVar2;

        this_00 = field_80;
        this_00->ClearAllGroupsInAllPasses();
        SetupDrawableGroups(this);
        puVar1 = (undefined8*)(&field_16)->HeapBeginPtr();
        puVar2 = (undefined8*)(&field_16)->end();
        for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
            (**(code**)(*(long*)*puVar1 + 16))((long*)*puVar1, this_00, field_8, param_2, param_4);
        }
        puVar1 = (undefined8*)(&field_48)->HeapBeginPtr();
        puVar2 = (undefined8*)(&field_48)->end();
        for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
            (**(code**)(*(long*)*puVar1 + 16))((long*)*puVar1, this_00, field_8, param_2, param_4);
        }
        (*(code*)field_0[3])(this, param_1, param_2, param_3, param_4);
    }

    // 0x1007e4b80, 160 bytes, placed by class name and debug map
    // Renderer::RenderView(SceneViewData const&, EffectManager&, bool, RenderPassBitSet const&)
    void Renderer::RenderView(SceneViewData* param_1, EffectManager* param_2, bool param_3, RenderPassBitSet* param_4) {
        RenderContext* pRVar1;
        int local_38[2];

        if (field_8 == (RT7Core*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_rt7Core != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "renderer/Renderer.cpp",
                      117, (char*)0);
        }
        pRVar1 = (RenderContext*)GetRenderContext();
        local_38[0] = 0;
        new (local_38) callstack::Callstack();
        RenderViewBegin(this, (RenderContext*)param_1, param_1, param_2, (RenderPassBitSet*)local_38);
        RenderViewRenderPasses(this, param_1, pRVar1, param_3, param_2, param_4);
    }

    // 0x1007e4c20, 96 bytes, placed by class name and debug map
    // Renderer::SetupDrawableGroups()
    void Renderer::SetupDrawableGroups() {
        ServerConnectionWorkItem* pSVar1;
        int iVar2;
        uint uVar3;

        uVar3 = ForwardLightingPass::GetSortByMaterial();
        pSVar1 = (ServerConnectionWorkItem*)(field_80, 4, 0)->GetDrawableGroup();
        iVar2 = (uVar3 & 255) * 2;
        oldscape::ServerConnectionWorkItem::ServerConnectionWorkItem(pSVar1, iVar2);
        pSVar1 = (ServerConnectionWorkItem*)(field_80, 4, 1)->GetDrawableGroup();
        oldscape::ServerConnectionWorkItem::ServerConnectionWorkItem(pSVar1, iVar2);
    }

} // namespace jag::graphics
