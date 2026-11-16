// libs/testframework/TestRunner.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.testframework

#include "TestRunner.h"

namespace jag::testframework {
    // 0x100ba5c20, 544 bytes, placed by debug map only (low confidence)
    // ReadFileContentsAsString(eastl::string const&)
    basic_string* ReadFileContentsAsString(basic_string* param_1) {
        char* pcVar2;
        ulong uVar3;
        ulong uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        eastl::string local_190[32];
        allocator local_170[8];
        ClientCompositeZone local_168[13];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        new (local_168) File(pcVar2, 2, 0);
        if (local_168->IsValid() == '\0') {
            uVar6 = logger::default_logger();
            uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            logger::Logger::Log(
                uVar6, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/TestRunner.cpp",
                20, "Failed to open file (%s).", uVar5);
            new (local_190) eastl::allocator("EASTL basic_string");
            new (param_1) eastl::string("", local_190);
        } else {
            uVar3 = local_168->length(0);
            eastl::allocator::allocator(local_170, "EASTL basic_string");
            eastl::string::basic_string(local_190, "", local_170);
            eastl::string::resize(local_190, uVar3);
            pcVar2 = (char*)eastl::string::operator[](local_190, 0);
            uVar4 = local_168->read(pcVar2, (uint)uVar3, 0, 0);
            if (uVar4 == uVar3) {
                new (param_1) eastl::string(local_190);
            } else {
                uVar6 = logger::default_logger();
                logger::Logger::Log(uVar6, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                    "testframework/TestRunner.cpp",
                                    30, "Failed to read file. Read bytes (%zu) differ from file size (%zu).", uVar4,
                                    uVar3);
                eastl::allocator::allocator(local_170, "EASTL basic_string");
                new (param_1) eastl::string("", local_170);
            }
            eastl::string::~basic_string(local_190);
        }
        local_168->~File();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return param_1;
    }

    // 0x100ba5e40, 16 bytes, placed by class name and debug map
    // TestRunner::RegisterTestRunningFunction(std::function<void (eastl::vector<TestDescriptor, eastl::allocator> const&)> const&)
    /* TestRunner::RegisterTestRunningFunction(std::function<void
   (eastl::vector<TestDescriptor, eastl::allocator> const&)> const&) */

    void TestRunner::RegisterTestRunningFunction(function* param_1) {
        std::function<void(eastl::vector<TestDescriptor, eastl::allocator> const&)>::operator=(
            (function<void(eastl::vector<TestDescriptor, eastl::allocator> const&)>*)this, param_1);
    }

    // 0x100ba5eb0, 16 bytes, placed by class name and debug map
    // TestRunner::RegisterTestsCompleteFunction(std::function<void (eastl::string const&)> const&)
    /* TestRunner::RegisterTestsCompleteFunction(std::function<void
   (eastl::string const&)> const&) */

    void TestRunner::RegisterTestsCompleteFunction(function* param_1) {
        std::function<void(eastl::stringconst&)>::operator=((function<void(eastl::stringconst&)>*)&field_48, param_1);
    }

    // 0x100ba5f20, 16 bytes, placed by class name and debug map
    // TestRunner::RegisterAppCrashedFunction(std::function<void ()> const&)
    /* TestRunner::RegisterAppCrashedFunction(std::function<void ()> const&) */

    void TestRunner::RegisterAppCrashedFunction(function* param_1) {
        std::function<void()>::operator=((function<void()>*)&field_96, param_1);
    }

    // 0x100ba5f30, 64 bytes, placed by class name and debug map
    // TestRunner::SetVM(TestVM*)
    void TestRunner::SetVM(TestVM* param_1) {
        undefined8 uVar1;

        if (param_1 == (TestVM*)0) {
            uVar1 = logger::default_logger();
            logger::Logger::Log(
                uVar1, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/TestRunner.cpp",
                56, "VM is null.");
            return;
        }
        m_pVM = param_1;
    }

