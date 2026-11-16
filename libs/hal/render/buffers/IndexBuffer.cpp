// libs/hal/render/buffers/IndexBuffer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

#include "IndexBuffer.h"

namespace jag::render {
    // 0x100f29010
    const char* IndexBuffer::BUFFER_TYPE_NAME = "IndexBuffer";

    // 0x10043b780: IndexBuffer::GetIndexCount() const has the same machine code as game::StaticPointLight::GetLightTypeToLoad() const

    // 0x100659510: IndexBuffer::GetDataType() const has the same machine code as graphics::AnimationDescriptor::GetLoopBehaviour() const

    // 0x100c0cc90
    void IndexBuffer::UpdateMaxIndex(const void* arg1, bool arg2) {
        unsigned int uVar1 = field_36;
        unsigned int uVar2 = GetIndexTypeSize(m_dataType);
        m_indexCount = uVar1 / uVar2;
    }

    // 0x100c0ccd0
    IndexBuffer::IndexBuffer() : BufferInterface(), m_dataType(4294967295), m_indexCount(0) {}

    // 0x100c0cf60
    IndexBuffer::~IndexBuffer() {
        Destroy();
    }

    // 0x100c0d440
    uint32_t IndexBuffer::Create(unsigned int arg1, unsigned int arg2, const void* arg3, IndexType indexType) {
        char* arg1_00 = "IndexBuffer";
        uint32_t uVar1 = CreateBuffer("IndexBuffer", 34963, 35044, 35048, arg1, arg2, arg3);
        if ((char)uVar1 != '\0') {
            m_dataType = indexType;
            UpdateMaxIndex(arg1_00, false);
        }
        return uVar1;
    }

    // 0x100c0d910
    void IndexBuffer::Update(unsigned int arg1, unsigned int arg2, const void* arg3, UpdateType updateType) {
        char* arg1_00 = "IndexBuffer";
        UpdateBuffer("IndexBuffer", 34963, 35048, arg1, arg2, arg3, updateType);
        UpdateMaxIndex(arg1_00, false);
    }

    // 0x100c0df50
    void IndexBuffer::Destroy() {
        if (field_8 != 0) {
            Instance()->InvalidateIndexBuffer(*this);
        }
        ReleaseNativeResources("IndexBuffer", 34963);
        m_dataType = 4294967295;
        m_indexCount = 0;
    }

    // 0x100c14a60
    auto IndexBuffer::MapRead(LockType lockType, unsigned int arg2, unsigned int arg3, unsigned int arg4) {
        auto result;
        result.MapReadBuffer(this, 15049302, 34963, 35044, 35048, lockType, arg2, arg3);
        return result;
    }

    // 0x100c14b70
    auto IndexBuffer::MapWrite(LockType lockType, unsigned int arg2, unsigned int arg3, unsigned int arg4) {
        auto result;
        result.MapWriteBuffer(this, 15049302, 34963, 35044, 35048, lockType, arg2, arg3);
        return result;
    }

    // 0x100c14c80
    uint32_t IndexBuffer::Unmap() {
        char* arg1 = "IndexBuffer";
        uint32_t uVar1 = UnmapBuffer("IndexBuffer", 34963);
        UpdateMaxIndex(arg1, false);
        return uVar1;
    }

} // namespace jag::render
