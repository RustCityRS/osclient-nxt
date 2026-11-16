// libs/game/runetek5/config/bastype/BASType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "BASType.h"

namespace jag::game {
    // 0x100559890, 1312 bytes, placed by class name and debug map
    // BASType::DecodeType(PacketT<Array<unsigned char, eastl::allocator> >&, unsigned int)
    undefined* BASType::DecodeType(PacketT* param_1, uint param_2) {
        byte bVar1;
        byte bVar2;
        ushort uVar3;
        undefined4 uVar4;
        undefined8 uVar5;
        long lVar6;
        undefined4* puVar7;
        uint* puVar8;
        Array<int, eastl::allocator>* this_00;
        ulong uVar9;
        ulong uVar10;
        ulong uVar11;

        switch (param_2) {
        case 1:
            uVar4 = param_1->gSmart2or4s();
            field_56 = uVar4;
            uVar4 = param_1->gSmart2or4s();
            m_walkForward = uVar4;
            break;
        case 2:
            uVar4 = param_1->gSmart2or4s();
            m_crawlForward = uVar4;
            break;
        case 3:
            uVar4 = param_1->gSmart2or4s();
            m_crawlBackward = uVar4;
            break;
        case 4:
            uVar4 = param_1->gSmart2or4s();
            m_crawlLeft = uVar4;
            break;
        case 5:
            uVar4 = param_1->gSmart2or4s();
            m_crawlRight = uVar4;
            break;
        case 6:
            uVar4 = param_1->gSmart2or4s();
            m_runForward = uVar4;
            break;
        case 7:
            uVar4 = param_1->gSmart2or4s();
            m_runBackward = uVar4;
            break;
        case 8:
            uVar4 = param_1->gSmart2or4s();
            m_runLeft = uVar4;
            break;
        case 9:
            uVar4 = param_1->gSmart2or4s();
            m_runRight = uVar4;
            break;
        default:
            uVar5 = logger::default_logger();
            logger::Logger::Log(uVar5, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/bastype/BASType.cpp",
                                200, "Unrecognised .bas config code: %u", param_2);
            break;
        case 26:
            bVar2 = param_1->g1();
            *(uint*)&field_220 = (uint)bVar2 << 2;
            bVar2 = param_1->g1();
            field_224 = (uint)bVar2 << 2;
            break;
        case 27:
            bVar2 = param_1->g1();
            lVar6 = param_1->size();
            uVar10 = lVar6 + (ulong)bVar2 * 2;
            goto LAB_100559a35;
        case 28:
            bVar2 = param_1->g1();
            lVar6 = param_1->size();
            uVar10 = (ulong)bVar2 + lVar6;
        LAB_100559a35:
            param_1->SetPos(uVar10);
            break;
        case 29:
        case 31:
        case 34:
        case 37:
            uVar10 = 1;
            goto LAB_1005598d1;
        case 30:
        case 32:
        case 33:
        case 35:
        case 36:
            uVar10 = 2;
            goto LAB_1005598d1;
        case 38:
            uVar4 = param_1->gSmart2or4s();
            m_readyTurnLeft = uVar4;
            break;
        case 39:
            uVar4 = param_1->gSmart2or4s();
            m_readyTurnRight = uVar4;
            break;
        case 40:
            uVar4 = param_1->gSmart2or4s();
            m_walkBackward = uVar4;
            break;
        case 41:
            uVar4 = param_1->gSmart2or4s();
            m_walkLeft = uVar4;
            break;
        case 42:
            uVar4 = param_1->gSmart2or4s();
            m_walkRight = uVar4;
            break;
        case 43:
            uVar4 = param_1->gSmart2or4s();
            field_236 = uVar4;
            break;
        case 44:
            uVar4 = param_1->gSmart2or4s();
            field_240 = uVar4;
            break;
        case 45:
            uVar3 = param_1->g2();
            m_overlayHeight = (uint)uVar3;
            break;
        case 46:
            uVar4 = param_1->gSmart2or4s();
            m_crawlTurnLeft = uVar4;
            break;
        case 47:
            uVar4 = param_1->gSmart2or4s();
            m_crawlTurnRight = uVar4;
            break;
        case 48:
            uVar4 = param_1->gSmart2or4s();
            m_runTurnLeft = uVar4;
            break;
        case 49:
            uVar4 = param_1->gSmart2or4s();
            m_runTurnRight = uVar4;
            break;
        case 50:
            uVar4 = param_1->gSmart2or4s();
            m_walkTurnLeft = uVar4;
            break;
        case 51:
            uVar4 = param_1->gSmart2or4s();
            m_walkTurnRight = uVar4;
            break;
        case 52:
            bVar2 = param_1->g1();
            uVar10 = (ulong)bVar2;
            (&field_64, uVar10, 0)->set_max_size();
            (&field_88, uVar10, 0)->set_max_size();
            (&field_112, uVar10, 0)->set_max_size();
            if (bVar2 != 0) {
                uVar9 = 0;
                do {
                    uVar4 = param_1->gSmart2or4s();
                    puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)&field_64, uVar9);
                    *puVar7 = uVar4;
                    bVar2 = param_1->g1();
                    puVar8 = (uint*)Array<unsigned int, eastl::allocator>::operator[](
                        (Array<unsigned int, eastl::allocator>*)&field_88, uVar9);
                    *puVar8 = (uint)bVar2;
                    field_136 = field_136 + (uint)bVar2;
                    this_00 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_112, uVar9);
                    bVar2 = param_1->g1();
                    this_00->set_max_size((ulong)bVar2, 0);
                    if (bVar2 != 0) {
                        uVar11 = 0;
                        do {
                            bVar1 = param_1->g1();
                            puVar8 = (uint*)Array<int, eastl::allocator>::operator[](this_00, uVar11);
                            *puVar8 = (uint)bVar1;
                            uVar11 = uVar11 + 1;
                        } while (bVar2 != uVar11);
                    }
                    uVar9 = uVar9 + 1;
                } while (uVar9 != uVar10);
            }
            break;
        case 53:
            field_248 = 0;
            break;
        case 54:
            bVar2 = param_1->g1();
            *(uint*)&field_228 = (uint)bVar2 << 2;
            bVar2 = param_1->g1();
            field_232 = (uint)bVar2 << 2;
            break;
        case 55:
            uVar10 = 3;
            goto LAB_1005598d1;
        case 56:
            uVar10 = 7;
        LAB_1005598d1:
            param_1->Skip(uVar10);
        }
        return DataStatus::READY;
    }

    // 0x100559db0, 16 bytes, placed by class name and debug map
    // BASType::PostDecode()
    void BASType::PostDecode() {}

    // 0x100559dc0, 112 bytes, placed by class name and debug map
    // BASType::IsReadyRandom(int) const
    byte BASType::IsReadyRandom(int param_1) {
        int iVar1;
        int* piVar2;
        int* piVar3;
        bool bVar4;

        piVar3 = (int*)(&field_64)->data();
        piVar2 = (int*)(&field_64)->end();
        bVar4 = piVar3 == piVar2;
        if (!bVar4) {
            iVar1 = *piVar3;
            while (iVar1 != param_1) {
                piVar3 = piVar3 + 1;
                bVar4 = piVar3 == piVar2;
                if (bVar4)
                    break;
                iVar1 = *piVar3;
            }
        }
        return bVar4 ^ 1;
    }

    // 0x100559e30, 208 bytes, placed by class name and debug map
    // BASType::GetReadyAnim(int)
    ulong BASType::GetReadyAnim(int param_1) {
        undefined1* this_00;
        char cVar1;
        ulong uVar2;
        long lVar3;
        int* piVar4;
        ulong uVar5;
        Array<VarValue, eastl::allocator>* this_01;
        int iVar6;

        uVar2 = (ulong)(uint)field_56;
        if (field_56 == 4294967295) {
            this_00 = &field_64;
            cVar1 = this_00->empty();
            uVar2 = 4294967295;
            if (cVar1 == '\0') {
                if ((param_1 != -1) && (lVar3 = this_00->end(), lVar3 != 0)) {
                    uVar2 = 0;
                    do {
                        piVar4 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00,
                                                                                uVar2);
                        if (*piVar4 == param_1) {
                            iVar6 = (int)uVar2;
                            if (iVar6 != -1) {
                                this_01 = (Array<VarValue, eastl::allocator>*)
                                    Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                        (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_112,
                                        (long)iVar6);
                                cVar1 = this_01->empty();
                                if (cVar1 == '\0') {
                                    uVar2 = GetRandomReadyAnimFromPrev(this, iVar6);
                                    return uVar2;
                                }
                            }
                            break;
                        }
                        uVar2 = uVar2 + 1;
                        uVar5 = this_00->end();
                    } while (uVar2 < uVar5);
                }
                uVar2 = GetRandomReadyAnim(this);
            }
        }
        return uVar2;
    }

    // 0x100559f00, 368 bytes, placed by class name and debug map
    // BASType::GetRandomReadyAnimFromPrev(int)
    undefined4 BASType::GetRandomReadyAnimFromPrev(int param_1) {
        uint uVar1;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        long lVar2;
        int* piVar3;
        undefined4* puVar4;
        ulong uVar5;
        uint* puVar6;
        ulong uVar7;
        int iVar8;
        bool bVar9;
        bool bVar10;
        undefined4 local_38;

        this_00 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
            Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_112, (long)param_1);
        lVar2 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
        if (lVar2 == 1) {
            piVar3 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00, 0);
            puVar4 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_64,
                                                                           (long)*piVar3);
            local_38 = *puVar4;
        } else {
            lVar2 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
            if (lVar2 == 0) {
                iVar8 = 0;
            } else {
                uVar7 = 0;
                iVar8 = 0;
                do {
                    piVar3 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00, uVar7);
                    piVar3 = (int*)Array<unsigned int, eastl::allocator>::operator[](
                        (Array<unsigned int, eastl::allocator>*)&field_88, (long)*piVar3);
                    iVar8 = iVar8 + *piVar3;
                    uVar7 = uVar7 + 1;
                    uVar5 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
                } while (uVar7 < uVar5);
            }
            uVar1 = math::Rand(iVar8);
            lVar2 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
            bVar10 = lVar2 != 0;
            if (bVar10) {
                uVar7 = 0;
                do {
                    piVar3 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00, uVar7);
                    puVar6 = (uint*)Array<unsigned int, eastl::allocator>::operator[](
                        (Array<unsigned int, eastl::allocator>*)&field_88, (long)*piVar3);
                    bVar9 = uVar1 < *puVar6;
                    uVar1 = uVar1 - *puVar6;
                    if (bVar9) {
                        piVar3 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00,
                                                                                uVar7);
                        puVar4 = (undefined4*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)&field_64, (long)*piVar3);
                        local_38 = *puVar4;
                        break;
                    }
                    uVar7 = uVar7 + 1;
                    uVar5 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
                    bVar10 = uVar7 < uVar5;
                } while (bVar10);
            }
            if (!bVar10) {
                /* WARNING: Subroutine does not return */
                LogAssert("false",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "bastype/BASType.cpp",
                          296, (char*)0);
            }
        }
        return local_38;
    }

    // 0x10055a070, 144 bytes, placed by class name and debug map
    // BASType::GetRandomReadyAnim()
    undefined4 BASType::GetRandomReadyAnim() {
        undefined1* this_00;
        uint uVar1;
        uint* puVar2;
        int* piVar3;
        undefined4* puVar4;
        uint uVar5;
        ulong uVar6;

        uVar1 = math::Rand(field_136);
        this_00 = &field_88;
        uVar6 = 0;
        puVar2 = (uint*)Array<unsigned int, eastl::allocator>::operator[](
            (Array<unsigned int, eastl::allocator>*)this_00, 0);
        if (*puVar2 <= uVar1) {
            uVar5 = 1;
            uVar6 = 0;
            do {
                piVar3 = (int*)Array<unsigned int, eastl::allocator>::operator[](
                    (Array<unsigned int, eastl::allocator>*)this_00, uVar6);
                uVar1 = uVar1 - *piVar3;
                uVar6 = (ulong)uVar5;
                puVar2 = (uint*)Array<unsigned int, eastl::allocator>::operator[](
                    (Array<unsigned int, eastl::allocator>*)this_00, uVar6);
                uVar5 = uVar5 + 1;
            } while (*puVar2 <= uVar1);
        }
        puVar4 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_64, uVar6);
        return *puVar4;
    }

} // namespace jag::game