    // 0x100ba5f70, 64 bytes, placed by class name and debug map
    // TestRunner::SetApp(GraphicsApp*)
    void TestRunner::SetApp(GraphicsApp* param_1) {
        undefined8 uVar1;

        if (param_1 == (GraphicsApp*)0) {
            uVar1 = logger::default_logger();
            logger::Logger::Log(
                uVar1, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/TestRunner.cpp",
                67, "App is null.");
            return;
        }
        m_pApp = param_1;
    }

    // 0x100ba5fb0, 208 bytes, placed by class name and debug map
    // TestRunner::LoadMetadataFromFile(eastl::string const&)
    void TestRunner::LoadMetadataFromFile(basic_string* param_1) {
        char cVar1;
        undefined8 uVar2;
        basic_string local_40[32];

        cVar1 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        if (cVar1 == '\0') {
            ReadFileContentsAsString(local_40);
            cVar1 = eastl::basic_string<
                char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
            if (cVar1 == '\0') {
                ParseMetadata((TestRunner*)param_1, local_40);
            } else {
                uVar2 = logger::default_logger();
                logger::Logger::Log(uVar2, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                    "testframework/TestRunner.cpp",
                                    86, "Metadatafile load error.");
            }
            local_40->~basic_string();
        } else {
            uVar2 = logger::default_logger();
            logger::Logger::Log(
                uVar2, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/TestRunner.cpp",
                78, "Metadata file path is empty.");
        }
    }

