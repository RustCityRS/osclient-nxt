// libs/ui/stylesheets/StyleSheet.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.ui

#include "StyleSheet.h"

namespace jag::ui {
    // 0x1039bc480
    eastl::basic_string::Layout StyleSheet::STYLE_ENTRY_MAPPING;

    // 0x1002b6d80: StyleSheet::HasParent() const has the same machine code as oldscape::jagex3::Js5::GroupState::IsValid() const

    // 0x100674460
    unsigned long StyleSheet::LoadFromPacket(unsigned int arg1, PacketT<Array<unsigned char>>& arg2) {
        bool cVar1;
        int arg1_00;
        unsigned short uVar4;
        uint8_t auVar6[12];
        uint8_t local_68[12];
        uint8_t local_58[16];
        unsigned int local_34;

        field_0 = arg1;
        short sVar2 = arg2.g2s();
        field_4 = (int)sVar2;
        unsigned int uVar3 = arg2.g2();
        vector_map<unsigned int, StyleSheetValue>* local_40 = (vector_map<unsigned int, StyleSheetValue>*)&field_8;
        local_40->reserve((unsigned long)(uVar3 & 65535));
        bool bVar5 = (unsigned short)uVar3 != 0;
        if (bVar5) {
            local_58._8_8_ = (uint64_t)-uVar3;
            uVar4 = 1;
            do {
                cVar1 = arg2.g1();
                local_34 = arg2.g4();
                arg1_00 = arg2.g4s();
                if (!cVar1) {
                    new (local_58) StyleSheetValue(arg1_00);
                    auVar6 = eastl::make_pair<unsigned int&, StyleSheetValue>(local_34, *local_58);
                    local_68 = auVar6;
                    local_40->insert<eastl::pair<unsigned int, StyleSheetValue>, void>(*local_68);
                } else {
                    (logger::default_logger())
                        ->Log(false, 2,
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/stylesheets/"
                              "StyleSheet.cpp",
                              71, "StyleSheet: Unknown decoding method for entry %u in style sheet %d.",
                              (unsigned long)local_34, (unsigned long)field_0);
                    if (cVar1)
                        break;
                }
                bVar5 = uVar4 < (unsigned short)uVar3;
                sVar2 = local_58._8_2_ + uVar4;
                uVar4 = uVar4 + 1;
            } while (sVar2 != 0);
        }
        return ~bVar5 & 4294967041;
    }

    // 0x100674700
    unsigned long StyleSheet::ResolveParent(const eastl::vector_map<int, shared_ptr<StyleSheet>>& arg1) {
        int* piVar1;
        int* piVar2;
        uint64_t unaff_R15;
        uint64_t uVar4;
        unsigned long uVar3;
        bool bVar5;

        if (field_4 == -1) {
            uVar3 = (((uint64_t)((int64_t)((unsigned long)unaff_R15 >> 8)) << 8) | (uint8_t)1);
        } else {
            piVar1 = (int*)arg1.HeapBeginPtr();
            piVar2 = (int*)arg1.end();
            bVar5 = piVar1 == piVar2;
            uVar4 = (uint64_t)((unsigned long)arg1 >> 8);
            if (!bVar5) {
                if (*piVar1 == field_4) {
                    bVar5 = false;
                    uVar4 = 0;
                } else {
                    do {
                        piVar1 = piVar1 + 6;
                        bVar5 = piVar1 == piVar2;
                        if (bVar5)
                            goto LAB_10067477e;
                    } while (*piVar1 != field_4);
                }
                (&field_48)->operator=((piVar1 + 2));
            }
        LAB_10067477e:
            uVar3 = (((uint64_t)uVar4 << 8) | (uint8_t)bVar5) ^ 1;
        }
        return uVar3 & 4294967295;
    }

    // 0x1006747d0
    auto StyleSheet::FindProperty(const char* str, bool arg2) const {
        auto result;

        unsigned int arg1 = stringtools::hash32(str);
        FindPropertyImpl(&result, this, arg1, arg2);
        if (!(result.IsValid())) {
            if (!(IsPropertyKnown((StyleSheet*)str, (char*)this))) {
                (logger::default_logger())
                    ->Log(false, 3,
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/stylesheets/"
                          "StyleSheet.cpp",
                          109, "StyleSheet: Attempting to find unknown property \'%s\'", str);
            }
        }
        return result;
    }

    // 0x100674860
    PropertyFindResult StyleSheet::FindPropertyImpl(unsigned int arg1, bool arg2) const {
        bool cVar1;
        StyleSheet* this_00;
        ReturnValue local_48;

        long lVar2 = field_8.find(arg1);
        long lVar3 = field_8.end();
        if (lVar2 == lVar3) {
            if ((arg2) && (cVar1 = HasParent(), cVar1)) {
                local_48 = GetTarget();
                this_00 = (StyleSheet*)local_48.operator->();
                FindPropertyImpl(&result, this_00, arg1, true);
                return result;
            }
            PropertyFindResult result;
        } else {
            new (&result) PropertyFindResult(this, (lVar2 + 4));
        }
        return result;
    }

    // 0x100674930
    bool StyleSheet::IsPropertyKnown(const char* str) {
        unsigned int local_1c = stringtools::hash32(this);
        auto puVar1 = STYLE_ENTRY_MAPPING.SSOBeginPtr();
        auto puVar2 = eastl::end<unsigned int const, 607ul>(&STYLE_ENTRY_MAPPING);
        puVar1 = eastl::find<unsigned int const*, unsigned int>(puVar1, puVar2, local_1c);
        puVar2 = eastl::end<unsigned int const, 607ul>(&STYLE_ENTRY_MAPPING);
        return puVar1 != puVar2;
    }

    // 0x100674990
    PropertyFindResult StyleSheet::FindProperty(StyleEntryID styleEntryID, bool arg2) const {
        if ((int)styleEntryID < 607) {
            FindPropertyImpl(&result, this, *(unsigned int*)(&STYLE_ENTRY_MAPPING + (long)(int)styleEntryID * 4), arg2);
        } else {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/stylesheets/"
                      "StyleSheet.cpp",
                      121, "StyleSheet: Attempted to find unknown property %d", styleEntryID);
            PropertyFindResult result;
        }
        return result;
    }

} // namespace jag::ui
