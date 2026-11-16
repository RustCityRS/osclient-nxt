// libs/testframework/TestConfig.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::testframework {
    class TestConfig {
    public:
        ~TestConfig();
        TestConfig();
        TestConfig* operator=(TestConfig const&);

        // data members, from how the methods use this: 56 bytes
        undefined1 field_0; // offset 0
        undefined3 field_1; // offset 1
        undefined4 field_4; // offset 4
        undefined1 field_8; // offset 8
        char _unknown_9[39];
        undefined4 field_48; // offset 48
        char _unknown_52[4];
    };

    // 0x1001520e0: the linker folded this into oldscape::rs2lib::social::ClanSettings::ExtraSettingsParam::~ExtraSettingsParam(), which has identical code
    TestConfig::~TestConfig();

    // 0x1001520f0: the linker folded this into oldscape::rs2lib::social::ClanSettings::ExtraSettingsParam::~ExtraSettingsParam(), which has identical code
    TestConfig::~TestConfig();

    // 0x100ba72f0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // TestConfig::TestConfig(): jumps straight to the base-object constructor

    // 0x100ba7440, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // TestDescriptor::~TestDescriptor(): jumps straight to the base-object destructor

    // 0x100baaab0, 96 bytes, base-object constructor, inline, placed by class name
    // TestConfig::TestConfig()
    void TestConfig::TestConfig() {
        allocator local_28[8];

        field_0 = 0;
        field_4 = 3;
        field_8 = 0;
        eastl::allocator::allocator(local_28, "EASTL basic_string");
        new (&field_16, "http://localhost", local_28) eastl::string();
        field_48 = 5000;
    }

    // 0x100baab40, 64 bytes, inline, placed by class name
    // TestConfig::operator=(TestConfig const&)
    /* TestConfig::TEMPNAMEPLACEHOLDERVALUE(TestConfig const&)
    */

    TestConfig* TestConfig::operator=(TestConfig* param_1) {
        undefined3 uVar1;
        undefined4 uVar2;

        field_8 = param_1->field_8;
        uVar1 = param_1->field_1;
        uVar2 = param_1->field_4;
        field_0 = param_1->field_0;
        field_1 = uVar1;
        field_4 = uVar2;
        eastl::string::operator=((eastl::string*)&field_16, (basic_string*)&param_1->field_16);
        field_48 = param_1->field_48;
        return this;
    }

} // namespace jag::testframework
