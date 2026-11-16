// libs/hal/settings/file_based/SettingsDec_FileBased.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    // 0x100b17de0, 144 bytes, inline, placed by debug map only (low confidence)
    // char const* ToText<32, true>(eastl::fixed_string<char, 32, true, eastl::allocator>&, long long, unsigned int)
    char* ToText<32, true>(fixed_string* param_1, longlong param_2, uint param_3) {
        void* pvVar1;
        void* pvVar2;
        char* pcVar3;
        uint local_4c;
        char local_48[40];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_4c = 32;
        pvVar1 = (void*)internal::itoa(local_48, &local_4c, param_2, param_3);
        if (local_4c < 32) {
            pvVar2 = (void*)
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 32ul, 1ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (basic_string<char, eastl::fixed_vector_allocator<1ul, 32ul, 1ul, 0ul, true, eastl::allocator>>*)
                        param_1,
                    0);
            _memcpy(pvVar2, pvVar1, (ulong)(local_4c + 1));
            param_1->force_size((ulong)local_4c);
        }
        pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return pcVar3;
    }

    // 0x100b180b0, 80 bytes, inline, placed by debug map only (low confidence)
    // char const* ToText<32, true>(eastl::fixed_string<char, 32, true, eastl::allocator>&, double)
    char* ToText<32, true>(fixed_string* param_1, double param_2) {
        char* pcVar1;
        int iVar2;

        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 32ul, 1ul, 0ul, true, eastl::allocator>>::sprintf(
            (char*)param_1);
        pcVar1 = (char*)eastl::
            basic_string<char, eastl::fixed_vector_allocator<1ul, 32ul, 1ul, 0ul, true, eastl::allocator>>::operator[](
                (basic_string<char, eastl::fixed_vector_allocator<1ul, 32ul, 1ul, 0ul, true, eastl::allocator>>*)
                    param_1,
                0);
        iVar2 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        iVar2 = TrimNumericZeros(pcVar1, iVar2);
        param_1->force_size((long)iVar2);
        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        return pcVar1;
    }

    // 0x100b18360, 48 bytes, inline, placed by debug map only (low confidence)
    // bool FromString<eastl::basic_string<char, BucketAllocatorEASTL>, long long>(eastl::basic_string<char, BucketAllocatorEASTL> const&, long long&, int)
    bool FromString<eastl::basic_string<char, BucketAllocatorEASTL>, long long>(basic_string* param_1,
                                                                                longlong* param_2, int param_3) {
        char* pcVar1;

        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        return (bool)FromText(pcVar1, param_2, param_3);
    }

    // 0x100b18450, 48 bytes, inline, placed by debug map only (low confidence)
    // bool FromString<eastl::basic_string<char, BucketAllocatorEASTL>, double>(eastl::basic_string<char, BucketAllocatorEASTL> const&, double&, int)
    bool FromString<eastl::basic_string<char, BucketAllocatorEASTL>, double>(basic_string* param_1, double* param_2,
                                                                             int param_3) {
        char* pcVar1;

        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        return (bool)FromText(pcVar1, param_2, param_3);
    }

} // namespace jag
