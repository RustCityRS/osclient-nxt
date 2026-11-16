// libs/console/Console.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.console

#include "Console.h"
#include "Console.inl"

namespace jag::console {
    // 0x100d3d3b8
    int32_t g_lineTypeColour[129] = {
        -2139062017, -522133249,  -1593859841, -1593859841, -1061142273, -10460929,   -10460929,  -1061117697,
        1048576000,  1140555776,  -1160088562, 1140850688,  -1840700270, 1068648740,  0,          1076887552,
        286331153,   1068568849,  0,           1076625408,  0,           1076363264,  0,          0,
        536870912,   1081368367,  536870912,   -1066115281, 1610612736,  1081368368,  1202590843, 1065646817,
        -1717986918, 1067030937,  662576702,   1067000315,  446676599,   1081368367,  1082130432, 1065353216,
        0,           -1071382528, -969355202,  1077211558,  1413754136,  -1074191877, -969355202, -1070272090,
        2071794448,  1077314502,  0,           -1073741824, -378232000,  1073529439,  -378232000, 1073005151,
        -378232000,  1074578015,  -378232000,  -1074478497, -107202384,  1074109653,  -214404767, 1073428907,
        -214404767,  -1074054741, 0,           1077149696,  0,           -1075838976, 0,          1075838976,
        0,           1074790400,  1413754136,  1073291771,  1570837929,  1077669086,  -936797364, -1070657251,
        0,           0,           0,           50,          12,          6,           1,          0,
        1,           0,           2301979,     5063219,     3353893,     7759444,     0,          50,
        0,           0,           0,           1,           0,           1,           88,         19,
        7,           24,          1413754136,  -1072094725, 1413754136,  1075388923,  0,          17,
        0,           0,           200,         0,           0,           32,          0,          1,
        2,           3,           4,           5,           0,           0,           0,          0,
        0,
    };

    // 0x100d43424
    int32_t g_lineTypeColour[19] = {
        -2139062017, -522133249, -1593859841, -1593859841, -1061142273, -10460929, -10460929,
        -1061117697, 1017370378, 0,           0,           4096,        4096,      1,
        1,           1,          0,           1,           1,
    };

    // 0x100009d50: Console::GetCommands() const has the same machine code as eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second()

    // 0x100009e70: Console::HistoryListener::~HistoryListener() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x10002d860: Console::LoadCommandHistoryAndVars() has the same machine code as oldscape::option::Option<int>::IsValidValue(int const&) const

    // 0x10002d860: Console::SaveCommandHistoryAndVars() has the same machine code as oldscape::option::Option<int>::IsValidValue(int const&) const

    // 0x10005d8c0: Console::GetCommandHistory() const has the same machine code as oldscape::OSClientConsoleUI::GetBounds() const

    // 0x1000753f0: Console::PendingCommand::~PendingCommand() has the same machine code as oldscape::ConsoleCommandHelp::~ConsoleCommandHelp()

    // 0x1001a3c10: Console::GetMessageHistory() const has the same machine code as MainLoopFrameTimer::GetFPSCounter()

    // 0x1003efcf0: Console::GetLastCommandExecutionResult() const has the same machine code as game::ObjType::GetName() const

    // 0x1003f51a0: Console::GetShortestHiddenCommandLength() const has the same machine code as game::BASType::GetHillRotateLength() const

    // 0x100417fb0: Console::GetStoredVariables() const has the same machine code as game::NPCType::GetHeadIconGraphic() const

    // 0x100c7a7b0
    unsigned long MatchString(const eastl::string& str1, const eastl::string& str2) {
        unsigned long arg1;
        unsigned long arg1_00;
        uint8_t auVar2[12];
        regex local_98;

        eastl::string* local_38 = str1;
        eastl::string local_58(str2);
        unsigned long arg2 = local_58.size();
        do {
            arg1 = local_58.rfind("?", 18446744073709551615);
            if (arg1 != 18446744073709551615) {
                local_58.replace(arg1, 1, "(.)");
                if (arg1 <= arg2) {
                    arg2 = arg2 + 2;
                }
            }
            arg1_00 = local_58.rfind("*", arg2);
            if (arg1_00 != 18446744073709551615) {
                local_58.replace(arg1_00, 1, "(.*)");
                arg2 = arg1_00;
            }
        } while (arg1_00 != 18446744073709551615 || arg1 != 18446744073709551615);
        auVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        std::regex::basic_regex(&local_98, auVar2._0_8_, auVar2._8_4_);
        auVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        bool bVar1 = std::regex_match<char, std::regex_traits<char>>(auVar2._0_8_, local_98, auVar2._8_4_);
        std::regex::~basic_regex(&local_98);
        return bVar1 & 4294967295;
    }

    // 0x100c7a970
    Console::Console() {
        vector<eastl::pair<eastl::string, CommandData>>* local_38 =
            (vector<eastl::pair<eastl::string, CommandData>>*)&field_8;
        new (local_38) eastl::vector_map<eastl::string, CommandData>();
        new (&field_48) eastl::ring_buffer<Line, eastl::vector<Line>>(1024);
        uint8_t* local_68 = &field_48;
        new (m_commandHistory) eastl::ring_buffer<eastl::string, eastl::vector<eastl::string>>(128);
        field_160 = 0;
        *(uint64_t*)&field_164 = 0;
        new (&field_172) std::optional();
        &field_184->unique_ptr<true, void>();
        uint8_t* local_60 = m_commandHistory;
        new (&field_192) eastl::string();
        m_shortestHiddenCommandLength = 2147483647;
        uint8_t* local_48 = &field_240;
        new (local_48) std::function<void(StringView, bool, bool)>();
        uint8_t* local_40 = &field_288;
        uint8_t* local_50 = &field_192;
        new (local_40) eastl::list<Console::PendingCommand>();
        field_320 = 0;
        new (&field_328) eastl::string();
        new (&field_360) eastl::map(local_70);
        new (&field_408) std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>();
        new (&field_528)
            eastl::vector_map<eastl::string, std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>();
        field_568 = 0;
        field_572 = 0;
        local_38->reserve(512);
        RegisterCoreCommands();
    }

    // 0x100c7ac10
    void Console::RegisterCoreCommands() {
        int in_ECX;
        uint32_t in_register_0000000c;
        char* in_RDX;
        char* str;
        char* str_00;
        char* str_01;
        char* str_02;
        char* str_03;
        int in_R8D;

        AddCommand<Console::RegisterCoreCommands()::__0>(
            (RegisteredCommand*)this, this, in_RDX, (__0*)(((uint64_t)in_register_0000000c << 32) | (uint32_t)in_ECX),
            in_R8D);
        AddCommand<Console::RegisterCoreCommands()::__1>(
            (RegisteredCommand*)this, this, str, (__1*)(((uint64_t)in_register_0000000c << 32) | (uint32_t)in_ECX),
            in_R8D);
        AddCommand<Console::RegisterCoreCommands()::__3>(
            (RegisteredCommand*)this, this, str_00, (__3*)(((uint64_t)in_register_0000000c << 32) | (uint32_t)in_ECX),
            in_R8D);
        AddCommand<Console::RegisterCoreCommands()::__4>(
            (RegisteredCommand*)this, this, str_01, (__4*)(((uint64_t)in_register_0000000c << 32) | (uint32_t)in_ECX),
            in_R8D);
        AddCommand<Console::RegisterCoreCommands()::__5>(
            (RegisteredCommand*)this, this, str_02, (__5*)(((uint64_t)in_register_0000000c << 32) | (uint32_t)in_ECX),
            in_R8D);
        AddCommand<Console::RegisterCoreCommands()::__6>(
            (RegisteredCommand*)this, this, str_03, (__6*)(((uint64_t)in_register_0000000c << 32) | (uint32_t)in_ECX),
            in_R8D);
        AddCommand<Console::RegisterCoreCommands()::__2>((RegisteredCommand*)this, "help", (__2*)this, in_ECX);
        AddCommand<Console::RegisterCoreCommands()::__2>((RegisteredCommand*)this, "commands", (__2*)this, in_ECX);
    }

    // 0x100c7acf0
    Console::~Console() {
        if (field_360.empty() == '\0') {
            LogAssert("m_historyListeners.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.cpp", 70,
                      nullptr);
        }
        field_528.~vector_map();
        field_408.~optional();
        field_328.~basic_string();
        field_288.~list();
        field_240.~function();
        field_192.~basic_string();
        field_184.~unique_ptr();
        m_commandHistory->~StringVector();
        field_48.~ring_buffer();
        field_8.~vector_map();
    }

