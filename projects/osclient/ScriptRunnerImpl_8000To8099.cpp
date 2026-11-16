// projects/osclient/ScriptRunnerImpl_8000To8099.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x1000baeb0, 560 bytes, placed by class name and debug map
    // ScriptRunnerImpl::ExecuteCommand8000To8099(ScriptOp, ClientScript const&, bool)
    undefined8 ScriptRunnerImpl::ExecuteCommand8000To8099(long param_1, int param_2) {
        array<int, 1000ul>* this;
        int iVar1;
        int iVar2;
        int iVar3;
        undefined8 uVar4;
        int* piVar5;
        void* pvVar6;
        ulong uVar7;
        long lVar8;
        array<int, 5000ul> local_4e78[20000];
        random_device local_58[24];
        int local_40;
        int local_3c;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (param_2 == 8001) {
            lVar8 = (long)*(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = (int)(lVar8 - 3U);
            this = (array<int, 1000ul>*)(param_1 + 100092);
            piVar5 = (int*)std::array<int, 1000ul>::operator[](this, lVar8 - 3U);
            iVar1 = *piVar5;
            piVar5 = (int*)std::array<int, 1000ul>::operator[](this, lVar8 - 2);
            iVar2 = *piVar5;
            piVar5 = (int*)std::array<int, 1000ul>::operator[](this, lVar8 - 1);
            iVar3 = *piVar5;
            pvVar6 = (void*)std::array<std::array<int, 5000ul>, 5ul>::operator[](
                (array<std::array<int, 5000ul>, 5ul>*)(param_1 + 92), (long)iVar1);
            _memcpy(local_4e78, pvVar6, 20000);
            piVar5 = (int*)std::array<int, 5ul>::operator[]((array<int, 5ul>*)(param_1 + 72), (long)iVar1);
            iVar1 = *piVar5;
            if (iVar2 == 0 && iVar3 == 0) {
                std::random_device::random_device(local_58);
                iVar2 = std::random_device::operator()(local_58);
                iVar3 = std::random_device::operator()(local_58);
                std::random_device::~random_device(local_58);
            }
            local_40 = iVar2;
            local_3c = iVar3;
            std::seed_seq::seed_seq<unsigned int>((seed_seq*)local_58, &local_40);
            piVar5 = (int*)std::array<int, 5000ul>::begin(local_4e78);
            std::linear_congruential_engine<unsigned int, 48271u, 0u, 2147483647u>::linear_congruential_engine<
                std::seed_seq>((seed_seq*)&local_40, (type*)local_58);
            std::shuffle<int*, std::linear_congruential_engine<unsigned int, 48271u, 0u, 2147483647u>>(
                piVar5, piVar5 + iVar1, (linear_congruential_engine*)&local_40);
            _memcpy(pvVar6, local_4e78, 20000);
            local_58->~seed_seq();
        } else {
            uVar4 = 2;
            if (param_2 != 8000)
                goto LAB_1000bb085;
            uVar7 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar7;
            piVar5 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar7);
            iVar1 = *piVar5;
            pvVar6 = (void*)std::array<std::array<int, 5000ul>, 5ul>::operator[](
                (array<std::array<int, 5000ul>, 5ul>*)(param_1 + 92), (long)iVar1);
            _memcpy(local_4e78, pvVar6, 20000);
            piVar5 = (int*)std::array<int, 5ul>::operator[]((array<int, 5ul>*)(param_1 + 72), (long)iVar1);
            iVar1 = *piVar5;
            piVar5 = (int*)std::array<int, 5000ul>::begin(local_4e78);
            std::sort<int*>(piVar5, piVar5 + iVar1);
            _memcpy(pvVar6, local_4e78, 20000);
        }
        uVar4 = 1;
    LAB_1000bb085:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar4;
    }

} // namespace jag::oldscape
