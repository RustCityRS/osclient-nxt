// libs/graphics/primitive/debugbasic/DebugText2DRender.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.primitive.debugbasic

#include "DebugText2DRender.h"

namespace jag {
    // 0x103bc20a0
    uint8_t DebugText2DRender::m_debugText2DRenderCallback[48];

    // 0x103bc20d0
    uint8_t DebugText2DRender::m_debugText2DRenderGuiRenderCallback[48];

    // 0x1009ca090
    void DebugText2DRender::OnEndFrame() {
        RotateBuffers();
    }

    // 0x1009cb120
    void DebugText2DRender::Render(render::RenderContext& renderContext, const render::DrawCallState& drawCallState,
                                   const render::Viewport& viewport, const math::Matrix44T<float>& matrix44,
                                   eastl::vector<eastl::pair<DebugText2D<DebugDataBasic> const*, float>> const& pairs,
                                   bool arg6) {
        float* pfVar1;
        uint64_t* puVar3;
        void* arg3;
        char* pcVar4;
        ShaderProgram* this_01;
        InputAssemblerState* pIVar5;
        VertexDeclaration* vertexDeclaration;
        VertexBuffer* vertexBuffer;
        RenderPipelineState* pRVar6;
        long lVar7;
        DrawCallState* pDVar8;
        uint64_t in_register_00000089;
        Matrix44T<float> local_128;
        HashedString local_e8;
        Vector4T<float> local_d8;
        ReturnValue local_c0;
        DrawCallState local_a8;
        uint64_t* local_70;
        unsigned int local_58;
        float local_54;
        IndexBuffer* local_50;
        uint64_t local_40;
        unsigned int local_34;

        ReturnValue* this_02 = (ReturnValue*)(((uint64_t)in_register_00000089 << 8) | (uint8_t)arg6);
        if (!(this_02->empty())) {
            local_128** PTR_IDENTITY_100ee6730;
            local_d8 = math::Vector4T();
            puVar3 = (uint64_t*)this_02->HeapBeginPtr();
            local_70 = (uint64_t*)this_02->end();
            if (puVar3 != local_70) {
                local_50 = (IndexBuffer*)(renderContext.m_immediateContext + 72);
                do {
                    pDVar8 = &local_a8;
                    pfVar1 = (float*)*puVar3;
                    local_d8.Set((float)*(int*)(matrix44 + 8) * *pfVar1, (float)*(int*)(matrix44 + 12) * pfVar1[1], 0.0,
                                 1.0);
                    local_d8 *= &local_128;
                    new (&local_58) math::ColourStorage8888((unsigned int)pfVar1[10]);
                    pDVar8->ColourStorage8888<math::ARGB8StorageLayout>(
                        (ColourStorage8888<math::ARGB8StorageLayout>*)(unsigned long)local_58);
                    local_34 = pDVar8->GetX();
                    if (!(pDVar8->operator_cast_to_bool())) {
                        if (!(local_50->IsCreated())) {
                            local_a8 = Array<unsigned short>();
                            graphicutils::CreateQuadListIndices<unsigned short>(local_a8, 1024);
                            arg3 = (void*)local_a8.data();
                            local_50->Create(12288, 0, arg3, 5123);
                        }
                        local_40 = 0;
                        local_c0 = renderContext.MapWrite(4, 0, 114688, 0);
                        if (local_c0[0] != (ReturnValue)0) {
                            local_40 = (((uint64_t)local_40._4_4_ << 32) | (uint32_t)(*pfVar1));
                            local_54 = pfVar1[1];
                            pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                            local_40 = stb_easy_font_print((float)local_40, local_54, pcVar4, (unsigned char*)&local_34,
                                                           (void*)local_c0[0], 0);
                        }
                        if (!(renderContext.Unmap())) {
                            DestroyRenderingResources((DebugText2DRender*)renderContext);
                        } else {
                            this_01 = ((PrimitiveShaderFamily*)renderContext.Instance())->GetShaderProgram(1);
                            local_a8 = render::DrawCallState(viewport);
                            pIVar5 = (InputAssemblerState*)local_a8.GetInputAssemblerState();
                            pIVar5->SetFlags(1);
                            pIVar5 = (InputAssemblerState*)local_a8.GetInputAssemblerState();
                            vertexDeclaration = (VertexDeclaration*)this_01->second();
                            vertexBuffer = (VertexBuffer*)renderContext.CurrentBuffer();
                            pIVar5->SetVertexStreamData(vertexDeclaration, vertexBuffer);
                            render::InputAssemblerState::SetIndexBuffer((IndexBuffer*)local_a8.GetInputAssemblerState(),
                                                                        (unsigned int)local_50);
                            pDVar8 = &local_a8;
                            pRVar6 = (RenderPipelineState*)pDVar8->GetRenderPipelineState();
                            lVar7 = pDVar8->Instance();
                            pRVar6->SetRasteriserState((lVar7 + 1272));
                            pRVar6 = (RenderPipelineState*)local_a8.GetRenderPipelineState();
                            pRVar6->SetShaderProgram(this_01);
                            local_e8 = HashedString("uWorldMat");
                            this_01->SetShaderConstMatrix4(&local_e8, 1, PTR_IDENTITY_100ee6730, 1);
                            local_e8 = HashedString("uViewProjMat");
                            this_01->SetShaderConstMatrix4(&local_e8, 1, &local_128, 1);
                            drawCallState.DrawIndexedPrimitives(&local_a8, 4, (int)local_40 * 6, 0);
                        }
                        this_02 = &local_c0;
                        this_02->~ResourceDataT();
                    } else {
                        pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        this_02 = (ReturnValue*)&m_debugText2DRenderCallback;
                        std::function<void(render::DrawCallState const&, math::Vector4T<float> const&, char const*,
                                           unsigned int)>::
                        operator()((function<void(render::DrawCallState const&, math::Vector4T<float> const&,
                                                  char const*, unsigned int)>*)&m_debugText2DRenderCallback,
                                   (DrawCallState*)viewport, &local_d8, pcVar4, local_34);
                    }
                    puVar3 = puVar3 + 2;
                } while (puVar3 != local_70);
            }
            if (this_02->operator_cast_to_bool()) {
                std::function<void()>::operator()((function<void()>*)&m_debugText2DRenderGuiRenderCallback);
            }
        }
    }

    // 0x1009cb600
    void DebugText2DRender::DestroyRenderingResources() {
        Destroy();
        field_88.Destroy();
    }

    // 0x1009cb9b0
    DebugText2DRender::DebugText2DRender() : render::DynamicBuffer<render::VertexBuffer>() {}

} // namespace jag
