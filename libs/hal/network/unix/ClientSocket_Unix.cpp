// libs/hal/network/unix/ClientSocket_Unix.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.network

#include "libs/hal/network/ClientSocket.h"

namespace jag {
    // 0x100b0d940
    void ClientSocket::GlobalInit() {}

    // 0x100b0d950
    void ClientSocket::InitImpl() {}

    // 0x100b0d970
    ClientSocket::~ClientSocket() {
        if (field_8 != -1) {
            Close(nullptr);
        }
        field_96.~basic_string();
        field_16.~LanguageMessage();
    }

    // 0x100b0d9d0
    uint64_t ClientSocket::Close(Error* error) {
        unsigned int* puVar2;
        int arg2;
        int arg2_00;

        auto this_00 = logger::default_logger();
        uint64_t uVar3 = 0;
        this_00->Log(false, 8,
                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/network/unix/"
                     "ClientSocket_Unix.cpp",
                     276, "ClientSocket::Close()");
        field_128 = '\0';
        field_16.Clear();
        error->SetErrorCode(nullptr, arg2);
        int iVar1 = field_8;
        if (iVar1 != -1) {
            field_8 = -1;
            iVar1 = close(iVar1);
            uVar3 = 1;
            if (iVar1 == -1) {
                puVar2 = (unsigned int*)___error();
                error->SetErrorCode((Error*)(unsigned long)*puVar2, arg2_00);
                uVar3 = 0;
            }
        }
        return uVar3;
    }

