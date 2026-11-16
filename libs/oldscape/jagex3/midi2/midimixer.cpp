// libs/oldscape/jagex3/midi2/midimixer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "midimixer.h"

namespace jag::oldscape::midi2 {
    // 0x1002ce700
    MidiMixer::MidiMixer(MidiPlayer& midiPlayer)
        : sound::PCMStream(), field_248(0), field_256(midiPlayer), field_264(85899346120) {
        if (std::this_thread::get_id() == (sound::g_idMainThread) == '\0') {
            LogAssert("std::this_thread::get_id() == sound::g_idMainThread",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                      "midimixer.cpp",
                      16, nullptr);
        }
        field_88 = field_72.end();
    }

    // 0x1002ce840
    auto MidiMixer::SubstreamStart() {
        auto result;
        __thread_id* local_30;

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = sound::g_idWorkerThread;
        if (!(thread_id1_00 == (sound::g_idWorkerThread))) {
            new (&local_30) std::__thread_id();
            if (!(thread_id1 == local_30)) {
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midimixer.cpp",
                          22, nullptr);
            }
        }
        field_88 = field_72.begin_ptrs();
        SubstreamNext(&result, this);
        return result;
    }

    // 0x1002ce920
    auto MidiMixer::SubstreamNext() {
        bool bVar2;
        long lVar3;
        __thread_id* local_48;
        uint64_t local_40[2];

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = sound::g_idWorkerThread;
        bool cVar1 = thread_id1_00 == (sound::g_idWorkerThread);
        if (!cVar1) {
            new (&local_48) std::__thread_id();
            cVar1 = thread_id1 == local_48;
            if (!cVar1) {
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midimixer.cpp",
                          29, nullptr);
            }
        }
        uint8_t* this_00 = &field_88;
        local_40[0] = field_72.end();
        cVar1 = *this_00 == *local_40;
        if (!cVar1) {
            do {
                lVar3 = this_00->HeapBeginPtr();
                new (local_40) shared_ptr((lVar3 + 152));
                ++*this_00;
                bVar2 = *local_40 != nullptr;
                if (bVar2) {
                    auto result(local_40);
                    if (bVar2) {
                        return result;
                    }
                } else {
                }
                local_40[0] = field_72.end();
                cVar1 = *this_00 == *local_40;
            } while (!cVar1);
        }
        new (&result) shared_ptr();
        return result;
    }

    // 0x1002cea70
    uint64_t MidiMixer::SelfMixCost() {
        return 0;
    }

    // 0x1002cea80
    void MidiMixer::DoMix(Array<int>& arg1, int arg2, int arg3) {
        MidiPlayer* pMVar1;
        uint32_t uVar4;
        MidiNote* pMVar5;
        long lVar6;
        int* piVar7;
        int iVar8;
        int iVar9;
        int arg3_00;
        __thread_id* local_88;
        SharedPtrList<rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>* local_80;
        int local_64;

        MidiMixer* local_38 = this;
        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = sound::g_idWorkerThread;
        bool cVar3 = thread_id1_00 == (sound::g_idWorkerThread);
        if (!cVar3) {
            new (&local_88) std::__thread_id();
            cVar3 = thread_id1 == local_88;
            if (!cVar3) {
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midimixer.cpp",
                          54, nullptr);
            }
        }
        MidiMixer* pMVar2 = local_38;
        Mixer* local_70 = (Mixer*)local_38->field_96;
        local_70->DoMix(arg1, arg2, arg3);
        int local_3c = 0;
        SharedPtrList<rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>* this_01 =
            (SharedPtrList<rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>*)&pMVar2->field_72;
        uint64_t local_60 = this_01->begin_ptrs();
        Vector2T<int> local_78;
        uint64_t local_48 = this_01->end();
        cVar3 = local_60 != local_48;
        if (cVar3) {
            local_80 = this_01;
            do {
                local_3c = local_3c + 1;
                local_48 = local_60.next();
                local_78 = local_48;
                pMVar1 = local_38->field_256;
                pMVar5 = (MidiNote*)local_60.HeapBeginPtr();
                cVar3 = pMVar1->UpdateStreamlessNote(*pMVar5);
                if (!cVar3) {
                    iVar9 = arg3;
                    arg3_00 = arg2;
                    do {
                        iVar8 = iVar9;
                        lVar6 = local_60.HeapBeginPtr();
                        local_64 = *(int*)(lVar6 + 168);
                        if (iVar8 <= local_64) {
                            iVar9 = iVar8;
                            break;
                        }
                        pMVar5 = (MidiNote*)local_60.HeapBeginPtr();
                        lVar6 = local_60.HeapBeginPtr();
                        pMVar2 = local_38;
                        DoMix2(local_38, pMVar5, arg1, arg3_00, *(int*)(lVar6 + 168), arg3_00 + iVar8);
                        lVar6 = local_60.HeapBeginPtr();
                        arg3_00 = arg3_00 + *(int*)(lVar6 + 168);
                        lVar6 = local_60.HeapBeginPtr();
                        iVar9 = iVar8 - *(int*)(lVar6 + 168);
                        pMVar1 = pMVar2->field_256;
                        pMVar5 = (MidiNote*)local_60.HeapBeginPtr();
                        cVar3 = pMVar1->UpdateNote(*pMVar5, arg1, arg3_00, iVar9);
                    } while (!cVar3);
                    this_01 = local_80;
                    if (iVar8 <= local_64) {
                        pMVar5 = (MidiNote*)local_60.HeapBeginPtr();
                        DoMix2(local_38, pMVar5, arg1, arg3_00, iVar9, arg3_00 + iVar9);
                        lVar6 = local_60.HeapBeginPtr();
                        *(int*)(lVar6 + 168) = *(int*)(lVar6 + 168) - iVar9;
                    }
                }
                local_60 = local_78;
                local_48 = this_01->end();
                cVar3 = local_60 != local_48;
            } while (cVar3);
        }
        lVar6 = core::SafeTime::CurrentTimeMillis();
        if ((local_38->field_248 + 1000 <= lVar6) &&
            ((local_38->field_248 = lVar6,
              *(int*)&local_38->field_264 < local_3c ||
                  (iVar9 = local_70->GetStreamCountLastMix(), *(int*)((long)&local_38->field_264 + 4) < iVar9)))) {
            pMVar2 = local_38;
            piVar7 = std::max<int>(local_3c, local_38->field_264);
            *(int*)&pMVar2->field_264 = *piVar7;
            uVar4 = local_70->GetStreamCountLastMix();
            local_60 = (((uint64_t)local_60._4_4_ << 32) | (uint32_t)uVar4);
            piVar7 = std::max<int>(local_60, *((int*)((long)&pMVar2->field_264 + 4)));
            *(int*)((long)&pMVar2->field_264 + 4) = *piVar7;
            (logger::default_logger())
                ->Log(false, 5,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                      "midimixer.cpp",
                      106,
                      "MIDI: notes=%d dead=%i - if either value is growing uncontrollably, the MIDI player is leaking!",
                      (unsigned long)*(unsigned int*)&pMVar2->field_264,
                      (unsigned long)*(unsigned int*)((long)&pMVar2->field_264 + 4));
        }
    }

    // 0x1002ceef0
    void MidiMixer::DoMix2(MidiNote& midiNote, Array<int>& arg2, int arg3, int arg4, int arg5) {
        unsigned long uVar2;
        shared_ptr<sound::WaveStream>* groundDecor;
        int iVar4;
        int iVar5;
        int arg4_00;
        int* piVar7;
        long* plVar8;
        WaveStream* pWVar9;
        long lVar10;
        uint16_t* puVar11;
        short* psVar12;
        unsigned long uVar14;
        shared_ptr<dash3d::Decor> local_b8;
        __thread_id* local_a8;
        unsigned long local_a0;
        Mixer* local_98;
        ReturnValue local_90;
        shared_ptr<Patch>* local_80;
        shared_ptr<sound::Wave>* local_78;
        int local_70;
        int local_6c;
        int local_64;
        MidiNote* local_58;
        int local_44;
        shared_ptr<sound::WaveStream>* local_40;

        int local_34 = arg3;
        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = sound::g_idWorkerThread;
        bool cVar3 = thread_id1_00 == (sound::g_idWorkerThread);
        if (!cVar3) {
            new (&local_a8) std::__thread_id();
            cVar3 = thread_id1 == local_a8;
            if (!cVar3) {
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midimixer.cpp",
                          156, nullptr);
            }
        }
        MidiPlayer* pMVar1 = field_256;
        int iVar13 = midiNote.field_32;
        uint8_t* pbVar6 = &pMVar1->field_104[(long)iVar13];
        if (((*pbVar6 & 4) != 0) && (*(int*)&midiNote.field_132 < 0)) {
            piVar7 = &pMVar1->field_232[(long)iVar13];
            uVar14 = (long)*piVar7 / (long)sound::PCMPlayer::m_frequency & 4294967295;
            iVar13 = (int)((long)*piVar7 / (long)sound::PCMPlayer::m_frequency) + 1048575;
            local_40 = (shared_ptr<sound::WaveStream>*)&midiNote.field_152;
            local_78 = (shared_ptr<sound::Wave>*)&midiNote.field_56;
            local_80 = (shared_ptr<Patch>*)&midiNote.field_40;
            local_98 = (Mixer*)field_96;
            local_a0 = uVar14;
            local_64 = iVar13;
            local_58 = midiNote;
            do {
                groundDecor = local_40;
                iVar5 = (int)uVar14;
                uVar2 = (long)(iVar13 - *(int*)((long)&midiNote.field_168 + 4)) / (long)iVar5;
                iVar4 = (int)uVar2;
                if (arg4 < iVar4) {
                    iVar5 = arg4;
                } else {
                    local_70 = arg4;
                    local_6c = arg4 - iVar4;
                    plVar8 = (long*)(*local_40).operator->();
                    (**(void (**)(...))(*plVar8 + 40))(plVar8, arg2, local_34, uVar2 & 4294967295);
                    *(int*)((long)&midiNote.field_168 + 4) =
                        iVar4 * iVar5 + *(int*)((long)&midiNote.field_168 + 4) - 1048576;
                    iVar5 = (int)(262144 / (long)iVar5);
                    iVar13 = sound::PCMPlayer::m_frequency / 100;
                    if (iVar5 < sound::PCMPlayer::m_frequency / 100) {
                        iVar13 = iVar5;
                    }
                    local_44 = iVar4;
                    local_b8 = shared_ptr(groundDecor);
                    piVar7 = &field_256->field_168[(long)(int)midiNote.field_32];
                    if (*piVar7 == 0) {
                        pWVar9 = (WaveStream*)local_b8.operator->();
                        iVar4 = pWVar9->GetRateRaw();
                        pWVar9 = (WaveStream*)local_b8.operator->();
                        iVar5 = pWVar9->GetVolumeFine();
                        pWVar9 = (WaveStream*)local_b8.operator->();
                        arg4_00 = pWVar9->GetPanFine();
                        local_90 = sound::WaveStream::NewRateRawFineVolPan(*local_78, iVar4, iVar5, arg4_00);
                        pWVar9 = (WaveStream*)std::unique_ptr<sound::WaveStream>::release();
                        local_40->reset<sound::WaveStream, void>(pWVar9);
                    } else {
                        pWVar9 = (WaveStream*)local_b8.operator->();
                        iVar4 = pWVar9->GetRateRaw();
                        pWVar9 = (WaveStream*)local_b8.operator->();
                        iVar5 = pWVar9->GetPanFine();
                        local_90 = sound::WaveStream::NewRateRawFineVolPan(*local_78, iVar4, 0, iVar5);
                        pWVar9 = (WaveStream*)std::unique_ptr<sound::WaveStream>::release();
                        local_40->reset<sound::WaveStream, void>(pWVar9);
                        pMVar1 = field_256;
                        lVar10 = (*local_80).operator->();
                        puVar11 = (uint16_t*)(*((lVar10 + 32)))[(long)*(int*)((long)&local_58->field_88 + 4)];
                        pMVar1->SetSampleOffset(*local_58, (uint8_t)((unsigned short)*puVar11 >> 15));
                        pWVar9 = (WaveStream*)(*local_40).operator->();
                        iVar4 = ((WaveStream*)local_b8.operator->())->GetVolumeFine();
                        pWVar9->RampVolumeFine(iVar13, iVar4);
                    }
                    lVar10 = (*local_80).operator->();
                    psVar12 = (short*)(*((lVar10 + 32)))[(long)*(int*)((long)&local_58->field_88 + 4)];
                    if (*psVar12 < 0) {
                        pWVar9 = (WaveStream*)(*local_40).operator->();
                        pWVar9->SetLoopCount(-1);
                    }
                    pWVar9 = (WaveStream*)local_b8.operator->();
                    pWVar9->RampOut(iVar13);
                    plVar8 = (long*)local_b8.operator->();
                    local_34 = local_34 + local_44;
                    (**(void (**)(...))(*plVar8 + 40))(plVar8, arg2, local_34, arg5 - local_34);
                    pWVar9 = (WaveStream*)local_b8.operator->();
                    cVar3 = pWVar9->Isramping();
                    midiNote = local_58;
                    if (cVar3) {
                        local_90 = shared_ptr(&local_b8);
                        local_98->PlayStream(local_90);
                    }
                    uVar14 = local_a0;
                    iVar5 = local_70;
                    iVar13 = local_64;
                    arg4 = local_6c;
                    iVar4 = local_44;
                }
            } while (iVar4 <= iVar5);
            piVar7 = (int*)((long)&midiNote.field_168 + 4);
            *piVar7 = *piVar7 + (int)uVar14 * arg4;
        }
        plVar8 = (long*)midiNote.field_152.operator->();
        (**(void (**)(...))(*plVar8 + 40))(plVar8, arg2, local_34, arg4);
    }

    // 0x1002cf9c0
    void MidiMixer::PretendToMix(int arg1) {
        MidiPlayer* pMVar1;
        bool bVar2;
        MidiNote* pMVar5;
        long lVar6;
        int arg4;
        __thread_id* local_78;
        SharedPtrList<rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>* local_70;
        uint64_t local_68[3];

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = sound::g_idWorkerThread;
        bool cVar4 = thread_id1_00 == (sound::g_idWorkerThread);
        if (!cVar4) {
            new (&local_78) std::__thread_id();
            cVar4 = thread_id1 == local_78;
            if (!cVar4) {
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midimixer.cpp",
                          114, nullptr);
            }
        }
        MidiMixer* pMVar3 = this;
        field_96->PretendToMix(arg1);
        SharedPtrList<rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>* this_00 =
            (SharedPtrList<rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>*)&pMVar3->field_72;
        uint64_t local_38 = this_00->begin_ptrs();
        Vector2T<int> local_50;
        local_68[0] = this_00->end();
        cVar4 = local_38 != *local_68;
        if (cVar4) {
            local_70 = this_00;
            do {
                local_68[0] = local_38.next();
                local_50 = *local_68;
                pMVar1 = field_256;
                pMVar5 = (MidiNote*)local_38.HeapBeginPtr();
                cVar4 = pMVar1->UpdateStreamlessNote(*pMVar5);
                if (!cVar4) {
                    arg4 = arg1;
                    do {
                        lVar6 = local_38.HeapBeginPtr();
                        bVar2 = false;
                        if (arg4 <= *(int*)(lVar6 + 168))
                            break;
                        pMVar5 = (MidiNote*)local_38.HeapBeginPtr();
                        lVar6 = local_38.HeapBeginPtr();
                        pMVar3 = this;
                        PretendToMix2(*pMVar5, *(int*)(lVar6 + 168));
                        lVar6 = local_38.HeapBeginPtr();
                        arg4 = arg4 - *(int*)(lVar6 + 168);
                        new (local_68) Array<int>();
                        pMVar1 = pMVar3->field_256;
                        pMVar5 = (MidiNote*)local_38.HeapBeginPtr();
                        cVar4 = pMVar1->UpdateNote(*pMVar5, *local_68, 0, arg4);
                        bVar2 = true;
                    } while (!cVar4);
                    this_00 = local_70;
                    if (!bVar2) {
                        pMVar5 = (MidiNote*)local_38.HeapBeginPtr();
                        PretendToMix2(*pMVar5, arg4);
                        lVar6 = local_38.HeapBeginPtr();
                        *(int*)(lVar6 + 168) = *(int*)(lVar6 + 168) - arg4;
                    }
                }
                local_38 = local_50;
                local_68[0] = this_00->end();
                cVar4 = local_38 != *local_68;
            } while (cVar4);
        }
    }

    // 0x1002cfc20
    void MidiMixer::PretendToMix2(MidiNote& midiNote, int arg2) {
        uint8_t* puVar1;
        int iVar4;
        int iVar5;
        int arg4;
        int* piVar7;
        WaveStream* pWVar8;
        long lVar9;
        uint16_t* puVar10;
        short* psVar11;
        __thread_id* local_50;
        int local_44;
        shared_ptr<sound::Wave>* local_40;
        ReturnValue local_38;

        auto thread_id1_00 = std::this_thread::get_id();
        __thread_id* thread_id1 = sound::g_idWorkerThread;
        if (!(thread_id1_00 == (sound::g_idWorkerThread))) {
            new (&local_50) std::__thread_id();
            if (!(thread_id1 == local_50)) {
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midimixer.cpp",
                          217, nullptr);
            }
        }
        MidiPlayer* pMVar2 = field_256;
        unsigned long arg1 = (unsigned long)(int)midiNote.field_32;
        uint8_t* pbVar6 = &pMVar2->field_104[arg1];
        if (((*pbVar6 & 4) != 0) && (*(int*)&midiNote.field_132 < 0)) {
            piVar7 = &pMVar2->field_232[arg1];
            iVar4 = *piVar7 / sound::PCMPlayer::m_frequency;
            iVar5 = *(int*)((long)&midiNote.field_168 + 4);
            *(unsigned int*)((long)&midiNote.field_168 + 4) = iVar4 * arg2 + iVar5 & 1048575;
            if (((iVar4 - iVar5) + 1048575) / iVar4 <= arg2) {
                local_44 = iVar4;
                piVar7 = &pMVar2->field_168[arg1];
                if (*piVar7 == 0) {
                    local_40 = (shared_ptr<sound::Wave>*)&midiNote.field_56;
                    puVar1 = &midiNote.field_152;
                    pWVar8 = (WaveStream*)(*puVar1).operator->();
                    iVar5 = pWVar8->GetRateRaw();
                    pWVar8 = (WaveStream*)(*puVar1).operator->();
                    iVar4 = pWVar8->GetVolumeFine();
                    pWVar8 = (WaveStream*)(*puVar1).operator->();
                    arg4 = pWVar8->GetPanFine();
                    local_38 = sound::WaveStream::NewRateRawFineVolPan(*local_40, iVar5, iVar4, arg4);
                    pWVar8 = (WaveStream*)std::unique_ptr<sound::WaveStream>::release();
                    puVar1->reset<sound::WaveStream, void>(pWVar8);
                } else {
                    local_40 = (shared_ptr<sound::Wave>*)&midiNote.field_56;
                    puVar1 = &midiNote.field_152;
                    pWVar8 = (WaveStream*)(*puVar1).operator->();
                    iVar5 = pWVar8->GetRateRaw();
                    pWVar8 = (WaveStream*)(*puVar1).operator->();
                    iVar4 = pWVar8->GetPanFine();
                    local_38 = sound::WaveStream::NewRateRawFineVolPan(*local_40, iVar5, 0, iVar4);
                    pWVar8 = (WaveStream*)std::unique_ptr<sound::WaveStream>::release();
                    puVar1->reset<sound::WaveStream, void>(pWVar8);
                    pMVar2 = field_256;
                    lVar9 = midiNote.field_40.operator->();
                    puVar10 = (uint16_t*)(*((lVar9 + 32)))[(long)*(int*)((long)&midiNote.field_88 + 4)];
                    pMVar2->SetSampleOffset(midiNote, (uint8_t)((unsigned short)*puVar10 >> 15));
                }
                lVar9 = midiNote.field_40.operator->();
                psVar11 = (short*)(*((lVar9 + 32)))[(long)*(int*)((long)&midiNote.field_88 + 4)];
                if (*psVar11 < 0) {
                    pWVar8 = (WaveStream*)midiNote.field_152.operator->();
                    pWVar8->SetLoopCount(-1);
                }
                arg2 = *(int*)((long)&midiNote.field_168 + 4) / local_44;
            }
        }
        auto plVar12 = midiNote.field_152.operator->();
        (**(void (**)(...))(*plVar12 + 48))(plVar12, arg2);
    }

} // namespace jag::oldscape::midi2
