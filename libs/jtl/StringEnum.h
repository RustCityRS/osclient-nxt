// libs/jtl/StringEnum.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class StringEnum {
    public:
        void GetEnumList() const;
        unsigned int GetNumEntries() const;
        uint64_t GetName(int arg1) const;
        StringEnum(const StringEnumEntry* stringEnumEntry, int arg2);
        ~StringEnum();
        void SetEnumList(const StringEnumEntry* stringEnumEntry, int arg2, bool arg3);
        void SetEnumCount(int arg1);
        unsigned long GetIndex(const char* str, bool arg2) const;
        unsigned long GetIndex(int arg1) const;

    private:
        StringEnumEntry* field_0;
        unsigned int m_numEntries;
        bool field_12;
        uint8_t _unknown_13[3];
    };

    class StringEnumEntry {
    public:
        void GetName() const;
    };

    // 0x100bcf0a0
    uint64_t StringEnum::GetName(int arg1) const {
        uint64_t uVar2;

        int iVar1 = GetIndex(arg1);
        if (iVar1 == -1) {
            uVar2 = 0;
        } else {
            uVar2 = ((vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(field_0 + (long)iVar1 * 16))
                        ->end();
        }
        return uVar2;
    }

    // 0x100ca8a40
    StringEnum::StringEnum(const StringEnumEntry* stringEnumEntry, int arg2)
        : field_0(stringEnumEntry), m_numEntries(arg2), field_12(false) {}

} // namespace jag