    // 0x100c7ae80
    void Console::RunPendingCommands(float arg1) {
        PendingCommand* pendingCommand;
        char* str;
        int iVar2;
        bool bVar3;
        StringView local_1e0;
        StringView local_1d0;
        StringView local_1c0;
        uint8_t local_1b0[64];
        int local_170;
        bool local_16c;
        StringView local_160;

        if (0.0 < (float)field_320) {
            field_320 = (float)field_320 - arg1;
        }
        list<Console::PendingCommand>* local_168 = (list<Console::PendingCommand>*)&field_288;
        bool cVar1 = local_168->empty();
        list<Console::PendingCommand>* this_00 = local_168;
        if (!cVar1) {
            if ((float)field_320 <= 0.0) {
                if (*(char*)&field_160 == '\0') {
                    if (*(char*)((long)&field_160 + 1) != '\0') {
                        iVar2 = *(int*)&field_168 + 1;
                        *(int*)&field_168 = iVar2;
                        bVar3 = iVar2 != field_164;
                        if (!bVar3) {
                            *(uint64_t*)&field_164 = 0;
                            *(uint8_t*)((long)&field_160 + 1) = 0;
                        }
                        *(bool*)&field_160 = bVar3;
                    }
                    pendingCommand = (PendingCommand*)local_168->front();
                    new (local_1b0) PendingCommand(*pendingCommand);
                    this_00->pop_front();
                    local_1e0.StringView<eastl::fixed_string<char, 40>>(*local_1b0);
                    SanitizeCommand(&local_160);
                    str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    AddMessage(7, str);
                    local_1d0.StringView<eastl::fixed_string<char, 40>>(*local_1b0);
                    local_1c0.StringView<eastl::fixed_string<char, 40>>(*((local_1b0 + 32)));
                    ExecuteCommand(&local_1d0, false, &local_1c0, local_170, local_16c);
                }
                *(uint8_t*)&field_160 = 0;
            }
        }
    }

    // 0x100c7b140
    void Console::AddMessage(LineType lineType, const char* str, ...) {
        char in_AL;
        uint64_t* puVar5;
        uint64_t in_RCX;
        uint64_t in_R8;
        uint64_t in_R9;
        uint64_t in_XMM0_Qa;
        uint64_t in_XMM1_Qa;
        uint64_t in_XMM2_Qa;
        uint64_t in_XMM3_Qa;
        uint64_t in_XMM4_Qa;
        uint64_t in_XMM5_Qa;
        uint64_t in_XMM6_Qa;
        uint64_t in_XMM7_Qa;
        uint8_t uStack0000000000000008;
        uint8_t local_138[24];
        uint64_t local_108;
        uint64_t local_f8;
        uint64_t local_e8;
        uint64_t local_d8;
        uint64_t local_c8;
        uint64_t local_b8;
        uint64_t local_a8;
        uint64_t local_98;
        StringView local_88;

        if (in_AL != '\0') {
            local_108 = in_XMM0_Qa;
            local_f8 = in_XMM1_Qa;
            local_e8 = in_XMM2_Qa;
            local_d8 = in_XMM3_Qa;
            local_c8 = in_XMM4_Qa;
            local_b8 = in_XMM5_Qa;
            local_a8 = in_XMM6_Qa;
            local_98 = in_XMM7_Qa;
        }
        uint8_t* this_00 = &field_48;
        uint64_t local_120 = in_RCX;
        uint64_t local_118 = in_R8;
        uint64_t local_110 = in_R9;
        long local_70 = this_00->GetAuthWrapper();
        long lVar3 = this_00->capacity();
        auto pLVar4 = this_00->push_back();
        *pLVar4 = lineType;
        uint8_t* local_48 = local_138;
        uint8_t* local_50 = &uStack0000000000000008;
        uint64_t local_58 = 206158430232;
        ((pLVar4 + 2))->sprintf_va_list(str, &local_58);
        bool cVar2 = (&field_184)->operator_cast_to_bool();
        if (cVar2) {
            cVar2 = ((ClientCompositeZone*)field_184.operator->())->IsValid();
            if (cVar2) {
                local_88.StringView<eastl::fixed_string<char, 512>>(*((pLVar4 + 2)));
                RecordMessageHistory(&local_88);
            }
        }
        uint64_t local_68 = field_360.begin();
        uint64_t local_60 = field_360.end();
        cVar2 = local_68 != local_60;
        long lVar1 = local_70;
        if (cVar2) {
            do {
                puVar5 = (uint64_t*)*local_68;
                (**(void (**)(...))(*(long*)*puVar5 + 16))((long*)*puVar5, pLVar4, lVar1 == lVar3);
                ++local_68;
                cVar2 = local_68 != local_60;
            } while (cVar2);
        }
    }

