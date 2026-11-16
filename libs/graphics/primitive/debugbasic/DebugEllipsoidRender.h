// libs/graphics/primitive/debugbasic/DebugEllipsoidRender.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.graphics.primitive.debugbasic

namespace jag {
    class DebugEllipsoidRender {
    public:
        DebugEllipsoidRender(int arg1);
        uint64_t CreateRenderingResources();
        void DestroyRenderingResources();
        void Render(render::RenderContext& renderContext, const render::DrawCallState& drawCallState,
                    const ViewTransforms& viewTransforms,
                    eastl::vector<eastl::pair<DebugEllipsoid<DebugDataBasic> const*, float>> const& pairs, bool arg5);
        void OnEndFrame();
        ~DebugEllipsoidRender();

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

    // 0x1009c1ea0
    DebugEllipsoidRender::DebugEllipsoidRender(int arg1) : Array<PrimVertPosCol>() {
        new (field_312) render::InputAssemblerState();
        new (field_504) render::InputAssemblerState();
        unsigned int* arg1_00 = &field_696;
        field_696 = 30;
        field_700 = 30;
        unsigned int* arg2 = &field_700;
        graphicutils::GetSphereHorzVertSegCount(arg1_00, arg2, 30);
        unsigned int uVar1 = graphicutils::GetSphereVertexCount(*arg1_00, *arg2);
        field_24.set_max_size((unsigned long)(arg1 * uVar1), 0);
        set_max_size((unsigned long)uVar1, 0);
        graphicutils::CreateSphereVertices((Vector3T<float>*)(*this)[0], nullptr, nullptr, 28, *arg1_00, *arg2);
        CreateRenderingResources();
    }

    // 0x1009c2030
    uint64_t DebugEllipsoidRender::CreateRenderingResources() {
        unsigned int* puVar4;
        unsigned long uVar9;
        unsigned long uVar10;

        unsigned int uVar2 = graphicutils::GetSphereVertexCount(field_696, field_700);
        unsigned long uVar3 = field_24.end();
        unsigned long uVar7 = 0;
        uVar3 = uVar3 / uVar2;
        unsigned int local_3c = uVar2;
        int local_38 = graphicutils::GetSphereTriListIndexCount(field_696, field_700);
        int iVar8 = (int)uVar3;
        Array<unsigned int> local_58((unsigned long)(unsigned int)(local_38 * iVar8));
        if (0 < iVar8) {
            uVar2 = 0;
            uVar9 = 0;
            do {
                puVar4 = &local_58[uVar7];
                graphicutils::CreateSphereTriListIndices<unsigned int>(puVar4, uVar2, field_696, field_700, false);
                uVar9 = uVar9 + 1;
                uVar2 = uVar2 + local_3c;
                uVar7 = (unsigned long)(unsigned int)((int)uVar7 + local_38);
            } while (uVar9 != (uVar3 & 4294967295));
        }
        int local_40 = iVar8 * 4;
        uVar2 = local_38 * local_40;
        uVar7 = (unsigned long)uVar2;
        auto pvVar5 = local_58.data();
        uint8_t local_31 = field_136.Create(uVar2, 0, pvVar5, 5125);
        local_38 = graphicutils::GetSphereLineListIndexCount(field_696, field_700);
        local_58 = Array<unsigned int>((unsigned long)(unsigned int)(local_38 * iVar8));
        if (0 < iVar8) {
            uVar9 = 0;
            uVar7 = 0;
            uVar10 = 0;
            do {
                puVar4 = &local_58[uVar9];
                graphicutils::CreateSphereLineListIndices<unsigned int>(puVar4, (unsigned int)uVar7, field_696,
                                                                        field_700);
                uVar10 = uVar10 + 1;
                uVar7 = (unsigned long)((unsigned int)uVar7 + local_3c);
                uVar9 = (unsigned long)(unsigned int)((int)uVar9 + local_38);
            } while (uVar10 != (uVar3 & 4294967295));
        }
        uVar2 = local_40 * local_38;
        pvVar5 = (void*)local_58.data();
        uint8_t bVar1 = field_224.Create(uVar2, 0, pvVar5, 5125);
        bVar1 = local_31 & bVar1;
        uint8_t* puVar6 = field_312;
        new (puVar6) std::__cxx_atomic_base_impl(4);
        render::InputAssemblerState::SetIndexBuffer(puVar6, (unsigned int)&field_136);
        puVar6->SetFlags(1);
        puVar6 = field_504;
        new (puVar6) std::__cxx_atomic_base_impl(1);
        render::InputAssemblerState::SetIndexBuffer(puVar6, (unsigned int)&field_224);
        puVar6->SetFlags(1);
        return bVar1;
    }

