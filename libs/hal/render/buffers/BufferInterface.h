// libs/hal/render/buffers/BufferInterface.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.hal.render

namespace jag::render {
    class BufferInterface {
    public:
        unsigned int GetSizeInBytes() const;
        unsigned int GetPhysicalSizeInBytes() const;
        bool IsCreated() const;
        uint8_t GetCreationFlags() const;
        bool IsPermanent() const;
        void IsMapped() const;
        bool IsDynamic() const;
        unsigned int GetNativeBuffer() const;
        BufferInterface();
        BufferInterface(BufferInterface&& bufferInterface);
        BufferInterface* operator=(BufferInterface&& bufferInterface);
        bool UseDefaultVAO(unsigned int arg1);
        bool CreateBuffer(const char* str, unsigned int arg2, unsigned int arg3, unsigned int arg4, unsigned int arg5,
                          unsigned int arg6, const void* arg7);
        int CreateBufferInternal(const char* str, unsigned int arg2, unsigned int arg3, unsigned int arg4,
                                 unsigned int arg5, unsigned int arg6, const void* arg7);
        unsigned int GetNativeBufferInternal() const;
        void CheckBufferGlError(const char* str1, const char* str2);
        void ReleaseNativeResources(const char* str, unsigned int arg2);
        void ReleaseNativeResourcesInternal(const char* str, unsigned int arg2, unsigned int arg3, bool arg4);
        void CheckBufferGlErrorStatic(const char* str1, const char* str2);
        long MapBuffer(const char* str, unsigned int arg2, unsigned int arg3, unsigned int arg4, LockType lockType,
                       unsigned int arg6, unsigned int arg7, unsigned int arg8);
        unsigned long UnmapBuffer(const char* str, unsigned int arg2);
        void UpdateBuffer(const char* str, unsigned int arg2, unsigned int arg3, unsigned int arg4, unsigned int arg5,
                          const void* arg6, UpdateType updateType);
        void ForceNoRecycling();
        ~BufferInterface();
        BufferInterface* MapReadBuffer(const char* str, unsigned int arg2, unsigned int arg3, unsigned int arg4,
                                       LockType lockType, unsigned int arg6, unsigned int arg7, unsigned int arg8);
        BufferInterface* MapWriteBuffer(const char* str, unsigned int arg2, unsigned int arg3, unsigned int arg4,
                                        LockType lockType, unsigned int arg6, unsigned int arg7, unsigned int arg8);

    private:
        unsigned int field_0;
        RenderResource field_4;
        uint8_t _unknown_5[3];
        unsigned int m_nativeBuffer;
        uint8_t _unknown_12[4];
        long field_16;
        LockType field_24;
        unsigned int field_28;
        unsigned int field_32;
        unsigned int m_sizeInBytes;
        unsigned int m_physicalSizeInBytes;
        uint8_t m_creationFlags;
        uint8_t field_45[3];
        uint8_t _unknown_48[8];
        RadialHighlightState field_56;
    };

    // 0x1000fa840: BufferInterface::GetSizeInBytes() const has the same machine code as oldscape::graphics::NXTPixScreen::GetHeight() const

    // 0x100293ee0: BufferInterface::GetPhysicalSizeInBytes() const has the same machine code as hal::audio::AudioRenderer::GetState() const

    // 0x100815450: BufferInterface::IsCreated() const has the same machine code as QueryView::IsValid() const

    // 0x10082a9b0: BufferInterface::GetCreationFlags() const has the same machine code as graphics::ModularParticleSystemTemplate::GetRenderPassBits() const

    // 0x100c0d970
    bool BufferInterface::IsPermanent() const {
        return (m_creationFlags & 4) >> 2;
    }

    // 0x100c0dc50
    void BufferInterface::IsMapped() const {
        (&field_48)->operator_cast_to_bool();
    }

    // 0x100c0dc70
    bool BufferInterface::IsDynamic() const {
        return m_creationFlags & 1;
    }

    // 0x100c149b0
    void BufferInterface::ForceNoRecycling() {
        m_creationFlags = m_creationFlags | 16;
    }

