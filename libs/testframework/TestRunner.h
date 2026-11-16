// libs/testframework/TestRunner.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::testframework {
    class TestRunner {
    public:
        void RegisterTestRunningFunction(std::function<void(eastl::vector<TestDescriptor> const&)> const& callback);
        void RegisterTestsCompleteFunction(std::function<void(eastl::string const&)> const& callback);
        void RegisterAppCrashedFunction(const std::function<void()>& callback);
        void SetVM(TestVM* testVM);
        void SetApp(GraphicsApp* graphicsApp);
        void LoadMetadataFromFile(const eastl::string& str);
        unsigned long ParseMetadata(const eastl::string& str);
        void LoadMetadataFromRawString(const eastl::string& str);
        void RunTests();
        void SignalTestRunCompleted();
        void AddResult(const TestResult& testResult);
        void OnAppCrashed();
        bool ShouldAutorun() const;
        uint8_t* GetAutorunCredentials() const;
        void SetTestRunnerState(TestRunnerState testRunnerState);
        TestRunnerState GetTestRunnerState() const;
        void LoadRunScriptFromRawString(const eastl::string& str1, const eastl::string& str2);
        ~TestRunner();

    private:
        uint8_t _unknown_0[184];
        TestResultsWriter field_184;
        uint8_t _unknown_544[104];
        TestVM* field_648;
        GraphicsApp* field_656;
        uint8_t field_664;
        uint8_t _unknown_665[39];
        TestRunnerState m_testRunnerState;
        uint8_t _unknown_708[420];
    };

    // 0x100baa260
    void TestRunner::LoadRunScriptFromRawString(const eastl::string& str1, const eastl::string& str2) {
        pair<eastl::string, eastl::string> local_60;

        local_60.pair<eastl::string, eastl::string, void>(str1, str2);
        field_600.insert(&local_60);
    }

    // 0x100baf8b0
    void TestRunner::ParseMetadata(eastl::string const&)::$_0::operator()(TestDescriptor testDescriptor) const {
        *testDescriptor == (*(*(eastl::string**)this));
    }

    // 0x100bb06f0
    TestRunner::~TestRunner() {
        field_672.~vector();
        field_600.~vector_map();
        field_568.~vector();
        field_184->~TestResultsWriter();
        field_144.~TestResults();
        field_96.~function();
        field_48.~function();
    }

} // namespace jag::testframework

namespace jag {
    // 0x100baa4e0
    int tokenize<eastl::vector<eastl::string>, eastl::string>(eastl::vector<eastl::string>& strs,
                                                              const eastl::string& str1, const char* str2, int arg4) {
        bool bVar1;
        size_t sVar3;
        ReturnValue* pRVar5;
        char* str1_01;

        if (arg4 == -1) {
            sVar3 = _strlen(str2);
            arg4 = (int)sVar3;
        }
        strs.clear();
        strs.reserve(4);
        char* str1_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        char* pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
        char* pcVar6 = str1_00;
        if (str1_00 != pcVar4) {
            str1_01 = str1_00;
            do {
                str1_00 = pcVar6;
                bVar1 = internal::find_token<char, char const*>(*str1_00, str2, str2 + arg4);
                if (bVar1) {
                    if (str1_01 != str1_00) {
                        pRVar5 = (ReturnValue*)strs.push_back();
                        eastl::string::assign(pRVar5, str1_01, str1_00);
                    }
                    if (str1_00 == pcVar4) {
                    LAB_100baa5d0:
                        pcVar6 = str1_00;
                    } else {
                        do {
                            bVar1 = internal::find_token<char, char const*>(*str1_00, str2, str2 + arg4);
                            if (!bVar1)
                                goto LAB_100baa5d0;
                            str1_00 = str1_00 + 1;
                            pcVar6 = str1_00;
                        } while (str1_00 != pcVar4);
                    }
                } else {
                    pcVar6 = str1_00 + 1;
                    str1_00 = str1_01;
                }
                str1_01 = str1_00;
            } while (pcVar6 != pcVar4);
        }
        if (str1_00 != pcVar6) {
            pRVar5 = (ReturnValue*)strs.push_back();
            eastl::string::assign(pRVar5, str1_00, pcVar6);
        }
        return strs.size();
    }

} // namespace jag

namespace jag::graphicutils {
    // 0x100baa6e0
    void Screengrabber::ClearRecentScreenshotData() {
        clear();
    }

} // namespace jag::graphicutils
