// projects/osclient/LogFileSink.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape {
    class LogFileSink {
    public:
        // virtual methods in vtable order
        virtual ~LogFileSink();
        virtual void Write(const eastl::fixed_string<char, 2048>& str, logger::LogLevel logLevel);
        void SetLogFile(Filename& filename);
        LogFileSink();

    private:
        uint8_t _unknown_8[8];
    };

    // 0x1000dd3f0
    void LogFileSink::SetLogFile(Filename& filename) {
        Logger* this_01;
        char* pcVar2;
        Filename local_28;

        std::make_unique<File, Filename&, int const&>(local_28, filename);
        uint8_t* this_02 = &field_8;
        *this_02 = &local_28;
        if (((ClientCompositeZone*)(*this_02).operator->())->IsValid() == '\0') {
            this_02->reset(nullptr);
            this_01 = logger::default_logger();
            pcVar2 = filename.GetName();
            this_01->Log(
                false, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/LogFileSink.h", 28,
                "Could not open %s", pcVar2);
        }
    }

    // 0x100143f00
    LogFileSink::LogFileSink() : logger::Sink() {
        field_8.unique_ptr<true, void>();
    }

    // 0x100143f70
    void LogFileSink::Write(const eastl::fixed_string<char, 2048>& str, logger::LogLevel logLevel) {
        File* pFVar1;

        uint8_t* this_01 = &field_8;
        if (this_01->operator_cast_to_bool()) {
            if (((ClientCompositeZone*)(*this_01).operator->())->IsValid()) {
                pFVar1 = (File*)(*this_01).operator->();
                pFVar1->write((char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin(), nullptr);
                pFVar1 = (File*)(*this_01).operator->();
                pFVar1->write("\n", nullptr);
            }
        }
    }

    // 0x100144040
    LogFileSink::~LogFileSink() {
        field_8.~unique_ptr();
    }

} // namespace jag::oldscape
