// libs/graphics/primitive/debugbasic/DebugAABBRender.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.primitive.debugbasic

#include "DebugAABBRender.h"

namespace jag {
    // 0x1009be7f0
    DebugAABBRender::DebugAABBRender(int arg1) : Array<PrimVertPosCol>() {
        new (field_288) render::InputAssemblerState();
        new (field_480) render::InputAssemblerState();
        set_max_size((unsigned long)(unsigned int)(arg1 << 3), 0);
        CreateRenderingResources();
    }

    // 0x1009bea60
    unsigned long DebugAABBRender::CreateRenderingResources() {
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

    // 0x1009bed00
    void DebugAABBRender::DestroyRenderingResources() {
        field_480->Destroy();
        field_288->Destroy();
        field_24.Destroy();
        field_112.Destroy();
        field_200.Destroy();
    }

    // 0x1009bed50
    void DebugAABBRender::Render(render::RenderContext& renderContext, const render::DrawCallState& drawCallState,
                                 const ViewTransforms& viewTransforms,
                                 eastl::vector<eastl::pair<DebugAABB<DebugDataBasic> const*, float>> const& pairs,
                                 bool arg5) {
        unsigned long arg1;
        unsigned int arg3;
        AABB* this_00;
        uint64_t uVar1;
        PrimitiveType primitiveType;
        Vector3T<float>* pVVar3;
        uint64_t* puVar4;
        long lVar5;
        long lVar6;
        void* arg3_00;
        ShaderProgram* this_04;
        Matrix44T<float>* matrix44;
        VertexDeclaration* pVVar7;
        VertexBuffer* pVVar8;
        int iVar9;
        uint32_t in_register_00000089;
        uint8_t* puVar10;
        int iVar11;
        unsigned long arg1_00;
        float arg3_01;
        float fVar12;
        DrawCallState local_1c8;
        ColourHSL local_e8;
        Rect<float> local_a8;
        float fStack_a0;
        uint32_t uStack_9c;
        unsigned long local_98;
        uint64_t* local_90;
        long local_88;
        uint64_t* local_80;
        uint8_t local_60[24];
        unsigned int local_48;
        float local_44;
        float local_40;
        uint32_t local_3c;
        long local_38;

        if (pairs.empty() == '\0') {
            local_60._16_8_ = this;
            local_3c = (((uint32_t)in_register_00000089 << 8) | (uint8_t)arg5);
            local_1c8 = std::array<PrimVertPosCol, 8ul>();
            lVar5 = 0;
            pVVar3 = &local_1c8[0];
            local_e8 = math::ColourHSL(0.5, 0.5, 0.5);
            graphicutils::CreateCubeVerticesShared(pVVar3, nullptr, 28, local_e8, false);
            puVar4 = (uint64_t*)pairs.HeapBeginPtr();
            local_80 = (uint64_t*)pairs.end();
            if (puVar4 != local_80) {
                lVar6 = 0;
                lVar5 = 0;
                do {
                    local_98 = (unsigned long)((unsigned int)lVar6 & 4294967288);
                    this_00 = (AABB*)*puVar4;
                    local_48 = *(unsigned int*)&this_00->field_32;
                    local_90 = puVar4;
                    local_88 = lVar6;
                    local_38 = lVar5;
                    local_e8 = math::Matrix44T<float>();
                    local_44 = (float)this_00->GetWidth();
                    local_40 = (float)this_00->GetHeight();
                    arg3_01 = (float)this_00->GetLength();
                    fVar12 = local_40;
                    local_e8.SetToDiagonal(local_44, local_40, arg3_01, 1.0);
                    local_60._0_8_ = this_00->GetCentrePos();
                    local_60._8_4_ = fVar12;
                    local_e8.SetPos(*local_60);
                    uVar1 = local_60._16_8_;
                    arg1_00 = 0;
                    do {
                        pVVar3 = &local_1c8[arg1_00];
                        local_60._0_8_ = *pVVar3 * local_e8;
                        arg1 = local_98 + arg1_00;
                        local_60._8_4_ = fVar12;
                        ((Vector4T<float>*)(*uVar1)[arg1])->SetXYZ(*local_60);
                        math::Colour4FromA8R8G8B8(local_48);
                        fStack_a0 = fVar12;
                        uStack_9c = 0;
                        new (local_60) math::Float4(local_a8);
                        lVar5 = (*uVar1)[arg1];
                        *(uint64_t*)(lVar5 + 12) = local_60._0_8_;
                        *(unsigned long*)(lVar5 + 20) = (((uint64_t)local_60._12_4_ << 32) | (uint32_t)local_60._8_4_);
                        arg1_00 = arg1_00 + 1;
                    } while (arg1_00 != 8);
                    lVar5 = local_38 + 1;
                    puVar4 = local_90 + 2;
                    lVar6 = local_88 + 8;
                } while (puVar4 != local_80);
            }
            uVar1 = local_60._16_8_;
            puVar10 = (uint8_t*)(local_60._16_8_ + 24);
            local_38 = lVar5;
            arg3_00 = (void*)local_60._16_8_->data();
            puVar10->Update(0, (int)lVar5 * 224, arg3_00);
            local_1c8 = render::DrawCallState(drawCallState);
            this_04 = ((PrimitiveShaderFamily*)&local_1c8->Instance())->GetShaderProgram(1);
            ((RenderPipelineState*)local_1c8.GetRenderPipelineState())->SetShaderProgram(this_04);
            local_e8 = HashedString("uWorldMat");
            this_04->SetShaderConstMatrix4(&local_e8, 1, PTR_IDENTITY_100ee6730, 1);
            local_e8 = HashedString("uViewProjMat");
            matrix44 = (Matrix44T<float>*)viewTransforms.GetImmediateThreadPool();
            this_04->SetShaderConstMatrix4(&local_e8, 1, matrix44, 1);
            if ((char)local_3c == '\0') {
                pVVar7 = (VertexDeclaration*)this_04->second();
                pVVar8 = (VertexBuffer*)puVar10->CurrentBuffer();
                puVar10 = (uint8_t*)(uVar1 + 288);
                puVar10->SetVertexStreamData(pVVar7, pVVar8);
                iVar11 = 36;
                local_1c8.SetInputAssemblerState(puVar10);
            } else {
                pVVar7 = (VertexDeclaration*)this_04->second();
                pVVar8 = (VertexBuffer*)puVar10->CurrentBuffer();
                puVar10 = (uint8_t*)(uVar1 + 480);
                puVar10->SetVertexStreamData(pVVar7, pVVar8);
                iVar11 = 24;
                local_1c8.SetInputAssemblerState(puVar10);
            }
            iVar9 = (int)local_38;
            lVar5 = local_1c8.second();
            *(int*)(lVar5 + 12) = iVar9 * iVar11;
            primitiveType = ((CoordMapSquare*)local_1c8.GetInputAssemblerState())->GetX();
            lVar5 = local_1c8.second();
            arg3 = *(unsigned int*)(lVar5 + 12);
            lVar5 = local_1c8.second();
            renderContext.DrawIndexedPrimitives(&local_1c8, primitiveType, arg3, *(unsigned int*)(lVar5 + 16));
        }
    }

    // 0x1009bf210
    void DebugAABBRender::OnEndFrame() {
        field_24.RotateBuffers();
    }

} // namespace jag

namespace jag::graphicutils {
    // 0x1009bec70
    void CreateCubeSharedLineListIndices<unsigned short>(unsigned short* arg1, unsigned short arg2) {
        if (arg1 == nullptr) {
            LogAssert("pIndexDataOut",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "createprimitive/CreateCube.h",
                      94, nullptr);
        }
        auto local_50 = math::BOX_EDGE_LINE_INDICES<unsigned short>();
        auto puVar6 = local_50.data();
        uint64_t uVar1 = puVar6[1];
        uint64_t uVar2 = puVar6[2];
        uint64_t uVar3 = puVar6[3];
        uint64_t uVar4 = puVar6[4];
        uint64_t uVar5 = puVar6[5];
        *(uint64_t*)arg1 = *puVar6;
        *(uint64_t*)(arg1 + 4) = uVar1;
        *(uint64_t*)(arg1 + 8) = uVar2;
        *(uint64_t*)(arg1 + 12) = uVar3;
        *(uint64_t*)(arg1 + 16) = uVar4;
        *(uint64_t*)(arg1 + 20) = uVar5;
        long lVar7 = 0;
        do {
            arg1[lVar7] = arg1[lVar7] + arg2;
            lVar7 = lVar7 + 1;
        } while (lVar7 != 24);
    }

} // namespace jag::graphicutils
