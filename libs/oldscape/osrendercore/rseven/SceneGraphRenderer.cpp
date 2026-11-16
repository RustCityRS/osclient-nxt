// libs/oldscape/osrendercore/rseven/SceneGraphRenderer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.osrendercore

namespace jag::oldscape::rseven {
    class SceneGraphRenderer : public render::RenderDeviceOnEndFrame // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~SceneGraphRenderer();
        virtual void GatherSceneGraphDrawableElements(unsigned int arg1,
                                                      const jag::graphics::SceneViewData& sceneViewData,
                                                      jag::graphics::GraphNode* graphNode, int arg4,
                                                      const jag::graphics::EffectManager& effectManager);
        virtual void GatherSceneGraphDrawableElements(
            eastl::vector<std::pair<jag::graphics::GraphEntity*, jag::graphics::GraphEntityTransformData>>& pairs,
            const jag::graphics::SceneViewData& sceneViewData, jag::graphics::GraphNode* graphNode,
            const jag::graphics::EffectManager& effectManager);
        SceneGraphRenderer(jag::graphics::RT7Core* rt7Core,
                           const eastl::fixed_vector<jag::graphics::DrawableQueue::RenderPassDrawableGroupsConfig,
                                                     10ul>& renderPassDrawableGroupsConfigs,
                           unsigned long arg3, unsigned long arg4);

    private:
        uint8_t _unknown_9[71];
        uint8_t field_80;
    };

    // 0x1001ceb50
    SceneGraphRenderer::SceneGraphRenderer(
        jag::graphics::RT7Core* rt7Core,
        const eastl::fixed_vector<jag::graphics::DrawableQueue::RenderPassDrawableGroupsConfig, 10ul>&
            renderPassDrawableGroupsConfigs,
        unsigned long arg3, unsigned long arg4)
        : jag::graphics::Renderer(rt7Core, renderPassDrawableGroupsConfigs, arg3, arg4) {}

    // 0x1001ceb80
    SceneGraphRenderer::~SceneGraphRenderer() {}

    // 0x1001cebc0
    void SceneGraphRenderer::GatherSceneGraphDrawableElements(unsigned int arg1,
                                                              const jag::graphics::SceneViewData& sceneViewData,
                                                              jag::graphics::GraphNode* graphNode, int arg4,
                                                              const jag::graphics::EffectManager& effectManager) {
        long* plVar3;
        Matrix44T<float>* pMVar4;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* this_00;
        uint64_t* puVar5;
        uint64_t* puVar6;

        if (graphNode == nullptr) {
            LogAssert("node",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/osrendercore/"
                      "rseven/SceneGraphRenderer.cpp",
                      33, nullptr);
        }
        if (graphNode->GetVisibleFrame(arg4) == arg1) {
            plVar3 = (long*)graphNode->GetLinkObjCount();
            if (plVar3 != nullptr) {
                pMVar4 = graphNode->GetWorldTransformationMatrix();
                (**(void (**)(...))(*plVar3 + 88))(plVar3, &field_80, field_8, pMVar4, sceneViewData, effectManager);
            }
            this_00 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)graphNode->GetChildren();
            if (this_00->empty() == '\0') {
                puVar5 = (uint64_t*)this_00->HeapBeginPtr();
                puVar6 = (uint64_t*)this_00->end();
                for (; puVar5 != puVar6; puVar5 = puVar5 + 1) {
                    GatherSceneGraphDrawableElements((unsigned int)this, (SceneViewData*)arg1,
                                                     (GraphNode*)sceneViewData, (int)*puVar5, (EffectManager*)arg4);
                }
            }
        }
    }

    // 0x1001ced20
    void SceneGraphRenderer::GatherSceneGraphDrawableElements(
        eastl::vector<std::pair<jag::graphics::GraphEntity*, jag::graphics::GraphEntityTransformData>>& pairs,
        const jag::graphics::SceneViewData& sceneViewData, jag::graphics::GraphNode* graphNode,
        const jag::graphics::EffectManager& effectManager) {
        long* plVar1;

        auto puVar2 = pairs.HeapBeginPtr();
        auto puVar3 = pairs.end();
        if (puVar2 != puVar3) {
            do {
                plVar1 = (long*)*puVar2;
                if (plVar1 == nullptr) {
                    LogAssert("entity != nullptr",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                              "osrendercore/rseven/SceneGraphRenderer.cpp",
                              75, nullptr);
                }
                if (puVar2[2] == 0) {
                    LogAssert("entityTransformData.m_pWorldTransform != nullptr",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                              "osrendercore/rseven/SceneGraphRenderer.cpp",
                              78, nullptr);
                }
                (**(void (**)(...))(*plVar1 + 88))(plVar1, &field_80, field_8, puVar2[2], sceneViewData, effectManager);
                puVar2 = puVar2 + 24;
            } while (puVar2 != puVar3);
        }
    }

} // namespace jag::oldscape::rseven
