// libs/hal/settings/file_based/SettingsDec_FileBased.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x100b17de0
    char const* ToText<32, true>(eastl::fixed_string<char, 32>& str, long long arg2, unsigned int arg3) {
        char local_48[40];

        auto pvVar1 = internal::itoa(local_48, 32, arg2, arg3);
        if (32 < 32) {
            _memcpy((void*)str[0], pvVar1, (unsigned long)(32 + 1));
            str.force_size((unsigned long)32);
        }
        return (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
    }

    // 0x100b180b0
    char const* ToText<32, true>(eastl::fixed_string<char, 32>& str, double arg2) {
        str.sprintf("%lf");
        char* pcVar1 = &str[0];
        int iVar2 = str.size();
        iVar2 = TrimNumericZeros(pcVar1, iVar2);
        str.force_size((long)iVar2);
        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        return pcVar1;
    }

    // 0x100b18360
    bool FromString<eastl::basic_string<char, BucketAllocatorEASTL>, long long>(
        const eastl::basic_string<char, BucketAllocatorEASTL>& str, long long& arg2, int arg3) {
        char* str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        return (bool)FromText(str_00, arg2, arg3);
    }

    // 0x100b18450
    bool FromString<eastl::basic_string<char, BucketAllocatorEASTL>, double>(
        const eastl::basic_string<char, BucketAllocatorEASTL>& str, double& arg2, int arg3) {
        char* str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        return (bool)FromText(str_00, arg2, arg3);
    }

} // namespace jag
