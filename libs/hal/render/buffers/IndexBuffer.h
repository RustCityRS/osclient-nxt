// libs/hal/render/buffers/IndexBuffer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::render {
    class IndexBuffer {
    public:
        GetIndexCount() const;
        GetDataType() const;
        void UpdateMaxIndex(void const*, bool);
        IndexBuffer();
        ~IndexBuffer();
        Create(unsigned int, unsigned int, void const*, IndexType);
        void Update(unsigned int, unsigned int, void const*, UpdateType);
        bool IsRecyclable() const;
        void Destroy();
        MapRead(LockType, unsigned int, unsigned int, unsigned int);
        MapWrite(LockType, unsigned int, unsigned int, unsigned int);
        Unmap();
        IndexBuffer(IndexBuffer&&);
        IndexBuffer* operator=(IndexBuffer&&);
        static /* 8 bytes */ BUFFER_TYPE_NAME; // = "IndexBuffer"

        // data members, from how the methods use this: 92 bytes
        uint field_0; // offset 0
        char _unknown_4[4];
        uint field_8; // offset 8
        char _unknown_12[4];
        long field_16;       // offset 16
        int field_24;        // offset 24
        uint field_28;       // offset 28
        int field_32;        // offset 32
        uint field_36;       // offset 36
        uint field_40;       // offset 40
        byte field_44;       // offset 44
        undefined3 field_45; // offset 45
        char _unknown_48[8];
        GPUMemoryTrackingEntry field_56; // offset 56
        undefined4 field_80;             // offset 80
        uint field_84;                   // offset 84
        char _unknown_88[4];
    };

    // 0x100c0dc60, 16 bytes, inline, placed by class name
    // IndexBuffer::IsRecyclable() const
    bool IndexBuffer::IsRecyclable() {
        return field_80 == 5123;
    }

    // 0x100c31340, 32 bytes, base-object constructor, inline, placed by class name
    // IndexBuffer::IndexBuffer(IndexBuffer&&)
    void IndexBuffer::IndexBuffer(IndexBuffer* param_1) {
        uint uVar1;

        new (this) BufferInterface(param_1);
        uVar1 = param_1->field_84;
        field_80 = param_1->field_80;
        field_84 = uVar1;
    }

    // 0x100c3a6a0, 48 bytes, inline, placed by class name
    // IndexBuffer::operator=(IndexBuffer&&)
    /* IndexBuffer::TEMPNAMEPLACEHOLDERVALUE(IndexBuffer&&) */

    IndexBuffer* IndexBuffer::operator=(IndexBuffer* param_1) {
        uint uVar1;

        BufferInterface::operator=((BufferInterface*)this, (BufferInterface*)param_1);
        uVar1 = param_1->field_84;
        field_80 = param_1->field_80;
        field_84 = uVar1;
        return this;
    }

} // namespace jag::render
