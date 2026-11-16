// libs/jtl/HashedString.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.hal.system.osclient

namespace jag {
    class HashedString {
    public:
        GetString() const;
        GetHash() const;
        HashedString(char const*);
        byte operator!=(HashedString const&) const;
        bool operator==(HashedString const&) const;

        // data members, from how the methods use this: 16 bytes
        char* field_0;      // offset 0
        undefined8 field_8; // offset 8
    };

    // 0x100009d10: the linker folded this into eastl::string::Layout::HeapBeginPtr(), which has identical code
    HashedString::GetString() const;

    // 0x10000b2a0: the linker folded this into eastl::string::Layout::GetHeapSize() const, which has identical code
    HashedString::GetHash() const;

    // 0x10017a130, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // HashedString::HashedString(char const*): jumps straight to the base-object constructor

    // 0x100196260, 80 bytes, base-object constructor, inline, placed by class name
    // HashedString::HashedString(char const*)
    void HashedString::HashedString(char* param_1) {
        hash<char const*> local_20[8];

        field_0 = param_1;
        field_8 = eastl::hash<char const*>::operator()(local_20, param_1);
        if (param_1 == (char*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("str != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/HashedString.h", 16,
                      (char*)0);
        }
    }

    // 0x1009bad60, 16 bytes, inline, placed by class name
    // HashedString::operator!=(HashedString const&) const
    /* HashedString::TEMPNAMEPLACEHOLDERVALUE(HashedString const&) const */

    byte HashedString::operator!=(HashedString* param_1) {
        return operator==(this, param_1) ^ 1;
    }

    // 0x1009badd0, 80 bytes, inline, placed by class name
    // HashedString::operator==(HashedString const&) const
    /* HashedString::TEMPNAMEPLACEHOLDERVALUE(HashedString const&) const */

    bool HashedString::operator==(HashedString* param_1) {
        if ((field_0 == param_1->field_0) && (field_8 != param_1->field_8)) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_hash == other.m_hash",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/HashedString.h", 27,
                      (char*)0);
        }
        return field_0 == param_1->field_0;
    }

} // namespace jag
