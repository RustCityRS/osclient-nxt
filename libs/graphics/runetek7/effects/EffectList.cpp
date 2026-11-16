// libs/graphics/runetek7/effects/EffectList.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "EffectList.h"

namespace jag::graphics {
    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    EffectList::GetEnabledEffects() const;

    // 0x100058100: the linker folded this into eastl::compressed_pair<eastl::ListNodeBase, BucketAllocatorEASTL>::compressed_pair(eastl::ListNodeBase const&, BucketAllocatorEASTL const&), which has identical code
    EffectList::EffectList(eastl::bitset<121ul, unsigned long long> const&);

    // 0x100058110: the linker folded this into eastl::compressed_pair_imp<eastl::ListNodeBase, BucketAllocatorEASTL, 2>::compressed_pair_imp(eastl::ListNodeBase const&, BucketAllocatorEASTL const&), which has identical code
    EffectList::EffectList(eastl::bitset<121ul, unsigned long long> const&);

    // 0x10092a820, 128 bytes, placed by class name and debug map
    // EffectList::Contains(EffectList const&) const
    ulong EffectList::Contains(EffectList* param_1) {
        char cVar1;
        ulong uVar3;
        uint uVar4;
        undefined8 unaff_R12;
        ulong uVar5;
        bool bVar6;

        bVar6 = eastl::bitset<121ul, unsigned long long>::size() != 0;
        if (bVar6) {
            uVar4 = 1;
            uVar5 = 0;
            do {
                cVar1 = param_1->test(uVar5);
                if (cVar1 != '\0') {
                    cVar1 = test(uVar5);
                    if (cVar1 == '\0')
                        break;
                }
                uVar5 = (ulong)uVar4;
                uVar3 = eastl::bitset<121ul, unsigned long long>::size();
                uVar4 = uVar4 + 1;
                bVar6 = uVar5 < uVar3;
            } while (uVar5 < uVar3);
        }
        return CONCAT71((int7)((ulong)unaff_R12 >> 8), ~bVar6) & 4294967041;
    }

    // 0x10092a8b0, 112 bytes, placed by class name and debug map
    // EffectList::GetEffectListHash() const
    ulong EffectList::GetEffectListHash() {
        ulong uVar2;
        ulong uVar3;
        ulong local_38;
        ulong local_30;

        local_30 = 0;
        if (eastl::bitset<121ul, unsigned long long>::size() != 0) {
            uVar3 = 0;
            do {
                local_38 = DoGetWord(uVar3);
                hash_combine<unsigned long>(&local_30, &local_38);
                uVar3 = uVar3 + 64;
                uVar2 = eastl::bitset<121ul, unsigned long long>::size();
            } while (uVar3 < uVar2);
        }
        return local_30;
    }

    // 0x10092a950, 192 bytes, placed by class name and debug map
    // EffectList::AppendAsStringDefines(std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char> >&) const
    /* EffectList::AppendAsStringDefines(std::basic_stringstream<char,
   std::char_traits<char>, BucketAllocatorSTL<char> >&) const */

    void EffectList::AppendAsStringDefines(basic_stringstream* param_1) {
        bool bVar1;
        char cVar2;
        ulong uVar4;
        ostream* poVar5;
        ostream* poVar6;
        ulong uVar7;

        poVar6 = (ostream*)(param_1 + 16);
        std::operator<<(poVar6, "\n/***************************************************/\n/***************** Effect "
                                "Defines ******************/\n/***************************************************/\n");
        if (eastl::bitset<121ul, unsigned long long>::size() != 0) {
            uVar4 = 0;
            uVar7 = 1;
            do {
                cVar2 = test(uVar4);
                if (cVar2 != '\0') {
                    poVar5 = std::operator<<(poVar6, "#define ");
                    poVar5 = std::operator<<(poVar5, (&EffectTypeStrings)[uVar4]);
                    std::operator<<(poVar5, "\n");
                }
                uVar4 = eastl::bitset<121ul, unsigned long long>::size();
                bVar1 = uVar7 < uVar4;
                uVar4 = uVar7;
                uVar7 = (ulong)((int)uVar7 + 1);
            } while (bVar1);
        }
        std::operator<<(poVar6, "\n/*************************************************/\n\n");
    }

} // namespace jag::graphics

namespace jag {
    // 0x10092a920, 48 bytes, inline, placed by debug map only (low confidence)
    // void hash_combine<unsigned long long>(unsigned long&, unsigned long long const&)
    /* void hash_combine<unsigned long>(unsigned long&, unsigned long const&) */

    void hash_combine<unsigned long>(ulong* param_1, ulong* param_2) {
        ulong uVar1;

        uVar1 = *param_1;
        *param_1 = (uVar1 >> 2) + uVar1 * 64 + *param_2 + 2654435769 ^ uVar1;
    }

} // namespace jag
