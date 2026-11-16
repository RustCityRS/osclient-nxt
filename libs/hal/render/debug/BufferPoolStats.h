// libs/hal/render/debug/BufferPoolStats.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::render::internal {
    template <typename...> // 4 instantiations, e.g. <IndexBuffer>, <PixelUnpackBuffer>, <ShaderConstBuffer>
    class BufferPool {
    public:
        // virtual methods in vtable order
        virtual ~BufferPool();
        virtual void OnDeviceLost();
        virtual void OnEndFrame();
        BufferPool();
        void GarbageCollect(bool arg1);
    };

    // 0x100c0e0f0
    BufferPool<IndexBuffer>::BufferPool() : AutoSingleton<BufferPool<IndexBuffer>>(), RenderDeviceCallback(true, 3) {
        new ((this + 2)) RenderDeviceOnEndFrame(true);
        uint8_t* puVar1 = PTR_vtable_100ee86b0;
        new ((this + 4)) eastl::map(local_30);
        new ((this + 10)) eastl::map(local_30);
    }

    // 0x100c0fbf0
    BufferPool<VertexBuffer>::BufferPool() : AutoSingleton<BufferPool<VertexBuffer>>(), RenderDeviceCallback(true, 3) {
        new ((this + 2)) RenderDeviceOnEndFrame(true);
        uint8_t* puVar1 = PTR_vtable_100ee86b8;
        new ((this + 4)) eastl::map(local_30);
        new ((this + 10)) eastl::map(local_30);
    }

    // 0x100c0fd40
    void BufferPool<VertexBuffer>::OnEndFrame() {
        Layout* this_00;
        unsigned int uVar1;
        unsigned int arg2;
        unsigned int* puVar3;
        ManagedBuffer<ShaderConstBuffer>* managedBuffer1;
        unsigned int in_R9D;
        uint8_t auVar4[16];
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_38;

        ((uint8_t)this)->GarbageCollect();
        ReturnValue local_40 = ((this + 4))->rbegin();
        local_38.end();
        bool cVar2 = local_40 != local_38;
        if (cVar2) {
            do {
                puVar3 = (unsigned int*)*local_40;
                this_00 = (Layout*)(puVar3 + 2);
                managedBuffer1 = (ManagedBuffer<ShaderConstBuffer>*)this_00->HeapBeginPtr();
                auVar4 = this_00->end();
                auVar4 = eastl::minmax_element<ManagedBuffer<VertexBuffer> const*,
                                               BufferPool<VertexBuffer>::OnEndFrame()::_lambda(
                                                   auto : 1 const&, auto : 2 const&) _1_>(managedBuffer1, auVar4._0_8_,
                                                                                          auVar4._8_8_);
                uVar1 = *puVar3;
                arg2 = this_00->size();
                ((BufferPoolStats*)"VertexBuffer")
                    ->RecordEndOfFrameStats((char*)(unsigned long)uVar1, arg2, *(unsigned int*)(auVar4._0_8_ + 80),
                                            *(unsigned int*)(auVar4._8_8_ + 80), in_R9D);
                ++local_40;
                cVar2 = local_40 != local_38;
            } while (cVar2);
        }
    }

    // 0x100c0fe10
    void BufferPool<VertexBuffer>::GarbageCollect(bool arg1) {
        unsigned int uVar2;
        unsigned int uVar3;
        long lVar4;
        BufferInterface* this_00;
        BufferInterface* pBVar5;
        ManagedBuffer<VertexBuffer>* pMVar6;
        ManagedBuffer<VertexBuffer>* managedBuffer2;
        unsigned int uVar7;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* this_01;
        uint8_t auVar8[16];
        rbtree_iterator<eastl::pair<unsigned int const, eastl::vector<ManagedBuffer<VertexBuffer>> _>,
                        eastl::pair<unsigned int const, eastl::vector<ManagedBuffer<VertexBuffer>> _> const*,
                        eastl::pair<unsigned int const, eastl::vector<ManagedBuffer<VertexBuffer>> _> const&>* local_50;
        ReturnValue local_48;
        vector<unsigned long, eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true>>* local_40;
        ReturnValue local_38;

        bool cVar1 = this_thread::IsMainThread();
        if (!cVar1) {
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "PooledBuffer.cpp",
                      320, nullptr);
        }
        if (arg1) {
            BufferPoolStats::PrintPoolUsage();
            ((this + 4))->clear();
            BufferPoolStats::ResetStats();
        } else {
            local_38 = ((this + 4))->rbegin();
            local_48.end();
            cVar1 = local_38 != local_48;
            if (cVar1) {
                local_40 = (vector<unsigned long, eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true>>*)(this + 4);
                do {
                    lVar4 = *local_38;
                    this_01 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)(lVar4 + 8);
                    cVar1 = this_01->empty();
                    if (cVar1) {
                        LogAssert("!bufferList.empty()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                  "buffers/PooledBuffer.cpp",
                                  334, nullptr);
                    }
                    this_00 = (BufferInterface*)this_01->HeapBeginPtr();
                    pBVar5 = (BufferInterface*)this_01->end();
                    for (; this_00 != pBVar5; this_00 = (BufferInterface*)&this_00[1].m_nativeBuffer) {
                        uVar7 = this_00[1].field_0 + 1;
                        this_00[1].field_0 = uVar7;
                        uVar2 = this_00->GetEndPosition();
                        uVar3 = 1000;
                        if (16383 < uVar2) {
                            uVar3 = 5;
                        }
                        if ((uVar3 < uVar7) && (cVar1 = this_00->IsPermanent(), !cVar1)) {
                            this_00->Destroy();
                        }
                    }
                    pMVar6 = (ManagedBuffer<VertexBuffer>*)this_01->HeapBeginPtr();
                    auVar8 = this_01->end();
                    pMVar6 = std::remove_if<ManagedBuffer<VertexBuffer>*,
                                            bool->GarbageCollect()::_lambda(ManagedBuffer<VertexBuffer>&) _1_>(
                        pMVar6, auVar8._0_8_, auVar8._8_8_);
                    managedBuffer2 = (ManagedBuffer<VertexBuffer>*)this_01->end();
                    this_01->erase(pMVar6, managedBuffer2);
                    pMVar6 = (ManagedBuffer<VertexBuffer>*)this_01->HeapBeginPtr();
                    auVar8 = this_01->end();
                    eastl::shell_sort<ManagedBuffer<VertexBuffer>*,
                                      bool->GarbageCollect()::_lambda(ManagedBuffer<VertexBuffer> const&,
                                                                      ManagedBuffer<VertexBuffer> const&) _1_>(
                        pMVar6, auVar8._0_8_, auVar8._8_8_);
                    cVar1 = this_01->empty();
                    if (!cVar1) {
                        ++local_38;
                    } else {
                        new (&local_50) eastl::ListIterator(&local_38);
                        local_48 = local_40->erase(local_50);
                        local_38 = local_48;
                    }
                    local_48.end();
                    cVar1 = local_38 != local_48;
                } while (cVar1);
            }
        }
    }

    // 0x100c10060
    void BufferPool<VertexBuffer>::OnDeviceLost() {
        ((uint8_t)this)->GarbageCollect();
    }

    // 0x100c11220
    BufferPool<ShaderConstBuffer>::BufferPool()
        : AutoSingleton<BufferPool<ShaderConstBuffer>>(), RenderDeviceCallback(true, 3) {
        new ((this + 2)) RenderDeviceOnEndFrame(true);
        uint8_t* puVar1 = PTR_vtable_100ee86c8;
        new ((this + 4)) eastl::map(local_30);
        new ((this + 10)) eastl::map(local_30);
    }

    // 0x100c11370
    void BufferPool<ShaderConstBuffer>::OnEndFrame() {
        Layout* this_00;
        unsigned int uVar1;
        unsigned int arg2;
        unsigned int* puVar3;
        ManagedBuffer<ShaderConstBuffer>* managedBuffer1;
        unsigned int in_R9D;
        uint8_t auVar4[16];
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_38;

        ((uint8_t)this)->GarbageCollect();
        ReturnValue local_40 = ((this + 4))->rbegin();
        local_38.end();
        bool cVar2 = local_40 != local_38;
        if (cVar2) {
            do {
                puVar3 = (unsigned int*)*local_40;
                this_00 = (Layout*)(puVar3 + 2);
                managedBuffer1 = (ManagedBuffer<ShaderConstBuffer>*)this_00->HeapBeginPtr();
                auVar4 = this_00->end();
                auVar4 = eastl::minmax_element<ManagedBuffer<VertexBuffer> const*,
                                               BufferPool<VertexBuffer>::OnEndFrame()::_lambda(
                                                   auto : 1 const&, auto : 2 const&) _1_>(managedBuffer1, auVar4._0_8_,
                                                                                          auVar4._8_8_);
                uVar1 = *puVar3;
                arg2 = this_00->size();
                ((BufferPoolStats*)"ShaderConstBuffer")
                    ->RecordEndOfFrameStats((char*)(unsigned long)uVar1, arg2, *(unsigned int*)(auVar4._0_8_ + 80),
                                            *(unsigned int*)(auVar4._8_8_ + 80), in_R9D);
                ++local_40;
                cVar2 = local_40 != local_38;
            } while (cVar2);
        }
    }

    // 0x100c11440
    void BufferPool<ShaderConstBuffer>::GarbageCollect(bool arg1) {
        unsigned int uVar2;
        unsigned int uVar3;
        long lVar4;
        BufferInterface* this_00;
        BufferInterface* pBVar5;
        ManagedBuffer<ShaderConstBuffer>* pMVar6;
        ManagedBuffer<ShaderConstBuffer>* managedBuffer2;
        unsigned int uVar7;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* this_01;
        uint8_t auVar8[16];
        rbtree_iterator<eastl::pair<unsigned int const, eastl::vector<ManagedBuffer<ShaderConstBuffer>> _>,
                        eastl::pair<unsigned int const, eastl::vector<ManagedBuffer<ShaderConstBuffer>> _> const*,
                        eastl::pair<unsigned int const, eastl::vector<ManagedBuffer<ShaderConstBuffer>> _> const&>*
            local_50;
        ReturnValue local_48;
        vector<unsigned long, eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true>>* local_40;
        ReturnValue local_38;

        bool cVar1 = this_thread::IsMainThread();
        if (!cVar1) {
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "PooledBuffer.cpp",
                      320, nullptr);
        }
        if (arg1) {
            BufferPoolStats::PrintPoolUsage();
            ((this + 4))->clear();
            BufferPoolStats::ResetStats();
        } else {
            local_38 = ((this + 4))->rbegin();
            local_48.end();
            cVar1 = local_38 != local_48;
            if (cVar1) {
                local_40 = (vector<unsigned long, eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true>>*)(this + 4);
                do {
                    lVar4 = *local_38;
                    this_01 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)(lVar4 + 8);
                    cVar1 = this_01->empty();
                    if (cVar1) {
                        LogAssert("!bufferList.empty()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                  "buffers/PooledBuffer.cpp",
                                  334, nullptr);
                    }
                    this_00 = (BufferInterface*)this_01->HeapBeginPtr();
                    pBVar5 = (BufferInterface*)this_01->end();
                    for (; this_00 != pBVar5; this_00 = (BufferInterface*)&this_00[1].m_nativeBuffer) {
                        uVar7 = this_00[1].field_0 + 1;
                        this_00[1].field_0 = uVar7;
                        uVar2 = this_00->GetEndPosition();
                        uVar3 = 1000;
                        if (16383 < uVar2) {
                            uVar3 = 5;
                        }
                        if ((uVar3 < uVar7) && (cVar1 = this_00->IsPermanent(), !cVar1)) {
                            this_00->Destroy();
                        }
                    }
                    pMVar6 = (ManagedBuffer<ShaderConstBuffer>*)this_01->HeapBeginPtr();
                    auVar8 = this_01->end();
                    pMVar6 = std::remove_if<ManagedBuffer<ShaderConstBuffer>*,
                                            bool->GarbageCollect()::_lambda(ManagedBuffer<ShaderConstBuffer>&) _1_>(
                        pMVar6, auVar8._0_8_, auVar8._8_8_);
                    managedBuffer2 = (ManagedBuffer<ShaderConstBuffer>*)this_01->end();
                    this_01->erase(pMVar6, managedBuffer2);
                    pMVar6 = (ManagedBuffer<ShaderConstBuffer>*)this_01->HeapBeginPtr();
                    auVar8 = this_01->end();
                    eastl::shell_sort<ManagedBuffer<ShaderConstBuffer>*,
                                      bool->GarbageCollect()::_lambda(ManagedBuffer<ShaderConstBuffer> const&,
                                                                      ManagedBuffer<ShaderConstBuffer> const&) _1_>(
                        pMVar6, auVar8._0_8_, auVar8._8_8_);
                    cVar1 = this_01->empty();
                    if (!cVar1) {
                        ++local_38;
                    } else {
                        new (&local_50) eastl::ListIterator(&local_38);
                        local_48 = local_40->erase(local_50);
                        local_38 = local_48;
                    }
                    local_48.end();
                    cVar1 = local_38 != local_48;
                } while (cVar1);
            }
        }
    }

    // 0x100c11690
    void BufferPool<ShaderConstBuffer>::OnDeviceLost() {
        ((uint8_t)this)->GarbageCollect();
    }

    // 0x100c126f0
    BufferPool<PixelUnpackBuffer>::BufferPool()
        : AutoSingleton<BufferPool<PixelUnpackBuffer>>(), RenderDeviceCallback(true, 3) {
        new ((this + 2)) RenderDeviceOnEndFrame(true);
        uint8_t* puVar1 = PTR_vtable_100ee86c0;
        new ((this + 4)) eastl::map(local_30);
        new ((this + 10)) eastl::map(local_30);
    }

    // 0x100c12840
    void BufferPool<PixelUnpackBuffer>::OnEndFrame() {
        Layout* this_00;
        unsigned int uVar1;
        unsigned int arg2;
        unsigned int* puVar3;
        ManagedBuffer<ShaderConstBuffer>* managedBuffer1;
        unsigned int in_R9D;
        uint8_t auVar4[16];
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_38;

        ((uint8_t)this)->GarbageCollect();
        ReturnValue local_40 = ((this + 4))->rbegin();
        local_38.end();
        bool cVar2 = local_40 != local_38;
        if (cVar2) {
            do {
                puVar3 = (unsigned int*)*local_40;
                this_00 = (Layout*)(puVar3 + 2);
                managedBuffer1 = (ManagedBuffer<ShaderConstBuffer>*)this_00->HeapBeginPtr();
                auVar4 = this_00->end();
                auVar4 = eastl::minmax_element<ManagedBuffer<VertexBuffer> const*,
                                               BufferPool<VertexBuffer>::OnEndFrame()::_lambda(
                                                   auto : 1 const&, auto : 2 const&) _1_>(managedBuffer1, auVar4._0_8_,
                                                                                          auVar4._8_8_);
                uVar1 = *puVar3;
                arg2 = this_00->size();
                ((BufferPoolStats*)"PixelUnpackBuffer")
                    ->RecordEndOfFrameStats((char*)(unsigned long)uVar1, arg2, *(unsigned int*)(auVar4._0_8_ + 80),
                                            *(unsigned int*)(auVar4._8_8_ + 80), in_R9D);
                ++local_40;
                cVar2 = local_40 != local_38;
            } while (cVar2);
        }
    }

    // 0x100c12910
    void BufferPool<PixelUnpackBuffer>::GarbageCollect(bool arg1) {
        unsigned int uVar2;
        unsigned int uVar3;
        long lVar4;
        BufferInterface* this_00;
        BufferInterface* pBVar5;
        ManagedBuffer<PixelUnpackBuffer>* pMVar6;
        ManagedBuffer<PixelUnpackBuffer>* managedBuffer2;
        unsigned int uVar7;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* this_01;
        uint8_t auVar8[16];
        rbtree_iterator<eastl::pair<unsigned int const, eastl::vector<ManagedBuffer<PixelUnpackBuffer>> _>,
                        eastl::pair<unsigned int const, eastl::vector<ManagedBuffer<PixelUnpackBuffer>> _> const*,
                        eastl::pair<unsigned int const, eastl::vector<ManagedBuffer<PixelUnpackBuffer>> _> const&>*
            local_50;
        ReturnValue local_48;
        vector<unsigned long, eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true>>* local_40;
        ReturnValue local_38;

        bool cVar1 = this_thread::IsMainThread();
        if (!cVar1) {
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "PooledBuffer.cpp",
                      320, nullptr);
        }
        if (arg1) {
            BufferPoolStats::PrintPoolUsage();
            ((this + 4))->clear();
            BufferPoolStats::ResetStats();
        } else {
            local_38 = ((this + 4))->rbegin();
            local_48.end();
            cVar1 = local_38 != local_48;
            if (cVar1) {
                local_40 = (vector<unsigned long, eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true>>*)(this + 4);
                do {
                    lVar4 = *local_38;
                    this_01 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)(lVar4 + 8);
                    cVar1 = this_01->empty();
                    if (cVar1) {
                        LogAssert("!bufferList.empty()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                  "buffers/PooledBuffer.cpp",
                                  334, nullptr);
                    }
                    this_00 = (BufferInterface*)this_01->HeapBeginPtr();
                    pBVar5 = (BufferInterface*)this_01->end();
                    for (; this_00 != pBVar5; this_00 = (BufferInterface*)&this_00[1].m_nativeBuffer) {
                        uVar7 = this_00[1].field_0 + 1;
                        this_00[1].field_0 = uVar7;
                        uVar2 = this_00->GetEndPosition();
                        uVar3 = 1000;
                        if (16383 < uVar2) {
                            uVar3 = 5;
                        }
                        if ((uVar3 < uVar7) && (cVar1 = this_00->IsPermanent(), !cVar1)) {
                            this_00->Destroy();
                        }
                    }
                    pMVar6 = (ManagedBuffer<PixelUnpackBuffer>*)this_01->HeapBeginPtr();
                    auVar8 = this_01->end();
                    pMVar6 = std::remove_if<ManagedBuffer<PixelUnpackBuffer>*,
                                            bool->GarbageCollect()::_lambda(ManagedBuffer<PixelUnpackBuffer>&) _1_>(
                        pMVar6, auVar8._0_8_, auVar8._8_8_);
                    managedBuffer2 = (ManagedBuffer<PixelUnpackBuffer>*)this_01->end();
                    this_01->erase(pMVar6, managedBuffer2);
                    pMVar6 = (ManagedBuffer<PixelUnpackBuffer>*)this_01->HeapBeginPtr();
                    auVar8 = this_01->end();
                    eastl::shell_sort<ManagedBuffer<PixelUnpackBuffer>*,
                                      bool->GarbageCollect()::_lambda(ManagedBuffer<PixelUnpackBuffer> const&,
                                                                      ManagedBuffer<PixelUnpackBuffer> const&) _1_>(
                        pMVar6, auVar8._0_8_, auVar8._8_8_);
                    cVar1 = this_01->empty();
                    if (!cVar1) {
                        ++local_38;
                    } else {
                        new (&local_50) eastl::ListIterator(&local_38);
                        local_48 = local_40->erase(local_50);
                        local_38 = local_48;
                    }
                    local_48.end();
                    cVar1 = local_38 != local_48;
                } while (cVar1);
            }
        }
    }

    // 0x100c12b60
    void BufferPool<PixelUnpackBuffer>::OnDeviceLost() {
        ((uint8_t)this)->GarbageCollect();
    }

    // 0x100c37470
    BufferPool<IndexBuffer>::~BufferPool() {
        uint8_t* puVar1 = PTR_vtable_100ee86b0;
        ((this + 10))->~map();
        ((this + 4))->~map();
        ((this + 2))->~RenderDeviceOnEndFrame();
    }

    // 0x100c374d0
    BufferPool<VertexBuffer>::~BufferPool() {
        uint8_t* puVar1 = PTR_vtable_100ee86b8;
        ((this + 10))->~map();
        ((this + 4))->~map();
        ((this + 2))->~RenderDeviceOnEndFrame();
    }

    // 0x100c37530
    BufferPool<ShaderConstBuffer>::~BufferPool() {
        uint8_t* puVar1 = PTR_vtable_100ee86c8;
        ((this + 10))->~map();
        ((this + 4))->~map();
        ((this + 2))->~RenderDeviceOnEndFrame();
    }

    // 0x100c37590
    BufferPool<PixelUnpackBuffer>::~BufferPool() {
        uint8_t* puVar1 = PTR_vtable_100ee86c0;
        ((this + 10))->~map();
        ((this + 4))->~map();
        ((this + 2))->~RenderDeviceOnEndFrame();
    }

} // namespace jag::render::internal

