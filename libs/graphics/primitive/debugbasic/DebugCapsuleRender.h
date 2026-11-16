// libs/graphics/primitive/debugbasic/DebugCapsuleRender.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.graphics.primitive.debugbasic

namespace jag {
    class DebugCapsuleRender {
    public:
        DebugCapsuleRender(int arg1);
        uint32_t CreateRenderingResources();
        void DestroyRenderingResources();
        void Render(render::RenderContext& renderContext, const render::DrawCallState& drawCallState,
                    const ViewTransforms& viewTransforms,
                    eastl::vector<eastl::pair<DebugCapsule<DebugDataBasic> const*, float>> const& pairs, bool arg5);
        void OnEndFrame();
        ~DebugCapsuleRender();

    private:
        uint8_t _unknown_0[8];
        unsigned long field_8;
        PrimVertPosCol* field_16;
        uint8_t _unknown_24[288];
        InputAssemblerState field_312;
        InputAssemblerState field_504;
        unsigned int field_696;
        unsigned int field_700;
        uint8_t _unknown_704[4];
    };

    // 0x1009bf220
    DebugCapsuleRender::DebugCapsuleRender(int arg1) : Array<PrimVertPosCol>() {
        new (field_312) render::InputAssemblerState();
        new (field_504) render::InputAssemblerState();
        field_696 = 16;
        field_700 = 12;
        unsigned int uVar1 = graphicutils::GetCapsuleVertexCount(16, 12);
        field_24.set_max_size((unsigned long)(arg1 * uVar1), 0);
        set_max_size((unsigned long)uVar1, 0);
        CreateRenderingResources();
    }

    // 0x1009bf360
    uint32_t DebugCapsuleRender::CreateRenderingResources() {
        unsigned int* puVar4;
        unsigned long uVar7;
        unsigned int arg2;

        unsigned int uVar2 = graphicutils::GetCapsuleVertexCount(field_696, field_700);
        unsigned long uVar3 = field_24.end();
        unsigned long uVar8 = 0;
        uVar3 = uVar3 / uVar2;
        unsigned int local_3c = uVar2;
        int local_38 = graphicutils::GetCapsuleTriListIndexCount(field_696, field_700);
        int iVar6 = (int)uVar3;
        Array<unsigned int> local_58((unsigned long)(unsigned int)(local_38 * iVar6));
        if (0 < iVar6) {
            uVar2 = 0;
            uVar7 = 0;
            do {
                puVar4 = &local_58[uVar8];
                graphicutils::CreateCapsuleTriListIndices<unsigned int>(puVar4, uVar2, field_696, field_700);
                uVar7 = uVar7 + 1;
                uVar2 = uVar2 + local_3c;
                uVar8 = (unsigned long)(unsigned int)((int)uVar8 + local_38);
            } while (uVar7 != (uVar3 & 4294967295));
        }
        uVar2 = local_38 * iVar6 * 4;
        auto pvVar5 = local_58.data();
        uint8_t local_31 = field_136.Create(uVar2, 0, pvVar5, 5125);
        int local_40 = iVar6 * 4;
        local_38 = graphicutils::GetCapsuleLineListIndexCount(field_696, field_700);
        local_58 = Array<unsigned int>((unsigned long)(unsigned int)(local_38 * iVar6));
        if (0 < iVar6) {
            uVar2 = 0;
            arg2 = 0;
            uVar8 = 0;
            do {
                puVar4 = &local_58[(unsigned long)uVar2];
                graphicutils::CreateCapsuleLineListIndices<unsigned int>(puVar4, arg2, field_696, field_700);
                uVar8 = uVar8 + 1;
                arg2 = arg2 + local_3c;
                uVar2 = uVar2 + local_38;
            } while (uVar8 != (uVar3 & 4294967295));
        }
        uVar2 = local_40 * local_38;
        pvVar5 = (void*)local_58.data();
        uint8_t bVar1 = field_224.Create(uVar2, 0, pvVar5, 5125);
        bVar1 = local_31 & bVar1;
        uint8_t* puVar9 = field_312;
        new (puVar9) std::__cxx_atomic_base_impl(4);
        render::InputAssemblerState::SetIndexBuffer(puVar9, (unsigned int)&field_136);
        puVar9->SetFlags(1);
        puVar9 = field_504;
        new (puVar9) std::__cxx_atomic_base_impl(1);
        render::InputAssemblerState::SetIndexBuffer(puVar9, (unsigned int)&field_224);
        puVar9->SetFlags(1);
        return bVar1;
    }

    // 0x1009bf8f0
    void DebugCapsuleRender::DestroyRenderingResources() {
        field_504->Destroy();
        field_312->Destroy();
        field_224.Destroy();
        field_136.Destroy();
        field_48.Destroy();
    }

