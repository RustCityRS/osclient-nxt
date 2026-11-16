// libs/graphics/primitive/debugbasic/DebugOBBRender.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.primitive.debugbasic

#include "DebugOBBRender.h"

namespace jag {
    // 0x1009c47a0
    DebugOBBRender::DebugOBBRender(int arg1) : Array<PrimVertPosCol>() {
        new (field_288) render::InputAssemblerState();
        new (field_480) render::InputAssemblerState();
        set_max_size((unsigned long)(unsigned int)(arg1 << 3), 0);
        CreateRenderingResources();
    }

    // 0x1009c4890
    unsigned long DebugOBBRender::CreateRenderingResources() {
        unsigned short* puVar4;
        unsigned long uVar6;
        unsigned short uVar7;
        Array<unsigned short>* unaff_R15;

        unsigned long uVar3 = end();
        uVar3 = uVar3 >> 3;
        int iVar1 = (int)uVar3;
        Array<unsigned short> local_50((unsigned long)(unsigned int)(iVar1 * 36));
        if (0 < iVar1) {
            uVar6 = 0;
            unaff_R15 = &local_50;
            uVar7 = 0;
            do {
                puVar4 = (unsigned short*)(*unaff_R15)[uVar6 & 4294967295];
                graphicutils::CreateCubeSharedTriListIndices<unsigned short>(puVar4, uVar7, false);
                uVar7 = uVar7 + 8;
                uVar6 = uVar6 + 36;
            } while ((uVar3 & 4294967295) * 36 != uVar6);
        }
        auto pvVar5 = local_50.data();
        uint8_t local_31 = field_112.Create(iVar1 * 72, 0, pvVar5, 5123);
        local_50 = Array<unsigned short>((unsigned long)(unsigned int)(iVar1 * 24));
        if (0 < iVar1) {
            unaff_R15 = nullptr;
            uVar7 = 0;
            do {
                puVar4 = &local_50[(unsigned long)unaff_R15 & 4294967295];
                graphicutils::CreateCubeSharedLineListIndices<unsigned short>(puVar4, uVar7);
                uVar7 = uVar7 + 8;
                unaff_R15 = unaff_R15 + 24;
            } while ((Array<unsigned short>*)((uVar3 & 4294967295) * 24) != unaff_R15);
        }
        pvVar5 = (void*)local_50.data();
        uint8_t bVar2 = field_200.Create(iVar1 * 48, 0, pvVar5, 5123);
        bVar2 = local_31 & bVar2;
        uint8_t* puVar8 = field_288;
        new (puVar8) std::__cxx_atomic_base_impl(4);
        render::InputAssemblerState::SetIndexBuffer(puVar8, (unsigned int)&field_112);
        puVar8->SetFlags(1);
        puVar8 = field_480;
        new (puVar8) std::__cxx_atomic_base_impl(1);
        render::InputAssemblerState::SetIndexBuffer(puVar8, (unsigned int)&field_200);
        puVar8->SetFlags(1);
        return bVar2 & 4294967295;
    }

    // 0x1009c4a80
    void DebugOBBRender::DestroyRenderingResources() {
        field_480->Destroy();
        field_288->Destroy();
        field_24.Destroy();
        field_200.Destroy();
        field_112.Destroy();
    }

