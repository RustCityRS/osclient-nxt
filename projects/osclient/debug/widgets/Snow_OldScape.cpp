// projects/osclient/debug/widgets/Snow_OldScape.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "Snow_OldScape.h"

namespace jag::oldscape {
    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    ErrIsNeg1(unsigned long);

    // 0x100067320, 224 bytes, placed by class name
    // DoCommand_FpsLimit(OSClientConsole&, eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)
    void DoCommand_FpsLimit(OSClientConsole* param_1, fixed_vector* param_2) {
        long lVar2;
        StringView* pSVar3;
        DeviceOptions* this;
        undefined8 uVar4;
        StringView local_40[2];
        int local_1c;

        lVar2 = param_2->size();
        if (lVar2 == 0) {
            console::Console::AddMessage(param_1, 5, "No argument provided for fpsLimit");
        } else {
            local_1c = 0;
            pSVar3 = (StringView*)
                eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                        param_2,
                    0);
            if (core::stringtools::general::StringTools::CheckedParseInt(&local_1c, pSVar3) == '\0') {
                eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                        param_2,
                    0);
                StringView::to_owned_string<eastl::string>(local_40);
                uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                console::Console::AddMessage(param_1, 5, "Unable to parse fpsLimit: %s", uVar4);
                local_40->~basic_string();
            } else {
                lVar2 = Client::Instance();
                this =
                    (DeviceOptions*)
                        std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                            (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)(lVar2 +
                                                                                                             8376));
                SetFpsLimit(local_1c);
            }
        }
    }

    // 0x1000674d0, 48 bytes, placed by class name
    // DoCommand_DebugSpam(OSClientConsole&)
    void DoCommand_DebugSpam(OSClientConsole* param_1) {
        uint uVar1;

        uVar1 = DoCommand_DebugSpam(OSClientConsole&)::counter & 1;
        DoCommand_DebugSpam(OSClientConsole&)::counter = DoCommand_DebugSpam(OSClientConsole&)::counter + 1;
        console::Console::AddMessage(
            param_1, uVar1 + 1,
            "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et "
            "dolore magna aliqua.Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex "
            "ea commodo consequat.Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu "
            "fugiat nulla pariatur.Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt "
            "mollit anim id est laborum.");
    }

    // 0x100067540, 112 bytes, placed by class name
    // PerfCaptureInputArgumentHandler(OSClientConsole&, eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)
    void PerfCaptureInputArgumentHandler(OSClientConsole* param_1, fixed_vector* param_2) {
        PerformanceCapture* pPVar1;
        undefined8 uVar2;
        basic_string local_38[32];

        pPVar1 = (PerformanceCapture*)local_38;
        new (pPVar1) eastl::string();
        pPVar1 = (PerformanceCapture*)pPVar1->Instance();
        pPVar1->DoCommand(param_2, local_38);
        uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        console::Console::AddMessage(param_1, 2, uVar2);
        local_38->~basic_string();
    }

    // 0x1000675b0, 272 bytes, placed by class name
    // DoCommand_ClientError(OSClientConsole&, eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)
    void DoCommand_ClientError(OSClientConsole* param_1, fixed_vector* param_2) {
        long lVar1;
        undefined8 uVar2;
        char* pcVar3;
        Callstack local_388[50];
        eastl::string local_60[32];
        StringView local_40[2];

        callstack::Callstack::Callstack(local_388);
        local_388->Capture(0);
        new (local_40) eastl::allocator("EASTL basic_string");
        eastl::string::basic_string(local_60, "ClientError command invoked", (allocator*)local_40);
        lVar1 = param_2->size();
        if (lVar1 != 0) {
            eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[]((vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                           param_2,
                       0);
            StringView::to_owned_string<eastl::string>(local_40);
            uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            eastl::string::append_sprintf((char*)local_60, &DAT_100e624f3, uVar2);
            local_40->~basic_string();
        }
        pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        OldscapeClientError::ReportError(pcVar3, local_388);
        console::Console::AddMessage(param_1, 2, "Error reported to the server");
        eastl::string::~basic_string(local_60);
    }

    // 0x1000677b0, 288 bytes, placed by class name
    // DoCommand_SetDrawDistance(OSClientConsole&, eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)
    void DoCommand_SetDrawDistance(OSClientConsole* param_1, fixed_vector* param_2) {
        long lVar2;
        StringView* pSVar3;
        Client* pCVar4;
        char* pcVar5;
        eastl::string local_68[32];
        eastl::string local_48[32];
        allocator local_28[12];
        uint local_1c;

        lVar2 = param_2->size();
        if (lVar2 == 0) {
            pcVar5 = "Missing argument for distance";
        } else {
            pSVar3 = (StringView*)
                eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                        param_2,
                    0);
            if (core::stringtools::general::StringTools::CheckedParseInt((int*)&local_1c, pSVar3) != '\0') {
                eastl::string::basic_string(local_68);
                eastl::string::append_sprintf((char*)local_68, "Setting Draw Distance to %i", (ulong)local_1c);
                pCVar4 = (Client*)param_1->GetClient();
                pCVar4->SetDrawDistance(local_1c);
                pCVar4 = (Client*)Client::Instance();
                eastl::allocator::allocator(local_28, "EASTL basic_string");
                eastl::string::basic_string(local_48, "", local_28);
                pCVar4->AddChat(99, local_48, local_68);
                eastl::string::~basic_string(local_48);
                eastl::string::~basic_string(local_68);
                return;
            }
            pcVar5 = "Unable to parse argument for distance";
        }
        console::Console::AddMessage(param_1, 5, pcVar5);
    }

    // 0x100067a30, 16 bytes, placed by class name
    // DoCommand_Cls(OSClientConsole&)
    void DoCommand_Cls(OSClientConsole* param_1) {
        param_1->Clear();
    }

    // 0x100067a40, 576 bytes, placed by class name
    // DoCommand_Help(OSClientConsole&, eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)
    void DoCommand_Help(OSClientConsole* param_1, fixed_vector* param_2) {
        char cVar1;
        ConsoleCommands* this;
        long lVar2;
        undefined8 uVar3;
        char* pcVar4;
        function local_488[56];
        StringView local_450[66];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        cVar1 = param_2->empty();
        if (cVar1 != '\0') {
            std::vector<char const*, std::allocator<char const*>>::vector();
            console::Console::AddMessage(param_1, 2, "== Cheat commands ==");
            new (local_450) eastl::fixed_string<char, 1024, true, eastl::allocator>();
            this = (ConsoleCommands*)param_1->GetCommands();
            std::function<void(eastl::stringconst&, ConsoleCommandHelp_const&)>::function<
                DoCommand_Help(OSClientConsole&,
                               eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)::__85,
                void>(local_488, local_450);
            ForEachCommandHelp(local_488);
            std::function<void(eastl::stringconst&, ConsoleCommandHelp_const&)>::~function(
                (function<void(eastl::stringconst&, ConsoleCommandHelp_const&)>*)local_488);
            lVar2 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            if (lVar2 == 0) {
                console::Console::AddMessage(param_1, 5, "None found.");
            } else {
                lVar2 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                local_450->resize(lVar2 - 2);
                uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                console::Console::AddMessage(param_1, 1, uVar3);
                console::Console::AddMessage(param_1, 2, &DAT_100e35840);
                console::Console::AddMessage(
                    param_1, 2, "<col=ffa0ff>? <lt>command<gt></col> : get usage and description of a command.");
            }
            console::Console::AddMessage(param_1, 2,
                                         "<col=ffa0ff>~<lt>debugprocname<gt></col> : run a named debugproc.");
            console::Console::AddMessage(param_1, 2, "<col=ffa0ff>cls</col> : clear the output window.");
            console::Console::AddMessage(param_1, 2, &DAT_100e35840);
            /* WARNING: Subroutine does not return */
            local_450->~fixed_string();
        }
        eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
        operator[](
            (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)param_2,
            0);
        StringView::to_owned_string<eastl::string>(local_450);
        pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        param_1->PrintCommandHelp(pcVar4);
        local_450->~basic_string();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100067c80, 336 bytes, placed by class name
    // DoCommand_ConsoleBounds(OSClientConsole&, eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)
    void DoCommand_ConsoleBounds(OSClientConsole* param_1, fixed_vector* param_2) {
        long lVar1;
        ulong uVar2;
        StringView* pSVar3;
        OSClientConsoleUI* pOVar4;
        char cVar5;
        int iVar6;
        GridRect local_50;
        int local_30;
        int local_2c;
        int local_28;
        int local_24;

        lVar1 = param_2->size();
        if (lVar1 != 0) {
            eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[]((vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                           param_2,
                       0);
            StringView::to_owned_string<eastl::string>((StringView*)&local_50);
            iVar6 = local_50.comparei("default");
            local_50.~basic_string();
            if (iVar6 == 0) {
                pOVar4 = (OSClientConsoleUI*)param_1->GetConsoleUI();
                pOVar4->SetBoundsToDefault();
                return;
            }
        }
        uVar2 = param_2->size();
        if (3 < uVar2) {
            pSVar3 = (StringView*)
                eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                        param_2,
                    0);
            cVar5 = core::stringtools::general::StringTools::CheckedParseInt(&local_30, pSVar3);
            if (cVar5 != '\0') {
                pSVar3 = (StringView*)eastl::vector<
                    StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                        param_2,
                    1);
                cVar5 = core::stringtools::general::StringTools::CheckedParseInt(&local_2c, pSVar3);
                if (cVar5 != '\0') {
                    pSVar3 = (StringView*)eastl::vector<
                        StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<StringView,
                                eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)param_2,
                        2);
                    cVar5 = core::stringtools::general::StringTools::CheckedParseInt(&local_28, pSVar3);
                    if (cVar5 != '\0') {
                        pSVar3 = (StringView*)eastl::vector<
                            StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                        operator[]((vector<StringView,
                                           eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                                       param_2,
                                   3);
                        cVar5 = core::stringtools::general::StringTools::CheckedParseInt(&local_24, pSVar3);
                        if (cVar5 != '\0') {
                            pOVar4 = (OSClientConsoleUI*)param_1->GetConsoleUI();
                            new (&local_50) dash3d::GridRect(local_30, local_2c, local_28, local_24);
                            pOVar4->SetBounds((Rect*)&local_50);
                        }
                    }
                }
            }
        }
    }

    // 0x100067dd0, 96 bytes, placed by class name
    // DoCommand_ToggleRoof(OSClientConsole&)
    void DoCommand_ToggleRoof(OSClientConsole* param_1) {
        char cVar1;
        long lVar2;
        GameOptions* this;
        char* pcVar3;

        lVar2 = param_1->GetClient();
        this = (GameOptions*)std::unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>::operator*(
            (unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>*)(lVar2 + 8384));
        ToggleRemoveRoof();
        cVar1 = GetRemoveRoof();
        pcVar3 = "Roofs will only be removed selectively";
        if (cVar1 != '\0') {
            pcVar3 = "Roofs are now all hidden";
        }
        console::Console::AddMessage(param_1, 2, pcVar3);
    }

    // 0x100067e80, 448 bytes, placed by class name
    // DoCommand_ChatTimeStamp()
    void DoCommand_ChatTimeStamp() {
        Client* this;
        int iVar1;
        ChatHistory* in_RDI;
        eastl::string local_70[32];
        allocator local_50[8];
        eastl::string local_48[32];
        allocator local_28[8];

        this = (Client*)Client::Instance();
        iVar1 = in_RDI->GetTimestampMode();
        if (iVar1 == 2) {
            ChatHistory::SetTimestampMode(0);
            eastl::allocator::allocator(local_50, "EASTL basic_string");
            eastl::string::basic_string(local_70, "", local_50);
            eastl::allocator::allocator(local_28, "EASTL basic_string");
            eastl::string::basic_string(local_48, "Changing timestamp mode from LOCAL to NONE", local_28);
            AddChat(99, local_70, local_48);
        } else if (iVar1 == 1) {
            ChatHistory::SetTimestampMode(2);
            eastl::allocator::allocator(local_50, "EASTL basic_string");
            eastl::string::basic_string(local_70, "", local_50);
            eastl::allocator::allocator(local_28, "EASTL basic_string");
            eastl::string::basic_string(local_48, "Changing timestamp mode from SERVER to LOCAL", local_28);
            AddChat(99, local_70, local_48);
        } else {
            if (iVar1 != 0) {
                return;
            }
            ChatHistory::SetTimestampMode(1);
            eastl::allocator::allocator(local_50, "EASTL basic_string");
            eastl::string::basic_string(local_70, "", local_50);
            eastl::allocator::allocator(local_28, "EASTL basic_string");
            eastl::string::basic_string(local_48, "Changing timestamp mode from NONE to SERVER", local_28);
            AddChat(99, local_70, local_48);
        }
        eastl::string::~basic_string(local_48);
        eastl::string::~basic_string(local_70);
    }

    // 0x100068060, 192 bytes, placed by class name
    // DoCommand_UIQuality(OSClientConsole&, eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)
    void DoCommand_UIQuality(OSClientConsole* param_1, fixed_vector* param_2) {
        undefined8 in_RAX;
        long lVar3;
        DeviceOptions* this;
        StringView* pSVar4;
        char* pcVar5;
        int local_24;

        local_24 = (int)((ulong)in_RAX >> 32);
        lVar3 = param_1->GetClient();
        this = (DeviceOptions*)
            std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator*(
                (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)(lVar3 + 8376));
        lVar3 = param_2->size();
        if (lVar3 == 1) {
            pSVar4 = (StringView*)
                eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                        param_2,
                    0);
            if (core::stringtools::general::StringTools::CheckedParseInt(&local_24, pSVar4) != '\0') {
                if (IsValidEnumValue<ChatTimestampMode>(local_24)) {
                    SetUIQuality(local_24);
                    pcVar5 = "UI quality set to %d";
                    goto LAB_1000680f0;
                }
            }
            console::Console::AddMessage(param_1, 5,
                                         "Invalid argument - Expected 0 (lowest quality) - 2 (highest quality)");
        } else {
            local_24 = GetUIQuality();
            pcVar5 = "Current UI quality is %d";
        LAB_1000680f0:
            console::Console::AddMessage(param_1, 2, pcVar5, local_24);
        }
    }

    // 0x100068540, 208 bytes, placed by class name
    // DoCommand_SetWindowSize(OSClientConsole&, eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)
    void DoCommand_SetWindowSize(OSClientConsole* param_1, fixed_vector* param_2) {
        ulong uVar1;
        StringView* pSVar2;
        long lVar3;
        DeviceOptions* pDVar4;
        char cVar5;
        int local_20;
        int local_1c;

        uVar1 = param_2->size();
        if (1 < uVar1) {
            local_20 = 0;
            local_1c = 0;
            pSVar2 = (StringView*)
                eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                        param_2,
                    0);
            cVar5 = core::stringtools::general::StringTools::CheckedParseInt(&local_20, pSVar2);
            if ((cVar5 != '\0') && (0 < local_20)) {
                pSVar2 = (StringView*)eastl::vector<
                    StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                        param_2,
                    1);
                cVar5 = core::stringtools::general::StringTools::CheckedParseInt(&local_1c, pSVar2);
                if ((cVar5 != '\0') && (0 < local_1c)) {
                    lVar3 = Client::Instance();
                    pDVar4 =
                        (DeviceOptions*)std::
                            unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                                (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)(lVar3 +
                                                                                                                 8376));
                    pDVar4->SetWindowWidth(local_20, false);
                    lVar3 = Client::Instance();
                    pDVar4 =
                        (DeviceOptions*)std::
                            unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                                (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)(lVar3 +
                                                                                                                 8376));
                    pDVar4->SetWindowHeight(local_1c, true);
                    return;
                }
            }
        }
        param_1->PrintCommandHelp("setwindowsize");
    }

    // 0x100068610, 128 bytes, placed by class name
    // DoCommand_SetWindowTopmost(OSClientConsole&, eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)
    void DoCommand_SetWindowTopmost(OSClientConsole* param_1, fixed_vector* param_2) {
        long lVar1;
        StringView* pSVar2;
        DeviceOptions* this;
        int local_1c;

        lVar1 = param_2->size();
        if (lVar1 != 0) {
            local_1c = 0;
            pSVar2 = (StringView*)
                eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                        param_2,
                    0);
            if (core::stringtools::general::StringTools::CheckedParseInt(&local_1c, pSVar2) != '\0') {
                lVar1 = Client::Instance();
                this =
                    (DeviceOptions*)
                        std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->(
                            (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)(lVar1 +
                                                                                                             8376));
                SetWindowTopmost(local_1c != 0);
                return;
            }
        }
        param_1->PrintCommandHelp("setwindowtopmost");
    }

    // 0x100068f60, 48 bytes, placed by class name
    // GetStringName(Font)
    char* GetStringName(int param_1) {
        if (param_1 - 1U < 5) {
            return (&PTR_s_p12_full_100ef3fa0)[(int)(param_1 - 1U)];
        }
        return "p11_full";
    }

    // 0x1000744b0, 176 bytes, placed by class name
    // MatchRecursive(std::array<std::array<bool, 10ul>, 10ul> const&, std::array<bool, 10ul>&, int)
    /* MatchRecursive(std::array<std::array<bool, 10ul>, 10ul> const&, std::array<bool,
   10ul>&, int) */

    ulong MatchRecursive(array* param_1, array* param_2, int param_3) {
        array<bool, 10ul>* this;
        char* pcVar2;
        ulong uVar3;
        ulong unaff_R15;

        this = (array<bool, 10ul>*)std::array<std::array<bool, 10ul>, 10ul>::operator[](
            (array<std::array<bool, 10ul>, 10ul>*)param_1, (long)param_3);
        uVar3 = 0;
        do {
            pcVar2 = (char*)std::array<bool, 10ul>::operator[](this, uVar3);
            if ((*pcVar2 != '\0') &&
                (pcVar2 = (char*)std::array<bool, 10ul>::operator[]((array<bool, 10ul>*)param_2, uVar3),
                 *pcVar2 == '\0')) {
                unaff_R15 = CONCAT71((int7)(unaff_R15 >> 8), 1);
                if (param_3 == 9)
                    goto LAB_100074545;
                *pcVar2 = '\x01';
                if (MatchRecursive(param_1, param_2, param_3 + 1) != '\0')
                    goto LAB_100074545;
                *pcVar2 = '\0';
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 != 10);
        unaff_R15 = 0;
    LAB_100074545:
        return unaff_R15 & 4294967295;
    }

    // 0x100074590, 320 bytes, placed by class name
    // MatchOps(OpGroup const&, OpGroup const&)
    void MatchOps(OpGroup* param_1, OpGroup* param_2) {
        array<bool, 10ul>* paVar2;
        basic_string* pbVar3;
        basic_string* pbVar4;
        undefined1* puVar5;
        ulong uVar6;
        ulong uVar7;
        array<std::array<bool, 10ul>, 10ul> local_c0[104];
        OpGroup* local_58;
        bool local_49;
        ulong local_48;
        undefined2 local_40;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        uVar6 = 0;
        local_58 = param_2;
        do {
            paVar2 = (array<bool, 10ul>*)std::array<std::array<bool, 10ul>, 10ul>::operator[](local_c0, uVar6);
            local_48 = local_48 & 18446744073709551360;
            std::array<bool, 10ul>::fill(paVar2, (bool*)&local_48);
            uVar6 = uVar6 + 1;
        } while (uVar6 != 10);
        local_58 = (OpGroup*)&local_58->field_40;
        uVar6 = 0;
        do {
            pbVar3 = (basic_string*)std::array<eastl::string, 10ul>::operator[]((array<eastl::string, 10ul>*)local_58,
                                                                                uVar6);
            uVar7 = 0;
            do {
                pbVar4 = (basic_string*)std::array<eastl::string, 10ul>::operator[](
                    (array<eastl::string, 10ul>*)&param_1->field_40, uVar7);
                if (core::stringtools::general::StringTools::MatchPattern<
                        eastl::basic_string<char, BucketAllocatorEASTL>>(pbVar4, pbVar3)) {
                    paVar2 = (array<bool, 10ul>*)std::array<std::array<bool, 10ul>, 10ul>::operator[](local_c0, uVar6);
                    puVar5 = (undefined1*)std::array<bool, 10ul>::operator[](paVar2, uVar7);
                    *puVar5 = 1;
                }
                uVar7 = uVar7 + 1;
            } while (uVar7 != 10);
            uVar6 = uVar6 + 1;
        } while (uVar6 != 10);
        local_40 = 0;
        local_48 = 0;
        local_49 = false;
        local_48.fill(&local_49);
        MatchRecursive((array*)local_c0, (array*)&local_48, 0);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100074720, 160 bytes, placed by class name
    // MatchOpsExact(OpGroup const&, OpGroup const&)
    ulong MatchOpsExact(OpGroup* param_1, OpGroup* param_2) {
        bool bVar1;
        basic_string* pbVar2;
        basic_string* pbVar3;
        ulong uVar4;
        undefined8 unaff_R12;
        bool bVar5;

        pbVar2 = (basic_string*)std::array<eastl::string, 10ul>::operator[](
            (array<eastl::string, 10ul>*)&param_2->field_40, 0);
        pbVar3 = (basic_string*)std::array<eastl::string, 10ul>::operator[](
            (array<eastl::string, 10ul>*)&param_1->field_40, 0);
        bVar1 = core::stringtools::general::StringTools::MatchPattern<eastl::basic_string<char, BucketAllocatorEASTL>>(
            pbVar3, pbVar2);
        bVar5 = true;
        if (bVar1) {
            uVar4 = 0;
            do {
                bVar5 = uVar4 < 9;
                if (uVar4 == 9)
                    break;
                uVar4 = uVar4 + 1;
                pbVar2 = (basic_string*)std::array<eastl::string, 10ul>::operator[](
                    (array<eastl::string, 10ul>*)&param_2->field_40, uVar4);
                pbVar3 = (basic_string*)std::array<eastl::string, 10ul>::operator[](
                    (array<eastl::string, 10ul>*)&param_1->field_40, uVar4);
                bVar1 = core::stringtools::general::StringTools::MatchPattern<
                    eastl::basic_string<char, BucketAllocatorEASTL>>(pbVar3, pbVar2);
            } while (bVar1);
        }
        return (CONCAT71((int7)((ulong)unaff_R12 >> 8), bVar5) ^ 1) & 4294967295;
    }

    // 0x1000be130, 160 bytes, placed by class name
    // ParseInts(int&, long long&, char const*, char const*)
    undefined8 ParseInts(int* param_1, longlong* param_2, char* param_3, char* param_4) {
        int iVar1;
        undefined4 extraout_var;
        undefined8 uVar2;
        size_t sVar3;
        char local_138[264];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        sVar3 = (long)param_4 - (long)param_3;
        if (sVar3 - 3 < 248) {
            _memcpy(local_138, param_3, sVar3);
            local_138[sVar3] = '\0';
            iVar1 = _sscanf(local_138, "%d,%lld", param_1, param_2);
            uVar2 = CONCAT71((int7)(CONCAT44(extraout_var, iVar1) >> 8), iVar1 == 2);
        } else {
            uVar2 = 0;
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar2;
    }

    // 0x1000dd4f0, 16 bytes, placed by class name
    // informWebPageOfResize()
    void informWebPageOfResize() {}

    // 0x1001129b0, 16 bytes, placed by class name
    // addPrecacheJS5(shared_ptr<jagex3::Js5>&, eastl::string)
    void addPrecacheJS5() {}

    // 0x10011f260, 192 bytes, placed by class name
    // ComputeSafeOffset(int&, Client*)
    void ComputeSafeOffset(int* param_1, Client* param_2) {
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        NXTPixToolkit* this;
        WorldmapAreaMetadata* this_00;
        vector* pvVar5;
        int* piVar6;
        Rect<int> local_48[16];
        uint local_38[2];

        local_48->GetUISafeArea();
        this = (NXTPixToolkit*)param_2->GetMemoryCache();
        this_00 = (WorldmapAreaMetadata*)GetScreen();
        local_38[0] = this_00->GetMinMapX();
        pvVar5 = local_48->SSOBeginPtr(param_2);
        iVar4 = *(int*)pvVar5;
        iVar2 = local_38->GetX();
        piVar6 = (int*)local_48->second();
        iVar1 = *piVar6;
        iVar3 = local_38->GetX();
        iVar3 = (iVar3 - (iVar3 + -765 >> 31)) + -765 >> 1;
        if (iVar3 < iVar4) {
            iVar3 = iVar4;
        }
        *param_1 = iVar3;
        if (iVar3 + 765 < iVar2 - iVar1) {
            iVar4 = local_48->Right();
            *param_1 = iVar4 + -765;
        }
        if (*param_1 < 0) {
            *param_1 = 0;
        }
    }

    // 0x10011fce0, 80 bytes, placed by class name
    // ShouldRequestTokens()
    bool ShouldRequestTokens() {
        long lVar1;
        Client* pCVar2;
        LoginManager* this;

        lVar1 = Client::Instance();
        if (*(char*)(lVar1 + 8425) != '\0') {
            pCVar2 = (Client*)Client::Instance();
            lVar1 = pCVar2->GetLoginManager();
            if (lVar1 != 0) {
                pCVar2 = (Client*)Client::Instance();
                this = (LoginManager*)pCVar2->GetLoginManager();
                lVar1 = GetAuthWrapper();
                return lVar1 != 0;
            }
        }
        return false;
    }

    // 0x100168610, 128 bytes, placed by class name
    // StringToPartner(eastl::string const&)
    int StringToPartner(basic_string* param_1) {
        bool bVar1;
        int iVar2;

        bVar1 = eastl::operator==(param_1, (value_type*)"steam");
        iVar2 = 10;
        if (!bVar1) {
            bVar1 = eastl::operator==(param_1, (value_type*)"jagex");
            iVar2 = 9;
            if (!bVar1) {
                bVar1 = eastl::operator==(param_1, (value_type*)"google");
                iVar2 = 4;
                if (!bVar1) {
                    bVar1 = eastl::operator==(param_1, (value_type*)"apple");
                    iVar2 = (uint)bVar1 * 9 + -1;
                }
            }
        }
        return iVar2;
    }

    // 0x10017bf50, 208 bytes, placed by class name
    // GetPatternAsColTabIndices(eastl::fixed_vector<unsigned char, 8ul, true, eastl::allocator>&, eastl::basic_string<char, BucketAllocatorEASTL> const&)
    bool GetPatternAsColTabIndices(fixed_vector* param_1, basic_string* param_2) {
        char cVar1;
        long lVar2;
        ulong uVar3;
        char* pcVar4;
        byte bVar5;
        long lVar6;
        int iVar7;
        byte local_31;

        lVar2 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        lVar6 = 0;
        do {
            uVar3 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            iVar7 = 1;
            if ((ulong)(lVar6 + lVar2) < uVar3) {
                pcVar4 = (char*)param_2->at(lVar6 + lVar2);
                cVar1 = *pcVar4;
                if (cVar1 == ':') {
                    iVar7 = 3;
                } else if (lVar6 == 8) {
                    lVar6 = 8;
                } else {
                    bVar5 = cVar1 - 48;
                    if (9 < bVar5) {
                        if (25 < (byte)(cVar1 + 159U))
                            goto LAB_10017bf96;
                        bVar5 = cVar1 + 169;
                    }
                    local_31 = bVar5;
                    param_1->push_back(&local_31);
                    lVar6 = lVar6 + 1;
                    iVar7 = 0;
                }
            }
        LAB_10017bf96:
            if (iVar7 != 0) {
                return iVar7 == 3 && lVar6 != 0;
            }
        } while (true);
    }

} // namespace jag::oldscape

namespace jag::oldscape::widgets {
    // 0x1000670d0, 208 bytes, placed by class name and debug map
    // Snow_OldScape::DrawSnowFlakes(int, int, int, int)
    void Snow_OldScape::DrawSnowFlakes(int param_1, int param_2, int param_3, int param_4) {
        DrawContext* this_00;
        int iVar1;
        int iVar2;
        Option<game::option::EnumBrightness>* this_01;
        float* pfVar3;
        undefined1 local_50[24];

        this_01 = (Option<game::option::EnumBrightness>*)second();
        iVar1 = this_01->GetValue();
        if (0 < iVar1) {
            iVar1 = 0;
            local_50._16_8_ = this_01;
            do {
                pfVar3 = (float*)FastPool<game::console::Snow::SnowFlake, int>::operator[](
                    (FastPool<game::console::Snow::SnowFlake, int>*)this_01, iVar1);
                this_00 = field_112;
                new (local_50) dash3d::GridRect((int)(*pfVar3 + 0.5) + param_1, (int)(pfVar3[1] + 0.5) + param_2, 2, 2);
                this_01 = (Option<game::option::EnumBrightness>*)local_50._16_8_;
                this_00->FillRect(local_50, 16777215, (uint) * (byte*)(pfVar3 + 6));
                iVar1 = iVar1 + 1;
                iVar2 = this_01->GetValue();
            } while (iVar1 < iVar2);
        }
    }

    // 0x1000671f0, 144 bytes, placed by class name and debug map
    // Snow_OldScape::DrawSnowPiles(int, int, int, int)
    void Snow_OldScape::DrawSnowPiles(int param_1, int param_2, int param_3, int param_4) {
        vector<unsigned short, eastl::allocator>* this_00;
        ushort* puVar1;
        ulong uVar2;

        this_00 = (vector<unsigned short, eastl::allocator>*)get_overflow_allocator();
        if (0 < param_3) {
            uVar2 = (ulong)param_1;
            do {
                puVar1 = (ushort*)eastl::vector<unsigned short, eastl::allocator>::operator[](this_00, uVar2);
                if (*puVar1 != 0) {
                    ((int)field_112, (int)uVar2, param_4, (int)uVar2, param_4 - (uint)*puVar1, 16777215)->Line();
                }
                uVar2 = uVar2 + 1;
            } while ((long)uVar2 < (long)(param_3 + param_1));
        }
    }

} // namespace jag::oldscape::widgets
