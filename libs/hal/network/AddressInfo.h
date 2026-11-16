// libs/hal/network/AddressInfo.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::sock {
    class AddressInfo {
    public:
        // virtual methods in vtable order
        virtual ~AddressInfo();
        GetBaseAddrInfo() const;
        HasResolvedSuccessfully() const;
        AddressInfo(char const*);
        void Resolve(char const*);
        ulong Resolve(char const*, char const*);

        // data members, from how the methods use this: 16 bytes
        undefined** field_0; // offset 0, vtable pointer
        addrinfo* field_8;   // offset 8
    };

    // 0x100348470, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // AddressInfo::AddressInfo(char const*): jumps straight to the base-object constructor

    // 0x100370fb0, 48 bytes, base-object constructor, inline, placed by class name
    // AddressInfo::AddressInfo(char const*)
    void AddressInfo::AddressInfo(char* param_1) {
        field_0 = &PTR__AddressInfo_100f252e8;
        field_8 = (addrinfo*)0;
        Resolve(this, param_1);
    }

} // namespace jag::sock
