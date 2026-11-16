// libs/hal/render/buffers/DynamicBuffer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::render {
    template <typename...> // 2 instantiations, e.g. <IndexBuffer>, <VertexBuffer>
    class DynamicBuffer {
    public:
        class Buffer;
        auto MapWrite(LockType lockType, unsigned int arg2, unsigned int arg3, unsigned int arg4);
        void Unmap();
        void Update(unsigned int arg1, unsigned int arg2, const void* arg3);
        void CurrentBuffer() const;
        DynamicBuffer();
        ~DynamicBuffer();
        void RotateBuffers();
        void Destroy();
    };

    template <typename...> // 1 instantiations, e.g.
    class DynamicBuffer::Buffer {
    public:
        ~Buffer();
        Buffer();
        Buffer(DynamicBuffer<VertexBuffer>::Buffer&& managedBuffer);
        Buffer(DynamicBuffer<IndexBuffer>::Buffer&& buffer);
    };

    // 0x1007d6540
    auto DynamicBuffer<VertexBuffer>::MapWrite(LockType lockType, unsigned int arg2, unsigned int arg3,
                                               unsigned int arg4) {
        if (lockType != 4) {
            LogAssert("lockType == LOCK_TYPE_WRITE_DISCARD",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "DynamicBuffer.h",
                      66, nullptr);
        }
        if (arg2 != 0) {
            LogAssert("offset == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "DynamicBuffer.h",
                      67, nullptr);
        }
        if (arg3 == 0) {
            LogAssert("size > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "DynamicBuffer.h",
                      68, nullptr);
        }
        unsigned long uVar2 = size();
        if (6000 < uVar2) {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "DynamicBuffer.h",
                      69, "Excessive buffers held within DynamicBuffer - make sure RotateBuffers is being called.");
        }
        emplace_back<>();
        auto this_01 = back();
        if (((unsigned int)this_01)->Create(arg3, 9) == '\0') {
            LogAssert("success",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "DynamicBuffer.h",
                      78, nullptr);
        }
        auto result = this_01->MapWrite(8, 0, arg3, arg4);
        return result;
    }

    // 0x1007d6c60
    void DynamicBuffer<VertexBuffer>::Unmap() {
        ((VertexBuffer*)back())->Unmap();
    }

    // 0x1008f27b0
    void DynamicBuffer<VertexBuffer>::Update(unsigned int arg1, unsigned int arg2, const void* arg3) {
        if (arg1 != 0) {
            LogAssert("offset == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "DynamicBuffer.h",
                      47, nullptr);
        }
        if (arg2 == 0) {
            LogAssert("dataSize > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "DynamicBuffer.h",
                      48, nullptr);
        }
        if (arg3 == nullptr) {
            LogAssert("pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "DynamicBuffer.h",
                      49, nullptr);
        }
        unsigned long uVar2 = size();
        if (6000 < uVar2) {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "DynamicBuffer.h",
                      50, "Excessive buffers held within DynamicBuffer - make sure RotateBuffers is being called.");
        }
        emplace_back<>();
        back()->Create(arg2, 8);
    }

    // 0x1008f28b0
    void DynamicBuffer<VertexBuffer>::CurrentBuffer() const {

        if (empty()) {
            LogAssert("!m_buffers.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "DynamicBuffer.h",
                      92, nullptr);
        }
        if (!(((BufferInterface*)back())->IsCreated())) {
            LogAssert("m_buffers.back().m_buffer.IsCreated()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "DynamicBuffer.h",
                      93, nullptr);
        }
        back();
    }

    // 0x1008f2aa0
    void DynamicBuffer<IndexBuffer>::Update(unsigned int arg1, unsigned int arg2, const void* arg3) {
        if (arg1 != 0) {
            LogAssert("offset == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "DynamicBuffer.h",
                      47, nullptr);
        }
        if (arg2 == 0) {
            LogAssert("dataSize > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "DynamicBuffer.h",
                      48, nullptr);
        }
        if (arg3 == nullptr) {
            LogAssert("pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "DynamicBuffer.h",
                      49, nullptr);
        }
        unsigned long uVar2 = size();
        if (6000 < uVar2) {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "DynamicBuffer.h",
                      50, "Excessive buffers held within DynamicBuffer - make sure RotateBuffers is being called.");
        }
        emplace_back<>();
        back()->Create(arg2, 8);
    }

    // 0x1008f2ba0
    void DynamicBuffer<IndexBuffer>::CurrentBuffer() const {

        if (empty()) {
            LogAssert("!m_buffers.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "DynamicBuffer.h",
                      92, nullptr);
        }
        if (!(((BufferInterface*)back())->IsCreated())) {
            LogAssert("m_buffers.back().m_buffer.IsCreated()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "DynamicBuffer.h",
                      93, nullptr);
        }
        back();
    }

    // 0x1008ffe30
    DynamicBuffer<VertexBuffer>::DynamicBuffer()
        : eastl::deque<DynamicBuffer<VertexBuffer>::Buffer, eastl::allocator, 7u>() {}

    // 0x1009000d0
    DynamicBuffer<IndexBuffer>::DynamicBuffer()
        : eastl::deque<DynamicBuffer<IndexBuffer>::Buffer, eastl::allocator, 7u>() {}

    // 0x100900350
    DynamicBuffer<VertexBuffer>::~DynamicBuffer() {}

    // 0x1009004d0
    DynamicBuffer<VertexBuffer>::Buffer::~Buffer() {}

    // 0x100900640
    DynamicBuffer<IndexBuffer>::~DynamicBuffer() {}

    // 0x100900780
    DynamicBuffer<IndexBuffer>::Buffer::~Buffer() {}

    // 0x100900cc0
    void DynamicBuffer<VertexBuffer>::RotateBuffers() {
        long lVar2;

        auto local_60 = begin();
        auto local_40 = end();
        bool cVar1 = local_60 != local_40;
        if (cVar1) {
            do {
                lVar2 = local_60.HeapBeginPtr();
                *(int*)(lVar2 + 80) = *(int*)(lVar2 + 80) - 1;
                ++local_60;
                cVar1 = local_60 != local_40;
            } while (cVar1);
        }
        unsigned long uVar3 = size();
        while ((1 < uVar3 && (lVar2 = front(), *(int*)(lVar2 + 80) < 0))) {
            pop_front();
            uVar3 = size();
        }
    }

    // 0x100900d80
    void DynamicBuffer<IndexBuffer>::RotateBuffers() {
        long lVar2;

        auto local_60 = begin();
        auto local_40 = end();
        bool cVar1 = local_60 != local_40;
        if (cVar1) {
            do {
                lVar2 = local_60.HeapBeginPtr();
                *(int*)(lVar2 + 88) = *(int*)(lVar2 + 88) - 1;
                ++local_60;
                cVar1 = local_60 != local_40;
            } while (cVar1);
        }
        unsigned long uVar3 = size();
        while ((1 < uVar3 && (lVar2 = front(), *(int*)(lVar2 + 88) < 0))) {
            pop_front();
            uVar3 = size();
        }
    }

    // 0x100901110
    void DynamicBuffer<VertexBuffer>::Destroy() {
        clear();
    }

    // 0x100901120
    void DynamicBuffer<IndexBuffer>::Destroy() {
        clear();
    }

    // 0x10090d680
    DynamicBuffer<VertexBuffer>::Buffer::Buffer() {
        PooledBuffer<VertexBuffer>::PooledBuffer();
        *(uint32_t*)(this + 80) = 6;
    }

    // 0x10090d6a0
    DynamicBuffer<VertexBuffer>::Buffer::Buffer(DynamicBuffer<VertexBuffer>::Buffer&& managedBuffer)
        : PooledBuffer(managedBuffer) {
        *(uint32_t*)(this + 80) = *(uint32_t*)(managedBuffer + 80);
    }

    // 0x10090da90
    DynamicBuffer<IndexBuffer>::Buffer::Buffer() {
        PooledBuffer<IndexBuffer>::PooledBuffer();
        *(uint32_t*)(this + 88) = 6;
    }

    // 0x10090dab0
    DynamicBuffer<IndexBuffer>::Buffer::Buffer(DynamicBuffer<IndexBuffer>::Buffer&& buffer)
        : PooledBuffer<IndexBuffer>(buffer) {
        *(uint32_t*)(this + 88) = *(uint32_t*)(buffer + 88);
    }

} // namespace jag::render

namespace jag::graphics {
    // 0x1007d6dd0
    bool ParticleData::HasPotentiallyVisibleParticles() const {
        bool bVar2;
        float* pfVar3;

        if (field_96.empty() == '\0') {
            pfVar3 = (float*)field_96.front();
            bVar2 = 0.0 < *pfVar3 || *pfVar3 == 0.0;
        } else {
            bVar2 = false;
        }
        return bVar2;
    }

} // namespace jag::graphics
