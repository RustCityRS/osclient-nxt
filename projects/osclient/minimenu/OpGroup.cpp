// projects/osclient/minimenu/OpGroup.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "OpGroup.h"

namespace jag::oldscape {
    // 0x100f8a730, set at startup by ___cxx_global_var_init.349
    eastl::vector<char> OpGroup::m_reservedChars;

    // 0x1000743f0
    unsigned long OpGroup::IsBlank() const {
        bool cVar1;
        basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>* this_00;
        basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>* pbVar2;
        uint8_t* this_01;
        unsigned long uVar3;

        if ((field_0 == 0) && (cVar1 = field_8.empty(), cVar1)) {
            this_01 = &field_40;
            this_00 = (basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>*)this_01->begin();
            pbVar2 = (basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>*)this_01->end();
            uVar3 = (((uint64_t)((int64_t)((unsigned long)this_01 >> 8)) << 8) | (uint8_t)(this_00 == pbVar2));
            if (this_00 != pbVar2) {
                cVar1 = this_00->empty();
                while (cVar1) {
                    this_00 = this_00 + 32;
                    uVar3 = (((uint64_t)((int64_t)(uVar3 >> 8)) << 8) | (uint8_t)(this_00 == pbVar2));
                    if (this_00 == pbVar2)
                        break;
                    cVar1 = this_00->empty();
                }
            }
        } else {
            uVar3 = 0;
        }
        return uVar3 & 4294967295;
    }

    // 0x1000747c0
    uint64_t OpGroup::MatchPattern(const OpGroup& opGroup, bool arg2) {
        bool bVar1;
        uint64_t uVar2;

        if (((opGroup.field_0 == 0) || (field_0 == opGroup.field_0)) &&
            (bVar1 =
                 core::stringtools::general::StringTools::MatchPattern<eastl::basic_string<char, BucketAllocatorEASTL>>(
                     opGroup.field_8, field_8),
             bVar1)) {
            if (arg2) {
                uVar2 = MatchOpsExact(opGroup, this);
                return uVar2;
            }
            uVar2 = MatchOps(opGroup, this);
            return uVar2;
        }
        return 0;
    }

    // 0x100074820
    auto OpGroup::MakeCommon(minimenu::MinimenuSubjType minimenuSubjType, const eastl::string& str,
                             const eastl::fixed_vector<eastl::string, 5ul>& strs) {
        auto result;
        eastl::string* str_00;
        eastl::string* basic_string;
        unsigned long uVar2;
        unsigned long arg1;

        OpGroup(&result);
        result = minimenuSubjType;
        (*((&result + 1))) = str;
        core::stringtools::general::StringTools::ReplaceCharsWithSubstitute(*((&result + 1)), m_reservedChars, '_');
        if (strs.size() != 0) {
            arg1 = 0;
            do {
                str_00 = &strs[arg1];
                basic_string = (eastl::string*)(*((&result + 5)))[arg1];
                *basic_string = str_00;
                core::stringtools::general::StringTools::ReplaceCharsWithSubstitute(*basic_string, m_reservedChars,
                                                                                    '_');
                arg1 = arg1 + 1;
                uVar2 = strs.size();
            } while (arg1 < uVar2);
        }
        return result;
    }

    // 0x100074920
    auto OpGroup::Create(const configdecoder::LocType& locType) {
        auto result;

        long lVar1 = locType.GetMultiLocOrThis();
        MakeCommon(&result, 3, (eastl::string*)(lVar1 + 56), (fixed_vector<eastl::string, _5ul>*)(lVar1 + 232));
        return result;
    }

    // 0x100074960
    auto OpGroup::Create(const configdecoder::NpcType& npcType) {
        auto result;

        auto npcType_00 = npcType.GetMultiNpcOrThis();
        auto local_38 = minimenu::Minimenu::GetNpcOpBase(*npcType_00, -1);
        MakeCommon(&result, 2, (eastl::string*)&npcType_00->field_8,
                   (fixed_vector<eastl::string, _5ul>*)&npcType_00->field_256);
        return result;
    }

