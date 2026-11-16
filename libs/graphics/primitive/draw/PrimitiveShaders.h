// libs/graphics/primitive/draw/PrimitiveShaders.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.graphics.graphicutils

namespace jag {
    class PrimitiveShaderFamily {
    public:
        // virtual methods in vtable order
        virtual ~PrimitiveShaderFamily();
        void GetShaderProgram(PRIM_SHADER_TYPE) const;
        PrimitiveShaderFamily();
        Init();
        void DestroyGraphicResources();

        // data members, from how the methods use this: 33424 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined1 field_8;  // offset 8
        char _unknown_9[3];
        undefined4 field_12; // offset 12
        char _unknown_16[33408];
    };

    // 0x100bb8840, 32 bytes, inline, placed by debug map only (low confidence)
    // PrimitiveShaderFamily::GetShaderProgram(PRIM_SHADER_TYPE) const
    void PrimitiveShaderFamily::GetShaderProgram(uint param_2) {
        std::array<render::ShaderProgram, 18ul>::operator[]((array<render::ShaderProgram, 18ul>*)&field_16,
                                                            (ulong)param_2);
    }

    // 0x100bc29a0, 16 bytes, complete-object destructor, inline, placed by class header (inline)
    // PrimitiveShaderFamily::~PrimitiveShaderFamily(): jumps straight to the base-object destructor

    // 0x100bc29b0, 32 bytes, deleting destructor, inline, placed by class header (inline)
    // PrimitiveShaderFamily::~PrimitiveShaderFamily()
    void PrimitiveShaderFamily::~PrimitiveShaderFamily() {
        ~PrimitiveShaderFamily(this);
        operator_delete(this);
    }

    // 0x100bc3ce0, 95 bytes, base-object destructor, inline, placed by class header (inline)
    // PrimitiveShaderFamily::~PrimitiveShaderFamily()
    void PrimitiveShaderFamily::~PrimitiveShaderFamily() {
        field_0 = (undefined**)(PTR_vtable_100ee79b0 + 16);
        DestroyGraphicResources(this);
        (&field_16)->~array();
        ~RenderDeviceCallback();
        ~AutoSingleton();
    }

} // namespace jag

namespace jag::graphicutils {
    // 0x100bb9490, 32 bytes, placed by debug map only (low confidence)
    // RenderToTextureHelper::RenderQuad(render::RenderContext&, render::DrawCallState&) const
    void RenderToTextureHelper::RenderQuad(RenderContext* param_1, DrawCallState* param_2) {
        param_1->DrawPrimitives(param_2, 5, 0, 4);
    }

    // 0x100bb94b0, 64 bytes, placed by debug map only (low confidence)
    // RenderToTextureHelper::RenderQuad(render::RenderContext&) const
    void RenderToTextureHelper::RenderQuad(RenderContext* param_1) {
        param_1->SetVertexBuffer((VertexBuffer*)&field_88, 20, 0);
        param_1->DrawPrimitives(5, 0, 4);
    }

    // 0x100bb94f0, 832 bytes, placed by debug map only (low confidence)
    // RenderToTextureHelper::CreateRenderingResources()
    void RenderToTextureHelper::CreateRenderingResources() {
        void* pvVar1;
        ImVec4 local_f8[16];
        ImVec4 local_e8[16];
        ImVec4 local_d8[16];
        ImVec4 local_c8[16];
        undefined1 local_b8[12];
        undefined1 local_ac[8];
        undefined1 local_a4[12];
        Point<float> local_98[4];
        undefined1 local_94[12];
        Point<float> local_88[4];
        Point<float> local_84[4];
        undefined1 local_80[16];
        undefined1 local_70[20];
        undefined1 local_5c[28];
        Point<float> local_40[8];
        undefined1 local_38[16];

        new (local_b8) math::ColourHSL(-1.0, 1.0, 1.0);
        new (local_ac) math::ColourHSL(1.0, 1.0, 1.0);
        new ((local_a4 + 4)) math::ColourHSL(-1.0, -1.0, 1.0);
        new (local_94) math::ColourHSL(1.0, -1.0, 1.0);
        pvVar1 = (void*)local_b8->data();
        (&field_8, 48, 0, pvVar1)->Create();
        new (local_b8) math::ColourHSL(-1.0, 1.0, 0.0);
        new (local_ac) math::Point<float>(0.0, 1.0);
        new (local_a4) math::ColourHSL(1.0, 1.0, 0.0);
        math::Point<float>::Point(local_98, 1.0, 1.0);
        new ((local_94 + 4)) math::ColourHSL(-1.0, -1.0, 0.0);
        math::Point<float>::Point(local_84, 0.0, 0.0);
        new ((local_80 + 4)) math::ColourHSL(1.0, -1.0, 0.0);
        new (local_70) math::Point<float>(1.0, 0.0);
        pvVar1 = (void*)local_b8->data();
        (&field_88, 80, 0, pvVar1)->Create();
        new (local_b8) math::ColourHSL(-1.0, 1.0, 0.0);
        new (local_ac) math::Point<float>(0.0, 1.0);
        ImVec4::ImVec4(local_f8, 1.0, 1.0, 1.0, 1.0);
        new (local_a4) math::Float4(local_f8);
        new (local_94) math::ColourHSL(1.0, 1.0, 0.0);
        math::Point<float>::Point(local_88, 1.0, 1.0);
        ImVec4::ImVec4(local_e8, 1.0, 1.0, 1.0, 1.0);
        new (local_80) math::Float4(local_e8);
        new (local_70) math::ColourHSL(-1.0, -1.0, 0.0);
        new ((local_70 + 12)) math::Point<float>(0.0, 0.0);
        ImVec4::ImVec4(local_d8, 1.0, 1.0, 1.0, 1.0);
        new (local_5c) math::Float4(local_d8);
        new ((local_5c + 16)) math::ColourHSL(1.0, -1.0, 0.0);
        math::Point<float>::Point(local_40, 1.0, 0.0);
        ImVec4::ImVec4(local_c8, 1.0, 1.0, 1.0, 1.0);
        new (local_38) math::Float4(local_c8);
        pvVar1 = (void*)local_b8->data();
        (&field_168, 144, 0, pvVar1)->Create();
    }

    // 0x100bb9850, 64 bytes, placed by debug map only (low confidence)
    // RenderToTextureHelper::DestroyRenderingResources()
    void RenderToTextureHelper::DestroyRenderingResources() {
        (&field_8)->Destroy();
        (&field_88)->Destroy();
        (&field_168)->Destroy();
        field_248->Destroy();
    }

} // namespace jag::graphicutils
