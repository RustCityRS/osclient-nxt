// libs/hal/network/unix/ClientSocket_Unix.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.network

#include "libs/hal/network/ClientSocket.h"

namespace jag {
    // 0x100b0d940, 16 bytes, placed by class name and debug map
    // ClientSocket::GlobalInit()
    void ClientSocket::GlobalInit() {}

    // 0x100b0d950, 16 bytes, placed by class name and debug map
    // ClientSocket::InitImpl()
    void ClientSocket::InitImpl() {}

    // 0x100b0d960, 16 bytes, complete-object constructor, placed by class name and debug map
    // ClientSocket::ClientSocket(unsigned int): jumps straight to the base-object constructor

    // 0x100b0d970, 96 bytes, base-object destructor, placed by class name and debug map
    // ClientSocket::~ClientSocket()
    void ClientSocket::~ClientSocket() {
        if (field_8 != -1) {
            Close(this, (Error*)0);
        }
        (&field_96)->~basic_string();
        (&field_16)->~LanguageMessage();
    }

    // 0x100b0d9d0, 160 bytes, placed by class name and debug map
    // ClientSocket::Close(Error*)
    undefined8 ClientSocket::Close(Error* param_1) {
        int iVar1;
        undefined8 uVar2;
        int* piVar3;
        undefined8 uVar4;

        uVar2 = logger::default_logger();
        uVar4 = 0;
        logger::Logger::Log(uVar2, 0, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/network/unix/"
                            "ClientSocket_Unix.cpp",
                            276, "ClientSocket::Close()");
        field_128 = '\0';
        (&field_16)->Clear();
        File::SetErrorCode(param_1, 0);
        iVar1 = field_8;
        if (iVar1 != -1) {
            field_8 = -1;
            iVar1 = _close(iVar1);
            uVar4 = 1;
            if (iVar1 == -1) {
                piVar3 = ___error();
                File::SetErrorCode(param_1, *piVar3);
                uVar4 = 0;
            }
        }
        return uVar4;
    }

    // 0x100b0da70, 16 bytes, complete-object destructor, placed by class name and debug map
    // ClientSocket::~ClientSocket(): jumps straight to the base-object destructor

