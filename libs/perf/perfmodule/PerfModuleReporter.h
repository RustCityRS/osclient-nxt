// libs/perf/perfmodule/PerfModuleReporter.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::perf {
    class PerfModuleReporter {
    public:
        long FindResult(int arg1) const;
        uint64_t AllFinished();
        uint64_t AllSucceeded();
        int GetSummedResults(const int* arg1, unsigned long arg2) const;
        void GetWeightedSummedResults(const int* arg1, const float* arg2, unsigned long arg3) const;
        unsigned long GetAverageResult(const int* arg1, unsigned long arg2) const;
        uint64_t GetWeightedAverageResult(const int* arg1, const float* arg2, unsigned long arg3) const;
        void PrintResults() const;
        void GetResult(int arg1);

    private:
        uint8_t _unknown_0[8];
        int field_8;
        uint8_t _unknown_12[4];
    };

    // 0x100bc4d50
    void PerfModuleReporter::GetResult(int arg1) {
        field_8[arg1];
    }

} // namespace jag::perf
