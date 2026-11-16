// libs/oldscape/jagex3/core/io/net/BufferedSocket.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "BufferedSocket.h"

namespace jag::oldscape::jagex3 {
    // 0x100348310, 128 bytes, base-object constructor, placed by class name and debug map
    // BufferedSocket::BufferedSocket(unsigned int)
    void BufferedSocket::BufferedSocket(uint param_1) {
        new (this) ClientSocket(65536);
        new (&field_136) Array<unsigned char, eastl::allocator>();
        field_160 = param_1;
        new (&field_168) eastl::string();
        field_200 = 0;
        field_204 = 0;
    }

    // 0x100348390, 16 bytes, complete-object constructor, placed by class name and debug map
    // BufferedSocket::BufferedSocket(unsigned int): jumps straight to the base-object constructor

    // 0x1003483a0, 32 bytes, placed by class name and debug map
    // BufferedSocket::Initialize()
    undefined1 BufferedSocket::Initialize() {
        (&field_136, (ulong)field_160, 3)->set_max_size();
        return 1;
    }

    // 0x1003483c0, 176 bytes, placed by class name and debug map
    // BufferedSocket::Connect(char const*, Error*)
    undefined4 BufferedSocket::Connect(char* param_1, Error* param_2) {
        undefined4 uVar2;
        long lVar3;
        AddressInfo local_30;

        new (&local_30) sock::AddressInfo(param_1);
        if (local_30.operator_cast_to_bool()) {
            field_200 = 0;
            field_204 = 0;
            lVar3 = (&field_136)->data();
            if (lVar3 == 0) {
                Initialize(this);
            }
            uVar2 = Connect(&local_30, param_2, -1, -1);
        } else {
            if (param_2 != (Error*)0) {
                new (param_2) std::__cxx_atomic_base_impl<FolderSelection::FolderPathRequestStatus>(4294967292);
            }
            uVar2 = 0;
        }
        local_30.~AddressInfo();
        return uVar2;
    }

    // 0x100348480, 16 bytes, placed by class name
    // BufferedSocket::Close()
    void BufferedSocket::Close() {
        Close(0);
    }

    // 0x100348490, 48 bytes, placed by class name
    // BufferedSocket::Write(unsigned char const*, unsigned int, Error*)
    bool BufferedSocket::Write(uchar* param_1, uint param_2, Error* param_3) {
        if (param_2 == 0) {
            return true;
        }
        return Write(param_1, (ulong)param_2, param_3) == param_2;
    }

    // 0x1003484c0, 352 bytes, placed by class name
    // BufferedSocket::Read(unsigned char*, unsigned int, Error*)
    uint BufferedSocket::Read(uchar* param_1, uint param_2, Error* param_3) {
        ulong uVar1;
        bool bVar2;
        undefined8 uVar3;
        uchar* puVar4;
        void* pvVar5;
        long lVar6;
        uint uVar7;
        uint uVar8;
        uchar* local_40;
        uint local_34;

        uVar3 = IsOpen();
        if ((char)uVar3 == '\0') {
            local_34 = 0;
        } else if (param_2 == 0) {
            local_34 = (uint)CONCAT71((int7)((ulong)uVar3 >> 8), 1);
        } else {
            if (param_1 == (uchar*)0) {
                /* WARNING: Subroutine does not return */
                LogAssert("readDest != nullptr",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/core/"
                          "io/net/BufferedSocket.cpp",
                          87, (char*)0);
            }
            puVar4 = (uchar*)(&field_136)->data();
            local_34 = (uint)puVar4;
            local_40 = param_1;
            do {
                while (true) {
                    uVar7 = field_200;
                    if (uVar7 < field_204) {
                        uVar8 = field_204 - uVar7;
                        if (param_2 < uVar8 || param_2 - uVar8 == 0) {
                            pvVar5 = _memcpy(local_40, puVar4 + uVar7, (ulong)param_2);
                            field_200 = field_200 + param_2;
                            local_34 = (uint)CONCAT71((int7)((ulong)pvVar5 >> 8), 1);
                            uVar7 = param_2;
                        } else {
                            _memcpy(local_40, puVar4 + uVar7, (ulong)uVar8);
                            local_40 = local_40 + uVar8;
                            uVar7 = param_2 - uVar8;
                        }
                        bVar2 = param_2 <= uVar8;
                        param_2 = uVar7;
                        if (bVar2)
                            goto LAB_10034860c;
                    }
                    lVar6 = Read(puVar4, (ulong)field_160, param_3);
                    uVar1 = lVar6 + 1;
                    if (1 < uVar1)
                        break;
                    local_34 = 0;
                    if (uVar1 < 2)
                        goto LAB_10034860c;
                }
                field_200 = 0;
                field_204 = (uint)lVar6;
            } while (1 < uVar1);
        }
    LAB_10034860c:
        return local_34 & 4294967041;
    }

    // 0x100348620, 48 bytes, placed by class name
    // BufferedSocket::PeekByte(unsigned char*, Error*)
    void BufferedSocket::PeekByte(uchar* param_1, Error* param_2) {
        if (Read(this, param_1, 1, param_2) != '\0') {
            field_200 = field_200 - 1;
        }
    }

} // namespace jag::oldscape::jagex3
