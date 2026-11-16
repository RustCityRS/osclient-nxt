// libs/graphics/primitive/debugbasic/DebugTextRender.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.primitive.debugbasic

namespace jag {
    class DebugTextRender {
    public:
        DebugTextRender();
        void Render(render::RenderContext& renderContext, const render::DrawCallState& drawCallState,
                    const ViewTransforms& viewTransforms,
                    eastl::vector<eastl::pair<DebugText<DebugDataBasic> const*, float>> const& pairs, bool arg5);
        static int64_t m_debugTextRange; // = 15000
        static uint8_t m_debugTextRenderCallback[48];
        static uint8_t m_debugTextRenderGuiRenderCallback[48];

        uint8_t _unknown_0[1];
    };

    // 0x100f453f0
    int64_t DebugTextRender::m_debugTextRange = 15000;

    // 0x103bc2100
    uint8_t DebugTextRender::m_debugTextRenderCallback[48];

    // 0x103bc2130
    uint8_t DebugTextRender::m_debugTextRenderGuiRenderCallback[48];

    // 0x1009caad0
    void DebugTextRender::Render(render::RenderContext& renderContext, const render::DrawCallState& drawCallState,
                                 const ViewTransforms& viewTransforms,
                                 eastl::vector<eastl::pair<DebugText<DebugDataBasic> const*, float>> const& pairs,
                                 bool arg5) {
        Vector3T<float>* vector32;
        unsigned int uVar3;
        Matrix44T<float>* matrix442;
        uint64_t* puVar4;
        uint64_t* puVar5;
        float* pfVar6;
        char* str;
        uint64_t in_register_00000081;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* vector;
        Matrix44T<float> local_e8;
        DrawCallState local_a8;
        Vector4T<float> local_78;
        Vector3T<int> local_68;
        uint64_t* local_50;
        unsigned int local_3c;
        float local_38;
        float local_34;

        vector = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)(((uint64_t)in_register_00000081
                                                                                          << 8) |
                                                                                         (uint8_t)arg5);
        if (renderContext.operator_cast_to_bool()) {
            if (!(vector->empty())) {
                matrix442 = (Matrix44T<float>*)pairs.GetScreen();
                pairs.GetOrigin();
                local_e8** matrix442;
                local_68 = math::Vector3T();
                local_78 = math::Vector4T();
                puVar4 = (uint64_t*)vector->HeapBeginPtr();
                puVar5 = (uint64_t*)vector->end();
                if (puVar4 != puVar5) {
                    local_50 = puVar5;
                    do {
                        vector32 = (Vector3T<float>*)*puVar4;
                        if (local_68 == *vector32) {
                            pfVar6 = (float*)local_78.y();
                            *pfVar6 = *pfVar6 - 20.0;
                        } else {
                            local_78.Set(*vector32, 1.0);
                            local_78 *= &local_e8;
                            pfVar6 = (float*)local_78.qw();
                            local_34 = *pfVar6;
                            pfVar6 = (float*)local_78.SSOBeginPtr();
                            *pfVar6 = *pfVar6 / local_34;
                            pfVar6 = (float*)local_78.qw();
                            local_34 = *pfVar6;
                            pfVar6 = (float*)local_78.y();
                            *pfVar6 = *pfVar6 / local_34;
                            pfVar6 = (float*)local_78.qw();
                            local_34 = *pfVar6;
                            pfVar6 = (float*)local_78.second();
                            *pfVar6 = *pfVar6 / local_34;
                            local_68.SetXYZ(*vector32);
                        }
                        pfVar6 = (float*)local_78.qw();
                        if (0.0 < *pfVar6) {
                            pfVar6 = (float*)local_78.qw();
                            if (*pfVar6 <= (float)(int)m_debugTextRange) {
                                local_34 = (float)(int)m_debugTextRange;
                                pfVar6 = (float*)local_78.qw();
                                local_38 = (local_34 - *pfVar6) / (float)(int)m_debugTextRange;
                                local_34 = math::Clamp<float>(local_38, 0.1, 1.0);
                                local_a8 = render::DrawCallState(viewTransforms);
                                str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                new (&local_3c) math::ColourStorage8888(*(unsigned int*)(vector32 + 48));
                                local_38.ColourStorage8888<math::ARGB8StorageLayout>(
                                    (ColourStorage8888<math::ARGB8StorageLayout>*)(unsigned long)local_3c);
                                uVar3 = local_38.GetX();
                                std::function<void(render::DrawCallState, math::Vector4T<float> const&, char const*,
                                                   unsigned int)>::
                                operator()((function<void(render::DrawCallState, math::Vector4T<float> const&,
                                                          char const*, unsigned int)>*)&m_debugTextRenderCallback,
                                           &local_a8, &local_78, str, (int)(local_34 * 255.0) | uVar3 & 4294967040);
                                puVar5 = local_50;
                            }
                        }
                        puVar4 = puVar4 + 2;
                    } while (puVar4 != puVar5);
                }
                std::function<void()>::operator()((function<void()>*)&m_debugTextRenderGuiRenderCallback);
            }
        }
    }

    // 0x1009cbc20
    DebugTextRender::DebugTextRender() {}

} // namespace jag
