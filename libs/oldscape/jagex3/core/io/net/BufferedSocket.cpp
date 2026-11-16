// libs/oldscape/jagex3/core/io/net/BufferedSocket.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "BufferedSocket.h"

namespace jag::oldscape::jagex3 {
    // 0x100348310
    BufferedSocket::BufferedSocket(unsigned int arg1)
        : ClientSocket(65536), field_160(arg1), field_200(0), field_204(0) {}

    // 0x1003483a0
    uint8_t BufferedSocket::Initialize() {
        field_136.set_max_size((unsigned long)field_160, 3);
        return 1;
    }

    // 0x1003483c0
    uint32_t BufferedSocket::Connect(const char* str, Error* error) {
        uint32_t uVar2;

        AddressInfo local_30(str);
        if (local_30.operator_cast_to_bool() == '\0') {
            if (error != nullptr) {
                new (error) std::__cxx_atomic_base_impl(-4);
            }
            uVar2 = 0;
        } else {
            field_200 = 0;
            field_204 = 0;
            if (field_136.data() == 0) {
                Initialize();
            }
            uVar2 = Connect(&local_30, error, -1, -1);
        }
        return uVar2;
    }

    // 0x100348480
    void BufferedSocket::Close() {
        Close(nullptr);
    }

    // 0x100348490
    bool BufferedSocket::Write(const unsigned char* arg1, unsigned int arg2, Error* error) {
        if (arg2 == 0) {
            return true;
        }
        return Write(arg1, (unsigned long)arg2, error) == arg2;
    }

    // 0x1003484c0
    unsigned int BufferedSocket::Read(unsigned char* arg1, unsigned int arg2, Error* error) {
        unsigned long uVar1;
        bool bVar2;
        unsigned char* arg1_00;
        void* pvVar4;
        long lVar5;
        unsigned int uVar6;
        unsigned int uVar7;
        unsigned char* local_40;
        unsigned int local_34;

        uint64_t uVar3 = IsOpen();
        if ((char)uVar3 == '\0') {
            local_34 = 0;
        } else if (arg2 == 0) {
            local_34 = (unsigned int)(((uint64_t)((int64_t)((unsigned long)uVar3 >> 8)) << 8) | (uint8_t)1);
        } else {
            if (arg1 == nullptr) {
                LogAssert("readDest != nullptr",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/core/"
                          "io/net/BufferedSocket.cpp",
                          87, nullptr);
            }
            arg1_00 = (unsigned char*)field_136.data();
            local_34 = (unsigned int)arg1_00;
            local_40 = arg1;
            do {
                while (true) {
                    uVar6 = field_200;
                    if (uVar6 < field_204) {
                        uVar7 = field_204 - uVar6;
                        if (arg2 < uVar7 || arg2 - uVar7 == 0) {
                            pvVar4 = _memcpy(local_40, arg1_00 + uVar6, (unsigned long)arg2);
                            field_200 = field_200 + arg2;
                            local_34 =
                                (unsigned int)(((uint64_t)((int64_t)((unsigned long)pvVar4 >> 8)) << 8) | (uint8_t)1);
                            uVar6 = arg2;
                        } else {
                            _memcpy(local_40, arg1_00 + uVar6, (unsigned long)uVar7);
                            local_40 = local_40 + uVar7;
                            uVar6 = arg2 - uVar7;
                        }
                        bVar2 = arg2 <= uVar7;
                        arg2 = uVar6;
                        if (bVar2)
                            goto LAB_10034860c;
                    }
                    lVar5 = Read(arg1_00, (unsigned long)field_160, error);
                    uVar1 = lVar5 + 1;
                    if (1 < uVar1)
                        break;
                    local_34 = 0;
                    if (uVar1 < 2)
                        goto LAB_10034860c;
                }
                field_200 = 0;
                field_204 = (unsigned int)lVar5;
            } while (1 < uVar1);
        }
    LAB_10034860c:
        return local_34 & 4294967041;
    }

    // 0x100348620
    void BufferedSocket::PeekByte(unsigned char* arg1, Error* error) {
        if (Read(arg1, 1, error) != '\0') {
            field_200 = field_200 - 1;
        }
    }

} // namespace jag::oldscape::jagex3
