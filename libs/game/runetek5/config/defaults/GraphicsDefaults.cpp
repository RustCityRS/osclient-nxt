// libs/game/runetek5/config/defaults/GraphicsDefaults.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "GraphicsDefaults.h"

namespace jag::game {
    // 0x100061e30: the linker folded this into render::RenderStats::GetTriangleCount() const, which has identical code
    uint GraphicsDefaults::GetMaxHeadbarsSimultaneous() const;

    // 0x1000b9960: the linker folded this into oldscape::ScriptVarType::GetID() const, which has identical code
    uint GraphicsDefaults::GetMaxHitmarks() const;

    // 0x100102f20: the linker folded this into oldscape::rs2lib::InputField::GetScrollX() const, which has identical code
    GraphicsDefaults::GetFont11pxRegularID() const;

    // 0x100102f30: the linker folded this into oldscape::rs2lib::InputField::GetScrollY() const, which has identical code
    GraphicsDefaults::GetFont12pxRegularID() const;

    // 0x10010c980: the linker folded this into oldscape::rs2lib::PlayerModel::GetBodytype() const, which has identical code
    GraphicsDefaults::GetSpriteCompassID() const;

    // 0x10016b5e0: the linker folded this into oldscape::worldmap::Worldmap::GetTileWidth() const, which has identical code
    GraphicsDefaults::GetSpriteModIconsID() const;

    // 0x1001be5d0: the linker folded this into graphics::SunlightOptions::GetShadowQuality() const, which has identical code
    uint GraphicsDefaults::GetMaxHeadbarsQueued() const;

    // 0x1001cd990: the linker folded this into graphics::PointLightIndicesEffect::GetVisiblePointLights(), which has identical code
    GraphicsDefaults::GetPlayerRecolSource() const;

    // 0x10036bfe0: the linker folded this into graphics::GeometryBatch::GetJointIDMap(), which has identical code
    GraphicsDefaults::GetPlayerRematDest() const;

    // 0x1003f5190: the linker folded this into BASType::GetHillRotateWidth() const, which has identical code
    GraphicsDefaults::GetObjStackColourMillions() const;

    // 0x1003f51a0: the linker folded this into BASType::GetHillRotateLength() const, which has identical code
    int GraphicsDefaults::GetObjStackColourBillions() const;

    // 0x1003f5b40: the linker folded this into BASType::GetHillRotateXLimit() const, which has identical code
    GraphicsDefaults::GetObjStackColourTrillions() const;

    // 0x1003f5b50: the linker folded this into BASType::GetHillRotateZLimit() const, which has identical code
    int GraphicsDefaults::GetObjStackColourQuadrillions() const;

    // 0x100414cb0: the linker folded this into math::Transitionable<graphics::IrradianceSHCoefConsts>::GetEndValue(), which has identical code
    GraphicsDefaults::GetPlayerRematSource() const;

    // 0x100444920: the linker folded this into LocationContainer::GetMapSquareX() const, which has identical code
    GraphicsDefaults::GetObjStackColourUnits() const;

    // 0x100444930: the linker folded this into LocationContainer::GetMapSquareZ() const, which has identical code
    GraphicsDefaults::GetObjStackColourThousands() const;

