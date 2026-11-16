// libs/testframework/gaia/GaiaSinks.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::testframework {
    class GaiaConsoleSink {
    public:
        // virtual methods in vtable order
        virtual ~GaiaConsoleSink();
        virtual void OnHistoryEntryAdded(const console::Line& line, bool arg2);
        virtual void OnHistoryCleared();
        GaiaConsoleSink(GaiaConnection& gaiaConnection);

    private:
        GaiaConnection* field_8;
    };

    class GaiaLogSink : public game::PlayerGroupDelta::PlayerGroupDeltaEntry // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~GaiaLogSink();
        virtual void Write(const eastl::fixed_string<char, 2048>& str, logger::LogLevel logLevel);
        GaiaLogSink(GaiaConnection& gaiaConnection);

    private:
        GaiaConnection* field_8;
        uint8_t _unknown_16[8];
    };

    // 0x100baa910
    TestResult::TestResult() : eastl::string(), field_96(256) {}

    // 0x100baaa80
    TestResult::~TestResult() {
        field_64.~vector();
        field_32.~vector();
    }

    // 0x100baab10
    TestDescriptor::~TestDescriptor() {
        field_64.~fixed_vector();
        field_32.~basic_string();
    }

    // 0x100baaf30
    TestResult* TestResult::operator=(TestResult&& testResult) {
        *this = testResult;
        field_32 = testResult.field_32;
        field_64 = testResult.field_64;
        field_96 = testResult.field_96;
        return this;
    }

    // 0x100babf20
    TestAssertionResult::TestAssertionResult() : eastl::string() {}

    // 0x100bacef0
    GaiaLogSink::~GaiaLogSink() {
        (&field_16)->~mutex();
    }

    // 0x100bad640
    TestAssertionResult::TestAssertionResult(const TestAssertionResult& testAssertionResult)
        : eastl::string(testAssertionResult), field_32(testAssertionResult.field_32),
          field_64(testAssertionResult.field_64) {}

    // 0x100bad820
    TestAssertionResult::TestAssertionResult(TestAssertionResult&& testAssertionResult)
        : eastl::string(testAssertionResult), field_32(testAssertionResult.field_32),
          field_64(testAssertionResult.field_64) {}

    // 0x100bad940
    TestResult::TestResult(const TestResult& testResult)
        : eastl::string(testResult), field_32(testResult.field_32), field_64(testResult.field_64),
          field_96(testResult.field_96) {}

    // 0x100badd40
    TestResult::TestResult(TestResult&& testResult)
        : eastl::string(testResult), field_32(testResult.field_32), field_64(testResult.field_64),
          field_96(testResult.field_96) {}

    // 0x100baeff0
    TestDescriptor::TestDescriptor(TestDescriptor&& testDescriptor)
        : eastl::string(testDescriptor), field_32(testDescriptor.field_32), field_64(testDescriptor.field_64) {}

    // 0x100baf8e0
    TestDescriptor::TestDescriptor(const TestDescriptor& testDescriptor)
        : eastl::string(testDescriptor), field_32(testDescriptor.field_32), field_64(testDescriptor.field_64) {}

    // 0x100bb0320
    GaiaLogSink::GaiaLogSink(GaiaConnection& gaiaConnection) : logger::Sink(), field_8(gaiaConnection) {}

    // 0x100bb0830
    TestResultsWriter::~TestResultsWriter() {
        field_352.~function();
        field_320.~basic_string();
        field_8->~File();
    }

    // 0x100bb1c40
    GaiaConsoleSink::GaiaConsoleSink(GaiaConnection& gaiaConnection)
        : console::Console::HistoryListener(), field_8(gaiaConnection) {}

    // 0x100bb1c90
    void GaiaConsoleSink::OnHistoryEntryAdded(const console::Line& line, bool arg2) {
        GaiaConnection* this_00 = field_8;
        auto str = line.field_8.begin();
        eastl::string local_50(str);
        this_00->EnqueueIngameConsoleResponse(&local_50);
    }

} // namespace jag::testframework

namespace jag {
    // 0x100bb02d0
    testframework::GaiaLogSink* placement_new<testframework::GaiaLogSink, testframework::GaiaConnection&>(
        void* arg1, testframework::GaiaConnection& gaiaConnection) {
        new (arg1) testframework::GaiaLogSink(gaiaConnection);
        return arg1;
    }

    // 0x100bb02f0
    ref_counter_shared<testframework::GaiaLogSink>*
    placement_new<ref_counter_shared<testframework::GaiaLogSink>, int, testframework::GaiaLogSink*&>(
        void* arg1, int&& arg2, testframework::GaiaLogSink*& arg3) {
        new (arg1) ref_counter_shared<testframework::GaiaLogSink>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100bb03b0
    ref_counter_shared<testframework::GaiaLogSink>::ref_counter_shared(unsigned long arg1,
                                                                       testframework::GaiaLogSink* gaiaLogSink)
        : ref_counter_base() {}

} // namespace jag

namespace jag::console {
    // 0x100babb90
    VarAny::VarAny(const VarAny& varAny) : eastl::fixed_string<char, 32>(varAny) {
        uint64_t uVar1 = varAny.field_72;
        uint64_t uVar2 = varAny.field_80;
        uint64_t uVar3 = varAny.field_96;
        uint8_t bVar4 = varAny.field_103;
        field_88 = varAny.field_88;
        field_96 = uVar3;
        field_103 = bVar4;
        field_72 = uVar1;
        field_80 = uVar2;
    }

} // namespace jag::console
