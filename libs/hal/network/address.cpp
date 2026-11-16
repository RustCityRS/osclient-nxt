// libs/hal/network/address.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.network

#include "address.h"

namespace jag::sock {
    // 0x100b0e740
    unsigned long AddressBase::Resolve(const char* str, eastl::vector<AddressBase>& addressBases, Error* error) {
        sockaddr* psVar1;
        int iVar3;
        size_t sVar5;
        Logger* pLVar6;
        uint64_t uVar7;
        unsigned long uVar9;
        char* pcVar10;
        addrinfo* paVar11;
        uint64_t in_stack_fffffffffffffd68;
        ReturnValue local_288;
        addrinfo* local_270;
        uint8_t local_258[544];

        uint32_t uVar12 = (uint32_t)((unsigned long)in_stack_fffffffffffffd68 >> 32);
        Logger* local_260 = (Logger*)str;
        bool cVar2 = addressBases.empty();
        Logger* pLVar8 = local_260;
        if (!cVar2) {
            LogAssert("outAddresses.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/network/address.cpp",
                      19, nullptr);
        }
        long lVar4 = __ZL6strchrUa9enable_ifIXLb1EEEPKci(local_260);
        if (lVar4 == 0) {
            pcVar10 = nullptr;
        } else {
            sVar5 = _strlen((char*)pLVar8);
            pLVar8 = local_260;
            if (511 < sVar5) {
                LogAssert(
                    "strlen(_address) < 512",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/network/address.cpp", 29,
                    nullptr);
            }
            _strcpy((char*)(local_258 + 32), (char*)local_260);
            local_258[(lVar4 - (long)pLVar8) + 32] = 0;
            pcVar10 = (char*)(lVar4 + 1);
            local_260 = (Logger*)(local_258 + 32);
            iVar3 = eastl::stoi(pcVar10, 10);
            if (65534 < iVar3 - 1U) {
                pLVar6 = logger::default_logger();
                pLVar6->Log(
                    false, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/network/address.cpp", 42,
                    "Invalid port specified: %d", (((uint64_t)uVar12 << 32) | (uint32_t)iVar3));
                if (error != nullptr) {
                    new (error) std::__cxx_atomic_base_impl(49);
                    uVar9 = 0;
                    goto LAB_100b0ea73;
                }
            }
        }
        iVar3 = _getaddrinfo((char*)local_260, pcVar10, nullptr, &local_270);
        if (iVar3 == 0) {
            if (local_270 != nullptr) {
                paVar11 = local_270;
                do {
                    if (paVar11->ai_family == 30) {
                        psVar1 = paVar11->ai_addr;
                        local_258->CreateV6((psVar1->sa_data + 6));
                        pLVar8 = logger::default_logger();
                        local_288 = local_258->asString();
                        uVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        pLVar8->Log(false, 5,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/network/"
                                    "address.cpp",
                                    81, "Found potential IPV6 Address: %s", uVar7);
                        local_288[0]._0_2_ = _OSSwapInt16(*(unsigned short*)psVar1->sa_data);
                        addressBases.emplace_back<char const*&, network::IPAddress&, unsigned short, int&, int&>(
                            local_260, *local_258, local_288, paVar11->ai_socktype, paVar11->ai_protocol);
                    } else if (paVar11->ai_family == 2) {
                        pLVar8 = (Logger*)paVar11->ai_addr;
                        local_258->CreateV4(*(unsigned int*)&pLVar8->field_4);
                        pLVar6 = logger::default_logger();
                        local_288 = local_258->asString();
                        uVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        pLVar6->Log(false, 5,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/network/"
                                    "address.cpp",
                                    70, "Found potential IPV4 Address: %s", uVar7);
                        local_288[0]._0_2_ = _OSSwapInt16(*(unsigned short*)&pLVar8->field_2);
                        addressBases.emplace_back<char const*&, network::IPAddress&, unsigned short, int&, int&>(
                            local_260, *local_258, local_288, paVar11->ai_socktype, paVar11->ai_protocol);
                    }
                    paVar11 = paVar11->ai_next;
                } while (paVar11 != nullptr);
            }
            _freeaddrinfo(local_270);
            lVar4 = addressBases.size();
            uVar9 = (((uint64_t)((int64_t)((unsigned long)pLVar8 >> 8)) << 8) | (uint8_t)(lVar4 != 0));
        } else {
            pLVar6 = logger::default_logger();
            pLVar8 = local_260;
            pcVar10 = _gai_strerror(iVar3);
            uVar9 = 0;
            pLVar6->Log(false, 3,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/network/address.cpp",
                        57, "Failed to DNS lookup %s - error: %s", pLVar8, pcVar10);
        }
    LAB_100b0ea73:
        return uVar9 & 4294967295;
    }

} // namespace jag::sock
