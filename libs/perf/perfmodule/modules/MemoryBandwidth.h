// libs/perf/perfmodule/modules/MemoryBandwidth.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::perf {
    class MemoryBandwidth : public PerfModule // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~MemoryBandwidth();
        virtual void Run(int&);

        // data members, from how the methods use this: 496 bytes, the first 496 are PerfModule
    };

    // 0x100bc4e20, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // MemoryBandwidth::~MemoryBandwidth(): jumps straight to the base-object destructor

    // 0x100bc4e30, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // MemoryBandwidth::~MemoryBandwidth()
    void MemoryBandwidth::~MemoryBandwidth() {
        ~MemoryBandwidth(this);
        operator_delete(this);
    }

    // 0x100bc5550, 16 bytes, base-object destructor, inline, placed by class name
    // MemoryBandwidth::~MemoryBandwidth()
    void MemoryBandwidth::~MemoryBandwidth() {
        ~PerfModule();
    }

} // namespace jag::perf
