// libs/hal/render/device/RenderDeviceCallback.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.hal.render

namespace jag::render::internal {
    template <typename...> // 4 instantiations, e.g. <IndexBuffer>, <PixelUnpackBuffer>, <ShaderConstBuffer>
    class ManagedBuffer {
    public:
        ManagedBuffer();
        ManagedBuffer(PooledBuffer<IndexBuffer>&& pooledBuffer);
        ~ManagedBuffer();
        bool IsReadyToReuse() const;
        ManagedBuffer(PooledBuffer<VertexBuffer>&& pooledBuffer);
        ManagedBuffer(PooledBuffer<ShaderConstBuffer>&& pooledBuffer);
        ManagedBuffer(PooledBuffer<PixelUnpackBuffer>&& pooledBuffer);
        ManagedBuffer<IndexBuffer>* operator=(ManagedBuffer<IndexBuffer>&& managedBuffer);
        ManagedBuffer<ShaderConstBuffer>* operator=(ManagedBuffer<VertexBuffer>&& managedBuffer);
    };

    // 0x100c0e2f0
    void BufferPool<IndexBuffer>::OnEndFrame() {
        Layout* this_00;
        unsigned int uVar1;
        unsigned int arg2;
        unsigned int* puVar3;
        ManagedBuffer<IndexBuffer>* managedBuffer1;
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
                managedBuffer1 = (ManagedBuffer<IndexBuffer>*)this_00->HeapBeginPtr();
                auVar4 = this_00->end();
                auVar4 = eastl::minmax_element<ManagedBuffer<IndexBuffer> const*,
                                               BufferPool<IndexBuffer>::OnEndFrame()::_lambda(
                                                   auto : 1 const&, auto : 2 const&) _1_>(managedBuffer1, auVar4._0_8_,
                                                                                          auVar4._8_8_);
                uVar1 = *puVar3;
                arg2 = this_00->size();
                ((BufferPoolStats*)"IndexBuffer")
                    ->RecordEndOfFrameStats((char*)(unsigned long)uVar1, arg2, *(unsigned int*)(auVar4._0_8_ + 88),
                                            *(unsigned int*)(auVar4._8_8_ + 88), in_R9D);
                ++local_40;
                cVar2 = local_40 != local_38;
            } while (cVar2);
        }
    }

    // 0x100c0e3c0
    void BufferPool<IndexBuffer>::GarbageCollect(bool arg1) {
        unsigned int uVar2;
        unsigned int uVar3;
        long lVar4;
        IndexBuffer* this_00;
        IndexBuffer* pIVar5;
        ManagedBuffer<IndexBuffer>* pMVar6;
        ManagedBuffer<IndexBuffer>* managedBuffer2;
        unsigned int uVar7;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* this_01;
        uint8_t auVar8[16];
        rbtree_iterator<eastl::pair<unsigned int const, eastl::vector<ManagedBuffer<IndexBuffer>> _>,
                        eastl::pair<unsigned int const, eastl::vector<ManagedBuffer<IndexBuffer>> _> const*,
                        eastl::pair<unsigned int const, eastl::vector<ManagedBuffer<IndexBuffer>> _> const&>* local_50;
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
                    this_00 = (IndexBuffer*)this_01->HeapBeginPtr();
                    pIVar5 = (IndexBuffer*)this_01->end();
                    for (; this_00 != pIVar5; this_00 = (IndexBuffer*)&this_00[1].field_4) {
                        uVar7 = *(int*)&this_00->field_88 + 1;
                        *(unsigned int*)&this_00->field_88 = uVar7;
                        uVar2 = this_00->GetEndPosition();
                        uVar3 = 1000;
                        if (16383 < uVar2) {
                            uVar3 = 5;
                        }
                        if ((uVar3 < uVar7) && (cVar1 = this_00->IsPermanent(), !cVar1)) {
                            this_00->Destroy();
                        }
                    }
                    pMVar6 = (ManagedBuffer<IndexBuffer>*)this_01->HeapBeginPtr();
                    auVar8 = this_01->end();
                    pMVar6 = std::remove_if<ManagedBuffer<IndexBuffer>*,
                                            bool->GarbageCollect()::_lambda(ManagedBuffer<IndexBuffer>&) _1_>(
                        pMVar6, auVar8._0_8_, auVar8._8_8_);
                    managedBuffer2 = (ManagedBuffer<IndexBuffer>*)this_01->end();
                    this_01->erase(pMVar6, managedBuffer2);
                    pMVar6 = (ManagedBuffer<IndexBuffer>*)this_01->HeapBeginPtr();
                    auVar8 = this_01->end();
                    eastl::shell_sort<ManagedBuffer<IndexBuffer>*,
                                      bool->GarbageCollect()::_lambda(ManagedBuffer<IndexBuffer> const&,
                                                                      ManagedBuffer<IndexBuffer> const&) _1_>(
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

    // 0x100c0e6d0
    void BufferPool<IndexBuffer>::OnDeviceLost() {
        ((uint8_t)this)->GarbageCollect();
    }

    // 0x100c0ed50
    ManagedBuffer<IndexBuffer>::ManagedBuffer() {
        PooledBuffer<IndexBuffer>::PooledBuffer();
        *(uint32_t*)(this + 88) = 0;
    }

    // 0x100c0ed80
    ManagedBuffer<IndexBuffer>::ManagedBuffer(PooledBuffer<IndexBuffer>&& pooledBuffer)
        : PooledBuffer<IndexBuffer>(pooledBuffer) {
        *(uint32_t*)(this + 88) = 0;
    }

    // 0x100c0edb0
    ManagedBuffer<IndexBuffer>::~ManagedBuffer() {
        Destroy();
    }

    // 0x100c0edf0
    bool ManagedBuffer<IndexBuffer>::IsReadyToReuse() const {
        if (*(unsigned int*)(this + 88) < 4) {
            return 0;
        }
        return IsCreated();
    }

    // 0x100c10390
    ManagedBuffer<VertexBuffer>::ManagedBuffer() {
        PooledBuffer<VertexBuffer>::PooledBuffer();
        *(uint32_t*)(this + 80) = 0;
    }

    // 0x100c103c0
    ManagedBuffer<VertexBuffer>::ManagedBuffer(PooledBuffer<VertexBuffer>&& pooledBuffer) : PooledBuffer(pooledBuffer) {
        *(uint32_t*)(this + 80) = 0;
    }

    // 0x100c103f0
    ManagedBuffer<VertexBuffer>::~ManagedBuffer() {
        Destroy();
    }

    // 0x100c10430
    bool ManagedBuffer<VertexBuffer>::IsReadyToReuse() const {
        if (*(unsigned int*)(this + 80) < 4) {
            return 0;
        }
        return IsCreated();
    }

    // 0x100c119c0
    ManagedBuffer<ShaderConstBuffer>::ManagedBuffer() {
        PooledBuffer<ShaderConstBuffer>::PooledBuffer();
        *(uint32_t*)(this + 80) = 0;
    }

    // 0x100c119f0
    ManagedBuffer<ShaderConstBuffer>::ManagedBuffer(PooledBuffer<ShaderConstBuffer>&& pooledBuffer)
        : PooledBuffer(pooledBuffer) {
        *(uint32_t*)(this + 80) = 0;
    }

    // 0x100c11a20
    ManagedBuffer<ShaderConstBuffer>::~ManagedBuffer() {
        Destroy();
    }

    // 0x100c11a60
    bool ManagedBuffer<ShaderConstBuffer>::IsReadyToReuse() const {
        if (*(unsigned int*)(this + 80) < 4) {
            return 0;
        }
        return IsCreated();
    }

    // 0x100c12e90
    ManagedBuffer<PixelUnpackBuffer>::ManagedBuffer() {
        PooledBuffer<PixelUnpackBuffer>::PooledBuffer();
        *(uint32_t*)(this + 80) = 0;
    }

    // 0x100c12ec0
    ManagedBuffer<PixelUnpackBuffer>::ManagedBuffer(PooledBuffer<PixelUnpackBuffer>&& pooledBuffer)
        : PooledBuffer(pooledBuffer) {
        *(uint32_t*)(this + 80) = 0;
    }

    // 0x100c12ef0
    ManagedBuffer<PixelUnpackBuffer>::~ManagedBuffer() {
        Destroy();
    }

    // 0x100c12f30
    bool ManagedBuffer<PixelUnpackBuffer>::IsReadyToReuse() const {
        if (*(unsigned int*)(this + 80) < 4) {
            return 0;
        }
        return IsCreated();
    }

} // namespace jag::render::internal

namespace jag::render {
    class RenderDeviceCallback {
    public:
        // virtual methods in vtable order
        virtual ~RenderDeviceCallback();
        virtual void OnDeviceLost();
        void OnWindowResize(const math::Rect<unsigned int>& arg1);
        RenderDeviceCallback(bool arg1, int arg2);
        void RegisterRenderDeviceCallback(int arg1);
        void UnregisterRenderDeviceCallback();

    private:
        uint8_t field_8;
        uint8_t _unknown_9[3];
        int field_12;
        uint8_t _unknown_16[4];
    };

    // 0x100009e70: RenderDeviceCallback::OnDeviceLost() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: RenderDeviceCallback::OnWindowResize(math::Rect<unsigned int> const&) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100c0e220
    RenderDeviceCallback::RenderDeviceCallback(bool arg1, int arg2) : field_8(0), field_12(1) {
        uint64_t in_register_00000031;

        if ((int)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg1) != 0) {
            RegisterRenderDeviceCallback(arg2);
        }
    }

    // 0x100c0e250
    RenderDeviceOnEndFrame::RenderDeviceOnEndFrame(bool arg1) : field_8(0) {
        uint32_t in_register_00000031;

        if ((((uint32_t)in_register_00000031 << 8) | (uint8_t)arg1) != 0) {
            RegisterOnEndFrame();
        }
    }

    // 0x100c0e280
    RenderDeviceOnEndFrame::~RenderDeviceOnEndFrame() {
        RenderDevice* pRVar1;

        if (field_8 != '\0') {
            pRVar1 = InstancePtr();
            if (pRVar1 != nullptr) {
                pRVar1 = (RenderDevice*)Instance();
                pRVar1->UnregisterOnEndFrame(this);
            }
        }
    }

    // 0x100c0e2c0
    RenderDeviceCallback::~RenderDeviceCallback() {
        UnregisterRenderDeviceCallback();
    }

    // 0x100c2e4d0
    void RenderDeviceCallback::RegisterRenderDeviceCallback(int arg1) {
        if (field_8 == '\0') {
            field_12 = arg1;
            ((RenderDevice*)Instance())->RegisterCallback(this);
            field_8 = 1;
        }
    }

    // 0x100c2e510
    void RenderDeviceCallback::UnregisterRenderDeviceCallback() {
        RenderDevice* pRVar1;

        if (field_8 != '\0') {
            pRVar1 = InstancePtr();
            if (pRVar1 != nullptr) {
                pRVar1 = (RenderDevice*)Instance();
                pRVar1->UnregisterCallback(this);
                field_8 = 0;
            }
        }
    }

} // namespace jag::render
