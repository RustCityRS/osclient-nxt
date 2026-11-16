// projects/osclient/ScriptRunnerImpl_8000To8099.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x1000baeb0
    uint64_t ScriptRunnerImpl::ExecuteCommand8000To8099(ScriptOp scriptOp, const ClientScript& clientScript,
                                                        bool arg3) {
        uint8_t* this_00;
        int iVar1;
        int iVar2;
        int iVar3;
        uint64_t uVar4;
        int* piVar5;
        void* pvVar6;
        unsigned long arg1;
        long lVar7;
        uint8_t auVar8[16];
        uint8_t local_4e78[20000];
        random_device local_58;
        int local_40;
        int local_3c;

        if (scriptOp == 8001) {
            lVar7 = (long)field_104092;
            field_104092 = (int)(lVar7 - 3U);
            this_00 = &field_100092;
            piVar5 = (int*)(*this_00)[lVar7 - 3U];
            iVar1 = *piVar5;
            piVar5 = (int*)(*this_00)[lVar7 - 2];
            iVar2 = *piVar5;
            piVar5 = (int*)(*this_00)[lVar7 - 1];
            iVar3 = *piVar5;
            pvVar6 = &field_92[(long)iVar1];
            _memcpy(local_4e78, pvVar6, 20000);
            piVar5 = (int*)field_72[(long)iVar1];
            iVar1 = *piVar5;
            if (iVar2 == 0 && iVar3 == 0) {
                local_58 = std::random_device();
                iVar2 = std::random_device::operator()(&local_58);
                iVar3 = std::random_device::operator()(&local_58);
                std::random_device::~random_device(&local_58);
            }
            local_40 = iVar2;
            local_3c = iVar3;
            local_58.seed_seq<unsigned int>(&local_40);
            auVar8 = std::array<int, 5000ul>::begin();
            local_40.linear_congruential_engine<std::seed_seq>(local_58, auVar8._8_8_);
            std::shuffle<int*, std::linear_congruential_engine<unsigned int, 48271u, 0u, 2147483647u>>(
                auVar8._0_8_, auVar8._0_8_ + iVar1, local_40);
            _memcpy(pvVar6, local_4e78, 20000);
        } else {
            uVar4 = 2;
            if (scriptOp != 8000)
                goto LAB_1000bb085;
            arg1 = (long)field_104092 - 1;
            field_104092 = (int)arg1;
            piVar5 = &field_100092[arg1];
            iVar1 = *piVar5;
            pvVar6 = &field_92[(long)iVar1];
            _memcpy(local_4e78, pvVar6, 20000);
            piVar5 = (int*)field_72[(long)iVar1];
            iVar1 = *piVar5;
            piVar5 = (int*)std::array<int, 5000ul>::begin();
            std::sort<int*>(piVar5, piVar5 + iVar1);
            _memcpy(pvVar6, local_4e78, 20000);
        }
        uVar4 = 1;
    LAB_1000bb085:
        return uVar4;
    }

} // namespace jag::oldscape
