// libs/game/runetek5/config/ConfigProviderBatchInterface.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.systemheap

#include "ConfigProviderBatchInterface.h"

namespace jag::game {
    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    ConfigProviderBatchInterface::~ConfigProviderBatchInterface();

    // 0x10056add0, 32 bytes, placed by class name and debug map
    // ConfigProviderBatchInterface::IncrementLoaded()
    void ConfigProviderBatchInterface::IncrementLoaded() {
        int* piVar1;

        field_44 = field_44 + 1;
        piVar1 = &field_8->field_748;
        *piVar1 = *piVar1 + 1;
    }

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    ConfigProviderBatchInterface::~ConfigProviderBatchInterface();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    ConfigProviderBatchInterface::~ConfigProviderBatchInterface();

} // namespace jag::game
