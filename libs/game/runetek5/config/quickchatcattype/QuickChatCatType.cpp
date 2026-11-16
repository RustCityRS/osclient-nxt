// libs/game/runetek5/config/quickchatcattype/QuickChatCatType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "QuickChatCatType.h"

namespace jag::game {
    // 0x1004f5570
    void QuickChatCatType::Decode(PacketT<Array<unsigned char>>& arg1) {
        uint8_t bVar1;

        while (true) {
            bVar1 = arg1.g1();
            if (bVar1 == 0)
                break;
            DecodeType(arg1, (unsigned int)bVar1);
        }
    }

    // 0x1004f55b0
    void QuickChatCatType::DecodeType(PacketT<Array<unsigned char>>& arg1, unsigned int arg2) {
        uint8_t bVar1;
        uint8_t uVar2;
        unsigned short uVar3;
        unsigned int* puVar4;
        unsigned long uVar5;

        switch (arg2) {
        case 1:
            arg1.gStringCP1252ToUTF8<eastl::string>(this, false);
            break;
        case 2:
            bVar1 = arg1.g1();
            field_32.resize((unsigned long)bVar1);
            if (bVar1 != 0) {
                uVar5 = 0;
                do {
                    uVar3 = arg1.g2();
                    uVar2 = arg1.g1s();
                    puVar4 = &field_32[uVar5];
                    *puVar4 = (unsigned int)uVar3;
                    *(uint8_t*)(puVar4 + 1) = uVar2;
                    uVar5 = uVar5 + 1;
                } while (bVar1 != uVar5);
            }
            break;
        case 3:
            bVar1 = arg1.g1();
            field_64.resize((unsigned long)bVar1);
            if (bVar1 != 0) {
                uVar5 = 0;
                do {
                    uVar3 = arg1.g2();
                    uVar2 = arg1.g1s();
                    puVar4 = &field_64[uVar5];
                    *puVar4 = (unsigned int)uVar3;
                    *(uint8_t*)(puVar4 + 1) = uVar2;
                    uVar5 = uVar5 + 1;
                } while (bVar1 != uVar5);
            }
            break;
        case 4:
            field_96 = 1;
            break;
        default:
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "quickchatcattype/QuickChatCatType.cpp",
                      66, "Unrecognised .quickchatphrase config code: %u in quickchatcattype: %d", (unsigned long)arg2,
                      (unsigned long)field_100);
        }
    }

    // 0x1004f57b0
    uint32_t QuickChatCatType::GetSubCategoryId(int arg1) {
        int iVar2;
        uint32_t* puVar3;

        uint8_t* this_00 = &field_32;
        bool cVar1 = this_00->empty();
        uint32_t uVar4 = 4294967295;
        if ((!cVar1) && (-1 < arg1)) {
            iVar2 = this_00->size();
            if (arg1 <= iVar2) {
                puVar3 = (uint32_t*)(*this_00)[(long)arg1];
                uVar4 = *puVar3;
            }
        }
        return uVar4;
    }

    // 0x1004f5810
    uint32_t QuickChatCatType::GetSubCategoryIdByCharacter(char arg1) {
        uint32_t* puVar2;
        uint32_t* puVar3;

        uint8_t* this_00 = &field_32;
        if (this_00->empty() == '\0') {
            puVar2 = (uint32_t*)this_00->HeapBeginPtr();
            puVar3 = (uint32_t*)this_00->end();
            for (; puVar2 != puVar3; puVar2 = puVar2 + 2) {
                if (*(char*)(puVar2 + 1) == arg1) {
                    return *puVar2;
                }
            }
        }
        return 4294967295;
    }

    // 0x1004f5880
    int QuickChatCatType::GetSubCategoryShortcut(int arg1) {
        int iVar2;
        long lVar3;

        uint8_t* this_00 = &field_32;
        bool cVar1 = this_00->empty();
        bool cVar4 = -1;
        if ((!cVar1) && (-1 < arg1)) {
            iVar2 = this_00->size();
            if (arg1 <= iVar2) {
                lVar3 = (*this_00)[(long)arg1];
                cVar4 = *(char*)(lVar3 + 4);
            }
        }
        return (int)cVar4;
    }

    // 0x1004f58e0
    uint32_t QuickChatCatType::GetPhraseId(int arg1) {
        int iVar2;
        uint32_t* puVar3;

        uint8_t* this_00 = &field_64;
        bool cVar1 = this_00->empty();
        uint32_t uVar4 = 4294967295;
        if ((!cVar1) && (-1 < arg1)) {
            iVar2 = this_00->size();
            if (arg1 <= iVar2) {
                puVar3 = (uint32_t*)(*this_00)[(long)arg1];
                uVar4 = *puVar3;
            }
        }
        return uVar4;
    }

    // 0x1004f5940
    uint32_t QuickChatCatType::GetPhraseIdByCharacter(char arg1) {
        uint32_t* puVar2;
        uint32_t* puVar3;

        uint8_t* this_00 = &field_64;
        if (this_00->empty() == '\0') {
            puVar2 = (uint32_t*)this_00->HeapBeginPtr();
            puVar3 = (uint32_t*)this_00->end();
            for (; puVar2 != puVar3; puVar2 = puVar2 + 2) {
                if (*(char*)(puVar2 + 1) == arg1) {
                    return *puVar2;
                }
            }
        }
        return 4294967295;
    }

    // 0x1004f59b0
    int QuickChatCatType::GetPhraseShortcut(int arg1) {
        int iVar2;
        long lVar3;

        uint8_t* this_00 = &field_64;
        bool cVar1 = this_00->empty();
        bool cVar4 = -1;
        if ((!cVar1) && (-1 < arg1)) {
            iVar2 = this_00->size();
            if (arg1 <= iVar2) {
                lVar3 = (*this_00)[(long)arg1];
                cVar4 = *(char*)(lVar3 + 4);
            }
        }
        return (int)cVar4;
    }

} // namespace jag::game
