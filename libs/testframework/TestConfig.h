// libs/testframework/TestConfig.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::testframework {
    class TestConfig {
    public:
        ~TestConfig();
        TestConfig();
        TestConfig* operator=(const TestConfig& testConfig);

    private:
        uint8_t field_0;
        uint8_t field_1[3];
        uint32_t field_4;
        uint8_t field_8;
        uint8_t _unknown_9[39];
        uint32_t field_48;
        uint8_t _unknown_52[4];
    };

    // 0x1001520f0: TestConfig::~TestConfig() has the same machine code as oldscape::rs2lib::social::ClanSettings::ExtraSettingsParam::~ExtraSettingsParam()

    // 0x100baaab0
    TestConfig::TestConfig() : field_0(0), field_4(3), field_8(0) {

        new (&field_16) eastl::string("http://localhost");
        field_48 = 5000;
    }

    // 0x100baab40
    TestConfig* TestConfig::operator=(const TestConfig& testConfig) {
        field_8 = testConfig.field_8;
        uint32_t uVar1 = testConfig.field_1;
        uint32_t uVar2 = testConfig.field_4;
        field_0 = testConfig.field_0;
        field_1 = uVar1;
        field_4 = uVar2;
        field_16 = &testConfig.field_16;
        field_48 = testConfig.field_48;
        return this;
    }

} // namespace jag::testframework
