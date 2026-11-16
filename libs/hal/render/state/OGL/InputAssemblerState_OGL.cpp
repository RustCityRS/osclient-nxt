// libs/hal/render/state/OGL/InputAssemblerState_OGL.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

#include "libs/hal/render/state/InputAssemblerState.h"

namespace jag::render {
    // 0x100bde950
    void InputAssemblerState::Destroy() {
        Clear();
    }

    // 0x100bf5710
    InputAssemblerState::InputAssemblerState() : m_primitiveType(4294967295), field_8(nullptr) {
        uint64_t local_30 = 0;
        new (m_pVertexBuffers) eastl::fixed_vector<VertexBuffer const*, 8ul>(&local_30, DAT_00000001);
        m_pIndexBuffer = nullptr;
        m_flags = 0;
        new (field_136) shared_ptr();
        field_168 = 0;
        field_176 = 0;
        *(uint64_t*)&m_gLIndexBuffer = 0;
        field_160 = 0;
        field_184 = 0;
    }

    // 0x100bf57f0
    InputAssemblerState::~InputAssemblerState() {
        Destroy();
        field_136->~shared_ptr();
        m_pVertexBuffers->~fixed_vector();
    }

    // 0x100bf5840
    void InputAssemblerState::Clear() {
        m_primitiveType = 4294967295;
        field_8 = nullptr;
        m_pVertexBuffers->clear();
        m_pIndexBuffer = nullptr;
        m_flags = 0;
        ResetVAO();
    }

    // 0x100bf5890
    void InputAssemblerState::ResetVAO() const {
        if (field_136->unique() != '\0') {
            LogAssert("!m_VAO.unique()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/OGL/"
                      "InputAssemblerState_OGL.cpp",
                      32, nullptr);
        }
        field_136->reset();
    }

