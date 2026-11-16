// libs/game/runetek5/config/achievementtype/AchievementType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "AchievementType.h"

namespace jag::game {
    // 0x1003cf290: the linker folded this into MapElementType::GetTextBackgroundOutlineRGBA() const, which has identical code
    AchievementType::GetRuneScore() const;

    // 0x1005531d0, 5360 bytes, placed by class name and debug map
    // AchievementType::DecodeType(PacketT<Array<unsigned char, eastl::allocator> >&, unsigned int)
    undefined* AchievementType::DecodeType(PacketT* param_1, uint param_2) {
        AchievementType* pAVar1;
        undefined1 uVar2;
        byte bVar3;
        ushort uVar4;
        ushort uVar5;
        undefined4 uVar6;
        int iVar7;
        uint uVar8;
        uint uVar9;
        uint uVar10;
        undefined8 uVar11;
        vector<AchievementRequirementSpec, eastl::allocator>* pvVar12;
        AchievementRequirementSpec* pAVar13;
        uint* puVar14;
        ulong uVar15;
        basic_string* pbVar16;
        AchievementRequirementSpec local_e8;
        undefined8 local_a0;
        undefined8 local_98;
        uint local_8c;
        ulong local_88;
        undefined8* local_80;
        undefined8 local_78;
        basic_string local_68[24];
        ulong local_50;
        ulong local_48;
        AchievementType* local_40;
        ulong local_38;

        local_40 = this;
        switch (param_2) {
        case 1:
            pbVar16 = (basic_string*)&field_56;
            goto LAB_10055332e;
        case 2:
            bVar3 = param_1->g1();
            if (bVar3 != 0) {
                uVar8 = (uint)bVar3;
                do {
                    bVar3 = param_1->g1();
                    local_80 = (undefined8*)CONCAT44(local_80._4_4_, (uint)bVar3);
                    eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
                    PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
                        eastl::basic_string<char, BucketAllocatorEASTL>>(
                        (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1, local_68, true);
                    eastl::make_pair<int&, eastl::basic_string<char, BucketAllocatorEASTL>&>((eastl*)&local_e8,
                                                                                             (int*)&local_80, local_68);
                    eastl::vector_map<int, eastl::basic_string<char, BucketAllocatorEASTL>, eastl::less<int>,
                                      eastl::allocator,
                                      eastl::vector<eastl::pair<int, eastl::basic_string<char, BucketAllocatorEASTL>>,
                                                    eastl::allocator>>::
                        insert<eastl::pair<int, eastl::basic_string<char, BucketAllocatorEASTL>>, void>(
                            (vector_map<int, eastl::basic_string<char, BucketAllocatorEASTL>, eastl::less<int>,
                                        eastl::allocator,
                                        eastl::vector<eastl::pair<int, eastl::basic_string<char, BucketAllocatorEASTL>>,
                                                      eastl::allocator>>*)&field_88,
                            (pair*)&local_e8);
                    local_e8.~pair();
                    local_68->~basic_string();
                    uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
            }
            break;
        case 3:
            uVar4 = param_1->g2();
            field_132 = (uint)uVar4;
            break;
        case 4:
            uVar6 = param_1->gSmart2or4s();
            field_140 = uVar6;
            break;
        case 5:
            bVar3 = param_1->g1();
            m_runeScore = (uint)bVar3;
            break;
        case 6:
            uVar4 = param_1->g2();
            field_176 = (uint)uVar4;
            break;
        case 7:
            pbVar16 = (basic_string*)&field_184;
        LAB_10055332e:
            PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<eastl::string>(
                (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1, pbVar16, true);
            break;
        case 8:
            uVar4 = param_1->gSmart1or2();
            if (uVar4 != 0) {
                local_88 = CONCAT44(local_88._4_4_, (uint)uVar4);
                local_40 = (AchievementType*)&local_40->field_216;
                local_50 = 0;
                do {
                    uVar2 = param_1->g1();
                    local_38 = CONCAT71(local_38._1_7_, uVar2);
                    uVar2 = param_1->g1();
                    local_48 = CONCAT71(local_48._1_7_, uVar2);
                    eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
                    PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
                        eastl::basic_string<char, BucketAllocatorEASTL>>(
                        (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1, local_68, true);
                    uVar4 = param_1->gSmart1or2();
                    new (&local_80) Array<int, eastl::allocator>((ulong)uVar4);
                    if (uVar4 != 0) {
                        uVar15 = 0;
                        do {
                            uVar8 = param_1->g2();
                            puVar14 = (uint*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)&local_80, uVar15);
                            *puVar14 = uVar8 & 65535;
                            uVar15 = uVar15 + 1;
                        } while (uVar4 != uVar15);
                    }
                    pAVar1 = local_40;
                    bVar3 = (byte)local_38;
                    iVar7 = local_40->size();
                    if (iVar7 <= (int)(uint)bVar3) {
                        pAVar1->resize((ulong)(bVar3 + 1));
                    }
                    pvVar12 = (vector<AchievementRequirementSpec, eastl::allocator>*)
                        eastl::vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>, eastl::allocator>::
                        operator[](
                            (vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>, eastl::allocator>*)
                                pAVar1,
                            (ulong)(uint)bVar3);
                    new (&local_e8)
                        AchievementRequirementSpec((uint)bVar3, (Array*)&local_80, (uint)(byte)local_48, local_68);
                    eastl::vector<AchievementRequirementSpec, eastl::allocator>::push_back(pvVar12, &local_e8);
                    local_e8.~AchievementRequirementSpec();
                    local_80.~Array();
                    local_68->~basic_string();
                    uVar8 = (int)local_50 + 1;
                    local_50 = (ulong)uVar8;
                } while (uVar8 != (uint)local_88);
            }
            break;
        case 9:
            uVar4 = param_1->gSmart1or2();
            local_40 = (AchievementType*)&field_248;
            local_40->resize((ulong)uVar4);
            if (uVar4 != 0) {
                local_50 = 0;
                local_88 = (ulong)uVar4;
                do {
                    uVar2 = param_1->g1();
                    local_38 = CONCAT71(local_38._1_7_, uVar2);
                    uVar6 = param_1->gSmart2or4();
                    eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
                    PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
                        eastl::basic_string<char, BucketAllocatorEASTL>>(
                        (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1, local_68, true);
                    local_48 = CONCAT44(local_48._4_4_, uVar6);
                    uVar4 = param_1->gSmart1or2();
                    new (&local_80) Array<int, eastl::allocator>((ulong)uVar4);
                    if (uVar4 != 0) {
                        uVar15 = 0;
                        do {
                            uVar8 = param_1->g2();
                            puVar14 = (uint*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)&local_80, uVar15);
                            *puVar14 = uVar8 & 65535;
                            uVar15 = uVar15 + 1;
                        } while (uVar4 != uVar15);
                    }
                    pAVar1 = local_40;
                    bVar3 = (byte)local_38;
                    iVar7 = local_40->size();
                    if (iVar7 <= (int)(uint)bVar3) {
                        pAVar1->resize((ulong)(bVar3 + 1));
                    }
                    pvVar12 = (vector<AchievementRequirementSpec, eastl::allocator>*)
                        eastl::vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>, eastl::allocator>::
                        operator[](
                            (vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>, eastl::allocator>*)
                                pAVar1,
                            (ulong)(uint)bVar3);
                    new (&local_e8) AchievementRequirementSpec((uint)bVar3, (Array*)&local_80, (int)local_48, local_68);
                    eastl::vector<AchievementRequirementSpec, eastl::allocator>::push_back(pvVar12, &local_e8);
                    local_e8.~AchievementRequirementSpec();
                    local_80.~Array();
                    local_68->~basic_string();
                    uVar8 = (int)local_50 + 1;
                    local_50 = (ulong)uVar8;
                } while (uVar8 != (uint)local_88);
            }
            break;
        case 10:
            uVar4 = param_1->gSmart1or2();
            if (uVar4 != 0) {
                local_88 = CONCAT44(local_88._4_4_, (uint)uVar4);
                local_40 = (AchievementType*)&local_40->field_280;
                local_50 = 0;
                do {
                    uVar2 = param_1->g1();
                    local_38 = CONCAT71(local_38._1_7_, uVar2);
                    uVar6 = param_1->gSmart2or4();
                    local_48 = CONCAT44(local_48._4_4_, uVar6);
                    eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
                    PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
                        eastl::basic_string<char, BucketAllocatorEASTL>>(
                        (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1, local_68, true);
                    uVar4 = param_1->gSmart1or2();
                    new (&local_80) Array<int, eastl::allocator>((ulong)uVar4);
                    if (uVar4 != 0) {
                        uVar15 = 0;
                        do {
                            uVar8 = param_1->g2();
                            puVar14 = (uint*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)&local_80, uVar15);
                            *puVar14 = uVar8 & 65535;
                            uVar15 = uVar15 + 1;
                        } while (uVar4 != uVar15);
                    }
                    pAVar1 = local_40;
                    bVar3 = (byte)local_38;
                    iVar7 = local_40->size();
                    if (iVar7 <= (int)(uint)bVar3) {
                        pAVar1->resize((ulong)(bVar3 + 1));
                    }
                    pvVar12 = (vector<AchievementRequirementSpec, eastl::allocator>*)
                        eastl::vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>, eastl::allocator>::
                        operator[](
                            (vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>, eastl::allocator>*)
                                pAVar1,
                            (ulong)(uint)bVar3);
                    new (&local_e8) AchievementRequirementSpec((uint)bVar3, (Array*)&local_80, (int)local_48, local_68);
                    eastl::vector<AchievementRequirementSpec, eastl::allocator>::push_back(pvVar12, &local_e8);
                    local_e8.~AchievementRequirementSpec();
                    local_80.~Array();
                    local_68->~basic_string();
                    uVar8 = (int)local_50 + 1;
                    local_50 = (ulong)uVar8;
                } while (uVar8 != (uint)local_88);
            }
            break;
        case 11:
            uVar4 = param_1->gSmart1or2();
            if (uVar4 != 0) {
                uVar8 = (uint)uVar4;
                local_40 = (AchievementType*)&local_40->field_376;
                do {
                    local_38 = CONCAT44(local_38._4_4_, uVar8);
                    bVar3 = param_1->g1();
                    uVar6 = param_1->g2();
                    pAVar1 = local_40;
                    iVar7 = local_40->size();
                    if (iVar7 <= (int)(uint)bVar3) {
                        pAVar1->resize((ulong)(bVar3 + 1));
                    }
                    pvVar12 = (vector<AchievementRequirementSpec, eastl::allocator>*)
                        eastl::vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>, eastl::allocator>::
                        operator[](
                            (vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>, eastl::allocator>*)
                                pAVar1,
                            (ulong)(uint)bVar3);
                    local_a0 = (uint*)(CONCAT44(local_a0._4_4_, uVar6) & 18446744069414649855);
                    local_80 = &local_a0;
                    local_78 = 1;
                    new (local_68) Array<int, eastl::allocator>((initializer_list*)&local_80);
                    new (&local_e8) AchievementRequirementSpec((uint)bVar3, local_68);
                    eastl::vector<AchievementRequirementSpec, eastl::allocator>::push_back(pvVar12, &local_e8);
                    local_e8.~AchievementRequirementSpec();
                    local_68->~Array();
                    uVar8 = (int)local_38 - 1;
                } while (uVar8 != 0);
            }
            break;
        case 12:
            uVar4 = param_1->gSmart1or2();
            local_40 = (AchievementType*)&field_472;
            local_40->set_max_size((ulong)uVar4, 0);
            if (uVar4 != 0) {
                local_38 = 0;
                local_88 = (ulong)uVar4;
                do {
                    uVar2 = param_1->g1();
                    local_48 = CONCAT71(local_48._1_7_, uVar2);
                    uVar2 = param_1->g1();
                    local_50 = CONCAT71(local_50._1_7_, uVar2);
                    eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
                    PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
                        eastl::basic_string<char, BucketAllocatorEASTL>>(
                        (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1, local_68, true);
                    uVar4 = param_1->gSmart1or2();
                    new (&local_80) Array<int, eastl::allocator>((ulong)uVar4);
                    if (uVar4 != 0) {
                        uVar15 = 0;
                        do {
                            uVar8 = param_1->g2();
                            puVar14 = (uint*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)&local_80, uVar15);
                            *puVar14 = uVar8 & 65535;
                            uVar15 = uVar15 + 1;
                        } while (uVar4 != uVar15);
                    }
                    new (&local_e8) AchievementRequirementSpec((uint)(byte)local_48, (Array*)&local_80,
                                                               (uint)(byte)local_50, local_68);
                    pAVar13 =
                        (AchievementRequirementSpec*)Array<AchievementRequirementSpec, eastl::allocator>::operator[](
                            (Array<AchievementRequirementSpec, eastl::allocator>*)local_40, local_38);
                    AchievementRequirementSpec::operator=(pAVar13, &local_e8);
                    local_e8.~AchievementRequirementSpec();
                    local_80.~Array();
                    local_68->~basic_string();
                    local_38 = local_38 + 1;
                } while (local_38 != local_88);
            }
            break;
        case 13:
            uVar4 = param_1->gSmart1or2();
            local_40 = (AchievementType*)&field_496;
            local_40->set_max_size((ulong)uVar4, 0);
            if (uVar4 != 0) {
                local_38 = 0;
                local_88 = (ulong)uVar4;
                do {
                    uVar2 = param_1->g1();
                    local_50 = CONCAT71(local_50._1_7_, uVar2);
                    uVar6 = param_1->gSmart2or4();
                    local_48 = CONCAT44(local_48._4_4_, uVar6);
                    eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
                    PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
                        eastl::basic_string<char, BucketAllocatorEASTL>>(
                        (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1, local_68, true);
                    uVar4 = param_1->gSmart1or2();
                    new (&local_80) Array<int, eastl::allocator>((ulong)uVar4);
                    if (uVar4 != 0) {
                        uVar15 = 0;
                        do {
                            uVar8 = param_1->g2();
                            puVar14 = (uint*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)&local_80, uVar15);
                            *puVar14 = uVar8 & 65535;
                            uVar15 = uVar15 + 1;
                        } while (uVar4 != uVar15);
                    }
                    new (&local_e8)
                        AchievementRequirementSpec((uint)(byte)local_50, (Array*)&local_80, (int)local_48, local_68);
                    pAVar13 =
                        (AchievementRequirementSpec*)Array<AchievementRequirementSpec, eastl::allocator>::operator[](
                            (Array<AchievementRequirementSpec, eastl::allocator>*)local_40, local_38);
                    AchievementRequirementSpec::operator=(pAVar13, &local_e8);
                    local_e8.~AchievementRequirementSpec();
                    local_80.~Array();
                    local_68->~basic_string();
                    local_38 = local_38 + 1;
                } while (local_38 != local_88);
            }
            break;
        case 14:
            uVar4 = param_1->gSmart1or2();
            local_40 = (AchievementType*)&field_520;
            local_40->set_max_size((ulong)uVar4, 0);
            if (uVar4 != 0) {
                local_38 = 0;
                local_88 = (ulong)uVar4;
                do {
                    uVar2 = param_1->g1();
                    local_50 = CONCAT71(local_50._1_7_, uVar2);
                    uVar6 = param_1->gSmart2or4();
                    local_48 = CONCAT44(local_48._4_4_, uVar6);
                    eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
                    PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
                        eastl::basic_string<char, BucketAllocatorEASTL>>(
                        (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1, local_68, true);
                    uVar4 = param_1->gSmart1or2();
                    new (&local_80) Array<int, eastl::allocator>((ulong)uVar4);
                    if (uVar4 != 0) {
                        uVar15 = 0;
                        do {
                            uVar8 = param_1->g2();
                            puVar14 = (uint*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)&local_80, uVar15);
                            *puVar14 = uVar8 & 65535;
                            uVar15 = uVar15 + 1;
                        } while (uVar4 != uVar15);
                    }
                    new (&local_e8)
                        AchievementRequirementSpec((uint)(byte)local_50, (Array*)&local_80, (int)local_48, local_68);
                    pAVar13 =
                        (AchievementRequirementSpec*)Array<AchievementRequirementSpec, eastl::allocator>::operator[](
                            (Array<AchievementRequirementSpec, eastl::allocator>*)local_40, local_38);
                    AchievementRequirementSpec::operator=(pAVar13, &local_e8);
                    local_e8.~AchievementRequirementSpec();
                    local_80.~Array();
                    local_68->~basic_string();
                    local_38 = local_38 + 1;
                } while (local_38 != local_88);
            }
            break;
        case 15:
            uVar4 = param_1->gSmart1or2();
            local_40 = (AchievementType*)&field_592;
            local_40->set_max_size((ulong)uVar4, 0);
            if (uVar4 != 0) {
                uVar15 = 0;
                local_38 = (ulong)uVar4;
                do {
                    bVar3 = param_1->g1();
                    uVar4 = param_1->g2();
                    local_a0 = (uint*)CONCAT44(local_a0._4_4_, (uint)uVar4);
                    local_80 = &local_a0;
                    local_78 = 1;
                    new (local_68) Array<int, eastl::allocator>((initializer_list*)&local_80);
                    new (&local_e8) AchievementRequirementSpec((uint)bVar3, local_68);
                    pAVar13 =
                        (AchievementRequirementSpec*)Array<AchievementRequirementSpec, eastl::allocator>::operator[](
                            (Array<AchievementRequirementSpec, eastl::allocator>*)local_40, uVar15);
                    AchievementRequirementSpec::operator=(pAVar13, &local_e8);
                    local_e8.~AchievementRequirementSpec();
                    local_68->~Array();
                    uVar15 = uVar15 + 1;
                } while (local_38 != uVar15);
            }
            break;
        case 16:
            uVar4 = param_1->g2();
            field_136 = (uint)uVar4;
            break;
        case 17:
            field_128 = 1;
            break;
        case 18:
            bVar3 = param_1->g1();
            field_148 = (uint)bVar3;
            break;
        case 19:
            field_152 = 0;
            break;
        case 20:
            uVar4 = param_1->gSmart1or2();
            if (uVar4 != 0) {
                uVar8 = (uint)uVar4;
                local_40 = (AchievementType*)&local_40->field_408;
                do {
                    local_38 = CONCAT44(local_38._4_4_, uVar8);
                    bVar3 = param_1->g1();
                    uVar6 = param_1->g2();
                    pAVar1 = local_40;
                    iVar7 = local_40->size();
                    if (iVar7 <= (int)(uint)bVar3) {
                        pAVar1->resize((ulong)(bVar3 + 1));
                    }
                    pvVar12 = (vector<AchievementRequirementSpec, eastl::allocator>*)
                        eastl::vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>, eastl::allocator>::
                        operator[](
                            (vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>, eastl::allocator>*)
                                pAVar1,
                            (ulong)(uint)bVar3);
                    local_a0 = (uint*)(CONCAT44(local_a0._4_4_, uVar6) & 18446744069414649855);
                    local_80 = &local_a0;
                    local_78 = 1;
                    new (local_68) Array<int, eastl::allocator>((initializer_list*)&local_80);
                    new (&local_e8) AchievementRequirementSpec((uint)bVar3, local_68);
                    eastl::vector<AchievementRequirementSpec, eastl::allocator>::push_back(pvVar12, &local_e8);
                    local_e8.~AchievementRequirementSpec();
                    local_68->~Array();
                    uVar8 = (int)local_38 - 1;
                } while (uVar8 != 0);
            }
            break;
        case 21:
            uVar4 = param_1->gSmart1or2();
            local_40 = (AchievementType*)&field_616;
            local_40->set_max_size((ulong)uVar4, 0);
            if (uVar4 != 0) {
                uVar15 = 0;
                local_38 = (ulong)uVar4;
                do {
                    bVar3 = param_1->g1();
                    uVar4 = param_1->g2();
                    local_a0 = (uint*)CONCAT44(local_a0._4_4_, (uint)uVar4);
                    local_80 = &local_a0;
                    local_78 = 1;
                    new (local_68) Array<int, eastl::allocator>((initializer_list*)&local_80);
                    new (&local_e8) AchievementRequirementSpec((uint)bVar3, local_68);
                    pAVar13 =
                        (AchievementRequirementSpec*)Array<AchievementRequirementSpec, eastl::allocator>::operator[](
                            (Array<AchievementRequirementSpec, eastl::allocator>*)local_40, uVar15);
                    AchievementRequirementSpec::operator=(pAVar13, &local_e8);
                    local_e8.~AchievementRequirementSpec();
                    local_68->~Array();
                    uVar15 = uVar15 + 1;
                } while (local_38 != uVar15);
            }
            break;
        case 22:
            uVar4 = param_1->gSmart1or2();
            if (uVar4 != 0) {
                uVar8 = (uint)uVar4;
                local_40 = (AchievementType*)&local_40->field_312;
                do {
                    local_48 = CONCAT44(local_48._4_4_, uVar8);
                    uVar8 = param_1->g1();
                    uVar4 = param_1->g2();
                    local_80 = (undefined8*)CONCAT44(local_80._4_4_, (uint)uVar4);
                    local_e8._8_8_ = 1;
                    local_e8._0_8_ = (basic_string*)&local_80;
                    new (local_68) Array<int, eastl::allocator>((initializer_list*)&local_e8);
                    uVar2 = param_1->g1();
                    eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
                    local_38 = CONCAT71(local_38._1_7_, uVar2);
                    PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
                        eastl::basic_string<char, BucketAllocatorEASTL>>(
                        (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1,
                        (basic_string*)&local_80, true);
                    uVar9 = param_1->g1();
                    pAVar1 = local_40;
                    iVar7 = local_40->size();
                    if (iVar7 <= (int)(uVar8 & 255)) {
                        pAVar1->resize((ulong)((uVar8 & 255) + 1));
                    }
                    pvVar12 = (vector<AchievementRequirementSpec, eastl::allocator>*)
                        eastl::vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>, eastl::allocator>::
                        operator[](
                            (vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>, eastl::allocator>*)
                                pAVar1,
                            (ulong)(uVar8 & 255));
                    new (&local_e8) AchievementRequirementSpec(uVar8 & 255, local_68, (uint)(byte)local_38,
                                                               (basic_string*)&local_80, uVar9 & 255);
                    eastl::vector<AchievementRequirementSpec, eastl::allocator>::push_back(pvVar12, &local_e8);
                    local_e8.~AchievementRequirementSpec();
                    local_80.~basic_string();
                    local_68->~Array();
                    uVar8 = (int)local_48 - 1;
                } while (uVar8 != 0);
            }
            break;
        case 23:
            uVar4 = param_1->gSmart1or2();
            local_40 = (AchievementType*)&field_544;
            local_40->set_max_size((ulong)uVar4, 0);
            if (uVar4 != 0) {
                local_48 = 0;
                local_50 = (ulong)uVar4;
                do {
                    uVar2 = param_1->g1();
                    local_38 = CONCAT71(local_38._1_7_, uVar2);
                    uVar8 = param_1->g2();
                    uVar9 = param_1->g1();
                    eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
                    PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
                        eastl::basic_string<char, BucketAllocatorEASTL>>(
                        (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1, local_68, true);
                    uVar10 = param_1->g1();
                    local_8c = uVar8 & 65535;
                    local_a0 = &local_8c;
                    local_98 = 1;
                    new (&local_80) Array<int, eastl::allocator>((initializer_list*)&local_a0);
                    new (&local_e8) AchievementRequirementSpec((uint)(byte)local_38, (Array*)&local_80, uVar9 & 255,
                                                               local_68, uVar10 & 255);
                    uVar15 = local_48;
                    pAVar13 =
                        (AchievementRequirementSpec*)Array<AchievementRequirementSpec, eastl::allocator>::operator[](
                            (Array<AchievementRequirementSpec, eastl::allocator>*)local_40, local_48);
                    AchievementRequirementSpec::operator=(pAVar13, &local_e8);
                    local_e8.~AchievementRequirementSpec();
                    local_80.~Array();
                    local_68->~basic_string();
                    local_48 = uVar15 + 1;
                } while (local_50 != local_48);
            }
            break;
        case 24:
            uVar4 = param_1->gSmart1or2();
            if (uVar4 != 0) {
                uVar8 = (uint)uVar4;
                local_40 = (AchievementType*)&local_40->field_344;
                do {
                    local_48 = CONCAT44(local_48._4_4_, uVar8);
                    uVar8 = param_1->g1();
                    uVar4 = param_1->g2();
                    local_80 = (undefined8*)CONCAT44(local_80._4_4_, (uint)uVar4);
                    local_e8._8_8_ = 1;
                    local_e8._0_8_ = (basic_string*)&local_80;
                    new (local_68) Array<int, eastl::allocator>((initializer_list*)&local_e8);
                    uVar2 = param_1->g1();
                    eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
                    local_38 = CONCAT71(local_38._1_7_, uVar2);
                    PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
                        eastl::basic_string<char, BucketAllocatorEASTL>>(
                        (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1,
                        (basic_string*)&local_80, true);
                    uVar9 = param_1->g1();
                    pAVar1 = local_40;
                    iVar7 = local_40->size();
                    if (iVar7 <= (int)(uVar8 & 255)) {
                        pAVar1->resize((ulong)((uVar8 & 255) + 1));
                    }
                    pvVar12 = (vector<AchievementRequirementSpec, eastl::allocator>*)
                        eastl::vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>, eastl::allocator>::
                        operator[](
                            (vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>, eastl::allocator>*)
                                pAVar1,
                            (ulong)(uVar8 & 255));
                    new (&local_e8) AchievementRequirementSpec(uVar8 & 255, local_68, (uint)(byte)local_38,
                                                               (basic_string*)&local_80, uVar9 & 255);
                    eastl::vector<AchievementRequirementSpec, eastl::allocator>::push_back(pvVar12, &local_e8);
                    local_e8.~AchievementRequirementSpec();
                    local_80.~basic_string();
                    local_68->~Array();
                    uVar8 = (int)local_48 - 1;
                } while (uVar8 != 0);
            }
            break;
        case 25:
            uVar4 = param_1->gSmart1or2();
            local_40 = (AchievementType*)&field_568;
            local_40->set_max_size((ulong)uVar4, 0);
            if (uVar4 != 0) {
                local_48 = 0;
                local_50 = (ulong)uVar4;
                do {
                    uVar2 = param_1->g1();
                    local_38 = CONCAT71(local_38._1_7_, uVar2);
                    uVar8 = param_1->g2();
                    uVar9 = param_1->g1();
                    eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
                    PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
                        eastl::basic_string<char, BucketAllocatorEASTL>>(
                        (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1, local_68, true);
                    uVar10 = param_1->g1();
                    local_8c = uVar8 & 65535;
                    local_a0 = &local_8c;
                    local_98 = 1;
                    new (&local_80) Array<int, eastl::allocator>((initializer_list*)&local_a0);
                    new (&local_e8) AchievementRequirementSpec((uint)(byte)local_38, (Array*)&local_80, uVar9 & 255,
                                                               local_68, uVar10 & 255);
                    uVar15 = local_48;
                    pAVar13 =
                        (AchievementRequirementSpec*)Array<AchievementRequirementSpec, eastl::allocator>::operator[](
                            (Array<AchievementRequirementSpec, eastl::allocator>*)local_40, local_48);
                    AchievementRequirementSpec::operator=(pAVar13, &local_e8);
                    local_e8.~AchievementRequirementSpec();
                    local_80.~Array();
                    local_68->~basic_string();
                    local_48 = uVar15 + 1;
                } while (local_50 != local_48);
            }
            break;
        case 26:
            uVar4 = param_1->g2();
            field_168 = (uint)uVar4;
            break;
        case 27:
            field_172 = 1;
            break;
        case 28:
            uVar4 = param_1->gSmart1or2();
            (&field_440, (ulong)uVar4, 0)->set_max_size();
            if (uVar4 != 0) {
                uVar15 = 0;
                do {
                    uVar5 = param_1->gSmart1or2();
                    puVar14 = (uint*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_440,
                                                                              uVar15);
                    *puVar14 = (uint)uVar5;
                    uVar15 = uVar15 + 1;
                } while (uVar4 != uVar15);
            }
            break;
        case 29:
            bVar3 = param_1->g1();
            field_464 = (uint)bVar3;
            break;
        case 30:
            uVar4 = param_1->gSmart1or2();
            (&field_640, (ulong)uVar4, 0)->set_max_size();
            if (uVar4 != 0) {
                uVar15 = 0;
                do {
                    uVar5 = param_1->gSmart1or2();
                    puVar14 = (uint*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_640,
                                                                              uVar15);
                    *puVar14 = (uint)uVar5;
                    uVar15 = uVar15 + 1;
                } while (uVar4 != uVar15);
            }
            break;
        case 31:
            bVar3 = param_1->g1();
            field_664 = (uint)bVar3;
            break;
        case 32:
            bVar3 = param_1->g1();
            field_156 = (uint)bVar3;
            bVar3 = param_1->g1();
            field_160 = (uint)bVar3;
            bVar3 = param_1->g1();
            field_164 = (uint)bVar3;
            break;
        default:
            uVar11 = logger::default_logger();
            logger::Logger::Log(uVar11, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/achievementtype/AchievementType.cpp",
                                341, "Unrecognised .ach config code: %u in achievement %d", param_2, field_32);
        }
        return DataStatus::READY;
    }

    // 0x100554b20, 480 bytes, placed by class name
    // AchievementType::PostDecode()
    void AchievementType::PostDecode() {
        undefined1* puVar1;
        char cVar2;
        undefined4 uVar3;
        uint uVar4;
        long lVar5;
        undefined4* puVar6;

        puVar1 = &field_440;
        cVar2 = puVar1->empty();
        if (cVar2 == '\0') {
            uVar4 = field_464;
        } else {
            lVar5 = GetTotalPrereqCount(this);
            if (lVar5 == 0) {
                puVar1->set_max_size(0, 0);
                uVar4 = field_464;
            } else {
                puVar1->set_max_size(1, 0);
                puVar6 =
                    (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)puVar1, 0);
                *puVar6 = (int)lVar5;
                uVar4 = field_464;
            }
        }
        if (uVar4 == 4294967295) {
            uVar4 = puVar1->end();
            field_464 = uVar4;
            uVar4 = field_464;
        } else {
            uVar4 = field_464;
        }
        if ((int)uVar4 < 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numPrereqGroupsToComplete > -1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "achievementtype/AchievementType.cpp",
                      371, (char*)0);
        }
        puVar1 = &field_640;
        cVar2 = puVar1->empty();
        if (cVar2 == '\0') {
            uVar4 = field_664;
        } else {
            puVar1->set_max_size(1, 0);
            uVar3 = GetTotalRequirementCount(this);
            puVar6 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)puVar1, 0);
            *puVar6 = uVar3;
            uVar4 = field_664;
        }
        if (uVar4 == 4294967295) {
            uVar4 = puVar1->end();
            field_664 = uVar4;
            uVar4 = field_664;
        } else {
            uVar4 = field_664;
        }
        if ((int)uVar4 < 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numReqGroupsToComplete > -1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "achievementtype/AchievementType.cpp",
                      388, (char*)0);
        }
        lVar5 = puVar1->end();
        if (lVar5 == 1) {
            (&field_672, 1, 0)->set_max_size();
            uVar3 = GetTotalRequirementCount(this);
            puVar6 =
                (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_672, 0);
            *puVar6 = uVar3;
        } else {
            ValidateReqGroupItemsToComplete(this);
            CountReqGroupItemCount(this);
        }
    }

    // 0x100554d00, 480 bytes, placed by class name
    // AchievementType::GetTotalPrereqCount() const
    long AchievementType::GetTotalPrereqCount() {
        vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle, eastl::allocator>* pvVar1;
        vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle, eastl::allocator>* pvVar2;
        long lVar3;
        long lVar4;

        pvVar1 = (vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle, eastl::allocator>*)(&field_216)
                     ->HeapBeginPtr();
        pvVar2 =
            (vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle, eastl::allocator>*)(&field_216)->end();
        if (pvVar1 == pvVar2) {
            lVar4 = 0;
        } else {
            lVar4 = 0;
            do {
                lVar3 = eastl::vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle, eastl::allocator>::size(
                    pvVar1);
                lVar4 = lVar4 + lVar3;
                pvVar1 = pvVar1 + 32;
            } while (pvVar1 != pvVar2);
        }
        pvVar1 = (vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle, eastl::allocator>*)(&field_248)
                     ->HeapBeginPtr();
        pvVar2 =
            (vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle, eastl::allocator>*)(&field_248)->end();
        for (; pvVar1 != pvVar2; pvVar1 = pvVar1 + 32) {
            lVar3 =
                eastl::vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle, eastl::allocator>::size(pvVar1);
            lVar4 = lVar4 + lVar3;
        }
        pvVar1 = (vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle, eastl::allocator>*)(&field_280)
                     ->HeapBeginPtr();
        pvVar2 =
            (vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle, eastl::allocator>*)(&field_280)->end();
        for (; pvVar1 != pvVar2; pvVar1 = pvVar1 + 32) {
            lVar3 =
                eastl::vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle, eastl::allocator>::size(pvVar1);
            lVar4 = lVar4 + lVar3;
        }
        pvVar1 = (vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle, eastl::allocator>*)(&field_312)
                     ->HeapBeginPtr();
        pvVar2 =
            (vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle, eastl::allocator>*)(&field_312)->end();
        for (; pvVar1 != pvVar2; pvVar1 = pvVar1 + 32) {
            lVar3 =
                eastl::vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle, eastl::allocator>::size(pvVar1);
            lVar4 = lVar4 + lVar3;
        }
        pvVar1 = (vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle, eastl::allocator>*)(&field_344)
                     ->HeapBeginPtr();
        pvVar2 =
            (vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle, eastl::allocator>*)(&field_344)->end();
        for (; pvVar1 != pvVar2; pvVar1 = pvVar1 + 32) {
            lVar3 =
                eastl::vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle, eastl::allocator>::size(pvVar1);
            lVar4 = lVar4 + lVar3;
        }
        pvVar1 = (vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle, eastl::allocator>*)(&field_376)
                     ->HeapBeginPtr();
        pvVar2 =
            (vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle, eastl::allocator>*)(&field_376)->end();
        for (; pvVar1 != pvVar2; pvVar1 = pvVar1 + 32) {
            lVar3 =
                eastl::vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle, eastl::allocator>::size(pvVar1);
            lVar4 = lVar4 + lVar3;
        }
        pvVar1 = (vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle, eastl::allocator>*)(&field_408)
                     ->HeapBeginPtr();
        pvVar2 =
            (vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle, eastl::allocator>*)(&field_408)->end();
        for (; pvVar1 != pvVar2; pvVar1 = pvVar1 + 32) {
            lVar3 =
                eastl::vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle, eastl::allocator>::size(pvVar1);
            lVar4 = lVar4 + lVar3;
        }
        return lVar4;
    }

    // 0x100554ee0, 160 bytes, placed by class name
    // AchievementType::GetTotalRequirementCount() const
    long AchievementType::GetTotalRequirementCount() {
        long lVar1;
        long lVar2;
        long lVar3;
        long lVar4;
        long lVar5;
        long lVar6;
        long lVar7;

        lVar1 = (&field_472)->end();
        lVar2 = (&field_496)->end();
        lVar3 = (&field_520)->end();
        lVar4 = (&field_544)->end();
        lVar5 = (&field_568)->end();
        lVar6 = (&field_592)->end();
        lVar7 = (&field_616)->end();
        return lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1;
    }

    // 0x100554f80, 768 bytes, placed by class name
    // AchievementType::ValidateReqGroupItemsToComplete()
    void AchievementType::ValidateReqGroupItemsToComplete() {
        undefined1* this_00;
        int iVar1;
        uint uVar2;
        int* piVar3;
        CoordMapSquare* pCVar4;
        CoordMapSquare* pCVar5;
        ulong uVar6;

        this_00 = &field_640;
        iVar1 = this_00->end();
        if (0 < iVar1) {
            uVar6 = 0;
            do {
                piVar3 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00, uVar6);
                if (*piVar3 == 0) {
                    pCVar4 = (CoordMapSquare*)(&field_472)->data();
                    pCVar5 = (CoordMapSquare*)(&field_472)->end();
                    for (; pCVar4 != pCVar5; pCVar4 = pCVar4 + 6) {
                        uVar2 = pCVar4->GetX();
                        if (uVar6 == uVar2) {
                            piVar3 = (int*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)this_00, uVar6);
                            *piVar3 = *piVar3 + 1;
                        }
                    }
                    pCVar4 = (CoordMapSquare*)(&field_496)->data();
                    pCVar5 = (CoordMapSquare*)(&field_496)->end();
                    for (; pCVar4 != pCVar5; pCVar4 = pCVar4 + 6) {
                        uVar2 = pCVar4->GetX();
                        if (uVar6 == uVar2) {
                            piVar3 = (int*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)this_00, uVar6);
                            *piVar3 = *piVar3 + 1;
                        }
                    }
                    pCVar4 = (CoordMapSquare*)(&field_520)->data();
                    pCVar5 = (CoordMapSquare*)(&field_520)->end();
                    for (; pCVar4 != pCVar5; pCVar4 = pCVar4 + 6) {
                        uVar2 = pCVar4->GetX();
                        if (uVar6 == uVar2) {
                            piVar3 = (int*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)this_00, uVar6);
                            *piVar3 = *piVar3 + 1;
                        }
                    }
                    pCVar4 = (CoordMapSquare*)(&field_544)->data();
                    pCVar5 = (CoordMapSquare*)(&field_544)->end();
                    for (; pCVar4 != pCVar5; pCVar4 = pCVar4 + 6) {
                        uVar2 = pCVar4->GetX();
                        if (uVar6 == uVar2) {
                            piVar3 = (int*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)this_00, uVar6);
                            *piVar3 = *piVar3 + 1;
                        }
                    }
                    pCVar4 = (CoordMapSquare*)(&field_568)->data();
                    pCVar5 = (CoordMapSquare*)(&field_568)->end();
                    for (; pCVar4 != pCVar5; pCVar4 = pCVar4 + 6) {
                        uVar2 = pCVar4->GetX();
                        if (uVar6 == uVar2) {
                            piVar3 = (int*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)this_00, uVar6);
                            *piVar3 = *piVar3 + 1;
                        }
                    }
                    pCVar4 = (CoordMapSquare*)(&field_592)->data();
                    pCVar5 = (CoordMapSquare*)(&field_592)->end();
                    for (; pCVar4 != pCVar5; pCVar4 = pCVar4 + 6) {
                        uVar2 = pCVar4->GetX();
                        if (uVar6 == uVar2) {
                            piVar3 = (int*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)this_00, uVar6);
                            *piVar3 = *piVar3 + 1;
                        }
                    }
                    pCVar4 = (CoordMapSquare*)(&field_616)->data();
                    pCVar5 = (CoordMapSquare*)(&field_616)->end();
                    for (; pCVar4 != pCVar5; pCVar4 = pCVar4 + 6) {
                        uVar2 = pCVar4->GetX();
                        if (uVar6 == uVar2) {
                            piVar3 = (int*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)this_00, uVar6);
                            *piVar3 = *piVar3 + 1;
                        }
                    }
                }
                uVar6 = uVar6 + 1;
                iVar1 = this_00->end();
            } while ((long)uVar6 < (long)iVar1);
        }
    }

    // 0x100555280, 784 bytes, placed by class name
    // AchievementType::CountReqGroupItemCount()
    void AchievementType::CountReqGroupItemCount() {
        undefined1* this_00;
        int iVar1;
        uint uVar2;
        ulong uVar3;
        CoordMapSquare* pCVar4;
        CoordMapSquare* pCVar5;
        int* piVar6;

        this_00 = &field_672;
        uVar3 = (&field_640)->end();
        this_00->set_max_size(uVar3, 0);
        iVar1 = this_00->end();
        if (0 < iVar1) {
            uVar3 = 0;
            do {
                pCVar4 = (CoordMapSquare*)(&field_472)->data();
                pCVar5 = (CoordMapSquare*)(&field_472)->end();
                for (; pCVar4 != pCVar5; pCVar4 = pCVar4 + 6) {
                    uVar2 = pCVar4->GetX();
                    if (uVar3 == uVar2) {
                        piVar6 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00,
                                                                                uVar3);
                        *piVar6 = *piVar6 + 1;
                    }
                }
                pCVar4 = (CoordMapSquare*)(&field_496)->data();
                pCVar5 = (CoordMapSquare*)(&field_496)->end();
                for (; pCVar4 != pCVar5; pCVar4 = pCVar4 + 6) {
                    uVar2 = pCVar4->GetX();
                    if (uVar3 == uVar2) {
                        piVar6 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00,
                                                                                uVar3);
                        *piVar6 = *piVar6 + 1;
                    }
                }
                pCVar4 = (CoordMapSquare*)(&field_520)->data();
                pCVar5 = (CoordMapSquare*)(&field_520)->end();
                for (; pCVar4 != pCVar5; pCVar4 = pCVar4 + 6) {
                    uVar2 = pCVar4->GetX();
                    if (uVar3 == uVar2) {
                        piVar6 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00,
                                                                                uVar3);
                        *piVar6 = *piVar6 + 1;
                    }
                }
                pCVar4 = (CoordMapSquare*)(&field_544)->data();
                pCVar5 = (CoordMapSquare*)(&field_544)->end();
                for (; pCVar4 != pCVar5; pCVar4 = pCVar4 + 6) {
                    uVar2 = pCVar4->GetX();
                    if (uVar3 == uVar2) {
                        piVar6 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00,
                                                                                uVar3);
                        *piVar6 = *piVar6 + 1;
                    }
                }
                pCVar4 = (CoordMapSquare*)(&field_568)->data();
                pCVar5 = (CoordMapSquare*)(&field_568)->end();
                for (; pCVar4 != pCVar5; pCVar4 = pCVar4 + 6) {
                    uVar2 = pCVar4->GetX();
                    if (uVar3 == uVar2) {
                        piVar6 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00,
                                                                                uVar3);
                        *piVar6 = *piVar6 + 1;
                    }
                }
                pCVar4 = (CoordMapSquare*)(&field_592)->data();
                pCVar5 = (CoordMapSquare*)(&field_592)->end();
                for (; pCVar4 != pCVar5; pCVar4 = pCVar4 + 6) {
                    uVar2 = pCVar4->GetX();
                    if (uVar3 == uVar2) {
                        piVar6 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00,
                                                                                uVar3);
                        *piVar6 = *piVar6 + 1;
                    }
                }
                pCVar4 = (CoordMapSquare*)(&field_616)->data();
                pCVar5 = (CoordMapSquare*)(&field_616)->end();
                for (; pCVar4 != pCVar5; pCVar4 = pCVar4 + 6) {
                    uVar2 = pCVar4->GetX();
                    if (uVar3 == uVar2) {
                        piVar6 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00,
                                                                                uVar3);
                        *piVar6 = *piVar6 + 1;
                    }
                }
                uVar3 = uVar3 + 1;
                iVar1 = this_00->end();
            } while ((long)uVar3 < (long)iVar1);
        }
    }

    // 0x1005555b0, 144 bytes, placed by class name
    // AchievementType::GetProgress(PlayerGameState&, PlayerVarDomain&, int)
    undefined4 AchievementType::GetProgress(PlayerGameState* param_1, PlayerVarDomain* param_2, int param_3) {
        undefined4 uVar1;
        hash_map local_78[48];
        equal_to local_48[8];
        BucketAllocatorEASTL local_40[8];
        eastl local_38[8];

        eastl::destruct<oldscape::highlight::NpcUID*>(local_38, (NpcUID*)"EASTL hash_map", (NpcUID*)param_2);
        eastl::hash_map<int, int, eastl::hash<int>, eastl::equal_to<int>, BucketAllocatorEASTL, false>::hash_map(
            (ulong)local_78, (hash*)8192, local_48, local_40);
        uVar1 = GetProgress(this, param_1, param_2, param_3, local_78);
        local_78->~hash_set();
        return uVar1;
    }

    // 0x100555650, 4512 bytes, placed by class name
    // AchievementType::GetProgress(PlayerGameState&, PlayerVarDomain&, int, eastl::hash_map<int, int, eastl::hash<int>, eastl::equal_to<int>, BucketAllocatorEASTL, false>&)
    /* WARNING: Removing unreachable block (ram,4300562274) */
    /* WARNING: Removing unreachable block (ram,4300562642) */
    /* AchievementType::GetProgress(PlayerGameState&, PlayerVarDomain&,
   int, eastl::hash_map<int, int, eastl::hash<int>, eastl::equal_to<int>, BucketAllocatorEASTL,
   false>&) */

    int AchievementType::GetProgress(PlayerGameState* param_1, PlayerVarDomain* param_2, int param_3,
                                     hash_map* param_4) {
        byte bVar1;
        AchievementRequirementSpec* pAVar2;
        VarDomainType* pVVar3;
        PlayerVarDomain* pPVar4;
        byte bVar5;
        char cVar6;
        uint uVar7;
        int iVar8;
        int iVar9;
        undefined4 uVar10;
        uint uVar11;
        int* piVar12;
        AchievementRequirementSpec* pAVar13;
        AchievementRequirementSpec* pAVar14;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* pAVar15;
        uint* puVar16;
        uint* puVar17;
        GameToken* this_00;
        GameToken* pGVar18;
        undefined8 uVar19;
        LightType* pLVar20;
        LightType* pLVar21;
        VarValue* pVVar22;
        ConfigProvider* pCVar23;
        shared_ptr* this_01;
        QuestType* this_02;
        undefined1* puVar24;
        shared_ptr<AchievementType>* this_03;
        AchievementType* pAVar25;
        long lVar26;
        byte* pbVar27;
        ulong uVar28;
        int* piVar29;
        undefined4* puVar30;
        hashtable_iterator_base* extraout_RDX;
        int iVar31;
        ulong uVar32;
        bool bVar33;
        int local_530[4];
        int local_520[4];
        Array<int, eastl::allocator>* local_510;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* local_508;
        ulong local_500;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* local_4f8;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* local_4f0;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* local_4e8;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* local_4e0;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* local_4d8;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* local_4d0;
        int local_4c4;
        PlayerGameState* local_4c0;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_4b8;
        hash_map* local_4b0;
        VarTypeList* local_4a8;
        undefined8 local_4a0;
        int local_494;
        PlayerVarDomain* local_490;
        AchievementRequirementSpec* local_488;
        AchievementRequirementSpec* local_480;
        AchievementType* local_478;
        int local_46c;
        ulong local_468;
        int local_460;
        int local_45c;
        fixed_vector<int, 127ul, true, eastl::allocator> local_458[552];
        fixed_vector<bool, 127ul, true, eastl::allocator> local_230[168];
        fixed_vector<bool, 127ul, true, eastl::allocator> local_188[168];
        fixed_vector<bool, 127ul, true, eastl::allocator> local_e0[168];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        iVar31 = -4;
        if (field_128 == '\0') {
            local_4a8 = (VarTypeList*)field_24;
            local_4c4 = (int)(10000 / (long)(int)field_664);
            puVar24 = &field_640;
            local_4c0 = param_1;
            local_4b0 = param_4;
            local_494 = param_3;
            local_490 = param_2;
            local_478 = this;
            uVar7 = puVar24->end();
            eastl::fixed_vector<bool, 127ul, true, eastl::allocator>::fixed_vector(local_e0);
            local_4b8 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)puVar24;
            puVar24->end();
            eastl::vector<bool, eastl::fixed_vector_allocator<1ul, 127ul, 1ul, 0ul, true, eastl::allocator>>::resize(
                (ulong)local_e0);
            local_458[0] = (fixed_vector<int, 127ul, true, eastl::allocator>)0;
            local_e0->assign(local_458);
            eastl::fixed_vector<bool, 127ul, true, eastl::allocator>::fixed_vector(local_188);
            eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(local_4b8);
            eastl::vector<bool, eastl::fixed_vector_allocator<1ul, 127ul, 1ul, 0ul, true, eastl::allocator>>::resize(
                (ulong)local_188);
            local_458[0] = (fixed_vector<int, 127ul, true, eastl::allocator>)0;
            local_188->assign(local_458);
            eastl::fixed_vector<bool, 127ul, true, eastl::allocator>::fixed_vector(local_230);
            eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(local_4b8);
            eastl::vector<bool, eastl::fixed_vector_allocator<1ul, 127ul, 1ul, 0ul, true, eastl::allocator>>::resize(
                (ulong)local_230);
            local_458[0] = (fixed_vector<int, 127ul, true, eastl::allocator>)0;
            local_230->assign(local_458);
            eastl::fixed_vector<int, 127ul, true, eastl::allocator>::fixed_vector(local_458);
            eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(local_4b8);
            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 127ul, 4ul, 0ul, true, eastl::allocator>>::resize(
                (ulong)local_458);
            local_530[0] = 0;
            local_458->assign(local_530);
            if (0 < (int)uVar7) {
                local_510 = (Array<int, eastl::allocator>*)&local_478->field_672;
                local_508 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                                   std::default_delete<LoadingScreenScript::AnimLayer>>,
                                   eastl::allocator>*)&local_478->field_472;
                local_4f8 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                                   std::default_delete<LoadingScreenScript::AnimLayer>>,
                                   eastl::allocator>*)&local_478->field_496;
                local_4f0 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                                   std::default_delete<LoadingScreenScript::AnimLayer>>,
                                   eastl::allocator>*)&local_478->field_520;
                local_4e8 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                                   std::default_delete<LoadingScreenScript::AnimLayer>>,
                                   eastl::allocator>*)&local_478->field_544;
                local_4e0 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                                   std::default_delete<LoadingScreenScript::AnimLayer>>,
                                   eastl::allocator>*)&local_478->field_568;
                local_4d8 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                                   std::default_delete<LoadingScreenScript::AnimLayer>>,
                                   eastl::allocator>*)&local_478->field_616;
                local_4d0 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                                   std::default_delete<LoadingScreenScript::AnimLayer>>,
                                   eastl::allocator>*)&local_478->field_592;
                local_500 = (ulong)uVar7;
                uVar32 = 0;
                do {
                    piVar12 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)local_4b8,
                                                                             uVar32);
                    local_46c = *piVar12;
                    piVar12 = (int*)Array<int, eastl::allocator>::operator[](local_510, uVar32);
                    pAVar15 = local_508;
                    local_460 = local_4c4 / *piVar12;
                    pAVar13 = (AchievementRequirementSpec*)local_508->data();
                    pAVar14 = (AchievementRequirementSpec*)pAVar15->end();
                    local_468 = uVar32;
                    if (pAVar13 == pAVar14) {
                        local_45c = 0;
                    } else {
                        local_45c = 0;
                        bVar33 = false;
                        local_480 = pAVar14;
                        do {
                            uVar7 = pAVar13->GetX();
                            if (uVar32 == uVar7) {
                                local_488 = (AchievementRequirementSpec*)CONCAT71(local_488._1_7_, bVar33);
                                iVar8 = pAVar13->GetStatus();
                                pAVar15 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                                                 std::default_delete<LoadingScreenScript::AnimLayer>>,
                                                 eastl::allocator>*)pAVar13->second();
                                puVar16 = (uint*)pAVar15->data();
                                puVar17 = (uint*)pAVar15->end();
                                iVar31 = 0;
                                pAVar2 = local_488;
                                pAVar14 = local_480;
                                uVar32 = local_468;
                                for (; local_488 = pAVar2, local_480 = pAVar14, local_468 = uVar32, puVar16 != puVar17;
                                     puVar16 = puVar16 + 1) {
                                    iVar9 = local_4c0->GetStatLevelMaxActual(*puVar16);
                                    iVar31 = iVar31 + iVar9;
                                    pAVar2 = local_488;
                                    pAVar14 = local_480;
                                    uVar32 = local_468;
                                }
                                if (iVar31 < iVar8) {
                                    piVar12 = (int*)eastl::vector<
                                        int,
                                        eastl::fixed_vector_allocator<4ul, 127ul, 4ul, 0ul, true, eastl::allocator>>::
                                    operator[]((vector<int, eastl::fixed_vector_allocator<4ul, 127ul, 4ul, 0ul, true,
                                                                                          eastl::allocator>>*)local_458,
                                               uVar32);
                                    pAVar14 = local_480;
                                    uVar32 = local_468;
                                    iVar31 = (iVar31 * local_460) / iVar8;
                                } else {
                                    local_45c = local_45c + 1;
                                    if (local_45c == local_46c) {
                                        pAVar25 = (AchievementType*)local_e0;
                                        puVar24 = (undefined1*)
                                            eastl::vector<bool, eastl::fixed_vector_allocator<1ul, 127ul, 1ul, 0ul,
                                                                                              true, eastl::allocator>>::
                                            operator[](
                                                (vector<bool, eastl::fixed_vector_allocator<1ul, 127ul, 1ul, 0ul, true,
                                                                                            eastl::allocator>>*)pAVar25,
                                                uVar32);
                                        *puVar24 = 1;
                                        cVar6 =
                                            AreGroupsCompleted(pAVar25, (fixed_vector*)local_e0, local_478->field_664);
                                        if (cVar6 != '\0') {
                                            iVar8 = 1;
                                            if (((ulong)pAVar2 & 1) == 0)
                                                goto LAB_100556500;
                                            break;
                                        }
                                    }
                                    piVar12 = (int*)eastl::vector<
                                        int,
                                        eastl::fixed_vector_allocator<4ul, 127ul, 4ul, 0ul, true, eastl::allocator>>::
                                    operator[]((vector<int, eastl::fixed_vector_allocator<4ul, 127ul, 4ul, 0ul, true,
                                                                                          eastl::allocator>>*)local_458,
                                               uVar32);
                                    iVar31 = local_460;
                                }
                                *piVar12 = *piVar12 + iVar31;
                            }
                            pAVar13 = pAVar13 + 1;
                            bVar33 = pAVar13 == pAVar14;
                        } while (!bVar33);
                    }
                    pAVar15 = local_4f8;
                    this_00 = (GameToken*)local_4f8->data();
                    pGVar18 = (GameToken*)pAVar15->end();
                    bVar33 = this_00 == pGVar18;
                    local_4a0 = pGVar18;
                    while (!bVar33) {
                        uVar7 = this_00->GetX();
                        if (uVar32 == uVar7) {
                            local_480 = (AchievementRequirementSpec*)CONCAT71(local_480._1_7_, bVar33);
                            uVar10 = this_00->GetStatus();
                            local_488 = (AchievementRequirementSpec*)CONCAT44(local_488._4_4_, uVar10);
                            pAVar15 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                                             std::default_delete<LoadingScreenScript::AnimLayer>>,
                                             eastl::allocator>*)this_00->second();
                            piVar12 = (int*)pAVar15->data();
                            piVar29 = (int*)pAVar15->end();
                            iVar31 = 0;
                            pGVar18 = local_4a0;
                            pAVar14 = local_480;
                            uVar32 = local_468;
                            for (; local_4a0 = pGVar18, local_480 = pAVar14, local_468 = uVar32, piVar12 != piVar29;
                                 piVar12 = piVar12 + 1) {
                                pCVar23 = (ConfigProvider*)local_4a8->GetDomain();
                                uVar19 = pCVar23->GetVarType(VarDomainType::PLAYER, *piVar12);
                                pVVar22 = (VarValue*)(*(code*)local_490->field_0[2])(local_490, uVar19);
                                iVar8 = pVVar22->GetInt();
                                iVar31 = iVar31 + iVar8;
                                pGVar18 = local_4a0;
                                pAVar14 = local_480;
                                uVar32 = local_468;
                            }
                            if (iVar31 < (int)local_488) {
                                piVar12 = (int*)eastl::vector<
                                    int, eastl::fixed_vector_allocator<4ul, 127ul, 4ul, 0ul, true, eastl::allocator>>::
                                operator[]((vector<int, eastl::fixed_vector_allocator<4ul, 127ul, 4ul, 0ul, true,
                                                                                      eastl::allocator>>*)local_458,
                                           uVar32);
                                pGVar18 = local_4a0;
                                iVar31 = (iVar31 * local_460) / (int)local_488;
                            } else {
                                local_45c = local_45c + 1;
                                if (local_45c == local_46c) {
                                    pAVar25 = (AchievementType*)local_e0;
                                    puVar24 = (undefined1*)eastl::vector<
                                        bool,
                                        eastl::fixed_vector_allocator<1ul, 127ul, 1ul, 0ul, true, eastl::allocator>>::
                                    operator[]((vector<bool, eastl::fixed_vector_allocator<1ul, 127ul, 1ul, 0ul, true,
                                                                                           eastl::allocator>>*)pAVar25,
                                               uVar32);
                                    *puVar24 = 1;
                                    cVar6 = AreGroupsCompleted(pAVar25, (fixed_vector*)local_e0, local_478->field_664);
                                    if (cVar6 != '\0') {
                                        iVar8 = 1;
                                        if (((ulong)pAVar14 & 1) == 0)
                                            goto LAB_100556500;
                                        goto LAB_100555c82;
                                    }
                                }
                                piVar12 = (int*)eastl::vector<
                                    int, eastl::fixed_vector_allocator<4ul, 127ul, 4ul, 0ul, true, eastl::allocator>>::
                                operator[]((vector<int, eastl::fixed_vector_allocator<4ul, 127ul, 4ul, 0ul, true,
                                                                                      eastl::allocator>>*)local_458,
                                           uVar32);
                                iVar31 = local_460;
                            }
                            *piVar12 = *piVar12 + iVar31;
                        }
                        this_00 = (GameToken*)&this_00[1].m_status;
                        bVar33 = this_00 == pGVar18;
                    }
                    iVar8 = 9;
                    if (bVar33) {
                    LAB_100555c82:
                        pAVar15 = local_4f0;
                        pAVar14 = (AchievementRequirementSpec*)local_4f0->data();
                        local_488 = (AchievementRequirementSpec*)pAVar15->end();
                        bVar33 = pAVar14 == local_488;
                        while (!bVar33) {
                            uVar7 = pAVar14->GetX();
                            if (uVar32 == uVar7) {
                                local_480 = (AchievementRequirementSpec*)CONCAT71(local_480._1_7_, bVar33);
                                iVar8 = pAVar14->GetStatus();
                                pAVar15 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                                                 std::default_delete<LoadingScreenScript::AnimLayer>>,
                                                 eastl::allocator>*)pAVar14->second();
                                piVar12 = (int*)pAVar15->data();
                                piVar29 = (int*)pAVar15->end();
                                iVar31 = 0;
                                pAVar13 = local_480;
                                uVar32 = local_468;
                                for (; local_480 = pAVar13, local_468 = uVar32, piVar12 != piVar29;
                                     piVar12 = piVar12 + 1) {
                                    pCVar23 = (ConfigProvider*)local_4a8->GetDomain();
                                    uVar19 = pCVar23->GetVarBitType(*piVar12);
                                    iVar9 = (*(code*)local_490->field_0[4])(local_490, uVar19);
                                    iVar31 = iVar31 + iVar9;
                                    pAVar13 = local_480;
                                    uVar32 = local_468;
                                }
                                if (iVar31 < iVar8) {
                                    piVar12 = (int*)eastl::vector<
                                        int,
                                        eastl::fixed_vector_allocator<4ul, 127ul, 4ul, 0ul, true, eastl::allocator>>::
                                    operator[]((vector<int, eastl::fixed_vector_allocator<4ul, 127ul, 4ul, 0ul, true,
                                                                                          eastl::allocator>>*)local_458,
                                               uVar32);
                                    iVar31 = (iVar31 * local_460) / iVar8;
                                } else {
                                    local_45c = local_45c + 1;
                                    if (local_45c == local_46c) {
                                        pAVar25 = (AchievementType*)local_e0;
                                        puVar24 = (undefined1*)
                                            eastl::vector<bool, eastl::fixed_vector_allocator<1ul, 127ul, 1ul, 0ul,
                                                                                              true, eastl::allocator>>::
                                            operator[](
                                                (vector<bool, eastl::fixed_vector_allocator<1ul, 127ul, 1ul, 0ul, true,
                                                                                            eastl::allocator>>*)pAVar25,
                                                uVar32);
                                        *puVar24 = 1;
                                        cVar6 =
                                            AreGroupsCompleted(pAVar25, (fixed_vector*)local_e0, local_478->field_664);
                                        if (cVar6 != '\0') {
                                            iVar8 = 1;
                                            if (((ulong)pAVar13 & 1) == 0)
                                                goto LAB_100556500;
                                            goto LAB_100555e3b;
                                        }
                                    }
                                    piVar12 = (int*)eastl::vector<
                                        int,
                                        eastl::fixed_vector_allocator<4ul, 127ul, 4ul, 0ul, true, eastl::allocator>>::
                                    operator[]((vector<int, eastl::fixed_vector_allocator<4ul, 127ul, 4ul, 0ul, true,
                                                                                          eastl::allocator>>*)local_458,
                                               uVar32);
                                    iVar31 = local_460;
                                }
                                *piVar12 = *piVar12 + iVar31;
                            }
                            pAVar14 = pAVar14 + 1;
                            bVar33 = pAVar14 == local_488;
                        }
                        iVar8 = 13;
                        if (bVar33) {
                        LAB_100555e3b:
                            pAVar15 = local_4e8;
                            pLVar20 = (LightType*)local_4e8->data();
                            pLVar21 = (LightType*)pAVar15->end();
                            for (; pLVar20 != pLVar21; pLVar20 = (LightType*)&pLVar20->field_72) {
                                uVar7 = pLVar20->GetX();
                                if (local_468 == uVar7) {
                                    pCVar23 = (ConfigProvider*)local_4a8->GetDomain();
                                    pVVar3 = VarDomainType::PLAYER;
                                    iVar31 = pLVar20->GetID(0);
                                    pCVar23->GetVarType(pVVar3, iVar31);
                                    pVVar22 = (VarValue*)(*(code*)local_490->field_0[2])();
                                    uVar7 = pVVar22->GetInt();
                                    bVar5 = pLVar20->GetAmplitude();
                                    iVar31 = pLVar20->GetStatus();
                                    if (iVar31 <= (int)(uVar7 >> (bVar5 & 31) & 1)) {
                                        local_45c = local_45c + 1;
                                        if (local_45c == local_46c) {
                                            pAVar25 = (AchievementType*)local_e0;
                                            puVar24 = (undefined1*)eastl::vector<
                                                bool, eastl::fixed_vector_allocator<1ul, 127ul, 1ul, 0ul, true,
                                                                                    eastl::allocator>>::
                                            operator[](
                                                (vector<bool, eastl::fixed_vector_allocator<1ul, 127ul, 1ul, 0ul, true,
                                                                                            eastl::allocator>>*)pAVar25,
                                                local_468);
                                            *puVar24 = 1;
                                            cVar6 = AreGroupsCompleted(pAVar25, (fixed_vector*)local_e0,
                                                                       local_478->field_664);
                                            if (cVar6 != '\0') {
                                                iVar8 = 1;
                                                goto LAB_100555f9a;
                                            }
                                        }
                                        piVar12 = (int*)
                                            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 127ul, 4ul, 0ul, true,
                                                                                             eastl::allocator>>::
                                            operator[](
                                                (vector<int, eastl::fixed_vector_allocator<4ul, 127ul, 4ul, 0ul, true,
                                                                                           eastl::allocator>>*)
                                                    local_458,
                                                local_468);
                                        *piVar12 = *piVar12 + local_460;
                                    }
                                }
                            }
                            iVar8 = 17;
                        LAB_100555f9a:
                            uVar32 = local_468;
                            pAVar15 = local_4e0;
                            if (pLVar20 == pLVar21) {
                                pLVar20 = (LightType*)local_4e0->data();
                                pLVar21 = (LightType*)pAVar15->end();
                                for (; pLVar20 != pLVar21; pLVar20 = (LightType*)&pLVar20->field_72) {
                                    uVar7 = pLVar20->GetX();
                                    if (uVar32 == uVar7) {
                                        pCVar23 = (ConfigProvider*)local_4a8->GetDomain();
                                        iVar31 = pLVar20->GetID(0);
                                        pCVar23->GetVarBitType(iVar31);
                                        uVar7 = (*(code*)local_490->field_0[4])();
                                        bVar5 = pLVar20->GetAmplitude();
                                        iVar31 = pLVar20->GetStatus();
                                        if (iVar31 <= (int)(uVar7 >> (bVar5 & 31) & 1)) {
                                            local_45c = local_45c + 1;
                                            if (local_45c == local_46c) {
                                                pAVar25 = (AchievementType*)local_e0;
                                                puVar24 = (undefined1*)eastl::vector<
                                                    bool, eastl::fixed_vector_allocator<1ul, 127ul, 1ul, 0ul, true,
                                                                                        eastl::allocator>>::
                                                operator[](
                                                    (vector<bool, eastl::fixed_vector_allocator<
                                                                      1ul, 127ul, 1ul, 0ul, true, eastl::allocator>>*)
                                                        pAVar25,
                                                    local_468);
                                                *puVar24 = 1;
                                                cVar6 = AreGroupsCompleted(pAVar25, (fixed_vector*)local_e0,
                                                                           local_478->field_664);
                                                if (cVar6 != '\0') {
                                                    iVar8 = 1;
                                                    pAVar15 = local_4d8;
                                                    uVar32 = local_468;
                                                    goto joined_r0x000100556115;
                                                }
                                            }
                                            piVar12 = (int*)
                                                eastl::vector<int, eastl::fixed_vector_allocator<
                                                                       4ul, 127ul, 4ul, 0ul, true, eastl::allocator>>::
                                                operator[](
                                                    (vector<int, eastl::fixed_vector_allocator<
                                                                     4ul, 127ul, 4ul, 0ul, true, eastl::allocator>>*)
                                                        local_458,
                                                    local_468);
                                            *piVar12 = *piVar12 + local_460;
                                        }
                                        uVar32 = local_468;
                                    }
                                }
                                iVar8 = 19;
                                pAVar15 = local_4d8;
                            joined_r0x000100556115:
                                local_4d8 = pAVar15;
                                if (pLVar20 == pLVar21) {
                                    pAVar14 = (AchievementRequirementSpec*)pAVar15->data();
                                    pAVar13 = (AchievementRequirementSpec*)pAVar15->end();
                                    for (; pAVar14 != pAVar13; pAVar14 = pAVar14 + 1) {
                                        uVar7 = pAVar14->GetX();
                                        if (uVar32 == uVar7) {
                                            pCVar23 = (ConfigProvider*)local_4a8->GetDomain();
                                            iVar31 = pAVar14->GetID(0);
                                            this_01 =
                                                ConfigProvider::GetConfig<QuestType>(pCVar23, iVar31, (DataStatus**)0);
                                            this_02 = (QuestType*)shared_ptr<QuestType>::operator->(
                                                (shared_ptr<QuestType>*)this_01);
                                            cVar6 = this_02->FinishedQuest(local_490);
                                            bVar33 = true;
                                            if (cVar6 == '\0') {
                                            LAB_100556210:
                                                if (!bVar33) {
                                                    iVar8 = 1;
                                                    pAVar15 = local_4d0;
                                                    goto joined_r0x00010055624b;
                                                }
                                            } else {
                                                local_45c = local_45c + 1;
                                                if (local_45c == local_46c) {
                                                    pAVar25 = (AchievementType*)local_e0;
                                                    puVar24 = (undefined1*)eastl::vector<
                                                        bool, eastl::fixed_vector_allocator<1ul, 127ul, 1ul, 0ul, true,
                                                                                            eastl::allocator>>::
                                                    operator[](
                                                        (vector<bool,
                                                                eastl::fixed_vector_allocator<1ul, 127ul, 1ul, 0ul,
                                                                                              true, eastl::allocator>>*)
                                                            pAVar25,
                                                        uVar32);
                                                    *puVar24 = 1;
                                                    cVar6 = AreGroupsCompleted(pAVar25, (fixed_vector*)local_e0,
                                                                               local_478->field_664);
                                                    if (cVar6 != '\0') {
                                                        bVar33 = false;
                                                        goto LAB_100556210;
                                                    }
                                                }
                                                piVar12 = (int*)eastl::vector<
                                                    int, eastl::fixed_vector_allocator<4ul, 127ul, 4ul, 0ul, true,
                                                                                       eastl::allocator>>::
                                                operator[](
                                                    (vector<int, eastl::fixed_vector_allocator<
                                                                     4ul, 127ul, 4ul, 0ul, true, eastl::allocator>>*)
                                                        local_458,
                                                    uVar32);
                                                *piVar12 = *piVar12 + local_460;
                                            }
                                        }
                                    }
                                    iVar8 = 21;
                                    pAVar15 = local_4d0;
                                joined_r0x00010055624b:
                                    local_4d0 = pAVar15;
                                    if (pAVar14 == pAVar13) {
                                        pAVar14 = (AchievementRequirementSpec*)pAVar15->data();
                                        pAVar13 = (AchievementRequirementSpec*)pAVar15->end();
                                        if (pAVar14 == pAVar13) {
                                            local_4a0 = (GameToken*)((ulong)local_4a0._4_4_ << 32);
                                        } else {
                                            local_4a0 = (GameToken*)((ulong)local_4a0._4_4_ << 32);
                                            local_488 = pAVar13;
                                            do {
                                                local_468 = local_468 & 18446744073709551360;
                                                uVar7 = pAVar14->GetX();
                                                if (uVar32 == uVar7) {
                                                    local_480 = pAVar14;
                                                    local_520[0] = pAVar14->GetID(0);
                                                    eastl::hashtable<
                                                        int, eastl::pair<int const, int>, BucketAllocatorEASTL,
                                                        eastl::use_first<eastl::pair<int const, int>>,
                                                        eastl::equal_to<int>, eastl::hash<int>,
                                                        eastl::mod_range_hashing, eastl::default_ranged_hash,
                                                        eastl::prime_rehash_policy, false, true, true>::find(local_530);
                                                    eastl::hashtable<
                                                        int,
                                                        eastl::pair<int const, oldscape::highlight::HighlightedGroup>,
                                                        eastl::allocator,
                                                        eastl::use_first<eastl::pair<
                                                            int const, oldscape::highlight::HighlightedGroup>>,
                                                        eastl::equal_to<int>, eastl::hash<int>,
                                                        eastl::mod_range_hashing, eastl::default_ranged_hash,
                                                        eastl::prime_rehash_policy, false, true, true>::end();
                                                    bVar33 = eastl::operator!=((eastl*)local_530,
                                                                               (hashtable_iterator_base*)local_520,
                                                                               extraout_RDX);
                                                    pAVar14 = local_480;
                                                    if (bVar33) {
                                                        lVar26 = local_530->HeapBeginPtr();
                                                        iVar31 = *(int*)(lVar26 + 4);
                                                        pAVar14 = local_480;
                                                    } else {
                                                        iVar31 = local_480->GetID(0);
                                                        this_03 =
                                                            (shared_ptr<AchievementType>*)local_4a8->List(iVar31, 0);
                                                        pAVar25 =
                                                            (AchievementType*)shared_ptr<AchievementType>::operator->(
                                                                this_03);
                                                        iVar31 = GetProgress(pAVar25, local_4c0, local_490, local_494,
                                                                             local_4b0);
                                                        local_520[0] = pAVar14->GetID(0);
                                                        piVar12 = (int*)eastl::hash_map<int, int, eastl::hash<int>,
                                                                                        eastl::equal_to<int>,
                                                                                        BucketAllocatorEASTL, false>::
                                                        operator[](
                                                            (hash_map<int, int, eastl::hash<int>, eastl::equal_to<int>,
                                                                      BucketAllocatorEASTL, false>*)local_4b0,
                                                            local_520);
                                                        *piVar12 = iVar31;
                                                    }
                                                    if (iVar31 == -3) {
                                                        local_4a0._4_4_ = (uint)((ulong)local_4a0 >> 32);
                                                        local_4a0 =
                                                            (GameToken*)CONCAT44(local_4a0._4_4_, (int)local_4a0 + 1);
                                                    } else if (iVar31 == -2) {
                                                        local_45c = local_45c + 1;
                                                        if (local_46c <= local_45c) {
                                                            pAVar25 = (AchievementType*)local_e0;
                                                            puVar24 = (undefined1*)eastl::vector<
                                                                bool,
                                                                eastl::fixed_vector_allocator<1ul, 127ul, 1ul, 0ul,
                                                                                              true, eastl::allocator>>::
                                                            operator[]((vector<bool, eastl::fixed_vector_allocator<
                                                                                         1ul, 127ul, 1ul, 0ul, true,
                                                                                         eastl::allocator>>*)pAVar25,
                                                                       uVar32);
                                                            *puVar24 = 1;
                                                            cVar6 = AreGroupsCompleted(pAVar25, (fixed_vector*)local_e0,
                                                                                       local_478->field_664);
                                                            if (cVar6 != '\0') {
                                                                iVar8 = 1;
                                                                if ((local_468 & 1) == 0)
                                                                    goto LAB_100556500;
                                                                break;
                                                            }
                                                        }
                                                        piVar12 = (int*)eastl::vector<
                                                            int, eastl::fixed_vector_allocator<
                                                                     4ul, 127ul, 4ul, 0ul, true, eastl::allocator>>::
                                                        operator[](
                                                            (vector<int,
                                                                    eastl::fixed_vector_allocator<
                                                                        4ul, 127ul, 4ul, 0ul, true, eastl::allocator>>*)
                                                                local_458,
                                                            uVar32);
                                                        *piVar12 = *piVar12 + local_460;
                                                    } else if (0 < iVar31) {
                                                        piVar12 = (int*)eastl::vector<
                                                            int, eastl::fixed_vector_allocator<
                                                                     4ul, 127ul, 4ul, 0ul, true, eastl::allocator>>::
                                                        operator[](
                                                            (vector<int,
                                                                    eastl::fixed_vector_allocator<
                                                                        4ul, 127ul, 4ul, 0ul, true, eastl::allocator>>*)
                                                                local_458,
                                                            uVar32);
                                                        *piVar12 = *piVar12 + (iVar31 * local_460) / 10000;
                                                    }
                                                }
                                                pAVar14 = pAVar14 + 1;
                                            } while (pAVar14 != local_488);
                                        }
                                        iVar8 = 0;
                                        if (0 < (int)local_4a0) {
                                            if (local_46c <= local_45c + (int)local_4a0) {
                                                puVar24 = (undefined1*)eastl::vector<
                                                    bool, eastl::fixed_vector_allocator<1ul, 127ul, 1ul, 0ul, true,
                                                                                        eastl::allocator>>::
                                                operator[](
                                                    (vector<bool, eastl::fixed_vector_allocator<
                                                                      1ul, 127ul, 1ul, 0ul, true, eastl::allocator>>*)
                                                        local_188,
                                                    uVar32);
                                                *puVar24 = 1;
                                            }
                                            iVar8 = 0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                LAB_100556500:
                    if (iVar8 != 0)
                        goto LAB_10055651a;
                    uVar32 = uVar32 + 1;
                } while (uVar32 != local_500);
            }
            iVar8 = 2;
        LAB_10055651a:
            iVar31 = -2;
            if (iVar8 == 2) {
                pAVar25 = (AchievementType*)local_230;
                lVar26 = pAVar25->size();
                if (lVar26 != 0) {
                    uVar32 = 0;
                    do {
                        pbVar27 = (byte*)eastl::vector<
                            bool, eastl::fixed_vector_allocator<1ul, 127ul, 1ul, 0ul, true, eastl::allocator>>::
                        operator[](
                            (vector<bool, eastl::fixed_vector_allocator<1ul, 127ul, 1ul, 0ul, true, eastl::allocator>>*)
                                local_e0,
                            uVar32);
                        bVar5 = *pbVar27;
                        pbVar27 = (byte*)eastl::vector<
                            bool, eastl::fixed_vector_allocator<1ul, 127ul, 1ul, 0ul, true, eastl::allocator>>::
                        operator[](
                            (vector<bool, eastl::fixed_vector_allocator<1ul, 127ul, 1ul, 0ul, true, eastl::allocator>>*)
                                local_188,
                            uVar32);
                        bVar1 = *pbVar27;
                        pbVar27 = (byte*)eastl::vector<
                            bool, eastl::fixed_vector_allocator<1ul, 127ul, 1ul, 0ul, true, eastl::allocator>>::
                        operator[](
                            (vector<bool, eastl::fixed_vector_allocator<1ul, 127ul, 1ul, 0ul, true, eastl::allocator>>*)
                                local_230,
                            uVar32);
                        *pbVar27 = bVar1 | bVar5;
                        uVar32 = uVar32 + 1;
                        pAVar25 = (AchievementType*)local_230;
                        uVar28 = local_230->size();
                    } while (uVar32 < uVar28);
                }
                cVar6 = AreGroupsCompleted(pAVar25, (fixed_vector*)local_230, local_478->field_664);
                pPVar4 = local_490;
                iVar31 = -3;
                if ((cVar6 == '\0') && (cVar6 = InGracePeriod(local_478, local_494), cVar6 == '\0')) {
                    cVar6 = PrereqsAreComplete(local_478, local_4c0, pPVar4, local_494, local_4b0);
                    if (cVar6 == '\0') {
                        puVar30 = (undefined4*)eastl::hash_map<
                            int, int, eastl::hash<int>, eastl::equal_to<int>, BucketAllocatorEASTL,
                            false>::operator[]((hash_map<int, int, eastl::hash<int>, eastl::equal_to<int>,
                                                         BucketAllocatorEASTL, false>*)local_4b0,
                                               &local_478->field_32);
                        *puVar30 = 4294967295;
                        iVar31 = -1;
                    } else {
                        uVar11 = local_458->size();
                        uVar7 = local_478->field_664;
                        piVar12 = (int*)local_458->HeapBeginPtr();
                        piVar29 = (int*)local_458->end();
                        if (uVar7 == uVar11) {
                            iVar31 = 0;
                            for (; piVar12 != piVar29; piVar12 = piVar12 + 1) {
                                iVar31 = iVar31 + *piVar12;
                            }
                        } else {
                            eastl::sort<int*, eastl::greater<int>>(piVar12, piVar29);
                            if ((int)local_478->field_664 < 1) {
                                iVar31 = 0;
                            } else {
                                uVar32 = 0;
                                iVar31 = 0;
                                do {
                                    piVar12 = (int*)eastl::vector<
                                        int,
                                        eastl::fixed_vector_allocator<4ul, 127ul, 4ul, 0ul, true, eastl::allocator>>::
                                    operator[]((vector<int, eastl::fixed_vector_allocator<4ul, 127ul, 4ul, 0ul, true,
                                                                                          eastl::allocator>>*)local_458,
                                               uVar32);
                                    iVar31 = iVar31 + *piVar12;
                                    uVar32 = uVar32 + 1;
                                } while ((long)uVar32 < (long)(int)local_478->field_664);
                            }
                        }
                    }
                }
            }
            eastl::fixed_vector<int, 127ul, true, eastl::allocator>::~fixed_vector(local_458);
            eastl::fixed_vector<bool, 127ul, true, eastl::allocator>::~fixed_vector(local_230);
            eastl::fixed_vector<bool, 127ul, true, eastl::allocator>::~fixed_vector(local_188);
            eastl::fixed_vector<bool, 127ul, true, eastl::allocator>::~fixed_vector(local_e0);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return iVar31;
    }

    // 0x100556940, 128 bytes, placed by class name
    // AchievementType::AreGroupsCompleted(eastl::fixed_vector<bool, 127ul, true, eastl::allocator> const&, int)
    ulong AchievementType::AreGroupsCompleted(fixed_vector* param_1, int param_2) {
        int iVar1;
        byte* pbVar2;
        ulong uVar3;
        undefined8 unaff_R12;
        ulong uVar4;
        uint uVar5;

        iVar1 = param_1->size();
        uVar4 = CONCAT71((int7)((ulong)unaff_R12 >> 8), 0 < iVar1);
        if (0 < iVar1) {
            pbVar2 = (byte*)eastl::
                vector<bool, eastl::fixed_vector_allocator<1ul, 127ul, 1ul, 0ul, true, eastl::allocator>>::operator[](
                    (vector<bool, eastl::fixed_vector_allocator<1ul, 127ul, 1ul, 0ul, true, eastl::allocator>>*)param_1,
                    0);
            uVar5 = (uint)*pbVar2;
            if ((uint)*pbVar2 != param_2) {
                uVar3 = 1;
                do {
                    iVar1 = param_1->size();
                    uVar4 = CONCAT71((int7)(uVar4 >> 8), (long)uVar3 < (long)iVar1);
                    if ((long)iVar1 <= (long)uVar3)
                        break;
                    pbVar2 = (byte*)eastl::vector<
                        bool, eastl::fixed_vector_allocator<1ul, 127ul, 1ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<bool, eastl::fixed_vector_allocator<1ul, 127ul, 1ul, 0ul, true, eastl::allocator>>*)
                            param_1,
                        uVar3);
                    uVar5 = uVar5 + *pbVar2;
                    uVar3 = uVar3 + 1;
                } while (uVar5 != param_2);
            }
        }
        return uVar4 & 4294967295;
    }

    // 0x100556aa0, 2944 bytes, placed by class name
    // AchievementType::PrereqsAreComplete(PlayerGameState&, PlayerVarDomain&, int, eastl::hash_map<int, int, eastl::hash<int>, eastl::equal_to<int>, BucketAllocatorEASTL, false>&)
    ulong AchievementType::PrereqsAreComplete(PlayerGameState* param_1, PlayerVarDomain* param_2, int param_3,
                                              hash_map* param_4) {
        VarDomainType* pVVar1;
        ModeGame* this_00;
        vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>* pvVar2;
        PlayerVarDomain* this_01;
        byte bVar3;
        char cVar4;
        bool bVar5;
        int iVar6;
        int iVar7;
        uint uVar8;
        undefined4 uVar9;
        uint uVar10;
        uint uVar11;
        int* piVar12;
        AchievementRequirementSpec* pAVar13;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* pAVar14;
        ConfigProvider* pCVar15;
        undefined4* puVar16;
        GameToken* pGVar17;
        GameToken* pGVar18;
        int* piVar19;
        ConfigProvider* pCVar20;
        ConfigProvider* this_02;
        undefined8 uVar21;
        LightType* pLVar22;
        LightType* pLVar23;
        VarValue* pVVar24;
        AchievementRequirementSpec* pAVar25;
        shared_ptr* this_03;
        QuestType* this_04;
        long lVar26;
        shared_ptr<AchievementType>* this_05;
        AchievementType* this_06;
        hashtable_iterator_base* extraout_RDX;
        ulong uVar27;
        int iVar28;
        Array<int, eastl::allocator>* this_07;
        undefined1 local_310[16];
        undefined4 local_300[4];
        ModeGame* local_2f0;
        vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>* local_2e8;
        PlayerVarDomain* local_2e0;
        vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>* local_2d8;
        ConfigProvider* local_2d0;
        PlayerGameState* local_2c8;
        vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>* local_2c0;
        hash_map* local_2b8;
        vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>* local_2b0;
        int local_2a4;
        VarTypeList* local_2a0;
        Array<int, eastl::allocator>* local_298;
        AchievementRequirementSpec* local_290;
        ConfigProvider* local_288;
        PlayerVarDomain* local_280;
        int local_274;
        ConfigProvider* local_270;
        int local_264;
        fixed_vector<int, 128ul, true, eastl::allocator> local_260[552];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (field_128 == '\0') {
            if ((int)field_464 < 1) {
                uVar27 = CONCAT71((int7)((ulong)this >> 8), 1);
            } else {
                local_2a0 = (VarTypeList*)field_24;
                local_2c8 = param_1;
                local_2b8 = param_4;
                local_2a4 = param_3;
                eastl::fixed_vector<int, 128ul, true, eastl::allocator>::fixed_vector(local_260);
                this_07 = (Array<int, eastl::allocator>*)&field_440;
                local_288 = (ConfigProvider*)this;
                this_07->end();
                eastl::vector<int, eastl::fixed_vector_allocator<4ul, 128ul, 4ul, 0ul, true, eastl::allocator>>::resize(
                    (ulong)local_260);
                iVar6 = this_07->end();
                if (0 < iVar6) {
                    local_2c0 =
                        (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                                eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>*)&local_288
                            ->field_216;
                    local_2f0 = (ModeGame*)&local_288->field_248;
                    local_2e8 =
                        (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                                eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>*)&local_288
                            ->field_280;
                    local_2e0 = (PlayerVarDomain*)&local_288->field_312;
                    local_2d8 =
                        (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                                eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>*)&local_288
                            ->field_344;
                    local_2d0 = (ConfigProvider*)&local_288->field_408;
                    local_2b0 =
                        (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                                eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>*)&local_288
                            ->field_376;
                    this = (AchievementType*)0;
                    local_298 = this_07;
                    local_280 = param_2;
                    do {
                        piVar12 = (int*)Array<int, eastl::allocator>::operator[](this_07, (ulong)this);
                        local_274 = *piVar12;
                        iVar6 = eastl::vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                                              eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true,
                                                                            eastl::allocator>>::size(local_2c0);
                        local_264 = 0;
                        local_270 = (ConfigProvider*)this;
                        if ((long)this < (long)iVar6) {
                            this = (AchievementType*)eastl::vector<
                                eastl::vector<AchievementRequirementSpec, eastl::allocator>, eastl::allocator>::
                            operator[](
                                (vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>, eastl::allocator>*)
                                    local_2c0,
                                (ulong)this);
                            pAVar13 = (AchievementRequirementSpec*)HeapBeginPtr();
                            local_290 = (AchievementRequirementSpec*)end();
                            uVar8 = 5;
                            if (pAVar13 == local_290) {
                                local_264 = 0;
                            } else {
                                local_264 = 0;
                                do {
                                    iVar6 = pAVar13->GetStatus();
                                    pAVar14 =
                                        (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                                               std::default_delete<LoadingScreenScript::AnimLayer>>,
                                               eastl::allocator>*)pAVar13->second();
                                    this = (AchievementType*)pAVar14->data();
                                    pCVar15 = (ConfigProvider*)pAVar14->end();
                                    iVar28 = 0;
                                    if ((ConfigProvider*)this != pCVar15) {
                                        iVar28 = 0;
                                        do {
                                            iVar7 = local_2c8->GetStatLevelMaxActual(
                                                *(uint*)&((ConfigProvider*)this)->field_0);
                                            iVar28 = iVar28 + iVar7;
                                            this = (AchievementType*)((long)&((ConfigProvider*)this)->field_0 + 4);
                                        } while ((ConfigProvider*)this != pCVar15);
                                    }
                                    param_2 = local_280;
                                    if ((iVar6 <= iVar28) && (local_264 = local_264 + 1, local_264 == local_274)) {
                                        this = (AchievementType*)local_260;
                                        puVar16 = (undefined4*)
                                            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 128ul, 4ul, 0ul, true,
                                                                                             eastl::allocator>>::
                                            operator[](
                                                (vector<int, eastl::fixed_vector_allocator<4ul, 128ul, 4ul, 0ul, true,
                                                                                           eastl::allocator>>*)this,
                                                (ulong)local_270);
                                        *puVar16 = 1;
                                        bVar3 = PrereqCompletionTest((AchievementType*)local_288, (fixed_vector*)this);
                                        uVar8 = (uint)(bVar3 ^ 1) * 4 + 1;
                                        if (uVar8 != 0)
                                            break;
                                    }
                                    uVar8 = 5;
                                    pAVar13 = pAVar13 + 1;
                                } while (pAVar13 != local_290);
                            }
                            this_07 = local_298;
                            if (uVar8 == 5)
                                goto LAB_100556d6a;
                        } else {
                        LAB_100556d6a:
                            this_00 = local_2f0;
                            iVar6 = local_2f0->size();
                            if ((long)local_270 < (long)iVar6) {
                                this = (AchievementType*)eastl::vector<
                                    eastl::vector<AchievementRequirementSpec, eastl::allocator>, eastl::allocator>::
                                operator[]((vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>,
                                                   eastl::allocator>*)this_00,
                                           (ulong)local_270);
                                pGVar17 = (GameToken*)HeapBeginPtr();
                                pGVar18 = (GameToken*)end();
                                for (; pGVar17 != pGVar18; pGVar17 = (GameToken*)&pGVar17[1].m_status) {
                                    uVar9 = pGVar17->GetStatus();
                                    local_290 = (AchievementRequirementSpec*)CONCAT44(local_290._4_4_, uVar9);
                                    pAVar14 =
                                        (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                                               std::default_delete<LoadingScreenScript::AnimLayer>>,
                                               eastl::allocator>*)pGVar17->second();
                                    piVar12 = (int*)pAVar14->data();
                                    piVar19 = (int*)pAVar14->end();
                                    this = (AchievementType*)0;
                                    if (piVar12 != piVar19) {
                                        this = (AchievementType*)0;
                                        do {
                                            pCVar15 = (ConfigProvider*)local_2a0->GetDomain();
                                            uVar21 = pCVar15->GetVarType(VarDomainType::PLAYER, *piVar12);
                                            pVVar24 = (VarValue*)(*(code*)local_280->field_0[2])(local_280, uVar21);
                                            iVar6 = pVVar24->GetInt();
                                            this = (AchievementType*)(ulong)(uint)((int)this + iVar6);
                                            piVar12 = piVar12 + 1;
                                        } while (piVar12 != piVar19);
                                    }
                                    param_2 = local_280;
                                    if (((int)local_290 <= (int)this) &&
                                        (local_264 = local_264 + 1, local_264 == local_274)) {
                                        this = (AchievementType*)local_260;
                                        puVar16 = (undefined4*)
                                            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 128ul, 4ul, 0ul, true,
                                                                                             eastl::allocator>>::
                                            operator[](
                                                (vector<int, eastl::fixed_vector_allocator<4ul, 128ul, 4ul, 0ul, true,
                                                                                           eastl::allocator>>*)this,
                                                (ulong)local_270);
                                        *puVar16 = 1;
                                        bVar3 = PrereqCompletionTest((AchievementType*)local_288, (fixed_vector*)this);
                                        uVar8 = (uint)(bVar3 ^ 1) * 8 + 1;
                                        if (uVar8 != 0)
                                            goto LAB_100556ed4;
                                    }
                                }
                                uVar8 = 9;
                            LAB_100556ed4:
                                this_07 = local_298;
                                if (uVar8 != 9)
                                    goto LAB_100557560;
                            }
                            pvVar2 = local_2e8;
                            iVar6 =
                                eastl::vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                                              eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true,
                                                                            eastl::allocator>>::size(local_2e8);
                            if ((long)local_270 < (long)iVar6) {
                                this = (AchievementType*)eastl::vector<
                                    eastl::vector<AchievementRequirementSpec, eastl::allocator>, eastl::allocator>::
                                operator[]((vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>,
                                                   eastl::allocator>*)pvVar2,
                                           (ulong)local_270);
                                pGVar17 = (GameToken*)HeapBeginPtr();
                                pGVar18 = (GameToken*)end();
                                for (; pGVar17 != pGVar18; pGVar17 = (GameToken*)&pGVar17[1].m_status) {
                                    uVar9 = pGVar17->GetStatus();
                                    local_290 = (AchievementRequirementSpec*)CONCAT44(local_290._4_4_, uVar9);
                                    pAVar14 =
                                        (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                                               std::default_delete<LoadingScreenScript::AnimLayer>>,
                                               eastl::allocator>*)pGVar17->second();
                                    pCVar15 = (ConfigProvider*)pAVar14->data();
                                    pCVar20 = (ConfigProvider*)pAVar14->end();
                                    iVar6 = 0;
                                    if (pCVar15 != pCVar20) {
                                        iVar6 = 0;
                                        do {
                                            this_02 = (ConfigProvider*)local_2a0->GetDomain();
                                            uVar21 = this_02->GetVarBitType(*(int*)&pCVar15->field_0);
                                            iVar28 = (*(code*)local_280->field_0[4])(local_280, uVar21);
                                            iVar6 = iVar6 + iVar28;
                                            pCVar15 = (ConfigProvider*)((long)&pCVar15->field_0 + 4);
                                        } while (pCVar15 != pCVar20);
                                    }
                                    this = (AchievementType*)local_288;
                                    this_07 = local_298;
                                    if ((int)local_290 <= iVar6) {
                                        local_264 = local_264 + 1;
                                        pCVar15 = (ConfigProvider*)this;
                                        if (local_264 == local_274) {
                                            puVar16 = (undefined4*)
                                                eastl::vector<int, eastl::fixed_vector_allocator<
                                                                       4ul, 128ul, 4ul, 0ul, true, eastl::allocator>>::
                                                operator[](
                                                    (vector<int, eastl::fixed_vector_allocator<
                                                                     4ul, 128ul, 4ul, 0ul, true, eastl::allocator>>*)
                                                        local_260,
                                                    (ulong)local_270);
                                            *puVar16 = 1;
                                            cVar4 = PrereqCompletionTest(this, (fixed_vector*)local_260);
                                            uVar8 = 13;
                                            if (cVar4 != '\0') {
                                                uVar8 = 1;
                                            }
                                            if (uVar8 != 0)
                                                goto LAB_100557049;
                                        }
                                    }
                                    this = (AchievementType*)pCVar15;
                                }
                                uVar8 = 13;
                            LAB_100557049:
                                param_2 = local_280;
                                if (uVar8 != 13)
                                    goto LAB_100557560;
                            }
                            this_01 = local_2e0;
                            iVar6 = local_2e0->size();
                            if ((long)local_270 < (long)iVar6) {
                                this = (AchievementType*)eastl::vector<
                                    eastl::vector<AchievementRequirementSpec, eastl::allocator>, eastl::allocator>::
                                operator[]((vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>,
                                                   eastl::allocator>*)this_01,
                                           (ulong)local_270);
                                pLVar22 = (LightType*)HeapBeginPtr();
                                pLVar23 = (LightType*)end();
                                for (; uVar8 = 17, pLVar22 != pLVar23; pLVar22 = (LightType*)&pLVar22->field_72) {
                                    pCVar15 = (ConfigProvider*)local_2a0->GetDomain();
                                    pVVar1 = VarDomainType::PLAYER;
                                    iVar6 = pLVar22->GetID(0);
                                    pCVar15->GetVarType(pVVar1, iVar6);
                                    pVVar24 = (VarValue*)(*(code*)local_280->field_0[2])();
                                    uVar10 = pVVar24->GetInt();
                                    bVar3 = pLVar22->GetAmplitude();
                                    this = (AchievementType*)0;
                                    uVar11 = pLVar22->GetStatus();
                                    this_07 = local_298;
                                    uVar8 = 0;
                                    if (((uVar10 >> (bVar3 & 31) & 1) != uVar11) &&
                                        (local_264 = local_264 + 1, local_264 == local_274)) {
                                        this = (AchievementType*)local_260;
                                        puVar16 = (undefined4*)
                                            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 128ul, 4ul, 0ul, true,
                                                                                             eastl::allocator>>::
                                            operator[](
                                                (vector<int, eastl::fixed_vector_allocator<4ul, 128ul, 4ul, 0ul, true,
                                                                                           eastl::allocator>>*)this,
                                                (ulong)local_270);
                                        *puVar16 = 1;
                                        bVar3 = PrereqCompletionTest((AchievementType*)local_288, (fixed_vector*)this);
                                        uVar8 = (uint)(bVar3 ^ 1) << 4 | 1;
                                    }
                                    if (uVar8 != 0)
                                        break;
                                }
                                param_2 = local_280;
                                if (uVar8 != 17)
                                    goto LAB_100557560;
                            }
                            pvVar2 = local_2d8;
                            iVar6 =
                                eastl::vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                                              eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true,
                                                                            eastl::allocator>>::size(local_2d8);
                            if ((long)local_270 < (long)iVar6) {
                                this = (AchievementType*)eastl::vector<
                                    eastl::vector<AchievementRequirementSpec, eastl::allocator>, eastl::allocator>::
                                operator[]((vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>,
                                                   eastl::allocator>*)pvVar2,
                                           (ulong)local_270);
                                pLVar22 = (LightType*)HeapBeginPtr();
                                pLVar23 = (LightType*)end();
                                for (; uVar8 = 19, pLVar22 != pLVar23; pLVar22 = (LightType*)&pLVar22->field_72) {
                                    pCVar15 = (ConfigProvider*)local_2a0->GetDomain();
                                    iVar6 = pLVar22->GetID(0);
                                    pCVar15->GetVarBitType(iVar6);
                                    uVar10 = (*(code*)local_280->field_0[4])();
                                    bVar3 = pLVar22->GetAmplitude();
                                    this = (AchievementType*)0;
                                    uVar11 = pLVar22->GetStatus();
                                    uVar8 = 0;
                                    if (((uVar10 >> (bVar3 & 31) & 1) != uVar11) &&
                                        (local_264 = local_264 + 1, local_264 == local_274)) {
                                        this = (AchievementType*)local_260;
                                        puVar16 = (undefined4*)
                                            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 128ul, 4ul, 0ul, true,
                                                                                             eastl::allocator>>::
                                            operator[](
                                                (vector<int, eastl::fixed_vector_allocator<4ul, 128ul, 4ul, 0ul, true,
                                                                                           eastl::allocator>>*)this,
                                                (ulong)local_270);
                                        *puVar16 = 1;
                                        cVar4 = PrereqCompletionTest((AchievementType*)local_288, (fixed_vector*)this);
                                        uVar8 = 19;
                                        if (cVar4 != '\0') {
                                            uVar8 = 1;
                                        }
                                    }
                                    if (uVar8 != 0)
                                        break;
                                }
                                param_2 = local_280;
                                if (uVar8 != 19)
                                    goto LAB_100557560;
                            }
                            this = (AchievementType*)local_2d0;
                            iVar6 = local_2d0->size();
                            if ((long)local_270 < (long)iVar6) {
                                this = (AchievementType*)eastl::vector<
                                    eastl::vector<AchievementRequirementSpec, eastl::allocator>, eastl::allocator>::
                                operator[]((vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>,
                                                   eastl::allocator>*)this,
                                           (ulong)local_270);
                                pAVar13 = (AchievementRequirementSpec*)HeapBeginPtr();
                                pAVar25 = (AchievementRequirementSpec*)end();
                                for (; uVar8 = 21, pAVar13 != pAVar25; pAVar13 = pAVar13 + 1) {
                                    this = (AchievementType*)local_2a0->GetDomain();
                                    iVar6 = pAVar13->GetID(0);
                                    this_03 = ConfigProvider::GetConfig<QuestType>((ConfigProvider*)this, iVar6,
                                                                                   (DataStatus**)0);
                                    this_04 =
                                        (QuestType*)shared_ptr<QuestType>::operator->((shared_ptr<QuestType>*)this_03);
                                    cVar4 = this_04->FinishedQuest(local_280);
                                    uVar8 = 0;
                                    if ((cVar4 != '\0') && (local_264 = local_264 + 1, local_264 == local_274)) {
                                        puVar16 = (undefined4*)
                                            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 128ul, 4ul, 0ul, true,
                                                                                             eastl::allocator>>::
                                            operator[](
                                                (vector<int, eastl::fixed_vector_allocator<4ul, 128ul, 4ul, 0ul, true,
                                                                                           eastl::allocator>>*)
                                                    local_260,
                                                (ulong)local_270);
                                        *puVar16 = 1;
                                        cVar4 =
                                            PrereqCompletionTest((AchievementType*)local_288, (fixed_vector*)local_260);
                                        uVar8 = 21;
                                        if (cVar4 != '\0') {
                                            uVar8 = 1;
                                        }
                                    }
                                    if (uVar8 != 0)
                                        break;
                                }
                                param_2 = local_280;
                                if (uVar8 != 21)
                                    goto LAB_100557560;
                            }
                            iVar6 =
                                eastl::vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                                              eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true,
                                                                            eastl::allocator>>::size(local_2b0);
                            if ((long)local_270 < (long)iVar6) {
                                this = (AchievementType*)eastl::vector<
                                    eastl::vector<AchievementRequirementSpec, eastl::allocator>, eastl::allocator>::
                                operator[]((vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>,
                                                   eastl::allocator>*)local_2b0,
                                           (ulong)local_270);
                                pAVar13 = (AchievementRequirementSpec*)HeapBeginPtr();
                                local_290 = (AchievementRequirementSpec*)end();
                                if (pAVar13 != local_290) {
                                    do {
                                        local_300[0] = pAVar13->GetID(0);
                                        this = (AchievementType*)local_310;
                                        eastl::hashtable<
                                            int, eastl::pair<int const, int>, BucketAllocatorEASTL,
                                            eastl::use_first<eastl::pair<int const, int>>, eastl::equal_to<int>,
                                            eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                            eastl::prime_rehash_policy, false, true, true>::find((int*)this);
                                        eastl::hashtable<
                                            int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>,
                                            eastl::allocator,
                                            eastl::use_first<
                                                eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                                            eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                            true>::end();
                                        bVar5 = eastl::operator!=((eastl*)this, (hashtable_iterator_base*)local_300,
                                                                  extraout_RDX);
                                        if (bVar5) {
                                            lVar26 = HeapBeginPtr();
                                            iVar6 = *(int*)(lVar26 + 4);
                                        } else {
                                            this = (AchievementType*)local_288->field_24;
                                            iVar6 = pAVar13->GetID(0);
                                            this_05 = (shared_ptr<AchievementType>*)List(iVar6, 0);
                                            this_06 =
                                                (AchievementType*)shared_ptr<AchievementType>::operator->(this_05);
                                            iVar6 = GetProgress(this_06, local_2c8, param_2, local_2a4, local_2b8);
                                        }
                                        uVar8 = 0;
                                        if ((iVar6 + 3U < 2) && (local_264 = local_264 + 1, local_264 == local_274)) {
                                            this = (AchievementType*)local_260;
                                            puVar16 = (undefined4*)eastl::vector<
                                                int, eastl::fixed_vector_allocator<4ul, 128ul, 4ul, 0ul, true,
                                                                                   eastl::allocator>>::
                                            operator[](
                                                (vector<int, eastl::fixed_vector_allocator<4ul, 128ul, 4ul, 0ul, true,
                                                                                           eastl::allocator>>*)this,
                                                (ulong)local_270);
                                            *puVar16 = 1;
                                            cVar4 =
                                                PrereqCompletionTest((AchievementType*)local_288, (fixed_vector*)this);
                                            uVar8 = 23;
                                            if (cVar4 != '\0') {
                                                uVar8 = 1;
                                            }
                                        }
                                        if (uVar8 != 0)
                                            goto LAB_100557542;
                                        pAVar13 = pAVar13 + 1;
                                    } while (pAVar13 != local_290);
                                }
                                uVar8 = 23;
                            LAB_100557542:
                                this_07 = local_298;
                                if (uVar8 != 23)
                                    goto LAB_100557560;
                            }
                            uVar8 = 0;
                        }
                    LAB_100557560:
                        if (uVar8 != 0)
                            goto LAB_100557589;
                        this = (AchievementType*)((long)&local_270->field_0 + 1);
                        iVar6 = this_07->end();
                    } while ((long)this < (long)iVar6);
                }
                uVar8 = 2;
            LAB_100557589:
                uVar27 = CONCAT71((int7)((ulong)this >> 8), uVar8 != 2);
                eastl::fixed_vector<int, 128ul, true, eastl::allocator>::~fixed_vector(local_260);
            }
        } else {
            uVar27 = 0;
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar27 & 4294967295;
    }

    // 0x1005576c0, 128 bytes, placed by class name
    // AchievementType::PrereqCompletionTest(eastl::fixed_vector<int, 128ul, true, eastl::allocator> const&)
    ulong AchievementType::PrereqCompletionTest(fixed_vector* param_1) {
        int iVar1;
        uint* puVar2;
        int* piVar3;
        ulong uVar4;
        undefined8 unaff_R12;
        ulong uVar5;
        uint uVar6;

        iVar1 = param_1->size();
        uVar5 = CONCAT71((int7)((ulong)unaff_R12 >> 8), 0 < iVar1);
        if (0 < iVar1) {
            puVar2 = (uint*)eastl::
                vector<int, eastl::fixed_vector_allocator<4ul, 128ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                    (vector<int, eastl::fixed_vector_allocator<4ul, 128ul, 4ul, 0ul, true, eastl::allocator>>*)param_1,
                    0);
            uVar6 = *puVar2;
            if (uVar6 != field_464) {
                uVar4 = 1;
                do {
                    iVar1 = param_1->size();
                    uVar5 = CONCAT71((int7)(uVar5 >> 8), (long)uVar4 < (long)iVar1);
                    if ((long)iVar1 <= (long)uVar4)
                        break;
                    piVar3 = (int*)eastl::vector<
                        int, eastl::fixed_vector_allocator<4ul, 128ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 128ul, 4ul, 0ul, true, eastl::allocator>>*)
                            param_1,
                        uVar4);
                    uVar6 = uVar6 + *piVar3;
                    uVar4 = uVar4 + 1;
                } while (uVar6 != field_464);
            }
        }
        return uVar5 & 4294967295;
    }

    // 0x100557780, 144 bytes, placed by class name
    // AchievementType::PrereqsAreComplete(PlayerGameState&, PlayerVarDomain&, int)
    undefined4 AchievementType::PrereqsAreComplete(PlayerGameState* param_1, PlayerVarDomain* param_2, int param_3) {
        undefined4 uVar1;
        BucketAllocatorEASTL local_68[48];
        eastl local_38[8];

        eastl::destruct<oldscape::highlight::NpcUID*>(local_38, (NpcUID*)"EASTL hash_map", (NpcUID*)param_2);
        eastl::hash_map<int, int, eastl::hash<int>, eastl::equal_to<int>, BucketAllocatorEASTL, false>::hash_map(
            local_68);
        uVar1 = PrereqsAreComplete(this, param_1, param_2, param_3, (hash_map*)local_68);
        local_68->~hash_set();
        return uVar1;
    }

    // 0x1005578b0, 528 bytes, placed by class name
    // AchievementType::CalculateRuneScore(PlayerGameState&, PlayerVarDomain&, AchievementTypeList&)
    int AchievementType::CalculateRuneScore(PlayerGameState* param_1, PlayerVarDomain* param_2,
                                            AchievementTypeList* param_3) {
        bool bVar1;
        int iVar2;
        undefined4 uVar3;
        jag* this_00;
        AchievementType* pAVar4;
        undefined4* puVar5;
        int* piVar6;
        shared_ptr<AchievementType>* this_01;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* extraout_RDX_01;
        hashtable_iterator_base* phVar7;
        int iVar8;
        undefined1 auVar9[16];
        hash_map local_a8[48];
        equal_to local_78[16];
        int local_58[4];
        int local_3c;
        DataStatus* local_38;

        eastl::destruct<oldscape::highlight::NpcUID*>((eastl*)&local_38, (NpcUID*)"EASTL hash_map", (NpcUID*)param_3);
        eastl::hash_map<int, int, eastl::hash<int>, eastl::equal_to<int>, BucketAllocatorEASTL, false>::hash_map(
            (ulong)local_a8, (hash*)8192, local_78, (BucketAllocatorEASTL*)local_58);
        local_3c = param_3->GetMinMapX();
        if (local_3c != 0) {
            iVar8 = 0;
            do {
                local_58[0] = iVar8;
                eastl::hashtable<int, eastl::pair<int const, int>, BucketAllocatorEASTL,
                                 eastl::use_first<eastl::pair<int const, int>>, eastl::equal_to<int>, eastl::hash<int>,
                                 eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy,
                                 false, true, true>::find((int*)local_78);
                eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                                 eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                                 eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                 eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
                bVar1 = eastl::operator!=((eastl*)local_78, (hashtable_iterator_base*)local_58, extraout_RDX);
                if (!bVar1) {
                    auVar9 = param_3->List(iVar8, &local_38);
                    this_00 = auVar9._0_8_;
                    if (local_38 == (DataStatus*)DataStatus::READY) {
                        bVar1 = operator==(this_00, (shared_ptr*)PTR_NullConfigType_100ee6520, auVar9._8_8_);
                        if (!bVar1) {
                            pAVar4 = (AchievementType*)shared_ptr<AchievementType>::operator->(
                                (shared_ptr<AchievementType>*)this_00);
                            iVar2 = GetRuneScore(pAVar4);
                            if (iVar2 != 0) {
                                pAVar4 = (AchievementType*)shared_ptr<AchievementType>::operator->(
                                    (shared_ptr<AchievementType>*)this_00);
                                uVar3 = GetProgress(pAVar4, param_1, param_2, 0, local_a8);
                                local_58[0] = iVar8;
                                puVar5 = (undefined4*)eastl::hash_map<
                                    int, int, eastl::hash<int>, eastl::equal_to<int>, BucketAllocatorEASTL,
                                    false>::operator[]((hash_map<int, int, eastl::hash<int>, eastl::equal_to<int>,
                                                                 BucketAllocatorEASTL, false>*)local_a8,
                                                       local_58);
                                *puVar5 = uVar3;
                            }
                        }
                    }
                }
                iVar8 = iVar8 + 1;
            } while (local_3c != iVar8);
        }
        eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                         eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                         eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        iVar8 = 0;
        phVar7 = extraout_RDX_00;
        while (true) {
            bVar1 = eastl::operator!=((eastl*)local_78, (hashtable_iterator_base*)local_58, phVar7);
            if (!bVar1)
                break;
            piVar6 = (int*)local_78->HeapBeginPtr();
            if (piVar6[1] == -2) {
                this_01 = (shared_ptr<AchievementType>*)param_3->List(*piVar6, &local_38);
                pAVar4 = (AchievementType*)shared_ptr<AchievementType>::operator->(this_01);
                iVar2 = GetRuneScore(pAVar4);
                iVar8 = iVar8 + iVar2;
            }
            eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, true, false>::operator++(
                (hashtable_iterator<eastl::pair<int const, unsigned int>, true, false>*)local_78);
            phVar7 = extraout_RDX_01;
        }
        local_a8->~hash_set();
        return iVar8;
    }

    // 0x100557ac0, 208 bytes, placed by class name
    // AchievementType::GetNumPrereqGroups() const
    void AchievementType::GetNumPrereqGroups() {
        ulong uVar1;
        ulong uVar2;

        uVar1 = (&field_216)->size();
        uVar1 = eastl::max<unsigned long>(0, uVar1);
        uVar2 = (&field_248)->size();
        uVar1 = eastl::max<unsigned long>(uVar1, uVar2);
        uVar2 = (&field_280)->size();
        uVar1 = eastl::max<unsigned long>(uVar1, uVar2);
        uVar2 = (&field_312)->size();
        uVar1 = eastl::max<unsigned long>(uVar1, uVar2);
        uVar2 = (&field_344)->size();
        uVar1 = eastl::max<unsigned long>(uVar1, uVar2);
        uVar2 = (&field_376)->size();
        uVar1 = eastl::max<unsigned long>(uVar1, uVar2);
        uVar2 = (&field_408)->size();
        eastl::max<unsigned long>(uVar1, uVar2);
    }

    // 0x100557b90, 2080 bytes, placed by class name
    // AchievementType::IsPrereqGroupComplete(PlayerGameState&, PlayerVarDomain&, int, int) const
    ulong AchievementType::IsPrereqGroupComplete(PlayerGameState* param_1, PlayerVarDomain* param_2, int param_3,
                                                 int param_4) {
        undefined1* puVar1;
        bool bVar2;
        VarDomainType* pVVar3;
        PlayerGameState* this_00;
        PlayerVarDomain* pPVar4;
        char cVar5;
        int iVar6;
        undefined4 uVar7;
        int iVar8;
        uint uVar9;
        uint uVar10;
        int* piVar11;
        Layout* pLVar12;
        GameToken* this_01;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* pAVar13;
        uint* puVar14;
        uint* puVar15;
        int* piVar16;
        ConfigProvider* pCVar17;
        undefined8 uVar18;
        VarValue* pVVar19;
        LightType* pLVar20;
        AchievementRequirementSpec* this_02;
        shared_ptr* this_03;
        QuestType* this_04;
        VarTypeList* pVVar21;
        long lVar22;
        shared_ptr<AchievementType>* this_05;
        AchievementType* this_06;
        NpcUID* extraout_RDX;
        NpcUID* extraout_RDX_00;
        NpcUID* pNVar23;
        hashtable_iterator_base* extraout_RDX_01;
        undefined8 unaff_RBX;
        LightType* this_07;
        eastl* this_08;
        ulong uVar24;
        bool bVar25;
        byte bVar26;
        undefined1 auVar27[16];
        BucketAllocatorEASTL local_d8[48];
        eastl local_a8[16];
        undefined4 local_98[4];
        PlayerGameState* local_88;
        int local_7c;
        LightType* local_78;
        PlayerVarDomain* local_70;
        GameToken* local_68;
        AchievementType* local_60;
        ulong local_58;
        VarTypeList* local_50;
        LightType* local_48;
        int local_40;
        int local_3c;
        byte local_35;
        int local_34;

        if (field_128 != '\0') {
            uVar24 = 0;
            goto LAB_10055836f;
        }
        uVar24 = CONCAT71((int7)((ulong)unaff_RBX >> 8), 1);
        if ((int)field_464 < 1)
            goto LAB_10055836f;
        uVar24 = (ulong)param_4;
        local_88 = param_1;
        local_7c = param_3;
        local_40 = param_4;
        piVar11 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_440, uVar24);
        local_3c = *piVar11;
        local_50 = (VarTypeList*)field_24;
        local_60 = this;
        iVar6 = (&field_216)->size();
        local_34 = 0;
        local_58 = uVar24;
        if (param_4 < iVar6) {
            pLVar12 = (Layout*)eastl::
                vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>, eastl::allocator>::operator[](
                    (vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>, eastl::allocator>*)&field_216,
                    uVar24);
            this_01 = (GameToken*)
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(pLVar12);
            local_68 = (GameToken*)pLVar12->end();
            if (this_01 == local_68) {
                local_34 = 0;
                goto LAB_100557d2d;
            }
            local_34 = 0;
            bVar25 = false;
            local_70 = param_2;
            do {
                local_78 = (LightType*)CONCAT71(local_78._1_7_, bVar25);
                uVar7 = this_01->GetStatus();
                local_48 = (LightType*)CONCAT44(local_48._4_4_, uVar7);
                pAVar13 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                                 std::default_delete<LoadingScreenScript::AnimLayer>>,
                                 eastl::allocator>*)this_01->second();
                puVar14 = (uint*)pAVar13->data();
                puVar15 = (uint*)pAVar13->end();
                this_00 = local_88;
                this_07 = (LightType*)0;
                if (puVar14 != puVar15) {
                    this_07 = (LightType*)0;
                    do {
                        iVar6 = this_00->GetStatLevelMaxActual(*puVar14);
                        this_07 = (LightType*)(ulong)(uint)((int)this_07 + iVar6);
                        puVar14 = puVar14 + 1;
                    } while (puVar14 != puVar15);
                }
                if (((int)this_07 < (int)local_48) || (local_34 = local_34 + 1, local_34 != local_3c)) {
                    bVar25 = true;
                } else {
                    bVar25 = false;
                }
                param_2 = local_70;
                if (!bVar25) {
                    if (((ulong)local_78 & 1) != 0)
                        goto LAB_100557d2d;
                    goto LAB_10055836d;
                }
                this_01 = (GameToken*)&this_01[1].m_status;
                bVar25 = this_01 == local_68;
            } while (!bVar25);
            if (bVar25)
                goto LAB_100557d2d;
        LAB_10055836d:
            uVar24 = CONCAT71((int7)((ulong)this_07 >> 8), 1);
            goto LAB_10055836f;
        }
    LAB_100557d2d:
        puVar1 = &local_60->field_248;
        iVar6 = puVar1->size();
        if (local_40 < iVar6) {
            pLVar12 = (Layout*)eastl::
                vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>, eastl::allocator>::operator[](
                    (vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>, eastl::allocator>*)puVar1,
                    local_58);
            this_07 = (LightType*)
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(pLVar12);
            local_78 = (LightType*)pLVar12->end();
            bVar25 = this_07 == local_78;
            if (!bVar25) {
                local_70 = param_2;
                do {
                    local_35 = bVar25;
                    uVar7 = this_07->GetStatus();
                    local_68 = (GameToken*)CONCAT44(local_68._4_4_, uVar7);
                    local_48 = this_07;
                    pAVar13 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                                     std::default_delete<LoadingScreenScript::AnimLayer>>,
                                     eastl::allocator>*)this_07->second();
                    piVar11 = (int*)pAVar13->data();
                    piVar16 = (int*)pAVar13->end();
                    pPVar4 = local_70;
                    if (piVar11 == piVar16) {
                        if ((int)local_68 < 1)
                            goto LAB_100557e29;
                    LAB_100557e50:
                        bVar25 = true;
                    } else {
                        iVar6 = 0;
                        do {
                            pCVar17 = (ConfigProvider*)local_50->GetDomain();
                            uVar18 = pCVar17->GetVarType(VarDomainType::PLAYER, *piVar11);
                            pVVar19 = (VarValue*)(*(code*)pPVar4->field_0[2])(pPVar4, uVar18);
                            iVar8 = pVVar19->GetInt();
                            iVar6 = iVar6 + iVar8;
                            piVar11 = piVar11 + 1;
                        } while (piVar11 != piVar16);
                        if (iVar6 < (int)local_68)
                            goto LAB_100557e50;
                    LAB_100557e29:
                        local_34 = local_34 + 1;
                        if (local_34 != local_3c)
                            goto LAB_100557e50;
                        bVar25 = false;
                    }
                    param_2 = local_70;
                    if (!bVar25) {
                        this_07 = local_48;
                        if ((local_35 & 1) != 0)
                            goto LAB_100557e7c;
                        goto LAB_10055836d;
                    }
                    this_07 = (LightType*)&local_48->field_72;
                    bVar25 = this_07 == local_78;
                } while (!bVar25);
            }
            if (!bVar25)
                goto LAB_10055836d;
        }
    LAB_100557e7c:
        puVar1 = &local_60->field_280;
        iVar6 = puVar1->size();
        if (local_40 < iVar6) {
            pLVar12 = (Layout*)eastl::
                vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>, eastl::allocator>::operator[](
                    (vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>, eastl::allocator>*)puVar1,
                    local_58);
            this_07 = (LightType*)
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(pLVar12);
            local_78 = (LightType*)pLVar12->end();
            pVVar21 = local_50;
            bVar25 = this_07 == local_78;
            bVar26 = local_35;
            while (local_35 = bVar25, !(bool)local_35) {
                uVar7 = this_07->GetStatus();
                local_68 = (GameToken*)CONCAT44(local_68._4_4_, uVar7);
                local_48 = this_07;
                pAVar13 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                                 std::default_delete<LoadingScreenScript::AnimLayer>>,
                                 eastl::allocator>*)this_07->second();
                piVar11 = (int*)pAVar13->data();
                piVar16 = (int*)pAVar13->end();
                if (piVar11 == piVar16) {
                    if ((int)local_68 < 1)
                        goto LAB_100557f59;
                LAB_100557f70:
                    bVar25 = true;
                } else {
                    iVar6 = 0;
                    do {
                        pCVar17 = (ConfigProvider*)pVVar21->GetDomain();
                        uVar18 = pCVar17->GetVarBitType(*piVar11);
                        iVar8 = (*(code*)param_2->field_0[4])(param_2, uVar18);
                        iVar6 = iVar6 + iVar8;
                        piVar11 = piVar11 + 1;
                    } while (piVar11 != piVar16);
                    if (iVar6 < (int)local_68)
                        goto LAB_100557f70;
                LAB_100557f59:
                    local_34 = local_34 + 1;
                    if (local_34 != local_3c)
                        goto LAB_100557f70;
                    bVar25 = false;
                }
                if (!bVar25) {
                    this_07 = local_48;
                    if ((local_35 & 1) != 0)
                        goto LAB_100557f9c;
                    goto LAB_10055836d;
                }
                this_07 = (LightType*)&local_48->field_72;
                bVar26 = local_35;
                bVar25 = this_07 == local_78;
            }
            bVar25 = !(bool)local_35;
            local_35 = bVar26;
            if (bVar25)
                goto LAB_10055836d;
        }
    LAB_100557f9c:
        this_07 = (LightType*)&local_60->field_312;
        iVar6 = this_07->size();
        if (local_40 < iVar6) {
            pLVar12 = (Layout*)eastl::
                vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>, eastl::allocator>::operator[](
                    (vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>, eastl::allocator>*)this_07,
                    local_58);
            pLVar20 = (LightType*)
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(pLVar12);
            local_48 = (LightType*)pLVar12->end();
            bVar26 = pLVar20 == local_48;
            if (!(bool)bVar26) {
                do {
                    local_68 = (GameToken*)CONCAT71(local_68._1_7_, bVar26);
                    pCVar17 = (ConfigProvider*)local_50->GetDomain();
                    pVVar3 = VarDomainType::PLAYER;
                    iVar6 = pLVar20->GetID(0);
                    pCVar17->GetVarType(pVVar3, iVar6);
                    pVVar19 = (VarValue*)(*(code*)param_2->field_0[2])(param_2);
                    uVar9 = pVVar19->GetInt();
                    bVar26 = pLVar20->GetAmplitude();
                    this_07 = (LightType*)0;
                    uVar10 = pLVar20->GetStatus();
                    if (((uVar9 >> (bVar26 & 31) & 1) == uVar10) && (local_34 = local_34 + 1, local_34 == local_3c)) {
                        bVar25 = false;
                    } else {
                        bVar25 = true;
                    }
                    if (!bVar25) {
                        bVar26 = (byte)local_68;
                        break;
                    }
                    pLVar20 = (LightType*)&pLVar20->field_72;
                    bVar26 = pLVar20 == local_48;
                } while (!(bool)bVar26);
            }
            if ((bVar26 & 1) == 0)
                goto LAB_10055836d;
        }
        this_07 = (LightType*)&local_60->field_344;
        iVar6 = this_07->size();
        if (local_40 < iVar6) {
            pLVar12 = (Layout*)eastl::
                vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>, eastl::allocator>::operator[](
                    (vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>, eastl::allocator>*)this_07,
                    local_58);
            pLVar20 = (LightType*)
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(pLVar12);
            local_48 = (LightType*)pLVar12->end();
            bVar25 = pLVar20 == local_48;
            while (!bVar25) {
                pCVar17 = (ConfigProvider*)local_50->GetDomain();
                iVar6 = pLVar20->GetID(0);
                pCVar17->GetVarBitType(iVar6);
                uVar9 = (*(code*)param_2->field_0[4])(param_2);
                bVar26 = pLVar20->GetAmplitude();
                this_07 = (LightType*)0;
                uVar10 = pLVar20->GetStatus();
                if (((uVar9 >> (bVar26 & 31) & 1) == uVar10) && (local_34 = local_34 + 1, local_34 == local_3c)) {
                    bVar2 = false;
                } else {
                    bVar2 = true;
                }
                if (!bVar2)
                    break;
                pLVar20 = (LightType*)&pLVar20->field_72;
                bVar25 = pLVar20 == local_48;
            }
            if (!bVar25)
                goto LAB_10055836d;
        }
        puVar1 = &local_60->field_408;
        iVar6 = puVar1->size();
        pNVar23 = extraout_RDX;
        if (local_40 < iVar6) {
            pLVar12 = (Layout*)eastl::
                vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>, eastl::allocator>::operator[](
                    (vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>, eastl::allocator>*)puVar1,
                    local_58);
            this_02 = (AchievementRequirementSpec*)
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(pLVar12);
            auVar27 = pLVar12->end();
            pNVar23 = auVar27._8_8_;
            for (; bVar25 = this_02 != auVar27._0_8_, bVar25; this_02 = this_02 + 1) {
                pCVar17 = (ConfigProvider*)local_50->GetDomain();
                iVar6 = this_02->GetID(0);
                this_03 = ConfigProvider::GetConfig<QuestType>(pCVar17, iVar6, (DataStatus**)0);
                this_04 = (QuestType*)shared_ptr<QuestType>::operator->((shared_ptr<QuestType>*)this_03);
                cVar5 = this_04->FinishedQuest(param_2);
                if ((cVar5 == '\0') || (local_34 = local_34 + 1, local_34 != local_3c)) {
                    bVar2 = true;
                } else {
                    bVar2 = false;
                }
                pNVar23 = extraout_RDX_00;
                if (!bVar2)
                    break;
            }
            uVar24 = CONCAT71((int7)((ulong)this_02 >> 8), 1);
            if (bVar25)
                goto LAB_10055836f;
        }
        eastl::destruct<oldscape::highlight::NpcUID*>(local_a8, (NpcUID*)"EASTL hash_map", pNVar23);
        eastl::hash_map<int, int, eastl::hash<int>, eastl::equal_to<int>, BucketAllocatorEASTL, false>::hash_map(
            local_d8);
        puVar1 = &local_60->field_376;
        iVar6 = puVar1->size();
        if (local_40 < iVar6) {
            pLVar12 = (Layout*)eastl::
                vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>, eastl::allocator>::operator[](
                    (vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>, eastl::allocator>*)puVar1,
                    local_58);
            pVVar21 = (VarTypeList*)
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(pLVar12);
            local_50 = (VarTypeList*)pLVar12->end();
            if (pVVar21 == local_50)
                goto LAB_100558383;
            do {
                local_98[0] = pVVar21->GetID(0);
                this_08 = local_a8;
                eastl::hashtable<int, eastl::pair<int const, int>, BucketAllocatorEASTL,
                                 eastl::use_first<eastl::pair<int const, int>>, eastl::equal_to<int>, eastl::hash<int>,
                                 eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy,
                                 false, true, true>::find((int*)this_08);
                eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                                 eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                                 eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                 eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
                bVar25 = eastl::operator!=(this_08, (hashtable_iterator_base*)local_98, extraout_RDX_01);
                if (bVar25) {
                    lVar22 = this_08->HeapBeginPtr();
                    iVar6 = *(int*)(lVar22 + 4);
                } else {
                    this_08 = (eastl*)local_60->field_24;
                    iVar6 = pVVar21->GetID(0);
                    this_05 = (shared_ptr<AchievementType>*)this_08->List(iVar6, 0);
                    this_06 = (AchievementType*)shared_ptr<AchievementType>::operator->(this_05);
                    iVar6 = GetProgress(this_06, local_88, param_2, local_7c, (hash_map*)local_d8);
                }
                if (iVar6 + 3U < 2) {
                    local_34 = local_34 + 1;
                    uVar24 = CONCAT71((int7)((ulong)this_08 >> 8), 1);
                    if (local_34 != local_3c)
                        goto LAB_100558357;
                } else {
                LAB_100558357:
                    uVar24 = 0;
                }
            } while (((char)uVar24 == '\0') && (pVVar21 = (VarTypeList*)&pVVar21->field_72, pVVar21 != local_50));
        } else {
        LAB_100558383:
            uVar24 = 0;
        }
        local_d8->~hash_set();
    LAB_10055836f:
        return uVar24 & 4294967295;
    }

    // 0x1005583f0, 288 bytes, placed by class name
    // AchievementType::IsStatPrereqMet(PlayerGameState&, int, int)
    bool AchievementType::IsStatPrereqMet(PlayerGameState* param_1, int param_2, int param_3) {
        int iVar1;
        int iVar2;
        vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle, eastl::allocator>* this_00;
        vector<AchievementRequirementSpec, eastl::allocator>* this_01;
        GameToken* this_02;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* this_03;
        uint* puVar3;
        uint* puVar4;
        int iVar5;

        if ((param_2 < 0) || (iVar1 = (&field_216)->size(), iVar1 <= param_2)) {
            /* WARNING: Subroutine does not return */
            LogAssert("group > -1 && group < (int)m_statPrereqs.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "achievementtype/AchievementType.cpp",
                      1458, (char*)0);
        }
        if (-1 < param_3) {
            this_00 = (vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle, eastl::allocator>*)eastl::
                vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>, eastl::allocator>::operator[](
                    (vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>, eastl::allocator>*)&field_216,
                    (long)param_2);
            iVar1 = eastl::vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle, eastl::allocator>::size(
                this_00);
            if (param_3 < iVar1) {
                this_01 = (vector<AchievementRequirementSpec, eastl::allocator>*)eastl::
                    vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>, eastl::allocator>::operator[](
                        (vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>,
                                eastl::allocator>*)&field_216,
                        (long)param_2);
                this_02 = (GameToken*)eastl::vector<AchievementRequirementSpec, eastl::allocator>::operator[](
                    this_01, (long)param_3);
                iVar1 = this_02->GetStatus();
                this_03 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                                 std::default_delete<LoadingScreenScript::AnimLayer>>,
                                 eastl::allocator>*)this_02->second();
                puVar3 = (uint*)this_03->data();
                puVar4 = (uint*)this_03->end();
                if (puVar3 == puVar4) {
                    iVar5 = 0;
                } else {
                    iVar5 = 0;
                    do {
                        iVar2 = param_1->GetStatLevelMaxActual(*puVar3);
                        iVar5 = iVar5 + iVar2;
                        puVar3 = puVar3 + 1;
                    } while (puVar3 != puVar4);
                }
                return iVar1 <= iVar5;
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssert("index > -1 && index < (int)m_statPrereqs[group].size()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                  "achievementtype/AchievementType.cpp",
                  1460, (char*)0);
    }

    // 0x100558560, 320 bytes, placed by class name
    // AchievementType::IsVarpPrereqMet(PlayerVarDomain&, int, int)
    bool AchievementType::IsVarpPrereqMet(PlayerVarDomain* param_1, int param_2, int param_3) {
        int iVar1;
        int iVar2;
        vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle, eastl::allocator>* this_00;
        vector<AchievementRequirementSpec, eastl::allocator>* this_01;
        GameToken* this_02;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* this_03;
        int* piVar3;
        int* piVar4;
        ConfigProvider* this_04;
        undefined8 uVar5;
        VarValue* this_05;
        int iVar6;

        if ((param_2 < 0) || (iVar1 = (&field_248)->size(), iVar1 <= param_2)) {
            /* WARNING: Subroutine does not return */
            LogAssert("group > -1 && group < (int)m_varpPrereqs.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "achievementtype/AchievementType.cpp",
                      1475, (char*)0);
        }
        if (-1 < param_3) {
            this_00 = (vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle, eastl::allocator>*)eastl::
                vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>, eastl::allocator>::operator[](
                    (vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>, eastl::allocator>*)&field_248,
                    (long)param_2);
            iVar1 = eastl::vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle, eastl::allocator>::size(
                this_00);
            if (param_3 < iVar1) {
                this_01 = (vector<AchievementRequirementSpec, eastl::allocator>*)eastl::
                    vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>, eastl::allocator>::operator[](
                        (vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>,
                                eastl::allocator>*)&field_248,
                        (long)param_2);
                this_02 = (GameToken*)eastl::vector<AchievementRequirementSpec, eastl::allocator>::operator[](
                    this_01, (long)param_3);
                iVar1 = this_02->GetStatus();
                this_03 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                                 std::default_delete<LoadingScreenScript::AnimLayer>>,
                                 eastl::allocator>*)this_02->second();
                piVar3 = (int*)this_03->data();
                piVar4 = (int*)this_03->end();
                if (piVar3 == piVar4) {
                    iVar6 = 0;
                } else {
                    iVar6 = 0;
                    do {
                        this_04 = (ConfigProvider*)field_24->GetDomain();
                        uVar5 = this_04->GetVarType(VarDomainType::PLAYER, *piVar3);
                        this_05 = (VarValue*)(*(code*)param_1->field_0[2])(param_1, uVar5);
                        iVar2 = this_05->GetInt();
                        iVar6 = iVar6 + iVar2;
                        piVar3 = piVar3 + 1;
                    } while (piVar3 != piVar4);
                }
                return iVar1 <= iVar6;
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssert("index > -1 && index < (int)m_varpPrereqs[group].size()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                  "achievementtype/AchievementType.cpp",
                  1477, (char*)0);
    }

    // 0x1005586a0, 304 bytes, placed by class name
    // AchievementType::IsVarbitPrereqMet(PlayerVarDomain&, int, int)
    bool AchievementType::IsVarbitPrereqMet(PlayerVarDomain* param_1, int param_2, int param_3) {
        int iVar1;
        int iVar2;
        vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle, eastl::allocator>* this_00;
        vector<AchievementRequirementSpec, eastl::allocator>* this_01;
        GameToken* this_02;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* this_03;
        int* piVar3;
        int* piVar4;
        ConfigProvider* this_04;
        undefined8 uVar5;
        int iVar6;

        if ((param_2 < 0) || (iVar1 = (&field_280)->size(), iVar1 <= param_2)) {
            /* WARNING: Subroutine does not return */
            LogAssert("group > -1 && group < (int)m_varbitPrereqs.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "achievementtype/AchievementType.cpp",
                      1493, (char*)0);
        }
        if (-1 < param_3) {
            this_00 = (vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle, eastl::allocator>*)eastl::
                vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>, eastl::allocator>::operator[](
                    (vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>, eastl::allocator>*)&field_280,
                    (long)param_2);
            iVar1 = eastl::vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle, eastl::allocator>::size(
                this_00);
            if (param_3 < iVar1) {
                this_01 = (vector<AchievementRequirementSpec, eastl::allocator>*)eastl::
                    vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>, eastl::allocator>::operator[](
                        (vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>,
                                eastl::allocator>*)&field_280,
                        (long)param_2);
                this_02 = (GameToken*)eastl::vector<AchievementRequirementSpec, eastl::allocator>::operator[](
                    this_01, (long)param_3);
                iVar1 = this_02->GetStatus();
                this_03 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                                 std::default_delete<LoadingScreenScript::AnimLayer>>,
                                 eastl::allocator>*)this_02->second();
                piVar3 = (int*)this_03->data();
                piVar4 = (int*)this_03->end();
                if (piVar3 == piVar4) {
                    iVar6 = 0;
                } else {
                    iVar6 = 0;
                    do {
                        this_04 = (ConfigProvider*)field_24->GetDomain();
                        uVar5 = this_04->GetVarBitType(*piVar3);
                        iVar2 = (*(code*)param_1->field_0[4])(param_1, uVar5);
                        iVar6 = iVar6 + iVar2;
                        piVar3 = piVar3 + 1;
                    } while (piVar3 != piVar4);
                }
                return iVar1 <= iVar6;
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssert("index > -1 && index < (int)m_varbitPrereqs[group].size()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                  "achievementtype/AchievementType.cpp",
                  1495, (char*)0);
    }

    // 0x1005587d0, 288 bytes, placed by class name
    // AchievementType::IsVarpTestbitPrereqMet(PlayerVarDomain&, int, int)
    bool AchievementType::IsVarpTestbitPrereqMet(PlayerVarDomain* param_1, int param_2, int param_3) {
        VarDomainType* pVVar1;
        byte bVar2;
        int iVar3;
        uint uVar4;
        uint uVar5;
        vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle, eastl::allocator>* this_00;
        vector<AchievementRequirementSpec, eastl::allocator>* this_01;
        LightType* this_02;
        ConfigProvider* this_03;
        undefined8 uVar6;
        VarValue* this_04;

        if (-1 < param_2) {
            iVar3 = (&field_312)->size();
            if (param_2 < iVar3) {
                if (-1 < param_3) {
                    this_00 = (vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle, eastl::allocator>*)
                        eastl::vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>, eastl::allocator>::
                        operator[]((vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>,
                                           eastl::allocator>*)&field_312,
                                   (long)param_2);
                    iVar3 =
                        eastl::vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle, eastl::allocator>::size(
                            this_00);
                    if (param_3 < iVar3) {
                        this_01 = (vector<AchievementRequirementSpec, eastl::allocator>*)eastl::vector<
                            eastl::vector<AchievementRequirementSpec, eastl::allocator>, eastl::allocator>::
                        operator[]((vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>,
                                           eastl::allocator>*)&field_312,
                                   (long)param_2);
                        this_02 = (LightType*)eastl::vector<AchievementRequirementSpec, eastl::allocator>::operator[](
                            this_01, (long)param_3);
                        this_03 = (ConfigProvider*)field_24->GetDomain();
                        pVVar1 = VarDomainType::PLAYER;
                        iVar3 = this_02->GetID(0);
                        uVar6 = this_03->GetVarType(pVVar1, iVar3);
                        this_04 = (VarValue*)(*(code*)param_1->field_0[2])(param_1, uVar6);
                        uVar4 = this_04->GetInt();
                        bVar2 = this_02->GetAmplitude();
                        uVar5 = this_02->GetStatus();
                        return (uVar4 >> (bVar2 & 31) & 1) == uVar5;
                    }
                }
                /* WARNING: Subroutine does not return */
                LogAssert("index > -1 && index < (int)m_varpTestbitPrereqs[group].size()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "achievementtype/AchievementType.cpp",
                          1512, (char*)0);
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssert("group > -1 && group < (int)m_varpTestbitPrereqs.size()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                  "achievementtype/AchievementType.cpp",
                  1510, (char*)0);
    }

    // 0x1005588f0, 272 bytes, placed by class name
    // AchievementType::IsVarbitTestbitPrereqMet(PlayerVarDomain&, int, int)
    bool AchievementType::IsVarbitTestbitPrereqMet(PlayerVarDomain* param_1, int param_2, int param_3) {
        byte bVar1;
        int iVar2;
        uint uVar3;
        uint uVar4;
        vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle, eastl::allocator>* this_00;
        vector<AchievementRequirementSpec, eastl::allocator>* this_01;
        LightType* this_02;
        ConfigProvider* this_03;
        undefined8 uVar5;

        if (-1 < param_2) {
            iVar2 = (&field_344)->size();
            if (param_2 < iVar2) {
                if (-1 < param_3) {
                    this_00 = (vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle, eastl::allocator>*)
                        eastl::vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>, eastl::allocator>::
                        operator[]((vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>,
                                           eastl::allocator>*)&field_344,
                                   (long)param_2);
                    iVar2 =
                        eastl::vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle, eastl::allocator>::size(
                            this_00);
                    if (param_3 < iVar2) {
                        this_01 = (vector<AchievementRequirementSpec, eastl::allocator>*)eastl::vector<
                            eastl::vector<AchievementRequirementSpec, eastl::allocator>, eastl::allocator>::
                        operator[]((vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>,
                                           eastl::allocator>*)&field_344,
                                   (long)param_2);
                        this_02 = (LightType*)eastl::vector<AchievementRequirementSpec, eastl::allocator>::operator[](
                            this_01, (long)param_3);
                        this_03 = (ConfigProvider*)field_24->GetDomain();
                        iVar2 = this_02->GetID(0);
                        uVar5 = this_03->GetVarBitType(iVar2);
                        uVar3 = (*(code*)param_1->field_0[4])(param_1, uVar5);
                        bVar1 = this_02->GetAmplitude();
                        uVar4 = this_02->GetStatus();
                        return (uVar3 >> (bVar1 & 31) & 1) == uVar4;
                    }
                }
                /* WARNING: Subroutine does not return */
                LogAssert("index > -1 && index < (int)m_varbitTestbitPrereqs[group].size()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "achievementtype/AchievementType.cpp",
                          1525, (char*)0);
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssert("group > -1 && group < (int)m_varbitTestbitPrereqs.size()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                  "achievementtype/AchievementType.cpp",
                  1523, (char*)0);
    }

    // 0x100558a00, 272 bytes, placed by class name
    // AchievementType::IsAchievementPrereqMet(PlayerGameState&, PlayerVarDomain&, int, int, int)
    undefined4 AchievementType::IsAchievementPrereqMet(PlayerGameState* param_1, PlayerVarDomain* param_2, int param_3,
                                                       int param_4, int param_5) {
        BaseTemplateConfigTypeList<AchievementType>* this_00;
        int iVar1;
        vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle, eastl::allocator>* this_01;
        vector<AchievementRequirementSpec, eastl::allocator>* this_02;
        AchievementRequirementSpec* this_03;
        shared_ptr<AchievementType>* this_04;
        AchievementType* this_05;

        if (-1 < param_4) {
            iVar1 = (&field_376)->size();
            if (param_4 < iVar1) {
                if (-1 < param_5) {
                    this_01 = (vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle, eastl::allocator>*)
                        eastl::vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>, eastl::allocator>::
                        operator[]((vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>,
                                           eastl::allocator>*)&field_376,
                                   (long)param_4);
                    iVar1 =
                        eastl::vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle, eastl::allocator>::size(
                            this_01);
                    if (param_5 < iVar1) {
                        this_00 = (BaseTemplateConfigTypeList<AchievementType>*)field_24;
                        this_02 = (vector<AchievementRequirementSpec, eastl::allocator>*)eastl::vector<
                            eastl::vector<AchievementRequirementSpec, eastl::allocator>, eastl::allocator>::
                        operator[]((vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>,
                                           eastl::allocator>*)&field_376,
                                   (long)param_4);
                        this_03 = (AchievementRequirementSpec*)
                            eastl::vector<AchievementRequirementSpec, eastl::allocator>::operator[](this_02,
                                                                                                    (long)param_5);
                        iVar1 = this_03->GetID(0);
                        this_04 = (shared_ptr<AchievementType>*)this_00->List(iVar1, 0);
                        this_05 = (AchievementType*)shared_ptr<AchievementType>::operator->(this_04);
                        iVar1 = GetProgress(this_05, param_1, param_2, param_3);
                        return CONCAT31((int3)(iVar1 + 3U >> 8), iVar1 + 3U < 2);
                    }
                }
                /* WARNING: Subroutine does not return */
                LogAssert("index > -1 && index < (int)m_achievementPrereqs[group].size()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "achievementtype/AchievementType.cpp",
                          1538, (char*)0);
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssert("group > -1 && group < (int)m_achievementPrereqs.size()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                  "achievementtype/AchievementType.cpp",
                  1536, (char*)0);
    }

    // 0x100558b10, 240 bytes, placed by class name
    // AchievementType::IsQuestPrereqMet(PlayerVarDomain&, int, int)
    void AchievementType::IsQuestPrereqMet(PlayerVarDomain* param_1, int param_2, int param_3) {
        int iVar1;
        vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle, eastl::allocator>* this_00;
        ConfigProvider* this_01;
        vector<AchievementRequirementSpec, eastl::allocator>* this_02;
        AchievementRequirementSpec* this_03;
        shared_ptr* this_04;
        QuestType* this_05;

        if (-1 < param_2) {
            iVar1 = (&field_408)->size();
            if (param_2 < iVar1) {
                if (-1 < param_3) {
                    this_00 = (vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle, eastl::allocator>*)
                        eastl::vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>, eastl::allocator>::
                        operator[]((vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>,
                                           eastl::allocator>*)&field_408,
                                   (long)param_2);
                    iVar1 =
                        eastl::vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle, eastl::allocator>::size(
                            this_00);
                    if (param_3 < iVar1) {
                        this_01 = (ConfigProvider*)field_24->GetDomain();
                        this_02 = (vector<AchievementRequirementSpec, eastl::allocator>*)eastl::vector<
                            eastl::vector<AchievementRequirementSpec, eastl::allocator>, eastl::allocator>::
                        operator[]((vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>,
                                           eastl::allocator>*)&field_408,
                                   (long)param_2);
                        this_03 = (AchievementRequirementSpec*)
                            eastl::vector<AchievementRequirementSpec, eastl::allocator>::operator[](this_02,
                                                                                                    (long)param_3);
                        iVar1 = this_03->GetID(0);
                        this_04 = ConfigProvider::GetConfig<QuestType>(this_01, iVar1, (DataStatus**)0);
                        this_05 = (QuestType*)shared_ptr<QuestType>::operator->((shared_ptr<QuestType>*)this_04);
                        this_05->FinishedQuest(param_1);
                        return;
                    }
                }
                /* WARNING: Subroutine does not return */
                LogAssert("index > -1 && index < (int)m_questPrereqs[group].size()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "achievementtype/AchievementType.cpp",
                          1549, (char*)0);
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssert("group > -1 && group < (int)m_questPrereqs.size()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                  "achievementtype/AchievementType.cpp",
                  1547, (char*)0);
    }

    // 0x100558c00, 208 bytes, placed by class name
    // AchievementType::IsStatReqMet(PlayerGameState&, int)
    bool AchievementType::IsStatReqMet(PlayerGameState* param_1, int param_2) {
        int iVar1;
        int iVar2;
        GameToken* this_00;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* this_01;
        uint* puVar3;
        uint* puVar4;
        int iVar5;

        if ((param_2 < 0) || (iVar1 = (&field_472)->end(), iVar1 <= param_2)) {
            /* WARNING: Subroutine does not return */
            LogAssert("index > -1 && index < (int)m_statReqs.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "achievementtype/AchievementType.cpp",
                      1557, (char*)0);
        }
        this_00 = (GameToken*)Array<AchievementRequirementSpec, eastl::allocator>::operator[](
            (Array<AchievementRequirementSpec, eastl::allocator>*)&field_472, (long)param_2);
        iVar1 = this_00->GetStatus();
        this_01 =
            (Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                   eastl::allocator>*)this_00->second();
        puVar3 = (uint*)this_01->data();
        puVar4 = (uint*)this_01->end();
        if (puVar3 == puVar4) {
            iVar5 = 0;
        } else {
            iVar5 = 0;
            do {
                iVar2 = param_1->GetStatLevelMaxActual(*puVar3);
                iVar5 = iVar5 + iVar2;
                puVar3 = puVar3 + 1;
            } while (puVar3 != puVar4);
        }
        return iVar1 <= iVar5;
    }

    // 0x100558cd0, 240 bytes, placed by class name
    // AchievementType::IsVarpReqMet(PlayerVarDomain&, int)
    bool AchievementType::IsVarpReqMet(PlayerVarDomain* param_1, int param_2) {
        int iVar1;
        int iVar2;
        GameToken* this_00;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* this_01;
        int* piVar3;
        int* piVar4;
        ConfigProvider* this_02;
        undefined8 uVar5;
        VarValue* this_03;
        int iVar6;

        if ((param_2 < 0) || (iVar1 = (&field_496)->end(), iVar1 <= param_2)) {
            /* WARNING: Subroutine does not return */
            LogAssert("index > -1 && index < (int)m_varpReqs.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "achievementtype/AchievementType.cpp",
                      1571, (char*)0);
        }
        this_00 = (GameToken*)Array<AchievementRequirementSpec, eastl::allocator>::operator[](
            (Array<AchievementRequirementSpec, eastl::allocator>*)&field_496, (long)param_2);
        iVar1 = this_00->GetStatus();
        this_01 =
            (Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                   eastl::allocator>*)this_00->second();
        piVar3 = (int*)this_01->data();
        piVar4 = (int*)this_01->end();
        if (piVar3 == piVar4) {
            iVar6 = 0;
        } else {
            iVar6 = 0;
            do {
                this_02 = (ConfigProvider*)field_24->GetDomain();
                uVar5 = this_02->GetVarType(VarDomainType::PLAYER, *piVar3);
                this_03 = (VarValue*)(*(code*)param_1->field_0[2])(param_1, uVar5);
                iVar2 = this_03->GetInt();
                iVar6 = iVar6 + iVar2;
                piVar3 = piVar3 + 1;
            } while (piVar3 != piVar4);
        }
        return iVar1 <= iVar6;
    }

    // 0x100558dc0, 224 bytes, placed by class name
    // AchievementType::IsVarbitReqMet(PlayerVarDomain&, int)
    bool AchievementType::IsVarbitReqMet(PlayerVarDomain* param_1, int param_2) {
        int iVar1;
        int iVar2;
        GameToken* this_00;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* this_01;
        int* piVar3;
        int* piVar4;
        ConfigProvider* this_02;
        undefined8 uVar5;
        int iVar6;

        if ((param_2 < 0) || (iVar1 = (&field_520)->end(), iVar1 <= param_2)) {
            /* WARNING: Subroutine does not return */
            LogAssert("index > -1 && index < (int)m_varbitReqs.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "achievementtype/AchievementType.cpp",
                      1586, (char*)0);
        }
        this_00 = (GameToken*)Array<AchievementRequirementSpec, eastl::allocator>::operator[](
            (Array<AchievementRequirementSpec, eastl::allocator>*)&field_520, (long)param_2);
        iVar1 = this_00->GetStatus();
        this_01 =
            (Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                   eastl::allocator>*)this_00->second();
        piVar3 = (int*)this_01->data();
        piVar4 = (int*)this_01->end();
        if (piVar3 == piVar4) {
            iVar6 = 0;
        } else {
            iVar6 = 0;
            do {
                this_02 = (ConfigProvider*)field_24->GetDomain();
                uVar5 = this_02->GetVarBitType(*piVar3);
                iVar2 = (*(code*)param_1->field_0[4])(param_1, uVar5);
                iVar6 = iVar6 + iVar2;
                piVar3 = piVar3 + 1;
            } while (piVar3 != piVar4);
        }
        return iVar1 <= iVar6;
    }

    // 0x100558ea0, 208 bytes, placed by class name
    // AchievementType::IsVarpTestbitReqMet(PlayerVarDomain&, int)
    bool AchievementType::IsVarpTestbitReqMet(PlayerVarDomain* param_1, int param_2) {
        VarDomainType* pVVar1;
        byte bVar2;
        int iVar3;
        uint uVar4;
        uint uVar5;
        LightType* this_00;
        ConfigProvider* this_01;
        undefined8 uVar6;
        VarValue* this_02;

        if (-1 < param_2) {
            iVar3 = (&field_544)->end();
            if (param_2 < iVar3) {
                this_00 = (LightType*)Array<AchievementRequirementSpec, eastl::allocator>::operator[](
                    (Array<AchievementRequirementSpec, eastl::allocator>*)&field_544, (long)param_2);
                this_01 = (ConfigProvider*)field_24->GetDomain();
                pVVar1 = VarDomainType::PLAYER;
                iVar3 = this_00->GetID(0);
                uVar6 = this_01->GetVarType(pVVar1, iVar3);
                this_02 = (VarValue*)(*(code*)param_1->field_0[2])(param_1, uVar6);
                uVar4 = this_02->GetInt();
                bVar2 = this_00->GetAmplitude();
                uVar5 = this_00->GetStatus();
                return (uVar4 >> (bVar2 & 31) & 1) == uVar5;
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssert("index > -1 && index < (int)m_varpTestbitReqs.size()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                  "achievementtype/AchievementType.cpp",
                  1601, (char*)0);
    }

    // 0x100558f70, 176 bytes, placed by class name
    // AchievementType::IsVarbitTestbitReqMet(PlayerVarDomain&, int)
    bool AchievementType::IsVarbitTestbitReqMet(PlayerVarDomain* param_1, int param_2) {
        byte bVar1;
        int iVar2;
        uint uVar3;
        uint uVar4;
        LightType* this_00;
        ConfigProvider* this_01;
        undefined8 uVar5;

        if (-1 < param_2) {
            iVar2 = (&field_568)->end();
            if (param_2 < iVar2) {
                this_00 = (LightType*)Array<AchievementRequirementSpec, eastl::allocator>::operator[](
                    (Array<AchievementRequirementSpec, eastl::allocator>*)&field_568, (long)param_2);
                this_01 = (ConfigProvider*)field_24->GetDomain();
                iVar2 = this_00->GetID(0);
                uVar5 = this_01->GetVarBitType(iVar2);
                uVar3 = (*(code*)param_1->field_0[4])(param_1, uVar5);
                bVar1 = this_00->GetAmplitude();
                uVar4 = this_00->GetStatus();
                return (uVar3 >> (bVar1 & 31) & 1) == uVar4;
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssert("index > -1 && index < (int)m_varbitTestbitReqs.size()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                  "achievementtype/AchievementType.cpp",
                  1612, (char*)0);
    }

    // 0x100559020, 176 bytes, placed by class name
    // AchievementType::IsAchievementReqMet(PlayerGameState&, PlayerVarDomain&, int, int)
    undefined4 AchievementType::IsAchievementReqMet(PlayerGameState* param_1, PlayerVarDomain* param_2, int param_3,
                                                    int param_4) {
        BaseTemplateConfigTypeList<AchievementType>* this_00;
        int iVar1;
        AchievementRequirementSpec* this_01;
        shared_ptr<AchievementType>* this_02;
        AchievementType* this_03;

        if (-1 < param_4) {
            iVar1 = (&field_592)->end();
            if (param_4 < iVar1) {
                this_00 = (BaseTemplateConfigTypeList<AchievementType>*)field_24;
                this_01 = (AchievementRequirementSpec*)Array<AchievementRequirementSpec, eastl::allocator>::operator[](
                    (Array<AchievementRequirementSpec, eastl::allocator>*)&field_592, (long)param_4);
                iVar1 = this_01->GetID(0);
                this_02 = (shared_ptr<AchievementType>*)this_00->List(iVar1, 0);
                this_03 = (AchievementType*)shared_ptr<AchievementType>::operator->(this_02);
                iVar1 = GetProgress(this_03, param_1, param_2, param_3);
                return CONCAT31((int3)(iVar1 + 3U >> 8), iVar1 + 3U < 2);
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssert("index > -1 && index < (int)m_achievementReqs.size()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                  "achievementtype/AchievementType.cpp",
                  1623, (char*)0);
    }

    // 0x1005590d0, 160 bytes, placed by class name
    // AchievementType::IsQuestReqMet(PlayerVarDomain&, int)
    void AchievementType::IsQuestReqMet(PlayerVarDomain* param_1, int param_2) {
        int iVar1;
        ConfigProvider* this_00;
        AchievementRequirementSpec* this_01;
        shared_ptr* this_02;
        QuestType* this_03;

        if (-1 < param_2) {
            iVar1 = (&field_616)->end();
            if (param_2 < iVar1) {
                this_00 = (ConfigProvider*)field_24->GetDomain();
                this_01 = (AchievementRequirementSpec*)Array<AchievementRequirementSpec, eastl::allocator>::operator[](
                    (Array<AchievementRequirementSpec, eastl::allocator>*)&field_616, (long)param_2);
                iVar1 = this_01->GetID(0);
                this_02 = ConfigProvider::GetConfig<QuestType>(this_00, iVar1, (DataStatus**)0);
                this_03 = (QuestType*)shared_ptr<QuestType>::operator->((shared_ptr<QuestType>*)this_02);
                this_03->FinishedQuest(param_1);
                return;
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssert("index > -1 && index < (int)m_questReqs.size()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                  "achievementtype/AchievementType.cpp",
                  1632, (char*)0);
    }

    // 0x100559170, 96 bytes, placed by class name
    // AchievementType::GetDescription(Array<AchievementRequirementSpec, eastl::allocator> const&, int) const
    void AchievementType::GetDescription(Array* param_1, int param_2) {
        int iVar1;
        fixed_hashtable_allocator<10ul, 1208ul, 8ul, 8ul, 0ul, true, eastl::allocator>* this_00;

        if (-1 < param_2) {
            iVar1 = param_1->end();
            if (param_2 < iVar1) {
                this_00 = (fixed_hashtable_allocator<10ul, 1208ul, 8ul, 8ul, 0ul, true, eastl::allocator>*)
                    Array<AchievementRequirementSpec, eastl::allocator>::operator[](
                        (Array<AchievementRequirementSpec, eastl::allocator>*)param_1, (long)param_2);
                eastl::fixed_hashtable_allocator<10ul, 1208ul, 8ul, 8ul, 0ul, true,
                                                 eastl::allocator>::get_overflow_allocator(this_00);
                return;
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssert("index > -1 && index < (int)achievementReqs.size()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                  "achievementtype/AchievementType.cpp",
                  1639, (char*)0);
    }

    // 0x100559250, 176 bytes, placed by class name
    // AchievementType::GetDescription(eastl::vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>, eastl::allocator> const&, int, int) const
    void AchievementType::GetDescription(vector* param_1, int param_2, int param_3) {
        int iVar1;
        vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle, eastl::allocator>* this_00;
        vector<AchievementRequirementSpec, eastl::allocator>* this_01;
        fixed_hashtable_allocator<10ul, 1208ul, 8ul, 8ul, 0ul, true, eastl::allocator>* this_02;

        if (-1 < param_2) {
            iVar1 = param_1->size();
            if (param_2 < iVar1) {
                if (-1 < param_3) {
                    this_00 = (vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle, eastl::allocator>*)
                        eastl::vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>, eastl::allocator>::
                        operator[](
                            (vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>, eastl::allocator>*)
                                param_1,
                            (long)param_2);
                    iVar1 =
                        eastl::vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle, eastl::allocator>::size(
                            this_00);
                    if (param_3 < iVar1) {
                        this_01 = (vector<AchievementRequirementSpec, eastl::allocator>*)eastl::vector<
                            eastl::vector<AchievementRequirementSpec, eastl::allocator>, eastl::allocator>::
                        operator[](
                            (vector<eastl::vector<AchievementRequirementSpec, eastl::allocator>, eastl::allocator>*)
                                param_1,
                            (long)param_2);
                        this_02 = (fixed_hashtable_allocator<10ul, 1208ul, 8ul, 8ul, 0ul, true, eastl::allocator>*)
                            eastl::vector<AchievementRequirementSpec, eastl::allocator>::operator[](this_01,
                                                                                                    (long)param_3);
                        eastl::fixed_hashtable_allocator<10ul, 1208ul, 8ul, 8ul, 0ul, true,
                                                         eastl::allocator>::get_overflow_allocator(this_02);
                        return;
                    }
                }
                /* WARNING: Subroutine does not return */
                LogAssert("index > -1 && index < (int)achievementReqs[group].size()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "achievementtype/AchievementType.cpp",
                          1646, (char*)0);
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssert("group > -1 && group < (int)achievementReqs.size()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                  "achievementtype/AchievementType.cpp",
                  1645, (char*)0);
    }

    // 0x100559350, 880 bytes, placed by class name
    // AchievementType::GetTallyProgress(PlayerGameState const&, PlayerVarDomain const&) const
    /* WARNING: Removing unreachable block (ram,4300576395) */
    /* WARNING: Removing unreachable block (ram,4300575799) */
    /* WARNING: Removing unreachable block (ram,4300576155) */
    /* WARNING: Removing unreachable block (ram,4300576431) */
    /* AchievementType::GetTallyProgress(PlayerGameState const&,
   PlayerVarDomain const&) const */

    int AchievementType::GetTallyProgress(PlayerGameState* param_1, PlayerVarDomain* param_2) {
        bool bVar1;
        uint uVar2;
        int iVar3;
        uint uVar4;
        CoordMapSquare* pCVar5;
        CoordMapSquare* pCVar6;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* pAVar7;
        uint* puVar8;
        uint* puVar9;
        int* piVar10;
        int* piVar11;
        ConfigProvider* pCVar12;
        undefined8 uVar13;
        VarValue* this_00;
        int iVar14;
        bool bVar15;

        uVar4 = field_156;
        iVar14 = -1;
        if (uVar4 == 2) {
            pCVar5 = (CoordMapSquare*)(&field_520)->data();
            pCVar6 = (CoordMapSquare*)(&field_520)->end();
            if (pCVar5 == pCVar6) {
                return -1;
            }
            uVar4 = 0;
            bVar15 = false;
            do {
                uVar2 = pCVar5->GetX();
                bVar1 = true;
                if (uVar2 == field_160) {
                    if (uVar4 == field_164) {
                        pAVar7 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                                        std::default_delete<LoadingScreenScript::AnimLayer>>,
                                        eastl::allocator>*)pCVar5->second();
                        piVar10 = (int*)pAVar7->data();
                        piVar11 = (int*)pAVar7->end();
                        if (piVar10 == piVar11) {
                            iVar14 = 0;
                        } else {
                            iVar14 = 0;
                            do {
                                pCVar12 = (ConfigProvider*)field_24->GetDomain();
                                uVar13 = pCVar12->GetVarBitType(*piVar10);
                                iVar3 = (*(code*)param_2->field_0[4])(param_2, uVar13);
                                iVar14 = iVar14 + iVar3;
                                piVar10 = piVar10 + 1;
                            } while (piVar10 != piVar11);
                        }
                        bVar1 = false;
                        goto LAB_1005594d8;
                    }
                    uVar4 = uVar4 + 1;
                } else {
                LAB_1005594d8:
                    if (!bVar1)
                        break;
                }
                pCVar5 = pCVar5 + 6;
                bVar15 = pCVar5 == pCVar6;
            } while (!bVar15);
        } else if (uVar4 == 1) {
            pCVar5 = (CoordMapSquare*)(&field_496)->data();
            pCVar6 = (CoordMapSquare*)(&field_496)->end();
            bVar15 = pCVar5 == pCVar6;
            if (!bVar15) {
                uVar4 = 0;
                do {
                    uVar2 = pCVar5->GetX();
                    bVar1 = true;
                    if (uVar2 == field_160) {
                        if (uVar4 == field_164) {
                            pAVar7 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                                            std::default_delete<LoadingScreenScript::AnimLayer>>,
                                            eastl::allocator>*)pCVar5->second();
                            piVar10 = (int*)pAVar7->data();
                            piVar11 = (int*)pAVar7->end();
                            if (piVar10 == piVar11) {
                                iVar14 = 0;
                            } else {
                                iVar14 = 0;
                                do {
                                    pCVar12 = (ConfigProvider*)field_24->GetDomain();
                                    uVar13 = pCVar12->GetVarType(VarDomainType::PLAYER, *piVar10);
                                    this_00 = (VarValue*)(*(code*)param_2->field_0[2])(param_2, uVar13);
                                    iVar3 = this_00->GetInt();
                                    iVar14 = iVar14 + iVar3;
                                    piVar10 = piVar10 + 1;
                                } while (piVar10 != piVar11);
                            }
                            bVar1 = false;
                            goto LAB_1005595ad;
                        }
                        uVar4 = uVar4 + 1;
                    } else {
                    LAB_1005595ad:
                        if (!bVar1)
                            break;
                    }
                    pCVar5 = pCVar5 + 6;
                    bVar15 = pCVar5 == pCVar6;
                } while (!bVar15);
            }
        } else {
            if (uVar4 != 0) {
                return -1;
            }
            pCVar5 = (CoordMapSquare*)(&field_472)->data();
            pCVar6 = (CoordMapSquare*)(&field_472)->end();
            bVar15 = pCVar5 == pCVar6;
            if (!bVar15) {
                uVar4 = 0;
                do {
                    uVar2 = pCVar5->GetX();
                    bVar1 = true;
                    if (uVar2 == field_160) {
                        if (uVar4 == field_164) {
                            pAVar7 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                                            std::default_delete<LoadingScreenScript::AnimLayer>>,
                                            eastl::allocator>*)pCVar5->second();
                            puVar8 = (uint*)pAVar7->data();
                            puVar9 = (uint*)pAVar7->end();
                            if (puVar8 == puVar9) {
                                iVar14 = 0;
                            } else {
                                iVar14 = 0;
                                do {
                                    iVar3 = param_1->GetStatLevelMaxActual(*puVar8);
                                    iVar14 = iVar14 + iVar3;
                                    puVar8 = puVar8 + 1;
                                } while (puVar8 != puVar9);
                            }
                            bVar1 = false;
                            goto LAB_100559448;
                        }
                        uVar4 = uVar4 + 1;
                    } else {
                    LAB_100559448:
                        if (!bVar1)
                            break;
                    }
                    pCVar5 = pCVar5 + 6;
                    bVar15 = pCVar5 == pCVar6;
                } while (!bVar15);
            }
        }
        if (!bVar15) {
            return iVar14;
        }
        return -1;
    }

    // 0x1005596c0, 464 bytes, placed by class name
    // AchievementType::GetTallyTarget() const
    undefined4 AchievementType::GetTallyTarget() {
        bool bVar1;
        uint uVar2;
        long in_RAX;
        GameToken* pGVar3;
        GameToken* pGVar4;
        uint uVar5;
        bool bVar6;
        undefined8 uStack_38;

        uStack_38._4_4_ = (undefined4)((ulong)in_RAX >> 32);
        uVar5 = field_156;
        uStack_38 = in_RAX;
        if (uVar5 == 2) {
            pGVar3 = (GameToken*)(&field_520)->data();
            pGVar4 = (GameToken*)(&field_520)->end();
            bVar6 = pGVar3 == pGVar4;
            if (!bVar6) {
                uVar5 = 0;
                do {
                    uVar2 = pGVar3->GetX();
                    bVar1 = true;
                    if (uVar2 == field_160) {
                        if (uVar5 == field_164) {
                            uVar2 = pGVar3->GetStatus();
                            uStack_38 = (ulong)uVar2 << 32;
                            bVar1 = false;
                        } else {
                            uVar5 = uVar5 + 1;
                        }
                    }
                    if (!bVar1)
                        break;
                    pGVar3 = (GameToken*)&pGVar3[1].m_status;
                    bVar6 = pGVar3 == pGVar4;
                } while (!bVar6);
            }
        } else if (uVar5 == 1) {
            pGVar3 = (GameToken*)(&field_496)->data();
            pGVar4 = (GameToken*)(&field_496)->end();
            bVar6 = pGVar3 == pGVar4;
            if (!bVar6) {
                uVar5 = 0;
                do {
                    uVar2 = pGVar3->GetX();
                    bVar1 = true;
                    if (uVar2 == field_160) {
                        if (uVar5 == field_164) {
                            uVar2 = pGVar3->GetStatus();
                            uStack_38 = (ulong)uVar2 << 32;
                            bVar1 = false;
                        } else {
                            uVar5 = uVar5 + 1;
                        }
                    }
                    if (!bVar1)
                        break;
                    pGVar3 = (GameToken*)&pGVar3[1].m_status;
                    bVar6 = pGVar3 == pGVar4;
                } while (!bVar6);
            }
        } else {
            if (uVar5 != 0) {
                return 4294967295;
            }
            pGVar3 = (GameToken*)(&field_472)->data();
            pGVar4 = (GameToken*)(&field_472)->end();
            bVar6 = pGVar3 == pGVar4;
            if (!bVar6) {
                uVar5 = 0;
                do {
                    uVar2 = pGVar3->GetX();
                    bVar1 = true;
                    if (uVar2 == field_160) {
                        if (uVar5 == field_164) {
                            uVar2 = pGVar3->GetStatus();
                            uStack_38 = (ulong)uVar2 << 32;
                            bVar1 = false;
                        } else {
                            uVar5 = uVar5 + 1;
                        }
                    }
                    if (!bVar1)
                        break;
                    pGVar3 = (GameToken*)&pGVar3[1].m_status;
                    bVar6 = pGVar3 == pGVar4;
                } while (!bVar6);
            }
        }
        if (bVar6) {
            uStack_38._4_4_ = 4294967295;
        }
        return uStack_38._4_4_;
    }

} // namespace jag::game
