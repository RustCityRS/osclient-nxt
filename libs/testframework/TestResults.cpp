// libs/testframework/TestResults.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.testframework

#include "TestResults.h"

namespace jag::testframework {
    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    TestResults::GetResults() const;

    // 0x1000fa840: the linker folded this into oldscape::graphics::NXTPixScreen::GetHeight() const, which has identical code
    int TestResults::GetNumFailed() const;

    // 0x100ba57d0, 48 bytes, placed by class name and debug map
    // TestResults::AddResult(TestResult const&)
    void TestResults::AddResult(TestResult* param_1) {
        push_back(param_1);
        if (*(char*)((long)&param_1->field_96 + 1) == '\0') {
            m_numFailed = m_numFailed + 1;
        } else {
            field_32 = field_32 + 1;
        }
    }

    // 0x100ba5850, 352 bytes, placed by neighbouring functions
    // ParseResultsJUnitXML(TestResults const&, eastl::string&)
    void ParseResultsJUnitXML(TestResults* param_1, basic_string* param_2) {
        uint uVar1;
        uint uVar2;
        vector* this;
        long lVar3;
        long lVar4;
        undefined8 uVar5;
        long lVar6;
        long lVar7;
        undefined8 uVar8;
        char* pcVar9;

        param_2->append("<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n");
        uVar1 = param_1->GetNumTests();
        uVar2 = param_1->GetAliveCount();
        pcVar9 = "<testsuite name=\"suite\" tests=\"%u\" failures=\"%u\">\n";
        eastl::string::append_sprintf((char*)param_2, "<testsuite name=\"suite\" tests=\"%u\" failures=\"%u\">\n",
                                      (ulong)uVar1, (ulong)uVar2);
        this = param_1->SSOBeginPtr(pcVar9);
        lVar3 = HeapBeginPtr();
        lVar4 = end();
        for (; lVar3 != lVar4; lVar3 = lVar3 + 104) {
            uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            eastl::string::append_sprintf((char*)param_2, "\t<testcase name=\"%s\">\n", uVar5);
            if (*(char*)(lVar3 + 96) == '\0') {
                if (*(char*)(lVar3 + 97) == '\0') {
                    lVar6 = ((lVar3 + 64))->HeapBeginPtr();
                    lVar7 = ((lVar3 + 64))->end();
                    for (; lVar6 != lVar7; lVar6 = lVar6 + 72) {
                        uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        uVar8 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        eastl::string::append_sprintf((char*)param_2, "\t\t<failure>%s - %s</failure>\n", uVar5, uVar8);
                    }
                }
            } else {
                param_2->append("\t\t<skipped />");
            }
            param_2->append("\t</testcase>\n");
        }
        param_2->append("</testsuite>");
    }

    // 0x100ba59c0, 400 bytes, placed by __FILE__ string
    // TestResultsWriter::InitWriter(eastl::string const&, TestResultsWriter::ResultsFormat)
    void TestResultsWriter::InitWriter(undefined8 param_2, int param_3) {
        undefined8 uVar2;
        char* pcVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined1 local_170[8];
        File local_168[13];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (param_3 == 0) {
            eastl::function<void(TestResults_const&, eastl::string&)>::operator=(
                (function<void(TestResults_const&, eastl::string&)>*)&field_352, ParseResultsJUnitXML);
            new (local_170) callstack::Callstack();
            pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            new ((local_170 + 8)) File(pcVar3, 1538, local_170);
            File::operator=((File*)field_8, (File*)(local_170 + 8));
            ((local_170 + 8))->~File();
            if (field_8->IsValid() == '\0') {
                uVar2 = logger::default_logger();
                uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                ((local_170 + 8))->GetErrorString();
                uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                logger::Logger::Log(uVar2, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                    "testframework/TestResults.cpp",
                                    68, "Failed to create results file: %s (Reason: %s)", uVar4, uVar5);
                ((local_170 + 8))->~basic_string();
            } else {
                field_0 = 1;
            }
        } else {
            uVar2 = logger::default_logger();
            logger::Logger::Log(
                uVar2, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/TestResults.cpp",
                60, "Unknown results format. Results file not created.");
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100ba5b80, 160 bytes, placed by __FILE__ string
    // TestResultsWriter::WriteResults(TestResults const&)
    void TestResultsWriter::WriteResults(TestResults* param_1) {
        undefined1* this_00;

        if (!(&field_352)->operator_cast_to_bool()) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "m_parseResultsFunc",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/TestResults.cpp",
                77, "Tried to write results without a parser");
        }
        this_00 = &field_320;
        this_00->assign("");
        eastl::function<void(TestResults_const&, eastl::string&)>::operator()(
            (function<void(TestResults_const&, eastl::string&)>*)&field_352, param_1, (basic_string*)this_00);
        if (field_0 != '\0') {
            (field_8, (basic_string*)this_00, (Error*)0)->write();
            (field_8, (Error*)0)->close();
        }
    }

} // namespace jag::testframework
