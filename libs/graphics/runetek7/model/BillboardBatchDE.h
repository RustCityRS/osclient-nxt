// libs/graphics/runetek7/model/BillboardBatchDE.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class BillboardBatch_DE {
    public:
        // virtual methods in vtable order
        virtual ~BillboardBatch_DE();
        virtual void Render(RT7Core& rt7Core, const render::DrawCallState& drawCallState,
                            const SceneViewData& sceneViewData, RenderPassType renderPassType,
                            EffectManager& effectManager);
        virtual void GetRenderer(RT7Core& rt7Core);
        BillboardBatch_DE(float arg1, const eastl::vector_map<int, FaceGroupRenderMasks>* arg2,
                          const BillboardBatchInstance& billboardBatchInstance);

    private:
        uint8_t _unknown_8[96];
        vector_map<int, FaceGroupRenderMasks>* field_104;
        BillboardBatchInstance* field_112;
        uint8_t _unknown_120[8];
    };

    // 0x100887b40
    BillboardBatch_DE::BillboardBatch_DE(float arg1, const eastl::vector_map<int, FaceGroupRenderMasks>* arg2,
                                         const BillboardBatchInstance& billboardBatchInstance) {
        OBB local_88;
        unsigned int arg2_00 = billboardBatchInstance.GetPos();
        new (this) DrawableElementPool<BillboardBatch_DE>(local_88, arg2_00, arg1);
        field_104 = arg2;
        field_112 = billboardBatchInstance;
    }

    // 0x100887bd0
    DrawableElementPool<BillboardBatch_DE>::DrawableElementPool(const math::OBB& obb, unsigned int arg2, float arg3)
        : DrawableElement(obb, arg2, arg3) {}

    // 0x100887c00
    void DrawableElementPool<BillboardBatch_DE>::Release() {
        GetDrawableElementPool();
        if (((FastPool<SkyBox_DE, int>*)&GetDrawableElementPool()::pool)->is_owner(this) == '\0') {
            if (this != nullptr) {
                ~();
            }
        } else {
            ((FastPool<BillboardBatch_DE, int>*)&GetDrawableElementPool()::pool)->Destroy(this);
        }
    }

    // 0x100887c50
    void BillboardBatch_DE::Render(RT7Core& rt7Core, const render::DrawCallState& drawCallState,
                                   const SceneViewData& sceneViewData, RenderPassType renderPassType,
                                   EffectManager& effectManager) {
        auto billboardBatch_DE = rt7Core.GetBillboardBatchRenderer();
        auto drawCallState_00 = rt7Core.GetRenderContext();
        BillboardBatchRenderer::Render(*billboardBatch_DE, *this, *drawCallState_00, drawCallState,
                                       (RenderPassType)sceneViewData, *((EffectManager*)(unsigned long)renderPassType));
    }

    // 0x100887cb0
    void BillboardBatch_DE::GetRenderer(RT7Core& rt7Core) {
        rt7Core.GetBillboardBatchRenderer();
    }

} // namespace jag::graphics

namespace jag::render {
    // 0x100887f20
    FixedIndexPrimitiveBatchData<300ul>::FixedIndexPrimitiveBatchData() : eastl::fixed_vector<int, 300ul>() {
        new ((this + 1240)) eastl::fixed_vector<void*, 300ul>();
    }

} // namespace jag::render
