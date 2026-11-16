// libs/graphics/primitive/debugbasic/DebugRect2DRender.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.primitive.debugbasic

#include "DebugRect2DRender.h"

namespace jag {
    // 0x1009ca070
    void DebugRect2DRender::OnEndFrame() {
        field_32.RotateBuffers();
        field_28 = 0;
    }

    // 0x1009cadf0
    void DebugRect2DRender::RenderRect2DGroup(
        render::RenderContext& renderContext, const render::DrawCallState& drawCallState, unsigned int arg3,
        unsigned int arg4, const render::Viewport& viewport, const math::Matrix44T<float>& matrix44,
        eastl::vector<eastl::pair<DebugRect2D<DebugDataBasic> const*, float>> const& pairs, bool arg8) {
        unsigned int arg4_00;
        int iVar3;
        long* plVar4;
        float* pfVar5;
        PrimVertPosCol* pPVar6;
        float fVar7;
        uint8_t local_88[16];
        ImVec4 local_78;
        long* local_68;
        unsigned int local_44;
        float local_40;
        float local_38;
        float local_34;

        if (pairs.empty() == '\0') {
            plVar4 = (long*)pairs.HeapBeginPtr();
            local_68 = (long*)pairs.end();
            if (plVar4 != local_68) {
                do {
                    local_44 = *(unsigned int*)(*plVar4 + 20);
                    new (local_88) math::Rect(*(*plVar4));
                    iVar3 = local_88->GetX();
                    local_34 = (float)iVar3;
                    iVar3 = local_88->GetZ();
                    local_38 = (float)iVar3;
                    iVar3 = local_88->GetPos();
                    local_40 = (float)iVar3;
                    iVar3 = local_88->GetLevel();
                    local_78 = ImVec4(local_34, local_38, local_40, (float)iVar3);
                    if (*(char*)(*plVar4 + 16) != '\0') {
                        pfVar5 = (float*)local_78.y();
                        local_34 = (float)arg4 - *pfVar5;
                        local_38 = (float)local_78.MaxV();
                        local_38 = (float)arg4 - local_38;
                        pfVar5 = (float*)local_78.y();
                        *pfVar5 = local_38;
                        local_78.SetBottom(local_34);
                    }
                    local_78.Translate((float)viewport.field_0, (float)viewport.field_4);
                    pPVar6 = (PrimVertPosCol*)(*this)[(long)field_28 << 2];
                    pfVar5 = (float*)local_78.SSOBeginPtr();
                    local_34 = *pfVar5;
                    fVar7 = (float)local_78.MaxV();
                    arg4_00 = local_44;
                    pPVar6->Set(local_34, fVar7, 1.0, local_44);
                    pPVar6 = (PrimVertPosCol*)(*this)[(long)field_28 * 4 + 1];
                    local_34 = (float)local_78.MaxU();
                    fVar7 = (float)local_78.MaxV();
                    pPVar6->Set(local_34, fVar7, 1.0, arg4_00);
                    pPVar6 = (PrimVertPosCol*)(*this)[(long)field_28 * 4 + 2];
                    local_34 = (float)local_78.MaxU();
                    pfVar5 = (float*)local_78.y();
                    pPVar6->Set(local_34, *pfVar5, 1.0, arg4_00);
                    pPVar6 = (PrimVertPosCol*)(*this)[(long)field_28 * 4 + 3];
                    pfVar5 = (float*)local_78.SSOBeginPtr();
                    local_34 = *pfVar5;
                    pfVar5 = (float*)local_78.y();
                    pPVar6->Set(local_34, *pfVar5, 1.0, arg4_00);
                    iVar3 = field_28 + 1;
                    field_28 = iVar3;
                    if (iVar3 == field_24) {
                        RenderBatch(renderContext, drawCallState, matrix44, (long)field_24);
                        field_28 = 0;
                    }
                    plVar4 = plVar4 + 2;
                } while (plVar4 != local_68);
            }
            if (0 < (long)field_28) {
                RenderBatch(renderContext, drawCallState, matrix44, (long)field_28);
                field_28 = 0;
            }
        }
    }

    // 0x1009cb5c0
    void DebugRect2DRender::DestroyRenderingResources() {
        field_208->Destroy();
        field_32.Destroy();
        field_120.Destroy();
    }

    // 0x1009cb630
    DebugRect2DRender::DebugRect2DRender(int arg1) : Array<PrimVertPosCol>(), field_24(arg1), field_28(0) {
        set_max_size((long)field_24 << 2, 0);
        CreateRenderingResources();
    }

    // 0x1009cb6e0
    uint64_t DebugRect2DRender::CreateRenderingResources() {
        if (field_24 < 1) {
            LogAssert("m_MaxQuads > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/primitive/"
                      "debugbasic/DebugRect2DRender.cpp",
                      24, nullptr);
        }
        int iVar1 = field_24;
        Array<unsigned short> local_38;
        graphicutils::CreateQuadListIndices<unsigned short>(local_38, (long)field_24);
        auto arg3 = local_38.data();
        field_120.Create(iVar1 * 12, 0, arg3, 5123);
        uint8_t* this_00 = field_208;
        new (this_00) std::__cxx_atomic_base_impl(4);
        render::InputAssemblerState::SetIndexBuffer(this_00, (unsigned int)&field_120);
        this_00->SetFlags(1);
        return 1;
    }

    // 0x1009cb7f0
    void DebugRect2DRender::RenderBatch(render::RenderContext& renderContext,
                                        const render::DrawCallState& drawCallState,
                                        const math::Matrix44T<float>& matrix44, unsigned long arg4) {
        VertexDeclaration* vertexDeclaration;

        if ((unsigned long)(long)field_24 < arg4) {
            LogAssert("numRects <= (size_t)m_MaxQuads",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/primitive/"
                      "debugbasic/DebugRect2DRender.cpp",
                      121, nullptr);
        }
        auto arg3 = data();
        field_32.Update(0, (int)arg4 * 112, arg3);
        DrawCallState local_80(drawCallState);
        ShaderProgram* this_01 = ((PrimitiveShaderFamily*)local_80.Instance())->GetShaderProgram(1);
        ((RenderPipelineState*)local_80.GetRenderPipelineState())->SetShaderProgram(this_01);
        HashedString local_50("uWorldMat");
        this_01->SetShaderConstMatrix4(&local_50, 1, PTR_IDENTITY_100ee6730, 1);
        local_50 = HashedString("uViewProjMat");
        this_01->SetShaderConstMatrix4(&local_50, 1, matrix44, 1);
        vertexDeclaration = (VertexDeclaration*)this_01->second();
        auto vertexBuffer = field_32.CurrentBuffer();
        field_208->SetVertexStreamData(vertexDeclaration, vertexBuffer);
        local_80.SetInputAssemblerState(field_208);
        PrimitiveType primitiveType = ((CoordMapSquare*)local_80.GetInputAssemblerState())->GetX();
        renderContext.DrawIndexedPrimitives(&local_80, primitiveType, (int)arg4 * 6, 0);
    }

} // namespace jag
