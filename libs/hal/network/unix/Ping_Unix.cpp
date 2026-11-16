// libs/hal/network/unix/Ping_Unix.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.network

#include "libs/hal/network/Ping.h"

namespace jag::network {
    // 0x100b16270, 16 bytes, placed by class name and debug map
    // Ping::InitialiseLibrary()
    void Ping::InitialiseLibrary() {}

    // 0x100b16280, 16 bytes, placed by class name and debug map
    // Ping::ShutdownLibrary()
    void Ping::ShutdownLibrary() {}

    // 0x100b16290, 96 bytes, placed by class name and debug map
    // Ping::DoPing(IPAddress)
    undefined8 Ping::DoPing(IPAddress param_1) {
        uint uVar1;
        undefined8 uVar3;
        IPAddress* in_RSI;

        if (in_RSI->isV6() == '\0') {
            uVar1._0_2_ = in_RSI->field_12;
            uVar1._2_2_ = in_RSI->field_14;
            uVar3 = UnixPing(uVar1, field_24);
        } else {
            uVar3 = logger::default_logger();
            logger::Logger::Log(
                uVar3, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/network/unix/Ping_Unix.cpp",
                212, "IPv6 ping not implemented");
            uVar3 = 4294967295;
        }
        return uVar3;
    }

    // 0x100b16300, 768 bytes, placed by __FILE__ string
    // UnixPing(unsigned int, int)
    ulong UnixPing(uint param_1, int param_2) {
        short sVar1;
        undefined2 uVar2;
        uint uVar3;
        uint uVar4;
        pid_t pVar5;
        int iVar6;
        int iVar7;
        ssize_t sVar8;
        ulong uVar9;
        ulonglong uVar10;
        undefined8 uVar11;
        int* piVar12;
        char* pcVar13;
        SystemTimer* pSVar15;
        int iVar16;
        ulong uVar17;
        bool bVar18;
        uint auStack_10188[34];
        long lStack_10100;
        int iStack_100f8;
        ulong uStack_100f0;
        ulonglong uStack_100e8;
        socklen_t sStack_100e0;
        uint uStack_100dc;
        undefined1 auStack_100d8[20];
        char cStack_100c4;
        short sStack_100c0;
        ushort uStack_100be;
        undefined4 uStack_10018;
        undefined2 uStack_10014;
        undefined2 uStack_10012;
        sockaddr local_58;
        sockaddr local_48;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_48.sa_family = '\x02';
        local_48.sa_data._2_4_ = param_1;
        uVar3 = _socket(2, 2, 1);
        if ((int)uVar3 < 0) {
            uVar11 = logger::default_logger();
            piVar12 = ___error();
            pcVar13 = _strerror(*piVar12);
            logger::Logger::Log(
                uVar11, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/network/unix/Ping_Unix.cpp",
                93, "Cannot make socket for ping (%s)", pcVar13);
        } else {
            uStack_100f0 = (ulong)nextICMPSequence;
            uVar4 = nextICMPSequence + 1;
            if (65534 < (int)nextICMPSequence) {
                uVar4 = 0;
            }
            uStack_10018 = 8;
            uStack_10012 = (undefined2)nextICMPSequence;
            nextICMPSequence = uVar4;
            pVar5 = _getpid();
            uStack_10014 = (undefined2)pVar5;
            pSVar15 = (SystemTimer*)&uStack_10018;
            uVar2 = in_cksum((ushort*)&uStack_10018, 2);
            uStack_10018 = CONCAT22(uVar2, (undefined2)uStack_10018);
            uStack_100e8 = SystemTimer::GetTimeNS<std::chrono::steady_clock>(pSVar15);
            sVar8 = _sendto(uVar3, (SystemTimer*)&uStack_10018, 64, 0, &local_48, 16);
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
                if (PTR____darwin_check_fd_set_overflow_100ee9d88 == (undefined*)0) {
                LAB_100b1642a:
                    auStack_10188[(ulong)(long)(int)uVar3 >> 5] =
                        auStack_10188[(ulong)(long)(int)uVar3 >> 5] | 1 << ((byte)uVar3 & 31);
                } else {
                    iVar6 = ___darwin_check_fd_set_overflow(uVar3, auStack_10188, 0);
                    if (iVar6 != 0)
                        goto LAB_100b1642a;
                }
                lStack_10100 = (long)(param_2 / 1000);
                iStack_100f8 = (param_2 % 1000) * 1000;
                iVar6 = uVar3 + 1;
                bVar18 = true;
                uVar17 = 4294967295;
                uStack_100dc = uVar3;
                do {
                    if (!bVar18)
                        break;
                    iVar7 = _select_1050(iVar6, auStack_10188, 0, 0, &lStack_10100);
                    iVar16 = 3;
                    if (1 < iVar7 + 1U) {
                        sStack_100e0 = 16;
                        pSVar15 = (SystemTimer*)(ulong)uVar3;
                        uVar9 = _recvfrom(uVar3, auStack_100d8, 192, 0, &local_58, &sStack_100e0);
                        sVar1 = sStack_100c0;
                        iVar16 = 3;
                        if ((((-1 < (long)uVar9) && (27 < uVar9)) && (iVar16 = 2, cStack_100c4 == '\0')) &&
                            ((uint)uStack_100f0 == uStack_100be)) {
                            pVar5 = _getpid();
                            uVar3 = uStack_100dc;
                            if (sVar1 == (short)pVar5) {
                                uVar10 = SystemTimer::GetTimeNS<std::chrono::steady_clock>(pSVar15);
                                uVar17 = (uVar10 - uStack_100e8) / 1000000;
                                bVar18 = false;
                                iVar16 = 3;
                            }
                        }
                    }
                } while (iVar16 != 3);
                _close(uVar3);
                goto LAB_100b165d6;
            }
            _close(uVar3);
        }
        uVar17 = 4294967295;
    LAB_100b165d6:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar17 & 4294967295;
    }

} // namespace jag::network
