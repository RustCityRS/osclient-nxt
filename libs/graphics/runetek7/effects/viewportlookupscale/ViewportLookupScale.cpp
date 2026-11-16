// libs/graphics/runetek7/effects/viewportlookupscale/ViewportLookupScale.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "ViewportLookupScale.h"

namespace jag::graphics {
    // 0x10002d850: ViewportLookupScale::GetData() const has the same machine code as oldscape::option::Option<int>::GetDefaultValue() const

    // 0x10091f350
    void ViewportLookupScale::Initialise() {
        CreateRenderingResources();
    }

    // 0x10091f360
    void ViewportLookupScale::SetShaderConstants(render::DrawCallState& drawCallState,
                                                 render::RenderContext& renderContext, Shader& shader) const {
        RenderContext* renderContext_00;

        auto shaderProgram = shader.GetProgram();
        SetShaderConstants(drawCallState, *renderContext_00, *shaderProgram);
    }

    // 0x10091f390
    void ViewportLookupScale::SetShaderConstants(render::DrawCallState& drawCallState,
                                                 render::RenderContext& renderContext,
                                                 const render::ShaderProgram& shaderProgram) const {
        unsigned int arg1;
        RenderPipelineState* this_01;
        ShaderConstBuffer* shaderConstBuffer;
        HashedString* pHVar2;

        long lVar1 = ((MapArea*)Instance())->GetOrigin();
        if (*(char*)(lVar1 + 120) == '\0') {
            pHVar2 = (HashedString*)graphics::operator*(79);
            shaderProgram.SetShaderConstVector4(pHVar2, &field_32);
            pHVar2 = (HashedString*)graphics::operator*(80);
            shaderProgram.SetShaderConstVector4(pHVar2, &field_48);
            pHVar2 = (HashedString*)graphics::operator*(81);
            shaderProgram.SetShaderConstVector4(pHVar2, &field_64);
        } else {
            this_01 = (RenderPipelineState*)drawCallState.GetRenderPipelineState();
            arg1 = field_152;
            shaderConstBuffer = (ShaderConstBuffer*)field_80.CurrentBuffer();
            this_01->SetPSShaderConstBuffer(arg1, shaderConstBuffer);
        }
    }

    // 0x10091f440
    void ViewportLookupScale::BindConstBufferToShader(const render::ShaderProgram& shaderProgram) const {
        if (BindConstBufferToShader(render::ShaderProgram const&)::viewportLookupConstBlockName == '\0') {
            if (___cxa_guard_acquire(
                    &BindConstBufferToShader(render::ShaderProgram const&)::viewportLookupConstBlockName) != 0) {
                new ((HashedString*)&BindConstBufferToShader(
                    render::ShaderProgram const&)::viewportLookupConstBlockName) HashedString("ViewportLookupScale");
                ___cxa_guard_release(
                    &BindConstBufferToShader(render::ShaderProgram const&)::viewportLookupConstBlockName);
            }
        }
        unsigned int arg1 = field_152;
        unsigned int arg3 = field_80.GetAmplitude();
        shaderProgram.BindConstBufferSlot(
            arg1,
            *((HashedString*)&BindConstBufferToShader(render::ShaderProgram const&)::viewportLookupConstBlockName),
            arg3);
    }

    // 0x10091f4e0
    void ViewportLookupScale::SetViewportLookupScale(const render::Viewport& viewport,
                                                     const math::Vector2T<float>& vector2) {

        ImVec4 local_48(1.0 / (float)viewport.field_8, 1.0 / (float)viewport.field_12, (float)viewport.field_8,
                        (float)viewport.field_12);
        field_32 = local_48;
        local_48 = ImVec4((float)viewport.field_0 * (1.0 / *(float*)vector2),
                          (float)viewport.field_4 * (1.0 / *(float*)(vector2 + 4)),
                          (float)viewport.field_8 * (1.0 / *(float*)vector2),
                          (float)viewport.field_12 * (1.0 / *(float*)(vector2 + 4)));
        field_48 = local_48;
        local_48 =
            ImVec4(1.0 / *(float*)vector2, 1.0 / *(float*)(vector2 + 4), *(float*)vector2, *(float*)(vector2 + 4));
        field_64 = local_48;
        field_80.Update(0, &field_32);
    }

    // 0x10091f5f0
    void ViewportLookupScale::SetData(const ViewportLookupScale::Data& data) {
        field_32 = data;
        field_80.Update(0, &field_32);
    }

    // 0x10091f620: JointPose::operator=(JointPose const&) has the same machine code as ViewportLookupScale::Data::operator=(ViewportLookupScale::Data const&)

    // 0x10091f660
    uint32_t ViewportLookupScale::CreateRenderingResources() {
        uint32_t uVar1 = field_80.Create(1, nullptr);
        if ((char)uVar1 != '\0') {
            field_80.Update(0, &field_32);
        }
        return uVar1;
    }

    // 0x10091f6b0
    void ViewportLookupScale::DestroyRenderingResources() {
        field_80.Destroy();
    }

    // 0x10091f6c0
    void ViewportLookupScale::OnEndFrame() {
        field_80.RotateBuffers();
    }

} // namespace jag::graphics
