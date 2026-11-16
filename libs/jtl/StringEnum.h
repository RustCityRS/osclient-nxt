// libs/jtl/StringEnum.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class StringEnum {
    public:
        GetEnumList() const;
        GetNumEntries() const;
        GetName(int) const;
        StringEnum(StringEnumEntry const*, int);
        ~StringEnum();
        void SetEnumList(StringEnumEntry const*, int, bool);
        void SetEnumCount(int);
        ulong GetIndex(char const*, bool) const;
        ulong GetIndex(int) const;

        // data members, from how the methods use this: 16 bytes
        StringEnumEntry* field_0; // offset 0
        uint field_8;             // offset 8
        bool field_12;            // offset 12
        char _unknown_13[3];
    };

    class StringEnumEntry {
    public:
        GetName() const;
    };

    // 0x100bcf0a0, 48 bytes, inline, placed by class name and debug map
    // StringEnum::GetName(int) const
    undefined8 StringEnum::GetName(int param_1) {
        int iVar1;
        undefined8 uVar2;

        iVar1 = GetIndex(this, param_1);
        if (iVar1 == -1) {
            uVar2 = 0;
        } else {
            uVar2 = ((field_0 + (long)iVar1 * 16))->end();
        }
        return uVar2;
    }

    // 0x100ca6a30, 16 bytes, complete-object constructor, inline, placed by class name
    // StringEnum::StringEnum(StringEnumEntry const*, int): jumps straight to the base-object constructor

    // 0x100ca8a40, 16 bytes, base-object constructor, inline, placed by class name
    // StringEnum::StringEnum(StringEnumEntry const*, int)
    void StringEnum::StringEnum(StringEnumEntry* param_1, int param_2) {
        field_0 = param_1;
        field_8 = param_2;
        field_12 = false;
    }

} // namespace jag
