// libs/game/runetek5/config/DownloadWaitHandler.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "DownloadWaitHandler.h"

namespace jag {
    // 0x100561d50, 144 bytes, base-object constructor, placed by class name and debug map
    // DownloadWaitHandler::DownloadWaitHandler(int)
    void DownloadWaitHandler::DownloadWaitHandler(int param_1) {
        uint uVar1;
        GraphicsApp* pGVar2;
        allocator local_28[8];

        eastl::allocator::allocator(local_28, "EASTL vector");
        new (this) eastl::vector<unsigned char, eastl::allocator>((long)param_1, local_28);
        pGVar2 = (GraphicsApp*)HeapBeginPtr();
        ___bzero(pGVar2, (long)param_1);
        pGVar2 = (GraphicsApp*)pGVar2->Instance();
        uVar1 = pGVar2->GetMainLoopRate();
        uVar1 = eastl::max<unsigned int>(2, uVar1 / 10);
        field_32 = uVar1;
    }

    // 0x100561e00, 16 bytes, complete-object constructor, placed by class name and debug map
    // DownloadWaitHandler::DownloadWaitHandler(int): jumps straight to the base-object constructor

} // namespace jag
