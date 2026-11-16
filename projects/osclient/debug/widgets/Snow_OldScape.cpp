// projects/osclient/debug/widgets/Snow_OldScape.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "Snow_OldScape.h"

namespace jag::oldscape {
    // 0x100009ca0: ErrIsNeg1(unsigned long) has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x100067320
    void DoCommand_FpsLimit(OSClientConsole& osClientConsole, const eastl::fixed_vector<StringView, 4ul>& stringViews) {
        Client* pCVar3;
        uint64_t uVar4;
        uint8_t auVar5[16];
        ReturnValue local_40;
        StringTools local_1c;

        if (stringViews.size() == 0) {
            osClientConsole.AddMessage(5, "No argument provided for fpsLimit");
        } else {
            local_1c.field_0 = 0;
            auVar5 = stringViews[0];
            if (local_1c.CheckedParseInt(*auVar5._0_8_, *auVar5._8_8_) == '\0') {
                local_40 = ((StringView*)stringViews[0])->to_owned_string<eastl::string>();
                uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                osClientConsole.AddMessage(5, "Unable to parse fpsLimit: %s", uVar4);
            } else {
                pCVar3 = Client::Instance();
                ((DeviceOptions*)pCVar3->field_8376.operator->())->SetFpsLimit(local_1c.field_0);
            }
        }
    }

    // 0x1000674d0
    void DoCommand_DebugSpam(OSClientConsole& osClientConsole) {
        unsigned int uVar1 = DoCommand_DebugSpam(OSClientConsole&)::counter & 1;
        DoCommand_DebugSpam(OSClientConsole&)::counter = DoCommand_DebugSpam(OSClientConsole&)::counter + 1;
        osClientConsole.AddMessage(
            uVar1 + 1, "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut "
                       "labore et dolore magna aliqua.Ut enim ad minim veniam, quis nostrud exercitation ullamco "
                       "laboris nisi ut aliquip ex ea commodo consequat.Duis aute irure dolor in reprehenderit in "
                       "voluptate velit esse cillum dolore eu fugiat nulla pariatur.Excepteur sint occaecat cupidatat "
                       "non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.");
    }

    // 0x100067540
    void PerfCaptureInputArgumentHandler(OSClientConsole& osClientConsole,
                                         const eastl::fixed_vector<StringView, 4ul>& stringViews) {
        eastl::string local_38;

        PerformanceCapture* pPVar1 = &local_38;
        new (pPVar1) eastl::string();
        pPVar1 = (PerformanceCapture*)pPVar1->Instance();
        pPVar1->DoCommand(stringViews, local_38);
        char* str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        osClientConsole.AddMessage(2, str);
    }