    // 0x1000749d0
    auto OpGroup::Create(const configdecoder::ObjType& objType) {
        auto result;
        MakeCommon(&result, 4, (eastl::string*)&objType.field_8,
                   (fixed_vector<eastl::string, _5ul>*)&objType.field_224);
        return result;
    }

    // 0x100074a00
    auto OpGroup::Create(const shared_ptr<rs2lib::IfType>& ifType) {
        auto result;
        eastl::string* str;
        eastl::string* basic_string;
        unsigned long arg1;

        OpGroup(&result);
        result = 7;
        long lVar1 = ifType.operator->();
        (*((&result + 1))) = ((lVar1 + 704));
        core::stringtools::general::StringTools::ReplaceCharsWithSubstitute(*((&result + 1)), m_reservedChars, '_');
        lVar1 = ifType.operator->();
        unsigned long uVar2 = ((lVar1 + 736))->end();
        uVar2 = eastl::min_alt<unsigned long>(uVar2, 10);
        if (uVar2 != 0) {
            arg1 = 0;
            do {
                lVar1 = ifType.operator->();
                str = (eastl::string*)(*((lVar1 + 736)))[arg1];
                basic_string = (eastl::string*)(*((&result + 5)))[arg1];
                *basic_string = str;
                core::stringtools::general::StringTools::ReplaceCharsWithSubstitute(*basic_string, m_reservedChars,
                                                                                    '_');
                arg1 = arg1 + 1;
            } while (uVar2 != arg1);
        }
        return result;
    }

    // 0x100074b20
    auto OpGroup::Create(const ClientNpc& clientNpc) {
        auto result;
        OpGroup local_1a8;

        OpGroup(&local_1a8);
        auto pNVar1 = clientNpc.field_1024.operator->();
        pNVar1 = pNVar1->GetMultiNpcOrThis();
        auto local_40 = minimenu::Minimenu::GetNpcOpBase(clientNpc, pNVar1, -1);
        MakeCommon(&result, 2, &local_40, (fixed_vector<eastl::string, _5ul>*)&pNVar1->field_256);
        ~OpGroup(&local_1a8);
        return result;
    }

    // 0x100074be0
    auto OpGroup::Create(const ClientObj& clientObj) {
        auto result;
        long lVar2;
        long lVar3;

        auto local_28 = configdecoder::ObjType::List(*(int*)&clientObj.field_24);
        if (local_28 == nullptr) {
            ___bzero(&result, 360);
            OpGroup(&result);
        } else {
            lVar2 = local_28.operator->();
            lVar3 = local_28.operator->();
            MakeCommon(&result, 4, (eastl::string*)(lVar2 + 8), (fixed_vector<eastl::string, _5ul>*)(lVar3 + 224));
        }
        return result;
    }

