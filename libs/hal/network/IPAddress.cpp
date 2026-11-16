// libs/hal/network/IPAddress.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.network

#include "IPAddress.h"

namespace jag::network {
    // 0x100b0eb70, 16 bytes, complete-object destructor, placed by class name and debug map
    // IPAddress::~IPAddress(): jumps straight to the base-object destructor

    // 0x100b0ed40, 32 bytes, base-object constructor, placed by class name and debug map
    // IPAddress::IPAddress()
    void IPAddress::IPAddress() {
        field_0 = &PTR__IPAddress_100f25328;
        Clear(this);
    }

    // 0x100b0ed90, 16 bytes, complete-object constructor, placed by class name
    // IPAddress::IPAddress(): jumps straight to the base-object constructor

    // 0x100b0eda0, 16 bytes, base-object destructor, placed by class name
    // IPAddress::~IPAddress()
    void IPAddress::~IPAddress() {}

    // 0x100b0edb0, 16 bytes, deleting destructor, placed by class name
    // IPAddress::~IPAddress()
    void IPAddress::~IPAddress() {
        operator_delete(this);
    }

    // 0x100b0edc0, 112 bytes, placed by class name
    // IPAddress::CreateFromAddrInfo(addrinfo const*)
    IPAddress* IPAddress::CreateFromAddrInfo(addrinfo* param_1) {
        if (param_1->ai_family == 30) {
            CreateV6(this, (ushort*)(param_1->ai_addr->sa_data + 6));
        } else {
            if (param_1->ai_family != 2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/network/IPAddress.cpp",
                    44, "Unknown IPAddress type");
            }
            CreateV4(this, *(uint*)(param_1->ai_addr->sa_data + 2));
        }
        return this;
    }

    // 0x100b0eea0, 192 bytes, placed by class name
    // IPAddress::asString() const
    IPAddress* IPAddress::asString() {
        IPAddress* in_RSI;
        undefined1 auVar1[16];
        basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_150[16];
        ostream local_140[264];
        basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_38[24];
        eastl local_20[8];

        std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::basic_stringstream(local_150);
        network::operator<<(local_140, in_RSI);
        std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::str(local_38);
        auVar1 = local_38->c_str();
        eastl::destruct<oldscape::highlight::NpcUID*>(local_20, (NpcUID*)"EASTL basic_string", auVar1._8_8_);
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)this, auVar1._0_8_);
        local_38->~basic_string();
        std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::~basic_stringstream(local_150);
        return this;
    }

    // 0x100b0f010, 160 bytes, placed by __FILE__ string
    // operator<<(std::basic_ostream<char, std::char_traits<char> >&, IPAddress const&)
    /* TEMPNAMEPLACEHOLDERVALUE(std::ostream&, IPAddress const&) */

    ostream* operator<<(ostream* param_1, IPAddress* param_2) {
        char* pcVar1;
        socklen_t sVar2;
        int iVar3;
        char local_48[48];
        long local_18;

        local_18 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (param_2->field_8 == 1) {
            iVar3 = 30;
            sVar2 = 46;
        } else {
            if (param_2->field_8 != 0) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/network/IPAddress.cpp",
                    81, "Unknow IP type");
            }
            iVar3 = 2;
            sVar2 = 16;
        }
        pcVar1 = _inet_ntop(iVar3, &param_2->field_12, local_48, sVar2);
        std::operator<<(param_1, pcVar1);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_18) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return param_1;
    }

} // namespace jag::network
