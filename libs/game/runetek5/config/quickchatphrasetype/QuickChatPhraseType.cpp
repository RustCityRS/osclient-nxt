// libs/game/runetek5/config/quickchatphrasetype/QuickChatPhraseType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "QuickChatPhraseType.h"

namespace jag::game {
    // 0x1004f5e00, 64 bytes, placed by class name and debug map
    // QuickChatPhraseType::Decode(PacketT<Array<unsigned char, eastl::allocator> >&)
    void QuickChatPhraseType::Decode(PacketT* param_1) {
        byte bVar1;

        while (true) {
            bVar1 = param_1->g1();
            if (bVar1 == 0)
                break;
            DecodeType(this, param_1, (uint)bVar1);
        }
    }

    // 0x1004f5e40, 848 bytes, placed by class name and debug map
    // QuickChatPhraseType::DecodeType(PacketT<Array<unsigned char, eastl::allocator> >&, unsigned int)
    void QuickChatPhraseType::DecodeType(PacketT* param_1, uint param_2) {
        byte bVar1;
        ushort uVar2;
        char* pcVar3;
        undefined8 uVar4;
        long lVar5;
        uint* puVar6;
        ulong uVar7;
        vector<int, eastl::allocator>* this_00;
        ulong uVar8;
        undefined1 auVar9[16];
        basic_string local_78[24];
        basic_string local_60[24];
        vector<eastl::vector<int, eastl::allocator>, eastl::allocator>* local_48;
        PacketT* local_40;
        eastl local_38[8];

        switch (param_2) {
        case 1:
            eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
            PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
                eastl::basic_string<char, BucketAllocatorEASTL>>(
                (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1, local_78, false);
            tokenize<eastl::vector<eastl::basic_string<char, BucketAllocatorEASTL>, eastl::allocator>,
                     eastl::basic_string<char, BucketAllocatorEASTL>>((vector*)this, local_78, "<", -1);
            lVar5 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            if (lVar5 != 0) {
                lVar5 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                auVar9 = eastl::basic_string<char, BucketAllocatorEASTL>::operator[](
                    (basic_string<char, BucketAllocatorEASTL>*)local_78, lVar5 - 1);
                if (*auVar9._0_8_ == '<') {
                    eastl::destruct<oldscape::highlight::NpcUID*>(local_38, (NpcUID*)"EASTL basic_string",
                                                                  auVar9._8_8_);
                    eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_60,
                                                                                  (BucketAllocatorEASTL*)"");
                    push_back(local_60);
                    local_60->~basic_string();
                }
            }
            lVar5 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            if ((lVar5 != 0) && (pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::operator[](
                                     (basic_string<char, BucketAllocatorEASTL>*)local_78, 0),
                                 *pcVar3 == '<')) {
                auVar9 = HeapBeginPtr();
                eastl::destruct<oldscape::highlight::NpcUID*>(local_38, (NpcUID*)"EASTL basic_string", auVar9._8_8_);
                eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_60,
                                                                              (BucketAllocatorEASTL*)"");
                insert(auVar9._0_8_, local_60);
                local_60->~basic_string();
            }
            local_78->~basic_string();
            break;
        case 2:
            bVar1 = param_1->g1();
            eastl::vector<int, eastl::allocator>::resize((ulong)&field_96);
            if (bVar1 != 0) {
                uVar8 = 0;
                do {
                    uVar2 = param_1->g2();
                    puVar6 = (uint*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)&field_96, uVar8);
                    *puVar6 = (uint)uVar2;
                    uVar8 = uVar8 + 1;
                } while (bVar1 != uVar8);
            }
            break;
        case 3:
            bVar1 = param_1->g1();
            eastl::vector<int, eastl::allocator>::resize((ulong)&field_32);
            local_48 = (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)&field_64;
            eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::resize(local_48, (ulong)bVar1);
            if (bVar1 != 0) {
                uVar8 = 0;
                local_40 = param_1;
                do {
                    uVar2 = param_1->g2();
                    lVar5 = QuickChatDynamicCommand::GetByID((uint)uVar2);
                    if (lVar5 == 0) {
                        uVar4 = logger::default_logger();
                        logger::Logger::Log(uVar4, 0, 3,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "game/runetek5/config/quickchatphrasetype/QuickChatPhraseType.cpp",
                                            82, "QuickChatPhraseType: Unknown command in quick chat pack: %d",
                                            (uint)uVar2);
                        param_1 = local_40;
                    } else {
                        puVar6 = (uint*)eastl::vector<int, eastl::allocator>::operator[](
                            (vector<int, eastl::allocator>*)&field_32, uVar8);
                        *puVar6 = (uint)uVar2;
                        uVar7 = eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](
                            local_48, uVar8);
                        eastl::vector<int, eastl::allocator>::resize(uVar7);
                        param_1 = local_40;
                        if (0 < *(int*)(lVar5 + 20)) {
                            uVar7 = 0;
                            do {
                                uVar2 = param_1->g2();
                                this_00 = (vector<int, eastl::allocator>*)
                                    eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](
                                        local_48, uVar8);
                                puVar6 = (uint*)eastl::vector<int, eastl::allocator>::operator[](this_00, uVar7);
                                *puVar6 = (uint)uVar2;
                                uVar7 = uVar7 + 1;
                            } while ((long)uVar7 < (long)*(int*)(lVar5 + 20));
                        }
                    }
                    uVar8 = uVar8 + 1;
                } while (uVar8 != bVar1);
            }
            break;
        case 4:
            m_searchable = 0;
            break;
        default:
            uVar4 = logger::default_logger();
            logger::Logger::Log(uVar4, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/quickchatphrasetype/QuickChatPhraseType.cpp",
                                92, "Unrecognised .quickchatphrase config code: %u in quick chat phrase %d", param_2,
                                field_132);
        }
    }

    // 0x1004f6360, 80 bytes, placed by class name and debug map
    // QuickChatPhraseType::GetDynamicCommand(int) const
    undefined8 QuickChatPhraseType::GetDynamicCommand(int param_1) {
        char cVar1;
        int iVar2;
        int* piVar3;
        undefined1* this_00;

        this_00 = &field_32;
        cVar1 = this_00->empty();
        if ((cVar1 == '\0') && (iVar2 = this_00->size(), param_1 < iVar2)) {
            piVar3 = (int*)eastl::vector<int, eastl::allocator>::operator[]((vector<int, eastl::allocator>*)this_00,
                                                                            (long)param_1);
            return QuickChatDynamicCommand::GetByID(*piVar3);
        }
        return 0;
    }

    // 0x1004f63b0, 144 bytes, placed by class name and debug map
    // QuickChatPhraseType::GetDynamicCommandParameter(int, int) const
    undefined4 QuickChatPhraseType::GetDynamicCommandParameter(int param_1, int param_2) {
        char cVar1;
        int iVar2;
        vector<int, eastl::allocator>* this_00;
        undefined4* puVar3;
        undefined1* this_01;
        undefined4 uVar4;

        cVar1 = (&field_32)->empty();
        uVar4 = 4294967295;
        if (cVar1 == '\0') {
            iVar2 = (&field_32)->size();
            if (param_1 < iVar2) {
                this_01 = &field_64;
                cVar1 = this_01->empty();
                if (cVar1 == '\0') {
                    iVar2 = this_01->size();
                    if (param_2 < iVar2) {
                        this_00 = (vector<int, eastl::allocator>*)
                            eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](
                                (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)this_01,
                                (long)param_1);
                        puVar3 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](this_00, (long)param_2);
                        uVar4 = *puVar3;
                    }
                }
            }
        }
        return uVar4;
    }

    // 0x1004f6440, 80 bytes, placed by class name and debug map
    // QuickChatPhraseType::GetAutoResponseId(int) const
    undefined4 QuickChatPhraseType::GetAutoResponseId(int param_1) {
        char cVar1;
        int iVar2;
        undefined4* puVar3;
        undefined1* this_00;
        undefined4 uVar4;

        this_00 = &field_96;
        cVar1 = this_00->empty();
        uVar4 = 4294967295;
        if (cVar1 == '\0') {
            iVar2 = this_00->size();
            if (param_1 < iVar2) {
                puVar3 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](
                    (vector<int, eastl::allocator>*)this_00, (long)param_1);
                uVar4 = *puVar3;
            }
        }
        return uVar4;
    }

    // 0x1004f6490, 352 bytes, placed by class name and debug map
    // QuickChatPhraseType::GetText(PacketT<Array<unsigned char, BucketAllocatorEASTL> >&)
    QuickChatPhraseType* QuickChatPhraseType::GetText(PacketT* param_1) {
        QuickChatPhraseTypeList* pQVar1;
        QuickChatPhraseType* pQVar2;
        char cVar3;
        int iVar4;
        long lVar5;
        basic_string* pbVar6;
        int* piVar7;
        ulong uVar8;
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>* in_RDX;
        ulong uVar9;
        undefined1 local_70[32];
        PacketT* local_50;
        QuickChatPhraseType* local_48;
        vector<unsigned int, eastl::allocator>* local_40;

        local_70._24_8_ = in_RDX;
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
        local_40 = (vector<unsigned int, eastl::allocator>*)(param_1 + 32);
        cVar3 = local_40->empty();
        if (cVar3 == '\0') {
            lVar5 = eastl::vector<unsigned int, eastl::allocator>::size(local_40);
            if (lVar5 != 0) {
                local_50 = param_1 + 64;
                uVar9 = 0;
                local_48 = (QuickChatPhraseType*)param_1;
                do {
                    pQVar2 = local_48;
                    pbVar6 = (basic_string*)
                        eastl::vector<eastl::basic_string<char, BucketAllocatorEASTL>, eastl::allocator>::operator[](
                            (vector<eastl::basic_string<char, BucketAllocatorEASTL>, eastl::allocator>*)local_48,
                            uVar9);
                    eastl::basic_string<char, BucketAllocatorEASTL>::operator+=(
                        (basic_string<char, BucketAllocatorEASTL>*)(QuickChatPhraseType*)this, pbVar6);
                    pQVar1 = pQVar2->field_136;
                    iVar4 = GetDynamicCommand(pQVar2, (int)uVar9);
                    eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](
                        (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)local_50, uVar9);
                    piVar7 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)local_40, uVar9);
                    lVar5 = QuickChatDynamicCommand::GetByID(*piVar7);
                    local_70._24_8_->gX(*(int*)(lVar5 + 16));
                    QuickChatPhraseTypeList::GetDynamicText((QuickChatDynamicCommand*)local_70, (vector*)pQVar1, iVar4);
                    eastl::basic_string<char, BucketAllocatorEASTL>::operator+=(
                        (basic_string<char, BucketAllocatorEASTL>*)(QuickChatPhraseType*)this, (basic_string*)local_70);
                    local_70->~basic_string();
                    uVar9 = (ulong)((int)uVar9 + 1);
                    uVar8 = eastl::vector<unsigned int, eastl::allocator>::size(local_40);
                    param_1 = (PacketT*)local_48;
                } while (uVar9 < uVar8);
            }
        }
        lVar5 = param_1->size();
        pQVar2 = (QuickChatPhraseType*)this;
        pbVar6 =
            (basic_string*)eastl::vector<eastl::basic_string<char, BucketAllocatorEASTL>, eastl::allocator>::operator[](
                (vector<eastl::basic_string<char, BucketAllocatorEASTL>, eastl::allocator>*)param_1, lVar5 - 1);
        eastl::basic_string<char, BucketAllocatorEASTL>::operator+=((basic_string<char, BucketAllocatorEASTL>*)pQVar2,
                                                                    pbVar6);
        return pQVar2;
    }

    // 0x1004f6720, 336 bytes, placed by class name and debug map
    // QuickChatPhraseType::GetTextDisplay()
    QuickChatPhraseType* QuickChatPhraseType::GetTextDisplay() {
        bool bVar1;
        ulong uVar3;
        basic_string* pbVar4;
        NpcUID* extraout_RDX;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* in_RSI;
        ulong uVar5;
        undefined1 auVar6[16];
        eastl local_58[24];
        eastl local_38[8];

        if (eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
                in_RSI) == '\0') {
            eastl::vector<eastl::basic_string<char, BucketAllocatorEASTL>, eastl::allocator>::operator[](
                (vector<eastl::basic_string<char, BucketAllocatorEASTL>, eastl::allocator>*)in_RSI, 0);
            uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            eastl::vector<eastl::basic_string<char, BucketAllocatorEASTL>, eastl::allocator>::operator[](
                (vector<eastl::basic_string<char, BucketAllocatorEASTL>, eastl::allocator>*)in_RSI, 0);
            auVar6 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            eastl::destruct<oldscape::highlight::NpcUID*>(local_38, (NpcUID*)"EASTL basic_string", auVar6._8_8_);
            eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_58, uVar3, auVar6._0_8_);
            uVar3 = in_RSI->size();
            if (1 < uVar3) {
                uVar3 = 1;
                uVar5 = 2;
                do {
                    eastl::basic_string<char, BucketAllocatorEASTL>::operator+=(
                        (basic_string<char, BucketAllocatorEASTL>*)local_58, "...");
                    pbVar4 = (basic_string*)
                        eastl::vector<eastl::basic_string<char, BucketAllocatorEASTL>, eastl::allocator>::operator[](
                            (vector<eastl::basic_string<char, BucketAllocatorEASTL>, eastl::allocator>*)in_RSI, uVar3);
                    eastl::basic_string<char, BucketAllocatorEASTL>::operator+=(
                        (basic_string<char, BucketAllocatorEASTL>*)local_58, pbVar4);
                    uVar3 = in_RSI->size();
                    bVar1 = uVar5 < uVar3;
                    uVar3 = uVar5;
                    uVar5 = (ulong)((int)uVar5 + 1);
                } while (bVar1);
            }
            this = (QuickChatPhraseType*)this;
            new ((QuickChatPhraseType*)this) eastl::basic_string<char, BucketAllocatorEASTL>();
            local_58->~basic_string();
        } else {
            eastl::destruct<oldscape::highlight::NpcUID*>(local_58, (NpcUID*)"EASTL basic_string", extraout_RDX);
            eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)this, (BucketAllocatorEASTL*)"");
        }
        return this;
    }

    // 0x1004f6890, 160 bytes, placed by class name and debug map
    // QuickChatPhraseType::PackTransmitValues(PacketT<Array<unsigned char, BucketAllocatorEASTL> >&, eastl::vector<int, eastl::allocator> const&)
    void QuickChatPhraseType::PackTransmitValues(PacketT* param_1, vector* param_2) {
        undefined1* this_00;
        uint uVar1;
        long lVar2;
        ulong uVar3;
        int* piVar4;
        char cVar5;
        ulong uVar6;

        this_00 = &field_32;
        cVar5 = this_00->empty();
        if ((cVar5 == '\0') && (lVar2 = this_00->size(), lVar2 != 0)) {
            uVar6 = 0;
            do {
                uVar3 = param_2->size();
                if (uVar3 <= uVar6) {
                    return;
                }
                lVar2 = GetDynamicCommand(this, (int)uVar6);
                uVar1 = *(uint*)(lVar2 + 12);
                if (0 < (int)uVar1) {
                    piVar4 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)param_2, uVar6);
                    param_1->pX((long)*piVar4, uVar1);
                }
                uVar6 = (ulong)((int)uVar6 + 1);
                uVar3 = this_00->size();
            } while (uVar6 < uVar3);
        }
    }

} // namespace jag::game

