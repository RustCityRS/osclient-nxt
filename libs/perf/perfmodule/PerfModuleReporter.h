// libs/perf/perfmodule/PerfModuleReporter.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::perf {
    class PerfModuleReporter {
    public:
        long FindResult(int) const;
        AllFinished();
        AllSucceeded();
        int GetSummedResults(int const*, unsigned long) const;
        void GetWeightedSummedResults(int const*, float const*, unsigned long) const;
        ulong GetAverageResult(int const*, unsigned long) const;
        GetWeightedAverageResult(int const*, float const*, unsigned long) const;
        void PrintResults() const;
        void GetResult(int);

        // data members, from how the methods use this: 16 bytes
        char _unknown_0[16];
    };

    // 0x100bc4d50, 32 bytes, inline, placed by class name and debug map
    // PerfModuleReporter::GetResult(int)
    void PerfModuleReporter::GetResult(int param_1) {
        int local_c;

        local_c = param_1;
        eastl::vector_map<int, PerfModuleResult, eastl::less<int>, eastl::allocator,
                          eastl::vector<eastl::pair<int, PerfModuleResult>, eastl::allocator>>::
        operator[]((vector_map<int, PerfModuleResult, eastl::less<int>, eastl::allocator,
                               eastl::vector<eastl::pair<int, PerfModuleResult>, eastl::allocator>>*)&field_8,
                   &local_c);
    }

} // namespace jag::perf
