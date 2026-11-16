// projects/osclient/ChatHelper.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

namespace jag::oldscape {
    class ChatHelper {
    public:
        auto BuildChatClientMessage(int arg1, eastl::string&& str, const Language* language, int arg4);
        auto CreateColourArray(const eastl::fixed_vector<unsigned char, 8ul>& arg1);
        static int32_t PATTERN_COL_TAB[36]; // initialised in its definition
    };

    // 0x100d3d8f0
    int32_t ChatHelper::PATTERN_COL_TAB[36] = {
        16777215, 14942979, 16747520, 16772352, 32806,    2375822,  7547266,  16720268, 11884176,
        5261772,  10724259, 13970688, 15693351, 16577588, 494960,   2208255,  10178454, 16756679,
        13722276, 8105443,  16751190, 2543274,  7591918,  10246609, 10021057, 11894492, 2894892,
        9699842,  6371605,  13680896, 4882723,  14504,    8388736,  14025328, 10682978, 4004472,
    };

    // 0x10017c0a0
    auto ChatHelper::BuildChatClientMessage(int arg1, eastl::string&& str, const Language* language, int arg4) {
        bool cVar3;
        int iVar4;
        unsigned long uVar7;
        long lVar8;
        long lVar9;
        uint8_t* pbVar10;
        unsigned long uVar11;
        PublishingPlatformType publishingPlatformType;
        PublishingPlatformType publishingPlatformType_00;
        eastl local_90;

        auto pCVar5 = Client::Instance();
        Isaac* isaac = ((ServerConnection*)pCVar5->field_19120.operator->())->GetOutgoingEncryption();
        auto result = shared::ClientMessage::MakeClientMessage(37, *isaac);
        ReturnValue* returnValue = &result + 1;
        returnValue->p1<shared::LoginProt::ID>(0);
        bool cVar1 = returnValue->size();
        returnValue->p1<shared::LoginProt::ID>(arg1);
        char* pcVar6 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::destruct<highlight::NpcUID*>(&local_68);
        basic_string<char, BucketAllocatorEASTL> local_a8(pcVar6, &local_68);
        local_a8.make_lower();
        eastl local_68;
        bool bVar2 = core::stringtools::general::StringTools::StartsWith<char, BucketAllocatorEASTL>(
            local_a8, *((eastl::string*)&constants::text::chatcol0));
        if (bVar2) {
            uVar7 =
                ((basic_string<char,
                               eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>*)&constants::text::chatcol0)
                    ->size();
            local_88 = str.substr(uVar7, 18446744073709551615);
            str = &local_88;
            publishingPlatformType_00 = 0;
        } else {
            bVar2 = core::stringtools::general::StringTools::StartsWith<char, BucketAllocatorEASTL>(
                local_a8, *((eastl::string*)&constants::text::chatcol1));
            if (bVar2) {
                uVar7 =
                    ((basic_string<
                         char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>*)&constants::text::chatcol1)
                        ->size();
                local_88 = str.substr(uVar7, 18446744073709551615);
                str = &local_88;
                publishingPlatformType_00 = 1;
            } else {
                bVar2 = core::stringtools::general::StringTools::StartsWith<char, BucketAllocatorEASTL>(
                    local_a8, *((eastl::string*)&constants::text::chatcol2));
                if (bVar2) {
                    uVar7 = ((basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>*)&constants::
                                 text::chatcol2)
                                ->size();
                    local_88 = str.substr(uVar7, 18446744073709551615);
                    str = &local_88;
                    publishingPlatformType_00 = 2;
                } else {
                    bVar2 = core::stringtools::general::StringTools::StartsWith<char, BucketAllocatorEASTL>(
                        local_a8, *((eastl::string*)&constants::text::chatcol3));
                    if (bVar2) {
                        uVar7 = ((basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul,
                                                                                   true>>*)&constants::text::chatcol3)
                                    ->size();
                        local_88 = str.substr(uVar7, 18446744073709551615);
                        str = &local_88;
                        publishingPlatformType_00 = 3;
                    } else {
                        bVar2 = core::stringtools::general::StringTools::StartsWith<char, BucketAllocatorEASTL>(
                            local_a8, *((eastl::string*)&constants::text::chatcol4));
                        if (bVar2) {
                            uVar7 =
                                ((basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul,
                                                                                   true>>*)&constants::text::chatcol4)
                                    ->size();
                            local_88 = str.substr(uVar7, 18446744073709551615);
                            str = &local_88;
                            publishingPlatformType_00 = 4;
                        } else {
                            bVar2 = core::stringtools::general::StringTools::StartsWith<char, BucketAllocatorEASTL>(
                                local_a8, *((eastl::string*)&constants::text::chatcol5));
                            if (bVar2) {
                                uVar7 =
                                    ((basic_string<char, eastl::fixed_vector_allocator<
                                                             1ul, 40ul, 1ul, 0ul, true>>*)&constants::text::chatcol5)
                                        ->size();
                                local_88 = str.substr(uVar7, 18446744073709551615);
                                str = &local_88;
                                publishingPlatformType_00 = 5;
                            } else {
                                bVar2 = core::stringtools::general::StringTools::StartsWith<char, BucketAllocatorEASTL>(
                                    local_a8, *((eastl::string*)&constants::text::chatcol6));
                                if (bVar2) {
                                    uVar7 =
                                        ((basic_string<char,
                                                       eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul,
                                                                                     true>>*)&constants::text::chatcol6)
                                            ->size();
                                    local_88 = str.substr(uVar7, 18446744073709551615);
                                    str = &local_88;
                                    publishingPlatformType_00 = 6;
                                } else {
                                    bVar2 =
                                        core::stringtools::general::StringTools::StartsWith<char, BucketAllocatorEASTL>(
                                            local_a8, *((eastl::string*)&constants::text::chatcol7));
                                    if (bVar2) {
                                        uVar7 =
                                            ((basic_string<
                                                 char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul,
                                                                                     true>>*)&constants::text::chatcol7)
                                                ->size();
                                        local_88 = str.substr(uVar7, 18446744073709551615);
                                        str = &local_88;
                                        publishingPlatformType_00 = 7;
                                    } else {
                                        bVar2 =
                                            core::stringtools::general::StringTools::StartsWith<char,
                                                                                                BucketAllocatorEASTL>(
                                                local_a8, *((eastl::string*)&constants::text::chatcol8));
                                        if (bVar2) {
                                            uVar7 =
                                                ((basic_string<
                                                     char, eastl::fixed_vector_allocator<
                                                               1ul, 40ul, 1ul, 0ul, true>>*)&constants::text::chatcol8)
                                                    ->size();
                                            local_88 = str.substr(uVar7, 18446744073709551615);
                                            str = &local_88;
                                            publishingPlatformType_00 = 8;
                                        } else {
                                            bVar2 = core::stringtools::general::StringTools::StartsWith<
                                                char, BucketAllocatorEASTL>(
                                                local_a8, *((eastl::string*)&constants::text::chatcol9));
                                            if (bVar2) {
                                                uVar7 = ((basic_string<char, eastl::fixed_vector_allocator<
                                                                                 1ul, 40ul, 1ul, 0ul,
                                                                                 true>>*)&constants::text::chatcol9)
                                                            ->size();
                                                local_88 = str.substr(uVar7, 18446744073709551615);
                                                str = &local_88;
                                                publishingPlatformType_00 = 9;
                                            } else {
                                                bVar2 = core::stringtools::general::StringTools::StartsWith<
                                                    char, BucketAllocatorEASTL>(
                                                    local_a8, *((eastl::string*)&constants::text::chatcol10));
                                                if (bVar2) {
                                                    uVar7 =
                                                        ((basic_string<char, eastl::fixed_vector_allocator<
                                                                                 1ul, 40ul, 1ul, 0ul,
                                                                                 true>>*)&constants::text::chatcol10)
                                                            ->size();
                                                    local_88 = str.substr(uVar7, 18446744073709551615);
                                                    str = &local_88;
                                                    publishingPlatformType_00 = 10;
                                                } else {
                                                    bVar2 = core::stringtools::general::StringTools::StartsWith<
                                                        char, BucketAllocatorEASTL>(
                                                        local_a8, *((eastl::string*)&constants::text::chatcol11));
                                                    if (bVar2) {
                                                        uVar7 = ((basic_string<char,
                                                                               eastl::fixed_vector_allocator<
                                                                                   1ul, 40ul, 1ul, 0ul,
                                                                                   true>>*)&constants::text::chatcol11)
                                                                    ->size();
                                                        local_88 = str.substr(uVar7, 18446744073709551615);
                                                        str = &local_88;
                                                        publishingPlatformType_00 = 11;
                                                    } else {
                                                        bVar2 = core::stringtools::general::StringTools::StartsWith<
                                                            char, BucketAllocatorEASTL>(
                                                            local_a8, *((eastl::string*)&constants::text::chatcol12));
                                                        if (bVar2) {
                                                            uVar7 =
                                                                ((basic_string<char,
                                                                               eastl::fixed_vector_allocator<
                                                                                   1ul, 40ul, 1ul, 0ul,
                                                                                   true>>*)&constants::text::chatcol12)
                                                                    ->size();
                                                            local_88 = str.substr(uVar7, 18446744073709551615);
                                                            str = &local_88;
                                                            publishingPlatformType_00 = 12;
                                                        } else {
                                                            bVar2 = core::stringtools::general::StringTools::StartsWith<
                                                                char, BucketAllocatorEASTL>(
                                                                local_a8,
                                                                *((eastl::string*)&constants::text::chatcol13));
                                                            publishingPlatformType_00 = 0;
                                                            if (bVar2) {
                                                                cVar3 = GetPatternAsColTabIndices(
                                                                    &local_68,
                                                                    (basic_string<char,
                                                                                  BucketAllocatorEASTL>*)&local_a8);
                                                                if (!cVar3) {
                                                                    local_68.clear();
                                                                } else {
                                                                    iVar4 = local_68.size();
                                                                    lVar9 =
                                                                        ((basic_string<
                                                                             char,
                                                                             eastl::fixed_vector_allocator<
                                                                                 1ul, 40ul, 1ul, 0ul,
                                                                                 true>>*)&constants::text::chatcol13)
                                                                            ->size();
                                                                    lVar8 = local_68.size();
                                                                    local_88 = str.substr(lVar9 + lVar8 + 1,
                                                                                          18446744073709551615);
                                                                    str = &local_88;
                                                                    publishingPlatformType_00 = iVar4 + 12;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        pcVar6 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_a8 = pcVar6;
        local_a8.make_lower();
        bVar2 = core::stringtools::general::StringTools::StartsWith<char, BucketAllocatorEASTL>(
            local_a8, *((eastl::string*)&constants::text::chateffect1));
        if (bVar2) {
            uVar7 =
                ((basic_string<char,
                               eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>*)&constants::text::chateffect1)
                    ->size();
            local_88 = str.substr(uVar7, 18446744073709551615);
            str = &local_88;
            publishingPlatformType = 1;
        } else {
            bVar2 = core::stringtools::general::StringTools::StartsWith<char, BucketAllocatorEASTL>(
                local_a8, *((eastl::string*)&constants::text::chateffect2));
            if (bVar2) {
                uVar7 =
                    ((basic_string<
                         char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>*)&constants::text::chateffect2)
                        ->size();
                local_88 = str.substr(uVar7, 18446744073709551615);
                str = &local_88;
                publishingPlatformType = 2;
            } else {
                bVar2 = core::stringtools::general::StringTools::StartsWith<char, BucketAllocatorEASTL>(
                    local_a8, *((eastl::string*)&constants::text::chateffect3));
                if (bVar2) {
                    uVar7 = ((basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>*)&constants::
                                 text::chateffect3)
                                ->size();
                    local_88 = str.substr(uVar7, 18446744073709551615);
                    str = &local_88;
                    publishingPlatformType = 3;
                } else {
                    bVar2 = core::stringtools::general::StringTools::StartsWith<char, BucketAllocatorEASTL>(
                        local_a8, *((eastl::string*)&constants::text::chateffect4));
                    if (bVar2) {
                        uVar7 =
                            ((basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>*)&constants::
                                 text::chateffect4)
                                ->size();
                        local_88 = str.substr(uVar7, 18446744073709551615);
                        str = &local_88;
                        publishingPlatformType = 4;
                    } else {
                        bVar2 = core::stringtools::general::StringTools::StartsWith<char, BucketAllocatorEASTL>(
                            local_a8, *((eastl::string*)&constants::text::chateffect5));
                        publishingPlatformType = 0;
                        if (bVar2) {
                            uVar7 = ((basic_string<char, eastl::fixed_vector_allocator<
                                                             1ul, 40ul, 1ul, 0ul, true>>*)&constants::text::chateffect5)
                                        ->size();
                            local_88 = str.substr(uVar7, 18446744073709551615);
                            str = &local_88;
                            publishingPlatformType = 5;
                        }
                    }
                }
            }
        }
        returnValue->p1<shared::LoginProt::ID>(publishingPlatformType_00);
        returnValue->p1<shared::LoginProt::ID>(publishingPlatformType);
        lVar9 = local_68.size();
        if (lVar9 != 0) {
            pCVar5 = Client::Instance();
            if (213 < pCVar5->m_serverMajorVersion) {
                lVar9 = local_68.size();
                if (lVar9 != 0) {
                    uVar7 = 0;
                    do {
                        pbVar10 = &local_68[uVar7];
                        returnValue->p1<shared::LoginProt::ID>((unsigned int)*pbVar10);
                        uVar7 = uVar7 + 1;
                        uVar11 = local_68.size();
                    } while (uVar7 < uVar11);
                }
            }
        }
        pcVar6 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::destruct<highlight::NpcUID*>(&local_90);
        eastl::basic_string<char, BucketAllocatorEASTL> local_88(pcVar6, &local_90);
        pCVar5 = Client::Instance();
        ((WordPack*)pCVar5->field_54176.operator->())->PackUTF8AsCP1252(*returnValue, local_88);
        if (arg1 == 3) {
            returnValue->p1<shared::LoginProt::ID>(arg4);
        }
        cVar3 = returnValue->size();
        returnValue->pSize1(cVar3 - cVar1);
        return result;
    }

    // 0x10017cc90
    auto ChatHelper::CreateColourArray(const eastl::fixed_vector<unsigned char, 8ul>& arg1) {
        uint8_t bVar1;
        uint8_t* puVar2;
        unsigned long uVar4;
        uint8_t* pbVar5;
        uint32_t* puVar6;
        unsigned long uVar7;

        auto result;
        long lVar3 = arg1.size();
        if ((lVar3 != 0) && (uVar4 = arg1.size(), uVar4 < 9)) {
            uVar4 = arg1.size();
            result.resize(uVar4);
            lVar3 = arg1.size();
            puVar2 = PTR_PATTERN_COL_TAB_100ee6a70;
            if (lVar3 != 0) {
                uVar4 = 0;
                do {
                    arg1[uVar4];
                    pbVar5 = &arg1[uVar4];
                    if (36 < *pbVar5) {
                        result.clear();
                        return result;
                    }
                    pbVar5 = &arg1[uVar4];
                    bVar1 = *pbVar5;
                    puVar6 = (uint32_t*)(result)[uVar4];
                    *puVar6 = *(uint32_t*)(puVar2 + (unsigned long)bVar1 * 4);
                    uVar4 = uVar4 + 1;
                    uVar7 = arg1.size();
                } while (uVar4 < uVar7);
            }
        }
        return result;
    }

} // namespace jag::oldscape