    // 0x100b10300
    unsigned int ClientSocket::Connect(const sock::AddressInfo& addressInfo, Error* error, int arg3, int arg4) {
        long lVar1;
        uint8_t auVar2[16];
        uint8_t auVar4[15];
        uint8_t auVar3[16];
        uint16_t uVar5;
        int iVar6;
        unsigned int uVar7;
        int iVar8;
        Logger* pLVar9;
        int* piVar10;
        IPAddress_vtbl* pIVar11;
        uint64_t extraout_RAX;
        uint64_t uVar12;
        unsigned int* puVar13;
        int arg2;
        int arg2_00;
        uint64_t extraout_RDX;
        uint64_t extraout_RDX_00;
        char* pcVar14;
        addrinfo* addrinfo;
        bool bVar15;
        uint8_t auVar16[16];
        char* in_stack_fffffffffffffea8;
        uint32_t uVar17;
        uint32_t uVar18;
        ReturnValue local_148;
        AddressBase* local_130;
        unsigned long local_120;
        uint32_t local_118;
        uint32_t local_114;
        File* local_110;
        int local_100;
        uint32_t local_fc;
        uint8_t local_f8[32];
        uint8_t local_d8[32];
        AddressBase local_b8;
        uint64_t local_68;
        uint64_t uStack_60;
        uint64_t local_58;
        uint64_t uStack_50;
        uint64_t local_48;
        uint64_t uStack_40;

        int local_108 = arg3;
        int local_104 = arg4;
        if (field_8 == -1) {
            auVar16 = addressInfo.end();
            bVar15 = auVar16._0_8_ == 0;
            local_114 = (uint32_t)(((uint64_t)auVar16._1_7_ << 8) | (uint8_t)bVar15);
            if (bVar15) {
                local_fc = local_114;
            } else {
                local_130 = (AddressBase*)&field_16;
                local_fc = (uint32_t)local_130;
                local_110 = (File*)error;
                do {
                    addrinfo = auVar16._0_8_;
                    error->SetErrorCode(nullptr, auVar16._8_4_);
                    field_128 = '\0';
                    iVar6 = _socket(*(int*)(addrinfo + 4), *(int*)(addrinfo + 8), *(int*)(addrinfo + 12));
                    field_8 = iVar6;
                    local_118 = 1;
                    _setsockopt(iVar6, 65535, 4130, &local_118, 4);
                    uVar7 = _setsockopt(field_8, 6, 1, &local_118, 4);
                    auVar2._4_4_ = 0;
                    auVar2._0_4_ = uVar7;
                    auVar2._8_8_ = extraout_RDX;
                    auVar4 = auVar2._1_15_;
                    if (field_8 == -1) {
                        bVar15 = true;
                        if ((File*)error != nullptr) {
                            piVar10 = ___error();
                            auVar16 = new (error) std::__cxx_atomic_base_impl(*piVar10);
                            auVar4 = auVar16._1_15_;
                        }
                        local_fc = 0;
                    } else {
                        local_100 = 0;
                        if (local_108 != -1) {
                            local_100 = _setsockopt(field_8, 65535, 4098, &local_108, 4);
                            uVar17 = (uint32_t)((unsigned long)in_stack_fffffffffffffea8 >> 32);
                            if (local_100 == -1) {
                                pLVar9 = logger::default_logger();
                                iVar8 = local_108;
                                piVar10 = ___error();
                                iVar6 = *piVar10;
                                in_stack_fffffffffffffea8 = (char*)(((uint64_t)uVar17 << 32) | (uint32_t)iVar8);
                                pLVar9->Log(false, 3,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                            "network/unix/ClientSocket_Unix.cpp",
                                            54, "Failed to set SO_RCVBUF to %d with error code %d",
                                            in_stack_fffffffffffffea8, iVar6);
                                local_b8.field_0 = 4;
                                local_b8.field_4 = 0;
                                _sysctlbyname("kern.ipc.maxsockbuf", local_d8, (size_t*)&local_b8, nullptr, 0);
                                uVar18 = (uint32_t)((unsigned long)in_stack_fffffffffffffea8 >> 32);
                                uVar17 = local_d8._0_4_;
                                iVar8 = (int)local_d8._0_4_ / 2;
                                local_d8._0_4_ = iVar8;
                                if ((1 < (int)uVar17) && (iVar8 < local_108)) {
                                    iVar8 = _setsockopt(field_8, 65535, 4098, local_d8, 4);
                                    local_100 = iVar8;
                                    pLVar9 = logger::default_logger();
                                    uVar17 = local_d8._0_4_;
                                    if (iVar8 == -1) {
                                        piVar10 = ___error();
                                        iVar6 = *piVar10;
                                        iVar8 = 88;
                                        pcVar14 = "Failed to set SO_RCVBUF to reduced value of %d with error code %d";
                                    } else {
                                        iVar8 = 84;
                                        pcVar14 = "Set SO_RCVBUF to %d instead";
                                    }
                                    in_stack_fffffffffffffea8 = (char*)(((uint64_t)uVar18 << 32) | (uint32_t)uVar17);
                                    pLVar9->Log(false, 3,
                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                                "hal/network/unix/ClientSocket_Unix.cpp",
                                                iVar8, pcVar14, in_stack_fffffffffffffea8, iVar6);
                                    error = (Error*)local_110;
                                }
                            }
                        }
                        if (local_104 != -1) {
                            local_100 = _setsockopt(field_8, 65535, 4097, &local_104, 4);
                            uVar17 = (uint32_t)((unsigned long)in_stack_fffffffffffffea8 >> 32);
                            if (local_100 == -1) {
                                pLVar9 = logger::default_logger();
                                iVar8 = local_104;
                                piVar10 = ___error();
                                iVar6 = *piVar10;
                                in_stack_fffffffffffffea8 = (char*)(((uint64_t)uVar17 << 32) | (uint32_t)iVar8);
                                pLVar9->Log(false, 3,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                            "network/unix/ClientSocket_Unix.cpp",
                                            103, "Failed to set SO_SNDBUF to %d with error code %d",
                                            in_stack_fffffffffffffea8, iVar6);
                                local_b8.field_0 = 4;
                                local_b8.field_4 = 0;
                                _sysctlbyname("kern.ipc.maxsockbuf", local_d8, (size_t*)&local_b8, nullptr, 0);
                                uVar18 = (uint32_t)((unsigned long)in_stack_fffffffffffffea8 >> 32);
                                uVar17 = local_d8._0_4_;
                                iVar8 = (int)local_d8._0_4_ / 2;
                                local_d8._0_4_ = iVar8;
                                if ((1 < (int)uVar17) && (iVar8 < local_104)) {
                                    iVar8 = _setsockopt(field_8, 65535, 4097, local_d8, 4);
                                    local_100 = iVar8;
                                    pLVar9 = logger::default_logger();
                                    uVar17 = local_d8._0_4_;
                                    if (iVar8 == -1) {
                                        piVar10 = ___error();
                                        iVar6 = *piVar10;
                                        iVar8 = 135;
                                        pcVar14 = "Failed to set SO_SNDBUF to reduced value of %d with error code %d";
                                    } else {
                                        iVar8 = 131;
                                        pcVar14 = "Set SO_SNDBUF to %d instead";
                                    }
                                    in_stack_fffffffffffffea8 = (char*)(((uint64_t)uVar18 << 32) | (uint32_t)uVar17);
                                    pLVar9->Log(false, 3,
                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                                "hal/network/unix/ClientSocket_Unix.cpp",
                                                iVar8, pcVar14, in_stack_fffffffffffffea8, iVar6);
                                    error = (Error*)local_110;
                                }
                            }
                        }
                        if ((field_0 != -1) && (field_4 != -1)) {
                            uVar7 = _fcntl(field_8, 3, 0);
                            local_120 = (unsigned long)(int)(uVar7 | 4);
                            _fcntl(field_8, 4);
                        }
                        local_100 = _connect(field_8, *(sockaddr**)(addrinfo + 32), *(socklen_t*)(addrinfo + 16));
                        pIVar11 = (IPAddress_vtbl*)(long)field_0;
                        if ((pIVar11 != (IPAddress_vtbl*)18446744073709551615) && (iVar6 = field_4, iVar6 != -1)) {
                            local_b8.field_0 = 0;
                            local_b8.field_4 = 0;
                            local_b8._8_8_ = 0;
                            local_b8._16_8_ = 0;
                            local_b8._24_8_ = 0;
                            local_b8._32_8_ = 0;
                            local_b8._40_8_ = 0;
                            local_b8._48_8_ = 0;
                            local_b8._56_8_ = 0;
                            local_b8._64_8_ = 0;
                            local_b8.field_72 = 0;
                            local_b8._74_6_ = 0;
                            local_68 = 0;
                            uStack_60 = 0;
                            local_58 = 0;
                            uStack_50 = 0;
                            local_48 = 0;
                            uStack_40 = 0;
                            iVar8 = field_8;
                            local_d8._0_8_ = pIVar11;
                            local_d8._8_4_ = iVar6;
                            if ((PTR____darwin_check_fd_set_overflow_100ee9d88 == nullptr) ||
                                (iVar6 = ___darwin_check_fd_set_overflow(iVar8, &local_b8, 0), iVar6 != 0)) {
                                *(unsigned int*)(local_d8 + ((unsigned long)(long)iVar8 >> 5) * 4 + 32) =
                                    *(unsigned int*)(local_d8 + ((unsigned long)(long)iVar8 >> 5) * 4 + 32) |
                                    1 << ((uint8_t)iVar8 & 31);
                            }
                            local_148[0]._0_4_ = 4;
                            iVar6 = _select_1050(field_8 + 1, 0, &local_b8, 0, local_d8);
                            error = (Error*)local_110;
                            if (iVar6 == 1) {
                                _getsockopt(field_8, 65535, 4103, &local_100, &local_148);
                            }
                            local_120 = local_120 & 18446744073709551611;
                            _fcntl(field_8, 4);
                        }
                        if (local_100 == -1) {
                            puVar13 = (unsigned int*)___error();
                            uVar7 = *puVar13;
                            auVar16 = error->SetErrorCode((Error*)(unsigned long)uVar7, arg2_00);
                            auVar4 = auVar16._1_15_;
                            bVar15 = false;
                            if (uVar7 != 36) {
                                pLVar9 = logger::default_logger();
                                in_stack_fffffffffffffea8 = _strerror(uVar7);
                                error = (Error*)local_110;
                                bVar15 = false;
                                pLVar9->Log(false, 5,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                            "network/unix/ClientSocket_Unix.cpp",
                                            181, "Socket connect error: %s", in_stack_fffffffffffffea8);
                                auVar16 = Close(nullptr);
                                auVar4 = auVar16._1_15_;
                            }
                        } else {
                            uVar5 = _OSSwapInt16(*(unsigned short*)(*(long*)(addrinfo + 32) + 2));
                            local_fc = (((uint32_t)local_fc._2_2_ << 16) | (uint16_t)uVar5);
                            *local_d8 = network::IPAddress::CreateFromAddrInfo(addrinfo);
                            local_148 = local_d8->asString();
                            pcVar14 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                            new (local_f8) network::IPAddress(*local_d8);
                            local_b8 = sock::AddressBase(pcVar14, local_f8, (unsigned short)local_fc,
                                                         *(int*)(addrinfo + 8), *(int*)(addrinfo + 12));
                            *local_130 = local_b8;
                            error = (Error*)local_110;
                            this = this;
                            field_128 = '\x01';
                            uVar12 = (((uint64_t)((int64_t)((unsigned long)extraout_RAX >> 8)) << 8) | (uint8_t)1);
                            auVar3._8_8_ = extraout_RDX_00;
                            auVar3._0_8_ = uVar12;
                            auVar4 = auVar3._1_15_;
                            local_fc = (uint32_t)uVar12;
                            bVar15 = true;
                        }
                    }
                    if (bVar15)
                        break;
                    lVar1 = *(long*)(addrinfo + 40);
                    auVar16._8_8_ = auVar4._7_8_;
                    auVar16._0_8_ = lVar1;
                    local_114 = (uint32_t)(((uint64_t)auVar4._0_7_ << 8) | (uint8_t)(lVar1 == 0));
                } while (lVar1 != 0);
            }
            uVar7 = (((uint32_t)((int32_t)((unsigned int)local_114 >> 8)) << 8) |
                     (uint8_t)(((uint8_t)local_114 ^ 1) & (uint8_t)local_fc));
        } else {
            pLVar9 = logger::default_logger();
            uVar7 = 0;
            pLVar9->Log(false, 2,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/network/unix/"
                        "ClientSocket_Unix.cpp",
                        23, "Socket already connected to something");
            error->SetErrorCode(37, arg2);
        }
        return uVar7 & 4294967041;
    }

