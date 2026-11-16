// projects/osclient/ScriptRunnerImpl_2700To2799.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x10015b2b0, 608 bytes, placed by class name and debug map
    // ScriptRunnerImpl::ExecuteCommand2700To2799(ScriptOp, ClientScript const&, bool)
    undefined8 ScriptRunnerImpl::ExecuteCommand2700To2799(ScriptRunnerImpl* param_1, int param_2) {
        int iVar1;
        bool bVar2;
        byte bVar3;
        undefined4* puVar4;
        uint* puVar5;
        long lVar6;
        int* piVar7;
        shared_ptr* this;
        IfType* this_00;
        CRMViewHandler* this_01;
        hashtable_iterator_base* extraout_RDX;
        uint uVar8;
        ulong uVar9;
        undefined8 uVar10;
        eastl local_58[16];
        hashtable_iterator_base local_48[20];
        undefined4 local_34;

        if (param_2 == 2706) {
            lVar6 = Client::Instance();
            uVar8 = *(uint*)(lVar6 + 53216);
            iVar1 = param_1->field_104092;
            param_1->field_104092 = iVar1 + 1;
            goto LAB_10015b388;
        }
        if (param_2 == 2702) {
            uVar9 = (long)param_1->field_104092 - 1;
            param_1->field_104092 = (int)uVar9;
            puVar4 =
                (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&param_1->field_100092, uVar9);
            local_34 = *puVar4;
            Client::Instance();
            eastl::hashtable<
                int,
                eastl::pair<int const, std::unique_ptr<ChatHistory::HistoryBuffer,
                                                       std::default_delete<ChatHistory::HistoryBuffer>>>,
                eastl::allocator,
                eastl::use_first<
                    eastl::pair<int const, std::unique_ptr<ChatHistory::HistoryBuffer,
                                                           std::default_delete<ChatHistory::HistoryBuffer>>>>,
                eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                eastl::prime_rehash_policy, false, true, true>::find((int*)local_58);
            Client::Instance();
            eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                             eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>,
                             eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
            bVar2 = eastl::operator!=(local_58, local_48, extraout_RDX);
            iVar1 = param_1->field_104092;
            param_1->field_104092 = iVar1 + 1;
            puVar5 =
                (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&param_1->field_100092, (long)iVar1);
            *puVar5 = (uint)bVar2;
            goto LAB_10015b38f;
        }
        uVar9 = (long)param_1->field_104092 - 1;
        param_1->field_104092 = (int)uVar9;
        piVar7 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&param_1->field_100092, uVar9);
        this = (shared_ptr*)rs2lib::IfType::Get(*piVar7);
        bVar2 = operator==(this, (_func_decltype_nullptr*)0);
        if (bVar2) {
            (&param_1->field_141000, 1)->Raise();
            return 0;
        }
        this_00 = (IfType*)shared_ptr<rs2lib::IfType>::operator*((shared_ptr<rs2lib::IfType>*)this);
        uVar10 = 2;
        switch (param_2) {
        case 2700:
            uVar8 = *(uint*)&this_00->field_1984;
            goto LAB_10015b48b;
        case 2701:
            if (*(int*)&this_00->field_1984 != -1) {
                uVar8 = *(uint*)((long)&this_00->field_1984 + 4);
                goto LAB_10015b48b;
            }
            iVar1 = param_1->field_104092;
            param_1->field_104092 = iVar1 + 1;
            puVar4 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&param_1->field_100092,
                                                                      (long)iVar1);
            *puVar4 = 0;
            break;
        default:
            goto switchD_10015b420_caseD_a8e;
        case 2707:
            this_01 = (CRMViewHandler*)this_00->GetCRMViewHandler();
            if ((this_01 == (CRMViewHandler*)0) ||
                (lVar6 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this),
                 *(int*)(lVar6 + 12) != 11)) {
                /* WARNING: Subroutine does not return */
                LogAssert("crmView && ccr->m_type == IfType::CRMVIEW",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                          "ScriptRunnerImpl_2700To2799.cpp",
                          69,
                          "Calling if_getcrm_hasresponse on a component not of type CRMVIEW, or one that failed to "
                          "initialise.");
            }
            bVar3 = this_01->HasSuccessfulResponse();
            uVar8 = (uint)bVar3;
        LAB_10015b48b:
            iVar1 = param_1->field_104092;
            param_1->field_104092 = iVar1 + 1;
        LAB_10015b388:
            puVar5 =
                (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&param_1->field_100092, (long)iVar1);
            *puVar5 = uVar8;
            break;
        case 2708:
            DoGetCrmInt(param_1, this_00);
            break;
        case 2709:
            DoGetCrmString(param_1, this_00);
        }
    LAB_10015b38f:
        uVar10 = 1;
    switchD_10015b420_caseD_a8e:
        return uVar10;
    }

} // namespace jag::oldscape
