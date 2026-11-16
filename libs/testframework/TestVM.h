// libs/testframework/TestVM.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::testframework {
    class TestVM {
    public:
        class ImageAssertRequest;
        // virtual methods in vtable order
        virtual ~TestVM();
        virtual void OnTestEnded();
        virtual void Reset();
        virtual void UpdateConfig();
        void DisplayError(const eastl::string& arg1, int arg2);
        void DisplayAssert(const TestAssertionResult& arg1);
        void DisplayResult();
        void OnTestStarted();
        void SetConfig(const TestConfig& testConfig);
        bool IsTestRunning() const;
        void AssertForce(bool arg1, const eastl::string& str);
        void StopCurrentTest();
        TestVM(console::Console* console);
        void StartTest(const eastl::string& str);
        void AssertResult(TestAssertionResult::Result result, const eastl::string& str1, const eastl::string& str2,
                          int arg4);
        void AssertInt(AssertionOperator assertionOperator, int arg2, int arg3);
        void AssertFloat(AssertionOperator assertionOperator, float arg2, int arg3);
        void AssertImageRequest(const eastl::string& str, double arg2, int arg3);
        void ResolveImageAssertions(unsigned char* arg1, unsigned int arg2, unsigned int arg3);

    private:
        uint8_t _unknown_8[88];
        Console* field_96;
        TestConfig field_104;
        uint8_t _unknown_160[104];
        uint8_t m_testRunning;
        uint8_t _unknown_265[15];
    };

    class TestVM::ImageAssertRequest {
    public:
        ~ImageAssertRequest();
        ImageAssertRequest(ImageAssertRequest&& imageAssertRequest);

    private:
        uint8_t _unknown_0[32];
        uint64_t field_32;
        uint32_t field_40;
        uint8_t _unknown_44[4];
    };

    // 0x100ba7570
    void TestVM::SetConfig(const TestConfig& testConfig) {
        *field_104 = testConfig;
        UpdateConfig();
    }

    // 0x100ba76d0
    bool TestVM::IsTestRunning() const {
        return m_testRunning;
    }

    // 0x100bace00
    TestVM::~TestVM() {
        field_272.~vector();
        field_160.~Test();
        field_104->~ObjSpriteCacheKey();
        field_8.~fixed_vector();
    }

    // 0x100baff30
    TestVM::ImageAssertRequest::ImageAssertRequest(TestVM::ImageAssertRequest&& imageAssertRequest)
        : eastl::string(imageAssertRequest), field_40(imageAssertRequest.field_40),
          field_32(imageAssertRequest.field_32) {}

} // namespace jag::testframework
