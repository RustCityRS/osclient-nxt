// libs/testframework/gaia/GaiaSinks.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.testframework

#include "GaiaSinks.h"

namespace jag::testframework {
    // 0x100baa6f0
    void GaiaLogSink::Write(const eastl::fixed_string<char, 2048>& str, logger::LogLevel logLevel) {
        unique_lock<std::mutex> local_40(field_16);
        GaiaConnection* this_00 = field_8;
        char* str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::string local_60(str_00);
        this_00->EnqueueApplicationConsoleResponse(&local_60, logLevel);
    }

} // namespace jag::testframework
