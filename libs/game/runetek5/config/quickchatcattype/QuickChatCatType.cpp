// libs/game/runetek5/config/quickchatcattype/QuickChatCatType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "QuickChatCatType.h"

namespace jag::game {
    // 0x1004f5570, 64 bytes, placed by class name and debug map
    // QuickChatCatType::Decode(PacketT<Array<unsigned char, eastl::allocator> >&)
    void QuickChatCatType::Decode(PacketT* param_1) {
        byte bVar1;

        while (true) {
            bVar1 = param_1->g1();
            if (bVar1 == 0)
                break;
            DecodeType(this, param_1, (uint)bVar1);
        }
    }

    // 0x1004f55b0, 368 bytes, placed by class name and debug map
    // QuickChatCatType::DecodeType(PacketT<Array<unsigned char, eastl::allocator> >&, unsigned int)
    void QuickChatCatType::DecodeType(PacketT* param_1, uint param_2) {
        byte bVar1;
        undefined1 uVar2;
        ushort uVar3;
        undefined8 uVar4;
        uint* puVar5;
        ulong uVar6;

        switch (param_2) {
        case 1:
            PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<eastl::string>(
                (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1, (basic_string*)this,
                false);
            break;
        case 2:
            bVar1 = param_1->g1();
            eastl::vector<QuickChatCatType::Shortcut, eastl::allocator>::resize((ulong)&field_32);
            if (bVar1 != 0) {
                uVar6 = 0;
                do {
                    uVar3 = param_1->g2();
                    uVar2 = param_1->g1s();
                    puVar5 = (uint*)eastl::vector<QuickChatCatType::Shortcut, eastl::allocator>::operator[](
                        (vector<QuickChatCatType::Shortcut, eastl::allocator>*)&field_32, uVar6);
                    *puVar5 = (uint)uVar3;
                    *(undefined1*)(puVar5 + 1) = uVar2;
                    uVar6 = uVar6 + 1;
                } while (bVar1 != uVar6);
            }
            break;
        case 3:
            bVar1 = param_1->g1();
            eastl::vector<QuickChatCatType::Shortcut, eastl::allocator>::resize((ulong)&field_64);
            if (bVar1 != 0) {
                uVar6 = 0;
                do {
                    uVar3 = param_1->g2();
                    uVar2 = param_1->g1s();
                    puVar5 = (uint*)eastl::vector<QuickChatCatType::Shortcut, eastl::allocator>::operator[](
                        (vector<QuickChatCatType::Shortcut, eastl::allocator>*)&field_64, uVar6);
                    *puVar5 = (uint)uVar3;
                    *(undefined1*)(puVar5 + 1) = uVar2;
                    uVar6 = uVar6 + 1;
                } while (bVar1 != uVar6);
            }
            break;
        case 4:
            field_96 = 1;
            break;
        default:
            uVar4 = logger::default_logger();
            logger::Logger::Log(uVar4, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/quickchatcattype/QuickChatCatType.cpp",
                                66, "Unrecognised .quickchatphrase config code: %u in quickchatcattype: %d", param_2,
                                field_100);
        }
    }

    // 0x1004f57b0, 96 bytes, placed by class name and debug map
    // QuickChatCatType::GetSubCategoryId(int)
    undefined4 QuickChatCatType::GetSubCategoryId(int param_1) {
        char cVar1;
        int iVar2;
        undefined4* puVar3;
        undefined1* this_00;
        undefined4 uVar4;

        this_00 = &field_32;
        cVar1 = this_00->empty();
        uVar4 = 4294967295;
        if ((cVar1 == '\0') && (-1 < param_1)) {
            iVar2 = this_00->size();
            if (param_1 <= iVar2) {
                puVar3 = (undefined4*)eastl::vector<QuickChatCatType::Shortcut, eastl::allocator>::operator[](
                    (vector<QuickChatCatType::Shortcut, eastl::allocator>*)this_00, (long)param_1);
                uVar4 = *puVar3;
            }
        }
        return uVar4;
    }

    // 0x1004f5810, 112 bytes, placed by class name and debug map
    // QuickChatCatType::GetSubCategoryIdByCharacter(char)
    undefined4 QuickChatCatType::GetSubCategoryIdByCharacter(char param_1) {
        char cVar1;
        undefined4* puVar2;
        undefined4* puVar3;
        undefined1* this_00;

        this_00 = &field_32;
        cVar1 = this_00->empty();
        if (cVar1 == '\0') {
            puVar2 = (undefined4*)this_00->HeapBeginPtr();
            puVar3 = (undefined4*)this_00->end();
            for (; puVar2 != puVar3; puVar2 = puVar2 + 2) {
                if (*(char*)(puVar2 + 1) == param_1) {
                    return *puVar2;
                }
            }
        }
        return 4294967295;
    }

    // 0x1004f5880, 96 bytes, placed by class name and debug map
    // QuickChatCatType::GetSubCategoryShortcut(int)
    int QuickChatCatType::GetSubCategoryShortcut(int param_1) {
        char cVar1;
        int iVar2;
        long lVar3;
        undefined1* this_00;
        char cVar4;

        this_00 = &field_32;
        cVar1 = this_00->empty();
        cVar4 = -1;
        if ((cVar1 == '\0') && (-1 < param_1)) {
            iVar2 = this_00->size();
            if (param_1 <= iVar2) {
                lVar3 = eastl::vector<QuickChatCatType::Shortcut, eastl::allocator>::operator[](
                    (vector<QuickChatCatType::Shortcut, eastl::allocator>*)this_00, (long)param_1);
                cVar4 = *(char*)(lVar3 + 4);
            }
        }
        return (int)cVar4;
    }

    // 0x1004f58e0, 96 bytes, placed by class name and debug map
    // QuickChatCatType::GetPhraseId(int)
    undefined4 QuickChatCatType::GetPhraseId(int param_1) {
        char cVar1;
        int iVar2;
        undefined4* puVar3;
        undefined1* this_00;
        undefined4 uVar4;

        this_00 = &field_64;
        cVar1 = this_00->empty();
        uVar4 = 4294967295;
        if ((cVar1 == '\0') && (-1 < param_1)) {
            iVar2 = this_00->size();
            if (param_1 <= iVar2) {
                puVar3 = (undefined4*)eastl::vector<QuickChatCatType::Shortcut, eastl::allocator>::operator[](
                    (vector<QuickChatCatType::Shortcut, eastl::allocator>*)this_00, (long)param_1);
                uVar4 = *puVar3;
            }
        }
        return uVar4;
    }

    // 0x1004f5940, 112 bytes, placed by class name and debug map
    // QuickChatCatType::GetPhraseIdByCharacter(char)
    undefined4 QuickChatCatType::GetPhraseIdByCharacter(char param_1) {
        char cVar1;
        undefined4* puVar2;
        undefined4* puVar3;
        undefined1* this_00;

        this_00 = &field_64;
        cVar1 = this_00->empty();
        if (cVar1 == '\0') {
            puVar2 = (undefined4*)this_00->HeapBeginPtr();
            puVar3 = (undefined4*)this_00->end();
            for (; puVar2 != puVar3; puVar2 = puVar2 + 2) {
                if (*(char*)(puVar2 + 1) == param_1) {
                    return *puVar2;
                }
            }
        }
        return 4294967295;
    }

    // 0x1004f59b0, 96 bytes, placed by class name and debug map
    // QuickChatCatType::GetPhraseShortcut(int)
    int QuickChatCatType::GetPhraseShortcut(int param_1) {
        char cVar1;
        int iVar2;
        long lVar3;
        undefined1* this_00;
        char cVar4;

        this_00 = &field_64;
        cVar1 = this_00->empty();
        cVar4 = -1;
        if ((cVar1 == '\0') && (-1 < param_1)) {
            iVar2 = this_00->size();
            if (param_1 <= iVar2) {
                lVar3 = eastl::vector<QuickChatCatType::Shortcut, eastl::allocator>::operator[](
                    (vector<QuickChatCatType::Shortcut, eastl::allocator>*)this_00, (long)param_1);
                cVar4 = *(char*)(lVar3 + 4);
            }
        }
        return (int)cVar4;
    }

} // namespace jag::game
