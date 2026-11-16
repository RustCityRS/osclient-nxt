// libs/jtl/StringEnum.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.jtl

#include "StringEnum.h"

namespace jag {
    // 0x100009d10: StringEnum::GetEnumList() const has the same machine code as eastl::string::Layout::HeapBeginPtr()

    // 0x100024170: StringEnum::GetNumEntries() const has the same machine code as oldscape::option::IScriptOption::GetId() const

    // 0x100cb79b0
    StringEnum::~StringEnum() {
        if (field_12 != false) {
            safe_delete_array<float>((unsigned char**)this);
        }
    }

    // 0x100cb79e0
    void StringEnum::SetEnumList(const StringEnumEntry* stringEnumEntry, int arg2, bool arg3) {
        if (field_0 != nullptr) {
            LogAssert("m_pEnumList == nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/StringEnum.cpp", 21,
                      nullptr);
        }
        if (m_numEntries != 0) {
            LogAssert("m_NumEnums == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/StringEnum.cpp", 22,
                      nullptr);
        }
        field_0 = stringEnumEntry;
        m_numEntries = arg2;
        field_12 = arg3;
    }

    // 0x100cb7a60
    void StringEnum::SetEnumCount(int arg1) {
        if (field_12 != false) {
            LogAssert("m_OwnsData == false",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/StringEnum.cpp", 31,
                      nullptr);
        }
        if (field_0 == nullptr) {
            LogAssert("m_pEnumList",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/StringEnum.cpp", 32,
                      nullptr);
        }
        m_numEntries = arg1;
    }

    // 0x100cb7ac0
    unsigned long StringEnum::GetIndex(const char* str, bool arg2) const {
        unsigned int uVar1;
        int iVar2;
        uint32_t in_register_00000011;
        StringEnumEntry* pSVar3;
        long lVar4;
        unsigned long uVar5;

        if ((((uint32_t)in_register_00000011 << 8) | (uint8_t)arg2) == 0) {
            if (0 < (int)m_numEntries) {
                lVar4 = 8;
                uVar5 = 0;
                do {
                    iVar2 = stricmp(str, *(char**)(field_0 + lVar4));
                    if (iVar2 == 0) {
                        return uVar5 & 4294967295;
                    }
                    uVar5 = uVar5 + 1;
                    lVar4 = lVar4 + 16;
                } while ((long)uVar5 < (long)(int)m_numEntries);
            }
        } else {
            uVar1 = m_numEntries;
            if (0 < (int)uVar1) {
                pSVar3 = field_0 + 8;
                uVar5 = 0;
                do {
                    iVar2 = _strcmp(str, *(char**)pSVar3);
                    if (iVar2 == 0) {
                        return uVar5 & 4294967295;
                    }
                    uVar5 = uVar5 + 1;
                    pSVar3 = pSVar3 + 16;
                } while (uVar1 != uVar5);
            }
        }
        return 4294967295;
    }

    // 0x100cb7b90
    unsigned long StringEnum::GetIndex(int arg1) const {
        unsigned long uVar1;
        StringEnumEntry* pSVar2;

        if (0 < (int)m_numEntries) {
            pSVar2 = field_0;
            uVar1 = 0;
            do {
                if (*(int*)pSVar2 == arg1) {
                    return uVar1 & 4294967295;
                }
                uVar1 = uVar1 + 1;
                pSVar2 = pSVar2 + 16;
            } while (m_numEntries != uVar1);
        }
        return 4294967295;
    }

} // namespace jag
