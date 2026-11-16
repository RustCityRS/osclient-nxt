// libs/oldscape/rs2lib/worldmap/FloorColourUtils.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

namespace jag::oldscape::rs2lib::worldmap {
    class FloorColourUtils {
    public:
        uint GetFloColour(int, int);
        int FindHslColtab(int, int, int);
        int ApplyLightingToColour(int, int);
        int GetFluColour(int, int);
    };

    // 0x10020b580, 144 bytes, placed by class name and debug map
    // FloorColourUtils::GetFloColour(int, int)
    uint FloorColourUtils::GetFloColour(int param_1, int param_2) {
        int iVar1;
        int* piVar2;
        long* plVar3;
        array<int, 65536ul>* this;
        uint* puVar4;
        int iVar5;
        int iVar6;

        piVar2 = (int*)configdecoder::FloType::List(param_1);
        if (piVar2 == (int*)0) {
            return param_2;
        }
        if (piVar2[3] < 0) {
            if (-1 < piVar2[1]) {
                plVar3 = (long*)shared_ptr<dash3d::TextureProvider>::operator->(
                    (shared_ptr<dash3d::TextureProvider>*)&dash3d::Pix3D::m_textureProvider);
                iVar1 = (**(code**)(*plVar3 + 24))(plVar3, piVar2[1]);
                goto LAB_10020b5cb;
            }
            if (*piVar2 == 16711935) {
                return param_2;
            }
            iVar1 = piVar2[4];
            iVar6 = piVar2[5];
            iVar5 = piVar2[6];
        } else {
            iVar1 = piVar2[7];
            iVar6 = piVar2[8];
            iVar5 = piVar2[9];
        }
        iVar1 = FindHslColtab(iVar1, iVar6, iVar5);
    LAB_10020b5cb:
        iVar1 = ApplyLightingToColour(iVar1, 96);
        this = (array<int, 65536ul>*)dash3d::Pix3D::GetColourTable();
        puVar4 = (uint*)std::array<int, 65536ul>::operator[](this, (long)iVar1);
        return *puVar4 | 4278190080;
    }

    // 0x10020b610, 160 bytes, placed by class name and debug map
    // FloorColourUtils::FindHslColtab(int, int, int)
    int FloorColourUtils::FindHslColtab(int param_1, int param_2, int param_3) {
        uint uVar1;
        uint uVar2;

        if (179 < param_3) {
            param_2 = param_2 / 2;
        }
        if (192 < param_3) {
            param_2 = param_2 / 2;
        }
        if (217 < param_3) {
            param_2 = param_2 / 2;
        }
        if (243 < param_3) {
            param_2 = param_2 / 2;
        }
        uVar1 = param_1 + 3;
        if (-1 < param_1) {
            uVar1 = param_1;
        }
        uVar2 = param_2 + 31;
        if (-1 < param_2) {
            uVar2 = param_2;
        }
        return param_3 / 2 + (uVar1 & 4294967292) * 256 + (uVar2 & 4294967264) * 4;
    }

    // 0x10020b6b0, 112 bytes, placed by class name and debug map
    // FloorColourUtils::ApplyLightingToColour(int, int)
    int FloorColourUtils::ApplyLightingToColour(int param_1, int param_2) {
        int iVar1;
        int iVar2;
        int iVar3;

        if (param_1 == -2) {
            return 12345678;
        }
        if (param_1 == -1) {
            iVar1 = 0;
            if (param_2 < 127) {
                iVar1 = -(param_2 + -127);
            }
            iVar2 = 127;
            if (-1 < param_2) {
                iVar2 = iVar1;
            }
            return iVar2;
        }
        iVar2 = (param_1 & 127U) * param_2;
        iVar1 = iVar2 + 127;
        if (-1 < iVar2) {
            iVar1 = iVar2;
        }
        iVar3 = 126;
        if (iVar1 >> 7 < 126) {
            iVar3 = iVar1 >> 7;
        }
        iVar1 = 2;
        if (255 < iVar2) {
            iVar1 = iVar3;
        }
        return (param_1 & 65408U) + iVar1;
    }

    // 0x10020b770, 96 bytes, placed by class name and debug map
    // FloorColourUtils::GetFluColour(int, int)
    int FloorColourUtils::GetFluColour(int param_1, int param_2) {
        long lVar1;

        lVar1 = configdecoder::FluType::List(param_1);
        if (lVar1 != 0) {
            param_2 =
                HslUtils::GetRgb((double)(*(int*)(lVar1 + 4) << 8) / ((double)*(int*)(lVar1 + 16) * 256.0),
                                 (double)*(int*)(lVar1 + 8) * 0.00390625, (double)*(int*)(lVar1 + 12) * 0.00390625);
        }
        return param_2;
    }

} // namespace jag::oldscape::rs2lib::worldmap