    // 0x100c7b300
    void Console::ExecuteCommand(StringView stringView1, bool arg2, StringView stringView2, int arg4, bool arg5) {
        bool bVar3;
        char* pcVar4;
        unsigned long uVar5;
        variant<int, unsigned int, bool, float, eastl::string, VarAny>* pvVar6;
        StringView* pSVar7;
        unsigned long* puVar8;
        long lVar9;
        long lVar10;
        variant<int, unsigned int, bool, float, eastl::string, VarAny>* this_00;
        unsigned long uVar11;
        uint64_t uVar12;
        uint64_t uVar13;
        uint64_t in_register_00000011;
        CommandData* this_01;
        StringView local_270;
        StringView local_260;
        StringView local_250;
        StringView local_240;
        StringView local_230;
        StringView local_220;
        StringView local_208;
        float local_1e4;
        ReturnValue local_1c8;

        uint32_t local_1e0 = (uint32_t)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2);
        bool cVar2 = stringView1->empty();
        if (cVar2)
            goto LAB_100c7b83d;
        if (arg5) {
            local_1c8 = stringView1->to_owned_string<eastl::string>();
            eastl::ring_buffer<eastl::string, eastl::vector<eastl::string>>::push_back(*m_commandHistory);
        }
        StringView local_1d8;
        StringView local_1f8;
        fixed_vector<StringView, 4ul> local_a0;
        StringView local_280(*stringView1);
        cVar2 = GetCommandAndArguments(&local_280, local_1d8, local_a0);
        if (!cVar2) {
            AddMessage(5, "There was an error executing the command");
        } else {
            cVar2 = local_1d8.empty();
            if (!cVar2) {
                pcVar4 = &local_1d8[0];
                if (*pcVar4 == '$') {
                    uVar5 = ShuffledPacketFactory::p2_alt2();
                    if (1 < uVar5) {
                        cVar2 = local_a0.empty();
                        if (cVar2) {
                            local_270 = StringView(local_1d8);
                            FindStoredVariable(&local_1c8, this, &local_270);
                            cVar2 = std::optional::operator_cast_to_bool(&local_1c8);
                            if (!cVar2) {
                                uVar5 = ShuffledPacketFactory::p2_alt2();
                                uVar13 = local_1d8.end();
                                AddMessage(5, "Var %.*s does not exist", uVar5 & 4294967295, uVar13);
                            } else {
                                field_408 = local_1c8;
                                local_260 = StringView(local_1d8);
                                pvVar6 =
                                    (variant<int, unsigned int, bool, float, eastl::string, VarAny>*)field_408.value();
                                PrintStoredVariable(&local_260, *pvVar6);
                            }
                            goto LAB_100c7b831;
                        }
                        pSVar7 = &local_a0[0];
                        local_250 = StringView("=");
                        cVar2 = *pSVar7 == &local_250;
                        if (cVar2) {
                            uVar5 = local_a0.size();
                            if (1 < uVar5) {
                                local_1f8.field_0 = local_1d8.field_0;
                                local_1f8.field_8 = local_1d8.field_8;
                                puVar8 = &local_a0[1];
                                local_1d8.field_0 = *puVar8;
                                local_1d8.field_8 = &puVar8[1];
                                pSVar7 = (StringView*)local_a0.HeapBeginPtr();
                                lVar9 = local_a0.HeapBeginPtr();
                                local_a0.erase(pSVar7, (lVar9 + 32));
                                goto LAB_100c7b570;
                            }
                        }
                        uVar5 = ShuffledPacketFactory::p2_alt2();
                        uVar13 = local_1d8.end();
                        uVar11 = ShuffledPacketFactory::p2_alt2();
                        uVar12 = local_1d8.end();
                        AddMessage(5, "Invalid var operation - supported usage is \'%.*s\' or \'%.*s = <lt>command<gt>",
                                   uVar5 & 4294967295, uVar13, uVar11 & 4294967295, uVar12);
                        goto LAB_100c7b831;
                    }
                }
            }
        LAB_100c7b570:
            field_568 = field_568 + 1;
            cVar2 = local_1d8.empty();
            if (!cVar2) {
                pcVar4 = (char*)local_1d8.end();
                uVar5 = ShuffledPacketFactory::p2_alt2();
                local_1c8 = eastl::string(pcVar4, uVar5);
                lVar9 = eastl::vector_map<eastl::string, CommandData>::find(field_8);
                lVar10 = field_8.end();
                if (lVar9 != lVar10) {
                    this_01 = (CommandData*)(lVar9 + 32);
                    cVar2 = this_01->operator_cast_to_bool();
                    if (!cVar2) {
                        LogAssert(
                            "found->second.m_handler",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.cpp",
                            237, nullptr);
                    }
                    local_1c8 = eastl::fixed_string<char, 8>();
                    cVar2 = this_01->HasFlag(2);
                    if (cVar2) {
                        local_1c8.sprintf("%d", (unsigned long)(unsigned int)arg4);
                        local_208.StringView<eastl::fixed_string<char, 40>>(local_1c8);
                        local_a0.push_back(local_208);
                    }
                    std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>::operator()(
                        (function<void(eastl::fixed_vector<StringView, 4ul> const&)>*)this_01, &local_a0);
                    if (field_572 == '\0') {
                        cVar2 = this_01->HasFlag(1);
                        if (!cVar2)
                            goto LAB_100c7b6f3;
                    }
                    cVar2 = (&field_240)->operator_cast_to_bool();
                    if (cVar2) {
                        local_240 = StringView(*stringView1);
                        std::function<void(StringView, bool, bool)>::operator()(
                            (function<void(StringView, bool, bool)>*)&field_240, &local_240, false, false);
                    }
                LAB_100c7b6f3:
                }
                cVar2 = local_1f8.empty();
                if (!cVar2) {
                    local_230.StringView<6ul>("$last");
                    cVar2 = local_1d8 != &local_230;
                    if (cVar2) {
                        lVar9 = local_1d8.find('.');
                        if (lVar9 == -1) {
                            bVar3 = FromString<StringView, int>(&local_1d8, (int*)&local_208, 10);
                            if (!bVar3)
                                goto LAB_100c7ba01;
                            local_1c8.variant<int&, 0, 0, 0, int, 0ul, 0>(local_208);
                            field_408 = local_1c8;
                        } else {
                        LAB_100c7ba01:
                            bVar3 = FromString<StringView, float>(&local_1d8, &local_1e4, 10);
                            if (!bVar3) {
                                uVar5 = ShuffledPacketFactory::p2_alt2();
                                uVar13 = local_1d8.end();
                                AddMessage(5, "could not parse \'%.*s\' as an int/float", uVar5 & 4294967295, uVar13);
                                goto LAB_100c7b6ff;
                            }
                            local_1c8.variant<float&, 0, 0, 0, float, 3ul, 0>(local_1e4);
                            field_408 = local_1c8;
                        }
                    }
                } else {
                    cVar2 = (&field_240)->operator_cast_to_bool();
                    if (!cVar2) {
                        local_1c8 = eastl::fixed_string<char, 256>("Unknown developer command: ");
                        uVar5 = ShuffledPacketFactory::p2_alt2();
                        pSVar7 = stringView2;
                        uVar13 = local_1d8.end();
                        local_1c8.append_sprintf("%.*s", uVar5 & 4294967295, uVar13);
                        cVar2 = pSVar7->empty();
                        if ((!cVar2) && ((unsigned int)arg4 != 4294967295)) {
                            uVar13 = pSVar7->end();
                            uVar12 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                            AddMessage(5, "%.*s(%d): %s", uVar13, (unsigned long)(unsigned int)arg4, uVar12);
                        } else {
                            uVar13 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                            AddMessage(5, "%s", uVar13);
                        }
                    }
                    local_220 = StringView(*stringView1);
                    std::function<void(StringView, bool, bool)>::operator()(
                        (function<void(StringView, bool, bool)>*)&field_240, &local_220, local_1e0._0_1_, false);
                }
            LAB_100c7b6ff:
                cVar2 = local_1f8.empty();
                if (!cVar2) {
                    cVar2 = (&field_408)->operator_cast_to_bool();
                    if (!cVar2) {
                        local_1c8 = local_1f8.to_owned_string<eastl::string>();
                        eastl::vector_map<eastl::string, std::variant<int, unsigned int, bool, float, eastl::string,
                                                                      VarAny>>::erase(field_528);
                    } else {
                        pvVar6 = (variant<int, unsigned int, bool, float, eastl::string, VarAny>*)field_408.value();
                        local_1c8 = local_1f8.to_owned_string<eastl::string>();
                        this_00 = &field_528[local_1c8];
                        *this_00 = *pvVar6;
                    }
                }
            }
            if (field_568 < 1) {
                LogAssert("m_executingCommandCount > 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.cpp",
                          315, nullptr);
            }
            field_568 = field_568 - 1;
            field_572 = 0;
            ResetCommandHistoryCursor();
        }
    LAB_100c7b831:
    LAB_100c7b83d:
    }

    // 0x100c7bbc0
    auto Console::FindStoredVariable(StringView stringView) const {
        auto local_40 = stringView->to_owned_string<eastl::string>();
        long lVar1 =
            eastl::vector_map<eastl::string, std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::find(
                field_528);
        long lVar2 = field_528.end();
        if (lVar1 == lVar2) {
            auto result;
        } else {
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::optional<
                std::variant<int, unsigned int, bool, float, eastl::string, VarAny> const&, 0>(
                &result, (variant<int, unsigned int, bool, float, eastl::string, VarAny>*)(lVar1 + 32));
        }
        return result;
    }

    // 0x100c7bc60
    void Console::ReportStoredVariables() {
        StringView local_38;

        AddMessage(2, "Stored variables:");
        auto str = field_528.HeapBeginPtr();
        auto pbVar1 = field_528.end();
        if (str != pbVar1) {
            do {
                local_38.StringView<eastl::fixed_string<char, 40>>(*str);
                PrintStoredVariable(&local_38, *((str + 32)));
                str = str + 144;
            } while (str != pbVar1);
        }
    }

    // 0x100c7bcf0
    void Console::PrintStoredVariable(StringView stringView,
                                      const std::variant<int, unsigned int, bool, float, eastl::string, VarAny>& arg2) {
        unsigned int uVar1;
        unsigned long uVar3;
        uint64_t uVar4;
        float* pfVar5;
        long lVar6;
        char* pcVar7;
        char* pcVar8;
        uint8_t local_40[16];

        auto puVar2 = std::get_if<int, int, unsigned int, bool, float, eastl::string, VarAny>(arg2);
        if (puVar2 == nullptr) {
            puVar2 =
                (unsigned int*)std::get_if<unsigned int, int, unsigned int, bool, float, eastl::string, VarAny>(arg2);
            if (puVar2 == nullptr) {
                pfVar5 = (float*)std::get_if<float, int, unsigned int, bool, float, eastl::string, VarAny>(arg2);
                if (pfVar5 != nullptr) {
                    uVar3 = ShuffledPacketFactory::p2_alt2();
                    uVar4 = stringView->end();
                    AddMessage(2, "Var %.*s is %f", (double)*pfVar5, uVar3 & 4294967295, uVar4);
                    return;
                }
                pcVar7 = (char*)std::get_if<bool, int, unsigned int, bool, float, eastl::string, VarAny>(arg2);
                if (pcVar7 == nullptr) {
                    lVar6 = std::get_if<eastl::string, int, unsigned int, bool, float, eastl::string, VarAny>(arg2);
                    if (lVar6 == 0) {
                        lVar6 = std::get_if<VarAny, int, unsigned int, bool, float, eastl::string, VarAny>(arg2);
                        if (lVar6 == 0) {
                            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "console/Console.cpp",
                                            809, nullptr);
                        }
                        local_40->GetTypeName();
                        uVar3 = ShuffledPacketFactory::p2_alt2();
                        uVar4 = stringView->end();
                        pcVar8 = (char*)ShuffledPacketFactory::p2_alt2();
                        local_40->end();
                        pcVar7 = "Var %.*s is a non-printable type (%.*s)";
                        uVar3 = uVar3 & 4294967295;
                    } else {
                        uVar3 = ShuffledPacketFactory::p2_alt2();
                        uVar4 = stringView->end();
                        pcVar8 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        pcVar7 = "Var %.*s is %s";
                        uVar3 = uVar3 & 4294967295;
                    }
                } else {
                    uVar3 = ShuffledPacketFactory::p2_alt2();
                    uVar4 = stringView->end();
                    pcVar8 = "true";
                    if (*pcVar7 == '\0') {
                        pcVar8 = "false";
                    }
                    pcVar7 = "Var %.*s is %s";
                    uVar3 = uVar3 & 4294967295;
                }
                AddMessage(2, pcVar7, uVar3, uVar4, pcVar8);
                return;
            }
            uVar3 = ShuffledPacketFactory::p2_alt2();
            uVar4 = stringView->end();
            uVar1 = *puVar2;
            pcVar7 = "Var %.*s is %u";
        } else {
            uVar3 = ShuffledPacketFactory::p2_alt2();
            uVar4 = stringView->end();
            uVar1 = *puVar2;
            pcVar7 = "Var %.*s is %d";
        }
        AddMessage(2, pcVar7, uVar3 & 4294967295, uVar4, (unsigned long)uVar1);
    }

    // 0x100c7c030
    void Console::RecordMessageHistory(StringView stringView) {
        auto pFVar1 = field_184.operator->();
        auto str = stringView->end();
        unsigned int arg2 = ShuffledPacketFactory::p2_alt2();
        pFVar1->write(str, arg2, nullptr);
        pFVar1 = (File*)field_184.operator->();
        pFVar1->write("\n", nullptr);
    }

    // 0x100c7c0a0
    void Console::QueueCommand(const char* str1, const char* str2, int arg3, bool arg4) {
        auto this_00 = field_288.push_back();
        eastl::string::assign(this_00, str1);
        this_00->trim();
        eastl::string::assign(this_00 + 32, str2);
        *(int*)(this_00 + 64) = arg3;
        this_00[68] = (eastl::string)arg4;
    }

    // 0x100c7c150
    uint64_t Console::GetCommandAndArguments(StringView stringView1, StringView& stringView2,
                                             eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        Particle* pPVar1;
        Console* this_00;
        StringView local_60;
        uint8_t local_50[16];

        StringView local_40 = stringView1->trim();
        *stringView1 = local_40;
        local_60.StringView<3ul>(" \t");
        unsigned long uVar2 = stringView1->find_first_of(&local_60);
        if (uVar2 == 18446744073709551615) {
            uVar2 = stringView1->HeapBeginPtr();
            if (127 < uVar2) {
                return 0;
            }
            pPVar1 = stringView1->field_8;
            stringView2.field_0 = stringView1->field_0;
            stringView2.field_8 = pPVar1;
        } else {
            if (127 < uVar2) {
                return 0;
            }
            local_40 = ((unsigned long)stringView1)->substr(0);
            stringView2 = local_40;
            local_40.substr((unsigned long)stringView1);
            *stringView1 = local_40;
            this_00 = (Console*)local_50;
            new (local_50) StringView(*stringView1);
            SplitArguments(this_00, stringViews, (StringView*)local_50);
        }
        return 1;
    }

    // 0x100c7c650
    SearchResult Console::SearchCommands(StringView stringView, int arg2) {
        int iVar2;
        int iVar3;
        uint32_t uVar4;
        char* pcVar5;
        unsigned long uVar6;
        StringView* pSVar7;
        long lVar8;
        unsigned long* puVar9;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar10;
        unsigned long uVar11;
        StringView local_170;
        StringView local_160;
        StringView local_150;
        unsigned long local_130;
        ReturnValue local_128;
        char* local_108[4];
        StringView local_e8;
        ReturnValue* local_a8;

        SearchResult result;
        bool cVar1 = stringView->empty();
        if (cVar1)
            goto LAB_100c7cb1e;
        StringView local_c8;
        fixed_vector<StringView, 4ul> local_a0;
        StringView local_180(*stringView);
        GetCommandAndArguments(&local_180, local_c8, local_a0);
        eastl::string* local_b0 = (eastl::string*)&field_192;
        local_b0->clear();
        cVar1 = local_c8.empty();
        if (!cVar1) {
            pcVar5 = &local_c8[0];
            if (*pcVar5 == '$') {
                uVar6 = ShuffledPacketFactory::p2_alt2();
                if (1 < uVar6) {
                    cVar1 = local_a0.empty();
                    if (!cVar1) {
                        pSVar7 = &local_a0[0];
                        local_170 = StringView("=");
                        cVar1 = *pSVar7 == &local_170;
                        if (cVar1) {
                            uVar6 = local_a0.size();
                            if (1 < uVar6) {
                                pcVar5 = (char*)stringView->end();
                                lVar8 = ShuffledPacketFactory::p2_alt2();
                                new (local_108) eastl::allocator("EASTL basic_string");
                                local_e8 = eastl::string(pcVar5, lVar8 + 3, local_108);
                                *local_b0 = &local_e8;
                                ShuffledPacketFactory::p2_alt2();
                                pSVar7 = stringView;
                                local_e8.substr((unsigned long)stringView);
                                *pSVar7 = local_e8;
                                puVar9 = &local_a0[1];
                                local_c8.field_0 = *puVar9;
                                local_c8.field_8 = &puVar9[1];
                                pSVar7 = (StringView*)local_a0.HeapBeginPtr();
                                lVar8 = local_a0.HeapBeginPtr();
                                local_a0.erase(pSVar7, (lVar8 + 32));
                            }
                        }
                    }
                }
            }
        }
        cVar1 = (&field_240)->operator_cast_to_bool();
        if (!cVar1) {
            local_e8 = eastl::vector<StringView>();
            iVar2 = local_c8.HeapBeginPtr();
            iVar3 = local_b0->size();
            if (arg2 <= iVar3 + iVar2) {
                local_150 = StringView(local_c8);
                GetAlphabeticListOfMatchingCommands(local_e8, &local_150);
            }
            lVar8 = local_e8.size();
            if (lVar8 == 1) {
                pSVar7 = &local_e8[0];
                local_128 = pSVar7->to_owned_string<eastl::string>();
                *local_108 + *local_b0;
                result = local_108;
                uVar4 = result.size();
            LAB_100c7c997:
                *(uint32_t*)(&result + 8) = uVar4;
            } else {
                uVar6 = local_e8.size();
                if (1 < uVar6) {
                    uVar6 = local_e8.size();
                    ((&result + 4))->reserve(uVar6);
                    local_130 = (unsigned long)(unsigned int)arg2;
                    local_a8 = &result;
                    this_00 =
                        (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)local_e8.HeapBeginPtr();
                    pvVar10 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)local_e8.end();
                    if (this_00 != pvVar10) {
                        do {
                            local_108[0] = (char*)this_00->end();
                            local_128[0] = (ReturnValue)ShuffledPacketFactory::p2_alt2();
                            ((&result + 4))->emplace_back<char const*, unsigned long>(*local_108, local_128);
                            this_00 = this_00 + 16;
                        } while (this_00 != pvVar10);
                    }
                    uVar6 = GetStringsMinimumCommonLength<eastl::vector<StringView>>(&local_e8, 50);
                    pSVar7 = stringView;
                    uVar11 = ShuffledPacketFactory::p2_alt2();
                    &result = local_a8;
                    if (uVar11 < uVar6) {
                        uVar11 = local_e8[0];
                        local_128 = (uVar11->substr(0)).to_owned_string<eastl::string>();
                        *local_108 + *local_b0;
                        result = local_108;
                        uVar4 = (uint32_t)uVar6;
                    } else {
                        local_128 = pSVar7->to_owned_string<eastl::string>();
                        *local_108 + *local_b0;
                        uVar4 = (uint32_t)local_130;
                        result = local_108;
                    }
                    goto LAB_100c7c997;
                }
            }
        } else {
            local_160 = StringView(*stringView);
            std::function<void(StringView, bool, bool)>::operator()((function<void(StringView, bool, bool)>*)&field_240,
                                                                    &local_160, false, true);
        }
    LAB_100c7cb1e:
        return result;
    }

    // 0x100c7cc90
    void Console::GetAlphabeticListOfMatchingCommands(eastl::vector<StringView>& stringViews,
                                                      StringView stringView) const {
        unsigned long uVar1;
        long lVar3;
        long lVar4;
        char* str3;
        char* str4;
        StringView* stringView1;
        StringView* stringView2;
        StringView local_50;
        char* local_40;

        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* local_38 =
            (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)stringViews;
        auto this_01 = field_8.HeapBeginPtr();
        auto pbVar7 = field_8.end();
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* this_00 = local_38;
        for (; local_38 = this_00, this_01 != pbVar7; this_01 = this_01 + 288) {
            uVar1 = this_01->size();
            if (stringView->HeapBeginPtr() <= uVar1) {
                local_40 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                lVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                lVar4 = stringView->HeapBeginPtr();
                str3 = (char*)stringView->end();
                str4 = (char*)stringView->end();
                if (eastl::string::compare(local_40, (char*)(lVar3 + lVar4), str3, str4) == 0) {
                    local_50.StringView<eastl::fixed_string<char, 40>>(*this_01);
                    local_38->push_back(local_50);
                }
            }
            this_00 = local_38;
        }
        if (this_00->empty() == '\0') {
            stringView1 = (StringView*)this_00->HeapBeginPtr();
            stringView2 = (StringView*)this_00->end();
            eastl::sort<StringView*>(stringView1, stringView2);
        }
    }

    // 0x100c7d010
    Console* Console::SanitizeCommand(StringView stringView) const {
        eastl::string* str;
        basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>* this_00;
        unsigned long arg2;
        long lVar5;
        long lVar6;
        long lVar7;
        long lVar8;
        StringView* in_RDX;
        bool bVar9;
        eastl::string local_98;
        vector<eastl::fixed_string<char, 256>> local_78;
        basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>* local_58;
        char* local_50;
        eastl::string* local_48;
        long local_40;

        new (this) eastl::fixed_string<char, 256>();
        auto pcVar3 = in_RDX->end();
        unsigned long uVar4 = in_RDX->HeapBeginPtr();
        assign(pcVar3, uVar4);
        int iVar1 = stringView->GetMinGridZ();
        if (iVar1 != 0) {
            iVar1 = in_RDX->HeapBeginPtr();
            if (stringView->GetMinGridZ() <= iVar1) {
                local_78 = eastl::vector<eastl::fixed_string<char, 256>>();
                tokenize<eastl::vector<eastl::fixed_string<char, 256>>, StringView>(&local_78, in_RDX, ";", -1);
                str = (eastl::string*)stringView->second();
                this_00 = (basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>*)
                              local_78.HeapBeginPtr();
                local_58 =
                    (basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>*)local_78.end();
                if (this_00 != local_58) {
                    local_40 = 0;
                    local_48 = str;
                    do {
                        local_98 = eastl::string();
                        uVar4 = this_00->find_first_of(" \t", 0);
                        pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        if (uVar4 == 18446744073709551615) {
                            arg2 = this_00->size();
                            eastl::string::assign(&local_98, pcVar3, arg2);
                        } else {
                            eastl::string::assign(&local_98, pcVar3, uVar4);
                        }
                        lVar5 = eastl::vector_map<eastl::string, CommandData>::find(*str);
                        lVar6 = str->end();
                        if ((lVar5 != lVar6) && (-1 < *(int*)(lVar5 + 80))) {
                            bVar9 = uVar4 != 18446744073709551615;
                            if ((*(int*)(lVar5 + 80) != 0) && (uVar4 != 18446744073709551615)) {
                                iVar1 = 1;
                                do {
                                    uVar4 = this_00->find_first_of(" \t", uVar4 + 1);
                                    bVar9 = uVar4 != 18446744073709551615;
                                    if (*(int*)(lVar5 + 80) <= iVar1)
                                        break;
                                    iVar1 = iVar1 + 1;
                                } while (uVar4 != 18446744073709551615);
                            }
                            str = local_48;
                            if (bVar9) {
                                lVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                lVar5 = local_40;
                                local_50 = (char*)(lVar6 + local_40 + uVar4);
                                lVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                lVar7 = this_00->size();
                                lVar8 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                str = local_48;
                                eastl::transform<char*, char*, char (*)(char)>(
                                    local_50, (lVar6 + lVar5 + lVar7), (lVar8 + lVar5 + uVar4), HideCommandParamChar);
                            }
                        }
                        lVar5 = this_00->size();
                        local_40 = local_40 + lVar5 + 1;
                        this_00 = this_00 + 296;
                    } while (this_00 != local_58);
                }
            }
        }
        return this;
    }

    // 0x100c7d410
    void HideCommandParamChar(char arg1) {
        uint32_t in_register_00000039;

        uint32_t uVar1 = 42;
        if (arg1 == '\t') {
            uVar1 = (((uint32_t)in_register_00000039 << 8) | (uint8_t)arg1);
        }
        if (arg1 == ' ') {
            uVar1 = (((uint32_t)in_register_00000039 << 8) | (uint8_t)arg1);
        }
        return uVar1;
    }

    // 0x100c7d440
    void Console::ColouriseCommandAndHelp(eastl::string& str1, eastl::string& str2) {
        unsigned long uVar1;
        long lVar2;
        long lVar3;
        long lVar4;
        uint64_t uVar5;
        char* pcVar7;
        fixed_string<char, 256> local_3b0;
        fixed_string<char, 256> local_288;

        fixed_string<char, 256> local_160;
        unsigned long uVar6 = 0;
        do {
            uVar1 = str1.find("<lt>", uVar6);
            if (uVar1 != 18446744073709551615) {
                lVar2 = str1.find("<gt>", uVar1);
                if (lVar2 != -1) {
                    lVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    lVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    local_288 = eastl::fixed_string<char, 256>((lVar3 + uVar1), (lVar4 + lVar2 + 4));
                    local_3b0 = eastl::fixed_string<char, 256>();
                    uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    local_3b0.sprintf("<col=%06x>%s%s", 16777120, uVar5, "</col>");
                    local_3b0.size();
                    local_288.size();
                    uVar6 = local_288.size();
                    pcVar7 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    str1.replace(uVar1, uVar6, pcVar7);
                    pcVar7 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    uVar6 = str2.find(pcVar7, 0);
                    if (uVar6 != 18446744073709551615) {
                        uVar1 = local_288.size();
                        pcVar7 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        str2.replace(uVar6, uVar1, pcVar7);
                    }
                }
                uVar6 = uVar1 + 4;
            }
        } while (uVar1 != 18446744073709551615);
    }

    // 0x100c7d6b0
    unsigned long Console::IsProtectedCommand(StringView stringView) const {
        long lVar1;
        long lVar2;
        uint8_t* str_00;
        StringView local_a8;
        StringView local_98;
        StringView local_88;
        uint8_t* local_40;

        vector<eastl::string> local_68;
        tokenize<eastl::vector<eastl::string>, StringView>(&local_68, stringView, ";", -1);
        auto str = local_68.HeapBeginPtr();
        auto local_48 = local_68.end();
        bool local_31 = str == local_48;
        if (!local_31) {
            str_00 = &field_8;
            stringView = &local_88;
            local_40 = str_00;
            do {
                local_a8.StringView<eastl::fixed_string<char, 40>>(*str);
                local_98.StringView<3ul>(" \t");
                lVar1 = local_a8.find_first_of(&local_98);
                if (lVar1 != -1) {
                    *stringView = ((unsigned long)&local_a8)->substr(0);
                    local_a8 = *stringView;
                }
                *stringView = local_a8.to_owned_string<eastl::string>();
                lVar1 = eastl::vector_map<eastl::string, CommandData>::find(*str_00);
                lVar2 = str_00->end();
                if ((lVar1 != lVar2) && (-1 < *(int*)(lVar1 + 80))) {
                    break;
                }
                stringView->~basic_string();
                str = str + 32;
                local_31 = str == local_48;
            } while (!local_31);
        }
        uint8_t bVar3 = ~local_31;
        return bVar3 & 4294967041;
    }

    // 0x100c7da10
    StringView Console::GetPreviousCommandFromHistory(StringView stringView) {
        __optional_storage_base<int, false>* this_01;
        int iVar2;
        int iVar3;
        int* piVar4;
        basic_string<char, BucketAllocatorEASTL>* pbVar5;
        StringView* in_RDX;
        Particle* extraout_RDX;
        Particle* extraout_RDX_00;
        Particle* extraout_RDX_01;
        Particle* extraout_RDX_02;
        Particle* pPVar6;
        int iVar7;
        StringView SVar8;
        StringView local_60;
        StringView* local_50;
        StringView* local_48;
        int local_40;
        uint8_t local_3c;
        int local_34;

        Particle** this_00 = &stringView[6].field_8;
        if (!(this_00->empty())) {
            if (in_RDX->empty()) {
                this_01 = (__optional_storage_base<int, false>*)((long)&stringView[10].field_8 + 4);
                if (!(this_01->has_value())) {
                    local_34 = this_00->GetAuthWrapper();
                    local_34 = local_34 - 1;
                    local_40.optional<int, 0>(local_34);
                    *(uint8_t*)&stringView[11].field_0 = local_3c;
                    *(int*)this_01 = local_40;
                } else {
                    piVar4 = (int*)this_01->value();
                    local_34 = *piVar4 - 1;
                    if (*piVar4 == 0) {
                        ResetCommandHistoryCursor((Console*)stringView);
                        StringView<1ul>("");
                        pPVar6 = extraout_RDX;
                        goto LAB_100c7dbe0;
                    }
                    local_40.optional<int&, 0>(local_34);
                    *(uint8_t*)&stringView[11].field_0 = local_3c;
                    *(int*)this_01 = local_40;
                }
                piVar4 = (int*)this_01->value();
                pbVar5 = (basic_string<char, BucketAllocatorEASTL>*)(*this_00)[(long)*piVar4];
                StringView<eastl::fixed_string<char, 40>>(*pbVar5);
                pPVar6 = extraout_RDX_01;
                goto LAB_100c7dbe0;
            }
            local_50 = in_RDX;
            local_48 = stringView;
            iVar2 = this_00->GetAuthWrapper();
            if (1 < iVar2) {
                local_48 = (StringView*)((long)&local_48[10].field_8 + 4);
                iVar2 = 1;
                iVar7 = -1;
                do {
                    local_40 = 0;
                    local_34 = local_48->value_or<int>(local_40);
                    local_34 = local_34 + iVar7;
                    if (local_34 < 0) {
                        iVar3 = this_00->GetAuthWrapper();
                        local_34 = local_34 + iVar3;
                    }
                    pbVar5 = (basic_string<char, BucketAllocatorEASTL>*)(*this_00)[(long)local_34];
                    StringView<eastl::fixed_string<char, 40>>(*pbVar5);
                    local_60 = StringView(*local_50);
                    if (starts_with(&local_60)) {
                        local_40.optional<int&, 0>(local_34);
                        *(uint8_t*)((long)&local_48->field_0 + 4) = local_3c;
                        *(int*)&local_48->field_0 = local_40;
                        pPVar6 = extraout_RDX_02;
                        goto LAB_100c7dbe0;
                    }
                    iVar2 = iVar2 + 1;
                    iVar3 = this_00->GetAuthWrapper();
                    iVar7 = iVar7 - 1;
                } while (iVar2 < iVar3);
            }
            in_RDX = local_50;
        }
        new (this) StringView(*in_RDX);
        pPVar6 = extraout_RDX_00;
    LAB_100c7dbe0:
        SVar8.field_8 = pPVar6;
        SVar8.field_0 = (unsigned long)this;
        return SVar8;
    }

    // 0x100c7dca0
    StringView Console::GetNextCommandFromHistory(StringView stringView) {
        __optional_storage_base<int, false>* this_01;
        optional<int>* this_02;
        int iVar2;
        int iVar3;
        int* piVar5;
        basic_string<char, BucketAllocatorEASTL>* pbVar6;
        Console* in_RDX;
        Particle* extraout_RDX;
        Particle* extraout_RDX_00;
        Particle* extraout_RDX_01;
        Particle* extraout_RDX_02;
        Particle* pPVar7;
        StringView SVar8;
        StringView local_60;
        optional<int>* local_50;
        Console* local_48;
        int local_40;
        optional<int> local_3c;
        int local_34;

        Particle** this_00 = &stringView[6].field_8;
        if (!(this_00->empty())) {
            if (in_RDX->empty()) {
                this_01 = (__optional_storage_base<int, false>*)((long)&stringView[10].field_8 + 4);
                if (!(this_01->has_value())) {
                    local_34 = 0;
                    local_40.optional<int, 0>(local_34);
                    *(optional<int>*)&stringView[11].field_0 = local_3c;
                    *(int*)this_01 = local_40;
                } else {
                    local_48 = this;
                    piVar5 = (int*)this_01->value();
                    iVar3 = *piVar5;
                    local_34 = iVar3 + 1;
                    iVar2 = this_00->GetAuthWrapper();
                    if (iVar3 + 1 == iVar2) {
                        ResetCommandHistoryCursor((Console*)stringView);
                        local_48->StringView<1ul>("");
                        pPVar7 = extraout_RDX_00;
                        this = local_48;
                        goto LAB_100c7de97;
                    }
                    local_40.optional<int&, 0>(local_34);
                    *(optional<int>*)&stringView[11].field_0 = local_3c;
                    *(int*)this_01 = local_40;
                    this = local_48;
                }
                piVar5 = (int*)this_01->value();
                pbVar6 = (basic_string<char, BucketAllocatorEASTL>*)(*this_00)[(long)*piVar5];
                StringView<eastl::fixed_string<char, 40>>(*pbVar6);
                pPVar7 = extraout_RDX_01;
                goto LAB_100c7de97;
            }
            iVar3 = this_00->GetAuthWrapper();
            if (1 < iVar3) {
                local_50 = (optional<int>*)((long)&stringView[10].field_8 + 4);
                iVar3 = 1;
                local_48 = in_RDX;
                do {
                    this_02 = local_50;
                    local_40 = this_00->GetAuthWrapper();
                    local_40 = local_40 - 1;
                    iVar2 = this_02->value_or<int>(local_40);
                    local_34 = iVar2 + iVar3;
                    if (this_00->GetAuthWrapper() <= iVar2 + iVar3) {
                        iVar2 = this_00->GetAuthWrapper();
                        local_34 = local_34 - iVar2;
                    }
                    pbVar6 = (basic_string<char, BucketAllocatorEASTL>*)(*this_00)[(long)local_34];
                    StringView<eastl::fixed_string<char, 40>>(*pbVar6);
                    in_RDX = local_48;
                    local_60 = StringView(*local_48);
                    if (starts_with(&local_60)) {
                        local_40.optional<int&, 0>(local_34);
                        local_50[4] = local_3c;
                        *(int*)local_50 = local_40;
                        pPVar7 = extraout_RDX_02;
                        goto LAB_100c7de97;
                    }
                    iVar3 = iVar3 + 1;
                    iVar2 = this_00->GetAuthWrapper();
                } while (iVar3 < iVar2);
            }
        }
        new (this) StringView(*in_RDX);
        pPVar7 = extraout_RDX;
    LAB_100c7de97:
        SVar8.field_8 = pPVar7;
        SVar8.field_0 = (unsigned long)this;
        return SVar8;
    }

    // 0x100c7deb0
    void Console::StripVariablePromptParts(eastl::string& str) {
        ReturnValue local_38;

        unsigned long arg2 = str.find('<', 0);
        if (arg2 != 18446744073709551615) {
            local_38 = str.substr(0, arg2);
            str = &local_38;
            str.trim();
        }
    }

    // 0x100c7df20
    void Console::SplitArguments(eastl::fixed_vector<StringView, 4ul>& stringViews, StringView stringView) const {
        int iVar2;
        uint8_t* pbVar3;
        char* pcVar4;
        unsigned long uVar5;
        StringView local_70;
        StringView local_60;
        StringView local_50;
        unsigned long local_40;
        char local_31;

        bool cVar1 = stringView->empty();
        if (!cVar1) {
            do {
                pbVar3 = (uint8_t*)(*stringView)[0];
                iVar2 = isspace((unsigned int)*pbVar3);
                if (iVar2 == 0) {
                    pcVar4 = (char*)(*stringView)[0];
                    local_31 = *pcVar4;
                    if ((local_31 == '\'') || (local_31 == '\"')) {
                        local_70 = StringView(local_31);
                        uVar5 = stringView->find_first_of(&local_70, 1);
                        if (uVar5 == 18446744073709551615)
                            goto LAB_100c7e088;
                        local_50.field_0 = stringView->end() + 1;
                        local_40 = uVar5 - 1;
                        stringViews.emplace_back<char const*, unsigned long&>(local_50, local_40);
                    LAB_100c7e061:
                        local_50.substr((unsigned long)stringView);
                        *stringView = local_50;
                        iVar2 = 0;
                    } else {
                        local_60.StringView<3ul>(" \t");
                        uVar5 = stringView->find_first_of(&local_60);
                        local_40 = uVar5;
                        if (uVar5 != 18446744073709551615) {
                            local_50.field_0 = stringView->end();
                            stringViews.emplace_back<char const*, unsigned long&>(local_50, local_40);
                            goto LAB_100c7e061;
                        }
                    LAB_100c7e088:
                        stringViews.push_back(*stringView);
                        iVar2 = 3;
                    }
                    if (uVar5 != 18446744073709551615) {
                        iVar2 = 0;
                    }
                    if (iVar2 != 0) {
                        return;
                    }
                } else {
                    local_50.substr((unsigned long)stringView);
                    *stringView = local_50;
                }
                cVar1 = stringView->empty();
            } while (!cVar1);
        }
    }

    // 0x100c7e260
    void Console::ReportArgDecodingErrors(const char* str, WrapArray<ArgDecodingError> wrapArray) {
        int iVar1;
        unsigned int uVar2;
        bool cVar3;
        int iVar4;
        uint32_t uVar5;
        uint64_t* puVar10;
        uint64_t uVar11;
        uint64_t uVar12;
        unsigned long uVar13;
        uint64_t uVar14;
        unsigned long uVar15;
        uint64_t in_stack_fffffffffffffd48;
        uint32_t uVar16;
        StringView local_2a0;
        SharedArray<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData>>* local_290;
        unsigned long local_288;

        WrapArray<ArgDecodingError>* local_268 = wrapArray;
        eastl::string local_260(str);
        basic_string<char, BucketAllocatorEASTL>* pbVar6 =
            (basic_string<char, BucketAllocatorEASTL>*)eastl::vector_map<eastl::string, CommandData>::find(field_8);
        auto pbVar7 = field_8.end();
        basic_string<char, BucketAllocatorEASTL>* local_270 = pbVar6;
        if (pbVar6 == pbVar7) {
            LogAssert("commandIt != m_commands.end()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.cpp", 734,
                      nullptr);
        }
        local_260 = eastl::fixed_string<char, 512>();
        WrapArray<ArgDecodingError>* this_01 = local_268;
        auto pSVar8 = local_268->end();
        auto pSVar9 = this_01->end();
        if (pSVar8 != pSVar9) {
            local_268 = (WrapArray<ArgDecodingError>*)(local_270 + 192);
            pSVar8 = pSVar8 + 16;
            local_290 = pSVar9;
            do {
                iVar1 = *(int*)(pSVar8 + 16);
                iVar4 = local_268->size();
                cVar3 = pSVar8->empty();
                uVar16 = (uint32_t)((unsigned long)in_stack_fffffffffffffd48 >> 32);
                uVar2 = *(unsigned int*)(pSVar8 + 16);
                uVar15 = (unsigned long)(int)uVar2;
                if (iVar1 < iVar4) {
                    if (!cVar3) {
                        local_288 = uVar15;
                        puVar10 = (uint64_t*)(*local_268)[uVar15];
                        uVar14 = *puVar10;
                        uVar15 = ShuffledPacketFactory::p2_alt2();
                        uVar11 = ((pSVar8 - 16))->end();
                        uVar5 = ShuffledPacketFactory::p2_alt2();
                        uVar12 = pSVar8->end();
                        in_stack_fffffffffffffd48 = (((uint64_t)uVar16 << 32) | (uint32_t)uVar5);
                        local_260.append_sprintf(
                            "<br><col=CCCCCCFF>- arg %d (%s): </col>expected \'%.*s\' but received \'%.*s\'", local_288,
                            uVar14, uVar15 & 4294967295, uVar11, in_stack_fffffffffffffd48, uVar12);
                    } else {
                        puVar10 = (uint64_t*)(*local_268)[uVar15];
                        uVar14 = *puVar10;
                        uVar15 = ShuffledPacketFactory::p2_alt2();
                        uVar11 = ((pSVar8 - 16))->end();
                        local_260.append_sprintf("<br><col=CCCCCCFF>- arg %d (%s): </col>%.*s", (unsigned long)uVar2,
                                                 uVar14, uVar15 & 4294967295, uVar11);
                    }
                } else if (!cVar3) {
                    uVar15 = ShuffledPacketFactory::p2_alt2();
                    uVar14 = ((pSVar8 - 16))->end();
                    uVar13 = ShuffledPacketFactory::p2_alt2();
                    in_stack_fffffffffffffd48 = pSVar8->end();
                    local_260.append_sprintf(
                        "<br><col=CCCCCCFF>- arg %d: </col>expected \'%.*s\' but received \'%.*s\'",
                        (unsigned long)uVar2, uVar15 & 4294967295, uVar14, uVar13 & 4294967295,
                        in_stack_fffffffffffffd48);
                } else {
                    uVar15 = ShuffledPacketFactory::p2_alt2();
                    uVar14 = ((pSVar8 - 16))->end();
                    local_260.append_sprintf("<br><col=CCCCCCFF>- arg %d: </col>%.*s", (unsigned long)uVar2,
                                             uVar15 & 4294967295, uVar14);
                }
                pSVar9 = pSVar8 + 24;
                pSVar8 = pSVar8 + 40;
            } while (pSVar9 != local_290);
        }
        pbVar6 = local_270;
        CommandData* this_00 = (CommandData*)(local_270 + 32);
        cVar3 = this_00->HasUsageInstructions();
        if (cVar3) {
            local_260.append_sprintf("<br><col=CCCCCCFF>- usage: <col=CCCCCCFF>\'<col=33CC55FF>");
            local_2a0.StringView<eastl::fixed_string<char, 40>>(*pbVar6);
            this_00->AppendUsage(local_260, &local_2a0);
            local_260.append("<col=CCCCCCFF>\' </col>");
            this_00->AppendExample(local_260);
        }
        uVar14 = local_260.begin();
        AddMessage(6, "Could not execute \'%s\':%s", str, uVar14);
    }

    // 0x100c7e730
    void Console::RunScript(StringView stringView, bool arg2) {
        uint64_t uVar5;
        uint64_t uVar6;
        unsigned char* arg1;
        eastl::string local_e60;
        File local_ac8;

        auto pcVar3 = stringView->end();
        unsigned long uVar4 = ShuffledPacketFactory::p2_alt2();
        Filename local_168(pcVar3, uVar4);
        Callstack local_e38;
        ClientCompositeZone local_2a0(local_168, &local_e38);
        if (!(local_2a0.IsValid())) {
            if (!(field_328.empty())) {
                local_ac8 = Filename(&field_328);
                local_168 = local_ac8;
                local_ac8.~pair();
                pcVar3 = (char*)stringView->end();
                uVar4 = ShuffledPacketFactory::p2_alt2();
                local_ac8 = Filename(pcVar3, uVar4);
                local_168 /= &local_ac8;
                local_ac8.~pair();
                local_ac8 = File(local_168, &local_e38);
                local_2a0 = local_ac8;
            }
        } else {
            local_ac8 = local_168.GetParentPath();
            pcVar3 = local_ac8.GetName();
            (&field_328)->assign(pcVar3);
        }
        if (local_e38.IsValid()) {
            local_ac8 = eastl::fixed_string<char, 256>();
            uVar5 = ShuffledPacketFactory::p2_alt2();
            uVar6 = stringView->end();
            pcVar3 = local_e38.GetErrorString<eastl::fixed_string<char, 256>>(local_ac8);
            AddMessage(4, "Error reading %.*s: %s", uVar5, uVar6, pcVar3);
        }
        unsigned int arg2_00 = local_2a0.length(&local_e38);
        if (arg2_00 - 1 < 1048576) {
            if (!(local_e38.IsValid())) {
                local_ac8 = eastl::fixed_string<char, 2048>();
                local_ac8.resize((unsigned long)arg2_00);
                arg1 = &local_ac8[0];
                if (local_2a0.read(arg1, arg2_00, 0, &local_e38) == arg2_00) {
                    new (&local_e38[0].field_8) eastl::fixed_vector<eastl::fixed_string<char, 64>, 8ul>();
                    tokenize<eastl::fixed_vector<eastl::fixed_string<char, 64>, 8ul>, eastl::fixed_string<char, 2048>>(
                        &local_e38[0].field_8, &local_ac8, "\r\n", -1);
                    pcVar3 = local_168.GetName();
                    local_e60 = eastl::string(pcVar3);
                    RunScriptFromSource(local_e38[0].field_8, local_e60, arg2);
                    local_e38[0].field_8.~fixed_vector();
                }
            }
        }
    }

    // 0x100c7eb50
    void Console::RunScriptFromSource(const eastl::fixed_vector<eastl::fixed_string<char, 64>, 8ul>& strs,
                                      const eastl::string& str, bool arg3) {
        bool bVar1;
        int iVar3;
        basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>* pbVar4;
        eastl::string* this_00;
        char* pcVar5;
        basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>* pbVar6;
        char* str2;
        uint64_t in_register_00000009;
        ReturnValue local_50;
        ReturnValue local_48;

        Console* local_38 = this;
        if ((int)(((uint64_t)in_register_00000009 << 8) | (uint8_t)arg3) == 0) {
            pbVar4 =
                (basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>*)strs.HeapBeginPtr();
            pbVar6 = (basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>*)strs.end();
            if (pbVar4 != pbVar6) {
                iVar3 = 0;
                do {
                    if (!(pbVar4->empty())) {
                        pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        str2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        iVar3 = iVar3 + 1;
                        QueueCommandNoHistory(local_38, pcVar5, str2, iVar3);
                    }
                    pbVar4 = pbVar4 + 104;
                } while (pbVar4 != pbVar6);
            }
        } else {
            iVar3 = strs.size();
            local_50 = strs.rbegin();
            local_48 = strs.rend();
            bVar1 = local_50 != local_48;
            if (bVar1) {
                local_38 = (Console*)&local_38->field_288;
                do {
                    pbVar4 = (basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>*)
                                 local_50.operator->();
                    if (!(pbVar4->empty())) {
                        this_00 = (eastl::string*)local_38->push_front();
                        local_50.operator->();
                        pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        eastl::string::assign(this_00, pcVar5);
                        this_00->trim();
                        (*(this_00 + 32)) = str;
                        *(int*)(this_00 + 64) = iVar3;
                        iVar3 = iVar3 - 1;
                        this_00[68] = (eastl::string)0;
                    }
                    ++local_50;
                    local_48 = strs.rend();
                    bVar1 = local_50 != local_48;
                } while (bVar1);
            }
        }
    }

    // 0x100c7ed40
    void Console::RunTestScript(const eastl::fixed_vector<eastl::fixed_string<char, 64>, 8ul>& strs,
                                const eastl::string& str) {
        field_164 = strs.size();
        *(uint8_t*)((long)&field_160 + 1) = 1;
        RunScriptFromSource(strs, str, false);
    }

    // 0x100c7ed90
    uint64_t Console::SetMessageHistoryOutputFile(const Filename& filename) {
        uint64_t uVar2;
        Filename local_28;

        uint8_t* this_02 = &field_184;
        if (this_02->operator_cast_to_bool()) {
            ((File*)(*this_02).operator->())->close(nullptr);
        }
        std::make_unique<File, Filename const&, int const&>(local_28, filename);
        *this_02 = &local_28;
        if (!(this_02->operator_cast_to_bool())) {
            uVar2 = 0;
        } else {
            uVar2 = ((ClientCompositeZone*)(*this_02).operator->())->IsValid();
        }
        return uVar2;
    }

    // 0x100c8e040
    void Console::RegisterCoreCommands()::$_1::operator()(StringView stringView) const {
        Console* this_00 = field_0;
        StringView local_28(*stringView);
        RunScript(this_00, &local_28, true);
    }

    // 0x100c8eb90
    void Console::RegisterCoreCommands()::$_3::operator()() const {
        ClearMessageHistory(field_0);
    }

    // 0x100c8f710
    void Console::RegisterCoreCommands()::$_4::operator()() const {
        ClearMessageHistory(field_0);
    }

    // 0x100c90200
    void Console::RegisterCoreCommands()::$_5::operator()() const {
        ReportStoredVariables(field_0);
    }

    // 0x100c90cf0
    void Console::RegisterCoreCommands()::$_6::operator()() const {
        ClearStoredVariables(field_0);
    }

} // namespace jag::console

