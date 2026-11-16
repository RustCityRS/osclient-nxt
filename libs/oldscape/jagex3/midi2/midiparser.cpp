// libs/oldscape/jagex3/midi2/midiparser.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "midiparser.h"

namespace jag::oldscape::midi2 {
    // 0x100d41be0, 128 bytes, __const
    MidiParser::m_msgLen = {
        33686018, 33686018, 33686018, 33686018, 33686018, 33686018, 33686018, 33686018, 33686018, 33686018, 33686018,
        33686018, 33686018, 33686018, 33686018, 33686018, 16843009, 16843009, 16843009, 16843009, 16843009, 16843009,
        16843009, 16843009, 33686018, 33686018, 33686018, 33686018, 16908544, 0,        0,        0,
    };

    // 0x1002d00d0, 192 bytes, base-object constructor, placed by class name
    // MidiParser::MidiParser()
    void MidiParser::MidiParser() {
        new (this) PacketJ<Array<unsigned char, eastl::allocator>>();
        new (&field_40) Array<int, eastl::allocator>();
        new (&field_72) Array<int, eastl::allocator>();
        new (&field_96) Array<int, eastl::allocator>();
        new (&field_120) Array<int, eastl::allocator>();
        new (&field_144) Array<int, eastl::allocator>();
        m_midiPos = 0;
    }

    // 0x1002d0190, 16 bytes, complete-object constructor, placed by class name
    // MidiParser::MidiParser(): jumps straight to the base-object constructor

    // 0x1002d01a0, 240 bytes, base-object constructor, placed by class name
    // MidiParser::MidiParser(Array<unsigned char, eastl::allocator>&, ErrorCapture&)
    void MidiParser::MidiParser(Array* param_1, ErrorCapture* param_2) {
        new (this) PacketJ<Array<unsigned char, eastl::allocator>>();
        new (&field_40) Array<int, eastl::allocator>();
        new (&field_72) Array<int, eastl::allocator>();
        new (&field_96) Array<int, eastl::allocator>();
        new (&field_120) Array<int, eastl::allocator>();
        new (&field_144) Array<int, eastl::allocator>();
        m_midiPos = 0;
        SetMidi(this, param_1, param_2);
    }

