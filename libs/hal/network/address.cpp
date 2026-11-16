// libs/hal/network/address.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.network

#include "address.h"

namespace jag::sock {
    // 0x100b0e740, 912 bytes, placed by debug map only (low confidence)
    // AddressBase::Resolve(char const*, eastl::vector<AddressBase, eastl::allocator>&, Error*)
    ulong AddressBase::Resolve(char* param_1, vector* param_2, Error* param_3) {
        sockaddr* psVar1;
        char cVar2;
        int iVar3;
        long lVar4;
        size_t sVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        AddressBase* pAVar8;
        ulong uVar9;
        char* pcVar10;
        addrinfo* paVar11;
        undefined8 in_stack_fffffffffffffd68;
        undefined4 uVar12;
        undefined1 local_288[24];
        addrinfo* local_270;
        AddressBase* local_260;
        undefined1 local_258[544];
        long local_38;

        uVar12 = (undefined4)((ulong)in_stack_fffffffffffffd68 >> 32);
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_260 = this;
        cVar2 = param_1->empty();
        pAVar8 = local_260;
        if (cVar2 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("outAddresses.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/network/address.cpp",
                      19, (char*)0);
        }
        lVar4 = __ZL6strchrUa9enable_ifIXLb1EEEPKci(local_260);
        if (lVar4 == 0) {
            pcVar10 = (char*)0;
        } else {
            sVar5 = _strlen((char*)pAVar8);
            pAVar8 = local_260;
            if (511 < sVar5) {
                /* WARNING: Subroutine does not return */
                LogAssert(
                    "strlen(_address) < 512",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/network/address.cpp", 29,
                    (char*)0);
            }
            _strcpy((char*)(local_258 + 32), (char*)local_260);
            local_258[(lVar4 - (long)pAVar8) + 32] = 0;
            pcVar10 = (char*)(lVar4 + 1);
            local_260 = (AddressBase*)(local_258 + 32);
            iVar3 = eastl::stoi(pcVar10, 10);
            if (65534 < iVar3 - 1U) {
                uVar6 = logger::default_logger();
                logger::Logger::Log(
                    uVar6, 0, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/network/address.cpp", 42,
                    "Invalid port specified: %d", CONCAT44(uVar12, iVar3));
                if (param_2 != (vector*)0) {
                    new (param_2) std::__cxx_atomic_base_impl<oldscape::FolderSelection::FolderPathRequestStatus>(49);
                    uVar9 = 0;
                    goto LAB_100b0ea73;
                }
            }
        }
        iVar3 = _getaddrinfo((char*)local_260, pcVar10, (addrinfo*)0, &local_270);
        if (iVar3 == 0) {
            if (local_270 != (addrinfo*)0) {
                paVar11 = local_270;
                do {
                    if (paVar11->ai_family == 30) {
                        psVar1 = paVar11->ai_addr;
                        local_258->CreateV6((ushort*)(psVar1->sa_data + 6));
                        pAVar8 = (AddressBase*)logger::default_logger();
                        local_288->asString();
                        uVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        logger::Logger::Log(pAVar8, 0, 5,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                            "network/address.cpp",
                                            81, "Found potential IPV6 Address: %s", uVar6);
                        local_288->~basic_string();
                        local_288._0_2_ = _OSSwapInt16(*(ushort*)psVar1->sa_data);
                        eastl::vector<AddressBase, eastl::allocator>::emplace_back<char const*&, network::IPAddress&,
                                                                                   unsigned short, int&, int&>(
                            (vector<AddressBase, eastl::allocator>*)param_1, (char**)&local_260, (IPAddress*)local_258,
                            (ushort*)local_288, &paVar11->ai_socktype, &paVar11->ai_protocol);
                    } else if (paVar11->ai_family == 2) {
                        pAVar8 = (AddressBase*)paVar11->ai_addr;
                        local_258->CreateV4(pAVar8->field_4);
                        uVar6 = logger::default_logger();
                        local_288->asString();
                        uVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        logger::Logger::Log(uVar6, 0, 5,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                            "network/address.cpp",
                                            70, "Found potential IPV4 Address: %s", uVar7);
                        local_288->~basic_string();
                        local_288._0_2_ = _OSSwapInt16(*(ushort*)((long)&pAVar8->field_0 + 2));
                        eastl::vector<AddressBase, eastl::allocator>::emplace_back<char const*&, network::IPAddress&,
                                                                                   unsigned short, int&, int&>(
                            (vector<AddressBase, eastl::allocator>*)param_1, (char**)&local_260, (IPAddress*)local_258,
                            (ushort*)local_288, &paVar11->ai_socktype, &paVar11->ai_protocol);
                    }
                    paVar11 = paVar11->ai_next;
                } while (paVar11 != (addrinfo*)0);
            }
            _freeaddrinfo(local_270);
            lVar4 = ((vector<AddressBase, eastl::allocator>*)param_1)->size();
            uVar9 = CONCAT71((int7)((ulong)pAVar8 >> 8), lVar4 != 0);
        } else {
            uVar6 = logger::default_logger();
            pAVar8 = local_260;
            pcVar10 = _gai_strerror(iVar3);
            uVar9 = 0;
            logger::Logger::Log(
                uVar6, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/network/address.cpp", 57,
                "Failed to DNS lookup %s - error: %s", pAVar8, pcVar10);
        }
    LAB_100b0ea73:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar9 & 4294967295;
    }

} // namespace jag::sock
