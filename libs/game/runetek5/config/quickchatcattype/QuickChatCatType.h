// libs/game/runetek5/config/quickchatcattype/QuickChatCatType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class QuickChatCatType {
    public:
        void Decode(PacketT<Array<unsigned char, eastl::allocator>>&);
        void DecodeType(PacketT<Array<unsigned char, eastl::allocator>>&, unsigned int);
        GetSubCategoryId(int);
        GetSubCategoryIdByCharacter(char);
        int GetSubCategoryShortcut(int);
        GetPhraseId(int);
        GetPhraseIdByCharacter(char);
        int GetPhraseShortcut(int);
        QuickChatCatType(int);
        ~QuickChatCatType();

        // data members, from how the methods use this: 108 bytes
        char _unknown_0[32];
        undefined1 field_32; // offset 32
        char _unknown_33[31];
        undefined1 field_64; // offset 64
        char _unknown_65[31];
        undefined1 field_96; // offset 96
        char _unknown_97[3];
        int field_100; // offset 100
        char _unknown_104[4];
    };

    // 0x1004fedf0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // QuickChatCatType::QuickChatCatType(int): jumps straight to the base-object constructor

    // 0x1004fee00, 112 bytes, base-object constructor, inline, placed by class name and debug map
    // QuickChatCatType::QuickChatCatType(int)
    void QuickChatCatType::QuickChatCatType(int param_1) {
        new (this) MakeSharedPool<QuickChatCatType, 0>();
        new (this) eastl::string();
        new (&field_32) eastl::vector<QuickChatCatType::Shortcut, eastl::allocator>();
        new (&field_64) eastl::vector<QuickChatCatType::Shortcut, eastl::allocator>();
        field_96 = 0;
        field_100 = param_1;
    }

    // 0x1004fff20, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // QuickChatCatType::~QuickChatCatType(): jumps straight to the base-object destructor

    // 0x1004fff30, 48 bytes, base-object destructor, inline, placed by class name and debug map
    // QuickChatCatType::~QuickChatCatType()
    void QuickChatCatType::~QuickChatCatType() {
        (&field_64)->~vector();
        (&field_32)->~vector();
        ~basic_string();
    }

} // namespace jag::game

namespace jag {
    // 0x1005001b0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::QuickChatCatType>::ref_counter_shared(unsigned long, game::QuickChatCatType*): jumps straight to the base-object constructor

    // 0x1005001c0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::QuickChatCatType>::ref_counter_shared(unsigned long, game::QuickChatCatType*)
    void ref_counter_shared<game::QuickChatCatType>::ref_counter_shared(ulong param_1, QuickChatCatType* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7330 + 16;
        *(ulong*)(this + 16) = param_1;
        *(QuickChatCatType**)(this + 24) = param_2;
    }

    // 0x100500200, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::QuickChatCatType>::DeleteData()
    void ref_counter_shared<game::QuickChatCatType>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~QuickChatCatType();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 104;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

} // namespace jag
