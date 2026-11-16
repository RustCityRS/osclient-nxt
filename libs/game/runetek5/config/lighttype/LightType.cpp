// libs/game/runetek5/config/lighttype/LightType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "LightType.h"

namespace jag::game {
    // 0x100009720: LightType::GetJitterMoveTimeOffsetRandomMS() const has the same machine code as BaseApp::GetExitCode()

    // 0x100009e70: LightType::PostDecode() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100061e30: LightType::GetOffset() const has the same machine code as render::RenderStats::GetTriangleCount() const

    // 0x1000e31a0: LightType::GetJitterMoveTimeMS() const has the same machine code as oldscape::graphics::NXTPixScreen::GetUIWidth() const

    // 0x10011cd30: LightType::GetJitterRadiusRandom() const has the same machine code as oldscape::configdecoder::NPCTypeCustomisation::UsePlayerModel() const

    // 0x1001be5d0: LightType::GetWaveType() const has the same machine code as graphics::SunlightOptions::GetShadowQuality() const

    // 0x1003f65a0: LightType::GetFrequency() const has the same machine code as EntityRoute::GetStalledTickCount() const

    // 0x100429b10: LightType::GetAmplitude() const has the same machine code as StaticPointLight::GetRGB() const

    // 0x100515b10
    uint8_t* LightType::DecodeType(PacketT<Array<unsigned char>>& arg1, unsigned int arg2) {
        uint8_t bVar1;
        unsigned short uVar2;
        short sVar3;
        uint8_t** ppuVar5;
        uint32_t uVar7;

        switch (arg2) {
        case 1:
            bVar1 = arg1.g1();
            m_waveType = (unsigned int)bVar1;
            break;
        case 2:
            uVar2 = arg1.g2();
            m_frequency = (unsigned int)uVar2;
            break;
        case 3:
            uVar2 = arg1.g2();
            m_amplitude = (unsigned int)uVar2;
            break;
        case 4:
            sVar3 = arg1.g2s();
            m_offset = (int)sVar3;
            break;
        case 5:
            uVar7 = arg1.gFloat();
            field_72 = uVar7;
            break;
        case 6:
            uVar7 = arg1.gFloat();
            field_76 = uVar7;
            break;
        case 7:
            uVar7 = arg1.gFloat();
            field_80 = uVar7;
            break;
        case 8:
            m_jitterRadius = (float)arg1.gFloat();
            break;
        case 9:
            m_jitterRadiusRandom = 1;
            break;
        case 10:
            m_jitterMoveTimeMS = arg1.g4();
            break;
        case 11:
            uVar7 = arg1.g4();
            m_jitterMoveTimeOffsetRandomMS = uVar7;
            break;
        case 12:
            uVar7 = arg1.gFloat();
            m_jitterMovePower = uVar7;
            break;
        case 13:
            uVar7 = arg1.gFloat();
            m_jitterIntensityStrength = uVar7;
            break;
        default:
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "lighttype/LightType.cpp",
                      65, "Unrecognised .light config code: %u", arg2);
            ppuVar5 = &DataStatus::NOTLOADED;
            goto LAB_100515c47;
        }
        ppuVar5 = &DataStatus::READY;
    LAB_100515c47:
        return *ppuVar5;
    }

} // namespace jag::game
