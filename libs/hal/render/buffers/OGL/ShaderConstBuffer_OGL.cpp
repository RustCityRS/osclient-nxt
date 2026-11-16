// libs/hal/render/buffers/OGL/ShaderConstBuffer_OGL.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

#include "libs/hal/render/buffers/ShaderConstBuffer.h"

namespace jag::render {
    // 0x100f29020, 8 bytes, __const
    ShaderConstBuffer::BUFFER_TYPE_NAME = "ShaderConstBuffer";

    // 0x100c10460, 16 bytes, base-object constructor, placed by class name and debug map
    // ShaderConstBuffer::ShaderConstBuffer()
    void ShaderConstBuffer::ShaderConstBuffer() {
        new (this) BufferInterface();
    }

    // 0x100c106e0, 48 bytes, base-object destructor, placed by class name and debug map
    // ShaderConstBuffer::~ShaderConstBuffer()
    void ShaderConstBuffer::~ShaderConstBuffer() {
        Destroy(this);
        ~BufferInterface();
    }

    // 0x100c10bb0, 272 bytes, placed by class name and debug map
    // ShaderConstBuffer::Create(unsigned int, unsigned int, void const*)
    undefined8 ShaderConstBuffer::Create(uint param_1, uint param_2, void* param_3) {
        MapArea* this_00;
        long lVar2;
        undefined8 uVar3;

        if (this_thread::IsMainThread() == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "ShaderConstBuffer_OGL.cpp",
                      22, (char*)0);
        }
        this_00 = (MapArea*)((ShaderConstBuffer*)this)->Instance();
        lVar2 = this_00->GetOrigin();
        if (*(char*)(lVar2 + 120) == '\0') {
            uVar3 = 1;
        } else {
            if (*(uint*)(lVar2 + 128) < param_1) {
                /* WARNING: Subroutine does not return */
                LogAssert("sizeInBytes <= (uint)(deviceCaps.m_MaxUniformBlockSize)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                          "OGL/ShaderConstBuffer_OGL.cpp",
                          27, (char*)0);
            }
            if (65535 < param_1) {
                /* WARNING: Subroutine does not return */
                LogAssert("sizeInBytes < 65536",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                          "OGL/ShaderConstBuffer_OGL.cpp",
                          29, (char*)0);
            }
            if ((param_1 & 3) != 0) {
                /* WARNING: Subroutine does not return */
                LogAssert("sizeInBytes % 4 == 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                          "OGL/ShaderConstBuffer_OGL.cpp",
                          30, (char*)0);
            }
            uVar3 = CreateBuffer("ShaderConstBuffer", 35345, 35044, 35048, param_1, param_2, param_3);
        }
        return uVar3;
    }

    // 0x100c10e20, 208 bytes, placed by class name and debug map
    // ShaderConstBuffer::Update(unsigned int, unsigned int, void const*, UpdateType)
    void ShaderConstBuffer::Update(uint param_1, uint param_2, undefined8 param_3, undefined4 param_5) {
        char cVar1;

        cVar1 = this_thread::IsMainThread();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "ShaderConstBuffer_OGL.cpp",
                      65, (char*)0);
        }
        cVar1 = IsCreated();
        if (cVar1 != '\0') {
            if ((param_1 & 3) != 0) {
                /* WARNING: Subroutine does not return */
                LogAssert("byteOffset % 4 == 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                          "OGL/ShaderConstBuffer_OGL.cpp",
                          71, (char*)0);
            }
            if ((param_2 & 3) != 0) {
                /* WARNING: Subroutine does not return */
                LogAssert("dataSize % 4 == 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                          "OGL/ShaderConstBuffer_OGL.cpp",
                          72, (char*)0);
            }
            UpdateBuffer("ShaderConstBuffer", 35345, 35048, param_1, param_2, param_3, param_5);
        }
    }

    // 0x100c11080, 80 bytes, placed by class name and debug map
    // ShaderConstBuffer::Destroy()
    void ShaderConstBuffer::Destroy() {
        if (this_thread::IsMainThread() == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "ShaderConstBuffer_OGL.cpp",
                      43, (char*)0);
        }
        ReleaseNativeResources("ShaderConstBuffer", 35345);
    }

} // namespace jag::render
