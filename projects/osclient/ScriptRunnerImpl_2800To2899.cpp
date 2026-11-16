// projects/osclient/ScriptRunnerImpl_2800To2899.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x10015b510, 496 bytes, placed by class name and debug map
    // ScriptRunnerImpl::ExecuteCommand2800To2899(ScriptOp, ClientScript const&, bool)
    undefined8 ScriptRunnerImpl::ExecuteCommand2800To2899(long param_1, int param_2) {
        array<int, 1000ul>* this;
        bool bVar1;
        char cVar2;
        int iVar3;
        undefined4 uVar4;
        int iVar5;
        int* piVar6;
        shared_ptr* this_00;
        long lVar7;
        Client* this_01;
        undefined4* puVar8;
        eastl::string* this_02;
        basic_string* pbVar9;
        Array<game::VarValue, eastl::allocator>* this_03;
        ulong uVar10;
        undefined1 auVar11[16];

        this = (array<int, 1000ul>*)(param_1 + 100092);
        uVar10 = (long)*(int*)(param_1 + 104092) - 1;
        *(int*)(param_1 + 104092) = (int)uVar10;
        piVar6 = (int*)std::array<int, 1000ul>::operator[](this, uVar10);
        this_00 = (shared_ptr*)rs2lib::IfType::Get(*piVar6);
        bVar1 = operator==(this_00, (_func_decltype_nullptr*)0);
        if (bVar1) {
            ((param_1 + 141000))->Raise(1);
            return 0;
        }
        lVar7 = shared_ptr<rs2lib::IfType>::operator*((shared_ptr<rs2lib::IfType>*)this_00);
        if (param_2 == 2802) {
            pbVar9 = (basic_string*)(lVar7 + 704);
            cVar2 = eastl::basic_string<
                char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
            iVar3 = *(int*)(param_1 + 136096);
            *(int*)(param_1 + 136096) = iVar3 + 1;
            this_02 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), (long)iVar3);
            if (cVar2 == '\0') {
            LAB_10015b6d8:
                eastl::string::operator=(this_02, pbVar9);
                return 1;
            }
        } else {
            if (param_2 != 2801) {
                if (param_2 == 2800) {
                    this_01 = (Client*)Client::Instance();
                    iVar3 = this_01->GetActive(this_00);
                    uVar4 = rs2lib::ServerActive::TargetMask(iVar3);
                    iVar3 = *(int*)(param_1 + 104092);
                    *(int*)(param_1 + 104092) = iVar3 + 1;
                    puVar8 = (undefined4*)std::array<int, 1000ul>::operator[](this, (long)iVar3);
                    *puVar8 = uVar4;
                    return 1;
                }
                return 2;
            }
            uVar10 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar10;
            piVar6 = (int*)std::array<int, 1000ul>::operator[](this, uVar10);
            iVar3 = *piVar6;
            this_03 = (Array<game::VarValue, eastl::allocator>*)(lVar7 + 736);
            cVar2 = this_03->empty();
            if ((cVar2 == '\0') && (iVar5 = this_03->end(), iVar3 <= iVar5)) {
                uVar10 = (long)iVar3 - 1;
                auVar11 = Array<eastl::string, eastl::allocator>::operator[](
                    (Array<eastl::string, eastl::allocator>*)this_03, uVar10);
                bVar1 = eastl::operator==(auVar11._0_8_, (basic_string*)"", auVar11._8_8_);
                if (!bVar1) {
                    pbVar9 = (basic_string*)Array<eastl::string, eastl::allocator>::operator[](
                        (Array<eastl::string, eastl::allocator>*)this_03, uVar10);
                    iVar3 = *(int*)(param_1 + 136096);
                    *(int*)(param_1 + 136096) = iVar3 + 1;
                    this_02 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                        (array<eastl::string, 1000ul>*)(param_1 + 104096), (long)iVar3);
                    goto LAB_10015b6d8;
                }
            }
            iVar3 = *(int*)(param_1 + 136096);
            *(int*)(param_1 + 136096) = iVar3 + 1;
            this_02 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), (long)iVar3);
        }
        eastl::string::assign(this_02, "");
        return 1;
    }

} // namespace jag::oldscape
