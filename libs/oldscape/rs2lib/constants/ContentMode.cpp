// libs/oldscape/rs2lib/constants/ContentMode.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

namespace jag::oldscape::constants {
    // 0x100264320
    int ContentModeGetByString(const eastl::string& str) {
        int iVar1 = str.comparei("LIVE");
        if (iVar1 == 0) {
            iVar1 = 0;
        } else {
            iVar1 = str.comparei("BUILDLIVE");
            if (iVar1 == 0) {
                iVar1 = 3;
            } else {
                iVar1 = str.comparei("RC");
                if (iVar1 == 0) {
                    iVar1 = 1;
                } else {
                    iVar1 = str.comparei("WIP");
                    iVar1 = (unsigned int)(iVar1 == 0) * 3 - 1;
                }
            }
        }
        return iVar1;
    }

    // 0x1002643a0
    char* ContentModeInternalName(ContentMode contentMode) {
        uint64_t* puVar2;
        unsigned long in_RSI;

        char* pcVar1 = "INVALID";
        if ((-2 < (int)contentMode) && (contentMode + 1 < 5)) {
            puVar2 = (uint64_t*)(*((array<char const*, 5ul>*)(long)(int)(contentMode + 1)))[in_RSI];
            pcVar1 = (char*)*puVar2;
        }
        return pcVar1;
    }

} // namespace jag::oldscape::constants
