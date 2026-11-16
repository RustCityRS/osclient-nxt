// libs/oldscape/rs2lib/constants/EngineMode.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

namespace jag::oldscape::constants {
    // 0x1002643f0, 96 bytes, placed by debug map only (low confidence)
    // EngineModeGetByString(eastl::string const&)
    int EngineModeGetByString(basic_string* param_1) {
        int iVar1;

        iVar1 = param_1->comparei("RC");
        if (iVar1 == 0) {
            iVar1 = 0;
        } else {
            iVar1 = param_1->comparei("WIP");
            if (iVar1 == 0) {
                iVar1 = 1;
            } else {
                iVar1 = param_1->comparei("LIVE");
                iVar1 = (uint)(iVar1 == 0) * 3 + -1;
            }
        }
        return iVar1;
    }

    // 0x100264450, 48 bytes, placed by debug map only (low confidence)
    // EngineModeInternalName(EngineMode)
    char* EngineModeInternalName(int param_1) {
        char* pcVar1;
        undefined8* puVar2;

        pcVar1 = "INVALID";
        if ((-2 < param_1) && (param_1 + 1U < 4)) {
            puVar2 = (undefined8*)std::array<char const*, 4ul>::operator[]((long)(int)(param_1 + 1U));
            pcVar1 = (char*)*puVar2;
        }
        return pcVar1;
    }

} // namespace jag::oldscape::constants
