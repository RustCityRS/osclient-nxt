// libs/oldscape/jagex3/midi2/midifile.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "midifile.h"

namespace jag::oldscape::midi2 {
    // 0x1002c9ac0
    MidiFile::MidiFile(Array<unsigned char>& arg1) {

        new (this) eastl::hash_map<int, MidiFile::PatchNoteSet>(local_28);
        new (&field_56) Array<unsigned char>();
        field_56 = arg1;
    }

    // 0x1002c9b60
    auto MidiFile::Load(jagex3::Js5& js5, int arg2, int arg3) {
        WindowSavedPosition* windowSavedPosition;
        MidiFile* midiFile;
        WindowSavedPosition local_70;
        shared_ptr<MidiFile> local_50;

        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_40;
        js5.GetFile(local_40, arg2, arg3, nullptr);
        if (local_40 == nullptr) {
            auto result;
        } else {
            windowSavedPosition = (WindowSavedPosition*)*local_40;
            local_70 = WindowSavedPosition(*windowSavedPosition);
            midiFile = (MidiFile*)operator new(80);
            MidiFile(midiFile, (PacketJ<Array<unsigned char> _>*)&local_70);
            local_50.shared_ptr<MidiFile, void>(midiFile);
            result.shared_ptr<FileRSevenDebugPresetProvider, void>(local_50);
        }
        return result;
    }

    // 0x1002c9c90
    auto MidiFile::Load(jagex3::Js5& js5, int arg2) {
        Layout* layout;
        Array<unsigned char>* arg1;
        ReturnValue local_38;

        make_shared<PacketJ<Array<unsigned char>>>(&local_38);
        js5.GetFile(local_38, arg2);
        if (local_38 == nullptr) {
            auto result;
        } else {
            layout = (Layout*)local_38.operator->();
            arg1 = (Array<unsigned char>*)layout->SSOBeginPtr();
            make_shared<MidiFile, Array<unsigned char>&>(&result, arg1);
        }
        return result;
    }

    // 0x1002c9dd0
    auto MidiFile::Load(jagex3::Js5& js5, eastl::string& str1, eastl::string& str2) {
        Layout* layout;
        Array<unsigned char>* arg1;
        ReturnValue local_40;

        make_shared<PacketJ<Array<unsigned char>>>(&local_40);
        char* str1_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        char* str2_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        js5.GetFile(local_40, str1_00, str2_00, nullptr);
        if (local_40 == nullptr) {
            auto result;
        } else {
            layout = (Layout*)local_40.operator->();
            arg1 = (Array<unsigned char>*)layout->SSOBeginPtr();
            make_shared<MidiFile, Array<unsigned char>&>(&result, arg1);
        }
        return result;
    }

    // 0x1002c9e90
    auto MidiFile::Load(jagex3::Js5& js5, eastl::string& str) {
        Layout* layout;
        Array<unsigned char>* arg1;
        ReturnValue local_38;

        make_shared<PacketJ<Array<unsigned char>>>(&local_38);
        char* str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        js5.GetFile(local_38, str_00);
        if (local_38 == nullptr) {
            auto result;
        } else {
            layout = (Layout*)local_38.operator->();
            arg1 = (Array<unsigned char>*)layout->SSOBeginPtr();
            make_shared<MidiFile, Array<unsigned char>&>(&result, arg1);
        }
        return result;
    }

