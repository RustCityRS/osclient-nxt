// projects/osclient/ScriptRunnerImpl_1800To1899.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x10015a2c0
    uint64_t ScriptRunnerImpl::ExecuteCommand1800To1899(ScriptOp scriptOp, const ClientScript& clientScript,
                                                        bool arg3) {
        uint8_t* this_00;
        unsigned int arg1;
        int iVar2;
        uint32_t uVar3;
        int iVar4;
        eastl::string* str;
        eastl::string* pbVar7;
        int* piVar8;
        vector<int>* this_01;
        uint32_t* puVar9;
        unsigned int* puVar10;
        vector<unsigned int>* pvVar11;
        Logger* this_02;
        uint64_t uVar12;
        uint64_t in_register_00000009;
        unsigned long uVar13;

        shared_ptr<configdecoder::ObjType>* objType =
            (shared_ptr<configdecoder::ObjType>*)(field_140856 +
                                                  ((((uint64_t)in_register_00000009 << 8) | (uint8_t)arg3) &
                                                   4294967295) *
                                                      16 -
                                                  352);
        if (*objType == nullptr) {
            field_141000->Raise(1);
            return 0;
        }
        long lVar5 = **objType;
        uint64_t uVar14 = 2;
        auto pCVar6 = Client::Instance();
        switch (scriptOp) {
        case 1800:
            pCVar6 = Client::Instance();
            iVar4 = pCVar6->GetActive(*objType);
            uVar3 = rs2lib::ServerActive::TargetMask(iVar4);
            iVar4 = field_104092;
            field_104092 = iVar4 + 1;
            puVar9 = &field_100092[(long)iVar4];
            *puVar9 = uVar3;
            break;
        case 1801:
            uVar13 = (long)field_104092 - 1;
            field_104092 = (int)uVar13;
            piVar8 = &field_100092[uVar13];
            iVar4 = *piVar8;
            uVar13 = ((lVar5 + 736))->end();
            if ((long)iVar4 - 1U < uVar13) {
                str = (eastl::string*)(*((lVar5 + 736)))[(long)iVar4 - 1U];
                iVar4 = field_136096;
                field_136096 = iVar4 + 1;
                pbVar7 = &field_104096[(long)iVar4];
                *pbVar7 = str;
            } else {
                iVar4 = field_136096;
                field_136096 = iVar4 + 1;
                pbVar7 = &field_104096[(long)iVar4];
                eastl::string::assign(pbVar7, "");
            }
            break;
        case 1802:
            iVar4 = field_136096;
            field_136096 = iVar4 + 1;
            pbVar7 = &field_104096[(long)iVar4];
            *pbVar7 = ((lVar5 + 704));
            break;
        default:
            goto switchD_10015a347_caseD_70b;
        case 1826:
            this_00 = &field_100092;
            uVar13 = (long)field_104092 - 1;
            field_104092 = (int)uVar13;
            piVar8 = (int*)(*this_00)[uVar13];
            iVar4 = *piVar8;
            uVar13 = (unsigned long)iVar4;
            if (-1 < (long)uVar13) {
                pvVar11 = (vector<unsigned int>*)pCVar6->GetDeepLinkingIDs();
                iVar2 = pvVar11->size();
                if (iVar4 < iVar2) {
                    this_01 = (vector<int>*)pCVar6->GetDeepLinkingIDs();
                    puVar9 = (uint32_t*)this_01->at(uVar13);
                    uVar3 = *puVar9;
                    iVar4 = field_104092;
                    field_104092 = iVar4 + 1;
                    puVar9 = (uint32_t*)(*this_00)[(long)iVar4];
                    *puVar9 = uVar3;
                    break;
                }
            }
            iVar4 = field_104092;
            field_104092 = iVar4 + 1;
            puVar9 = (uint32_t*)(*this_00)[(long)iVar4];
            *puVar9 = 4294967295;
            this_02 = logger::default_logger();
            pvVar11 = (vector<unsigned int>*)pCVar6->GetDeepLinkingIDs();
            uVar12 = pvVar11->size();
            iVar4 = 56;
            goto LAB_10015a5db;
        case 1827:
            pvVar11 = (vector<unsigned int>*)pCVar6->GetDeepLinkingIDs();
            uVar3 = pvVar11->size();
            iVar4 = field_104092;
            field_104092 = iVar4 + 1;
            puVar9 = &field_100092[(long)iVar4];
            *puVar9 = uVar3;
            break;
        case 1828:
            uVar13 = (long)field_104092 - 1;
            field_104092 = (int)uVar13;
            puVar10 = &field_100092[uVar13];
            arg1 = *puVar10;
            uVar13 = (unsigned long)arg1;
            if (-1 < (int)arg1) {
                pvVar11 = (vector<unsigned int>*)pCVar6->GetDeepLinkingIDs();
                iVar4 = pvVar11->size();
                if ((int)arg1 < iVar4) {
                    pCVar6->ClearDeepLinkingIndex(arg1);
                    break;
                }
            }
            this_02 = logger::default_logger();
            pvVar11 = (vector<unsigned int>*)pCVar6->GetDeepLinkingIDs();
            uVar12 = pvVar11->size();
            iVar4 = 77;
        LAB_10015a5db:
            uVar14 = 0;
            this_02->Log(false, 2,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                         "ScriptRunnerImpl_1800To1899.cpp",
                         iVar4, "index %i out of range, client has been passed %i deep link IDs", uVar13, uVar12);
            goto switchD_10015a347_caseD_70b;
        }
        uVar14 = 1;
    switchD_10015a347_caseD_70b:
        return uVar14;
    }

} // namespace jag::oldscape
