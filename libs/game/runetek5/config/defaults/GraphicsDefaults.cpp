// libs/game/runetek5/config/defaults/GraphicsDefaults.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "GraphicsDefaults.h"

namespace jag::game {
    // 0x100061e30: GraphicsDefaults::GetMaxHeadbarsSimultaneous() const has the same machine code as render::RenderStats::GetTriangleCount() const

    // 0x1000b9960: GraphicsDefaults::GetMaxHitmarks() const has the same machine code as oldscape::ScriptVarType::GetID() const

    // 0x100102f20: GraphicsDefaults::GetFont11pxRegularID() const has the same machine code as oldscape::rs2lib::InputField::GetScrollX() const

    // 0x100102f30: GraphicsDefaults::GetFont12pxRegularID() const has the same machine code as oldscape::rs2lib::InputField::GetScrollY() const

    // 0x10010c980: GraphicsDefaults::GetSpriteCompassID() const has the same machine code as oldscape::rs2lib::PlayerModel::GetBodytype() const

    // 0x10016b5e0: GraphicsDefaults::GetSpriteModIconsID() const has the same machine code as oldscape::worldmap::Worldmap::GetTileWidth() const

    // 0x1001be5d0: GraphicsDefaults::GetMaxHeadbarsQueued() const has the same machine code as graphics::SunlightOptions::GetShadowQuality() const

    // 0x1001cd990: GraphicsDefaults::GetPlayerRecolSource() const has the same machine code as graphics::PointLightIndicesEffect::GetVisiblePointLights()

    // 0x10036bfe0: GraphicsDefaults::GetPlayerRematDest() const has the same machine code as graphics::GeometryBatch::GetJointIDMap()

    // 0x1003f5190: GraphicsDefaults::GetObjStackColourMillions() const has the same machine code as BASType::GetHillRotateWidth() const

    // 0x1003f51a0: GraphicsDefaults::GetObjStackColourBillions() const has the same machine code as BASType::GetHillRotateLength() const

    // 0x1003f5b40: GraphicsDefaults::GetObjStackColourTrillions() const has the same machine code as BASType::GetHillRotateXLimit() const

    // 0x1003f5b50: GraphicsDefaults::GetObjStackColourQuadrillions() const has the same machine code as BASType::GetHillRotateZLimit() const

    // 0x100414cb0: GraphicsDefaults::GetPlayerRematSource() const has the same machine code as math::Transitionable<graphics::IrradianceSHCoefConsts>::GetEndValue()

    // 0x100444920: GraphicsDefaults::GetObjStackColourUnits() const has the same machine code as LocationContainer::GetMapSquareX() const

    // 0x100444930: GraphicsDefaults::GetObjStackColourThousands() const has the same machine code as LocationContainer::GetMapSquareZ() const