    // 0x1009c2480
    void DebugEllipsoidRender::DestroyRenderingResources() {
        field_312->Destroy();
        field_504->Destroy();
        field_136.Destroy();
        field_224.Destroy();
        field_48.Destroy();
    }

    // 0x1009c24d0
    void
    DebugEllipsoidRender::Render(render::RenderContext& renderContext, const render::DrawCallState& drawCallState,
                                 const ViewTransforms& viewTransforms,
                                 eastl::vector<eastl::pair<DebugEllipsoid<DebugDataBasic> const*, float>> const& pairs,
                                 bool arg5) {
        uint8_t* puVar1;
        Layout* this_00;
        DebugEllipsoidRender* pDVar2;
        unsigned int uVar4;
        int iVar5;
        PrimitiveType primitiveType;
        uint64_t* puVar6;
        float* pfVar7;
        Vector3T<float>* pVVar8;
        long lVar9;
        void* arg3;
        ShaderProgram* this_04;
        Matrix44T<float>* matrix44;
        VertexDeclaration* pVVar10;
        VertexBuffer* pVVar11;
        int iVar12;
        unsigned long arg1;
        uint32_t in_register_00000089;
        unsigned long uVar13;
        float fVar14;
        Rect<float> local_118;
        float fStack_110;
        uint32_t uStack_10c;
        DrawCallState local_108;
        uint64_t* local_c8;
        uint64_t* local_c0;
        Float4 local_98;
        long local_70;
        unsigned long local_68;
        DebugEllipsoidRender* local_60;
        unsigned long local_58;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* local_50;
        unsigned int local_44;
        float local_40;
        float local_3c;
        uint32_t local_38;
        int local_34;

        if (pairs.empty() == '\0') {
            local_38 = (((uint32_t)in_register_00000089 << 8) | (uint8_t)arg5);
            uVar4 = graphicutils::GetSphereVertexCount(field_696, field_700);
            uVar13 = (unsigned long)uVar4;
            puVar6 = (uint64_t*)pairs.HeapBeginPtr();
            local_c0 = (uint64_t*)pairs.end();
            puVar1 = &field_24;
            local_60 = this;
            local_58 = uVar13;
            local_50 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)puVar1;
            if (puVar6 == local_c0) {
                local_34 = 0;
            } else {
                lVar9 = 0;
                local_34 = 0;
                local_68 = uVar13;
                do {
                    pVVar8 = (Vector3T<float>*)*puVar6;
                    local_44 = *(unsigned int*)(pVVar8 + 24);
                    this_00 = (Layout*)(pVVar8 + 12);
                    local_c8 = puVar6;
                    local_70 = lVar9;
                    pfVar7 = (float*)this_00->SSOBeginPtr();
                    local_40 = *pfVar7;
                    pfVar7 = (float*)this_00->y();
                    local_3c = *pfVar7;
                    pfVar7 = (float*)this_00->second();
                    fVar14 = local_3c;
                    math::Matrix33Scaling<float>(local_40, local_3c, *pfVar7);
                    local_108 = math::Matrix44T<float>(local_98, *pVVar8);
                    if (0 < (int)local_58) {
                        uVar13 = 0;
                        do {
                            pVVar8 = (Vector3T<float>*)(*local_60)[uVar13];
                            local_98[0]._0_8_ = *pVVar8 * local_108;
                            arg1 = (unsigned long)((int)local_70 + (int)uVar13);
                            local_98[0].field_8 = fVar14;
                            ((Vector4T<float>*)(*puVar1)[arg1])->SetXYZ(local_98);
                            math::Colour4FromA8R8G8B8(local_44);
                            fStack_110 = fVar14;
                            uStack_10c = 0;
                            local_98 = math::Float4(local_118);
                            lVar9 = (*puVar1)[arg1];
                            *(uint64_t*)(lVar9 + 12) = local_98[0]._0_8_;
                            *(unsigned long*)(lVar9 + 20) =
                                (((uint64_t)local_98[0].field_12 << 32) | (uint32_t)local_98[0].field_8);
                            uVar13 = uVar13 + 1;
                        } while (local_68 != uVar13);
                    }
                    local_34 = local_34 + 1;
                    puVar6 = local_c8 + 2;
                    lVar9 = local_70 + local_68;
                } while (puVar6 != local_c0);
            }
            pDVar2 = local_60;
            puVar1 = &local_60->field_48;
            iVar12 = (int)local_58 * local_34;
            arg3 = (void*)local_50->data();
            puVar1->Update(0, iVar12 * 28, arg3);
            local_108 = render::DrawCallState(drawCallState);
            this_04 = ((PrimitiveShaderFamily*)local_108.Instance())->GetShaderProgram(1);
            ((RenderPipelineState*)local_108.GetRenderPipelineState())->SetShaderProgram(this_04);
            local_98 = HashedString("uWorldMat");
            this_04->SetShaderConstMatrix4(&local_98, 1, PTR_IDENTITY_100ee6730, 1);
            local_98 = HashedString("uViewProjMat");
            matrix44 = (Matrix44T<float>*)viewTransforms.GetImmediateThreadPool();
            this_04->SetShaderConstMatrix4(&local_98, 1, matrix44, 1);
            if ((char)local_38 == '\0') {
                pVVar10 = (VertexDeclaration*)this_04->second();
                pVVar11 = (VertexBuffer*)puVar1->CurrentBuffer();
                pDVar2->field_312->SetVertexStreamData(pVVar10, pVVar11);
                local_108.SetInputAssemblerState(pDVar2->field_312);
                iVar12 = graphicutils::GetSphereTriListIndexCount(pDVar2->field_696, pDVar2->field_700);
                iVar12 = iVar12 * local_34;
            } else {
                pVVar10 = (VertexDeclaration*)this_04->second();
                pVVar11 = (VertexBuffer*)puVar1->CurrentBuffer();
                pDVar2->field_504->SetVertexStreamData(pVVar10, pVVar11);
                local_108.SetInputAssemblerState(pDVar2->field_504);
                iVar5 = pairs.size();
                iVar12 = graphicutils::GetSphereLineListIndexCount(pDVar2->field_696, pDVar2->field_700);
                iVar12 = iVar12 * iVar5;
            }
            lVar9 = local_108.second();
            *(int*)(lVar9 + 12) = iVar12;
            primitiveType = ((CoordMapSquare*)local_108.GetInputAssemblerState())->GetX();
            lVar9 = local_108.second();
            uVar4 = *(unsigned int*)(lVar9 + 12);
            lVar9 = local_108.second();
            renderContext.DrawIndexedPrimitives(&local_108, primitiveType, uVar4, *(unsigned int*)(lVar9 + 16));
        }
    }

