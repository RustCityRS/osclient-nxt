// libs/graphics/runetek7/gui/debug/DataRecorder.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    template <typename...> // 2 instantiations, e.g. <TimedGraph::Values>, <unsigned long long>
    class DataRecorder {
    public:
        void Reset();
        DataRecorder(unsigned int, float);
        ~DataRecorder();
    };

    // 0x1008fbc40, 32 bytes, inline, placed by class name and debug map
    // DataRecorder<TimedGraph::Values>::Reset()
    void DataRecorder<TimedGraph::Values>::Reset() {
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        *(undefined8*)(this + 36) = 0;
    }

    // 0x1008fc130, 16 bytes, complete-object constructor, inline, placed by class name
    // DataRecorder<unsigned long long>::DataRecorder(unsigned int, float): jumps straight to the base-object constructor

    // 0x100904940, 16 bytes, complete-object constructor, inline, placed by class name
    // DataRecorder<TimedGraph::Values>::DataRecorder(unsigned int, float): jumps straight to the base-object constructor

    // 0x100904ad0, 96 bytes, base-object constructor, inline, placed by class name
    // DataRecorder<TimedGraph::Values>::DataRecorder(unsigned int, float)
    void DataRecorder<TimedGraph::Values>::DataRecorder(uint param_1, float param_2) {
        new (this) eastl::vector<DataRecorder<TimedGraph::Values>::DataTimePair, eastl::allocator>();
        *(float*)(this + 32) = param_2;
        *(undefined8*)(this + 36) = 0;
        reserve((ulong)param_1);
    }

    // 0x100904d70, 16 bytes, complete-object destructor, inline, placed by class name
    // DataRecorder<TimedGraph::Values>::~DataRecorder(): jumps straight to the base-object destructor

    // 0x100904d80, 16 bytes, base-object destructor, inline, placed by class name
    // DataRecorder<TimedGraph::Values>::~DataRecorder()
    void DataRecorder<TimedGraph::Values>::~DataRecorder() {
        ~vector();
    }

    // 0x100904f70, 16 bytes, complete-object destructor, inline, placed by class name
    // DataRecorder<unsigned long long>::~DataRecorder(): jumps straight to the base-object destructor

    // 0x100904f80, 16 bytes, base-object destructor, inline, placed by class name
    // DataRecorder<unsigned long long>::~DataRecorder()
    void DataRecorder<unsigned long long>::~DataRecorder() {
        ~vector();
    }

    // 0x100913540, 96 bytes, base-object constructor, inline, placed by class name
    // DataRecorder<unsigned long long>::DataRecorder(unsigned int, float)
    void DataRecorder<unsigned long long>::DataRecorder(uint param_1, float param_2) {
        new (this) eastl::vector<DataRecorder<unsigned long long>::DataTimePair, eastl::allocator>();
        *(float*)(this + 32) = param_2;
        *(undefined8*)(this + 36) = 0;
        reserve((ulong)param_1);
    }

} // namespace jag
