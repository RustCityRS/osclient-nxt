// libs/hal/network/IPAddress.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.network

#include "IPAddress.h"

namespace jag::network {
    // 0x100b0ed40
    IPAddress::IPAddress() {
        Clear();
    }

    // 0x100b0eda0
    IPAddress::~IPAddress() {}

    // 0x100b0edc0
    auto IPAddress::CreateFromAddrInfo(const addrinfo* addrinfo) {
        auto result;
        if (*(int*)(addrinfo + 4) == 30) {
            CreateV6(&result, (unsigned short*)(*(long*)(addrinfo + 32) + 8));
        } else {
            if (*(int*)(addrinfo + 4) != 2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/network/IPAddress.cpp",
                    44, "Unknown IPAddress type");
            }
            CreateV4(&result, *(unsigned int*)(*(long*)(addrinfo + 32) + 4));
        }
        return result;
    }

    // 0x100b0eea0
    auto IPAddress::asString() const {
        basic_ostream<char, std::char_traits<char> _> local_140;
        eastl local_20;

        basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_150;
        network::operator<<(&local_140, this);
        auto local_38 = local_150.str();
        auto str = local_38.c_str();
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_20);
        auto result(str, &local_20);
        return result;
    }

    // 0x100b0f010
    basic_ostream<char, std::char_traits<char> _>* operator<<(std::basic_ostream<char>& basic_ostream,
                                                              const IPAddress& ipAddress) {
        socklen_t sVar1;
        int iVar2;
        char local_48[48];

        if (ipAddress.field_8 == 1) {
            iVar2 = 30;
            sVar1 = 46;
        } else {
            if (ipAddress.field_8 != 0) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/network/IPAddress.cpp",
                    81, "Unknow IP type");
            }
            iVar2 = 2;
            sVar1 = 16;
        }
        auto str = _inet_ntop(iVar2, &ipAddress.field_12, local_48, sVar1);
        std::operator<<(basic_ostream, str);
        return basic_ostream;
    }

} // namespace jag::network
