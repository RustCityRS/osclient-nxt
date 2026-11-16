// libs/hal/network/AddressInfo.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.network

#include "AddressInfo.h"

namespace jag::sock {
    // 0x10000b2a0: AddressInfo::GetBaseAddrInfo() const has the same machine code as eastl::string::Layout::GetHeapSize() const

    // 0x100058b00: AddressInfo::HasResolvedSuccessfully() const has the same machine code as shared_ptr<oldscape::rs2lib::worldmap::MapElement>::operator bool() const

    // 0x100b0d4d0
    AddressInfo::~AddressInfo() {
        _freeaddrinfo(field_8);
    }

    // 0x100b0d520
    void AddressInfo::Resolve(const char* str) {
        int iVar1;
        size_t sVar3;
        uint8_t* puVar4;
        char* str_00;

        long lVar2 = __ZL6strchrUa9enable_ifIXLb1EEEPKci(str);
        fixed_string<char, 512> local_258;
        if (lVar2 == 0) {
            str_00 = "";
        } else {
            sVar3 = _strlen(str);
            if (511 < sVar3) {
                LogAssert(
                    "strlen(address) < 512",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/network/AddressInfo.cpp",
                    33, nullptr);
            }
            local_258 = str;
            puVar4 = &local_258[lVar2 - (long)str];
            *puVar4 = 0;
            str = &local_258[0];
            str_00 = (char*)(lVar2 + 1);
            iVar1 = eastl::stoi(str_00, 10);
            if (65534 < iVar1 - 1U) {
                (logger::default_logger())
                    ->Log(false, 2,
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/network/"
                          "AddressInfo.cpp",
                          46, "Invalid port specified: %d", iVar1);
            }
        }
        Resolve(str, str_00);
    }

    // 0x100b0d6e0
    unsigned long AddressInfo::Resolve(const char* str1, const char* str2) {
        char* pcVar2;
        Logger* pLVar3;
        char local_68[48];

        auto local_78 = std::make_unique<addrinfo>();
        addrinfo* paVar1 = (addrinfo*)*local_78;
        paVar1->ai_flags = 0;
        paVar1->ai_family = 0;
        paVar1->ai_socktype = 0;
        paVar1->ai_protocol = 0;
        *(uint64_t*)&paVar1->ai_addrlen = 0;
        paVar1->ai_canonname = nullptr;
        paVar1->ai_addr = nullptr;
        paVar1->ai_next = nullptr;
        paVar1->ai_socktype = 1;
        paVar1->ai_protocol = 0;
        paVar1->ai_flags = 1024;
        addrinfo** ppaVar4 = &field_8;
        int local_6c = _getaddrinfo(str1, str2, paVar1, ppaVar4);
        if (local_6c == 0) {
            paVar1 = *ppaVar4;
            if (paVar1 != nullptr) {
                do {
                    if (paVar1->ai_family == 30) {
                        ppaVar4 = (addrinfo**)_inet_ntop(30, paVar1->ai_addr->sa_data + 6, local_68, 46);
                        pLVar3 = logger::default_logger();
                        pLVar3->Log(false, 5,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/network/"
                                    "AddressInfo.cpp",
                                    105, "Found potential IPV6 Address: %s", ppaVar4);
                    } else if (paVar1->ai_family == 2) {
                        pcVar2 = _inet_ntop(2, paVar1->ai_addr->sa_data + 2, local_68, 16);
                        pLVar3 = logger::default_logger();
                        pLVar3->Log(false, 5,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/network/"
                                    "AddressInfo.cpp",
                                    95, "Found potential IPV4 Address: %s", pcVar2);
                    }
                    paVar1 = paVar1->ai_next;
                } while (paVar1 != nullptr);
            }
        } else {
            _freeaddrinfo(*ppaVar4);
        }
        bool bVar5 = local_6c == 0;
        return bVar5 & 4294967295;
    }

} // namespace jag::sock

// 0x100b0d680
void __ZL6strchrUa9enable_ifIXLb1EEEPKci(char* param_1, int param_2) {
    __libcpp_strchr(param_1, param_2);
}