namespace jag {
    // 0x1004f6190, 320 bytes, inline, placed by debug map only (low confidence)
    // int tokenize<eastl::vector<eastl::basic_string<char, BucketAllocatorEASTL>, eastl::allocator>, eastl::basic_string<char, BucketAllocatorEASTL> >(eastl::vector<eastl::basic_string<char, BucketAllocatorEASTL>, eastl::allocator>&, eastl::basic_string<char, BucketAllocatorEASTL> const&, char const*, int)
    int jag::tokenize<eastl::vector<eastl::basic_string<char, BucketAllocatorEASTL>, eastl::allocator>,
                      eastl::basic_string<char, BucketAllocatorEASTL>>(vector* param_1, basic_string* param_2,
                                                                       char* param_3, int param_4) {
        bool bVar1;
        int iVar2;
        size_t sVar3;
        char* pcVar4;
        char* pcVar5;
        basic_string<char, BucketAllocatorEASTL>* pbVar6;
        char* pcVar7;
        char* pcVar8;

        if (param_4 == -1) {
            sVar3 = _strlen(param_3);
            param_4 = (int)sVar3;
        }
        param_1->clear();
        param_1->reserve(4);
        pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
        pcVar8 = pcVar4;
        if (pcVar4 != pcVar5) {
            pcVar7 = pcVar4;
            do {
                pcVar4 = pcVar8;
                bVar1 = internal::find_token<char, char const*>(pcVar4, param_3, param_3 + param_4);
                if (bVar1) {
                    if (pcVar7 != pcVar4) {
                        pbVar6 = (basic_string<char, BucketAllocatorEASTL>*)param_1->push_back();
                        eastl::basic_string<char, BucketAllocatorEASTL>::assign(pbVar6, pcVar7, pcVar4);
                    }
                    if (pcVar4 == pcVar5) {
                    LAB_1004f6280:
                        pcVar8 = pcVar4;
                    } else {
                        do {
                            bVar1 = internal::find_token<char, char const*>(pcVar4, param_3, param_3 + param_4);
                            if (!bVar1)
                                goto LAB_1004f6280;
                            pcVar4 = pcVar4 + 1;
                            pcVar8 = pcVar4;
                        } while (pcVar4 != pcVar5);
                    }
                } else {
                    pcVar8 = pcVar4 + 1;
                    pcVar4 = pcVar7;
                }
                pcVar7 = pcVar4;
            } while (pcVar8 != pcVar5);
        }
        if (pcVar4 != pcVar8) {
            pbVar6 = (basic_string<char, BucketAllocatorEASTL>*)param_1->push_back();
            eastl::basic_string<char, BucketAllocatorEASTL>::assign(pbVar6, pcVar4, pcVar8);
        }
        iVar2 = param_1->size();
        return iVar2;
    }

} // namespace jag
