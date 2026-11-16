// libs/oldscape/jagex3/midi2/midifile.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "midifile.h"

namespace jag::oldscape::midi2 {
    // 0x1002c9ac0, 112 bytes, base-object constructor, placed by class name and debug map
    // MidiFile::MidiFile(Array<unsigned char, eastl::allocator>&)
    void MidiFile::MidiFile(Array* param_1) {
        allocator local_28[8];

        eastl::allocator::allocator(local_28, "EASTL hash_map");
        new (this) eastl::hash_map<int, MidiFile::PatchNoteSet, eastl::hash<int>, eastl::equal_to<int>,
                                   eastl::allocator, false>(local_28);
        new (&field_56) Array<unsigned char, eastl::allocator>();
        Array<unsigned char, eastl::allocator>::operator=((Array<unsigned char, eastl::allocator>*)&field_56, param_1);
    }

    // 0x1002c9b50, 16 bytes, complete-object constructor, placed by class name and debug map
    // MidiFile::MidiFile(Array<unsigned char, eastl::allocator>&): jumps straight to the base-object constructor

    // 0x1002c9b60, 272 bytes, placed by class name and debug map
    // MidiFile::Load(jagex3::Js5&, int, int)
    MidiFile* MidiFile::Load(Js5* param_1, int param_2, int param_3) {
        PacketT* pPVar2;
        MidiFile* this_00;
        WindowSavedPosition local_70;
        shared_ptr local_50;
        shared_ptr local_40;

        new (&local_40) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
        ((shared_ptr*)param_1)->GetFile((int)&local_40, param_2, (array*)(ulong)(uint)param_3);
        if (operator==(&local_40, (_func_decltype_nullptr*)0)) {
            new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        } else {
            pPVar2 = (PacketT*)shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator*(
                (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)&local_40);
            new (&local_70) WindowSavedPosition(pPVar2);
            this_00 = operator_new(80);
            MidiFile(this_00, (PacketJ*)&local_70);
            shared_ptr<MidiFile>::shared_ptr<MidiFile, void>((shared_ptr<MidiFile>*)&local_50, this_00);
            shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                (shared_ptr<RSevenDebugPresetProvider>*)this, &local_50);
            local_50.~shared_ptr();
            local_70.~WindowSavedPosition();
        }
        local_40.~shared_ptr();
        return this;
    }

    // 0x1002c9c70, 16 bytes, complete-object constructor, placed by class name and debug map
    // MidiFile::MidiFile(PacketJ<Array<unsigned char, eastl::allocator> >&): jumps straight to the base-object constructor

    // 0x1002c9c90, 160 bytes, placed by class name and debug map
    // MidiFile::Load(jagex3::Js5&, int)
    MidiFile* MidiFile::Load(Js5* param_1, int param_2) {
        Layout* this_00;
        vector* pvVar2;
        shared_ptr local_38;

        make_shared<PacketJ<Array<unsigned char, eastl::allocator>>>((jag*)&local_38);
        param_1->GetFile(&local_38, param_2);
        if (operator==(&local_38, (_func_decltype_nullptr*)0)) {
            new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        } else {
            this_00 = (Layout*)shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)&local_38);
            pvVar2 = eastl::string::Layout::SSOBeginPtr(this_00, (type*)0);
            make_shared<MidiFile, Array<unsigned char, eastl::allocator>&>((jag*)this, (Array*)pvVar2);
        }
        local_38.~shared_ptr();
        return this;
    }

    // 0x1002c9dd0, 192 bytes, placed by class name and debug map
    // MidiFile::Load(jagex3::Js5&, eastl::string&, eastl::string&)
    Js5* MidiFile::Load(Js5* param_1, basic_string* param_2, basic_string* param_3) {
        char* pcVar2;
        array* paVar3;
        Layout* this;
        vector* pvVar4;
        shared_ptr local_40;

        make_shared<PacketJ<Array<unsigned char, eastl::allocator>>>((jag*)&local_40);
        pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        paVar3 = (array*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        ((shared_ptr*)param_2)->GetFile((char*)&local_40, pcVar2, paVar3);
        if (operator==(&local_40, (_func_decltype_nullptr*)0)) {
            new (param_1) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        } else {
            this = (Layout*)shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)&local_40);
            pvVar4 = eastl::string::Layout::SSOBeginPtr(this, (type*)0);
            make_shared<MidiFile, Array<unsigned char, eastl::allocator>&>((jag*)param_1, (Array*)pvVar4);
        }
        local_40.~shared_ptr();
        return param_1;
    }

    // 0x1002c9e90, 160 bytes, placed by class name and debug map
    // MidiFile::Load(jagex3::Js5&, eastl::string&)
    Js5* MidiFile::Load(Js5* param_1, basic_string* param_2) {
        char* pcVar2;
        Layout* this;
        vector* pvVar3;
        shared_ptr local_38;

        make_shared<PacketJ<Array<unsigned char, eastl::allocator>>>((jag*)&local_38);
        pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        param_2->GetFile(&local_38, pcVar2);
        if (operator==(&local_38, (_func_decltype_nullptr*)0)) {
            new (param_1) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        } else {
            this = (Layout*)shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)&local_38);
            pvVar3 = eastl::string::Layout::SSOBeginPtr(this, (type*)0);
            make_shared<MidiFile, Array<unsigned char, eastl::allocator>&>((jag*)param_1, (Array*)pvVar3);
        }
        local_38.~shared_ptr();
        return param_1;
    }

    // 0x1002c9f30, 6096 bytes, base-object constructor, placed by class name and debug map
    // MidiFile::MidiFile(PacketJ<Array<unsigned char, eastl::allocator> >&)
    void MidiFile::MidiFile(PacketJ* param_1) {
        bool bVar1;
        PacketJ* pPVar2;
        byte bVar3;
        char cVar4;
        byte bVar5;
        ushort uVar6;
        uint uVar7;
        int iVar8;
        vector* pvVar9;
        long lVar10;
        ulong uVar11;
        undefined8 uVar12;
        undefined4* puVar13;
        byte* pbVar14;
        int* piVar15;
        uint* puVar16;
        type* ptVar17;
        hashtable_iterator_base* extraout_RDX;
        ulong uVar18;
        type* ptVar19;
        long lVar20;
        MidiFile* this_01;
        type* ptVar21;
        type* ptVar22;
        uint uVar23;
        long lVar24;
        uint uVar25;
        uint uVar26;
        bool bVar27;
        eastl local_218[24];
        hashtable_iterator_base local_200[16];
        Array<int, eastl::allocator> local_1f0[24];
        Array<int, eastl::allocator> local_1d8[24];
        ulong local_1c0;
        long local_1b8;
        Array<int, eastl::allocator> local_1b0[24];
        ulong local_198;
        ulong local_190;
        ulong local_188;
        ulong local_180;
        ulong local_178;
        ulong local_170;
        ulong local_168;
        ulong local_160;
        ulong local_158;
        ulong local_150;
        ulong local_148;
        ulong local_140;
        long local_138;
        Array<graphics::Pix32, eastl::allocator>* local_130;
        ulong local_128;
        long local_120;
        ulong local_118;
        int local_10c;
        ulong local_108;
        long local_100;
        type* local_f8;
        ulong local_f0;
        ulong local_e8;
        ulong local_e0;
        ulong local_d8;
        ulong local_d0;
        ushort local_c6;
        int local_c4;
        long local_c0;
        long local_b8;
        ulong local_b0;
        type* local_a8;
        ulong local_a0;
        long local_98;
        WindowSavedPosition local_90;
        ulong local_70;
        ulong local_68;
        type* local_60;
        long local_58;
        ulong local_50;
        byte local_41;

        new (&local_90) eastl::allocator("EASTL hash_map");
        new (this) eastl::hash_map<int, MidiFile::PatchNoteSet, eastl::hash<int>, eastl::equal_to<int>,
                                   eastl::allocator, false>((allocator*)&local_90);
        local_130 = (Array<graphics::Pix32, eastl::allocator>*)&field_56;
        new (local_130) Array<unsigned char, eastl::allocator>();
        pvVar9 = param_1->SSOBeginPtr((type*)&local_90);
        lVar10 = pvVar9->end();
        param_1->SetPos(lVar10 - 3);
        bVar3 = param_1->g1();
        uVar6 = param_1->g2();
        param_1->SetPos(0);
        local_118 = (ulong)(uint)bVar3;
        local_50 = (ulong)((uint)bVar3 * 10 + 14);
        local_c6 = uVar6;
        local_41 = bVar3;
        if (bVar3 == 0) {
            local_98 = 0;
            local_60 = (type*)0;
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
            local_60 = (type*)0;
            local_98 = 0;
            uVar11 = 0;
            do {
                uVar25 = 4294967295;
                local_70 = uVar11;
                do {
                    bVar3 = param_1->g1();
                    bVar27 = uVar25 != bVar3;
                    uVar25 = bVar3 & 15;
                    if (bVar3 == 7) {
                        bVar1 = true;
                    } else if (bVar3 == 23) {
                        local_58 = local_58 + 1;
                        bVar1 = false;
                    } else {
                        switch (uVar25) {
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
                            local_60 = (type*)((long)local_60 + 1);
                            bVar1 = false;
                            break;
                        case 6:
                            local_98 = local_98 + 1;
                            bVar1 = false;
                            break;
                        default:
                            uVar12 = logger::default_logger();
                            bVar1 = false;
                            logger::Logger::Log(uVar12, 0, 2,
                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                                "oldscape/jagex3/midi2/midifile.cpp",
                                                155, "Unrecognised status %i", bVar3);
                        }
                    }
                    local_50 = local_50 + bVar27;
                } while (!bVar1);
                uVar11 = local_70 + 1;
            } while (uVar11 != local_118);
        }
        pPVar2 = param_1;
        lVar10 = local_a0 + (long)local_60;
        local_1c0 = param_1->size();
        uVar11 = lVar10 + local_118 + local_98 + local_b8 + local_68 + local_b0 + local_c0 + local_58;
        local_138 = lVar10;
        if (uVar11 != 0) {
            uVar18 = 0;
            do {
                pPVar2->gMidiVarLen();
                uVar18 = uVar18 + 1;
            } while (uVar18 < uVar11);
        }
        local_1b8 = pPVar2->size();
        local_180 = pPVar2->size();
        lVar10 = local_98;
        if (local_c0 == 0) {
            local_70 = 0;
            local_a8 = (type*)0;
            local_f8 = (type*)0;
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
            local_f8 = (type*)0;
            local_a8 = (type*)0;
            local_70 = 0;
            lVar24 = local_c0;
            do {
                cVar4 = pPVar2->g1();
                bVar5 = bVar3 + cVar4;
                bVar3 = bVar5 & 127;
                if ((bVar5 & 95) == 0) {
                    lVar10 = lVar10 + 1;
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
                        local_f8 = (type*)((long)local_f8 + 1);
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
                lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
        }
        local_178 = pPVar2->size();
        lVar24 = pPVar2->size();
        pPVar2->SetPos(lVar20 + lVar24);
        local_190 = pPVar2->size();
        lVar20 = pPVar2->size();
        pPVar2->SetPos((long)local_60 + lVar20);
        lVar20 = local_c0;
        local_198 = pPVar2->size();
        lVar24 = pPVar2->size();
        pPVar2->SetPos(lVar24 + local_b8);
        local_188 = pPVar2->size();
        lVar24 = pPVar2->size();
        pPVar2->SetPos(lVar24 + local_68);
        local_170 = pPVar2->size();
        lVar24 = pPVar2->size();
        pPVar2->SetPos(local_70 + lVar24);
        local_168 = pPVar2->size();
        lVar24 = pPVar2->size();
        pPVar2->SetPos((long)local_f8 + lVar24);
        local_160 = pPVar2->size();
        lVar24 = pPVar2->size();
        pPVar2->SetPos(local_f0 + lVar24);
        local_60 = (type*)pPVar2->size();
        lVar24 = pPVar2->size();
        uVar11 = local_b0;
        pPVar2->SetPos(local_138 + local_b0 + lVar24);
        local_f0 = pPVar2->size();
        lVar24 = pPVar2->size();
        pPVar2->SetPos(lVar24 + uVar11);
        local_128 = pPVar2->size();
        lVar24 = pPVar2->size();
        pPVar2->SetPos(local_e8 + lVar24);
        local_e8 = pPVar2->size();
        lVar24 = pPVar2->size();
        pPVar2->SetPos(local_a0 + lVar24);
        local_158 = pPVar2->size();
        lVar24 = pPVar2->size();
        pPVar2->SetPos((ulong)(local_a8 + lVar24));
        local_150 = pPVar2->size();
        lVar24 = pPVar2->size();
        pPVar2->SetPos(local_108 + lVar24);
        local_148 = pPVar2->size();
        lVar24 = pPVar2->size();
        pPVar2->SetPos(local_100 + lVar24);
        local_a0 = pPVar2->size();
        lVar24 = pPVar2->size();
        pPVar2->SetPos(lVar10 + lVar24);
        local_f8 = (type*)pPVar2->size();
        lVar10 = pPVar2->size();
        pPVar2->SetPos(lVar10 + local_68);
        local_140 = pPVar2->size();
        lVar10 = pPVar2->size();
        pPVar2->SetPos(local_e0 + lVar10);
        local_e0 = pPVar2->size();
        lVar10 = pPVar2->size();
        pPVar2->SetPos(local_d8 + lVar10);
        local_d8 = pPVar2->size();
        lVar10 = pPVar2->size();
        pPVar2->SetPos(local_d0 + lVar10);
        local_d0 = pPVar2->size();
        lVar10 = pPVar2->size();
        pPVar2->SetPos(local_120 + lVar10);
        local_70 = pPVar2->size();
        lVar10 = pPVar2->size();
        ptVar19 = (type*)(local_58 * 3 + lVar10);
        pPVar2->SetPos((ulong)ptVar19);
        lVar10 = pPVar2->size();
        pvVar9 = pPVar2->SSOBeginPtr(ptVar19);
        lVar24 = pvVar9->end();
        if (lVar10 != lVar24 + -3) {
            uVar12 = logger::default_logger();
            logger::Logger::Log(uVar12, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                                "midi2/midifile.cpp",
                                286, "Chunk lengths added up wrong");
        }
        uVar11 = local_1c0;
        local_90.PacketT(
            ((local_b8 + local_98 + local_58 * 5 + local_50 + (local_138 + local_68 + local_b0 + lVar20) * 2) -
             local_1c0) +
            local_1b8);
        PacketT<Array<unsigned char, eastl::allocator>>::p4<int>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)&local_90, 1297377380);
        PacketT<Array<unsigned char, eastl::allocator>>::p4<int>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)&local_90, 6);
        PacketT<Array<unsigned char, eastl::allocator>>::p2<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)&local_90, (ulong)(1 < local_41));
        PacketT<Array<unsigned char, eastl::allocator>>::p2<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)&local_90, local_118);
        PacketT<Array<unsigned char, eastl::allocator>>::p2<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)&local_90, (ulong)local_c6);
        pPVar2->SetPos(uVar11);
        Array<int, eastl::allocator>::Array(local_1f0, 128);
        Array<int, eastl::allocator>::Array(local_1b0, 16);
        bVar3 = local_41;
        Array<int, eastl::allocator>::Array(local_1d8, 16);
        puVar13 = (undefined4*)Array<int, eastl::allocator>::operator[](local_1d8, 9);
        *puVar13 = 128;
        ptVar19 = (type*)9;
        puVar13 = (undefined4*)Array<int, eastl::allocator>::operator[](local_1b0, 9);
        *puVar13 = 128;
        if (bVar3 != 0) {
            uVar11 = 0;
            local_98 = 0;
            local_c0 = 0;
            local_68 = 0;
            local_b8 = 0;
            local_b0 = 0;
            local_58 = 0;
            local_50 = 0;
            ptVar22 = (type*)0;
            local_a8 = (type*)0;
            do {
                local_108 = uVar11;
                PacketT<Array<unsigned char, eastl::allocator>>::p4<int>(
                    (PacketT<Array<unsigned char, eastl::allocator>>*)&local_90, 1297379947);
                lVar10 = local_90.size();
                local_90.SetPos(lVar10 + 4);
                local_100 = local_90.size();
                local_10c = (int)local_100;
                uVar25 = 4294967295;
                do {
                    pPVar2 = param_1;
                    uVar7 = param_1->gMidiVarLen();
                    ptVar19 = (type*)(ulong)uVar7;
                    local_90.pMidiVarLen(uVar7);
                    local_10c = local_10c + uVar7;
                    pvVar9 = pPVar2->SSOBeginPtr(ptVar19);
                    ptVar19 = ptVar22;
                    pbVar14 = (byte*)Array<unsigned char, eastl::allocator>::operator[](
                        (Array<unsigned char, eastl::allocator>*)pvVar9, (ulong)ptVar22);
                    bVar3 = *pbVar14;
                    uVar26 = bVar3 & 15;
                    uVar7 = (uint)bVar3;
                    if (bVar3 == 23) {
                        if (uVar25 != uVar7) {
                            PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
                                (PacketT<Array<unsigned char, eastl::allocator>>*)&local_90, 255);
                        }
                        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
                            (PacketT<Array<unsigned char, eastl::allocator>>*)&local_90, 81);
                        ptVar19 = (type*)3;
                        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
                            (PacketT<Array<unsigned char, eastl::allocator>>*)&local_90, 3);
                        pvVar9 = param_1->SSOBeginPtr(ptVar19);
                        pbVar14 = (byte*)Array<unsigned char, eastl::allocator>::operator[](
                            (Array<unsigned char, eastl::allocator>*)pvVar9, local_70);
                        ptVar19 = (type*)(ulong)*pbVar14;
                        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
                            (PacketT<Array<unsigned char, eastl::allocator>>*)&local_90, (ulong)ptVar19);
                        uVar11 = local_70 + 1;
                        pvVar9 = param_1->SSOBeginPtr(ptVar19);
                        pbVar14 = (byte*)Array<unsigned char, eastl::allocator>::operator[](
                            (Array<unsigned char, eastl::allocator>*)pvVar9, uVar11);
                        ptVar19 = (type*)(ulong)*pbVar14;
                        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
                            (PacketT<Array<unsigned char, eastl::allocator>>*)&local_90, (ulong)ptVar19);
                        uVar11 = local_70 + 2;
                        pvVar9 = param_1->SSOBeginPtr(ptVar19);
                        pbVar14 = (byte*)Array<unsigned char, eastl::allocator>::operator[](
                            (Array<unsigned char, eastl::allocator>*)pvVar9, uVar11);
                        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
                            (PacketT<Array<unsigned char, eastl::allocator>>*)&local_90, (ulong)*pbVar14);
                        local_70 = local_70 + 3;
                        bVar27 = false;
                    } else {
                        uVar23 = (uint)bVar3;
                        if (bVar3 == 7) {
                            if (uVar25 != 7) {
                                PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
                                    (PacketT<Array<unsigned char, eastl::allocator>>*)&local_90, 255);
                            }
                            PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
                                (PacketT<Array<unsigned char, eastl::allocator>>*)&local_90, 47);
                            bVar27 = true;
                            PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
                                (PacketT<Array<unsigned char, eastl::allocator>>*)&local_90, 0);
                        } else {
                            local_50 = local_50 ^ bVar3 >> 4;
                            switch (uVar26) {
                            case 0:
                                if (uVar25 != uVar23) {
                                    ptVar19 = (type*)(local_50 + 144);
                                    PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
                                        (PacketT<Array<unsigned char, eastl::allocator>>*)&local_90, (ulong)ptVar19);
                                }
                                pvVar9 = param_1->SSOBeginPtr(ptVar19);
                                ptVar19 = local_60;
                                pbVar14 = (byte*)Array<unsigned char, eastl::allocator>::operator[](
                                    (Array<unsigned char, eastl::allocator>*)pvVar9, (ulong)local_60);
                                bVar3 = *pbVar14;
                                pvVar9 = param_1->SSOBeginPtr(ptVar19);
                                pbVar14 = (byte*)Array<unsigned char, eastl::allocator>::operator[](
                                    (Array<unsigned char, eastl::allocator>*)pvVar9, local_f0);
                                local_58 = local_58 + (ulong)bVar3;
                                bVar3 = *pbVar14;
                                PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
                                    (PacketT<Array<unsigned char, eastl::allocator>>*)&local_90,
                                    (ulong)((uint)local_58 & 127));
                                local_b0 = local_b0 + bVar3;
                                uVar11 = local_b0 & 127;
                                PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
                                    (PacketT<Array<unsigned char, eastl::allocator>>*)&local_90,
                                    (ulong)((byte)local_b0 & 127));
                                local_60 = local_60 + 1;
                                local_f0 = local_f0 + 1;
                                if (uVar11 != 0) {
                                    piVar15 = (int*)Array<int, eastl::allocator>::operator[](local_1d8, local_50);
                                    this_01 = (MidiFile*)this;
                                    local_c4 = *piVar15;
                                    eastl::hashtable<int, eastl::pair<int const, dash3d::ModelLit::AABB>,
                                                     eastl::fixed_hashtable_allocator<3ul, 40ul, 1ul, 4ul, 0ul, true,
                                                                                      eastl::allocator>,
                                                     eastl::use_first<eastl::pair<int const, dash3d::ModelLit::AABB>>,
                                                     eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false,
                                                     true, true>::find((int*)local_218);
                                    eastl::hashtable<
                                        int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                                        eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>,
                                        eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                        eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                        true>::end();
                                    bVar27 = eastl::operator==(local_218, local_200, extraout_RDX);
                                    if (bVar27) {
                                        eastl::hashtable<
                                            int, eastl::pair<int const, MidiFile::PatchNoteSet>, eastl::allocator,
                                            eastl::use_first<eastl::pair<int const, MidiFile::PatchNoteSet>>,
                                            eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                            true>::emplace<int&, int&>((int*)local_218, (int*)this_01);
                                        this_01 = (MidiFile*)this;
                                    }
                                    lVar10 = eastl::hash_map<int, MidiFile::PatchNoteSet, eastl::hash<int>,
                                                             eastl::equal_to<int>, eastl::allocator, false>::
                                    operator[]((hash_map<int, MidiFile::PatchNoteSet, eastl::hash<int>,
                                                         eastl::equal_to<int>, eastl::allocator, false>*)this_01,
                                               &local_c4);
                                    ((lVar10 + 8))->set((ulong)((byte)local_58 & 127), true);
                                }
                                bVar27 = false;
                                break;
                            case 1:
                                if (uVar25 != uVar23) {
                                    ptVar19 = (type*)(local_50 + 128);
                                    PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
                                        (PacketT<Array<unsigned char, eastl::allocator>>*)&local_90, (ulong)ptVar19);
                                }
                                pvVar9 = param_1->SSOBeginPtr(ptVar19);
                                ptVar19 = local_60;
                                pbVar14 = (byte*)Array<unsigned char, eastl::allocator>::operator[](
                                    (Array<unsigned char, eastl::allocator>*)pvVar9, (ulong)local_60);
                                bVar3 = *pbVar14;
                                pvVar9 = param_1->SSOBeginPtr(ptVar19);
                                pbVar14 = (byte*)Array<unsigned char, eastl::allocator>::operator[](
                                    (Array<unsigned char, eastl::allocator>*)pvVar9, local_e8);
                                local_58 = local_58 + (ulong)bVar3;
                                bVar3 = *pbVar14;
                                PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
                                    (PacketT<Array<unsigned char, eastl::allocator>>*)&local_90,
                                    (ulong)((uint)local_58 & 127));
                                local_b8 = local_b8 + (ulong)bVar3;
                                PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
                                    (PacketT<Array<unsigned char, eastl::allocator>>*)&local_90,
                                    (ulong)((uint)local_b8 & 127));
                                local_60 = local_60 + 1;
                                local_e8 = local_e8 + 1;
                                bVar27 = false;
                                break;
                            case 2:
                                if (uVar25 != uVar23) {
                                    ptVar19 = (type*)(local_50 + 176);
                                    PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
                                        (PacketT<Array<unsigned char, eastl::allocator>>*)&local_90, (ulong)ptVar19);
                                }
                                pvVar9 = param_1->SSOBeginPtr(ptVar19);
                                pbVar14 = (byte*)Array<unsigned char, eastl::allocator>::operator[](
                                    (Array<unsigned char, eastl::allocator>*)pvVar9, local_180);
                                ptVar17 = local_a8 + *pbVar14;
                                uVar25 = (uint)ptVar17;
                                uVar7 = uVar25 & 127;
                                ptVar21 = (type*)(ulong)uVar7;
                                ptVar19 = ptVar21;
                                PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
                                    (PacketT<Array<unsigned char, eastl::allocator>>*)&local_90, (ulong)ptVar21);
                                if (((ulong)ptVar17 & 95) == 0) {
                                    pvVar9 = param_1->SSOBeginPtr(ptVar19);
                                    pbVar14 = (byte*)Array<unsigned char, eastl::allocator>::operator[](
                                        (Array<unsigned char, eastl::allocator>*)pvVar9, local_a0);
                                    local_a0 = local_a0 + 1;
                                } else {
                                    switch (ptVar21) {
                                    case (type*)1:
                                        pvVar9 = param_1->SSOBeginPtr(ptVar19);
                                        pbVar14 = (byte*)Array<unsigned char, eastl::allocator>::operator[](
                                            (Array<unsigned char, eastl::allocator>*)pvVar9, local_170);
                                        local_170 = local_170 + 1;
                                        break;
                                    case (type*)2:
                                    case (type*)3:
                                    case (type*)4:
                                    case (type*)5:
                                    case (type*)6:
                                    case (type*)8:
                                    case (type*)9:
                                    case (type*)11:
                                    case (type*)12:
                                    case (type*)13:
                                    case (type*)14:
                                    case (type*)15:
                                    case (type*)16:
                                    case (type*)17:
                                    case (type*)18:
                                    case (type*)19:
                                    case (type*)20:
                                    case (type*)21:
                                    case (type*)22:
                                    case (type*)23:
                                    case (type*)24:
                                    case (type*)25:
                                    case (type*)26:
                                    case (type*)27:
                                    case (type*)28:
                                    case (type*)29:
                                    case (type*)30:
                                    case (type*)31:
                                    case (type*)32:
                                    case (type*)34:
                                    case (type*)35:
                                    case (type*)36:
                                    case (type*)37:
                                    case (type*)38:
                                    case (type*)40:
                                    case (type*)41:
                                    switchD_1002cadc5_caseD_2:
                                        uVar25 = uVar25 & 126;
                                        if ((uVar25 == 120) || (uVar25 == 64)) {
                                        switchD_1002cb11f_caseD_7b:
                                            pvVar9 = param_1->SSOBeginPtr(ptVar19);
                                            pbVar14 = (byte*)Array<unsigned char, eastl::allocator>::operator[](
                                                (Array<unsigned char, eastl::allocator>*)pvVar9, local_178);
                                            local_178 = local_178 + 1;
                                        } else {
                                            pvVar9 = param_1->SSOBeginPtr(ptVar19);
                                            pbVar14 = (byte*)Array<unsigned char, eastl::allocator>::operator[](
                                                (Array<unsigned char, eastl::allocator>*)pvVar9, local_128);
                                            local_128 = local_128 + 1;
                                        }
                                        break;
                                    case (type*)7:
                                        pvVar9 = param_1->SSOBeginPtr(ptVar19);
                                        pbVar14 = (byte*)Array<unsigned char, eastl::allocator>::operator[](
                                            (Array<unsigned char, eastl::allocator>*)pvVar9, local_168);
                                        local_168 = local_168 + 1;
                                        break;
                                    case (type*)10:
                                        pvVar9 = param_1->SSOBeginPtr(ptVar19);
                                        pbVar14 = (byte*)Array<unsigned char, eastl::allocator>::operator[](
                                            (Array<unsigned char, eastl::allocator>*)pvVar9, local_160);
                                        local_160 = local_160 + 1;
                                        break;
                                    case (type*)33:
                                        pvVar9 = param_1->SSOBeginPtr(ptVar19);
                                        pbVar14 = (byte*)Array<unsigned char, eastl::allocator>::operator[](
                                            (Array<unsigned char, eastl::allocator>*)pvVar9, local_158);
                                        local_158 = local_158 + 1;
                                        break;
                                    case (type*)39:
                                        pvVar9 = param_1->SSOBeginPtr(ptVar19);
                                        pbVar14 = (byte*)Array<unsigned char, eastl::allocator>::operator[](
                                            (Array<unsigned char, eastl::allocator>*)pvVar9, local_150);
                                        local_150 = local_150 + 1;
                                        break;
                                    case (type*)42:
                                        pvVar9 = param_1->SSOBeginPtr(ptVar19);
                                        pbVar14 = (byte*)Array<unsigned char, eastl::allocator>::operator[](
                                            (Array<unsigned char, eastl::allocator>*)pvVar9, local_148);
                                        local_148 = local_148 + 1;
                                        break;
                                    default:
                                        switch (ptVar21) {
                                        case (type*)98:
                                            pvVar9 = param_1->SSOBeginPtr(ptVar19);
                                            pbVar14 = (byte*)Array<unsigned char, eastl::allocator>::operator[](
                                                (Array<unsigned char, eastl::allocator>*)pvVar9, local_e0);
                                            local_e0 = local_e0 + 1;
                                            break;
                                        case (type*)99:
                                            pvVar9 = param_1->SSOBeginPtr(ptVar19);
                                            pbVar14 = (byte*)Array<unsigned char, eastl::allocator>::operator[](
                                                (Array<unsigned char, eastl::allocator>*)pvVar9, local_140);
                                            local_140 = local_140 + 1;
                                            break;
                                        case (type*)100:
                                            pvVar9 = param_1->SSOBeginPtr(ptVar19);
                                            pbVar14 = (byte*)Array<unsigned char, eastl::allocator>::operator[](
                                                (Array<unsigned char, eastl::allocator>*)pvVar9, local_d0);
                                            local_d0 = local_d0 + 1;
                                            break;
                                        case (type*)101:
                                            pvVar9 = param_1->SSOBeginPtr(ptVar19);
                                            pbVar14 = (byte*)Array<unsigned char, eastl::allocator>::operator[](
                                                (Array<unsigned char, eastl::allocator>*)pvVar9, local_d8);
                                            local_d8 = local_d8 + 1;
                                            break;
                                        default:
                                            goto switchD_1002cadc5_caseD_2;
                                        case (type*)123:
                                            goto switchD_1002cb11f_caseD_7b;
                                        }
                                    }
                                }
                                bVar3 = *pbVar14;
                                piVar15 = (int*)Array<int, eastl::allocator>::operator[](local_1f0, (ulong)ptVar21);
                                uVar25 = (uint)bVar3 + *piVar15;
                                puVar16 = (uint*)Array<int, eastl::allocator>::operator[](local_1f0, (ulong)ptVar21);
                                *puVar16 = uVar25;
                                PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
                                    (PacketT<Array<unsigned char, eastl::allocator>>*)&local_90, (ulong)(uVar25 & 127));
                                local_180 = local_180 + 1;
                                uVar25 = (uint)((byte)uVar25 & 127);
                                if (uVar7 == 32) {
                                LAB_1002cb0bf:
                                    puVar16 = (uint*)Array<int, eastl::allocator>::operator[](local_1b0, local_50);
                                    uVar7 = *puVar16;
                                    puVar16 = (uint*)Array<int, eastl::allocator>::operator[](local_1b0, local_50);
                                    *puVar16 = uVar25 << 7 | uVar7 & 4294951039;
                                    bVar27 = false;
                                    local_a8 = ptVar21;
                                } else {
                                    if (ptVar21 == (type*)0) {
                                        puVar16 = (uint*)Array<int, eastl::allocator>::operator[](local_1b0, local_50);
                                        uVar23 = *puVar16;
                                        puVar16 = (uint*)Array<int, eastl::allocator>::operator[](local_1b0, local_50);
                                        *puVar16 = uVar25 << 14 | uVar23 & 4292886527;
                                        if (uVar7 == 32)
                                            goto LAB_1002cb0bf;
                                    }
                                    bVar27 = false;
                                    local_a8 = ptVar21;
                                }
                                break;
                            case 3:
                                if (uVar25 != uVar23) {
                                    ptVar19 = (type*)(local_50 + 224);
                                    PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
                                        (PacketT<Array<unsigned char, eastl::allocator>>*)&local_90, (ulong)ptVar19);
                                }
                                pvVar9 = param_1->SSOBeginPtr(ptVar19);
                                ptVar19 = local_f8;
                                pbVar14 = (byte*)Array<unsigned char, eastl::allocator>::operator[](
                                    (Array<unsigned char, eastl::allocator>*)pvVar9, (ulong)local_f8);
                                bVar3 = *pbVar14;
                                pvVar9 = param_1->SSOBeginPtr(ptVar19);
                                pbVar14 = (byte*)Array<unsigned char, eastl::allocator>::operator[](
                                    (Array<unsigned char, eastl::allocator>*)pvVar9, local_188);
                                local_68 = (ulong)*pbVar14 * 128 + local_68 + bVar3;
                                PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
                                    (PacketT<Array<unsigned char, eastl::allocator>>*)&local_90,
                                    (ulong)((uint)local_68 & 127));
                                PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
                                    (PacketT<Array<unsigned char, eastl::allocator>>*)&local_90,
                                    (ulong)((uint)(local_68 >> 7) & 127));
                                local_f8 = local_f8 + 1;
                                local_188 = local_188 + 1;
                                bVar27 = false;
                                break;
                            case 4:
                                if (uVar25 != uVar23) {
                                    ptVar19 = (type*)(local_50 + 208);
                                    PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
                                        (PacketT<Array<unsigned char, eastl::allocator>>*)&local_90, (ulong)ptVar19);
                                }
                                pvVar9 = param_1->SSOBeginPtr(ptVar19);
                                pbVar14 = (byte*)Array<unsigned char, eastl::allocator>::operator[](
                                    (Array<unsigned char, eastl::allocator>*)pvVar9, local_198);
                                local_c0 = local_c0 + (ulong)*pbVar14;
                                PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
                                    (PacketT<Array<unsigned char, eastl::allocator>>*)&local_90,
                                    (ulong)((uint)local_c0 & 127));
                                local_198 = local_198 + 1;
                                bVar27 = false;
                                break;
                            case 5:
                                if (uVar25 != uVar7) {
                                    ptVar19 = (type*)(local_50 + 160);
                                    PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
                                        (PacketT<Array<unsigned char, eastl::allocator>>*)&local_90, (ulong)ptVar19);
                                }
                                pvVar9 = param_1->SSOBeginPtr(ptVar19);
                                ptVar19 = local_60;
                                pbVar14 = (byte*)Array<unsigned char, eastl::allocator>::operator[](
                                    (Array<unsigned char, eastl::allocator>*)pvVar9, (ulong)local_60);
                                bVar3 = *pbVar14;
                                pvVar9 = param_1->SSOBeginPtr(ptVar19);
                                pbVar14 = (byte*)Array<unsigned char, eastl::allocator>::operator[](
                                    (Array<unsigned char, eastl::allocator>*)pvVar9, local_190);
                                local_58 = local_58 + (ulong)bVar3;
                                bVar3 = *pbVar14;
                                PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
                                    (PacketT<Array<unsigned char, eastl::allocator>>*)&local_90,
                                    (ulong)((uint)local_58 & 127));
                                local_98 = local_98 + (ulong)bVar3;
                                PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
                                    (PacketT<Array<unsigned char, eastl::allocator>>*)&local_90,
                                    (ulong)((uint)local_98 & 127));
                                local_60 = local_60 + 1;
                                local_190 = local_190 + 1;
                                bVar27 = false;
                                break;
                            case 6:
                                if (uVar25 != uVar7) {
                                    ptVar19 = (type*)(local_50 + 192);
                                    PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
                                        (PacketT<Array<unsigned char, eastl::allocator>>*)&local_90, (ulong)ptVar19);
                                }
                                pvVar9 = param_1->SSOBeginPtr(ptVar19);
                                pbVar14 = (byte*)Array<unsigned char, eastl::allocator>::operator[](
                                    (Array<unsigned char, eastl::allocator>*)pvVar9, local_a0);
                                bVar3 = *pbVar14;
                                piVar15 = (int*)Array<int, eastl::allocator>::operator[](local_1b0, local_50);
                                iVar8 = *piVar15;
                                piVar15 = (int*)Array<int, eastl::allocator>::operator[](local_1d8, local_50);
                                *piVar15 = iVar8 + (uint)bVar3;
                                PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
                                    (PacketT<Array<unsigned char, eastl::allocator>>*)&local_90, (ulong)(uint)bVar3);
                                local_a0 = local_a0 + 1;
                                bVar27 = false;
                                break;
                            default:
                                uVar12 = logger::default_logger();
                                bVar27 = false;
                                logger::Logger::Log(uVar12, 0, 2,
                                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                    "libs/oldscape/jagex3/midi2/midifile.cpp",
                                                    518, "Unrecognised status %i", uVar7);
                            }
                        }
                    }
                    ptVar22 = ptVar22 + 1;
                    uVar25 = uVar26;
                } while (!bVar27);
                iVar8 = local_90.size();
                ptVar19 = (type*)(ulong)(uint)(iVar8 - (int)local_100);
                local_90.pSize4(iVar8 - (int)local_100);
                uVar11 = local_108 + 1;
            } while (uVar11 != local_118);
        }
        lVar10 = local_90.size();
        pvVar9 = local_90.SSOBeginPtr(ptVar19);
        lVar20 = pvVar9->end();
        if (lVar10 != lVar20) {
            uVar12 = logger::default_logger();
            ptVar19 = (type*)0;
            logger::Logger::Log(uVar12, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                                "midi2/midifile.cpp",
                                530, ".mid size calculation was wrong");
        }
        pvVar9 = local_90.SSOBeginPtr(ptVar19);
        local_130->swap(pvVar9);
        local_1d8->~Array();
        local_1b0->~Array();
        local_1f0->~Array();
        local_90.~WindowSavedPosition();
    }

} // namespace jag::oldscape::midi2

namespace jag {
    // 0x1002c9d30, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::midi2::MidiFile>::type make_shared<oldscape::midi2::MidiFile, Array<unsigned char, eastl::allocator>&>(Array<unsigned char, eastl::allocator>&)
    jag* make_shared<oldscape::midi2::MidiFile, Array<unsigned char, eastl::allocator>&>(Array* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        MidiFile* local_30[2];

        pvVar1 = (void*)aligned_alloc(112, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] = placement_new<oldscape::midi2::MidiFile, Array<unsigned char, eastl::allocator>&>(
                (void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::midi2::MidiFile>, int, oldscape::midi2::MidiFile*&>(
                pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

} // namespace jag
