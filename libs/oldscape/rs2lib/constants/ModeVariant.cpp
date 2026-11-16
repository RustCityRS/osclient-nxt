// libs/oldscape/rs2lib/constants/ModeVariant.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

namespace jag::oldscape::constants {
    // 0x1002646e0, 208 bytes, placed by debug map only (low confidence)
    // ModeVariantGetByString(eastl::string const&)
    undefined8 ModeVariantGetByString(basic_string* param_1) {
        int iVar1;
        undefined8 uVar2;

        iVar1 = param_1->comparei("BETA");
        if (iVar1 == 0) {
            uVar2 = 1;
        } else {
            iVar1 = param_1->comparei("DEADMAN");
            if (iVar1 == 0) {
                uVar2 = 2;
            } else {
                iVar1 = param_1->comparei("SEASONAL");
                if (iVar1 == 0) {
                    uVar2 = 3;
                } else {
                    iVar1 = param_1->comparei("ALTSEASONAL");
                    if (iVar1 == 0) {
                        uVar2 = 4;
                    } else {
                        iVar1 = param_1->comparei("TOURNAMENT");
                        if (iVar1 == 0) {
                            uVar2 = 5;
                        } else {
                            iVar1 = param_1->comparei("PVPARENA");
                            if (iVar1 == 0) {
                                uVar2 = 6;
                            } else {
                                iVar1 = param_1->comparei("SPEEDRUN");
                                uVar2 = 7;
                                if (iVar1 != 0) {
                                    uVar2 = 0;
                                }
                            }
                        }
                    }
                }
            }
        }
        return uVar2;
    }

    // 0x1002647b0, 48 bytes, placed by debug map only (low confidence)
    // ModeVariantInternalName(ModeVariant)
    char* ModeVariantInternalName(int param_1) {
        char* pcVar1;
        undefined8* puVar2;

        pcVar1 = "INVALID";
        if ((-2 < param_1) && (param_1 + 1U < 8)) {
            puVar2 = (undefined8*)std::array<char const*, 8ul>::operator[]((long)(int)(param_1 + 1U));
            pcVar1 = (char*)*puVar2;
        }
        return pcVar1;
    }

} // namespace jag::oldscape::constants