namespace jag {
    // 0x100c7c480
    bool FromString<StringView, float>(const StringView& stringView, float& arg2, int arg3) {

        StringView local_30(stringView);
        return (bool)FromText(&local_30, arg2, arg3);
    }

    // 0x100c7cea0
    unsigned long GetStringsMinimumCommonLength<eastl::vector<StringView>>(const eastl::vector<StringView>& stringViews,
                                                                           unsigned long arg2) {
        int iVar2;
        Layout* layout;
        Layout* pLVar3;
        char* pcVar4;
        unsigned long arg1;
        bool bVar5;
        unsigned long local_38;

        char cVar1 = stringViews.empty();
        if ((!cVar1) && (arg2 != 0)) {
            arg1 = 0;
            do {
                layout = (Layout*)stringViews.HeapBeginPtr();
                pLVar3 = (Layout*)stringViews.end();
                if (layout != pLVar3) {
                    cVar1 = '\0';
                    bVar5 = false;
                    do {
                        if ((!cVar1) && (iVar2 = layout->HeapBeginPtr(), arg1 < (unsigned long)(long)iVar2)) {
                            pcVar4 = (char*)(*layout)[arg1];
                            cVar1 = *pcVar4;
                        } else {
                            iVar2 = layout->HeapBeginPtr();
                            if (((unsigned long)(long)iVar2 <= arg1) ||
                                (pcVar4 = (char*)(*layout)[arg1], *pcVar4 != cVar1)) {
                                iVar2 = 1;
                                local_38 = arg1;
                                goto LAB_100c7cfa5;
                            }
                        }
                        layout = layout + 16;
                        bVar5 = layout == pLVar3;
                    } while (!bVar5);
                    iVar2 = 0;
                LAB_100c7cfa5:
                    if (!bVar5)
                        goto LAB_100c7cfc1;
                }
                arg1 = arg1 + 1;
            } while (arg1 != arg2);
            iVar2 = 2;
        LAB_100c7cfc1:
            if (iVar2 != 2) {
                return local_38;
            }
        }
        return 0;
    }

