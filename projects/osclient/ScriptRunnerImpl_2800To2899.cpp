// projects/osclient/ScriptRunnerImpl_2800To2899.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x10015b510
    uint64_t ScriptRunnerImpl::ExecuteCommand2800To2899(ScriptOp scriptOp, const ClientScript& clientScript,
                                                        bool arg3) {
        bool cVar2;
        int iVar3;
        uint32_t uVar4;
        int iVar5;
        uint32_t* puVar8;
        eastl* this_02;
        eastl::string* this_03;
        eastl::string* this_04;
        Array<game::VarValue>* this_05;

        uint8_t* this_00 = &field_100092;
        unsigned long uVar9 = (long)field_104092 - 1;
        field_104092 = (int)uVar9;
        int* piVar6 = (int*)(*this_00)[uVar9];
        auto objType = rs2lib::IfType::Get(*piVar6);
        if (*objType == nullptr) {
            field_141000->Raise(1);
            return 0;
        }
        long lVar7 = **objType;
        if (scriptOp == 2802) {
            this_04 = (eastl::string*)(lVar7 + 704);
            cVar2 = this_04->empty();
            iVar3 = field_136096;
            field_136096 = iVar3 + 1;
            this_03 = &field_104096[(long)iVar3];
            if (!cVar2) {
            LAB_10015b6d8:
                *this_03 = this_04;
                return 1;
            }
        } else {
            if (scriptOp != 2801) {
                if (scriptOp == 2800) {
                    iVar3 = Client::Instance()->GetActive(*objType);
                    uVar4 = rs2lib::ServerActive::TargetMask(iVar3);
                    iVar3 = field_104092;
                    field_104092 = iVar3 + 1;
                    puVar8 = (uint32_t*)(*this_00)[(long)iVar3];
                    *puVar8 = uVar4;
                    return 1;
                }
                return 2;
            }
            uVar9 = (long)field_104092 - 1;
            field_104092 = (int)uVar9;
            piVar6 = (int*)(*this_00)[uVar9];
            iVar3 = *piVar6;
            this_05 = (Array<game::VarValue>*)(lVar7 + 736);
            cVar2 = this_05->empty();
            if ((!cVar2) && (iVar5 = this_05->end(), iVar3 <= iVar5)) {
                uVar9 = (long)iVar3 - 1;
                this_02 = (eastl*)(*this_05)[uVar9];
                cVar2 = *this_02 == "";
                if (!cVar2) {
                    this_04 = (eastl::string*)(*this_05)[uVar9];
                    iVar3 = field_136096;
                    field_136096 = iVar3 + 1;
                    this_03 = &field_104096[(long)iVar3];
                    goto LAB_10015b6d8;
                }
            }
            iVar3 = field_136096;
            field_136096 = iVar3 + 1;
            this_03 = &field_104096[(long)iVar3];
        }
        eastl::string::assign(this_03, "");
        return 1;
    }

} // namespace jag::oldscape
