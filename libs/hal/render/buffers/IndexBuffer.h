// libs/hal/render/buffers/IndexBuffer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::render {
    class IndexBuffer {
    public:
        unsigned int GetIndexCount() const;
        IndexType GetDataType() const;
        void UpdateMaxIndex(const void* arg1, bool arg2);
        IndexBuffer();
        ~IndexBuffer();
        uint32_t Create(unsigned int arg1, unsigned int arg2, const void* arg3, IndexType indexType);
        void Update(unsigned int arg1, unsigned int arg2, const void* arg3, UpdateType updateType);
        bool IsRecyclable() const;
        void Destroy();
        auto MapRead(LockType lockType, unsigned int arg2, unsigned int arg3, unsigned int arg4);
        auto MapWrite(LockType lockType, unsigned int arg2, unsigned int arg3, unsigned int arg4);
        uint32_t Unmap();
        IndexBuffer(IndexBuffer&& indexBuffer);
        IndexBuffer* operator=(IndexBuffer&& indexBuffer);
        static const char* BUFFER_TYPE_NAME; // = "IndexBuffer"

    private:
        unsigned int field_0;
        uint8_t _unknown_4[4];
        unsigned int field_8;
        uint8_t _unknown_12[4];
        long field_16;
        LockType field_24;
        unsigned int field_28;
        unsigned int field_32;
        unsigned int field_36;
        unsigned int field_40;
        uint8_t field_44;
        uint8_t field_45[3];
        uint8_t _unknown_48[8];
        GPUMemoryTrackingEntry field_56;
        IndexType m_dataType;
        unsigned int m_indexCount;
        uint8_t _unknown_88[4];
    };

    // 0x100c0dc60
    bool IndexBuffer::IsRecyclable() const {
        return m_dataType == 5123;
    }

    // 0x100c31340
    IndexBuffer::IndexBuffer(IndexBuffer&& indexBuffer) : BufferInterface(indexBuffer) {
        unsigned int uVar1 = indexBuffer.m_indexCount;
        m_dataType = indexBuffer.m_dataType;
        m_indexCount = uVar1;
    }

    // 0x100c3a6a0
    IndexBuffer* IndexBuffer::operator=(IndexBuffer&& indexBuffer) {
        *this = indexBuffer;
        unsigned int uVar1 = indexBuffer.m_indexCount;
        m_dataType = indexBuffer.m_dataType;
        m_indexCount = uVar1;
        return this;
    }

} // namespace jag::render