    // 0x100c7d2d0
    int tokenize<eastl::vector<eastl::fixed_string<char, 256>>, StringView>(
        eastl::vector<eastl::fixed_string<char, 256>>& strs, const StringView& stringView, const char* str, int arg4) {
        bool bVar1;
        size_t sVar3;
        ReturnValue* pRVar5;
        char* str1_00;

        if (arg4 == -1) {
            sVar3 = _strlen(str);
            arg4 = (int)sVar3;
        }
        strs.clear();
        strs.reserve(4);
        auto str1 = stringView.end();
        auto pcVar4 = stringView.end();
        char* pcVar6 = str1;
        if (str1 != pcVar4) {
            str1_00 = str1;
            do {
                str1 = pcVar6;
                bVar1 = internal::find_token<char, char const*>(*str1, str, str + arg4);
                if (bVar1) {
                    if (str1_00 != str1) {
                        pRVar5 = (ReturnValue*)strs.push_back();
                        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>::assign(
                            pRVar5, str1_00, str1);
                    }
                    if (str1 == pcVar4) {
                    LAB_100c7d3c0:
                        pcVar6 = str1;
                    } else {
                        do {
                            bVar1 = internal::find_token<char, char const*>(*str1, str, str + arg4);
                            if (!bVar1)
                                goto LAB_100c7d3c0;
                            str1 = str1 + 1;
                            pcVar6 = str1;
                        } while (str1 != pcVar4);
                    }
                } else {
                    pcVar6 = str1 + 1;
                    str1 = str1_00;
                }
                str1_00 = str1;
            } while (pcVar6 != pcVar4);
        }
        if (str1 != pcVar6) {
            pRVar5 = (ReturnValue*)strs.push_back();
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>::assign(pRVar5, str1,
                                                                                                         pcVar6);
        }
        return strs.size();
    }

