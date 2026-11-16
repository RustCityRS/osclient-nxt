// libs/hal/render/buffers/OGL/BufferInterfaceDec_OGL.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::render {
    // 0x100c14ab0, 192 bytes, inline, placed by __FILE__ string
    // BufferInterface::MapReadBuffer(char const*, unsigned int, unsigned int, unsigned int, LockType, unsigned int, unsigned int, unsigned int)
    ResourceDataT<unsigned char const>* BufferInterface::MapReadBuffer(ResourceDataT<unsigned char const>* param_1,
                                                                       undefined8 param_2, undefined8 param_3,
                                                                       undefined4 param_4, undefined8 param_5,
                                                                       undefined4 param_6, uint param_7) {
        uchar* puVar1;

        if ((param_7 != 1) && (param_7 != 7)) {
            /* WARNING: Subroutine does not return */
            LogAssert("lockType == LockType::LOCK_TYPE_READ || lockType == LockType::LOCK_TYPE_READ_PERSISTENT",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "BufferInterfaceDec_OGL.h",
                      17, (char*)0, param_5, (ulong)param_7, CONCAT44((int)param_5, param_6));
        }
        puVar1 = (uchar*)MapBuffer(param_2, param_3, param_4);
        ResourceDataT<unsigned char const>::ResourceDataT(param_1, puVar1, 0, 0, false);
        return param_1;
    }

    // 0x100c14bc0, 192 bytes, inline, placed by __FILE__ string
    // BufferInterface::MapWriteBuffer(char const*, unsigned int, unsigned int, unsigned int, LockType, unsigned int, unsigned int, unsigned int)
    ResourceDataT<unsigned char const>* BufferInterface::MapWriteBuffer(ResourceDataT<unsigned char const>* param_1,
                                                                        undefined8 param_2, undefined8 param_3,
                                                                        undefined4 param_4, undefined8 param_5,
                                                                        undefined8 param_6, uint param_7) {
        uchar* puVar1;

        if ((param_7 == 7) || (param_7 == 1)) {
            /* WARNING: Subroutine does not return */
            LogAssert("lockType != LockType::LOCK_TYPE_READ && lockType != LockType::LOCK_TYPE_READ_PERSISTENT",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/buffers/OGL/"
                      "BufferInterfaceDec_OGL.h",
                      22, (char*)0, param_5, (ulong)param_7, param_2);
        }
        puVar1 = (uchar*)MapBuffer(param_2, param_3, param_4);
        ResourceDataT<unsigned char const>::ResourceDataT(param_1, puVar1, 0, 0, false);
        return param_1;
    }

} // namespace jag::render
