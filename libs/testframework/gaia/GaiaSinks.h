// libs/testframework/gaia/GaiaSinks.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::testframework {
    class GaiaConsoleSink {
    public:
        // virtual methods in vtable order
        virtual ~GaiaConsoleSink();
        virtual void OnHistoryEntryAdded(console::Line const&, bool);
        virtual OnHistoryCleared();
        GaiaConsoleSink(GaiaConnection&);

        // data members, from how the methods use this: 16 bytes
        undefined* field_0;      // offset 0, vtable pointer
        GaiaConnection* field_8; // offset 8
    };

    class GaiaLogSink : public game::PlayerGroupDelta::PlayerGroupDeltaEntry // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~GaiaLogSink();
        virtual void Write(eastl::fixed_string<char, 2048, true, eastl::allocator> const&, logger::LogLevel);
        GaiaLogSink(GaiaConnection&);

        // data members, from how the methods use this: 24 bytes, the first 8 are PlayerGroupDeltaEntry
        GaiaConnection* field_8; // offset 8
        char _unknown_16[8];
    };

    // 0x100baa870, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // GaiaLogSink::~GaiaLogSink(): jumps straight to the base-object destructor

    // 0x100baa880, 32 bytes, deleting destructor, inline, placed by debug map only (low confidence)
    // GaiaLogSink::~GaiaLogSink()
    void GaiaLogSink::~GaiaLogSink() {
        ~GaiaLogSink(this);
        operator_delete(this);
    }

    // 0x100baa910, 96 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // TestResult::TestResult()
    void TestResult::TestResult() {
        new (this) eastl::string();
        new (&field_32) eastl::vector<TestAssertionResult, eastl::allocator>();
        new (&field_64) eastl::vector<TestAssertionResult, eastl::allocator>();
        field_96 = 256;
    }

    // 0x100baaa80, 48 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // TestResult::~TestResult()
    void TestResult::~TestResult() {
        (&field_64)->~vector();
        (&field_32)->~vector();
        ~basic_string();
    }

    // 0x100baab10, 48 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // TestDescriptor::~TestDescriptor()
    void TestDescriptor::~TestDescriptor() {
        (&field_64)->~fixed_vector();
        (&field_32)->~basic_string();
        ~basic_string();
    }

    // 0x100baaf30, 64 bytes, inline, placed by debug map only (low confidence)
    // TestResult::operator=(TestResult&&)
    /* TestResult::TEMPNAMEPLACEHOLDERVALUE(TestResult&&) */

    TestResult* TestResult::operator=(TestResult* param_1) {
        eastl::string::operator=((eastl::string*)this, (basic_string*)param_1);
        eastl::vector<TestAssertionResult, eastl::allocator>::operator=(
            (vector<TestAssertionResult, eastl::allocator>*)&field_32, (vector*)&param_1->field_32);
        eastl::vector<TestAssertionResult, eastl::allocator>::operator=(
            (vector<TestAssertionResult, eastl::allocator>*)&field_64, (vector*)&param_1->field_64);
        field_96 = param_1->field_96;
        return this;
    }

    // 0x100babf20, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // TestAssertionResult::TestAssertionResult()
    void TestAssertionResult::TestAssertionResult() {
        new (this) eastl::string();
        new (&field_32) eastl::string();
    }

    // 0x100bacef0, 48 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // GaiaLogSink::~GaiaLogSink()
    void GaiaLogSink::~GaiaLogSink() {
        field_0 = &PTR__GaiaLogSink_100f26dd8;
        (&field_16)->~mutex();
        ~AutoSingleton();
    }

    // 0x100bad550, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // TestAssertionResult::TestAssertionResult(TestAssertionResult const&): jumps straight to the base-object constructor

    // 0x100bad640, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // TestAssertionResult::TestAssertionResult(TestAssertionResult const&)
    void TestAssertionResult::TestAssertionResult(TestAssertionResult* param_1) {
        new (this) eastl::string(param_1);
        new (&field_32, (basic_string*)&param_1->field_32) eastl::string();
        field_64 = param_1->field_64;
    }

    // 0x100bad810, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // TestAssertionResult::TestAssertionResult(TestAssertionResult&&): jumps straight to the base-object constructor

    // 0x100bad820, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // TestAssertionResult::TestAssertionResult(TestAssertionResult&&)
    void TestAssertionResult::TestAssertionResult(TestAssertionResult* param_1) {
        new (this) eastl::string(param_1);
        new (&field_32, (basic_string*)&param_1->field_32) eastl::string();
        field_64 = param_1->field_64;
    }

    // 0x100bad850, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // TestResult::TestResult(TestResult const&): jumps straight to the base-object constructor

    // 0x100bad940, 112 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // TestResult::TestResult(TestResult const&)
    void TestResult::TestResult(TestResult* param_1) {
        new (this) eastl::string(param_1);
        new (&field_32, (vector*)&param_1->field_32) eastl::vector<TestAssertionResult, eastl::allocator>();
        new (&field_64, (vector*)&param_1->field_64) eastl::vector<TestAssertionResult, eastl::allocator>();
        field_96 = param_1->field_96;
    }

    // 0x100badd30, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // TestResult::TestResult(TestResult&&): jumps straight to the base-object constructor

    // 0x100badd40, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // TestResult::TestResult(TestResult&&)
    void TestResult::TestResult(TestResult* param_1) {
        new (this) eastl::string(param_1);
        new (&field_32, (vector*)&param_1->field_32) eastl::vector<TestAssertionResult, eastl::allocator>();
        new (&field_64, (vector*)&param_1->field_64) eastl::vector<TestAssertionResult, eastl::allocator>();
        field_96 = param_1->field_96;
    }

    // 0x100baef00, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // TestDescriptor::TestDescriptor(TestDescriptor&&): jumps straight to the base-object constructor

    // 0x100baeff0, 96 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // TestDescriptor::TestDescriptor(TestDescriptor&&)
    void TestDescriptor::TestDescriptor(TestDescriptor* param_1) {
        new (this) eastl::string(param_1);
        new (&field_32, (basic_string*)&param_1->field_32) eastl::string();
        new (&field_64, (fixed_vector*)&param_1->field_64)
            eastl::fixed_vector<eastl::fixed_string<char, 64, true, eastl::allocator>, 8ul, true, eastl::allocator>();
    }

    // 0x100baf8d0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // TestDescriptor::TestDescriptor(TestDescriptor const&): jumps straight to the base-object constructor

    // 0x100baf8e0, 96 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // TestDescriptor::TestDescriptor(TestDescriptor const&)
    void TestDescriptor::TestDescriptor(TestDescriptor* param_1) {
        new (this) eastl::string(param_1);
        new (&field_32, (basic_string*)&param_1->field_32) eastl::string();
        new (&field_64, (fixed_vector*)&param_1->field_64)
            eastl::fixed_vector<eastl::fixed_string<char, 64, true, eastl::allocator>, 8ul, true, eastl::allocator>();
    }

    // 0x100bb0310, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // GaiaLogSink::GaiaLogSink(GaiaConnection&): jumps straight to the base-object constructor

    // 0x100bb0320, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // GaiaLogSink::GaiaLogSink(GaiaConnection&)
    void GaiaLogSink::GaiaLogSink(GaiaConnection* param_1) {
        new (this) logger::Sink();
        field_0 = &PTR__GaiaLogSink_100f26dd8;
        field_8 = param_1;
        new (&field_16) std::mutex();
    }

    // 0x100bb0780, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // TestResultsWriter::~TestResultsWriter(): jumps straight to the base-object destructor

    // 0x100bb0830, 64 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // TestResultsWriter::~TestResultsWriter()
    void TestResultsWriter::~TestResultsWriter() {
        eastl::function<void()>::~function((function<void()>*)&field_352);
        (&field_320)->~basic_string();
        field_8->~File();
    }

    // 0x100bb1c20, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // GaiaConsoleSink::GaiaConsoleSink(GaiaConnection&): jumps straight to the base-object constructor

    // 0x100bb1c40, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // GaiaConsoleSink::GaiaConsoleSink(GaiaConnection&)
    void GaiaConsoleSink::GaiaConsoleSink(GaiaConnection* param_1) {
        new (this) console::Console::HistoryListener();
        field_0 = PTR_vtable_100ee70a8 + 16;
        field_8 = param_1;
    }

    // 0x100bb1c90, 128 bytes, inline, placed by debug map only (low confidence)
    // GaiaConsoleSink::OnHistoryEntryAdded(console::Line const&, bool)
    void GaiaConsoleSink::OnHistoryEntryAdded(Line* param_1, bool param_2) {
        GaiaConnection* pGVar1;
        char* pcVar2;
        eastl::string local_50[32];
        allocator local_30[8];

        pGVar1 = field_8;
        pcVar2 = (char*)eastl::basic_string<
            char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::begin();
        eastl::allocator::allocator(local_30, "EASTL basic_string");
        eastl::string::basic_string(local_50, pcVar2, local_30);
        pGVar1->EnqueueIngameConsoleResponse(local_50);
        eastl::string::~basic_string(local_50);
    }

} // namespace jag::testframework

