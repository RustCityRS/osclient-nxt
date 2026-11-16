// projects/osclient/ScriptRunnerImpl_1900To1999.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x10015a700, 784 bytes, placed by class name and debug map
    // ScriptRunnerImpl::ExecuteCommand1900To1999Or2900To2999(ScriptOp, ClientScript const&, bool, bool)
    undefined8 ScriptRunnerImpl::ExecuteCommand1900To1999Or2900To2999(int param_2, undefined8 param_3, bool param_4,
                                                                      bool param_5) {
        undefined1* this_00;
        int iVar1;
        int iVar2;
        char cVar3;
        bool bVar4;
        int* piVar5;
        shared_ptr* psVar6;
        Client* this_01;
        list<HookReq, eastl::allocator>* this_02;
        long lVar7;
        char* pcVar8;
        int iVar9;
        _func_decltype_nullptr* p_Var10;
        ulong uVar11;
        undefined1 local_c0[120];
        int local_48;
        int local_40;
        undefined4 local_3c;
        undefined4 local_38;
        undefined4 local_34;

        if (param_2 < 2927) {
            if (param_2 == 1927) {
            LAB_10015a753:
                if (field_140996 < 10) {
                    iVar9 = -1;
                    if (param_5 != false) {
                        uVar11 = (long)field_104092 - 1;
                        field_104092 = (int)uVar11;
                        piVar5 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar11);
                        iVar9 = *piVar5;
                    }
                    psVar6 = (shared_ptr*)SafeGetComponent(this, iVar9, param_5, param_4);
                    bVar4 = operator==(psVar6, (_func_decltype_nullptr*)0);
                    if (bVar4) {
                        (&field_141000, 1)->Raise();
                        return 0;
                    }
                    lVar7 = shared_ptr<rs2lib::IfType>::operator*((shared_ptr<rs2lib::IfType>*)psVar6);
                    cVar3 = ((lVar7 + 1648))->empty();
                    if (cVar3 == '\0') {
                        new (local_c0) HookReq();
                        shared_ptr<rs2lib::IfType>::operator=((shared_ptr<rs2lib::IfType>*)(local_c0 + 32), psVar6);
                        Array<HookArg, eastl::allocator>::operator=((Array<HookArg, eastl::allocator>*)local_c0,
                                                                    (Array*)(lVar7 + 1648));
                        local_48 = field_140996 + 1;
                        this_01 = (Client*)Client::Instance();
                        this_02 = (list<HookReq, eastl::allocator>*)this_01->GetHookQueue();
                        eastl::list<HookReq, eastl::allocator>::push_back(this_02, (HookReq*)local_c0);
                        local_c0->~HookReq();
                        return 1;
                    }
                    return 0;
                }
                pcVar8 = "Too many nested clientscript calls via if/cc_callonresize";
                goto LAB_10015a7ac;
            }
            if (param_2 != 1928) {
                return 2;
            }
        } else if (param_2 != 2928) {
            if (param_2 != 2927) {
                return 2;
            }
            goto LAB_10015a753;
        }
        this_00 = &field_100092;
        p_Var10 = (_func_decltype_nullptr*)((long)field_104092 - 1);
        field_104092 = (int)p_Var10;
        piVar5 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)this_00, (ulong)p_Var10);
        iVar9 = *piVar5;
        if (iVar9 - 1U < 10) {
            new (local_c0) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(p_Var10);
            if (param_5 == false) {
                shared_ptr<rs2lib::IfType>::operator=((shared_ptr<rs2lib::IfType>*)local_c0,
                                                      (shared_ptr*)(field_140504 + (ulong)param_4 * 16));
            } else {
                iVar1 = field_104092;
                uVar11 = (long)iVar1 - 2;
                field_104092 = (int)uVar11;
                piVar5 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)this_00, uVar11);
                iVar2 = *piVar5;
                piVar5 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)this_00, (long)iVar1 - 1);
                psVar6 = (shared_ptr*)rs2lib::IfType::Get(iVar2, *piVar5);
                shared_ptr<rs2lib::IfType>::operator=((shared_ptr<rs2lib::IfType>*)local_c0, psVar6);
            }
            bVar4 = local_c0->operator_cast_to_bool();
            if (bVar4) {
                local_40 = iVar9;
                lVar7 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)local_c0);
                local_3c = *(undefined4*)(lVar7 + 4);
                lVar7 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)local_c0);
                local_38 = *(undefined4*)(lVar7 + 8);
                lVar7 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)local_c0);
                local_34 = *(undefined4*)(lVar7 + 1984);
                (&field_140584, (TriggerOpRequest*)&local_40)->push();
                local_c0->~shared_ptr();
                return 1;
            }
            /* WARNING: Subroutine does not return */
            LogAssert("cc",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                      "ScriptRunnerImpl_1900To1999.cpp",
                      71, "if/cc_triggerop: Component not valid");
        }
        pcVar8 = "cc_triggerop opID must be between 1 and 10";
    LAB_10015a7ac:
        (&field_141000, 1, pcVar8)->Raise();
        return 0;
    }

} // namespace jag::oldscape
