// libs/game/runetek5/scene/entities/EntityChatLine.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class EntityChatLine {
    public:
        void GetTimeOut() const;
        ~EntityChatLine();
        EntityChatLine();
        bool IsInit();
        EntityChatLine(const eastl::string& str, ChatColour chatColour, ChatEffect chatEffect, unsigned long long arg4);
        void Init(const eastl::string& str, ChatColour chatColour, ChatEffect chatEffect, unsigned long long arg4);
        void Destroy();
        void MainDraw(graphics::RT7Core& rt7Core, graphics::FontHelpers& fontHelpers, EmojiRegistry* emojiRegistry,
                      int arg4, int arg5, int arg6, graphics::Font& font, bool arg8, unsigned int arg9);
        char const* GetText<eastl::fixed_string<char, 512>>(eastl::fixed_string<char, 512>& str,
                                                            EmojiRegistry* emojiRegistry) const;

    private:
        uint8_t _unknown_0[24];
        ChatColour field_24;
        ChatEffect field_28;
        unsigned long long field_32;
        long field_40;
        int field_48;
        unsigned int field_52;
        uint8_t _unknown_56[4];
    };

    // 0x1003feab0
    EntityChatLine::EntityChatLine()
        : eastl::basic_string<char, BucketAllocatorEASTL>(), field_32(0), field_40(0), field_48(0), field_52(0) {}

    // 0x10041a160
    bool EntityChatLine::IsInit() {
        if (field_32 == 0) {
            return field_40 != 0;
        }
        return true;
    }

    // 0x10044b490
    char const* EntityChatLine::GetText<eastl::fixed_string<char, 512>>(eastl::fixed_string<char, 512>& str,
                                                                        EmojiRegistry* emojiRegistry) const {
        bool cVar1;
        char* pcVar2;

        if ((emojiRegistry == nullptr) || (cVar1 = emojiRegistry->GetUseTerrainHeight(), !cVar1)) {
            pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            return pcVar2;
        }
        emojiRegistry->Substitute<eastl::fixed_string<char, 512>, eastl::basic_string<char, BucketAllocatorEASTL>>(
            str, *this);
        pcVar2 = (char*)str.begin();
        return pcVar2;
    }

} // namespace jag
