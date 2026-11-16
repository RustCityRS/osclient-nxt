// projects/osclient/ScriptRunnerImpl_3900To3999.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x100162e50, 3200 bytes, placed by class name and debug map
    // ScriptRunnerImpl::ExecuteCommand3900To3999(ScriptOp, ClientScript const&, bool)
    undefined8 ScriptRunnerImpl::ExecuteCommand3900To3999(long param_1, undefined4 param_2) {
        array<int, 1000ul>* this;
        int iVar1;
        byte bVar2;
        bool bVar3;
        char cVar4;
        uint uVar5;
        undefined4 uVar6;
        long lVar7;
        TextRun* this_00;
        ActiveOffer* pAVar8;
        basic_string* pbVar9;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* this_01;
        long lVar10;
        long lVar11;
        eastl::string* pbVar12;
        CommandLine* pCVar13;
        ActiveOffersReply* pAVar14;
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                    eastl::allocator>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>* pcVar15;
        CoordMapSquare* this_02;
        undefined4* puVar16;
        int* piVar17;
        uint* puVar18;
        unique_ptr<rs2lib::ActiveOffersReply, eastl::default_delete<rs2lib::ActiveOffersReply>>* puVar19;
        StockPlayerOffer* pSVar20;
        Minimap* this_03;
        int iVar21;
        ulong uVar22;
        undefined8 uVar23;
        int local_150[9];
        int local_12c;
        function<bool(rs2lib::ActiveOffersReply::ActiveOffer_const&, rs2lib::ActiveOffersReply::ActiveOffer_const&)>
            local_128[48];
        function<bool(rs2lib::ActiveOffersReply::ActiveOffer_const&, rs2lib::ActiveOffersReply::ActiveOffer_const&)>
            local_f8[48];
        function<bool(rs2lib::ActiveOffersReply::ActiveOffer_const&, rs2lib::ActiveOffersReply::ActiveOffer_const&)>
            local_c8[48];
        function<bool(rs2lib::ActiveOffersReply::ActiveOffer_const&, rs2lib::ActiveOffersReply::ActiveOffer_const&)>
            local_98[48];
        function<bool(rs2lib::ActiveOffersReply::ActiveOffer_const&, rs2lib::ActiveOffersReply::ActiveOffer_const&)>
            local_68[48];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        uVar23 = 2;
        lVar7 = Client::Instance();
        switch (param_2) {
        case 3903:
            uVar22 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar22;
            piVar17 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar22);
            puVar19 = (unique_ptr<rs2lib::ActiveOffersReply, eastl::default_delete<rs2lib::ActiveOffersReply>>*)
                std::array<eastl::unique_ptr<rs2lib::StockPlayerOffer, eastl::default_delete<rs2lib::StockPlayerOffer>>,
                           8ul>::operator[]((array<eastl::unique_ptr<rs2lib::StockPlayerOffer,
                                                                     eastl::default_delete<rs2lib::StockPlayerOffer>>,
                                                   8ul>*)(lVar7 + 52784),
                                            (long)*piVar17);
            pSVar20 = (StockPlayerOffer*)
                          eastl::unique_ptr<rs2lib::ActiveOffersReply,
                                            eastl::default_delete<rs2lib::ActiveOffersReply>>::operator->(puVar19);
            bVar2 = pSVar20->GetOfferType();
            uVar5 = (uint)bVar2;
            break;
        case 3904:
            uVar22 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar22;
            piVar17 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar22);
            puVar19 = (unique_ptr<rs2lib::ActiveOffersReply, eastl::default_delete<rs2lib::ActiveOffersReply>>*)
                std::array<eastl::unique_ptr<rs2lib::StockPlayerOffer, eastl::default_delete<rs2lib::StockPlayerOffer>>,
                           8ul>::operator[]((array<eastl::unique_ptr<rs2lib::StockPlayerOffer,
                                                                     eastl::default_delete<rs2lib::StockPlayerOffer>>,
                                                   8ul>*)(lVar7 + 52784),
                                            (long)*piVar17);
            this_02 = (CoordMapSquare*)
                          eastl::unique_ptr<rs2lib::ActiveOffersReply,
                                            eastl::default_delete<rs2lib::ActiveOffersReply>>::operator->(puVar19);
            goto LAB_100163588;
        case 3905:
            uVar22 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar22;
            piVar17 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar22);
            puVar19 = (unique_ptr<rs2lib::ActiveOffersReply, eastl::default_delete<rs2lib::ActiveOffersReply>>*)
                std::array<eastl::unique_ptr<rs2lib::StockPlayerOffer, eastl::default_delete<rs2lib::StockPlayerOffer>>,
                           8ul>::operator[]((array<eastl::unique_ptr<rs2lib::StockPlayerOffer,
                                                                     eastl::default_delete<rs2lib::StockPlayerOffer>>,
                                                   8ul>*)(lVar7 + 52784),
                                            (long)*piVar17);
            pCVar13 =
                (CommandLine*)eastl::unique_ptr<rs2lib::ActiveOffersReply,
                                                eastl::default_delete<rs2lib::ActiveOffersReply>>::operator->(puVar19);
            goto LAB_100163537;
        case 3906:
            uVar22 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar22;
            piVar17 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar22);
            puVar19 = (unique_ptr<rs2lib::ActiveOffersReply, eastl::default_delete<rs2lib::ActiveOffersReply>>*)
                std::array<eastl::unique_ptr<rs2lib::StockPlayerOffer, eastl::default_delete<rs2lib::StockPlayerOffer>>,
                           8ul>::operator[]((array<eastl::unique_ptr<rs2lib::StockPlayerOffer,
                                                                     eastl::default_delete<rs2lib::StockPlayerOffer>>,
                                                   8ul>*)(lVar7 + 52784),
                                            (long)*piVar17);
            this_03 =
                (Minimap*)eastl::unique_ptr<rs2lib::ActiveOffersReply,
                                            eastl::default_delete<rs2lib::ActiveOffersReply>>::operator->(puVar19);
            goto LAB_10016396a;
        case 3907:
            uVar22 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar22;
            piVar17 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar22);
            puVar19 = (unique_ptr<rs2lib::ActiveOffersReply, eastl::default_delete<rs2lib::ActiveOffersReply>>*)
                std::array<eastl::unique_ptr<rs2lib::StockPlayerOffer, eastl::default_delete<rs2lib::StockPlayerOffer>>,
                           8ul>::operator[]((array<eastl::unique_ptr<rs2lib::StockPlayerOffer,
                                                                     eastl::default_delete<rs2lib::StockPlayerOffer>>,
                                                   8ul>*)(lVar7 + 52784),
                                            (long)*piVar17);
            this_00 =
                (TextRun*)eastl::unique_ptr<rs2lib::ActiveOffersReply,
                                            eastl::default_delete<rs2lib::ActiveOffersReply>>::operator->(puVar19);
            uVar5 = this_00->GetMaxLineWidth();
            break;
        case 3908:
            uVar22 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar22;
            piVar17 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar22);
            puVar19 = (unique_ptr<rs2lib::ActiveOffersReply, eastl::default_delete<rs2lib::ActiveOffersReply>>*)
                std::array<eastl::unique_ptr<rs2lib::StockPlayerOffer, eastl::default_delete<rs2lib::StockPlayerOffer>>,
                           8ul>::operator[]((array<eastl::unique_ptr<rs2lib::StockPlayerOffer,
                                                                     eastl::default_delete<rs2lib::StockPlayerOffer>>,
                                                   8ul>*)(lVar7 + 52784),
                                            (long)*piVar17);
            pSVar20 = (StockPlayerOffer*)
                          eastl::unique_ptr<rs2lib::ActiveOffersReply,
                                            eastl::default_delete<rs2lib::ActiveOffersReply>>::operator->(puVar19);
            uVar5 = pSVar20->GetCompletedGold();
            break;
        default:
            goto switchD_100162ea2_caseD_f45;
        case 3910:
            uVar22 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar22;
            piVar17 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar22);
            puVar19 = (unique_ptr<rs2lib::ActiveOffersReply, eastl::default_delete<rs2lib::ActiveOffersReply>>*)
                std::array<eastl::unique_ptr<rs2lib::StockPlayerOffer, eastl::default_delete<rs2lib::StockPlayerOffer>>,
                           8ul>::operator[]((array<eastl::unique_ptr<rs2lib::StockPlayerOffer,
                                                                     eastl::default_delete<rs2lib::StockPlayerOffer>>,
                                                   8ul>*)(lVar7 + 52784),
                                            (long)*piVar17);
            pSVar20 = (StockPlayerOffer*)
                          eastl::unique_ptr<rs2lib::ActiveOffersReply,
                                            eastl::default_delete<rs2lib::ActiveOffersReply>>::operator->(puVar19);
            cVar4 = pSVar20->GetOfferStatus();
            uVar5 = (uint)(cVar4 == '\0');
            break;
        case 3911:
            uVar22 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar22;
            piVar17 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar22);
            puVar19 = (unique_ptr<rs2lib::ActiveOffersReply, eastl::default_delete<rs2lib::ActiveOffersReply>>*)
                std::array<eastl::unique_ptr<rs2lib::StockPlayerOffer, eastl::default_delete<rs2lib::StockPlayerOffer>>,
                           8ul>::operator[]((array<eastl::unique_ptr<rs2lib::StockPlayerOffer,
                                                                     eastl::default_delete<rs2lib::StockPlayerOffer>>,
                                                   8ul>*)(lVar7 + 52784),
                                            (long)*piVar17);
            pSVar20 = (StockPlayerOffer*)
                          eastl::unique_ptr<rs2lib::ActiveOffersReply,
                                            eastl::default_delete<rs2lib::ActiveOffersReply>>::operator->(puVar19);
            cVar4 = pSVar20->GetOfferStatus();
            uVar5 = (uint)(cVar4 == '\x02');
            break;
        case 3912:
            uVar22 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar22;
            piVar17 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar22);
            puVar19 = (unique_ptr<rs2lib::ActiveOffersReply, eastl::default_delete<rs2lib::ActiveOffersReply>>*)
                std::array<eastl::unique_ptr<rs2lib::StockPlayerOffer, eastl::default_delete<rs2lib::StockPlayerOffer>>,
                           8ul>::operator[]((array<eastl::unique_ptr<rs2lib::StockPlayerOffer,
                                                                     eastl::default_delete<rs2lib::StockPlayerOffer>>,
                                                   8ul>*)(lVar7 + 52784),
                                            (long)*piVar17);
            pSVar20 = (StockPlayerOffer*)
                          eastl::unique_ptr<rs2lib::ActiveOffersReply,
                                            eastl::default_delete<rs2lib::ActiveOffersReply>>::operator->(puVar19);
            cVar4 = pSVar20->GetOfferStatus();
            uVar5 = (uint)(cVar4 == '\x05');
            break;
        case 3913:
            uVar22 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar22;
            piVar17 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar22);
            puVar19 = (unique_ptr<rs2lib::ActiveOffersReply, eastl::default_delete<rs2lib::ActiveOffersReply>>*)
                std::array<eastl::unique_ptr<rs2lib::StockPlayerOffer, eastl::default_delete<rs2lib::StockPlayerOffer>>,
                           8ul>::operator[]((array<eastl::unique_ptr<rs2lib::StockPlayerOffer,
                                                                     eastl::default_delete<rs2lib::StockPlayerOffer>>,
                                                   8ul>*)(lVar7 + 52784),
                                            (long)*piVar17);
            pSVar20 = (StockPlayerOffer*)
                          eastl::unique_ptr<rs2lib::ActiveOffersReply,
                                            eastl::default_delete<rs2lib::ActiveOffersReply>>::operator->(puVar19);
            cVar4 = pSVar20->GetOfferStatus();
            uVar5 = (uint)(cVar4 == '\x01');
            break;
        case 3914:
            uVar22 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar22;
            piVar17 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar22);
            iVar1 = *piVar17;
            bVar3 = eastl::operator!=((unique_ptr*)(lVar7 + 52848), (_func_decltype_nullptr*)0);
            uVar23 = 1;
            if (bVar3) {
                pAVar14 =
                    (ActiveOffersReply*)
                        eastl::unique_ptr<rs2lib::ActiveOffersReply, eastl::default_delete<rs2lib::ActiveOffersReply>>::
                        operator->((unique_ptr<rs2lib::ActiveOffersReply,
                                               eastl::default_delete<rs2lib::ActiveOffersReply>>*)(lVar7 + 52848));
                std::function<bool(rs2lib::ActiveOffersReply::ActiveOffer_const&,
                                   rs2lib::ActiveOffersReply::ActiveOffer_const&)>::
                    function(local_68, (function*)&rs2lib::ActiveOffersReply::compareByDisplayName);
                pAVar14->SortList(local_68, iVar1 == 1);
                std::function<bool(rs2lib::ActiveOffersReply::ActiveOffer_const&,
                                   rs2lib::ActiveOffersReply::ActiveOffer_const&)>::~function(local_68);
            }
            goto switchD_100162ea2_caseD_f45;
        case 3915:
            uVar22 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar22;
            piVar17 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar22);
            iVar1 = *piVar17;
            bVar3 = eastl::operator!=((unique_ptr*)(lVar7 + 52848), (_func_decltype_nullptr*)0);
            uVar23 = 1;
            if (bVar3) {
                pAVar14 =
                    (ActiveOffersReply*)
                        eastl::unique_ptr<rs2lib::ActiveOffersReply, eastl::default_delete<rs2lib::ActiveOffersReply>>::
                        operator->((unique_ptr<rs2lib::ActiveOffersReply,
                                               eastl::default_delete<rs2lib::ActiveOffersReply>>*)(lVar7 + 52848));
                std::function<bool(rs2lib::ActiveOffersReply::ActiveOffer_const&,
                                   rs2lib::ActiveOffersReply::ActiveOffer_const&)>::
                    function(local_98, (function*)&rs2lib::ActiveOffersReply::compareByPrice);
                pAVar14->SortList(local_98, iVar1 == 1);
                std::function<bool(rs2lib::ActiveOffersReply::ActiveOffer_const&,
                                   rs2lib::ActiveOffersReply::ActiveOffer_const&)>::~function(local_98);
            }
            goto switchD_100162ea2_caseD_f45;
        case 3916:
            iVar1 = *(int*)(param_1 + 104092);
            uVar22 = (long)iVar1 - 2;
            *(int*)(param_1 + 104092) = (int)uVar22;
            piVar17 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar22);
            local_12c = *piVar17;
            piVar17 =
                (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar1 - 1);
            iVar1 = *piVar17;
            bVar3 = eastl::operator!=((unique_ptr*)(lVar7 + 52848), (_func_decltype_nullptr*)0);
            uVar23 = 1;
            if (bVar3) {
                bVar3 = local_12c == 1;
                *(bool*)(lVar7 + 52864) = iVar1 == 1;
                pAVar14 =
                    (ActiveOffersReply*)
                        eastl::unique_ptr<rs2lib::ActiveOffersReply, eastl::default_delete<rs2lib::ActiveOffersReply>>::
                        operator->((unique_ptr<rs2lib::ActiveOffersReply,
                                               eastl::default_delete<rs2lib::ActiveOffersReply>>*)(lVar7 + 52848));
                std::function<bool(rs2lib::ActiveOffersReply::ActiveOffer_const&,
                                   rs2lib::ActiveOffersReply::ActiveOffer_const&)>::
                    function<Client::StockMarketOfferComparator, void>(local_c8, *(undefined4*)(lVar7 + 52864));
                pAVar14->SortList(local_c8, bVar3);
                std::function<bool(rs2lib::ActiveOffersReply::ActiveOffer_const&,
                                   rs2lib::ActiveOffersReply::ActiveOffer_const&)>::~function(local_c8);
            }
            goto switchD_100162ea2_caseD_f45;
        case 3917:
            uVar22 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar22;
            piVar17 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar22);
            iVar1 = *piVar17;
            bVar3 = eastl::operator!=((unique_ptr*)(lVar7 + 52848), (_func_decltype_nullptr*)0);
            uVar23 = 1;
            if (bVar3) {
                pAVar14 =
                    (ActiveOffersReply*)
                        eastl::unique_ptr<rs2lib::ActiveOffersReply, eastl::default_delete<rs2lib::ActiveOffersReply>>::
                        operator->((unique_ptr<rs2lib::ActiveOffersReply,
                                               eastl::default_delete<rs2lib::ActiveOffersReply>>*)(lVar7 + 52848));
                std::function<bool(rs2lib::ActiveOffersReply::ActiveOffer_const&,
                                   rs2lib::ActiveOffersReply::ActiveOffer_const&)>::
                    function(local_f8, (function*)&rs2lib::ActiveOffersReply::compareByOfferMade);
                pAVar14->SortList(local_f8, iVar1 == 1);
                std::function<bool(rs2lib::ActiveOffersReply::ActiveOffer_const&,
                                   rs2lib::ActiveOffersReply::ActiveOffer_const&)>::~function(local_f8);
            }
            goto switchD_100162ea2_caseD_f45;
        case 3918:
            uVar22 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar22;
            piVar17 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar22);
            iVar1 = *piVar17;
            bVar3 = eastl::operator!=((unique_ptr*)(lVar7 + 52848), (_func_decltype_nullptr*)0);
            uVar23 = 1;
            if (bVar3) {
                pAVar14 =
                    (ActiveOffersReply*)
                        eastl::unique_ptr<rs2lib::ActiveOffersReply, eastl::default_delete<rs2lib::ActiveOffersReply>>::
                        operator->((unique_ptr<rs2lib::ActiveOffersReply,
                                               eastl::default_delete<rs2lib::ActiveOffersReply>>*)(lVar7 + 52848));
                std::function<bool(rs2lib::ActiveOffersReply::ActiveOffer_const&,
                                   rs2lib::ActiveOffersReply::ActiveOffer_const&)>::
                    function(local_128, (function*)&rs2lib::ActiveOffersReply::compareByCount);
                pAVar14->SortList(local_128, iVar1 == 1);
                std::function<bool(rs2lib::ActiveOffersReply::ActiveOffer_const&,
                                   rs2lib::ActiveOffersReply::ActiveOffer_const&)>::~function(local_128);
            }
            goto switchD_100162ea2_caseD_f45;
        case 3919:
            uVar6 = 0;
            bVar3 = eastl::operator==((unique_ptr*)(lVar7 + 52848), (_func_decltype_nullptr*)0);
            if (!bVar3) {
                pAVar14 =
                    (ActiveOffersReply*)
                        eastl::unique_ptr<rs2lib::ActiveOffersReply, eastl::default_delete<rs2lib::ActiveOffersReply>>::
                        operator->((unique_ptr<rs2lib::ActiveOffersReply,
                                               eastl::default_delete<rs2lib::ActiveOffersReply>>*)(lVar7 + 52848));
                uVar6 = pAVar14->GetActiveOfferCount();
            }
            iVar1 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar1 + 1;
            puVar16 =
                (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar1);
            *puVar16 = uVar6;
            goto LAB_10016398f;
        case 3920:
            uVar22 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar22;
            puVar18 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar22);
            uVar5 = *puVar18;
            pAVar14 =
                (ActiveOffersReply*)eastl::
                    unique_ptr<rs2lib::ActiveOffersReply, eastl::default_delete<rs2lib::ActiveOffersReply>>::operator->(
                        (unique_ptr<rs2lib::ActiveOffersReply,
                                    eastl::default_delete<rs2lib::ActiveOffersReply>>*)(lVar7 + 52848));
            pCVar13 = (CommandLine*)pAVar14->GetActiveOffer(uVar5);
            uVar5 = pCVar13->GetPos();
            break;
        case 3921:
            uVar22 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar22;
            puVar18 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar22);
            uVar5 = *puVar18;
            pAVar14 =
                (ActiveOffersReply*)eastl::
                    unique_ptr<rs2lib::ActiveOffersReply, eastl::default_delete<rs2lib::ActiveOffersReply>>::operator->(
                        (unique_ptr<rs2lib::ActiveOffersReply,
                                    eastl::default_delete<rs2lib::ActiveOffersReply>>*)(lVar7 + 52848));
            pAVar8 = (ActiveOffer*)pAVar14->GetActiveOffer(uVar5);
            pbVar9 = (basic_string*)pAVar8->getDisplayName();
            goto LAB_1001638f9;
        case 3922:
            uVar22 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar22;
            puVar18 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar22);
            uVar5 = *puVar18;
            pAVar14 =
                (ActiveOffersReply*)eastl::
                    unique_ptr<rs2lib::ActiveOffersReply, eastl::default_delete<rs2lib::ActiveOffersReply>>::operator->(
                        (unique_ptr<rs2lib::ActiveOffersReply,
                                    eastl::default_delete<rs2lib::ActiveOffersReply>>*)(lVar7 + 52848));
            pAVar8 = (ActiveOffer*)pAVar14->GetActiveOffer(uVar5);
            pbVar9 = (basic_string*)pAVar8->getOldDisplayName();
        LAB_1001638f9:
            iVar1 = *(int*)(param_1 + 136096);
            *(int*)(param_1 + 136096) = iVar1 + 1;
            pbVar12 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), (long)iVar1);
            eastl::string::operator=(pbVar12, pbVar9);
            goto LAB_10016398f;
        case 3923:
            uVar22 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar22;
            puVar18 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar22);
            uVar5 = *puVar18;
            pAVar14 =
                (ActiveOffersReply*)eastl::
                    unique_ptr<rs2lib::ActiveOffersReply, eastl::default_delete<rs2lib::ActiveOffersReply>>::operator->(
                        (unique_ptr<rs2lib::ActiveOffersReply,
                                    eastl::default_delete<rs2lib::ActiveOffersReply>>*)(lVar7 + 52848));
            this_01 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                             std::default_delete<LoadingScreenScript::AnimLayer>>,
                             eastl::allocator>*)pAVar14->GetActiveOffer(uVar5);
            lVar10 = pAVar14->CurrentTimeMillis();
            lVar7 = *(long*)(lVar7 + 52856);
            lVar11 = this_01->data();
            lVar10 = lVar10 - (lVar11 + lVar7);
            uVar22 = lVar10 / 3600000;
            lVar10 = lVar10 - ((long)(uVar22 * 15461882265600000) >> 32);
            lVar7 = lVar10 / 60000;
            iVar1 = (int)((lVar10 - (lVar7 * 257698037760000 >> 32)) / 1000);
            new (local_150) eastl::string();
            iVar21 = (int)lVar7;
            eastl::string::sprintf((char*)local_150, "%i:%i:%i", uVar22 & 4294967295,
                                   (ulong)(uint)(iVar21 + (iVar21 / 10) * -9),
                                   (ulong)(uint)(iVar1 + (iVar1 / 10) * -9));
            iVar1 = *(int*)(param_1 + 136096);
            *(int*)(param_1 + 136096) = iVar1 + 1;
            pbVar12 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), (long)iVar1);
            eastl::string::operator=(pbVar12, (basic_string*)local_150);
            local_150->~basic_string();
            goto LAB_10016398f;
        case 3924:
            uVar22 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar22;
            puVar18 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar22);
            uVar5 = *puVar18;
            pAVar14 =
                (ActiveOffersReply*)eastl::
                    unique_ptr<rs2lib::ActiveOffersReply, eastl::default_delete<rs2lib::ActiveOffersReply>>::operator->(
                        (unique_ptr<rs2lib::ActiveOffersReply,
                                    eastl::default_delete<rs2lib::ActiveOffersReply>>*)(lVar7 + 52848));
            pcVar15 =
                (compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                             eastl::allocator>>::Layout,
                                     eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>*)
                    pAVar14->GetActiveOffer(uVar5);
            this_03 = (Minimap*)eastl::compressed_pair_imp<
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
                eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>::second(pcVar15);
        LAB_10016396a:
            uVar5 = this_03->GetLevel();
            break;
        case 3925:
            uVar22 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar22;
            puVar18 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar22);
            uVar5 = *puVar18;
            pAVar14 =
                (ActiveOffersReply*)eastl::
                    unique_ptr<rs2lib::ActiveOffersReply, eastl::default_delete<rs2lib::ActiveOffersReply>>::operator->(
                        (unique_ptr<rs2lib::ActiveOffersReply,
                                    eastl::default_delete<rs2lib::ActiveOffersReply>>*)(lVar7 + 52848));
            pcVar15 =
                (compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                             eastl::allocator>>::Layout,
                                     eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>*)
                    pAVar14->GetActiveOffer(uVar5);
            pCVar13 = (CommandLine*)eastl::compressed_pair_imp<
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
                eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>::second(pcVar15);
        LAB_100163537:
            uVar5 = pCVar13->GetPos();
            break;
        case 3926:
            uVar22 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar22;
            puVar18 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar22);
            uVar5 = *puVar18;
            pAVar14 =
                (ActiveOffersReply*)eastl::
                    unique_ptr<rs2lib::ActiveOffersReply, eastl::default_delete<rs2lib::ActiveOffersReply>>::operator->(
                        (unique_ptr<rs2lib::ActiveOffersReply,
                                    eastl::default_delete<rs2lib::ActiveOffersReply>>*)(lVar7 + 52848));
            pcVar15 =
                (compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                             eastl::allocator>>::Layout,
                                     eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>*)
                    pAVar14->GetActiveOffer(uVar5);
            this_02 = (CoordMapSquare*)eastl::compressed_pair_imp<
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
                eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>::second(pcVar15);
        LAB_100163588:
            uVar5 = this_02->GetZ();
            break;
        case 3931:
            uVar22 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar22;
            piVar17 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar22);
            local_150->List(*piVar17);
            bVar3 = local_150->operator_cast_to_bool();
            uVar5 = 0;
            if (bVar3) {
                lVar7 = shared_ptr<configdecoder::ObjType>::operator->((shared_ptr<configdecoder::ObjType>*)local_150);
                uVar5 = (uint) * (byte*)(lVar7 + 824);
            }
            goto LAB_1001636cf;
        case 3932:
            this = (array<int, 1000ul>*)(param_1 + 100092);
            uVar22 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar22;
            piVar17 = (int*)std::array<int, 1000ul>::operator[](this, uVar22);
            local_150[0] = -1;
            lVar7 = ((lVar7 + 52872))->GetMarketPriceForObj(local_150, *piVar17);
            uVar6 = *(undefined4*)(lVar7 + 8);
            iVar1 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar1 + 1;
            puVar16 = (undefined4*)std::array<int, 1000ul>::operator[](this, (long)iVar1);
            iVar21 = local_150[0];
            *puVar16 = uVar6;
            iVar1 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar1 + 1;
            piVar17 = (int*)std::array<int, 1000ul>::operator[](this, (long)iVar1);
            *piVar17 = iVar21;
            goto LAB_10016398f;
        case 3939:
            uVar22 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar22;
            piVar17 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar22);
            local_150->List(*piVar17);
            bVar3 = local_150->operator_cast_to_bool();
            uVar5 = 0;
            if (bVar3) {
                lVar7 = shared_ptr<configdecoder::ObjType>::operator->((shared_ptr<configdecoder::ObjType>*)local_150);
                uVar5 = (uint) * (byte*)(lVar7 + 825);
            }
        LAB_1001636cf:
            iVar1 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar1 + 1;
            puVar18 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar1);
            *puVar18 = uVar5;
            local_150->~shared_ptr();
            goto LAB_10016398f;
        }
        iVar1 = *(int*)(param_1 + 104092);
        *(int*)(param_1 + 104092) = iVar1 + 1;
        puVar18 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar1);
        *puVar18 = uVar5;
    LAB_10016398f:
        uVar23 = 1;
    switchD_100162ea2_caseD_f45:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar23;
    }

} // namespace jag::oldscape
