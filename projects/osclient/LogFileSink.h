// projects/osclient/LogFileSink.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape {
    class LogFileSink {
    public:
        // virtual methods in vtable order
        virtual ~LogFileSink();
        virtual void Write(eastl::fixed_string<char, 2048, true, eastl::allocator> const&, logger::LogLevel);
        void SetLogFile(Filename&);
        LogFileSink();

        // data members, from how the methods use this: 16 bytes
        undefined* field_0; // offset 0, vtable pointer
        char _unknown_8[8];
    };

    // 0x1000dd3f0, 160 bytes, inline, placed by class name and debug map
    // LogFileSink::SetLogFile(Filename&)
    void LogFileSink::SetLogFile(Filename* param_1) {
        ClientCompositeZone* this_00;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined1* this_01;
        undefined1 local_28[8];

        std::make_unique<File, Filename&, int const&>((Filename*)local_28, (int*)param_1);
        this_01 = &field_8;
        std::unique_ptr<File, std::default_delete<File>>::operator=(
            (unique_ptr<File, std::default_delete<File>>*)this_01, (unique_ptr*)local_28);
        local_28->~unique_ptr();
        this_00 = (ClientCompositeZone*)std::unique_ptr<File, std::default_delete<File>>::operator->(
            (unique_ptr<File, std::default_delete<File>>*)this_01);
        if (this_00->IsValid() == '\0') {
            this_01->reset(0);
            uVar2 = logger::default_logger();
            uVar3 = param_1->GetName();
            logger::Logger::Log(
                uVar2, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/LogFileSink.h", 28,
                "Could not open %s", uVar3);
        }
    }

    // 0x100143ef0, 16 bytes, complete-object constructor, inline, placed by class name
    // LogFileSink::LogFileSink(): jumps straight to the base-object constructor

    // 0x100143f00, 48 bytes, base-object constructor, inline, placed by class name
    // LogFileSink::LogFileSink()
    void LogFileSink::LogFileSink() {
        new (this) logger::Sink();
        field_0 = PTR_vtable_100ee88d0 + 16;
        std::unique_ptr<File, std::default_delete<File>>::unique_ptr<true, void>(
            (unique_ptr<File, std::default_delete<File>>*)&field_8);
    }

    // 0x100143f40, 16 bytes, complete-object destructor, inline, placed by class name
    // LogFileSink::~LogFileSink(): jumps straight to the base-object destructor

    // 0x100143f50, 32 bytes, deleting destructor, inline, placed by class name
    // LogFileSink::~LogFileSink()
    void LogFileSink::~LogFileSink() {
        ~LogFileSink(this);
        operator_delete(this);
    }

    // 0x100143f70, 128 bytes, inline, placed by class name
    // LogFileSink::Write(eastl::fixed_string<char, 2048, true, eastl::allocator> const&, logger::LogLevel)
    void LogFileSink::Write() {
        ClientCompositeZone* this_00;
        File* pFVar1;
        char* pcVar2;
        undefined1* this_01;

        this_01 = &field_8;
        if (this_01->operator_cast_to_bool()) {
            this_00 = (ClientCompositeZone*)std::unique_ptr<File, std::default_delete<File>>::operator->(
                (unique_ptr<File, std::default_delete<File>>*)this_01);
            if (this_00->IsValid() != '\0') {
                pFVar1 = (File*)std::unique_ptr<File, std::default_delete<File>>::operator->(
                    (unique_ptr<File, std::default_delete<File>>*)this_01);
                pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                pFVar1->write(pcVar2, 0);
                pFVar1 = (File*)std::unique_ptr<File, std::default_delete<File>>::operator->(
                    (unique_ptr<File, std::default_delete<File>>*)this_01);
                pFVar1->write("\n", 0);
            }
        }
    }

    // 0x100144040, 48 bytes, base-object destructor, inline, placed by class name
    // LogFileSink::~LogFileSink()
    void LogFileSink::~LogFileSink() {
        field_0 = PTR_vtable_100ee88d0 + 16;
        (&field_8)->~unique_ptr();
        ~AutoSingleton();
    }

} // namespace jag::oldscape
