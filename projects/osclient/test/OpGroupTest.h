// projects/osclient/test/OpGroupTest.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape {
    class OpGroupTest {
    public:
        void RunTests();
        void TestCreateFromStringMatchesInput();
        void TestMatchPattern();
        OpGroupTest* MakeOpGroupString(minimenu::MinimenuSubjType, eastl::string const&,
                                       std::array<eastl::string, 10ul> const&);
        void AssertOpGroupMatchesData(OpGroup const&, minimenu::MinimenuSubjType, eastl::string const&,
                                      std::array<eastl::string, 10ul> const&);

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x1000ad780, 16 bytes, inline, placed by class name and debug map
    // OpGroupTest::RunTests()
    void OpGroupTest::RunTests() {
        TestCreateFromStringMatchesInput();
        TestMatchPattern();
    }

    // 0x1000ad790, 2320 bytes, inline, placed by class name and debug map
    // OpGroupTest::TestCreateFromStringMatchesInput()
    void OpGroupTest::TestCreateFromStringMatchesInput() {
        OpGroup local_7a8;
        OpGroup local_640;
        eastl::string local_4d8[32];
        eastl::string local_4b8[32];
        eastl::string local_498[32];
        eastl::string local_478[32];
        eastl::string local_458[32];
        eastl::string local_438[32];
        eastl::string local_418[32];
        eastl::string local_3f8[32];
        eastl::string local_3d8[32];
        eastl::string local_3b8[32];
        allocator local_398[32];
        eastl::string local_378[32];
        eastl::string local_358[32];
        eastl::string local_338[32];
        eastl::string local_318[32];
        eastl::string local_2f8[32];
        eastl::string local_2d8[32];
        eastl::string local_2b8[32];
        eastl::string local_298[32];
        eastl::string local_278[32];
        allocator local_258[32];
        eastl::string local_238[32];
        eastl::string local_218[32];
        eastl::string local_1f8[32];
        eastl::string local_1d8[32];
        eastl::string local_1b8[32];
        eastl::string local_198[32];
        eastl::string local_178[32];
        eastl::string local_158[32];
        eastl::string local_138[32];
        eastl::string local_118[32];
        allocator local_f8[32];
        allocator local_d8[32];
        allocator local_b8[32];
        allocator local_98[32];
        allocator local_78[8];
        allocator local_70[8];
        allocator local_68[8];
        allocator local_60[8];
        allocator local_58[8];
        allocator local_50[8];
        allocator local_48[8];
        allocator local_40[8];
        allocator local_38[8];
        allocator local_30[8];
        allocator local_28[8];

        new (&local_7a8) eastl::allocator("EASTL basic_string");
        eastl::string::basic_string(local_118, "Goblin (level-3)", (allocator*)&local_7a8);
        new (&local_7a8) eastl::allocator("EASTL basic_string");
        eastl::string::basic_string(local_4d8, "Attack", (allocator*)&local_7a8);
        new (&local_640) eastl::allocator("EASTL basic_string");
        eastl::string::basic_string(local_4b8, "", (allocator*)&local_640);
        eastl::allocator::allocator(local_398, "EASTL basic_string");
        eastl::string::basic_string(local_498, "", local_398);
        eastl::allocator::allocator(local_258, "EASTL basic_string");
        eastl::string::basic_string(local_478, "", local_258);
        eastl::allocator::allocator(local_f8, "EASTL basic_string");
        eastl::string::basic_string(local_458, "Examine", local_f8);
        eastl::allocator::allocator(local_d8, "EASTL basic_string");
        eastl::string::basic_string(local_438, "", local_d8);
        eastl::allocator::allocator(local_b8, "EASTL basic_string");
        eastl::string::basic_string(local_418, "", local_b8);
        eastl::allocator::allocator(local_98, "EASTL basic_string");
        eastl::string::basic_string(local_3f8, "", local_98);
        eastl::allocator::allocator(local_30, "EASTL basic_string");
        eastl::string::basic_string(local_3d8, "", local_30);
        eastl::allocator::allocator(local_28, "EASTL basic_string");
        eastl::string::basic_string(local_3b8, "", local_28);
        MakeOpGroupString((OpGroupTest*)local_f8, 2, local_118, local_4d8);
        local_7a8.Create(local_f8, false);
        AssertOpGroupMatchesData(&local_7a8, 2, local_118, local_4d8);
        new (&local_640) eastl::allocator("EASTL basic_string");
        new (local_d8) eastl::string("Test*Loc", (allocator*)&local_640);
        new (&local_640) eastl::allocator("EASTL basic_string");
        new (local_398) eastl::string("op#", (allocator*)&local_640);
        eastl::allocator::allocator(local_258, "EASTL basic_string");
        eastl::string::basic_string(local_378, "op*", local_258);
        eastl::allocator::allocator(local_b8, "EASTL basic_string");
        eastl::string::basic_string(local_358, "op%", local_b8);
        eastl::allocator::allocator(local_98, "EASTL basic_string");
        eastl::string::basic_string(local_338, "op3", local_98);
        eastl::allocator::allocator(local_30, "EASTL basic_string");
        eastl::string::basic_string(local_318, "op3", local_30);
        eastl::allocator::allocator(local_28, "EASTL basic_string");
        eastl::string::basic_string(local_2f8, "op3", local_28);
        eastl::allocator::allocator(local_50, "EASTL basic_string");
        eastl::string::basic_string(local_2d8, "op7", local_50);
        eastl::allocator::allocator(local_48, "EASTL basic_string");
        eastl::string::basic_string(local_2b8, "op8", local_48);
        eastl::allocator::allocator(local_40, "EASTL basic_string");
        eastl::string::basic_string(local_298, "op9", local_40);
        eastl::allocator::allocator(local_38, "EASTL basic_string");
        eastl::string::basic_string(local_278, "op10", local_38);
        MakeOpGroupString((OpGroupTest*)local_b8, 3, local_d8, local_398);
        local_640.Create(local_b8, true);
        eastl::allocator::allocator(local_30, "EASTL basic_string");
        new (local_98) eastl::string("Test_Loc", local_30);
        eastl::allocator::allocator(local_28, "EASTL basic_string");
        new (local_258) eastl::string("op_", local_28);
        eastl::allocator::allocator(local_50, "EASTL basic_string");
        eastl::string::basic_string(local_238, "op_", local_50);
        eastl::allocator::allocator(local_48, "EASTL basic_string");
        eastl::string::basic_string(local_218, "op_", local_48);
        eastl::allocator::allocator(local_40, "EASTL basic_string");
        eastl::string::basic_string(local_1f8, "op3", local_40);
        eastl::allocator::allocator(local_38, "EASTL basic_string");
        eastl::string::basic_string(local_1d8, "op3", local_38);
        eastl::allocator::allocator(local_78, "EASTL basic_string");
        eastl::string::basic_string(local_1b8, "op3", local_78);
        eastl::allocator::allocator(local_70, "EASTL basic_string");
        eastl::string::basic_string(local_198, "op7", local_70);
        eastl::allocator::allocator(local_68, "EASTL basic_string");
        eastl::string::basic_string(local_178, "op8", local_68);
        eastl::allocator::allocator(local_60, "EASTL basic_string");
        eastl::string::basic_string(local_158, "op9", local_60);
        eastl::allocator::allocator(local_58, "EASTL basic_string");
        eastl::string::basic_string(local_138, "op10", local_58);
        AssertOpGroupMatchesData(&local_640, 3, local_98, local_258);
        local_258->~array();
        local_98->~basic_string();
        local_640.~OpGroup();
        local_b8->~basic_string();
        local_398->~array();
        local_d8->~basic_string();
        local_7a8.~OpGroup();
        local_f8->~basic_string();
        local_4d8->~array();
        eastl::string::~basic_string(local_118);
    }

    // 0x1000ae0a0, 1728 bytes, inline, placed by class name and debug map
    // OpGroupTest::TestMatchPattern()
    void OpGroupTest::TestMatchPattern() {
        char cVar1;
        eastl::string* pbVar2;
        ulong uVar3;
        undefined1 local_9f8[40];
        array<eastl::string, 10ul> local_9d0[320];
        undefined1 local_890[40];
        array<eastl::string, 10ul> local_868[320];
        undefined1 local_728[40];
        array<eastl::string, 10ul> local_700[320];
        undefined1 local_5c0[40];
        array<eastl::string, 10ul> local_598[320];
        undefined1 local_458[40];
        array<eastl::string, 10ul> local_430[320];
        undefined1 local_2f0[40];
        array<eastl::string, 10ul> local_2c8[320];
        undefined1 local_188[40];
        array<eastl::string, 10ul> local_160[320];

        new (local_188) OpGroup();
        local_188._0_4_ = 2;
        ((local_188 + 8))->assign("Goblin (level-3)");
        pbVar2 = (eastl::string*)std::array<eastl::string, 10ul>::operator[](local_160, 0);
        eastl::string::assign(pbVar2, "Attack");
        pbVar2 = (eastl::string*)std::array<eastl::string, 10ul>::operator[](local_160, 1);
        eastl::string::assign(pbVar2, "Talk-To");
        pbVar2 = (eastl::string*)std::array<eastl::string, 10ul>::operator[](local_160, 4);
        eastl::string::assign(pbVar2, "Examine");
        new (local_9f8) OpGroup();
        local_9f8._0_4_ = 0;
        ((local_9f8 + 8))->assign("*");
        uVar3 = 0;
        do {
            pbVar2 = (eastl::string*)std::array<eastl::string, 10ul>::operator[](local_9d0, uVar3);
            eastl::string::assign(pbVar2, "*");
            uVar3 = uVar3 + 1;
        } while (uVar3 != 10);
        cVar1 = local_188->MatchPattern(local_9f8, false);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "value1.MatchPattern(pattern1, false)",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/OpGroupTest.h",
                83, (char*)0);
        }
        new (local_890) OpGroup();
        local_890._0_4_ = 2;
        ((local_890 + 8))->assign("Goblin (level-3)");
        uVar3 = 0;
        do {
            pbVar2 = (eastl::string*)std::array<eastl::string, 10ul>::operator[](local_868, uVar3);
            eastl::string::assign(pbVar2, "*");
            uVar3 = uVar3 + 1;
        } while (uVar3 != 3);
        cVar1 = local_188->MatchPattern(local_890, false);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "value1.MatchPattern(pattern2, false)",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/OpGroupTest.h",
                93, (char*)0);
        }
        cVar1 = local_188->MatchPattern(local_890, true);
        if (cVar1 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "!value1.MatchPattern(pattern2, true)",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/OpGroupTest.h",
                94, (char*)0);
        }
        new (local_728) OpGroup();
        local_728._0_4_ = 2;
        ((local_728 + 8))->assign("Goblin (level-3)");
        pbVar2 = (eastl::string*)std::array<eastl::string, 10ul>::operator[](local_700, 0);
        eastl::string::assign(pbVar2, "Attack");
        pbVar2 = (eastl::string*)std::array<eastl::string, 10ul>::operator[](local_700, 1);
        eastl::string::assign(pbVar2, "Talk-To");
        pbVar2 = (eastl::string*)std::array<eastl::string, 10ul>::operator[](local_700, 4);
        eastl::string::assign(pbVar2, "Examine");
        cVar1 = local_188->MatchPattern(local_728, false);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "value1.MatchPattern(pattern3, false)",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/OpGroupTest.h",
                103, (char*)0);
        }
        cVar1 = local_188->MatchPattern(local_728, true);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "value1.MatchPattern(pattern3, true)",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/OpGroupTest.h",
                104, (char*)0);
        }
        new (local_5c0) OpGroup();
        local_5c0._0_4_ = 2;
        ((local_5c0 + 8))->assign("Goblin (level-3)");
        pbVar2 = (eastl::string*)std::array<eastl::string, 10ul>::operator[](local_598, 3);
        eastl::string::assign(pbVar2, "Attack");
        pbVar2 = (eastl::string*)std::array<eastl::string, 10ul>::operator[](local_598, 2);
        eastl::string::assign(pbVar2, "Talk-To");
        pbVar2 = (eastl::string*)std::array<eastl::string, 10ul>::operator[](local_598, 1);
        eastl::string::assign(pbVar2, "Examine");
        cVar1 = local_188->MatchPattern(local_5c0, false);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "value1.MatchPattern(pattern4, false)",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/OpGroupTest.h",
                113, (char*)0);
        }
        cVar1 = local_188->MatchPattern(local_5c0, true);
        if (cVar1 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "!value1.MatchPattern(pattern4, true)",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/OpGroupTest.h",
                114, (char*)0);
        }
        new (local_458) OpGroup();
        local_458._0_4_ = 2;
        ((local_458 + 8))->assign("Goblin (level-3)");
        pbVar2 = (eastl::string*)std::array<eastl::string, 10ul>::operator[](local_430, 0);
        eastl::string::assign(pbVar2, "*");
        pbVar2 = (eastl::string*)std::array<eastl::string, 10ul>::operator[](local_430, 1);
        eastl::string::assign(pbVar2, "*");
        pbVar2 = (eastl::string*)std::array<eastl::string, 10ul>::operator[](local_430, 4);
        eastl::string::assign(pbVar2, "Examine");
        cVar1 = local_188->MatchPattern(local_458, false);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "value1.MatchPattern(pattern5, false)",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/OpGroupTest.h",
                123, (char*)0);
        }
        cVar1 = local_188->MatchPattern(local_458, true);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "value1.MatchPattern(pattern5, true)",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/OpGroupTest.h",
                124, (char*)0);
        }
        new (local_2f0) OpGroup();
        local_2f0._0_4_ = 2;
        ((local_2f0 + 8))->assign("Goblin (level-3)");
        pbVar2 = (eastl::string*)std::array<eastl::string, 10ul>::operator[](local_2c8, 1);
        eastl::string::assign(pbVar2, "*");
        pbVar2 = (eastl::string*)std::array<eastl::string, 10ul>::operator[](local_2c8, 2);
        eastl::string::assign(pbVar2, "*");
        pbVar2 = (eastl::string*)std::array<eastl::string, 10ul>::operator[](local_2c8, 4);
        eastl::string::assign(pbVar2, "Examine");
        cVar1 = local_188->MatchPattern(local_2f0, false);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "value1.MatchPattern(pattern6, false)",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/OpGroupTest.h",
                133, (char*)0);
        }
        cVar1 = local_188->MatchPattern(local_2f0, true);
        if (cVar1 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "!value1.MatchPattern(pattern6, true)",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/OpGroupTest.h",
                134, (char*)0);
        }
        local_2f0->~OpGroup();
        local_458->~OpGroup();
        local_5c0->~OpGroup();
        local_728->~OpGroup();
        local_890->~OpGroup();
        local_9f8->~OpGroup();
        local_188->~OpGroup();
    }

    // 0x1000ae760, 416 bytes, inline, placed by class name and debug map
    // OpGroupTest::MakeOpGroupString(minimenu::MinimenuSubjType, eastl::string const&, std::array<eastl::string, 10ul> const&)
    /* OpGroupTest::MakeOpGroupString(minimenu::MinimenuSubjType,
   eastl::string const&, std::array<eastl::basic_string<char,
   eastl::allocator>, 10ul> const&) */

    OpGroupTest* OpGroupTest::MakeOpGroupString(uint param_2, undefined8 param_3, array<eastl::string, 10ul>* param_4) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        undefined8 uVar8;
        undefined8 uVar9;
        undefined8 uVar10;
        undefined8 uVar11;

        new (this) eastl::string();
        uVar1 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        std::array<eastl::string, 10ul>::operator[](param_4, 0);
        uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        std::array<eastl::string, 10ul>::operator[](param_4, 1);
        uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        std::array<eastl::string, 10ul>::operator[](param_4, 2);
        uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        std::array<eastl::string, 10ul>::operator[](param_4, 3);
        uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        std::array<eastl::string, 10ul>::operator[](param_4, 4);
        uVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        std::array<eastl::string, 10ul>::operator[](param_4, 5);
        uVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        std::array<eastl::string, 10ul>::operator[](param_4, 6);
        uVar8 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        std::array<eastl::string, 10ul>::operator[](param_4, 7);
        uVar9 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        std::array<eastl::string, 10ul>::operator[](param_4, 8);
        uVar10 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        std::array<eastl::string, 10ul>::operator[](param_4, 9);
        uVar11 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::string::append_sprintf((char*)this, "%d|%s|%s|%s|%s|%s|%s|%s|%s|%s|%s|%s", (ulong)param_2, uVar1, uVar2,
                                      uVar3, uVar4, uVar5, uVar6, uVar7, uVar8, uVar9, uVar10, uVar11);
        return this;
    }

    // 0x1000ae900, 224 bytes, inline, placed by class name and debug map
    // OpGroupTest::AssertOpGroupMatchesData(OpGroup const&, minimenu::MinimenuSubjType, eastl::string const&, std::array<eastl::string, 10ul> const&)
    /* OpGroupTest::AssertOpGroupMatchesData(OpGroup const&,
   minimenu::MinimenuSubjType, eastl::string const&,
   std::array<eastl::string, 10ul> const&) */

    void OpGroupTest::AssertOpGroupMatchesData(int* param_1, int param_2, basic_string* param_3,
                                               array<eastl::string, 10ul>* param_4) {
        bool bVar1;
        basic_string* pbVar2;
        basic_string* pbVar3;
        ulong uVar4;

        if (*param_1 != param_2) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "group.m_type == type",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/OpGroupTest.h",
                34, (char*)0);
        }
        bVar1 = eastl::operator==((basic_string*)(param_1 + 2), param_3);
        if (!bVar1) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "group.m_opBase == opBase",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/OpGroupTest.h",
                35, (char*)0);
        }
        uVar4 = 0;
        do {
            pbVar2 = (basic_string*)std::array<eastl::string, 10ul>::operator[](
                (array<eastl::string, 10ul>*)(param_1 + 10), uVar4);
            pbVar3 = (basic_string*)std::array<eastl::string, 10ul>::operator[](param_4, uVar4);
            bVar1 = eastl::operator==(pbVar2, pbVar3);
            if (!bVar1) {
                /* WARNING: Subroutine does not return */
                LogAssert("group.m_ops[i] == ops[i]",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                          "OpGroupTest.h",
                          38, (char*)0);
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 != 10);
    }

} // namespace jag::oldscape
