// libs/graphics/runetek7/gui/debug/DataRecorder.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    template <typename...> // 2 instantiations, e.g. <TimedGraph::Values>, <unsigned long long>
    class DataRecorder {
    public:
        void Reset();
        DataRecorder(unsigned int arg1, float arg2);
        ~DataRecorder();
    };

    // 0x1008fbc40
    void DataRecorder<TimedGraph::Values>::Reset() {
        clear();
        *(uint64_t*)(this + 36) = 0;
    }

    // 0x100904ad0
    DataRecorder<TimedGraph::Values>::DataRecorder(unsigned int arg1, float arg2)
        : eastl::vector<DataRecorder<TimedGraph::Values>::DataTimePair>() {
        *(float*)(this + 32) = arg2;
        *(uint64_t*)(this + 36) = 0;
        reserve((unsigned long)arg1);
    }

    // 0x100904d80
    DataRecorder<TimedGraph::Values>::~DataRecorder() {}

    // 0x100904f80
    DataRecorder<unsigned long long>::~DataRecorder() {}

    // 0x100913540
    DataRecorder<unsigned long long>::DataRecorder(unsigned int arg1, float arg2)
        : eastl::vector<DataRecorder<unsigned long long>::DataTimePair>() {
        *(float*)(this + 32) = arg2;
        *(uint64_t*)(this + 36) = 0;
        reserve((unsigned long)arg1);
    }

} // namespace jag
