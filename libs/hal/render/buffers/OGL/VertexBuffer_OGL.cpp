// libs/hal/render/buffers/OGL/VertexBuffer_OGL.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

#include "libs/hal/render/buffers/VertexBuffer.h"

namespace jag::render {
    // 0x100f29018
    const char* VertexBuffer::BUFFER_TYPE_NAME = "VertexBuffer";

    // 0x100c0ee20
    VertexBuffer::VertexBuffer() : BufferInterface() {}

    // 0x100c0f0a0
    VertexBuffer::~VertexBuffer() {
        Destroy();
    }

    // 0x100c0f570
    void VertexBuffer::Create(unsigned int arg1, unsigned int arg2, const void* arg3) {
        CreateBuffer("VertexBuffer", 34962, 35044, 35048, arg1, arg2, arg3);
    }

    // 0x100c0f890
    void VertexBuffer::Update(unsigned int arg1, unsigned int arg2, const void* arg3, UpdateType updateType) {
        UpdateBuffer("VertexBuffer", 34962, 35048, arg1, arg2, arg3, updateType);
    }

    // 0x100c0fa60
    void VertexBuffer::Destroy() {
        if (field_8 != 0) {
            Instance()->InvalidateVertexBuffer(*this);
        }
        ReleaseNativeResources("VertexBuffer", 34962);
    }

} // namespace jag::render
