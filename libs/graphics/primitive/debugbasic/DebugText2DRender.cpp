// libs/graphics/primitive/debugbasic/DebugText2DRender.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.primitive.debugbasic

#include "DebugText2DRender.h"

namespace jag {
    // 0x103bc20a0, 48 bytes, __common; zero-initialised
    DebugText2DRender::m_debugText2DRenderCallback;

    // 0x103bc20d0, 48 bytes, __common; zero-initialised
    DebugText2DRender::m_debugText2DRenderGuiRenderCallback;

    // 0x1009c9270, 16 bytes, complete-object constructor, placed by class name and debug map
    // DebugText2DRender::DebugText2DRender(): jumps straight to the base-object constructor

    // 0x1009ca090, 16 bytes, placed by class name
    // DebugText2DRender::OnEndFrame()
    void DebugText2DRender::OnEndFrame() {
        RotateBuffers();
    }

    // 0x1009cb120, 1056 bytes, placed by class name
    // DebugText2DRender::Render(render::RenderContext&, render::DrawCallState const&, render::Viewport const&, math::Matrix44T<float> const&, eastl::vector<eastl::pair<DebugText2D<DebugDataBasic> const*, float>, eastl::allocator> const&, bool)
    void DebugText2DRender::Render(RenderContext* param_1, DrawCallState* param_2, Viewport* param_3,
                                   Matrix44T* param_4, vector* param_5, bool param_6) {
        HashedString* this;
        float* pfVar1;
        char cVar2;
        bool bVar3;
        undefined8* puVar4;
        undefined8 uVar5;
        char* pcVar6;
        PrimitiveShaderFamily* pPVar7;
        ShaderProgram* this_01;
        InputAssemblerState* pIVar8;
        VertexDeclaration* pVVar9;
        VertexBuffer* pVVar10;
        IndexBuffer* pIVar11;
        RenderPipelineState* pRVar12;
        long lVar13;
        ResourceDataT<unsigned char const>* this_02;
        DrawCallState* pDVar15;
        undefined7 in_register_00000089;
        undefined1 local_128[80];
        Vector4T<float> local_d8[24];
        void* local_c0[3];
        DrawCallState local_a8;
        Matrix44T* local_78;
        undefined8* local_70;
        undefined4 local_58;
        float local_54;
        IndexBuffer* local_50;
        undefined8 local_40;
        uint local_34;

        this_02 = (ResourceDataT<unsigned char const>*)CONCAT71(in_register_00000089, param_6);
        local_78 = param_4;
        cVar2 = this_02->empty();
        if (cVar2 == '\0') {
            math::operator*((math*)local_128, (Matrix44T*)PTR_IDENTITY_100ee6730, (Matrix44T*)param_5);
            math::Vector4T<float>::Vector4T(local_d8);
            puVar4 = (undefined8*)this_02->HeapBeginPtr();
            local_70 = (undefined8*)this_02->end();
            if (puVar4 != local_70) {
                local_50 = (IndexBuffer*)(param_1->m_immediateContext + 72);
                this = (HashedString*)(local_128 + 64);
                do {
                    pDVar15 = &local_a8;
                    pfVar1 = (float*)*puVar4;
                    local_d8->Set((float)*(int*)&local_78->field_8 * *pfVar1,
                                  (float)*(int*)&local_78->field_12 * pfVar1[1], 0.0, 1.0);
                    math::Vector4T<float>::operator*=(local_d8, (Matrix44T*)local_128);
                    new (&local_58) math::ColourStorage8888<math::ARGB8StorageLayout>((uint)pfVar1[10]);
                    math::ColourStorage8888<math::RGBA8StorageLayout>::ColourStorage8888<math::ARGB8StorageLayout>(
                        (ColourStorage8888<math::RGBA8StorageLayout>*)pDVar15, local_58);
                    local_34 = pDVar15->GetX();
                    bVar3 = pDVar15->operator_cast_to_bool();
                    if (bVar3) {
                        pcVar6 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        this_02 = (ResourceDataT<unsigned char const>*)&m_debugText2DRenderCallback;
                        std::function<void(render::DrawCallState_const&, math::Vector4T<float> const&, char const*,
                                           unsigned int)>::
                        operator()((function<void(render::DrawCallState_const&, math::Vector4T<float> const&,
                                                  char const*, unsigned int)>*)&m_debugText2DRenderCallback,
                                   (DrawCallState*)param_3, (Vector4T*)local_d8, pcVar6, local_34);
                    } else {
                        cVar2 = local_50->IsCreated();
                        if (cVar2 == '\0') {
                            new (&local_a8) Array<unsigned short, eastl::allocator>();
                            graphicutils::CreateQuadListIndices<unsigned short>((Array*)&local_a8, 1024);
                            uVar5 = local_a8.data();
                            local_50->Create(12288, 0, uVar5, 5123);
                            local_a8.~Array();
                        }
                        local_40 = 0;
                        render::DynamicBuffer<render::VertexBuffer>::MapWrite(local_c0, param_1, 4, 0, 114688, 0);
                        if (local_c0[0] != (void*)0) {
                            local_40 = CONCAT44(local_40._4_4_, *pfVar1);
                            local_54 = pfVar1[1];
                            pcVar6 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                            local_40 = stb_easy_font_print((float)local_40, local_54, pcVar6, (uchar*)&local_34,
                                                           local_c0[0], 0);
                        }
                        cVar2 = render::DynamicBuffer<render::VertexBuffer>::Unmap();
                        if (cVar2 == '\0') {
                            DestroyRenderingResources((DebugText2DRender*)param_1);
                        } else {
                            pPVar7 = (PrimitiveShaderFamily*)param_1->Instance();
                            this_01 = (ShaderProgram*)pPVar7->GetShaderProgram(1);
                            new (&local_a8) render::DrawCallState(param_3);
                            pIVar8 = (InputAssemblerState*)local_a8.GetInputAssemblerState();
                            pIVar8->SetFlags(1);
                            pIVar8 = (InputAssemblerState*)local_a8.GetInputAssemblerState();
                            pVVar9 = (VertexDeclaration*)this_01->second();
                            pVVar10 = (VertexBuffer*)param_1->CurrentBuffer();
                            pIVar8->SetVertexStreamData(pVVar9, pVVar10);
                            pIVar11 = (IndexBuffer*)local_a8.GetInputAssemblerState();
                            render::InputAssemblerState::SetIndexBuffer(pIVar11, (uint)local_50);
                            pDVar15 = &local_a8;
                            pRVar12 = (RenderPipelineState*)pDVar15->GetRenderPipelineState();
                            lVar13 = pDVar15->Instance();
                            pRVar12->SetRasteriserState((RasteriserState*)(lVar13 + 1272));
                            pRVar12 = (RenderPipelineState*)local_a8.GetRenderPipelineState();
                            pRVar12->SetShaderProgram(this_01);
                            HashedString::HashedString(this, "uWorldMat");
                            this_01->SetShaderConstMatrix4(this, 1, PTR_IDENTITY_100ee6730, 1);
                            HashedString::HashedString(this, "uViewProjMat");
                            this_01->SetShaderConstMatrix4(this, 1, local_128, 1);
                            param_2->DrawIndexedPrimitives(&local_a8, 4, (int)local_40 * 6, 0);
                            local_a8.~DrawCallState();
                        }
                        this_02 = (ResourceDataT<unsigned char const>*)local_c0;
                        this_02->~ResourceDataT();
                    }
                    puVar4 = puVar4 + 2;
                } while (puVar4 != local_70);
            }
            bVar3 = this_02->operator_cast_to_bool();
            if (bVar3) {
                std::function<void()>::operator()((function<void()>*)&m_debugText2DRenderGuiRenderCallback);
            }
        }
    }

    // 0x1009cb600, 48 bytes, placed by class name
    // DebugText2DRender::DestroyRenderingResources()
    void DebugText2DRender::DestroyRenderingResources() {
        Destroy();
        (&field_88)->Destroy();
    }

    // 0x1009cb9b0, 48 bytes, base-object constructor, placed by class name
    // DebugText2DRender::DebugText2DRender()
    void DebugText2DRender::DebugText2DRender() {
        new (this) render::DynamicBuffer<render::VertexBuffer>();
        new (&field_88) render::IndexBuffer();
    }

} // namespace jag
