// projects/osclient/ScriptRunnerImpl_5300To5399.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x100167b50
    uint64_t ScriptRunnerImpl::ExecuteCommand5300To5399(ScriptOp scriptOp, const ClientScript& clientScript,
                                                        bool arg3) {
        uint64_t result;
        ClientWindowMode clientWindowMode;
        int arg1;
        int iVar1;
        bool bVar2;
        bool cVar3;
        uint32_t uVar4;
        uint32_t* puVar6;
        ClientWindowMode* pCVar7;
        int* piVar8;
        eastl::string* pbVar9;
        shared_ptr<ApplicationContext>* this_00;
        long* plVar11;
        Logger* pLVar12;
        Screengrabber* this_01;
        DeviceOptions* pDVar13;
        char* pcVar14;
        eastl::string* this_02;
        unsigned long uVar15;
        float* pfVar16;
        ReturnValue result;
        eastl::string local_5b8;
        ReturnValue local_598;
        eastl::string local_578;
        Filename local_528;
        eastl::string local_3f8;
        ReturnValue local_3c8;
        fixed_string<char, 256> local_298;
        ReturnValue local_168;

        uint64_t uVar17 = 2;
        auto pCVar5 = Client::Instance();
        switch (scriptOp) {
        case 5306:
        case 5308:
            pDVar13 = (DeviceOptions*)pCVar5->field_8376.operator->();
            uVar4 = pDVar13->GetWindowMode();
            iVar1 = field_104092;
            field_104092 = iVar1 + 1;
            puVar6 = &field_100092[(long)iVar1];
            *puVar6 = uVar4;
            break;
        case 5307:
        case 5309:
            uVar15 = (long)field_104092 - 1;
            field_104092 = (int)uVar15;
            pCVar7 = &field_100092[uVar15];
            clientWindowMode = *pCVar7;
            bVar2 = IsValidEnumValue<ClientWindowMode>((type*)(unsigned long)clientWindowMode);
            uVar17 = 1;
            if (bVar2) {
                pDVar13 = (DeviceOptions*)pCVar5->field_8376.operator->();
                pDVar13->SetWindowMode(clientWindowMode);
            }
            goto switchD_100167ba2_caseD_14c1;
        case 5310:
            pfVar16 = (float*)((long)field_104092 - 1);
            field_104092 = (int)pfVar16;
            piVar8 = &field_100092[(unsigned long)pfVar16];
            local_168[0]._0_4_ = (float)*piVar8 * 0.001;
            pfVar16 = std::max<float>(local_168, *pfVar16);
            pCVar5->field_52460 = *pfVar16;
            pCVar5 = Client::Instance();
            pCVar5->OnWindowModeChanged();
            break;
        case 5311:
            iVar1 = field_104092;
            uVar15 = (long)iVar1 - 1;
            field_104092 = (int)uVar15;
            piVar8 = &field_100092[uVar15];
            arg1 = *piVar8;
            uVar15 = (long)iVar1 - 2;
            field_104092 = (int)uVar15;
            piVar8 = &field_100092[uVar15];
            iVar1 = *piVar8;
            uVar17 = 1;
            if ((0 < iVar1) && (0 < arg1)) {
                pDVar13 = (DeviceOptions*)pCVar5->field_8376.operator->();
                pDVar13->SetWindowWidth(iVar1, false);
                pDVar13 = (DeviceOptions*)pCVar5->field_8376.operator->();
                uVar17 = 1;
                pDVar13->SetWindowHeight(arg1, true);
            }
            goto switchD_100167ba2_caseD_14c1;
        case 5312:
            uVar15 = (long)field_104092 - 1;
            field_104092 = (int)uVar15;
            piVar8 = &field_100092[uVar15];
            iVar1 = *piVar8;
            pDVar13 = (DeviceOptions*)pCVar5->field_8376.operator->();
            pDVar13->SetWindowTopmost(iVar1 != 0);
            break;
        default:
            goto switchD_100167ba2_caseD_14c1;
        case 5350:
            uVar15 = (long)field_104092 - 1;
            field_104092 = (int)uVar15;
            piVar8 = &field_100092[uVar15];
            iVar1 = *piVar8;
            uVar15 = (long)field_136096 - 2;
            field_136096 = (int)uVar15;
            pbVar9 = &field_104096[uVar15];
            local_578 = eastl::string(*pbVar9);
            pbVar9 = &field_104096[(long)field_136096 + 1];
            local_5b8 = eastl::string(*pbVar9);
            if (local_578.size() == 0) {
                pDVar13 = (DeviceOptions*)pCVar5->field_8376.operator->();
                this_00 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)pCVar5)(pCVar5);
                plVar11 = (long*)(*this_00).operator->();
                (**(void (**)(...))(*plVar11 + 32))(&local_168, plVar11);
                pcVar14 = local_168.GetName();
                local_298 = eastl::fixed_string<char, 256>(pcVar14);
                pDVar13->SetScreenshotPath(local_298);
            }
            local_168 = Filename(&local_5b8);
            local_598 = datetools::GetLocalDateAndTimeWithDashes();
            pLVar12 = logger::default_logger();
            uVar17 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            pLVar12->Log(false, 5,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                         "ScriptRunnerImpl_5300To5399.cpp",
                         96, "Screenshot - FilePath=%s", uVar17);
            local_168 += &local_598;
            local_298 = Filename(&local_578);
            cVar3 = local_298.IsDirectory();
            if (!cVar3) {
                pLVar12 = logger::default_logger();
                pLVar12->Log(false, 2,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                             "ScriptRunnerImpl_5300To5399.cpp",
                             130, "Screenshot path is invalid");
            } else {
                &result = &local_3c8;
                result = local_298 / &local_168;
                if (iVar1 == 1) {
                    this_01 = (Screengrabber*)result.Instance();
                    pcVar14 = local_3c8.GetName();
                    local_3f8 = eastl::string(pcVar14);
                    this_01->RequestScreenshot(local_3f8);
                } else {
                    local_528 = Filename(&local_3c8);
                    std::function<bool()>::function<
                        ScriptRunnerImpl::ExecuteCommand5300To5399(ScriptOp, ClientScript const&, bool)::__0, void>(
                        (function<bool()>*)&local_3f8, &local_528);
                    ExecuteCommand5300To5399(ScriptOp, ClientScript const&, bool)::$_0::~__0(&local_528);
                    std::function<bool()>::function<
                        ScriptRunnerImpl::ExecuteCommand5300To5399(ScriptOp, ClientScript const&, bool)::__1, void>(
                        (function<bool()>*)&local_558, (__1*)&local_528);
                    ((NXTPixToolkit*)pCVar5->GetMemoryCache())->ShowUI(false);
                    pCVar5->AddScheduledFunction(local_3f8, 150, -1);
                    pCVar5->AddScheduledFunction(local_558, 300, -1);
                }
                local_3c8.~pair();
            }
            break;
        case 5351:
            cVar3 = (&pCVar5->field_8408)->operator_cast_to_bool();
            uVar17 = 1;
            if (!cVar3) {
                local_168.RequestFolderPath();
                pCVar5->field_8408 = local_168;
            }
            goto switchD_100167ba2_caseD_14c1;
        case 5352:
            pDVar13 = (DeviceOptions*)pCVar5->field_8376.operator->();
            local_168 = pDVar13->GetScreenshotPath();
            pcVar14 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            iVar1 = field_136096;
            field_136096 = iVar1 + 1;
            this_02 = &field_104096[(long)iVar1];
            eastl::string::assign(this_02, pcVar14);
        }
        uVar17 = 1;
    switchD_100167ba2_caseD_14c1:
        return uVar17;
    }

} // namespace jag::oldscape
