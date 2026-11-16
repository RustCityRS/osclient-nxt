// libs/game/runetek5/config/quickchatcattype/QuickChatCatType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class QuickChatCatType {
    public:
        void Decode(PacketT<Array<unsigned char>>& arg1);
        void DecodeType(PacketT<Array<unsigned char>>& arg1, unsigned int arg2);
        uint32_t GetSubCategoryId(int arg1);
        uint32_t GetSubCategoryIdByCharacter(char arg1);
        int GetSubCategoryShortcut(int arg1);
        uint32_t GetPhraseId(int arg1);
        uint32_t GetPhraseIdByCharacter(char arg1);
        int GetPhraseShortcut(int arg1);
        QuickChatCatType(int arg1);
        ~QuickChatCatType();

    private:
        uint8_t _unknown_0[96];
        uint8_t field_96;
        uint8_t _unknown_97[3];
        unsigned int field_100;
        uint8_t _unknown_104[4];
    };

    // 0x1004fee00
    QuickChatCatType::QuickChatCatType(int arg1)
        : MakeSharedPool<QuickChatCatType, 0>(), eastl::string(), field_96(0), field_100(arg1) {}

    // 0x1004fff30
    QuickChatCatType::~QuickChatCatType() {
        field_64.~vector();
        field_32.~vector();
    }

} // namespace jag::game

namespace jag {
    // 0x1005001c0
    ref_counter_shared<game::QuickChatCatType>::ref_counter_shared(unsigned long arg1,
                                                                   game::QuickChatCatType* quickChatCatType)
        : ref_counter_base() {}

    // 0x100500200
    void ref_counter_shared<game::QuickChatCatType>::DeleteData() {
        ref_counter_shared<game::QuickChatCatType> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((QuickChatCatType*)((long)&(this[3]._vptr)->_dtor + lVar2))->~QuickChatCatType();
                    prVar1 = (ref_counter_shared<game::QuickChatCatType> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 104;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

} // namespace jag
