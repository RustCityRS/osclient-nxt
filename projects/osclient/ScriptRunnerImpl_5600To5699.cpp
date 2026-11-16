// projects/osclient/ScriptRunnerImpl_5600To5699.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x100168690
    uint64_t ScriptRunnerImpl::ExecuteCommand5600To5699(ScriptOp scriptOp, const ClientScript& clientScript,
                                                        bool arg3) {
        unsigned long uVar1;
        bool cVar2;
        uint8_t bVar3;
        uint32_t uVar4;
        eastl* this_01;
        __2* arg1;
        uint32_t* puVar5;
        eastl::string* pbVar6;
        shared_ptr<ApplicationContext>* psVar7;
        long* plVar8;
        uint64_t uVar9;
        int iVar10;
        function<bool()> local_68[56];
        long local_30;

        auto this_00 = Client::Instance();
        switch (scriptOp) {
        case 5630:
            this_00->field_54156 = 250;
            break;
        case 5631:
            iVar10 = field_136096;
            uVar1 = (long)iVar10 - 2;
            field_136096 = (int)uVar1;
            pbVar6 = &field_104096[uVar1];
            this_01 = &field_104096[(long)iVar10 - 1];
            cVar2 = *this_01 == "create";
            iVar10 = 1;
            if (!cVar2) {
                bVar3 = *this_01 == "link";
                iVar10 = (unsigned int)bVar3 * 2;
            }
            uVar4 = StringToPartner(pbVar6);
            psVar7 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)this_00)(this_00);
            plVar8 = (long*)(*psVar7).operator->();
            arg1 = (__2*)(**(void (**)(...))(*plVar8 + 72))(plVar8);
            std::function<bool()>::function<
                ScriptRunnerImpl::ExecuteCommand5600To5699(ScriptOp, ClientScript const&, bool)::__2, void>(local_68,
                                                                                                            arg1);
            (**(void (**)(...))(*(long*)arg1 + 80))(arg1, iVar10, uVar4);
            this_00->AddScheduledFunction(*local_68, 50, -81510653847666687);
            break;
        case 5632:
            psVar7 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)this_00)(this_00);
            plVar8 = (long*)(*psVar7).operator->();
            plVar8 = (long*)(**(void (**)(...))(*plVar8 + 72))(plVar8);
            uVar4 = (**(void (**)(...))(*plVar8 + 512))(plVar8);
            iVar10 = field_104092;
            field_104092 = iVar10 + 1;
            puVar5 = &field_100092[(long)iVar10];
            *puVar5 = uVar4;
            break;
        case 5633:
            iVar10 = field_136096;
            uVar1 = (long)iVar10 - 2;
            field_136096 = (int)uVar1;
            pbVar6 = &field_104096[uVar1];
            uVar9 = field_104096[(long)iVar10 - 1];
            psVar7 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)this_00)(this_00);
            plVar8 = (long*)(*psVar7).operator->();
            plVar8 = (long*)(**(void (**)(...))(*plVar8 + 72))(plVar8);
            uVar4 = StringToPartner(pbVar6);
            (**(void (**)(...))(*plVar8 + 144))(plVar8, uVar4, uVar9);
            break;
        default:
            uVar9 = 2;
            goto LAB_10016887f;
        }
        uVar9 = 1;
    LAB_10016887f:
        return uVar9;
    }

} // namespace jag::oldscape
