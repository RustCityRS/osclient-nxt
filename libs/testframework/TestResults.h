// libs/testframework/TestResults.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::testframework {
    class TestResults {
    public:
        void GetResults() const;
        int GetNumFailed() const;
        void AddResult(const TestResult& testResult);
        void GetNumTests() const;
        ~TestResults();

    private:
        long field_0;
        TestResult* field_8;
        uint8_t _unknown_16[16];
        int field_32;
        int m_numFailed;
        uint8_t _unknown_40[4];
    };

    class TestResultsWriter {
    public:
        uint8_t* GetResultsFormatted() const;
        void InitWriter(const eastl::string& str, ResultsFormat resultsFormat);
        void WriteResults(const TestResults& testResults);
        ~TestResultsWriter();

    private:
        uint8_t field_0;
        uint8_t _unknown_1[7];
        ClientCompositeZone field_8;
        uint8_t _unknown_32[328];
    };

    // 0x100ba59b0
    void TestResults::GetNumTests() const {
        size();
    }

    // 0x100bb0870
    TestResults::~TestResults() {}

} // namespace jag::testframework
