// libs/graphics/runetek7/water/WaterPatchDE.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class WaterPatch_DE {
    public:
        // virtual methods in vtable order
        virtual ~WaterPatch_DE();
        virtual void Render(RT7Core&, render::DrawCallState const&, SceneViewData const&, RenderPassType,
                            EffectManager&);
        virtual void GetRenderer(RT7Core&);
        WaterPatch_DE(WaterPatch const&, math::OBB const&, float, render::InputAssemblerState const*);

        // data members, from how the methods use this: 192 bytes
        undefined* field_0; // offset 0, vtable pointer
        char _unknown_8[168];
        WaterMaterial* field_176;       // offset 176
        InputAssemblerState* field_184; // offset 184
    };

    // 0x1007c89c0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // WaterPatch_DE::WaterPatch_DE(WaterPatch const&, math::OBB const&, float, render::InputAssemblerState const*): jumps straight to the base-object constructor

    // 0x1007c8a30, 160 bytes, base-object constructor, inline, placed by class name and debug map
    // WaterPatch_DE::WaterPatch_DE(WaterPatch const&, math::OBB const&, float, render::InputAssemblerState const*)
    void WaterPatch_DE::WaterPatch_DE(WaterPatch* param_1, OBB* param_2, float param_3, InputAssemblerState* param_4) {
        uint uVar1;

        uVar1 = param_1->GetPos();
        new (this) DrawableElementPool<WaterPatch_DE>(param_2, uVar1, param_3);
        field_0 = PTR_vtable_100ee8760 + 16;
        (&field_112)->GetWorldTransform();
        field_176 = (WaterMaterial*)param_1->GetMaterial();
        field_184 = param_4;
        ApplyPrecisionOffset((Matrix44T*)&field_112);
    }

    // 0x1007c8ad0, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // DrawableElementPool<WaterPatch_DE>::DrawableElementPool(math::OBB const&, unsigned int, float)
    void DrawableElementPool<WaterPatch_DE>::DrawableElementPool(OBB* param_1, uint param_2, float param_3) {
        new (this) DrawableElement(param_1, param_2, param_3);
        *(undefined**)this = PTR_vtable_100ee87d8 + 16;
    }

    // 0x1007c8b40, 80 bytes, inline, placed by debug map only (low confidence)
    // DrawableElementPool<WaterPatch_DE>::Release()
    void DrawableElementPool<WaterPatch_DE>::Release() {
        FastPool<WaterPatch_DE, int>* this_00;

        this_00 = (FastPool<WaterPatch_DE, int>*)GetDrawableElementPool();
        if (this_00->is_owner(this) == '\0') {
            if (this != (DrawableElementPool<WaterPatch_DE>*)0) {
                (**(code**)(*(long*)this + 8))(this);
            }
        } else {
            this_00->Destroy(this);
        }
    }

    // 0x1007c8b90, 96 bytes, inline, placed by class name and debug map
    // WaterPatch_DE::Render(RT7Core&, render::DrawCallState const&, SceneViewData const&, RenderPassType, EffectManager&)
    void WaterPatch_DE::Render(RT7Core* param_1, undefined8 param_2, undefined8 param_3, undefined4 param_5,
                               undefined8 param_6) {
        WaterPatchRenderer* pWVar1;
        undefined8 uVar2;

        pWVar1 = (WaterPatchRenderer*)param_1->GetWaterPatchRenderer();
        uVar2 = param_1->GetRenderContext();
        pWVar1->Render(this, uVar2, param_2, param_3, param_5, param_6);
    }

    // 0x1007c8bf0, 16 bytes, inline, placed by class name and debug map
    // WaterPatch_DE::GetRenderer(RT7Core&)
    void WaterPatch_DE::GetRenderer(RT7Core* param_1) {
        param_1->GetWaterPatchRenderer();
    }

} // namespace jag::graphics
