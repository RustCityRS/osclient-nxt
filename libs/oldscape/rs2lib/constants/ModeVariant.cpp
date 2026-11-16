// libs/oldscape/rs2lib/constants/ModeVariant.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

namespace jag::oldscape::constants {
    // 0x1002646e0
    void ModeVariantGetByString(const eastl::string& str) {
        uint64_t uVar2;

        int iVar1 = str.comparei("BETA");
        if (iVar1 == 0) {
            uVar2 = 1;
        } else {
            iVar1 = str.comparei("DEADMAN");
            if (iVar1 == 0) {
                uVar2 = 2;
            } else {
                iVar1 = str.comparei("SEASONAL");
                if (iVar1 == 0) {
                    uVar2 = 3;
                } else {
                    iVar1 = str.comparei("ALTSEASONAL");
                    if (iVar1 == 0) {
                        uVar2 = 4;
                    } else {
                        iVar1 = str.comparei("TOURNAMENT");
                        if (iVar1 == 0) {
                            uVar2 = 5;
                        } else {
                            iVar1 = str.comparei("PVPARENA");
                            if (iVar1 == 0) {
                                uVar2 = 6;
                            } else {
                                iVar1 = str.comparei("SPEEDRUN");
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

    // 0x1002647b0
    char* ModeVariantInternalName(ModeVariant modeVariant) {
        uint64_t* puVar2;
        unsigned long in_RSI;

        char* pcVar1 = "INVALID";
        if ((-2 < (int)modeVariant) && (modeVariant + 1 < 8)) {
            puVar2 = (uint64_t*)(*((array<char const*, 8ul>*)(long)(int)(modeVariant + 1)))[in_RSI];
            pcVar1 = (char*)*puVar2;
        }
        return pcVar1;
    }

} // namespace jag::oldscape::constants
