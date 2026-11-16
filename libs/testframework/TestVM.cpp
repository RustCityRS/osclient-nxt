// libs/testframework/TestVM.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.testframework

#include "TestVM.h"

namespace jag::testframework {
    // 0x100009e70: TestVM::OnTestEnded() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: TestVM::DisplayError(eastl::string const&, int) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: TestVM::DisplayAssert(TestAssertionResult const&) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: TestVM::DisplayResult() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: TestVM::OnTestStarted() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100024070: TestVM::ImageAssertRequest::~ImageAssertRequest() has the same machine code as eastl::pair<eastl::string, oldscape::option::IOption*>::~pair()

    // 0x10002dfe0: TestVM::ImageAssertRequest::~ImageAssertRequest() has the same machine code as eastl::hash_node<eastl::string, false>::~hash_node()

    // 0x100ba76e0
    void TestVM::AssertForce(bool arg1, const eastl::string& str) {

        eastl::string local_58("");
        AssertResult((unsigned int)!arg1 * 2, str, local_58, -1);
    }

    // 0x100ba7770
    void TestVM::StopCurrentTest() {
        eastl::string local_48;

        if (field_104[0] != '\0') {
            if (m_testRunning == '\0') {
                local_48 = eastl::string("Test already stopped. Cannot display result.");
                DisplayAssert(&local_48, 4294967295);
            } else {
                DisplayAssert();
                DisplayAssert();
                Reset();
            }
        }
    }

    // 0x100ba7860
    void Base64EncodePNG(void* arg1, void* arg2, int arg3) {
        Base64::Instance()->EncodeAlt(*arg1, arg2, (long)arg3);
    }

    // 0x100ba78a0
    TestVM::TestVM(console::Console* console) {
        char* local_48 = "lessthan_equals";
        char* pcStack_40 = "greaterthan_equals";
        char* local_58 = "lessthan";
        char* pcStack_50 = "greaterthan";
        char* local_68 = "equals";
        char* pcStack_60 = "notequals";
        new (&field_8) eastl::fixed_vector<char const*, 6ul>(&local_68, *6);
        field_96 = console;
        new (field_104) TestConfig();
        new (&local_68) eastl::string("");
        new (&field_160) Test(local_68);
        m_testRunning = 0;
        new (&field_272) eastl::vector<TestVM::ImageAssertRequest>();
    }

    // 0x100ba7a30
    void TestVM::StartTest(const eastl::string& str) {
        uint64_t uVar1;
        char* str_00;
        Test local_a8;
        eastl::string local_40;

        if (field_104[0] != '\0') {
            if (m_testRunning == '\0') {
                local_a8 = Test(str);
                field_160 = local_a8;
                m_testRunning = 1;
                DisplayAssert();
            } else {
                local_a8 = eastl::string();
                field_160.getTestName();
                uVar1 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                local_a8.sprintf("Test already started. Current running test: %s", uVar1);
                str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                local_40 = eastl::string(str_00);
                DisplayAssert(&local_40, 4294967295);
            }
        }
    }

    // 0x100ba7b90
    void TestVM::AssertResult(TestAssertionResult::Result result, const eastl::string& str1, const eastl::string& str2,
                              int arg4) {
        uint8_t local_80[64];

        new (local_80) TestAssertionResult();
        *local_80 = str1;
        int local_40 = arg4;
        if (result == 2) {
            (*((local_80 + 32))) = str2;
        }
        field_160.addResult(*local_80);
        DisplayAssert(local_80);
    }

