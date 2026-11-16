// libs/game/runetek5/lod/LODSettings.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "LODSettings.h"

namespace jag::game {
    // 0x100f3c0b8, 8 bytes, __data
    LODSettings::m_defaultLOD = 1;

    // 0x100066b70: the linker folded this into oldscape::widgets::Widget::GetTextColour() const, which has identical code
    int LODSettings::GetLODMinimumDistance() const;

    // 0x1004b46e0, 48 bytes, base-object constructor, placed by class name and debug map
    // LODSettings::LODSettings()
    void LODSettings::LODSettings() {
        field_0 = 4096;
        field_4 = 8192;
        field_8 = 12288;
        field_12 = 16384;
        m_lODMinimumDistance = 16384;
        m_lowestUsableLOD = 0;
        field_21 = 5;
        m_lowestUsableLOD = m_defaultLOD;
    }

    // 0x1004b4710, 16 bytes, complete-object constructor, placed by class name and debug map
    // LODSettings::LODSettings(): jumps straight to the base-object constructor

    // 0x1004b4720, 16 bytes, placed by class name and debug map
    // LODSettings::GetLowestUsableLOD() const
    undefined1 LODSettings::GetLowestUsableLOD() {
        return m_lowestUsableLOD;
    }

    // 0x1004b4730, 80 bytes, placed by class name and debug map
    // LODSettings::GetFarPlane() const
    int LODSettings::GetFarPlane() {
        uint uVar1;

        switch (m_lowestUsableLOD) {
        case 0:
            uVar1 = field_0;
            break;
        case 1:
            uVar1 = field_4;
            break;
        case 2:
            uVar1 = field_8;
            break;
        case 3:
            uVar1 = field_12;
            break;
        default:
            uVar1 = GetMaxLineWidth();
        }
        return uVar1 + 256;
    }

    // 0x1004b4780, 80 bytes, placed by class name and debug map
    // LODSettings::GetFogRange(unsigned int, float, float) const
    void LODSettings::GetFogRange(uint param_1, float param_2, float param_3) {
        float fVar1;
        float local_10;
        float local_c;

        fVar1 = (float)(param_1 + 256) * -0.00026946914 * param_3 + param_3;
        local_c = 0.0;
        if (0.0 <= fVar1) {
            local_c = fVar1;
        }
        local_10 = param_3;
        eastl::make_pair<float&, float&>(&local_c, &local_10);
    }

    // 0x1004b47d0, 80 bytes, placed by class name and debug map
    // LODSettings::GetLOD(unsigned int) const
    byte LODSettings::GetLOD(uint param_1) {
        byte bVar1;
        uint uVar2;

        bVar1 = field_21;
        if (4 < bVar1) {
            if (param_1 < field_0) {
                bVar1 = 0;
            } else {
                bVar1 = 1;
                if (((field_4 <= param_1) && (bVar1 = 2, field_8 <= param_1)) && (bVar1 = 3, field_12 <= param_1)) {
                    uVar2 = GetMaxLineWidth();
                    bVar1 = 5 - (param_1 < uVar2);
                }
            }
        }
        return bVar1;
    }

} // namespace jag::game
