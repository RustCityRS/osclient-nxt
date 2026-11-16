// libs/testframework/Test.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.testframework

#include "Test.h"

namespace jag::testframework {
    // 0x100ba56b0
    Test::Test(const eastl::string& str) : TestResult() {
        *this = str;
    }

    // 0x100ba5720
    void Test::addResult(const TestAssertionResult& testAssertionResult) {
        ((vector<TestAssertionResult>*)(&field_32 +
                                        (unsigned long)(*(int*)((long)&testAssertionResult.field_64 + 4) != 0) * 32))
            ->push_back(testAssertionResult);
        field_97 = *(int*)((long)&testAssertionResult.field_64 + 4) == 0 && field_97 != '\0';
    }

    // 0x100ba57b0
    Test* Test::getTestName() const {
        return this;
    }

    // 0x100ba57c0
    Test* Test::getResult() const {
        return this;
    }

} // namespace jag::testframework
