// libs/graphics/runetek7/effects/EffectList.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "EffectList.h"

namespace jag::graphics {
    // 0x100009ca0: EffectList::GetEnabledEffects() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x100058100: EffectList::EffectList(eastl::bitset<121ul, unsigned long long> const&) has the same machine code as eastl::compressed_pair<eastl::ListNodeBase, BucketAllocatorEASTL>::compressed_pair(eastl::ListNodeBase const&, BucketAllocatorEASTL const&)

    // 0x100058110: EffectList::EffectList(eastl::bitset<121ul, unsigned long long> const&) has the same machine code as eastl::compressed_pair_imp<eastl::ListNodeBase, BucketAllocatorEASTL, 2>::compressed_pair_imp(eastl::ListNodeBase const&, BucketAllocatorEASTL const&)

    // 0x10092a820
    unsigned long EffectList::Contains(const EffectList& effectList) const {
        bool cVar1;
        unsigned long uVar3;
        unsigned int uVar4;
        unsigned long arg1;

        bool bVar5 = size() != 0;
        if (bVar5) {
            uVar4 = 1;
            arg1 = 0;
            do {
                cVar1 = effectList.test(arg1);
                if (cVar1) {
                    cVar1 = test(arg1);
                    if (!cVar1)
                        break;
                }
                arg1 = (unsigned long)uVar4;
                uVar3 = size();
                uVar4 = uVar4 + 1;
                bVar5 = arg1 < uVar3;
            } while (arg1 < uVar3);
        }
        return ~bVar5 & 4294967041;
    }

    // 0x10092a8b0
    unsigned long EffectList::GetEffectListHash() const {
        unsigned long uVar2;
        unsigned long arg1;
        unsigned long long local_38;

        return local_30 = 0;
        if (size() != 0) {
            arg1 = 0;
            do {
                local_38 = DoGetWord(arg1);
                hash_combine<unsigned long>(&local_30, &local_38);
                arg1 = arg1 + 64;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        return local_30;
    }

    // 0x10092a950
    void EffectList::AppendAsStringDefines(
        std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>& basic_stringstream) const {
        bool bVar1;
        unsigned long uVar4;
        basic_ostream<char, std::char_traits<char> _>* pbVar5;
        basic_ostream<char, std::char_traits<char> _>* basic_ostream;
        unsigned long uVar6;

        basic_ostream = (basic_ostream<char, std::char_traits<char> _>*)(basic_stringstream + 16);
        std::operator<<(basic_ostream,
                        "\n/***************************************************/\n/***************** Effect Defines "
                        "******************/\n/***************************************************/\n");
        if (size() != 0) {
            uVar4 = 0;
            uVar6 = 1;
            do {
                if (test(uVar4) != '\0') {
                    pbVar5 = std::operator<<(basic_ostream, "#define ");
                    pbVar5 = std::operator<<(pbVar5, (&EffectTypeStrings)[uVar4]);
                    std::operator<<(pbVar5, "\n");
                }
                uVar4 = size();
                bVar1 = uVar6 < uVar4;
                uVar4 = uVar6;
                uVar6 = (unsigned long)((int)uVar6 + 1);
            } while (bVar1);
        }
        std::operator<<(basic_ostream, "\n/*************************************************/\n\n");
    }

} // namespace jag::graphics

namespace jag {
    // 0x10092a920
    void hash_combine<unsigned long long>(unsigned long& arg1, const unsigned long long& arg2) {
        unsigned long uVar1 = arg1;
        arg1 = (uVar1 >> 2) + uVar1 * 64 + arg2 + 2654435769 ^ uVar1;
    }

} // namespace jag