    // 0x100551780
    GraphicsDefaults::GraphicsDefaults(PacketT<Array<unsigned char>>& arg1) : m_maxHitmarks(4) {
        bool bVar1;
        uint8_t bVar2;
        uint8_t bVar3;
        bool cVar4;
        short sVar5;
        uint16_t uVar6;
        unsigned short uVar7;
        uint32_t uVar8;
        Array<unsigned short>* pAVar9;
        Array<Array<unsigned short>>* pAVar10;
        uint16_t* puVar11;
        long lVar12;
        uint32_t* puVar13;
        int* piVar14;
        unsigned long uVar15;
        unsigned long uVar17;
        unsigned long uVar18;
        int iVar19;

        uint8_t* this_06 = &field_8;
        new (this_06) Array<int>();
        uint8_t* this_00 = &field_32;
        new (this_00) Array<int>();
        m_maxHeadbarsQueued = 4;
        m_maxHeadbarsSimultaneous = 4;
        field_64 = 7;
        field_68 = 4294967295;
        field_72 = 4294967295;
        field_76 = 4294967295;
        field_80 = 1;
        field_84 = 4294967295;
        field_88 = 0;
        uint8_t* this_01 = &field_96;
        new (this_01) Array<Array<unsigned short>>();
        uint8_t* this_02 = &field_120;
        new (this_02) Array<Array<Array<unsigned short>>>();
        uint8_t* this_03 = &field_144;
        new (this_03) Array<Array<unsigned short>>();
        uint8_t* this_04 = &field_168;
        new (this_04) Array<Array<Array<unsigned short>>>();
        field_192 = 1;
        m_npcChatTimeout = 2;
        field_200 = 1;
        field_204 = 3;
        field_208 = 0;
        m_objStackColourUnits = 4294902015;
        m_objStackColourThousands = 4294967295;
        m_objStackColourMillions = 16744703;
        m_objStackColourBillions = 16744703;
        m_objStackColourTrillions = 16744703;
        m_objStackColourQuadrillions = 16744703;
        field_236 = 4294967295;
        field_240 = 4294967295;
        field_244 = 100;
        m_font11pxRegularID = 4294967295;
        field_252 = 4294967295;
        m_font12pxBoldID = 4294967295;
        m_spriteHintHeadIconsID = 4294967295;
        m_spriteHintMapMarkersID = 4294967295;
        m_spriteMapFlagID = 4294967295;
        field_272 = 0;
        field_276 = 0;
        field_312 = 4294967295;
        field_316 = 4294967295;
        field_320 = 4294967295;
        field_324 = 4294967295;
        m_spriteCompassID = 4294967295;
        m_spriteOtherLevelID = 4294967295;
        m_spriteHintMapEdgeID = 4294967295;
        field_308 = 4294967295;
        m_spriteCrossID = 4294967295;
        m_spriteMapDotsID = 4294967295;
        m_spriteModIconsID = 4294967295;
        field_292 = 4294967295;
        field_328 = 4294967295;
        field_332 = 4294967295;
        bool bVar16 = false;
        do {
            bVar2 = arg1.g1();
            if (bVar2 != 0) {
                switch (bVar2 - 1) {
                case 0:
                    cVar4 = this_06->empty();
                    if (cVar4) {
                        m_maxHitmarks = 4;
                        this_06->set_max_size(4, 0);
                        this_00->set_max_size(4, 0);
                    }
                    lVar12 = this_06->end();
                    bVar16 = true;
                    if (lVar12 != 0) {
                        uVar15 = 0;
                        uVar18 = 1;
                        do {
                            sVar5 = arg1.g2s();
                            piVar14 = (int*)(*this_06)[uVar15];
                            *piVar14 = (int)sVar5;
                            sVar5 = arg1.g2s();
                            piVar14 = (int*)(*this_00)[uVar15];
                            *piVar14 = (int)sVar5;
                            uVar15 = this_06->end();
                            bVar1 = uVar18 < uVar15;
                            uVar15 = uVar18;
                            uVar18 = (unsigned long)((int)uVar18 + 1);
                        } while (bVar1);
                    }
                    break;
                case 1:
                    uVar8 = arg1.gSmart2or4s();
                    field_68 = uVar8;
                    break;
                case 2:
                    bVar3 = arg1.g1();
                    m_maxHitmarks = (unsigned int)bVar3;
                    this_06->set_max_size((unsigned long)bVar3, 0);
                    this_00->set_max_size((unsigned long)m_maxHitmarks, 0);
                    break;
                case 3:
                    field_80 = 0;
                    break;
                case 4:
                    uVar8 = arg1.g3();
                    field_72 = uVar8;
                    break;
                case 5:
                    uVar8 = arg1.g3();
                    field_76 = uVar8;
                    break;
                case 6:
                    this_01->set_max_size(10, 0);
                    this_02->set_max_size(10, 0);
                    uVar15 = 0;
                    do {
                        pAVar9 = (Array<unsigned short>*)(*this_01)[uVar15];
                        pAVar9->set_max_size(4, 0);
                        pAVar10 = (Array<Array<unsigned short>>*)(*this_02)[uVar15];
                        pAVar10->set_max_size(4, 0);
                        uVar18 = 0;
                        do {
                            uVar6 = arg1.g2();
                            pAVar9 = (Array<unsigned short>*)(*this_01)[uVar15];
                            puVar11 = (uint16_t*)(*pAVar9)[uVar18];
                            *puVar11 = uVar6;
                            uVar7 = arg1.g2();
                            pAVar10 = (Array<Array<unsigned short>>*)(*this_02)[uVar15];
                            pAVar9 = (Array<unsigned short>*)(*pAVar10)[uVar18];
                            pAVar9->set_max_size((unsigned long)uVar7, 0);
                            if (uVar7 != 0) {
                                uVar17 = 0;
                                do {
                                    uVar6 = arg1.g2();
                                    pAVar10 = (Array<Array<unsigned short>>*)(*this_02)[uVar15];
                                    pAVar9 = (Array<unsigned short>*)(*pAVar10)[uVar18];
                                    puVar11 = (uint16_t*)(*pAVar9)[uVar17];
                                    *puVar11 = uVar6;
                                    uVar17 = uVar17 + 1;
                                } while (uVar7 != uVar17);
                            }
                            uVar18 = uVar18 + 1;
                        } while (uVar18 != 4);
                        uVar15 = uVar15 + 1;
                    } while (uVar15 != 10);
                    break;
                case 7:
                    field_192 = 0;
                    break;
                case 8:
                    bVar3 = arg1.g1();
                    m_npcChatTimeout = (unsigned int)bVar3;
                    break;
                case 9:
                    field_200 = 0;
                    break;
                case 10:
                    bVar3 = arg1.g1();
                    field_204 = (unsigned int)bVar3;
                    break;
                case 11:
                    uVar7 = arg1.g2();
                    field_236 = (unsigned int)uVar7;
                    uVar7 = arg1.g2();
                    field_240 = (unsigned int)uVar7;
                    break;
                case 12:
                    bVar3 = arg1.g1();
                    m_maxHeadbarsSimultaneous = (unsigned int)bVar3;
                    break;
                case 13:
                    bVar3 = arg1.g1();
                    m_maxHeadbarsQueued = (unsigned int)bVar3;
                    break;
                case 14:
                    bVar3 = arg1.g1();
                    field_64 = (unsigned int)bVar3;
                    break;
                case 15:
                    field_208 = 1;
                    break;
                case 16:
                    uVar8 = arg1.g4();
                    m_objStackColourUnits = uVar8;
                    break;
                case 17:
                    uVar8 = arg1.g4();
                    m_objStackColourThousands = uVar8;
                    break;
                case 18:
                    uVar8 = arg1.g4();
                    m_objStackColourMillions = uVar8;
                    break;
                case 19:
                    uVar7 = arg1.g2();
                    field_84 = (unsigned int)uVar7;
                    bVar3 = arg1.g1();
                    field_88 = (unsigned int)bVar3;
                    break;
                case 20:
                    bVar3 = arg1.g1();
                    field_244 = (unsigned int)bVar3;
                    break;
                case 21:
                    uVar8 = arg1.gSmart2or4s();
                    m_font11pxRegularID = uVar8;
                    uVar8 = arg1.gSmart2or4s();
                    field_252 = uVar8;
                    uVar8 = arg1.gSmart2or4s();
                    m_font12pxBoldID = uVar8;
                    uVar8 = arg1.gSmart2or4s();
                    m_spriteHintHeadIconsID = uVar8;
                    uVar8 = arg1.gSmart2or4s();
                    m_spriteHintMapMarkersID = uVar8;
                    uVar8 = arg1.gSmart2or4s();
                    m_spriteMapFlagID = uVar8;
                    cVar4 = arg1.g1s();
                    field_272 = (int)cVar4;
                    cVar4 = arg1.g1s();
                    field_276 = (int)cVar4;
                    uVar8 = arg1.gSmart2or4s();
                    m_spriteCrossID = uVar8;
                    uVar8 = arg1.gSmart2or4s();
                    m_spriteMapDotsID = uVar8;
                    uVar8 = arg1.gSmart2or4s();
                    m_spriteModIconsID = uVar8;
                    uVar8 = arg1.gSmart2or4s();
                    field_292 = uVar8;
                    uVar8 = arg1.gSmart2or4s();
                    m_spriteCompassID = uVar8;
                    uVar8 = arg1.gSmart2or4s();
                    m_spriteOtherLevelID = uVar8;
                    uVar8 = arg1.gSmart2or4s();
                    m_spriteHintMapEdgeID = uVar8;
                    break;
                case 22:
                    this_03->set_max_size(10, 0);
                    this_04->set_max_size(10, 0);
                    uVar15 = 0;
                    do {
                        pAVar9 = (Array<unsigned short>*)(*this_03)[uVar15];
                        pAVar9->set_max_size(4, 0);
                        pAVar10 = (Array<Array<unsigned short>>*)(*this_04)[uVar15];
                        pAVar10->set_max_size(4, 0);
                        uVar18 = 0;
                        do {
                            uVar6 = arg1.g2();
                            pAVar9 = (Array<unsigned short>*)(*this_03)[uVar15];
                            puVar11 = (uint16_t*)(*pAVar9)[uVar18];
                            *puVar11 = uVar6;
                            uVar7 = arg1.g2();
                            pAVar10 = (Array<Array<unsigned short>>*)(*this_04)[uVar15];
                            pAVar9 = (Array<unsigned short>*)(*pAVar10)[uVar18];
                            pAVar9->set_max_size((unsigned long)uVar7, 0);
                            if (uVar7 != 0) {
                                uVar17 = 0;
                                do {
                                    uVar6 = arg1.g2();
                                    pAVar10 = (Array<Array<unsigned short>>*)(*this_04)[uVar15];
                                    pAVar9 = (Array<unsigned short>*)(*pAVar10)[uVar18];
                                    puVar11 = (uint16_t*)(*pAVar9)[uVar17];
                                    *puVar11 = uVar6;
                                    uVar17 = uVar17 + 1;
                                } while (uVar7 != uVar17);
                            }
                            uVar18 = uVar18 + 1;
                        } while (uVar18 != 4);
                        uVar15 = uVar15 + 1;
                    } while (uVar15 != 10);
                    break;
                case 23:
                    uVar8 = arg1.g4();
                    field_308 = uVar8;
                    break;
                case 24:
                    uVar8 = arg1.gSmart2or4s();
                    field_312 = uVar8;
                    uVar8 = arg1.gSmart2or4s();
                    field_316 = uVar8;
                    uVar8 = arg1.gSmart2or4s();
                    field_320 = uVar8;
                    uVar8 = arg1.gSmart2or4s();
                    field_324 = uVar8;
                    uVar8 = arg1.gSmart2or4s();
                    field_328 = uVar8;
                    uVar8 = arg1.gSmart2or4s();
                    field_332 = uVar8;
                    break;
                case 25:
                    iVar19 = arg1.g4();
                    m_objStackColourBillions = iVar19;
                    break;
                case 26:
                    uVar8 = arg1.g4();
                    m_objStackColourTrillions = uVar8;
                    break;
                case 27:
                    iVar19 = arg1.g4();
                    m_objStackColourQuadrillions = iVar19;
                    break;
                default:
                    (logger::default_logger())
                        ->Log(false, 8,
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "config/defaults/GraphicsDefaults.cpp",
                              203, "GraphicsDefaults: Error unrecognised .defaults config code: %u",
                              (unsigned int)bVar2);
                }
            }
        } while (bVar2 != 0);
        if (!bVar16) {
            cVar4 = this_06->empty();
            if (cVar4) {
                m_maxHitmarks = 4;
                this_06->set_max_size(4, 0);
                this_00->set_max_size(4, 0);
            }
            lVar12 = this_06->end();
            if (lVar12 != 0) {
                iVar19 = 0;
                uVar15 = 0;
                uVar18 = 1;
                do {
                    puVar13 = (uint32_t*)(*this_06)[uVar15];
                    *puVar13 = 0;
                    piVar14 = (int*)(*this_00)[uVar15];
                    *piVar14 = iVar19;
                    uVar15 = this_06->end();
                    iVar19 = iVar19 + 20;
                    bVar16 = uVar18 < uVar15;
                    uVar15 = uVar18;
                    uVar18 = (unsigned long)((int)uVar18 + 1);
                } while (bVar16);
            }
        }
    }

    // 0x100930be0: GraphicsDefaults::GetFont12pxBoldID() const has the same machine code as graphics::LightProbeRenderer::GetProbeEnvMapRes() const

} // namespace jag::game
