// libs/oldscape/rs2lib/constants/EngineMode.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

namespace jag::oldscape::constants {
    // 0x1002643f0
    int EngineModeGetByString(const eastl::string& str) {
        int iVar1 = str.comparei("RC");
        if (iVar1 == 0) {
            iVar1 = 0;
        } else {
            iVar1 = str.comparei("WIP");
            if (iVar1 == 0) {
                iVar1 = 1;
            } else {
                iVar1 = str.comparei("LIVE");
                iVar1 = (unsigned int)(iVar1 == 0) * 3 - 1;
            }
        }
        return iVar1;
    }

    // 0x100264450
    char* EngineModeInternalName(EngineMode engineMode) {
        uint64_t* puVar2;
        unsigned long in_RSI;

        char* pcVar1 = "INVALID";
        if ((-2 < (int)engineMode) && (engineMode + 1 < 4)) {
            puVar2 = (uint64_t*)(*((array<char const*, 4ul>*)(long)(int)(engineMode + 1)))[in_RSI];
            pcVar1 = (char*)*puVar2;
        }
        return pcVar1;
    }

} // namespace jag::oldscape::constants
