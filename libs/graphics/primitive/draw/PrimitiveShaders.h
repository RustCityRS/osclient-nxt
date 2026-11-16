// libs/graphics/primitive/draw/PrimitiveShaders.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.graphics.graphicutils

namespace jag::graphicutils {
    // 0x100bb9490
    void RenderToTextureHelper::RenderQuad(render::RenderContext& renderContext,
                                           render::DrawCallState& drawCallState) const {
        renderContext.DrawPrimitives(drawCallState, 5, 0, 4);
    }

    // 0x100bb94b0
    void RenderToTextureHelper::RenderQuad(render::RenderContext& renderContext) const {
        renderContext.SetVertexBuffer(&field_88, 20, 0);
        renderContext.DrawPrimitives(5, 0, 4);
    }

    // 0x100bb94f0
    void RenderToTextureHelper::CreateRenderingResources() {
        uint8_t local_b8[12];
        uint8_t local_ac[8];
        uint8_t local_a4[12];
        uint8_t local_94[12];
        uint8_t local_80[16];
        uint8_t local_70[20];
        uint8_t local_5c[28];
        uint8_t local_38[16];

        new (local_b8) math::ColourHSL(-1.0, 1.0, 1.0);
        new (local_ac) math::ColourHSL(1.0, 1.0, 1.0);
        new ((local_a4 + 4)) math::ColourHSL(-1.0, -1.0, 1.0);
        new (local_94) math::ColourHSL(1.0, -1.0, 1.0);
        auto pvVar1 = local_b8->data();
        field_8.Create(48, 0, pvVar1);
        new (local_b8) math::ColourHSL(-1.0, 1.0, 0.0);
        new (local_ac) math::Point(0.0, 1.0);
        new (local_a4) math::ColourHSL(1.0, 1.0, 0.0);
        Point<float> local_98(1.0, 1.0);
        new ((local_94 + 4)) math::ColourHSL(-1.0, -1.0, 0.0);
        Point<float> local_84(0.0, 0.0);
        new ((local_80 + 4)) math::ColourHSL(1.0, -1.0, 0.0);
        new (local_70) math::Point(1.0, 0.0);
        pvVar1 = (void*)local_b8->data();
        field_88.Create(80, 0, pvVar1);
        new (local_b8) math::ColourHSL(-1.0, 1.0, 0.0);
        new (local_ac) math::Point(0.0, 1.0);
        ImVec4 local_f8(1.0, 1.0, 1.0, 1.0);
        new (local_a4) math::Float4(local_f8);
        new (local_94) math::ColourHSL(1.0, 1.0, 0.0);
        Point<float> local_88(1.0, 1.0);
        ImVec4 local_e8(1.0, 1.0, 1.0, 1.0);
        new (local_80) math::Float4(local_e8);
        new (local_70) math::ColourHSL(-1.0, -1.0, 0.0);
        new ((local_70 + 12)) math::Point(0.0, 0.0);
        ImVec4 local_d8(1.0, 1.0, 1.0, 1.0);
        new (local_5c) math::Float4(local_d8);
        new ((local_5c + 16)) math::ColourHSL(1.0, -1.0, 0.0);
        Point<float> local_40(1.0, 0.0);
        ImVec4 local_c8(1.0, 1.0, 1.0, 1.0);
        new (local_38) math::Float4(local_c8);
        pvVar1 = (void*)local_b8->data();
        field_168.Create(144, 0, pvVar1);
    }

    // 0x100bb9850
    void RenderToTextureHelper::DestroyRenderingResources() {
        field_8.Destroy();
        field_88.Destroy();
        field_168.Destroy();
        field_248->Destroy();
    }

} // namespace jag::graphicutils

namespace jag {
    class PrimitiveShaderFamily {
    public:
        // virtual methods in vtable order
        virtual ~PrimitiveShaderFamily();
        ShaderProgram* GetShaderProgram(PRIM_SHADER_TYPE pRIM_SHADER_TYPE) const;
        PrimitiveShaderFamily();
        uint32_t Init();
        void DestroyGraphicResources();

    private:
        uint8_t field_8;
        uint8_t _unknown_9[3];
        uint32_t field_12;
        uint8_t _unknown_16[33408];
    };

    // 0x100bb8840
    ShaderProgram* PrimitiveShaderFamily::GetShaderProgram(PRIM_SHADER_TYPE pRIM_SHADER_TYPE) const {
        return (ShaderProgram*)field_16[(unsigned long)pRIM_SHADER_TYPE];
    }

    // 0x100bc3ce0
    PrimitiveShaderFamily::~PrimitiveShaderFamily() {
        DestroyGraphicResources();
        field_16.~array();
    }

} // namespace jag
