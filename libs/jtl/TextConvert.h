// libs/jtl/TextConvert.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag {
    // 0x10002d970
    bool FromString<eastl::fixed_string<char, 256>, int>(const eastl::fixed_string<char, 256>& str, int& arg2,
                                                         int arg3) {
        char* str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        return (bool)FromText(str_00, arg2, arg3);
    }

    // 0x10002dbe0
    char const* ToText<256, true>(eastl::fixed_string<char, 256>& str, int arg2, unsigned int arg3) {
        char local_48[40];

        auto pvVar1 = internal::itoa(local_48, 32, (long)arg2, arg3);
        if (32 < 256) {
            _memcpy((void*)str[0], pvVar1, (unsigned long)(32 + 1));
            str.force_size((unsigned long)32);
        }
        return (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
    }

    // 0x10002e630
    bool FromString<eastl::fixed_string<char, 256>, float>(const eastl::fixed_string<char, 256>& str, float& arg2,
                                                           int arg3) {
        char* str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        return (bool)FromText(str_00, arg2, arg3);
    }

    // 0x10002e880
    char const* ToText<256, true>(eastl::fixed_string<char, 256>& str, float arg2) {
        str.sprintf("%f", (double)arg2);
        char* pcVar1 = &str[0];
        int iVar2 = str.size();
        iVar2 = TrimNumericZeros(pcVar1, iVar2);
        str.force_size((long)iVar2);
        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        return pcVar1;
    }

} // namespace jag

namespace jag::oldscape::minimenu {
    // 0x10002ecd0
    MinimenuSubject::~MinimenuSubject() {
        field_56->~VisibleShadowCastingLightInfo();
    }

    // 0x10002ed10
    MinimenuComponent::~MinimenuComponent() {}

} // namespace jag::oldscape::minimenu

namespace jag::ui {
    // 0x10002ed10: ComponentDragConfig::~ComponentDragConfig() has the same machine code as oldscape::minimenu::MinimenuComponent::~MinimenuComponent()

} // namespace jag::ui

namespace jag::game {
    // 0x10002ed10: VisibleShadowCastingLightInfo::~VisibleShadowCastingLightInfo() has the same machine code as oldscape::minimenu::MinimenuComponent::~MinimenuComponent()

} // namespace jag::game
