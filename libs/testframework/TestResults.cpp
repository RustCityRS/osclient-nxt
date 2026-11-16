// libs/testframework/TestResults.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.testframework

#include "TestResults.h"

namespace jag::testframework {
    // 0x100009ca0: TestResults::GetResults() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x1000fa840: TestResults::GetNumFailed() const has the same machine code as oldscape::graphics::NXTPixScreen::GetHeight() const

    // 0x100ba57d0
    void TestResults::AddResult(const TestResult& testResult) {
        push_back(testResult);
        if (*(char*)((long)&testResult.field_96 + 1) == '\0') {
            m_numFailed = m_numFailed + 1;
        } else {
            field_32 = field_32 + 1;
        }
    }

    // 0x100ba5850
    void ParseResultsJUnitXML(const TestResults& testResults, eastl::string& str) {
        uint64_t uVar5;
        long lVar6;
        long lVar7;
        uint64_t uVar8;

        str.append("<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n");
        unsigned int uVar1 = testResults.GetNumTests();
        unsigned int uVar2 = testResults.GetAliveCount();
        str.append_sprintf("<testsuite name=\"suite\" tests=\"%u\" failures=\"%u\">\n", (unsigned long)uVar1,
                           (unsigned long)uVar2);
        auto layout = testResults.SSOBeginPtr();
        long lVar3 = layout->HeapBeginPtr();
        long lVar4 = layout->end();
        for (; lVar3 != lVar4; lVar3 = lVar3 + 104) {
            uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            str.append_sprintf("\t<testcase name=\"%s\">\n", uVar5);
            if (*(char*)(lVar3 + 96) == '\0') {
                if (*(char*)(lVar3 + 97) == '\0') {
                    lVar6 = ((lVar3 + 64))->HeapBeginPtr();
                    lVar7 = ((lVar3 + 64))->end();
                    for (; lVar6 != lVar7; lVar6 = lVar6 + 72) {
                        uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        uVar8 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        str.append_sprintf("\t\t<failure>%s - %s</failure>\n", uVar5, uVar8);
                    }
                }
            } else {
                str.append("\t\t<skipped />");
            }
            str.append("\t</testcase>\n");
        }
        str.append("</testsuite>");
    }

    // 0x100ba59c0
    void TestResultsWriter::InitWriter(const eastl::string& str, TestResultsWriter::ResultsFormat resultsFormat) {
        Logger* pLVar2;
        char* str_00;
        uint64_t uVar3;
        uint64_t uVar4;
        uint8_t local_170[8];

        if (resultsFormat == 0) {
            ((function<void(TestResults const&, eastl::string&)>*)&field_352)->operator=(ParseResultsJUnitXML);
            new (local_170) callstack::Callstack();
            str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            new ((local_170 + 8)) File(str_00, 1538, local_170);
            *field_8 = (*((local_170 + 8)));
            ((local_170 + 8))->~File();
            if (field_8->IsValid() == '\0') {
                pLVar2 = logger::default_logger();
                uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                *((local_170 + 8)) = local_170->GetErrorString();
                uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                pLVar2->Log(false, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/"
                            "TestResults.cpp",
                            68, "Failed to create results file: %s (Reason: %s)", uVar3, uVar4);
                ((local_170 + 8))->~basic_string();
            } else {
                field_0 = 1;
            }
        } else {
            pLVar2 = logger::default_logger();
            pLVar2->Log(
                false, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/TestResults.cpp",
                60, "Unknown results format. Results file not created.");
        }
    }

    // 0x100ba5b80
    void TestResultsWriter::WriteResults(const TestResults& testResults) {
        if ((&field_352)->operator_cast_to_bool() == '\0') {
            LogAssert(
                "m_parseResultsFunc",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/TestResults.cpp",
                77, "Tried to write results without a parser");
        }
        uint8_t* this_00 = &field_320;
        this_00->assign("");
        eastl::function<void(TestResults const&, eastl::string&)>::operator()(
            (function<void(TestResults const&, eastl::string&)>*)&field_352,
            (shared_ptr<graphics::GUIAnimation>*)testResults, (shared_ptr<ui::Component>*)this_00);
        if (field_0 != '\0') {
            field_8->write(this_00, nullptr);
            field_8->close(nullptr);
        }
    }

} // namespace jag::testframework