    // 0x100ba7c30
    void TestVM::AssertInt(TestVM::AssertionOperator assertionOperator, int arg2, int arg3) {
        int iVar1;
        uint64_t* puVar3;
        optional<std::variant<int, unsigned int, bool, float, eastl::string, console::VarAny> _>* arg1;
        variant<int, unsigned int, bool, float, eastl::string, console::VarAny>* pvVar4;
        int* piVar5;
        int* piVar6;
        eastl::string* this_00;
        bool bVar7;
        eastl::string local_f8;
        eastl::string local_d8;
        optional<std::variant<int, unsigned int, bool, float, eastl::string, console::VarAny>> local_b0;

        if (field_104[0] != '\0') {
            if (m_testRunning == '\0') {
                local_b0 = eastl::string("Test not started.");
                DisplayAssert(&local_b0, 4294967295);
                this_00 = &local_b0;
            } else {
                local_f8 = eastl::string();
                local_d8 = eastl::string();
                puVar3 = &field_8[(unsigned long)assertionOperator];
                local_f8.sprintf("assert_int_%s", *puVar3);
                arg1 = (optional<std::variant<int, unsigned int, bool, float, eastl::string, console::VarAny> _>*)
                           field_96->GetScaledMousePosition();
                local_b0 =
                    std::optional<std::variant<int, unsigned int, bool, float, eastl::string, console::VarAny>>(*arg1);
                if (std::optional::operator_cast_to_bool(&local_b0) == '\0') {
                    local_d8.sprintf("Expected: %d. Actual: <missing>", (unsigned long)(unsigned int)arg2);
                    AssertResult(2, local_f8, local_d8, arg3);
                } else {
                    pvVar4 = (variant<int, unsigned int, bool, float, eastl::string, console::VarAny>*)local_b0.value();
                    piVar5 =
                        (int*)std::get_if<int, int, unsigned int, bool, float, eastl::string, console::VarAny>(pvVar4);
                    pvVar4 = (variant<int, unsigned int, bool, float, eastl::string, console::VarAny>*)local_b0.value();
                    piVar6 =
                        (int*)std::get_if<unsigned int, int, unsigned int, bool, float, eastl::string, console::VarAny>(
                            pvVar4);
                    if (piVar5 == nullptr && piVar6 == nullptr) {
                        local_d8.sprintf("Expected: %d. Actual: <invalid type>", (unsigned long)(unsigned int)arg2);
                        AssertResult(2, local_f8, local_d8, arg3);
                    } else {
                        if (piVar5 != nullptr) {
                            piVar6 = piVar5;
                        }
                        iVar1 = *piVar6;
                        switch ((unsigned long)assertionOperator) {
                        case 0:
                            bVar7 = iVar1 == arg2;
                            break;
                        case 1:
                            bVar7 = iVar1 != arg2;
                            break;
                        case 2:
                            bVar7 = iVar1 < arg2;
                            break;
                        case 3:
                            bVar7 = arg2 < iVar1;
                            break;
                        case 4:
                            bVar7 = iVar1 <= arg2;
                            break;
                        case 5:
                            bVar7 = arg2 <= iVar1;
                            break;
                        default:
                            bVar7 = false;
                        }
                        local_d8.sprintf("Expected: %d. Actual: %d", (unsigned long)(unsigned int)arg2);
                        AssertResult((unsigned int)(bVar7 ^ 1) * 2, local_f8, local_d8, arg3);
                    }
                }
                this_00 = &local_f8;
            }
            this_00->~basic_string();
        }
    }