    // 0x1000675b0
    void DoCommand_ClientError(OSClientConsole& osClientConsole,
                               const eastl::fixed_vector<StringView, 4ul>& stringViews) {
        uint64_t uVar2;
        ReturnValue local_40;

        Callstack local_388;
        local_388.Capture(0);
        eastl::string local_60("ClientError command invoked");
        if (stringViews.size() != 0) {
            local_40 = ((StringView*)stringViews[0])->to_owned_string<eastl::string>();
            uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_60.append_sprintf(": %s", uVar2);
        }
        OldscapeClientError::ReportError((char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin(), &local_388);
        osClientConsole.AddMessage(2, "Error reported to the server");
    }

    // 0x1000677b0
    void DoCommand_SetDrawDistance(OSClientConsole& osClientConsole,
                                   const eastl::fixed_vector<StringView, 4ul>& stringViews) {
        Client* pCVar3;
        char* str;
        uint8_t auVar4[16];
        eastl::string local_68;
        eastl::string local_48;
        StringTools local_1c;

        if (stringViews.size() == 0) {
            str = "Missing argument for distance";
        } else {
            auVar4 = stringViews[0];
            if (local_1c.CheckedParseInt(*auVar4._0_8_, *auVar4._8_8_) != '\0') {
                local_68 = eastl::string();
                local_68.append_sprintf("Setting Draw Distance to %i", (unsigned long)(unsigned int)local_1c.field_0);
                pCVar3 = (Client*)osClientConsole.GetClient();
                pCVar3->SetDrawDistance(local_1c.field_0);
                pCVar3 = Client::Instance();
                local_48 = eastl::string("");
                pCVar3->AddChat(99, local_48, local_68);
                return;
            }
            str = "Unable to parse argument for distance";
        }
        osClientConsole.AddMessage(5, str);
    }

    // 0x100067a30
    void DoCommand_Cls(OSClientConsole& osClientConsole) {
        osClientConsole.Clear();
    }

    // 0x100067a40
    void DoCommand_Help(OSClientConsole& osClientConsole, const eastl::fixed_vector<StringView, 4ul>& stringViews) {
        ConsoleCommands* consoleCommands;
        long lVar2;
        char* pcVar3;
        vector<char const*> local_4a0[24];
        function<void(eastl::stringconst&, ConsoleCommandHelp const&)> local_488[56];
        long local_28;

        if (stringViews.empty()) {
            new (local_4a0) std::vector<char const*>();
            osClientConsole.AddMessage(2, "== Cheat commands ==");
            local_450 = eastl::fixed_string<char, 1024>();
            consoleCommands = (ConsoleCommands*)osClientConsole.GetCommands();
            std::function<void(eastl::stringconst&, ConsoleCommandHelp const&)>::function<
                DoCommand_Help(OSClientConsole&, eastl::fixed_vector<StringView, 4ul> const&)::__85, void>(local_488,
                                                                                                           &local_450);
            consoleCommands->ForEachCommandHelp(*local_488);
            lVar2 = local_450.size();
            if (lVar2 == 0) {
                osClientConsole.AddMessage(5, "None found.");
            } else {
                lVar2 = local_450.size();
                local_450.resize(lVar2 - 2);
                pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                osClientConsole.AddMessage(1, pcVar3);
                osClientConsole.AddMessage(2, " ");
                osClientConsole.AddMessage(
                    2, "<col=ffa0ff>? <lt>command<gt></col> : get usage and description of a command.");
            }
            osClientConsole.AddMessage(2, "<col=ffa0ff>~<lt>debugprocname<gt></col> : run a named debugproc.");
            osClientConsole.AddMessage(2, "<col=ffa0ff>cls</col> : clear the output window.");
            osClientConsole.AddMessage(2, " ");
        }
        StringView* this_00 = &stringViews[0];
        auto local_450 = this_00->to_owned_string<eastl::string>();
        pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        osClientConsole.PrintCommandHelp(pcVar3);
    }

    // 0x100067c80
    void DoCommand_ConsoleBounds(OSClientConsole& osClientConsole,
                                 const eastl::fixed_vector<StringView, 4ul>& stringViews) {
        int iVar2;
        OSClientConsoleUI* pOVar5;
        uint8_t auVar6[16];
        GridRect local_50;
        StringTools local_30;
        StringTools local_2c;
        StringTools local_28;
        StringTools local_24;

        if (stringViews.size() != 0) {
            local_50 = ((StringView*)stringViews[0])->to_owned_string<eastl::string>();
            iVar2 = local_50.comparei("default");
            if (iVar2 == 0) {
                pOVar5 = osClientConsole.GetConsoleUI();
                pOVar5->SetBoundsToDefault();
                return;
            }
        }
        unsigned long uVar4 = stringViews.size();
        if (3 < uVar4) {
            auVar6 = stringViews[0];
            if (local_30.CheckedParseInt(*auVar6._0_8_, *auVar6._8_8_)) {
                auVar6 = stringViews[1];
                if (local_2c.CheckedParseInt(*auVar6._0_8_, *auVar6._8_8_)) {
                    auVar6 = stringViews[2];
                    if (local_28.CheckedParseInt(*auVar6._0_8_, *auVar6._8_8_)) {
                        auVar6 = stringViews[3];
                        if (local_24.CheckedParseInt(*auVar6._0_8_, *auVar6._8_8_)) {
                            pOVar5 = osClientConsole.GetConsoleUI();
                            local_50 = dash3d::GridRect(local_30.field_0, local_2c.field_0, local_28.field_0,
                                                        local_24.field_0);
                            pOVar5->SetBounds(local_50);
                        }
                    }
                }
            }
        }
    }

    // 0x100067dd0
    void DoCommand_ToggleRoof(OSClientConsole& osClientConsole) {
        long lVar2 = osClientConsole.GetClient();
        auto gameOptions = *(*((lVar2 + 8384)));
        gameOptions->ToggleRemoveRoof();
        bool cVar1 = gameOptions->GetRemoveRoof();
        char* str = "Roofs will only be removed selectively";
        if (cVar1) {
            str = "Roofs are now all hidden";
        }
        osClientConsole.AddMessage(2, str);
    }

    // 0x100067e80
    void DoCommand_ChatTimeStamp() {
        eastl::string local_70;
        eastl::string local_48;

        auto client = Client::Instance();
        int iVar1 = ChatHistory::GetTimestampMode();
        if (iVar1 == 2) {
            ChatHistory::SetTimestampMode(0);
            local_70 = eastl::string("");
            local_48 = eastl::string("Changing timestamp mode from LOCAL to NONE");
            client->AddChat(99, local_70, local_48);
        } else if (iVar1 == 1) {
            ChatHistory::SetTimestampMode(2);
            local_70 = eastl::string("");
            local_48 = eastl::string("Changing timestamp mode from SERVER to LOCAL");
            client->AddChat(99, local_70, local_48);
        } else {
            if (iVar1 != 0) {
                return;
            }
            ChatHistory::SetTimestampMode(1);
            local_70 = eastl::string("");
            local_48 = eastl::string("Changing timestamp mode from NONE to SERVER");
            client->AddChat(99, local_70, local_48);
        }
    }

    // 0x100068060
    void DoCommand_UIQuality(OSClientConsole& osClientConsole,
                             const eastl::fixed_vector<StringView, 4ul>& stringViews) {
        unsigned long in_RAX;
        char* str;
        uint8_t auVar4[16];

        uint64_t uStack_28 = in_RAX;
        long lVar3 = osClientConsole.GetClient();
        auto deviceOptions = *(*((lVar3 + 8376)));
        lVar3 = stringViews.size();
        if (lVar3 == 1) {
            auVar4 = stringViews[0];
            if (((StringTools*)((long)&uStack_28 + 4))->CheckedParseInt(*auVar4._0_8_, *auVar4._8_8_) != '\0') {
                if (IsValidEnumValue<ChatTimestampMode>((type*)(uStack_28 >> 32))) {
                    deviceOptions->SetUIQuality(uStack_28._4_4_);
                    str = "UI quality set to %d";
                    goto LAB_1000680f0;
                }
            }
            osClientConsole.AddMessage(5, "Invalid argument - Expected 0 (lowest quality) - 2 (highest quality)");
        } else {
            uStack_28._4_4_ = deviceOptions->GetUIQuality();
            str = "Current UI quality is %d";
        LAB_1000680f0:
            osClientConsole.AddMessage(2, str, (unsigned long)uStack_28._4_4_);
        }
    }

    // 0x100068540
    void DoCommand_SetWindowSize(OSClientConsole& osClientConsole,
                                 const eastl::fixed_vector<StringView, 4ul>& stringViews) {
        bool cVar1;
        Client* pCVar3;
        DeviceOptions* pDVar4;
        uint8_t auVar5[16];
        StringTools local_20;
        StringTools local_1c;

        unsigned long uVar2 = stringViews.size();
        if (1 < uVar2) {
            local_20.field_0 = 0;
            local_1c.field_0 = 0;
            auVar5 = stringViews[0];
            cVar1 = local_20.CheckedParseInt(*auVar5._0_8_, *auVar5._8_8_);
            if ((cVar1) && (0 < local_20.field_0)) {
                auVar5 = stringViews[1];
                cVar1 = local_1c.CheckedParseInt(*auVar5._0_8_, *auVar5._8_8_);
                if ((cVar1) && (0 < local_1c.field_0)) {
                    pCVar3 = Client::Instance();
                    pDVar4 = (DeviceOptions*)pCVar3->field_8376.operator->();
                    pDVar4->SetWindowWidth(local_20.field_0, false);
                    pCVar3 = Client::Instance();
                    pDVar4 = (DeviceOptions*)pCVar3->field_8376.operator->();
                    pDVar4->SetWindowHeight(local_1c.field_0, true);
                    return;
                }
            }
        }
        osClientConsole.PrintCommandHelp("setwindowsize");
    }

    // 0x100068610
    void DoCommand_SetWindowTopmost(OSClientConsole& osClientConsole,
                                    const eastl::fixed_vector<StringView, 4ul>& stringViews) {
        Client* pCVar3;
        uint8_t auVar4[16];
        StringTools local_1c;

        if (stringViews.size() != 0) {
            local_1c.field_0 = 0;
            auVar4 = stringViews[0];
            if (local_1c.CheckedParseInt(*auVar4._0_8_, *auVar4._8_8_) != '\0') {
                pCVar3 = Client::Instance();
                ((DeviceOptions*)pCVar3->field_8376.operator->())->SetWindowTopmost(local_1c.field_0 != 0);
                return;
            }
        }
        osClientConsole.PrintCommandHelp("setwindowtopmost");
    }

    // 0x100068f60
    char* GetStringName(Font arg1) {
        if (param_1 - 1U < 5) {
            return (&PTR_s_p12_full_100ef3fa0)[(param_1 - 1U)];
        }
        return "p11_full";
    }

    // 0x1000744b0
    unsigned long MatchRecursive(const std::array<std::array<bool, 10ul>, 10ul>& arg1, std::array<bool, 10ul>& arg2,
                                 int arg3) {
        char* pcVar2;
        unsigned long unaff_R15;

        array<bool, 10ul>* array = &arg1[(long)arg3];
        unsigned long arg1_00 = 0;
        do {
            pcVar2 = (char*)(*array)[arg1_00];
            if ((*pcVar2 != '\0') && (pcVar2 = (char*)arg2[arg1_00], *pcVar2 == '\0')) {
                unaff_R15 = (((uint64_t)((int64_t)(unaff_R15 >> 8)) << 8) | (uint8_t)1);
                if (arg3 == 9)
                    goto LAB_100074545;
                *pcVar2 = '\x01';
                if (MatchRecursive(arg1, arg2, arg3 + 1) != '\0')
                    goto LAB_100074545;
                *pcVar2 = '\0';
            }
            arg1_00 = arg1_00 + 1;
        } while (arg1_00 != 10);
        unaff_R15 = 0;
    LAB_100074545:
        return unaff_R15 & 4294967295;
    }

    // 0x100074590
    void MatchOps(const OpGroup& opGroup1, const OpGroup& opGroup2) {
        array<bool, 10ul>* paVar2;
        eastl::string* str2;
        eastl::string* str1;
        uint8_t* puVar3;
        unsigned long arg1;
        array<std::array<bool, 10ul>, 10ul> local_c0;
        unsigned long local_48;

        unsigned long uVar4 = 0;
        OpGroup* local_58 = opGroup2;
        do {
            paVar2 = &local_c0[uVar4];
            local_48 = local_48 & 18446744073709551360;
            paVar2->fill(local_48);
            uVar4 = uVar4 + 1;
        } while (uVar4 != 10);
        local_58 = (OpGroup*)&local_58->field_40;
        uVar4 = 0;
        do {
            str2 = (eastl::string*)(*local_58)[uVar4];
            arg1 = 0;
            do {
                str1 = &opGroup1.field_40[arg1];
                if (core::stringtools::general::StringTools::MatchPattern<
                        eastl::basic_string<char, BucketAllocatorEASTL>>(*str1, *str2)) {
                    paVar2 = &local_c0[uVar4];
                    puVar3 = (uint8_t*)(*paVar2)[arg1];
                    *puVar3 = 1;
                }
                arg1 = arg1 + 1;
            } while (arg1 != 10);
            uVar4 = uVar4 + 1;
        } while (uVar4 != 10);
        uint16_t local_40 = 0;
        local_48 = 0;
        local_48.fill(false);
        MatchRecursive(&local_c0, (array<bool, _10ul>*)&local_48, 0);
    }

    // 0x100074720
    unsigned long MatchOpsExact(const OpGroup& opGroup1, const OpGroup& opGroup2) {
        unsigned long arg1;
        uint64_t unaff_R12;

        eastl::string* pbVar2 = &opGroup2.field_40[0];
        eastl::string* pbVar3 = &opGroup1.field_40[0];
        bool bVar1 =
            core::stringtools::general::StringTools::MatchPattern<eastl::basic_string<char, BucketAllocatorEASTL>>(
                *pbVar3, *pbVar2);
        bool bVar4 = true;
        if (bVar1) {
            arg1 = 0;
            do {
                bVar4 = arg1 < 9;
                if (arg1 == 9)
                    break;
                arg1 = arg1 + 1;
                pbVar2 = &opGroup2.field_40[arg1];
                pbVar3 = &opGroup1.field_40[arg1];
                bVar1 = core::stringtools::general::StringTools::MatchPattern<
                    eastl::basic_string<char, BucketAllocatorEASTL>>(*pbVar3, *pbVar2);
            } while (bVar1);
        }
        return ((((uint64_t)((int64_t)((unsigned long)unaff_R12 >> 8)) << 8) | (uint8_t)bVar4) ^ 1) & 4294967295;
    }

    // 0x1000be130
    void ParseInts(int& arg1, long long& arg2, const char* str1, const char* str2) {
        int iVar1;
        uint32_t extraout_var;
        uint64_t uVar2;
        char local_138[264];

        size_t sVar3 = (long)str2 - (long)str1;
        if (sVar3 - 3 < 248) {
            _memcpy(local_138, str1, sVar3);
            local_138[sVar3] = '\0';
            iVar1 = _sscanf(local_138, "%d,%lld", arg1, arg2);
            uVar2 = (((uint64_t)((int64_t)((((uint64_t)extraout_var << 32) | (uint32_t)iVar1) >> 8)) << 8) |
                     (uint8_t)(iVar1 == 2));
        } else {
            uVar2 = 0;
        }
        return uVar2;
    }

    // 0x1000dd4f0
    void informWebPageOfResize() {}

    // 0x1001129b0
    void addPrecacheJS5(shared_ptr<jagex3::Js5>& js5, eastl::string str) {}

    // 0x10011f260
    void ComputeSafeOffset(int& arg1, Client* client) {
        unsigned int local_38[2];

        auto local_48 = client->GetUISafeArea();
        auto nXTPixToolkit = client->GetMemoryCache();
        local_38[0] = ((WorldmapAreaMetadata*)nXTPixToolkit->GetScreen())->GetMinMapX();
        auto piVar5 = local_48.SSOBeginPtr();
        int iVar4 = *piVar5;
        int iVar2 = local_38->GetX();
        piVar5 = (int*)local_48.second();
        int iVar1 = *piVar5;
        int iVar3 = local_38->GetX();
        iVar3 = (iVar3 - (iVar3 - 765 >> 31)) - 765 >> 1;
        if (iVar3 < iVar4) {
            iVar3 = iVar4;
        }
        arg1 = iVar3;
        if (iVar3 + 765 < iVar2 - iVar1) {
            iVar4 = local_48.Right();
            arg1 = iVar4 - 765;
        }
        if (arg1 < 0) {
            arg1 = 0;
        }
    }

    // 0x10011fce0
    bool ShouldRequestTokens() {
        LoginManager* pLVar2;

        auto pCVar1 = Client::Instance();
        if (pCVar1->field_8425 != false) {
            pCVar1 = Client::Instance();
            pLVar2 = pCVar1->GetLoginManager();
            if (pLVar2 != nullptr) {
                pCVar1 = Client::Instance();
                pLVar2 = pCVar1->GetLoginManager();
                return pLVar2->GetAuthWrapper() != 0;
            }
        }
        return false;
    }

    // 0x100168610
    int StringToPartner(const eastl::string& str) {
        bool bVar1 = str == (*((value_type*)"steam"));
        int iVar2 = 10;
        if (!bVar1) {
            bVar1 = str == (*((value_type*)"jagex"));
            iVar2 = 9;
            if (!bVar1) {
                bVar1 = str == (*((value_type*)"google"));
                iVar2 = 4;
                if (!bVar1) {
                    bVar1 = str == (*((value_type*)"apple"));
                    iVar2 = (unsigned int)bVar1 * 9 - 1;
                }
            }
        }
        return iVar2;
    }

    // 0x10017bf50
    bool GetPatternAsColTabIndices(eastl::fixed_vector<unsigned char, 8ul>& arg1,
                                   const eastl::basic_string<char, BucketAllocatorEASTL>& str) {
        char cVar1;
        unsigned long uVar3;
        char* pcVar4;
        uint8_t bVar5;
        int iVar7;

        long lVar2 =
            ((basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>*)&constants::text::chatcol13)
                ->size();
        arg1.clear();
        long lVar6 = 0;
        do {
            uVar3 = str.size();
            iVar7 = 1;
            if ((unsigned long)(lVar6 + lVar2) < uVar3) {
                pcVar4 = (char*)str.at(lVar6 + lVar2);
                cVar1 = *pcVar4;
                if (cVar1 == ':') {
                    iVar7 = 3;
                } else if (lVar6 == 8) {
                    lVar6 = 8;
                } else {
                    bVar5 = cVar1 - 48;
                    if (9 < bVar5) {
                        if (25 < (uint8_t)(cVar1 + 159U))
                            goto LAB_10017bf96;
                        bVar5 = cVar1 + 169;
                    }
                    arg1.push_back(bVar5);
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
    // 0x1000670d0
    void Snow_OldScape::DrawSnowFlakes(int arg1, int arg2, int arg3, int arg4) {
        DrawContext* this_00;
        int iVar2;
        float* pfVar3;
        uint8_t local_50[24];

        auto this_01 = second();
        int iVar1 = this_01->GetValue();
        if (0 < iVar1) {
            iVar1 = 0;
            local_50._16_8_ = this_01;
            do {
                pfVar3 = (float*)(*this_01)[iVar1];
                this_00 = field_112;
                new (local_50) dash3d::GridRect((int)(*pfVar3 + 0.5) + arg1, (int)(pfVar3[1] + 0.5) + arg2, 2, 2);
                this_01 = (FastPool<game::console::Snow::SnowFlake, int>*)local_50._16_8_;
                this_00->FillRect(*local_50, 16777215, (unsigned int)*(uint8_t*)(pfVar3 + 6));
                iVar1 = iVar1 + 1;
                iVar2 = this_01->GetValue();
            } while (iVar1 < iVar2);
        }
    }

    // 0x1000671f0
    void Snow_OldScape::DrawSnowPiles(int arg1, int arg2, int arg3, int arg4) {
        unsigned short* puVar1;
        unsigned long arg1_00;

        auto this_00 = get_overflow_allocator();
        if (0 < arg3) {
            arg1_00 = (unsigned long)arg1;
            do {
                puVar1 = (unsigned short*)(*this_00)[arg1_00];
                if (*puVar1 != 0) {
                    field_112->Line((int)arg1_00, arg4, (int)arg1_00, arg4 - (unsigned int)*puVar1, 16777215, 40);
                }
                arg1_00 = arg1_00 + 1;
            } while ((long)arg1_00 < (long)(arg3 + arg1));
        }
    }

} // namespace jag::oldscape::widgets
