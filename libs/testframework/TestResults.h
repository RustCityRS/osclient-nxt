// libs/testframework/TestResults.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::testframework {
    class TestResults {
    public:
        GetResults() const;
        int GetNumFailed() const;
        void AddResult(TestResult const&);
        void GetNumTests() const;
        ~TestResults();

        // data members, from how the methods use this: 44 bytes
        long field_0;        // offset 0
        TestResult* field_8; // offset 8
        char _unknown_16[16];
        int field_32;    // offset 32
        int m_numFailed; // offset 36
        char _unknown_40[4];
    };

    class TestResultsWriter {
    public:
        GetResultsFormatted() const;
        void InitWriter(eastl::string const&, ResultsFormat);
        void WriteResults(TestResults const&);
        ~TestResultsWriter();

        // data members, from how the methods use this: 360 bytes
        undefined1 field_0; // offset 0
        char _unknown_1[7];
        File field_8; // offset 8
        char _unknown_32[328];
    };

    // 0x100ba59b0, 16 bytes, inline, placed by class name and debug map
    // TestResults::GetNumTests() const
    void TestResults::GetNumTests() {
        size();
    }

    // 0x100bb0790, 16 bytes, complete-object destructor, inline, placed by class name
    // TestResults::~TestResults(): jumps straight to the base-object destructor

    // 0x100bb0870, 16 bytes, base-object destructor, inline, placed by class name
    // TestResults::~TestResults()
    void TestResults::~TestResults() {
        ~vector();
    }

} // namespace jag::testframework