    // 0x100ba7ff0
    void TestVM::AssertFloat(TestVM::AssertionOperator assertionOperator, float arg2, int arg3) {
        eastl::string* this_00;
        bool bVar4;
        bool bVar5;
        float fVar6;

        if (field_104[0] == '\0')
            goto LAB_100ba82c1;
        if (m_testRunning == '\0') {
            local_b0 = eastl::string("Test not started.");
            DisplayAssert(&local_b0, (unsigned long)(unsigned int)arg3);
            this_00 = &local_b0;
            goto LAB_100ba82bc;
        }
        eastl::string local_f8;
        eastl::string local_d8;
        uint64_t* puVar2 = &field_8[(unsigned long)assertionOperator];
        local_f8.sprintf("assert_float_%s", *puVar2);
        auto arg1 = field_96->GetScaledMousePosition();
        optional<std::variant<int, unsigned int, bool, float, eastl::string, console::VarAny>> local_b0(*arg1);
        if (std::optional::operator_cast_to_bool(&local_b0) == '\0') {
            local_d8.sprintf("Expected: %4.5f. Actual: <missing>", (double)arg2);
            AssertResult(2, local_f8, local_d8, arg3);
            goto LAB_100ba829d;
        }
        auto arg1_00 = local_b0.value();
        auto pfVar3 = std::get_if<float, int, unsigned int, bool, float, eastl::string, console::VarAny>(arg1_00);
        if (pfVar3 == nullptr) {
            local_d8.sprintf("Expected: %4.5f. Actual: <invalid type>", (double)arg2);
            AssertResult(2, local_f8, local_d8, arg3);
            goto LAB_100ba829d;
        }
        switch ((unsigned long)assertionOperator) {
        case 0:
            fVar6 = (float)::abs(*pfVar3 - arg2);
            bVar5 = fVar6 == 1.1920929e-07;
            bVar4 = fVar6 < 1.1920929e-07;
            goto LAB_100ba8253;
        case 1:
            fVar6 = (float)::abs(*pfVar3 - arg2);
            bVar4 = 1.1920929e-07 < fVar6;
            break;
        case 2:
            bVar4 = *pfVar3 <= arg2 && arg2 != *pfVar3;
            break;
        case 3:
            bVar4 = arg2 < *pfVar3;
            break;
        case 4:
            bVar4 = *pfVar3 <= arg2;
            break;
        case 5:
            bVar5 = arg2 == *pfVar3;
            bVar4 = arg2 < *pfVar3;
        LAB_100ba8253:
            bVar4 = bVar4 || bVar5;
            break;
        default:
            bVar4 = false;
        }
        local_d8.sprintf("Expected: %4.5f. Actual: %4.5f", (double)arg2, (double)*pfVar3);
        AssertResult((unsigned int)(bVar4 ^ 1) * 2, local_f8, local_d8, arg3);
    LAB_100ba829d:
        this_00 = &local_f8;
    LAB_100ba82bc:
        this_00->~basic_string();
    LAB_100ba82c1:
    }

    // 0x100ba8370
    void TestVM::AssertImageRequest(const eastl::string& str, double arg2, int arg3) {
        ImageAssertRequest local_58;

        if (field_104[0] != '\0') {
            local_58 = eastl::string(str);
            local_58.field_32 = arg2;
            local_58.field_40 = arg3;
            field_272.push_back(local_58);
        }
    }