    // 0x100b10b00
    uint64_t ClientSocket::Shutdown(int arg1, Error* error) {
        unsigned int* puVar2;
        int arg2;

        uint64_t uVar3 = 0;
        error->SetErrorCode(nullptr, (int)error);
        int iVar1 = field_8;
        if (iVar1 != -1) {
            field_8 = -1;
            iVar1 = _shutdown(iVar1, arg1);
            uVar3 = 1;
            if (iVar1 == -1) {
                puVar2 = (unsigned int*)___error();
                error->SetErrorCode((Error*)(unsigned long)*puVar2, arg2);
                uVar3 = 0;
            }
        }
        return uVar3;
    }

    // 0x100b10b60
    long ClientSocket::Read(unsigned char* arg1, unsigned long arg2, Error* error) const {
        long lVar2;
        unsigned int* puVar3;
        int arg2_00;

        if (field_128 == '\0') {
            LogAssert("m_Connected",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/network/unix/"
                      "ClientSocket_Unix.cpp",
                      222, "Socket is not connected");
        }
        error->SetErrorCode(nullptr, (int)arg2);
        auto sVar1 = _recv(field_8, arg1, (long)(int)arg2, (unsigned int)(field_129 == '\0') * 2);
        if ((int)sVar1 == -1) {
            puVar3 = (unsigned int*)___error();
            error->SetErrorCode((Error*)(unsigned long)*puVar3, arg2_00);
            lVar2 = 0;
        } else {
            lVar2 = (long)(int)sVar1;
        }
        return lVar2;
    }

