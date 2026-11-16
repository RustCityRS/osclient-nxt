// projects/osclient/ScriptRunnerImpl_1700To1799.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x100159c40, 400 bytes, placed by class name and debug map
    // ScriptRunnerImpl::ExecuteCommand1700To1799(ScriptOp, ClientScript const&, bool)
    undefined8 ScriptRunnerImpl::ExecuteCommand1700To1799(undefined4 param_2, undefined8 param_3, ulong param_4) {
        int iVar1;
        bool bVar2;
        byte bVar3;
        IfType* this_00;
        CRMViewHandler* this_01;
        undefined4* puVar4;
        uint* puVar5;
        uint uVar6;
        undefined8 uVar7;

        bVar2 = operator==((shared_ptr*)(field_140504 + (param_4 & 4294967295) * 16), (_func_decltype_nullptr*)0);
        if (bVar2) {
            (&field_141000, 1)->Raise();
            return 0;
        }
        this_00 = (IfType*)shared_ptr<rs2lib::IfType>::operator*(
            (shared_ptr<rs2lib::IfType>*)(field_140504 + (param_4 & 4294967295) * 16));
        uVar7 = 2;
        switch (param_2) {
        case 1700:
            uVar6 = *(uint*)&this_00->field_1984;
            goto LAB_100159d71;
        case 1701:
            if (*(int*)&this_00->field_1984 != -1) {
                uVar6 = *(uint*)((long)&this_00->field_1984 + 4);
                goto LAB_100159d71;
            }
            iVar1 = field_104092;
            field_104092 = iVar1 + 1;
            puVar4 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, (long)iVar1);
            *puVar4 = 0;
            break;
        case 1702:
            uVar6 = this_00->field_8;
            goto LAB_100159d71;
        default:
            goto switchD_100159cbf_caseD_6a7;
        case 1707:
            if (this_00->field_12 != 11) {
                /* WARNING: Subroutine does not return */
                LogAssert("cc.m_type == IfType::CRMVIEW",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                          "ScriptRunnerImpl_1700To1799.cpp",
                          48, "Calling cc_getcrm_hasresponse on a component not of type CRMVIEW.");
            }
            this_01 = (CRMViewHandler*)this_00->GetCRMViewHandler();
            if (this_01 == (CRMViewHandler*)0) {
                uVar6 = 0;
            } else {
                bVar3 = this_01->HasSuccessfulResponse();
                uVar6 = (uint)bVar3;
            }
        LAB_100159d71:
            iVar1 = field_104092;
            field_104092 = iVar1 + 1;
            puVar5 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, (long)iVar1);
            *puVar5 = uVar6;
            break;
        case 1708:
            DoGetCrmInt(this, this_00);
            break;
        case 1709:
            DoGetCrmString(this, this_00);
        }
        uVar7 = 1;
    switchD_100159cbf_caseD_6a7:
        return uVar7;
    }

    // 0x100159dd0, 496 bytes, placed by class name and debug map
    // ScriptRunnerImpl::DoGetCrmInt(rs2lib::IfType const&)
    undefined8 ScriptRunnerImpl::DoGetCrmInt(IfType* param_1) {
        int iVar1;
        char cVar2;
        bool bVar3;
        CRMViewHandler* this_00;
        reference_wrapper<std::variant<eastl::basic_string<char, BucketAllocatorEASTL>, int> const>* this_01;
        variant* pvVar4;
        int* piVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        undefined1 extraout_DL;
        int iVar8;
        ulong uVar9;
        undefined1 auVar10[16];
        basic_string local_58[24];
        undefined8 local_40;
        undefined1 local_38;

        this_00 = (CRMViewHandler*)param_1->GetCRMViewHandler();
        if ((param_1->field_12 != 11) || (this_00 == (CRMViewHandler*)0)) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                "ScriptRunnerImpl_1700To1799.cpp",
                73, "Calling cc_getcrm_string on a component not of type CRMVIEW, or one that failed to initialise.");
        }
        uVar9 = (long)(int)field_136096 - 1;
        field_136096 = (uint)uVar9;
        std::array<eastl::string, 1000ul>::operator[]((array<eastl::string, 1000ul>*)&field_104096, uVar9);
        auVar10 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::destruct<highlight::NpcUID*>((eastl*)&local_40, (NpcUID*)"EASTL basic_string", auVar10._8_8_);
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_58, auVar10._0_8_);
        local_40 = this_00->GetMetadata(local_58);
        local_38 = extraout_DL;
        cVar2 = local_40.has_value();
        if (cVar2 == '\0') {
            uVar7 = logger::default_logger();
            uVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            iVar8 = -1;
            logger::Logger::Log(uVar7, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_1700To1799.cpp",
                                96, "Metadata has no metavalue %s.", uVar6);
        } else {
            this_01 = (reference_wrapper<std::variant<eastl::basic_string<char, BucketAllocatorEASTL>, int> const>*)
                          local_40.value();
            pvVar4 = (variant*)
                std::reference_wrapper<std::variant<eastl::basic_string<char, BucketAllocatorEASTL>, int> const>::get(
                    this_01);
            bVar3 = std::holds_alternative<int, eastl::basic_string<char, BucketAllocatorEASTL>, int>(pvVar4);
            if (!bVar3) {
                uVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_1700To1799.cpp",
                                90, "Attempting to get an int value for non-int metavalue %s.", uVar7);
            }
            piVar5 = std::get<int, eastl::basic_string<char, BucketAllocatorEASTL>, int>(pvVar4);
            iVar8 = *piVar5;
        }
        iVar1 = field_104092;
        field_104092 = iVar1 + 1;
        piVar5 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, (long)iVar1);
        *piVar5 = iVar8;
        local_58->~basic_string();
        return 1;
    }

    // 0x100159fc0, 576 bytes, placed by class name and debug map
    // ScriptRunnerImpl::DoGetCrmString(rs2lib::IfType const&)
    undefined8 ScriptRunnerImpl::DoGetCrmString(IfType* param_1) {
        uint uVar1;
        char cVar2;
        bool bVar3;
        CRMViewHandler* this_00;
        reference_wrapper<std::variant<eastl::basic_string<char, BucketAllocatorEASTL>, int> const>* this_01;
        variant* pvVar4;
        char* pcVar5;
        eastl::string* pbVar6;
        undefined8 uVar7;
        undefined8 uVar8;
        undefined1 extraout_DL;
        ulong uVar9;
        undefined1 auVar10[16];
        basic_string local_60[24];
        undefined8 local_48;
        undefined1 local_40;
        array<eastl::string, 1000ul>* local_38;

        this_00 = (CRMViewHandler*)param_1->GetCRMViewHandler();
        if ((param_1->field_12 != 11) || (this_00 == (CRMViewHandler*)0)) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                "ScriptRunnerImpl_1700To1799.cpp",
                107, "Calling cc_getcrm_string on a component not of type CRMVIEW, or one that failed to initialise.");
        }
        local_38 = (array<eastl::string, 1000ul>*)&field_104096;
        uVar9 = (long)(int)field_136096 - 1;
        field_136096 = (uint)uVar9;
        std::array<eastl::string, 1000ul>::operator[](local_38, uVar9);
        auVar10 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::destruct<highlight::NpcUID*>((eastl*)&local_48, (NpcUID*)"EASTL basic_string", auVar10._8_8_);
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_60, auVar10._0_8_);
        local_48 = this_00->GetMetadata(local_60);
        local_40 = extraout_DL;
        cVar2 = local_48.has_value();
        if (cVar2 == '\0') {
            uVar8 = logger::default_logger();
            uVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            logger::Logger::Log(uVar8, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_1700To1799.cpp",
                                129, "Metadata has no metavalue %s.", uVar7);
            uVar1 = field_136096;
            field_136096 = uVar1 + 1;
            pbVar6 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](local_38, (long)(int)uVar1);
            eastl::string::assign(pbVar6, "");
        } else {
            this_01 = (reference_wrapper<std::variant<eastl::basic_string<char, BucketAllocatorEASTL>, int> const>*)
                          local_48.value();
            pvVar4 = (variant*)
                std::reference_wrapper<std::variant<eastl::basic_string<char, BucketAllocatorEASTL>, int> const>::get(
                    this_01);
            bVar3 = std::holds_alternative<eastl::basic_string<char, BucketAllocatorEASTL>,
                                           eastl::basic_string<char, BucketAllocatorEASTL>, int>(pvVar4);
            if (!bVar3) {
                uVar8 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_1700To1799.cpp",
                                123, "Attempting to get a string value for non-string metavalue %s.", uVar8);
            }
            std::get<eastl::basic_string<char, BucketAllocatorEASTL>, eastl::basic_string<char, BucketAllocatorEASTL>,
                     int>(pvVar4);
            pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar1 = field_136096;
            field_136096 = uVar1 + 1;
            pbVar6 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](local_38, (long)(int)uVar1);
            eastl::string::assign(pbVar6, pcVar5);
        }
        local_60->~basic_string();
        return 1;
    }

} // namespace jag::oldscape