    // 0x100ba6080, 4368 bytes, placed by class name and debug map
    // TestRunner::ParseMetadata(eastl::string const&)
    ulong TestRunner::ParseMetadata(basic_string* param_1) {
        undefined1* puVar1;
        Layout* this_00;
        vector<TestDescriptor, eastl::allocator>* pvVar2;
        char cVar3;
        byte bVar4;
        bool bVar5;
        undefined1 uVar6;
        uint uVar7;
        int iVar8;
        char* pcVar9;
        Value* pVVar10;
        undefined8 uVar11;
        Value* pVVar12;
        eastl::string* pbVar13;
        long lVar14;
        Layout* pLVar15;
        Layout* pLVar16;
        undefined8 uVar17;
        Value* pVVar18;
        TestDescriptor* pTVar19;
        TestDescriptor* pTVar20;
        undefined1 extraout_DL;
        undefined1 extraout_DL_00;
        uint extraout_EDX;
        char* extraout_RDX;
        int iVar21;
        ulong uVar22;
        undefined8 in_stack_fffffffffffff988;
        undefined4 uVar23;
        stringstream local_660[280];
        CharReaderBuilder local_548[48];
        TestConfig local_518;
        undefined1 local_4e0[48];
        undefined4 local_4b0;
        Value local_4a8[40];
        string local_480[24];
        allocator local_468[8];
        undefined8 local_460;
        undefined1 local_458;
        undefined8 local_440;
        undefined1 local_438;
        Value* local_420;
        vector<TestDescriptor, eastl::allocator>* local_418;
        TestRunner* local_410;
        Value local_408[40];
        undefined1 local_3e0[64];
        fixed_vector<eastl::fixed_string<char, 64, true, eastl::allocator>, 8ul, true, eastl::allocator> local_3a0[872];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_418 = (vector<TestDescriptor, eastl::allocator>*)&field_568;
        local_410 = this;
        eastl::vector<TestDescriptor, eastl::allocator>::clear(local_418);
        new (local_4e0) TestConfig();
        Json::CharReaderBuilder::CharReaderBuilder(local_548);
        std::string::string(local_480);
        new (&local_518) TestConfig();
        pcVar9 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        std::string::string<decltype(nullptr)>((string*)local_3e0, pcVar9);
        std::stringstream::stringstream(local_660, (string*)local_3e0, extraout_EDX);
        local_3e0->~string();
        Json::Value::Value(local_4a8, 0);
        cVar3 = Json::parseFromStream((Factory*)local_548, (istream*)local_660, local_4a8, local_480);
        if (cVar3 == '\0') {
            uVar11 = logger::default_logger();
            uVar17 = std::string::c_str(local_480);
            uVar22 = 0;
            logger::Logger::Log(
                uVar11, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/TestRunner.cpp",
                143, "Failed to parse metadata file. Errors: %s", uVar17);
            goto LAB_100ba6af9;
        }
        local_4e0[0] = 1;
        pVVar10 = (Value*)Json::Value::operator[](local_4a8, "configuration");
        cVar3 = Json::Value::isNull(pVVar10);
        if (cVar3 != '\0') {
            uVar11 = logger::default_logger();
            uVar22 = 0;
            logger::Logger::Log(
                uVar11, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/TestRunner.cpp",
                154, "No configuration found. Stopping test runner.");
            goto LAB_100ba6af9;
        }
        pVVar12 = (Value*)Json::Value::operator[](pVVar10, "console_display");
        cVar3 = Json::Value::isNull(pVVar12);
        if (cVar3 == '\0') {
            Json::Value::Value(local_408, false);
            local_3e0->get(pVVar12, (Value*)"display_asserts");
            uVar7 = local_3e0->asBool();
            local_3e0->~Value();
            Json::Value::~Value(local_408);
            Json::Value::Value(local_408, false);
            local_3e0->get(pVVar12, (Value*)"display_test_results");
            bVar4 = local_3e0->asBool();
            local_3e0->~Value();
            Json::Value::~Value(local_408);
            local_4e0._4_4_ = (uVar7 & 255) + (uint)bVar4 * 2;
        }
        pVVar12 = (Value*)Json::Value::operator[](pVVar10, "vm");
        cVar3 = Json::Value::isNull(pVVar12);
        if (cVar3 == '\0') {
            Json::Value::Value(local_408, (bool)local_518.field_8);
            local_3e0->get(pVVar12, (Value*)"use_image_diff");
            local_4e0[8] = local_3e0->asBool();
            local_3e0->~Value();
            Json::Value::~Value(local_408);
            pcVar9 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            Json::Value::Value(local_408, pcVar9);
            local_3e0->get(pVVar12, (Value*)"image_diff_server_address");
            pcVar9 = (char*)local_3e0->asCString();
            ((local_4e0 + 16))->assign(pcVar9);
            local_3e0->~Value();
            Json::Value::~Value(local_408);
            Json::Value::Value(local_408, local_518.field_48);
            local_3e0->get(pVVar12, (Value*)"image_diff_server_port");
            local_4b0 = Json::Value::asInt();
            local_3e0->~Value();
            Json::Value::~Value(local_408);
        }
        pVVar12 = (Value*)Json::Value::operator[](pVVar10, "results");
        cVar3 = Json::Value::isNull(pVVar12);
        if (cVar3 == '\0') {
            Json::Value::Value(local_408, "");
            local_3e0->get(pVVar12, (Value*)"format");
            pcVar9 = (char*)local_3e0->asCString();
            new (&local_460) eastl::allocator("EASTL basic_string");
            new (&local_440) eastl::string(pcVar9, (allocator*)&local_460);
            local_3e0->~Value();
            Json::Value::~Value(local_408);
            eastl::string::make_lower();
            bVar5 = eastl::operator==((eastl*)&local_440, (basic_string*)"junit", extraout_RDX);
            Json::Value::Value(local_408, false);
            local_3e0->get(pVVar12, (Value*)"write_to_network");
            uVar6 = local_3e0->asBool();
            local_410->field_665 = uVar6;
            local_3e0->~Value();
            Json::Value::~Value(local_408);
            Json::Value::Value(local_408, false);
            local_3e0->get(pVVar12, (Value*)"write_to_file");
            cVar3 = local_3e0->asBool();
            local_3e0->~Value();
            Json::Value::~Value(local_408);
            if (cVar3 != '\0') {
                Json::Value::Value(local_408, "results.xml");
                local_3e0->get(pVVar12, (Value*)"filename");
                pcVar9 = (char*)local_3e0->asCString();
                eastl::allocator::allocator(local_468, "EASTL basic_string");
                new (&local_460) eastl::string(pcVar9, local_468);
                (local_410->field_184, &local_460, !bVar5)->InitWriter();
                local_460.~basic_string();
                local_3e0->~Value();
                Json::Value::~Value(local_408);
            }
            if (local_410->field_665 == '\0' && cVar3 == '\0') {
                uVar11 = logger::default_logger();
                logger::Logger::Log(uVar11, 0, 3,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                    "testframework/TestRunner.cpp",
                                    198, "Warning - no output specified for test results");
            }
            local_440.~basic_string();
        }
        pVVar12 = (Value*)Json::Value::operator[](pVVar10, "autorun");
        cVar3 = Json::Value::isNull(pVVar12);
        if (cVar3 == '\0') {
            Json::Value::Value(local_408, false);
            local_3e0->get(pVVar12, (Value*)"enabled");
            cVar3 = local_3e0->asBool();
            local_3e0->~Value();
            Json::Value::~Value(local_408);
            if (cVar3 != '\0') {
                puVar1 = &local_410->field_672;
                puVar1->resize(2);
                Json::Value::Value(local_408, "");
                local_3e0->get(pVVar12, (Value*)&DAT_100e3d1a9);
                pcVar9 = (char*)local_3e0->asCString();
                pbVar13 = (eastl::string*)eastl::vector<eastl::string, eastl::allocator>::operator[](
                    (vector<eastl::string, eastl::allocator>*)puVar1, 0);
                eastl::string::assign(pbVar13, pcVar9);
                local_3e0->~Value();
                Json::Value::~Value(local_408);
                Json::Value::Value(local_408, "");
                local_3e0->get(pVVar12, (Value*)&DAT_100e3d1ae);
                pcVar9 = (char*)local_3e0->asCString();
                pbVar13 = (eastl::string*)eastl::vector<eastl::string, eastl::allocator>::operator[](
                    (vector<eastl::string, eastl::allocator>*)puVar1, 1);
                eastl::string::assign(pbVar13, pcVar9);
                local_3e0->~Value();
                Json::Value::~Value(local_408);
                eastl::vector<eastl::string, eastl::allocator>::operator[](
                    (vector<eastl::string, eastl::allocator>*)puVar1, 0);
                cVar3 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
                if (cVar3 == '\0') {
                    eastl::vector<eastl::string, eastl::allocator>::operator[](
                        (vector<eastl::string, eastl::allocator>*)puVar1, 1);
                    cVar3 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
                    if (cVar3 == '\0') {
                        local_410->field_664 = 1;
                        goto LAB_100ba6857;
                    }
                }
                uVar11 = logger::default_logger();
                logger::Logger::Log(uVar11, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                    "testframework/TestRunner.cpp",
                                    213, "No direct login credentials found. Not automatically running tests.");
            }
        }
    LAB_100ba6857:
        pVVar10 = (Value*)Json::Value::operator[](pVVar10, "test_settings");
        cVar3 = Json::Value::isNull(pVVar10);
        if (cVar3 == '\0') {
            Json::Value::Value(local_408, false);
            local_3e0->get(pVVar10, (Value*)"network_supplied_tests");
            cVar3 = local_3e0->asBool();
            local_3e0->~Value();
            Json::Value::~Value(local_408);
            if (cVar3 != '\0')
                goto LAB_100ba68fa;
            pVVar10 = (Value*)Json::Value::operator[](local_4a8, "disk_scripts");
            cVar3 = Json::Value::isNull(pVVar10);
            if (cVar3 != '\0') {
                uVar11 = logger::default_logger();
                uVar22 = 0;
                logger::Logger::Log(uVar11, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                    "testframework/TestRunner.cpp",
                                    257, "No scripts to run. Stopping test runner.");
                goto LAB_100ba6af9;
            }
            for (iVar21 = 0; iVar8 = Json::Value::size(pVVar10), iVar21 < iVar8; iVar21 = iVar21 + 1) {
                pVVar12 = (Value*)Json::Value::operator[](pVVar10, iVar21);
                pVVar12 = (Value*)Json::Value::operator[](pVVar12, "name");
                pVVar18 = (Value*)Json::Value::operator[](pVVar10, iVar21);
                pVVar18 = (Value*)Json::Value::operator[](pVVar18, "file");
                cVar3 = Json::Value::isNull(pVVar12);
                uVar23 = (undefined4)((ulong)in_stack_fffffffffffff988 >> 32);
                if (cVar3 != '\0') {
                    uVar11 = logger::default_logger();
                    uVar22 = 0;
                    logger::Logger::Log(uVar11, 0, 2,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "testframework/TestRunner.cpp",
                                        268, "No test name found for script at index %d. Stopping test runner.",
                                        CONCAT44(uVar23, iVar21));
                    goto LAB_100ba6af9;
                }
                cVar3 = Json::Value::isNull(pVVar18);
                uVar23 = (undefined4)((ulong)in_stack_fffffffffffff988 >> 32);
                if (cVar3 != '\0') {
                    uVar11 = logger::default_logger();
                    uVar22 = 0;
                    logger::Logger::Log(uVar11, 0, 2,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "testframework/TestRunner.cpp",
                                        274, "No test file found for script at index %d. Stopping test runner.",
                                        CONCAT44(uVar23, iVar21));
                    goto LAB_100ba6af9;
                }
                pcVar9 = (char*)Json::Value::asCString(pVVar12);
                new (local_408) eastl::allocator("EASTL basic_string");
                new (local_3e0) eastl::string(pcVar9, local_408);
                pcVar9 = (char*)Json::Value::asCString(pVVar18);
                new (&local_440) eastl::allocator("EASTL basic_string");
                new ((local_3e0 + 32)) eastl::string(pcVar9, (allocator*)&local_440);
                eastl::fixed_vector<eastl::fixed_string<char, 64, true, eastl::allocator>, 8ul, true,
                                    eastl::allocator>::fixed_vector(local_3a0);
                eastl::vector<TestDescriptor, eastl::allocator>::push_back(local_418, (TestDescriptor*)local_3e0);
                local_3e0->~TestDescriptor();
            }
            pVVar10 = (Value*)Json::Value::operator[](local_4a8, "enabled_disk_tests");
            cVar3 = Json::Value::isNull(pVVar10);
            if (cVar3 != '\0') {
                uVar11 = logger::default_logger();
                uVar22 = 0;
                logger::Logger::Log(uVar11, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                    "testframework/TestRunner.cpp",
                                    285, "No tests enable to run. Stopping test runner.");
                goto LAB_100ba6af9;
            }
            local_440 = Json::Value::begin(pVVar10);
            local_438 = extraout_DL;
            local_460 = Json::Value::end(pVVar10);
            local_458 = extraout_DL_00;
            while (true) {
                cVar3 =
                    Json::ValueIteratorBase::operator!=((ValueIteratorBase*)&local_440, (ValueIteratorBase*)&local_460);
                uVar23 = (undefined4)((ulong)in_stack_fffffffffffff988 >> 32);
                if (cVar3 == '\0')
                    break;
                local_420 = (Value*)Json::ValueConstIterator::operator*((ValueConstIterator*)&local_440);
                pcVar9 = (char*)Json::Value::asCString(local_420);
                new (local_408) eastl::allocator("EASTL basic_string");
                new (local_3e0) eastl::string(pcVar9, local_408);
                pvVar2 = local_418;
                uVar11 = local_418->HeapBeginPtr();
                uVar17 = pvVar2->end();
                pTVar19 = eastl::find_if<TestDescriptor*, (eastl::stringconst&)->ParseMetadata()::__0>(
                    uVar11, uVar17, (eastl::string*)local_3e0);
                pTVar20 = (TestDescriptor*)pvVar2->end();
                if (pTVar19 == pTVar20) {
                    uVar11 = logger::default_logger();
                    in_stack_fffffffffffff988 = Json::Value::asCString(local_420);
                    logger::Logger::Log(uVar11, 0, 2,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "testframework/TestRunner.cpp",
                                        311, "Test name (%s) not found in lookup table. Skipping...",
                                        in_stack_fffffffffffff988);
                } else {
                    ReadFileContentsAsString((basic_string*)local_408);
                    cVar3 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
                    if (cVar3 == '\0') {
                        tokenize<eastl::fixed_vector<eastl::fixed_string<char, 64, true, eastl::allocator>, 8ul, true,
                                                     eastl::allocator>,
                                 eastl::fixed_string<char, 2048, true, eastl::allocator>>(
                            (fixed_vector*)&pTVar19->field_64, (fixed_string*)local_408, "\r\n", -1);
                        *(int*)&local_410->field_640 = *(int*)&local_410->field_640 + 1;
                    } else {
                        uVar11 = logger::default_logger();
                        in_stack_fffffffffffff988 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        logger::Logger::Log(
                            uVar11, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/"
                            "TestRunner.cpp",
                            306, "Source is missing on disk for script (%s). Not added to the enabled test list.",
                            in_stack_fffffffffffff988);
                    }
                    local_408->~basic_string();
                }
                local_3e0->~basic_string();
                Json::ValueConstIterator::operator++((ValueConstIterator*)&local_440);
            }
        } else {
            uVar11 = logger::default_logger();
            logger::Logger::Log(
                uVar11, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/TestRunner.cpp",
                227, "\'test_settings\' not supplied - assuming \'network_supplied_tests:true\' ");
        LAB_100ba68fa:
            puVar1 = &local_410->field_600;
            pVVar10 = (Value*)puVar1->HeapBeginPtr();
            local_420 = (Value*)puVar1->end();
            uVar23 = (undefined4)((ulong)in_stack_fffffffffffff988 >> 32);
            if (pVVar10 != local_420) {
                do {
                    pcVar9 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    new (local_408) eastl::allocator("EASTL basic_string");
                    new (local_3e0) eastl::string(pcVar9, local_408);
                    new (&local_440) eastl::allocator("EASTL basic_string");
                    new ((local_3e0 + 32)) eastl::string("", (allocator*)&local_440);
                    eastl::fixed_vector<eastl::fixed_string<char, 64, true, eastl::allocator>, 8ul, true,
                                        eastl::allocator>::fixed_vector(local_3a0);
                    pvVar2 = local_418;
                    eastl::vector<TestDescriptor, eastl::allocator>::push_back(local_418, (TestDescriptor*)local_3e0);
                    local_3e0->~TestDescriptor();
                    lVar14 = eastl::vector<TestDescriptor, eastl::allocator>::back(pvVar2);
                    tokenize<eastl::fixed_vector<eastl::fixed_string<char, 64, true, eastl::allocator>, 8ul, true,
                                                 eastl::allocator>,
                             eastl::fixed_string<char, 2048, true, eastl::allocator>>(
                        (fixed_vector*)(lVar14 + 64), (fixed_string*)(pVVar10 + 32), "\r\n", -1);
                    uVar23 = (undefined4)((ulong)in_stack_fffffffffffff988 >> 32);
                    *(int*)&local_410->field_640 = *(int*)&local_410->field_640 + 1;
                    pVVar10 = pVVar10 + 64;
                } while (pVVar10 != local_420);
            }
        }
        uVar11 = logger::default_logger();
        pcVar9 = ".";
        if (0 < *(int*)&local_410->field_640) {
            pcVar9 = ":";
        }
        logger::Logger::Log(
            uVar11, 0, 8,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/TestRunner.cpp", 317,
            "%i tests have been enabled%s", CONCAT44(uVar23, *(int*)&local_410->field_640), pcVar9);
        this_00 = (Layout*)local_418;
        pLVar15 = (Layout*)local_418->HeapBeginPtr();
        pLVar16 = (Layout*)this_00->end();
        for (; pLVar15 != pLVar16; pLVar15 = pLVar15 + 936) {
            cVar3 = ((pLVar15 + 64))->empty();
            if (cVar3 == '\0') {
                uVar11 = logger::default_logger();
                uVar17 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                logger::Logger::Log(uVar11, 0, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                    "testframework/TestRunner.cpp",
                                    322, "Test : %s", uVar17);
            }
            this_00 = pLVar16;
        }
        uVar22 = CONCAT71((int7)((ulong)this_00 >> 8), 1);
        (local_410->m_pVM, (TestConfig*)local_4e0)->SetConfig();
    LAB_100ba6af9:
        Json::Value::~Value(local_4a8);
        std::stringstream::~stringstream(local_660);
        local_518.~ObjSpriteCacheKey();
        std::string::~string(local_480);
        Json::CharReaderBuilder::~CharReaderBuilder(local_548);
        local_4e0->~ObjSpriteCacheKey();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar22 & 4294967295;
    }