    // 0x100b10bf0
    long ClientSocket::Write(const unsigned char* arg1, unsigned long arg2, Error* error) const {
        long lVar2;
        unsigned int* puVar3;
        int arg2_00;

        if (field_128 == '\0') {
            LogAssert("m_Connected",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/network/unix/"
                      "ClientSocket_Unix.cpp",
                      244, "Socket is not connected");
        }
        error->SetErrorCode(nullptr, (int)arg2);
        auto sVar1 = _send(field_8, arg1, (long)(int)arg2, 0);
        if ((int)sVar1 == -1) {
            puVar3 = (unsigned int*)___error();
            error->SetErrorCode((Error*)(unsigned long)*puVar3, arg2_00);
            lVar2 = 0;
        } else {
            lVar2 = (long)(int)sVar1;
        }
        return lVar2;
    }

    // 0x100b10c90
    uint64_t ClientSocket::Available(Error* error) const {
        unsigned int* puVar2;
        int in_EDX;
        int arg2;

        error->SetErrorCode(nullptr, in_EDX);
        return local_28 = 0;
        if (field_8 != 0) {
            local_28 = 0;
            if (_ioctl(field_8, 1074030207, &local_28) == -1) {
                puVar2 = (unsigned int*)___error();
                error->SetErrorCode((Error*)(unsigned long)*puVar2, arg2);
                local_28 = 0;
            }
        }
        return local_28;
    }

    // 0x100b10d00
    void ClientSocket::SetSocketRecvTimeOut(int arg1) {
        long local_18 = (long)(arg1 / 1000);
        int local_10 = (arg1 % 1000) * 1000;
        _setsockopt(field_8, 65535, 4102, &local_18, 16);
    }

    // 0x100b10d60
    void ClientSocket::SetSocketConnectTimeOut(int arg1) {
        field_0 = arg1 / 1000;
        field_4 = (arg1 % 1000) * 1000;
    }

} // namespace jag
