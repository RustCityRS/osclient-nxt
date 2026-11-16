// projects/osclient/debug/PerformanceCapture.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::debug {
    class PerformanceCapture {
    public:
        class PerformanceData;
        PerformanceCapture(unsigned long long arg1, unsigned long long arg2);
        void Instance();
        void PerfCaptureSetup(unsigned long long arg1, unsigned long long arg2);
        void StorePerformanceData(File& file);
        void ResetAllPerformanceData();
        auto GenerateLocalTime();
        void PerfCaptureStop();
        void OnPerfCaptureStop();
        void PerfCaptureClear();
        void PerfCaptureHelp();
        void DoCommand(const eastl::fixed_vector<StringView, 4ul>& stringViews, eastl::string& str);
        void PerfCaptureStart();
        auto GetElapsedTimeSinceCaptureStart();
        ~PerformanceCapture();
        static int64_t m_instance;

    private:
        uint8_t _unknown_0[8];
        unsigned long field_8;
        uint8_t _unknown_16[104];
        unsigned long long field_120;
        uint64_t field_128;
        unsigned long long field_136;
        uint64_t field_144;
        unsigned long long field_152;
        uint8_t field_160;
        char field_161;
        uint8_t field_162;
        uint8_t _unknown_163[621];
    };

    class PerformanceCapture::PerformanceData {
    public:
        PerformanceData();
        ~PerformanceData();

        uint8_t _unknown_0[104];
    };

    // 0x100075ac0
    PerformanceCapture::PerformanceData::PerformanceData() : std::vector<eastl::string>() {
        new (&field_96) std::vector<int>();
    }

    // 0x100075d30
    PerformanceCapture::PerformanceData::~PerformanceData() {
        field_96.~vector();
        field_72.~vector();
        field_48.~vector();
        field_24.~vector();
    }

    // 0x10007ef50
    PerformanceCapture::~PerformanceCapture() {
        field_776.~unique_ptr();
        field_472.~pair();
        field_168.~pair();
    }

} // namespace jag::oldscape::debug
