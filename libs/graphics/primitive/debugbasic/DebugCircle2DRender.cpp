// libs/graphics/primitive/debugbasic/DebugCircle2DRender.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.primitive.debugbasic

#include "DebugCircle2DRender.h"

namespace jag {
    // 0x1009bfdf0
    DebugCircle2DRender::DebugCircle2DRender(int arg1) : Array<PrimVertPosCol>(), field_24(arg1), field_28(0) {
        set_max_size((long)field_24 * 17, 0);
        CreateRenderingResources();
    }

    // 0x1009bfee0
    uint64_t DebugCircle2DRender::CreateRenderingResources() {
        short sVar1;
        short* psVar2;
        uint16_t* puVar3;
        unsigned long uVar4;
        short sVar6;
        uint64_t in_RCX;
        unsigned int uVar7;
        unsigned long uVar8;
        int iVar12;
        unsigned long local_58;
        long local_48;
        int local_3c;
        int local_38;
        int local_34;

        if (field_24 < 1) {
            LogAssert("m_MaxCircles > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/primitive/"
                      "debugbasic/DebugCircle2DRender.cpp",
                      23, nullptr);
        }
        int iVar11 = field_24;
        Array<unsigned short> local_70((long)iVar11 * 48);
        unsigned long uVar9 = 0;
        if (0 < field_24) {
            uVar4 = (((uint64_t)((int64_t)((unsigned long)in_RCX >> 16)) << 16) | (uint16_t)2);
            uVar8 = 0;
            local_48 = (long)iVar11;
            do {
                iVar11 = (int)uVar9;
                sVar1 = (short)uVar8 * 17;
                local_3c = (int)uVar8 * 17 + 1;
                local_38 = (int)uVar8 * 17 + 16;
                iVar12 = 0;
                local_34 = (int)uVar4;
                uVar4 = uVar4 & 4294967295;
                local_58 = uVar8;
                do {
                    if ((short)iVar12 == 45) {
                        psVar2 = &local_70[(unsigned long)(unsigned int)(iVar11 + iVar12)];
                        *psVar2 = sVar1;
                        puVar3 = &local_70[(unsigned long)(iVar11 + iVar12 + 1)];
                        *puVar3 = (short)local_3c;
                        psVar2 = &local_70[(unsigned long)(iVar11 + iVar12 + 2)];
                        sVar6 = (short)local_38;
                    } else {
                        psVar2 = &local_70[(unsigned long)(unsigned int)(iVar11 + iVar12)];
                        *psVar2 = sVar1;
                        psVar2 = &local_70[(unsigned long)(iVar11 + iVar12 + 1)];
                        *psVar2 = (short)uVar4;
                        psVar2 = &local_70[(unsigned long)(iVar11 + iVar12 + 2)];
                        sVar6 = (short)uVar4 - 1;
                    }
                    *psVar2 = sVar6;
                    iVar12 = iVar12 + 3;
                    uVar4 = (unsigned long)((int)uVar4 + 1);
                } while ((short)iVar12 != 48);
                uVar7 = (int)local_58 + 1;
                uVar8 = (unsigned long)uVar7;
                uVar4 = (unsigned long)(local_34 + 17);
                uVar9 = (unsigned long)(unsigned int)(iVar11 + iVar12);
            } while ((int)(uVar7 & 65535) < field_24);
            uVar9 = (unsigned long)(unsigned int)(iVar11 + iVar12);
            iVar11 = (int)local_48;
            this = this;
        }
        uVar4 = local_70.end();
        if (uVar4 != uVar9) {
            LogAssert("shortOffset == circleIndexData.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/primitive/"
                      "debugbasic/DebugCircle2DRender.cpp",
                      49, nullptr);
        }
        auto arg3 = local_70.data();
        field_120.Create(iVar11 * 96, 0, arg3, 5123);
        uint8_t* puVar10 = &field_400;
        puVar10->set_max_size(17, 0);
        Point<float>* pPVar5 = (Point<float>*)(*puVar10)[0];
        new (pPVar5) math::Point(0.0, 0.0);
        pPVar5 = (Point<float>*)(*puVar10)[1];
        new (pPVar5) math::Point(0.0, 1.0);
        pPVar5 = (Point<float>*)(*puVar10)[2];
        new (pPVar5) math::Point(0.383, 0.924);
        pPVar5 = (Point<float>*)(*puVar10)[3];
        new (pPVar5) math::Point(0.707, 0.707);
        pPVar5 = (Point<float>*)(*puVar10)[4];
        new (pPVar5) math::Point(0.924, 0.383);
        pPVar5 = (Point<float>*)(*puVar10)[5];
        new (pPVar5) math::Point(1.0, 0.0);
        pPVar5 = (Point<float>*)(*puVar10)[6];
        new (pPVar5) math::Point(0.924, -0.383);
        pPVar5 = (Point<float>*)(*puVar10)[7];
        new (pPVar5) math::Point(0.707, -0.707);
        pPVar5 = (Point<float>*)(*puVar10)[8];
        new (pPVar5) math::Point(0.383, -0.924);
        pPVar5 = (Point<float>*)(*puVar10)[9];
        new (pPVar5) math::Point(0.0, -1.0);
        pPVar5 = (Point<float>*)(*puVar10)[10];
        new (pPVar5) math::Point(-0.383, -0.924);
        pPVar5 = (Point<float>*)(*puVar10)[11];
        new (pPVar5) math::Point(-0.707, -0.707);
        pPVar5 = (Point<float>*)(*puVar10)[12];
        new (pPVar5) math::Point(-0.924, -0.383);
        pPVar5 = (Point<float>*)(*puVar10)[13];
        new (pPVar5) math::Point(-1.0, 0.0);
        pPVar5 = (Point<float>*)(*puVar10)[14];
        new (pPVar5) math::Point(-0.924, 0.383);
        pPVar5 = (Point<float>*)(*puVar10)[15];
        new (pPVar5) math::Point(-0.707, 0.707);
        pPVar5 = (Point<float>*)(*puVar10)[16];
        new (pPVar5) math::Point(-0.383, 0.924);
        puVar10 = field_208;
        new (puVar10) std::__cxx_atomic_base_impl(4);
        render::InputAssemblerState::SetIndexBuffer(puVar10, (unsigned int)&field_120);
        puVar10->SetFlags(1);
        return 1;
    }

