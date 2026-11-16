// libs/oldscape/jagex3/midi2/midiparser.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "midiparser.h"

namespace jag::oldscape::midi2 {
    // 0x100d41be0
    int32_t MidiParser::m_msgLen[32] = {
        33686018, 33686018, 33686018, 33686018, 33686018, 33686018, 33686018, 33686018, 33686018, 33686018, 33686018,
        33686018, 33686018, 33686018, 33686018, 33686018, 16843009, 16843009, 16843009, 16843009, 16843009, 16843009,
        16843009, 16843009, 33686018, 33686018, 33686018, 33686018, 16908544, 0,        0,        0,
    };

    // 0x1002d00d0
    MidiParser::MidiParser() : PacketJ(), field_176(0) {}

    // 0x1002d01a0
    MidiParser::MidiParser(Array<unsigned char>& arg1, ErrorCapture& errorCapture) : PacketJ(), field_176(0) {
        SetMidi(arg1, errorCapture);
    }

    // 0x1002d0290
    void MidiParser::SetMidi(Array<unsigned char>& arg1, ErrorCapture& errorCapture) {
        uint8_t* this_00;
        bool bVar1;
        unsigned short uVar3;
        unsigned int uVar5;
        int iVar6;
        int iVar7;
        int iVar8;
        uint32_t uVar9;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar11;
        uint32_t* puVar12;
        int* piVar13;
        unsigned long arg1_00;
        char* str;
        int local_34;

        SetDataRaw(arg1);
        SetMidiPos(0);
        int iVar4 = g4();
        if ((iVar4 != 1297377380) || (iVar4 = g4(), iVar4 != 6)) {
            errorCapture.Raise("%s, Unexpected data", "SetMidi");
            return;
        }
        unsigned short uVar2 = g2();
        if (uVar2 < 2) {
            uVar3 = g2();
            if ((uVar3 != 0) && ((bVar1 = true, uVar2 != 0 || (uVar3 == 1))))
                goto LAB_1002d034f;
        } else {
            uVar3 = 0;
        }
        bVar1 = false;
        errorCapture.Raise("%s, Unexpected data", "SetMidi");
    LAB_1002d034f:
        if (!bVar1) {
            return;
        }
        uVar2 = g2();
        unsigned long uVar10 = (unsigned long)uVar2;
        field_32 = (unsigned int)uVar2;
        field_64 = 500000;
        if ((short)uVar2 < 0) {
            str = "%s, Invalid division: %i";
        } else {
            uVar10 = (unsigned long)uVar3;
            this_00 = &field_72;
            this_00->set_max_size(uVar10, 3);
            field_96.set_max_size(uVar10, 3);
            local_34 = 0;
            while (true) {
                if ((int)(unsigned int)uVar3 <= local_34) {
                    field_168 = 0;
                    field_120.set_max_size(uVar10, 3);
                    if (uVar3 != 0) {
                        arg1_00 = 0;
                        do {
                            puVar12 = (uint32_t*)(*this_00)[arg1_00];
                            uVar9 = *puVar12;
                            puVar12 = &field_120[arg1_00];
                            *puVar12 = uVar9;
                            arg1_00 = arg1_00 + 1;
                        } while (uVar10 != arg1_00);
                    }
                    field_40.set_max_size(uVar10, 3);
                    field_144.set_max_size(uVar10, 3);
                    return;
                }
                iVar4 = GetMidiPos();
                pvVar11 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)SSOBeginPtr();
                iVar6 = pvVar11->end();
                if (iVar6 < iVar4 + 8)
                    break;
                iVar4 = g4();
                iVar6 = g4();
                iVar7 = GetMidiPos();
                pvVar11 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)SSOBeginPtr();
                iVar8 = pvVar11->end();
                if (iVar8 < iVar7 + iVar6) {
                    uVar5 = GetMidiPos();
                    errorCapture.Raise("%s, Midi pos is out of range: %i", "SetMidi", (unsigned long)uVar5);
                } else {
                    if (iVar4 == 1297379947) {
                        uVar9 = GetMidiPos();
                        puVar12 = (uint32_t*)(*this_00)[(long)local_34];
                        *puVar12 = uVar9;
                        iVar4 = GetMidiPos();
                        piVar13 = &field_96[(long)local_34];
                        *piVar13 = iVar4 + iVar6;
                        local_34 = local_34 + 1;
                    }
                    iVar4 = GetMidiPos();
                    SetMidiPos(iVar6 + iVar4);
                }
                if (iVar8 < iVar7 + iVar6) {
                    return;
                }
            }
            uVar5 = GetMidiPos();
            str = "%s, Midi pos is out of range: %i";
            uVar10 = (unsigned long)uVar5;
        }
        errorCapture.Raise(str, "SetMidi", uVar10);
    }

    // 0x1002d0600
    void MidiParser::SetMidiPos(int arg1) {
        unsigned long arg1_00;

        field_176 = arg1;
        if (arg1 < 0) {
            arg1_00 = GetTextureAtlas() - 1;
        } else {
            arg1_00 = (unsigned long)arg1;
        }
        SetPos(arg1_00);
    }

    // 0x1002d0640
    void MidiParser::GetMidiPos() {
        if (-1 < field_176) {
            size();
        }
    }

    // 0x1002d0660
    void MidiParser::DropMidi() {
        ((Array<unsigned char>*)SSOBeginPtr())->set_max_size(0, 0);
        field_72.set_max_size(0, 0);
        field_96.set_max_size(0, 0);
        field_120.set_max_size(0, 0);
        field_40.set_max_size(0, 0);
        field_144.set_max_size(0, 0);
    }

    // 0x1002d06d0
    uint8_t MidiParser::GotMidi() {
        return ((Array<game::VarValue>*)SSOBeginPtr())->empty() ^ 1;
    }

    // 0x1002d06f0
    void MidiParser::NumTracks() {
        field_120.end();
    }

    // 0x1002d0700
    void MidiParser::SetTrack(int arg1) {
        int* piVar1 = &field_120[(long)arg1];
        SetMidiPos(*piVar1);
    }

    // 0x1002d0730
    void MidiParser::UnsetTrack(int arg1) {
        uint32_t uVar2 = GetMidiPos();
        uint32_t* puVar1 = &field_120[(long)arg1];
        *puVar1 = uVar2;
    }

    // 0x1002d0770
    void MidiParser::FinishTrack() {
        SetMidiPos(-1);
    }

    // 0x1002d0780
    bool MidiParser::TrackFinished() {
        return GetMidiPos() == -1;
    }

    // 0x1002d07a0
    void MidiParser::Reset() {
        uint32_t uVar1;
        uint32_t* puVar2;
        unsigned long arg1;

        field_168 = 0;
        unsigned int uVar3 = field_120.end();
        if (0 < (int)uVar3) {
            arg1 = 0;
            do {
                puVar2 = &field_40[arg1];
                *puVar2 = 0;
                puVar2 = &field_144[arg1];
                *puVar2 = 0;
                puVar2 = &field_72[arg1];
                uVar1 = *puVar2;
                puVar2 = &field_120[arg1];
                *puVar2 = uVar1;
                arg1 = arg1 + 1;
            } while (uVar3 != arg1);
        }
    }

    // 0x1002d0850
    void MidiParser::ProcessDeltaTime(int arg1) {
        int iVar1 = gMidiVarLen();
        int* piVar2 = &field_40[(long)arg1];
        *piVar2 = *piVar2 + iVar1;
    }

    // 0x1002d0890
    uint32_t MidiParser::GetEvent(int arg1) {
        uint32_t uVar1 = GetEvent2(arg1);
        unsigned int uVar2 = GetMidiPos();
        int* piVar3 = &field_96[(long)arg1];
        if (*piVar3 < (int)uVar2) {
            LogAssert("checkMidiPos <= m_trackEnd[track]",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                      "midiparser.cpp",
                      211, "Unexpected midi pos: %i", (unsigned long)uVar2);
        }
        return uVar1;
    }

    // 0x1002d0900
    uint64_t MidiParser::GetEvent2(int arg1) {
        uint8_t bVar1;
        int iVar3;
        unsigned int* puVar6;
        uint64_t uVar7;

        auto pAVar4 = SSOBeginPtr();
        int iVar2 = GetMidiPos();
        uint8_t* pbVar5 = (uint8_t*)(*pAVar4)[(long)iVar2];
        unsigned int arg2 = (unsigned int)*pbVar5;
        if ((char)*pbVar5 < '\0') {
            puVar6 = &field_144[(long)arg1];
            *puVar6 = arg2;
            iVar2 = GetMidiPos();
            SetMidiPos(iVar2 + 1);
        } else {
            puVar6 = &field_144[(long)arg1];
            arg2 = *puVar6;
            if (arg2 == 0) {
                LogAssert("status != 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midiparser.cpp",
                          233, "Unexpected zero status");
            }
        }
        if ((arg2 == 247) || (arg2 == 240)) {
            iVar2 = gMidiVarLen();
            if ((arg2 == 247) && (0 < iVar2)) {
                pAVar4 = (Array<unsigned char>*)SSOBeginPtr();
                iVar3 = GetMidiPos();
                pbVar5 = (uint8_t*)(*pAVar4)[(long)iVar3];
                bVar1 = *pbVar5;
                if (((uint8_t)(bVar1 + 15) < 14) &&
                    ((11943UL >> ((unsigned long)(uint8_t)(bVar1 + 15) & 63) & 1) != 0)) {
                    iVar2 = GetMidiPos();
                    SetMidiPos(iVar2 + 1);
                    puVar6 = &field_144[(long)arg1];
                    *puVar6 = (unsigned int)bVar1;
                    uVar7 = GetEvent3(arg1, (unsigned int)bVar1);
                    return uVar7;
                }
            }
            iVar3 = GetMidiPos();
            SetMidiPos(iVar2 + iVar3);
            uVar7 = 0;
        } else {
            uVar7 = GetEvent3(arg1, arg2);
        }
        return uVar7;
    }

    // 0x1002d0a70
    unsigned int MidiParser::GetEvent3(int arg1, int arg2) {
        char cVar1;
        uint8_t bVar2;
        int iVar3;
        int iVar4;
        char* pcVar5;
        int* piVar6;
        uint32_t in_register_00000034;

        if (arg2 == 255) {
            cVar1 = g1();
            iVar3 = gMidiVarLen();
            if (cVar1 == 'Q') {
                iVar4 = g3();
                piVar6 = &field_40[(long)arg1];
                field_168 = field_168 + ((long)field_64 - (long)iVar4) * (long)*piVar6;
                field_64 = iVar4;
                iVar4 = GetMidiPos();
                SetMidiPos(iVar3 + iVar4 - 3);
                arg2 = 2;
            } else if (cVar1 == '/') {
                iVar4 = GetMidiPos();
                SetMidiPos(iVar3 + iVar4);
                arg2 = 1;
            } else {
                iVar4 = GetMidiPos();
                SetMidiPos(iVar3 + iVar4);
                arg2 = 3;
            }
        } else {
            pcVar5 = (char*)(*(
                (array<signed char, 128ul>*)(long)(arg2 -
                                                   128)))[(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1)];
            cVar1 = *pcVar5;
            if ('\0' < cVar1) {
                bVar2 = g1();
                arg2 = (unsigned int)bVar2 << 8 | arg2;
            }
            if ('\x01' < cVar1) {
                bVar2 = g1();
                arg2 = (unsigned int)bVar2 << 16 | arg2;
            }
        }
        return arg2;
    }

    // 0x1002d0b90
    long MidiParser::TimeFromTick(int arg1) {
        return (long)field_64 * (long)arg1 + field_168;
    }

    // 0x1002d0bb0
    uint32_t MidiParser::NextTrackToPlay() {
        int* piVar2;
        unsigned long arg1;
        int iVar3;
        uint64_t uStack_38;

        unsigned int uVar1 = field_120.end();
        if ((int)uVar1 < 1) {
            uStack_38._4_4_ = 4294967295;
        } else {
            uStack_38 = -4294967296;
            iVar3 = 2147483647;
            arg1 = 0;
            do {
                piVar2 = &field_120[arg1];
                if (*piVar2 != -1) {
                    piVar2 = &field_40[arg1];
                    if (*piVar2 < iVar3) {
                        piVar2 = &field_40[arg1];
                        iVar3 = *piVar2;
                        uStack_38 = arg1 << 32;
                    }
                }
                arg1 = arg1 + 1;
            } while (uVar1 != arg1);
        }
        return uStack_38._4_4_;
    }

    // 0x1002d0c50
    unsigned long MidiParser::AllTracksFinished() {
        int* piVar2;
        unsigned long arg1;
        uint64_t unaff_R12;

        uint8_t* this_00 = &field_120;
        unsigned int uVar1 = this_00->end();
        bool bVar3 = 0 < (int)uVar1;
        if (0 < (int)uVar1) {
            piVar2 = (int*)(*this_00)[0];
            bVar3 = true;
            if (*piVar2 < 0) {
                arg1 = 1;
                do {
                    bVar3 = (long)arg1 < (long)(int)uVar1;
                    if (uVar1 == arg1)
                        break;
                    piVar2 = (int*)(*this_00)[arg1];
                    arg1 = arg1 + 1;
                } while (*piVar2 < 0);
            }
        }
        return ((((uint64_t)((int64_t)((unsigned long)unaff_R12 >> 8)) << 8) | (uint8_t)bVar3) ^ 1) & 4294967295;
    }

    // 0x1002d0ce0
    void MidiParser::Restart(long long arg1) {
        uint32_t* puVar1;
        int* piVar2;
        uint32_t uVar4;
        unsigned long arg1_00;

        field_168 = arg1;
        unsigned int uVar3 = field_120.end();
        if (0 < (int)uVar3) {
            arg1_00 = 0;
            do {
                puVar1 = &field_40[arg1_00];
                *puVar1 = 0;
                puVar1 = &field_144[arg1_00];
                *puVar1 = 0;
                piVar2 = &field_72[arg1_00];
                SetMidiPos(*piVar2);
                ProcessDeltaTime((int)arg1_00);
                uVar4 = GetMidiPos();
                puVar1 = &field_120[arg1_00];
                *puVar1 = uVar4;
                arg1_00 = arg1_00 + 1;
            } while (uVar3 != arg1_00);
        }
    }

    // 0x1002d0db0
    void MidiParser::Resize(int arg1, int arg2, int arg3, int arg4) {
        int iVar1;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar3;
        long lVar4;
        void* pvVar5;
        void* pvVar6;
        long lVar7;
        int* piVar8;
        unsigned long uVar9;
        uint8_t* this_00;
        Array<unsigned char> local_68;
        void* local_50;
        Array<int>* local_48;
        unsigned long local_38;

        int iVar10 = arg4 - arg3;
        if (iVar10 != 0) {
            pvVar3 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)SSOBeginPtr();
            lVar4 = pvVar3->end();
            local_38 = (unsigned long)arg3;
            local_50 = (void*)(long)arg4;
            local_68 = Array<unsigned char>(((long)local_50 - local_38) + lVar4);
            pvVar5 = (void*)local_68.data();
            pvVar6 = (void*)GetDataPtr();
            local_48 = (Array<int>*)(long)arg2;
            _memcpy(pvVar5, pvVar6, (size_t)local_48);
            lVar4 = local_68.data();
            lVar7 = GetDataPtr();
            uVar9 = local_38;
            pvVar5 = (void*)(lVar4 + (long)local_48 + (long)local_50);
            local_50 = (void*)(lVar7 + (long)local_48 + local_38);
            pvVar3 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)SSOBeginPtr();
            lVar4 = pvVar3->end();
            _memcpy(pvVar5, local_50, lVar4 - (uVar9 + (long)local_48));
            SetDataRaw(local_68);
            local_48 = (Array<int>*)&field_72;
            local_38 = (unsigned long)arg1;
            piVar8 = (int*)(*local_48)[local_38];
            SetMidiPos(*piVar8 - 4);
            iVar1 = g4();
            SetMidiPos(GetMidiPos() - 4);
            p4<int>(iVar1 + iVar10);
            piVar8 = &field_96[local_38];
            *piVar8 = *piVar8 + iVar10;
            this_00 = &field_120;
            piVar8 = (int*)(*this_00)[local_38];
            if (arg2 < *piVar8) {
                piVar8 = (int*)(*this_00)[local_38];
                *piVar8 = *piVar8 + iVar10;
            }
            iVar1 = this_00->end();
            if (arg1 + 1 < iVar1) {
                uVar9 = (unsigned long)(arg1 + 1);
                iVar1 = ~arg1 + iVar1;
                do {
                    piVar8 = (int*)(*local_48)[uVar9];
                    *piVar8 = *piVar8 + iVar10;
                    piVar8 = (int*)(*this_00)[uVar9];
                    *piVar8 = *piVar8 + iVar10;
                    piVar8 = &field_96[uVar9];
                    *piVar8 = *piVar8 + iVar10;
                    uVar9 = uVar9 + 1;
                    iVar1 = iVar1 - 1;
                } while (iVar1 != 0);
            }
        }
    }

    // 0x1002d0fa0
    void MidiParser::InsertEvent(int arg1, int arg2, Array<signed char>& arg3, ErrorCapture& errorCapture) {
        auto this_00 = SSOBeginPtr();
        (*this_00)[(long)arg2];
        errorCapture.Raise("Cannot insert event here: will break running status");
    }

    // 0x1002d0fe0
    void MidiParser::ChangeDeltaTime(int arg1, int arg2, int arg3) {
        SetMidiPos(arg2);
        gMidiVarLen();
        int iVar1 = GetMidiPos();
        int iVar3 = 3;
        if (arg3 < 16384) {
            iVar3 = (127 < arg3) + 1;
        }
        int iVar2 = 4;
        if (arg3 < 2097152) {
            iVar2 = iVar3;
        }
        iVar3 = 5;
        if (arg3 < 268435456) {
            iVar3 = iVar2;
        }
        Resize(arg1, arg2, iVar1 - arg2, iVar3);
        SetMidiPos(arg2);
        pMidiVarLen(arg3);
        iVar1 = GetMidiPos();
        if (iVar1 - arg2 != iVar3) {
            LogAssert("GetMidiPos() - pos == newlen",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                      "midiparser.cpp",
                      451, "Oops, I got the length wrong");
        }
    }

} // namespace jag::oldscape::midi2
