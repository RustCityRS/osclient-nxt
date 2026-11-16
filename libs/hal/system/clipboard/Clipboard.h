// libs/hal/system/clipboard/Clipboard.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class Clipboard {
    public:
        bool SetText<eastl::string>(const eastl::string& str);
        bool SetText<eastl::fixed_string<char, 512>>(const eastl::fixed_string<char, 512>& str);
        Clipboard();
        ~Clipboard();
        uint64_t GetText(eastl::string& str);
        unsigned long SetText(const char* str, int arg2);

        uint8_t _unknown_0[1];
    };

    // 0x100060900
    bool Clipboard::SetText<eastl::string>(const eastl::string& str) {
        int arg2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        str.size();
        uint8_t uVar1 = SetText((char*)this, arg2);
        return (bool)uVar1;
    }

    // 0x100690e80
    bool Clipboard::SetText<eastl::fixed_string<char, 512>>(const eastl::fixed_string<char, 512>& str) {
        int arg2 = str.begin();
        str.size();
        uint8_t uVar1 = SetText((char*)this, arg2);
        return (bool)uVar1;
    }

} // namespace jag
