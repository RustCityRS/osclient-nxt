// libs/game/runetek5/config/bastype/BASType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "BASType.h"

namespace jag::game {
    // 0x100559890
    uint8_t* BASType::DecodeType(PacketT<Array<unsigned char>>& arg1, unsigned int arg2) {
        uint8_t bVar1;
        uint8_t bVar2;
        unsigned short uVar3;
        uint32_t uVar4;
        long lVar5;
        uint32_t* puVar6;
        unsigned int* puVar7;
        Array<int>* this_01;
        unsigned long arg1_00;
        unsigned long uVar8;
        unsigned long arg1_01;

        switch (arg2) {
        case 1:
            uVar4 = arg1.gSmart2or4s();
            field_56 = uVar4;
            uVar4 = arg1.gSmart2or4s();
            m_walkForward = uVar4;
            break;
        case 2:
            uVar4 = arg1.gSmart2or4s();
            m_crawlForward = uVar4;
            break;
        case 3:
            uVar4 = arg1.gSmart2or4s();
            m_crawlBackward = uVar4;
            break;
        case 4:
            uVar4 = arg1.gSmart2or4s();
            m_crawlLeft = uVar4;
            break;
        case 5:
            uVar4 = arg1.gSmart2or4s();
            m_crawlRight = uVar4;
            break;
        case 6:
            uVar4 = arg1.gSmart2or4s();
            m_runForward = uVar4;
            break;
        case 7:
            uVar4 = arg1.gSmart2or4s();
            m_runBackward = uVar4;
            break;
        case 8:
            uVar4 = arg1.gSmart2or4s();
            m_runLeft = uVar4;
            break;
        case 9:
            uVar4 = arg1.gSmart2or4s();
            m_runRight = uVar4;
            break;
        default:
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "bastype/BASType.cpp",
                      200, "Unrecognised .bas config code: %u", arg2);
            break;
        case 26:
            bVar2 = arg1.g1();
            *(unsigned int*)&field_220 = (unsigned int)bVar2 << 2;
            bVar2 = arg1.g1();
            m_hillRotateLength = (unsigned int)bVar2 << 2;
            break;
        case 27:
            bVar2 = arg1.g1();
            lVar5 = arg1.size();
            uVar8 = lVar5 + (unsigned long)bVar2 * 2;
            goto LAB_100559a35;
        case 28:
            bVar2 = arg1.g1();
            lVar5 = arg1.size();
            uVar8 = (unsigned long)bVar2 + lVar5;
        LAB_100559a35:
            arg1.SetPos(uVar8);
            break;
        case 29:
        case 31:
        case 34:
        case 37:
            uVar8 = 1;
            goto LAB_1005598d1;
        case 30:
        case 32:
        case 33:
        case 35:
        case 36:
            uVar8 = 2;
            goto LAB_1005598d1;
        case 38:
            uVar4 = arg1.gSmart2or4s();
            m_readyTurnLeft = uVar4;
            break;
        case 39:
            uVar4 = arg1.gSmart2or4s();
            m_readyTurnRight = uVar4;
            break;
        case 40:
            uVar4 = arg1.gSmart2or4s();
            m_walkBackward = uVar4;
            break;
        case 41:
            uVar4 = arg1.gSmart2or4s();
            m_walkLeft = uVar4;
            break;
        case 42:
            uVar4 = arg1.gSmart2or4s();
            m_walkRight = uVar4;
            break;
        case 43:
            uVar4 = arg1.gSmart2or4s();
            field_236 = uVar4;
            break;
        case 44:
            uVar4 = arg1.gSmart2or4s();
            field_240 = uVar4;
            break;
        case 45:
            uVar3 = arg1.g2();
            m_overlayHeight = (unsigned int)uVar3;
            break;
        case 46:
            uVar4 = arg1.gSmart2or4s();
            m_crawlTurnLeft = uVar4;
            break;
        case 47:
            uVar4 = arg1.gSmart2or4s();
            m_crawlTurnRight = uVar4;
            break;
        case 48:
            uVar4 = arg1.gSmart2or4s();
            m_runTurnLeft = uVar4;
            break;
        case 49:
            uVar4 = arg1.gSmart2or4s();
            m_runTurnRight = uVar4;
            break;
        case 50:
            uVar4 = arg1.gSmart2or4s();
            m_walkTurnLeft = uVar4;
            break;
        case 51:
            uVar4 = arg1.gSmart2or4s();
            m_walkTurnRight = uVar4;
            break;
        case 52:
            bVar2 = arg1.g1();
            uVar8 = (unsigned long)bVar2;
            field_64.set_max_size(uVar8, 0);
            field_88.set_max_size(uVar8, 0);
            field_112.set_max_size(uVar8, 0);
            if (bVar2 != 0) {
                arg1_00 = 0;
                do {
                    uVar4 = arg1.gSmart2or4s();
                    puVar6 = &field_64[arg1_00];
                    *puVar6 = uVar4;
                    bVar2 = arg1.g1();
                    puVar7 = &field_88[arg1_00];
                    *puVar7 = (unsigned int)bVar2;
                    field_136 = field_136 + (unsigned int)bVar2;
                    this_01 = &field_112[arg1_00];
                    bVar2 = arg1.g1();
                    this_01->set_max_size((unsigned long)bVar2, 0);
                    if (bVar2 != 0) {
                        arg1_01 = 0;
                        do {
                            bVar1 = arg1.g1();
                            puVar7 = (unsigned int*)(*this_01)[arg1_01];
                            *puVar7 = (unsigned int)bVar1;
                            arg1_01 = arg1_01 + 1;
                        } while (bVar2 != arg1_01);
                    }
                    arg1_00 = arg1_00 + 1;
                } while (arg1_00 != uVar8);
            }
            break;
        case 53:
            field_248 = 0;
            break;
        case 54:
            bVar2 = arg1.g1();
            *(unsigned int*)&field_228 = (unsigned int)bVar2 << 2;
            bVar2 = arg1.g1();
            m_hillRotateZLimit = (unsigned int)bVar2 << 2;
            break;
        case 55:
            uVar8 = 3;
            goto LAB_1005598d1;
        case 56:
            uVar8 = 7;
        LAB_1005598d1:
            arg1.Skip(uVar8);
        }
        return DataStatus::READY;
    }

    // 0x100559db0
    void BASType::PostDecode() {}

    // 0x100559dc0
    bool BASType::IsReadyRandom(int arg1) const {
        int iVar1;

        auto piVar3 = field_64.data();
        int* piVar2 = (int*)field_64.end();
        bool bVar4 = piVar3 == piVar2;
        if (!bVar4) {
            iVar1 = *piVar3;
            while (iVar1 != arg1) {
                piVar3 = piVar3 + 1;
                bVar4 = piVar3 == piVar2;
                if (bVar4)
                    break;
                iVar1 = *piVar3;
            }
        }
        return bVar4 ^ 1;
    }

    // 0x100559e30
    unsigned long BASType::GetReadyAnim(int arg1) {
        uint8_t* this_00;
        bool cVar1;
        long lVar3;
        int* piVar4;
        unsigned long uVar5;
        int arg1_00;

        unsigned long uVar2 = (unsigned long)(unsigned int)field_56;
        if (field_56 == 4294967295) {
            this_00 = &field_64;
            cVar1 = this_00->empty();
            uVar2 = 4294967295;
            if (!cVar1) {
                if ((arg1 != -1) && (lVar3 = this_00->end(), lVar3 != 0)) {
                    uVar2 = 0;
                    do {
                        piVar4 = (int*)(*this_00)[uVar2];
                        if (*piVar4 == arg1) {
                            arg1_00 = (int)uVar2;
                            if (arg1_00 != -1) {
                                cVar1 = ((Array<VarValue>*)field_112[(long)arg1_00])->empty();
                                if (!cVar1) {
                                    uVar2 = GetRandomReadyAnimFromPrev(arg1_00);
                                    return uVar2;
                                }
                            }
                            break;
                        }
                        uVar2 = uVar2 + 1;
                        uVar5 = this_00->end();
                    } while (uVar2 < uVar5);
                }
                uVar2 = GetRandomReadyAnim();
            }
        }
        return uVar2;
    }

    // 0x100559f00
    uint32_t BASType::GetRandomReadyAnimFromPrev(int arg1) {
        unsigned int uVar1;
        int* piVar3;
        uint32_t* puVar4;
        unsigned long uVar5;
        unsigned int* puVar6;
        unsigned long uVar7;
        int arg1_00;
        bool bVar8;
        bool bVar9;
        uint32_t local_38;

        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00 = &field_112[(long)arg1];
        long lVar2 = this_00->end();
        if (lVar2 == 1) {
            piVar3 = (int*)(*this_00)[0];
            puVar4 = &field_64[(long)*piVar3];
            local_38 = *puVar4;
        } else {
            lVar2 = this_00->end();
            if (lVar2 == 0) {
                arg1_00 = 0;
            } else {
                uVar7 = 0;
                arg1_00 = 0;
                do {
                    piVar3 = (int*)(*this_00)[uVar7];
                    piVar3 = &field_88[(long)*piVar3];
                    arg1_00 = arg1_00 + *piVar3;
                    uVar7 = uVar7 + 1;
                    uVar5 = this_00->end();
                } while (uVar7 < uVar5);
            }
            uVar1 = math::Rand(arg1_00);
            lVar2 = this_00->end();
            bVar9 = lVar2 != 0;
            if (bVar9) {
                uVar7 = 0;
                do {
                    piVar3 = (int*)(*this_00)[uVar7];
                    puVar6 = &field_88[(long)*piVar3];
                    bVar8 = uVar1 < *puVar6;
                    uVar1 = uVar1 - *puVar6;
                    if (bVar8) {
                        piVar3 = (int*)(*this_00)[uVar7];
                        puVar4 = &field_64[(long)*piVar3];
                        local_38 = *puVar4;
                        break;
                    }
                    uVar7 = uVar7 + 1;
                    uVar5 = this_00->end();
                    bVar9 = uVar7 < uVar5;
                } while (bVar9);
            }
            if (!bVar9) {
                LogAssert("false",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "bastype/BASType.cpp",
                          296, nullptr);
            }
        }
        return local_38;
    }

    // 0x10055a070
    uint32_t BASType::GetRandomReadyAnim() {
        int* piVar3;
        unsigned int uVar5;

        unsigned int uVar1 = math::Rand(field_136);
        uint8_t* this_00 = &field_88;
        unsigned long arg1 = 0;
        unsigned int* puVar2 = (unsigned int*)(*this_00)[0];
        if (*puVar2 <= uVar1) {
            uVar5 = 1;
            arg1 = 0;
            do {
                piVar3 = (int*)(*this_00)[arg1];
                uVar1 = uVar1 - *piVar3;
                arg1 = (unsigned long)uVar5;
                puVar2 = (unsigned int*)(*this_00)[arg1];
                uVar5 = uVar5 + 1;
            } while (*puVar2 <= uVar1);
        }
        uint32_t* puVar4 = &field_64[arg1];
        return *puVar4;
    }

} // namespace jag::game
