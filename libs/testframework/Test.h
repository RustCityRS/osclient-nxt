// libs/testframework/Test.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::testframework {
    class Test {
    public:
        Test(eastl::string const&);
        void addResult(TestAssertionResult const&);
        Test* getTestName() const;
        Test* getResult() const;
        ~Test();
        Test* operator=(Test&&);

        // data members, from how the methods use this: 98 bytes
        char _unknown_0[96];
        undefined2 field_96; // offset 96
    };

    class TestAssertionResult {
    public:
        ~TestAssertionResult();
        TestAssertionResult();
        TestAssertionResult(TestAssertionResult const&);
        TestAssertionResult(TestAssertionResult&&);

        // data members, from how the methods use this: 72 bytes
        char _unknown_0[64];
        undefined8 field_64; // offset 64
    };

    class TestDescriptor {
    public:
        ~TestDescriptor();
        TestDescriptor(TestDescriptor&&);
        TestDescriptor(TestDescriptor const&);

        // data members, from how the methods use this: 72 bytes
        char _unknown_0[72];
    };

    class TestResult {
    public:
        TestResult();
        ~TestResult();
        TestResult* operator=(TestResult&&);
        TestResult(TestResult const&);
        TestResult(TestResult&&);

        // data members, from how the methods use this: 104 bytes
        char _unknown_0[96];
        undefined2 field_96; // offset 96
        char _unknown_98[6];
    };

    // 0x100ba56f0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // TestResult::TestResult(): jumps straight to the base-object constructor

    // 0x100ba5700, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // TestResult::~TestResult(): jumps straight to the base-object destructor

    // 0x100ba7a00, 16 bytes, complete-object destructor, inline, placed by class name
    // Test::~Test(): jumps straight to the base-object destructor

    // 0x100ba7b70, 32 bytes, inline, placed by class name
    // Test::operator=(Test&&)
    /* Test::TEMPNAMEPLACEHOLDERVALUE(Test&&) */

    Test* Test::operator=(Test* param_1) {
        TestResult::operator=((TestResult*)this, (TestResult*)param_1);
        return this;
    }

    // 0x100ba8bc0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // TestAssertionResult::TestAssertionResult(): jumps straight to the base-object constructor

    // 0x100baaed0, 16 bytes, base-object destructor, inline, placed by class name
    // Test::~Test()
    void Test::~Test() {
        ~TestResult();
    }

} // namespace jag::testframework

namespace jag::oldscape {
    class TestJagex3Class {
    public:
        DoTheThing();

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    class TestRS2LibClass {
    public:
        DoTheThing();

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

} // namespace jag::oldscape
