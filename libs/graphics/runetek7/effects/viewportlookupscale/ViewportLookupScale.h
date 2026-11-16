// libs/graphics/runetek7/effects/viewportlookupscale/ViewportLookupScale.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class JointPose {
    public:
        JointPose* operator=(const JointPose& data);
        JointPose(const JointPose& jointPose);
        JointPose(JointPose&& jointPose);
        JointPose();

    private:
        uint32_t field_0;
        uint32_t field_4;
        uint32_t field_8;
        uint32_t field_12;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
        uint64_t field_40;
    };

    class ViewportLookupScale {
    public:
        class Data;
        // virtual methods in vtable order
        virtual ~ViewportLookupScale();
        virtual void Initialise();
        virtual void SetShaderConstants(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                        Shader& shader) const;
        virtual void BindConstBufferToShader(const render::ShaderProgram& shaderProgram) const;
        virtual uint32_t CreateRenderingResources();
        virtual void DestroyRenderingResources();
        virtual void OnEndFrame();
        Option<float>* GetData() const;
        void SetShaderConstants(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                const render::ShaderProgram& shaderProgram) const;
        void SetViewportLookupScale(const render::Viewport& viewport, const math::Vector2T<float>& vector2);
        void SetData(const Data& data);
        ViewportLookupScale(RT7Core& rt7Core, int arg2);

    private:
        GraphicsQuality field_8;
        uint8_t _unknown_12[4];
        RT7Core* field_16;
        uint8_t _unknown_24[128];
        unsigned int field_152;
        uint8_t _unknown_156[36];
    };

    class ViewportLookupScale::Data {
    public:
        JointPose* operator=(const Data& data);
        Data();

        uint8_t _unknown_0[40];
    };

    // 0x10091f620
    JointPose* ViewportLookupScale::Data::operator=(const ViewportLookupScale::Data& data) {
        *this = data;
        field_16 = data.field_16;
        field_32 = data.field_32;
        return this;
    }

    // 0x1009236c0
    ViewportLookupScale::~ViewportLookupScale() {
        field_80.~TypedShaderConstBuffer();
        destruct<oldscape::highlight::NpcUID*>();
    }

    // 0x10093d5d0
    ViewportLookupScale::ViewportLookupScale(RT7Core& rt7Core, int arg2) : ShaderEffect(rt7Core), field_152(arg2) {}

    // 0x10093d640
    ViewportLookupScale::Data::Data()
        : ImVec4(1.0, 1.0, 0.0, 0.0), field_16(0.0, 0.0, 0.0, 0.0), field_32(1.0, 1.0, 0.0, 0.0) {}

} // namespace jag::graphics
