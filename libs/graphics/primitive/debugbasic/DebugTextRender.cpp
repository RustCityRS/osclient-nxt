// libs/graphics/primitive/debugbasic/DebugTextRender.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.primitive.debugbasic

namespace jag {
    class DebugTextRender {
    public:
        DebugTextRender();
        void Render(render::RenderContext&, render::DrawCallState const&, ViewTransforms const&,
                    eastl::vector<eastl::pair<DebugText<DebugDataBasic> const*, float>, eastl::allocator> const&, bool);
        static /* 8 bytes */ m_debugTextRange; // = 15000
        static /* 48 bytes */ m_debugTextRenderCallback;
        static /* 48 bytes */ m_debugTextRenderGuiRenderCallback;

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x100f453f0, 8 bytes, __data
    DebugTextRender::m_debugTextRange = 15000;

    // 0x103bc2100, 48 bytes, __common; zero-initialised
    DebugTextRender::m_debugTextRenderCallback;

    // 0x103bc2130, 48 bytes, __common; zero-initialised
    DebugTextRender::m_debugTextRenderGuiRenderCallback;

    // 0x1009c9260, 16 bytes, complete-object constructor, placed by class name and debug map
    // DebugTextRender::DebugTextRender(): jumps straight to the base-object constructor

    // 0x1009caad0, 704 bytes, placed by class name
    // DebugTextRender::Render(render::RenderContext&, render::DrawCallState const&, ViewTransforms const&, eastl::vector<eastl::pair<DebugText<DebugDataBasic> const*, float>, eastl::allocator> const&, bool)
    void DebugTextRender::Render(RenderContext* param_1, DrawCallState* param_2, ViewTransforms* param_3,
                                 vector* param_4, bool param_5) {
        Vector3T* pVVar1;
        bool bVar2;
        uint uVar4;
        Matrix44T* pMVar5;
        Matrix44T* pMVar6;
        undefined8* puVar7;
        undefined8* puVar8;
        float* pfVar9;
        vector* pvVar10;
        math* pmVar11;
        undefined7 in_register_00000081;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this;
        math amStackY_30e8[128];
        DrawCallState in_stack_ffffffffffffff18;
        DrawCallState local_a8;
        Vector4T<float> local_78[16];
        Vector3T<int> local_68[16];
        undefined8* local_50;
        float local_44;
        float local_40;
        undefined4 local_3c;
        float local_38;
        float local_34;

        this = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)CONCAT71(
            in_register_00000081, param_5);
        bVar2 = param_1->operator_cast_to_bool();
        if (bVar2) {
            if (eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
                    this) == '\0') {
                pMVar5 = (Matrix44T*)param_4->GetScreen();
                pMVar6 = (Matrix44T*)param_4->GetOrigin();
                math::operator*(amStackY_30e8 + 128, pMVar5, pMVar6);
                math::Vector3T<int>::Vector3T(local_68);
                math::Vector4T<float>::Vector4T(local_78);
                puVar7 = (undefined8*)HeapBeginPtr();
                puVar8 = (undefined8*)end();
                if (puVar7 != puVar8) {
                    local_50 = puVar8;
                    do {
                        pVVar1 = (Vector3T*)*puVar7;
                        bVar2 = math::operator==((Vector3T*)local_68, pVVar1);
                        if (bVar2) {
                            pfVar9 = (float*)local_78->y();
                            *pfVar9 = *pfVar9 + -20.0;
                        } else {
                            local_78->Set(pVVar1, 1.0);
                            pmVar11 = amStackY_30e8 + 128;
                            math::Vector4T<float>::operator*=(local_78, (Matrix44T*)pmVar11);
                            pfVar9 = (float*)local_78->qw();
                            local_34 = *pfVar9;
                            pvVar10 = local_78->SSOBeginPtr(pmVar11);
                            *(float*)pvVar10 = *(float*)pvVar10 / local_34;
                            pfVar9 = (float*)local_78->qw();
                            local_34 = *pfVar9;
                            pfVar9 = (float*)local_78->y();
                            *pfVar9 = *pfVar9 / local_34;
                            pfVar9 = (float*)local_78->qw();
                            local_34 = *pfVar9;
                            pfVar9 = (float*)local_78->second();
                            *pfVar9 = *pfVar9 / local_34;
                            local_68->SetXYZ(pVVar1);
                        }
                        pfVar9 = (float*)local_78->qw();
                        if (0.0 < *pfVar9) {
                            pfVar9 = (float*)local_78->qw();
                            if (*pfVar9 <= (float)(int)m_debugTextRange) {
                                local_34 = (float)(int)m_debugTextRange;
                                pfVar9 = (float*)local_78->qw();
                                local_38 = (local_34 - *pfVar9) / (float)(int)m_debugTextRange;
                                local_44 = 0.1;
                                local_40 = 1.0;
                                local_34 = math::Clamp<float>(&local_38, &local_44, &local_40);
                                new (&local_a8) render::DrawCallState(param_3);
                                uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                new (&local_3c)
                                    math::ColourStorage8888<math::ARGB8StorageLayout>(*(uint*)(pVVar1 + 48));
                                math::ColourStorage8888<math::RGBA8StorageLayout>::ColourStorage8888<
                                    math::ARGB8StorageLayout>((ColourStorage8888<math::RGBA8StorageLayout>*)&local_38,
                                                              local_3c);
                                local_38.GetX();
                                std::function<void(render::DrawCallState, math::Vector4T<float> const&, char const*,
                                                   unsigned int)>::
                                operator()((function<void(render::DrawCallState, math::Vector4T<float> const&,
                                                          char const*, unsigned int)>*)&m_debugTextRenderCallback,
                                           in_stack_ffffffffffffff18, (Vector4T*)&local_a8, (char*)local_78, uVar4);
                                local_a8.~DrawCallState();
                                puVar8 = local_50;
                            }
                        }
                        puVar7 = puVar7 + 2;
                    } while (puVar7 != puVar8);
                }
                std::function<void()>::operator()((function<void()>*)&m_debugTextRenderGuiRenderCallback);
            }
        }
    }

    // 0x1009cbc20, 16 bytes, base-object constructor, placed by class name
    // DebugTextRender::DebugTextRender()
    void DebugTextRender::DebugTextRender() {}

} // namespace jag
