// libs/graphics/primitive/debugbasic/DebugCylinderRender.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.graphics.primitive.debugbasic

namespace jag {
    class DebugCylinderRender {
    public:
        DebugCylinderRender(int arg1);
        uint8_t CreateRenderingResources();
        void DestroyRenderingResources();
        void Render(render::RenderContext& renderContext, const render::DrawCallState& drawCallState,
                    const ViewTransforms& viewTransforms,
                    eastl::vector<eastl::pair<DebugCylinder<DebugDataBasic> const*, float>> const& pairs, bool arg5);
        void OnEndFrame();
        ~DebugCylinderRender();

    private:
        uint8_t _unknown_0[8];
        unsigned long field_8;
        PrimVertPosCol* field_16;
        uint8_t _unknown_24[288];
        InputAssemblerState field_312;
        InputAssemblerState field_504;
        unsigned int field_696;
        uint8_t _unknown_700[4];
    };

    // 0x1009c13a0
    DebugCylinderRender::DebugCylinderRender(int arg1) : Array<PrimVertPosCol>() {
        new (field_312) render::InputAssemblerState();
        new (field_504) render::InputAssemblerState();
        field_696 = 24;
        unsigned int uVar1 = graphicutils::GetCylinderVertexCount(24);
        set_max_size((unsigned long)uVar1, 0);
        graphicutils::CreateCylinderVertices((Vector3T<float>*)(*this)[0], nullptr, 28, field_696, 0.5, 1.0);
        field_24.set_max_size((unsigned long)(uVar1 * arg1), 0);
        CreateRenderingResources();
    }

