// libs/graphics/primitive/draw/PrimitiveRenderData.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.graphics.primitive.draw

namespace jag {
    class PrimVertPosCol {
    public:
        void Set(float, float, float, unsigned int);
        void Set(math::Vector3T<float> const&, unsigned int);
        PrimVertPosCol();
        static render::VertexElementDesc /* 80 bytes */ m_VertexElemDescs[2]; // initialised in its definition

        // data members, from how the methods use this: 28 bytes
        float field_0;       // offset 0
        float field_4;       // offset 4
        float field_8;       // offset 8
        undefined8 field_12; // offset 12
        undefined8 field_20; // offset 20
    };

    // 0x103bd9b00, 80 bytes, __common; set at startup by ___cxx_global_var_init.3
    render::VertexElementDesc PrimVertPosCol::m_VertexElemDescs[2] = {
        /* [0] */ VertexElementDesc(0, "aPos", 2, 0, 0, 0),
        /* [1] */ VertexElementDesc(0, "aColour", 3, 0, 10, 0),
    };

    // 0x1009c07c0, 80 bytes, inline, placed by debug map only (low confidence)
    // PrimVertPosCol::Set(float, float, float, unsigned int)
    void PrimVertPosCol::Set(float param_1, float param_2, float param_3, uint param_4) {
        undefined1 local_38[16];
        undefined8 local_28;
        float fStack_20;

        Set(param_1, param_2, param_3);
        local_28 = math::Colour4FromA8R8G8B8(param_4);
        fStack_20 = param_2;
        new (local_38) math::Float4((Vector4T*)(local_38 + 16));
        field_12 = local_38._0_8_;
        field_20 = local_38._8_8_;
    }

    // 0x1009c4740, 80 bytes, inline, placed by class header (inline)
    // PrimVertPosCol::Set(math::Vector3T<float> const&, unsigned int)
    void PrimVertPosCol::Set(Vector3T* param_1, uint param_2) {
        undefined8 in_XMM1_Qa;
        undefined1 local_38[16];
        undefined8 local_28;
        undefined4 uStack_20;
        undefined4 uStack_1c;

        SetXYZ(param_1);
        local_28 = math::Colour4FromA8R8G8B8(param_2);
        uStack_20 = (undefined4)in_XMM1_Qa;
        uStack_1c = (undefined4)((ulong)in_XMM1_Qa >> 32);
        new (local_38) math::Float4((Vector4T*)(local_38 + 16));
        field_12 = local_38._0_8_;
        field_20 = local_38._8_8_;
    }

    // 0x1009cbf50, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // PrimVertPosCol::PrimVertPosCol(): jumps straight to the base-object constructor

    // 0x1009cbf60, 48 bytes, base-object constructor, inline, placed by class header (inline)
    // PrimVertPosCol::PrimVertPosCol()
    void PrimVertPosCol::PrimVertPosCol() {
        _func_decltype_nullptr* in_RSI;

        new (this) math::Vector3T<int>();
        new (&field_12, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
    }

    // 0x100bc3dc0, 96 bytes, placed by the data it initialises
    // ___cxx_global_var_init.3
    void ___cxx_global_var_init_3() {
        new (&PrimVertPosCol::m_VertexElemDescs) render::VertexElementDesc(0, "aPos", 2, 0, 0, 0);
        new (&DAT_103bd9b28) render::VertexElementDesc(0, "aColour", 3, 0, 10, 0);
    }

} // namespace jag