namespace jag::render {
    class BufferPoolStats {
    public:
        class PoolStats;
        void RecordBufferCreation(const char* str, unsigned int arg2, unsigned int arg3,
                                  BufferCreationReason bufferCreationReason);
        void RecordBufferRecycle(const char* str, unsigned int arg2, unsigned int arg3, unsigned int arg4);
        void RecordBufferDestruction(const char* str, unsigned int arg2, unsigned int arg3, unsigned int arg4);
        void RecordEndOfFrameStats(const char* str, unsigned int arg2, unsigned int arg3, unsigned int arg4,
                                   unsigned int arg5);
        void PrintPoolUsage();
        void ResetStats();
        static eastl::hash_map<eastl::fixed_string<char, 64>, eastl::map<unsigned int, PoolStats>,
                               eastl::string_hash<eastl::fixed_string<char, 64>>>
            m_stats;

        uint8_t _unknown_0[1];
    };

    class BufferPoolStats::PoolStats {
    public:
        PoolStats();
    };

    class StencilOpDesc {
    public:
        uint32_t operator==(const StencilOpDesc& rect) const;
        StencilOpDesc();
        void SetToDefault();

    private:
        int field_0;
        int field_4;
        int field_8;
        int field_12;
        uint8_t _unknown_16[4];
    };