    // 0x100b10300, 1952 bytes, placed by __FILE__ string
    // ClientSocket::Connect(sock::AddressInfo const&, Error*, int, int)
    uint ClientSocket::Connect(AddressInfo* param_1, Error* param_2, int param_3, int param_4) {
        int iVar1;
        IPAddress IVar2;
        bool bVar3;
        undefined4 uVar4;
        undefined2 uVar5;
        int iVar6;
        uint uVar7;
        undefined8 uVar8;
        addrinfo* paVar9;
        int* piVar10;
        undefined** ppuVar11;
        ulong uVar12;
        undefined8 uVar13;
        char* pcVar14;
        IPAddress aIStackY_136c[128];
        int in_stack_fffffffffffffea8;
        undefined4 in_stack_fffffffffffffeac;
        int in_stack_fffffffffffffeb0;
        undefined4 in_stack_fffffffffffffeb4;
        undefined4 in_stack_fffffffffffffeb8;
        undefined1 in_stack_fffffffffffffebc[16];
        undefined4 local_118;
        undefined4 local_114;
        __cxx_atomic_base_impl<oldscape::FolderSelection::FolderPathRequestStatus>* local_110;
        int local_108;
        int local_104;
        int local_100;
        uint local_fc;
        undefined1 local_f8[32];
        undefined1 local_d8[32];
        AddressBase local_b8;
        undefined8 local_68;
        undefined8 uStack_60;
        undefined8 local_58;
        undefined8 uStack_50;
        undefined8 local_48;
        undefined8 uStack_40;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_108 = param_3;
        local_104 = param_4;
        if (field_8 == -1) {
            paVar9 = (addrinfo*)param_1->end();
            local_114 = (undefined4)CONCAT71((int7)((ulong)paVar9 >> 8), paVar9 == (addrinfo*)0);
            if (paVar9 == (addrinfo*)0) {
                local_fc = local_114;
            } else {
                local_fc = (uint)&field_16;
                local_110 = (__cxx_atomic_base_impl<oldscape::FolderSelection::FolderPathRequestStatus>*)param_2;
                do {
                    File::SetErrorCode(param_2, 0);
                    field_128 = '\0';
                    iVar6 = _socket(paVar9->ai_family, paVar9->ai_socktype, paVar9->ai_protocol);
                    field_8 = iVar6;
                    local_118 = 1;
                    _setsockopt(iVar6, 65535, 4130, &local_118, 4);
                    uVar7 = _setsockopt(field_8, 6, 1, &local_118, 4);
                    uVar12 = (ulong)uVar7;
                    if (field_8 == -1) {
                        bVar3 = true;
                        if ((__cxx_atomic_base_impl<oldscape::FolderSelection::FolderPathRequestStatus>*)param_2 !=
                            (__cxx_atomic_base_impl<oldscape::FolderSelection::FolderPathRequestStatus>*)0) {
                            ___error();
                            uVar12 = new (param_2)
                                std::__cxx_atomic_base_impl<oldscape::FolderSelection::FolderPathRequestStatus>();
                        }
                        local_fc = 0;
                    } else {
                        local_100 = 0;
                        if ((local_108 != -1) &&
                            (local_100 = _setsockopt(field_8, 65535, 4098, &local_108, 4), local_100 == -1)) {
                            uVar8 = logger::default_logger();
                            in_stack_fffffffffffffea8 = local_108;
                            piVar10 = ___error();
                            in_stack_fffffffffffffeb0 = *piVar10;
                            logger::Logger::Log(uVar8, 0, 3,
                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                                "hal/network/unix/ClientSocket_Unix.cpp",
                                                54, "Failed to set SO_RCVBUF to %d with error code %d");
                            local_b8.field_0 = 4;
                            local_b8.field_4 = 0;
                            _sysctlbyname("kern.ipc.maxsockbuf", local_d8, (size_t*)&local_b8, (void*)0, 0);
                            uVar4 = local_d8._0_4_;
                            iVar6 = (int)local_d8._0_4_ / 2;
                            local_d8._0_4_ = iVar6;
                            if ((1 < (int)uVar4) && (iVar6 < local_108)) {
                                iVar6 = _setsockopt(field_8, 65535, 4098, local_d8, 4);
                                local_100 = iVar6;
                                uVar8 = logger::default_logger();
                                in_stack_fffffffffffffea8 = local_d8._0_4_;
                                if (iVar6 == -1) {
                                    piVar10 = ___error();
                                    in_stack_fffffffffffffeb0 = *piVar10;
                                    uVar13 = 88;
                                    pcVar14 = "Failed to set SO_RCVBUF to reduced value of %d with error code %d";
                                } else {
                                    uVar13 = 84;
                                    pcVar14 = "Set SO_RCVBUF to %d instead";
                                }
                                logger::Logger::Log(uVar8, 0, 3,
                                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                    "libs/hal/network/unix/ClientSocket_Unix.cpp",
                                                    uVar13, pcVar14);
                                param_2 = (Error*)local_110;
                            }
                        }
                        if ((local_104 != -1) &&
                            (local_100 = _setsockopt(field_8, 65535, 4097, &local_104, 4), local_100 == -1)) {
                            uVar8 = logger::default_logger();
                            in_stack_fffffffffffffea8 = local_104;
                            piVar10 = ___error();
                            in_stack_fffffffffffffeb0 = *piVar10;
                            logger::Logger::Log(uVar8, 0, 3,
                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                                "hal/network/unix/ClientSocket_Unix.cpp",
                                                103, "Failed to set SO_SNDBUF to %d with error code %d");
                            local_b8.field_0 = 4;
                            local_b8.field_4 = 0;
                            _sysctlbyname("kern.ipc.maxsockbuf", local_d8, (size_t*)&local_b8, (void*)0, 0);
                            uVar4 = local_d8._0_4_;
                            iVar6 = (int)local_d8._0_4_ / 2;
                            local_d8._0_4_ = iVar6;
                            if ((1 < (int)uVar4) && (iVar6 < local_104)) {
                                iVar6 = _setsockopt(field_8, 65535, 4097, local_d8, 4);
                                local_100 = iVar6;
                                uVar8 = logger::default_logger();
                                in_stack_fffffffffffffea8 = local_d8._0_4_;
                                if (iVar6 == -1) {
                                    piVar10 = ___error();
                                    in_stack_fffffffffffffeb0 = *piVar10;
                                    uVar13 = 135;
                                    pcVar14 = "Failed to set SO_SNDBUF to reduced value of %d with error code %d";
                                } else {
                                    uVar13 = 131;
                                    pcVar14 = "Set SO_SNDBUF to %d instead";
                                }
                                logger::Logger::Log(uVar8, 0, 3,
                                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                    "libs/hal/network/unix/ClientSocket_Unix.cpp",
                                                    uVar13, pcVar14);
                                param_2 = (Error*)local_110;
                            }
                        }
                        if ((field_0 != -1) && (field_4 != -1)) {
                            _fcntl(field_8, 3, 0);
                            _fcntl(field_8, 4);
                        }
                        local_100 = _connect(field_8, paVar9->ai_addr, paVar9->ai_addrlen);
                        ppuVar11 = (undefined**)(long)field_0;
                        if ((ppuVar11 != (undefined**)18446744073709551615) && (iVar6 = field_4, iVar6 != -1)) {
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
                            iVar1 = field_8;
                            local_d8._0_8_ = ppuVar11;
                            local_d8._8_4_ = iVar6;
                            if ((PTR____darwin_check_fd_set_overflow_100ee9d88 == (undefined*)0) ||
                                (iVar6 = ___darwin_check_fd_set_overflow(iVar1, &local_b8, 0), iVar6 != 0)) {
                                *(uint*)(local_d8 + ((ulong)(long)iVar1 >> 5) * 4 + 32) =
                                    *(uint*)(local_d8 + ((ulong)(long)iVar1 >> 5) * 4 + 32) | 1 << ((byte)iVar1 & 31);
                            }
                            in_stack_fffffffffffffeb8 = 4;
                            iVar6 = _select_1050(field_8 + 1, 0, &local_b8, 0, local_d8);
                            param_2 = (Error*)local_110;
                            if (iVar6 == 1) {
                                _getsockopt(field_8, 65535, 4103, &local_100, (socklen_t*)(aIStackY_136c + 129));
                            }
                            _fcntl(field_8, 4);
                        }
                        if (local_100 == -1) {
                            piVar10 = ___error();
                            iVar6 = *piVar10;
                            uVar12 = File::SetErrorCode(param_2, iVar6);
                            bVar3 = false;
                            if (iVar6 != 36) {
                                uVar8 = logger::default_logger();
                                pcVar14 = _strerror(iVar6);
                                param_2 = (Error*)local_110;
                                in_stack_fffffffffffffea8 = (int)pcVar14;
                                in_stack_fffffffffffffeac = (undefined4)((ulong)pcVar14 >> 32);
                                bVar3 = false;
                                logger::Logger::Log(uVar8, 0, 5,
                                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                    "libs/hal/network/unix/ClientSocket_Unix.cpp",
                                                    181, "Socket connect error: %s");
                                uVar12 = Close(this, (Error*)0);
                            }
                        } else {
                            uVar5 = _OSSwapInt16(*(ushort*)paVar9->ai_addr->sa_data);
                            local_fc = CONCAT22(local_fc._2_2_, uVar5);
                            local_d8->CreateFromAddrInfo(paVar9);
                            (aIStackY_136c + 129)->asString();
                            pcVar14 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                            new (local_f8) network::IPAddress(local_d8);
                            IVar2.field_0._4_4_ = in_stack_fffffffffffffeac;
                            IVar2.field_0._0_4_ = in_stack_fffffffffffffea8;
                            IVar2.field_8 = in_stack_fffffffffffffeb0;
                            IVar2.field_12 = (short)in_stack_fffffffffffffeb4;
                            IVar2.field_14 = (short)((uint)in_stack_fffffffffffffeb4 >> 16);
                            IVar2.field_16 = (short)in_stack_fffffffffffffeb8;
                            IVar2.field_18 = (short)((uint)in_stack_fffffffffffffeb8 >> 16);
                            IVar2.field_20 = in_stack_fffffffffffffebc._0_2_;
                            IVar2.field_22 = in_stack_fffffffffffffebc._2_2_;
                            IVar2.field_24 = in_stack_fffffffffffffebc._4_2_;
                            IVar2.field_26 = in_stack_fffffffffffffebc._6_2_;
                            IVar2.field_28 = in_stack_fffffffffffffebc._8_2_;
                            IVar2._30_6_ = in_stack_fffffffffffffebc._10_6_;
                            new (&local_b8) sock::AddressBase(pcVar14, IVar2, (ushort)(IPAddress*)local_f8,
                                                              local_fc & 65535, paVar9->ai_socktype);
                            sock::AddressBase::operator=((AddressBase*)&field_16, &local_b8);
                            param_2 = (Error*)local_110;
                            local_b8.~LanguageMessage();
                            uVar8 = ((aIStackY_136c + 129))->~basic_string();
                            field_128 = '\x01';
                            uVar12 = CONCAT71((int7)((ulong)uVar8 >> 8), 1);
                            local_fc = (uint)uVar12;
                            bVar3 = true;
                        }
                    }
                    if (bVar3)
                        break;
                    paVar9 = paVar9->ai_next;
                    local_114 = (undefined4)CONCAT71((int7)(uVar12 >> 8), paVar9 == (addrinfo*)0);
                } while (paVar9 != (addrinfo*)0);
            }
            uVar7 = CONCAT31((int3)((uint)local_114 >> 8), ((byte)local_114 ^ 1) & (byte)local_fc);
        } else {
            uVar8 = logger::default_logger();
            uVar7 = 0;
            logger::Logger::Log(uVar8, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/network/"
                                "unix/ClientSocket_Unix.cpp",
                                23, "Socket already connected to something");
            File::SetErrorCode(param_2, 37);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar7 & 4294967041;
    }

    // 0x100b10b00, 96 bytes, placed by class name and neighbouring functions
    // ClientSocket::Shutdown(int, Error*)
    undefined8 ClientSocket::Shutdown(int param_1, Error* param_2) {
        int iVar1;
        int* piVar2;
        undefined8 uVar3;

        uVar3 = 0;
        File::SetErrorCode(param_2, 0);
        iVar1 = field_8;
        if (iVar1 != -1) {
            field_8 = -1;
            iVar1 = _shutdown(iVar1, param_1);
            uVar3 = 1;
            if (iVar1 == -1) {
                piVar2 = ___error();
                File::SetErrorCode(param_2, *piVar2);
                uVar3 = 0;
            }
        }
        return uVar3;
    }

    // 0x100b10b60, 144 bytes, placed by __FILE__ string
    // ClientSocket::Read(unsigned char*, unsigned long, Error*) const
    long ClientSocket::Read(uchar* param_1, ulong param_2, Error* param_3) {
        ssize_t sVar1;
        long lVar2;
        int* piVar3;

        if (field_128 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_Connected",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/network/unix/"
                      "ClientSocket_Unix.cpp",
                      222, "Socket is not connected");
        }
        File::SetErrorCode(param_3, 0);
        sVar1 = _recv(field_8, param_1, (long)(int)param_2, (uint)(field_129 == '\0') * 2);
        if ((int)sVar1 == -1) {
            piVar3 = ___error();
            File::SetErrorCode(param_3, *piVar3);
            lVar2 = 0;
        } else {
            lVar2 = (long)(int)sVar1;
        }
        return lVar2;
    }

