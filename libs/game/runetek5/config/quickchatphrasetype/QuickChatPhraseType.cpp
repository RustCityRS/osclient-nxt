// libs/game/runetek5/config/quickchatphrasetype/QuickChatPhraseType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "QuickChatPhraseType.h"

namespace jag::game {
    // 0x1004f5e00
    void QuickChatPhraseType::Decode(PacketT<Array<unsigned char>>& arg1) {
        uint8_t bVar1;

        while (true) {
            bVar1 = arg1.g1();
            if (bVar1 == 0)
                break;
            DecodeType(arg1, (unsigned int)bVar1);
        }
    }

    // 0x1004f5e40
    void QuickChatPhraseType::DecodeType(PacketT<Array<unsigned char>>& arg1, unsigned int arg2) {
        uint8_t bVar1;
        unsigned short uVar2;
        char* pcVar3;
        basic_string<char, BucketAllocatorEASTL>* str1;
        Logger* pLVar4;
        long lVar5;
        unsigned int* puVar6;
        vector<int>* pvVar7;
        unsigned long arg1_00;
        int arg1_01;
        unsigned long uVar8;
        unsigned long arg1_02;
        unsigned long arg1_03;
        basic_string<char, BucketAllocatorEASTL> local_78;
        basic_string<char, BucketAllocatorEASTL> local_60;
        vector<eastl::vector<int>>* local_48;
        PacketT<Array<unsigned char> _>* local_40;
        eastl local_38;

        switch (arg2) {
        case 1:
            local_78 = eastl::basic_string<char, BucketAllocatorEASTL>();
            arg1.gStringCP1252ToUTF8<eastl::basic_string<char, BucketAllocatorEASTL>>(&local_78, false);
            tokenize<eastl::vector<eastl::basic_string<char, BucketAllocatorEASTL>>,
                     eastl::basic_string<char, BucketAllocatorEASTL>>(
                (vector<eastl::basic_string<char, BucketAllocatorEASTL>>*)this, &local_78, "<", -1);
            lVar5 = local_78.size();
            if (lVar5 != 0) {
                lVar5 = local_78.size();
                pcVar3 = &local_78[lVar5 - 1];
                if (*pcVar3 == '<') {
                    eastl::destruct<oldscape::highlight::NpcUID*>(&local_38);
                    local_60 = eastl::basic_string<char, BucketAllocatorEASTL>("", &local_38);
                    push_back(local_60);
                }
            }
            lVar5 = local_78.size();
            if ((lVar5 != 0) && (pcVar3 = (char*)local_78[0], *pcVar3 == '<')) {
                str1 = (basic_string<char, BucketAllocatorEASTL>*)HeapBeginPtr();
                eastl::destruct<oldscape::highlight::NpcUID*>(&local_38);
                local_60 = eastl::basic_string<char, BucketAllocatorEASTL>("", &local_38);
                insert(str1, local_60);
            }
            break;
        case 2:
            bVar1 = arg1.g1();
            field_96.resize((unsigned long)bVar1);
            if (bVar1 != 0) {
                uVar8 = 0;
                do {
                    uVar2 = arg1.g2();
                    puVar6 = &field_96[uVar8];
                    *puVar6 = (unsigned int)uVar2;
                    uVar8 = uVar8 + 1;
                } while (bVar1 != uVar8);
            }
            break;
        case 3:
            bVar1 = arg1.g1();
            arg1_00 = (unsigned long)bVar1;
            field_32.resize(arg1_00);
            local_48 = (vector<eastl::vector<int>>*)&field_64;
            uVar8 = arg1_00;
            local_48->resize(arg1_00);
            if (bVar1 != 0) {
                arg1_03 = 0;
                local_40 = arg1;
                do {
                    arg1_01 = (int)uVar8;
                    uVar2 = arg1.g2();
                    lVar5 = ((QuickChatDynamicCommand*)(unsigned long)uVar2)->GetByID(arg1_01);
                    if (lVar5 == 0) {
                        pLVar4 = logger::default_logger();
                        uVar8 = 0;
                        pLVar4->Log(false, 3,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/config/quickchatphrasetype/QuickChatPhraseType.cpp",
                                    82, "QuickChatPhraseType: Unknown command in quick chat pack: %d",
                                    (unsigned int)uVar2);
                        arg1 = local_40;
                    } else {
                        puVar6 = &field_32[arg1_03];
                        *puVar6 = (unsigned int)uVar2;
                        pvVar7 = (vector<int>*)(*local_48)[arg1_03];
                        uVar8 = (unsigned long)*(int*)(lVar5 + 20);
                        pvVar7->resize(uVar8);
                        arg1 = local_40;
                        if (0 < *(int*)(lVar5 + 20)) {
                            arg1_02 = 0;
                            do {
                                uVar2 = arg1.g2();
                                pvVar7 = (vector<int>*)(*local_48)[arg1_03];
                                uVar8 = arg1_02;
                                puVar6 = (unsigned int*)(*pvVar7)[arg1_02];
                                *puVar6 = (unsigned int)uVar2;
                                arg1_02 = arg1_02 + 1;
                            } while ((long)arg1_02 < (long)*(int*)(lVar5 + 20));
                        }
                    }
                    arg1_03 = arg1_03 + 1;
                } while (arg1_03 != arg1_00);
            }
            break;
        case 4:
            m_searchable = 0;
            break;
        default:
            pLVar4 = logger::default_logger();
            pLVar4->Log(false, 2,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                        "quickchatphrasetype/QuickChatPhraseType.cpp",
                        92, "Unrecognised .quickchatphrase config code: %u in quick chat phrase %d", arg2, field_132);
        }
    }

