// projects/osclient/ScriptRunnerImpl_3900To3999.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x100162e50
    uint64_t ScriptRunnerImpl::ExecuteCommand3900To3999(ScriptOp scriptOp, const ClientScript& clientScript,
                                                        bool arg3) {
        uint8_t* this_00;
        int iVar1;
        uint32_t uVar2;
        uint8_t bVar3;
        char cVar4;
        bool bVar5;
        unsigned int uVar6;
        uint32_t uVar7;
        TextRun* this_01;
        ActiveOffer* pAVar9;
        eastl::string* str;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* this_02;
        long lVar10;
        long lVar11;
        eastl::string* pbVar12;
        CommandLine* pCVar13;
        ActiveOffersReply* pAVar14;
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>* pcVar15;
        CoordMapSquare* this_03;
        uint32_t* puVar16;
        int* piVar17;
        long lVar18;
        unsigned int* puVar19;
        unique_ptr<rs2lib::ActiveOffersReply>* puVar20;
        StockPlayerOffer* pSVar21;
        Minimap* this_04;
        int iVar22;
        unsigned long uVar23;
        StockMarketOfferComparator in_stack_fffffffffffffea8;
        shared_ptr local_150;
        int local_12c;
        function<bool(rs2lib::ActiveOffersReply::ActiveOffer const&, rs2lib::ActiveOffersReply::ActiveOffer const&)>
            local_128[48];
        function<bool(rs2lib::ActiveOffersReply::ActiveOffer const&, rs2lib::ActiveOffersReply::ActiveOffer const&)>
            local_f8[48];
        function<bool(rs2lib::ActiveOffersReply::ActiveOffer const&, rs2lib::ActiveOffersReply::ActiveOffer const&)>
            local_c8[48];
        function<bool(rs2lib::ActiveOffersReply::ActiveOffer const&, rs2lib::ActiveOffersReply::ActiveOffer const&)>
            local_98[48];
        function<bool(rs2lib::ActiveOffersReply::ActiveOffer const&, rs2lib::ActiveOffersReply::ActiveOffer const&)>
            local_68[48];
        long local_38;

        uint64_t uVar24 = 2;
        auto pCVar8 = Client::Instance();
        switch (scriptOp) {
        case 3903:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            piVar17 = &field_100092[uVar23];
            puVar20 = &pCVar8->field_52784[(long)*piVar17];
            pSVar21 = (StockPlayerOffer*)(*puVar20).operator->();
            bVar3 = pSVar21->GetOfferType();
            uVar6 = (unsigned int)bVar3;
            break;
        case 3904:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            piVar17 = &field_100092[uVar23];
            puVar20 = &pCVar8->field_52784[(long)*piVar17];
            this_03 = (CoordMapSquare*)(*puVar20).operator->();
            goto LAB_100163588;
        case 3905:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            piVar17 = &field_100092[uVar23];
            puVar20 = &pCVar8->field_52784[(long)*piVar17];
            pCVar13 = (CommandLine*)(*puVar20).operator->();
            goto LAB_100163537;
        case 3906:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            piVar17 = &field_100092[uVar23];
            puVar20 = &pCVar8->field_52784[(long)*piVar17];
            this_04 = (Minimap*)(*puVar20).operator->();
            goto LAB_10016396a;
        case 3907:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            piVar17 = &field_100092[uVar23];
            puVar20 = &pCVar8->field_52784[(long)*piVar17];
            this_01 = (TextRun*)(*puVar20).operator->();
            uVar6 = this_01->GetMaxLineWidth();
            break;
        case 3908:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            piVar17 = &field_100092[uVar23];
            puVar20 = &pCVar8->field_52784[(long)*piVar17];
            pSVar21 = (StockPlayerOffer*)(*puVar20).operator->();
            uVar6 = pSVar21->GetCompletedGold();
            break;
        default:
            goto switchD_100162ea2_caseD_f45;
        case 3910:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            piVar17 = &field_100092[uVar23];
            puVar20 = &pCVar8->field_52784[(long)*piVar17];
            pSVar21 = (StockPlayerOffer*)(*puVar20).operator->();
            cVar4 = pSVar21->GetOfferStatus();
            uVar6 = (unsigned int)(!cVar4);
            break;
        case 3911:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            piVar17 = &field_100092[uVar23];
            puVar20 = &pCVar8->field_52784[(long)*piVar17];
            pSVar21 = (StockPlayerOffer*)(*puVar20).operator->();
            cVar4 = pSVar21->GetOfferStatus();
            uVar6 = (unsigned int)(cVar4 == '\x02');
            break;
        case 3912:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            piVar17 = &field_100092[uVar23];
            puVar20 = &pCVar8->field_52784[(long)*piVar17];
            pSVar21 = (StockPlayerOffer*)(*puVar20).operator->();
            cVar4 = pSVar21->GetOfferStatus();
            uVar6 = (unsigned int)(cVar4 == '\x05');
            break;
        case 3913:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            piVar17 = &field_100092[uVar23];
            puVar20 = &pCVar8->field_52784[(long)*piVar17];
            pSVar21 = (StockPlayerOffer*)(*puVar20).operator->();
            cVar4 = pSVar21->GetOfferStatus();
            uVar6 = (unsigned int)(cVar4 == '\x01');
            break;
        case 3914:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            piVar17 = &field_100092[uVar23];
            iVar1 = *piVar17;
            bVar5 = pCVar8->field_52848 != nullptr;
            uVar24 = 1;
            if (bVar5) {
                pAVar14 = (ActiveOffersReply*)pCVar8->field_52848.operator->();
                new (local_68) std::function<bool(rs2lib::ActiveOffersReply::ActiveOffer const&,
                                                  rs2lib::ActiveOffersReply::ActiveOffer const&)>(
                    *((function<bool_(rs2lib::ActiveOffersReply::ActiveOffer const&,
                                      rs2lib::ActiveOffersReply::ActiveOffer const&)>*)&rs2lib::ActiveOffersReply::
                          compareByDisplayName));
                pAVar14->SortList(local_68, iVar1 == 1);
            }
            goto switchD_100162ea2_caseD_f45;
        case 3915:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            piVar17 = &field_100092[uVar23];
            iVar1 = *piVar17;
            bVar5 = pCVar8->field_52848 != nullptr;
            uVar24 = 1;
            if (bVar5) {
                pAVar14 = (ActiveOffersReply*)pCVar8->field_52848.operator->();
                new (local_98) std::function<bool(rs2lib::ActiveOffersReply::ActiveOffer const&,
                                                  rs2lib::ActiveOffersReply::ActiveOffer const&)>(
                    *((function<bool_(rs2lib::ActiveOffersReply::ActiveOffer const&,
                                      rs2lib::ActiveOffersReply::ActiveOffer const&)>*)&rs2lib::ActiveOffersReply::
                          compareByPrice));
                pAVar14->SortList(local_98, iVar1 == 1);
            }
            goto switchD_100162ea2_caseD_f45;
        case 3916:
            iVar1 = field_104092;
            uVar23 = (long)iVar1 - 2;
            field_104092 = (int)uVar23;
            piVar17 = &field_100092[uVar23];
            local_12c = *piVar17;
            piVar17 = &field_100092[(long)iVar1 - 1];
            iVar1 = *piVar17;
            bVar5 = pCVar8->field_52848 != nullptr;
            uVar24 = 1;
            if (bVar5) {
                bVar5 = local_12c == 1;
                pCVar8->field_52864 = iVar1 == 1;
                pAVar14 = (ActiveOffersReply*)pCVar8->field_52848.operator->();
                local_c8->function<Client::StockMarketOfferComparator, void>(in_stack_fffffffffffffea8);
                pAVar14->SortList(local_c8, bVar5);
            }
            goto switchD_100162ea2_caseD_f45;
        case 3917:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            piVar17 = &field_100092[uVar23];
            iVar1 = *piVar17;
            bVar5 = pCVar8->field_52848 != nullptr;
            uVar24 = 1;
            if (bVar5) {
                pAVar14 = (ActiveOffersReply*)pCVar8->field_52848.operator->();
                new (local_f8) std::function<bool(rs2lib::ActiveOffersReply::ActiveOffer const&,
                                                  rs2lib::ActiveOffersReply::ActiveOffer const&)>(
                    *((function<bool_(rs2lib::ActiveOffersReply::ActiveOffer const&,
                                      rs2lib::ActiveOffersReply::ActiveOffer const&)>*)&rs2lib::ActiveOffersReply::
                          compareByOfferMade));
                pAVar14->SortList(local_f8, iVar1 == 1);
            }
            goto switchD_100162ea2_caseD_f45;
        case 3918:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            piVar17 = &field_100092[uVar23];
            iVar1 = *piVar17;
            bVar5 = pCVar8->field_52848 != nullptr;
            uVar24 = 1;
            if (bVar5) {
                pAVar14 = (ActiveOffersReply*)pCVar8->field_52848.operator->();
                new (local_128) std::function<bool(rs2lib::ActiveOffersReply::ActiveOffer const&,
                                                   rs2lib::ActiveOffersReply::ActiveOffer const&)>(
                    *((function<bool_(rs2lib::ActiveOffersReply::ActiveOffer const&,
                                      rs2lib::ActiveOffersReply::ActiveOffer const&)>*)&rs2lib::ActiveOffersReply::
                          compareByCount));
                pAVar14->SortList(local_128, iVar1 == 1);
            }
            goto switchD_100162ea2_caseD_f45;
        case 3919:
            uVar7 = 0;
            bVar5 = pCVar8->field_52848 == nullptr;
            if (!bVar5) {
                pAVar14 = (ActiveOffersReply*)pCVar8->field_52848.operator->();
                uVar7 = pAVar14->GetActiveOfferCount();
            }
            iVar1 = field_104092;
            field_104092 = iVar1 + 1;
            puVar16 = &field_100092[(long)iVar1];
            *puVar16 = uVar7;
            goto LAB_10016398f;
        case 3920:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            puVar19 = &field_100092[uVar23];
            uVar6 = *puVar19;
            pAVar14 = (ActiveOffersReply*)pCVar8->field_52848.operator->();
            pCVar13 = (CommandLine*)pAVar14->GetActiveOffer(uVar6);
            uVar6 = pCVar13->GetPos();
            break;
        case 3921:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            puVar19 = &field_100092[uVar23];
            uVar6 = *puVar19;
            pAVar14 = (ActiveOffersReply*)pCVar8->field_52848.operator->();
            pAVar9 = (ActiveOffer*)pAVar14->GetActiveOffer(uVar6);
            str = (eastl::string*)pAVar9->getDisplayName();
            goto LAB_1001638f9;
        case 3922:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            puVar19 = &field_100092[uVar23];
            uVar6 = *puVar19;
            pAVar14 = (ActiveOffersReply*)pCVar8->field_52848.operator->();
            pAVar9 = (ActiveOffer*)pAVar14->GetActiveOffer(uVar6);
            str = (eastl::string*)pAVar9->getOldDisplayName();
        LAB_1001638f9:
            iVar1 = field_136096;
            field_136096 = iVar1 + 1;
            pbVar12 = &field_104096[(long)iVar1];
            *pbVar12 = str;
            goto LAB_10016398f;
        case 3923:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            puVar19 = &field_100092[uVar23];
            uVar6 = *puVar19;
            pAVar14 = (ActiveOffersReply*)pCVar8->field_52848.operator->();
            this_02 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)pAVar14->GetActiveOffer(uVar6);
            lVar10 = core::SafeTime::CurrentTimeMillis();
            lVar18 = pCVar8->field_52856;
            lVar11 = this_02->data();
            lVar10 = lVar10 - (lVar11 + lVar18);
            uVar23 = lVar10 / 3600000;
            lVar10 = lVar10 - ((long)(uVar23 * 15461882265600000) >> 32);
            lVar18 = lVar10 / 60000;
            iVar1 = (int)((lVar10 - (lVar18 * 257698037760000 >> 32)) / 1000);
            local_150 = eastl::string();
            iVar22 = (int)lVar18;
            local_150.sprintf("%i:%i:%i", uVar23 & 4294967295,
                              (unsigned long)(unsigned int)(iVar22 + (iVar22 / 10) * -9),
                              (unsigned long)(unsigned int)(iVar1 + (iVar1 / 10) * -9));
            iVar1 = field_136096;
            field_136096 = iVar1 + 1;
            pbVar12 = &field_104096[(long)iVar1];
            *pbVar12 = &local_150;
            goto LAB_10016398f;
        case 3924:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            puVar19 = &field_100092[uVar23];
            uVar6 = *puVar19;
            pAVar14 = (ActiveOffersReply*)pCVar8->field_52848.operator->();
            pcVar15 = (compressed_pair_imp<
                       eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                       eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>*)pAVar14->GetActiveOffer(uVar6);
            this_04 = (Minimap*)pcVar15->second();
        LAB_10016396a:
            uVar6 = this_04->GetLevel();
            break;
        case 3925:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            puVar19 = &field_100092[uVar23];
            uVar6 = *puVar19;
            pAVar14 = (ActiveOffersReply*)pCVar8->field_52848.operator->();
            pcVar15 = (compressed_pair_imp<
                       eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                       eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>*)pAVar14->GetActiveOffer(uVar6);
            pCVar13 = (CommandLine*)pcVar15->second();
        LAB_100163537:
            uVar6 = pCVar13->GetPos();
            break;
        case 3926:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            puVar19 = &field_100092[uVar23];
            uVar6 = *puVar19;
            pAVar14 = (ActiveOffersReply*)pCVar8->field_52848.operator->();
            pcVar15 = (compressed_pair_imp<
                       eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                       eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>*)pAVar14->GetActiveOffer(uVar6);
            this_03 = (CoordMapSquare*)pcVar15->second();
        LAB_100163588:
            uVar6 = this_03->GetZ();
            break;
        case 3931:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            piVar17 = &field_100092[uVar23];
            local_150 = configdecoder::ObjType::List(*piVar17);
            cVar4 = shared_ptr::operator_cast_to_bool(&local_150);
            uVar6 = 0;
            if (cVar4) {
                lVar18 = local_150.operator->();
                uVar6 = (unsigned int)*(uint8_t*)(lVar18 + 824);
            }
            goto LAB_1001636cf;
        case 3932:
            this_00 = &field_100092;
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            piVar17 = (int*)(*this_00)[uVar23];
            local_150[0]._0_4_ = 4294967295;
            lVar18 = pCVar8->field_52872.GetMarketPriceForObj(local_150, *piVar17);
            uVar7 = *(uint32_t*)(lVar18 + 8);
            iVar1 = field_104092;
            field_104092 = iVar1 + 1;
            puVar16 = (uint32_t*)(*this_00)[(long)iVar1];
            uVar2 = local_150[0]._0_4_;
            *puVar16 = uVar7;
            iVar1 = field_104092;
            field_104092 = iVar1 + 1;
            puVar16 = (uint32_t*)(*this_00)[(long)iVar1];
            *puVar16 = uVar2;
            goto LAB_10016398f;
        case 3939:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            piVar17 = &field_100092[uVar23];
            local_150 = configdecoder::ObjType::List(*piVar17);
            cVar4 = shared_ptr::operator_cast_to_bool(&local_150);
            uVar6 = 0;
            if (cVar4) {
                lVar18 = local_150.operator->();
                uVar6 = (unsigned int)*(uint8_t*)(lVar18 + 825);
            }
        LAB_1001636cf:
            iVar1 = field_104092;
            field_104092 = iVar1 + 1;
            puVar19 = &field_100092[(long)iVar1];
            *puVar19 = uVar6;
            goto LAB_10016398f;
        }
        iVar1 = field_104092;
        field_104092 = iVar1 + 1;
        puVar19 = &field_100092[(long)iVar1];
        *puVar19 = uVar6;
    LAB_10016398f:
        uVar24 = 1;
    switchD_100162ea2_caseD_f45:
        return uVar24;
    }

} // namespace jag::oldscape
