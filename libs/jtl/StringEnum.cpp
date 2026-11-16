// libs/jtl/StringEnum.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.jtl

#include "StringEnum.h"

namespace jag {
    // 0x100009d10: the linker folded this into eastl::string::Layout::HeapBeginPtr(), which has identical code
    StringEnum::GetEnumList() const;

    // 0x100024170: the linker folded this into oldscape::option::IScriptOption::GetId() const, which has identical code
    uint StringEnum::GetNumEntries() const;

    // 0x100cb79b0, 32 bytes, base-object destructor, placed by class name and debug map
    // StringEnum::~StringEnum()
    void StringEnum::~StringEnum() {
        if (field_12 != false) {
            safe_delete_array<float>((float**)this);
        }
    }

    // 0x100cb79d0, 16 bytes, complete-object destructor, placed by class name and debug map
    // StringEnum::~StringEnum(): jumps straight to the base-object destructor

    // 0x100cb79e0, 128 bytes, placed by class name and debug map
    // StringEnum::SetEnumList(StringEnumEntry const*, int, bool)
    void StringEnum::SetEnumList(StringEnumEntry* param_1, int param_2, bool param_3) {
        if (field_0 != (StringEnumEntry*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pEnumList == nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/StringEnum.cpp", 21,
                      (char*)0);
        }
        if (m_numEntries != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_NumEnums == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/StringEnum.cpp", 22,
                      (char*)0);
        }
        field_0 = param_1;
        m_numEntries = param_2;
        field_12 = param_3;
    }

    // 0x100cb7a60, 96 bytes, placed by class name and debug map
    // StringEnum::SetEnumCount(int)
    void StringEnum::SetEnumCount(int param_1) {
        if (field_12 != false) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_OwnsData == false",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/StringEnum.cpp", 31,
                      (char*)0);
        }
        if (field_0 == (StringEnumEntry*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pEnumList",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/StringEnum.cpp", 32,
                      (char*)0);
        }
        m_numEntries = param_1;
    }

    // 0x100cb7ac0, 208 bytes, placed by class name and debug map
    // StringEnum::GetIndex(char const*, bool) const
    ulong StringEnum::GetIndex(char* param_1, bool param_2) {
        uint uVar1;
        int iVar2;
        undefined3 in_register_00000011;
        StringEnumEntry* pSVar3;
        long lVar4;
        ulong uVar5;

        if (CONCAT31(in_register_00000011, param_2) == 0) {
            if (0 < (int)m_numEntries) {
                lVar4 = 8;
                uVar5 = 0;
                do {
                    iVar2 = stricmp(param_1, *(char**)(field_0 + lVar4));
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
                    iVar2 = _strcmp(param_1, *(char**)pSVar3);
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

    // 0x100cb7b90, 64 bytes, placed by class name and debug map
    // StringEnum::GetIndex(int) const
    ulong StringEnum::GetIndex(int param_1) {
        ulong uVar1;
        StringEnumEntry* pSVar2;

        if (0 < (int)m_numEntries) {
            pSVar2 = field_0;
            uVar1 = 0;
            do {
                if (*(int*)pSVar2 == param_1) {
                    return uVar1 & 4294967295;
                }
                uVar1 = uVar1 + 1;
                pSVar2 = pSVar2 + 16;
            } while (m_numEntries != uVar1);
        }
        return 4294967295;
    }

} // namespace jag
