// libs/testframework/Test.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.testframework

#include "Test.h"

namespace jag::testframework {
    // 0x100ba56b0, 64 bytes, base-object constructor, placed by class name and debug map
    // Test::Test(eastl::string const&)
    void Test::Test(basic_string* param_1) {
        new (this) TestResult();
        eastl::string::operator=((eastl::string*)this, param_1);
    }

    // 0x100ba5710, 16 bytes, complete-object constructor, placed by class name
    // Test::Test(eastl::string const&): jumps straight to the base-object constructor

    // 0x100ba5720, 64 bytes, placed by class name
    // Test::addResult(TestAssertionResult const&)
    void Test::addResult(TestAssertionResult* param_1) {
        ((&field_32 + (ulong)(*(int*)((long)&param_1->field_64 + 4) != 0) * 32), param_1)->push_back();
        *(bool*)((long)&field_96 + 1) =
            *(int*)((long)&param_1->field_64 + 4) == 0 && *(char*)((long)&field_96 + 1) != '\0';
    }

    // 0x100ba57b0, 16 bytes, placed by class name
    // Test::getTestName() const
    Test* Test::getTestName() {
        return this;
    }

    // 0x100ba57c0, 16 bytes, placed by class name
    // Test::getResult() const
    Test* Test::getResult() {
        return this;
    }

} // namespace jag::testframework
