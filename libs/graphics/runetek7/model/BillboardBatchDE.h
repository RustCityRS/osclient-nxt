// libs/graphics/runetek7/model/BillboardBatchDE.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class BillboardBatch_DE {
    public:
        // virtual methods in vtable order
        virtual ~BillboardBatch_DE();
        virtual void Render(RT7Core&, render::DrawCallState const&, SceneViewData const&, RenderPassType,
                            EffectManager&);
        virtual void GetRenderer(RT7Core&);
        BillboardBatch_DE(
            float,
            eastl::vector_map<int, FaceGroupRenderMasks, eastl::less<int>, eastl::allocator,
                              eastl::vector<eastl::pair<int, FaceGroupRenderMasks>, eastl::allocator>> const*,
            BillboardBatchInstance const&);

        // data members, from how the methods use this: 128 bytes
        undefined* field_0; // offset 0, vtable pointer
        char _unknown_8[96];
        vector_map* field_104;             // offset 104
        BillboardBatchInstance* field_112; // offset 112
        char _unknown_120[8];
    };

    // 0x100887ad0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // BillboardBatch_DE::BillboardBatch_DE(float, eastl::vector_map<int, FaceGroupRenderMasks, eastl::less<int>, eastl::allocator, eastl::vector<eastl::pair<int, FaceGroupRenderMasks>, eastl::allocator> > const*, BillboardBatchInstance const&): jumps straight to the base-object constructor

    // 0x100887b40, 144 bytes, base-object constructor, inline, placed by class name and debug map
    // BillboardBatch_DE::BillboardBatch_DE(float, eastl::vector_map<int, FaceGroupRenderMasks, eastl::less<int>, eastl::allocator, eastl::vector<eastl::pair<int, FaceGroupRenderMasks>, eastl::allocator> > const*, BillboardBatchInstance const&)
    void BillboardBatch_DE::BillboardBatch_DE(float param_1, vector_map* param_2, BillboardBatchInstance* param_3) {
        uint uVar1;
        OBB local_88;
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new (&local_88) math::OBB();
        uVar1 = param_3->GetPos();
        new (this) DrawableElementPool<BillboardBatch_DE>(&local_88, uVar1, param_1);
        field_0 = PTR_vtable_100ee87b0 + 16;
        field_104 = param_2;
        field_112 = param_3;
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100887bd0, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // DrawableElementPool<BillboardBatch_DE>::DrawableElementPool(math::OBB const&, unsigned int, float)
    void DrawableElementPool<BillboardBatch_DE>::DrawableElementPool(OBB* param_1, uint param_2, float param_3) {
        new (this) DrawableElement(param_1, param_2, param_3);
        *(undefined**)this = PTR_vtable_100ee87f0 + 16;
    }

    // 0x100887c00, 80 bytes, inline, placed by debug map only (low confidence)
    // DrawableElementPool<BillboardBatch_DE>::Release()
    void DrawableElementPool<BillboardBatch_DE>::Release() {
        char cVar1;

        GetDrawableElementPool();
        cVar1 = (&GetDrawableElementPool()::pool)->is_owner(this);
        if (cVar1 == '\0') {
            if (this != (DrawableElementPool<BillboardBatch_DE>*)0) {
                (**(code**)(*(long*)this + 8))(this);
            }
        } else {
            (&GetDrawableElementPool()::pool)->Destroy(this);
        }
    }

    // 0x100887c50, 96 bytes, inline, placed by class name and debug map
    // BillboardBatch_DE::Render(RT7Core&, render::DrawCallState const&, SceneViewData const&, RenderPassType, EffectManager&)
    void BillboardBatch_DE::Render(RT7Core* param_1, undefined8 param_2, undefined8 param_3, undefined4 param_5,
                                   undefined8 param_6) {
        BillboardBatchRenderer* pBVar1;
        undefined8 uVar2;

        pBVar1 = (BillboardBatchRenderer*)param_1->GetBillboardBatchRenderer();
        uVar2 = param_1->GetRenderContext();
        pBVar1->Render(this, uVar2, param_2, param_3, param_5, param_6);
    }

    // 0x100887cb0, 16 bytes, inline, placed by class name and debug map
    // BillboardBatch_DE::GetRenderer(RT7Core&)
    void BillboardBatch_DE::GetRenderer(RT7Core* param_1) {
        param_1->GetBillboardBatchRenderer();
    }

} // namespace jag::graphics

namespace jag::render {
    // 0x100887f20, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // FixedIndexPrimitiveBatchData<300ul>::FixedIndexPrimitiveBatchData()
    void FixedIndexPrimitiveBatchData<300ul>::FixedIndexPrimitiveBatchData() {
        new (this) eastl::fixed_vector<int, 300ul, true, eastl::allocator>();
        new ((this + 1240)) eastl::fixed_vector<void*, 300ul, true, eastl::allocator>();
    }

} // namespace jag::render
