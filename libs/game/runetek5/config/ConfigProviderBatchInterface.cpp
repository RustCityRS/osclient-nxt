// libs/game/runetek5/config/ConfigProviderBatchInterface.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.systemheap

#include "ConfigProviderBatchInterface.h"

namespace jag::game {
    // 0x100009e70: ConfigProviderBatchInterface::~ConfigProviderBatchInterface() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x10056add0
    void ConfigProviderBatchInterface::IncrementLoaded() {
        field_44 = field_44 + 1;
        int* piVar1 = &field_8->field_748;
        *piVar1 = *piVar1 + 1;
    }

} // namespace jag::game
