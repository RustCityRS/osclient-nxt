// libs/oldscape/rs2lib/worldmap/FloorColourUtils.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

namespace jag::oldscape::rs2lib::worldmap {
    class FloorColourUtils {
    public:
        unsigned int GetFloColour(int arg1, int arg2);
        int FindHslColtab(int arg1, int arg2, int arg3);
        int ApplyLightingToColour(int arg1, int arg2);
        int GetFluColour(int arg1, int arg2);
    };

    // 0x10020b580
    unsigned int FloorColourUtils::GetFloColour(int arg1, int arg2) {
        int iVar1;
        long* plVar3;
        int arg3;
        int arg2_00;

        auto piVar2 = configdecoder::FloType::List(arg1);
        if (piVar2 == nullptr) {
            return arg2;
        }
        if (piVar2[3] < 0) {
            if (-1 < piVar2[1]) {
                plVar3 =
                    (long*)(*((shared_ptr<dash3d::TextureProvider>*)&dash3d::Pix3D::m_textureProvider)).operator->();
                iVar1 = (**(void (**)(...))(*plVar3 + 24))(plVar3, piVar2[1]);
                goto LAB_10020b5cb;
            }
            if (*piVar2 == 16711935) {
                return arg2;
            }
            iVar1 = piVar2[4];
            arg2_00 = piVar2[5];
            arg3 = piVar2[6];
        } else {
            iVar1 = piVar2[7];
            arg2_00 = piVar2[8];
            arg3 = piVar2[9];
        }
        iVar1 = FindHslColtab(iVar1, arg2_00, arg3);
    LAB_10020b5cb:
        iVar1 = ApplyLightingToColour(iVar1, 96);
        auto array = dash3d::Pix3D::GetColourTable();
        unsigned int* puVar4 = (unsigned int*)(*array)[(long)iVar1];
        return *puVar4 | 4278190080;
    }

    // 0x10020b610
    int FloorColourUtils::FindHslColtab(int arg1, int arg2, int arg3) {
        if (179 < arg3) {
            arg2 = arg2 / 2;
        }
        if (192 < arg3) {
            arg2 = arg2 / 2;
        }
        if (217 < arg3) {
            arg2 = arg2 / 2;
        }
        if (243 < arg3) {
            arg2 = arg2 / 2;
        }
        unsigned int uVar1 = arg1 + 3;
        if (-1 < arg1) {
            uVar1 = arg1;
        }
        unsigned int uVar2 = arg2 + 31;
        if (-1 < arg2) {
            uVar2 = arg2;
        }
        return arg3 / 2 + (uVar1 & 4294967292) * 256 + (uVar2 & 4294967264) * 4;
    }

    // 0x10020b6b0
    int FloorColourUtils::ApplyLightingToColour(int arg1, int arg2) {
        int iVar1;
        int iVar2;

        if (arg1 == -2) {
            return 12345678;
        }
        if (arg1 == -1) {
            iVar1 = 0;
            if (arg2 < 127) {
                iVar1 = -(arg2 - 127);
            }
            iVar2 = 127;
            if (-1 < arg2) {
                iVar2 = iVar1;
            }
            return iVar2;
        }
        iVar2 = (arg1 & 127U) * arg2;
        iVar1 = iVar2 + 127;
        if (-1 < iVar2) {
            iVar1 = iVar2;
        }
        int iVar3 = 126;
        if (iVar1 >> 7 < 126) {
            iVar3 = iVar1 >> 7;
        }
        iVar1 = 2;
        if (255 < iVar2) {
            iVar1 = iVar3;
        }
        return (arg1 & 65408U) + iVar1;
    }

    // 0x10020b770
    int FloorColourUtils::GetFluColour(int arg1, int arg2) {
        long lVar1 = configdecoder::FluType::List(arg1);
        if (lVar1 != 0) {
            arg2 =
                HslUtils::GetRgb((double)(*(int*)(lVar1 + 4) << 8) / ((double)*(int*)(lVar1 + 16) * 256.0),
                                 (double)*(int*)(lVar1 + 8) * 0.00390625f, (double)*(int*)(lVar1 + 12) * 0.00390625f);
        }
        return arg2;
    }

} // namespace jag::oldscape::rs2lib::worldmap
