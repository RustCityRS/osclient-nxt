// libs/core/platform/AppleAlignedAlloc.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

// 0x100c92b60, 48 bytes, inline, placed by debug map only (low confidence)
// aligned_malloc(unsigned long, unsigned long)
void* aligned_malloc(ulong param_1, ulong param_2) {
    void* local_10;

    local_10 = (void*)0;
    if (_posix_memalign(&local_10, param_2, param_1) != 0) {
        local_10 = (void*)0;
    }
    return local_10;
}
