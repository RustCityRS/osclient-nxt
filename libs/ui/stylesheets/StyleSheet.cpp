// libs/ui/stylesheets/StyleSheet.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.ui

#include "StyleSheet.h"

namespace jag::ui {
    // 0x1039bc480, 2428 bytes, __common; zero-initialised
    StyleSheet::STYLE_ENTRY_MAPPING;

    // 0x1002b6d80: the linker folded this into oldscape::jagex3::Js5::GroupState::IsValid() const, which has identical code
    StyleSheet::HasParent() const;

    // 0x100674460, 336 bytes, placed by class name and debug map
    // StyleSheet::LoadFromPacket(unsigned int, PacketT<Array<unsigned char, eastl::allocator> >&)
    ulong StyleSheet::LoadFromPacket(uint param_1, PacketT* param_2) {
        char cVar1;
        short sVar2;
        uint uVar3;
        int iVar4;
        undefined8 uVar5;
        undefined8 unaff_R14;
        ushort uVar6;
        bool bVar7;
        undefined1 auVar8[12];
        undefined1 local_68[12];
        undefined1 local_58[16];
        StyleSheet* local_48;
        vector_map<unsigned int, StyleSheetValue, eastl::less<unsigned int>, eastl::allocator,
                   eastl::vector<eastl::pair<unsigned int, StyleSheetValue>, eastl::allocator>>* local_40;
        uint local_34;

        field_0 = param_1;
        sVar2 = param_2->g2s();
        field_4 = (int)sVar2;
        uVar3 = param_2->g2();
        local_40 = (vector_map<unsigned int, StyleSheetValue, eastl::less<unsigned int>, eastl::allocator,
                               eastl::vector<eastl::pair<unsigned int, StyleSheetValue>, eastl::allocator>>*)&field_8;
        local_48 = this;
        local_40->reserve((ulong)(uVar3 & 65535));
        bVar7 = (ushort)uVar3 != 0;
        if (bVar7) {
            local_58._8_8_ = ZEXT48(-uVar3);
            uVar6 = 1;
            do {
                cVar1 = param_2->g1();
                local_34 = param_2->g4();
                iVar4 = param_2->g4s();
                if (cVar1 == '\0') {
                    new (local_58) StyleSheetValue(iVar4);
                    auVar8 = eastl::make_pair<unsigned int&, StyleSheetValue>(&local_34, (StyleSheetValue*)local_58);
                    local_68 = auVar8;
                    eastl::vector_map<unsigned int, StyleSheetValue, eastl::less<unsigned int>, eastl::allocator,
                                      eastl::vector<eastl::pair<unsigned int, StyleSheetValue>, eastl::allocator>>::
                        insert<eastl::pair<unsigned int, StyleSheetValue>, void>(local_40, (pair*)local_68);
                } else {
                    uVar5 = logger::default_logger();
                    logger::Logger::Log(uVar5, 0, 2,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/"
                                        "stylesheets/StyleSheet.cpp",
                                        71, "StyleSheet: Unknown decoding method for entry %u in style sheet %d.",
                                        local_34, local_48->field_0);
                    if (cVar1 != '\0')
                        break;
                }
                bVar7 = uVar6 < (ushort)uVar3;
                sVar2 = local_58._8_2_ + uVar6;
                uVar6 = uVar6 + 1;
            } while (sVar2 != 0);
        }
        return CONCAT71((int7)((ulong)unaff_R14 >> 8), ~bVar7) & 4294967041;
    }

