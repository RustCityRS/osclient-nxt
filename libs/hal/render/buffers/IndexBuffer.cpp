// libs/hal/render/buffers/IndexBuffer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

#include "IndexBuffer.h"

namespace jag::render {
    // 0x100f29010, 8 bytes, __const
    IndexBuffer::BUFFER_TYPE_NAME = "IndexBuffer";

    // 0x10043b780: the linker folded this into game::StaticPointLight::GetLightTypeToLoad() const, which has identical code
    uint IndexBuffer::GetIndexCount() const;

    // 0x100659510: the linker folded this into graphics::AnimationDescriptor::GetLoopBehaviour() const, which has identical code
    int IndexBuffer::GetDataType() const;

    // 0x100c0cc90, 48 bytes, placed by class name and debug map
    // IndexBuffer::UpdateMaxIndex(void const*, bool)
    void IndexBuffer::UpdateMaxIndex(void* param_1, bool param_2) {
        uint uVar1;
        uint uVar2;

        uVar1 = *(uint*)((long)param_1 + 36);
        uVar2 = GetIndexTypeSize(*(undefined4*)((long)param_1 + 80));
        *(uint*)((long)param_1 + 84) = uVar1 / uVar2;
    }

    // 0x100c0ccd0, 32 bytes, base-object constructor, placed by class name
    // IndexBuffer::IndexBuffer()
    void IndexBuffer::IndexBuffer() {
        new (this) BufferInterface();
        m_dataType = -1;
        m_indexCount = 0;
    }

    // 0x100c0cf60, 48 bytes, base-object destructor, placed by class name
    // IndexBuffer::~IndexBuffer()
    void IndexBuffer::~IndexBuffer() {
        Destroy(this);
        ~BufferInterface();
    }

    // 0x100c0d440, 96 bytes, placed by class name
    // IndexBuffer::Create(unsigned int, unsigned int, void const*, IndexType)
    undefined4 IndexBuffer::Create(uint param_1, uint param_2, void* param_3, int param_5) {
        undefined4 uVar1;

        uVar1 = CreateBuffer("IndexBuffer", 34963, 35044, 35048, param_1, param_2, param_3);
        if ((char)uVar1 != '\0') {
            m_dataType = param_5;
            UpdateMaxIndex(this, (bool)86);
        }
        return uVar1;
    }

    // 0x100c0d910, 80 bytes, placed by class name
    // IndexBuffer::Update(unsigned int, unsigned int, void const*, UpdateType)
    void IndexBuffer::Update(undefined4 param_1, undefined4 param_2, undefined8 param_3, undefined4 param_5) {
        UpdateBuffer("IndexBuffer", 34963, 35048, param_1, param_2, param_3, param_5);
        UpdateMaxIndex(this, (bool)86);
    }

    // 0x100c0df50, 80 bytes, placed by class name
    // IndexBuffer::Destroy()
    void IndexBuffer::Destroy() {
        VAOManager* this_00;

        if (field_8 != 0) {
            this_00 = (VAOManager*)Instance();
            this_00->InvalidateIndexBuffer(this);
        }
        ReleaseNativeResources("IndexBuffer", 34963);
        m_dataType = -1;
        m_indexCount = 0;
    }

    // 0x100c149d0, 16 bytes, complete-object constructor, placed by class name
    // IndexBuffer::IndexBuffer(): jumps straight to the base-object constructor

    // 0x100c14a10, 16 bytes, complete-object destructor, placed by class name
    // IndexBuffer::~IndexBuffer(): jumps straight to the base-object destructor

    // 0x100c14a60, 80 bytes, placed by class name
    // IndexBuffer::MapRead(LockType, unsigned int, unsigned int, unsigned int)
    undefined8 IndexBuffer::MapRead(undefined8 param_1, undefined8 param_2, undefined4 param_3, undefined4 param_4,
                                    undefined4 param_5, undefined4 param_6) {
        BufferInterface::MapReadBuffer(param_1, param_2, "IndexBuffer", 34963, 35044, 35048, param_3, param_4, param_5,
                                       param_6);
        return param_1;
    }

    // 0x100c14b70, 80 bytes, placed by class name
    // IndexBuffer::MapWrite(LockType, unsigned int, unsigned int, unsigned int)
    undefined8 IndexBuffer::MapWrite(undefined8 param_1, undefined8 param_2, undefined4 param_3, undefined4 param_4,
                                     undefined4 param_5, undefined4 param_6) {
        BufferInterface::MapWriteBuffer(param_1, param_2, "IndexBuffer", 34963, 35044, 35048, param_3, param_4, param_5,
                                        param_6);
        return param_1;
    }

    // 0x100c14c80, 48 bytes, placed by class name
    // IndexBuffer::Unmap()
    undefined4 IndexBuffer::Unmap() {
        undefined4 uVar1;

        uVar1 = UnmapBuffer("IndexBuffer", 34963);
        UpdateMaxIndex(this, (bool)86);
        return uVar1;
    }

} // namespace jag::render