    // 0x100c319f0
    GPUMemoryTrackingEntry::~GPUMemoryTrackingEntry() {
        Unregister();
    }

    // 0x100c32d10
    StencilOpDesc::StencilOpDesc() {
        SetToDefault();
    }

    // 0x100c32d20
    void StencilOpDesc::SetToDefault() {
        field_0 = 7680;
        field_4 = 7680;
        field_8 = 7680;
        field_12 = 519;
    }

    // 0x100c32dc0
    RenderTargetBlendDesc::RenderTargetBlendDesc() {
        SetToDefault();
    }

    // 0x100c32dd0
    void RenderTargetBlendDesc::SetToDefault() {
        field_0 = 0;
        field_4 = 1;
        field_8 = 0;
        *(uint8_t**)&field_12 = &UNK_100008006;
        field_20 = 0;
        field_24 = 32774;
        field_28 = 15;
    }

    // 0x100c33000
    VertexArrayObject::VertexArrayObject()
        : MakeSharedPool<VertexArrayObject, 2048>(), m_nativeVAO(0), m_lastUsageSeconds(0.0) {}

    // 0x100c34c40
    RenderContextStateCache::~RenderContextStateCache() {
        field_696.~fixed_vector();
        field_528.~fixed_vector();
        field_360.~fixed_vector();
        field_72.~fixed_vector();
    }