    // 0x100bf5920
    unsigned long InputAssemblerState::IsValid() const {
        int iVar2;
        unsigned int uVar3;
        unsigned int uVar4;
        unsigned int uVar5;
        unsigned long uVar7;
        long* plVar8;
        uint64_t* puVar9;
        Logger* this_01;
        unsigned long unaff_RBX;
        char* str2;

        uint8_t* this_00 = m_pVertexBuffers;
        if (this_00->size() != 0) {
            unaff_RBX = 0;
            do {
                plVar8 = (long*)(*this_00)[unaff_RBX];
                uVar5 = (unsigned int)unaff_RBX;
                if (*plVar8 == 0) {
                    iVar2 = field_8->GetVertexStride(uVar5);
                    if (iVar2 != 0) {
                        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                        "render/state/OGL/InputAssemblerState_OGL.cpp",
                                        55, "A vertex declaration is set on a stream with no vertex buffer!");
                    }
                } else {
                    puVar9 = (uint64_t*)(*this_00)[unaff_RBX];
                    if (!((*puVar9)->IsCreated())) {
                        this_01 = logger::default_logger();
                        str2 = "Vertex buffer destroyed while still attached to IAState";
                        iVar2 = 62;
                        goto LAB_100bf5a7a;
                    }
                    puVar9 = (uint64_t*)(*this_00)[unaff_RBX];
                    uVar3 = (*puVar9)->GetAliveCount();
                    uVar4 = field_8->GetVertexStride(uVar5);
                    if (uVar3 % uVar4 != 0) {
                        puVar9 = (uint64_t*)(*this_00)[unaff_RBX];
                        uVar3 = (*puVar9)->GetAliveCount();
                        uVar5 = field_8->GetVertexStride(uVar5);
                        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                        "render/state/OGL/InputAssemblerState_OGL.cpp",
                                        70,
                                        "The vertex buffer and the vertex declaration don\'t match! Vertex buffer "
                                        "size: %d, Vertex Stride: %d",
                                        (unsigned long)uVar3, (unsigned long)uVar5);
                    }
                }
                unaff_RBX = (unsigned long)(uVar5 + 1);
                uVar7 = this_00->size();
            } while (unaff_RBX < uVar7);
        }
        uVar7 = (((uint64_t)((int64_t)(unaff_RBX >> 8)) << 8) | (uint8_t)1);
        if (m_pIndexBuffer != nullptr) {
            if (!(m_pIndexBuffer->IsCreated())) {
                this_01 = logger::default_logger();
                str2 = "Index buffer destroyed while still attached to IAState";
                iVar2 = 78;
            LAB_100bf5a7a:
                uVar7 = 0;
                this_01->Log(false, 3,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/"
                             "OGL/InputAssemblerState_OGL.cpp",
                             iVar2, str2);
            }
        }
        return uVar7 & 4294967295;
    }

    // 0x100bf5ab0
    bool InputAssemblerState::IsValidCachedState() const {
        uint64_t uVar3;

        int* piVar2 = &field_156[0];
        if (*piVar2 == 0) {
            return 0;
        }
        bool cVar1 = ShouldUseVAO();
        if (!cVar1) {
        LAB_100bf5b03:
            uVar3 = 1;
        } else {
            cVar1 = field_136->operator_cast_to_bool();
            if (cVar1) {
                cVar1 = ((WaterNormalParamsTarget*)(*field_136).operator->())->IsValid();
                if (cVar1)
                    goto LAB_100bf5b03;
            }
            uVar3 = 0;
        }
        return uVar3;
    }

    // 0x100bf5b20
    bool InputAssemblerState::ShouldUseVAO() const {
        bool bVar2;

        long lVar1 = ((MapArea*)Instance())->GetOrigin();
        if (*(char*)(lVar1 + 322) == '\0') {
            bVar2 = false;
        } else {
            bVar2 = (m_flags & 1) == 0;
        }
        return bVar2;
    }

    // 0x100bf5b60
    void InputAssemblerState::SetVertexStreamData(const VertexDeclaration* vertexDeclaration, unsigned int arg2,
                                                  VertexBuffer const* const* arg3, const unsigned int* arg4,
                                                  const unsigned int* arg5) {
        uint8_t in_AL;
        bool cVar1;
        uint64_t in_register_00000001;
        unsigned long uVar2;

        VertexBuffer* local_38 = (VertexBuffer*)(((uint64_t)in_register_00000001 << 8) | (uint8_t)in_AL);
        VertexDeclaration* this_01 = field_8;
        if (vertexDeclaration == nullptr) {
            if (this_01 == nullptr)
                goto LAB_100bf5ba3;
        } else if ((this_01 != nullptr) && (cVar1 = *this_01 != *vertexDeclaration, !cVar1))
            goto LAB_100bf5ba3;
        ResetVAO();
    LAB_100bf5ba3:
        field_8 = vertexDeclaration;
        uint8_t* this_00 = m_pVertexBuffers;
        this_00->clear();
        if (arg2 != 0) {
            uVar2 = (unsigned long)arg2;
            do {
                if (*arg3 == nullptr) {
                    local_38 = nullptr;
                    this_00->push_back(local_38);
                } else {
                    this_00->push_back(*arg3);
                }
                arg3 = arg3 + 1;
                uVar2 = uVar2 - 1;
            } while (uVar2 != 0);
        }
        UpdateGLVertexBufferCache();
    }

    // 0x100bf5c70
    void InputAssemblerState::UpdateGLVertexBufferCache() const {
        long* plVar2;
        uint64_t* puVar3;
        uint32_t* puVar4;
        uint32_t uVar6;
        unsigned long arg1;

        uint64_t local_58 = 0;
        uint8_t* puVar1 = m_pVertexBuffers;
        InputAssemblerState* local_38 = this;
        unsigned long uVar7 = puVar1->size();
        if (uVar7 != 0) {
            arg1 = 0;
            do {
                plVar2 = (long*)(*puVar1)[arg1];
                uVar6 = 0;
                if (*plVar2 != 0) {
                    puVar3 = (uint64_t*)(*puVar1)[arg1];
                    uVar6 = (*puVar3)->GetNativeBuffer();
                }
                puVar4 = &local_58[arg1];
                *puVar4 = uVar6;
                arg1 = arg1 + 1;
            } while (uVar7 != arg1);
        }
        InputAssemblerState* this_00 = local_38;
        puVar1 = &local_38->field_156;
        if (puVar1 != &local_58) {
            *(uint64_t*)((long)&this_00->field_168 + 4) = 0;
            *(uint64_t*)((long)&this_00->field_176 + 4) = 0;
            *(uint64_t*)puVar1 = local_58;
            *(uint64_t*)((long)&this_00->field_160 + 4) = 0;
            ResetVAO(this_00);
        }
        if ((this_00->m_flags & 1) != 0) {
            ResetVAO(this_00);
        }
    }

    // 0x100bf5d50
    void InputAssemblerState::OnBind() const {
        uint8_t* this_00;
        WaterNormalParamsTarget* this_01;
        ReturnValue local_30;

        UpdateGLVertexBufferCache();
        UpdateGLIndexBufferCache();
        bool cVar1 = ShouldUseVAO();
        if (cVar1) {
            this_00 = field_136;
            this_01 = (WaterNormalParamsTarget*)this_00;
            cVar1 = this_00->operator_cast_to_bool();
            if (cVar1) {
                this_01 = (WaterNormalParamsTarget*)(*this_00).operator->();
                cVar1 = this_01->IsValid();
                if (cVar1)
                    goto LAB_100bf5dcb;
            }
            local_30 = this_01->Instance()->Get(*this);
            *this_00 = local_30;
        }
    LAB_100bf5dcb:
        cVar1 = IsValid();
        if (!cVar1) {
            LogAssert("IsValid()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/OGL/"
                      "InputAssemblerState_OGL.cpp",
                      159, nullptr);
        }
    }

    // 0x100bf5e20
    void InputAssemblerState::UpdateGLIndexBufferCache() const {
        int iVar1;

        if (m_pIndexBuffer == nullptr) {
            iVar1 = 0;
            if (m_gLIndexBuffer == 0)
                goto LAB_100bf5e4d;
        } else {
            iVar1 = m_pIndexBuffer->GetNativeBuffer();
            if (m_gLIndexBuffer == iVar1)
                goto LAB_100bf5e4d;
        }
        m_gLIndexBuffer = iVar1;
        ResetVAO();
    LAB_100bf5e4d:
        if ((m_flags & 1) != 0) {
            ResetVAO();
        }
    }

    // 0x100bf5ec0
    void InputAssemblerState::BindVAO(ImmediateRenderContext& immediateRenderContext) const {
        WaterNormalParamsTarget* pWVar2;

        bool cVar1 = ((RenderDevice*)Instance())->IsRenderThread();
        if (!cVar1) {
            LogAssert("RenderDevice::Instance().IsRenderThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/OGL/"
                      "InputAssemblerState_OGL.cpp",
                      164, nullptr);
        }
        cVar1 = ShouldUseVAO();
        if (!cVar1) {
            LogAssert("ShouldUseVAO()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/OGL/"
                      "InputAssemblerState_OGL.cpp",
                      165, nullptr);
        }
        uint8_t* this_00 = field_136;
        cVar1 = this_00->operator_cast_to_bool();
        if (!cVar1) {
        LAB_100bf5f50:
            OnBind();
            cVar1 = this_00->operator_cast_to_bool();
            if (cVar1) {
                pWVar2 = (WaterNormalParamsTarget*)(*this_00).operator->();
                cVar1 = pWVar2->IsValid();
                if (cVar1)
                    goto LAB_100bf5f78;
            }
            CreateVAO(immediateRenderContext);
        } else {
            pWVar2 = (WaterNormalParamsTarget*)(*this_00).operator->();
            cVar1 = pWVar2->IsValid();
            if (!cVar1)
                goto LAB_100bf5f50;
        LAB_100bf5f78:
            ((VertexArrayObject*)(*this_00).operator->())->Bind(immediateRenderContext);
        }
    }

    // 0x100bf5fb0
    void InputAssemblerState::CreateVAO(ImmediateRenderContext& immediateRenderContext) const {
        int iVar1;
        void* pcVar2;
        uint32_t uVar3;
        uint32_t uVar4;
        bool bVar6;
        int iVar7;
        int iVar8;
        unsigned int uVar9;
        uint32_t uVar10;
        WaterNormalParamsTarget* this_01;
        VAOManager* pVVar11;
        VertexArrayObject* pVVar12;
        unsigned int* puVar13;
        int* piVar14;
        unsigned long uVar16;
        uint32_t* puVar17;
        unsigned long uVar18;
        int iVar19;
        unsigned long uVar20;
        unsigned long arg1;
        GLVertexElementFormat local_48;
        unsigned int local_34;

        if (!(ShouldUseVAO())) {
            LogAssert("ShouldUseVAO()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/OGL/"
                      "InputAssemblerState_OGL.cpp",
                      202, nullptr);
        }
        uint8_t* this_00 = field_136;
        Singleton<VAOManager>* this_05 = (Singleton<VAOManager>*)this_00;
        if (!(this_00->operator_cast_to_bool())) {
            pVVar11 = this_05->Instance();
            local_48 = pVVar11->Register(*this, immediateRenderContext);
            *this_00 = local_48;
        } else {
            this_01 = (WaterNormalParamsTarget*)(*this_00).operator->();
            if (this_01->IsValid()) {
                LogAssert("!m_VAO->IsValid()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/OGL/"
                          "InputAssemblerState_OGL.cpp",
                          207, nullptr);
            }
            pVVar11 = this_01->Instance();
            local_48 = pVVar11->Get(*this);
            bVar6 = *this_00 == local_48;
            if (!bVar6) {
                LogAssert("m_VAO == VAOManager::Instance().Get(*this)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/OGL/"
                          "InputAssemblerState_OGL.cpp",
                          208, nullptr);
            }
            pVVar12 = (VertexArrayObject*)(*this_00).operator->();
            pVVar12->Create(immediateRenderContext);
        }
        pVVar12 = (VertexArrayObject*)(*this_00).operator->();
        pVVar12->Bind(immediateRenderContext);
        BindIndexBuffer();
        if ((field_8 == nullptr) || (iVar7 = field_8->GetVertexStride(0), iVar7 == 0)) {
            (*___glewBindBuffer)(34962, 0);
            CheckGlErrorInternal("glBindBuffer GL_ARRAY_BUFFER",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "state/OGL/InputAssemblerState_OGL.cpp",
                                 281);
            return;
        }
        auto this_02 = field_8->second();
        auto this_03 = field_8->GetDefaultValue();
        iVar7 = field_8->GetStreamCountLastMix();
        if (iVar7 == 1) {
            puVar13 = (unsigned int*)(*this_02)[0];
            piVar14 = &field_156[(unsigned long)*puVar13];
            iVar19 = *piVar14;
            if (iVar19 == 0) {
                LogAssert("vertexBuffer > 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/OGL/"
                          "InputAssemblerState_OGL.cpp",
                          229, nullptr);
            }
            if (!((*___glewIsBuffer)(iVar19))) {
                LogAssert("glIsBuffer(vertexBuffer)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/OGL/"
                          "InputAssemblerState_OGL.cpp",
                          230, nullptr);
            }
            (*___glewBindBuffer)(34962, iVar19);
            CheckGlErrorInternal("glBindBuffer GL_ARRAY_BUFFER",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "state/OGL/InputAssemblerState_OGL.cpp",
                                 231);
        }
        Array<VertexElementDesc>* this_06 = this_02;
        long lVar15 = this_02->end();
        if (lVar15 != 0) {
            local_34 = 4294967295;
            uVar18 = 1;
            arg1 = 0;
            do {
                uVar20 = uVar18;
                iVar19 = (int)uVar20 - 1;
                puVar13 = (unsigned int*)(*this_02)[arg1];
                if (puVar13[6] == 15) {
                    (*___glewDisableVertexAttribArray)(iVar19);
                    CheckGlErrorInternal("glDisableVertexAttribArray",
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                         "render/state/OGL/InputAssemblerState_OGL.cpp",
                                         268);
                } else {
                    if ((1 < iVar7) && (*puVar13 != local_34)) {
                        piVar14 = &field_156[(unsigned long)*puVar13];
                        iVar1 = *piVar14;
                        if (iVar1 == 0) {
                            LogAssert("vertexBuffer > 0",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                      "render/state/OGL/InputAssemblerState_OGL.cpp",
                                      247, nullptr);
                        }
                        if (!((*___glewIsBuffer)(iVar1))) {
                            LogAssert("glIsBuffer(vertexBuffer)",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                      "render/state/OGL/InputAssemblerState_OGL.cpp",
                                      248, nullptr);
                        }
                        (*___glewBindBuffer)(34962, iVar1);
                        CheckGlErrorInternal("glBindBuffer GL_ARRAY_BUFFER",
                                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                             "hal/render/state/OGL/InputAssemblerState_OGL.cpp",
                                             249);
                        local_34 = *puVar13;
                    }
                    local_48 = GLVertexElementFormat(puVar13[4]);
                    iVar8 = field_8->GetVertexStride(*puVar13);
                    piVar14 = (int*)(*this_03)[arg1];
                    iVar1 = *piVar14;
                    uVar9 = GetShaderInputElementComponentSize(puVar13[4]);
                    if ((unsigned int)(iVar8 + iVar1) % uVar9 != 0) {
                        LogAssert("(m_pVertexDecl->GetVertexStride(elemDesc.m_Stream) + vertexElemByteOffsets[iElem]) "
                                  "% GetShaderInputElementComponentSize(elemDesc.m_Format) == 0",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                  "state/OGL/InputAssemblerState_OGL.cpp",
                                  255, "Attribute %s not aligned to multiple of its size", *(uint64_t*)(puVar13 + 2));
                    }
                    (*___glewEnableVertexAttribArray)(iVar19);
                    CheckGlErrorInternal("glEnableVertexAttribArray",
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                         "render/state/OGL/InputAssemblerState_OGL.cpp",
                                         257);
                    uVar4 = local_48.field_0._4_4_;
                    uVar3 = local_48.field_0._0_4_;
                    pcVar2 = ___glewVertexAttribPointer;
                    uVar9 = puVar13[5];
                    uVar10 = field_8->GetVertexStride(*puVar13);
                    puVar17 = (uint32_t*)(*this_03)[arg1];
                    (*pcVar2)(iVar19, uVar4, uVar3, (char)uVar9, uVar10, *puVar17);
                    CheckGlErrorInternal("glVertexAttribPointer",
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                         "render/state/OGL/InputAssemblerState_OGL.cpp",
                                         264);
                }
                this_06 = this_02;
                uVar16 = this_02->end();
                uVar18 = (unsigned long)((int)uVar20 + 1);
                arg1 = uVar20;
            } while (uVar20 < uVar16);
        }
        lVar15 = ((MapArea*)this_06->Instance())->GetOrigin();
        uVar9 = *(unsigned int*)(lVar15 + 100);
        uVar18 = this_02->end();
        if (uVar9 <= uVar18) {
            return;
        }
        do {
            (*___glewDisableVertexAttribArray)(uVar18 & 4294967295);
            CheckGlErrorInternal("glDisableVertexAttribArray",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "state/OGL/InputAssemblerState_OGL.cpp",
                                 276);
            uVar18 = uVar18 + 1;
        } while (uVar9 != uVar18);
    }

    // 0x100bf64e0
    void InputAssemblerState::BindIndexBuffer() const {
        (*___glewBindBuffer)(34963, m_gLIndexBuffer);
        CheckGlErrorInternal("glBindBuffer GL_ELEMENT_ARRAY_BUFFER",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/"
                             "OGL/InputAssemblerState_OGL.cpp",
                             195);
    }

    // 0x100bf6520
    void InputAssemblerState::SetIndexBuffer(const IndexBuffer* indexBuffer, unsigned int arg2) {
        uint32_t in_register_00000034;

        BufferInterface* bufferInterface = (BufferInterface*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg2);
        if (bufferInterface != nullptr) {
            if (bufferInterface->GetNativeBuffer() == 0) {
                LogAssert("pIndexBuffer->GetNativeBuffer()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/OGL/"
                          "InputAssemblerState_OGL.cpp",
                          289, nullptr);
            }
        }
        *(BufferInterface**)&indexBuffer[1].field_28 = bufferInterface;
        UpdateGLIndexBufferCache((InputAssemblerState*)indexBuffer);
    }

} // namespace jag::render
