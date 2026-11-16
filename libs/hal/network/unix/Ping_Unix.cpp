// libs/hal/network/unix/Ping_Unix.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.network

#include "libs/hal/network/Ping.h"

namespace jag::network {
    // 0x100b16270
    void Ping::InitialiseLibrary() {}

    // 0x100b16280
    void Ping::ShutdownLibrary() {}

    // 0x100b16290
    uint64_t Ping::DoPing(IPAddress ipAddress) {
        unsigned int arg1;
        uint64_t uVar2;

        if (ipAddress->isV6() == '\0') {
            arg1._0_2_ = ipAddress->field_12;
            arg1._2_2_ = ipAddress->field_14;
            uVar2 = UnixPing(arg1, field_24);
        } else {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/network/unix/"
                      "Ping_Unix.cpp",
                      212, "IPv6 ping not implemented");
            uVar2 = 4294967295;
        }
        return uVar2;
    }

    // 0x100b16300
    unsigned long UnixPing(unsigned int arg1, int arg2) {
        short sVar1;
        unsigned int uVar4;
        pid_t pVar5;
        int iVar6;
        int iVar7;
        ssize_t sVar8;
        unsigned long uVar9;
        unsigned long long uVar10;
        Logger* logger;
        int* piVar11;
        char* pcVar12;
        int iVar13;
        unsigned long uVar14;
        bool bVar15;
        unsigned int auStack_10188[34];
        long lStack_10100;
        int iStack_100f8;
        unsigned long uStack_100f0;
        unsigned long long uStack_100e8;
        socklen_t sStack_100e0;
        int iStack_100dc;
        uint8_t auStack_100d8[20];
        char cStack_100c4;
        short sStack_100c0;
        unsigned short uStack_100be;
        unsigned short auStack_10018[3];
        uint16_t uStack_10012;
        sockaddr local_58;
        sockaddr local_48;

        local_48.sa_family = '\x02';
        local_48.sa_data._2_4_ = arg1;
        int iVar3 = _socket(2, 2, 1);
        if (iVar3 < 0) {
            logger = logger::default_logger();
            piVar11 = ___error();
            pcVar12 = _strerror(*piVar11);
            logger->Log(
                false, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/network/unix/Ping_Unix.cpp",
                93, "Cannot make socket for ping (%s)", pcVar12);
        } else {
            uStack_100f0 = (unsigned long)nextICMPSequence;
            uVar4 = nextICMPSequence + 1;
            if (65534 < (int)nextICMPSequence) {
                uVar4 = 0;
            }
            auStack_10018[0] = 8;
            auStack_10018[1] = 0;
            uStack_10012 = (uint16_t)nextICMPSequence;
            nextICMPSequence = uVar4;
            pVar5 = _getpid();
            auStack_10018[2] = (unsigned short)pVar5;
            auStack_10018[1] = in_cksum(auStack_10018, 2);
            uStack_100e8 = SystemTimer::GetTimeNS<std::chrono::steady_clock>();
            sVar8 = _sendto(iVar3, auStack_10018, 64, 0, &local_48, 16);
            if (-1 < sVar8) {
                auStack_10188[28] = 0;
                auStack_10188[29] = 0;
                auStack_10188[30] = 0;
                auStack_10188[31] = 0;
                auStack_10188[24] = 0;
                auStack_10188[25] = 0;
                auStack_10188[26] = 0;
                auStack_10188[27] = 0;
                auStack_10188[20] = 0;
                auStack_10188[21] = 0;
                auStack_10188[22] = 0;
                auStack_10188[23] = 0;
                auStack_10188[16] = 0;
                auStack_10188[17] = 0;
                auStack_10188[18] = 0;
                auStack_10188[19] = 0;
                auStack_10188[12] = 0;
                auStack_10188[13] = 0;
                auStack_10188[14] = 0;
                auStack_10188[15] = 0;
                auStack_10188[8] = 0;
                auStack_10188[9] = 0;
                auStack_10188[10] = 0;
                auStack_10188[11] = 0;
                auStack_10188[4] = 0;
                auStack_10188[5] = 0;
                auStack_10188[6] = 0;
                auStack_10188[7] = 0;
                auStack_10188[0] = 0;
                auStack_10188[1] = 0;
                auStack_10188[2] = 0;
                auStack_10188[3] = 0;
                if (PTR____darwin_check_fd_set_overflow_100ee9d88 == nullptr) {
                LAB_100b1642a:
                    auStack_10188[(long)iVar3 >> 5] = auStack_10188[(long)iVar3 >> 5] | 1 << ((uint8_t)iVar3 & 31);
                } else {
                    iVar6 = ___darwin_check_fd_set_overflow(iVar3, auStack_10188, 0);
                    if (iVar6 != 0)
                        goto LAB_100b1642a;
                }
                lStack_10100 = (long)(arg2 / 1000);
                iStack_100f8 = (arg2 % 1000) * 1000;
                iVar6 = iVar3 + 1;
                bVar15 = true;
                uVar14 = 4294967295;
                iStack_100dc = iVar3;
                do {
                    if (!bVar15)
                        break;
                    iVar7 = _select_1050(iVar6, auStack_10188, 0, 0, &lStack_10100);
                    iVar13 = 3;
                    if (1 < iVar7 + 1U) {
                        sStack_100e0 = 16;
                        uVar9 = _recvfrom(iVar3, auStack_100d8, 192, 0, &local_58, &sStack_100e0);
                        sVar1 = sStack_100c0;
                        iVar13 = 3;
                        if ((((-1 < (long)uVar9) && (27 < uVar9)) && (iVar13 = 2, cStack_100c4 == '\0')) &&
                            ((unsigned int)uStack_100f0 == uStack_100be)) {
                            pVar5 = _getpid();
                            iVar3 = iStack_100dc;
                            if (sVar1 == (short)pVar5) {
                                uVar10 = SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                                uVar14 = (uVar10 - uStack_100e8) / 1000000;
                                bVar15 = false;
                                iVar13 = 3;
                            }
                        }
                    }
                } while (iVar13 != 3);
                close(iVar3);
                goto LAB_100b165d6;
            }
            close(iVar3);
        }
        uVar14 = 4294967295;
    LAB_100b165d6:
        return uVar14 & 4294967295;
    }

} // namespace jag::network
