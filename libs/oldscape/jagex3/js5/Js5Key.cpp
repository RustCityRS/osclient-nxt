// libs/oldscape/jagex3/js5/Js5Key.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "Js5Key.h"

namespace jag::oldscape::jagex3 {
    // 0x1002b71b0
    unsigned int Js5Key::ReadInt() {
        uint8_t* arg1;
        uint8_t bVar1;
        uint8_t bVar2;
        uint8_t bVar3;
        uint8_t* pbVar7;

        long lVar4 = field_40;
        uint8_t* this_00 = field_48;
        long lVar6 = this_00->length(nullptr);
        unsigned int uVar5 = 4294967295;
        if (lVar4 + 4 < lVar6) {
            this_00->seek(field_40, 0, nullptr);
            arg1 = &field_360;
            this_00->read(arg1, 4, 0, field_32);
            field_40 = field_40 + 4;
            pbVar7 = (uint8_t*)(*arg1)[0];
            bVar1 = *pbVar7;
            pbVar7 = (uint8_t*)(*arg1)[1];
            bVar2 = *pbVar7;
            pbVar7 = (uint8_t*)(*arg1)[2];
            bVar3 = *pbVar7;
            pbVar7 = (uint8_t*)(*arg1)[3];
            uVar5 = (unsigned int)*pbVar7 | (unsigned int)bVar3 << 8 | (unsigned int)bVar2 << 16 |
                    (unsigned int)bVar1 << 24;
        }
        return uVar5;
    }

    // 0x1002b7280
    Js5Key::Js5Key(const eastl::basic_string<char, BucketAllocatorEASTL>& str) : eastl::vector<std::array<int, 4ul>>() {
        int iVar2;
        uint32_t uVar4;
        uint64_t uVar5;
        array<int, 4ul>* paVar6;
        uint32_t* puVar7;
        unsigned long arg1;

        uint8_t* this_00 = field_32;
        new (this_00) callstack::Callstack();
        field_40 = 0;
        Filename local_168(str);
        new (field_48) File(&local_168, 0, this_00);
        new (&field_360) eastl::vector<unsigned char>(4, local_168);
        if (this_00->IsValid() != '\0') {
            local_168 = this_00->GetErrorString();
            uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            LogAndAbort(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/js5/Js5Key.cpp",
                37, "Error while reading Js5Key: %s", uVar5);
        }
        int iVar3 = 0;
        do {
            iVar2 = ReadInt();
            if (iVar2 != -1) {
                ReadInt();
                ReadInt();
                ReadInt();
                ReadInt();
                if (iVar3 < iVar2) {
                    iVar3 = iVar2;
                }
            }
        } while (iVar2 != -1);
        field_40 = 0;
        resize((long)(iVar3 + 1));
        while (iVar3 = ReadInt(), iVar3 != -1) {
            uVar4 = ReadInt();
            arg1 = (unsigned long)iVar3;
            paVar6 = (array<int, 4ul>*)(*this)[arg1];
            puVar7 = (uint32_t*)(*paVar6)[0];
            *puVar7 = uVar4;
            uVar4 = ReadInt();
            paVar6 = (array<int, 4ul>*)(*this)[arg1];
            puVar7 = (uint32_t*)(*paVar6)[1];
            *puVar7 = uVar4;
            uVar4 = ReadInt();
            paVar6 = (array<int, 4ul>*)(*this)[arg1];
            puVar7 = (uint32_t*)(*paVar6)[2];
            *puVar7 = uVar4;
            uVar4 = ReadInt();
            paVar6 = (array<int, 4ul>*)(*this)[arg1];
            puVar7 = (uint32_t*)(*paVar6)[3];
            *puVar7 = uVar4;
        }
        field_48->close(nullptr);
    }

    // 0x1002b7600
    uint8_t* Js5Key::GetKey(int arg1) {
        uint8_t* puVar2;

        if (arg1 < 0) {
        LAB_1002b7632:
            LogAssert(
                "groupid >= 0 && groupid < (int)m_keys.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/js5/Js5Key.cpp",
                94, "TinyKey not found for %i", arg1);
        }
        int iVar1 = size();
        if (arg1 < iVar1) {
            puVar2 = (uint8_t*)(*this)[(long)arg1];
        } else {
            iVar1 = size();
            if (iVar1 <= arg1)
                goto LAB_1002b7632;
            puVar2 = &GetKey(int)::dummyResult;
        }
        return puVar2;
    }

} // namespace jag::oldscape::jagex3
