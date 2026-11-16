// libs/oldscape/jagex3/midi2/midiplayer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "midiplayer.h"

namespace jag::oldscape::midi2 {
    // 0x1002cedc0
    unsigned long MidiPlayer::UpdateStreamlessNote(MidiNote& midiNote) {
        int iVar1;
        array<shared_ptr<MidiNote>, 128ul>* paVar4;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        shared_ptr<MidiNote>* this_01;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_40;
        __thread_id* local_30;

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = sound::g_idWorkerThread;
        if (!(thread_id1_00 == (sound::g_idWorkerThread))) {
            new (&local_30) std::__thread_id();
            if (!(thread_id1 == local_30)) {
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midiplayer.cpp",
                          1085, nullptr);
            }
        }
        bool bVar3 = midiNote.field_152 == nullptr;
        if ((bVar3) && (-1 < *(int*)&midiNote.field_132)) {
            iVar1 = *(int*)&midiNote.field_88;
            if (0 < (long)iVar1) {
                paVar4 = &field_34280[(long)(int)midiNote.field_32];
                this_00 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*paVar4)[(long)iVar1];
                if ((MidiNote*)this_00->end() == midiNote) {
                    local_40 = shared_ptr();
                    paVar4 = &field_34280[(long)(int)midiNote.field_32];
                    this_01 = (shared_ptr<MidiNote>*)(*paVar4)[(long)*(int*)&midiNote.field_88];
                    *this_01 = local_40;
                }
            }
            midiNote.Unlink();
        }
        return bVar3 & 4294967295;
    }

    // 0x1002cf380
    bool MidiPlayer::UpdateNote(MidiNote& midiNote, Array<int>& arg2, int arg3, int arg4) {
        int iVar4;
        unsigned int uVar5;
        int arg3_00;
        WaveStream* pWVar6;
        array<shared_ptr<MidiNote>, 128ul>* paVar7;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar8;
        MidiNote* pMVar9;
        shared_ptr<MidiNote>* psVar10;
        int* piVar11;
        uint8_t* pbVar12;
        char* pcVar13;
        long* plVar14;
        long lVar15;
        int iVar16;
        uint8_t* puVar17;
        double dVar19;
        __thread_id* local_78;
        unsigned long local_60;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_48;
        unsigned int local_34;

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = sound::g_idWorkerThread;
        bool cVar2 = thread_id1_00 == (sound::g_idWorkerThread);
        if (!cVar2) {
            new (&local_78) std::__thread_id();
            cVar2 = thread_id1 == local_78;
            if (!cVar2) {
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midiplayer.cpp",
                          1171, nullptr);
            }
        }
        *(int*)&midiNote.field_168 = sound::PCMPlayer::m_frequency / 100;
        if (-1 < *(int*)&midiNote.field_132) {
            if (midiNote.field_152 == nullptr) {
            LAB_1002cf459:
                midiNote.~AutoSingleton();
                iVar16 = *(int*)&midiNote.field_88;
                if (0 < (long)iVar16) {
                    paVar7 = &field_34280[(long)(int)midiNote.field_32];
                    pvVar8 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*paVar7)[(long)iVar16];
                    pMVar9 = (MidiNote*)pvVar8->end();
                    if (pMVar9 == midiNote) {
                        local_48 = shared_ptr();
                        paVar7 = &field_34280[(long)(int)midiNote.field_32];
                        psVar10 = (shared_ptr<MidiNote>*)(*paVar7)[(long)*(int*)&midiNote.field_88];
                        *psVar10 = local_48;
                    }
                }
                midiNote.Unlink();
                return true;
            }
            pWVar6 = (WaveStream*)midiNote.field_152.operator->();
            cVar2 = pWVar6->Isfinished();
            if (cVar2)
                goto LAB_1002cf459;
        }
        iVar16 = *(int*)((long)&midiNote.field_112 + 4);
        if (0 < iVar16) {
            puVar17 = &field_940;
            piVar11 = (int*)(*puVar17)[(long)(int)midiNote.field_32];
            dVar19 = (double)pow<int, double>((int)puVar17, (double)*piVar11 * 0.0004921259842519685);
            iVar16 = iVar16 - (int)(dVar19 * 16.0 + 0.5);
            if (iVar16 < 0) {
                iVar16 = 0;
            }
            *(int*)((long)&midiNote.field_112 + 4) = iVar16;
        }
        shared_ptr<sound::WaveStream>* local_68 = (shared_ptr<sound::WaveStream>*)&midiNote.field_152;
        pWVar6 = (WaveStream*)(*local_68).operator->();
        iVar16 = GetRateRaw(midiNote);
        pWVar6->SetRateRaw(iVar16);
        puVar17 = &midiNote.field_72;
        Array<game::VarValue>* this_01 = (Array<game::VarValue>*)**puVar17;
        *(int*)&midiNote.field_140 = *(int*)&midiNote.field_140 + 1;
        piVar11 = (int*)((long)&midiNote.field_140 + 4);
        *piVar11 = *piVar11 + *(int*)(this_01 + 68);
        double local_50 =
            (double)(*(int*)((long)&midiNote.field_88 + 4) * 256 +
                     (*(int*)((long)&midiNote.field_112 + 4) * *(int*)&midiNote.field_112 >> 12) - 15360) *
            5.086263020833333e-06;
        if (0 < *(int*)(this_01 + 48)) {
            if (*(int*)(this_01 + 60) < 1) {
                iVar16 = 128;
            } else {
                dVar19 = (double)pow<int, double>((int)puVar17, (double)*(int*)(this_01 + 60) * local_50);
                iVar16 = (int)(dVar19 * 128.0 + 0.5);
            }
            *(int*)&midiNote.field_120 = *(int*)&midiNote.field_120 + iVar16;
        }
        Array<game::VarValue>* pAVar18 = this_01;
        cVar2 = this_01->empty();
        if (!cVar2) {
            if (*(int*)(this_01 + 52) < 1) {
                iVar16 = 128;
            } else {
                dVar19 = (double)pow<int, double>((int)pAVar18, (double)*(int*)(this_01 + 52) * local_50);
                iVar16 = (int)(dVar19 * 128.0 + 0.5);
            }
            piVar11 = (int*)((long)&midiNote.field_120 + 4);
            *piVar11 = *piVar11 + iVar16;
            iVar16 = *(int*)&midiNote.field_128;
            while ((iVar4 = this_01->end(),
                    iVar16 < iVar4 - 2 && (iVar16 = *(int*)((long)&midiNote.field_120 + 4),
                                           pbVar12 = (uint8_t*)(*this_01)[(long)*(int*)&midiNote.field_128 + 2],
                                           (int)((unsigned int)*pbVar12 * 256) < iVar16))) {
                iVar16 = *(int*)&midiNote.field_128 + 2;
                *(int*)&midiNote.field_128 = iVar16;
            }
            iVar16 = *(int*)&midiNote.field_128;
            iVar4 = this_01->end();
            if (iVar16 != iVar4 - 2)
                goto LAB_1002cf6bd;
            pcVar13 = (char*)(*this_01)[(long)*(int*)&midiNote.field_128 + 1];
            local_34 =
                (unsigned int)(((uint64_t)((int64_t)((unsigned long)pcVar13 >> 8)) << 8) | (uint8_t)(*pcVar13 == '\0'));
        } else {
        LAB_1002cf6bd:
            local_34 = 0;
        }
        if (-1 < *(int*)&midiNote.field_132) {
            pAVar18 = this_01 + 24;
            cVar2 = pAVar18->empty();
            if (!cVar2) {
                puVar17 = &field_104;
                iVar16 = midiNote.field_32;
                pbVar12 = (uint8_t*)(*puVar17)[(long)iVar16];
                iVar4 = (int)puVar17;
                if ((*pbVar12 & 1) == 0) {
                    if (-1 < (long)*(int*)&midiNote.field_88) {
                        local_60 = (long)*(int*)&midiNote.field_88;
                        paVar7 = &field_34280[(long)iVar16];
                        pvVar8 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*paVar7)[local_60];
                        pMVar9 = (MidiNote*)pvVar8->end();
                        iVar4 = (int)pvVar8;
                        if (pMVar9 == midiNote)
                            goto LAB_1002cf7fe;
                    }
                    if (*(int*)(this_01 + 56) < 1) {
                        iVar16 = 128;
                    } else {
                        dVar19 = (double)pow<int, double>(iVar4, local_50 * (double)*(int*)(this_01 + 56));
                        iVar16 = (int)(dVar19 * 128.0 + 0.5);
                    }
                    *(int*)&midiNote.field_132 = *(int*)&midiNote.field_132 + iVar16;
                    iVar16 = *(int*)((long)&midiNote.field_132 + 4);
                    while ((iVar4 = pAVar18->end(),
                            iVar16 < iVar4 - 2 &&
                                (iVar16 = *(int*)&midiNote.field_132,
                                 pbVar12 = (uint8_t*)(*pAVar18)[(long)*(int*)((long)&midiNote.field_132 + 4) + 2],
                                 (int)((unsigned int)*pbVar12 * 256) < iVar16))) {
                        iVar16 = *(int*)((long)&midiNote.field_132 + 4) + 2;
                        *(int*)((long)&midiNote.field_132 + 4) = iVar16;
                    }
                    iVar16 = *(int*)((long)&midiNote.field_132 + 4);
                    iVar4 = pAVar18->end();
                    uVar5 = local_34 & 255;
                    local_34 = 1;
                    if (iVar16 != iVar4 - 2) {
                        local_34 = uVar5;
                    }
                }
            }
        }
    LAB_1002cf7fe:
        shared_ptr<sound::WaveStream>* this_00 = local_68;
        pWVar6 = (WaveStream*)(*local_68).operator->();
        iVar16 = *(int*)&midiNote.field_168;
        if ((char)local_34 == '\0') {
            iVar4 = GetVolume(midiNote);
            arg3_00 = GetPan(midiNote);
            pWVar6->RampVolPanFine(iVar16, iVar4, arg3_00);
        } else {
            pWVar6->RampOut(iVar16);
            cVar2 = arg2.empty();
            plVar14 = (long*)(*this_00).operator->();
            if (!cVar2) {
                (**(void (**)(...))(*plVar14 + 40))(plVar14, arg2, arg3, arg4);
            } else {
                (**(void (**)(...))(*plVar14 + 48))(plVar14, arg4);
            }
            pWVar6 = (WaveStream*)(*this_00).operator->();
            cVar2 = pWVar6->Isramping();
            if (cVar2) {
                lVar15 = field_67264.operator->();
                local_48 = shared_ptr(this_00);
                ((lVar15 + 96))->PlayStream(local_48);
            }
            midiNote.~AutoSingleton();
            if (-1 < *(int*)&midiNote.field_132) {
                iVar16 = *(int*)&midiNote.field_88;
                if (0 < (long)iVar16) {
                    paVar7 = &field_34280[(long)(int)midiNote.field_32];
                    pvVar8 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*paVar7)[(long)iVar16];
                    pMVar9 = (MidiNote*)pvVar8->end();
                    if (pMVar9 == midiNote) {
                        local_48 = shared_ptr();
                        paVar7 = &field_34280[(long)(int)midiNote.field_32];
                        psVar10 = (shared_ptr<MidiNote>*)(*paVar7)[(long)*(int*)&midiNote.field_88];
                        *psVar10 = local_48;
                    }
                }
                midiNote.Unlink();
            }
        }
        return (char)local_34 != '\0';
    }

    // 0x1002cff40
    void MidiPlayer::SetSampleOffset(const MidiNote& midiNote, bool arg2) {
        int iVar1;
        __thread_id* in_RAX;
        long lVar4;
        int* piVar5;
        WaveStream* pWVar6;
        unsigned long uVar7;

        __thread_id* local_38 = in_RAX;
        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = sound::g_idWorkerThread;
        if (!(thread_id1_00 == (sound::g_idWorkerThread))) {
            new (&local_38) std::__thread_id();
            if (!(thread_id1 == local_38)) {
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midiplayer.cpp",
                          362, nullptr);
            }
        }
        uint8_t* this_00 = &midiNote.field_56;
        long lVar3 = (*this_00).operator->();
        lVar3 = ((lVar3 + 8))->end();
        if (arg2) {
            lVar4 = (*this_00).operator->();
            if (*(char*)(lVar4 + 40) != '\0') {
                lVar4 = (*this_00).operator->();
                iVar1 = *(int*)(lVar4 + 32);
                piVar5 = &field_168[(long)(int)midiNote.field_32];
                uVar7 = (unsigned long)((long)*piVar5 * (lVar3 * 2 - (long)iVar1)) >> 6;
                if ((unsigned long)(lVar3 << 8) <= uVar7) {
                    uVar7 = ~uVar7 + lVar3 * 512;
                    pWVar6 = (WaveStream*)midiNote.field_152.operator->();
                    pWVar6->SetReverse(true);
                }
                goto LAB_1002d005e;
            }
        }
        piVar5 = (int*)field_168[(long)(int)midiNote.field_32];
        uVar7 = (unsigned long)(int)((unsigned long)(lVar3 * *piVar5) >> 6);
    LAB_1002d005e:
        pWVar6 = (WaveStream*)midiNote.field_152.operator->();
        pWVar6->SetPositionFine((int)uVar7);
    }

    // 0x1002d10c0
    MidiPlayer::MidiPlayer() : sound::PCMStream() {
        ReturnValue local_48;

        *(uint8_t***)&field_72 = &PTR_QueueSetGlobalVolume_100efa248;
        new (&field_296) eastl::hash_map<int, shared_ptr<Patch>>(local_48);
        new (&field_352) std::mutex();
        field_416 = 256;
        field_420 = 1000000;
        field_424 = false;
        new (m_globalVolume) ThreadStateTransfer();
        new (&field_1448) std::mutex();
        new (&field_1512) std::array<std::array<shared_ptr<MidiNote>, 128ul>, 16ul>();
        new (&field_34280) std::array<std::array<shared_ptr<MidiNote>, 128ul>, 16ul>();
        new (field_67048) MidiParser();
        new (&field_67264) shared_ptr();
        if (std::this_thread::get_id() == (sound::g_idMainThread) == '\0') {
            LogAssert("std::this_thread::get_id() == sound::g_idMainThread",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                      "midiplayer.cpp",
                      26, nullptr);
        }
        auto puVar2 = field_428.data();
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0;
        puVar2[7] = 0;
        puVar2 = (uint64_t*)field_492.data();
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0;
        puVar2[7] = 0;
        puVar2 = (uint64_t*)field_556.data();
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0;
        puVar2[7] = 0;
        puVar2 = (uint64_t*)field_620.data();
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0;
        puVar2[7] = 0;
        puVar2 = (uint64_t*)field_684.data();
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0;
        puVar2[7] = 0;
        puVar2 = (uint64_t*)field_748.data();
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0;
        puVar2[7] = 0;
        puVar2 = (uint64_t*)field_812.data();
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0;
        puVar2[7] = 0;
        puVar2 = (uint64_t*)field_876.data();
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0;
        puVar2[7] = 0;
        puVar2 = (uint64_t*)field_940.data();
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0;
        puVar2[7] = 0;
        puVar2 = (uint64_t*)field_104.data();
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0;
        puVar2[7] = 0;
        puVar2 = (uint64_t*)field_168.data();
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0;
        puVar2[7] = 0;
        puVar2 = (uint64_t*)field_232.data();
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0;
        puVar2[7] = 0;
        puVar2 = (uint64_t*)field_1004.data();
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0;
        puVar2[7] = 0;
        puVar2 = (uint64_t*)field_1068.data();
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0;
        puVar2[7] = 0;
        puVar2 = (uint64_t*)field_1132.data();
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0;
        puVar2[7] = 0;
        make_shared<MidiMixer, MidiPlayer&>(&local_48, this);
        field_67264 = local_48;
        Reset2();
    }

    // 0x1002d15e0
    void MidiPlayer::Reset2() {
        uint32_t uVar1;
        unsigned int uVar2;
        __thread_id* in_RAX;
        uint32_t* puVar4;
        unsigned int* puVar5;

        __thread_id* local_38 = in_RAX;
        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = sound::g_idWorkerThread;
        if (!(thread_id1_00 == (sound::g_idWorkerThread))) {
            new (&local_38) std::__thread_id();
            if (!(thread_id1 == local_38)) {
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midiplayer.cpp",
                          626, nullptr);
            }
        }
        AllSoundOff2(-1);
        AllControllersOff2(-1);
        unsigned long uVar6 = 0;
        do {
            puVar4 = &field_620[uVar6];
            uVar1 = *puVar4;
            puVar4 = &field_684[uVar6];
            *puVar4 = uVar1;
            uVar6 = uVar6 + 1;
        } while (uVar6 != 16);
        uVar6 = 0;
        do {
            puVar5 = &field_620[uVar6];
            uVar2 = *puVar5;
            puVar5 = &field_748[uVar6];
            *puVar5 = uVar2 & 4294967168;
            uVar6 = uVar6 + 1;
        } while (uVar6 != 16);
    }

    // 0x1002d1740
    void MidiPlayer::SetTempoFactor(int arg1) {
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                        "midiplayer.cpp",
                        57, "didn\'t think this was used");
    }

    // 0x1002d1780
    void MidiPlayer::GetTempoFactor() {
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                        "midiplayer.cpp",
                        63, "didn\'t think this was used");
    }

    // 0x1002d17c0
    uint8_t MidiPlayer::LoadAndQueuePatches(
        MidiFile& midiFile, jagex3::Js5& js5, sound::WaveCache& waveCache,
        eastl::priority_queue<MidiPlayerMainThread::QueuedLazyWave,
                              eastl::vector<MidiPlayerMainThread::QueuedLazyWave>>* priority_queue,
        ErrorCapture& errorCapture) {
        bool bVar2;
        ReturnValue* pRVar3;
        uint64_t* puVar4;
        shared_ptr<Patch>* psVar5;
        Patch* pPVar6;
        long lVar7;
        LazyWave* lazyWave;
        LazyWave* pLVar8;
        unsigned int uVar9;
        uint8_t* this_00;
        ReturnValue local_c8;
        uint64_t local_b8;
        uint64_t uStack_b0;
        uint64_t local_a8;
        uint64_t uStack_a0;
        QueuedLazyWave local_98;
        ReturnValue local_80;
        ReturnValue local_70;
        scoped_lock<std::mutex> local_50;
        ReturnValue local_48;
        uint32_t local_38;
        int local_34;

        bool cVar1 = std::this_thread::get_id() == (sound::g_idMainThread);
        if (!cVar1) {
            LogAssert("std::this_thread::get_id() == sound::g_idMainThread",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                      "midiplayer.cpp",
                      69, nullptr);
        }
        cVar1 = errorCapture.IsRaised();
        if (!cVar1) {
            local_50 = std::scoped_lock(field_352);
            local_70 = midiFile.begin();
            pRVar3 = local_c8 = midiFile.end();
            this_00 = &field_296;
            local_38 = (uint32_t)(((uint64_t)((int64_t)((unsigned long)pRVar3 >> 8)) << 8) | (uint8_t)1);
            while (true) {
                cVar1 = local_70 != local_c8;
                if (!cVar1)
                    break;
                puVar4 = (uint64_t*)local_70.HeapBeginPtr();
                local_b8 = *puVar4;
                uStack_b0 = puVar4[1];
                local_a8 = puVar4[2];
                uStack_a0 = puVar4[3];
                local_34 = (int)local_b8;
                local_98 = this_00->find(local_34);
                local_80 = this_00->end();
                cVar1 = local_98 == local_80;
                if (!cVar1) {
                LAB_1002d1972:
                    psVar5 = (shared_ptr<Patch>*)(*this_00)[local_34];
                    pPVar6 = (Patch*)(*psVar5).operator->();
                    cVar1 = pPVar6->LoadWaves(waveCache, local_a8, errorCapture);
                    if (!cVar1) {
                        cVar1 = errorCapture.IsRaised();
                        uVar9 = 1;
                        if (cVar1)
                            goto LAB_1002d1a4b;
                        local_38 = 0;
                    } else if (priority_queue != nullptr) {
                        psVar5 = (shared_ptr<Patch>*)(*this_00)[local_34];
                        lVar7 = (*psVar5).operator->();
                        lazyWave = (LazyWave*)((lVar7 + 152))->HeapBeginPtr();
                        pLVar8 = (LazyWave*)((lVar7 + 152))->end();
                        for (; lazyWave != pLVar8; lazyWave = lazyWave + 1) {
                            local_98.field_0 = (uint32_t)uStack_b0;
                            new (local_98.field_8) dash3d::OperationBuffer(*lazyWave);
                            priority_queue->push(local_98);
                        }
                    }
                    uVar9 = 0;
                } else {
                    local_48 = Patch::Load(js5, local_34);
                    bVar2 = &local_48 == js5;
                    if (bVar2) {
                        uVar9 = 3;
                        local_38 = 0;
                    } else {
                        pPVar6 = (Patch*)std::unique_ptr<Patch>::release();
                        local_80.shared_ptr<Patch, void>(pPVar6);
                        local_98 = this_00->emplace<int&, shared_ptr<Patch>>(local_34, local_80);
                        uVar9 = 0;
                    }
                    if (!bVar2)
                        goto LAB_1002d1972;
                }
            LAB_1002d1a4b:
                if ((uVar9 != 3) && (uVar9 != 0))
                    goto LAB_1002d1a63;
                ++local_70;
            }
            uVar9 = 0;
        LAB_1002d1a63:
            local_38._0_1_ = (uVar9 & 1) == 0 & (uint8_t)local_38;
        } else {
            local_38._0_1_ = 0;
        }
        return (uint8_t)local_38;
    }

    // 0x1002d1ff0
    void MidiPlayer::SpawnWaveLoadingTask(
        shared_ptr<eastl::priority_queue<MidiPlayerMainThread::QueuedLazyWave,
                                         eastl::vector<MidiPlayerMainThread::QueuedLazyWave>>>&& priority_queue) {
        uint8_t auVar3[12];
        ReturnValue local_58;

        uint8_t* this_01 = field_88;
        if (this_01->operator_cast_to_bool() != '\0') {
            auVar3 = (*this_01).operator->();
            auVar3._0_8_->store((bool)(uint8_t)priority_queue, auVar3._8_4_);
        }
        local_30[0] = (shared_ptr<dash3d::Decor>)0;
        make_shared<std::atomic<bool>, bool>(&local_50, &local_30);
        *this_01 = local_50;
        shared_ptr<dash3d::Decor> local_30(this_01);
        auto this_00 = &local_30->Instance();
        auto str = this_00->SSOBeginPtr();
        shared_ptr local_50(priority_queue);
        shared_ptr<dash3d::Decor> local_40(&local_30);
        ThreadPool::AddTask<MidiPlayer::SpawnWaveLoadingTask(
            shared_ptr<eastl::priority_queue<MidiPlayerMainThread::QueuedLazyWave,
                                             eastl::vector<MidiPlayerMainThread::QueuedLazyWave>>>&&)::__3>(
            &local_58, str, &local_50);
        SpawnWaveLoadingTask(
            shared_ptr<
                eastl::priority_queue<MidiPlayerMainThread::QueuedLazyWave,
                                      eastl::vector<MidiPlayerMainThread::QueuedLazyWave>>>&&)::$_3::~__3(&local_50);
    }

    // 0x1002d2400
    void MidiPlayer::InjectPatch(shared_ptr<Patch>& patch, int arg2) {
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                        "midiplayer.cpp",
                        140, "didn\'t think this was used");
    }

    // 0x1002d2490
    void MidiPlayer::DropPatch(int arg1) {
        __thread_id* local_30;

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = sound::g_idWorkerThread;
        if (!(thread_id1_00 == (sound::g_idWorkerThread))) {
            new (&local_30) std::__thread_id();
            if (!(thread_id1 == local_30)) {
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midiplayer.cpp",
                          170, nullptr);
            }
        }
        scoped_lock<std::mutex> local_28(field_352);
        field_296.erase(arg1);
    }

    // 0x1002d2590
    void MidiPlayer::QueueDropWaveIds() {
        long lVar2;

        bool cVar1 = std::this_thread::get_id() == (sound::g_idMainThread);
        if (!cVar1) {
            LogAssert("std::this_thread::get_id() == sound::g_idMainThread",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                      "midiplayer.cpp",
                      156, nullptr);
        }
        scoped_lock<std::mutex> local_28(field_352);
        auto local_48 = field_296.begin();
        auto local_38 = field_296.end();
        while (true) {
            cVar1 = local_48 != local_38;
            if (!cVar1)
                break;
            lVar2 = local_48.HeapBeginPtr();
            ((Patch*)(*((lVar2 + 8))).operator->())->DropWaveIds();
            ++local_48;
        }
    }

    // 0x1002d26a0
    void MidiPlayer::QueueDropPatches() {

        if (std::this_thread::get_id() == (sound::g_idMainThread) == '\0') {
            LogAssert("std::this_thread::get_id() == sound::g_idMainThread",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                      "midiplayer.cpp",
                      181, nullptr);
        }
        scoped_lock<std::mutex> local_18(field_352);
        field_296.clear();
    }

    // 0x1002d2740
    void MidiPlayer::QueuePlayFile(MidiFile& midiFile, bool arg2, ErrorCapture& errorCapture) {

        if (!(std::this_thread::get_id() == (sound::g_idMainThread))) {
            LogAssert("std::this_thread::get_id() == sound::g_idMainThread",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                      "midiplayer.cpp",
                      189, nullptr);
        }
        scoped_lock<std::mutex> local_30(field_1448);
        ((m_globalVolume + 16))->SetMidi(midiFile.field_56, errorCapture);
        if (!(errorCapture.IsRaised())) {
            *(uint32_t*)(m_globalVolume + 8) = 1;
            *(uint32_t*)(m_globalVolume + 204) = 0;
            m_globalVolume[200] = arg2;
            *(uint32_t*)(m_globalVolume + 240) = 1;
        }
    }

    // 0x1002d2830
    void MidiPlayer::QueueStopFile() {
        if (std::this_thread::get_id() == (sound::g_idMainThread) == '\0') {
            LogAssert("std::this_thread::get_id() == sound::g_idMainThread",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                      "midiplayer.cpp",
                      205, nullptr);
        }
        *(uint32_t*)(m_globalVolume + 204) = 1;
        *(uint32_t*)(m_globalVolume + 240) = 0;
    }

    // 0x1002d28a0
    bool MidiPlayer::IsPlayingFile() {
        if (std::this_thread::get_id() == (sound::g_idMainThread) == '\0') {
            LogAssert("std::this_thread::get_id() == sound::g_idMainThread",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                      "midiplayer.cpp",
                      214, nullptr);
        }
        return *(int*)(m_globalVolume + 240) != 0;
    }

    // 0x1002d2910
    unsigned long MidiPlayer::HasPatchesLoaded() {
        if (std::this_thread::get_id() == (sound::g_idMainThread) == '\0') {
            LogAssert("std::this_thread::get_id() == sound::g_idMainThread",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                      "midiplayer.cpp",
                      221, nullptr);
        }
        return field_296.empty() ^ 1;
    }

    // 0x1002d2980
    void MidiPlayer::PullXferStateIntoWorker() {
        uint8_t* this_00;
        Layout* this_01;
        int iVar1;
        int* piVar3;
        int* piVar4;
        int arg1;
        scoped_lock<std::mutex> local_30;

        field_416 = *(int*)m_globalVolume;
        field_424 = *(int*)(m_globalVolume + 4) != 0;
        if (((*(int*)(m_globalVolume + 8) != 0) || (*(int*)(m_globalVolume + 204) != 0)) ||
            (*(int*)(m_globalVolume + 208) != 0)) {
            local_30 = std::scoped_lock(field_1448);
            if (*(int*)(m_globalVolume + 204) == 0) {
                if (*(int*)(m_globalVolume + 8) != 0) {
                    *(uint32_t*)(m_globalVolume + 8) = 0;
                    this_00 = field_67048;
                    this_00->DropMidi();
                    Reset2();
                    std::swap<MidiParser>(*this_00, *((m_globalVolume + 16)));
                    field_67232 = m_globalVolume[200];
                    field_67248 = 0;
                    iVar1 = this_00->NumTracks();
                    if (0 < iVar1) {
                        arg1 = 0;
                        do {
                            this_00->SetTrack(arg1);
                            this_00->ProcessDeltaTime(arg1);
                            this_00->UnsetTrack(arg1);
                            arg1 = arg1 + 1;
                        } while (iVar1 != arg1);
                    }
                    iVar1 = this_00->NextTrackToPlay();
                    field_67236 = iVar1;
                    piVar3 = (int*)(*((field_67048 + 40)))[(long)iVar1];
                    iVar1 = *piVar3;
                    field_67240 = iVar1;
                    field_67256 = this_00->TimeFromTick(iVar1);
                }
            } else {
                field_67048->DropMidi();
                Reset2();
                *(uint32_t*)(m_globalVolume + 8) = 0;
                *(uint32_t*)(m_globalVolume + 204) = 0;
            }
            if (*(int*)(m_globalVolume + 208) != 0) {
                this_01 = (Layout*)(m_globalVolume + 216);
                piVar3 = (int*)this_01->HeapBeginPtr();
                piVar4 = (int*)this_01->end();
                for (; piVar3 != piVar4; piVar3 = piVar3 + 2) {
                    SetDefInst2(*piVar3, piVar3[1]);
                }
                this_01->clear();
                *(uint32_t*)(m_globalVolume + 208) = 0;
            }
        }
    }

    // 0x1002d2bf0
    void MidiPlayer::SetDefInst2(int arg1, int arg2) {
        __thread_id* local_30;

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = sound::g_idWorkerThread;
        if (!(thread_id1_00 == (sound::g_idWorkerThread))) {
            new (&local_30) std::__thread_id();
            if (!(thread_id1 == local_30)) {
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midiplayer.cpp",
                          384, nullptr);
            }
        }
        int* piVar2 = (int*)field_620[(long)arg1];
        *piVar2 = arg2;
        unsigned int* puVar3 = &field_748[(long)arg1];
        *puVar3 = arg2 & 4294967168;
        SetInst2(arg1, arg2);
    }

    // 0x1002d2cb0
    void MidiPlayer::QueueSetDefInst(int arg1, int arg2) {
        if (std::this_thread::get_id() == (sound::g_idMainThread) == '\0') {
            LogAssert("std::this_thread::get_id() == sound::g_idMainThread",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                      "midiplayer.cpp",
                      277, nullptr);
        }
        scoped_lock<std::mutex> local_28(field_1448);
        uint64_t local_30 = std::make_pair<int&, int&>(arg1, arg2);
        ((m_globalVolume + 216))->push_back(local_30);
        uint32_t uVar2 = ((m_globalVolume + 216))->size();
        *(uint32_t*)(m_globalVolume + 208) = uVar2;
    }

    // 0x1002d2e10
    void MidiPlayer::SetInst(int arg1, int arg2) {
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                        "midiplayer.cpp",
                        285, "didn\'t think this was used");
    }

    // 0x1002d2ec0
    void MidiPlayer::SetInst2(int arg1, int arg2) {
        array<shared_ptr<MidiNote>, 128ul>* this_00;
        shared_ptr<MidiNote>* this_01;
        unsigned long arg1_00;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_40;
        __thread_id* local_30;

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = sound::g_idWorkerThread;
        if (!(thread_id1_00 == (sound::g_idWorkerThread))) {
            new (&local_30) std::__thread_id();
            if (!(thread_id1 == local_30)) {
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midiplayer.cpp",
                          392, nullptr);
            }
        }
        int* piVar2 = (int*)field_684[(long)arg1];
        if (*piVar2 != arg2) {
            *piVar2 = arg2;
            arg1_00 = 0;
            do {
                local_40 = shared_ptr();
                this_00 = &field_34280[(long)arg1];
                this_01 = (shared_ptr<MidiNote>*)(*this_00)[arg1_00];
                *this_01 = local_40;
                arg1_00 = arg1_00 + 1;
            } while (arg1_00 != 128);
        }
    }

    // 0x1002d2fd0
    void MidiPlayer::PlayNote(int arg1, int arg2, int arg3) {
        __thread_id* in_RAX;

        __thread_id* local_38 = in_RAX;
        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = sound::g_idWorkerThread;
        if (!(thread_id1_00 == (sound::g_idWorkerThread))) {
            new (&local_38) std::__thread_id();
            if (!(thread_id1 == local_38)) {
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midiplayer.cpp",
                          293, nullptr);
            }
        }
        PlayNote2(arg1, arg2, arg3);
    }

    // 0x1002d3060
    void MidiPlayer::PlayNote2(int arg1, int arg2, int arg3) {
        uint8_t bVar2;
        int iVar5;
        long lVar7;
        ReturnValue* pRVar8;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        array<shared_ptr<MidiNote>, 128ul>* paVar9;
        shared_ptr<MidiNote>* psVar10;
        MidiNote* midiNote;
        shared_ptr<EnvelopeSet>* envelopeSet;
        char* pcVar12;
        unsigned short* puVar13;
        WaveStream* pWVar14;
        uint16_t* puVar15;
        short* psVar16;
        shared_ptr<MidiPlayerMainThread>* midiPlayerMainThread;
        array<shared_ptr<MidiNote>, 128ul>* this_02;
        int iVar17;
        Array<short>* this_03;
        __thread_id* local_98;
        uint8_t local_90[16];
        ReturnValue local_70;
        ReturnValue local_58;
        unsigned long local_40;
        MidiPlayer* local_38;

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = sound::g_idWorkerThread;
        if (!(thread_id1_00 == (sound::g_idWorkerThread))) {
            new (&local_98) std::__thread_id();
            if (!(thread_id1 == local_98)) {
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midiplayer.cpp",
                          406, nullptr);
            }
        }
        int iVar4 = arg1;
        StopNote2((int)this, arg1, arg2);
        unsigned long arg1_00 = (unsigned long)iVar4;
        uint8_t* pbVar6 = &field_104[arg1_00];
        if ((*pbVar6 & 2) != 0) {
            local_40 = arg1_00;
            local_38 = this;
            lVar7 = field_67264.operator->();
            local_90 = ((lVar7 + 72))->ptrs();
            local_70[0] = (ReturnValue)local_90->begin();
            pRVar8 = (ReturnValue*)local_90->second();
            local_58[0] = *pRVar8;
            bVar2 = local_70 != local_58;
            if (bVar2 != 0) {
                do {
                    this_00 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)*local_70;
                    lVar7 = this_00->end();
                    if ((*(int*)(lVar7 + 32) == arg1) && (*(int*)(lVar7 + 132) < 0)) {
                        local_80 = shared_ptr();
                        paVar9 = &local_38->field_1512[local_40];
                        psVar10 = (shared_ptr<MidiNote>*)(*paVar9)[(long)*(int*)(lVar7 + 92)];
                        *psVar10 = local_80;
                        iVar5 = arg2;
                        psVar10 = (shared_ptr<MidiNote>*)(*paVar9)[(long)arg2];
                        *psVar10 = *this_00;
                        iVar4 = *(int*)(lVar7 + 108);
                        iVar17 = (iVar5 - *(int*)(lVar7 + 92)) * 256 + iVar4;
                        *(int*)(lVar7 + 108) = iVar17;
                        *(int*)(lVar7 + 112) = ((*(int*)(lVar7 + 116) * *(int*)(lVar7 + 112) >> 12) + iVar4) - iVar17;
                        *(uint32_t*)(lVar7 + 116) = 4096;
                        *(int*)(lVar7 + 92) = iVar5;
                        this = local_38;
                        arg1_00 = local_40;
                        if ((bVar2 & 1) != 0) {
                            return;
                        }
                        goto LAB_1002d3273;
                    }
                    ++local_70;
                    bVar2 = local_70 != local_58;
                } while (bVar2 != 0);
            }
            this = local_38;
            arg1_00 = local_40;
        }
    LAB_1002d3273:
        int* piVar11 = &field_684[arg1_00];
        *local_90 = field_296.find(*piVar11);
        auto local_80 = field_296.end();
        if (!(*local_90 == local_80)) {
            lVar7 = local_90->HeapBeginPtr();
            piVar11 = (int*)*(*((lVar7 + 8)));
            iVar4 = arg2;
            local_38 = (MidiPlayer*)(long)arg2;
            local_80 = ((LazyWave*)(*((piVar11 + 2)))[(unsigned long)local_38])->Get();
            if (!(local_80 == nullptr)) {
                local_40 = arg1_00;
                make_shared<MidiNote>(&local_70);
                midiNote = (MidiNote*)local_70.end();
                midiNote->field_32 = arg1;
                lVar7 = local_90->HeapBeginPtr();
                midiNote->field_40 = (*((lVar7 + 8)));
                midiNote->field_56 = local_80;
                envelopeSet = (shared_ptr<EnvelopeSet>*)(*((piVar11 + 26)))[(unsigned long)local_38];
                midiNote->field_72 = *envelopeSet;
                pcVar12 = (char*)(*((piVar11 + 32)))[(unsigned long)local_38];
                *(int*)&midiNote->field_88 = (int)*pcVar12;
                *(int*)((long)&midiNote->field_88 + 4) = iVar4;
                *(int*)&midiNote->field_96 = arg3;
                iVar5 = *piVar11;
                pcVar12 = (char*)(*((piVar11 + 14)))[(unsigned long)local_38];
                *(int*)((long)&midiNote->field_96 + 4) = (int)*pcVar12 * arg3 * arg3 * iVar5 + 1024 >> 11;
                pbVar6 = (uint8_t*)(*((piVar11 + 20)))[(unsigned long)local_38];
                *(unsigned int*)&midiNote->field_104 = (unsigned int)*pbVar6;
                this_03 = (Array<short>*)(piVar11 + 8);
                puVar13 = (unsigned short*)(*this_03)[(unsigned long)local_38];
                *(unsigned int*)((long)&midiNote->field_104 + 4) = iVar4 * 256 - (*puVar13 & 32767);
                midiNote->field_120 = 0;
                *(uint64_t*)&midiNote->field_128 = 18446744069414584320;
                *(uint32_t*)((long)&midiNote->field_132 + 4) = 0;
                piVar11 = &field_168[local_40];
                if (*piVar11 == 0) {
                    iVar4 = GetRateRaw(*midiNote);
                    iVar5 = GetVolume(*midiNote);
                    iVar17 = GetPan(*midiNote);
                    local_58 = sound::WaveStream::NewRateRawFineVolPan(local_80, iVar4, iVar5, iVar17);
                    pWVar14 = (WaveStream*)std::unique_ptr<sound::WaveStream>::release();
                    midiNote->field_152.reset<sound::WaveStream, void>(pWVar14);
                } else {
                    iVar4 = GetRateRaw(*midiNote);
                    iVar5 = GetPan(*midiNote);
                    local_58 = sound::WaveStream::NewRateRawFineVolPan(local_80, iVar4, 0, iVar5);
                    pWVar14 = (WaveStream*)std::unique_ptr<sound::WaveStream>::release();
                    midiNote->field_152.reset<sound::WaveStream, void>(pWVar14);
                    puVar15 = (uint16_t*)(*this_03)[(unsigned long)local_38];
                    SetSampleOffset(*midiNote, (uint8_t)((unsigned short)*puVar15 >> 15));
                }
                psVar16 = (short*)(*this_03)[(unsigned long)local_38];
                if (*psVar16 < 0) {
                    pWVar14 = (WaveStream*)midiNote->field_152.operator->();
                    pWVar14->SetLoopCount(-1);
                }
                iVar4 = *(int*)&midiNote->field_88;
                if (-1 < (long)iVar4) {
                    paVar9 = &field_34280[local_40];
                    midiPlayerMainThread = (shared_ptr<MidiPlayerMainThread>*)(*paVar9)[(long)iVar4];
                    if (*midiPlayerMainThread != nullptr) {
                        lVar7 = (*midiPlayerMainThread).operator->();
                        if (*(int*)(lVar7 + 132) < 0) {
                            local_58 = shared_ptr();
                            lVar7 = (*midiPlayerMainThread).operator->();
                            this_02 = &field_1512[local_40];
                            psVar10 = (shared_ptr<MidiNote>*)(*this_02)[(long)*(int*)(lVar7 + 92)];
                            *psVar10 = local_58;
                            lVar7 = (*midiPlayerMainThread).operator->();
                            *(uint32_t*)(lVar7 + 132) = 0;
                        }
                    }
                    psVar10 = (shared_ptr<MidiNote>*)(*paVar9)[(long)*(int*)&midiNote->field_88];
                    *psVar10 = local_70;
                }
                lVar7 = field_67264.operator->();
                ((lVar7 + 72))->push_back(local_70);
                paVar9 = &field_1512[local_40];
                psVar10 = (shared_ptr<MidiNote>*)(*paVar9)[(unsigned long)local_38];
                *psVar10 = local_70;
            }
        }
    }

    // 0x1002d36b0
    void MidiPlayer::StopNote(int arg1, int arg2, int arg3) {
        __thread_id* local_30;

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = sound::g_idWorkerThread;
        if (!(thread_id1_00 == (sound::g_idWorkerThread))) {
            new (&local_30) std::__thread_id();
            if (!(thread_id1 == local_30)) {
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midiplayer.cpp",
                          300, nullptr);
            }
        }
        StopNote2(arg1, arg2, arg3);
    }

    // 0x1002d3740
    void MidiPlayer::StopNote2(int arg1, int arg2, int arg3) {
        array<shared_ptr<MidiNote>, 128ul>* array;
        long lVar3;
        uint8_t* pbVar4;
        uint32_t in_register_0000003c;
        __thread_id* local_60;
        uint64_t local_48;
        uint64_t local_40[2];

        long lVar5 = (((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1);
        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = sound::g_idWorkerThread;
        bool cVar1 = thread_id1_00 == (sound::g_idWorkerThread);
        if (!cVar1) {
            new (&local_60) std::__thread_id();
            cVar1 = thread_id1 == local_60;
            if (!cVar1) {
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midiplayer.cpp",
                          501, nullptr);
            }
        }
        array = (array<shared_ptr<MidiNote>, 128ul>*)(*((lVar5 + 1512)))[(long)arg2];
        shared_ptr<dash3d::GroundDecor>* groundDecor = (shared_ptr<dash3d::GroundDecor>*)(*array)[(long)arg3];
        shared_ptr<dash3d::Decor> local_58(groundDecor);
        if (!local_58 == nullptr) {
            lVar3 = local_58.end();
            new (local_40) shared_ptr();
            *groundDecor = *local_40;
            pbVar4 = (uint8_t*)(*((lVar5 + 104)))[(long)arg2];
            if ((*pbVar4 & 2) == 0) {
            LAB_1002d38b6:
                *(uint32_t*)(lVar3 + 132) = 0;
            } else {
                lVar5 = (*((lVar5 + 67264))).operator->();
                local_40[0] = ((lVar5 + 72))->begin_ptrs();
                local_48 = ((lVar5 + 72))->end();
                cVar1 = *local_40 != local_48;
                if (cVar1) {
                    do {
                        lVar5 = local_40->HeapBeginPtr();
                        if (((*(int*)(lVar5 + 32) == *(int*)(lVar3 + 32)) && (*(int*)(lVar5 + 132) < 0)) &&
                            (lVar5 != lVar3))
                            goto LAB_1002d38b6;
                        ++*local_40;
                        cVar1 = *local_40 != local_48;
                    } while (cVar1);
                }
            }
        }
    }

    // 0x1002d3910
    void MidiPlayer::AfterTouch(int arg1, int arg2, int arg3) {
        __thread_id* in_RAX;
        int extraout_EDX;
        int extraout_EDX_00;

        __thread_id* local_18 = in_RAX;
        auto this_00 = std::this_thread::get_id();
        MidiPlayer* thread_id1 = sound::g_idWorkerThread;
        MidiPlayer* pMVar2 = sound::g_idWorkerThread;
        bool cVar1 = this_00 == ((__thread_id*)sound::g_idWorkerThread);
        int arg1_00 = (int)pMVar2;
        int arg2_00 = extraout_EDX;
        if (!cVar1) {
            new (&local_18) std::__thread_id();
            cVar1 = thread_id1 == local_18;
            arg1_00 = (int)local_18;
            this_00 = thread_id1;
            arg2_00 = extraout_EDX_00;
            if (!cVar1) {
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midiplayer.cpp",
                          307, nullptr);
            }
        }
        AfterTouch2(this_00, arg1_00, arg2_00, 23862176);
    }

    // 0x1002d3980
    void MidiPlayer::AfterTouch2(int arg1, int arg2, int arg3) {
        __thread_id* in_RAX;

        __thread_id* local_18 = in_RAX;
        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = sound::g_idWorkerThread;
        if (!(thread_id1_00 == (sound::g_idWorkerThread))) {
            new (&local_18) std::__thread_id();
            if (!(thread_id1 == local_18)) {
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midiplayer.cpp",
                          534, nullptr);
            }
        }
    }

    // 0x1002d39f0
    void MidiPlayer::ChannelPressure(int arg1, int arg2) {
        __thread_id* in_RAX;
        int extraout_EDX;
        int extraout_EDX_00;

        __thread_id* local_18 = in_RAX;
        auto this_00 = std::this_thread::get_id();
        MidiPlayer* thread_id1 = sound::g_idWorkerThread;
        MidiPlayer* pMVar2 = sound::g_idWorkerThread;
        bool cVar1 = this_00 == ((__thread_id*)sound::g_idWorkerThread);
        int arg1_00 = (int)pMVar2;
        int arg2_00 = extraout_EDX;
        if (!cVar1) {
            new (&local_18) std::__thread_id();
            cVar1 = thread_id1 == local_18;
            arg1_00 = (int)local_18;
            this_00 = thread_id1;
            arg2_00 = extraout_EDX_00;
            if (!cVar1) {
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midiplayer.cpp",
                          314, nullptr);
            }
        }
        ChannelPressure2(this_00, arg1_00, arg2_00);
    }

    // 0x1002d3a60
    void MidiPlayer::ChannelPressure2(int arg1, int arg2) {
        __thread_id* in_RAX;

        __thread_id* local_18 = in_RAX;
        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = sound::g_idWorkerThread;
        if (!(thread_id1_00 == (sound::g_idWorkerThread))) {
            new (&local_18) std::__thread_id();
            if (!(thread_id1 == local_18)) {
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midiplayer.cpp",
                          540, nullptr);
            }
        }
    }

    // 0x1002d3ad0
    void MidiPlayer::PitchWheel(int arg1, int arg2) {
        __thread_id* local_30;

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = sound::g_idWorkerThread;
        if (!(thread_id1_00 == (sound::g_idWorkerThread))) {
            new (&local_30) std::__thread_id();
            if (!(thread_id1 == local_30)) {
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midiplayer.cpp",
                          321, nullptr);
            }
        }
        PitchWheel2(arg1, arg2);
    }

    // 0x1002d3b60
    void MidiPlayer::PitchWheel2(int arg1, int arg2) {
        __thread_id* local_30;

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = sound::g_idWorkerThread;
        if (!(thread_id1_00 == (sound::g_idWorkerThread))) {
            new (&local_30) std::__thread_id();
            if (!(thread_id1 == local_30)) {
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midiplayer.cpp",
                          546, nullptr);
            }
        }
        int* piVar2 = (int*)field_812[(long)arg1];
        *piVar2 = arg2;
    }

    // 0x1002d3bf0
    void MidiPlayer::AllSoundOff(int arg1) {
        __thread_id* in_RAX;

        __thread_id* local_28 = in_RAX;
        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = sound::g_idWorkerThread;
        if (!(thread_id1_00 == (sound::g_idWorkerThread))) {
            new (&local_28) std::__thread_id();
            if (!(thread_id1 == local_28)) {
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midiplayer.cpp",
                          328, nullptr);
            }
        }
        AllSoundOff2(arg1);
    }

    // 0x1002d3c70
    void MidiPlayer::AllSoundOff2(int arg1) {
        AutoSingleton<ShaderThreadPoolSingleton>* this_01;
        WaveStream* pWVar4;
        array<shared_ptr<MidiNote>, 128ul>* this_02;
        shared_ptr<MidiNote>* this_03;
        shared_ptr<MidiPlayerMainThread>* midiPlayerMainThread;
        __thread_id* local_80;
        uint64_t local_70[2];
        Mixer* local_60;

        MidiPlayer* local_40 = this;
        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = sound::g_idWorkerThread;
        bool cVar1 = thread_id1_00 == (sound::g_idWorkerThread);
        if (!cVar1) {
            new (&local_80) std::__thread_id();
            cVar1 = thread_id1 == local_80;
            if (!cVar1) {
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midiplayer.cpp",
                          552, nullptr);
            }
        }
        uint8_t* this_00 = &local_40->field_67264;
        long lVar3 = (*this_00).operator->();
        uint64_t local_50 = ((lVar3 + 72))->begin_ptrs();
        Vector2T<int> local_78;
        shared_ptr<MidiMixer>* local_58 = (shared_ptr<MidiMixer>*)this_00;
        lVar3 = (*this_00).operator->();
        uint64_t local_48 = ((lVar3 + 72))->end();
        cVar1 = local_50 != local_48;
        if (cVar1) {
            local_40 = (MidiPlayer*)&local_40->field_1512;
            do {
                local_70[0] = local_50.next();
                local_78 = *local_70;
                this_01 = (AutoSingleton<ShaderThreadPoolSingleton>*)local_50.HeapBeginPtr();
                if ((arg1 < 0) || (*(int*)(this_01 + 32) == arg1)) {
                    midiPlayerMainThread = (shared_ptr<MidiPlayerMainThread>*)(this_01 + 152);
                    if (*midiPlayerMainThread != nullptr) {
                        pWVar4 = (WaveStream*)(*midiPlayerMainThread).operator->();
                        pWVar4->RampOut(sound::PCMPlayer::m_frequency / 100);
                        pWVar4 = (WaveStream*)(*midiPlayerMainThread).operator->();
                        cVar1 = pWVar4->Isramping();
                        if (cVar1) {
                            lVar3 = (*local_58).operator->();
                            local_60 = (Mixer*)(lVar3 + 96);
                            new (local_70) shared_ptr(midiPlayerMainThread);
                            local_60->PlayStream(*local_70);
                        }
                        this_01->~AutoSingleton();
                    }
                    if (*(int*)(this_01 + 132) < 0) {
                        new (local_70) shared_ptr();
                        this_02 = (array<shared_ptr<MidiNote>, 128ul>*)(*local_40)[(long)*(int*)(this_01 + 32)];
                        this_03 = (shared_ptr<MidiNote>*)(*this_02)[(long)*(int*)(this_01 + 92)];
                        *this_03 = *local_70;
                    }
                    this_01->Unlink();
                }
                local_50 = local_78;
                cVar1 = local_50 != local_48;
            } while (cVar1);
        }
    }

    // 0x1002d3ee0
    void MidiPlayer::AllControllersOff(int arg1) {
        __thread_id* in_RAX;

        __thread_id* local_28 = in_RAX;
        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = sound::g_idWorkerThread;
        if (!(thread_id1_00 == (sound::g_idWorkerThread))) {
            new (&local_28) std::__thread_id();
            if (!(thread_id1 == local_28)) {
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midiplayer.cpp",
                          335, nullptr);
            }
        }
        AllControllersOff2(arg1);
    }

    // 0x1002d3f60
    void MidiPlayer::AllControllersOff2(int arg1) {
        uint32_t* puVar2;
        int arg1_00;
        __thread_id* local_30;

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = sound::g_idWorkerThread;
        if (!(thread_id1_00 == (sound::g_idWorkerThread))) {
            new (&local_30) std::__thread_id();
            if (!(thread_id1 == local_30)) {
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midiplayer.cpp",
                          580, nullptr);
            }
        }
        if (arg1 < 0) {
            arg1_00 = 0;
            do {
                AllControllersOff2(arg1_00);
                arg1_00 = arg1_00 + 1;
            } while (arg1_00 != 16);
        } else {
            puVar2 = &field_428[(unsigned long)arg1];
            *puVar2 = 12800;
            puVar2 = &field_492[(unsigned long)arg1];
            *puVar2 = 8192;
            puVar2 = &field_556[(unsigned long)arg1];
            *puVar2 = 16383;
            puVar2 = &field_812[(unsigned long)arg1];
            *puVar2 = 8192;
            puVar2 = &field_876[(unsigned long)arg1];
            *puVar2 = 0;
            puVar2 = &field_940[(unsigned long)arg1];
            *puVar2 = 8192;
            CleanPorta(arg1);
            CleanRetrig(arg1);
            puVar2 = &field_104[(unsigned long)arg1];
            *puVar2 = 0;
            puVar2 = &field_1004[(unsigned long)arg1];
            *puVar2 = 32767;
            puVar2 = &field_1068[(unsigned long)arg1];
            *puVar2 = 256;
            puVar2 = &field_168[(unsigned long)arg1];
            *puVar2 = 0;
            SetRetrigRate(arg1, 8192);
        }
    }

    // 0x1002d4100
    void MidiPlayer::AllNotesOff(int arg1) {
        __thread_id* in_RAX;

        __thread_id* local_28 = in_RAX;
        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = sound::g_idWorkerThread;
        if (!(thread_id1_00 == (sound::g_idWorkerThread))) {
            new (&local_28) std::__thread_id();
            if (!(thread_id1 == local_28)) {
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midiplayer.cpp",
                          342, nullptr);
            }
        }
        AllNotesOff2(arg1);
    }

    // 0x1002d4180
    void MidiPlayer::AllNotesOff2(int arg1) {
        MidiNote* midiNote;
        array<shared_ptr<MidiNote>, 128ul>* this_00;
        shared_ptr<MidiNote>* this_01;
        MidiNote local_110;
        shared_ptr<RSevenDebugPresetProvider> local_60;
        __thread_id* local_50;

        MidiPlayer* local_38 = this;
        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = sound::g_idWorkerThread;
        bool cVar1 = thread_id1_00 == (sound::g_idWorkerThread);
        if (!cVar1) {
            new (&local_50) std::__thread_id();
            cVar1 = thread_id1 == local_50;
            if (!cVar1) {
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midiplayer.cpp",
                          607, nullptr);
            }
        }
        long lVar2 = local_38->field_67264.operator->();
        uint64_t local_48 = ((lVar2 + 72))->begin_ptrs();
        uint64_t local_40 = ((lVar2 + 72))->end();
        cVar1 = local_48 != local_40;
        if (cVar1) {
            local_38 = (MidiPlayer*)&local_38->field_1512;
            do {
                midiNote = (MidiNote*)local_48.HeapBeginPtr();
                local_110 = MidiNote(*midiNote);
                if (((arg1 < 0) || (local_110.field_32 == arg1)) && ((int)local_110.field_132 < 0)) {
                    local_60 = shared_ptr();
                    this_00 = (array<shared_ptr<MidiNote>, 128ul>*)(*local_38)[(long)local_110.field_32];
                    this_01 = (shared_ptr<MidiNote>*)(*this_00)[(long)local_110.field_88._4_4_];
                    *this_01 = local_60;
                    local_110.field_132._0_4_ = 0;
                }
                ++local_48;
                cVar1 = local_48 != local_40;
            } while (cVar1);
        }
    }

    // 0x1002d4330
    void MidiPlayer::Reset() {
        __thread_id* local_20;

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = sound::g_idWorkerThread;
        if (!(thread_id1_00 == (sound::g_idWorkerThread))) {
            new (&local_20) std::__thread_id();
            if (!(thread_id1 == local_20)) {
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midiplayer.cpp",
                          349, nullptr);
            }
        }
        Reset2();
    }

    // 0x1002d43b0
    void MidiPlayer::ProcessMidi(int arg1) {
        __thread_id* in_RAX;

        __thread_id* local_28 = in_RAX;
        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = sound::g_idWorkerThread;
        if (!(thread_id1_00 == (sound::g_idWorkerThread))) {
            new (&local_28) std::__thread_id();
            if (!(thread_id1 == local_28)) {
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midiplayer.cpp",
                          356, nullptr);
            }
        }
        ProcessMidi2(arg1);
    }

    // 0x1002d4430
    void MidiPlayer::ProcessMidi2(int arg1) {
        __thread_id* in_RAX;
        int* piVar2;
        uint8_t* pbVar3;
        unsigned int* puVar4;
        int extraout_EDX;
        int extraout_EDX_00;
        unsigned int uVar5;
        array<int, 16ul>* paVar7;
        unsigned int uVar8;
        unsigned int arg1_01;

        __thread_id* local_38 = in_RAX;
        auto this_00 = std::this_thread::get_id();
        MidiPlayer* thread_id1 = sound::g_idWorkerThread;
        MidiPlayer* pMVar6 = sound::g_idWorkerThread;
        bool cVar1 = this_00 == ((__thread_id*)sound::g_idWorkerThread);
        int arg1_00 = (int)pMVar6;
        int arg2 = extraout_EDX;
        if (!cVar1) {
            new (&local_38) std::__thread_id();
            cVar1 = thread_id1 == local_38;
            arg1_00 = (int)local_38;
            this_00 = thread_id1;
            arg2 = extraout_EDX_00;
            if (!cVar1) {
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midiplayer.cpp",
                          675, nullptr);
            }
        }
        switch ((arg1 & 240U) - 128 >> 4) {
        case 0:
            StopNote2((int)this, arg1 & 15, (unsigned int)arg1 >> 8 & 127);
            break;
        case 1:
            uVar5 = (unsigned int)arg1 >> 8 & 127;
            uVar8 = (unsigned int)arg1 >> 16 & 127;
            if (uVar8 == 0) {
                StopNote2((int)this, arg1 & 15U, uVar5);
            } else {
                PlayNote2(arg1 & 15U, uVar5, uVar8);
            }
            break;
        case 2:
            AfterTouch2(this_00, arg1_00, arg2, 2968304);
            break;
        case 3:
            uVar5 = (unsigned int)arg1 >> 8 & 127;
            if (123 < uVar5) {
                return;
            }
            arg1_01 = arg1 & 15;
            uVar8 = (unsigned int)arg1 >> 16 & 127;
            switch (uVar5) {
            case 0:
                puVar4 = &field_748[(unsigned long)arg1_01];
                uVar5 = *puVar4 & 4292886527;
                uVar8 = uVar8 << 14;
                goto LAB_1002d468b;
            case 1:
                paVar7 = (array<int, 16ul>*)&field_876;
                goto LAB_1002d4675;
            case 5:
                puVar4 = &field_940[(unsigned long)arg1_01];
                *puVar4 = uVar8 << 7 | *puVar4 & 4294951039;
                goto LAB_1002d4a85;
            case 6:
                goto switchD_1002d4557_caseD_6;
            case 7:
                puVar4 = &field_428[(unsigned long)arg1_01];
                *puVar4 = uVar8 << 7 | *puVar4 & 4294951039;
                goto LAB_1002d49dd;
            case 10:
                paVar7 = (array<int, 16ul>*)&field_492;
                goto LAB_1002d4650;
            case 11:
                paVar7 = (array<int, 16ul>*)&field_556;
            LAB_1002d4650:
                puVar4 = (unsigned int*)(*paVar7)[(unsigned long)arg1_01];
                *puVar4 = uVar8 << 7 | *puVar4 & 4294951039;
            LAB_1002d4938:
                switch (uVar5) {
                case 6:
                switchD_1002d4557_caseD_6:
                    piVar2 = &field_1004[(unsigned long)arg1_01];
                    if (*piVar2 == 16384) {
                        puVar4 = &field_1068[(unsigned long)arg1_01];
                        *puVar4 = uVar8 << 7 | *puVar4 & 4294951039;
                    }
                LAB_1002d498e:
                    switch (uVar5) {
                    case 16:
                        goto switchD_1002d4557_caseD_10;
                    case 17:
                        goto switchD_1002d4557_caseD_11;
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
                    case 33:
                    case 34:
                    case 35:
                    case 36:
                    case 37:
                    case 39:
                    case 40:
                    case 41:
                    case 42:
                    case 43:
                    case 44:
                    case 45:
                    case 46:
                    case 47:
                        goto switchD_1002d4557_caseD_2;
                    case 38:
                        goto switchD_1002d4557_caseD_26;
                    case 48:
                        goto switchD_1002d4557_caseD_30;
                    case 49:
                        break;
                    default:
                        goto switchD_1002d4952_default;
                    }
                case 7:
                case 8:
                case 9:
                case 10:
                case 11:
                case 12:
                case 13:
                case 14:
                case 15:
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
                case 33:
                case 34:
                case 35:
                case 36:
                case 37:
                case 39:
                case 40:
                case 41:
                case 42:
                case 43:
                case 44:
                case 45:
                case 46:
                case 47:
                    goto switchD_1002d4557_caseD_2;
                case 16:
                switchD_1002d4557_caseD_10:
                    puVar4 = &field_168[(unsigned long)arg1_01];
                    *puVar4 = uVar8 << 7 | *puVar4 & 4294951039;
                LAB_1002d4a15:
                    if (48 < uVar5)
                        goto LAB_1002d4a46;
                    if (uVar5 != 17) {
                        if (uVar5 != 48) {
                            return;
                        }
                        goto switchD_1002d4557_caseD_30;
                    }
                case 17:
                switchD_1002d4557_caseD_11:
                    puVar4 = &field_1132[(unsigned long)arg1_01];
                    SetRetrigRate(arg1_01, uVar8 << 7 | *puVar4 & 4294951039);
                    if (uVar5 != 49) {
                        return;
                    }
                    break;
                case 38:
                switchD_1002d4557_caseD_26:
                    piVar2 = &field_1004[(unsigned long)arg1_01];
                    if (*piVar2 == 16384) {
                        puVar4 = &field_1068[(unsigned long)arg1_01];
                        *puVar4 = *puVar4 & 4294967168 | uVar8;
                    }
                LAB_1002d49dd:
                    switch (uVar5) {
                    case 16:
                        goto switchD_1002d4557_caseD_10;
                    case 17:
                        goto switchD_1002d4557_caseD_11;
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
                    case 33:
                    case 34:
                    case 35:
                    case 36:
                    case 37:
                    case 38:
                    case 39:
                    case 40:
                    case 41:
                    case 42:
                    case 43:
                    case 44:
                    case 45:
                    case 46:
                    case 47:
                        goto switchD_1002d4557_caseD_2;
                    case 48:
                        goto switchD_1002d4557_caseD_30;
                    case 49:
                        break;
                    default:
                        goto switchD_1002d4952_default;
                    }
                case 48:
                switchD_1002d4557_caseD_30:
                    puVar4 = &field_168[(unsigned long)arg1_01];
                    *puVar4 = *puVar4 & 4294967168 | uVar8;
                    if (uVar5 == 17)
                        goto switchD_1002d4557_caseD_11;
                LAB_1002d4a46:
                    if (uVar5 != 49)
                        goto switchD_1002d4952_default;
                    break;
                case 49:
                    break;
                default:
                switchD_1002d4952_default:
                    if (uVar5 != 81) {
                        return;
                    }
                switchD_1002d4557_caseD_51:
                    if (uVar8 < 64) {
                        CleanRetrig(arg1_01);
                        pbVar3 = &field_104[(unsigned long)arg1_01];
                        *pbVar3 = *pbVar3 & 251;
                    } else {
                        pbVar3 = &field_104[(unsigned long)arg1_01];
                        *pbVar3 = *pbVar3 | 4;
                    }
                LAB_1002d4a85:
                    if (uVar5 != 49) {
                        if (uVar5 != 17) {
                            return;
                        }
                        goto switchD_1002d4557_caseD_11;
                    }
                }
            case 49:
            switchD_1002d4557_caseD_31:
                puVar4 = &field_1132[(unsigned long)arg1_01];
                SetRetrigRate(arg1_01, *puVar4 & 4294967168 | uVar8);
                break;
            case 16:
                goto switchD_1002d4557_caseD_10;
            case 17:
                goto switchD_1002d4557_caseD_11;
            case 32:
                paVar7 = (array<int, 16ul>*)&field_748;
            LAB_1002d4675:
                puVar4 = (unsigned int*)(*paVar7)[(unsigned long)arg1_01];
                uVar5 = *puVar4 & 4294951039;
                uVar8 = uVar8 << 7;
            LAB_1002d468b:
                *puVar4 = uVar8 | uVar5;
                break;
            case 33:
                puVar4 = &field_876[(unsigned long)arg1_01];
                *puVar4 = *puVar4 & 4294967168 | uVar8;
                break;
            case 37:
                puVar4 = &field_940[(unsigned long)arg1_01];
                *puVar4 = *puVar4 & 4294967168 | uVar8;
                goto LAB_1002d4a15;
            case 38:
                goto switchD_1002d4557_caseD_26;
            case 39:
                puVar4 = &field_428[(unsigned long)arg1_01];
                *puVar4 = *puVar4 & 4294967168 | uVar8;
                goto LAB_1002d498e;
            case 42:
                paVar7 = (array<int, 16ul>*)&field_492;
                goto LAB_1002d4703;
            case 43:
                paVar7 = (array<int, 16ul>*)&field_556;
            LAB_1002d4703:
                puVar4 = (unsigned int*)(*paVar7)[(unsigned long)arg1_01];
                *puVar4 = *puVar4 & 4294967168 | uVar8;
                goto LAB_1002d4938;
            case 48:
                goto switchD_1002d4557_caseD_30;
            case 64:
                puVar4 = &field_104[(unsigned long)arg1_01];
                *puVar4 = (unsigned int)(63 < uVar8) | *puVar4 & 4294967294;
                break;
            case 65:
                if (uVar8 < 64) {
                    CleanPorta(arg1_01);
                    pbVar3 = &field_104[(unsigned long)arg1_01];
                    *pbVar3 = *pbVar3 & 253;
                } else {
                    pbVar3 = &field_104[(unsigned long)arg1_01];
                    *pbVar3 = *pbVar3 | 2;
                }
                switch (uVar5) {
                case 6:
                    goto switchD_1002d4557_caseD_6;
                default:
                    break;
                case 16:
                    goto switchD_1002d4557_caseD_10;
                case 17:
                    goto switchD_1002d4557_caseD_11;
                case 38:
                    goto switchD_1002d4557_caseD_26;
                case 48:
                    goto switchD_1002d4557_caseD_30;
                case 49:
                    goto switchD_1002d4557_caseD_31;
                case 81:
                    goto switchD_1002d4557_caseD_51;
                case 98:
                    goto switchD_1002d4557_caseD_62;
                case 99:
                    goto switchD_1002d4557_caseD_63;
                case 100:
                    goto switchD_1002d4557_caseD_64;
                case 101:
                    goto switchD_1002d4557_caseD_65;
                case 120:
                    goto switchD_1002d4557_caseD_78;
                case 121:
                    goto switchD_1002d4557_caseD_79;
                case 123:
                    goto switchD_1002d4557_caseD_7b;
                }
            case 81:
                goto switchD_1002d4557_caseD_51;
            case 98:
            switchD_1002d4557_caseD_62:
                puVar4 = &field_1004[(unsigned long)arg1_01];
                *puVar4 = *puVar4 & 16256 | uVar8;
                switch (uVar5) {
                case 6:
                    goto switchD_1002d4557_caseD_6;
                default:
                    break;
                case 16:
                    goto switchD_1002d4557_caseD_10;
                case 17:
                    goto switchD_1002d4557_caseD_11;
                case 38:
                    goto switchD_1002d4557_caseD_26;
                case 48:
                    goto switchD_1002d4557_caseD_30;
                case 49:
                    goto switchD_1002d4557_caseD_31;
                case 81:
                    goto switchD_1002d4557_caseD_51;
                case 100:
                    goto switchD_1002d4557_caseD_64;
                case 101:
                    goto switchD_1002d4557_caseD_65;
                case 120:
                    goto switchD_1002d4557_caseD_78;
                case 121:
                    goto switchD_1002d4557_caseD_79;
                case 123:
                    goto switchD_1002d4557_caseD_7b;
                }
            case 99:
            switchD_1002d4557_caseD_63:
                puVar4 = &field_1004[(unsigned long)arg1_01];
                *puVar4 = uVar8 << 7 | *puVar4 & 127;
                switch (uVar5) {
                case 6:
                    goto switchD_1002d4557_caseD_6;
                default:
                    break;
                case 16:
                    goto switchD_1002d4557_caseD_10;
                case 17:
                    goto switchD_1002d4557_caseD_11;
                case 38:
                    goto switchD_1002d4557_caseD_26;
                case 48:
                    goto switchD_1002d4557_caseD_30;
                case 49:
                    goto switchD_1002d4557_caseD_31;
                case 81:
                    goto switchD_1002d4557_caseD_51;
                case 98:
                    goto switchD_1002d4557_caseD_62;
                case 100:
                    goto switchD_1002d4557_caseD_64;
                case 101:
                    goto switchD_1002d4557_caseD_65;
                case 120:
                    goto switchD_1002d4557_caseD_78;
                case 121:
                    goto switchD_1002d4557_caseD_79;
                case 123:
                    goto switchD_1002d4557_caseD_7b;
                }
            case 100:
            switchD_1002d4557_caseD_64:
                puVar4 = &field_1004[(unsigned long)arg1_01];
                *puVar4 = (*puVar4 & 16256) + uVar8 + 16384;
                if (uVar5 < 81) {
                    switch (uVar5) {
                    case 6:
                        goto switchD_1002d4557_caseD_6;
                    default:
                        return;
                    case 16:
                        goto switchD_1002d4557_caseD_10;
                    case 17:
                        goto switchD_1002d4557_caseD_11;
                    case 38:
                        goto switchD_1002d4557_caseD_26;
                    case 48:
                        goto switchD_1002d4557_caseD_30;
                    case 49:
                        goto switchD_1002d4557_caseD_31;
                    }
                }
                if (uVar5 < 121) {
                    if (uVar5 != 81) {
                        if (uVar5 != 120) {
                            return;
                        }
                        goto switchD_1002d4557_caseD_78;
                    }
                    goto switchD_1002d4557_caseD_51;
                }
                if (uVar5 == 121)
                    goto switchD_1002d4557_caseD_79;
            LAB_1002d4924:
                if (uVar5 != 123) {
                    return;
                }
            case 123:
            switchD_1002d4557_caseD_7b:
                AllNotesOff2(arg1_01);
                goto LAB_1002d4938;
            case 101:
            switchD_1002d4557_caseD_65:
                puVar4 = &field_1004[(unsigned long)arg1_01];
                *puVar4 = (*puVar4 & 127) + uVar8 * 128 + 16384;
                switch (uVar5) {
                case 6:
                    goto switchD_1002d4557_caseD_6;
                case 7:
                case 8:
                case 9:
                case 10:
                case 11:
                case 12:
                case 13:
                case 14:
                case 15:
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
                case 33:
                case 34:
                case 35:
                case 36:
                case 37:
                case 39:
                case 40:
                case 41:
                case 42:
                case 43:
                case 44:
                case 45:
                case 46:
                case 47:
                    break;
                case 16:
                    goto switchD_1002d4557_caseD_10;
                case 17:
                    goto switchD_1002d4557_caseD_11;
                case 38:
                    goto switchD_1002d4557_caseD_26;
                case 48:
                    goto switchD_1002d4557_caseD_30;
                case 49:
                    goto switchD_1002d4557_caseD_31;
                default:
                    switch (uVar5) {
                    case 81:
                        goto switchD_1002d4557_caseD_51;
                    default:
                        break;
                    case 100:
                        goto switchD_1002d4557_caseD_64;
                    case 120:
                        goto switchD_1002d4557_caseD_78;
                    case 121:
                        goto switchD_1002d4557_caseD_79;
                    case 123:
                        goto switchD_1002d4557_caseD_7b;
                    }
                }
            case 120:
            switchD_1002d4557_caseD_78:
                AllSoundOff2(arg1_01);
                if (uVar5 < 81) {
                    switch (uVar5) {
                    case 6:
                        goto switchD_1002d4557_caseD_6;
                    default:
                        goto switchD_1002d4557_caseD_2;
                    case 16:
                        goto switchD_1002d4557_caseD_10;
                    case 17:
                        goto switchD_1002d4557_caseD_11;
                    case 38:
                        goto switchD_1002d4557_caseD_26;
                    case 48:
                        goto switchD_1002d4557_caseD_30;
                    case 49:
                        goto switchD_1002d4557_caseD_31;
                    }
                }
                if (uVar5 != 81) {
                    if (uVar5 != 123) {
                        if (uVar5 != 121) {
                            return;
                        }
                        goto switchD_1002d4557_caseD_79;
                    }
                    goto switchD_1002d4557_caseD_7b;
                }
                goto switchD_1002d4557_caseD_51;
            case 121:
            switchD_1002d4557_caseD_79:
                AllControllersOff2(arg1_01);
                switch (uVar5) {
                case 6:
                    goto switchD_1002d4557_caseD_6;
                case 7:
                case 8:
                case 9:
                case 10:
                case 11:
                case 12:
                case 13:
                case 14:
                case 15:
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
                case 33:
                case 34:
                case 35:
                case 36:
                case 37:
                case 39:
                case 40:
                case 41:
                case 42:
                case 43:
                case 44:
                case 45:
                case 46:
                case 47:
                    break;
                case 16:
                    goto switchD_1002d4557_caseD_10;
                case 17:
                    goto switchD_1002d4557_caseD_11;
                case 38:
                    goto switchD_1002d4557_caseD_26;
                case 48:
                    goto switchD_1002d4557_caseD_30;
                case 49:
                    goto switchD_1002d4557_caseD_31;
                default:
                    if (uVar5 != 81)
                        goto LAB_1002d4924;
                    goto switchD_1002d4557_caseD_51;
                }
            }
            break;
        case 4:
            piVar2 = &field_748[(unsigned long)(arg1 & 15U)];
            SetInst2(arg1 & 15U, ((unsigned int)arg1 >> 8 & 127) + *piVar2);
            break;
        case 5:
            ChannelPressure2(this_00, arg1_00, arg2);
            break;
        case 6:
            PitchWheel2(arg1 & 15, (unsigned int)arg1 >> 8 & 127 | (unsigned int)arg1 >> 9 & 16256);
            break;
        default:
            if ((char)arg1 == -1) {
                Reset2();
            }
        }
    switchD_1002d4557_caseD_2:
    }

    // 0x1002d5b70
    int MidiPlayer::GetRateRaw(const MidiNote& midiNote) {
        float fVar9;
        __thread_id* local_40;

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = sound::g_idWorkerThread;
        if (!(thread_id1_00 == (sound::g_idWorkerThread))) {
            new (&local_40) std::__thread_id();
            if (!(thread_id1 == local_40)) {
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midiplayer.cpp",
                          914, nullptr);
            }
        }
        int iVar7 = *(int*)((long)&midiNote.field_112 + 4);
        int iVar8 = *(int*)&midiNote.field_112;
        int iVar1 = *(int*)((long)&midiNote.field_104 + 4);
        int iVar2 = midiNote.field_32;
        int* piVar5 = &field_812[(long)iVar2];
        int iVar3 = *piVar5;
        piVar5 = &field_1068[(long)iVar2];
        iVar7 = ((iVar3 - 8192) * *piVar5 >> 12) + (iVar7 * iVar8 >> 12) + iVar1;
        long lVar6 = midiNote.field_72;
        if (0 < *(int*)(lVar6 + 68)) {
            iVar8 = *(int*)(lVar6 + 64);
            if (iVar8 < 1) {
                piVar5 = &field_876[(long)(int)midiNote.field_32];
                if (*piVar5 < 1)
                    goto LAB_1002d5cc8;
            }
            iVar8 = iVar8 * 4;
            iVar1 = *(int*)(lVar6 + 72) * 2;
            if (*(int*)&midiNote.field_140 < iVar1) {
                iVar8 = (*(int*)&midiNote.field_140 * iVar8) / iVar1;
            }
            piVar5 = &field_876[(long)(int)midiNote.field_32];
            iVar1 = *piVar5;
            fVar9 = (float)::sin((float)(*(unsigned int*)((long)&midiNote.field_140 + 4) & 511) * 0.012271847f);
            iVar7 = iVar7 + (int)((float)((iVar1 >> 7) + iVar8) * fVar9);
        }
    LAB_1002d5cc8:
        uint8_t* this_00 = &midiNote.field_56;
        lVar6 = (*this_00).operator->();
        double local_38 = (double)(*(int*)(lVar6 + 4) << 8);
        double dVar10 = (double)pow<int, double>((int)this_00, (double)iVar7 * 0.0003255208333333333);
        iVar8 = (int)((dVar10 * local_38) / (double)sound::PCMPlayer::m_frequency + 0.5);
        iVar7 = 1;
        if (0 < iVar8) {
            iVar7 = iVar8;
        }
        return iVar7;
    }

    // 0x1002d5d40
    int MidiPlayer::GetVolume(const MidiNote& midiNote) {
        uint8_t bVar1;
        int iVar4;
        char* pcVar7;
        uint8_t* pbVar8;
        int iVar10;
        double dVar11;
        __thread_id* local_48;
        unsigned int local_3c;
        double local_38;

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = sound::g_idWorkerThread;
        if (!(thread_id1_00 == (sound::g_idWorkerThread))) {
            new (&local_48) std::__thread_id();
            if (!(thread_id1 == local_48)) {
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midiplayer.cpp",
                          945, nullptr);
            }
        }
        Array<game::VarValue>* pAVar5 = (Array<game::VarValue>*)midiNote.field_72;
        int iVar9 = midiNote.field_32;
        int* piVar6 = &field_428[(long)iVar9];
        int iVar2 = *piVar6;
        piVar6 = &field_556[(long)iVar9];
        iVar9 = iVar2 * *piVar6 + 4096 >> 13;
        iVar9 =
            ((int)((iVar9 * iVar9 + 16384U >> 15) * *(int*)((long)&midiNote.field_96 + 4) + 16384) >> 15) * field_416 +
                128 >>
            8;
        if (0 < *(int*)(pAVar5 + 48)) {
            local_38 = (double)iVar9;
            dVar11 = (double)_exp2((double)*(int*)(pAVar5 + 48) * -1.953125e-05 * (double)*(int*)&midiNote.field_120);
            iVar9 = (int)(dVar11 * local_38 + 0.5);
        }
        if (!(pAVar5->empty())) {
            local_38 =
                (double)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)(*(uint32_t*)((long)&midiNote.field_120 + 4)));
            pcVar7 = (char*)(*pAVar5)[(long)*(int*)&midiNote.field_128 + 1];
            iVar10 = (int)*pcVar7;
            iVar2 = *(int*)&midiNote.field_128;
            iVar4 = pAVar5->end();
            if (iVar2 < iVar4 - 2) {
                pbVar8 = (uint8_t*)(*pAVar5)[(long)*(int*)&midiNote.field_128];
                local_3c = (unsigned int)*pbVar8;
                local_38 = (double)(((uint64_t)local_38._4_4_ << 32) |
                                    (uint32_t)(local_38._0_4_ + (unsigned int)*pbVar8 * -256));
                pbVar8 = (uint8_t*)(*pAVar5)[(long)*(int*)&midiNote.field_128 + 2];
                bVar1 = *pbVar8;
                pcVar7 = (char*)(*pAVar5)[(long)*(int*)&midiNote.field_128 + 3];
                iVar10 = iVar10 + ((*pcVar7 - iVar10) * local_38._0_4_) / (int)((bVar1 - local_3c) * 256);
            }
            iVar9 = iVar10 * iVar9 + 32 >> 6;
        }
        if (0 < *(int*)&midiNote.field_132) {
            pAVar5 = pAVar5 + 24;
            if (!(pAVar5->empty())) {
                local_38._0_4_ = *(int*)&midiNote.field_132;
                pcVar7 = (char*)(*pAVar5)[(long)*(int*)((long)&midiNote.field_132 + 4) + 1];
                iVar10 = (int)*pcVar7;
                iVar2 = *(int*)((long)&midiNote.field_132 + 4);
                iVar4 = pAVar5->end();
                if (iVar2 < iVar4 - 2) {
                    pbVar8 = (uint8_t*)(*pAVar5)[(long)*(int*)((long)&midiNote.field_132 + 4)];
                    local_3c = (unsigned int)*pbVar8;
                    local_38 = (double)(((uint64_t)local_38._4_4_ << 32) |
                                        (uint32_t)(local_38._0_4_ + (unsigned int)*pbVar8 * -256));
                    pbVar8 = (uint8_t*)(*pAVar5)[(long)*(int*)((long)&midiNote.field_132 + 4) + 2];
                    bVar1 = *pbVar8;
                    pcVar7 = (char*)(*pAVar5)[(long)*(int*)((long)&midiNote.field_132 + 4) + 3];
                    iVar10 = iVar10 + ((*pcVar7 - iVar10) * local_38._0_4_) / (int)((bVar1 - local_3c) * 256);
                }
                iVar9 = iVar10 * iVar9 + 32 >> 6;
            }
        }
        return iVar9;
    }

    // 0x1002d5fe0
    int MidiPlayer::GetPan(const MidiNote& midiNote) {
        __thread_id* in_RAX;

        __thread_id* local_28 = in_RAX;
        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = sound::g_idWorkerThread;
        if (!(thread_id1_00 == (sound::g_idWorkerThread))) {
            new (&local_28) std::__thread_id();
            if (!(thread_id1 == local_28)) {
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midiplayer.cpp",
                          995, nullptr);
            }
        }
        int* piVar3 = &field_492[(long)(int)midiNote.field_32];
        int iVar2 = *piVar3;
        if (iVar2 < 8192) {
            iVar2 = iVar2 * *(int*)&midiNote.field_104 + 32 >> 6;
        } else {
            iVar2 = 16384 - ((128 - *(int*)&midiNote.field_104) * (16384 - iVar2) + 32 >> 6);
        }
        return iVar2;
    }

    // 0x1002d6130
    void MidiPlayer::CleanPorta(int arg1) {
        long lVar4;
        MidiNote* midiNote;
        array<shared_ptr<MidiNote>, 128ul>* this_00;
        shared_ptr<configdecoder::ObjType>* objType;
        MidiNote local_100;
        __thread_id* local_50;
        uint64_t local_48;
        uint64_t local_40;
        MidiPlayer* local_38;

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = sound::g_idWorkerThread;
        bool cVar1 = thread_id1_00 == (sound::g_idWorkerThread);
        if (!cVar1) {
            new (&local_50) std::__thread_id();
            cVar1 = thread_id1 == local_50;
            if (!cVar1) {
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midiplayer.cpp",
                          641, nullptr);
            }
        }
        uint8_t* pbVar3 = (uint8_t*)field_104[(long)arg1];
        if ((*pbVar3 & 2) != 0) {
            local_38 = this;
            lVar4 = field_67264.operator->();
            local_48 = ((lVar4 + 72))->begin_ptrs();
            local_40 = ((lVar4 + 72))->end();
            cVar1 = local_48 != local_40;
            if (cVar1) {
                local_38 = (MidiPlayer*)&local_38->field_1512;
                do {
                    midiNote = (MidiNote*)local_48.HeapBeginPtr();
                    local_100 = MidiNote(*midiNote);
                    if (local_100.field_32 == arg1) {
                        this_00 = (array<shared_ptr<MidiNote>, 128ul>*)(*local_38)[(long)arg1];
                        objType = (shared_ptr<configdecoder::ObjType>*)(*this_00)[(long)local_100.field_88._4_4_];
                        if ((*objType == nullptr) && ((int)local_100.field_132 < 0)) {
                            local_100.field_132._0_4_ = 0;
                        }
                    }
                    ++local_48;
                    cVar1 = local_48 != local_40;
                } while (cVar1);
            }
        }
    }

    // 0x1002d62b0
    void MidiPlayer::CleanRetrig(int arg1) {
        long lVar3;
        MidiNote* midiNote;
        MidiNote local_f0;
        __thread_id* local_40;
        uint64_t local_38;
        uint64_t local_30;

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = sound::g_idWorkerThread;
        bool cVar1 = thread_id1_00 == (sound::g_idWorkerThread);
        if (!cVar1) {
            new (&local_40) std::__thread_id();
            cVar1 = thread_id1 == local_40;
            if (!cVar1) {
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midiplayer.cpp",
                          660, nullptr);
            }
        }
        uint8_t* pbVar2 = (uint8_t*)field_104[(long)arg1];
        if ((*pbVar2 & 4) != 0) {
            lVar3 = field_67264.operator->();
            local_38 = ((lVar3 + 72))->begin_ptrs();
            local_30 = ((lVar3 + 72))->end();
            cVar1 = local_38 != local_30;
            if (cVar1) {
                do {
                    midiNote = (MidiNote*)local_38.HeapBeginPtr();
                    local_f0 = MidiNote(*midiNote);
                    if (local_f0.field_32 == arg1) {
                        local_f0.field_168._4_4_ = 0;
                    }
                    ++local_38;
                    cVar1 = local_38 != local_30;
                } while (cVar1);
            }
        }
    }

    // 0x1002d63f0
    void MidiPlayer::SetRetrigRate(int arg1, int arg2) {
        __thread_id* local_30;

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = sound::g_idWorkerThread;
        if (!(thread_id1_00 == (sound::g_idWorkerThread))) {
            new (&local_30) std::__thread_id();
            if (!(thread_id1 == local_30)) {
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midiplayer.cpp",
                          904, nullptr);
            }
        }
        uint8_t* this_00 = &field_1132;
        int* piVar2 = (int*)(*this_00)[(long)arg1];
        *piVar2 = arg2;
        double dVar3 = (double)pow<int, double>((int)this_00, (double)arg2 * 0.0005493164f);
        piVar2 = &field_232[(long)arg1];
        *piVar2 = (int)(dVar3 * 2097152.0 + 0.5);
    }

    // 0x1002d6530
    auto MidiPlayer::SubstreamStart() {
        __thread_id* in_RAX;

        __thread_id* local_28 = in_RAX;
        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = sound::g_idWorkerThread;
        if (!(thread_id1_00 == (sound::g_idWorkerThread))) {
            new (&local_28) std::__thread_id();
            if (!(thread_id1 == local_28)) {
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midiplayer.cpp",
                          1010, nullptr);
            }
        }
        return auto(&field_67264);
    }

    // 0x1002d65c0
    MidiPlayer* MidiPlayer::SubstreamNext() {
        new (this) shared_ptr();
        return this;
    }

    // 0x1002d65e0
    uint64_t MidiPlayer::SelfMixCost() {
        return 0;
    }

    // 0x1002d65f0
    void MidiPlayer::DoMix(Array<int>& arg1, int arg2, int arg3) {
        unsigned long uVar1;
        int iVar2;
        uint8_t bVar4;
        int iVar5;
        unsigned long uVar6;
        long* plVar7;
        __thread_id* local_60;
        long local_50;
        shared_ptr<MidiMixer>* local_48;

        int local_34 = arg2;
        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = sound::g_idWorkerThread;
        bool cVar3 = thread_id1_00 == (sound::g_idWorkerThread);
        if (!cVar3) {
            new (&local_60) std::__thread_id();
            cVar3 = thread_id1 == local_60;
            if (!cVar3) {
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midiplayer.cpp",
                          1025, nullptr);
            }
        }
        PullXferStateIntoWorker();
        MidiParser* local_58 = (MidiParser*)field_67048;
        cVar3 = local_58->GotMidi();
        if ((cVar3) && (field_424 == false)) {
            local_50 = (long)((*(int*)(field_67048 + 32) * field_420) / sound::PCMPlayer::m_frequency);
            local_48 = (shared_ptr<MidiMixer>*)&field_67264;
            do {
                uVar1 = field_67248;
                uVar6 = arg3 * local_50 + uVar1;
                if ((long)uVar6 <= (long)field_67256) {
                    field_67248 = uVar6;
                    break;
                }
                uVar6 = (long)(~uVar1 + local_50 + field_67256) / local_50;
                iVar5 = (int)uVar6;
                field_67248 = iVar5 * local_50 + uVar1;
                plVar7 = (long*)(*local_48).operator->();
                iVar2 = local_34;
                (**(void (**)(...))(*plVar7 + 40))(plVar7, arg1, local_34, uVar6 & 4294967295);
                local_34 = iVar2 + iVar5;
                arg3 = arg3 - iVar5;
                UpdateMidi();
                bVar4 = local_58->GotMidi();
            } while ((unsigned int)(bVar4 ^ 1) * 3 == 0);
        }
        plVar7 = (long*)field_67264.operator->();
        (**(void (**)(...))(*plVar7 + 40))(plVar7, arg1, local_34, arg3);
    }

    // 0x1002d67a0
    void MidiPlayer::UpdateMidi() {
        int iVar3;
        int* piVar4;
        __thread_id* local_68;
        scoped_lock<std::mutex> local_60;

        MidiPlayer* local_38 = this;
        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = sound::g_idWorkerThread;
        bool cVar2 = thread_id1_00 == (sound::g_idWorkerThread);
        if (!cVar2) {
            new (&local_68) std::__thread_id();
            cVar2 = thread_id1 == local_68;
            if (!cVar2) {
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midiplayer.cpp",
                          1104, nullptr);
            }
        }
        MidiPlayer* pMVar1 = local_38;
        uint8_t* local_48 = &local_38->field_352;
        std::mutex::lock();
        int arg1 = pMVar1->field_67236;
        int arg1_00 = pMVar1->field_67240;
        long long local_40 = pMVar1->field_67256;
        uint8_t* this_00 = pMVar1->field_67048;
        Array<int>* local_50 = (Array<int>*)(pMVar1->field_67048 + 40);
        mutex* local_58 = (mutex*)&pMVar1->field_1448;
        do {
            do {
                piVar4 = (int*)(*local_50)[(long)arg1];
                if (*piVar4 != arg1_00)
                    goto LAB_1002d6976;
                this_00->SetTrack(arg1);
                iVar3 = this_00->GetEvent(arg1);
                if (iVar3 == 1) {
                    this_00->FinishTrack();
                    this_00->UnsetTrack(arg1);
                    cVar2 = this_00->AllTracksFinished();
                    pMVar1 = local_38;
                    iVar3 = 5;
                    if (cVar2) {
                        if ((local_38->field_67232 == '\0') || (arg1_00 == 0)) {
                            Reset2(local_38);
                            this_00->DropMidi();
                            std::mutex::unlock();
                            local_60 = std::scoped_lock(*local_58);
                            if (*(int*)(pMVar1->m_globalVolume + 8) == 0) {
                                *(uint32_t*)(local_38->m_globalVolume + 240) = 0;
                            }
                            iVar3 = 1;
                        } else {
                            this_00->Restart(local_40);
                        }
                    }
                } else {
                    if ((char)iVar3 < '\0') {
                        ProcessMidi2(local_38, iVar3);
                    }
                    this_00->ProcessDeltaTime(arg1);
                    this_00->UnsetTrack(arg1);
                    iVar3 = 0;
                }
            } while (iVar3 == 0);
            if (iVar3 != 5) {
                return;
            }
        LAB_1002d6976:
            arg1 = this_00->NextTrackToPlay();
            piVar4 = (int*)(*local_50)[(long)arg1];
            arg1_00 = *piVar4;
            local_40 = this_00->TimeFromTick(arg1_00);
            if (arg1_00 != local_38->field_67240) {
                local_38->field_67236 = arg1;
                local_38->field_67240 = arg1_00;
                local_38->field_67256 = local_40;
                std::mutex::unlock();
                return;
            }
        } while (true);
    }

    // 0x1002d69f0
    void MidiPlayer::PretendToMix(int arg1) {
        unsigned long uVar1;
        uint8_t bVar3;
        int iVar4;
        unsigned long uVar5;
        long* plVar6;
        long lVar7;
        __thread_id* local_40;
        shared_ptr<MidiMixer>* local_38;

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = sound::g_idWorkerThread;
        bool cVar2 = thread_id1_00 == (sound::g_idWorkerThread);
        if (!cVar2) {
            new (&local_40) std::__thread_id();
            cVar2 = thread_id1 == local_40;
            if (!cVar2) {
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midiplayer.cpp",
                          1056, nullptr);
            }
        }
        PullXferStateIntoWorker();
        cVar2 = field_67048->GotMidi();
        if ((cVar2) && (field_424 == false)) {
            lVar7 = (long)((*(int*)(field_67048 + 32) * field_420) / sound::PCMPlayer::m_frequency);
            local_38 = (shared_ptr<MidiMixer>*)&field_67264;
            do {
                uVar1 = field_67248;
                uVar5 = arg1 * lVar7 + uVar1;
                if ((long)uVar5 <= (long)field_67256) {
                    field_67248 = uVar5;
                    break;
                }
                uVar5 = (long)(~uVar1 + lVar7 + field_67256) / lVar7;
                iVar4 = (int)uVar5;
                field_67248 = iVar4 * lVar7 + uVar1;
                plVar6 = (long*)(*local_38).operator->();
                (**(void (**)(...))(*plVar6 + 48))(plVar6, uVar5 & 4294967295);
                arg1 = arg1 - iVar4;
                UpdateMidi();
                bVar3 = field_67048->GotMidi();
            } while ((unsigned int)(bVar3 ^ 1) * 3 == 0);
        }
        plVar6 = (long*)field_67264.operator->();
        (**(void (**)(...))(*plVar6 + 48))(plVar6, arg1);
    }

    // 0x1002d6b70
    void MidiPlayer::QueuePause(bool arg1) {
        if (std::this_thread::get_id() == (sound::g_idMainThread) == '\0') {
            LogAssert("std::this_thread::get_id() == sound::g_idMainThread",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                      "midiplayer.cpp",
                      1303, nullptr);
        }
        *(unsigned int*)(m_globalVolume + 4) = (unsigned int)arg1;
    }

} // namespace jag::oldscape::midi2
