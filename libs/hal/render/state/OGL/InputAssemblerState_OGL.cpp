// libs/hal/render/state/OGL/InputAssemblerState_OGL.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

#include "libs/hal/render/state/InputAssemblerState.h"

namespace jag::render {
    // 0x100bde950, 16 bytes, placed by class name and debug map
    // InputAssemblerState::Destroy()
    void InputAssemblerState::Destroy() {
        Clear(this);
    }

    // 0x100bf5710, 208 bytes, base-object constructor, placed by class name and neighbouring functions
    // InputAssemblerState::InputAssemblerState()
    void InputAssemblerState::InputAssemblerState() {
        allocator local_38[8];
        undefined8 local_30;
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        field_0 = 4294967295;
        field_8 = (VertexDeclaration*)0;
        local_30 = 0;
        eastl::allocator::allocator(local_38, "EASTL fixed_vector");
        new (&field_16, (_func_decltype_nullptr*)&local_30, 1, local_38)
            eastl::fixed_vector<VertexBuffer_const*, 8ul, true, eastl::allocator>();
        m_pIndexBuffer = (BufferInterface*)0;
        m_flags = 0;
        new (field_136, (_func_decltype_nullptr*)&local_30)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        field_168 = 0;
        field_176 = 0;
        *(undefined8*)&field_152 = 0;
        field_160 = 0;
        field_184 = 0;
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100bf57f0, 80 bytes, base-object destructor, placed by class name and neighbouring functions
    // InputAssemblerState::~InputAssemblerState()
    void InputAssemblerState::~InputAssemblerState() {
        Destroy(this);
        field_136->~shared_ptr();
        (&field_16)->~fixed_vector();
    }

    // 0x100bf5840, 80 bytes, placed by class name and neighbouring functions
    // InputAssemblerState::Clear()
    void InputAssemblerState::Clear() {
        field_0 = 4294967295;
        field_8 = (VertexDeclaration*)0;
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        m_pIndexBuffer = (BufferInterface*)0;
        m_flags = 0;
        ResetVAO(this);
    }

    // 0x100bf5890, 80 bytes, placed by __FILE__ string
    // InputAssemblerState::ResetVAO() const
    void InputAssemblerState::ResetVAO() {
        char cVar1;

        cVar1 = field_136->unique();
        if (cVar1 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_VAO.unique()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/OGL/"
                      "InputAssemblerState_OGL.cpp",
                      32, (char*)0);
        }
        shared_ptr<VertexArrayObject>::reset();
    }

