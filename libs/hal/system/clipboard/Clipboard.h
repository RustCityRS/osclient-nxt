// libs/hal/system/clipboard/Clipboard.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class Clipboard {
    public:
        bool SetText<eastl::string>(eastl::string const&);
        bool SetText<eastl::fixed_string<char, 512, true, eastl::allocator>>(
            eastl::fixed_string<char, 512, true, eastl::allocator> const&);
        Clipboard();
        ~Clipboard();
        GetText(eastl::string&);
        ulong SetText(char const*, int);

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x100060900, 64 bytes, inline, placed by class name and debug map
    // bool Clipboard::SetText<eastl::string >(eastl::string const&)
    /* bool Clipboard::SetText<eastl::basic_string<char, BucketAllocatorEASTL>
   >(eastl::basic_string<char, BucketAllocatorEASTL> const&) */

    bool Clipboard::SetText<eastl::basic_string<char, BucketAllocatorEASTL>>(basic_string* param_1) {
        undefined1 uVar1;
        int iVar2;

        iVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        uVar1 = SetText((char*)param_1, iVar2);
        return (bool)uVar1;
    }

    // 0x100690e80, 64 bytes, inline, placed by class name
    // bool Clipboard::SetText<eastl::fixed_string<char, 512, true, eastl::allocator> >(eastl::fixed_string<char, 512, true, eastl::allocator> const&)
    bool Clipboard::SetText<eastl::fixed_string<char, 512, true, eastl::allocator>>(fixed_string* param_1) {
        undefined1 uVar1;
        int iVar2;

        iVar2 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::begin();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        uVar1 = SetText((char*)param_1, iVar2);
        return (bool)uVar1;
    }

} // namespace jag