    // 0x1009bf940
    void DebugCapsuleRender::Render(render::RenderContext& renderContext, const render::DrawCallState& drawCallState,
                                    const ViewTransforms& viewTransforms,
                                    eastl::vector<eastl::pair<DebugCapsule<DebugDataBasic> const*, float>> const& pairs,
                                    bool arg5) {
        uint8_t* this_00;
        uint8_t* this_01;
        OpenGLView* this_02;
        unsigned int uVar2;
        int iVar3;
        PrimitiveType primitiveType;
        long* plVar4;
        Vector3T<float>* pVVar5;
        long lVar6;
        void* arg3;
        ShaderProgram* this_05;
        Matrix44T<float>* matrix44;
        VertexDeclaration* pVVar7;
        VertexBuffer* pVVar8;
        int iVar9;
        uint32_t in_register_00000089;
        unsigned long uVar10;
        unsigned long arg1;
        uint64_t uVar11;
        Rect<float> local_f8;
        uint64_t uStack_f0;
        DrawCallState local_e8;
        long* local_98;
        long local_78;
        unsigned long local_70;
        unsigned long local_68;
        int local_5c;
        float local_58;
        uint32_t local_54;
        uint8_t local_50[28];
        unsigned int local_34;

        if (pairs.empty() == '\0') {
            local_54 = (((uint32_t)in_register_00000089 << 8) | (uint8_t)arg5);
            uVar2 = graphicutils::GetCapsuleVertexCount(field_696, field_700);
            uVar10 = (unsigned long)uVar2;
            plVar4 = (long*)pairs.HeapBeginPtr();
            local_98 = (long*)pairs.end();
            this_00 = &field_24;
            local_68 = uVar10;
            if (plVar4 == local_98) {
                iVar9 = 0;
            } else {
                lVar6 = 0;
                iVar9 = 0;
                local_70 = uVar10;
                do {
                    this_02 = (OpenGLView*)*plVar4;
                    local_78 = lVar6;
                    local_5c = iVar9;
                    pVVar5 = (Vector3T<float>*)(*this)[0];
                    local_34 = field_696;
                    local_50._16_4_ = field_700;
                    local_58 = (float)this_02->GetMainRenderTargetScaleFactor();
                    uVar11 = this_02->GetCylinderLength();
                    graphicutils::CreateCapsuleVertices(pVVar5, nullptr, 28, local_34, local_50._16_4_, local_58,
                                                        (float)uVar11);
                    local_34 = *(unsigned int*)(*plVar4 + 32);
                    local_50._16_8_ = plVar4;
                    local_e8.GetTransform();
                    if (0 < (int)local_68) {
                        uVar10 = 0;
                        do {
                            pVVar5 = (Vector3T<float>*)(*this)[uVar10];
                            local_50._0_8_ = *pVVar5 * local_e8;
                            local_50._8_4_ = (uint32_t)uVar11;
                            arg1 = (unsigned long)((int)local_78 + (int)uVar10);
                            ((Vector4T<float>*)(*this_00)[arg1])->SetXYZ(*local_50);
                            math::Colour4FromA8R8G8B8(local_34);
                            uStack_f0 = uVar11;
                            new (local_50) math::Float4(local_f8);
                            this = this;
                            lVar6 = (*this_00)[arg1];
                            *(uint64_t*)(lVar6 + 12) = local_50._0_8_;
                            *(unsigned long*)(lVar6 + 20) =
                                (((uint64_t)local_50._12_4_ << 32) | (uint32_t)local_50._8_4_);
                            uVar10 = uVar10 + 1;
                        } while (local_70 != uVar10);
                    }
                    iVar9 = local_5c + 1;
                    plVar4 = (long*)(local_50._16_8_ + 16);
                    lVar6 = local_78 + local_70;
                } while (plVar4 != local_98);
            }
            this_01 = &field_48;
            iVar3 = (int)local_68;
            arg3 = (void*)this_00->data();
            this_01->Update(0, iVar3 * iVar9 * 28, arg3);
            local_e8 = render::DrawCallState(drawCallState);
            this_05 = ((PrimitiveShaderFamily*)local_e8.Instance())->GetShaderProgram(1);
            ((RenderPipelineState*)local_e8.GetRenderPipelineState())->SetShaderProgram(this_05);
            new (local_50) HashedString("uWorldMat");
            this_05->SetShaderConstMatrix4(local_50, 1, PTR_IDENTITY_100ee6730, 1);
            new (local_50) HashedString("uViewProjMat");
            matrix44 = (Matrix44T<float>*)viewTransforms.GetImmediateThreadPool();
            this_05->SetShaderConstMatrix4(local_50, 1, matrix44, 1);
            if ((char)local_54 == '\0') {
                pVVar7 = (VertexDeclaration*)this_05->second();
                pVVar8 = (VertexBuffer*)this_01->CurrentBuffer();
                field_312->SetVertexStreamData(pVVar7, pVVar8);
                local_e8.SetInputAssemblerState(field_312);
                iVar3 = graphicutils::GetCapsuleTriListIndexCount(field_696, field_700);
            } else {
                pVVar7 = (VertexDeclaration*)this_05->second();
                pVVar8 = (VertexBuffer*)this_01->CurrentBuffer();
                field_504->SetVertexStreamData(pVVar7, pVVar8);
                local_e8.SetInputAssemblerState(field_504);
                iVar3 = graphicutils::GetCapsuleLineListIndexCount(field_696, field_700);
            }
            lVar6 = local_e8.second();
            *(int*)(lVar6 + 12) = iVar3 * iVar9;
            primitiveType = ((CoordMapSquare*)local_e8.GetInputAssemblerState())->GetX();
            lVar6 = local_e8.second();
            renderContext.DrawIndexedPrimitives(&local_e8, primitiveType, *(unsigned int*)(lVar6 + 12), 0);
        }
    }

    // 0x1009bfde0
    void DebugCapsuleRender::OnEndFrame() {
        field_48.RotateBuffers();
    }

    // 0x1009cd030
    DebugCapsuleRender::~DebugCapsuleRender() {
        DestroyRenderingResources();
        field_504->~InputAssemblerState();
        field_312->~InputAssemblerState();
        field_224.~IndexBuffer();
        field_136.~IndexBuffer();
        field_48.~DynamicBuffer();
        field_24.~Array();
    }

} // namespace jag
