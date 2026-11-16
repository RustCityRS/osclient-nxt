// libs/hal/render/Render.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::render {
    class GLFormat {
    public:
        GLFormat(int arg1, unsigned int arg2, unsigned int arg3, unsigned int arg4);
        GLFormat(Format format);

    private:
        uint8_t field_0[16];
        uint8_t _unknown_16[4];
    };

    class GLVertexElementFormat {
    public:
        GLVertexElementFormat(unsigned int arg1, int arg2, unsigned int arg3);
        GLVertexElementFormat(unsigned int waterNormalParamsEncoding, int waterNormalParamGroup, unsigned int arg3);
        GLVertexElementFormat(ShaderInputFormat shaderInputFormat);

    private:
        uint8_t field_0[12];
        uint8_t _unknown_12[4];
    };

    class RenderTargetBlendDesc {
    public:
        RenderTargetBlendDesc();
        void SetToDefault();
        uint32_t operator==(const RenderTargetBlendDesc& renderTargetBlendDesc) const;

    private:
        uint8_t field_0;
        uint8_t _unknown_1[3];
        int field_4;
        int field_8;
        uint8_t _unknown_12[4];
        int field_16;
        int field_20;
        int field_24;
        uint8_t field_28;
        uint8_t _unknown_29[3];
    };

    class RenderTargetData {
    public:
        RenderTargetData(RenderTargets* renderTargets, const math::Vector4T<float>& vector4, unsigned int arg3,
                         float arg4, unsigned int arg5);
        RenderTargetData* operator=(const RenderTargetData& renderTargetData);

    private:
        RenderTargets* field_0;
        uint8_t _unknown_8[8];
        uint64_t field_16;
        uint64_t field_24;
        uint8_t _unknown_32[16];
        unsigned int field_48;
        float field_52;
        unsigned int field_56;
        uint8_t _unknown_60[4];
    };

    class ResourceConfig {
    public:
        ResourceConfig();

    private:
        uint64_t field_0;
        uint64_t field_8;
        uint32_t field_16;
        uint8_t _unknown_20[4];
    };

    // 0x100462970
    RenderTargets* GetEnvMapFaceRT(RenderTargets& renderTargets, int arg2) {
        auto cubeFace = GetCubeMapFace(arg2);
        renderTargets.SetTargetCubeMapFace(0, cubeFace);
        return renderTargets;
    }

    // 0x1008a9c50
    unsigned int RGBAToABGR(unsigned int arg1) {
        return arg1 >> 24 | (arg1 & 16711680) >> 8 | (arg1 & 65280) << 8 | arg1 << 24;
    }

    // 0x100934c80
    bool operator>=(GpuMemoryProfile gpuMemoryProfile1, GpuMemoryProfile gpuMemoryProfile2) {
        return (int)gpuMemoryProfile2 <= (int)gpuMemoryProfile1;
    }

    // 0x100bce610
    int ComputeMaxMipLevels(int arg1, int arg2) {
        if ((arg1 < 1) || (arg2 < 1)) {
            LogAssert("width >= 1 && height >= 1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/"
                      "TextureUtils.h",
                      17, nullptr);
        }
        int iVar1 = eastl::max<int>(arg1, arg2);
        _log2((double)iVar1);
        double dVar2 = (double)_floor();
        return (int)(long)dVar2 + 1;
    }

    // 0x100bcf680
    void GetGLString<eastl::fixed_string<char, 1024>>(eastl::fixed_string<char, 1024>& str, unsigned int arg2) {
        auto str_00 = _glGetString(arg2);
        CheckGlErrorInternal(
            "glGetString",
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/GLUtils.inl",
            10);
        if (str_00 == nullptr) {
            str_00 = "<unknown>";
        }
        str.append(str_00);
    }

    // 0x100bd4c90
    void operator<(const VAOManager::Key& key1, const VAOManager::Key& key2) {
        tuple<IndexBuffer const * _const&, unsigned int const&, unsigned int const&,
              eastl::fixed_vector<VertexBuffer const*, _8ul> const&, eastl::fixed_vector<unsigned int, _8ul> const&>
            local_70[40];
        tuple<IndexBuffer const * _const&, unsigned int const&, unsigned int const&,
              eastl::fixed_vector<VertexBuffer const*, _8ul> const&, eastl::fixed_vector<unsigned int, _8ul> const&>
            local_48[40];

        std::tie<IndexBuffer const* const, unsigned int const, unsigned int const,
                 eastl::fixed_vector<VertexBuffer const*, 8ul> const, eastl::fixed_vector<unsigned int, 8ul> const>(
            *local_70, key1, key1.field_112, key1.field_192, key1.field_8);
        std::tie<IndexBuffer const* const, unsigned int const, unsigned int const,
                 eastl::fixed_vector<VertexBuffer const*, 8ul> const, eastl::fixed_vector<unsigned int, 8ul> const>(
            *local_48, key2, key2.field_112, key2.field_192, key2.field_8);
        std::operator<(local_70, local_48);
    }

    // 0x100bdd420
    bool CopyGlStringToBuffer<eastl::string>(eastl::string& str, unsigned int arg2) {
        auto str_00 = _glGetString(arg2);
        CheckGlErrorInternal(
            "glGetString",
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/GLUtils.h",
            164);
        if (str_00 == nullptr) {
            str.clear();
        } else {
            str.assign(str_00);
        }
        return str_00 != nullptr;
    }

    // 0x100bf1460
    WrapArray<math::Matrix44T<float> const>
    AllocateScratchArrayAndCopy<math::Matrix44T<float>>(const math::Matrix44T<float>* matrix44, unsigned long arg2) {
        auto renderDevice = matrix44->Instance();
        auto matrix44_00 = renderDevice->GetPrimaryRenderContext();
        AllocateScratchArrayAndCopy<math::Matrix44T<float>>((RenderContext*)matrix44, matrix44_00, arg2);
        return matrix44;
    }

    // 0x100bf1500
    WrapArray<math::Matrix33T<float> const>
    AllocateScratchArrayAndCopy<math::Matrix33T<float>>(const math::Matrix33T<float>* matrix33, unsigned long arg2) {
        auto renderDevice = matrix33->Instance();
        auto matrix33_00 = renderDevice->GetPrimaryRenderContext();
        AllocateScratchArrayAndCopy<math::Matrix33T<float>>((RenderContext*)matrix33, matrix33_00, arg2);
        return matrix33;
    }

    // 0x100bf15a0
    WrapArray<math::Matrix22T<float> const>
    AllocateScratchArrayAndCopy<math::Matrix22T<float>>(const math::Matrix22T<float>* matrix22, unsigned long arg2) {
        auto renderDevice = matrix22->Instance();
        auto matrix22_00 = renderDevice->GetPrimaryRenderContext();
        AllocateScratchArrayAndCopy<math::Matrix22T<float>>((RenderContext*)matrix22, matrix22_00, arg2);
        return matrix22;
    }

    // 0x100bf1610
    WrapArray<float const> AllocateScratchArrayAndCopy<float>(const float* arg1, unsigned long arg2) {
        auto renderDevice = arg1->Instance();
        auto arg2_00 = renderDevice->GetPrimaryRenderContext();
        AllocateScratchArrayAndCopy<float>((RenderContext*)arg1, arg2_00, arg2);
        return arg1;
    }

    // 0x100bf1660
    WrapArray<unsigned int const> AllocateScratchArrayAndCopy<unsigned int>(const unsigned int* arg1,
                                                                            unsigned long arg2) {
        auto renderDevice = arg1->Instance();
        auto arg2_00 = renderDevice->GetPrimaryRenderContext();
        AllocateScratchArrayAndCopy<unsigned int>((RenderContext*)arg1, arg2_00, arg2);
        return arg1;
    }

    // 0x100bf1740
    WrapArray<int const> AllocateScratchArrayAndCopy<int>(const int* arg1, unsigned long arg2) {
        auto renderDevice = arg1->Instance();
        auto arg2_00 = renderDevice->GetPrimaryRenderContext();
        AllocateScratchArrayAndCopy<int>((RenderContext*)arg1, arg2_00, arg2);
        return arg1;
    }

    // 0x100bf1890
    WrapArray<math::Vector4T<float> const>
    AllocateScratchArrayAndCopy<math::Vector4T<float>>(const math::Vector4T<float>* vector4, unsigned long arg2) {
        auto renderDevice = vector4->Instance();
        auto vector4_00 = renderDevice->GetPrimaryRenderContext();
        AllocateScratchArrayAndCopy<math::Vector4T<float>>((RenderContext*)vector4, vector4_00, arg2);
        return vector4;
    }

    // 0x100bf1920
    WrapArray<math::Vector3T<float> const>
    AllocateScratchArrayAndCopy<math::Vector3T<float>>(const math::Vector3T<float>* vector3, unsigned long arg2) {
        auto renderDevice = vector3->Instance();
        auto vector3_00 = renderDevice->GetPrimaryRenderContext();
        AllocateScratchArrayAndCopy<math::Vector3T<float>>((RenderContext*)vector3, vector3_00, arg2);
        return vector3;
    }

    // 0x100bf19b0
    WrapArray<math::Vector2T<float> const>
    AllocateScratchArrayAndCopy<math::Vector2T<float>>(const math::Vector2T<float>* vector2, unsigned long arg2) {
        auto renderDevice = vector2->Instance();
        auto vector2_00 = renderDevice->GetPrimaryRenderContext();
        AllocateScratchArrayAndCopy<math::Vector2T<float>>((RenderContext*)vector2, vector2_00, arg2);
        return vector2;
    }

    // 0x100bf42e0
    VectorFastPool<ComputePipelineState>& GetStateObjectPool<ComputePipelineState>() {
        unsigned long* puVar2;
        unsigned long local_20[2];

        if (*PTR_s_StateObjectPool_100ee50e8 == '\0') {
            if (___cxa_guard_acquire(PTR_s_StateObjectPool_100ee50e8) != 0) {
                local_20[0] = 16;
                local_20[1] = 8;
                puVar2 = std::max<unsigned long>(*local_20, *(local_20 + 1));
                new (PTR_s_StateObjectPool_100ee9d58) VectorFastPool<ComputePipelineState>(512, *puVar2);
                ___cxa_atexit(PTR__VectorFastPool_100ee63a0, PTR_s_StateObjectPool_100ee9d58, 4294967296);
                ___cxa_guard_release(PTR_s_StateObjectPool_100ee50e8);
            }
        }
        return (VectorFastPool<ComputePipelineState>*)PTR_s_StateObjectPool_100ee9d58;
    }

    // 0x100bf4910
    VectorFastPool<InputAssemblerState>& GetStateObjectPool<InputAssemblerState>() {
        unsigned long* puVar2;
        unsigned long local_20[2];

        if (*PTR_s_StateObjectPool_100ee50d8 == '\0') {
            if (___cxa_guard_acquire(PTR_s_StateObjectPool_100ee50d8) != 0) {
                local_20[0] = 16;
                local_20[1] = 8;
                puVar2 = std::max<unsigned long>(*local_20, *(local_20 + 1));
                new (PTR_s_StateObjectPool_100ee9d48) VectorFastPool<InputAssemblerState>(512, *puVar2);
                ___cxa_atexit(PTR__VectorFastPool_100ee6390, PTR_s_StateObjectPool_100ee9d48, 4294967296);
                ___cxa_guard_release(PTR_s_StateObjectPool_100ee50d8);
            }
        }
        return (VectorFastPool<InputAssemblerState>*)PTR_s_StateObjectPool_100ee9d48;
    }

    // 0x100bf4b20
    VectorFastPool<RenderPipelineState>& GetStateObjectPool<RenderPipelineState>() {
        unsigned long* puVar2;
        unsigned long local_20[2];

        if (*PTR_s_StateObjectPool_100ee50e0 == '\0') {
            if (___cxa_guard_acquire(PTR_s_StateObjectPool_100ee50e0) != 0) {
                local_20[0] = 16;
                local_20[1] = 8;
                puVar2 = std::max<unsigned long>(*local_20, *(local_20 + 1));
                new (PTR_s_StateObjectPool_100ee9d50) VectorFastPool<RenderPipelineState>(512, *puVar2);
                ___cxa_atexit(PTR__VectorFastPool_100ee6398, PTR_s_StateObjectPool_100ee9d50, 4294967296);
                ___cxa_guard_release(PTR_s_StateObjectPool_100ee50e0);
            }
        }
        return (VectorFastPool<RenderPipelineState>*)PTR_s_StateObjectPool_100ee9d50;
    }

    // 0x100bf4d30
    VectorFastPool<OutputMergerState>& GetStateObjectPool<OutputMergerState>() {
        unsigned long* puVar2;
        unsigned long local_20[2];

        if (*PTR_s_StateObjectPool_100ee50d0 == '\0') {
            if (___cxa_guard_acquire(PTR_s_StateObjectPool_100ee50d0) != 0) {
                local_20[0] = 16;
                local_20[1] = 16;
                puVar2 = std::max<unsigned long>(*local_20, *(local_20 + 1));
                new (PTR_s_StateObjectPool_100ee9d40) VectorFastPool<OutputMergerState>(512, *puVar2);
                ___cxa_atexit(PTR__VectorFastPool_100ee6388, PTR_s_StateObjectPool_100ee9d40, 4294967296);
                ___cxa_guard_release(PTR_s_StateObjectPool_100ee50d0);
            }
        }
        return (VectorFastPool<OutputMergerState>*)PTR_s_StateObjectPool_100ee9d40;
    }

    // 0x100c0dfa0
    void CreatePermanentBuffers<IndexBuffer>(unsigned int arg1, unsigned int arg2) {
        unsigned int uVar4;
        uint32_t in_register_0000003c;
        BufferCreationReason in_R8D;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_38;

        ReturnValue* returnValue = (ReturnValue*)(((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1);
        if (!(this_thread::IsMainThread())) {
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "PooledBuffer.cpp",
                      374, nullptr);
        }
        if (arg2 != 0) {
            uVar4 = arg2;
            do {
                PooledBuffer<IndexBuffer>::PooledBuffer();
                ((unsigned int)&local_90)->Create(arg1, 47);
                returnValue = &local_90;
                uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
        }
        long lVar2 = returnValue->Instance();
        auto local_90 = ((lVar2 + 32))->lower_bound(arg1);
        local_38.end();
        if (!(local_90 != local_38)) {
            LogAssert("it != managedBuffers.end()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "PooledBuffer.cpp",
                      386, nullptr);
        }
        long lVar3 = *local_90;
        lVar2 = ((lVar3 + 8))->HeapBeginPtr();
        lVar3 = ((lVar3 + 8))->end();
        for (; lVar2 != lVar3; lVar2 = lVar2 + 96) {
            *(uint32_t*)(lVar2 + 88) = 4;
        }
        ((BufferPoolStats*)"IndexBuffer")->RecordBufferCreation((char*)(unsigned long)arg1, arg2, 0, in_R8D);
    }

    // 0x100c0faa0
    void CreatePermanentBuffers<VertexBuffer>(unsigned int arg1, unsigned int arg2) {
        unsigned int uVar4;
        uint32_t in_register_0000003c;
        BufferCreationReason in_R8D;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_38;

        ReturnValue* returnValue = (ReturnValue*)(((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1);
        if (!(this_thread::IsMainThread())) {
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "PooledBuffer.cpp",
                      374, nullptr);
        }
        if (arg2 != 0) {
            uVar4 = arg2;
            do {
                PooledBuffer<VertexBuffer>::PooledBuffer();
                ((unsigned int)&local_88)->Create(arg1, 47);
                returnValue = &local_88;
                uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
        }
        long lVar2 = returnValue->Instance();
        auto local_88 = ((lVar2 + 32))->lower_bound(arg1);
        local_38.end();
        if (!(local_88 != local_38)) {
            LogAssert("it != managedBuffers.end()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "PooledBuffer.cpp",
                      386, nullptr);
        }
        long lVar3 = *local_88;
        lVar2 = ((lVar3 + 8))->HeapBeginPtr();
        lVar3 = ((lVar3 + 8))->end();
        for (; lVar2 != lVar3; lVar2 = lVar2 + 88) {
            *(uint32_t*)(lVar2 + 80) = 4;
        }
        ((BufferPoolStats*)"VertexBuffer")->RecordBufferCreation((char*)(unsigned long)arg1, arg2, 0, in_R8D);
    }

    // 0x100c110d0
    void CreatePermanentBuffers<ShaderConstBuffer>(unsigned int arg1, unsigned int arg2) {
        unsigned int uVar4;
        uint32_t in_register_0000003c;
        BufferCreationReason in_R8D;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_38;

        ReturnValue* returnValue = (ReturnValue*)(((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1);
        if (!(this_thread::IsMainThread())) {
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "PooledBuffer.cpp",
                      374, nullptr);
        }
        if (arg2 != 0) {
            uVar4 = arg2;
            do {
                PooledBuffer<ShaderConstBuffer>::PooledBuffer();
                ((unsigned int)&local_88)->Create(arg1, 47);
                returnValue = &local_88;
                uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
        }
        long lVar2 = returnValue->Instance();
        auto local_88 = ((lVar2 + 32))->lower_bound(arg1);
        local_38.end();
        if (!(local_88 != local_38)) {
            LogAssert("it != managedBuffers.end()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "PooledBuffer.cpp",
                      386, nullptr);
        }
        long lVar3 = *local_88;
        lVar2 = ((lVar3 + 8))->HeapBeginPtr();
        lVar3 = ((lVar3 + 8))->end();
        for (; lVar2 != lVar3; lVar2 = lVar2 + 88) {
            *(uint32_t*)(lVar2 + 80) = 4;
        }
        ((BufferPoolStats*)"ShaderConstBuffer")->RecordBufferCreation((char*)(unsigned long)arg1, arg2, 0, in_R8D);
    }

    // 0x100c125a0
    void CreatePermanentBuffers<PixelUnpackBuffer>(unsigned int arg1, unsigned int arg2) {
        unsigned int uVar4;
        uint32_t in_register_0000003c;
        BufferCreationReason in_R8D;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_38;

        ReturnValue* returnValue = (ReturnValue*)(((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1);
        if (!(this_thread::IsMainThread())) {
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "PooledBuffer.cpp",
                      374, nullptr);
        }
        if (arg2 != 0) {
            uVar4 = arg2;
            do {
                PooledBuffer<PixelUnpackBuffer>::PooledBuffer();
                ((unsigned int)&local_88)->Create(arg1, 47);
                returnValue = &local_88;
                uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
        }
        long lVar2 = returnValue->Instance();
        auto local_88 = ((lVar2 + 32))->lower_bound(arg1);
        local_38.end();
        if (!(local_88 != local_38)) {
            LogAssert("it != managedBuffers.end()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "PooledBuffer.cpp",
                      386, nullptr);
        }
        long lVar3 = *local_88;
        lVar2 = ((lVar3 + 8))->HeapBeginPtr();
        lVar3 = ((lVar3 + 8))->end();
        for (; lVar2 != lVar3; lVar2 = lVar2 + 88) {
            *(uint32_t*)(lVar2 + 80) = 4;
        }
        ((BufferPoolStats*)"PixelUnpackBuffer")->RecordBufferCreation((char*)(unsigned long)arg1, arg2, 0, in_R8D);
    }

    // 0x100c26d50
    void GetGLString<eastl::string>(eastl::string& str, unsigned int arg2) {
        auto str_00 = _glGetString(arg2);
        CheckGlErrorInternal(
            "glGetString",
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/GLUtils.inl",
            10);
        if (str_00 == nullptr) {
            str_00 = "<unknown>";
        }
        str.append(str_00);
    }

    // 0x100c2dea0
    bool operator<(GpuMemoryProfile gpuMemoryProfile1, GpuMemoryProfile gpuMemoryProfile2) {
        return (int)gpuMemoryProfile1 < (int)gpuMemoryProfile2;
    }

} // namespace jag::render

namespace jag::graphics {
    class RenderChunk {
    public:
        RenderChunk();

    private:
        uint64_t field_0;
        uint64_t field_8;
        uint64_t field_16;
        uint32_t field_24;
    };

    // 0x1001dc5c0
    RenderChunk::RenderChunk() : field_0(0), field_8(4290672328704), field_16(4294967295998), field_24(4294967294) {}

} // namespace jag::graphics

namespace jag::oldscape::rs2lib::worldmap {
    class RenderBounds {
    public:
        RenderBounds();
    };

} // namespace jag::oldscape::rs2lib::worldmap
