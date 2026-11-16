// libs/testframework/TestRunner.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::testframework {
    class TestRunner {
    public:
        void
        RegisterTestRunningFunction(std::function<void(eastl::vector<TestDescriptor, eastl::allocator> const&)> const&);
        void RegisterTestsCompleteFunction(std::function<void(eastl::string const&)> const&);
        void RegisterAppCrashedFunction(std::function<void()> const&);
        void SetVM(TestVM*);
        void SetApp(GraphicsApp*);
        void LoadMetadataFromFile(eastl::string const&);
        ulong ParseMetadata(eastl::string const&);
        void LoadMetadataFromRawString(eastl::string const&);
        void RunTests();
        void SignalTestRunCompleted();
        void AddResult(TestResult const&);
        void OnAppCrashed();
        ShouldAutorun() const;
        GetAutorunCredentials() const;
        void SetTestRunnerState(TestRunnerState);
        GetTestRunnerState() const;
        void LoadRunScriptFromRawString(eastl::string const&, eastl::string const&);
        ~TestRunner();

        // data members, from how the methods use this: 1128 bytes
        char _unknown_0[184];
        TestResultsWriter field_184; // offset 184
        char _unknown_544[56];
        undefined1 field_600; // offset 600
        char _unknown_601[47];
        TestVM* m_pVM;        // offset 648
        GraphicsApp* m_pApp;  // offset 656
        undefined1 field_664; // offset 664
        char _unknown_665[39];
        undefined4 m_testRunnerState; // offset 704
        char _unknown_708[420];
    };

    // 0x100baa260, 128 bytes, inline, placed by class name and debug map
    // TestRunner::LoadRunScriptFromRawString(eastl::string const&, eastl::string const&)
    void TestRunner::LoadRunScriptFromRawString(basic_string* param_1, basic_string* param_2) {
        pair<eastl::string, eastl::string> local_60[64];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::pair<eastl::string, eastl::string>::pair<eastl::string, eastl::string, void>(local_60, param_1, param_2);
        eastl::vector_map<
            eastl::string, eastl::string, eastl::less<eastl::string>, eastl::allocator,
            eastl::vector<eastl::pair<eastl::string, eastl::string>, eastl::allocator>>::insert(&field_600, local_60,
                                                                                                1);
        local_60->~pair();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100baf8b0, 32 bytes, inline, placed by class name
    // TestRunner::ParseMetadata(eastl::string const&)::$_0::operator()(TestDescriptor) const
    /* TestRunner::ParseMetadata(eastl::string
   const&)::$_0::TEMPNAMEPLACEHOLDERVALUE(TestDescriptor) const */

    void TestRunner::ParseMetadata(eastl::stringconst&)::$_0 ::operator()(TestDescriptor param_1) {
        basic_string* in_RSI;

        eastl::operator==(in_RSI, *(basic_string**)this);
    }

    // 0x100bb06e0, 16 bytes, complete-object destructor, inline, placed by class name
    // TestRunner::~TestRunner(): jumps straight to the base-object destructor

    // 0x100bb06f0, 112 bytes, base-object destructor, inline, placed by class name
    // TestRunner::~TestRunner()
    void TestRunner::~TestRunner() {
        (&field_672)->~vector();
        (&field_600)->~vector_map();
        (&field_568)->~vector();
        field_184->~TestResultsWriter();
        (&field_144)->~TestResults();
        std::function<void()>::~function((function<void()>*)&field_96);
        std::function<void(eastl::stringconst&)>::~function((function<void(eastl::stringconst&)>*)&field_48);
        std::function<void(eastl::vector<TestDescriptor, eastl::allocator> const&)>::~function(
            (function<void(eastl::vector<TestDescriptor, eastl::allocator> const&)>*)this);
        ~AutoSingleton();
    }

} // namespace jag::testframework

namespace jag {
    // 0x100baa4e0, 320 bytes, inline, placed by debug map only (low confidence)
    // int tokenize<eastl::vector<eastl::string, eastl::allocator>, eastl::string >(eastl::vector<eastl::string, eastl::allocator>&, eastl::string const&, char const*, int)
    int jag::tokenize<eastl::vector<eastl::string, eastl::allocator>, eastl::string>(vector* param_1,
                                                                                     basic_string* param_2,
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
        pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
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
                    LAB_100baa5d0:
                        pcVar8 = pcVar4;
                    } else {
                        do {
                            bVar1 = internal::find_token<char, char const*>(pcVar4, param_3, param_3 + param_4);
                            if (!bVar1)
                                goto LAB_100baa5d0;
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

namespace jag::graphicutils {
    // 0x100baa6e0, 16 bytes, inline, placed by debug map only (low confidence)
    // Screengrabber::ClearRecentScreenshotData()
    void Screengrabber::ClearRecentScreenshotData() {
        clear();
    }

} // namespace jag::graphicutils