    // 0x1009c2930
    void DebugEllipsoidRender::OnEndFrame() {
        field_48.RotateBuffers();
    }

    // 0x1009cd0f0
    DebugEllipsoidRender::~DebugEllipsoidRender() {
        field_504->~InputAssemblerState();
        field_312->~InputAssemblerState();
        field_224.~IndexBuffer();
        field_136.~IndexBuffer();
        field_48.~DynamicBuffer();
        field_24.~Array();
    }

} // namespace jag

namespace jag::graphicutils {
    // 0x1009c2280
    void CreateSphereLineListIndices<unsigned int>(unsigned int* arg1, unsigned int arg2, unsigned int arg3,
                                                   unsigned int arg4) {
        unsigned int* puVar2;
        unsigned int* puVar3;
        unsigned int* puVar4;
        unsigned long uVar5;
        unsigned int uVar6;
        int iVar7;
        unsigned int uVar8;
        unsigned int uVar9;
        int iVar10;
        unsigned int uVar11;
        unsigned int local_4c;
        unsigned int local_48;
        unsigned int local_44;
        unsigned int local_40;
        unsigned int local_3c;
        int local_38;

        if (arg1 == nullptr) {
            LogAssert("pIndexDataOut",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "createprimitive/CreateSphere.h",
                      123, nullptr);
        }
        unsigned int uVar1 = GetSphereVertexCount(arg3, arg4);
        if (arg1 != nullptr) {
            puVar2 = arg1;
            if (arg3 == 0) {
                uVar11 = 0;
            } else {
                local_44 = uVar1 - 1;
                local_38 = arg4 * 2;
                uVar6 = 0;
                uVar11 = 0;
                do {
                    uVar6 = uVar6 + 1;
                    if (arg4 != 0) {
                        local_40 = uVar11;
                        local_3c = uVar6;
                        uVar9 = 0;
                        uVar11 = arg4;
                        do {
                            uVar8 = uVar6;
                            puVar3 = puVar2;
                            *puVar3 = uVar9;
                            puVar3[1] = uVar8;
                            local_4c = uVar8 + arg3;
                            local_48 = local_44;
                            puVar4 = std::min<unsigned int>(local_4c, local_48);
                            if (uVar1 <= *puVar4) {
                                LogAssert("nextVertex < vertexCount",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                          "graphics/graphicutils/createprimitive/CreateSphere.h",
                                          147, nullptr);
                            }
                            uVar11 = uVar11 - 1;
                            puVar2 = puVar3 + 2;
                            uVar6 = *puVar4;
                            uVar9 = uVar8;
                        } while (uVar11 != 0);
                        puVar2 = puVar3 + 2;
                        uVar11 = local_40 + local_38;
                        uVar6 = local_3c;
                    }
                } while (uVar6 != arg3);
            }
            uVar1 = arg2;
            if (arg4 != 1) {
                iVar10 = 0;
                iVar7 = 0;
                do {
                    if (arg3 != 0) {
                        uVar6 = iVar7 * arg3 + 1;
                        uVar9 = arg3;
                        do {
                            *puVar2 = uVar6;
                            uVar6 = iVar10 + uVar9;
                            puVar2[1] = uVar6;
                            puVar2 = puVar2 + 2;
                            uVar9 = uVar9 - 1;
                        } while (uVar9 != 0);
                        uVar11 = uVar11 + arg3 * 2;
                    }
                    iVar7 = iVar7 + 1;
                    iVar10 = iVar10 + arg3;
                } while (iVar7 != arg4 - 1);
            }
            uVar6 = GetSphereLineListIndexCount(arg3, arg4);
            if (uVar11 != uVar6) {
                LogAssert(
                    "indexCount == static_cast<IndexType>(GetSphereLineListIndexCount(horzSegments, vertSegments))",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                    "createprimitive/CreateSphere.h",
                    171, nullptr);
            }
            if (uVar11 != 0) {
                uVar5 = 0;
                do {
                    arg1[uVar5] = arg1[uVar5] + uVar1;
                    uVar5 = uVar5 + 1;
                } while (uVar11 != uVar5);
            }
        }
    }

} // namespace jag::graphicutils
