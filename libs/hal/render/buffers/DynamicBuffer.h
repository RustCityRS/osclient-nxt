// libs/hal/render/buffers/DynamicBuffer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::render {
    template <typename...> // 2 instantiations, e.g. <IndexBuffer>, <VertexBuffer>
    class DynamicBuffer {
    public:
        class Buffer;
        MapWrite(LockType, unsigned int, unsigned int, unsigned int);
        void Unmap();
        void Update(unsigned int, unsigned int, void const*);
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
        Buffer(DynamicBuffer<VertexBuffer>::Buffer&&);
        Buffer(DynamicBuffer<IndexBuffer>::Buffer&&);
    };

    // 0x1007d6540, 336 bytes, inline, placed by class name and debug map
    // DynamicBuffer<VertexBuffer>::MapWrite(LockType, unsigned int, unsigned int, unsigned int)
    undefined8
    DynamicBuffer<VertexBuffer>::MapWrite(undefined8 param_1,
                                          deque<DynamicBuffer<VertexBuffer>::Buffer, eastl::allocator, 7u>* param_2,
                                          int param_3, int param_4, uint param_5, undefined4 param_6) {
        char cVar1;
        ulong uVar2;
        undefined8 uVar3;

        if (param_3 != 4) {
            /* WARNING: Subroutine does not return */
            LogAssert("lockType == LOCK_TYPE_WRITE_DISCARD",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "DynamicBuffer.h",
                      66, (char*)0);
        }
        if (param_4 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("offset == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "DynamicBuffer.h",
                      67, (char*)0);
        }
        if (param_5 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("size > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "DynamicBuffer.h",
                      68, (char*)0);
        }
        uVar2 = eastl::deque<DynamicBuffer<VertexBuffer>::Buffer, eastl::allocator, 7u>::size(param_2);
        if (6000 < uVar2) {
            uVar3 = logger::default_logger();
            logger::Logger::Log(
                uVar3, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                "DynamicBuffer.h",
                69, "Excessive buffers held within DynamicBuffer - make sure RotateBuffers is being called.");
        }
        eastl::deque<DynamicBuffer<VertexBuffer>::Buffer, eastl::allocator, 7u>::emplace_back<>();
        uVar3 = eastl::deque<DynamicBuffer<VertexBuffer>::Buffer, eastl::allocator, 7u>::back();
        cVar1 = ((uint)uVar3)->Create(param_5, 9);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("success",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "DynamicBuffer.h",
                      78, (char*)0);
        }
        VertexBuffer::MapWrite(param_1, uVar3, 8, 0, param_5, param_6);
        return param_1;
    }

    // 0x1007d6c60, 32 bytes, inline, placed by class name and debug map
    // DynamicBuffer<VertexBuffer>::Unmap()
    void DynamicBuffer<VertexBuffer>::Unmap() {
        VertexBuffer* this;

        this = (VertexBuffer*)eastl::deque<DynamicBuffer<VertexBuffer>::Buffer, eastl::allocator, 7u>::back();
        Unmap();
    }

    // 0x1008f27b0, 256 bytes, inline, placed by class name
    // DynamicBuffer<VertexBuffer>::Update(unsigned int, unsigned int, void const*)
    void DynamicBuffer<VertexBuffer>::Update(uint param_1, uint param_2, void* param_3) {
        uint uVar1;
        ulong uVar2;
        undefined8 uVar3;

        if (param_1 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("offset == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "DynamicBuffer.h",
                      47, (char*)0);
        }
        if (param_2 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("dataSize > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "DynamicBuffer.h",
                      48, (char*)0);
        }
        if (param_3 == (void*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "DynamicBuffer.h",
                      49, (char*)0);
        }
        uVar2 = size();
        if (6000 < uVar2) {
            uVar3 = logger::default_logger();
            logger::Logger::Log(
                uVar3, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                "DynamicBuffer.h",
                50, "Excessive buffers held within DynamicBuffer - make sure RotateBuffers is being called.");
        }
        eastl::deque<DynamicBuffer<VertexBuffer>::Buffer, eastl::allocator, 7u>::emplace_back<>();
        uVar1 = eastl::deque<DynamicBuffer<VertexBuffer>::Buffer, eastl::allocator, 7u>::back();
        uVar1->Create(param_2, 8);
    }

    // 0x1008f28b0, 128 bytes, inline, placed by class name
    // DynamicBuffer<VertexBuffer>::CurrentBuffer() const
    void DynamicBuffer<VertexBuffer>::CurrentBuffer() {
        char cVar1;
        BufferInterface* this_00;

        cVar1 = empty();
        if (cVar1 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_buffers.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "DynamicBuffer.h",
                      92, (char*)0);
        }
        this_00 = (BufferInterface*)eastl::deque<DynamicBuffer<VertexBuffer>::Buffer, eastl::allocator, 7u>::back();
        cVar1 = this_00->IsCreated();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_buffers.back().m_buffer.IsCreated()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "DynamicBuffer.h",
                      93, (char*)0);
        }
        eastl::deque<DynamicBuffer<VertexBuffer>::Buffer, eastl::allocator, 7u>::back();
    }

    // 0x1008f2aa0, 256 bytes, inline, placed by class name
    // DynamicBuffer<IndexBuffer>::Update(unsigned int, unsigned int, void const*)
    void DynamicBuffer<IndexBuffer>::Update(uint param_1, uint param_2, void* param_3) {
        uint uVar1;
        ulong uVar2;
        undefined8 uVar3;

        if (param_1 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("offset == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "DynamicBuffer.h",
                      47, (char*)0);
        }
        if (param_2 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("dataSize > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "DynamicBuffer.h",
                      48, (char*)0);
        }
        if (param_3 == (void*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "DynamicBuffer.h",
                      49, (char*)0);
        }
        uVar2 = size();
        if (6000 < uVar2) {
            uVar3 = logger::default_logger();
            logger::Logger::Log(
                uVar3, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                "DynamicBuffer.h",
                50, "Excessive buffers held within DynamicBuffer - make sure RotateBuffers is being called.");
        }
        eastl::deque<DynamicBuffer<IndexBuffer>::Buffer, eastl::allocator, 7u>::emplace_back<>();
        uVar1 = eastl::deque<DynamicBuffer<IndexBuffer>::Buffer, eastl::allocator, 7u>::back();
        uVar1->Create(param_2, 8);
    }

    // 0x1008f2ba0, 128 bytes, inline, placed by class name
    // DynamicBuffer<IndexBuffer>::CurrentBuffer() const
    void DynamicBuffer<IndexBuffer>::CurrentBuffer() {
        char cVar1;
        BufferInterface* this_00;

        cVar1 = empty();
        if (cVar1 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_buffers.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "DynamicBuffer.h",
                      92, (char*)0);
        }
        this_00 = (BufferInterface*)eastl::deque<DynamicBuffer<IndexBuffer>::Buffer, eastl::allocator, 7u>::back();
        cVar1 = this_00->IsCreated();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_buffers.back().m_buffer.IsCreated()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                      "DynamicBuffer.h",
                      93, (char*)0);
        }
        eastl::deque<DynamicBuffer<IndexBuffer>::Buffer, eastl::allocator, 7u>::back();
    }

    // 0x1008ffd80, 16 bytes, complete-object constructor, inline, placed by class name
    // DynamicBuffer<VertexBuffer>::DynamicBuffer(): jumps straight to the base-object constructor

    // 0x1008ffda0, 16 bytes, complete-object constructor, inline, placed by class name
    // DynamicBuffer<IndexBuffer>::DynamicBuffer(): jumps straight to the base-object constructor

    // 0x1008ffdb0, 16 bytes, complete-object destructor, inline, placed by class name
    // DynamicBuffer<VertexBuffer>::~DynamicBuffer(): jumps straight to the base-object destructor

    // 0x1008ffe30, 16 bytes, base-object constructor, inline, placed by class name
    // DynamicBuffer<VertexBuffer>::DynamicBuffer()
    void DynamicBuffer<VertexBuffer>::DynamicBuffer() {
        new (this) eastl::deque<DynamicBuffer<VertexBuffer>::Buffer, eastl::allocator, 7u>();
    }

    // 0x1009000d0, 16 bytes, base-object constructor, inline, placed by class name
    // DynamicBuffer<IndexBuffer>::DynamicBuffer()
    void DynamicBuffer<IndexBuffer>::DynamicBuffer() {
        new (this) eastl::deque<DynamicBuffer<IndexBuffer>::Buffer, eastl::allocator, 7u>();
    }

    // 0x100900350, 16 bytes, base-object destructor, inline, placed by class name
    // DynamicBuffer<VertexBuffer>::~DynamicBuffer()
    void DynamicBuffer<VertexBuffer>::~DynamicBuffer() {
        ~deque();
    }

    // 0x100900410, 16 bytes, complete-object destructor, inline, placed by class name
    // DynamicBuffer<VertexBuffer>::Buffer::~Buffer(): jumps straight to the base-object destructor

    // 0x1009004d0, 16 bytes, base-object destructor, inline, placed by class name
    // DynamicBuffer<VertexBuffer>::Buffer::~Buffer()
    void DynamicBuffer<VertexBuffer>::Buffer::~Buffer() {
        ~PooledBuffer();
    }

    // 0x100900630, 16 bytes, complete-object destructor, inline, placed by class name
    // DynamicBuffer<IndexBuffer>::~DynamicBuffer(): jumps straight to the base-object destructor

    // 0x100900640, 16 bytes, base-object destructor, inline, placed by class name
    // DynamicBuffer<IndexBuffer>::~DynamicBuffer()
    void DynamicBuffer<IndexBuffer>::~DynamicBuffer() {
        ~deque();
    }

    // 0x1009006f0, 16 bytes, complete-object destructor, inline, placed by class name
    // DynamicBuffer<IndexBuffer>::Buffer::~Buffer(): jumps straight to the base-object destructor

    // 0x100900780, 16 bytes, base-object destructor, inline, placed by class name
    // DynamicBuffer<IndexBuffer>::Buffer::~Buffer()
    void DynamicBuffer<IndexBuffer>::Buffer::~Buffer() {
        ~PooledBuffer();
    }

    // 0x100900cc0, 192 bytes, inline, placed by class name
    // DynamicBuffer<VertexBuffer>::RotateBuffers()
    void DynamicBuffer<VertexBuffer>::RotateBuffers() {
        long lVar1;
        ulong uVar2;
        bool bVar3;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        eastl local_60[32];
        hashtable_iterator_base local_40[32];

        eastl::deque<DynamicBuffer<IndexBuffer>::Buffer, eastl::allocator, 7u>::begin();
        eastl::deque<DynamicBuffer<IndexBuffer>::Buffer, eastl::allocator, 7u>::end();
        bVar3 = eastl::operator!=(local_60, local_40, extraout_RDX);
        if (bVar3) {
            do {
                lVar1 = local_60->HeapBeginPtr();
                *(int*)(lVar1 + 80) = *(int*)(lVar1 + 80) + -1;
                eastl::DequeIterator<DynamicBuffer<VertexBuffer>::Buffer, DynamicBuffer<VertexBuffer>::Buffer*,
                                     DynamicBuffer<VertexBuffer>::Buffer&, 7u>::
                operator++((DequeIterator<DynamicBuffer<VertexBuffer>::Buffer, DynamicBuffer<VertexBuffer>::Buffer*,
                                          DynamicBuffer<VertexBuffer>::Buffer&, 7u>*)local_60);
                bVar3 = eastl::operator!=(local_60, local_40, extraout_RDX_00);
            } while (bVar3);
        }
        uVar2 = size();
        while ((1 < uVar2 && (lVar1 = eastl::deque<DynamicBuffer<VertexBuffer>::Buffer, eastl::allocator, 7u>::front(),
                              *(int*)(lVar1 + 80) < 0))) {
            eastl::deque<DynamicBuffer<VertexBuffer>::Buffer, eastl::allocator, 7u>::pop_front();
            uVar2 = size();
        }
    }

    // 0x100900d80, 192 bytes, inline, placed by class name
    // DynamicBuffer<IndexBuffer>::RotateBuffers()
    void DynamicBuffer<IndexBuffer>::RotateBuffers() {
        long lVar1;
        ulong uVar2;
        bool bVar3;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        eastl local_60[32];
        hashtable_iterator_base local_40[32];

        eastl::deque<DynamicBuffer<IndexBuffer>::Buffer, eastl::allocator, 7u>::begin();
        eastl::deque<DynamicBuffer<IndexBuffer>::Buffer, eastl::allocator, 7u>::end();
        bVar3 = eastl::operator!=(local_60, local_40, extraout_RDX);
        if (bVar3) {
            do {
                lVar1 = local_60->HeapBeginPtr();
                *(int*)(lVar1 + 88) = *(int*)(lVar1 + 88) + -1;
                eastl::DequeIterator<DynamicBuffer<IndexBuffer>::Buffer, DynamicBuffer<IndexBuffer>::Buffer*,
                                     DynamicBuffer<IndexBuffer>::Buffer&, 7u>::
                operator++((DequeIterator<DynamicBuffer<IndexBuffer>::Buffer, DynamicBuffer<IndexBuffer>::Buffer*,
                                          DynamicBuffer<IndexBuffer>::Buffer&, 7u>*)local_60);
                bVar3 = eastl::operator!=(local_60, local_40, extraout_RDX_00);
            } while (bVar3);
        }
        uVar2 = size();
        while ((1 < uVar2 && (lVar1 = eastl::deque<DynamicBuffer<IndexBuffer>::Buffer, eastl::allocator, 7u>::front(),
                              *(int*)(lVar1 + 88) < 0))) {
            eastl::deque<DynamicBuffer<IndexBuffer>::Buffer, eastl::allocator, 7u>::pop_front();
            uVar2 = size();
        }
    }

    // 0x100901110, 16 bytes, inline, placed by class name
    // DynamicBuffer<VertexBuffer>::Destroy()
    void DynamicBuffer<VertexBuffer>::Destroy() {
        clear();
    }

    // 0x100901120, 16 bytes, inline, placed by class name
    // DynamicBuffer<IndexBuffer>::Destroy()
    void DynamicBuffer<IndexBuffer>::Destroy() {
        clear();
    }

    // 0x10090d4f0, 16 bytes, complete-object constructor, inline, placed by class name
    // DynamicBuffer<VertexBuffer>::Buffer::Buffer(): jumps straight to the base-object constructor

    // 0x10090d670, 16 bytes, complete-object constructor, inline, placed by class name
    // DynamicBuffer<VertexBuffer>::Buffer::Buffer(DynamicBuffer<VertexBuffer>::Buffer&&): jumps straight to the base-object constructor

    // 0x10090d680, 32 bytes, base-object constructor, inline, placed by class name
    // DynamicBuffer<VertexBuffer>::Buffer::Buffer()
    void DynamicBuffer<VertexBuffer>::Buffer::Buffer() {
        PooledBuffer<VertexBuffer>::PooledBuffer();
        *(undefined4*)(this + 80) = 6;
    }

    // 0x10090d6a0, 32 bytes, base-object constructor, inline, placed by class name
    // DynamicBuffer<VertexBuffer>::Buffer::Buffer(DynamicBuffer<VertexBuffer>::Buffer&&)
    /* internal::ManagedBuffer<VertexBuffer>::ManagedBuffer(internal::ManagedBuffer<VertexBuffer>&&)
    */

    void internal::ManagedBuffer<VertexBuffer>::ManagedBuffer(ManagedBuffer* param_1) {
        new (this) PooledBuffer<ShaderConstBuffer>(param_1);
        *(undefined4*)(this + 80) = *(undefined4*)(param_1 + 80);
    }

    // 0x10090d900, 16 bytes, complete-object constructor, inline, placed by class name
    // DynamicBuffer<IndexBuffer>::Buffer::Buffer(): jumps straight to the base-object constructor

    // 0x10090da80, 16 bytes, complete-object constructor, inline, placed by class name
    // DynamicBuffer<IndexBuffer>::Buffer::Buffer(DynamicBuffer<IndexBuffer>::Buffer&&): jumps straight to the base-object constructor

    // 0x10090da90, 32 bytes, base-object constructor, inline, placed by class name
    // DynamicBuffer<IndexBuffer>::Buffer::Buffer()
    void DynamicBuffer<IndexBuffer>::Buffer::Buffer() {
        PooledBuffer<IndexBuffer>::PooledBuffer();
        *(undefined4*)(this + 88) = 6;
    }

    // 0x10090dab0, 32 bytes, base-object constructor, inline, placed by class name
    // DynamicBuffer<IndexBuffer>::Buffer::Buffer(DynamicBuffer<IndexBuffer>::Buffer&&)
    /* internal::ManagedBuffer<IndexBuffer>::ManagedBuffer(internal::ManagedBuffer<IndexBuffer>&&)
    */

    void internal::ManagedBuffer<IndexBuffer>::ManagedBuffer(ManagedBuffer* param_1) {
        new (this) PooledBuffer<IndexBuffer>(param_1);
        *(undefined4*)(this + 88) = *(undefined4*)(param_1 + 88);
    }

} // namespace jag::render

namespace jag::graphics {
    // 0x1007d6dd0, 64 bytes, inline, placed by debug map only (low confidence)
    // ParticleData::HasPotentiallyVisibleParticles() const
    bool ParticleData::HasPotentiallyVisibleParticles() {
        char cVar1;
        bool bVar2;
        float* pfVar3;

        cVar1 = (&field_96)->empty();
        if (cVar1 == '\0') {
            pfVar3 = (float*)(&field_96)->front();
            bVar2 = 0.0 < *pfVar3 || *pfVar3 == 0.0;
        } else {
            bVar2 = false;
        }
        return bVar2;
    }

} // namespace jag::graphics