    // 0x1009c0550
    void DebugCircle2DRender::DestroyRenderingResources() {
        field_32.Destroy();
        field_120.Destroy();
        field_208->Destroy();
    }

    // 0x1009c0590
    void DebugCircle2DRender::RenderCircle2DGroup(
        render::RenderContext& renderContext, const render::DrawCallState& drawCallState, unsigned int arg3,
        unsigned int arg4, const render::Viewport& viewport, const math::Matrix44T<float>& matrix44,
        eastl::vector<eastl::pair<DebugCircle2D<DebugDataBasic> const*, float>> const& pairs) {
        uint8_t* this_00;
        int iVar3;
        long* plVar4;
        float* pfVar5;
        PrimVertPosCol* this_01;
        Layout* this_02;
        Vector2T<int>* this_03;
        unsigned long arg1;
        uint64_t local_88;
        long* local_80;
        long* local_78;
        uint8_t* local_68;
        float local_44;
        unsigned int local_40;
        float local_38;
        float local_34;

        if (pairs.empty() == '\0') {
            field_28 = 0;
            plVar4 = (long*)pairs.HeapBeginPtr();
            local_78 = (long*)pairs.end();
            if (plVar4 != local_78) {
                this_00 = &field_400;
                local_68 = this_00;
                do {
                    local_40 = *(unsigned int*)(*plVar4 + 16);
                    local_88 = *(uint64_t*)*plVar4;
                    local_38 = *(float*)(*plVar4 + 8);
                    local_80 = plVar4;
                    if (*(char*)(*plVar4 + 12) != '\0') {
                        pfVar5 = (float*)local_88.y();
                        local_34 = (float)arg4 - *pfVar5;
                        pfVar5 = (float*)local_88.y();
                        *pfVar5 = local_34;
                    }
                    arg1 = 0;
                    do {
                        this_01 = (PrimVertPosCol*)(*this)[(long)(field_28 * 17 + (int)arg1)];
                        pfVar5 = (float*)local_88.SSOBeginPtr();
                        local_34 = *pfVar5;
                        this_02 = (Layout*)(*this_00)[arg1];
                        pfVar5 = (float*)this_02->SSOBeginPtr();
                        local_34 = (float)viewport.field_0 + local_34 + *pfVar5 * local_38;
                        pfVar5 = (float*)local_88.y();
                        local_44 = *pfVar5;
                        this_03 = (Vector2T<int>*)(*this_00)[arg1];
                        pfVar5 = (float*)this_03->y();
                        this_01->Set(local_34, (float)viewport.field_4 + local_44 + *pfVar5 * local_38, 1.0, local_40);
                        this = this;
                        arg1 = arg1 + 1;
                    } while (arg1 != 17);
                    iVar3 = field_28 + 1;
                    field_28 = iVar3;
                    if (iVar3 == field_24) {
                        RenderBatch(renderContext, drawCallState, matrix44, (long)field_24);
                        field_28 = 0;
                    }
                    plVar4 = local_80 + 2;
                } while (plVar4 != local_78);
            }
            if (0 < (long)field_28) {
                RenderBatch(renderContext, drawCallState, matrix44, (long)field_28);
                field_28 = 0;
            }
        }
    }

    // 0x1009c0810
    void DebugCircle2DRender::RenderBatch(render::RenderContext& renderContext,
                                          const render::DrawCallState& drawCallState,
                                          const math::Matrix44T<float>& matrix44, unsigned long arg4) {
        VertexDeclaration* vertexDeclaration;

        if ((unsigned long)(long)field_24 < arg4) {
            LogAssert("numCircles <= (size_t)m_MaxCircles",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/primitive/"
                      "debugbasic/DebugCircle2DRender.cpp",
                      151, nullptr);
        }
        auto arg3 = data();
        field_32.Update(0, (int)arg4 * 476, arg3);
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
        renderContext.DrawIndexedPrimitives(&local_80, primitiveType, (int)arg4 * 48, 0);
    }

    // 0x1009c09a0
    void DebugCircle2DRender::OnEndFrame() {
        field_32.RotateBuffers();
    }

} // namespace jag
