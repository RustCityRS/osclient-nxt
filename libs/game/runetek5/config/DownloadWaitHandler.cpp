// libs/game/runetek5/config/DownloadWaitHandler.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "DownloadWaitHandler.h"

namespace jag {
    // 0x100561d50
    DownloadWaitHandler::DownloadWaitHandler(int arg1) {
        new (this) eastl::vector<unsigned char>((long)arg1, local_28);
        ___bzero(HeapBeginPtr(), (long)arg1);
        unsigned int uVar1 = ((GraphicsApp*)GraphicsApp::Instance())->GetMainLoopRate();
        uVar1 = eastl::max<unsigned int>(2, uVar1 / 10);
        field_32 = uVar1;
    }

} // namespace jag
