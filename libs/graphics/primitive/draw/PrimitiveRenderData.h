// libs/graphics/primitive/draw/PrimitiveRenderData.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.graphics.primitive.draw

namespace jag {
    class PrimVertPosCol {
    public:
        void Set(float arg1, float arg2, float arg3, unsigned int arg4);
        void Set(const math::Vector3T<float>& vector3, unsigned int arg2);
        PrimVertPosCol();
        static render::VertexElementDesc m_VertexElemDescs[2]; // initialised in its definition

    private:
        float field_0;
        float field_4;
        float field_8;
        uint64_t field_12;
        uint64_t field_20;
    };

    // 0x103bd9b00, set at startup by ___cxx_global_var_init.3
    render::VertexElementDesc PrimVertPosCol::m_VertexElemDescs[2] = {
        /* [0] */ VertexElementDesc(0, "aPos", 2, false, 0, 0),
        /* [1] */ VertexElementDesc(0, "aColour", 3, false, 10, 0),
    };

    // 0x1009c07c0
    void PrimVertPosCol::Set(float arg1, float arg2, float arg3, unsigned int arg4) {
        uint8_t local_38[24];

        Set(arg1, arg2, arg3);
        math::Colour4FromA8R8G8B8(arg4);
        float fStack_20 = arg2;
        new (local_38) math::Float4(*((local_38 + 16)));
        field_12 = local_38._0_8_;
        field_20 = local_38._8_8_;
    }

    // 0x1009c4740
    void PrimVertPosCol::Set(const math::Vector3T<float>& vector3, unsigned int arg2) {
        uint64_t in_XMM1_Qa;
        uint8_t local_38[24];

        SetXYZ(vector3);
        math::Colour4FromA8R8G8B8(arg2);
        uint32_t uStack_20 = (uint32_t)in_XMM1_Qa;
        uint32_t uStack_1c = (uint32_t)((unsigned long)in_XMM1_Qa >> 32);
        new (local_38) math::Float4(*((local_38 + 16)));
        field_12 = local_38._0_8_;
        field_20 = local_38._8_8_;
    }

    // 0x1009cbf60
    PrimVertPosCol::PrimVertPosCol() : math::Vector3T() {
        new (&field_12) shared_ptr();
    }

} // namespace jag
