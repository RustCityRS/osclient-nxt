// libs/game/runetek5/config/lighttype/LightType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "LightType.h"

namespace jag::game {
    // 0x100009720: the linker folded this into BaseApp::GetExitCode(), which has identical code
    LightType::GetJitterMoveTimeOffsetRandomMS() const;

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    LightType::PostDecode();

    // 0x100061e30: the linker folded this into render::RenderStats::GetTriangleCount() const, which has identical code
    int LightType::GetOffset() const;

    // 0x1000e31a0: the linker folded this into oldscape::graphics::NXTPixScreen::GetUIWidth() const, which has identical code
    int LightType::GetJitterMoveTimeMS() const;

    // 0x10011cd30: the linker folded this into oldscape::configdecoder::NPCTypeCustomisation::UsePlayerModel() const, which has identical code
    LightType::GetJitterRadiusRandom() const;

    // 0x1001be5d0: the linker folded this into graphics::SunlightOptions::GetShadowQuality() const, which has identical code
    uint LightType::GetWaveType() const;

    // 0x1003f65a0: the linker folded this into EntityRoute::GetStalledTickCount() const, which has identical code
    uint LightType::GetFrequency() const;

    // 0x100429b10: the linker folded this into StaticPointLight::GetRGB() const, which has identical code
    uint LightType::GetAmplitude() const;

    // 0x100515b10, 384 bytes, placed by class name and debug map
    // LightType::DecodeType(PacketT<Array<unsigned char, eastl::allocator> >&, unsigned int)
    undefined* LightType::DecodeType(PacketT* param_1, uint param_2) {
        byte bVar1;
        ushort uVar2;
        short sVar3;
        int iVar4;
        undefined8 uVar5;
        undefined** ppuVar6;
        float fVar7;
        undefined4 uVar8;

        switch (param_2) {
        case 1:
            bVar1 = param_1->g1();
            m_waveType = (uint)bVar1;
            break;
        case 2:
            uVar2 = param_1->g2();
            m_frequency = (uint)uVar2;
            break;
        case 3:
            uVar2 = param_1->g2();
            m_amplitude = (uint)uVar2;
            break;
        case 4:
            sVar3 = param_1->g2s();
            m_offset = (int)sVar3;
            break;
        case 5:
            uVar8 = param_1->gFloat();
            field_72 = uVar8;
            break;
        case 6:
            uVar8 = param_1->gFloat();
            field_76 = uVar8;
            break;
        case 7:
            uVar8 = param_1->gFloat();
            field_80 = uVar8;
            break;
        case 8:
            fVar7 = (float)param_1->gFloat();
            m_jitterRadius = fVar7;
            break;
        case 9:
            m_jitterRadiusRandom = 1;
            break;
        case 10:
            iVar4 = param_1->g4();
            m_jitterMoveTimeMS = iVar4;
            break;
        case 11:
            uVar8 = param_1->g4();
            m_jitterMoveTimeOffsetRandomMS = uVar8;
            break;
        case 12:
            uVar8 = param_1->gFloat();
            m_jitterMovePower = uVar8;
            break;
        case 13:
            uVar8 = param_1->gFloat();
            m_jitterIntensityStrength = uVar8;
            break;
        default:
            uVar5 = logger::default_logger();
            logger::Logger::Log(uVar5, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/lighttype/LightType.cpp",
                                65, "Unrecognised .light config code: %u", param_2);
            ppuVar6 = &DataStatus::NOTLOADED;
            goto LAB_100515c47;
        }
        ppuVar6 = &DataStatus::READY;
    LAB_100515c47:
        return *ppuVar6;
    }

} // namespace jag::game