    // 0x100bf5920, 400 bytes, placed by __FILE__ string
    // InputAssemblerState::IsValid() const
    ulong InputAssemblerState::IsValid() {
        VertexBuffer** this_00;
        char cVar1;
        uint uVar3;
        uint uVar4;
        uint uVar5;
        long lVar6;
        ulong uVar7;
        long* plVar8;
        undefined8* puVar9;
        undefined8 uVar10;
        ulong unaff_RBX;
        undefined8 uVar11;
        char* pcVar12;

        this_00 = &field_16;
        lVar6 = this_00->size();
        if (lVar6 != 0) {
            unaff_RBX = 0;
            do {
                plVar8 =
                    (long*)eastl::vector<VertexBuffer_const*,
                                         eastl::fixed_vector_allocator<8ul, 8ul, 8ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<VertexBuffer_const*,
                                eastl::fixed_vector_allocator<8ul, 8ul, 8ul, 0ul, true, eastl::allocator>>*)this_00,
                        unaff_RBX);
                uVar5 = (uint)unaff_RBX;
                if (*plVar8 == 0) {
                    if ((field_8, uVar5)->GetVertexStride() != 0) {
                        /* WARNING: Subroutine does not return */
                        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                        "render/state/OGL/InputAssemblerState_OGL.cpp",
                                        55, "A vertex declaration is set on a stream with no vertex buffer!");
                    }
                } else {
                    puVar9 = (undefined8*)
                        eastl::vector<VertexBuffer_const*,
                                      eastl::fixed_vector_allocator<8ul, 8ul, 8ul, 0ul, true, eastl::allocator>>::
                        operator[](
                            (vector<VertexBuffer_const*,
                                    eastl::fixed_vector_allocator<8ul, 8ul, 8ul, 0ul, true, eastl::allocator>>*)this_00,
                            unaff_RBX);
                    cVar1 = (*puVar9)->IsCreated();
                    if (cVar1 == '\0') {
                        uVar10 = logger::default_logger();
                        pcVar12 = "Vertex buffer destroyed while still attached to IAState";
                        uVar11 = 62;
                        goto LAB_100bf5a7a;
                    }
                    puVar9 = (undefined8*)
                        eastl::vector<VertexBuffer_const*,
                                      eastl::fixed_vector_allocator<8ul, 8ul, 8ul, 0ul, true, eastl::allocator>>::
                        operator[](
                            (vector<VertexBuffer_const*,
                                    eastl::fixed_vector_allocator<8ul, 8ul, 8ul, 0ul, true, eastl::allocator>>*)this_00,
                            unaff_RBX);
                    uVar3 = (*puVar9)->GetAliveCount();
                    uVar4 = (field_8, uVar5)->GetVertexStride();
                    if (uVar3 % uVar4 != 0) {
                        puVar9 = (undefined8*)
                            eastl::vector<VertexBuffer_const*,
                                          eastl::fixed_vector_allocator<8ul, 8ul, 8ul, 0ul, true, eastl::allocator>>::
                            operator[](
                                (vector<VertexBuffer_const*,
                                        eastl::fixed_vector_allocator<8ul, 8ul, 8ul, 0ul, true, eastl::allocator>>*)
                                    this_00,
                                unaff_RBX);
                        uVar3 = (*puVar9)->GetAliveCount();
                        uVar5 = (field_8, uVar5)->GetVertexStride();
                        /* WARNING: Subroutine does not return */
                        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                        "render/state/OGL/InputAssemblerState_OGL.cpp",
                                        70,
                                        "The vertex buffer and the vertex declaration don\'t match! Vertex buffer "
                                        "size: %d, Vertex Stride: %d",
                                        (ulong)uVar3, (ulong)uVar5);
                    }
                }
                unaff_RBX = (ulong)(uVar5 + 1);
                uVar7 = this_00->size();
            } while (unaff_RBX < uVar7);
        }
        uVar7 = CONCAT71((int7)(unaff_RBX >> 8), 1);
        if (m_pIndexBuffer != (BufferInterface*)0) {
            cVar1 = m_pIndexBuffer->IsCreated();
            if (cVar1 == '\0') {
                uVar10 = logger::default_logger();
                pcVar12 = "Index buffer destroyed while still attached to IAState";
                uVar11 = 78;
            LAB_100bf5a7a:
                uVar7 = 0;
                logger::Logger::Log(uVar10, 0, 3,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                    "state/OGL/InputAssemblerState_OGL.cpp",
                                    uVar11, pcVar12);
            }
        }
        return uVar7 & 4294967295;
    }

    // 0x100bf5ab0, 112 bytes, placed by class name and neighbouring functions
    // InputAssemblerState::IsValidCachedState() const
    undefined8 InputAssemblerState::IsValidCachedState() {
        char cVar1;
        int* piVar3;
        WaterNormalParamsTarget* this_00;
        undefined8 uVar4;

        piVar3 = (int*)std::array<unsigned int, 8ul>::operator[]((array<unsigned int, 8ul>*)&field_156, 0);
        if (*piVar3 == 0) {
            return 0;
        }
        cVar1 = ShouldUseVAO(this);
        if (cVar1 == '\0') {
        LAB_100bf5b03:
            uVar4 = 1;
        } else {
            if (field_136->operator_cast_to_bool()) {
                this_00 = (WaterNormalParamsTarget*)shared_ptr<VertexArrayObject>::operator->(
                    (shared_ptr<VertexArrayObject>*)field_136);
                cVar1 = this_00->IsValid();
                if (cVar1 != '\0')
                    goto LAB_100bf5b03;
            }
            uVar4 = 0;
        }
        return uVar4;
    }

    // 0x100bf5b20, 64 bytes, placed by class name and neighbouring functions
    // InputAssemblerState::ShouldUseVAO() const
    bool InputAssemblerState::ShouldUseVAO() {
        MapArea* this_00;
        long lVar1;
        bool bVar2;

        this_00 = (MapArea*)Instance();
        lVar1 = this_00->GetOrigin();
        if (*(char*)(lVar1 + 322) == '\0') {
            bVar2 = false;
        } else {
            bVar2 = (m_flags & 1) == 0;
        }
        return bVar2;
    }

    // 0x100bf5b60, 192 bytes, placed by class name and neighbouring functions
    // InputAssemblerState::SetVertexStreamData(VertexDeclaration const*, unsigned int, VertexBuffer const* const*, unsigned int const*, unsigned int const*)
    void InputAssemblerState::SetVertexStreamData(VertexDeclaration* param_1, uint param_2, VertexBuffer** param_3,
                                                  uint* param_4, uint* param_5) {
        VertexDeclaration* this;
        undefined1 in_AL;
        char cVar1;
        undefined7 in_register_00000001;
        ulong uVar2;
        undefined4 in_register_00000034;
        VertexDeclaration* pVVar3;
        VertexBuffer* local_38;

        pVVar3 = (VertexDeclaration*)CONCAT44(in_register_00000034, param_2);
        local_38 = (VertexBuffer*)CONCAT71(in_register_00000001, in_AL);
        uVar2 = (ulong)param_3 & 4294967295;
        this = *(VertexDeclaration**)&param_1->field_8;
        if (pVVar3 == (VertexDeclaration*)0) {
            if (this == (VertexDeclaration*)0)
                goto LAB_100bf5ba3;
        } else if ((this != (VertexDeclaration*)0) &&
                   (cVar1 = VertexDeclaration::operator!=(this, pVVar3), cVar1 == '\0'))
            goto LAB_100bf5ba3;
        ResetVAO((InputAssemblerState*)param_1);
    LAB_100bf5ba3:
        *(VertexDeclaration**)&param_1->field_8 = pVVar3;
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        if ((int)param_3 != 0) {
            do {
                if (*(long*)param_4 == 0) {
                    local_38 = (VertexBuffer*)0;
                    (&param_1->field_16, &local_38)->push_back();
                } else {
                    eastl::fixed_vector<VertexBuffer_const*, 8ul, true, eastl::allocator>::push_back(
                        (VertexBuffer**)&param_1->field_16);
                }
                param_4 = param_4 + 2;
                uVar2 = uVar2 - 1;
            } while (uVar2 != 0);
        }
        UpdateGLVertexBufferCache((InputAssemblerState*)param_1);
    }

    // 0x100bf5c70, 224 bytes, placed by class name and neighbouring functions
    // InputAssemblerState::UpdateGLVertexBufferCache() const
    void InputAssemblerState::UpdateGLVertexBufferCache() {
        VertexBuffer** this_00;
        undefined1* puVar1;
        long* plVar2;
        undefined8* puVar3;
        undefined4* puVar4;
        InputAssemblerState* this_01;
        undefined4 uVar6;
        ulong uVar7;
        ulong uVar8;
        undefined8 local_58;
        InputAssemblerState* local_38;

        local_58 = 0;
        this_00 = &field_16;
        local_38 = this;
        uVar7 = this_00->size();
        if (uVar7 != 0) {
            uVar8 = 0;
            do {
                plVar2 =
                    (long*)eastl::vector<VertexBuffer_const*,
                                         eastl::fixed_vector_allocator<8ul, 8ul, 8ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<VertexBuffer_const*,
                                eastl::fixed_vector_allocator<8ul, 8ul, 8ul, 0ul, true, eastl::allocator>>*)this_00,
                        uVar8);
                uVar6 = 0;
                if (*plVar2 != 0) {
                    puVar3 = (undefined8*)
                        eastl::vector<VertexBuffer_const*,
                                      eastl::fixed_vector_allocator<8ul, 8ul, 8ul, 0ul, true, eastl::allocator>>::
                        operator[](
                            (vector<VertexBuffer_const*,
                                    eastl::fixed_vector_allocator<8ul, 8ul, 8ul, 0ul, true, eastl::allocator>>*)this_00,
                            uVar8);
                    uVar6 = (*puVar3)->GetNativeBuffer();
                }
                puVar4 =
                    (undefined4*)std::array<unsigned int, 8ul>::operator[]((array<unsigned int, 8ul>*)&local_58, uVar8);
                *puVar4 = uVar6;
                uVar8 = uVar8 + 1;
            } while (uVar7 != uVar8);
        }
        this_01 = local_38;
        puVar1 = &local_38->field_156;
        if (std::operator!=((array*)puVar1, (array*)&local_58)) {
            *(undefined8*)((long)&this_01->field_168 + 4) = 0;
            *(undefined8*)((long)&this_01->field_176 + 4) = 0;
            *(undefined8*)puVar1 = local_58;
            *(undefined8*)((long)&this_01->field_160 + 4) = 0;
            ResetVAO(this_01);
        }
        if ((this_01->m_flags & 1) != 0) {
            ResetVAO(this_01);
        }
    }

    // 0x100bf5d50, 208 bytes, placed by __FILE__ string
    // InputAssemblerState::OnBind() const
    void InputAssemblerState::OnBind() {
        undefined1* this_00;
        char cVar1;
        WaterNormalParamsTarget* this_01;
        InputAssemblerState* pIVar3;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_30[16];

        UpdateGLVertexBufferCache(this);
        UpdateGLIndexBufferCache(this);
        cVar1 = ShouldUseVAO(this);
        if (cVar1 != '\0') {
            this_00 = field_136;
            this_01 = (WaterNormalParamsTarget*)this_00;
            if (this_00->operator_cast_to_bool()) {
                this_01 = (WaterNormalParamsTarget*)shared_ptr<VertexArrayObject>::operator->(
                    (shared_ptr<VertexArrayObject>*)this_00);
                cVar1 = this_01->IsValid();
                if (cVar1 != '\0')
                    goto LAB_100bf5dcb;
            }
            pIVar3 = (InputAssemblerState*)this_01->Instance();
            local_30->Get(pIVar3);
            shared_ptr<VertexArrayObject>::operator=((shared_ptr<VertexArrayObject>*)this_00, (shared_ptr*)local_30);
            local_30->~shared_ptr();
        }
    LAB_100bf5dcb:
        cVar1 = IsValid(this);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsValid()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/OGL/"
                      "InputAssemblerState_OGL.cpp",
                      159, (char*)0);
        }
    }

    // 0x100bf5e20, 96 bytes, placed by class name and neighbouring functions
    // InputAssemblerState::UpdateGLIndexBufferCache() const
    void InputAssemblerState::UpdateGLIndexBufferCache() {
        int iVar1;

        if (m_pIndexBuffer == (BufferInterface*)0) {
            iVar1 = 0;
            if (field_152 == 0)
                goto LAB_100bf5e4d;
        } else {
            iVar1 = m_pIndexBuffer->GetNativeBuffer();
            if (field_152 == iVar1)
                goto LAB_100bf5e4d;
        }
        field_152 = iVar1;
        ResetVAO(this);
    LAB_100bf5e4d:
        if ((m_flags & 1) != 0) {
            ResetVAO(this);
        }
    }

    // 0x100bf5ec0, 240 bytes, placed by __FILE__ string
    // InputAssemblerState::BindVAO(ImmediateRenderContext&) const
    void InputAssemblerState::BindVAO(ImmediateRenderContext* param_1) {
        undefined1* this_00;
        char cVar1;
        bool bVar2;
        RenderDevice* this_01;
        WaterNormalParamsTarget* pWVar3;
        VertexArrayObject* this_02;

        this_01 = (RenderDevice*)Instance();
        cVar1 = this_01->IsRenderThread();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("RenderDevice::Instance().IsRenderThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/OGL/"
                      "InputAssemblerState_OGL.cpp",
                      164, (char*)0);
        }
        cVar1 = ShouldUseVAO(this);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("ShouldUseVAO()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/OGL/"
                      "InputAssemblerState_OGL.cpp",
                      165, (char*)0);
        }
        this_00 = field_136;
        bVar2 = this_00->operator_cast_to_bool();
        if (bVar2) {
            pWVar3 = (WaterNormalParamsTarget*)shared_ptr<VertexArrayObject>::operator->(
                (shared_ptr<VertexArrayObject>*)this_00);
            cVar1 = pWVar3->IsValid();
            if (cVar1 == '\0')
                goto LAB_100bf5f50;
        LAB_100bf5f78:
            this_02 =
                (VertexArrayObject*)shared_ptr<VertexArrayObject>::operator->((shared_ptr<VertexArrayObject>*)this_00);
            this_02->Bind(param_1);
        } else {
        LAB_100bf5f50:
            OnBind(this);
            bVar2 = this_00->operator_cast_to_bool();
            if (bVar2) {
                pWVar3 = (WaterNormalParamsTarget*)shared_ptr<VertexArrayObject>::operator->(
                    (shared_ptr<VertexArrayObject>*)this_00);
                cVar1 = pWVar3->IsValid();
                if (cVar1 != '\0')
                    goto LAB_100bf5f78;
            }
            CreateVAO(this, param_1);
        }
    }

    // 0x100bf5fb0, 1328 bytes, placed by __FILE__ string
    // InputAssemblerState::CreateVAO(ImmediateRenderContext&) const
    void InputAssemblerState::CreateVAO(ImmediateRenderContext* param_1) {
        undefined1* this_00;
        int iVar1;
        code* pcVar2;
        undefined4 uVar3;
        undefined4 uVar4;
        char cVar5;
        bool bVar6;
        int iVar7;
        int iVar8;
        uint uVar9;
        undefined4 uVar10;
        WaterNormalParamsTarget* this_01;
        InputAssemblerState* pIVar11;
        VertexArrayObject* pVVar12;
        Array<VertexElementDesc, eastl::allocator>* this_02;
        Array<unsigned int, eastl::allocator>* this_03;
        uint* puVar13;
        int* piVar14;
        long lVar15;
        ulong uVar16;
        undefined4* puVar17;
        MapArea* this_04;
        ulong uVar18;
        shared_ptr* extraout_RDX;
        int iVar19;
        ulong uVar20;
        Singleton<VAOManager>* this_05;
        Array<VertexElementDesc, eastl::allocator>* this_06;
        ulong uVar21;
        GLVertexElementFormat local_48;
        uint local_34;

        cVar5 = ShouldUseVAO(this);
        if (cVar5 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("ShouldUseVAO()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/OGL/"
                      "InputAssemblerState_OGL.cpp",
                      202, (char*)0);
        }
        this_00 = field_136;
        this_05 = (Singleton<VAOManager>*)this_00;
        bVar6 = this_00->operator_cast_to_bool();
        if (bVar6) {
            this_01 = (WaterNormalParamsTarget*)shared_ptr<VertexArrayObject>::operator->(
                (shared_ptr<VertexArrayObject>*)this_00);
            cVar5 = this_01->IsValid();
            if (cVar5 != '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("!m_VAO->IsValid()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/OGL/"
                          "InputAssemblerState_OGL.cpp",
                          207, (char*)0);
            }
            pIVar11 = (InputAssemblerState*)this_01->Instance();
            local_48.Get(pIVar11);
            bVar6 = operator==((jag*)this_00, (shared_ptr*)&local_48, extraout_RDX);
            local_48.~shared_ptr();
            if (!bVar6) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_VAO == VAOManager::Instance().Get(*this)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/OGL/"
                          "InputAssemblerState_OGL.cpp",
                          208, (char*)0);
            }
            pVVar12 =
                (VertexArrayObject*)shared_ptr<VertexArrayObject>::operator->((shared_ptr<VertexArrayObject>*)this_00);
            pVVar12->Create(param_1);
        } else {
            pIVar11 = (InputAssemblerState*)this_05->Instance();
            local_48.Register(pIVar11, this);
            shared_ptr<VertexArrayObject>::operator=((shared_ptr<VertexArrayObject>*)this_00, (shared_ptr*)&local_48);
            local_48.~shared_ptr();
        }
        pVVar12 =
            (VertexArrayObject*)shared_ptr<VertexArrayObject>::operator->((shared_ptr<VertexArrayObject>*)this_00);
        pVVar12->Bind(param_1);
        BindIndexBuffer(this);
        if ((field_8 == (VertexDeclaration*)0) || (iVar7 = (field_8, 0)->GetVertexStride(), iVar7 == 0)) {
            (*___glewBindBuffer)(34962, 0);
            CheckGlErrorInternal("glBindBuffer GL_ARRAY_BUFFER",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "state/OGL/InputAssemblerState_OGL.cpp",
                                 281);
            return;
        }
        this_02 = (Array<VertexElementDesc, eastl::allocator>*)field_8->second();
        this_03 = (Array<unsigned int, eastl::allocator>*)field_8->GetDefaultValue();
        iVar7 = field_8->GetStreamCountLastMix();
        if (iVar7 == 1) {
            puVar13 = (uint*)Array<VertexElementDesc, eastl::allocator>::operator[](this_02, 0);
            piVar14 =
                (int*)std::array<unsigned int, 8ul>::operator[]((array<unsigned int, 8ul>*)&field_156, (ulong)*puVar13);
            iVar19 = *piVar14;
            if (iVar19 == 0) {
                /* WARNING: Subroutine does not return */
                LogAssert("vertexBuffer > 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/OGL/"
                          "InputAssemblerState_OGL.cpp",
                          229, (char*)0);
            }
            cVar5 = (*___glewIsBuffer)(iVar19);
            if (cVar5 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("glIsBuffer(vertexBuffer)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/OGL/"
                          "InputAssemblerState_OGL.cpp",
                          230, (char*)0);
            }
            (*___glewBindBuffer)(34962, iVar19);
            CheckGlErrorInternal("glBindBuffer GL_ARRAY_BUFFER",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "state/OGL/InputAssemblerState_OGL.cpp",
                                 231);
        }
        this_06 = this_02;
        lVar15 = this_02->end();
        if (lVar15 != 0) {
            local_34 = 4294967295;
            uVar18 = 1;
            uVar21 = 0;
            do {
                uVar20 = uVar18;
                iVar19 = (int)uVar20 + -1;
                puVar13 = (uint*)Array<VertexElementDesc, eastl::allocator>::operator[](this_02, uVar21);
                if (puVar13[6] == 15) {
                    (*___glewDisableVertexAttribArray)(iVar19);
                    CheckGlErrorInternal("glDisableVertexAttribArray",
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                         "render/state/OGL/InputAssemblerState_OGL.cpp",
                                         268);
                } else {
                    if ((1 < iVar7) && (*puVar13 != local_34)) {
                        piVar14 = (int*)std::array<unsigned int, 8ul>::operator[]((array<unsigned int, 8ul>*)&field_156,
                                                                                  (ulong)*puVar13);
                        iVar1 = *piVar14;
                        if (iVar1 == 0) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("vertexBuffer > 0",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                      "render/state/OGL/InputAssemblerState_OGL.cpp",
                                      247, (char*)0);
                        }
                        cVar5 = (*___glewIsBuffer)(iVar1);
                        if (cVar5 == '\0') {
                            /* WARNING: Subroutine does not return */
                            LogAssert("glIsBuffer(vertexBuffer)",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                      "render/state/OGL/InputAssemblerState_OGL.cpp",
                                      248, (char*)0);
                        }
                        (*___glewBindBuffer)(34962, iVar1);
                        CheckGlErrorInternal("glBindBuffer GL_ARRAY_BUFFER",
                                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                             "hal/render/state/OGL/InputAssemblerState_OGL.cpp",
                                             249);
                        local_34 = *puVar13;
                    }
                    new (&local_48) GLVertexElementFormat(puVar13[4]);
                    iVar8 = (field_8, *puVar13)->GetVertexStride();
                    piVar14 = (int*)Array<unsigned int, eastl::allocator>::operator[](this_03, uVar21);
                    iVar1 = *piVar14;
                    uVar9 = GetShaderInputElementComponentSize(puVar13[4]);
                    if ((uint)(iVar8 + iVar1) % uVar9 != 0) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("(m_pVertexDecl->GetVertexStride(elemDesc.m_Stream) + vertexElemByteOffsets[iElem]) "
                                  "% GetShaderInputElementComponentSize(elemDesc.m_Format) == 0",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                  "state/OGL/InputAssemblerState_OGL.cpp",
                                  255, "Attribute %s not aligned to multiple of its size", *(undefined8*)(puVar13 + 2));
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
                    uVar10 = (field_8, *puVar13)->GetVertexStride();
                    puVar17 = (undefined4*)Array<unsigned int, eastl::allocator>::operator[](this_03, uVar21);
                    (*pcVar2)(iVar19, uVar4, uVar3, (char)uVar9, uVar10, *puVar17);
                    CheckGlErrorInternal("glVertexAttribPointer",
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                         "render/state/OGL/InputAssemblerState_OGL.cpp",
                                         264);
                }
                this_06 = this_02;
                uVar16 = this_02->end();
                uVar18 = (ulong)((int)uVar20 + 1);
                uVar21 = uVar20;
            } while (uVar20 < uVar16);
        }
        this_04 = (MapArea*)this_06->Instance();
        lVar15 = this_04->GetOrigin();
        uVar9 = *(uint*)(lVar15 + 100);
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

    // 0x100bf64e0, 64 bytes, placed by __FILE__ string
    // InputAssemblerState::BindIndexBuffer() const
    void InputAssemblerState::BindIndexBuffer() {
        (*___glewBindBuffer)(34963, field_152);
        CheckGlErrorInternal("glBindBuffer GL_ELEMENT_ARRAY_BUFFER",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/"
                             "OGL/InputAssemblerState_OGL.cpp",
                             195);
    }

    // 0x100bf6520, 80 bytes, placed by __FILE__ string
    // InputAssemblerState::SetIndexBuffer(IndexBuffer const*, unsigned int)
    void InputAssemblerState::SetIndexBuffer(IndexBuffer* param_1, uint param_2) {
        undefined4 in_register_00000034;
        BufferInterface* this;

        this = (BufferInterface*)CONCAT44(in_register_00000034, param_2);
        if (this != (BufferInterface*)0) {
            if (GetNativeBuffer() == 0) {
                /* WARNING: Subroutine does not return */
                LogAssert("pIndexBuffer->GetNativeBuffer()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/OGL/"
                          "InputAssemblerState_OGL.cpp",
                          289, (char*)0);
            }
        }
        *(BufferInterface**)&param_1[1].field_28 = this;
        UpdateGLIndexBufferCache((InputAssemblerState*)param_1);
    }

} // namespace jag::render