    // 0x1002c9f30
    MidiFile::MidiFile(PacketJ<Array<unsigned char>>& packetJ) {
        bool bVar1;
        bool cVar4;
        uint8_t bVar5;
        int iVar7;
        unsigned long uVar10;
        Logger* pLVar11;
        Array<unsigned char>* pAVar13;
        uint8_t* pbVar14;
        int* piVar15;
        ID* pIVar16;
        unsigned int* puVar17;
        ID IVar18;
        unsigned long uVar19;
        ID id;
        long lVar20;
        MidiFile* this_00;
        unsigned long arg1;
        unsigned int uVar21;
        unsigned int uVar22;
        long lVar23;
        unsigned int uVar24;
        unsigned int uVar25;
        bool bVar26;
        ReturnValue local_218;
        ReturnValue local_200;
        long local_120;
        int local_10c;
        unsigned long local_108;
        long local_100;
        unsigned long local_f8;
        unsigned long local_f0;
        unsigned long local_e8;
        unsigned long local_e0;
        unsigned long local_d8;
        unsigned long local_d0;
        int local_c4;
        long local_c0;
        long local_b8;
        unsigned long local_b0;
        unsigned long local_a8;
        unsigned long local_a0;
        long local_98;
        WindowSavedPosition local_90;
        unsigned long local_70;
        unsigned long local_68;
        unsigned long local_60;
        long local_58;

        new (this) eastl::hash_map<int, MidiFile::PatchNoteSet>(local_90);
        Array<graphics::Pix32>* local_130 = (Array<graphics::Pix32>*)&field_56;
        new (local_130) Array<unsigned char>();
        auto pvVar8 = packetJ.SSOBeginPtr();
        long lVar9 = pvVar8->end();
        packetJ.SetPos(lVar9 - 3);
        uint8_t bVar3 = packetJ.g1();
        unsigned short uVar6 = packetJ.g2();
        packetJ.SetPos(0);
        unsigned long local_118 = (unsigned long)(unsigned int)bVar3;
        unsigned long local_50 = (unsigned long)((unsigned int)bVar3 * 10 + 14);
        unsigned short local_c6 = uVar6;
        uint8_t local_41 = bVar3;
        if (bVar3 == 0) {
            local_98 = 0;
            local_60 = 0;
            local_b8 = 0;
            local_68 = 0;
            local_a0 = 0;
            local_b0 = 0;
            local_c0 = 0;
            local_58 = 0;
            local_50 = 14;
        } else {
            local_58 = 0;
            local_c0 = 0;
            local_b0 = 0;
            local_a0 = 0;
            local_68 = 0;
            local_b8 = 0;
            local_60 = 0;
            local_98 = 0;
            uVar10 = 0;
            do {
                uVar24 = 4294967295;
                local_70 = uVar10;
                do {
                    bVar3 = packetJ.g1();
                    bVar26 = uVar24 != bVar3;
                    uVar24 = bVar3 & 15;
                    if (bVar3 == 7) {
                        bVar1 = true;
                    } else if (bVar3 == 23) {
                        local_58 = local_58 + 1;
                        bVar1 = false;
                    } else {
                        switch (uVar24) {
                        case 0:
                            local_b0 = local_b0 + 1;
                            bVar1 = false;
                            break;
                        case 1:
                            local_a0 = local_a0 + 1;
                            bVar1 = false;
                            break;
                        case 2:
                            local_c0 = local_c0 + 1;
                            bVar1 = false;
                            break;
                        case 3:
                            local_68 = local_68 + 1;
                            bVar1 = false;
                            break;
                        case 4:
                            local_b8 = local_b8 + 1;
                            bVar1 = false;
                            break;
                        case 5:
                            local_60 = local_60 + 1;
                            bVar1 = false;
                            break;
                        case 6:
                            local_98 = local_98 + 1;
                            bVar1 = false;
                            break;
                        default:
                            pLVar11 = logger::default_logger();
                            bVar1 = false;
                            pLVar11->Log(false, 2,
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                         "oldscape/jagex3/midi2/midifile.cpp",
                                         155, "Unrecognised status %i", (unsigned int)bVar3);
                        }
                    }
                    local_50 = local_50 + bVar26;
                } while (!bVar1);
                uVar10 = local_70 + 1;
            } while (uVar10 != local_118);
        }
        PacketJ<Array<unsigned char> _>* pPVar2 = packetJ;
        lVar9 = local_a0 + local_60;
        unsigned long local_1c0 = packetJ.size();
        uVar10 = lVar9 + local_118 + local_98 + local_b8 + local_68 + local_b0 + local_c0 + local_58;
        long local_138 = lVar9;
        if (uVar10 != 0) {
            uVar19 = 0;
            do {
                pPVar2->gMidiVarLen();
                uVar19 = uVar19 + 1;
            } while (uVar19 < uVar10);
        }
        long local_1b8 = pPVar2->size();
        unsigned long local_180 = pPVar2->size();
        lVar9 = local_98;
        if (local_c0 == 0) {
            local_70 = 0;
            local_a8 = 0;
            local_f8 = 0;
            local_108 = 0;
            local_f0 = 0;
            local_100 = 0;
            local_e0 = 0;
            local_d8 = 0;
            local_d0 = 0;
            local_120 = 0;
            lVar20 = 0;
            local_e8 = 0;
        } else {
            bVar3 = 0;
            local_e8 = 0;
            lVar20 = 0;
            local_120 = 0;
            local_d0 = 0;
            local_d8 = 0;
            local_e0 = 0;
            local_100 = 0;
            local_f0 = 0;
            local_108 = 0;
            local_f8 = 0;
            local_a8 = 0;
            local_70 = 0;
            lVar23 = local_c0;
            do {
                cVar4 = pPVar2->g1();
                bVar5 = bVar3 + cVar4;
                bVar3 = bVar5 & 127;
                if ((bVar5 & 95) == 0) {
                    lVar9 = lVar9 + 1;
                } else {
                    switch (bVar3) {
                    case 1:
                        local_70 = local_70 + 1;
                        break;
                    case 2:
                    case 3:
                    case 4:
                    case 5:
                    case 6:
                    case 8:
                    case 9:
                    case 11:
                    case 12:
                    case 13:
                    case 14:
                    case 15:
                    case 16:
                    case 17:
                    case 18:
                    case 19:
                    case 20:
                    case 21:
                    case 22:
                    case 23:
                    case 24:
                    case 25:
                    case 26:
                    case 27:
                    case 28:
                    case 29:
                    case 30:
                    case 31:
                    case 32:
                    case 34:
                    case 35:
                    case 36:
                    case 37:
                    case 38:
                    case 40:
                    case 41:
                    switchD_1002ca2f0_caseD_2:
                        if (((bVar5 & 126) == 120) || ((bVar5 & 126) == 64)) {
                        switchD_1002ca318_caseD_7b:
                            lVar20 = lVar20 + 1;
                        } else {
                            local_e8 = local_e8 + 1;
                        }
                        break;
                    case 7:
                        local_f8 = local_f8 + 1;
                        break;
                    case 10:
                        local_f0 = local_f0 + 1;
                        break;
                    case 33:
                        local_a8 = local_a8 + 1;
                        break;
                    case 39:
                        local_108 = local_108 + 1;
                        break;
                    case 42:
                        local_100 = local_100 + 1;
                        break;
                    default:
                        switch (bVar3) {
                        case 98:
                            local_d8 = local_d8 + 1;
                            break;
                        case 99:
                            local_e0 = local_e0 + 1;
                            break;
                        case 100:
                            local_120 = local_120 + 1;
                            break;
                        case 101:
                            local_d0 = local_d0 + 1;
                            break;
                        default:
                            goto switchD_1002ca2f0_caseD_2;
                        case 123:
                            goto switchD_1002ca318_caseD_7b;
                        }
                    }
                }
                lVar23 = lVar23 - 1;
            } while (lVar23 != 0);
        }
        unsigned long local_178 = pPVar2->size();
        lVar23 = pPVar2->size();
        pPVar2->SetPos(lVar20 + lVar23);
        unsigned long local_190 = pPVar2->size();
        lVar20 = pPVar2->size();
        pPVar2->SetPos(local_60 + lVar20);
        lVar20 = local_c0;
        unsigned long local_198 = pPVar2->size();
        lVar23 = pPVar2->size();
        pPVar2->SetPos(lVar23 + local_b8);
        unsigned long local_188 = pPVar2->size();
        lVar23 = pPVar2->size();
        pPVar2->SetPos(lVar23 + local_68);
        unsigned long local_170 = pPVar2->size();
        lVar23 = pPVar2->size();
        pPVar2->SetPos(local_70 + lVar23);
        unsigned long local_168 = pPVar2->size();
        lVar23 = pPVar2->size();
        pPVar2->SetPos(local_f8 + lVar23);
        unsigned long local_160 = pPVar2->size();
        lVar23 = pPVar2->size();
        pPVar2->SetPos(local_f0 + lVar23);
        local_60 = pPVar2->size();
        lVar23 = pPVar2->size();
        uVar10 = local_b0;
        pPVar2->SetPos(local_138 + local_b0 + lVar23);
        local_f0 = pPVar2->size();
        lVar23 = pPVar2->size();
        pPVar2->SetPos(lVar23 + uVar10);
        unsigned long local_128 = pPVar2->size();
        lVar23 = pPVar2->size();
        pPVar2->SetPos(local_e8 + lVar23);
        local_e8 = pPVar2->size();
        lVar23 = pPVar2->size();
        pPVar2->SetPos(local_a0 + lVar23);
        unsigned long local_158 = pPVar2->size();
        lVar23 = pPVar2->size();
        pPVar2->SetPos(local_a8 + lVar23);
        unsigned long local_150 = pPVar2->size();
        lVar23 = pPVar2->size();
        pPVar2->SetPos(local_108 + lVar23);
        unsigned long local_148 = pPVar2->size();
        lVar23 = pPVar2->size();
        pPVar2->SetPos(local_100 + lVar23);
        local_a0 = pPVar2->size();
        lVar23 = pPVar2->size();
        pPVar2->SetPos(lVar9 + lVar23);
        local_f8 = pPVar2->size();
        lVar9 = pPVar2->size();
        pPVar2->SetPos(lVar9 + local_68);
        unsigned long local_140 = pPVar2->size();
        lVar9 = pPVar2->size();
        pPVar2->SetPos(local_e0 + lVar9);
        local_e0 = pPVar2->size();
        lVar9 = pPVar2->size();
        pPVar2->SetPos(local_d8 + lVar9);
        local_d8 = pPVar2->size();
        lVar9 = pPVar2->size();
        pPVar2->SetPos(local_d0 + lVar9);
        local_d0 = pPVar2->size();
        lVar9 = pPVar2->size();
        pPVar2->SetPos(local_120 + lVar9);
        local_70 = pPVar2->size();
        lVar9 = pPVar2->size();
        pPVar2->SetPos(local_58 * 3 + lVar9);
        lVar9 = pPVar2->size();
        pvVar8 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)pPVar2->SSOBeginPtr();
        lVar23 = pvVar8->end();
        if (lVar9 != lVar23 - 3) {
            pLVar11 = logger::default_logger();
            pLVar11->Log(false, 2,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                         "midifile.cpp",
                         286, "Chunk lengths added up wrong");
        }
        uVar10 = local_1c0;
        local_90.PacketT(
            ((local_b8 + local_98 + local_58 * 5 + local_50 + (local_138 + local_68 + local_b0 + lVar20) * 2) -
             local_1c0) +
            local_1b8);
        local_90.p4<int>(1297377380);
        local_90.p4<int>(6);
        local_90.p2<unsigned long>((unsigned short)(1 < local_41));
        local_90.p2<unsigned long>((unsigned short)local_118);
        local_90.p2<unsigned long>(local_c6);
        pPVar2->SetPos(uVar10);
        Array<int> local_1f0(128);
        Array<int> local_1b0(16);
        bVar3 = local_41;
        Array<int> local_1d8(16);
        uint32_t* puVar12 = &local_1d8[9];
        *puVar12 = 128;
        puVar12 = &local_1b0[9];
        *puVar12 = 128;
        if (bVar3 != 0) {
            uVar10 = 0;
            local_98 = 0;
            local_c0 = 0;
            local_68 = 0;
            local_b8 = 0;
            local_b0 = 0;
            local_58 = 0;
            local_50 = 0;
            uVar19 = 0;
            local_a8 = 0;
            do {
                local_108 = uVar10;
                local_90.p4<int>(1297379947);
                lVar9 = local_90.size();
                local_90.SetPos(lVar9 + 4);
                local_100 = local_90.size();
                local_10c = (int)local_100;
                uVar24 = 4294967295;
                do {
                    pPVar2 = packetJ;
                    iVar7 = packetJ.gMidiVarLen();
                    local_90.pMidiVarLen(iVar7);
                    local_10c = local_10c + iVar7;
                    pAVar13 = (Array<unsigned char>*)pPVar2->SSOBeginPtr();
                    pbVar14 = (uint8_t*)(*pAVar13)[uVar19];
                    bVar3 = *pbVar14;
                    uVar25 = bVar3 & 15;
                    uVar21 = (unsigned int)bVar3;
                    if (bVar3 == 23) {
                        if (uVar24 != uVar21) {
                            local_90.p1<unsigned long>(255);
                        }
                        local_90.p1<unsigned long>(81);
                        local_90.p1<unsigned long>(3);
                        pAVar13 = (Array<unsigned char>*)packetJ.SSOBeginPtr();
                        pbVar14 = (uint8_t*)(*pAVar13)[local_70];
                        local_90.p1<unsigned long>((unsigned int)*pbVar14);
                        uVar10 = local_70 + 1;
                        pAVar13 = (Array<unsigned char>*)packetJ.SSOBeginPtr();
                        pbVar14 = (uint8_t*)(*pAVar13)[uVar10];
                        local_90.p1<unsigned long>((unsigned int)*pbVar14);
                        uVar10 = local_70 + 2;
                        pAVar13 = (Array<unsigned char>*)packetJ.SSOBeginPtr();
                        pbVar14 = (uint8_t*)(*pAVar13)[uVar10];
                        local_90.p1<unsigned long>((unsigned int)*pbVar14);
                        local_70 = local_70 + 3;
                        bVar26 = false;
                    } else {
                        uVar22 = (unsigned int)bVar3;
                        if (bVar3 == 7) {
                            if (uVar24 != 7) {
                                local_90.p1<unsigned long>(255);
                            }
                            local_90.p1<unsigned long>(47);
                            bVar26 = true;
                            local_90.p1<unsigned long>(0);
                        } else {
                            local_50 = local_50 ^ bVar3 >> 4;
                            iVar7 = (int)local_50;
                            switch (uVar25) {
                            case 0:
                                if (uVar24 != uVar22) {
                                    local_90.p1<unsigned long>(iVar7 + 144);
                                }
                                pAVar13 = (Array<unsigned char>*)packetJ.SSOBeginPtr();
                                pbVar14 = (uint8_t*)(*pAVar13)[local_60];
                                bVar3 = *pbVar14;
                                pAVar13 = (Array<unsigned char>*)packetJ.SSOBeginPtr();
                                pbVar14 = (uint8_t*)(*pAVar13)[local_f0];
                                local_58 = local_58 + (unsigned long)bVar3;
                                bVar3 = *pbVar14;
                                local_90.p1<unsigned long>((ID)local_58 & 127);
                                local_b0 = local_b0 + bVar3;
                                uVar10 = local_b0 & 127;
                                local_90.p1<unsigned long>((unsigned int)((uint8_t)local_b0 & 127));
                                local_60 = local_60 + 1;
                                local_f0 = local_f0 + 1;
                                if (uVar10 != 0) {
                                    piVar15 = &local_1d8[local_50];
                                    this_00 = this;
                                    local_c4 = *piVar15;
                                    local_218 = find(local_c4);
                                    local_200 = this_00->end();
                                    cVar4 = local_218 == local_200;
                                    if (cVar4) {
                                        local_218 = this_00->emplace<int&, int&>(local_c4, local_10c);
                                        this_00 = this;
                                    }
                                    lVar9 = (*this_00)[local_c4];
                                    ((lVar9 + 8))->set((unsigned long)((uint8_t)local_58 & 127), true);
                                }
                                bVar26 = false;
                                break;
                            case 1:
                                if (uVar24 != uVar22) {
                                    local_90.p1<unsigned long>(iVar7 + 128);
                                }
                                pAVar13 = (Array<unsigned char>*)packetJ.SSOBeginPtr();
                                pbVar14 = (uint8_t*)(*pAVar13)[local_60];
                                bVar3 = *pbVar14;
                                pAVar13 = (Array<unsigned char>*)packetJ.SSOBeginPtr();
                                pbVar14 = (uint8_t*)(*pAVar13)[local_e8];
                                local_58 = local_58 + (unsigned long)bVar3;
                                bVar3 = *pbVar14;
                                local_90.p1<unsigned long>((ID)local_58 & 127);
                                local_b8 = local_b8 + (unsigned long)bVar3;
                                local_90.p1<unsigned long>((ID)local_b8 & 127);
                                local_60 = local_60 + 1;
                                local_e8 = local_e8 + 1;
                                bVar26 = false;
                                break;
                            case 2:
                                if (uVar24 != uVar22) {
                                    local_90.p1<unsigned long>(iVar7 + 176);
                                }
                                pAVar13 = (Array<unsigned char>*)packetJ.SSOBeginPtr();
                                pbVar14 = (uint8_t*)(*pAVar13)[local_180];
                                uVar10 = local_a8 + *pbVar14;
                                IVar18 = (ID)uVar10;
                                id = IVar18 & 127;
                                arg1 = (unsigned long)id;
                                local_90.p1<unsigned long>(id);
                                if ((uVar10 & 95) == 0) {
                                    pAVar13 = (Array<unsigned char>*)packetJ.SSOBeginPtr();
                                    pbVar14 = (uint8_t*)(*pAVar13)[local_a0];
                                    local_a0 = local_a0 + 1;
                                } else {
                                    switch (arg1) {
                                    case 1:
                                        pAVar13 = (Array<unsigned char>*)packetJ.SSOBeginPtr();
                                        pbVar14 = (uint8_t*)(*pAVar13)[local_170];
                                        local_170 = local_170 + 1;
                                        break;
                                    case 2:
                                    case 3:
                                    case 4:
                                    case 5:
                                    case 6:
                                    case 8:
                                    case 9:
                                    case 11:
                                    case 12:
                                    case 13:
                                    case 14:
                                    case 15:
                                    case 16:
                                    case 17:
                                    case 18:
                                    case 19:
                                    case 20:
                                    case 21:
                                    case 22:
                                    case 23:
                                    case 24:
                                    case 25:
                                    case 26:
                                    case 27:
                                    case 28:
                                    case 29:
                                    case 30:
                                    case 31:
                                    case 32:
                                    case 34:
                                    case 35:
                                    case 36:
                                    case 37:
                                    case 38:
                                    case 40:
                                    case 41:
                                    switchD_1002cadc5_caseD_2:
                                        IVar18 = IVar18 & 126;
                                        if ((IVar18 == 120) || (IVar18 == 64)) {
                                        switchD_1002cb11f_caseD_7b:
                                            pAVar13 = (Array<unsigned char>*)packetJ.SSOBeginPtr();
                                            pbVar14 = (uint8_t*)(*pAVar13)[local_178];
                                            local_178 = local_178 + 1;
                                        } else {
                                            pAVar13 = (Array<unsigned char>*)packetJ.SSOBeginPtr();
                                            pbVar14 = (uint8_t*)(*pAVar13)[local_128];
                                            local_128 = local_128 + 1;
                                        }
                                        break;
                                    case 7:
                                        pAVar13 = (Array<unsigned char>*)packetJ.SSOBeginPtr();
                                        pbVar14 = (uint8_t*)(*pAVar13)[local_168];
                                        local_168 = local_168 + 1;
                                        break;
                                    case 10:
                                        pAVar13 = (Array<unsigned char>*)packetJ.SSOBeginPtr();
                                        pbVar14 = (uint8_t*)(*pAVar13)[local_160];
                                        local_160 = local_160 + 1;
                                        break;
                                    case 33:
                                        pAVar13 = (Array<unsigned char>*)packetJ.SSOBeginPtr();
                                        pbVar14 = (uint8_t*)(*pAVar13)[local_158];
                                        local_158 = local_158 + 1;
                                        break;
                                    case 39:
                                        pAVar13 = (Array<unsigned char>*)packetJ.SSOBeginPtr();
                                        pbVar14 = (uint8_t*)(*pAVar13)[local_150];
                                        local_150 = local_150 + 1;
                                        break;
                                    case 42:
                                        pAVar13 = (Array<unsigned char>*)packetJ.SSOBeginPtr();
                                        pbVar14 = (uint8_t*)(*pAVar13)[local_148];
                                        local_148 = local_148 + 1;
                                        break;
                                    default:
                                        switch (arg1) {
                                        case 98:
                                            pAVar13 = (Array<unsigned char>*)packetJ.SSOBeginPtr();
                                            pbVar14 = (uint8_t*)(*pAVar13)[local_e0];
                                            local_e0 = local_e0 + 1;
                                            break;
                                        case 99:
                                            pAVar13 = (Array<unsigned char>*)packetJ.SSOBeginPtr();
                                            pbVar14 = (uint8_t*)(*pAVar13)[local_140];
                                            local_140 = local_140 + 1;
                                            break;
                                        case 100:
                                            pAVar13 = (Array<unsigned char>*)packetJ.SSOBeginPtr();
                                            pbVar14 = (uint8_t*)(*pAVar13)[local_d0];
                                            local_d0 = local_d0 + 1;
                                            break;
                                        case 101:
                                            pAVar13 = (Array<unsigned char>*)packetJ.SSOBeginPtr();
                                            pbVar14 = (uint8_t*)(*pAVar13)[local_d8];
                                            local_d8 = local_d8 + 1;
                                            break;
                                        default:
                                            goto switchD_1002cadc5_caseD_2;
                                        case 123:
                                            goto switchD_1002cb11f_caseD_7b;
                                        }
                                    }
                                }
                                bVar3 = *pbVar14;
                                piVar15 = &local_1f0[arg1];
                                IVar18 = (unsigned int)bVar3 + *piVar15;
                                pIVar16 = &local_1f0[arg1];
                                *pIVar16 = IVar18;
                                local_90.p1<unsigned long>(IVar18 & 127);
                                local_180 = local_180 + 1;
                                uVar24 = (unsigned int)((uint8_t)IVar18 & 127);
                                if (id == 32) {
                                LAB_1002cb0bf:
                                    puVar17 = &local_1b0[local_50];
                                    uVar21 = *puVar17;
                                    puVar17 = &local_1b0[local_50];
                                    *puVar17 = uVar24 << 7 | uVar21 & 4294951039;
                                    bVar26 = false;
                                    local_a8 = arg1;
                                } else {
                                    if (arg1 == 0) {
                                        puVar17 = &local_1b0[local_50];
                                        uVar21 = *puVar17;
                                        puVar17 = &local_1b0[local_50];
                                        *puVar17 = uVar24 << 14 | uVar21 & 4292886527;
                                        if (id == 32)
                                            goto LAB_1002cb0bf;
                                    }
                                    bVar26 = false;
                                    local_a8 = arg1;
                                }
                                break;
                            case 3:
                                if (uVar24 != uVar22) {
                                    local_90.p1<unsigned long>(iVar7 + 224);
                                }
                                pAVar13 = (Array<unsigned char>*)packetJ.SSOBeginPtr();
                                pbVar14 = (uint8_t*)(*pAVar13)[local_f8];
                                bVar3 = *pbVar14;
                                pAVar13 = (Array<unsigned char>*)packetJ.SSOBeginPtr();
                                pbVar14 = (uint8_t*)(*pAVar13)[local_188];
                                local_68 = (unsigned long)*pbVar14 * 128 + local_68 + bVar3;
                                local_90.p1<unsigned long>((ID)local_68 & 127);
                                local_90.p1<unsigned long>((ID)(local_68 >> 7) & 127);
                                local_f8 = local_f8 + 1;
                                local_188 = local_188 + 1;
                                bVar26 = false;
                                break;
                            case 4:
                                if (uVar24 != uVar22) {
                                    local_90.p1<unsigned long>(iVar7 + 208);
                                }
                                pAVar13 = (Array<unsigned char>*)packetJ.SSOBeginPtr();
                                pbVar14 = (uint8_t*)(*pAVar13)[local_198];
                                local_c0 = local_c0 + (unsigned long)*pbVar14;
                                local_90.p1<unsigned long>((ID)local_c0 & 127);
                                local_198 = local_198 + 1;
                                bVar26 = false;
                                break;
                            case 5:
                                if (uVar24 != uVar21) {
                                    local_90.p1<unsigned long>(iVar7 + 160);
                                }
                                pAVar13 = (Array<unsigned char>*)packetJ.SSOBeginPtr();
                                pbVar14 = (uint8_t*)(*pAVar13)[local_60];
                                bVar3 = *pbVar14;
                                pAVar13 = (Array<unsigned char>*)packetJ.SSOBeginPtr();
                                pbVar14 = (uint8_t*)(*pAVar13)[local_190];
                                local_58 = local_58 + (unsigned long)bVar3;
                                bVar3 = *pbVar14;
                                local_90.p1<unsigned long>((ID)local_58 & 127);
                                local_98 = local_98 + (unsigned long)bVar3;
                                local_90.p1<unsigned long>((ID)local_98 & 127);
                                local_60 = local_60 + 1;
                                local_190 = local_190 + 1;
                                bVar26 = false;
                                break;
                            case 6:
                                if (uVar24 != uVar21) {
                                    local_90.p1<unsigned long>(iVar7 + 192);
                                }
                                pAVar13 = (Array<unsigned char>*)packetJ.SSOBeginPtr();
                                pbVar14 = (uint8_t*)(*pAVar13)[local_a0];
                                bVar3 = *pbVar14;
                                piVar15 = &local_1b0[local_50];
                                iVar7 = *piVar15;
                                piVar15 = &local_1d8[local_50];
                                *piVar15 = iVar7 + (unsigned int)bVar3;
                                local_90.p1<unsigned long>((unsigned int)bVar3);
                                local_a0 = local_a0 + 1;
                                bVar26 = false;
                                break;
                            default:
                                pLVar11 = logger::default_logger();
                                bVar26 = false;
                                pLVar11->Log(false, 2,
                                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                             "oldscape/jagex3/midi2/midifile.cpp",
                                             518, "Unrecognised status %i", uVar21);
                            }
                        }
                    }
                    uVar19 = uVar19 + 1;
                    uVar24 = uVar25;
                } while (!bVar26);
                iVar7 = local_90.size();
                local_90.pSize4(iVar7 - (int)local_100);
                uVar10 = local_108 + 1;
            } while (uVar10 != local_118);
        }
        lVar9 = local_90.size();
        pvVar8 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)local_90.SSOBeginPtr();
        lVar20 = pvVar8->end();
        if (lVar9 != lVar20) {
            pLVar11 = logger::default_logger();
            pLVar11->Log(false, 2,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                         "midifile.cpp",
                         530, ".mid size calculation was wrong");
        }
        auto rects = local_90.SSOBeginPtr();
        local_130->swap(*rects);
    }

} // namespace jag::oldscape::midi2

namespace jag {
    // 0x1002c9d30
    shared_ptr_if_not_array<oldscape::midi2::MidiFile>::type
    make_shared<oldscape::midi2::MidiFile, Array<unsigned char>&>(Array<unsigned char>& arg1) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_34;
        MidiFile* local_30[2];

        auto arg1_00 = aligned_alloc(112, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<oldscape::midi2::MidiFile>::type result;
        } else {
            local_30[0] =
                placement_new<oldscape::midi2::MidiFile, Array<unsigned char>&>((void*)((long)arg1_00 + 32), arg1);
            local_34 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::midi2::MidiFile>, int, oldscape::midi2::MidiFile*&>(
                    arg1_00, &local_34, local_30);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_30[0]);
        }
        return result;
    }

} // namespace jag
