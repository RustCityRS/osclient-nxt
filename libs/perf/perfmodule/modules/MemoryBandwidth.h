// libs/perf/perfmodule/modules/MemoryBandwidth.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::perf {
    class MemoryBandwidth : public PerfModule // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~MemoryBandwidth();
        virtual void Run(int& arg1);
    };

    // 0x100bc5550
    MemoryBandwidth::~MemoryBandwidth() {}

} // namespace jag::perf
