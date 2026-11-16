// libs/hal/render/buffers/OGL/BufferInterfaceDec_OGL.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::render {
    // 0x100c14ab0
    BufferInterface* BufferInterface::MapReadBuffer(const char* str, unsigned int arg2, unsigned int arg3,
                                                    unsigned int arg4, LockType lockType, unsigned int arg6,
                                                    unsigned int arg7, unsigned int arg8) {
        uint32_t in_register_00000014;
        uint32_t in_register_00000084;
        unsigned int in_stack_00000020;

        if ((arg6 != 1) && (arg6 != 7)) {
            LogAssert("lockType == LockType::LOCK_TYPE_READ || lockType == LockType::LOCK_TYPE_READ_PERSISTENT",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "BufferInterfaceDec_OGL.h",
                      17, nullptr, (((uint64_t)in_register_00000084 << 32) | (uint32_t)arg4), (unsigned long)arg6,
                      (((uint64_t)arg4 << 32) | (uint32_t)lockType));
        }
        auto arg1 = MapBuffer((BufferInterface*)str, (char*)(((uint64_t)in_register_00000014 << 32) | (uint32_t)arg2),
                              arg3, arg4, lockType, arg6, arg7, arg8, in_stack_00000020);
        new (this) ResourceDataT(arg1, 0, 0, false);
        return this;
    }

    // 0x100c14bc0
    BufferInterface* BufferInterface::MapWriteBuffer(const char* str, unsigned int arg2, unsigned int arg3,
                                                     unsigned int arg4, LockType lockType, unsigned int arg6,
                                                     unsigned int arg7, unsigned int arg8) {
        uint32_t in_register_00000014;
        uint32_t in_register_00000084;
        unsigned int in_stack_00000020;

        if ((arg6 == 7) || (arg6 == 1)) {
            LogAssert("lockType != LockType::LOCK_TYPE_READ && lockType != LockType::LOCK_TYPE_READ_PERSISTENT",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "BufferInterfaceDec_OGL.h",
                      22, nullptr, (((uint64_t)in_register_00000084 << 32) | (uint32_t)arg4), (unsigned long)arg6, str);
        }
        auto arg1 = MapBuffer((BufferInterface*)str, (char*)(((uint64_t)in_register_00000014 << 32) | (uint32_t)arg2),
                              arg3, arg4, lockType, arg6, arg7, arg8, in_stack_00000020);
        new (this) ResourceDataT(arg1, 0, 0, false);
        return this;
    }

} // namespace jag::render
