// libs/hal/render/buffers/OGL/ShaderConstBuffer_OGL.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

#include "libs/hal/render/buffers/ShaderConstBuffer.h"

namespace jag::render {
    // 0x100f29020
    const char* ShaderConstBuffer::BUFFER_TYPE_NAME = "ShaderConstBuffer";

    // 0x100c10460
    ShaderConstBuffer::ShaderConstBuffer() : BufferInterface() {}

    // 0x100c106e0
    ShaderConstBuffer::~ShaderConstBuffer() {
        Destroy();
    }

    // 0x100c10bb0
    uint64_t ShaderConstBuffer::Create(unsigned int arg1, unsigned int arg2, const void* arg3) {
        uint64_t uVar3;

        if (this_thread::IsMainThread() == '\0') {
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "ShaderConstBuffer_OGL.cpp",
                      22, nullptr);
        }
        long lVar2 = ((MapArea*)Instance())->GetOrigin();
        if (*(char*)(lVar2 + 120) == '\0') {
            uVar3 = 1;
        } else {
            if (*(unsigned int*)(lVar2 + 128) < arg1) {
                LogAssert("sizeInBytes <= (uint)(deviceCaps.m_MaxUniformBlockSize)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                          "OGL/ShaderConstBuffer_OGL.cpp",
                          27, nullptr);
            }
            if (65535 < arg1) {
                LogAssert("sizeInBytes < 65536",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                          "OGL/ShaderConstBuffer_OGL.cpp",
                          29, nullptr);
            }
            if ((arg1 & 3) != 0) {
                LogAssert("sizeInBytes % 4 == 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                          "OGL/ShaderConstBuffer_OGL.cpp",
                          30, nullptr);
            }
            uVar3 = CreateBuffer("ShaderConstBuffer", 35345, 35044, 35048, arg1, arg2, arg3);
        }
        return uVar3;
    }

    // 0x100c10e20
    void ShaderConstBuffer::Update(unsigned int arg1, unsigned int arg2, const void* arg3, UpdateType updateType) {

        if (!(this_thread::IsMainThread())) {
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "ShaderConstBuffer_OGL.cpp",
                      65, nullptr);
        }
        if (IsCreated()) {
            if ((arg1 & 3) != 0) {
                LogAssert("byteOffset % 4 == 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                          "OGL/ShaderConstBuffer_OGL.cpp",
                          71, nullptr);
            }
            if ((arg2 & 3) != 0) {
                LogAssert("dataSize % 4 == 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/"
                          "OGL/ShaderConstBuffer_OGL.cpp",
                          72, nullptr);
            }
            UpdateBuffer("ShaderConstBuffer", 35345, 35048, arg1, arg2, arg3, updateType);
        }
    }

    // 0x100c11080
    void ShaderConstBuffer::Destroy() {
        if (this_thread::IsMainThread() == '\0') {
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "ShaderConstBuffer_OGL.cpp",
                      43, nullptr);
        }
        ReleaseNativeResources("ShaderConstBuffer", 35345);
    }

} // namespace jag::render
