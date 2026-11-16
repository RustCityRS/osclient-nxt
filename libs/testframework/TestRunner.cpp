// libs/testframework/TestRunner.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.testframework

#include "TestRunner.h"

namespace jag::testframework {
    // 0x100ba5c20
    auto ReadFileContentsAsString(const eastl::string& str) {
        unsigned long arg1;
        unsigned long uVar3;
        uint64_t uVar4;
        Logger* pLVar5;
        eastl::string local_190;

        char* pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        ClientCompositeZone local_168(pcVar2, 2, nullptr);
        if (local_168.IsValid() == '\0') {
            pLVar5 = logger::default_logger();
            uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            pLVar5->Log(
                false, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/TestRunner.cpp",
                20, "Failed to open file (%s).", uVar4);
            auto result("");
        } else {
            arg1 = local_168.length(nullptr);
            local_190 = eastl::string("");
            local_190.resize(arg1);
            pcVar2 = &local_190[0];
            uVar3 = local_168.read(pcVar2, (unsigned int)arg1, 0, nullptr);
            if (uVar3 == arg1) {
                new (&result) eastl::string(local_190);
            } else {
                pLVar5 = logger::default_logger();
                pLVar5->Log(false, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/"
                            "TestRunner.cpp",
                            30, "Failed to read file. Read bytes (%zu) differ from file size (%zu).", uVar3, arg1);
                new (&result) eastl::string("");
            }
        }
        return result;
    }

    // 0x100ba5e40
    void
    TestRunner::RegisterTestRunningFunction(std::function<void(eastl::vector<TestDescriptor> const&)> const& callback) {
        *this = callback;
    }

    // 0x100ba5eb0
    void TestRunner::RegisterTestsCompleteFunction(std::function<void(eastl::string const&)> const& callback) {
        field_48 = callback;
    }

    // 0x100ba5f20
    void TestRunner::RegisterAppCrashedFunction(const std::function<void()>& callback) {
        field_96 = callback;
    }

