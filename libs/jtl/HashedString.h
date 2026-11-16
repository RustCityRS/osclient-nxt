// libs/jtl/HashedString.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.hal.system.osclient

namespace jag {
    class HashedString {
    public:
        void GetString() const;
        void GetHash() const;
        HashedString(const char* str);
        uint8_t operator!=(const HashedString& hashedString) const;
        bool operator==(const HashedString& hashedString) const;

    private:
        char* field_0;
        uint64_t field_8;
    };

    // 0x100009d10: HashedString::GetString() const has the same machine code as eastl::string::Layout::HeapBeginPtr()

    // 0x10000b2a0: HashedString::GetHash() const has the same machine code as eastl::string::Layout::GetHeapSize() const

    // 0x100196260
    HashedString::HashedString(const char* str) : field_0(str) {
        hash<char const*> local_20[8];

        field_8 = eastl::hash<char const*>::operator()(local_20, str);
        if (str == nullptr) {
            LogAssert("str != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/HashedString.h", 16,
                      nullptr);
        }
    }

    // 0x1009bad60
    uint8_t HashedString::operator!=(const HashedString& hashedString) const {
        return *this == hashedString ^ 1;
    }

    // 0x1009badd0
    bool HashedString::operator==(const HashedString& hashedString) const {
        if ((field_0 == hashedString.field_0) && (field_8 != hashedString.field_8)) {
            LogAssert("m_hash == other.m_hash",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/HashedString.h", 27,
                      nullptr);
        }
        return field_0 == hashedString.field_0;
    }

} // namespace jag
