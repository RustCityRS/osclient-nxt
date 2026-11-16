// libs/hal/network/AddressInfo.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.network

#include "AddressInfo.h"

namespace jag::sock {
    // 0x10000b2a0: the linker folded this into eastl::string::Layout::GetHeapSize() const, which has identical code
    AddressInfo::GetBaseAddrInfo() const;

    // 0x100058b00: the linker folded this into shared_ptr<oldscape::rs2lib::worldmap::MapElement>::operator bool() const, which has identical code
    AddressInfo::HasResolvedSuccessfully() const;

    // 0x100b0d4d0, 32 bytes, base-object destructor, placed by class name and debug map
    // AddressInfo::~AddressInfo()
    void AddressInfo::~AddressInfo() {
        field_0 = &PTR__AddressInfo_100f252e8;
        _freeaddrinfo(field_8);
    }

    // 0x100b0d4f0, 16 bytes, complete-object destructor, placed by class name and debug map
    // AddressInfo::~AddressInfo(): jumps straight to the base-object destructor

    // 0x100b0d500, 32 bytes, deleting destructor, placed by class name and debug map
    // AddressInfo::~AddressInfo()
    void AddressInfo::~AddressInfo() {
        ~AddressInfo(this);
        operator_delete(this);
    }

    // 0x100b0d520, 352 bytes, placed by class name and debug map
    // AddressInfo::Resolve(char const*)
    void AddressInfo::Resolve(char* param_1) {
        int iVar1;
        long lVar2;
        size_t sVar3;
        undefined1* puVar4;
        undefined8 uVar5;
        char* pcVar6;
        fixed_string<char, 512, true, eastl::allocator> local_258[552];
        undefined8 local_30;

        local_30 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        lVar2 = __ZL6strchrUa9enable_ifIXLb1EEEPKci(param_1);
        eastl::fixed_string<char, 512, true, eastl::allocator>::fixed_string(local_258);
        if (lVar2 == 0) {
            pcVar6 = "";
        } else {
            sVar3 = _strlen(param_1);
            if (511 < sVar3) {
                /* WARNING: Subroutine does not return */
                LogAssert(
                    "strlen(address) < 512",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/network/AddressInfo.cpp",
                    33, (char*)0);
            }
            eastl::fixed_string<char, 16, true, eastl::allocator>::operator=(
                (fixed_string<char, 16, true, eastl::allocator>*)local_258, param_1);
            puVar4 = (undefined1*)
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>*)
                        local_258,
                    lVar2 - (long)param_1);
            *puVar4 = 0;
            param_1 = (char*)
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>*)
                        local_258,
                    0);
            pcVar6 = (char*)(lVar2 + 1);
            iVar1 = eastl::stoi(pcVar6, 10);
            if (65534 < iVar1 - 1U) {
                uVar5 = logger::default_logger();
                logger::Logger::Log(
                    uVar5, 0, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/network/AddressInfo.cpp",
                    46, "Invalid port specified: %d", iVar1);
            }
        }
        Resolve(this, param_1, pcVar6);
        /* WARNING: Subroutine does not return */
        local_258->~fixed_string();
    }

    // 0x100b0d6e0, 416 bytes, placed by class name and debug map
    // AddressInfo::Resolve(char const*, char const*)
    ulong AddressInfo::Resolve(char* param_1, char* param_2) {
        addrinfo* paVar1;
        char* pcVar2;
        undefined8 uVar3;
        addrinfo** ppaVar4;
        bool bVar5;
        unique_ptr<addrinfo, std::default_delete<addrinfo>> local_78[12];
        int local_6c;
        char local_68[48];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        std::make_unique<addrinfo>();
        paVar1 = (addrinfo*)std::unique_ptr<addrinfo, std::default_delete<addrinfo>>::operator*(local_78);
        paVar1->ai_flags = 0;
        paVar1->ai_family = 0;
        paVar1->ai_socktype = 0;
        paVar1->ai_protocol = 0;
        *(undefined8*)&paVar1->ai_addrlen = 0;
        paVar1->ai_canonname = (char*)0;
        paVar1->ai_addr = (sockaddr*)0;
        paVar1->ai_next = (addrinfo*)0;
        paVar1->ai_socktype = 1;
        paVar1->ai_protocol = 0;
        paVar1->ai_flags = 1024;
        ppaVar4 = &field_8;
        local_6c = _getaddrinfo(param_1, param_2, paVar1, ppaVar4);
        if (local_6c == 0) {
            paVar1 = *ppaVar4;
            if (paVar1 != (addrinfo*)0) {
                do {
                    if (paVar1->ai_family == 30) {
                        ppaVar4 = (addrinfo**)_inet_ntop(30, paVar1->ai_addr->sa_data + 6, local_68, 46);
                        uVar3 = logger::default_logger();
                        logger::Logger::Log(uVar3, 0, 5,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                            "network/AddressInfo.cpp",
                                            105, "Found potential IPV6 Address: %s", ppaVar4);
                    } else if (paVar1->ai_family == 2) {
                        pcVar2 = _inet_ntop(2, paVar1->ai_addr->sa_data + 2, local_68, 16);
                        uVar3 = logger::default_logger();
                        logger::Logger::Log(uVar3, 0, 5,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                            "network/AddressInfo.cpp",
                                            95, "Found potential IPV4 Address: %s", pcVar2);
                    }
                    paVar1 = paVar1->ai_next;
                } while (paVar1 != (addrinfo*)0);
            }
        } else {
            _freeaddrinfo(*ppaVar4);
        }
        bVar5 = local_6c == 0;
        std::unique_ptr<addrinfo, std::default_delete<addrinfo>>::~unique_ptr(local_78);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return CONCAT71((int7)((ulong)ppaVar4 >> 8), bVar5) & 4294967295;
    }

} // namespace jag::sock

// 0x100b0d680, 16 bytes, placed by neighbouring functions
// _ZL6strchrUa9enable_ifIXLb1EEEPKci
void __ZL6strchrUa9enable_ifIXLb1EEEPKci(char* param_1, int param_2) {
    __libcpp_strchr(param_1, param_2);
}