    // 0x100c350a0
    uint32_t RenderTargetBlendDesc::operator==(const RenderTargetBlendDesc& renderTargetBlendDesc) const {
        uint32_t uVar1;

        if ((((field_0 == renderTargetBlendDesc.field_0) && (field_4 == renderTargetBlendDesc.field_4)) &&
             (field_8 == renderTargetBlendDesc.field_8)) &&
            (((*(int*)&field_12 == *(int*)&renderTargetBlendDesc.field_12 &&
               (field_16 == renderTargetBlendDesc.field_16)) &&
              ((field_20 == renderTargetBlendDesc.field_20 && (field_24 == renderTargetBlendDesc.field_24)))))) {
            uVar1 = (((uint32_t)((int32_t)((unsigned int)field_24 >> 8)) << 8) |
                     (uint8_t)(field_28 == renderTargetBlendDesc.field_28));
        } else {
            uVar1 = 0;
        }
        return uVar1;
    }

    // 0x100c37030
    GPUMemoryAllocatorZone::~GPUMemoryAllocatorZone() {
        field_29696.~fixed_map();
        field_584.~fixed_map();
    }

    // 0x100c372b0
    DeviceCallbacks::~DeviceCallbacks() {
        field_56.~vector();
    }

    // 0x100c37b80
    ResourceDataT<unsigned char const>::ResourceDataT(const unsigned char* arg1, unsigned int arg2, unsigned int arg3,
                                                      bool arg4) {
        *(unsigned char**)this = arg1;
        *(unsigned int*)(this + 8) = arg2;
        *(unsigned int*)(this + 12) = arg3;
        this[16] = (ResourceDataT<unsigned char>)arg4;
    }