    // 0x1009c1500
    uint8_t DebugCylinderRender::CreateRenderingResources() {
        int iVar5;
        unsigned int* puVar7;
        unsigned long uVar10;
        unsigned long arg1;
        DebugCylinderRender* local_40;

        unsigned int uVar3 = graphicutils::GetCylinderVertexCount(field_696);
        unsigned long uVar6 = field_24.end();
        unsigned int uVar9 = 0;
        int iVar4 = graphicutils::GetCylinderTriListIndexCount(field_696);
        local_40 = (DebugCylinderRender*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)iVar4);
        int iVar11 = (int)(uVar6 / uVar3);
        Array<unsigned int> local_60((unsigned long)(unsigned int)(iVar4 * iVar11));
        if (0 < iVar11) {
            iVar4 = 0;
            do {
                iVar5 = graphicutils::GetCylinderTriListIndexCount(24);
                puVar7 = &local_60[(unsigned long)(unsigned int)(iVar5 * iVar4)];
                graphicutils::CreateCylinderTriListIndices<unsigned int>(puVar7, uVar9, field_696, false);
                iVar4 = iVar4 + 1;
                uVar9 = uVar9 + uVar3;
            } while (iVar4 != iVar11);
        }
        uVar9 = (int)local_40 * iVar11 * 4;
        unsigned int local_48 = uVar3;
        auto pvVar8 = local_60.data();
        uint8_t local_31 = field_136.Create(uVar9, 0, pvVar8, 5125);
        int local_44 = iVar11 * 4;
        local_40 = this;
        iVar4 = graphicutils::GetCylinderLineListIndexCount(field_696);
        local_60 = Array<unsigned int>((unsigned long)(unsigned int)(iVar4 * iVar11));
        if (0 < iVar11) {
            arg1 = 0;
            uVar9 = 0;
            uVar10 = 0;
            do {
                puVar7 = &local_60[arg1];
                graphicutils::CreateCylinderLineListIndices<unsigned int>(puVar7, uVar9, local_40->field_696);
                uVar10 = uVar10 + 1;
                uVar9 = uVar9 + local_48;
                arg1 = (unsigned long)(unsigned int)((int)arg1 + iVar4);
            } while (uVar10 != (uVar6 / uVar3 & 4294967295));
        }
        DebugCylinderRender* pDVar1 = local_40;
        uint8_t* this_00 = &local_40->field_224;
        uVar3 = local_44 * iVar4;
        pvVar8 = (void*)local_60.data();
        uint8_t bVar2 = this_00->Create(uVar3, 0, pvVar8, 5125);
        bVar2 = local_31 & bVar2;
        uint8_t* puVar12 = pDVar1->field_312;
        new (puVar12) std::__cxx_atomic_base_impl(4);
        render::InputAssemblerState::SetIndexBuffer(puVar12, (unsigned int)&field_136);
        puVar12->SetFlags(1);
        puVar12 = pDVar1->field_504;
        new (puVar12) std::__cxx_atomic_base_impl(1);
        render::InputAssemblerState::SetIndexBuffer(puVar12, (unsigned int)this_00);
        puVar12->SetFlags(1);
        return bVar2;
    }

    // 0x1009c1a70
    void DebugCylinderRender::DestroyRenderingResources() {
        field_504->Destroy();
        field_312->Destroy();
        field_136.Destroy();
        field_48.Destroy();
        field_224.Destroy();
    }

    // 0x1009c1ac0
    void
    DebugCylinderRender::Render(render::RenderContext& renderContext, const render::DrawCallState& drawCallState,
                                const ViewTransforms& viewTransforms,
                                eastl::vector<eastl::pair<DebugCylinder<DebugDataBasic> const*, float>> const& pairs,
                                bool arg5) {
        uint8_t* this_00;
        uint64_t* puVar1;
        Array<PrimVertPosCol>* this_01;
        unsigned int uVar3;
        int iVar4;
        PrimitiveType primitiveType;
        long* plVar5;
        Vector3T<float>* vector3;
        long lVar6;
        void* arg3;
        ShaderProgram* this_04;
        Matrix44T<float>* matrix44;
        VertexDeclaration* pVVar7;
        VertexBuffer* pVVar8;
        uint32_t in_register_00000089;
        int iVar9;
        unsigned long uVar10;
        unsigned long arg1;
        uint32_t uVar11;
        uint32_t uVar12;
        Rect<float> local_f8;
        uint32_t uStack_f0;
        uint32_t uStack_ec;
        DrawCallState local_e8;
        uint64_t local_b8;
        uint64_t uStack_b0;
        unsigned long local_a0;
        long* local_90;
        long* local_88;
        unsigned long local_80;
        long local_60;
        Array<PrimVertPosCol>* local_58;
        unsigned int local_4c;
        int local_48;
        uint32_t local_44;
        HashedString local_40;

        if (pairs.empty() == '\0') {
            local_44 = (((uint32_t)in_register_00000089 << 8) | (uint8_t)arg5);
            uVar3 = graphicutils::GetCylinderVertexCount(field_696);
            uVar10 = (unsigned long)uVar3;
            plVar5 = (long*)pairs.HeapBeginPtr();
            local_88 = (long*)pairs.end();
            local_58 = (Array<PrimVertPosCol>*)&field_24;
            if (plVar5 == local_88) {
                iVar9 = 0;
            } else {
                lVar6 = 0;
                iVar9 = 0;
                local_a0 = uVar10;
                local_80 = uVar10;
                do {
                    this_01 = local_58;
                    local_4c = *(unsigned int*)(*plVar5 + 64);
                    puVar1 = (uint64_t*)*plVar5;
                    local_e8.m_pInputAssemblerState = (InputAssemblerState*)*puVar1;
                    local_e8.m_pRenderPipelineState = &puVar1[1];
                    uVar11 = *(uint32_t*)(puVar1 + 2);
                    uVar12 = *(uint32_t*)((long)puVar1 + 20);
                    local_e8.field_24._0_4_ = *(uint32_t*)(puVar1 + 3);
                    local_e8.field_24._4_4_ = *(uint32_t*)((long)puVar1 + 28);
                    local_e8.field_24._8_8_ = puVar1[4];
                    local_e8.field_24._16_8_ = puVar1[5];
                    local_b8 = puVar1[6];
                    uStack_b0 = puVar1[7];
                    local_e8.m_pOutputMergerState._0_4_ = uVar11;
                    local_e8.m_pOutputMergerState._4_4_ = uVar12;
                    local_90 = plVar5;
                    local_60 = lVar6;
                    local_48 = iVar9;
                    if (0 < (int)local_80) {
                        arg1 = 0;
                        do {
                            vector3 = (Vector3T<float>*)(*this)[arg1];
                            local_40.field_0 = (char*)*vector3 * local_e8;
                            uVar10 = (unsigned long)((int)local_60 + (int)arg1);
                            local_40.field_8._0_4_ = uVar11;
                            ((Vector4T<float>*)(*this_01)[uVar10])->SetXYZ(local_40);
                            math::Colour4FromA8R8G8B8(local_4c);
                            uStack_f0 = uVar11;
                            uStack_ec = uVar12;
                            local_40 = math::Float4(local_f8);
                            this = this;
                            lVar6 = (*this_01)[uVar10];
                            *(char**)(lVar6 + 12) = local_40.field_0;
                            *(unsigned long*)(lVar6 + 20) =
                                (((uint64_t)local_40.field_8._4_4_ << 32) | (uint32_t)((uint32_t)local_40.field_8));
                            arg1 = arg1 + 1;
                            uVar10 = local_a0;
                        } while (local_a0 != arg1);
                    }
                    iVar9 = local_48 + 1;
                    plVar5 = local_90 + 2;
                    lVar6 = local_60 + uVar10;
                    uVar3 = (unsigned int)local_80;
                } while (plVar5 != local_88);
            }
            this_00 = &field_48;
            arg3 = (void*)local_58->data();
            this_00->Update(0, uVar3 * iVar9 * 28, arg3);
            local_e8 = render::DrawCallState(drawCallState);
            this_04 = ((PrimitiveShaderFamily*)local_e8.Instance())->GetShaderProgram(1);
            ((RenderPipelineState*)local_e8.GetRenderPipelineState())->SetShaderProgram(this_04);
            local_40 = HashedString("uWorldMat");
            this_04->SetShaderConstMatrix4(&local_40, 1, PTR_IDENTITY_100ee6730, 1);
            local_40 = HashedString("uViewProjMat");
            matrix44 = (Matrix44T<float>*)viewTransforms.GetImmediateThreadPool();
            this_04->SetShaderConstMatrix4(&local_40, 1, matrix44, 1);
            if ((char)local_44 == '\0') {
                pVVar7 = (VertexDeclaration*)this_04->second();
                pVVar8 = (VertexBuffer*)this_00->CurrentBuffer();
                field_312->SetVertexStreamData(pVVar7, pVVar8);
                local_e8.SetInputAssemblerState(field_312);
                iVar4 = graphicutils::GetCylinderTriListIndexCount(field_696);
            } else {
                pVVar7 = (VertexDeclaration*)this_04->second();
                pVVar8 = (VertexBuffer*)this_00->CurrentBuffer();
                field_504->SetVertexStreamData(pVVar7, pVVar8);
                local_e8.SetInputAssemblerState(field_504);
                iVar4 = graphicutils::GetCylinderLineListIndexCount(field_696);
            }
            lVar6 = local_e8.second();
            *(int*)(lVar6 + 12) = iVar4 * iVar9;
            primitiveType = ((CoordMapSquare*)local_e8.GetInputAssemblerState())->GetX();
            lVar6 = local_e8.second();
            uVar3 = *(unsigned int*)(lVar6 + 12);
            lVar6 = local_e8.second();
            renderContext.DrawIndexedPrimitives(&local_e8, primitiveType, uVar3, *(unsigned int*)(lVar6 + 16));
        }
    }

    // 0x1009c1e90
    void DebugCylinderRender::OnEndFrame() {
        field_48.RotateBuffers();
    }

    // 0x1009cceb0
    DebugCylinderRender::~DebugCylinderRender() {
        DestroyRenderingResources();
        field_504->~InputAssemblerState();
        field_312->~InputAssemblerState();
        field_224.~IndexBuffer();
        field_136.~IndexBuffer();
        field_48.~DynamicBuffer();
        field_24.~Array();
    }

} // namespace jag