    // 0x100551780, 2576 bytes, base-object constructor, placed by class name and debug map
    // GraphicsDefaults::GraphicsDefaults(PacketT<Array<unsigned char, eastl::allocator> >&)
    void GraphicsDefaults::GraphicsDefaults(PacketT* param_1) {
        undefined1* this_00;
        undefined1* this_01;
        undefined1* this_02;
        undefined1* this_03;
        undefined1* this_04;
        bool bVar1;
        char cVar2;
        byte bVar3;
        char cVar4;
        short sVar5;
        undefined2 uVar6;
        ushort uVar7;
        undefined4 uVar8;
        undefined8 uVar9;
        Array<unsigned short, eastl::allocator>* pAVar10;
        Array<Array<unsigned short, eastl::allocator>, eastl::allocator>* pAVar11;
        undefined2* puVar12;
        long lVar13;
        undefined4* puVar14;
        int* piVar15;
        ulong uVar16;
        bool bVar17;
        ulong uVar18;
        undefined1* this_05;
        ulong uVar19;
        int iVar20;

        m_maxHitmarks = 4;
        this_05 = &field_8;
        new (this_05) Array<int, eastl::allocator>();
        this_00 = &field_32;
        new (this_00) Array<int, eastl::allocator>();
        m_maxHeadbarsQueued = 4;
        m_maxHeadbarsSimultaneous = 4;
        field_64 = 7;
        field_68 = 4294967295;
        field_72 = 4294967295;
        field_76 = 4294967295;
        field_80 = 1;
        field_84 = 4294967295;
        field_88 = 0;
        this_01 = &field_96;
        new (this_01) Array<Array<unsigned short, eastl::allocator>, eastl::allocator>();
        this_02 = &field_120;
        new (this_02) Array<Array<Array<unsigned short, eastl::allocator>, eastl::allocator>, eastl::allocator>();
        this_03 = &field_144;
        new (this_03) Array<Array<unsigned short, eastl::allocator>, eastl::allocator>();
        this_04 = &field_168;
        new (this_04) Array<Array<Array<unsigned short, eastl::allocator>, eastl::allocator>, eastl::allocator>();
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
        bVar17 = false;
        do {
            cVar2 = param_1->g1();
            if (cVar2 != '\0') {
                switch (cVar2 + -1) {
                case '\0':
                    cVar4 = this_05->empty();
                    if (cVar4 != '\0') {
                        m_maxHitmarks = 4;
                        this_05->set_max_size(4, 0);
                        this_00->set_max_size(4, 0);
                    }
                    lVar13 = this_05->end();
                    bVar17 = true;
                    if (lVar13 != 0) {
                        uVar16 = 0;
                        uVar19 = 1;
                        do {
                            sVar5 = param_1->g2s();
                            piVar15 = (int*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)this_05, uVar16);
                            *piVar15 = (int)sVar5;
                            sVar5 = param_1->g2s();
                            piVar15 = (int*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)this_00, uVar16);
                            *piVar15 = (int)sVar5;
                            uVar16 = this_05->end();
                            bVar1 = uVar19 < uVar16;
                            uVar16 = uVar19;
                            uVar19 = (ulong)((int)uVar19 + 1);
                        } while (bVar1);
                    }
                    break;
                case '\x01':
                    uVar8 = param_1->gSmart2or4s();
                    field_68 = uVar8;
                    break;
                case '\x02':
                    bVar3 = param_1->g1();
                    m_maxHitmarks = (uint)bVar3;
                    this_05->set_max_size((ulong)bVar3, 0);
                    this_00->set_max_size((ulong)m_maxHitmarks, 0);
                    break;
                case '\x03':
                    field_80 = 0;
                    break;
                case '\x04':
                    uVar8 = param_1->g3();
                    field_72 = uVar8;
                    break;
                case '\x05':
                    uVar8 = param_1->g3();
                    field_76 = uVar8;
                    break;
                case '\x06':
                    this_01->set_max_size(10, 0);
                    this_02->set_max_size(10, 0);
                    uVar16 = 0;
                    do {
                        pAVar10 = (Array<unsigned short, eastl::allocator>*)
                            Array<Array<unsigned short, eastl::allocator>, eastl::allocator>::operator[](
                                (Array<Array<unsigned short, eastl::allocator>, eastl::allocator>*)this_01, uVar16);
                        pAVar10->set_max_size(4, 0);
                        pAVar11 = (Array<Array<unsigned short, eastl::allocator>, eastl::allocator>*)
                            Array<Array<Array<unsigned short, eastl::allocator>, eastl::allocator>, eastl::allocator>::
                            operator[]((Array<Array<Array<unsigned short, eastl::allocator>, eastl::allocator>,
                                              eastl::allocator>*)this_02,
                                       uVar16);
                        pAVar11->set_max_size(4, 0);
                        uVar19 = 0;
                        do {
                            uVar6 = param_1->g2();
                            pAVar10 = (Array<unsigned short, eastl::allocator>*)
                                Array<Array<unsigned short, eastl::allocator>, eastl::allocator>::operator[](
                                    (Array<Array<unsigned short, eastl::allocator>, eastl::allocator>*)this_01, uVar16);
                            puVar12 = (undefined2*)Array<unsigned short, eastl::allocator>::operator[](pAVar10, uVar19);
                            *puVar12 = uVar6;
                            uVar7 = param_1->g2();
                            pAVar11 = (Array<Array<unsigned short, eastl::allocator>, eastl::allocator>*)Array<
                                Array<Array<unsigned short, eastl::allocator>, eastl::allocator>, eastl::allocator>::
                            operator[]((Array<Array<Array<unsigned short, eastl::allocator>, eastl::allocator>,
                                              eastl::allocator>*)this_02,
                                       uVar16);
                            pAVar10 = (Array<unsigned short, eastl::allocator>*)
                                Array<Array<unsigned short, eastl::allocator>, eastl::allocator>::operator[](pAVar11,
                                                                                                             uVar19);
                            pAVar10->set_max_size((ulong)uVar7, 0);
                            if (uVar7 != 0) {
                                uVar18 = 0;
                                do {
                                    uVar6 = param_1->g2();
                                    pAVar11 = (Array<Array<unsigned short, eastl::allocator>, eastl::allocator>*)
                                        Array<Array<Array<unsigned short, eastl::allocator>, eastl::allocator>,
                                              eastl::allocator>::
                                        operator[](
                                            (Array<Array<Array<unsigned short, eastl::allocator>, eastl::allocator>,
                                                   eastl::allocator>*)this_02,
                                            uVar16);
                                    pAVar10 = (Array<unsigned short, eastl::allocator>*)
                                        Array<Array<unsigned short, eastl::allocator>, eastl::allocator>::operator[](
                                            pAVar11, uVar19);
                                    puVar12 = (undefined2*)Array<unsigned short, eastl::allocator>::operator[](pAVar10,
                                                                                                               uVar18);
                                    *puVar12 = uVar6;
                                    uVar18 = uVar18 + 1;
                                } while (uVar7 != uVar18);
                            }
                            uVar19 = uVar19 + 1;
                        } while (uVar19 != 4);
                        uVar16 = uVar16 + 1;
                    } while (uVar16 != 10);
                    break;
                case '\a':
                    field_192 = 0;
                    break;
                case '\b':
                    bVar3 = param_1->g1();
                    m_npcChatTimeout = (uint)bVar3;
                    break;
                case '\t':
                    field_200 = 0;
                    break;
                case '\n':
                    bVar3 = param_1->g1();
                    field_204 = (uint)bVar3;
                    break;
                case '\v':
                    uVar7 = param_1->g2();
                    field_236 = (uint)uVar7;
                    uVar7 = param_1->g2();
                    field_240 = (uint)uVar7;
                    break;
                case '\f':
                    bVar3 = param_1->g1();
                    m_maxHeadbarsSimultaneous = (uint)bVar3;
                    break;
                case '\r':
                    bVar3 = param_1->g1();
                    m_maxHeadbarsQueued = (uint)bVar3;
                    break;
                case '\x0e':
                    bVar3 = param_1->g1();
                    field_64 = (uint)bVar3;
                    break;
                case '\x0f':
                    field_208 = 1;
                    break;
                case '\x10':
                    uVar8 = param_1->g4();
                    m_objStackColourUnits = uVar8;
                    break;
                case '\x11':
                    uVar8 = param_1->g4();
                    m_objStackColourThousands = uVar8;
                    break;
                case '\x12':
                    uVar8 = param_1->g4();
                    m_objStackColourMillions = uVar8;
                    break;
                case '\x13':
                    uVar7 = param_1->g2();
                    field_84 = (uint)uVar7;
                    bVar3 = param_1->g1();
                    field_88 = (uint)bVar3;
                    break;
                case '\x14':
                    bVar3 = param_1->g1();
                    field_244 = (uint)bVar3;
                    break;
                case '\x15':
                    uVar8 = param_1->gSmart2or4s();
                    m_font11pxRegularID = uVar8;
                    uVar8 = param_1->gSmart2or4s();
                    field_252 = uVar8;
                    uVar8 = param_1->gSmart2or4s();
                    m_font12pxBoldID = uVar8;
                    uVar8 = param_1->gSmart2or4s();
                    m_spriteHintHeadIconsID = uVar8;
                    uVar8 = param_1->gSmart2or4s();
                    m_spriteHintMapMarkersID = uVar8;
                    uVar8 = param_1->gSmart2or4s();
                    m_spriteMapFlagID = uVar8;
                    cVar4 = param_1->g1s();
                    field_272 = (int)cVar4;
                    cVar4 = param_1->g1s();
                    field_276 = (int)cVar4;
                    uVar8 = param_1->gSmart2or4s();
                    m_spriteCrossID = uVar8;
                    uVar8 = param_1->gSmart2or4s();
                    m_spriteMapDotsID = uVar8;
                    uVar8 = param_1->gSmart2or4s();
                    m_spriteModIconsID = uVar8;
                    uVar8 = param_1->gSmart2or4s();
                    field_292 = uVar8;
                    uVar8 = param_1->gSmart2or4s();
                    m_spriteCompassID = uVar8;
                    uVar8 = param_1->gSmart2or4s();
                    m_spriteOtherLevelID = uVar8;
                    uVar8 = param_1->gSmart2or4s();
                    m_spriteHintMapEdgeID = uVar8;
                    break;
                case '\x16':
                    this_03->set_max_size(10, 0);
                    this_04->set_max_size(10, 0);
                    uVar16 = 0;
                    do {
                        pAVar10 = (Array<unsigned short, eastl::allocator>*)
                            Array<Array<unsigned short, eastl::allocator>, eastl::allocator>::operator[](
                                (Array<Array<unsigned short, eastl::allocator>, eastl::allocator>*)this_03, uVar16);
                        pAVar10->set_max_size(4, 0);
                        pAVar11 = (Array<Array<unsigned short, eastl::allocator>, eastl::allocator>*)
                            Array<Array<Array<unsigned short, eastl::allocator>, eastl::allocator>, eastl::allocator>::
                            operator[]((Array<Array<Array<unsigned short, eastl::allocator>, eastl::allocator>,
                                              eastl::allocator>*)this_04,
                                       uVar16);
                        pAVar11->set_max_size(4, 0);
                        uVar19 = 0;
                        do {
                            uVar6 = param_1->g2();
                            pAVar10 = (Array<unsigned short, eastl::allocator>*)
                                Array<Array<unsigned short, eastl::allocator>, eastl::allocator>::operator[](
                                    (Array<Array<unsigned short, eastl::allocator>, eastl::allocator>*)this_03, uVar16);
                            puVar12 = (undefined2*)Array<unsigned short, eastl::allocator>::operator[](pAVar10, uVar19);
                            *puVar12 = uVar6;
                            uVar7 = param_1->g2();
                            pAVar11 = (Array<Array<unsigned short, eastl::allocator>, eastl::allocator>*)Array<
                                Array<Array<unsigned short, eastl::allocator>, eastl::allocator>, eastl::allocator>::
                            operator[]((Array<Array<Array<unsigned short, eastl::allocator>, eastl::allocator>,
                                              eastl::allocator>*)this_04,
                                       uVar16);
                            pAVar10 = (Array<unsigned short, eastl::allocator>*)
                                Array<Array<unsigned short, eastl::allocator>, eastl::allocator>::operator[](pAVar11,
                                                                                                             uVar19);
                            pAVar10->set_max_size((ulong)uVar7, 0);
                            if (uVar7 != 0) {
                                uVar18 = 0;
                                do {
                                    uVar6 = param_1->g2();
                                    pAVar11 = (Array<Array<unsigned short, eastl::allocator>, eastl::allocator>*)
                                        Array<Array<Array<unsigned short, eastl::allocator>, eastl::allocator>,
                                              eastl::allocator>::
                                        operator[](
                                            (Array<Array<Array<unsigned short, eastl::allocator>, eastl::allocator>,
                                                   eastl::allocator>*)this_04,
                                            uVar16);
                                    pAVar10 = (Array<unsigned short, eastl::allocator>*)
                                        Array<Array<unsigned short, eastl::allocator>, eastl::allocator>::operator[](
                                            pAVar11, uVar19);
                                    puVar12 = (undefined2*)Array<unsigned short, eastl::allocator>::operator[](pAVar10,
                                                                                                               uVar18);
                                    *puVar12 = uVar6;
                                    uVar18 = uVar18 + 1;
                                } while (uVar7 != uVar18);
                            }
                            uVar19 = uVar19 + 1;
                        } while (uVar19 != 4);
                        uVar16 = uVar16 + 1;
                    } while (uVar16 != 10);
                    break;
                case '\x17':
                    uVar8 = param_1->g4();
                    field_308 = uVar8;
                    break;
                case '\x18':
                    uVar8 = param_1->gSmart2or4s();
                    field_312 = uVar8;
                    uVar8 = param_1->gSmart2or4s();
                    field_316 = uVar8;
                    uVar8 = param_1->gSmart2or4s();
                    field_320 = uVar8;
                    uVar8 = param_1->gSmart2or4s();
                    field_324 = uVar8;
                    uVar8 = param_1->gSmart2or4s();
                    field_328 = uVar8;
                    uVar8 = param_1->gSmart2or4s();
                    field_332 = uVar8;
                    break;
                case '\x19':
                    iVar20 = param_1->g4();
                    m_objStackColourBillions = iVar20;
                    break;
                case '\x1a':
                    uVar8 = param_1->g4();
                    m_objStackColourTrillions = uVar8;
                    break;
                case '\x1b':
                    iVar20 = param_1->g4();
                    m_objStackColourQuadrillions = iVar20;
                    break;
                default:
                    uVar9 = logger::default_logger();
                    logger::Logger::Log(uVar9, 0, 8,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                        "runetek5/config/defaults/GraphicsDefaults.cpp",
                                        203, "GraphicsDefaults: Error unrecognised .defaults config code: %u", cVar2);
                }
            }
        } while (cVar2 != '\0');
        if (!bVar17) {
            cVar2 = this_05->empty();
            if (cVar2 != '\0') {
                m_maxHitmarks = 4;
                this_05->set_max_size(4, 0);
                this_00->set_max_size(4, 0);
            }
            lVar13 = this_05->end();
            if (lVar13 != 0) {
                iVar20 = 0;
                uVar16 = 0;
                uVar19 = 1;
                do {
                    puVar14 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)this_05, uVar16);
                    *puVar14 = 0;
                    piVar15 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00, uVar16);
                    *piVar15 = iVar20;
                    uVar16 = this_05->end();
                    iVar20 = iVar20 + 20;
                    bVar17 = uVar19 < uVar16;
                    uVar16 = uVar19;
                    uVar19 = (ulong)((int)uVar19 + 1);
                } while (bVar17);
            }
        }
    }

    // 0x1005522a0, 16 bytes, complete-object constructor, placed by class name and debug map
    // GraphicsDefaults::GraphicsDefaults(PacketT<Array<unsigned char, eastl::allocator> >&): jumps straight to the base-object constructor

    // 0x100930be0: the linker folded this into graphics::LightProbeRenderer::GetProbeEnvMapRes() const, which has identical code
    GraphicsDefaults::GetFont12pxBoldID() const;

} // namespace jag::game