    // 0x100674700, 144 bytes, placed by class name
    // StyleSheet::ResolveParent(eastl::vector_map<int, shared_ptr<StyleSheet>, eastl::less<int>, eastl::allocator, eastl::vector<eastl::pair<int, shared_ptr<StyleSheet> >, eastl::allocator> > const&)
    ulong StyleSheet::ResolveParent(vector_map* param_1) {
        int* piVar1;
        int* piVar2;
        undefined8 unaff_R15;
        undefined7 uVar4;
        ulong uVar3;
        bool bVar5;

        if (field_4 == -1) {
            uVar3 = CONCAT71((int7)((ulong)unaff_R15 >> 8), 1);
        } else {
            piVar1 = (int*)param_1->HeapBeginPtr();
            piVar2 = (int*)param_1->end();
            bVar5 = piVar1 == piVar2;
            uVar4 = (undefined7)((ulong)param_1 >> 8);
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
                weak_ptr<StyleSheet>::operator=((weak_ptr<StyleSheet>*)&field_48, (shared_ptr*)(piVar1 + 2));
            }
        LAB_10067477e:
            uVar3 = CONCAT71(uVar4, bVar5) ^ 1;
        }
        return uVar3 & 4294967295;
    }

    // 0x1006747d0, 144 bytes, placed by class name
    // StyleSheet::FindProperty(char const*, bool) const
    StyleSheet* StyleSheet::FindProperty(char* param_1, bool param_2) {
        bool bVar1;
        char cVar2;
        undefined8 uVar3;
        undefined7 in_register_00000011;
        StyleSheet* this_00;

        this_00 = (StyleSheet*)CONCAT71(in_register_00000011, param_2);
        bVar1 = (bool)stringtools::hash32((char*)this_00);
        FindPropertyImpl(this, (uint)param_1, bVar1);
        cVar2 = IsValid();
        if (cVar2 == '\0') {
            cVar2 = IsPropertyKnown(this_00, param_1);
            if (cVar2 == '\0') {
                uVar3 = logger::default_logger();
                logger::Logger::Log(uVar3, 0, 3,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/"
                                    "stylesheets/StyleSheet.cpp",
                                    109, "StyleSheet: Attempting to find unknown property \'%s\'", this_00);
            }
        }
        return this;
    }

    // 0x100674860, 208 bytes, placed by class name
    // StyleSheet::FindPropertyImpl(unsigned int, bool) const
    StyleSheet* StyleSheet::FindPropertyImpl(uint param_1, bool param_2) {
        char cVar1;
        uint uVar2;
        long lVar3;
        long lVar4;
        char in_CL;
        undefined7 in_register_00000011;
        undefined4 in_register_00000034;
        StyleSheet* this_00;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_48[20];
        uint local_34;

        this_00 = (StyleSheet*)CONCAT44(in_register_00000034, param_1);
        local_34 = (uint)CONCAT71(in_register_00000011, param_2);
        lVar3 = (&this_00->field_8, &local_34)->find();
        lVar4 = (&this_00->field_8)->end();
        if (lVar3 == lVar4) {
            if ((in_CL != '\0') && (cVar1 = HasParent(this_00), cVar1 != '\0')) {
                local_48->GetTarget();
                uVar2 = shared_ptr<StyleSheet>::operator->((shared_ptr<StyleSheet>*)local_48);
                FindPropertyImpl(this, uVar2, SUB41(local_34, 0));
                local_48->~shared_ptr();
                return this;
            }
            new (this) PropertyFindResult();
        } else {
            new (this) PropertyFindResult(this_00, (StyleSheetValue*)(lVar3 + 4));
        }
        return this;
    }

    // 0x100674930, 96 bytes, placed by class name
    // StyleSheet::IsPropertyKnown(char const*)
    bool StyleSheet::IsPropertyKnown(char* param_1) {
        vector* pvVar1;
        uint* puVar2;
        uint* puVar3;
        uint local_1c;

        local_1c = stringtools::hash32((char*)this);
        pvVar1 = STYLE_ENTRY_MAPPING.SSOBeginPtr(param_1);
        puVar2 = eastl::end<unsigned int const, 607ul>(&STYLE_ENTRY_MAPPING);
        puVar2 = eastl::find<unsigned int const*, unsigned int>((uint*)pvVar1, puVar2, &local_1c);
        puVar3 = eastl::end<unsigned int const, 607ul>(&STYLE_ENTRY_MAPPING);
        return puVar2 != puVar3;
    }

    // 0x100674990, 128 bytes, placed by class name
    // StyleSheet::FindProperty(StyleEntryID, bool) const
    StyleSheet* StyleSheet::FindProperty(uint param_2, int param_3) {
        undefined8 uVar1;

        if (param_3 < 607) {
            FindPropertyImpl(this, param_2, SUB41(*(undefined4*)(&STYLE_ENTRY_MAPPING + (long)param_3 * 4), 0));
        } else {
            uVar1 = logger::default_logger();
            logger::Logger::Log(
                uVar1, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/stylesheets/StyleSheet.cpp",
                121, "StyleSheet: Attempted to find unknown property %d", param_3);
            new (this) PropertyFindResult();
        }
        return this;
    }

} // namespace jag::ui