    // 0x100c37ba0
    ResourceDataT<unsigned char const>::~ResourceDataT() {
        if (this[16] != (ResourceDataT<unsigned char>)0) {
            safe_delete_array<float>((unsigned char**)this);
        }
    }

} // namespace jag::render

namespace jag::math {
    // 0x100c312a0
    void IsPowerOf2(unsigned int arg1) {
        if (arg1 == 0) {
            return 0;
        }
        return (arg1 & arg1 - 1) == 0;
    }

    // 0x100c312c0
    int RoundDownToPowerOf2(unsigned int arg1) {
        int iVar1 = GetPowerOf2(arg1);
        int iVar2 = -1;
        if (-1 < iVar1) {
            iVar2 = 1 << ((uint8_t)iVar1 & 31);
        }
        return iVar2;
    }

    // 0x100c312e0
    int GetPowerOf2(unsigned int arg1) {
        bool bVar1;
        unsigned long uVar3;

        int iVar2 = -1;
        if (arg1 != 0) {
            uVar3 = (unsigned long)arg1;
            do {
                uVar3 = uVar3 >> 1;
                iVar2 = iVar2 + 1;
                bVar1 = 1 < arg1;
                arg1 = (unsigned int)uVar3;
            } while (bVar1);
        }
        return iVar2;
    }

} // namespace jag::math

