// libs/testframework/TestVM.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.testframework

#include "TestVM.h"

namespace jag::testframework {
    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    TestVM::OnTestEnded();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    TestVM::DisplayError(eastl::string const&, int);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    TestVM::DisplayAssert(TestAssertionResult const&);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    TestVM::DisplayResult();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    TestVM::OnTestStarted();

    // 0x100024070: the linker folded this into eastl::pair<eastl::string, oldscape::option::IOption*>::~pair(), which has identical code
    TestVM::ImageAssertRequest::~ImageAssertRequest();

    // 0x10002dfe0: the linker folded this into eastl::hash_node<eastl::string, false>::~hash_node(), which has identical code
    TestVM::ImageAssertRequest::~ImageAssertRequest();

    // 0x100ba76e0, 144 bytes, placed by class name and debug map
    // TestVM::AssertForce(bool, eastl::string const&)
    void TestVM::AssertForce(bool param_1, basic_string* param_2) {
        eastl::string local_58[32];
        allocator local_38[8];

        eastl::allocator::allocator(local_38, "EASTL basic_string");
        eastl::string::basic_string(local_58, "", local_38);
        AssertResult(this, !param_1 * '\x02', param_2, local_58, 4294967295);
        eastl::string::~basic_string(local_58);
    }

    // 0x100ba7770, 160 bytes, placed by class name and debug map
    // TestVM::StopCurrentTest()
    void TestVM::StopCurrentTest() {
        eastl::string local_48[32];
        allocator local_28[8];

        if (field_104[0] != '\0') {
            if (m_testRunning == '\0') {
                eastl::allocator::allocator(local_28, "EASTL basic_string");
                eastl::string::basic_string(local_48, "Test already stopped. Cannot display result.", local_28);
                (*(code*)field_0[4])(this, local_48, 4294967295);
                eastl::string::~basic_string(local_48);
            } else {
                (*(code*)field_0[3])(this);
                (*(code*)field_0[8])(this);
                (*(code*)field_0[5])(this);
            }
        }
    }

    // 0x100ba7860, 64 bytes, placed by debug map only (low confidence)
    // Base64EncodePNG(void*, void*, int)
    void Base64EncodePNG(void* param_1, void* param_2, int param_3) {
        Base64* this;

        this = (Base64*)Base64::Instance();
        EncodeAlt(param_1, param_2, (long)param_3);
    }

