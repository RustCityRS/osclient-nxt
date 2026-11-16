// libs/hal/render/utils/OGL/GLUtils.inl
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x100bcf6d0
    int tokenize<eastl::fixed_vector<eastl::fixed_string<char, 64>, 8ul>, eastl::fixed_string<char, 1024>>(
        eastl::fixed_vector<eastl::fixed_string<char, 64>, 8ul>& strs, const eastl::fixed_string<char, 1024>& str1,
        const char* str2, int arg4) {
        bool bVar1;
        size_t sVar3;
        ReturnValue* pRVar5;
        char* str1_01;

        if (arg4 == -1) {
            sVar3 = _strlen(str2);
            arg4 = (int)sVar3;
        }
        strs.clear();
        strs.reserve(4);
        char* str1_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        char* pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
        char* pcVar6 = str1_00;
        if (str1_00 != pcVar4) {
            str1_01 = str1_00;
            do {
                str1_00 = pcVar6;
                bVar1 = internal::find_token<char, char const*>(*str1_00, str2, str2 + arg4);
                if (bVar1) {
                    if (str1_01 != str1_00) {
                        pRVar5 = (ReturnValue*)eastl::fixed_vector<eastl::fixed_string<char, 64>, 8ul>::push_back();
                        *pRVar5 =
                            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::assign(
                                str1_01, str1_00);
                    }
                    if (str1_00 == pcVar4) {
                    LAB_100bcf7c0:
                        pcVar6 = str1_00;
                    } else {
                        do {
                            bVar1 = internal::find_token<char, char const*>(*str1_00, str2, str2 + arg4);
                            if (!bVar1)
                                goto LAB_100bcf7c0;
                            str1_00 = str1_00 + 1;
                            pcVar6 = str1_00;
                        } while (str1_00 != pcVar4);
                    }
                } else {
                    pcVar6 = str1_00 + 1;
                    str1_00 = str1_01;
                }
                str1_01 = str1_00;
            } while (pcVar6 != pcVar4);
        }
        if (str1_00 != pcVar6) {
            pRVar5 = (ReturnValue*)eastl::fixed_vector<eastl::fixed_string<char, 64>, 8ul>::push_back();
            *pRVar5 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::assign(
                str1_00, pcVar6);
        }
        return strs.size();
    }

} // namespace jag
