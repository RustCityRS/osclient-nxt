// projects/osclient/debug/PerformanceCapture.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::debug {
    class PerformanceCapture {
    public:
        class PerformanceData;
        PerformanceCapture(unsigned long long, unsigned long long);
        void Instance();
        void PerfCaptureSetup(unsigned long long, unsigned long long);
        void StorePerformanceData(File&);
        void ResetAllPerformanceData();
        PerformanceCapture* GenerateLocalTime();
        void PerfCaptureStop();
        void OnPerfCaptureStop();
        void PerfCaptureClear();
        void PerfCaptureHelp();
        void DoCommand(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&, eastl::string&);
        void PerfCaptureStart();
        GetElapsedTimeSinceCaptureStart();
        ~PerformanceCapture();
        static /* 8 bytes */ m_instance;

        // data members, from how the methods use this: 792 bytes
        char _unknown_0[8];
        ulong field_8; // offset 8
        char _unknown_16[104];
        ulonglong field_120;  // offset 120
        undefined8 field_128; // offset 128
        ulonglong field_136;  // offset 136
        undefined8 field_144; // offset 144
        ulonglong field_152;  // offset 152
        undefined1 field_160; // offset 160
        char field_161;       // offset 161
        undefined1 field_162; // offset 162
        char _unknown_163[5];
        Filename field_168; // offset 168
        char _unknown_184[288];
        Filename field_472; // offset 472
        char _unknown_488[288];
        Filename field_776; // offset 776
    };

    class PerformanceCapture::PerformanceData {
    public:
        PerformanceData();
        ~PerformanceData();

        // data members, from how the methods use this: 104 bytes
        char _unknown_0[104];
    };

    // 0x100060e80, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // PerformanceCapture::PerformanceData::PerformanceData(): jumps straight to the base-object constructor

    // 0x100060ef0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // PerformanceCapture::PerformanceData::~PerformanceData(): jumps straight to the base-object destructor

    // 0x100075ac0, 64 bytes, base-object constructor, inline, placed by class name
    // PerformanceCapture::PerformanceData::PerformanceData()
    void PerformanceCapture::PerformanceData::PerformanceData() {
        std::vector<eastl::string, std::allocator<eastl::string>>::vector();
        std::vector<float, std::allocator<float>>::vector();
        std::vector<unsigned long long, std::allocator<unsigned long long>>::vector();
        std::vector<unsigned int, std::allocator<unsigned int>>::vector();
        std::vector<int, std::allocator<int>>::vector();
    }

    // 0x100075d30, 64 bytes, base-object destructor, inline, placed by class name
    // PerformanceCapture::PerformanceData::~PerformanceData()
    void PerformanceCapture::PerformanceData::~PerformanceData() {
        (&field_96)->~vector();
        (&field_72)->~vector();
        (&field_48)->~vector();
        (&field_24)->~vector();
        ~vector();
    }

    // 0x10007ef40, 16 bytes, complete-object destructor, inline, placed by class name
    // PerformanceCapture::~PerformanceCapture(): jumps straight to the base-object destructor

    // 0x10007ef50, 64 bytes, base-object destructor, inline, placed by class name
    // PerformanceCapture::~PerformanceCapture()
    void PerformanceCapture::~PerformanceCapture() {
        field_776->~unique_ptr();
        field_472->~pair();
        field_168->~pair();
        ~PerformanceData();
    }

} // namespace jag::oldscape::debug