    // 0x100ba78a0, 320 bytes, base-object constructor, placed by class name and debug map
    // TestVM::TestVM(console::Console*)
    void TestVM::TestVM(Console* param_1) {
        allocator local_70[8];
        char* local_68;
        char* pcStack_60;
        char* local_58;
        char* pcStack_50;
        char* local_48;
        char* pcStack_40;
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        field_0 = &PTR__TestVM_100f26d50;
        local_48 = "lessthan_equals";
        pcStack_40 = "greaterthan_equals";
        local_58 = "lessthan";
        pcStack_50 = "greaterthan";
        local_68 = "equals";
        pcStack_60 = "notequals";
        eastl::allocator::allocator(local_70, "EASTL fixed_vector");
        new (&field_8, &local_68, 6, local_70) eastl::fixed_vector<char const*, 6ul, true, eastl::allocator>();
        field_96 = param_1;
        new (field_104) TestConfig();
        eastl::allocator::allocator(local_70, "EASTL basic_string");
        new (&local_68) eastl::string("", local_70);
        new (field_160, (basic_string*)&local_68) Test();
        local_68.~basic_string();
        m_testRunning = 0;
        new (&field_272) eastl::vector<TestVM::ImageAssertRequest, eastl::allocator>();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100ba7a20, 16 bytes, complete-object constructor, placed by class name and debug map
    // TestVM::TestVM(console::Console*): jumps straight to the base-object constructor

    // 0x100ba7a30, 320 bytes, placed by class name and debug map
    // TestVM::StartTest(eastl::string const&)
    void TestVM::StartTest(basic_string* param_1) {
        undefined8 uVar1;
        char* pcVar2;
        Test local_a8;
        eastl::string local_40[32];
        allocator local_20[8];

        if (field_104[0] != '\0') {
            if (m_testRunning == '\0') {
                new (&local_a8) Test(param_1);
                Test::operator=((Test*)field_160, &local_a8);
                local_a8.~Test();
                m_testRunning = 1;
                (*(code*)field_0[7])(this);
            } else {
                new (&local_a8) eastl::string();
                field_160->getTestName();
                uVar1 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                eastl::string::sprintf((char*)&local_a8, "Test already started. Current running test: %s", uVar1);
                pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                eastl::allocator::allocator(local_20, "EASTL basic_string");
                eastl::string::basic_string(local_40, pcVar2, local_20);
                (*(code*)field_0[4])(this, local_40, 4294967295);
                eastl::string::~basic_string(local_40);
                local_a8.~basic_string();
            }
        }
    }

    // 0x100ba7b90, 160 bytes, placed by class name and debug map
    // TestVM::AssertResult(TestAssertionResult::Result, eastl::string const&, eastl::string const&, int)
    void TestVM::AssertResult(int param_2, basic_string* param_3, basic_string* param_4, undefined4 param_5) {
        undefined1 local_80[64];
        undefined4 local_40;

        new (local_80) TestAssertionResult();
        eastl::string::operator=((eastl::string*)local_80, param_3);
        local_40 = param_5;
        if (param_2 == 2) {
            eastl::string::operator=((eastl::string*)(local_80 + 32), param_4);
        }
        (field_160, (TestAssertionResult*)local_80)->addResult();
        (*(code*)field_0[2])(this, local_80);
        local_80->~pair();
    }

    // 0x100ba7c30, 768 bytes, placed by class name and debug map
    // TestVM::AssertInt(TestVM::AssertionOperator, int, int)
    void TestVM::AssertInt(uint param_2, uint param_3, undefined4 param_4) {
        uint uVar1;
        bool bVar2;
        undefined8* puVar3;
        optional* poVar4;
        variant* pvVar5;
        uint* puVar6;
        uint* puVar7;
        eastl::string* this_00;
        ulong uVar8;
        eastl::string local_f8[32];
        eastl::string local_d8[36];
        undefined4 local_b4;
        optional<std::variant<int, unsigned int, bool, float, eastl::string, console::VarAny>> local_b0[120];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (field_104[0] != '\0') {
            if (m_testRunning == '\0') {
                new (local_f8) eastl::allocator("EASTL basic_string");
                new (local_b0) eastl::string("Test not started.", local_f8);
                (*(code*)field_0[4])(this, (eastl::string*)local_b0, 4294967295);
                this_00 = (eastl::string*)local_b0;
            } else {
                uVar8 = (ulong)param_3;
                eastl::string::basic_string(local_f8);
                eastl::string::basic_string(local_d8);
                puVar3 = (undefined8*)eastl::vector<
                    char const*, eastl::fixed_vector_allocator<8ul, 6ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[]((vector<char const*,
                                   eastl::fixed_vector_allocator<8ul, 6ul, 8ul, 0ul, true, eastl::allocator>>*)&field_8,
                           (ulong)param_2);
                eastl::string::sprintf((char*)local_f8, "assert_int_%s", *puVar3);
                poVar4 = (optional*)field_96->GetScaledMousePosition();
                std::optional<std::variant<int, unsigned int, bool, float, eastl::string, console::VarAny>>::optional(
                    local_b0, poVar4);
                bVar2 = local_b0->operator_cast_to_bool();
                if (bVar2) {
                    local_b4 = param_4;
                    pvVar5 = (variant*)std::optional<
                        std::variant<int, unsigned int, bool, float, eastl::string, console::VarAny>>::value(local_b0);
                    puVar6 =
                        (uint*)std::get_if<int, int, unsigned int, bool, float, eastl::string, console::VarAny>(pvVar5);
                    pvVar5 = (variant*)std::optional<
                        std::variant<int, unsigned int, bool, float, eastl::string, console::VarAny>>::value(local_b0);
                    puVar7 = (uint*)
                        std::get_if<unsigned int, int, unsigned int, bool, float, eastl::string, console::VarAny>(
                            pvVar5);
                    if (puVar6 == (uint*)0 && puVar7 == (uint*)0) {
                        eastl::string::sprintf((char*)local_d8, "Expected: %d. Actual: <invalid type>", uVar8);
                        AssertResult(this, 2, local_f8, local_d8, local_b4);
                    } else {
                        if (puVar6 != (uint*)0) {
                            puVar7 = puVar6;
                        }
                        uVar1 = *puVar7;
                        switch ((ulong)param_2) {
                        case 0:
                            bVar2 = uVar1 == param_3;
                            break;
                        case 1:
                            bVar2 = uVar1 != param_3;
                            break;
                        case 2:
                            bVar2 = (int)uVar1 < (int)param_3;
                            break;
                        case 3:
                            bVar2 = (int)param_3 < (int)uVar1;
                            break;
                        case 4:
                            bVar2 = (int)uVar1 <= (int)param_3;
                            break;
                        case 5:
                            bVar2 = (int)param_3 <= (int)uVar1;
                            break;
                        default:
                            bVar2 = false;
                        }
                        eastl::string::sprintf((char*)local_d8, "Expected: %d. Actual: %d", uVar8);
                        AssertResult(this, (bVar2 ^ 1U) * '\x02', local_f8, local_d8, local_b4);
                    }
                } else {
                    eastl::string::sprintf((char*)local_d8, "Expected: %d. Actual: <missing>", uVar8);
                    AssertResult(this, 2, local_f8, local_d8, param_4);
                }
                std::optional<std::variant<int, unsigned int, bool, float, eastl::string, console::VarAny>>::~optional(
                    local_b0);
                eastl::string::~basic_string(local_d8);
                this_00 = local_f8;
            }
            eastl::string::~basic_string(this_00);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100ba7ff0, 864 bytes, placed by class name and debug map
    // TestVM::AssertFloat(TestVM::AssertionOperator, float, int)
    void TestVM::AssertFloat(float param_1, TestVM* this, uint param_3, undefined4 param_4) {
        bool bVar1;
        undefined8* puVar2;
        optional* poVar3;
        variant* pvVar4;
        float* pfVar5;
        eastl::string* this_00;
        bool bVar6;
        float fVar7;
        eastl::string local_f8[32];
        eastl::string local_d8[36];
        float local_b4;
        optional<std::variant<int, unsigned int, bool, float, eastl::string, console::VarAny>> local_b0[120];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_b4 = param_1;
        if (field_104[0] == '\0')
            goto LAB_100ba82c1;
        if (m_testRunning == '\0') {
            new (local_f8) eastl::allocator("EASTL basic_string");
            new (local_b0) eastl::string("Test not started.", local_f8);
            (*(code*)field_0[4])(this, (eastl::string*)local_b0, param_4);
            this_00 = (eastl::string*)local_b0;
            goto LAB_100ba82bc;
        }
        eastl::string::basic_string(local_f8);
        eastl::string::basic_string(local_d8);
        puVar2 = (undefined8*)eastl::vector<char const*,
                                            eastl::fixed_vector_allocator<8ul, 6ul, 8ul, 0ul, true, eastl::allocator>>::
        operator[](
            (vector<char const*, eastl::fixed_vector_allocator<8ul, 6ul, 8ul, 0ul, true, eastl::allocator>>*)&field_8,
            (ulong)param_3);
        eastl::string::sprintf((char*)local_f8, "assert_float_%s", *puVar2);
        poVar3 = (optional*)field_96->GetScaledMousePosition();
        std::optional<std::variant<int, unsigned int, bool, float, eastl::string, console::VarAny>>::optional(local_b0,
                                                                                                              poVar3);
        bVar1 = local_b0->operator_cast_to_bool();
        if (!bVar1) {
            eastl::string::sprintf((char*)local_d8, (double)local_b4, "Expected: %4.5f. Actual: <missing>");
            AssertResult(this, 2, local_f8, local_d8, param_4);
            goto LAB_100ba829d;
        }
        pvVar4 = (variant*)
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, console::VarAny>>::value(
                local_b0);
        pfVar5 = (float*)std::get_if<float, int, unsigned int, bool, float, eastl::string, console::VarAny>(pvVar4);
        if (pfVar5 == (float*)0) {
            eastl::string::sprintf((char*)local_d8, (double)local_b4, "Expected: %4.5f. Actual: <invalid type>");
            AssertResult(this, 2, local_f8, local_d8, param_4);
            goto LAB_100ba829d;
        }
        switch ((ulong)param_3) {
        case 0:
            fVar7 = (float)::abs(*pfVar5 - local_b4);
            bVar6 = fVar7 == 1.1920929e-07;
            bVar1 = fVar7 < 1.1920929e-07;
            goto LAB_100ba8253;
        case 1:
            fVar7 = (float)::abs(*pfVar5 - local_b4);
            bVar1 = 1.1920929e-07 < fVar7;
            break;
        case 2:
            bVar1 = *pfVar5 <= local_b4 && local_b4 != *pfVar5;
            break;
        case 3:
            bVar1 = local_b4 < *pfVar5;
            break;
        case 4:
            bVar1 = *pfVar5 <= local_b4;
            break;
        case 5:
            bVar6 = local_b4 == *pfVar5;
            bVar1 = local_b4 < *pfVar5;
        LAB_100ba8253:
            bVar1 = bVar1 || bVar6;
            break;
        default:
            bVar1 = false;
        }
        eastl::string::sprintf((char*)local_d8, (double)local_b4, (double)*pfVar5, "Expected: %4.5f. Actual: %4.5f");
        AssertResult(this, (bVar1 ^ 1U) * '\x02', local_f8, local_d8, param_4);
    LAB_100ba829d:
        std::optional<std::variant<int, unsigned int, bool, float, eastl::string, console::VarAny>>::~optional(
            local_b0);
        eastl::string::~basic_string(local_d8);
        this_00 = local_f8;
    LAB_100ba82bc:
        eastl::string::~basic_string(this_00);
    LAB_100ba82c1:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100ba8370, 128 bytes, placed by class name and debug map
    // TestVM::AssertImageRequest(eastl::string const&, double, int)
    void TestVM::AssertImageRequest(basic_string* param_1, double param_2, int param_3) {
        ImageAssertRequest local_58;

        if (field_104[0] != '\0') {
            new (&local_58) eastl::string(param_1);
            local_58.field_32 = param_2;
            local_58.field_40 = param_3;
            (&field_272, &local_58)->push_back();
            local_58.~hash_node();
        }
    }

    // 0x100ba8450, 1728 bytes, placed by class name and debug map
    // TestVM::ResolveImageAssertions(unsigned char*, unsigned int, unsigned int)
    void TestVM::ResolveImageAssertions(uchar* param_1, uint param_2, uint param_3) {
        undefined1* this_00;
        char cVar2;
        int iVar3;
        undefined8 uVar4;
        long lVar5;
        Array* pAVar6;
        Value* pVVar7;
        undefined4 in_register_00000014;
        string local_478[24];
        allocator local_460[40];
        eastl::string local_438[32];
        eastl::string local_418[32];
        eastl::string local_3f8[32];
        Value local_3d8[40];
        eastl::string local_3b0[32];
        eastl::string local_390[32];
        eastl::string local_370[32];
        eastl::string local_350[32];
        long local_328;
        vector<TestVM::ImageAssertRequest, eastl::allocator>* local_320;
        Value local_318[40];
        undefined8 local_2f0;
        int local_2e4;
        char local_2d1;
        HTTPRequest local_2d0;
        long local_38;

        local_2f0 = CONCAT44(in_register_00000014, param_2);
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = &field_272;
        cVar2 = this_00->empty();
        if (cVar2 == '\0') {
            eastl::string::basic_string(local_370);
            eastl::string::basic_string(local_3b0);
            new (&local_2d0) http::HTTPRequest(0);
            eastl::string::basic_string(local_390);
            uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            eastl::string::sprintf((char*)local_390, "%s:%d/diff", uVar4,
                                   (ulong) * (uint*)(((TestVM*)this)->field_104 + 48));
            lVar5 = this_00->HeapBeginPtr();
            local_320 = (vector<TestVM::ImageAssertRequest, eastl::allocator>*)this_00;
            local_328 = this_00->end();
            if (lVar5 != local_328) {
                local_2e4 = (int)local_2f0 * 4;
                do {
                    new (local_318) eastl::allocator("EASTL basic_string");
                    eastl::string::basic_string(local_350, "", (allocator*)local_318);
                    uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    eastl::string::sprintf((char*)local_370, "assert_image(%s)", uVar4);
                    eastl::string::basic_string(local_418);
                    eastl::string::sprintf((char*)local_418, *(undefined8*)(lVar5 + 32), "%4.5f");
                    _stbi_flip_vertically_on_write(1);
                    eastl::string::basic_string(local_3f8);
                    iVar3 =
                        _stbi_write_png_to_func(Base64EncodePNG, local_3f8, local_2f0, param_3, 4, param_1, local_2e4);
                    if (iVar3 == 0) {
                        eastl::allocator::allocator(local_460, "EASTL basic_string");
                        new (local_318) eastl::string("Failed to write PNG to memory for framebuffer", local_460);
                        (*(code*)((TestVM*)this)->field_0[4])((TestVM*)this, (eastl::string*)local_318,
                                                              *(undefined4*)(lVar5 + 40));
                        local_318->~basic_string();
                    } else {
                        eastl::string::basic_string(local_438);
                        uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        eastl::string::append_sprintf((char*)local_438, "&%s=%s", "groundtruth", uVar4);
                        uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        eastl::string::append_sprintf((char*)local_438, "&%s=%s", "threshold", uVar4);
                        uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        eastl::string::append_sprintf((char*)local_438, "&%s=%s", &DAT_100e3d67e, uVar4);
                        ((basic_string*)&local_2d0)->Post(local_390);
                        while (true) {
                            cVar2 = local_2d0.IsRequestComplete();
                            if (cVar2 != '\0')
                                break;
                            this_thread::Sleep(1);
                        }
                        Json::Value::Value(local_318, 0);
                        iVar3 = local_2d0.GetState();
                        if (iVar3 == 2) {
                            uVar4 = local_2d0.GetErrorInformation();
                            eastl::string::sprintf((char*)local_350, "Image Diff HTTP Request Failed: %s", uVar4);
                            (*(code*)((TestVM*)this)->field_0[4])((TestVM*)this, local_350, *(undefined4*)(lVar5 + 40));
                        } else {
                            pAVar6 = (Array*)local_2d0.GetMSAASampleCount();
                            http::DecodeJSONResponseFromArray(local_318, pAVar6);
                            Json::Value::Value(local_3d8, "");
                            local_460->get(local_318, (Value*)"error");
                            Json::Value::asString();
                            local_2d1 = std::string::empty(local_478);
                            std::string::~string(local_478);
                            local_460->~Value();
                            Json::Value::~Value(local_3d8);
                            if (local_2d1 == '\0') {
                                pVVar7 = (Value*)Json::Value::operator[](local_318, "error");
                                uVar4 = Json::Value::asCString(pVVar7);
                                eastl::string::sprintf((char*)local_350, "Image Diff Failed: %s", uVar4);
                                (*(code*)((TestVM*)this)->field_0[4])((TestVM*)this, local_350,
                                                                      *(undefined4*)(lVar5 + 40));
                            } else {
                                pVVar7 = (Value*)Json::Value::operator[](local_318, "score");
                                uVar4 = Json::Value::asDouble(pVVar7);
                                eastl::string::sprintf((char*)local_3b0, 1.0 - *(double*)(lVar5 + 32), uVar4);
                            }
                        }
                        cVar2 = eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
                        if (cVar2 == '\0') {
                            AssertResult((TestVM*)this, 2, local_370, local_350, *(undefined4*)(lVar5 + 40));
                        } else {
                            Json::Value::Value(local_3d8, 0);
                            local_460->get(local_318, (Value*)"result");
                            iVar3 = Json::Value::asInt();
                            AssertResult((TestVM*)this, (iVar3 != 1) * '\x02', local_370, local_3b0,
                                         *(undefined4*)(lVar5 + 40));
                            local_460->~Value();
                            Json::Value::~Value(local_3d8);
                        }
                        Json::Value::~Value(local_318);
                        eastl::string::~basic_string(local_438);
                    }
                    eastl::string::~basic_string(local_3f8);
                    eastl::string::~basic_string(local_418);
                    eastl::string::~basic_string(local_350);
                    lVar5 = lVar5 + 48;
                } while (lVar5 != local_328);
            }
            eastl::vector<TestVM::ImageAssertRequest, eastl::allocator>::clear(local_320);
            eastl::string::~basic_string(local_390);
            local_2d0.~HTTPRequest();
            eastl::string::~basic_string(local_3b0);
            eastl::string::~basic_string(local_370);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100ba8bd0, 16 bytes, placed by class name and debug map
    // TestVM::Reset()
    void TestVM::Reset() {
        m_testRunning = 0;
    }

    // 0x100ba8be0, 16 bytes, placed by class name and debug map
    // TestVM::UpdateConfig()
    void TestVM::UpdateConfig() {}

} // namespace jag::testframework

// 0x100ba8360, 16 bytes, placed by neighbouring functions
// abs(float)
ulong abs(float param_1) {
    undefined4 in_XMM0_Db;

    return CONCAT44(in_XMM0_Db, param_1) & 9223372034707292159;
}