    // 0x100b10bf0, 128 bytes, placed by __FILE__ string
    // ClientSocket::Write(unsigned char const*, unsigned long, Error*) const
    long ClientSocket::Write(uchar* param_1, ulong param_2, Error* param_3) {
        ssize_t sVar1;
        long lVar2;
        int* piVar3;

        if (field_128 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_Connected",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/network/unix/"
                      "ClientSocket_Unix.cpp",
                      244, "Socket is not connected");
        }
        File::SetErrorCode(param_3, 0);
        sVar1 = _send(field_8, param_1, (long)(int)param_2, 0);
        if ((int)sVar1 == -1) {
            piVar3 = ___error();
            File::SetErrorCode(param_3, *piVar3);
            lVar2 = 0;
        } else {
            lVar2 = (long)(int)sVar1;
        }
        return lVar2;
    }

    // 0x100b10c90, 112 bytes, placed by class name and neighbouring functions
    // ClientSocket::Available(Error*) const
    undefined8 ClientSocket::Available(Error* param_1) {
        int* piVar2;
        undefined8 local_28;

        File::SetErrorCode(param_1, 0);
        local_28 = 0;
        if (field_8 != 0) {
            local_28 = 0;
            if (_ioctl(field_8, 1074030207, &local_28) == -1) {
                piVar2 = ___error();
                File::SetErrorCode(param_1, *piVar2);
                local_28 = 0;
            }
        }
        return local_28;
    }

    // 0x100b10d00, 96 bytes, placed by class name and neighbouring functions
    // ClientSocket::SetSocketRecvTimeOut(int)
    void ClientSocket::SetSocketRecvTimeOut(int param_1) {
        long local_18;
        int local_10;

        local_18 = (long)(param_1 / 1000);
        local_10 = (param_1 % 1000) * 1000;
        _setsockopt(field_8, 65535, 4102, &local_18, 16);
    }

    // 0x100b10d60, 48 bytes, placed by class name and neighbouring functions
    // ClientSocket::SetSocketConnectTimeOut(int)
    void ClientSocket::SetSocketConnectTimeOut(int param_1) {
        field_0 = param_1 / 1000;
        field_4 = (param_1 % 1000) * 1000;
    }

} // namespace jag