    // 0x100ba7190, 96 bytes, placed by class name and debug map
    // TestRunner::LoadMetadataFromRawString(eastl::string const&)
    void TestRunner::LoadMetadataFromRawString(basic_string* param_1) {
        undefined8 uVar2;
        basic_string* in_RSI;

        if (eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty() ==
            '\0') {
            ParseMetadata((TestRunner*)param_1, in_RSI);
        } else {
            uVar2 = logger::default_logger();
            logger::Logger::Log(
                uVar2, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/TestRunner.cpp",
                97, "MetaData not specified.");
        }
    }

    // 0x100ba71f0, 32 bytes, placed by class name and debug map
    // TestRunner::RunTests()
    void TestRunner::RunTests() {
        std::function<void(eastl::vector<TestDescriptor, eastl::allocator> const&)>::operator()(
            (function<void(eastl::vector<TestDescriptor, eastl::allocator> const&)>*)this, (vector*)&field_568);
    }

    // 0x100ba7220, 128 bytes, placed by class name and debug map
    // TestRunner::SignalTestRunCompleted()
    void TestRunner::SignalTestRunCompleted() {
        char cVar1;
        vector* this_00;
        basic_string* pbVar3;
        type* in_RSI;

        this_00 = (&field_144, in_RSI)->SSOBeginPtr();
        cVar1 = this_00->empty();
        if (cVar1 == '\0') {
            (field_184, (TestResults*)&field_144)->WriteResults();
            if ((&field_48)->operator_cast_to_bool()) {
                pbVar3 = (basic_string*)field_184->GetPointLightBounds();
                std::function<void(eastl::stringconst&)>::operator()((function<void(eastl::stringconst&)>*)&field_48,
                                                                     pbVar3);
            }
        }
        (*(code*)m_pApp->field_0[10])(m_pApp, 0);
    }

