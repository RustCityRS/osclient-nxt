// projects/osclient/ScriptRunnerImpl_1800To1899.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x10015a2c0, 992 bytes, placed by class name and debug map
    // ScriptRunnerImpl::ExecuteCommand1800To1899(ScriptOp, ClientScript const&, bool)
    undefined8 ScriptRunnerImpl::ExecuteCommand1800To1899(undefined4 param_2, undefined8 param_3, ulong param_4) {
        undefined1* this_00;
        uint uVar1;
        int iVar3;
        undefined4 uVar4;
        int iVar5;
        long lVar6;
        Client* pCVar7;
        basic_string* pbVar8;
        eastl::string* pbVar9;
        int* piVar10;
        vector<int, eastl::allocator>* this_01;
        undefined4* puVar11;
        uint* puVar12;
        vector<unsigned int, eastl::allocator>* pvVar13;
        undefined8 uVar14;
        undefined8 uVar15;
        shared_ptr* this_02;
        ulong uVar16;
        undefined8 uVar17;
        undefined8 uVar18;

        this_02 = (shared_ptr*)(field_140504 + (param_4 & 4294967295) * 16);
        if (operator==(this_02, (_func_decltype_nullptr*)0)) {
            (&field_141000, 1)->Raise();
            return 0;
        }
        lVar6 = shared_ptr<rs2lib::IfType>::operator*((shared_ptr<rs2lib::IfType>*)this_02);
        uVar18 = 2;
        pCVar7 = (Client*)Client::Instance();
        switch (param_2) {
        case 1800:
            pCVar7 = (Client*)Client::Instance();
            iVar5 = pCVar7->GetActive(this_02);
            uVar4 = rs2lib::ServerActive::TargetMask(iVar5);
            iVar5 = field_104092;
            field_104092 = iVar5 + 1;
            puVar11 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, (long)iVar5);
            *puVar11 = uVar4;
            break;
        case 1801:
            uVar16 = (long)field_104092 - 1;
            field_104092 = (int)uVar16;
            piVar10 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar16);
            iVar5 = *piVar10;
            uVar16 = ((lVar6 + 736))->end();
            if ((long)iVar5 - 1U < uVar16) {
                pbVar8 = (basic_string*)Array<eastl::string, eastl::allocator>::operator[](
                    (Array<eastl::string, eastl::allocator>*)(lVar6 + 736), (long)iVar5 - 1U);
                uVar1 = field_136096;
                field_136096 = uVar1 + 1;
                pbVar9 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                    (array<eastl::string, 1000ul>*)&field_104096, (long)(int)uVar1);
                eastl::string::operator=(pbVar9, pbVar8);
            } else {
                uVar1 = field_136096;
                field_136096 = uVar1 + 1;
                pbVar9 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                    (array<eastl::string, 1000ul>*)&field_104096, (long)(int)uVar1);
                eastl::string::assign(pbVar9, "");
            }
            break;
        case 1802:
            uVar1 = field_136096;
            field_136096 = uVar1 + 1;
            pbVar9 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)&field_104096, (long)(int)uVar1);
            eastl::string::operator=(pbVar9, (basic_string*)(lVar6 + 704));
            break;
        default:
            goto switchD_10015a347_caseD_70b;
        case 1826:
            this_00 = &field_100092;
            uVar16 = (long)field_104092 - 1;
            field_104092 = (int)uVar16;
            piVar10 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)this_00, uVar16);
            iVar5 = *piVar10;
            uVar16 = (ulong)iVar5;
            if (-1 < (long)uVar16) {
                pvVar13 = (vector<unsigned int, eastl::allocator>*)pCVar7->GetDeepLinkingIDs();
                iVar3 = eastl::vector<unsigned int, eastl::allocator>::size(pvVar13);
                if (iVar5 < iVar3) {
                    this_01 = (vector<int, eastl::allocator>*)pCVar7->GetDeepLinkingIDs();
                    puVar11 = (undefined4*)eastl::vector<int, eastl::allocator>::at(this_01, uVar16);
                    uVar4 = *puVar11;
                    iVar5 = field_104092;
                    field_104092 = iVar5 + 1;
                    puVar11 =
                        (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)this_00, (long)iVar5);
                    *puVar11 = uVar4;
                    break;
                }
            }
            iVar5 = field_104092;
            field_104092 = iVar5 + 1;
            puVar11 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)this_00, (long)iVar5);
            *puVar11 = 4294967295;
            uVar14 = logger::default_logger();
            pvVar13 = (vector<unsigned int, eastl::allocator>*)pCVar7->GetDeepLinkingIDs();
            uVar15 = eastl::vector<unsigned int, eastl::allocator>::size(pvVar13);
            uVar17 = 56;
            goto LAB_10015a5db;
        case 1827:
            pvVar13 = (vector<unsigned int, eastl::allocator>*)pCVar7->GetDeepLinkingIDs();
            uVar4 = eastl::vector<unsigned int, eastl::allocator>::size(pvVar13);
            iVar5 = field_104092;
            field_104092 = iVar5 + 1;
            puVar11 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, (long)iVar5);
            *puVar11 = uVar4;
            break;
        case 1828:
            uVar16 = (long)field_104092 - 1;
            field_104092 = (int)uVar16;
            puVar12 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar16);
            uVar1 = *puVar12;
            uVar16 = (ulong)uVar1;
            if (-1 < (int)uVar1) {
                pvVar13 = (vector<unsigned int, eastl::allocator>*)pCVar7->GetDeepLinkingIDs();
                iVar5 = eastl::vector<unsigned int, eastl::allocator>::size(pvVar13);
                if ((int)uVar1 < iVar5) {
                    pCVar7->ClearDeepLinkingIndex(uVar1);
                    break;
                }
            }
            uVar14 = logger::default_logger();
            pvVar13 = (vector<unsigned int, eastl::allocator>*)pCVar7->GetDeepLinkingIDs();
            uVar15 = eastl::vector<unsigned int, eastl::allocator>::size(pvVar13);
            uVar17 = 77;
        LAB_10015a5db:
            uVar18 = 0;
            logger::Logger::Log(uVar14, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_1800To1899.cpp",
                                uVar17, "index %i out of range, client has been passed %i deep link IDs", uVar16,
                                uVar15);
            goto switchD_10015a347_caseD_70b;
        }
        uVar18 = 1;
    switchD_10015a347_caseD_70b:
        return uVar18;
    }

} // namespace jag::oldscape
