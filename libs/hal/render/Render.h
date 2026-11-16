// libs/hal/render/Render.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::render {
    class GLFormat {
    public:
        GLFormat(int, unsigned int, unsigned int, unsigned int);
        GLFormat(Format);

        // data members, from how the methods use this: 20 bytes
        undefined1 field_0[16]; // offset 0
        char _unknown_16[4];
    };

    class GLVertexElementFormat {
    public:
        GLVertexElementFormat(unsigned int, int, unsigned int);
        GLVertexElementFormat(ShaderInputFormat);

        // data members, from how the methods use this: 16 bytes
        undefined1 field_0[12]; // offset 0
        char _unknown_12[4];
    };

    class RenderTargetBlendDesc {
    public:
        RenderTargetBlendDesc();
        void SetToDefault();
        operator==(RenderTargetBlendDesc const&) const;

        // data members, from how the methods use this: 32 bytes
        undefined1 field_0; // offset 0
        char _unknown_1[3];
        int field_4; // offset 4
        int field_8; // offset 8
        char _unknown_12[4];
        int field_16;        // offset 16
        int field_20;        // offset 20
        int field_24;        // offset 24
        undefined1 field_28; // offset 28
        char _unknown_29[3];
    };

    class RenderTargetData {
    public:
        RenderTargetData(RenderTargets*, math::Vector4T<float> const&, unsigned int, float, unsigned int);
        RenderTargetData* operator=(RenderTargetData const&);

        // data members, from how the methods use this: 64 bytes
        RenderTargets* field_0; // offset 0
        char _unknown_8[8];
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        char _unknown_32[16];
        uint field_48;  // offset 48
        float field_52; // offset 52
        uint field_56;  // offset 56
        char _unknown_60[4];
    };

    class ResourceConfig {
    public:
        ResourceConfig();

        // data members, from how the methods use this: 24 bytes
        undefined8 field_0;  // offset 0
        undefined8 field_8;  // offset 8
        undefined4 field_16; // offset 16
        char _unknown_20[4];
    };

    // 0x100462970, 48 bytes, inline, placed by class name
    // GetEnvMapFaceRT(RenderTargets&, int)
    RenderTargets* GetEnvMapFaceRT(RenderTargets* param_1, int param_2) {
        undefined4 uVar1;

        uVar1 = GetCubeMapFace(param_2);
        param_1->SetTargetCubeMapFace(0, uVar1);
        return param_1;
    }

    // 0x1008a9c50, 16 bytes, inline, placed by class name
    // RGBAToABGR(unsigned int)
    uint RGBAToABGR(uint param_1) {
        return param_1 >> 24 | (param_1 & 16711680) >> 8 | (param_1 & 65280) << 8 | param_1 << 24;
    }

    // 0x100934c80, 16 bytes, inline, placed by class name
    // operator>=(GpuMemoryProfile, GpuMemoryProfile)
    /* TEMPNAMEPLACEHOLDERVALUE(GpuMemoryProfile,
   GpuMemoryProfile) */

    bool operator>=(int param_1, int param_2) {
        return param_2 <= param_1;
    }

    // 0x100b04300, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ResourceConfig::ResourceConfig(): jumps straight to the base-object constructor

    // 0x100bce610, 96 bytes, inline, placed by class name
    // ComputeMaxMipLevels(int, int)
    int ComputeMaxMipLevels(int param_1, int param_2) {
        int iVar1;
        double dVar2;

        if ((param_1 < 1) || (param_2 < 1)) {
            /* WARNING: Subroutine does not return */
            LogAssert("width >= 1 && height >= 1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/"
                      "TextureUtils.h",
                      17, (char*)0);
        }
        iVar1 = eastl::max<int>(param_1, param_2);
        _log2((double)iVar1);
        dVar2 = (double)_floor();
        return (int)(long)dVar2 + 1;
    }

    // 0x100bcf680, 80 bytes, inline, placed by class name
    // void GetGLString<eastl::fixed_string<char, 1024, true, eastl::allocator> >(eastl::fixed_string<char, 1024, true, eastl::allocator>&, unsigned int)
    void GetGLString<eastl::fixed_string<char, 1024, true, eastl::allocator>>(fixed_string* param_1, uint param_2) {
        char* pcVar1;

        pcVar1 = (char*)_glGetString(param_2);
        CheckGlErrorInternal(
            "glGetString",
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/GLUtils.inl",
            10);
        if (pcVar1 == (char*)0) {
            pcVar1 = "<unknown>";
        }
        param_1->append(pcVar1);
    }

    // 0x100bd4c90, 112 bytes, inline, placed by class name
    // operator<(VAOManager::Key const&, VAOManager::Key const&)
    /* TEMPNAMEPLACEHOLDERVALUE(VAOManager::Key const&,
   VAOManager::Key const&) */

    void operator<(Key* param_1, Key* param_2) {
        tuple local_70[40];
        tuple local_48[40];

        std::tie<IndexBuffer_const* const, unsigned int const, unsigned int const,
                 eastl::fixed_vector<VertexBuffer_const*, 8ul, true, eastl::allocator> const,
                 eastl::fixed_vector<unsigned int, 8ul, true, eastl::allocator> const>(
            (IndexBuffer**)local_70, (uint*)param_1, &param_1->field_112, (fixed_vector*)&param_1->field_192,
            (fixed_vector*)&param_1->field_8);
        std::tie<IndexBuffer_const* const, unsigned int const, unsigned int const,
                 eastl::fixed_vector<VertexBuffer_const*, 8ul, true, eastl::allocator> const,
                 eastl::fixed_vector<unsigned int, 8ul, true, eastl::allocator> const>(
            (IndexBuffer**)local_48, (uint*)param_2, &param_2->field_112, (fixed_vector*)&param_2->field_192,
            (fixed_vector*)&param_2->field_8);
        std::operator<(local_70, local_48);
    }

    // 0x100bdd420, 80 bytes, inline, placed by class name
    // bool CopyGlStringToBuffer<eastl::string >(eastl::string&, unsigned int)
    bool CopyGlStringToBuffer<eastl::string>(basic_string* param_1, uint param_2) {
        char* pcVar1;

        pcVar1 = (char*)_glGetString(param_2);
        CheckGlErrorInternal(
            "glGetString",
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/GLUtils.h",
            164);
        if (pcVar1 == (char*)0) {
            eastl::string::clear();
        } else {
            param_1->assign(pcVar1);
        }
        return pcVar1 != (char*)0;
    }

    // 0x100bf1460, 64 bytes, inline, placed by class name
    // WrapArray<math::Matrix44T<float> const> AllocateScratchArrayAndCopy<math::Matrix44T<float> >(math::Matrix44T<float> const*, unsigned long)
    render* AllocateScratchArrayAndCopy<math::Matrix44T<float>>(Matrix44T* param_1, ulong param_2) {
        RenderDevice* this_00;
        RenderContext* pRVar1;

        this_00 = (RenderDevice*)Instance();
        pRVar1 = (RenderContext*)this_00->GetPrimaryRenderContext();
        AllocateScratchArrayAndCopy<math::Matrix44T<float>>(this, pRVar1, param_1, param_2);
        return this;
    }

    // 0x100bf1500, 64 bytes, inline, placed by class name
    // WrapArray<math::Matrix33T<float> const> AllocateScratchArrayAndCopy<math::Matrix33T<float> >(math::Matrix33T<float> const*, unsigned long)
    render* AllocateScratchArrayAndCopy<math::Matrix33T<float>>(Matrix33T* param_1, ulong param_2) {
        RenderDevice* this_00;
        RenderContext* pRVar1;

        this_00 = (RenderDevice*)Instance();
        pRVar1 = (RenderContext*)this_00->GetPrimaryRenderContext();
        AllocateScratchArrayAndCopy<math::Matrix33T<float>>(this, pRVar1, param_1, param_2);
        return this;
    }

    // 0x100bf15a0, 64 bytes, inline, placed by class name
    // WrapArray<math::Matrix22T<float> const> AllocateScratchArrayAndCopy<math::Matrix22T<float> >(math::Matrix22T<float> const*, unsigned long)
    render* AllocateScratchArrayAndCopy<math::Matrix22T<float>>(Matrix22T* param_1, ulong param_2) {
        RenderDevice* this_00;
        RenderContext* pRVar1;

        this_00 = (RenderDevice*)Instance();
        pRVar1 = (RenderContext*)this_00->GetPrimaryRenderContext();
        AllocateScratchArrayAndCopy<math::Matrix22T<float>>(this, pRVar1, param_1, param_2);
        return this;
    }

    // 0x100bf1610, 64 bytes, inline, placed by class name
    // WrapArray<float const> AllocateScratchArrayAndCopy<float>(float const*, unsigned long)
    render* AllocateScratchArrayAndCopy<float>(float* param_1, ulong param_2) {
        RenderDevice* this_00;
        RenderContext* pRVar1;

        this_00 = (RenderDevice*)Instance();
        pRVar1 = (RenderContext*)this_00->GetPrimaryRenderContext();
        AllocateScratchArrayAndCopy<float>(this, pRVar1, param_1, param_2);
        return this;
    }

    // 0x100bf1660, 64 bytes, inline, placed by class name
    // WrapArray<unsigned int const> AllocateScratchArrayAndCopy<unsigned int>(unsigned int const*, unsigned long)
    render* AllocateScratchArrayAndCopy<unsigned int>(uint* param_1, ulong param_2) {
        RenderDevice* this_00;
        RenderContext* pRVar1;

        this_00 = (RenderDevice*)Instance();
        pRVar1 = (RenderContext*)this_00->GetPrimaryRenderContext();
        AllocateScratchArrayAndCopy<unsigned int>(this, pRVar1, param_1, param_2);
        return this;
    }

    // 0x100bf1740, 64 bytes, inline, placed by class name
    // WrapArray<int const> AllocateScratchArrayAndCopy<int>(int const*, unsigned long)
    render* AllocateScratchArrayAndCopy<int>(int* param_1, ulong param_2) {
        RenderDevice* this_00;
        RenderContext* pRVar1;

        this_00 = (RenderDevice*)Instance();
        pRVar1 = (RenderContext*)this_00->GetPrimaryRenderContext();
        AllocateScratchArrayAndCopy<int>(this, pRVar1, param_1, param_2);
        return this;
    }

    // 0x100bf1890, 64 bytes, inline, placed by class name
    // WrapArray<math::Vector4T<float> const> AllocateScratchArrayAndCopy<math::Vector4T<float> >(math::Vector4T<float> const*, unsigned long)
    render* AllocateScratchArrayAndCopy<math::Vector4T<float>>(Vector4T* param_1, ulong param_2) {
        RenderDevice* this_00;
        RenderContext* pRVar1;

        this_00 = (RenderDevice*)Instance();
        pRVar1 = (RenderContext*)this_00->GetPrimaryRenderContext();
        AllocateScratchArrayAndCopy<math::Vector4T<float>>(this, pRVar1, param_1, param_2);
        return this;
    }

    // 0x100bf1920, 64 bytes, inline, placed by class name
    // WrapArray<math::Vector3T<float> const> AllocateScratchArrayAndCopy<math::Vector3T<float> >(math::Vector3T<float> const*, unsigned long)
    render* AllocateScratchArrayAndCopy<math::Vector3T<float>>(Vector3T* param_1, ulong param_2) {
        RenderDevice* this_00;
        RenderContext* pRVar1;

        this_00 = (RenderDevice*)Instance();
        pRVar1 = (RenderContext*)this_00->GetPrimaryRenderContext();
        AllocateScratchArrayAndCopy<math::Vector3T<float>>(this, pRVar1, param_1, param_2);
        return this;
    }

    // 0x100bf19b0, 64 bytes, inline, placed by class name
    // WrapArray<math::Vector2T<float> const> AllocateScratchArrayAndCopy<math::Vector2T<float> >(math::Vector2T<float> const*, unsigned long)
    render* AllocateScratchArrayAndCopy<math::Vector2T<float>>(Vector2T* param_1, ulong param_2) {
        RenderDevice* this_00;
        RenderContext* pRVar1;

        this_00 = (RenderDevice*)Instance();
        pRVar1 = (RenderContext*)this_00->GetPrimaryRenderContext();
        AllocateScratchArrayAndCopy<math::Vector2T<float>>(this, pRVar1, param_1, param_2);
        return this;
    }

    // 0x100bf42e0, 176 bytes, inline, placed by class name
    // VectorFastPool<ComputePipelineState>& GetStateObjectPool<ComputePipelineState>()
    VectorFastPool* GetStateObjectPool<ComputePipelineState>() {
        ulong* puVar2;
        ulong local_20[2];

        if (*PTR_s_StateObjectPool_100ee50e8 == '\0') {
            if (___cxa_guard_acquire(PTR_s_StateObjectPool_100ee50e8) != 0) {
                local_20[0] = 16;
                local_20[1] = 8;
                puVar2 = std::max<unsigned long>(local_20, local_20 + 1);
                new (PTR_s_StateObjectPool_100ee9d58) VectorFastPool<ComputePipelineState>(512, *puVar2);
                ___cxa_atexit(PTR__VectorFastPool_100ee63a0, PTR_s_StateObjectPool_100ee9d58, 4294967296);
                ___cxa_guard_release(PTR_s_StateObjectPool_100ee50e8);
            }
        }
        return (VectorFastPool*)PTR_s_StateObjectPool_100ee9d58;
    }

    // 0x100bf4910, 176 bytes, inline, placed by class name
    // VectorFastPool<InputAssemblerState>& GetStateObjectPool<InputAssemblerState>()
    VectorFastPool* GetStateObjectPool<InputAssemblerState>() {
        ulong* puVar2;
        ulong local_20[2];

        if (*PTR_s_StateObjectPool_100ee50d8 == '\0') {
            if (___cxa_guard_acquire(PTR_s_StateObjectPool_100ee50d8) != 0) {
                local_20[0] = 16;
                local_20[1] = 8;
                puVar2 = std::max<unsigned long>(local_20, local_20 + 1);
                new (PTR_s_StateObjectPool_100ee9d48) VectorFastPool<InputAssemblerState>(512, *puVar2);
                ___cxa_atexit(PTR__VectorFastPool_100ee6390, PTR_s_StateObjectPool_100ee9d48, 4294967296);
                ___cxa_guard_release(PTR_s_StateObjectPool_100ee50d8);
            }
        }
        return (VectorFastPool*)PTR_s_StateObjectPool_100ee9d48;
    }

    // 0x100bf4b20, 176 bytes, inline, placed by class name
    // VectorFastPool<RenderPipelineState>& GetStateObjectPool<RenderPipelineState>()
    VectorFastPool* GetStateObjectPool<RenderPipelineState>() {
        ulong* puVar2;
        ulong local_20[2];

        if (*PTR_s_StateObjectPool_100ee50e0 == '\0') {
            if (___cxa_guard_acquire(PTR_s_StateObjectPool_100ee50e0) != 0) {
                local_20[0] = 16;
                local_20[1] = 8;
                puVar2 = std::max<unsigned long>(local_20, local_20 + 1);
                new (PTR_s_StateObjectPool_100ee9d50) VectorFastPool<RenderPipelineState>(512, *puVar2);
                ___cxa_atexit(PTR__VectorFastPool_100ee6398, PTR_s_StateObjectPool_100ee9d50, 4294967296);
                ___cxa_guard_release(PTR_s_StateObjectPool_100ee50e0);
            }
        }
        return (VectorFastPool*)PTR_s_StateObjectPool_100ee9d50;
    }

    // 0x100bf4d30, 176 bytes, inline, placed by class name
    // VectorFastPool<OutputMergerState>& GetStateObjectPool<OutputMergerState>()
    VectorFastPool* GetStateObjectPool<OutputMergerState>() {
        ulong* puVar2;
        ulong local_20[2];

        if (*PTR_s_StateObjectPool_100ee50d0 == '\0') {
            if (___cxa_guard_acquire(PTR_s_StateObjectPool_100ee50d0) != 0) {
                local_20[0] = 16;
                local_20[1] = 16;
                puVar2 = std::max<unsigned long>(local_20, local_20 + 1);
                new (PTR_s_StateObjectPool_100ee9d40) VectorFastPool<OutputMergerState>(512, *puVar2);
                ___cxa_atexit(PTR__VectorFastPool_100ee6388, PTR_s_StateObjectPool_100ee9d40, 4294967296);
                ___cxa_guard_release(PTR_s_StateObjectPool_100ee50d0);
            }
        }
        return (VectorFastPool*)PTR_s_StateObjectPool_100ee9d40;
    }

    // 0x100c0dfa0, 336 bytes, inline, placed by class name
    // void CreatePermanentBuffers<IndexBuffer>(unsigned int, unsigned int)
    void CreatePermanentBuffers<IndexBuffer>(uint param_1, uint param_2) {
        long lVar3;
        long lVar4;
        hashtable_iterator_base* extraout_RDX;
        uint uVar5;
        undefined4 in_register_0000003c;
        PooledBuffer<IndexBuffer>* this;
        PooledBuffer<IndexBuffer> local_90[88];
        hashtable_iterator_base local_38[12];

        this = (PooledBuffer<IndexBuffer>*)CONCAT44(in_register_0000003c, param_1);
        if (this_thread::IsMainThread() == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "PooledBuffer.cpp",
                      374, (char*)0);
        }
        if (param_2 != 0) {
            uVar5 = param_2;
            do {
                PooledBuffer<IndexBuffer>::PooledBuffer();
                ((uint)local_90)->Create(param_1, 47);
                this = local_90;
                local_90->~PooledBuffer();
                uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
        }
        Instance();
        eastl::rbtree<
            unsigned int,
            eastl::pair<unsigned int const, eastl::vector<internal::ManagedBuffer<IndexBuffer>, eastl::allocator>>,
            eastl::less<unsigned int>, eastl::allocator,
            eastl::use_first<
                eastl::pair<unsigned int const, eastl::vector<internal::ManagedBuffer<IndexBuffer>, eastl::allocator>>>,
            true, true>::lower_bound((uint*)local_90);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=((eastl*)local_90, local_38, extraout_RDX)) {
            lVar3 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_90);
            lVar4 = ((lVar3 + 8))->HeapBeginPtr();
            lVar3 = ((lVar3 + 8))->end();
            for (; lVar4 != lVar3; lVar4 = lVar4 + 96) {
                *(undefined4*)(lVar4 + 88) = 4;
            }
            BufferPoolStats::RecordBufferCreation("IndexBuffer", param_1, param_2, 0);
            return;
        }
        /* WARNING: Subroutine does not return */
        LogAssert(
            "it != managedBuffers.end()",
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/PooledBuffer.cpp",
            386, (char*)0);
    }

    // 0x100c0faa0, 336 bytes, inline, placed by class name
    // void CreatePermanentBuffers<VertexBuffer>(unsigned int, unsigned int)
    void CreatePermanentBuffers<VertexBuffer>(uint param_1, uint param_2) {
        long lVar3;
        long lVar4;
        hashtable_iterator_base* extraout_RDX;
        uint uVar5;
        undefined4 in_register_0000003c;
        PooledBuffer<VertexBuffer>* this;
        PooledBuffer<VertexBuffer> local_88[80];
        hashtable_iterator_base local_38[12];

        this = (PooledBuffer<VertexBuffer>*)CONCAT44(in_register_0000003c, param_1);
        if (this_thread::IsMainThread() == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "PooledBuffer.cpp",
                      374, (char*)0);
        }
        if (param_2 != 0) {
            uVar5 = param_2;
            do {
                PooledBuffer<VertexBuffer>::PooledBuffer();
                ((uint)local_88)->Create(param_1, 47);
                this = local_88;
                local_88->~PooledBuffer();
                uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
        }
        Instance();
        eastl::rbtree<
            unsigned int,
            eastl::pair<unsigned int const, eastl::vector<internal::ManagedBuffer<VertexBuffer>, eastl::allocator>>,
            eastl::less<unsigned int>, eastl::allocator,
            eastl::use_first<eastl::pair<unsigned int const,
                                         eastl::vector<internal::ManagedBuffer<VertexBuffer>, eastl::allocator>>>,
            true, true>::lower_bound((uint*)local_88);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (!eastl::operator!=((eastl*)local_88, local_38, extraout_RDX)) {
            /* WARNING: Subroutine does not return */
            LogAssert("it != managedBuffers.end()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "PooledBuffer.cpp",
                      386, (char*)0);
        }
        lVar3 = eastl::rbtree_iterator<
            eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
            eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
            eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
        operator*((rbtree_iterator<
                   eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                   eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                   eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                      local_88);
        lVar4 = ((lVar3 + 8))->HeapBeginPtr();
        lVar3 = ((lVar3 + 8))->end();
        for (; lVar4 != lVar3; lVar4 = lVar4 + 88) {
            *(undefined4*)(lVar4 + 80) = 4;
        }
        BufferPoolStats::RecordBufferCreation("VertexBuffer", param_1, param_2, 0);
    }

    // 0x100c110d0, 336 bytes, inline, placed by class name
    // void CreatePermanentBuffers<ShaderConstBuffer>(unsigned int, unsigned int)
    void CreatePermanentBuffers<ShaderConstBuffer>(uint param_1, uint param_2) {
        long lVar3;
        long lVar4;
        hashtable_iterator_base* extraout_RDX;
        uint uVar5;
        undefined4 in_register_0000003c;
        PooledBuffer<ShaderConstBuffer>* this;
        PooledBuffer<ShaderConstBuffer> local_88[80];
        hashtable_iterator_base local_38[12];

        this = (PooledBuffer<ShaderConstBuffer>*)CONCAT44(in_register_0000003c, param_1);
        if (this_thread::IsMainThread() == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "PooledBuffer.cpp",
                      374, (char*)0);
        }
        if (param_2 != 0) {
            uVar5 = param_2;
            do {
                PooledBuffer<ShaderConstBuffer>::PooledBuffer();
                ((uint)local_88)->Create(param_1, 47);
                this = local_88;
                local_88->~PooledBuffer();
                uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
        }
        Instance();
        eastl::rbtree<
            unsigned int,
            eastl::pair<unsigned int const,
                        eastl::vector<internal::ManagedBuffer<ShaderConstBuffer>, eastl::allocator>>,
            eastl::less<unsigned int>, eastl::allocator,
            eastl::use_first<eastl::pair<unsigned int const,
                                         eastl::vector<internal::ManagedBuffer<ShaderConstBuffer>, eastl::allocator>>>,
            true, true>::lower_bound((uint*)local_88);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (!eastl::operator!=((eastl*)local_88, local_38, extraout_RDX)) {
            /* WARNING: Subroutine does not return */
            LogAssert("it != managedBuffers.end()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "PooledBuffer.cpp",
                      386, (char*)0);
        }
        lVar3 = eastl::rbtree_iterator<
            eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
            eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
            eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
        operator*((rbtree_iterator<
                   eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                   eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                   eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                      local_88);
        lVar4 = ((lVar3 + 8))->HeapBeginPtr();
        lVar3 = ((lVar3 + 8))->end();
        for (; lVar4 != lVar3; lVar4 = lVar4 + 88) {
            *(undefined4*)(lVar4 + 80) = 4;
        }
        BufferPoolStats::RecordBufferCreation("ShaderConstBuffer", param_1, param_2, 0);
    }

    // 0x100c125a0, 336 bytes, inline, placed by class name
    // void CreatePermanentBuffers<PixelUnpackBuffer>(unsigned int, unsigned int)
    void CreatePermanentBuffers<PixelUnpackBuffer>(uint param_1, uint param_2) {
        long lVar3;
        long lVar4;
        hashtable_iterator_base* extraout_RDX;
        uint uVar5;
        undefined4 in_register_0000003c;
        PooledBuffer<PixelUnpackBuffer>* this;
        PooledBuffer<PixelUnpackBuffer> local_88[80];
        hashtable_iterator_base local_38[12];

        this = (PooledBuffer<PixelUnpackBuffer>*)CONCAT44(in_register_0000003c, param_1);
        if (this_thread::IsMainThread() == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "PooledBuffer.cpp",
                      374, (char*)0);
        }
        if (param_2 != 0) {
            uVar5 = param_2;
            do {
                PooledBuffer<PixelUnpackBuffer>::PooledBuffer();
                ((uint)local_88)->Create(param_1, 47);
                this = local_88;
                local_88->~PooledBuffer();
                uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
        }
        Instance();
        eastl::rbtree<
            unsigned int,
            eastl::pair<unsigned int const,
                        eastl::vector<internal::ManagedBuffer<PixelUnpackBuffer>, eastl::allocator>>,
            eastl::less<unsigned int>, eastl::allocator,
            eastl::use_first<eastl::pair<unsigned int const,
                                         eastl::vector<internal::ManagedBuffer<PixelUnpackBuffer>, eastl::allocator>>>,
            true, true>::lower_bound((uint*)local_88);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (!eastl::operator!=((eastl*)local_88, local_38, extraout_RDX)) {
            /* WARNING: Subroutine does not return */
            LogAssert("it != managedBuffers.end()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "PooledBuffer.cpp",
                      386, (char*)0);
        }
        lVar3 = eastl::rbtree_iterator<
            eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
            eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
            eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
        operator*((rbtree_iterator<
                   eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                   eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                   eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                      local_88);
        lVar4 = ((lVar3 + 8))->HeapBeginPtr();
        lVar3 = ((lVar3 + 8))->end();
        for (; lVar4 != lVar3; lVar4 = lVar4 + 88) {
            *(undefined4*)(lVar4 + 80) = 4;
        }
        BufferPoolStats::RecordBufferCreation("PixelUnpackBuffer", param_1, param_2, 0);
    }

    // 0x100c26d50, 80 bytes, inline, placed by class name
    // void GetGLString<eastl::string >(eastl::string&, unsigned int)
    void GetGLString<eastl::string>(basic_string* param_1, uint param_2) {
        char* pcVar1;

        pcVar1 = (char*)_glGetString(param_2);
        CheckGlErrorInternal(
            "glGetString",
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/OGL/GLUtils.inl",
            10);
        if (pcVar1 == (char*)0) {
            pcVar1 = "<unknown>";
        }
        param_1->append(pcVar1);
    }

    // 0x100c2dea0, 16 bytes, inline, placed by class name
    // operator<(GpuMemoryProfile, GpuMemoryProfile)
    /* TEMPNAMEPLACEHOLDERVALUE(GpuMemoryProfile,
   GpuMemoryProfile) */

    bool operator<(int param_1, int param_2) {
        return param_1 < param_2;
    }

} // namespace jag::render

namespace jag::graphics {
    class RenderChunk {
    public:
        RenderChunk();

        // data members, from how the methods use this: 28 bytes
        undefined8 field_0;  // offset 0
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined4 field_24; // offset 24
    };

    // 0x1001dc5c0, 48 bytes, base-object constructor, inline, placed by class header (inline)
    // RenderChunk::RenderChunk()
    void RenderChunk::RenderChunk() {
        field_0 = 0;
        field_8 = 4290672328704;
        field_16 = 4294967295998;
        field_24 = 4294967294;
    }

} // namespace jag::graphics

namespace jag::oldscape::rs2lib::worldmap {
    class RenderBounds {
    public:
        RenderBounds();
    };

} // namespace jag::oldscape::rs2lib::worldmap
