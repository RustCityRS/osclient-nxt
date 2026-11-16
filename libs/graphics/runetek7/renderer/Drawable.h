// libs/graphics/runetek7/renderer/Drawable.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class Drawable {
    public:
        // virtual methods in vtable order
        virtual ~Drawable();
        virtual void __pure_slot_2() = 0;
        virtual BinTriangles(SceneViewData const&, BinInfoSSE&);
        GetTransformedTriangle(unsigned int, math::Vector4T<float> (&)[3]);
        RenderDebug(RenderPassType, DrawableElement&) const;
        GetRenderFlags() const;
        SetRenderFlags(unsigned int);
        void SetRenderFlag(unsigned int, bool);
        GetRenderFlag(unsigned int) const;
        void BinCommon(vFloat4*, int, BinInfoSSE&, int);
        Drawable(Drawable const&);
        Drawable(unsigned int);

        // data members, from how the methods use this: 16 bytes
        undefined* field_0; // offset 0, vtable pointer
        uint field_8;       // offset 8
        char _unknown_12[4];
    };

    class DrawableBatchRenderer {
    public:
        // virtual methods in vtable order
        virtual ~DrawableBatchRenderer();
        DrawableBatchRenderer();

        // data members, from how the methods use this: 8 bytes
        undefined* field_0; // offset 0, vtable pointer
    };

    // 0x100669500, 32 bytes, inline, placed by class name and debug map
    // Drawable::SetRenderFlag(unsigned int, bool)
    void Drawable::SetRenderFlag(uint param_1, bool param_2) {
        undefined3 in_register_00000011;

        if (CONCAT31(in_register_00000011, param_2) == 0) {
            field_8 = field_8 & ~param_1;
            return;
        }
        field_8 = field_8 | param_1;
    }

    // 0x1007b81d0, 16 bytes, inline, placed by class name
    // Drawable::GetRenderFlag(unsigned int) const
    undefined4 Drawable::GetRenderFlag(uint param_1) {
        return CONCAT31((int3)(~field_8 >> 8), (param_1 & ~field_8) == 0);
    }

    // 0x100866470, 32 bytes, base-object constructor, inline, placed by class name
    // Drawable::Drawable(Drawable const&)
    void Drawable::Drawable(Drawable* param_1) {
        field_0 = PTR_vtable_100ee88c8 + 16;
        field_8 = param_1->field_8;
    }

    // 0x10092f280, 32 bytes, base-object constructor, inline, placed by class name
    // Drawable::Drawable(unsigned int)
    void Drawable::Drawable(uint param_1) {
        field_0 = PTR_vtable_100ee88c8 + 16;
        field_8 = param_1;
    }

} // namespace jag::graphics
