// projects/osclient/ScriptRunnerImpl_5300To5399.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x100167b50, 2112 bytes, placed by class name and debug map
    // ScriptRunnerImpl::ExecuteCommand5300To5399(ScriptOp, ClientScript const&, bool)
    undefined8 ScriptRunnerImpl::ExecuteCommand5300To5399(long param_1, undefined4 param_2) {
        int iVar1;
        int iVar2;
        bool bVar4;
        undefined4 uVar5;
        Client* pCVar6;
        undefined4* puVar7;
        int* piVar8;
        basic_string* pbVar9;
        DeviceOptions* pDVar11;
        shared_ptr<ApplicationContext>* this;
        long* plVar12;
        undefined8 uVar13;
        Screengrabber* this_00;
        char* pcVar14;
        eastl::string* this_01;
        NXTPixToolkit* this_02;
        ulong uVar15;
        float* pfVar16;
        Filename* this_03;
        undefined8 uVar17;
        eastl::string local_5b8[32];
        datetools local_598[32];
        eastl::string local_578[32];
        allocator local_558[48];
        Filename local_528[19];
        eastl::string local_3f8[48];
        Filename local_3c8[19];
        Filename local_298[19];
        Filename local_168[19];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        uVar17 = 2;
        pCVar6 = (Client*)Client::Instance();
        switch (param_2) {
        case 5306:
        case 5308:
            pDVar11 =
                (DeviceOptions*)
                    std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                        (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)&pCVar6
                            ->field_8376);
            uVar5 = pDVar11->GetWindowMode();
            iVar2 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar2 + 1;
            puVar7 =
                (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar2);
            *puVar7 = uVar5;
            break;
        case 5307:
        case 5309:
            uVar15 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar15;
            puVar7 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar15);
            uVar5 = *puVar7;
            bVar4 = IsValidEnumValue<ClientWindowMode>(uVar5);
            uVar17 = 1;
            if (bVar4) {
                pDVar11 =
                    (DeviceOptions*)
                        std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                            (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)&pCVar6
                                ->field_8376);
                pDVar11->SetWindowMode(uVar5);
            }
            goto switchD_100167ba2_caseD_14c1;
        case 5310:
            pfVar16 = (float*)((long)*(int*)(param_1 + 104092) - 1);
            *(int*)(param_1 + 104092) = (int)pfVar16;
            piVar8 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (ulong)pfVar16);
            local_168[0]._0_4_ = (float)*piVar8 * 0.001;
            pfVar16 = std::max<float>((float*)local_168, pfVar16);
            pCVar6->field_52460 = *pfVar16;
            pCVar6 = (Client*)Client::Instance();
            pCVar6->OnWindowModeChanged();
            break;
        case 5311:
            iVar2 = *(int*)(param_1 + 104092);
            uVar15 = (long)iVar2 - 1;
            *(int*)(param_1 + 104092) = (int)uVar15;
            piVar8 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar15);
            iVar1 = *piVar8;
            uVar15 = (long)iVar2 - 2;
            *(int*)(param_1 + 104092) = (int)uVar15;
            piVar8 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar15);
            iVar2 = *piVar8;
            uVar17 = 1;
            if ((0 < iVar2) && (0 < iVar1)) {
                pDVar11 =
                    (DeviceOptions*)
                        std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                            (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)&pCVar6
                                ->field_8376);
                pDVar11->SetWindowWidth(iVar2, false);
                pDVar11 =
                    (DeviceOptions*)
                        std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                            (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)&pCVar6
                                ->field_8376);
                uVar17 = 1;
                pDVar11->SetWindowHeight(iVar1, true);
            }
            goto switchD_100167ba2_caseD_14c1;
        case 5312:
            uVar15 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar15;
            piVar8 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar15);
            iVar2 = *piVar8;
            pDVar11 =
                (DeviceOptions*)
                    std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                        (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)&pCVar6
                            ->field_8376);
            pDVar11->SetWindowTopmost(iVar2 != 0);
            break;
        default:
            goto switchD_100167ba2_caseD_14c1;
        case 5350:
            uVar15 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar15;
            piVar8 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar15);
            iVar2 = *piVar8;
            uVar15 = (long)*(int*)(param_1 + 136096) - 2;
            *(int*)(param_1 + 136096) = (int)uVar15;
            pbVar9 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), uVar15);
            eastl::string::basic_string(local_578, pbVar9);
            pbVar9 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), (long)*(int*)(param_1 + 136096) + 1);
            eastl::string::basic_string(local_5b8, pbVar9);
            if (eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size() == 0) {
                pDVar11 =
                    (DeviceOptions*)
                        std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                            (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)&pCVar6
                                ->field_8376);
                this = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)pCVar6)(pCVar6);
                plVar12 = (long*)shared_ptr<ApplicationContext>::operator->(this);
                (**(code**)(*plVar12 + 32))(local_168, plVar12);
                pcVar14 = (char*)local_168->GetName();
                new (local_298) eastl::fixed_string<char, 256, true, eastl::allocator>(pcVar14);
                pDVar11->SetScreenshotPath(local_298);
                /* WARNING: Subroutine does not return */
                local_298->~fixed_string();
            }
            Filename::Filename(local_168, (basic_string*)local_5b8);
            local_598->GetLocalDateAndTimeWithDashes();
            uVar17 = logger::default_logger();
            uVar13 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            logger::Logger::Log(uVar17, 0, 5,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_5300To5399.cpp",
                                96, "Screenshot - FilePath=%s", uVar13);
            Filename::operator+=(local_168, (basic_string*)local_598);
            Filename::Filename(local_298, (basic_string*)local_578);
            if (local_298->IsDirectory() == '\0') {
                uVar17 = logger::default_logger();
                logger::Logger::Log(uVar17, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/ScriptRunnerImpl_5300To5399.cpp",
                                    130, "Screenshot path is invalid");
            } else {
                this_03 = local_3c8;
                Filename::operator/(this_03, local_298);
                if (iVar2 == 1) {
                    this_00 = (Screengrabber*)this_03->Instance();
                    pcVar14 = (char*)local_3c8->GetName();
                    eastl::allocator::allocator(local_558, "EASTL basic_string");
                    eastl::string::basic_string(local_3f8, pcVar14, local_558);
                    this_00->RequestScreenshot(local_3f8);
                    eastl::string::~basic_string(local_3f8);
                } else {
                    Filename::Filename(local_528, local_3c8);
                    std::function<bool()>::function<
                        ScriptRunnerImpl::ExecuteCommand5300To5399(ScriptOp, ClientScript_const&, bool)::__0, void>(
                        local_3f8);
                    ExecuteCommand5300To5399(ScriptOp, ClientScript_const&, bool)::$_0::~__0((__0*)local_528);
                    std::function<bool()>::function<
                        ScriptRunnerImpl::ExecuteCommand5300To5399(ScriptOp, ClientScript_const&, bool)::__1, void>(
                        local_558);
                    this_02 = (NXTPixToolkit*)pCVar6->GetMemoryCache();
                    this_02->ShowUI(false);
                    pCVar6->AddScheduledFunction(local_3f8, 150, -1);
                    pCVar6->AddScheduledFunction(local_558, 300, -1);
                    std::function<bool()>::~function((function<bool()>*)local_558);
                    std::function<bool()>::~function((function<bool()>*)local_3f8);
                }
                local_3c8->~pair();
            }
            local_298->~pair();
            local_598->~basic_string();
            local_168->~pair();
            eastl::string::~basic_string(local_5b8);
            eastl::string::~basic_string(local_578);
            break;
        case 5351:
            bVar4 = (&pCVar6->field_8408)->operator_cast_to_bool();
            uVar17 = 1;
            if (!bVar4) {
                local_168->RequestFolderPath();
                shared_ptr<FolderSelection::FolderSelectionRequest>::operator=(
                    (shared_ptr<FolderSelection::FolderSelectionRequest>*)&pCVar6->field_8408, (shared_ptr*)local_168);
                local_168->~shared_ptr();
            }
            goto switchD_100167ba2_caseD_14c1;
        case 5352:
            std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)&pCVar6->field_8376);
            local_168->GetScreenshotPath();
            pcVar14 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            iVar2 = *(int*)(param_1 + 136096);
            *(int*)(param_1 + 136096) = iVar2 + 1;
            this_01 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), (long)iVar2);
            eastl::string::assign(this_01, pcVar14);
            /* WARNING: Subroutine does not return */
            local_168->~fixed_string();
        }
        uVar17 = 1;
    switchD_100167ba2_caseD_14c1:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar17;
    }

} // namespace jag::oldscape
