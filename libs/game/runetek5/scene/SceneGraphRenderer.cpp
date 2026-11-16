// libs/game/runetek5/scene/SceneGraphRenderer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

namespace jag::game {
    class SceneGraphRenderer : public render::RenderDeviceOnEndFrame // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~SceneGraphRenderer();
        virtual void GatherSceneGraphDrawableElements(unsigned int, graphics::SceneViewData const&,
                                                      graphics::GraphNode*, int, graphics::EffectManager const&);
        virtual void GatherSceneGraphDrawableElements(
            eastl::vector<std::pair<graphics::GraphEntity*, graphics::GraphEntityTransformData>, eastl::allocator>&,
            graphics::SceneViewData const&, graphics::GraphNode*, graphics::EffectManager const&);
        SceneGraphRenderer(graphics::RT7Core*,
                           eastl::fixed_vector<graphics::DrawableQueue::RenderPassDrawableGroupsConfig, 10ul, true,
                                               eastl::allocator> const&,
                           unsigned long, unsigned long);

        // data members, from how the methods use this: 81 bytes, the first 9 are RenderDeviceOnEndFrame
        char _unknown_9[71];
        undefined1 field_80; // offset 80
    };

    // 0x100460cd0, 32 bytes, base-object constructor, placed by class name and debug map
    // SceneGraphRenderer::SceneGraphRenderer(graphics::RT7Core*, eastl::fixed_vector<graphics::DrawableQueue::RenderPassDrawableGroupsConfig, 10ul, true, eastl::allocator> const&, unsigned long, unsigned long)
    void SceneGraphRenderer::SceneGraphRenderer(RT7Core* param_1, fixed_vector* param_2, ulong param_3, ulong param_4) {
        new (this) graphics::Renderer(param_1, param_2, param_3, param_4);
        field_0 = &PTR__SceneGraphRenderer_100f00b90;
    }

    // 0x100460cf0, 16 bytes, complete-object constructor, placed by class name and debug map
    // SceneGraphRenderer::SceneGraphRenderer(graphics::RT7Core*, eastl::fixed_vector<graphics::DrawableQueue::RenderPassDrawableGroupsConfig, 10ul, true, eastl::allocator> const&, unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100460d00, 16 bytes, base-object destructor, placed by class name and debug map
    // SceneGraphRenderer::~SceneGraphRenderer()
    void SceneGraphRenderer::~SceneGraphRenderer() {
        ~Renderer();
    }

    // 0x100460d10, 16 bytes, complete-object destructor, placed by class name and debug map
    // SceneGraphRenderer::~SceneGraphRenderer(): jumps straight to the base-object destructor

    // 0x100460d20, 32 bytes, deleting destructor, placed by class name and debug map
    // SceneGraphRenderer::~SceneGraphRenderer()
    void SceneGraphRenderer::~SceneGraphRenderer() {
        ~SceneGraphRenderer(this);
        operator_delete(this);
    }

    // 0x100460d40, 304 bytes, placed by class name and debug map
    // SceneGraphRenderer::GatherSceneGraphDrawableElements(unsigned int, graphics::SceneViewData const&, graphics::GraphNode*, int, graphics::EffectManager const&)
    void SceneGraphRenderer::GatherSceneGraphDrawableElements(uint param_1, SceneViewData* param_2, GraphNode* param_3,
                                                              int param_4, EffectManager* param_5) {
        long* plVar3;
        undefined8 uVar4;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_00;
        undefined8* puVar5;
        undefined8* puVar6;

        if (param_3 == (GraphNode*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("node",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "SceneGraphRenderer.cpp",
                      37, (char*)0);
        }
        if (param_3->GetVisibleFrame(param_4) == param_1) {
            plVar3 = (long*)param_3->GetLinkObjCount();
            if (plVar3 != (long*)0) {
                uVar4 = param_3->GetWorldTransformationMatrix();
                (**(code**)(*plVar3 + 168))(plVar3, &field_80, field_8, uVar4, param_2, param_5);
            }
            this_00 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                          param_3->GetChildren();
            if (eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
                    this_00) == '\0') {
                puVar5 = (undefined8*)this_00->HeapBeginPtr();
                puVar6 = (undefined8*)this_00->end();
                for (; puVar5 != puVar6; puVar5 = puVar5 + 1) {
                    (*(code*)field_0[2])(this, param_1, param_2, *puVar5, param_4, param_5);
                }
            }
        }
    }

    // 0x100460e70, 240 bytes, placed by class name and debug map
    // SceneGraphRenderer::GatherSceneGraphDrawableElements(eastl::vector<std::pair<graphics::GraphEntity*, graphics::GraphEntityTransformData>, eastl::allocator>&, graphics::SceneViewData const&, graphics::GraphNode*, graphics::EffectManager const&)
    /* SceneGraphRenderer::GatherSceneGraphDrawableElements(eastl::vector<std::pair<graphics::GraphEntity*,
   graphics::GraphEntityTransformData>, eastl::allocator>&, graphics::SceneViewData
   const&, graphics::GraphNode*, graphics::EffectManager const&) */

    void SceneGraphRenderer::GatherSceneGraphDrawableElements(vector* param_1, SceneViewData* param_2,
                                                              GraphNode* param_3, EffectManager* param_4) {
        long* plVar1;
        undefined8* puVar2;
        undefined8* puVar3;

        puVar2 = (undefined8*)param_1->HeapBeginPtr();
        puVar3 = (undefined8*)param_1->end();
        if (puVar2 != puVar3) {
            do {
                plVar1 = (long*)*puVar2;
                if (plVar1 == (long*)0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("entity != nullptr",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "scene/SceneGraphRenderer.cpp",
                              81, (char*)0);
                }
                if (puVar2[2] == 0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("entityTransformData.m_pWorldTransform != nullptr",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "scene/SceneGraphRenderer.cpp",
                              82, (char*)0);
                }
                (**(code**)(*plVar1 + 168))(plVar1, &field_80, field_8, puVar2[2], param_2, param_4);
                puVar2 = puVar2 + 24;
            } while (puVar2 != puVar3);
        }
    }

} // namespace jag::game
