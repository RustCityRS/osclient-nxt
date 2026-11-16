// libs/game/runetek5/lod/LODSettings.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "LODSettings.h"

namespace jag::game {
    // 0x100f3c0b8
    int64_t LODSettings::m_defaultLOD = 1;

    // 0x100066b70: LODSettings::GetLODMinimumDistance() const has the same machine code as oldscape::widgets::Widget::GetTextColour() const

    // 0x1004b46e0
    LODSettings::LODSettings()
        : field_0(4096), field_4(8192), field_8(12288), field_12(16384), m_lODMinimumDistance(16384),
          m_lowestUsableLOD(0), field_21(5), m_lowestUsableLOD(m_defaultLOD) {}

    // 0x1004b4720
    uint8_t LODSettings::GetLowestUsableLOD() const {
        return m_lowestUsableLOD;
    }

    // 0x1004b4730
    int LODSettings::GetFarPlane() const {
        unsigned int uVar1;

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

    // 0x1004b4780
    void LODSettings::GetFogRange(unsigned int arg1, float arg2, float arg3) const {
        float fVar1 = (float)(arg1 + 256) * -0.00026946914 * arg3 + arg3;
        float local_c = 0.0;
        if (0.0 <= fVar1) {
            local_c = fVar1;
        }
        eastl::make_pair<float&, float&>(local_c, arg3);
    }

    // 0x1004b47d0
    uint8_t LODSettings::GetLOD(unsigned int arg1) const {
        unsigned int uVar2;

        uint8_t bVar1 = field_21;
        if (4 < bVar1) {
            if (arg1 < field_0) {
                bVar1 = 0;
            } else {
                bVar1 = 1;
                if (((field_4 <= arg1) && (bVar1 = 2, field_8 <= arg1)) && (bVar1 = 3, field_12 <= arg1)) {
                    uVar2 = GetMaxLineWidth();
                    bVar1 = 5 - (arg1 < uVar2);
                }
            }
        }
        return bVar1;
    }

} // namespace jag::game