    // 0x100ba8450
    void TestVM::ResolveImageAssertions(unsigned char* arg1, unsigned int arg2, unsigned int arg3) {
        int iVar3;
        uint64_t uVar4;
        long lVar5;
        Array<unsigned char>* arg2_00;
        Value* pVVar6;
        char* pcVar7;
        uint32_t in_register_00000014;
        Value local_478;
        ReturnValue local_460;
        eastl::string local_438;
        eastl::string local_418;
        eastl::string local_3f8;
        Value local_3d8;
        eastl::string local_3b0;
        eastl::string local_390;
        eastl::string local_370;
        eastl::string local_350;
        long local_328;
        vector<TestVM::ImageAssertRequest>* local_320;
        Value local_318;
        int local_2e4;
        char local_2d1;
        HTTPRequest local_2d0;

        uint64_t local_2f0 = (((uint64_t)in_register_00000014 << 32) | (uint32_t)arg2);
        uint8_t* this_00 = &field_272;
        bool cVar2 = this_00->empty();
        if (!cVar2) {
            local_370 = eastl::string();
            local_3b0 = eastl::string();
            local_2d0 = http::HTTPRequest(0);
            local_390 = eastl::string();
            uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_390.sprintf("%s:%d/diff", uVar4, (unsigned long)*(unsigned int*)(field_104 + 48));
            lVar5 = this_00->HeapBeginPtr();
            local_320 = (vector<TestVM::ImageAssertRequest>*)this_00;
            local_328 = this_00->end();
            if (lVar5 != local_328) {
                local_2e4 = (int)local_2f0 * 4;
                do {
                    local_350 = eastl::string("");
                    uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    local_370.sprintf("assert_image(%s)", uVar4);
                    local_418 = eastl::string();
                    local_418.sprintf("%4.5f", *(uint64_t*)(lVar5 + 32));
                    _stbi_flip_vertically_on_write(1);
                    local_3f8 = eastl::string();
                    iVar3 = _stbi_write_png_to_func(Base64EncodePNG, &local_3f8, local_2f0, arg3, 4, arg1, local_2e4);
                    if (iVar3 == 0) {
                        local_318 = eastl::string("Failed to write PNG to memory for framebuffer");
                        DisplayAssert(&local_318, (unsigned long)*(unsigned int*)(lVar5 + 40));
                    } else {
                        local_438 = eastl::string();
                        uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        local_438.append_sprintf("&%s=%s", "groundtruth", uVar4);
                        uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        local_438.append_sprintf("&%s=%s", "threshold", uVar4);
                        uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        local_438.append_sprintf("&%s=%s", &DAT_100e3d67e, uVar4);
                        local_2d0.Post(&local_390, &local_438);
                        while (true) {
                            cVar2 = local_2d0.IsRequestComplete();
                            if (cVar2)
                                break;
                            this_thread::Sleep(1);
                        }
                        local_318 = Json::Value(0);
                        iVar3 = local_2d0.GetState();
                        if (iVar3 == 2) {
                            uVar4 = local_2d0.GetErrorInformation();
                            local_350.sprintf("Image Diff HTTP Request Failed: %s", uVar4);
                            DisplayAssert(&local_350, (unsigned long)*(unsigned int*)(lVar5 + 40));
                        } else {
                            arg2_00 = (Array<unsigned char>*)local_2d0.GetMSAASampleCount();
                            http::DecodeJSONResponseFromArray(local_318, *arg2_00);
                            local_3d8 = Json::Value("");
                            local_460 = local_318.get("error", &local_3d8);
                            Json::Value::asString(&local_478);
                            local_2d1 = std::string::empty(&local_478);
                            std::string::~string(&local_478);
                            if (local_2d1 == '\0') {
                                pVVar6 = &local_318["error"];
                                pcVar7 = pVVar6->asCString();
                                local_350.sprintf("Image Diff Failed: %s", pcVar7);
                                DisplayAssert(&local_350, (unsigned long)*(unsigned int*)(lVar5 + 40));
                            } else {
                                pVVar6 = &local_318["score"];
                                uVar4 = pVVar6->asDouble();
                                local_3b0.sprintf("Expected: >= %4.5f. Actual: %4.5f", 1.0 - *(double*)(lVar5 + 32),
                                                  uVar4);
                            }
                        }
                        cVar2 = local_350.empty();
                        if (!cVar2) {
                            AssertResult(2, local_370, local_350, *(int*)(lVar5 + 40));
                        } else {
                            local_3d8 = Json::Value(0);
                            local_460 = local_318.get("result", &local_3d8);
                            iVar3 = local_460.asInt();
                            AssertResult((unsigned int)(iVar3 != 1) * 2, local_370, local_3b0, *(int*)(lVar5 + 40));
                        }
                    }
                    lVar5 = lVar5 + 48;
                } while (lVar5 != local_328);
            }
            local_320->clear();
        }
    }

    // 0x100ba8bd0
    void TestVM::Reset() {
        m_testRunning = 0;
    }

    // 0x100ba8be0
    void TestVM::UpdateConfig() {}

} // namespace jag::testframework

// 0x100ba8360
unsigned long abs(float arg1) {
    uint32_t in_XMM0_Db;

    return (((uint64_t)in_XMM0_Db << 32) | (uint32_t)arg1) & 9223372034707292159;
}
