// projects/osclient/test/OpGroupTest.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape {
    class OpGroupTest {
    public:
        void RunTests();
        void TestCreateFromStringMatchesInput();
        void TestMatchPattern();
        auto MakeOpGroupString(minimenu::MinimenuSubjType minimenuSubjType, const eastl::string& str,
                               const std::array<eastl::string, 10ul>& strs);
        void AssertOpGroupMatchesData(const OpGroup& opGroup, minimenu::MinimenuSubjType minimenuSubjType,
                                      const eastl::string& str, const std::array<eastl::string, 10ul>& strs);

        uint8_t _unknown_0[1];
    };

    // 0x1000ad780
    void OpGroupTest::RunTests() {
        TestCreateFromStringMatchesInput();
        TestMatchPattern();
    }

    // 0x1000ad790
    void OpGroupTest::TestCreateFromStringMatchesInput() {
        ReturnValue local_f8;
        ReturnValue local_b8;

        eastl::string local_118("Goblin (level-3)");
        eastl::string local_4d8("Attack");
        eastl::string local_4b8("");
        eastl::string local_498("");
        eastl::string local_478("");
        eastl::string local_458("Examine");
        eastl::string local_438("");
        eastl::string local_418("");
        eastl::string local_3f8("");
        eastl::string local_3d8("");
        eastl::string local_3b8("");
        MakeOpGroupString(&local_f8, 2, &local_118, &local_4d8);
        OpGroup local_7a8 = OpGroup::Create(local_f8, false);
        AssertOpGroupMatchesData(&local_7a8, 2, &local_118, &local_4d8);
        local_d8 = eastl::string("Test*Loc");
        local_398 = eastl::string("op#");
        eastl::string local_378("op*");
        eastl::string local_358("op%");
        eastl::string local_338("op3");
        eastl::string local_318("op3");
        eastl::string local_2f8("op3");
        eastl::string local_2d8("op7");
        eastl::string local_2b8("op8");
        eastl::string local_298("op9");
        eastl::string local_278("op10");
        MakeOpGroupString(&local_b8, 3);
        OpGroup local_640 = OpGroup::Create(local_b8, true);
        local_98 = eastl::string("Test_Loc");
        local_258 = eastl::string("op_");
        eastl::string local_238("op_");
        eastl::string local_218("op_");
        eastl::string local_1f8("op3");
        eastl::string local_1d8("op3");
        eastl::string local_1b8("op3");
        eastl::string local_198("op7");
        eastl::string local_178("op8");
        eastl::string local_158("op9");
        eastl::string local_138("op10");
        AssertOpGroupMatchesData(&local_640, 3);
    }

    // 0x1000ae0a0
    void OpGroupTest::TestMatchPattern() {
        uint8_t local_9f8[40];
        array<eastl::string, 10ul> local_9d0;
        uint8_t local_890[40];
        array<eastl::string, 10ul> local_868;
        uint8_t local_728[40];
        array<eastl::string, 10ul> local_700;
        uint8_t local_5c0[40];
        array<eastl::string, 10ul> local_598;
        uint8_t local_458[40];
        array<eastl::string, 10ul> local_430;
        uint8_t local_2f0[40];
        array<eastl::string, 10ul> local_2c8;
        uint8_t local_188[40];
        array<eastl::string, 10ul> local_160;

        new (local_188) OpGroup();
        local_188._0_4_ = 2;
        ((local_188 + 8))->assign("Goblin (level-3)");
        eastl::string* pbVar2 = &local_160[0];
        eastl::string::assign(pbVar2, "Attack");
        pbVar2 = &local_160[1];
        eastl::string::assign(pbVar2, "Talk-To");
        pbVar2 = &local_160[4];
        eastl::string::assign(pbVar2, "Examine");
        new (local_9f8) OpGroup();
        local_9f8._0_4_ = 0;
        ((local_9f8 + 8))->assign("*");
        unsigned long uVar3 = 0;
        do {
            pbVar2 = &local_9d0[uVar3];
            eastl::string::assign(pbVar2, "*");
            uVar3 = uVar3 + 1;
        } while (uVar3 != 10);
        if (!(local_188->MatchPattern(*local_9f8, false))) {
            LogAssert(
                "value1.MatchPattern(pattern1, false)",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/OpGroupTest.h",
                83, nullptr);
        }
        new (local_890) OpGroup();
        local_890._0_4_ = 2;
        ((local_890 + 8))->assign("Goblin (level-3)");
        uVar3 = 0;
        do {
            pbVar2 = &local_868[uVar3];
            eastl::string::assign(pbVar2, "*");
            uVar3 = uVar3 + 1;
        } while (uVar3 != 3);
        if (!(local_188->MatchPattern(*local_890, false))) {
            LogAssert(
                "value1.MatchPattern(pattern2, false)",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/OpGroupTest.h",
                93, nullptr);
        }
        if (local_188->MatchPattern(*local_890, true)) {
            LogAssert(
                "!value1.MatchPattern(pattern2, true)",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/OpGroupTest.h",
                94, nullptr);
        }
        new (local_728) OpGroup();
        local_728._0_4_ = 2;
        ((local_728 + 8))->assign("Goblin (level-3)");
        pbVar2 = &local_700[0];
        eastl::string::assign(pbVar2, "Attack");
        pbVar2 = &local_700[1];
        eastl::string::assign(pbVar2, "Talk-To");
        pbVar2 = &local_700[4];
        eastl::string::assign(pbVar2, "Examine");
        if (!(local_188->MatchPattern(*local_728, false))) {
            LogAssert(
                "value1.MatchPattern(pattern3, false)",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/OpGroupTest.h",
                103, nullptr);
        }
        if (!(local_188->MatchPattern(*local_728, true))) {
            LogAssert(
                "value1.MatchPattern(pattern3, true)",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/OpGroupTest.h",
                104, nullptr);
        }
        new (local_5c0) OpGroup();
        local_5c0._0_4_ = 2;
        ((local_5c0 + 8))->assign("Goblin (level-3)");
        pbVar2 = &local_598[3];
        eastl::string::assign(pbVar2, "Attack");
        pbVar2 = &local_598[2];
        eastl::string::assign(pbVar2, "Talk-To");
        pbVar2 = &local_598[1];
        eastl::string::assign(pbVar2, "Examine");
        if (!(local_188->MatchPattern(*local_5c0, false))) {
            LogAssert(
                "value1.MatchPattern(pattern4, false)",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/OpGroupTest.h",
                113, nullptr);
        }
        if (local_188->MatchPattern(*local_5c0, true)) {
            LogAssert(
                "!value1.MatchPattern(pattern4, true)",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/OpGroupTest.h",
                114, nullptr);
        }
        new (local_458) OpGroup();
        local_458._0_4_ = 2;
        ((local_458 + 8))->assign("Goblin (level-3)");
        pbVar2 = &local_430[0];
        eastl::string::assign(pbVar2, "*");
        pbVar2 = &local_430[1];
        eastl::string::assign(pbVar2, "*");
        pbVar2 = &local_430[4];
        eastl::string::assign(pbVar2, "Examine");
        if (!(local_188->MatchPattern(*local_458, false))) {
            LogAssert(
                "value1.MatchPattern(pattern5, false)",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/OpGroupTest.h",
                123, nullptr);
        }
        if (!(local_188->MatchPattern(*local_458, true))) {
            LogAssert(
                "value1.MatchPattern(pattern5, true)",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/OpGroupTest.h",
                124, nullptr);
        }
        new (local_2f0) OpGroup();
        local_2f0._0_4_ = 2;
        ((local_2f0 + 8))->assign("Goblin (level-3)");
        pbVar2 = &local_2c8[1];
        eastl::string::assign(pbVar2, "*");
        pbVar2 = &local_2c8[2];
        eastl::string::assign(pbVar2, "*");
        pbVar2 = &local_2c8[4];
        eastl::string::assign(pbVar2, "Examine");
        if (!(local_188->MatchPattern(*local_2f0, false))) {
            LogAssert(
                "value1.MatchPattern(pattern6, false)",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/OpGroupTest.h",
                133, nullptr);
        }
        if (local_188->MatchPattern(*local_2f0, true)) {
            LogAssert(
                "!value1.MatchPattern(pattern6, true)",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/OpGroupTest.h",
                134, nullptr);
        }
    }

    // 0x1000ae760
    auto OpGroupTest::MakeOpGroupString(minimenu::MinimenuSubjType minimenuSubjType, const eastl::string& str,
                                        const std::array<eastl::string, 10ul>& strs) {
        auto result;
        uint64_t uVar1 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        strs[0];
        uint64_t uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        strs[1];
        uint64_t uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        strs[2];
        uint64_t uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        strs[3];
        uint64_t uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        strs[4];
        uint64_t uVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        strs[5];
        uint64_t uVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        strs[6];
        uint64_t uVar8 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        strs[7];
        uint64_t uVar9 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        strs[8];
        uint64_t uVar10 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        strs[9];
        uint64_t uVar11 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        result.append_sprintf("%d|%s|%s|%s|%s|%s|%s|%s|%s|%s|%s|%s", (unsigned long)minimenuSubjType, uVar1, uVar2,
                              uVar3, uVar4, uVar5, uVar6, uVar7, uVar8, uVar9, uVar10, uVar11);
        return result;
    }

    // 0x1000ae900
    void OpGroupTest::AssertOpGroupMatchesData(const OpGroup& opGroup, minimenu::MinimenuSubjType minimenuSubjType,
                                               const eastl::string& str, const std::array<eastl::string, 10ul>& strs) {
        eastl::string* str1;
        eastl::string* str2;

        if (opGroup.field_0 != minimenuSubjType) {
            LogAssert(
                "group.m_type == type",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/OpGroupTest.h",
                34, nullptr);
        }
        if (!(opGroup.field_8 == str)) {
            LogAssert(
                "group.m_opBase == opBase",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/OpGroupTest.h",
                35, nullptr);
        }
        unsigned long arg1 = 0;
        do {
            str1 = &opGroup.field_40[arg1];
            str2 = &strs[arg1];
            if (!(*str1 == *str2)) {
                LogAssert("group.m_ops[i] == ops[i]",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                          "OpGroupTest.h",
                          38, nullptr);
            }
            arg1 = arg1 + 1;
        } while (arg1 != 10);
    }

} // namespace jag::oldscape
