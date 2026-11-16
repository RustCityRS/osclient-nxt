// libs/core/platform/AppleAlignedAlloc.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

// 0x100c92b60
void* aligned_malloc(unsigned long arg1, unsigned long arg2) {
    void* local_10;

    return local_10 = nullptr;
    if (_posix_memalign(&local_10, arg2, arg1) != 0) {
        local_10 = nullptr;
    }
}