    // 0x100ba75a0, 112 bytes, placed by class name
    // TestRunner::AddResult(TestResult const&)
    void TestRunner::AddResult(TestResult* param_1) {
        undefined1* puVar1;

        (&field_144, param_1)->AddResult();
        if (*(int*)&field_640 < 1) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "m_testsToRun > 0",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/testframework/TestRunner.cpp",
                337, "Error - We ran more tests than we initially configured");
        }
        puVar1 = &field_640;
        *(int*)puVar1 = *(int*)puVar1 + -1;
        if (*(int*)puVar1 == 0) {
            SignalTestRunCompleted(this);
        }
    }

    // 0x100ba7610, 192 bytes, placed by class name
    // TestRunner::OnAppCrashed()
    void TestRunner::OnAppCrashed() {
        TestVM* this_00;
        eastl::string local_50[32];
        allocator local_30[8];

        if (m_pVM->IsTestRunning() != '\0') {
            this_00 = m_pVM;
            eastl::allocator::allocator(local_30, "EASTL basic_string");
            eastl::string::basic_string(local_50, "Crash occurred during test.", local_30);
            this_00->AssertForce(false, local_50);
            eastl::string::~basic_string(local_50);
            m_pVM->StopCurrentTest();
        }
        if ((&field_96)->operator_cast_to_bool()) {
            std::function<void()>::operator()((function<void()>*)&field_96);
        }
        SignalTestRunCompleted(this);
    }

    // 0x100ba7820, 16 bytes, placed by class name
    // TestRunner::ShouldAutorun() const
    undefined1 TestRunner::ShouldAutorun() {
        return field_664;
    }

    // 0x100ba7830, 16 bytes, placed by class name
    // TestRunner::GetAutorunCredentials() const
    undefined1* TestRunner::GetAutorunCredentials() {
        return &field_672;
    }

    // 0x100ba7840, 16 bytes, placed by class name
    // TestRunner::SetTestRunnerState(TestRunner::TestRunnerState)
    void TestRunner::SetTestRunnerState(undefined4 param_2) {
        m_testRunnerState = param_2;
    }

    // 0x100ba7850, 16 bytes, placed by class name
    // TestRunner::GetTestRunnerState() const
    undefined4 TestRunner::GetTestRunnerState() {
        return m_testRunnerState;
    }

} // namespace jag::testframework