namespace jag::fixedfunction {
    // 0x100c37c00
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0> const& callback) {
        *(uint64_t*)this = *(uint64_t*)callback;
        *(uint64_t*)(this + 144) = *(uint64_t*)(callback + 144);
        *(uint64_t*)(this + 152) = *(uint64_t*)(callback + 152);
        if (operator_cast_to_bool() != '\0') {
            callback.copy(this + 16);
        }
    }

    // 0x100c37c50
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::copy(void* arg1) const {
        if (operator_cast_to_bool() != '\0') {
            (**(void (**)(...))(this + 144))(this + 16, arg1);
        }
    }

} // namespace jag::fixedfunction

namespace jag {
    // 0x100c33320
    char const* DataSizeStringMB<eastl::fixed_string<char, 128>>(eastl::fixed_string<char, 128>& str,
                                                                 unsigned long long arg2) {
        float fVar2 = Bytes2Megabytes<unsigned long long>(arg2);
        str.sprintf("%.3fMB", (double)fVar2);
        return (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
    }

} // namespace jag

// 0x100c37350
bool __isctype(int arg1, unsigned long arg2) {
    bool bVar1 = false;
    if ((unsigned int)arg1 < 256) {
        bVar1 = (*(unsigned int*)(PTR___DefaultRuneLocale_100ee4030 + (long)arg1 * 4 + 60) & (unsigned int)arg2) != 0;
    }
    return bVar1;
}
