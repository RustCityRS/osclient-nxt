// libs/console/Console.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.console

#include "Console.h"
#include "Console.inl"

namespace jag::console {
    // 0x100d3d3b8, 516 bytes, __const
    g_lineTypeColour = {
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

    // 0x100d43424, 76 bytes, __const
    g_lineTypeColour = {
        -2139062017, -522133249, -1593859841, -1593859841, -1061142273, -10460929, -10460929,
        -1061117697, 1017370378, 0,           0,           4096,        4096,      1,
        1,           1,          0,           1,           1,
    };

    // 0x100009d50: the linker folded this into eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second(), which has identical code
    Console::GetCommands() const;

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    Console::HistoryListener::~HistoryListener();

    // 0x10002d860: the linker folded this into oldscape::option::Option<int>::IsValidValue(int const&) const, which has identical code
    Console::LoadCommandHistoryAndVars();

    // 0x10002d860: the linker folded this into oldscape::option::Option<int>::IsValidValue(int const&) const, which has identical code
    Console::SaveCommandHistoryAndVars();

    // 0x10005c9a0: the linker folded this into oldscape::ConsoleCommandHelp::~ConsoleCommandHelp(), which has identical code
    Console::PendingCommand::~PendingCommand();

    // 0x10005d8c0: the linker folded this into oldscape::OSClientConsoleUI::GetBounds() const, which has identical code
    Console::GetCommandHistory() const;

    // 0x1000753f0: the linker folded this into oldscape::ConsoleCommandHelp::~ConsoleCommandHelp(), which has identical code
    Console::PendingCommand::~PendingCommand();

    // 0x1001a3c10: the linker folded this into MainLoopFrameTimer::GetFPSCounter(), which has identical code
    Console::GetMessageHistory() const;

    // 0x1003efcf0: the linker folded this into game::ObjType::GetName() const, which has identical code
    Console::GetLastCommandExecutionResult() const;

    // 0x1003f51a0: the linker folded this into game::BASType::GetHillRotateLength() const, which has identical code
    Console::GetShortestHiddenCommandLength() const;

    // 0x100417fb0: the linker folded this into game::NPCType::GetHeadIconGraphic() const, which has identical code
    Console::GetStoredVariables() const;

    // 0x100c7a7b0, 320 bytes, placed by class name and debug map
    // MatchString(eastl::string const&, eastl::string const&)
    ulong MatchString(basic_string* param_1, basic_string* param_2) {
        bool bVar1;
        ulong uVar2;
        ulong uVar3;
        ulong uVar4;
        undefined8 uVar5;
        undefined7 extraout_var;
        regex local_98[64];
        eastl::string local_58[32];
        basic_string* local_38;

        local_38 = param_1;
        eastl::string::basic_string(local_58, param_2);
        uVar2 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        do {
            uVar3 = eastl::string::rfind(local_58, "?", 18446744073709551615);
            if (uVar3 != 18446744073709551615) {
                eastl::string::replace(local_58, uVar3, 1, "(.)");
                if (uVar3 <= uVar2) {
                    uVar2 = uVar2 + 2;
                }
            }
            uVar4 = eastl::string::rfind(local_58, "*", uVar2);
            if (uVar4 != 18446744073709551615) {
                eastl::string::replace(local_58, uVar4, 1, "(.*)");
                uVar2 = uVar4;
            }
        } while (uVar4 != 18446744073709551615 || uVar3 != 18446744073709551615);
        uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        std::regex::basic_regex(local_98, uVar5);
        uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        bVar1 = std::regex_match<char, std::regex_traits<char>>(uVar5, local_98);
        std::regex::~basic_regex(local_98);
        eastl::string::~basic_string(local_58);
        return CONCAT71(extraout_var, bVar1) & 4294967295;
    }

    // 0x100c7a970, 496 bytes, base-object constructor, placed by class name and debug map
    // Console::Console()
    void Console::Console() {
        allocator local_70[8];
        undefined1* local_68;
        undefined1* local_60;
        undefined1* local_58;
        undefined1* local_50;
        undefined1* local_48;
        undefined1* local_40;
        vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>* local_38;

        field_0 = &PTR__Console_100f297a0;
        local_38 = (vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>*)&field_8;
        new (local_38) eastl::vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                                         eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>();
        new (&field_48, 1024) eastl::ring_buffer<Line, eastl::vector<Line, eastl::allocator>, eastl::allocator>();
        local_68 = &field_48;
        new (field_104, 128)
            eastl::ring_buffer<eastl::string, eastl::vector<eastl::string, eastl::allocator>, eastl::allocator>();
        field_160 = false;
        field_161 = '\0';
        field_164 = 0;
        field_168 = 0;
        new (&field_172) std::optional<int>();
        local_58 = &field_184;
        std::unique_ptr<File, std::default_delete<File>>::unique_ptr<true, void>(
            (unique_ptr<File, std::default_delete<File>>*)local_58);
        local_60 = field_104;
        new (&field_192) eastl::string();
        field_224 = 2147483647;
        local_48 = &field_240;
        std::function<void(StringView, bool, bool)>::function((function<void(StringView, bool, bool)>*)local_48);
        local_40 = &field_288;
        local_50 = &field_192;
        new (local_40) eastl::list<Console::PendingCommand, eastl::allocator>();
        field_320 = 0.0;
        new (&field_328) eastl::string();
        eastl::allocator::allocator(local_70, "EASTL set");
        eastl::map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                   eastl::less<eastl::string>, eastl::allocator>::map((allocator*)&field_360);
        new (&field_408) std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>();
        new (&field_528) eastl::vector_map<
            eastl::string, std::variant<int, unsigned int, bool, float, eastl::string, VarAny>,
            eastl::less<eastl::string>, eastl::allocator,
            eastl::vector<
                eastl::pair<eastl::string, std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>,
                eastl::allocator>>();
        field_568 = 0;
        field_572 = 0;
        eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>::reserve(local_38, 512);
        RegisterCoreCommands(this);
    }

    // 0x100c7ac10, 128 bytes, placed by class name and debug map
    // Console::RegisterCoreCommands()
    void Console::RegisterCoreCommands() {
        AddCommand<Console::RegisterCoreCommands()::__0>(this, this);
        AddCommand<Console::RegisterCoreCommands()::__1>(this, this);
        AddCommand<Console::RegisterCoreCommands()::__3>(this, this);
        AddCommand<Console::RegisterCoreCommands()::__4>(this, this);
        AddCommand<Console::RegisterCoreCommands()::__5>(this, this);
        AddCommand<Console::RegisterCoreCommands()::__6>(this, this);
        AddCommand<Console::RegisterCoreCommands()::__2>(this, &DAT_100e614a8, this);
        AddCommand<Console::RegisterCoreCommands()::__2>(this, "commands", this);
    }

    // 0x100c7ace0, 16 bytes, complete-object constructor, placed by class name and debug map
    // Console::Console(): jumps straight to the base-object constructor

    // 0x100c7acf0, 352 bytes, base-object destructor, placed by class name and debug map
    // Console::~Console()
    void Console::~Console() {
        char cVar1;

        field_0 = &PTR__Console_100f297a0;
        cVar1 = (&field_360)->empty();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_historyListeners.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.cpp", 70,
                      (char*)0);
        }
        (&field_528)->~vector_map();
        (&field_408)->~optional();
        (&field_360)->~map();
        (&field_328)->~basic_string();
        (&field_288)->~list();
        std::function<void(StringView, bool, bool)>::~function((function<void(StringView, bool, bool)>*)&field_240);
        (&field_192)->~basic_string();
        (&field_184)->~unique_ptr();
        field_104->~StringVector();
        (&field_48)->~ring_buffer();
        (&field_8)->~vector_map();
    }

    // 0x100c7ae50, 16 bytes, complete-object destructor, placed by class name and debug map
    // Console::~Console(): jumps straight to the base-object destructor

    // 0x100c7ae60, 32 bytes, deleting destructor, placed by class name and debug map
    // Console::~Console()
    void Console::~Console() {
        ~Console(this);
        operator_delete(this);
    }

    // 0x100c7ae80, 528 bytes, placed by class name and debug map
    // Console::RunPendingCommands(float)
    void Console::RunPendingCommands(float param_1) {
        list<Console::PendingCommand, eastl::allocator>* this_00;
        char cVar1;
        PendingCommand* pPVar2;
        undefined8 uVar3;
        int iVar4;
        bool bVar5;
        StringView SVar6;
        StringView SVar7;
        int in_stack_fffffffffffffe18;
        undefined1 in_stack_fffffffffffffe20;
        StringView local_1d0;
        StringView local_1c0;
        undefined1 local_1b0[64];
        uint local_170;
        undefined1 local_16c;
        list<Console::PendingCommand, eastl::allocator>* local_168;
        fixed_string<char, 40, true, eastl::allocator> local_160[296];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (0.0 < field_320) {
            field_320 = field_320 - param_1;
        }
        local_168 = (list<Console::PendingCommand, eastl::allocator>*)&field_288;
        cVar1 = local_168->empty();
        this_00 = local_168;
        if (cVar1 == '\0') {
            if (field_320 <= 0.0) {
                if (field_160 == false) {
                    if (field_161 != '\0') {
                        iVar4 = field_168 + 1;
                        field_168 = iVar4;
                        bVar5 = iVar4 != field_164;
                        if (!bVar5) {
                            field_164 = 0;
                            field_168 = 0;
                            field_161 = '\0';
                        }
                        field_160 = bVar5;
                    }
                    pPVar2 = (PendingCommand*)eastl::list<Console::PendingCommand, eastl::allocator>::front();
                    new (local_1b0) PendingCommand(pPVar2);
                    eastl::list<Console::PendingCommand, eastl::allocator>::pop_front(this_00);
                    StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(
                        (StringView*)(local_1b0 + -48), (fixed_string*)local_1b0);
                    (*(code*)field_0[4])(local_160, this, (StringView*)(local_1b0 + -48));
                    uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    AddMessage(this, 7, uVar3);
                    StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(
                        &local_1d0, (fixed_string*)local_1b0);
                    StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(
                        &local_1c0, (fixed_string*)(local_1b0 + 32));
                    SVar7.field_0 = (ulong)local_170;
                    SVar6.field_8 = (uchar*)0;
                    SVar6.field_0 = (ulong)&local_1d0;
                    SVar7.field_8._0_1_ = local_16c;
                    SVar7.field_8._1_7_ = 0;
                    ExecuteCommand(this, SVar6, SUB81(&local_1c0, 0), SVar7, in_stack_fffffffffffffe18,
                                   (bool)in_stack_fffffffffffffe20);
                    /* WARNING: Subroutine does not return */
                    eastl::fixed_string<char, 40, true, eastl::allocator>::~fixed_string(local_160);
                }
                field_160 = false;
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100c7b140, 448 bytes, placed by class name and debug map
    // Console::AddMessage(LineType, char const*, ...)
    void Console::AddMessage(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
                             undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8,
                             Console* param_9, undefined4 param_10, char* param_11, undefined8 param_12,
                             undefined8 param_13, undefined8 param_14, undefined1 param_15, ...) {
        undefined1* this;
        long lVar1;
        char in_AL;
        bool bVar2;
        long lVar4;
        undefined4* puVar5;
        ClientCompositeZone* this_00;
        undefined8* puVar6;
        uchar* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        undefined1 auVar7[16];
        StringView SVar8;
        undefined1 local_138[24];
        undefined8 local_120;
        undefined8 local_118;
        undefined8 local_110;
        undefined8 local_108;
        undefined8 local_f8;
        undefined8 local_e8;
        undefined8 local_d8;
        undefined8 local_c8;
        undefined8 local_b8;
        undefined8 local_a8;
        undefined8 local_98;
        StringView local_88;
        long local_70;
        undefined8 local_68;
        undefined8 local_60;
        undefined8 local_58;
        undefined1* local_50;
        undefined1* local_48;
        long local_38;

        if (in_AL != '\0') {
            local_108 = param_1;
            local_f8 = param_2;
            local_e8 = param_3;
            local_d8 = param_4;
            local_c8 = param_5;
            local_b8 = param_6;
            local_a8 = param_7;
            local_98 = param_8;
        }
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this = &param_9->field_48;
        local_120 = param_12;
        local_118 = param_13;
        local_110 = param_14;
        local_70 = GetAuthWrapper();
        lVar4 = capacity();
        puVar5 = (undefined4*)push_back();
        *puVar5 = param_10;
        local_48 = local_138;
        local_50 = &param_15;
        local_58 = 206158430232;
        ((puVar5 + 2))->sprintf_va_list(param_11, (__va_list_tag*)&local_58);
        bVar2 = (&param_9->field_184)->operator_cast_to_bool();
        if (bVar2) {
            this_00 = (ClientCompositeZone*)std::unique_ptr<File, std::default_delete<File>>::operator->(
                (unique_ptr<File, std::default_delete<File>>*)&param_9->field_184);
            if (this_00->IsValid() != '\0') {
                StringView::StringView<eastl::fixed_string<char, 512, true, eastl::allocator>>(
                    &local_88, (fixed_string*)(puVar5 + 2));
                SVar8.field_8 = extraout_RDX;
                SVar8.field_0 = (ulong)&local_88;
                RecordMessageHistory(param_9, SVar8);
            }
        }
        local_68 = eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                                 eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true,
                                 true>::begin();
        auVar7 =
            eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                          eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true, true>::end();
        local_60 = auVar7._0_8_;
        bVar2 = eastl::operator!=((eastl*)&local_68, (hashtable_iterator_base*)&local_60, auVar7._8_8_);
        lVar1 = local_70;
        if (bVar2) {
            do {
                puVar6 = (undefined8*)eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator*(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_68);
                (**(code**)(*(long*)*puVar6 + 16))((long*)*puVar6, puVar5, lVar1 == lVar4);
                eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator++(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_68);
                bVar2 = eastl::operator!=((eastl*)&local_68, (hashtable_iterator_base*)&local_60, extraout_RDX_00);
            } while (bVar2);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100c7b300, 2240 bytes, placed by class name and debug map
    // Console::ExecuteCommand(StringView, bool, StringView, int, bool)
    void Console::ExecuteCommand(StringView param_1, bool param_2, StringView param_3, int param_4, bool param_5) {
        SharedArray<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData,
                                    std::default_delete<oldscape::rs2lib::worldmap::LocationData>>>* this_00;
        uint uVar1;
        char cVar2;
        bool bVar3;
        undefined4 uVar4;
        undefined4 uVar5;
        char* pcVar6;
        ulong uVar7;
        uchar* puVar8;
        StringView* pSVar9;
        undefined8* puVar10;
        long lVar11;
        long lVar12;
        variant* pvVar13;
        variant<int, unsigned int, bool, float, eastl::string, VarAny>* this_01;
        undefined8 uVar14;
        undefined8 uVar15;
        undefined7 in_register_00000009;
        uchar* extraout_RDX;
        uchar* extraout_RDX_00;
        StringView* this_02;
        undefined1 uVar16;
        fixed_vector* pfVar17;
        CommandData* this_03;
        StringView SVar18;
        StringView SVar19;
        StringView SVar20;
        StringView SVar21;
        StringView SVar22;
        StringView SVar23;
        StringView SVar24;
        StringView local_280;
        StringView local_270;
        StringView local_260;
        StringView local_250;
        StringView local_240;
        StringView local_230;
        StringView local_220;
        SharedArray<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData,
                                    std::default_delete<oldscape::rs2lib::worldmap::LocationData>>>* local_210;
        StringView local_208;
        PacketT* local_1f8;
        undefined8 uStack_1f0;
        float local_1e4;
        undefined4 local_1e0;
        uint local_1dc;
        ShuffledPacketFactory local_1d8;
        StringView local_1c8[18];
        StringView local_a0[6];
        long local_38;

        local_210 = (SharedArray<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData,
                                                 std::default_delete<oldscape::rs2lib::worldmap::LocationData>>>*)
            CONCAT71(in_register_00000009, param_2);
        pfVar17 = (fixed_vector*)param_3.field_0;
        this_02 = (StringView*)param_1.field_0;
        local_1dc = (uint)param_3.field_0;
        local_1e0 = param_1.field_8._0_4_;
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        cVar2 = this_02->empty();
        if (cVar2 != '\0')
            goto LAB_100c7b83d;
        if ((char)param_3.field_8 != '\0') {
            StringView::to_owned_string<eastl::string>(local_1c8);
            (field_104, (basic_string*)local_1c8)->push_back();
            local_1c8->~basic_string();
        }
        new (&local_1d8) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        new (&local_1f8) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        new (local_a0) eastl::fixed_vector<StringView, 4ul, true, eastl::allocator>();
        new (&local_280) StringView(this_02);
        pSVar9 = local_a0;
        SVar18.field_8 = (uchar*)&local_1d8;
        SVar18.field_0 = (ulong)&local_280;
        cVar2 = GetCommandAndArguments(this, SVar18, pSVar9, pfVar17);
        uVar16 = SUB81(pfVar17, 0);
        if (cVar2 == '\0') {
            AddMessage(this, 5, "There was an error executing the command");
        } else {
            cVar2 = local_1d8.empty();
            if (cVar2 == '\0') {
                pcVar6 = (char*)WrapArray<char const>::operator[]((WrapArray<char const>*)&local_1d8, 0);
                if (*pcVar6 == '$') {
                    uVar7 = ShuffledPacketFactory::p2_alt2(&local_1d8);
                    if (1 < uVar7) {
                        cVar2 = local_a0->empty();
                        if (cVar2 != '\0') {
                            new (&local_270) StringView((StringView*)&local_1d8);
                            SVar19.field_8 = (uchar*)&local_270;
                            SVar19.field_0 = (ulong)this;
                            FindStoredVariable((Console*)local_1c8, SVar19);
                            bVar3 = local_1c8->operator_cast_to_bool();
                            if (bVar3) {
                                std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::
                                operator=((optional<std::variant<int, unsigned int, bool, float, eastl::string,
                                                                 VarAny>>*)&field_408,
                                          (optional*)local_1c8);
                                new (&local_260) StringView((StringView*)&local_1d8);
                                puVar8 = (uchar*)(&field_408)->value();
                                SVar20.field_8 = puVar8;
                                SVar20.field_0 = (ulong)&local_260;
                                PrintStoredVariable(this, SVar20, (variant*)pSVar9);
                            } else {
                                uVar5 = ShuffledPacketFactory::p2_alt2(&local_1d8);
                                uVar15 = local_1d8.end();
                                AddMessage(this, 5, "Var %.*s does not exist", uVar5, uVar15);
                            }
                            local_1c8->~optional();
                            goto LAB_100c7b831;
                        }
                        pSVar9 = (StringView*)eastl::vector<
                            StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                        operator[]((vector<StringView,
                                           eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                                       local_a0,
                                   0);
                        new (&local_250) StringView("=");
                        SVar21.field_8 = extraout_RDX;
                        SVar21.field_0 = (ulong)&local_250;
                        cVar2 = StringView::operator==(pSVar9, SVar21);
                        if (cVar2 != '\0') {
                            uVar7 = local_a0->size();
                            if (1 < uVar7) {
                                local_1f8 = local_1d8.field_0;
                                uStack_1f0 = local_1d8.field_8;
                                puVar10 = (undefined8*)
                                    eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true,
                                                                                            eastl::allocator>>::
                                    operator[](
                                        (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true,
                                                                                          eastl::allocator>>*)local_a0,
                                        1);
                                local_1d8.field_0 = (PacketT*)*puVar10;
                                local_1d8.field_8 = puVar10[1];
                                pSVar9 = (StringView*)local_a0->HeapBeginPtr();
                                lVar11 = local_a0->HeapBeginPtr();
                                local_a0->erase(pSVar9, (StringView*)(lVar11 + 32));
                                goto LAB_100c7b570;
                            }
                        }
                        uVar5 = ShuffledPacketFactory::p2_alt2(&local_1d8);
                        uVar15 = local_1d8.end();
                        uVar4 = ShuffledPacketFactory::p2_alt2(&local_1d8);
                        uVar14 = local_1d8.end();
                        AddMessage(this, 5,
                                   "Invalid var operation - supported usage is \'%.*s\' or \'%.*s = <lt>command<gt>",
                                   uVar5, uVar15, uVar4, uVar14);
                        goto LAB_100c7b831;
                    }
                }
            }
        LAB_100c7b570:
            field_568 = field_568 + 1;
            cVar2 = local_1d8.empty();
            if (cVar2 == '\0') {
                pcVar6 = (char*)local_1d8.end();
                uVar7 = ShuffledPacketFactory::p2_alt2(&local_1d8);
                new (&local_208) eastl::allocator("EASTL basic_string");
                new (local_1c8) eastl::string(pcVar6, uVar7, (allocator*)&local_208);
                lVar11 = (&field_8, (basic_string*)local_1c8)->find();
                local_1c8->~basic_string();
                lVar12 = (&field_8)->end();
                if (lVar11 != lVar12) {
                    this_03 = (CommandData*)(lVar11 + 32);
                    bVar3 = this_03->operator_cast_to_bool();
                    if (!bVar3) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "found->second.m_handler",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.cpp",
                            237, (char*)0);
                    }
                    new (local_1c8) eastl::fixed_string<char, 8, true, eastl::allocator>();
                    cVar2 = this_03->HasFlag(2);
                    if (cVar2 != '\0') {
                        eastl::basic_string<char,
                                            eastl::fixed_vector_allocator<1ul, 8ul, 1ul, 0ul, true, eastl::allocator>>::
                            sprintf((char*)local_1c8, "%d", (ulong)local_1dc);
                        StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(
                            &local_208, (fixed_string*)local_1c8);
                        local_a0->push_back(&local_208);
                    }
                    std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::
                    operator()(
                        (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)this_03,
                        (fixed_vector*)local_a0);
                    if (field_572 == '\0') {
                        cVar2 = this_03->HasFlag(1);
                        if (cVar2 == '\0')
                            goto LAB_100c7b6f3;
                    }
                    bVar3 = (&field_240)->operator_cast_to_bool();
                    if (bVar3) {
                        new (&local_240) StringView(this_02);
                        SVar22.field_8 = (uchar*)0;
                        SVar22.field_0 = (ulong)&local_240;
                        std::function<void(StringView, bool, bool)>::operator()(
                            (function<void(StringView, bool, bool)>*)&field_240, SVar22, false, (bool)uVar16);
                    }
                LAB_100c7b6f3:
                    /* WARNING: Subroutine does not return */
                    local_1c8->~fixed_string();
                }
                cVar2 = local_1f8.empty();
                if (cVar2 == '\0') {
                    StringView::StringView<6ul>(&local_230, "$last");
                    SVar24.field_8 = extraout_RDX_00;
                    SVar24.field_0 = (ulong)&local_230;
                    cVar2 = StringView::operator!=((StringView*)&local_1d8, SVar24);
                    if (cVar2 != '\0') {
                        lVar11 = local_1d8.find('.');
                        if (lVar11 == -1) {
                            bVar3 = FromString<StringView, int>((StringView*)&local_1d8, (int*)&local_208, 10);
                            if (!bVar3)
                                goto LAB_100c7ba01;
                            std::variant<int, unsigned int, bool, float, eastl::string,
                                         VarAny>::variant<int&, 0, 0, 0, int, 0ul, 0>((int*)local_1c8);
                            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::
                            operator=(
                                (optional<
                                    std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>*)&field_408,
                                (variant*)local_1c8);
                        } else {
                        LAB_100c7ba01:
                            bVar3 = FromString<StringView, float>((StringView*)&local_1d8, &local_1e4, 10);
                            if (!bVar3) {
                                uVar5 = ShuffledPacketFactory::p2_alt2(&local_1d8);
                                uVar15 = local_1d8.end();
                                AddMessage(this, 5, "could not parse \'%.*s\' as an int/float", uVar5, uVar15);
                                goto LAB_100c7b6ff;
                            }
                            std::variant<int, unsigned int, bool, float, eastl::string,
                                         VarAny>::variant<float&, 0, 0, 0, float, 3ul, 0>((float*)local_1c8);
                            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::
                            operator=(
                                (optional<
                                    std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>*)&field_408,
                                (variant*)local_1c8);
                        }
                        local_1c8->~variant();
                    }
                } else {
                    bVar3 = (&field_240)->operator_cast_to_bool();
                    if (!bVar3) {
                        new (local_1c8)
                            eastl::fixed_string<char, 256, true, eastl::allocator>("Unknown developer command: ");
                        uVar7 = ShuffledPacketFactory::p2_alt2(&local_1d8);
                        uVar1 = local_1dc;
                        this_00 = local_210;
                        uVar15 = local_1d8.end();
                        eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::
                            append_sprintf((char*)local_1c8, &DAT_100e4fcf3, uVar7 & 4294967295, uVar15);
                        cVar2 = this_00->empty();
                        if ((cVar2 == '\0') && (uVar1 != 4294967295)) {
                            uVar15 = this_00->end();
                            uVar14 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                            AddMessage(this, 5, "%.*s(%d): %s", uVar15, uVar1, uVar14);
                        } else {
                            uVar15 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                            AddMessage(this, 5, &DAT_100e377c0, uVar15);
                        }
                        /* WARNING: Subroutine does not return */
                        local_1c8->~fixed_string();
                    }
                    new (&local_220) StringView(this_02);
                    SVar23.field_8._0_1_ = (undefined1)local_1e0;
                    SVar23.field_0 = (ulong)&local_220;
                    SVar23.field_8._1_7_ = 0;
                    std::function<void(StringView, bool, bool)>::operator()(
                        (function<void(StringView, bool, bool)>*)&field_240, SVar23, false, (bool)uVar16);
                }
            LAB_100c7b6ff:
                cVar2 = local_1f8.empty();
                if (cVar2 == '\0') {
                    bVar3 = (&field_408)->operator_cast_to_bool();
                    if (bVar3) {
                        pvVar13 = (variant*)(&field_408)->value();
                        StringView::to_owned_string<eastl::string>(local_1c8);
                        this_01 = (variant<int, unsigned int, bool, float, eastl::string, VarAny>*)eastl::vector_map<
                            eastl::string, std::variant<int, unsigned int, bool, float, eastl::string, VarAny>,
                            eastl::less<eastl::string>, eastl::allocator,
                            eastl::vector<eastl::pair<eastl::string, std::variant<int, unsigned int, bool, float,
                                                                                  eastl::string, VarAny>>,
                                          eastl::allocator>>::
                        operator[](
                            (vector_map<
                                eastl::string, std::variant<int, unsigned int, bool, float, eastl::string, VarAny>,
                                eastl::less<eastl::string>, eastl::allocator,
                                eastl::vector<eastl::pair<eastl::string, std::variant<int, unsigned int, bool, float,
                                                                                      eastl::string, VarAny>>,
                                              eastl::allocator>>*)&field_528,
                            (basic_string*)local_1c8);
                        std::variant<int, unsigned int, bool, float, eastl::string, VarAny>::operator=(this_01,
                                                                                                       pvVar13);
                    } else {
                        StringView::to_owned_string<eastl::string>(local_1c8);
                        (&field_528, (basic_string*)local_1c8)->erase();
                    }
                    local_1c8->~basic_string();
                }
            }
            if (field_568 < 1) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_executingCommandCount > 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.cpp",
                          315, (char*)0);
            }
            field_568 = field_568 + -1;
            field_572 = 0;
            ResetCommandHistoryCursor(this);
        }
    LAB_100c7b831:
        local_a0->~fixed_vector();
    LAB_100c7b83d:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100c7bbc0, 144 bytes, placed by class name and debug map
    // Console::FindStoredVariable(StringView) const
    Console* Console::FindStoredVariable(StringView param_1) {
        long lVar1;
        long lVar2;
        vector_map<eastl::string, std::variant<int, unsigned int, bool, float, eastl::string, VarAny>,
                   eastl::less<eastl::string>, eastl::allocator,
                   eastl::vector<
                       eastl::pair<eastl::string, std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>,
                       eastl::allocator>>* this_00;
        StringView local_40[2];

        this_00 =
            (vector_map<eastl::string, std::variant<int, unsigned int, bool, float, eastl::string, VarAny>,
                        eastl::less<eastl::string>, eastl::allocator,
                        eastl::vector<eastl::pair<eastl::string,
                                                  std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>,
                                      eastl::allocator>>*)(param_1.field_0 + 528);
        StringView::to_owned_string<eastl::string>(local_40);
        lVar1 = eastl::vector_map<
            eastl::string, std::variant<int, unsigned int, bool, float, eastl::string, VarAny>,
            eastl::less<eastl::string>, eastl::allocator,
            eastl::vector<
                eastl::pair<eastl::string, std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>,
                eastl::allocator>>::find(this_00, (basic_string*)local_40);
        local_40->~basic_string();
        lVar2 = this_00->end();
        if (lVar1 == lVar2) {
            new (this) std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>();
        } else {
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::optional<
                std::variant<int, unsigned int, bool, float, eastl::string, VarAny> const&, 0>((variant*)this);
        }
        return this;
    }

    // 0x100c7bc60, 144 bytes, placed by class name and debug map
    // Console::ReportStoredVariables()
    void Console::ReportStoredVariables() {
        fixed_string* pfVar1;
        fixed_string* pfVar2;
        variant* in_RCX;
        StringView SVar3;
        StringView local_38;

        AddMessage(this, 2, "Stored variables:");
        pfVar1 = (fixed_string*)(&field_528)->HeapBeginPtr();
        pfVar2 = (fixed_string*)(&field_528)->end();
        if (pfVar1 != pfVar2) {
            do {
                StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_38, pfVar1);
                SVar3.field_8 = (uchar*)(pfVar1 + 32);
                SVar3.field_0 = (ulong)&local_38;
                PrintStoredVariable(this, SVar3, in_RCX);
                pfVar1 = pfVar1 + 144;
            } while (pfVar1 != pfVar2);
        }
    }

    // 0x100c7bcf0, 528 bytes, placed by class name and debug map
    // Console::PrintStoredVariable(StringView, std::variant<int, unsigned int, bool, float, eastl::string, VarAny> const&)
    /* Console::PrintStoredVariable(StringView, std::variant<int, unsigned int, bool,
   float, eastl::string, VarAny> const&) */

    void Console::PrintStoredVariable(StringView param_1, variant* param_2) {
        undefined4 uVar1;
        undefined4 uVar2;
        undefined4* puVar3;
        undefined8 uVar4;
        float* pfVar5;
        long lVar6;
        variant* pvVar7;
        char* pcVar8;
        ShuffledPacketFactory* this_00;
        char* pcVar9;
        undefined1 local_40[16];

        pvVar7 = (variant*)param_1.field_8;
        this_00 = (ShuffledPacketFactory*)param_1.field_0;
        puVar3 = (undefined4*)std::get_if<int, int, unsigned int, bool, float, eastl::string, VarAny>(pvVar7);
        if (puVar3 == (undefined4*)0) {
            puVar3 =
                (undefined4*)std::get_if<unsigned int, int, unsigned int, bool, float, eastl::string, VarAny>(pvVar7);
            if (puVar3 == (undefined4*)0) {
                pfVar5 = (float*)std::get_if<float, int, unsigned int, bool, float, eastl::string, VarAny>(pvVar7);
                if (pfVar5 != (float*)0) {
                    uVar2 = ShuffledPacketFactory::p2_alt2(this_00);
                    uVar4 = this_00->end();
                    AddMessage((double)*pfVar5, this, 2, "Var %.*s is %f", uVar2, uVar4);
                    return;
                }
                pcVar8 = (char*)std::get_if<bool, int, unsigned int, bool, float, eastl::string, VarAny>(pvVar7);
                if (pcVar8 == (char*)0) {
                    lVar6 = std::get_if<eastl::string, int, unsigned int, bool, float, eastl::string, VarAny>(pvVar7);
                    if (lVar6 == 0) {
                        lVar6 = std::get_if<VarAny, int, unsigned int, bool, float, eastl::string, VarAny>(pvVar7);
                        if (lVar6 == 0) {
                            /* WARNING: Subroutine does not return */
                            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "console/Console.cpp",
                                            809, (char*)0);
                        }
                        local_40->GetTypeName();
                        uVar2 = ShuffledPacketFactory::p2_alt2(this_00);
                        uVar4 = this_00->end();
                        pcVar9 = (char*)local_40->p2_alt2();
                        local_40->end();
                        pcVar8 = "Var %.*s is a non-printable type (%.*s)";
                    } else {
                        uVar2 = ShuffledPacketFactory::p2_alt2(this_00);
                        uVar4 = this_00->end();
                        pcVar9 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        pcVar8 = "Var %.*s is %s";
                    }
                } else {
                    uVar2 = ShuffledPacketFactory::p2_alt2(this_00);
                    uVar4 = this_00->end();
                    pcVar9 = "true";
                    if (*pcVar8 == '\0') {
                        pcVar9 = "false";
                    }
                    pcVar8 = "Var %.*s is %s";
                }
                AddMessage(this, 2, pcVar8, uVar2, uVar4, pcVar9);
                return;
            }
            uVar1 = ShuffledPacketFactory::p2_alt2(this_00);
            uVar4 = this_00->end();
            uVar2 = *puVar3;
            pcVar8 = "Var %.*s is %u";
        } else {
            uVar1 = ShuffledPacketFactory::p2_alt2(this_00);
            uVar4 = this_00->end();
            uVar2 = *puVar3;
            pcVar8 = "Var %.*s is %d";
        }
        AddMessage(this, 2, pcVar8, uVar1, uVar4, uVar2);
    }

    // 0x100c7c030, 112 bytes, placed by class name and debug map
    // Console::RecordMessageHistory(StringView)
    void Console::RecordMessageHistory(StringView param_1) {
        File* pFVar1;
        char* pcVar2;
        uint uVar3;

        pFVar1 = (File*)std::unique_ptr<File, std::default_delete<File>>::operator->(
            (unique_ptr<File, std::default_delete<File>>*)&field_184);
        pcVar2 = (char*)param_1.field_0->end();
        uVar3 = param_1.field_0->p2_alt2();
        pFVar1->write(pcVar2, uVar3, 0);
        pFVar1 = (File*)std::unique_ptr<File, std::default_delete<File>>::operator->(
            (unique_ptr<File, std::default_delete<File>>*)&field_184);
        pFVar1->write("\n", 0);
    }

    // 0x100c7c0a0, 96 bytes, placed by class name and debug map
    // Console::QueueCommand(char const*, char const*, int, bool)
    void Console::QueueCommand(char* param_1, char* param_2, int param_3, bool param_4) {
        eastl::string* this_00;

        this_00 = (eastl::string*)(&field_288)->push_back();
        eastl::string::assign(this_00, param_1);
        eastl::string::trim(this_00);
        eastl::string::assign(this_00 + 32, param_2);
        *(int*)(this_00 + 64) = param_3;
        this_00[68] = (eastl::string)param_4;
    }

    // 0x100c7c150, 240 bytes, placed by class name and debug map
    // Console::GetCommandAndArguments(StringView, StringView&, eastl::fixed_vector<StringView, 4ul, true, eastl::allocator>&) const
    undefined8 Console::GetCommandAndArguments(StringView param_1, StringView* param_2, fixed_vector* param_3) {
        uchar* puVar1;
        ulong uVar2;
        StringView* this_00;
        uchar* extraout_RDX;
        StringView* this_01;
        Console* this_02;
        StringView SVar3;
        StringView SVar4;
        StringView local_60;
        undefined1 local_50[16];
        StringView local_40;

        this_00 = (StringView*)param_1.field_8;
        this_01 = (StringView*)param_1.field_0;
        local_40.trim();
        StringView::operator=(this_01, &local_40);
        StringView::StringView<3ul>(&local_60, " \t");
        SVar3.field_8 = extraout_RDX;
        SVar3.field_0 = (ulong)&local_60;
        puVar1 = (uchar*)this_01->find_first_of(SVar3);
        if (puVar1 == (uchar*)18446744073709551615) {
            uVar2 = this_01->HeapBeginPtr();
            if (127 < uVar2) {
                return 0;
            }
            puVar1 = this_01->field_8;
            this_00->field_0 = this_01->field_0;
            this_00->field_8 = puVar1;
        } else {
            if ((uchar*)127 < puVar1) {
                return 0;
            }
            local_40.substr((ulong)this_01, 0);
            StringView::operator=(this_00, &local_40);
            local_40.substr((ulong)this_01);
            StringView::operator=(this_01, &local_40);
            this_02 = (Console*)local_50;
            new (local_50) StringView(this_01);
            SVar4.field_8 = puVar1;
            SVar4.field_0 = (ulong)local_50;
            SplitArguments(this_02, (fixed_vector*)param_2, SVar4);
        }
        return 1;
    }

    // 0x100c7c650, 1568 bytes, placed by class name and debug map
    // Console::SearchCommands(StringView, int)
    SearchResult* Console::SearchCommands(StringView param_1, int param_2) {
        char cVar1;
        int iVar3;
        int iVar4;
        undefined4 uVar5;
        char* pcVar6;
        ulong uVar7;
        StringView* pSVar8;
        long lVar9;
        undefined8* puVar10;
        ShuffledPacketFactory* pSVar11;
        ShuffledPacketFactory* pSVar12;
        ulong uVar13;
        uint in_ECX;
        StringView* pSVar14;
        undefined4 in_register_00000014;
        uchar* extraout_RDX;
        Console* this;
        SearchResult* this_00;
        undefined1 in_R8B;
        undefined7 in_register_00000081;
        StringView SVar15;
        StringView SVar16;
        StringView SVar17;
        StringView SVar18;
        StringView local_180;
        StringView local_170;
        StringView local_160;
        StringView local_150;
        StringView local_140;
        ulong local_130;
        StringView local_128[2];
        StringView local_108[2];
        StringView local_e8[2];
        ShuffledPacketFactory local_c8;
        ShuffledPacketFactory* local_b8;
        eastl::string* local_b0;
        SearchResult* local_a8;
        StringView local_a0[6];
        long local_38;

        this = (Console*)param_1.field_8;
        this_00 = (SearchResult*)param_1.field_0;
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        SearchResult::SearchResult(this_00);
        local_b8 = (ShuffledPacketFactory*)CONCAT44(in_register_00000014, param_2);
        cVar1 = (CONCAT44(in_register_00000014, param_2))->empty();
        if (cVar1 != '\0')
            goto LAB_100c7cb1e;
        new (&local_c8) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        new (local_a0) eastl::fixed_vector<StringView, 4ul, true, eastl::allocator>();
        new (&local_180) StringView(local_b8);
        pSVar14 = local_a0;
        SVar16.field_8 = (uchar*)&local_c8;
        SVar16.field_0 = (ulong)&local_180;
        GetCommandAndArguments(this, SVar16, pSVar14, (fixed_vector*)CONCAT71(in_register_00000081, in_R8B));
        local_b0 = (eastl::string*)&field_192;
        eastl::string::clear();
        cVar1 = local_c8.empty();
        if (cVar1 == '\0') {
            pcVar6 = (char*)WrapArray<char const>::operator[]((WrapArray<char const>*)&local_c8, 0);
            if (*pcVar6 == '$') {
                uVar7 = ShuffledPacketFactory::p2_alt2(&local_c8);
                if (1 < uVar7) {
                    cVar1 = local_a0->empty();
                    if (cVar1 == '\0') {
                        pSVar8 = (StringView*)eastl::vector<
                            StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                        operator[]((vector<StringView,
                                           eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                                       local_a0,
                                   0);
                        new (&local_170) StringView("=");
                        SVar17.field_8 = extraout_RDX;
                        SVar17.field_0 = (ulong)&local_170;
                        cVar1 = StringView::operator==(pSVar8, SVar17);
                        if (cVar1 != '\0') {
                            uVar7 = local_a0->size();
                            if (1 < uVar7) {
                                pcVar6 = (char*)local_b8->end();
                                lVar9 = ShuffledPacketFactory::p2_alt2(&local_c8);
                                new (local_108) eastl::allocator("EASTL basic_string");
                                pSVar14 = local_108;
                                new (local_e8) eastl::string(pcVar6, lVar9 + 3, pSVar14);
                                eastl::string::operator=(local_b0, (basic_string*)local_e8);
                                local_e8->~basic_string();
                                ShuffledPacketFactory::p2_alt2(&local_c8);
                                pSVar11 = local_b8;
                                local_e8->substr((ulong)local_b8);
                                StringView::operator=((StringView*)pSVar11, local_e8);
                                puVar10 = (undefined8*)
                                    eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true,
                                                                                            eastl::allocator>>::
                                    operator[](
                                        (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true,
                                                                                          eastl::allocator>>*)local_a0,
                                        1);
                                local_c8.field_0 = (PacketT*)*puVar10;
                                local_c8.field_8 = puVar10[1];
                                pSVar8 = (StringView*)local_a0->HeapBeginPtr();
                                lVar9 = local_a0->HeapBeginPtr();
                                local_a0->erase(pSVar8, (StringView*)(lVar9 + 32));
                            }
                        }
                    }
                }
            }
        }
        if ((&field_240)->operator_cast_to_bool()) {
            new (&local_160) StringView(local_b8);
            SVar18.field_8 = (uchar*)0;
            SVar18.field_0 = (ulong)&local_160;
            std::function<void(StringView, bool, bool)>::operator()((function<void(StringView, bool, bool)>*)&field_240,
                                                                    SVar18, true, (bool)in_R8B);
        } else {
            new (local_e8) eastl::vector<StringView, eastl::allocator>();
            iVar3 = local_c8.HeapBeginPtr();
            iVar4 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            if ((int)in_ECX <= iVar4 + iVar3) {
                new (&local_150) StringView((StringView*)&local_c8);
                SVar15.field_8 = (uchar*)pSVar14;
                SVar15.field_0 = (ulong)&local_150;
                GetAlphabeticListOfMatchingCommands(this, (vector*)local_e8, SVar15);
            }
            lVar9 = local_e8->size();
            if (lVar9 == 1) {
                eastl::vector<StringView, eastl::allocator>::operator[]((vector<StringView, eastl::allocator>*)local_e8,
                                                                        0);
                StringView::to_owned_string<eastl::string>(local_128);
                eastl::operator+((basic_string*)local_108, (basic_string*)local_b0);
                eastl::string::operator=((eastl::string*)this_00, (basic_string*)local_108);
                local_108->~basic_string();
                local_128->~basic_string();
                uVar5 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            LAB_100c7c997:
                this_00->field_64 = uVar5;
            } else {
                uVar7 = local_e8->size();
                if (1 < uVar7) {
                    uVar7 = local_e8->size();
                    (&this_00->field_32, uVar7)->reserve();
                    local_130 = (ulong)in_ECX;
                    local_a8 = this_00;
                    pSVar11 = (ShuffledPacketFactory*)local_e8->HeapBeginPtr();
                    pSVar12 = (ShuffledPacketFactory*)local_e8->end();
                    if (pSVar11 != pSVar12) {
                        do {
                            local_108[0].field_0 = pSVar11->end();
                            local_128[0].field_0 = ShuffledPacketFactory::p2_alt2(pSVar11);
                            eastl::vector<eastl::string, eastl::allocator>::emplace_back<char const*, unsigned long>(
                                (vector<eastl::string, eastl::allocator>*)&this_00->field_32, (char**)local_108,
                                &local_128[0].field_0);
                            pSVar11 = pSVar11 + 1;
                        } while (pSVar11 != pSVar12);
                    }
                    uVar7 = GetStringsMinimumCommonLength<eastl::vector<StringView, eastl::allocator>>(
                        (vector*)local_e8, 50);
                    uVar13 = ShuffledPacketFactory::p2_alt2(local_b8);
                    this_00 = local_a8;
                    if (uVar13 < uVar7) {
                        uVar13 = eastl::vector<StringView, eastl::allocator>::operator[](
                            (vector<StringView, eastl::allocator>*)local_e8, 0);
                        local_140.substr(uVar13, 0);
                        StringView::to_owned_string<eastl::string>(local_128);
                        eastl::operator+((basic_string*)local_108, (basic_string*)local_b0);
                        eastl::string::operator=((eastl::string*)this_00, (basic_string*)local_108);
                        local_108->~basic_string();
                        local_128->~basic_string();
                        uVar5 = (undefined4)uVar7;
                    } else {
                        StringView::to_owned_string<eastl::string>(local_128);
                        eastl::operator+((basic_string*)local_108, (basic_string*)local_b0);
                        uVar5 = (undefined4)local_130;
                        eastl::string::operator=((eastl::string*)this_00, (basic_string*)local_108);
                        local_108->~basic_string();
                        local_128->~basic_string();
                    }
                    goto LAB_100c7c997;
                }
            }
            local_e8->~vector();
        }
        local_a0->~fixed_vector();
    LAB_100c7cb1e:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return this_00;
    }

    // 0x100c7cc90, 288 bytes, placed by class name and debug map
    // Console::GetAlphabeticListOfMatchingCommands(eastl::vector<StringView, eastl::allocator>&, StringView) const
    void Console::GetAlphabeticListOfMatchingCommands(vector* param_1, StringView param_2) {
        ulong uVar1;
        long lVar3;
        long lVar4;
        char* pcVar5;
        char* pcVar6;
        StringView* pSVar7;
        StringView* pSVar8;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_00;
        int iVar10;
        fixed_string* pfVar11;
        Layout* this_01;
        fixed_string* pfVar12;
        StringView local_50;
        char* local_40;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* local_38;

        this_01 = (Layout*)param_2.field_0;
        local_38 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)param_1;
        pfVar12 = (fixed_string*)(&field_8)->HeapBeginPtr();
        pfVar11 = (fixed_string*)(&field_8)->end();
        this_00 = local_38;
        for (; local_38 = this_00, pfVar12 != pfVar11; pfVar12 = pfVar12 + 288) {
            uVar1 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            if (eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(this_01) <= uVar1) {
                local_40 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                lVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                lVar4 =
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                      eastl::allocator>>::Layout::HeapBeginPtr(this_01);
                pcVar5 = (char*)this_01->end();
                pcVar6 = (char*)this_01->end();
                iVar10 = eastl::string::compare(local_40, (char*)(lVar3 + lVar4), pcVar5, pcVar6);
                if (iVar10 == 0) {
                    StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_50, pfVar12);
                    local_38->push_back(&local_50);
                }
            }
            this_00 = local_38;
        }
        if (eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
                this_00) == '\0') {
            pSVar7 = (StringView*)this_00->HeapBeginPtr();
            pSVar8 = (StringView*)this_00->end();
            eastl::sort<StringView*>(pSVar7, pSVar8);
        }
    }

    // 0x100c7d010, 688 bytes, placed by class name and debug map
    // Console::SanitizeCommand(StringView) const
    Console* Console::SanitizeCommand(StringView param_1) {
        int iVar1;
        int iVar2;
        char* pcVar3;
        ulong uVar4;
        vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                   eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>* this_00;
        basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>* this_01;
        ulong uVar5;
        long lVar6;
        long lVar7;
        long lVar8;
        long lVar9;
        StringView* this_02;
        LocationContainer* this_03;
        bool bVar10;
        eastl::string local_98[32];
        vector<eastl::fixed_string<char, 256, true, eastl::allocator>, eastl::allocator> local_78[32];
        basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>* local_58;
        char* local_50;
        vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                   eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>* local_48;
        long local_40;
        Console* local_38;

        this_02 = (StringView*)param_1.field_8;
        this_03 = (LocationContainer*)param_1.field_0;
        new (this) eastl::fixed_string<char, 256, true, eastl::allocator>();
        pcVar3 = (char*)this_02->end();
        uVar4 = this_02->HeapBeginPtr();
        local_38 = this;
        assign(pcVar3, uVar4);
        iVar1 = this_03->GetMinGridZ();
        if (iVar1 != 0) {
            iVar1 = this_02->HeapBeginPtr();
            iVar2 = this_03->GetMinGridZ();
            if (iVar2 <= iVar1) {
                eastl::vector<eastl::fixed_string<char, 256, true, eastl::allocator>, eastl::allocator>::vector(
                    local_78);
                tokenize<eastl::vector<eastl::fixed_string<char, 256, true, eastl::allocator>, eastl::allocator>,
                         StringView>((vector*)local_78, this_02, ";", -1);
                this_00 = (vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                                      eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>*)
                              this_03->second();
                this_01 =
                    (basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>*)
                        local_78->HeapBeginPtr();
                local_58 =
                    (basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>*)
                        local_78->end();
                if (this_01 != local_58) {
                    local_40 = 0;
                    local_48 = this_00;
                    do {
                        eastl::string::basic_string(local_98);
                        uVar4 = eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true,
                                                                eastl::allocator>>::find_first_of(this_01, " \t", 0);
                        pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        if (uVar4 == 18446744073709551615) {
                            uVar5 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true,
                                                                                            eastl::allocator>>::size();
                            eastl::string::assign(local_98, pcVar3, uVar5);
                        } else {
                            eastl::string::assign(local_98, pcVar3, uVar4);
                        }
                        lVar6 =
                            eastl::vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                                              eastl::vector<eastl::pair<eastl::string, CommandData>,
                                                            eastl::allocator>>::find(this_00, (basic_string*)local_98);
                        lVar7 = this_00->end();
                        if ((lVar6 != lVar7) && (-1 < *(int*)(lVar6 + 80))) {
                            bVar10 = uVar4 != 18446744073709551615;
                            if ((*(int*)(lVar6 + 80) != 0) && (uVar4 != 18446744073709551615)) {
                                iVar1 = 1;
                                do {
                                    uVar4 = eastl::basic_string<
                                        char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true,
                                                                            eastl::allocator>>::find_first_of(this_01,
                                                                                                              " \t",
                                                                                                              uVar4 +
                                                                                                                  1);
                                    bVar10 = uVar4 != 18446744073709551615;
                                    if (*(int*)(lVar6 + 80) <= iVar1)
                                        break;
                                    iVar1 = iVar1 + 1;
                                } while (uVar4 != 18446744073709551615);
                            }
                            this_00 = local_48;
                            if (bVar10) {
                                lVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                lVar6 = local_40;
                                local_50 = (char*)(lVar7 + local_40 + uVar4);
                                lVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                lVar8 =
                                    eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true,
                                                                                            eastl::allocator>>::size();
                                lVar9 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                this_00 = local_48;
                                eastl::transform<char*, char*, char (*)(char)>(local_50, (char*)(lVar7 + lVar6 + lVar8),
                                                                               (char*)(lVar9 + lVar6 + uVar4),
                                                                               HideCommandParamChar);
                            }
                        }
                        lVar6 = eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                        local_40 = local_40 + lVar6 + 1;
                        eastl::string::~basic_string(local_98);
                        this_01 = this_01 + 296;
                    } while (this_01 != local_58);
                }
                eastl::vector<eastl::fixed_string<char, 256, true, eastl::allocator>, eastl::allocator>::~vector(
                    local_78);
            }
        }
        return local_38;
    }

    // 0x100c7d410, 32 bytes, placed by class name and debug map
    // HideCommandParamChar(char)
    undefined4 HideCommandParamChar(char param_1) {
        undefined4 uVar1;
        undefined3 in_register_00000039;

        uVar1 = 42;
        if (param_1 == '\t') {
            uVar1 = CONCAT31(in_register_00000039, param_1);
        }
        if (param_1 == ' ') {
            uVar1 = CONCAT31(in_register_00000039, param_1);
        }
        return uVar1;
    }

    // 0x100c7d440, 624 bytes, placed by class name and debug map
    // Console::ColouriseCommandAndHelp(eastl::string&, eastl::string&)
    /* WARNING: Removing unreachable block (ram,4308063575) */
    /* Console::ColouriseCommandAndHelp(eastl::string&,
   eastl::string&) */

    void Console::ColouriseCommandAndHelp(basic_string* param_1, basic_string* param_2) {
        ulong uVar1;
        long lVar2;
        long lVar3;
        long lVar4;
        undefined8 uVar5;
        ulong uVar6;
        char* pcVar7;
        fixed_string<char, 256, true, eastl::allocator> local_3b0[296];
        fixed_string<char, 256, true, eastl::allocator> local_288[296];
        fixed_string<char, 256, true, eastl::allocator> local_160[296];
        undefined8 local_38;

        local_38 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 256, true, eastl::allocator>::fixed_string(local_160);
        uVar6 = 0;
        do {
            uVar1 = param_1->find("<lt>", uVar6);
            if (uVar1 != 18446744073709551615) {
                lVar2 = param_1->find("<gt>", uVar1);
                if (lVar2 != -1) {
                    lVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    lVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    eastl::fixed_string<char, 256, true, eastl::allocator>::fixed_string(
                        local_288, (char*)(lVar3 + uVar1), (char*)(lVar4 + lVar2 + 4));
                    eastl::fixed_string<char, 256, true, eastl::allocator>::fixed_string(local_3b0);
                    uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::
                        sprintf((char*)local_3b0, "<col=%06x>%s%s", 16777120, uVar5, "</col>");
                    eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                    eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                    uVar6 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                    pcVar7 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    param_1->replace(uVar1, uVar6, pcVar7);
                    pcVar7 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    uVar6 = param_2->find(pcVar7, 0);
                    if (uVar6 != 18446744073709551615) {
                        uVar1 = eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                        pcVar7 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        param_2->replace(uVar6, uVar1, pcVar7);
                    }
                    /* WARNING: Subroutine does not return */
                    local_3b0->~fixed_string();
                }
                uVar6 = uVar1 + 4;
            }
        } while (uVar1 != 18446744073709551615);
        /* WARNING: Subroutine does not return */
        local_160->~fixed_string();
    }

    // 0x100c7d6b0, 384 bytes, placed by class name and debug map
    // Console::IsProtectedCommand(StringView) const
    ulong Console::IsProtectedCommand(StringView param_1) {
        fixed_string* pfVar1;
        long lVar2;
        long lVar3;
        uchar* extraout_RDX;
        byte bVar4;
        StringView* this_00;
        undefined1* this_01;
        StringView SVar5;
        StringView local_a8;
        StringView local_98;
        StringView local_88[2];
        vector<eastl::string, eastl::allocator> local_68[32];
        fixed_string* local_48;
        undefined1* local_40;
        bool local_31;

        this_00 = (StringView*)param_1.field_0;
        eastl::vector<eastl::string, eastl::allocator>::vector(local_68);
        tokenize<eastl::vector<eastl::string, eastl::allocator>, StringView>((vector*)local_68, this_00, ";", -1);
        pfVar1 = (fixed_string*)local_68->HeapBeginPtr();
        local_48 = (fixed_string*)local_68->end();
        local_31 = pfVar1 == local_48;
        if (!local_31) {
            this_01 = &field_8;
            this_00 = local_88;
            local_40 = this_01;
            do {
                StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_a8, pfVar1);
                StringView::StringView<3ul>(&local_98, " \t");
                SVar5.field_8 = extraout_RDX;
                SVar5.field_0 = (ulong)&local_98;
                lVar2 = local_a8.find_first_of(SVar5);
                if (lVar2 != -1) {
                    this_00->substr((ulong)&local_a8, 0);
                    StringView::operator=(&local_a8, this_00);
                }
                StringView::to_owned_string<eastl::string>(this_00);
                lVar2 = this_01->find(this_00);
                lVar3 = this_01->end();
                if ((lVar2 != lVar3) && (-1 < *(int*)(lVar2 + 80))) {
                    local_88->~basic_string();
                    break;
                }
                this_00->~basic_string();
                pfVar1 = pfVar1 + 32;
                local_31 = pfVar1 == local_48;
            } while (!local_31);
        }
        bVar4 = ~local_31;
        eastl::vector<eastl::string, eastl::allocator>::~vector(local_68);
        return CONCAT71((int7)((ulong)this_00 >> 8), bVar4) & 4294967041;
    }

    // 0x100c7da10, 496 bytes, placed by class name and debug map
    // Console::GetPreviousCommandFromHistory(StringView)
    StringView* Console::GetPreviousCommandFromHistory(StringView param_1) {
        undefined1* this;
        undefined1* this_00;
        char cVar1;
        int iVar2;
        int iVar3;
        int* piVar4;
        fixed_string* pfVar5;
        StringView* in_RDX;
        uchar* extraout_RDX;
        Console* this_01;
        StringView* this_02;
        int iVar6;
        StringView SVar7;
        StringView local_60;
        StringView* local_50;
        Console* local_48;
        int local_40;
        undefined1 local_3c;
        int local_34;

        this_01 = (Console*)param_1.field_8;
        this_02 = (StringView*)param_1.field_0;
        this = this_01->field_104;
        cVar1 = empty();
        if (cVar1 == '\0') {
            cVar1 = in_RDX->empty();
            if (cVar1 != '\0') {
                this_00 = &this_01->field_172;
                cVar1 = this_00->has_value();
                if (cVar1 == '\0') {
                    local_34 = GetAuthWrapper();
                    local_34 = local_34 + -1;
                    std::optional<int>::optional<int, 0>(&local_40);
                    this_01->field_176 = local_3c;
                    *(int*)this_00 = local_40;
                } else {
                    piVar4 = (int*)this_00->value();
                    local_34 = *piVar4 + -1;
                    if (*piVar4 == 0) {
                        ResetCommandHistoryCursor(this_01);
                        StringView::StringView<1ul>(this_02, "");
                        return this_02;
                    }
                    std::optional<int>::optional<int&, 0>(&local_40);
                    this_01->field_176 = local_3c;
                    *(int*)this_00 = local_40;
                }
                piVar4 = (int*)this_00->value();
                pfVar5 = (fixed_string*)eastl::ring_buffer<
                    eastl::string, eastl::vector<eastl::string, eastl::allocator>, eastl::allocator>::
                operator[](
                    (ring_buffer<eastl::string, eastl::vector<eastl::string, eastl::allocator>, eastl::allocator>*)this,
                    (long)*piVar4);
                StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(this_02, pfVar5);
                return this_02;
            }
            local_50 = in_RDX;
            local_48 = this_01;
            iVar2 = GetAuthWrapper();
            if (1 < iVar2) {
                local_48 = (Console*)&local_48->field_172;
                iVar2 = 1;
                iVar6 = -1;
                do {
                    local_40 = 0;
                    local_34 = std::optional<int>::value_or<int>((optional<int>*)local_48, &local_40);
                    local_34 = local_34 + iVar6;
                    if (local_34 < 0) {
                        iVar3 = GetAuthWrapper();
                        local_34 = local_34 + iVar3;
                    }
                    pfVar5 =
                        (fixed_string*)eastl::ring_buffer<eastl::string, eastl::vector<eastl::string, eastl::allocator>,
                                                          eastl::allocator>::
                        operator[]((ring_buffer<eastl::string, eastl::vector<eastl::string, eastl::allocator>,
                                                eastl::allocator>*)this,
                                   (long)local_34);
                    StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(this_02, pfVar5);
                    new (&local_60) StringView(local_50);
                    SVar7.field_8 = extraout_RDX;
                    SVar7.field_0 = (ulong)&local_60;
                    cVar1 = this_02->starts_with(SVar7);
                    if (cVar1 != '\0') {
                        std::optional<int>::optional<int&, 0>(&local_40);
                        *(undefined1*)((long)&local_48->field_0 + 4) = local_3c;
                        *(int*)&local_48->field_0 = local_40;
                        return this_02;
                    }
                    iVar2 = iVar2 + 1;
                    iVar3 = GetAuthWrapper();
                    iVar6 = iVar6 + -1;
                } while (iVar2 < iVar3);
            }
            in_RDX = local_50;
        }
        StringView::StringView(this_02, in_RDX);
        return this_02;
    }

    // 0x100c7dca0, 528 bytes, placed by class name and debug map
    // Console::GetNextCommandFromHistory(StringView)
    StringView* Console::GetNextCommandFromHistory(StringView param_1) {
        undefined1* this;
        undefined1* this_00;
        optional<int>* this_01;
        char cVar1;
        int iVar2;
        int iVar3;
        int* piVar5;
        fixed_string* pfVar6;
        StringView* in_RDX;
        uchar* extraout_RDX;
        Console* this_02;
        StringView* this_03;
        StringView SVar7;
        StringView local_60;
        optional<int>* local_50;
        StringView* local_48;
        int local_40;
        optional<int> local_3c;
        int local_34;

        this_02 = (Console*)param_1.field_8;
        this_03 = (StringView*)param_1.field_0;
        this = this_02->field_104;
        cVar1 = empty();
        if (cVar1 == '\0') {
            cVar1 = in_RDX->empty();
            if (cVar1 != '\0') {
                this_00 = &this_02->field_172;
                cVar1 = this_00->has_value();
                if (cVar1 == '\0') {
                    local_34 = 0;
                    std::optional<int>::optional<int, 0>(&local_40);
                    this_02->field_176 = local_3c;
                    *(int*)this_00 = local_40;
                } else {
                    local_48 = this_03;
                    piVar5 = (int*)this_00->value();
                    iVar3 = *piVar5;
                    local_34 = iVar3 + 1;
                    iVar2 = GetAuthWrapper();
                    if (iVar3 + 1 == iVar2) {
                        ResetCommandHistoryCursor(this_02);
                        StringView::StringView<1ul>(local_48, "");
                        return local_48;
                    }
                    std::optional<int>::optional<int&, 0>(&local_40);
                    this_02->field_176 = local_3c;
                    *(int*)this_00 = local_40;
                    this_03 = local_48;
                }
                piVar5 = (int*)this_00->value();
                pfVar6 = (fixed_string*)eastl::ring_buffer<
                    eastl::string, eastl::vector<eastl::string, eastl::allocator>, eastl::allocator>::
                operator[](
                    (ring_buffer<eastl::string, eastl::vector<eastl::string, eastl::allocator>, eastl::allocator>*)this,
                    (long)*piVar5);
                StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(this_03, pfVar6);
                return this_03;
            }
            iVar3 = GetAuthWrapper();
            if (1 < iVar3) {
                local_50 = (optional<int>*)&this_02->field_172;
                iVar3 = 1;
                local_48 = in_RDX;
                do {
                    this_01 = local_50;
                    local_40 = GetAuthWrapper();
                    local_40 = local_40 + -1;
                    iVar2 = std::optional<int>::value_or<int>(this_01, &local_40);
                    local_34 = iVar2 + iVar3;
                    if (GetAuthWrapper() <= iVar2 + iVar3) {
                        iVar2 = GetAuthWrapper();
                        local_34 = local_34 - iVar2;
                    }
                    pfVar6 =
                        (fixed_string*)eastl::ring_buffer<eastl::string, eastl::vector<eastl::string, eastl::allocator>,
                                                          eastl::allocator>::
                        operator[]((ring_buffer<eastl::string, eastl::vector<eastl::string, eastl::allocator>,
                                                eastl::allocator>*)this,
                                   (long)local_34);
                    StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(this_03, pfVar6);
                    in_RDX = local_48;
                    new (&local_60) StringView(local_48);
                    SVar7.field_8 = extraout_RDX;
                    SVar7.field_0 = (ulong)&local_60;
                    cVar1 = this_03->starts_with(SVar7);
                    if (cVar1 != '\0') {
                        std::optional<int>::optional<int&, 0>(&local_40);
                        local_50[4] = local_3c;
                        *(int*)local_50 = local_40;
                        return this_03;
                    }
                    iVar3 = iVar3 + 1;
                    iVar2 = GetAuthWrapper();
                } while (iVar3 < iVar2);
            }
        }
        StringView::StringView(this_03, in_RDX);
        return this_03;
    }

    // 0x100c7deb0, 112 bytes, placed by class name and debug map
    // Console::StripVariablePromptParts(eastl::string&)
    void Console::StripVariablePromptParts(basic_string* param_1) {
        long lVar1;
        basic_string local_38[32];

        lVar1 = param_1->find('<', 0);
        if (lVar1 != -1) {
            eastl::string::substr((ulong)local_38, (ulong)param_1);
            eastl::string::operator=((eastl::string*)param_1, local_38);
            local_38->~basic_string();
            param_1->trim();
        }
    }

    // 0x100c7df20, 384 bytes, placed by class name and debug map
    // Console::SplitArguments(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator>&, StringView) const
    void Console::SplitArguments(fixed_vector* param_1, StringView param_2) {
        char cVar1;
        int iVar2;
        byte* pbVar3;
        char* pcVar4;
        ulong uVar5;
        long lVar6;
        uchar* puVar7;
        StringView* this_00;
        uchar* extraout_RDX;
        StringView SVar8;
        StringView SVar9;
        StringView local_70;
        StringView local_60;
        StringView local_50;
        ulong local_40;
        char local_31;

        puVar7 = param_2.field_8;
        this_00 = (StringView*)param_2.field_0;
        cVar1 = this_00->empty();
        if (cVar1 == '\0') {
            do {
                pbVar3 = (byte*)WrapArray<char const>::operator[]((WrapArray<char const>*)this_00, 0);
                iVar2 = isspace((uint)*pbVar3);
                if (iVar2 == 0) {
                    pcVar4 = (char*)WrapArray<char const>::operator[]((WrapArray<char const>*)this_00, 0);
                    local_31 = *pcVar4;
                    if ((local_31 == '\'') || (local_31 == '\"')) {
                        new (&local_70) StringView(&local_31);
                        SVar8.field_8 = &DAT_00000001;
                        SVar8.field_0 = (ulong)&local_70;
                        uVar5 = this_00->find_first_of(SVar8, (ulong)puVar7);
                        if (uVar5 == 18446744073709551615)
                            goto LAB_100c7e088;
                        lVar6 = this_00->end();
                        local_50.field_0 = lVar6 + 1;
                        local_40 = uVar5 - 1;
                        eastl::vector<StringView,
                                      eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                            emplace_back<char const*, unsigned long&>(
                                (vector<StringView,
                                        eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                                    param_1,
                                (char**)&local_50, &local_40);
                    LAB_100c7e061:
                        local_50.substr((ulong)this_00);
                        StringView::operator=(this_00, &local_50);
                        iVar2 = 0;
                    } else {
                        StringView::StringView<3ul>(&local_60, " \t");
                        SVar9.field_8 = extraout_RDX;
                        SVar9.field_0 = (ulong)&local_60;
                        uVar5 = this_00->find_first_of(SVar9);
                        local_40 = uVar5;
                        if (uVar5 != 18446744073709551615) {
                            local_50.field_0 = this_00->end();
                            eastl::vector<StringView,
                                          eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                                emplace_back<char const*, unsigned long&>(
                                    (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true,
                                                                                      eastl::allocator>>*)param_1,
                                    (char**)&local_50, &local_40);
                            goto LAB_100c7e061;
                        }
                    LAB_100c7e088:
                        eastl::fixed_vector<StringView, 4ul, true, eastl::allocator>::push_back((StringView*)param_1);
                        iVar2 = 3;
                    }
                    if (uVar5 != 18446744073709551615) {
                        iVar2 = 0;
                    }
                    if (iVar2 != 0) {
                        return;
                    }
                } else {
                    local_50.substr((ulong)this_00);
                    StringView::operator=(this_00, &local_50);
                }
                cVar1 = this_00->empty();
            } while (cVar1 == '\0');
        }
    }

    // 0x100c7e260, 992 bytes, placed by class name and debug map
    // Console::ReportArgDecodingErrors(char const*, WrapArray<ArgDecodingError>)
    void Console::ReportArgDecodingErrors(char* param_1,
                                          vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* param_3) {
        CommandData* this_00;
        int iVar1;
        uint uVar2;
        ShuffledPacketFactory* pSVar3;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;
        char cVar4;
        int iVar5;
        undefined4 uVar6;
        fixed_string* pfVar7;
        fixed_string* pfVar8;
        uchar* puVar9;
        uchar* puVar10;
        undefined8* puVar11;
        undefined8 uVar12;
        undefined8 uVar13;
        ulong uVar14;
        undefined8 uVar15;
        ulong uVar16;
        ShuffledPacketFactory* this_02;
        StringView SVar17;
        undefined8 in_stack_fffffffffffffd48;
        undefined4 uVar18;
        allocator local_2a8[8];
        StringView local_2a0;
        uchar* local_290;
        ulong local_288;
        fixed_string* local_270;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_268;
        eastl::string local_260[552];
        undefined8 local_38;

        local_38 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        local_268 = param_3;
        eastl::allocator::allocator(local_2a8, "EASTL basic_string");
        eastl::string::basic_string(local_260, param_1, local_2a8);
        pfVar7 = (fixed_string*)(&field_8, (basic_string*)local_260)->find();
        eastl::string::~basic_string(local_260);
        pfVar8 = (fixed_string*)(&field_8)->end();
        local_270 = pfVar7;
        if (pfVar7 == pfVar8) {
            /* WARNING: Subroutine does not return */
            LogAssert("commandIt != m_commands.end()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.cpp", 734,
                      (char*)0);
        }
        new (local_260) eastl::fixed_string<char, 512, true, eastl::allocator>();
        this_01 = local_268;
        puVar9 = (uchar*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(local_268);
        puVar10 = (uchar*)this_01->end();
        if (puVar9 != puVar10) {
            local_268 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(local_270 + 192);
            this_02 = (ShuffledPacketFactory*)(puVar9 + 16);
            local_290 = puVar10;
            do {
                iVar1 = *(int*)&this_02[1].field_0;
                iVar5 = local_268->size();
                cVar4 = this_02->empty();
                uVar18 = (undefined4)((ulong)in_stack_fffffffffffffd48 >> 32);
                uVar2 = *(uint*)&this_02[1].field_0;
                uVar16 = (ulong)(int)uVar2;
                if (iVar1 < iVar5) {
                    if (cVar4 == '\0') {
                        local_288 = uVar16;
                        puVar11 = (undefined8*)eastl::vector<
                            char const*, eastl::fixed_vector_allocator<8ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                        operator[]((vector<char const*,
                                           eastl::fixed_vector_allocator<8ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                                       local_268,
                                   uVar16);
                        uVar15 = *puVar11;
                        uVar16 = ShuffledPacketFactory::p2_alt2(this_02 + -1);
                        uVar12 = ((this_02 + -1))->end();
                        uVar6 = ShuffledPacketFactory::p2_alt2(this_02);
                        uVar13 = this_02->end();
                        in_stack_fffffffffffffd48 = CONCAT44(uVar18, uVar6);
                        eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                            append_sprintf(
                                (char*)local_260,
                                "<br><col=CCCCCCFF>- arg %d (%s): </col>expected \'%.*s\' but received \'%.*s\'",
                                local_288, uVar15, uVar16 & 4294967295, uVar12, in_stack_fffffffffffffd48, uVar13);
                    } else {
                        puVar11 = (undefined8*)eastl::vector<
                            char const*, eastl::fixed_vector_allocator<8ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                        operator[]((vector<char const*,
                                           eastl::fixed_vector_allocator<8ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                                       local_268,
                                   uVar16);
                        uVar15 = *puVar11;
                        uVar16 = ShuffledPacketFactory::p2_alt2(this_02 + -1);
                        uVar12 = ((this_02 + -1))->end();
                        eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                            append_sprintf((char*)local_260, "<br><col=CCCCCCFF>- arg %d (%s): </col>%.*s",
                                           (ulong)uVar2, uVar15, uVar16 & 4294967295, uVar12);
                    }
                } else {
                    pSVar3 = this_02 + -1;
                    if (cVar4 == '\0') {
                        uVar16 = ShuffledPacketFactory::p2_alt2(pSVar3);
                        uVar15 = pSVar3->end();
                        uVar14 = ShuffledPacketFactory::p2_alt2(this_02);
                        in_stack_fffffffffffffd48 = this_02->end();
                        eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                            append_sprintf((char*)local_260,
                                           "<br><col=CCCCCCFF>- arg %d: </col>expected \'%.*s\' but received \'%.*s\'",
                                           (ulong)uVar2, uVar16 & 4294967295, uVar15, uVar14 & 4294967295,
                                           in_stack_fffffffffffffd48);
                    } else {
                        uVar16 = ShuffledPacketFactory::p2_alt2(pSVar3);
                        uVar15 = pSVar3->end();
                        eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                            append_sprintf((char*)local_260, "<br><col=CCCCCCFF>- arg %d: </col>%.*s", (ulong)uVar2,
                                           uVar16 & 4294967295, uVar15);
                    }
                }
                pSVar3 = this_02 + 1;
                puVar10 = local_290;
                this_02 = (ShuffledPacketFactory*)&this_02[2].field_8;
            } while ((uchar*)&pSVar3->field_8 != local_290);
        }
        pfVar7 = local_270;
        this_00 = (CommandData*)(local_270 + 32);
        cVar4 = this_00->HasUsageInstructions();
        if (cVar4 != '\0') {
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                append_sprintf((char*)local_260, "<br><col=CCCCCCFF>- usage: <col=CCCCCCFF>\'<col=33CC55FF>");
            StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_2a0, pfVar7);
            SVar17.field_8 = puVar10;
            SVar17.field_0 = (ulong)&local_2a0;
            this_00->AppendUsage(local_260, SVar17);
            local_260->append("<col=CCCCCCFF>\' </col>");
            this_00->AppendExample(local_260);
        }
        uVar15 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::begin();
        AddMessage((Console*)this, 6, "Could not execute \'%s\':%s", param_1, uVar15);
        /* WARNING: Subroutine does not return */
        local_260->~fixed_string();
    }

    // 0x100c7e730, 1040 bytes, placed by class name and debug map
    // Console::RunScript(StringView, bool)
    void Console::RunScript(StringView param_1, bool param_2) {
        char cVar1;
        uint uVar2;
        char* pcVar4;
        ulong uVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        uchar* puVar8;
        ShuffledPacketFactory* this_00;
        eastl::string local_e60[32];
        allocator local_e40[8];
        Callstack local_e38[55];
        File local_ac8[87];
        ClientCompositeZone local_2a0[13];
        Filename local_168[19];
        long local_38;

        this_00 = (ShuffledPacketFactory*)param_1.field_0;
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pcVar4 = (char*)this_00->end();
        uVar5 = ShuffledPacketFactory::p2_alt2(this_00);
        Filename::Filename(local_168, pcVar4, uVar5);
        callstack::Callstack::Callstack(local_e38);
        new (local_2a0) File(local_168, local_e38);
        cVar1 = local_2a0->IsValid();
        if (cVar1 == '\0') {
            cVar1 = eastl::basic_string<
                char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
            if (cVar1 == '\0') {
                new (local_ac8) Filename((basic_string*)&field_328);
                Filename::operator=(local_168, (Filename*)local_ac8);
                local_ac8->~pair();
                pcVar4 = (char*)this_00->end();
                uVar5 = ShuffledPacketFactory::p2_alt2(this_00);
                new (local_ac8) Filename(pcVar4, uVar5);
                Filename::operator/=(local_168, (Filename*)local_ac8);
                local_ac8->~pair();
                File::File(local_ac8, local_168, (Error*)local_e38);
                File::operator=((File*)local_2a0, local_ac8);
                local_ac8->~File();
            }
        } else {
            local_ac8->GetParentPath();
            pcVar4 = (char*)local_ac8->GetName();
            (&field_328, pcVar4)->assign();
            local_ac8->~pair();
        }
        cVar1 = local_e38->IsValid();
        if (cVar1 != '\0') {
            new (local_ac8) eastl::fixed_string<char, 256, true, eastl::allocator>();
            uVar6 = ShuffledPacketFactory::p2_alt2(this_00);
            uVar7 = this_00->end();
            pcVar4 = Error::GetErrorString<eastl::fixed_string<char, 256, true, eastl::allocator>>(
                (Error*)local_e38, (fixed_string*)local_ac8);
            AddMessage(this, 4, "Error reading %.*s: %s", uVar6, uVar7, pcVar4);
            /* WARNING: Subroutine does not return */
            local_ac8->~fixed_string();
        }
        uVar2 = local_2a0->length(local_e38);
        if (uVar2 - 1 < 1048576) {
            cVar1 = local_e38->IsValid();
            if (cVar1 == '\0') {
                new (local_ac8) eastl::fixed_string<char, 2048, true, eastl::allocator>();
                local_ac8->resize((ulong)uVar2);
                puVar8 = (uchar*)eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 2048ul, 1ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (basic_string<char, eastl::fixed_vector_allocator<1ul, 2048ul, 1ul, 0ul, true, eastl::allocator>>*)
                        local_ac8,
                    0);
                if (local_2a0->read(puVar8, uVar2, 0, local_e38) == uVar2) {
                    new (&local_e38[0].field_8)
                        eastl::fixed_vector<eastl::fixed_string<char, 64, true, eastl::allocator>, 8ul, true,
                                            eastl::allocator>();
                    tokenize<eastl::fixed_vector<eastl::fixed_string<char, 64, true, eastl::allocator>, 8ul, true,
                                                 eastl::allocator>,
                             eastl::fixed_string<char, 2048, true, eastl::allocator>>(
                        (fixed_vector*)&local_e38[0].field_8, (fixed_string*)local_ac8, "\r\n", -1);
                    pcVar4 = (char*)local_168->GetName();
                    eastl::allocator::allocator(local_e40, "EASTL basic_string");
                    eastl::string::basic_string(local_e60, pcVar4, local_e40);
                    RunScriptFromSource(this, (fixed_vector*)&local_e38[0].field_8, (basic_string*)local_e60,
                                        param_1.field_8._0_1_);
                    eastl::string::~basic_string(local_e60);
                    local_e38[0].field_8.~fixed_vector();
                }
                /* WARNING: Subroutine does not return */
                local_ac8->~fixed_string();
            }
        }
        local_2a0->~File();
        local_168->~pair();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100c7eb50, 384 bytes, placed by class name and debug map
    // Console::RunScriptFromSource(eastl::fixed_vector<eastl::fixed_string<char, 64, true, eastl::allocator>, 8ul, true, eastl::allocator> const&, eastl::string const&, bool)
    void Console::RunScriptFromSource(fixed_vector* param_1, basic_string* param_2, bool param_3) {
        eastl::string* this_00;
        char* pcVar1;
        char* pcVar2;
        bool bVar3;
        char cVar4;
        long lVar5;
        undefined7 in_register_00000009;
        long lVar6;
        int iVar7;
        reverse_iterator local_50[8];
        reverse_iterator local_48[8];
        Console* local_38;

        local_38 = this;
        if ((int)CONCAT71(in_register_00000009, param_3) == 0) {
            lVar6 = param_1->HeapBeginPtr();
            lVar5 = param_1->end();
            if (lVar6 != lVar5) {
                iVar7 = 0;
                do {
                    cVar4 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
                    if (cVar4 == '\0') {
                        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        iVar7 = iVar7 + 1;
                        QueueCommandNoHistory(local_38, pcVar1, pcVar2, iVar7);
                    }
                    lVar6 = lVar6 + 104;
                } while (lVar6 != lVar5);
            }
        } else {
            iVar7 = param_1->size();
            eastl::vector<unsigned long,
                          eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::rbegin();
            eastl::vector<ObjStackEntry, eastl::allocator>::rend();
            bVar3 = eastl::operator!=(local_50, local_48);
            if (bVar3) {
                local_38 = (Console*)&local_38->field_288;
                do {
                    eastl::reverse_iterator<eastl::fixed_string<char, 64, true, eastl::allocator> const*>::operator->(
                        (reverse_iterator<eastl::fixed_string<char, 64, true, eastl::allocator> const*>*)local_50);
                    cVar4 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
                    if (cVar4 == '\0') {
                        this_00 = (eastl::string*)local_38->push_front();
                        eastl::reverse_iterator<eastl::fixed_string<char, 64, true, eastl::allocator> const*>::
                        operator->(
                            (reverse_iterator<eastl::fixed_string<char, 64, true, eastl::allocator> const*>*)local_50);
                        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        eastl::string::assign(this_00, pcVar1);
                        eastl::string::trim(this_00);
                        eastl::string::operator=(this_00 + 32, param_2);
                        *(int*)(this_00 + 64) = iVar7;
                        iVar7 = iVar7 + -1;
                        this_00[68] = (eastl::string)0;
                    }
                    eastl::reverse_iterator<eastl::fixed_string<char, 64, true, eastl::allocator> const*>::operator++(
                        (reverse_iterator<eastl::fixed_string<char, 64, true, eastl::allocator> const*>*)local_50);
                    eastl::vector<ObjStackEntry, eastl::allocator>::rend();
                    bVar3 = eastl::operator!=(local_50, local_48);
                } while (bVar3);
            }
        }
    }

    // 0x100c7ed40, 80 bytes, placed by class name and debug map
    // Console::RunTestScript(eastl::fixed_vector<eastl::fixed_string<char, 64, true, eastl::allocator>, 8ul, true, eastl::allocator> const&, eastl::string const&)
    void Console::RunTestScript(fixed_vector* param_1, basic_string* param_2) {
        int iVar1;

        iVar1 = param_1->size();
        field_164 = iVar1;
        field_161 = '\x01';
        RunScriptFromSource(this, param_1, param_2, false);
    }

    // 0x100c7ed90, 144 bytes, placed by class name and debug map
    // Console::SetMessageHistoryOutputFile(Filename const&)
    undefined8 Console::SetMessageHistoryOutputFile(Filename* param_1) {
        bool bVar1;
        File* this_00;
        ClientCompositeZone* this_01;
        undefined8 uVar2;
        undefined1* this_02;
        undefined1 local_28[8];

        this_02 = &field_184;
        bVar1 = this_02->operator_cast_to_bool();
        if (bVar1) {
            this_00 = (File*)std::unique_ptr<File, std::default_delete<File>>::operator->(
                (unique_ptr<File, std::default_delete<File>>*)this_02);
            this_00->close(0);
        }
        std::make_unique<File, Filename_const&, int const&>((Filename*)local_28, (int*)param_1);
        std::unique_ptr<File, std::default_delete<File>>::operator=(
            (unique_ptr<File, std::default_delete<File>>*)this_02, (unique_ptr*)local_28);
        local_28->~unique_ptr();
        bVar1 = this_02->operator_cast_to_bool();
        if (bVar1) {
            this_01 = (ClientCompositeZone*)std::unique_ptr<File, std::default_delete<File>>::operator->(
                (unique_ptr<File, std::default_delete<File>>*)this_02);
            uVar2 = this_01->IsValid();
        } else {
            uVar2 = 0;
        }
        return uVar2;
    }

    // 0x100c8e040, 64 bytes, placed by class name
    // Console::RegisterCoreCommands()::$_1::operator()(StringView) const
    /* Console::RegisterCoreCommands()::$_1::TEMPNAMEPLACEHOLDERVALUE(StringView)
   const */

    void Console::RegisterCoreCommands()::$_1::operator()(StringView param_1) {
        Console* this_00;
        undefined1 in_CL;
        StringView SVar1;
        StringView local_28;

        this_00 = *(Console**)this;
        new (&local_28) StringView(param_1.field_0);
        SVar1.field_8 = &DAT_00000001;
        SVar1.field_0 = (ulong)&local_28;
        RunScript(this_00, SVar1, (bool)in_CL);
    }

    // 0x100c8eb90, 16 bytes, placed by class name
    // Console::RegisterCoreCommands()::$_3::operator()() const
    /* Console::RegisterCoreCommands()::$_3::TEMPNAMEPLACEHOLDERVALUE() const */

    void Console::RegisterCoreCommands()::$_3::operator()() {
        ClearMessageHistory(*(Console**)this);
    }

    // 0x100c8f710, 16 bytes, placed by class name
    // Console::RegisterCoreCommands()::$_4::operator()() const
    /* Console::RegisterCoreCommands()::$_4::TEMPNAMEPLACEHOLDERVALUE() const */

    void Console::RegisterCoreCommands()::$_4::operator()() {
        ClearMessageHistory(*(Console**)this);
    }

    // 0x100c90200, 16 bytes, placed by class name
    // Console::RegisterCoreCommands()::$_5::operator()() const
    /* Console::RegisterCoreCommands()::$_5::TEMPNAMEPLACEHOLDERVALUE() const */

    void Console::RegisterCoreCommands()::$_5::operator()() {
        ReportStoredVariables(*(Console**)this);
    }

    // 0x100c90cf0, 16 bytes, placed by class name
    // Console::RegisterCoreCommands()::$_6::operator()() const
    /* Console::RegisterCoreCommands()::$_6::TEMPNAMEPLACEHOLDERVALUE() const */

    void Console::RegisterCoreCommands()::$_6::operator()() {
        ClearStoredVariables(*(Console**)this);
    }

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    Console::HistoryListener::~HistoryListener();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    Console::HistoryListener::~HistoryListener();

} // namespace jag::console

namespace jag {
    // 0x100c7c480, 64 bytes, inline, placed by debug map only (low confidence)
    // bool FromString<StringView, float>(StringView const&, float&, int)
    bool FromString<StringView, float>(StringView* param_1, float* param_2, int param_3) {
        int in_ECX;
        StringView SVar2;
        StringView local_30;

        new (&local_30) StringView(param_1);
        SVar2.field_8 = (uchar*)param_2;
        SVar2.field_0 = (ulong)&local_30;
        return (bool)FromText(SVar2, (float*)(ulong)(uint)param_3, in_ECX);
    }

    // 0x100c7cea0, 336 bytes, inline, placed by debug map only (low confidence)
    // unsigned long GetStringsMinimumCommonLength<eastl::vector<StringView, eastl::allocator> >(eastl::vector<StringView, eastl::allocator> const&, unsigned long)
    /* WARNING: Removing unreachable block (ram,4308062053) */
    /* WARNING: Removing unreachable block (ram,4308062179) */
    /* WARNING: Removing unreachable block (ram,4308062104) */
    /* unsigned long GetStringsMinimumCommonLength<eastl::vector<StringView, eastl::allocator>
   >(eastl::vector<StringView, eastl::allocator> const&, unsigned long) */

    ulong GetStringsMinimumCommonLength<eastl::vector<StringView, eastl::allocator>>(vector* param_1, ulong param_2) {
        char cVar1;
        int iVar2;
        Layout* this;
        Layout* pLVar3;
        char* pcVar4;
        ulong uVar5;
        bool bVar6;
        ulong local_38;

        cVar1 = param_1->empty();
        if ((cVar1 == '\0') && (param_2 != 0)) {
            uVar5 = 0;
            do {
                this = (Layout*)param_1->HeapBeginPtr();
                pLVar3 = (Layout*)param_1->end();
                if (this != pLVar3) {
                    cVar1 = '\0';
                    bVar6 = false;
                    do {
                        if ((cVar1 == '\0') &&
                            (iVar2 = eastl::basic_string<
                                 char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                     eastl::allocator>>::Layout::HeapBeginPtr(this),
                             uVar5 < (ulong)(long)iVar2)) {
                            pcVar4 = (char*)WrapArray<char const>::operator[]((WrapArray<char const>*)this, uVar5);
                            cVar1 = *pcVar4;
                        } else {
                            iVar2 = eastl::basic_string<
                                char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(this);
                            if (((ulong)(long)iVar2 <= uVar5) ||
                                (pcVar4 = (char*)WrapArray<char const>::operator[]((WrapArray<char const>*)this, uVar5),
                                 *pcVar4 != cVar1)) {
                                iVar2 = 1;
                                local_38 = uVar5;
                                goto LAB_100c7cfa5;
                            }
                        }
                        this = this + 16;
                        bVar6 = this == pLVar3;
                    } while (!bVar6);
                    iVar2 = 0;
                LAB_100c7cfa5:
                    if (!bVar6)
                        goto LAB_100c7cfc1;
                }
                uVar5 = uVar5 + 1;
            } while (uVar5 != param_2);
            iVar2 = 2;
        LAB_100c7cfc1:
            if (iVar2 != 2) {
                return local_38;
            }
        }
        return 0;
    }

    // 0x100c7d2d0, 320 bytes, inline, placed by debug map only (low confidence)
    // int tokenize<eastl::vector<eastl::fixed_string<char, 256, true, eastl::allocator>, eastl::allocator>, StringView>(eastl::vector<eastl::fixed_string<char, 256, true, eastl::allocator>, eastl::allocator>&, StringView const&, char const*, int)
    int
    jag::tokenize<eastl::vector<eastl::fixed_string<char, 256, true, eastl::allocator>, eastl::allocator>, StringView>(
        vector* param_1, StringView* param_2, char* param_3, int param_4) {
        bool bVar1;
        int iVar2;
        size_t sVar3;
        char* pcVar4;
        char* pcVar5;
        basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>* pbVar6;
        char* pcVar7;
        char* pcVar8;

        if (param_4 == -1) {
            sVar3 = _strlen(param_3);
            param_4 = (int)sVar3;
        }
        param_1->clear();
        param_1->reserve(4);
        pcVar4 = (char*)param_2->end();
        pcVar5 = (char*)param_2->end();
        pcVar8 = pcVar4;
        if (pcVar4 != pcVar5) {
            pcVar7 = pcVar4;
            do {
                pcVar4 = pcVar8;
                bVar1 = internal::find_token<char, char const*>(pcVar4, param_3, param_3 + param_4);
                if (bVar1) {
                    if (pcVar7 != pcVar4) {
                        pbVar6 =
                            (basic_string<char,
                                          eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>*)
                                param_1->push_back();
                        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true,
                                                                                eastl::allocator>>::assign(pbVar6,
                                                                                                           pcVar7,
                                                                                                           pcVar4);
                    }
                    if (pcVar4 == pcVar5) {
                    LAB_100c7d3c0:
                        pcVar8 = pcVar4;
                    } else {
                        do {
                            bVar1 = internal::find_token<char, char const*>(pcVar4, param_3, param_3 + param_4);
                            if (!bVar1)
                                goto LAB_100c7d3c0;
                            pcVar4 = pcVar4 + 1;
                            pcVar8 = pcVar4;
                        } while (pcVar4 != pcVar5);
                    }
                } else {
                    pcVar8 = pcVar4 + 1;
                    pcVar4 = pcVar7;
                }
                pcVar7 = pcVar4;
            } while (pcVar8 != pcVar5);
        }
        if (pcVar4 != pcVar8) {
            pbVar6 = (basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>*)
                         param_1->push_back();
            eastl::basic_string<
                char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::assign(pbVar6,
                                                                                                           pcVar4,
                                                                                                           pcVar8);
        }
        iVar2 = param_1->size();
        return iVar2;
    }

    // 0x100c7d830, 320 bytes, inline, placed by debug map only (low confidence)
    // int tokenize<eastl::vector<eastl::string, eastl::allocator>, StringView>(eastl::vector<eastl::string, eastl::allocator>&, StringView const&, char const*, int)
    int jag::tokenize<eastl::vector<eastl::string, eastl::allocator>, StringView>(vector* param_1, StringView* param_2,
                                                                                  char* param_3, int param_4) {
        bool bVar1;
        int iVar2;
        size_t sVar3;
        char* pcVar4;
        char* pcVar5;
        eastl::string* pbVar6;
        char* pcVar7;
        char* pcVar8;

        if (param_4 == -1) {
            sVar3 = _strlen(param_3);
            param_4 = (int)sVar3;
        }
        param_1->clear();
        param_1->reserve(4);
        pcVar4 = (char*)param_2->end();
        pcVar5 = (char*)param_2->end();
        pcVar8 = pcVar4;
        if (pcVar4 != pcVar5) {
            pcVar7 = pcVar4;
            do {
                pcVar4 = pcVar8;
                bVar1 = internal::find_token<char, char const*>(pcVar4, param_3, param_3 + param_4);
                if (bVar1) {
                    if (pcVar7 != pcVar4) {
                        pbVar6 = (eastl::string*)param_1->push_back();
                        eastl::string::assign(pbVar6, pcVar7, pcVar4);
                    }
                    if (pcVar4 == pcVar5) {
                    LAB_100c7d920:
                        pcVar8 = pcVar4;
                    } else {
                        do {
                            bVar1 = internal::find_token<char, char const*>(pcVar4, param_3, param_3 + param_4);
                            if (!bVar1)
                                goto LAB_100c7d920;
                            pcVar4 = pcVar4 + 1;
                            pcVar8 = pcVar4;
                        } while (pcVar4 != pcVar5);
                    }
                } else {
                    pcVar8 = pcVar4 + 1;
                    pcVar4 = pcVar7;
                }
                pcVar7 = pcVar4;
            } while (pcVar8 != pcVar5);
        }
        if (pcVar4 != pcVar8) {
            pbVar6 = (eastl::string*)param_1->push_back();
            eastl::string::assign(pbVar6, pcVar4, pcVar8);
        }
        iVar2 = param_1->size();
        return iVar2;
    }

} // namespace jag

namespace jag::console::internal {
    // 0x100c8e110, 32 bytes, placed by neighbouring functions
    // eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator> BuildArgInfos<>(std::tuple<>*)
    /* eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>
   BuildArgInfos<>(std::tuple<>*) */

    tuple* BuildArgInfos<>(tuple* param_1) {
        new (param_1) eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>();
        return param_1;
    }

} // namespace jag::console::internal