    // 0x1004f6360
    uint64_t QuickChatPhraseType::GetDynamicCommand(int arg1) const {
        int iVar2;
        unsigned int* puVar3;

        uint8_t* this_00 = &field_32;
        if ((this_00->empty() == '\0') && (iVar2 = this_00->size(), arg1 < iVar2)) {
            puVar3 = (unsigned int*)(*this_00)[(unsigned long)arg1];
            return ((QuickChatDynamicCommand*)(unsigned long)*puVar3)->GetByID((int)(unsigned long)arg1);
        }
        return 0;
    }

    // 0x1004f63b0
    uint32_t QuickChatPhraseType::GetDynamicCommandParameter(int arg1, int arg2) const {
        int iVar2;
        vector<int>* this_00;
        uint32_t* puVar3;
        uint8_t* this_01;

        bool cVar1 = field_32.empty();
        uint32_t uVar4 = 4294967295;
        if (!cVar1) {
            iVar2 = field_32.size();
            if (arg1 < iVar2) {
                this_01 = &field_64;
                cVar1 = this_01->empty();
                if (!cVar1) {
                    iVar2 = this_01->size();
                    if (arg2 < iVar2) {
                        this_00 = (vector<int>*)(*this_01)[(long)arg1];
                        puVar3 = (uint32_t*)(*this_00)[(long)arg2];
                        uVar4 = *puVar3;
                    }
                }
            }
        }
        return uVar4;
    }

    // 0x1004f6440
    uint32_t QuickChatPhraseType::GetAutoResponseId(int arg1) const {
        int iVar2;
        uint32_t* puVar3;

        uint8_t* this_00 = &field_96;
        bool cVar1 = this_00->empty();
        uint32_t uVar4 = 4294967295;
        if (!cVar1) {
            iVar2 = this_00->size();
            if (arg1 < iVar2) {
                puVar3 = (uint32_t*)(*this_00)[(long)arg1];
                uVar4 = *puVar3;
            }
        }
        return uVar4;
    }

    // 0x1004f6490
    QuickChatPhraseType* QuickChatPhraseType::GetText(PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg1) {
        QuickChatPhraseTypeList* this_00;
        QuickChatPhraseType* pQVar1;
        int arg3;
        long lVar3;
        basic_string<char, BucketAllocatorEASTL>* pbVar4;
        QuickChatDynamicCommand* quickChatDynamicCommand;
        vector<int>* arg2;
        unsigned int* puVar5;
        unsigned long uVar6;
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>* in_RDX;
        unsigned long arg1_00;
        int arg1_01;
        ReturnValue local_70;
        PacketT<Array<unsigned char, BucketAllocatorEASTL> _>* local_50;
        QuickChatPhraseType* local_48;

        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>* local_58 = in_RDX;
        new (this) eastl::basic_string<char, BucketAllocatorEASTL>();
        vector<unsigned int>* local_40 = (vector<unsigned int>*)(arg1 + 32);
        if (local_40->empty() == '\0') {
            lVar3 = local_40->size();
            if (lVar3 != 0) {
                local_50 = arg1 + 64;
                arg1_00 = 0;
                local_48 = (QuickChatPhraseType*)arg1;
                do {
                    pQVar1 = local_48;
                    pbVar4 = (basic_string<char, BucketAllocatorEASTL>*)(*local_48)[arg1_00];
                    *this += pbVar4;
                    this_00 = pQVar1->field_136;
                    arg1_01 = (int)arg1_00;
                    quickChatDynamicCommand = (QuickChatDynamicCommand*)GetDynamicCommand(pQVar1, arg1_01);
                    arg2 = (vector<int>*)(*local_50)[arg1_00];
                    puVar5 = (unsigned int*)(*local_40)[arg1_00];
                    lVar3 = ((QuickChatDynamicCommand*)(unsigned long)*puVar5)->GetByID((int)arg1_00);
                    arg3 = local_58->gX(*(int*)(lVar3 + 16));
                    local_70 = this_00->GetDynamicText(quickChatDynamicCommand, *arg2, arg3);
                    *this += &local_70;
                    arg1_00 = (unsigned long)(arg1_01 + 1);
                    uVar6 = local_40->size();
                    arg1 = (PacketT<Array<unsigned char, BucketAllocatorEASTL> _>*)local_48;
                } while (arg1_00 < uVar6);
            }
        }
        lVar3 = arg1.size();
        pQVar1 = this;
        pbVar4 = &arg1[lVar3 - 1];
        *pQVar1 += pbVar4;
        return pQVar1;
    }

