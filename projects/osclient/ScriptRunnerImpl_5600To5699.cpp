// projects/osclient/ScriptRunnerImpl_5600To5699.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x100168690, 576 bytes, placed by class name and debug map
    // ScriptRunnerImpl::ExecuteCommand5600To5699(ScriptOp, ClientScript const&, bool)
    undefined8 ScriptRunnerImpl::ExecuteCommand5600To5699(long param_1, undefined4 param_2) {
        ulong uVar1;
        int iVar2;
        bool bVar3;
        undefined4 uVar4;
        Client* this;
        undefined4* puVar5;
        basic_string* pbVar6;
        shared_ptr<ApplicationContext>* psVar7;
        long* plVar8;
        undefined8 uVar9;
        char* extraout_RDX;
        char cVar10;
        undefined1 auVar11[16];
        function local_68[56];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this = (Client*)Client::Instance();
        switch (param_2) {
        case 5630:
            field_54156 = 250;
            break;
        case 5631:
            iVar2 = *(int*)(param_1 + 136096);
            uVar1 = (long)iVar2 - 2;
            *(int*)(param_1 + 136096) = (int)uVar1;
            pbVar6 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), uVar1);
            auVar11 = std::array<eastl::string, 1000ul>::operator[]((array<eastl::string, 1000ul>*)(param_1 + 104096),
                                                                    (long)iVar2 - 1);
            bVar3 = eastl::operator==(auVar11._0_8_, (basic_string*)"create", auVar11._8_8_);
            cVar10 = '\x01';
            if (!bVar3) {
                bVar3 = eastl::operator==(auVar11._0_8_, (basic_string*)"link", extraout_RDX);
                cVar10 = bVar3 * '\x02';
            }
            uVar4 = StringToPartner(pbVar6);
            psVar7 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this)(this);
            plVar8 = (long*)shared_ptr<ApplicationContext>::operator->(psVar7);
            plVar8 = (long*)(**(code**)(*plVar8 + 72))(plVar8);
            std::function<bool()>::function<
                ScriptRunnerImpl::ExecuteCommand5600To5699(ScriptOp, ClientScript_const&, bool)::__2, void>(local_68,
                                                                                                            plVar8);
            (**(code**)(*plVar8 + 80))(plVar8, cVar10, uVar4);
            AddScheduledFunction(local_68, 50, -81510653847666687);
            std::function<bool()>::~function((function<bool()>*)local_68);
            break;
        case 5632:
            psVar7 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this)(this);
            plVar8 = (long*)shared_ptr<ApplicationContext>::operator->(psVar7);
            plVar8 = (long*)(**(code**)(*plVar8 + 72))(plVar8);
            uVar4 = (**(code**)(*plVar8 + 512))(plVar8);
            iVar2 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar2 + 1;
            puVar5 =
                (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar2);
            *puVar5 = uVar4;
            break;
        case 5633:
            iVar2 = *(int*)(param_1 + 136096);
            uVar1 = (long)iVar2 - 2;
            *(int*)(param_1 + 136096) = (int)uVar1;
            pbVar6 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), uVar1);
            uVar9 = std::array<eastl::string, 1000ul>::operator[]((array<eastl::string, 1000ul>*)(param_1 + 104096),
                                                                  (long)iVar2 - 1);
            psVar7 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this)(this);
            plVar8 = (long*)shared_ptr<ApplicationContext>::operator->(psVar7);
            plVar8 = (long*)(**(code**)(*plVar8 + 72))(plVar8);
            uVar4 = StringToPartner(pbVar6);
            (**(code**)(*plVar8 + 144))(plVar8, uVar4, uVar9);
            break;
        default:
            uVar9 = 2;
            goto LAB_10016887f;
        }
        uVar9 = 1;
    LAB_10016887f:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar9;
    }

} // namespace jag::oldscape