    // 0x100c149e0
    BufferInterface::~BufferInterface() {
        field_56->~GPUMemoryTrackingEntry();
    }

    // 0x100c31a10
    BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int, unsigned int, void const*,
                                  UpdateType)::$_1::~$_1() {
        field_32.~WrapArrayValueCopy();
    }

    // 0x100c3c820
    void BufferInterface::UnmapBuffer(char const*, unsigned int)::$_0::operator()(RenderContext& renderContext) const {
        uint32_t uVar1;
        void* pcVar2;
        uint32_t uVar4;

        BufferInterface* this_00 = field_0;
        bool cVar3 = renderContext.IsObjectAlive(this_00);
        if (cVar3) {
            cVar3 = IsCreated(this_00);
            pcVar2 = ___glewBindBuffer;
            if (cVar3) {
                uVar1 = field_8;
                uVar4 = GetNativeBufferInternal(this_00);
                (*pcVar2)(uVar1, uVar4);
                CheckBufferGlError(this_00, "glBindBuffer", field_16);
                (*___glewFlushMappedBufferRange)(field_8, this_00->field_28, this_00->field_32);
                CheckBufferGlError(this_00, "glFlushMappedBufferRange", field_16);
                (*___glewBindBuffer)(field_8, 0);
                CheckBufferGlError(this_00, "glBindBuffer", field_16);
            }
        }
    }

    // 0x100c3ca20
    BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int, unsigned int, void const*,
                                  UpdateType)::$_1::$_1($_1&& arg1) {
        BufferInterface* pBVar1 = *(BufferInterface**)arg1;
        char* pcVar2 = *(char**)(arg1 + 8);
        uint64_t uVar3 = *(uint64_t*)(arg1 + 16);
        uint64_t uVar4 = *(uint64_t*)(arg1 + 24);
        field_16 = (int)uVar3;
        field_20 = (int)((unsigned long)uVar3 >> 32);
        field_24 = uVar4;
        field_0 = pBVar1;
        field_8 = pcVar2;
        new (&field_32) WrapArrayValueCopy<unsigned char, BucketAllocatorEASTL>(*((arg1 + 32)));
        field_80 = *(uint32_t*)(arg1 + 80);
    }

    // 0x100c3caa0
    BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int, unsigned int, void const*,
                                  UpdateType)::$_1::$_1(const $_1& arg1) {
        BufferInterface* pBVar1 = *(BufferInterface**)arg1;
        char* pcVar2 = *(char**)(arg1 + 8);
        uint64_t uVar3 = *(uint64_t*)(arg1 + 16);
        uint64_t uVar4 = *(uint64_t*)(arg1 + 24);
        field_16 = (int)uVar3;
        field_20 = (int)((unsigned long)uVar3 >> 32);
        field_24 = uVar4;
        field_0 = pBVar1;
        field_8 = pcVar2;
        new (&field_32) WrapArrayValueCopy<unsigned char, BucketAllocatorEASTL>(*((arg1 + 32)));
        field_80 = *(uint32_t*)(arg1 + 80);
    }

    // 0x100c3cb00
    void BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int, unsigned int, void const*,
                                       UpdateType)::$_1::operator()(RenderContext& renderContext) const {
        unsigned int arg2;
        unsigned int arg3;
        char* str;
        uint64_t uVar1;
        void* arg6;
        unsigned int local_38;
        unsigned int local_34;

        BufferInterface* this_00 = field_0;
        if (renderContext.IsObjectAlive(this_00)) {
            if (IsCreated(this_00)) {
                str = field_8;
                arg2 = field_16;
                arg3 = field_20;
                uVar1 = field_24;
                arg6 = (void*)field_32.end();
                local_38 = (unsigned int)uVar1;
                local_34 = (unsigned int)((unsigned long)uVar1 >> 32);
                UpdateBuffer(this_00, str, arg2, arg3, local_38, local_34, arg6, field_80);
            }
        }
    }

} // namespace jag::render
