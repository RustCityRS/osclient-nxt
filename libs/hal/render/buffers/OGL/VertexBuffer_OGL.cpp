// libs/hal/render/buffers/OGL/VertexBuffer_OGL.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

#include "libs/hal/render/buffers/VertexBuffer.h"

namespace jag::render {
    // 0x100f29018, 8 bytes, __const
    VertexBuffer::BUFFER_TYPE_NAME = "VertexBuffer";

    // 0x100c0ee20, 16 bytes, base-object constructor, placed by class name and debug map
    // VertexBuffer::VertexBuffer()
    void VertexBuffer::VertexBuffer() {
        new (this) BufferInterface();
    }

    // 0x100c0f0a0, 48 bytes, base-object destructor, placed by class name and debug map
    // VertexBuffer::~VertexBuffer()
    void VertexBuffer::~VertexBuffer() {
        Destroy(this);
        ~BufferInterface();
    }

    // 0x100c0f570, 64 bytes, placed by class name and debug map
    // VertexBuffer::Create(unsigned int, unsigned int, void const*)
    void VertexBuffer::Create(uint param_1, uint param_2, void* param_3) {
        CreateBuffer("VertexBuffer", 34962, 35044, 35048, param_1, param_2, param_3);
    }

    // 0x100c0f890, 48 bytes, placed by class name and debug map
    // VertexBuffer::Update(unsigned int, unsigned int, void const*, UpdateType)
    void VertexBuffer::Update(undefined4 param_1, undefined4 param_2, undefined8 param_3, undefined4 param_5) {
        UpdateBuffer("VertexBuffer", 34962, 35048, param_1, param_2, param_3, param_5);
    }

    // 0x100c0fa60, 64 bytes, placed by class name and debug map
    // VertexBuffer::Destroy()
    void VertexBuffer::Destroy() {
        VAOManager* this_00;

        if (field_8 != 0) {
            this_00 = (VAOManager*)Instance();
            this_00->InvalidateVertexBuffer(this);
        }
        ReleaseNativeResources("VertexBuffer", 34962);
    }

} // namespace jag::render