    // 0x1002d0290, 768 bytes, placed by class name
    // MidiParser::SetMidi(Array<unsigned char, eastl::allocator>&, ErrorCapture&)
    void MidiParser::SetMidi(Array* param_1, ErrorCapture* param_2) {
        undefined1* this_00;
        bool bVar1;
        ushort uVar2;
        ushort uVar3;
        int iVar4;
        uint uVar5;
        int iVar6;
        int iVar7;
        int iVar8;
        undefined4 uVar9;
        type* ptVar10;
        vector* pvVar11;
        undefined4* puVar12;
        int* piVar13;
        ulong uVar14;
        type* ptVar15;
        char* pcVar16;
        int local_34;

        SetDataRaw(param_1);
        SetMidiPos(this, 0);
        iVar4 = g4();
        if ((iVar4 != 1297377380) || (iVar4 = g4(), iVar4 != 6)) {
            param_2->Raise("%s, Unexpected data", "SetMidi");
            return;
        }
        uVar2 = g2();
        if (uVar2 < 2) {
            uVar3 = g2();
            if ((uVar3 != 0) && ((bVar1 = true, uVar2 != 0 || (uVar3 == 1))))
                goto LAB_1002d034f;
        } else {
            uVar3 = 0;
        }
        bVar1 = false;
        param_2->Raise("%s, Unexpected data", "SetMidi");
    LAB_1002d034f:
        if (!bVar1) {
            return;
        }
        uVar2 = g2();
        uVar14 = (ulong)uVar2;
        field_32 = (uint)uVar2;
        field_64 = 500000;
        if ((short)uVar2 < 0) {
            pcVar16 = "%s, Invalid division: %i";
        } else {
            ptVar10 = (type*)(ulong)uVar3;
            this_00 = &field_72;
            this_00->set_max_size((ulong)ptVar10, 3);
            pcVar16 = (char*)ptVar10;
            (&field_96, (ulong)ptVar10, 3)->set_max_size();
            local_34 = 0;
            while (true) {
                if ((int)(uint)uVar3 <= local_34) {
                    field_168 = 0;
                    (&field_120, (ulong)ptVar10, 3)->set_max_size();
                    if (uVar3 != 0) {
                        ptVar15 = (type*)0;
                        do {
                            puVar12 = (undefined4*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)this_00, (ulong)ptVar15);
                            uVar9 = *puVar12;
                            puVar12 = (undefined4*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)&field_120, (ulong)ptVar15);
                            *puVar12 = uVar9;
                            ptVar15 = ptVar15 + 1;
                        } while (ptVar10 != ptVar15);
                    }
                    (&field_40, (ulong)ptVar10, 3)->set_max_size();
                    (&field_144, (ulong)ptVar10, 3)->set_max_size();
                    return;
                }
                iVar4 = GetMidiPos(this);
                pvVar11 = SSOBeginPtr(pcVar16);
                iVar6 = pvVar11->end();
                if (iVar6 < iVar4 + 8)
                    break;
                iVar4 = g4();
                iVar6 = g4();
                iVar7 = GetMidiPos(this);
                pvVar11 = SSOBeginPtr(pcVar16);
                iVar8 = pvVar11->end();
                if (iVar8 < iVar7 + iVar6) {
                    uVar5 = GetMidiPos(this);
                    pcVar16 = "%s, Midi pos is out of range: %i";
                    param_2->Raise("%s, Midi pos is out of range: %i", "SetMidi", (ulong)uVar5);
                } else {
                    if (iVar4 == 1297379947) {
                        uVar9 = GetMidiPos(this);
                        puVar12 = (undefined4*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)this_00, (long)local_34);
                        *puVar12 = uVar9;
                        iVar4 = GetMidiPos(this);
                        piVar13 = (int*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)&field_96, (long)local_34);
                        *piVar13 = iVar4 + iVar6;
                        local_34 = local_34 + 1;
                    }
                    iVar4 = GetMidiPos(this);
                    pcVar16 = (char*)(ulong)(uint)(iVar6 + iVar4);
                    SetMidiPos(this, iVar6 + iVar4);
                }
                if (iVar8 < iVar7 + iVar6) {
                    return;
                }
            }
            uVar5 = GetMidiPos(this);
            pcVar16 = "%s, Midi pos is out of range: %i";
            uVar14 = (ulong)uVar5;
        }
        param_2->Raise(pcVar16, "SetMidi", uVar14);
    }

    // 0x1002d0590, 16 bytes, complete-object constructor, placed by class name
    // MidiParser::MidiParser(Array<unsigned char, eastl::allocator>&, ErrorCapture&): jumps straight to the base-object constructor

    // 0x1002d0600, 64 bytes, placed by class name
    // MidiParser::SetMidiPos(int)
    void MidiParser::SetMidiPos(int param_1) {
        ulong uVar2;

        m_midiPos = param_1;
        if (param_1 < 0) {
            uVar2 = GetTextureAtlas() - 1;
        } else {
            uVar2 = (ulong)param_1;
        }
        SetPos(uVar2);
    }

    // 0x1002d0640, 32 bytes, placed by class name
    // MidiParser::GetMidiPos()
    void MidiParser::GetMidiPos() {
        if (-1 < m_midiPos) {
            size();
        }
    }

    // 0x1002d0660, 112 bytes, placed by class name
    // MidiParser::DropMidi()
    void MidiParser::DropMidi() {
        vector* this_00;
        type* in_RSI;

        this_00 = SSOBeginPtr(in_RSI);
        this_00->set_max_size(0, 0);
        (&field_72, 0, 0)->set_max_size();
        (&field_96, 0, 0)->set_max_size();
        (&field_120, 0, 0)->set_max_size();
        (&field_40, 0, 0)->set_max_size();
        (&field_144, 0, 0)->set_max_size();
    }

    // 0x1002d06d0, 32 bytes, placed by class name
    // MidiParser::GotMidi()
    ulong MidiParser::GotMidi() {
        vector* this_00;
        ulong uVar1;
        type* in_RSI;

        this_00 = SSOBeginPtr(in_RSI);
        uVar1 = this_00->empty();
        return uVar1 ^ 1;
    }

    // 0x1002d06f0, 16 bytes, placed by class name
    // MidiParser::NumTracks()
    void MidiParser::NumTracks() {
        (&field_120)->end();
    }

    // 0x1002d0700, 48 bytes, placed by class name
    // MidiParser::SetTrack(int)
    void MidiParser::SetTrack(int param_1) {
        int* piVar1;

        piVar1 =
            (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_120, (long)param_1);
        SetMidiPos(this, *piVar1);
    }

    // 0x1002d0730, 64 bytes, placed by class name
    // MidiParser::UnsetTrack(int)
    void MidiParser::UnsetTrack(int param_1) {
        undefined4* puVar1;
        undefined4 uVar2;

        uVar2 = GetMidiPos(this);
        puVar1 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_120,
                                                                       (long)param_1);
        *puVar1 = uVar2;
    }

    // 0x1002d0770, 16 bytes, placed by class name
    // MidiParser::FinishTrack()
    void MidiParser::FinishTrack() {
        SetMidiPos(this, -1);
    }

    // 0x1002d0780, 32 bytes, placed by class name
    // MidiParser::TrackFinished()
    bool MidiParser::TrackFinished() {
        return GetMidiPos(this) == -1;
    }

    // 0x1002d07a0, 176 bytes, placed by class name
    // MidiParser::Reset()
    void MidiParser::Reset() {
        undefined4 uVar1;
        undefined4* puVar2;
        uint uVar3;
        ulong uVar4;

        field_168 = 0;
        uVar3 = (&field_120)->end();
        if (0 < (int)uVar3) {
            uVar4 = 0;
            do {
                puVar2 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_40,
                                                                               uVar4);
                *puVar2 = 0;
                puVar2 = (undefined4*)Array<int, eastl::allocator>::operator[](
                    (Array<int, eastl::allocator>*)&field_144, uVar4);
                *puVar2 = 0;
                puVar2 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_72,
                                                                               uVar4);
                uVar1 = *puVar2;
                puVar2 = (undefined4*)Array<int, eastl::allocator>::operator[](
                    (Array<int, eastl::allocator>*)&field_120, uVar4);
                *puVar2 = uVar1;
                uVar4 = uVar4 + 1;
            } while (uVar3 != uVar4);
        }
    }

    // 0x1002d0850, 64 bytes, placed by class name
    // MidiParser::ProcessDeltaTime(int)
    void MidiParser::ProcessDeltaTime(int param_1) {
        int iVar1;
        int* piVar2;

        iVar1 = gMidiVarLen();
        piVar2 =
            (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_40, (long)param_1);
        *piVar2 = *piVar2 + iVar1;
    }

    // 0x1002d0890, 112 bytes, placed by class name
    // MidiParser::GetEvent(int)
    undefined4 MidiParser::GetEvent(int param_1) {
        undefined4 uVar1;
        uint uVar2;
        int* piVar3;

        uVar1 = GetEvent2(this, param_1);
        uVar2 = GetMidiPos(this);
        piVar3 =
            (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_96, (long)param_1);
        if (*piVar3 < (int)uVar2) {
            /* WARNING: Subroutine does not return */
            LogAssert("checkMidiPos <= m_trackEnd[track]",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                      "midiparser.cpp",
                      211, "Unexpected midi pos: %i", (ulong)uVar2);
        }
        return uVar1;
    }

    // 0x1002d0900, 368 bytes, placed by class name
    // MidiParser::GetEvent2(int)
    /* WARNING: Removing unreachable block (ram,4297919074) */
    /* MidiParser::GetEvent2(int) */

    undefined8 MidiParser::GetEvent2(int param_1) {
        byte bVar1;
        int iVar2;
        int iVar3;
        vector* pvVar4;
        byte* pbVar5;
        uint* puVar6;
        undefined8 uVar7;
        uint uVar8;
        undefined4 in_register_00000034;
        type* ptVar9;

        pvVar4 = SSOBeginPtr((type*)CONCAT44(in_register_00000034, param_1));
        iVar2 = GetMidiPos(this);
        pbVar5 = (byte*)Array<unsigned char, eastl::allocator>::operator[](
            (Array<unsigned char, eastl::allocator>*)pvVar4, (long)iVar2);
        uVar8 = (uint)*pbVar5;
        ptVar9 = (type*)(long)param_1;
        if ((char)*pbVar5 < '\0') {
            puVar6 = (uint*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_144,
                                                                     (ulong)ptVar9);
            *puVar6 = uVar8;
            iVar2 = GetMidiPos(this);
            ptVar9 = (type*)(ulong)(iVar2 + 1U);
            SetMidiPos(this, iVar2 + 1U);
        } else {
            puVar6 = (uint*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_144,
                                                                     (ulong)ptVar9);
            uVar8 = *puVar6;
            if (uVar8 == 0) {
                /* WARNING: Subroutine does not return */
                LogAssert("status != 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midiparser.cpp",
                          233, "Unexpected zero status");
            }
        }
        if ((uVar8 == 247) || (uVar8 == 240)) {
            iVar2 = gMidiVarLen();
            if ((uVar8 == 247) && (0 < iVar2)) {
                pvVar4 = SSOBeginPtr(ptVar9);
                iVar3 = GetMidiPos(this);
                pbVar5 = (byte*)Array<unsigned char, eastl::allocator>::operator[](
                    (Array<unsigned char, eastl::allocator>*)pvVar4, (long)iVar3);
                bVar1 = *pbVar5;
                if (((byte)(bVar1 + 15) < 14) && ((11943UL >> ((ulong)(byte)(bVar1 + 15) & 63) & 1) != 0)) {
                    iVar2 = GetMidiPos(this);
                    SetMidiPos(this, iVar2 + 1);
                    puVar6 = (uint*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_144,
                                                                             (long)param_1);
                    *puVar6 = (uint)bVar1;
                    uVar7 = GetEvent3(this, param_1, (uint)bVar1);
                    return uVar7;
                }
            }
            iVar3 = GetMidiPos(this);
            SetMidiPos(this, iVar2 + iVar3);
            uVar7 = 0;
        } else {
            uVar7 = GetEvent3(this, param_1, uVar8);
        }
        return uVar7;
    }

    // 0x1002d0a70, 272 bytes, placed by class name
    // MidiParser::GetEvent3(int, int)
    uint MidiParser::GetEvent3(int param_1, int param_2) {
        char cVar1;
        byte bVar2;
        int iVar3;
        int iVar4;
        char* pcVar5;
        int* piVar6;

        if (param_2 == 255) {
            cVar1 = g1();
            iVar3 = gMidiVarLen();
            if (cVar1 == 'Q') {
                iVar4 = g3();
                piVar6 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_40,
                                                                        (long)param_1);
                field_168 = field_168 + ((long)field_64 - (long)iVar4) * (long)*piVar6;
                field_64 = iVar4;
                iVar4 = GetMidiPos(this);
                SetMidiPos(this, iVar3 + iVar4 + -3);
                param_2 = 2;
            } else if (cVar1 == '/') {
                iVar4 = GetMidiPos(this);
                SetMidiPos(this, iVar3 + iVar4);
                param_2 = 1;
            } else {
                iVar4 = GetMidiPos(this);
                SetMidiPos(this, iVar3 + iVar4);
                param_2 = 3;
            }
        } else {
            pcVar5 = (char*)std::array<signed char, 128ul>::operator[]((long)(param_2 + -128));
            cVar1 = *pcVar5;
            if ('\0' < cVar1) {
                bVar2 = g1();
                param_2 = (uint)bVar2 << 8 | param_2;
            }
            if ('\x01' < cVar1) {
                bVar2 = g1();
                param_2 = (uint)bVar2 << 16 | param_2;
            }
        }
        return param_2;
    }

    // 0x1002d0b90, 32 bytes, placed by class name
    // MidiParser::TimeFromTick(int)
    long MidiParser::TimeFromTick(int param_1) {
        return (long)field_64 * (long)param_1 + field_168;
    }

    // 0x1002d0bb0, 160 bytes, placed by class name
    // MidiParser::NextTrackToPlay()
    undefined4 MidiParser::NextTrackToPlay() {
        uint uVar1;
        int* piVar2;
        ulong uVar3;
        int iVar4;
        undefined8 uStack_38;

        uVar1 = (&field_120)->end();
        if ((int)uVar1 < 1) {
            uStack_38._4_4_ = 4294967295;
        } else {
            uStack_38 = -4294967296;
            iVar4 = 2147483647;
            uVar3 = 0;
            do {
                piVar2 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_120, uVar3);
                if (*piVar2 != -1) {
                    piVar2 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_40, uVar3);
                    if (*piVar2 < iVar4) {
                        piVar2 = (int*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)&field_40, uVar3);
                        iVar4 = *piVar2;
                        uStack_38 = uVar3 << 32;
                    }
                }
                uVar3 = uVar3 + 1;
            } while (uVar1 != uVar3);
        }
        return uStack_38._4_4_;
    }

    // 0x1002d0c50, 144 bytes, placed by class name
    // MidiParser::AllTracksFinished()
    ulong MidiParser::AllTracksFinished() {
        uint uVar1;
        int* piVar2;
        ulong uVar3;
        bool bVar4;
        undefined8 unaff_R12;
        undefined1* this_00;

        this_00 = &field_120;
        uVar1 = this_00->end();
        bVar4 = 0 < (int)uVar1;
        if (0 < (int)uVar1) {
            piVar2 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00, 0);
            bVar4 = true;
            if (*piVar2 < 0) {
                uVar3 = 1;
                do {
                    bVar4 = (long)uVar3 < (long)(int)uVar1;
                    if (uVar1 == uVar3)
                        break;
                    piVar2 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00, uVar3);
                    uVar3 = uVar3 + 1;
                } while (*piVar2 < 0);
            }
        }
        return (CONCAT71((int7)((ulong)unaff_R12 >> 8), bVar4) ^ 1) & 4294967295;
    }

    // 0x1002d0ce0, 208 bytes, placed by class name
    // MidiParser::Restart(long long)
    void MidiParser::Restart(longlong param_1) {
        undefined4* puVar1;
        int* piVar2;
        uint uVar3;
        undefined4 uVar4;
        ulong uVar5;

        field_168 = param_1;
        uVar3 = (&field_120)->end();
        if (0 < (int)uVar3) {
            uVar5 = 0;
            do {
                puVar1 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_40,
                                                                               uVar5);
                *puVar1 = 0;
                puVar1 = (undefined4*)Array<int, eastl::allocator>::operator[](
                    (Array<int, eastl::allocator>*)&field_144, uVar5);
                *puVar1 = 0;
                piVar2 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_72, uVar5);
                SetMidiPos(this, *piVar2);
                ProcessDeltaTime(this, (int)uVar5);
                uVar4 = GetMidiPos(this);
                puVar1 = (undefined4*)Array<int, eastl::allocator>::operator[](
                    (Array<int, eastl::allocator>*)&field_120, uVar5);
                *puVar1 = uVar4;
                uVar5 = uVar5 + 1;
            } while (uVar3 != uVar5);
        }
    }

    // 0x1002d0db0, 496 bytes, placed by class name
    // MidiParser::Resize(int, int, int, int)
    void MidiParser::Resize(int param_1, int param_2, int param_3, int param_4) {
        int iVar1;
        int iVar2;
        vector* pvVar3;
        long lVar4;
        void* pvVar5;
        type* ptVar6;
        long lVar7;
        int* piVar8;
        ulong uVar9;
        undefined4 in_register_00000034;
        int iVar10;
        undefined1* this_00;
        Array<unsigned char, eastl::allocator> local_68[24];
        void* local_50;
        Array<int, eastl::allocator>* local_48;
        ulong local_38;

        iVar10 = param_4 - param_3;
        if (iVar10 != 0) {
            pvVar3 = SSOBeginPtr((type*)CONCAT44(in_register_00000034, param_1));
            lVar4 = pvVar3->end();
            local_38 = (ulong)param_3;
            local_50 = (void*)(long)param_4;
            Array<unsigned char, eastl::allocator>::Array(local_68, ((long)local_50 - local_38) + lVar4);
            pvVar5 = (void*)local_68->data();
            ptVar6 = (type*)GetDataPtr();
            local_48 = (Array<int, eastl::allocator>*)(long)param_2;
            _memcpy(pvVar5, ptVar6, (size_t)local_48);
            lVar4 = local_68->data();
            lVar7 = GetDataPtr();
            uVar9 = local_38;
            pvVar5 = (void*)(lVar4 + (long)local_48 + (long)local_50);
            local_50 = (void*)(lVar7 + (long)local_48 + local_38);
            pvVar3 = SSOBeginPtr(ptVar6);
            lVar4 = pvVar3->end();
            _memcpy(pvVar5, local_50, lVar4 - (uVar9 + (long)local_48));
            SetDataRaw(local_68);
            local_48 = (Array<int, eastl::allocator>*)&field_72;
            local_38 = (ulong)param_1;
            piVar8 = (int*)Array<int, eastl::allocator>::operator[](local_48, local_38);
            SetMidiPos(this, *piVar8 + -4);
            iVar1 = g4();
            iVar2 = GetMidiPos(this);
            SetMidiPos(this, iVar2 + -4);
            PacketT<Array<unsigned char, eastl::allocator>>::p4<int>(
                (PacketT<Array<unsigned char, eastl::allocator>>*)this, iVar1 + iVar10);
            piVar8 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_96, local_38);
            *piVar8 = *piVar8 + iVar10;
            this_00 = &field_120;
            piVar8 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00, local_38);
            if (param_2 < *piVar8) {
                piVar8 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00, local_38);
                *piVar8 = *piVar8 + iVar10;
            }
            iVar1 = this_00->end();
            if (param_1 + 1 < iVar1) {
                uVar9 = (ulong)(param_1 + 1);
                iVar1 = ~param_1 + iVar1;
                do {
                    piVar8 = (int*)Array<int, eastl::allocator>::operator[](local_48, uVar9);
                    *piVar8 = *piVar8 + iVar10;
                    piVar8 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00, uVar9);
                    *piVar8 = *piVar8 + iVar10;
                    piVar8 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_96, uVar9);
                    *piVar8 = *piVar8 + iVar10;
                    uVar9 = uVar9 + 1;
                    iVar1 = iVar1 + -1;
                } while (iVar1 != 0);
            }
            local_68->~Array();
        }
    }

    // 0x1002d0fa0, 64 bytes, placed by class name
    // MidiParser::InsertEvent(int, int, Array<signed char, eastl::allocator>&, ErrorCapture&)
    void MidiParser::InsertEvent(int param_1, int param_2, Array* param_3, ErrorCapture* param_4) {
        vector* this_00;
        undefined4 in_register_00000034;

        this_00 = SSOBeginPtr((type*)CONCAT44(in_register_00000034, param_1));
        Array<unsigned char, eastl::allocator>::operator[]((Array<unsigned char, eastl::allocator>*)this_00,
                                                           (long)param_2);
        param_4->Raise("Cannot insert event here: will break running status");
    }

    // 0x1002d0fe0, 224 bytes, placed by class name
    // MidiParser::ChangeDeltaTime(int, int, int)
    void MidiParser::ChangeDeltaTime(int param_1, int param_2, int param_3) {
        int iVar1;
        int iVar2;
        int iVar3;

        SetMidiPos(this, param_2);
        gMidiVarLen();
        iVar1 = GetMidiPos(this);
        iVar3 = 3;
        if (param_3 < 16384) {
            iVar3 = (127 < param_3) + 1;
        }
        iVar2 = 4;
        if (param_3 < 2097152) {
            iVar2 = iVar3;
        }
        iVar3 = 5;
        if (param_3 < 268435456) {
            iVar3 = iVar2;
        }
        Resize(this, param_1, param_2, iVar1 - param_2, iVar3);
        SetMidiPos(this, param_2);
        pMidiVarLen(param_3);
        iVar1 = GetMidiPos(this);
        if (iVar1 - param_2 != iVar3) {
            /* WARNING: Subroutine does not return */
            LogAssert("GetMidiPos() - pos == newlen",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                      "midiparser.cpp",
                      451, "Oops, I got the length wrong");
        }
    }

} // namespace jag::oldscape::midi2