    // 0x100074c80
    auto OpGroup::Create(const eastl::string& str, bool arg2) {
        auto result;
        char* pcVar2;
        long lVar3;
        eastl::string* basic_string;
        eastl::string* pbVar4;
        uint64_t in_register_00000011;
        unsigned long uVar5;
        uint32_t uVar6;
        unsigned long uVar7;
        unsigned long arg1;
        bool bVar8;
        uint8_t local_1d0[40];
        array<eastl::string, 10ul> local_1a8;
        OpGroup* local_68;
        ReturnValue local_60;
        uint32_t local_34;

        char cVar1 = str.empty();
        if (!cVar1) {
            pcVar2 = &str[0];
            cVar1 = core::stringtools::general::StringTools::IsASCIINumeric((short)*pcVar2);
            if (cVar1) {
                local_34 = (uint32_t)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2);
                pcVar2 = &str[0];
                cVar1 = *pcVar2;
                if ((uint8_t)(cVar1 - 49U) < 8) {
                    OpGroup((OpGroup*)local_1d0);
                    local_1d0._0_4_ = (int)cVar1 - 48;
                    lVar3 = str.find('|', 0);
                    if (lVar3 != -1) {
                        uVar7 = lVar3 + 1;
                        lVar3 = str.find('|', uVar7);
                        if (lVar3 != -1) {
                            local_60 = str.substr(uVar7, lVar3 - uVar7);
                            local_68 = &result;
                            (*((local_1d0 + 8))) = &local_60;
                            uVar6 = local_34;
                            uVar7 = lVar3 + 1;
                            lVar3 = str.find('|', uVar7);
                            pbVar4 = (eastl::string*)str;
                            if (lVar3 == -1) {
                                uVar5 = 0;
                            } else {
                                arg1 = 0;
                                do {
                                    local_60 = pbVar4->substr(uVar7, lVar3 - uVar7);
                                    basic_string = &local_1a8[arg1];
                                    *basic_string = &local_60;
                                    uVar7 = lVar3 + 1;
                                    lVar3 = pbVar4->find('|', uVar7);
                                    uVar5 = arg1 + 1;
                                    if (lVar3 == -1)
                                        break;
                                    bVar8 = arg1 < 8;
                                    arg1 = uVar5;
                                } while (bVar8);
                                uVar6 = local_34;
                            }
                            &result = local_68;
                            if ((unsigned int)uVar5 < 10) {
                                local_60 = str.substr(uVar7, 18446744073709551615);
                                pbVar4 = &local_1a8[uVar5 & 4294967295];
                                *pbVar4 = &local_60;
                            }
                            if ((char)uVar6 != '\0') {
                                core::stringtools::general::StringTools::ReplaceCharsWithSubstitute(
                                    *((local_1d0 + 8)), m_reservedChars, '_');
                                uVar7 = 0;
                                do {
                                    core::stringtools::general::StringTools::ReplaceCharsWithSubstitute(
                                        *local_1a8[uVar7], m_reservedChars, '_');
                                    uVar7 = uVar7 + 1;
                                } while (uVar7 != 10);
                            }
                        }
                    }
                    OpGroup(&result, (OpGroup*)local_1d0);
                    ~OpGroup((OpGroup*)local_1d0);
                    return result;
                }
            }
        }
        ___bzero(&result, 360);
        OpGroup(&result);
        return result;
    }

    // 0x100074f30
    auto OpGroup::ToString() const {
        auto result;
        unsigned int uVar1 = field_0;
        uint64_t uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uint8_t* this_00 = &field_40;
        (*this_00)[0];
        uint64_t uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        (*this_00)[1];
        uint64_t uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        (*this_00)[2];
        uint64_t uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        (*this_00)[3];
        uint64_t uVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        (*this_00)[4];
        uint64_t uVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        (*this_00)[5];
        uint64_t uVar8 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        (*this_00)[6];
        uint64_t uVar9 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        (*this_00)[7];
        uint64_t uVar10 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        (*this_00)[8];
        uint64_t uVar11 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        (*this_00)[9];
        uint64_t uVar12 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        result.append_sprintf("%d|%s|%s|%s|%s|%s|%s|%s|%s|%s|%s|%s", (unsigned long)uVar1, uVar2, uVar3, uVar4, uVar5,
                              uVar6, uVar7, uVar8, uVar9, uVar10, uVar11, uVar12);
        return result;
    }

    // 0x1000b3480
    void ___cxx_global_var_init_349(void) {
        uint32_t local_1c = 623518588;
        new ((vector<char>*)&OpGroup::m_reservedChars) eastl::vector<char>(&local_1c, *4);
        ___cxa_atexit(PTR__vector_100ee6d70, &OpGroup::m_reservedChars, 4294967296);
    }

} // namespace jag::oldscape