namespace jag {
    // 0x100bb02d0, 32 bytes, inline, placed by debug map only (low confidence)
    // testframework::GaiaLogSink* placement_new<testframework::GaiaLogSink, testframework::GaiaConnection&>(void*, testframework::GaiaConnection&)
    GaiaLogSink* placement_new<testframework::GaiaLogSink, testframework::GaiaConnection&>(void* param_1,
                                                                                           GaiaConnection* param_2) {
        testframework::GaiaLogSink::GaiaLogSink(param_1, param_2);
        return param_1;
    }

    // 0x100bb02f0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<testframework::GaiaLogSink>* placement_new<ref_counter_shared<testframework::GaiaLogSink>, int, testframework::GaiaLogSink*&>(void*, int&&, testframework::GaiaLogSink*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<testframework::GaiaLogSink>, int, testframework::GaiaLogSink*&>(
        void* param_1, int* param_2, GaiaLogSink** param_3) {
        ref_counter_shared<testframework::GaiaLogSink>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100bb03a0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<testframework::GaiaLogSink>::ref_counter_shared(unsigned long, testframework::GaiaLogSink*): jumps straight to the base-object constructor

    // 0x100bb03b0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<testframework::GaiaLogSink>::ref_counter_shared(unsigned long, testframework::GaiaLogSink*)
    void ref_counter_shared<testframework::GaiaLogSink>::ref_counter_shared(ulong param_1, GaiaLogSink* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7240 + 16;
        *(ulong*)(this + 16) = param_1;
        *(GaiaLogSink**)(this + 24) = param_2;
    }

} // namespace jag

namespace jag::console {
    // 0x100babb80, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // VarAny::VarAny(VarAny const&): jumps straight to the base-object constructor

    // 0x100babb90, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // VarAny::VarAny(VarAny const&)
    void VarAny::VarAny(VarAny* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined7 uVar3;
        byte bVar4;

        new (this) eastl::fixed_string<char, 32, true, eastl::allocator>(param_1);
        uVar1 = param_1->field_72;
        uVar2 = param_1->field_80;
        uVar3 = param_1->field_96;
        bVar4 = param_1->field_103;
        field_88 = param_1->field_88;
        field_96 = uVar3;
        field_103 = bVar4;
        field_72 = uVar1;
        field_80 = uVar2;
    }

} // namespace jag::console