    // 0x1004f6720
    auto QuickChatPhraseType::GetTextDisplay() {
        bool bVar1;
        char* str;
        unsigned long uVar3;
        basic_string<char, BucketAllocatorEASTL>* str_00;
        unsigned long uVar4;
        eastl local_58;
        ReturnValue* local_40;
        eastl local_38;

        if (empty() == '\0') {
            local_40 = &result;
            (*this)[0];
            str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar3 = ((basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>*)(*this)[0])->size();
            eastl::destruct<oldscape::highlight::NpcUID*>(&local_38);
            local_58 = eastl::basic_string<char, BucketAllocatorEASTL>(str, uVar3, &local_38);
            uVar3 = size();
            if (1 < uVar3) {
                uVar3 = 1;
                uVar4 = 2;
                do {
                    local_58 += "...";
                    str_00 = (basic_string<char, BucketAllocatorEASTL>*)(*this)[uVar3];
                    local_58 += str_00;
                    uVar3 = size();
                    bVar1 = uVar4 < uVar3;
                    uVar3 = uVar4;
                    uVar4 = (unsigned long)((int)uVar4 + 1);
                } while (bVar1);
            }
            &result = local_40;
            new (local_40) eastl::basic_string<char, BucketAllocatorEASTL>(local_58);
        } else {
            eastl::destruct<oldscape::highlight::NpcUID*>(&local_58);
            auto result("", &local_58);
        }
        return result;
    }

    // 0x1004f6890
    void QuickChatPhraseType::PackTransmitValues(PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg1,
                                                 const eastl::vector<int>& arg2) {
        unsigned int arg2_00;
        long lVar1;
        unsigned long uVar2;
        int* piVar3;
        unsigned long arg1_00;

        uint8_t* this_00 = &field_32;
        if ((this_00->empty() == '\0') && (lVar1 = this_00->size(), lVar1 != 0)) {
            arg1_00 = 0;
            do {
                uVar2 = arg2.size();
                if (uVar2 <= arg1_00) {
                    return;
                }
                lVar1 = GetDynamicCommand((int)arg1_00);
                arg2_00 = *(unsigned int*)(lVar1 + 12);
                if (0 < (int)arg2_00) {
                    piVar3 = &arg2[arg1_00];
                    arg1.pX((long)*piVar3, arg2_00);
                }
                arg1_00 = (unsigned long)((int)arg1_00 + 1);
                uVar2 = this_00->size();
            } while (arg1_00 < uVar2);
        }
    }

} // namespace jag::game

namespace jag {
    // 0x1004f6190
    int tokenize<eastl::vector<eastl::basic_string<char, BucketAllocatorEASTL>>,
                 eastl::basic_string<char, BucketAllocatorEASTL>>(
        eastl::vector<eastl::basic_string<char, BucketAllocatorEASTL>>& strs,
        const eastl::basic_string<char, BucketAllocatorEASTL>& str1, const char* str2, int arg4) {
        bool bVar1;
        size_t sVar3;
        ReturnValue* pRVar5;
        char* str1_01;

        if (arg4 == -1) {
            sVar3 = _strlen(str2);
            arg4 = (int)sVar3;
        }
        strs.clear();
        strs.reserve(4);
        char* str1_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        char* pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
        char* pcVar6 = str1_00;
        if (str1_00 != pcVar4) {
            str1_01 = str1_00;
            do {
                str1_00 = pcVar6;
                bVar1 = internal::find_token<char, char const*>(*str1_00, str2, str2 + arg4);
                if (bVar1) {
                    if (str1_01 != str1_00) {
                        pRVar5 = (ReturnValue*)strs.push_back();
                        eastl::basic_string<char, BucketAllocatorEASTL>::assign(pRVar5, str1_01, str1_00);
                    }
                    if (str1_00 == pcVar4) {
                    LAB_1004f6280:
                        pcVar6 = str1_00;
                    } else {
                        do {
                            bVar1 = internal::find_token<char, char const*>(*str1_00, str2, str2 + arg4);
                            if (!bVar1)
                                goto LAB_1004f6280;
                            str1_00 = str1_00 + 1;
                            pcVar6 = str1_00;
                        } while (str1_00 != pcVar4);
                    }
                } else {
                    pcVar6 = str1_00 + 1;
                    str1_00 = str1_01;
                }
                str1_01 = str1_00;
            } while (pcVar6 != pcVar4);
        }
        if (str1_00 != pcVar6) {
            pRVar5 = (ReturnValue*)strs.push_back();
            eastl::basic_string<char, BucketAllocatorEASTL>::assign(pRVar5, str1_00, pcVar6);
        }
        return strs.size();
    }

} // namespace jag
