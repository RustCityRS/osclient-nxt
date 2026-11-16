// libs/hal/render/buffers/OGL/ShaderStorageBuffer_OGL.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

#include "libs/hal/render/buffers/ShaderStorageBuffer.h"

namespace jag::render {
    // 0x100f48880, 4 bytes, __data
    ShaderStorageBuffer::BUFFER_TYPE = 37074;

    // 0x100c15250, 80 bytes, base-object constructor, placed by class name and debug map
    // ShaderStorageBuffer::ShaderStorageBuffer()
    void ShaderStorageBuffer::ShaderStorageBuffer() {
        NXTPixScreen* this_00;

        new (this) BufferInterface();
        this_00 = (NXTPixScreen*)Instance();
        if (this_00->GetUIHeight() == 10) {
            BUFFER_TYPE = 34962;
        }
    }

    // 0x100c152a0, 16 bytes, complete-object constructor, placed by class name and debug map
    // ShaderStorageBuffer::ShaderStorageBuffer(): jumps straight to the base-object constructor

    // 0x100c152b0, 48 bytes, base-object destructor, placed by class name and debug map
    // ShaderStorageBuffer::~ShaderStorageBuffer()
    void ShaderStorageBuffer::~ShaderStorageBuffer() {
        Destroy(this);
        ~BufferInterface();
    }

    // 0x100c152e0, 32 bytes, placed by class name and debug map
    // ShaderStorageBuffer::Destroy()
    void ShaderStorageBuffer::Destroy() {
        ReleaseNativeResources("ShaderStorageBuffer", BUFFER_TYPE);
    }

    // 0x100c15300, 16 bytes, complete-object destructor, placed by class name and debug map
    // ShaderStorageBuffer::~ShaderStorageBuffer(): jumps straight to the base-object destructor

    // 0x100c15310, 128 bytes, placed by class name and debug map
    // ShaderStorageBuffer::Create(unsigned int, unsigned int, void const*)
    void ShaderStorageBuffer::Create(uint param_1, uint param_2, void* param_3) {
        MapArea* this_00;
        long lVar1;

        this_00 = (MapArea*)Instance();
        lVar1 = this_00->GetOrigin();
        if (*(char*)(lVar1 + 132) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("RenderDevice::Instance().GetDeviceCaps().m_ShaderStorageBuffers",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "ShaderStorageBuffer_OGL.cpp",
                      35, (char*)0);
        }
        CreateBuffer("ShaderStorageBuffer", BUFFER_TYPE, 35041, 35049, param_1, param_2, param_3);
    }

    // 0x100c15390, 80 bytes, placed by class name and debug map
    // ShaderStorageBuffer::MapRead(LockType, unsigned int, unsigned int, unsigned int)
    undefined8 ShaderStorageBuffer::MapRead(undefined8 param_1, undefined8 param_2, undefined4 param_3,
                                            undefined4 param_4, undefined4 param_5, undefined4 param_6) {
        BufferInterface::MapReadBuffer(param_1, param_2, "ShaderStorageBuffer", BUFFER_TYPE, 35041, 35049, param_3,
                                       param_4, param_5, param_6);
        return param_1;
    }

    // 0x100c153e0, 80 bytes, placed by class name and debug map
    // ShaderStorageBuffer::MapWrite(LockType, unsigned int, unsigned int, unsigned int)
    undefined8 ShaderStorageBuffer::MapWrite(undefined8 param_1, undefined8 param_2, undefined4 param_3,
                                             undefined4 param_4, undefined4 param_5, undefined4 param_6) {
        BufferInterface::MapWriteBuffer(param_1, param_2, "ShaderStorageBuffer", BUFFER_TYPE, 35041, 35049, param_3,
                                        param_4, param_5, param_6);
        return param_1;
    }

    // 0x100c15430, 32 bytes, placed by class name and debug map
    // ShaderStorageBuffer::Unmap()
    void ShaderStorageBuffer::Unmap() {
        UnmapBuffer("ShaderStorageBuffer", BUFFER_TYPE);
    }

} // namespace jag::render
