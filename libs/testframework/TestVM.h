// libs/testframework/TestVM.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::testframework {
    class TestVM {
    public:
        class ImageAssertRequest;
        // virtual methods in vtable order
        virtual ~TestVM();
        virtual OnTestEnded();
        virtual void Reset();
        virtual void UpdateConfig();
        DisplayError(eastl::string const&, int);
        DisplayAssert(TestAssertionResult const&);
        DisplayResult();
        OnTestStarted();
        void SetConfig(TestConfig const&);
        IsTestRunning() const;
        void AssertForce(bool, eastl::string const&);
        void StopCurrentTest();
        TestVM(console::Console*);
        void StartTest(eastl::string const&);
        void AssertResult(TestAssertionResult::Result, eastl::string const&, eastl::string const&, int);
        void AssertInt(AssertionOperator, int, int);
        void AssertFloat(AssertionOperator, float, int);
        void AssertImageRequest(eastl::string const&, double, int);
        void ResolveImageAssertions(unsigned char*, unsigned int, unsigned int);

        // data members, from how the methods use this: 280 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined1 field_8;  // offset 8
        char _unknown_9[87];
        Console* field_96;    // offset 96
        TestConfig field_104; // offset 104
        Test field_160;       // offset 160
        char _unknown_258[6];
        undefined1 m_testRunning; // offset 264
        char _unknown_265[15];
    };

    class TestVM::ImageAssertRequest {
    public:
        ~ImageAssertRequest();
        ImageAssertRequest(ImageAssertRequest&&);

        // data members, from how the methods use this: 48 bytes
        char _unknown_0[32];
        undefined8 field_32; // offset 32
        undefined4 field_40; // offset 40
        char _unknown_44[4];
    };

    // 0x100ba7570, 48 bytes, inline, placed by class name and debug map
    // TestVM::SetConfig(TestConfig const&)
    void TestVM::SetConfig(TestConfig* param_1) {
        TestConfig::operator=((TestConfig*)field_104, param_1);
        (*(code*)field_0[6])(this);
    }

    // 0x100ba76d0, 16 bytes, inline, placed by class name and debug map
    // TestVM::IsTestRunning() const
    undefined1 TestVM::IsTestRunning() {
        return m_testRunning;
    }

    // 0x100baa840, 16 bytes, complete-object destructor, inline, placed by class name
    // TestVM::~TestVM(): jumps straight to the base-object destructor

    // 0x100baa850, 32 bytes, deleting destructor, inline, placed by class name
    // TestVM::~TestVM()
    void TestVM::~TestVM() {
        ~TestVM(this);
        operator_delete(this);
    }

    // 0x100bace00, 80 bytes, base-object destructor, inline, placed by class name
    // TestVM::~TestVM()
    void TestVM::~TestVM() {
        field_0 = &PTR__TestVM_100f26d50;
        (&field_272)->~vector();
        field_160->~Test();
        field_104->~ObjSpriteCacheKey();
        (&field_8)->~fixed_vector();
    }

    // 0x100bafe40, 16 bytes, complete-object constructor, inline, placed by class name
    // TestVM::ImageAssertRequest::ImageAssertRequest(TestVM::ImageAssertRequest&&): jumps straight to the base-object constructor

    // 0x100baff30, 48 bytes, base-object constructor, inline, placed by class name
    // TestVM::ImageAssertRequest::ImageAssertRequest(TestVM::ImageAssertRequest&&)
    void TestVM::ImageAssertRequest::ImageAssertRequest(ImageAssertRequest* param_1) {
        new (this) eastl::string(param_1);
        field_40 = param_1->field_40;
        field_32 = param_1->field_32;
    }

} // namespace jag::testframework
