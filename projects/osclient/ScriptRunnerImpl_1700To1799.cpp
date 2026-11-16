// projects/osclient/ScriptRunnerImpl_1700To1799.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x100159c40
    uint64_t ScriptRunnerImpl::ExecuteCommand1700To1799(ScriptOp scriptOp, const ClientScript& clientScript,
                                                        bool arg3) {
        int iVar1;
        uint8_t bVar3;
        CRMViewHandler* this_00;
        uint32_t* puVar4;
        unsigned int* puVar5;
        uint64_t in_register_00000009;
        unsigned int uVar6;

        if ((*((shared_ptr<configdecoder::ObjType>*)(field_140856 +
                                                     ((((uint64_t)in_register_00000009 << 8) | (uint8_t)arg3) &
                                                      4294967295) *
                                                         16 -
                                                     352))) == nullptr) {
            field_141000->Raise(1);
            return 0;
        }
        auto ifType = *(*(
            (shared_ptr<rs2lib::IfType>*)(field_140856 +
                                          ((((uint64_t)in_register_00000009 << 8) | (uint8_t)arg3) & 4294967295) * 16 -
                                          352)));
        uint64_t uVar7 = 2;
        switch (scriptOp) {
        case 1700:
            uVar6 = *(unsigned int*)&ifType->field_1984;
            goto LAB_100159d71;
        case 1701:
            if (*(int*)&ifType->field_1984 != -1) {
                uVar6 = *(unsigned int*)((long)&ifType->field_1984 + 4);
                goto LAB_100159d71;
            }
            iVar1 = field_104092;
            field_104092 = iVar1 + 1;
            puVar4 = &field_100092[(long)iVar1];
            *puVar4 = 0;
            break;
        case 1702:
            uVar6 = ifType->field_8;
            goto LAB_100159d71;
        default:
            goto switchD_100159cbf_caseD_6a7;
        case 1707:
            if (ifType->field_12 != 11) {
                LogAssert("cc.m_type == IfType::CRMVIEW",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                          "ScriptRunnerImpl_1700To1799.cpp",
                          48, "Calling cc_getcrm_hasresponse on a component not of type CRMVIEW.");
            }
            this_00 = ifType->GetCRMViewHandler();
            if (this_00 == nullptr) {
                uVar6 = 0;
            } else {
                bVar3 = this_00->HasSuccessfulResponse();
                uVar6 = (unsigned int)bVar3;
            }
        LAB_100159d71:
            iVar1 = field_104092;
            field_104092 = iVar1 + 1;
            puVar5 = &field_100092[(long)iVar1];
            *puVar5 = uVar6;
            break;
        case 1708:
            DoGetCrmInt(*ifType);
            break;
        case 1709:
            DoGetCrmString(*ifType);
        }
        uVar7 = 1;
    switchD_100159cbf_caseD_6a7:
        return uVar7;
    }

    // 0x100159dd0
    uint64_t ScriptRunnerImpl::DoGetCrmInt(const rs2lib::IfType& ifType) {
        reference_wrapper<std::variant<eastl::basic_string<char, BucketAllocatorEASTL>, int> const>* this_01;
        variant<eastl::basic_string<char, BucketAllocatorEASTL>, int>* arg1;
        int* piVar4;
        Logger* this_02;
        uint64_t uVar5;
        uint8_t extraout_DL;
        int iVar6;
        uint64_t local_40;

        auto this_00 = ifType.GetCRMViewHandler();
        if ((ifType.field_12 != 11) || (this_00 == nullptr)) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                "ScriptRunnerImpl_1700To1799.cpp",
                73, "Calling cc_getcrm_string on a component not of type CRMVIEW, or one that failed to initialise.");
        }
        unsigned long arg1_00 = (long)field_136096 - 1;
        field_136096 = (int)arg1_00;
        field_104096[arg1_00];
        char* str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_40.destruct<highlight::NpcUID*>();
        basic_string<char, BucketAllocatorEASTL> local_58(str, &local_40);
        local_40 = this_00->GetMetadata(local_58);
        uint8_t local_38 = extraout_DL;
        if (local_40.has_value() == '\0') {
            this_02 = logger::default_logger();
            uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            iVar6 = -1;
            this_02->Log(false, 3,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                         "ScriptRunnerImpl_1700To1799.cpp",
                         96, "Metadata has no metavalue %s.", uVar5);
        } else {
            this_01 = (reference_wrapper<std::variant<eastl::basic_string<char, BucketAllocatorEASTL>, int> const>*)
                          local_40.value();
            arg1 = (variant<eastl::basic_string<char, BucketAllocatorEASTL>, int>*)this_01->get();
            if (!std::holds_alternative<int, eastl::basic_string<char, BucketAllocatorEASTL>, int>(*arg1)) {
                uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_1700To1799.cpp",
                                90, "Attempting to get an int value for non-int metavalue %s.", uVar5);
            }
            piVar4 = std::get<int, eastl::basic_string<char, BucketAllocatorEASTL>, int>(*arg1);
            iVar6 = *piVar4;
        }
        int iVar1 = field_104092;
        field_104092 = iVar1 + 1;
        piVar4 = &field_100092[(long)iVar1];
        *piVar4 = iVar6;
        return 1;
    }

    // 0x100159fc0
    uint64_t ScriptRunnerImpl::DoGetCrmString(const rs2lib::IfType& ifType) {
        int iVar1;
        reference_wrapper<std::variant<eastl::basic_string<char, BucketAllocatorEASTL>, int> const>* this_01;
        variant<eastl::basic_string<char, BucketAllocatorEASTL>, int>* arg1;
        eastl::string* pbVar5;
        Logger* this_02;
        uint64_t uVar6;
        uint8_t extraout_DL;
        uint64_t local_48;

        auto this_00 = ifType.GetCRMViewHandler();
        if ((ifType.field_12 != 11) || (this_00 == nullptr)) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                "ScriptRunnerImpl_1700To1799.cpp",
                107, "Calling cc_getcrm_string on a component not of type CRMVIEW, or one that failed to initialise.");
        }
        array<eastl::string, 1000ul>* local_38 = (array<eastl::string, 1000ul>*)&field_104096;
        unsigned long arg1_00 = (long)field_136096 - 1;
        field_136096 = (int)arg1_00;
        (*local_38)[arg1_00];
        char* pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_48.destruct<highlight::NpcUID*>();
        basic_string<char, BucketAllocatorEASTL> local_60(pcVar4, &local_48);
        local_48 = this_00->GetMetadata(local_60);
        uint8_t local_40 = extraout_DL;
        if (local_48.has_value() == '\0') {
            this_02 = logger::default_logger();
            uVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            this_02->Log(false, 3,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                         "ScriptRunnerImpl_1700To1799.cpp",
                         129, "Metadata has no metavalue %s.", uVar6);
            iVar1 = field_136096;
            field_136096 = iVar1 + 1;
            pbVar5 = (eastl::string*)(*local_38)[(long)iVar1];
            eastl::string::assign(pbVar5, "");
        } else {
            this_01 = (reference_wrapper<std::variant<eastl::basic_string<char, BucketAllocatorEASTL>, int> const>*)
                          local_48.value();
            arg1 = (variant<eastl::basic_string<char, BucketAllocatorEASTL>, int>*)this_01->get();
            if (!std::holds_alternative<eastl::basic_string<char, BucketAllocatorEASTL>,
                                        eastl::basic_string<char, BucketAllocatorEASTL>, int>(*arg1)) {
                uVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_1700To1799.cpp",
                                123, "Attempting to get a string value for non-string metavalue %s.", uVar6);
            }
            std::get<eastl::basic_string<char, BucketAllocatorEASTL>, eastl::basic_string<char, BucketAllocatorEASTL>,
                     int>(*arg1);
            pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            iVar1 = field_136096;
            field_136096 = iVar1 + 1;
            pbVar5 = (eastl::string*)(*local_38)[(long)iVar1];
            eastl::string::assign(pbVar5, pcVar4);
        }
        return 1;
    }

} // namespace jag::oldscape
