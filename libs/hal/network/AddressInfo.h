// libs/hal/network/AddressInfo.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::sock {
    class AddressInfo {
    public:
        // virtual methods in vtable order
        virtual ~AddressInfo();
        void GetBaseAddrInfo() const;
        bool HasResolvedSuccessfully() const;
        AddressInfo(const char* str);
        void Resolve(const char* str);
        unsigned long Resolve(const char* str1, const char* str2);

    private:
        addrinfo* field_8;
    };

    // 0x100370fb0
    AddressInfo::AddressInfo(const char* str) : field_8(nullptr) {
        Resolve(str);
    }

} // namespace jag::sock