    // 0x100c7d830
    int tokenize<eastl::vector<eastl::string>, StringView>(eastl::vector<eastl::string>& strs,
                                                           const StringView& stringView, const char* str, int arg4) {
        bool bVar1;
        size_t sVar3;
        ReturnValue* pRVar5;
        char* str1_00;

        if (arg4 == -1) {
            sVar3 = _strlen(str);
            arg4 = (int)sVar3;
        }
        strs.clear();
        strs.reserve(4);
        auto str1 = stringView.end();
        auto pcVar4 = stringView.end();
        char* pcVar6 = str1;
        if (str1 != pcVar4) {
            str1_00 = str1;
            do {
                str1 = pcVar6;
                bVar1 = internal::find_token<char, char const*>(*str1, str, str + arg4);
                if (bVar1) {
                    if (str1_00 != str1) {
                        pRVar5 = (ReturnValue*)strs.push_back();
                        eastl::string::assign(pRVar5, str1_00, str1);
                    }
                    if (str1 == pcVar4) {
                    LAB_100c7d920:
                        pcVar6 = str1;
                    } else {
                        do {
                            bVar1 = internal::find_token<char, char const*>(*str1, str, str + arg4);
                            if (!bVar1)
                                goto LAB_100c7d920;
                            str1 = str1 + 1;
                            pcVar6 = str1;
                        } while (str1 != pcVar4);
                    }
                } else {
                    pcVar6 = str1 + 1;
                    str1 = str1_00;
                }
                str1_00 = str1;
            } while (pcVar6 != pcVar4);
        }
        if (str1 != pcVar6) {
            pRVar5 = (ReturnValue*)strs.push_back();
            eastl::string::assign(pRVar5, str1, pcVar6);
        }
        return strs.size();
    }

} // namespace jag

namespace jag::console::internal {
    // 0x100c8e110
    eastl::fixed_vector<CommandArgInfo, 4ul> BuildArgInfos<>(std::tuple<>* tuple) {
        new (tuple) eastl::fixed_vector<CommandArgInfo, 4ul>();
        return tuple;
    }

} // namespace jag::console::internal
