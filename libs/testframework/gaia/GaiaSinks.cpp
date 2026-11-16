// libs/testframework/gaia/GaiaSinks.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.testframework

#include "GaiaSinks.h"

namespace jag::testframework {
    // 0x100baa6f0, 176 bytes, placed by debug map only (low confidence)
    // GaiaLogSink::Write(eastl::fixed_string<char, 2048, true, eastl::allocator> const&, logger::LogLevel)
    void GaiaLogSink::Write(undefined8 param_2, undefined4 param_3) {
        GaiaConnection* pGVar1;
        char* pcVar2;
        eastl::string local_60[32];
        unique_lock<std::mutex> local_40[16];
        allocator local_30[8];

        std::unique_lock<std::mutex>::unique_lock(local_40, (mutex*)&field_16);
        pGVar1 = field_8;
        pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::allocator::allocator(local_30, "EASTL basic_string");
        eastl::string::basic_string(local_60, pcVar2, local_30);
        pGVar1->EnqueueApplicationConsoleResponse(local_60, param_3);
        eastl::string::~basic_string(local_60);
        std::unique_lock<std::mutex>::~unique_lock(local_40);
    }

} // namespace jag::testframework
