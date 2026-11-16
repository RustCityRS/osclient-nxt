// libs/hal/render/buffers/OGL/ShaderStorageBuffer_OGL.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

#include "libs/hal/render/buffers/ShaderStorageBuffer.h"

namespace jag::render {
    // 0x100f48880
    int32_t ShaderStorageBuffer::BUFFER_TYPE = 37074;

    // 0x100c15250
    ShaderStorageBuffer::ShaderStorageBuffer() : BufferInterface() {
        if (((NXTPixScreen*)Instance())->GetUIHeight() == 10) {
            BUFFER_TYPE = 34962;
        }
    }

    // 0x100c152b0
    ShaderStorageBuffer::~ShaderStorageBuffer() {
        Destroy();
    }

    // 0x100c152e0
    void ShaderStorageBuffer::Destroy() {
        ReleaseNativeResources("ShaderStorageBuffer", BUFFER_TYPE);
    }

    // 0x100c15310
    void ShaderStorageBuffer::Create(unsigned int arg1, unsigned int arg2, const void* arg3) {
        long lVar1 = ((MapArea*)Instance())->GetOrigin();
        if (*(char*)(lVar1 + 132) == '\0') {
            LogAssert("RenderDevice::Instance().GetDeviceCaps().m_ShaderStorageBuffers",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "ShaderStorageBuffer_OGL.cpp",
                      35, nullptr);
        }
        CreateBuffer("ShaderStorageBuffer", BUFFER_TYPE, 35041, 35049, arg1, arg2, arg3);
    }

    // 0x100c15390
    auto ShaderStorageBuffer::MapRead(LockType lockType, unsigned int arg2, unsigned int arg3, unsigned int arg4) {
        auto result;
        result.MapReadBuffer(this, 15052981, BUFFER_TYPE, 35041, 35049, lockType, arg2, arg3);
        return result;
    }

    // 0x100c153e0
    auto ShaderStorageBuffer::MapWrite(LockType lockType, unsigned int arg2, unsigned int arg3, unsigned int arg4) {
        auto result;
        result.MapWriteBuffer(this, 15052981, BUFFER_TYPE, 35041, 35049, lockType, arg2, arg3);
        return result;
    }

    // 0x100c15430
    void ShaderStorageBuffer::Unmap() {
        UnmapBuffer("ShaderStorageBuffer", BUFFER_TYPE);
    }

} // namespace jag::render