    // 0x1009c4ad0
    void DebugOBBRender::Render(render::RenderContext& renderContext, const render::DrawCallState& drawCallState,
                                const ViewTransforms& viewTransforms,
                                eastl::vector<eastl::pair<DebugOBB<DebugDataBasic> const*, float>> const& pairs,
                                bool arg5) {
        uint8_t* this_00;
        unsigned long arg1;
        unsigned int arg3;
        DebugOBBRender* pDVar1;
        int iVar3;
        PrimitiveType primitiveType;
        Vector3T<float>* pVVar4;
        uint64_t* puVar5;
        long lVar6;
        long lVar7;
        void* arg3_00;
        ShaderProgram* this_04;
        Matrix44T<float>* matrix44;
        VertexDeclaration* pVVar8;
        VertexBuffer* pVVar9;
        int iVar10;
        uint32_t in_register_00000089;
        unsigned long arg1_00;
        DrawCallState local_1c8;
        ColourHSL local_e8;
        Rect<float> local_a8;
        uint32_t uStack_a0;
        uint32_t uStack_9c;
        uint8_t local_98[24];
        uint64_t* local_80;
        long local_78;
        uint64_t* local_70;
        vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>* local_58;
        float local_48;
        uint32_t local_44;
        long local_40;

        DebugOBBRender* local_38 = this;
        if (pairs.empty() == '\0') {
            local_44 = (((uint32_t)in_register_00000089 << 8) | (uint8_t)arg5);
            local_1c8 = std::array<PrimVertPosCol, 8ul>();
            lVar6 = 0;
            pVVar4 = &local_1c8[0];
            local_e8 = math::ColourHSL(1.0, 1.0, 1.0);
            graphicutils::CreateCubeVerticesShared(pVVar4, nullptr, 28, local_e8, false);
            puVar5 = (uint64_t*)pairs.HeapBeginPtr();
            local_70 = (uint64_t*)pairs.end();
            pDVar1 = local_38;
            if (puVar5 != local_70) {
                lVar7 = 0;
                lVar6 = 0;
                local_58 = (vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>*)pairs;
                do {
                    local_98._16_8_ = (uint64_t)((unsigned int)lVar7 & 4294967288);
                    local_48 = ((OBB*)*puVar5)[1].field_8;
                    local_80 = puVar5;
                    local_78 = lVar7;
                    local_40 = lVar6;
                    local_e8 = (*puVar5)->GetTransform();
                    arg1_00 = 0;
                    do {
                        pVVar4 = &local_1c8[arg1_00];
                        local_98._0_8_ = *pVVar4 * local_e8;
                        arg1 = local_98._16_8_ + arg1_00;
                        local_98._8_4_ = 1065353216;
                        ((Vector4T<float>*)(*pDVar1)[arg1])->SetXYZ(*local_98);
                        math::Colour4FromA8R8G8B8((unsigned int)local_48);
                        uStack_a0 = 1065353216;
                        uStack_9c = 0;
                        new (local_98) math::Float4(local_a8);
                        lVar6 = (*pDVar1)[arg1];
                        *(uint64_t*)(lVar6 + 12) = local_98._0_8_;
                        *(unsigned long*)(lVar6 + 20) = (((uint64_t)local_98._12_4_ << 32) | (uint32_t)local_98._8_4_);
                        arg1_00 = arg1_00 + 1;
                    } while (arg1_00 != 8);
                    lVar6 = local_40 + 1;
                    puVar5 = local_80 + 2;
                    lVar7 = local_78 + 8;
                } while (puVar5 != local_70);
                pairs = (vector<eastl::pair<DebugOBB<DebugDataBasic> const*, float>>*)local_58;
            }
            pDVar1 = local_38;
            this_00 = &local_38->field_24;
            local_40 = lVar6;
            iVar3 = pairs.size();
            arg3_00 = (void*)pDVar1->data();
            this_00->Update(0, iVar3 * 224, arg3_00);
            local_1c8 = render::DrawCallState(drawCallState);
            this_04 = ((PrimitiveShaderFamily*)&local_1c8->Instance())->GetShaderProgram(1);
            ((RenderPipelineState*)local_1c8.GetRenderPipelineState())->SetShaderProgram(this_04);
            local_e8 = HashedString("uWorldMat");
            this_04->SetShaderConstMatrix4(&local_e8, 1, PTR_IDENTITY_100ee6730, 1);
            local_e8 = HashedString("uViewProjMat");
            matrix44 = (Matrix44T<float>*)viewTransforms.GetImmediateThreadPool();
            this_04->SetShaderConstMatrix4(&local_e8, 1, matrix44, 1);
            if ((char)local_44 == '\0') {
                pVVar8 = (VertexDeclaration*)this_04->second();
                pVVar9 = (VertexBuffer*)this_00->CurrentBuffer();
                pDVar1->field_288->SetVertexStreamData(pVVar8, pVVar9);
                iVar3 = 36;
                local_1c8.SetInputAssemblerState(pDVar1->field_288);
            } else {
                pVVar8 = (VertexDeclaration*)this_04->second();
                pVVar9 = (VertexBuffer*)this_00->CurrentBuffer();
                pDVar1->field_480->SetVertexStreamData(pVVar8, pVVar9);
                iVar3 = 24;
                local_1c8.SetInputAssemblerState(pDVar1->field_480);
            }
            iVar10 = (int)local_40;
            lVar6 = local_1c8.second();
            *(int*)(lVar6 + 12) = iVar10 * iVar3;
            primitiveType = ((CoordMapSquare*)local_1c8.GetInputAssemblerState())->GetX();
            lVar6 = local_1c8.second();
            arg3 = *(unsigned int*)(lVar6 + 12);
            lVar6 = local_1c8.second();
            renderContext.DrawIndexedPrimitives(&local_1c8, primitiveType, arg3, *(unsigned int*)(lVar6 + 16));
        }
    }

    // 0x1009c4e90
    void DebugOBBRender::OnEndFrame() {
        field_24.RotateBuffers();
    }

} // namespace jag
