// libs/game/runetek5/scene/entities/EntityChatLine.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class EntityChatLine {
    public:
        GetTimeOut() const;
        ~EntityChatLine();
        EntityChatLine();
        bool IsInit();
        EntityChatLine(eastl::basic_string<char, BucketAllocatorEASTL> const&, ChatColour, ChatEffect,
                       unsigned long long);
        void Init(eastl::basic_string<char, BucketAllocatorEASTL> const&, ChatColour, ChatEffect, unsigned long long);
        void Destroy();
        void MainDraw(graphics::RT7Core&, graphics::FontHelpers&, EmojiRegistry*, int, int, int, graphics::Font&, bool,
                      unsigned int);
        char const* GetText<eastl::fixed_string<char, 512, true, eastl::allocator>>(
            eastl::fixed_string<char, 512, true, eastl::allocator>&, EmojiRegistry*) const;

        // data members, from how the methods use this: 60 bytes
        char _unknown_0[24];
        int field_24;        // offset 24
        undefined4 field_28; // offset 28
        undefined8 field_32; // offset 32
        long field_40;       // offset 40
        int field_48;        // offset 48
        uint field_52;       // offset 52
        char _unknown_56[4];
    };

    // 0x1003f0670, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // EntityChatLine::EntityChatLine(): jumps straight to the base-object constructor

    // 0x1003feab0, 48 bytes, base-object constructor, inline, placed by class name
    // EntityChatLine::EntityChatLine()
    void EntityChatLine::EntityChatLine() {
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
        field_32 = 0;
        field_40 = 0;
        field_48 = 0;
        field_52 = 0;
    }

    // 0x10041a160, 32 bytes, inline, placed by class name
    // EntityChatLine::IsInit()
    bool EntityChatLine::IsInit() {
        if (field_32 == 0) {
            return field_40 != 0;
        }
        return true;
    }

    // 0x10044b490, 80 bytes, inline, placed by class name
    // char const* EntityChatLine::GetText<eastl::fixed_string<char, 512, true, eastl::allocator> >(eastl::fixed_string<char, 512, true, eastl::allocator>&, EmojiRegistry*) const
    char* EntityChatLine::GetText<eastl::fixed_string<char, 512, true, eastl::allocator>>(fixed_string* param_1,
                                                                                          EmojiRegistry* param_2) {
        char cVar1;
        char* pcVar2;

        if ((param_2 == (EmojiRegistry*)0) || (cVar1 = param_2->GetUseTerrainHeight(), cVar1 == '\0')) {
            pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            return pcVar2;
        }
        EmojiRegistry::Substitute<eastl::fixed_string<char, 512, true, eastl::allocator>,
                                  eastl::basic_string<char, BucketAllocatorEASTL>>(param_2, param_1,
                                                                                   (basic_string*)this);
        pcVar2 = (char*)eastl::basic_string<
            char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::begin();
        return pcVar2;
    }

} // namespace jag
