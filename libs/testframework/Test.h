// libs/testframework/Test.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::testframework {
    class Test {
    public:
        Test(const eastl::string& str);
        void addResult(const TestAssertionResult& testAssertionResult);
        Test* getTestName() const;
        Test* getResult() const;
        ~Test();
        Test* operator=(Test&& test);

        uint8_t _unknown_0[98];
    };

    class TestAssertionResult {
    public:
        ~TestAssertionResult();
        TestAssertionResult();
        TestAssertionResult(const TestAssertionResult& testAssertionResult);
        TestAssertionResult(TestAssertionResult&& testAssertionResult);

    private:
        uint8_t _unknown_0[64];
        uint64_t field_64;
    };

    class TestDescriptor {
    public:
        ~TestDescriptor();
        TestDescriptor(TestDescriptor&& testDescriptor);
        TestDescriptor(const TestDescriptor& testDescriptor);

        uint8_t _unknown_0[72];
    };

    class TestResult {
    public:
        TestResult();
        ~TestResult();
        TestResult* operator=(TestResult&& testResult);
        TestResult(const TestResult& testResult);
        TestResult(TestResult&& testResult);

    private:
        uint8_t _unknown_0[96];
        uint16_t field_96;
        uint8_t _unknown_98[6];
    };

    // 0x100ba7b70
    Test* Test::operator=(Test&& test) {
        *this = test;
        return this;
    }

    // 0x100baaed0
    Test::~Test() {}

} // namespace jag::testframework

namespace jag::oldscape {
    class TestJagex3Class {
    public:
        TestJagex3Class* DoTheThing();

        uint8_t _unknown_0[1];
    };

    class TestRS2LibClass {
    public:
        TestRS2LibClass* DoTheThing();

        uint8_t _unknown_0[1];
    };

} // namespace jag::oldscape