    // 0x100ba5f30
    void TestRunner::SetVM(TestVM* testVM) {
        if (testVM == nullptr) {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/"
                      "TestRunner.cpp",
                      56, "VM is null.");
            return;
        }
        field_648 = testVM;
    }

    // 0x100ba5f70
    void TestRunner::SetApp(GraphicsApp* graphicsApp) {
        if (graphicsApp == nullptr) {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/"
                      "TestRunner.cpp",
                      67, "App is null.");
            return;
        }
        field_656 = graphicsApp;
    }

    // 0x100ba5fb0
    void TestRunner::LoadMetadataFromFile(const eastl::string& str) {
        Logger* pLVar2;
        ReturnValue local_40;

        if (!(str.empty())) {
            ReadFileContentsAsString(&local_40, str);
            if (!(local_40.empty())) {
                ParseMetadata(local_40);
            } else {
                pLVar2 = logger::default_logger();
                pLVar2->Log(false, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/"
                            "TestRunner.cpp",
                            86, "Metadatafile load error.");
            }
        } else {
            pLVar2 = logger::default_logger();
            pLVar2->Log(
                false, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/TestRunner.cpp",
                78, "Metadata file path is empty.");
        }
    }

    // 0x100ba6080
    unsigned long TestRunner::ParseMetadata(const eastl::string& str) {
        uint8_t* puVar1;
        vector<TestDescriptor>* pvVar2;
        uint8_t bVar4;
        unsigned int uVar6;
        int iVar7;
        Logger* pLVar10;
        eastl::string* pbVar12;
        basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>* pbVar13;
        long lVar14;
        uint64_t uVar17;
        Value* pVVar18;
        TestDescriptor* pTVar19;
        TestDescriptor* pTVar20;
        uint8_t extraout_DL;
        uint8_t extraout_DL_00;
        unsigned int arg2;
        int arg1;
        unsigned long uVar21;
        char* in_stack_fffffffffffff988;
        uint32_t uVar22;
        uint8_t local_4e0[48];
        uint32_t local_4b0;
        uint64_t local_460;
        uint8_t local_458;
        uint64_t local_440;
        uint8_t local_438;
        Value* local_420;
        ReturnValue local_408;
        uint8_t local_3e0[64];
        fixed_vector<eastl::fixed_string<char, 64>, 8ul> local_3a0;

        vector<TestDescriptor>* local_418 = (vector<TestDescriptor>*)&field_568;
        TestRunner* local_410 = this;
        local_418->clear();
        new (local_4e0) TestConfig();
        CharReaderBuilder local_548;
        string local_480;
        TestConfig local_518;
        char* pcVar8 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_3e0->string<decltype(nullptr)>(pcVar8);
        stringstream local_660(local_3e0, arg2);
        Value local_4a8(0);
        bool cVar3 = Json::parseFromStream(local_548, local_660, &local_4a8, &local_480);
        if (!cVar3) {
            pLVar10 = logger::default_logger();
            uVar17 = std::string::c_str(&local_480);
            uVar21 = 0;
            pLVar10->Log(
                false, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/TestRunner.cpp",
                143, "Failed to parse metadata file. Errors: %s", uVar17);
            goto LAB_100ba6af9;
        }
        local_4e0[0] = 1;
        Value* pVVar9 = &local_4a8["configuration"];
        cVar3 = pVVar9->isNull();
        if (cVar3) {
            pLVar10 = logger::default_logger();
            uVar21 = 0;
            pLVar10->Log(
                false, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/TestRunner.cpp",
                154, "No configuration found. Stopping test runner.");
            goto LAB_100ba6af9;
        }
        Value* pVVar11 = (Value*)(*pVVar9)["console_display"];
        cVar3 = pVVar11->isNull();
        if (!cVar3) {
            local_408 = Json::Value(false);
            *local_3e0 = pVVar11->get("display_asserts");
            uVar6 = local_3e0->asBool();
            local_408 = Json::Value(false);
            *local_3e0 = pVVar11->get("display_test_results");
            bVar4 = local_3e0->asBool();
            local_4e0._4_4_ = (uVar6 & 255) + (unsigned int)bVar4 * 2;
        }
        pVVar11 = (Value*)(*pVVar9)["vm"];
        cVar3 = pVVar11->isNull();
        if (!cVar3) {
            local_408 = Json::Value((bool)local_518.field_8);
            *local_3e0 = pVVar11->get("use_image_diff");
            local_4e0[8] = local_3e0->asBool();
            pcVar8 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_408 = Json::Value(pcVar8);
            *local_3e0 = pVVar11->get("image_diff_server_address");
            pcVar8 = local_3e0->asCString();
            ((local_4e0 + 16))->assign(pcVar8);
            local_408 = Json::Value(local_518.field_48);
            *local_3e0 = pVVar11->get("image_diff_server_port");
            local_4b0 = local_3e0->asInt();
        }
        pVVar11 = (Value*)(*pVVar9)["results"];
        cVar3 = pVVar11->isNull();
        if (!cVar3) {
            local_408 = Json::Value("");
            *local_3e0 = pVVar11->get("format");
            pcVar8 = local_3e0->asCString();
            new (&local_440) eastl::string(pcVar8);
            local_440.make_lower();
            bVar4 = local_440 == "junit";
            local_408 = Json::Value(false);
            *local_3e0 = pVVar11->get("write_to_network");
            local_410->field_665 = local_3e0->asBool();
            local_408 = Json::Value(false);
            *local_3e0 = pVVar11->get("write_to_file");
            cVar3 = local_3e0->asBool();
            if (cVar3) {
                local_408 = Json::Value("results.xml");
                *local_3e0 = pVVar11->get("filename");
                pcVar8 = local_3e0->asCString();
                new (&local_460) eastl::string(pcVar8);
                local_410->field_184->InitWriter(local_460, (unsigned int)(bVar4 ^ 1));
            }
            if (local_410->field_665 == '\0' && !cVar3) {
                pLVar10 = logger::default_logger();
                pLVar10->Log(false, 3,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/"
                             "TestRunner.cpp",
                             198, "Warning - no output specified for test results");
            }
        }
        pVVar11 = (Value*)(*pVVar9)["autorun"];
        cVar3 = pVVar11->isNull();
        if (!cVar3) {
            local_408 = Json::Value(false);
            *local_3e0 = pVVar11->get("enabled");
            cVar3 = local_3e0->asBool();
            if (cVar3) {
                puVar1 = &local_410->field_672;
                puVar1->resize(2);
                local_408 = Json::Value("");
                *local_3e0 = pVVar11->get("user");
                pcVar8 = local_3e0->asCString();
                pbVar12 = (eastl::string*)(*puVar1)[0];
                eastl::string::assign(pbVar12, pcVar8);
                local_408 = Json::Value("");
                *local_3e0 = pVVar11->get("pass");
                pcVar8 = local_3e0->asCString();
                pbVar12 = (eastl::string*)(*puVar1)[1];
                eastl::string::assign(pbVar12, pcVar8);
                pbVar13 = (basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>*)(*puVar1)[0];
                cVar3 = pbVar13->empty();
                if (!cVar3) {
                    pbVar13 =
                        (basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>*)(*puVar1)[1];
                    cVar3 = pbVar13->empty();
                    if (!cVar3) {
                        local_410->field_664 = 1;
                        goto LAB_100ba6857;
                    }
                }
                pLVar10 = logger::default_logger();
                pLVar10->Log(false, 2,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/"
                             "TestRunner.cpp",
                             213, "No direct login credentials found. Not automatically running tests.");
            }
        }
    LAB_100ba6857:
        pVVar9 = (Value*)(*pVVar9)["test_settings"];
        cVar3 = pVVar9->isNull();
        if (!cVar3) {
            local_408 = Json::Value(false);
            *local_3e0 = pVVar9->get("network_supplied_tests");
            cVar3 = local_3e0->asBool();
            if (cVar3)
                goto LAB_100ba68fa;
            pVVar9 = &local_4a8["disk_scripts"];
            cVar3 = pVVar9->isNull();
            if (cVar3) {
                pLVar10 = logger::default_logger();
                uVar21 = 0;
                pLVar10->Log(false, 2,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/"
                             "TestRunner.cpp",
                             257, "No scripts to run. Stopping test runner.");
                goto LAB_100ba6af9;
            }
            for (arg1 = 0; iVar7 = pVVar9->size(), arg1 < iVar7; arg1 = arg1 + 1) {
                pVVar11 = (Value*)(*pVVar9)[arg1];
                pVVar11 = (Value*)(*pVVar11)["name"];
                pVVar18 = (Value*)(*pVVar9)[arg1];
                pVVar18 = (Value*)(*pVVar18)["file"];
                cVar3 = pVVar11->isNull();
                uVar22 = (uint32_t)((unsigned long)in_stack_fffffffffffff988 >> 32);
                if (cVar3) {
                    pLVar10 = logger::default_logger();
                    uVar21 = 0;
                    pLVar10->Log(false, 2,
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/"
                                 "TestRunner.cpp",
                                 268, "No test name found for script at index %d. Stopping test runner.",
                                 (((uint64_t)uVar22 << 32) | (uint32_t)arg1));
                    goto LAB_100ba6af9;
                }
                cVar3 = pVVar18->isNull();
                uVar22 = (uint32_t)((unsigned long)in_stack_fffffffffffff988 >> 32);
                if (cVar3) {
                    pLVar10 = logger::default_logger();
                    uVar21 = 0;
                    pLVar10->Log(false, 2,
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/"
                                 "TestRunner.cpp",
                                 274, "No test file found for script at index %d. Stopping test runner.",
                                 (((uint64_t)uVar22 << 32) | (uint32_t)arg1));
                    goto LAB_100ba6af9;
                }
                pcVar8 = pVVar11->asCString();
                new (local_3e0) eastl::string(pcVar8);
                pcVar8 = pVVar18->asCString();
                new ((local_3e0 + 32)) eastl::string(pcVar8);
                local_3a0 = eastl::fixed_vector<eastl::fixed_string<char, 64>, 8ul>();
                local_418->push_back(*local_3e0);
            }
            pVVar9 = &local_4a8["enabled_disk_tests"];
            cVar3 = pVVar9->isNull();
            if (cVar3) {
                pLVar10 = logger::default_logger();
                uVar21 = 0;
                pLVar10->Log(false, 2,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/"
                             "TestRunner.cpp",
                             285, "No tests enable to run. Stopping test runner.");
                goto LAB_100ba6af9;
            }
            local_440 = pVVar9->begin();
            local_438 = extraout_DL;
            local_460 = pVVar9->end();
            local_458 = extraout_DL_00;
            while (true) {
                cVar3 = local_440 != local_460;
                uVar22 = (uint32_t)((unsigned long)in_stack_fffffffffffff988 >> 32);
                if (!cVar3)
                    break;
                local_420 = (Value*)*local_440;
                pcVar8 = local_420->asCString();
                new (local_3e0) eastl::string(pcVar8);
                pvVar2 = local_418;
                pTVar19 = (TestDescriptor*)local_418->HeapBeginPtr();
                pTVar20 = (TestDescriptor*)pvVar2->end();
                pTVar19 = eastl::find_if<TestDescriptor*, (eastl::stringconst&)->ParseMetadata()::__0>(pTVar19, pTVar20,
                                                                                                       (__0*)local_3e0);
                pTVar20 = (TestDescriptor*)pvVar2->end();
                if (pTVar19 == pTVar20) {
                    pLVar10 = logger::default_logger();
                    in_stack_fffffffffffff988 = local_420->asCString();
                    pLVar10->Log(false, 2,
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/"
                                 "TestRunner.cpp",
                                 311, "Test name (%s) not found in lookup table. Skipping...",
                                 in_stack_fffffffffffff988);
                } else {
                    ReadFileContentsAsString(&local_408, (eastl::string*)&pTVar19->field_32);
                    cVar3 = local_408.empty();
                    if (!cVar3) {
                        tokenize<eastl::fixed_vector<eastl::fixed_string<char, 64>, 8ul>,
                                 eastl::fixed_string<char, 2048>>(
                            (fixed_vector<eastl::fixed_string<char, _64>, _8ul>*)&pTVar19->field_64, &local_408, "\r\n",
                            -1);
                        *(int*)&local_410->field_640 = *(int*)&local_410->field_640 + 1;
                    } else {
                        pLVar10 = logger::default_logger();
                        in_stack_fffffffffffff988 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        pLVar10->Log(false, 2,
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                     "testframework/TestRunner.cpp",
                                     306,
                                     "Source is missing on disk for script (%s). Not added to the enabled test list.",
                                     in_stack_fffffffffffff988);
                    }
                }
                ++local_440;
            }
        } else {
            pLVar10 = logger::default_logger();
            pLVar10->Log(
                false, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/TestRunner.cpp",
                227, "\'test_settings\' not supplied - assuming \'network_supplied_tests:true\' ");
        LAB_100ba68fa:
            puVar1 = &local_410->field_600;
            pVVar9 = (Value*)puVar1->HeapBeginPtr();
            local_420 = (Value*)puVar1->end();
            uVar22 = (uint32_t)((unsigned long)in_stack_fffffffffffff988 >> 32);
            if (pVVar9 != local_420) {
                do {
                    pcVar8 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    new (local_3e0) eastl::string(pcVar8);
                    new ((local_3e0 + 32)) eastl::string("");
                    local_3a0 = eastl::fixed_vector<eastl::fixed_string<char, 64>, 8ul>();
                    pvVar2 = local_418;
                    local_418->push_back(*local_3e0);
                    lVar14 = pvVar2->back();
                    tokenize<eastl::fixed_vector<eastl::fixed_string<char, 64>, 8ul>, eastl::fixed_string<char, 2048>>(
                        (fixed_vector<eastl::fixed_string<char, _64>, _8ul>*)(lVar14 + 64),
                        (fixed_string<char, _1024>*)(pVVar9 + 32), "\r\n", -1);
                    uVar22 = (uint32_t)((unsigned long)in_stack_fffffffffffff988 >> 32);
                    *(int*)&local_410->field_640 = *(int*)&local_410->field_640 + 1;
                    pVVar9 = pVVar9 + 64;
                } while (pVVar9 != local_420);
            }
        }
        pLVar10 = logger::default_logger();
        pcVar8 = ".";
        if (0 < *(int*)&local_410->field_640) {
            pcVar8 = ":";
        }
        pLVar10->Log(
            false, 8,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/TestRunner.cpp", 317,
            "%i tests have been enabled%s", (((uint64_t)uVar22 << 32) | (uint32_t)(*(int*)&local_410->field_640)),
            pcVar8);
        Layout* this_00 = (Layout*)local_418;
        auto pLVar15 = local_418->HeapBeginPtr();
        auto pLVar16 = this_00->end();
        for (; pLVar15 != pLVar16; pLVar15 = pLVar15 + 936) {
            cVar3 = ((pLVar15 + 64))->empty();
            if (!cVar3) {
                pLVar10 = logger::default_logger();
                uVar17 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                pLVar10->Log(false, 8,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/"
                             "TestRunner.cpp",
                             322, "Test : %s", uVar17);
            }
            this_00 = pLVar16;
        }
        uVar21 = (((uint64_t)((int64_t)((unsigned long)this_00 >> 8)) << 8) | (uint8_t)1);
        local_410->field_648->SetConfig(*local_4e0);
    LAB_100ba6af9:
        std::stringstream::~stringstream(&local_660);
        std::string::~string(&local_480);
        return uVar21 & 4294967295;
    }

    // 0x100ba7190
    void TestRunner::LoadMetadataFromRawString(const eastl::string& str) {
        if (str.empty() == '\0') {
            ParseMetadata(str);
        } else {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/"
                      "TestRunner.cpp",
                      97, "MetaData not specified.");
        }
    }

    // 0x100ba71f0
    void TestRunner::RunTests() {
        std::function<void(eastl::vector<TestDescriptor> const&)>::operator()(
            (function<void(eastl::vector<TestDescriptor> const&)>*)this, (vector<TestDescriptor>*)&field_568);
    }

    // 0x100ba7220
    void TestRunner::SignalTestRunCompleted() {
        eastl::string* str;

        if (!(((vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)field_144.SSOBeginPtr())
                  ->empty())) {
            field_184->WriteResults(field_144);
            if ((&field_48)->operator_cast_to_bool()) {
                str = (eastl::string*)field_184->GetPointLightBounds();
                std::function<void(eastl::stringconst&)>::operator()((function<void(eastl::stringconst&)>*)&field_48,
                                                                     str);
            }
        }
        field_656->SetAppRunning((uint8_t)field_656);
    }

    // 0x100ba75a0
    void TestRunner::AddResult(const TestResult& testResult) {
        field_144.AddResult(testResult);
        if (*(int*)&field_640 < 1) {
            LogAssert(
                "m_testsToRun > 0",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/TestRunner.cpp",
                337, "Error - We ran more tests than we initially configured");
        }
        uint8_t* puVar1 = &field_640;
        *(int*)puVar1 = *(int*)puVar1 - 1;
        if (*(int*)puVar1 == 0) {
            SignalTestRunCompleted();
        }
    }

    // 0x100ba7610
    void TestRunner::OnAppCrashed() {
        TestVM* this_00;
        eastl::string local_50;

        if (field_648->IsTestRunning()) {
            this_00 = field_648;
            local_50 = eastl::string("Crash occurred during test.");
            this_00->AssertForce(false, local_50);
            field_648->StopCurrentTest();
        }
        if ((&field_96)->operator_cast_to_bool()) {
            std::function<void()>::operator()((function<void()>*)&field_96);
        }
        SignalTestRunCompleted();
    }

    // 0x100ba7820
    bool TestRunner::ShouldAutorun() const {
        return field_664;
    }

    // 0x100ba7830
    uint8_t* TestRunner::GetAutorunCredentials() const {
        return &field_672;
    }

    // 0x100ba7840
    void TestRunner::SetTestRunnerState(TestRunner::TestRunnerState testRunnerState) {
        m_testRunnerState = testRunnerState;
    }

    // 0x100ba7850
    TestRunnerState TestRunner::GetTestRunnerState() const {
        return m_testRunnerState;
    }

} // namespace jag::testframework
