// projects/osclient/bgsound.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "bgsound.h"

namespace jag::oldscape {
    // 0x100d3d5bc
    int32_t bgsound::m_verbose[7] = {0, 16776960, 16711680, 65280, 65535, 16711935, 16777215};

    // 0x100f8a760, set at startup by ___cxx_global_var_init.112
    eastl::vector<bgsound> bgsound::m_soundlist = vector<bgsound>();

    // 0x1000c0930
    void bgsound::Reset() {
        shared_ptr<midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        shared_ptr<sound::WaveStream>* midiPlayerMainThread_00;
        Client* pCVar4;
        uint64_t* puVar5;
        shared_ptr<RSevenDebugPresetProvider> local_40;

        long lVar2 = m_soundlist.HeapBeginPtr();
        long lVar3 = m_soundlist.end();
        if (lVar2 != lVar3) {
            do {
                midiPlayerMainThread = (shared_ptr<midi2::MidiPlayerMainThread>*)(lVar2 + 32);
                if (*midiPlayerMainThread != nullptr) {
                    pCVar4 = Client::Instance();
                    puVar5 = (uint64_t*)pCVar4->field_54184.operator->();
                    local_40 = shared_ptr(midiPlayerMainThread);
                    (**(void (**)(...))*puVar5)(puVar5);
                    midiPlayerMainThread->reset();
                }
                midiPlayerMainThread_00 = (shared_ptr<sound::WaveStream>*)(lVar2 + 88);
                if (*midiPlayerMainThread_00 != nullptr) {
                    pCVar4 = Client::Instance();
                    puVar5 = (uint64_t*)pCVar4->field_54184.operator->();
                    local_40 = shared_ptr(midiPlayerMainThread_00);
                    (**(void (**)(...))*puVar5)(puVar5);
                    midiPlayerMainThread_00->reset();
                }
                lVar2 = lVar2 + 120;
            } while (lVar2 != lVar3);
        }
        m_soundlist.clear();
    }

    // 0x1000c0b10
    void bgsound::RecalculateMultilocs() {
        bgsound* bgsound;

        bgsound = (bgsound*)m_soundlist.HeapBeginPtr();
        auto pbVar2 = m_soundlist.end();
        for (; bgsound != pbVar2; bgsound = (bgsound*)&bgsound[1].field_8) {
            if (bgsound->field_104 != nullptr) {
                RecalcSound(bgsound);
            }
        }
    }

    // 0x1000c0b70
    void bgsound::RecalcSound() {
        long lVar3;
        Client* pCVar4;
        uint64_t* puVar5;
        uint8_t* midiPlayerMainThread;
        shared_ptr<dash3d::Decor> local_40;

        int iVar1 = field_24;
        auto this_00 = field_104.operator->();
        auto groundDecor = this_00->GetMultiLoc();
        shared_ptr<dash3d::Decor> local_30(groundDecor);
        if (local_30 != nullptr) {
            lVar3 = local_30.operator->();
            field_24 = *(int*)(lVar3 + 520);
            lVar3 = local_30.operator->();
            field_20 = *(int*)(lVar3 + 524) << 7;
            lVar3 = local_30.operator->();
            field_48 = *(uint32_t*)(lVar3 + 528);
            lVar3 = local_30.operator->();
            field_52 = *(uint32_t*)(lVar3 + 532);
            lVar3 = local_30.operator->();
            field_56 = (*((lVar3 + 536)));
        } else {
            field_20 = 0;
            field_24 = -1;
            field_48 = 0;
            field_52 = 0;
            field_56.clear();
        }
        if (field_24 != iVar1) {
            midiPlayerMainThread = &field_32;
            if (*midiPlayerMainThread != nullptr) {
                pCVar4 = Client::Instance();
                puVar5 = (uint64_t*)pCVar4->field_54184.operator->();
                local_40 = shared_ptr(midiPlayerMainThread);
                (**(void (**)(...))*puVar5)(puVar5, &local_40);
                midiPlayerMainThread->reset();
            }
        }
    }

    // 0x1000c0cd0
    void bgsound::AddSound(int arg1, int arg2, int arg3, const shared_ptr<configdecoder::LocType>& locType, int arg5) {
        int iVar1;
        int iVar4;
        bgsound* bgsound;
        ReturnValue local_48;

        if (locType != nullptr) {
            m_soundlist.emplace_back<>();
            local_48 = m_soundlist.rbegin();
            bgsound = (bgsound*)*local_48;
            *(int*)&bgsound->field_0 = arg1;
            *(int*)((long)&bgsound->field_0 + 4) = arg2 << 7;
            *(int*)&bgsound->field_8 = arg3 << 7;
            iVar4 = *(int*)((long)locType + 188);
            iVar1 = *(int*)((long)locType + 184);
            if ((arg5 & 4294967293U) == 1) {
                iVar4 = *(int*)((long)locType + 184);
                iVar1 = *(int*)((long)locType + 188);
            }
            *(int*)&bgsound->field_12 = (iVar1 + arg2) * 128;
            *(int*)((long)&bgsound->field_12 + 4) = (iVar4 + arg3) * 128;
            bgsound->field_24 = *(int*)((long)locType + 520);
            bgsound->field_20 = *(int*)((long)locType + 524) << 7;
            bgsound->field_48 = *(uint32_t*)((long)locType + 528);
            bgsound->field_52 = *(uint32_t*)((long)locType + 532);
            bgsound->field_56 = (*(((long)locType + 536)));
            if (!((((long)locType + 488))->empty())) {
                bgsound->field_104 = locType;
                RecalcSound(bgsound);
            }
            if (!(bgsound->field_56.empty())) {
                iVar1 = bgsound->field_48;
                iVar4 = ((Random*)&jag::math::g_Rand)->Rand(bgsound->field_52 - iVar1);
                bgsound->field_80 = iVar4 + iVar1;
            }
        }
    }

    // 0x1000c0ee0
    void bgsound::DoMix(int arg1, int arg2, int arg3, int arg4) {
        shared_ptr<configdecoder::ObjType>* psVar1;
        shared_ptr<midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        Array<game::VarValue>* array;
        uint8_t* this_00;
        bool cVar2;
        bool bVar3;
        int iVar4;
        int iVar5;
        Js5* pJVar8;
        JagFX* pJVar9;
        Wave* pWVar10;
        Decimator* pDVar11;
        WaveStream* pWVar12;
        long* plVar13;
        uint64_t* puVar14;
        int* piVar15;
        int iVar16;
        ReturnValue local_80;
        ReturnValue local_70;
        shared_ptr<sound::MixerMainThread>* local_68;
        shared_ptr<sound::Wave> local_60;
        ReturnValue local_48;
        int local_34;

        auto local_50 = Client::Instance();
        auto piVar6 = m_soundlist.HeapBeginPtr();
        auto piVar7 = m_soundlist.end();
        if (piVar6 != piVar7) {
            this_00 = &local_50->field_54200;
            local_68 = (shared_ptr<sound::MixerMainThread>*)&local_50->field_54184;
            do {
                if ((piVar6[6] != -1) || (cVar2 = ((piVar6 + 14))->empty(), !cVar2)) {
                    if (piVar6[3] < arg2) {
                        iVar16 = arg2 - piVar6[3];
                    } else {
                        iVar16 = piVar6[1] - arg2;
                        if (iVar16 == 0 || piVar6[1] < arg2) {
                            iVar16 = 0;
                        }
                    }
                    if (piVar6[4] < arg3) {
                        iVar16 = (iVar16 + arg3) - piVar6[4];
                    } else if (arg3 < piVar6[2]) {
                        iVar16 = (iVar16 - arg3) + piVar6[2];
                    }
                    iVar16 = iVar16 - 64;
                    if (((piVar6[5] < iVar16) || (iVar4 = local_50->GetFinalAmbientVolume(), iVar4 == 0)) ||
                        (*piVar6 != arg1)) {
                        midiPlayerMainThread = (shared_ptr<midi2::MidiPlayerMainThread>*)(piVar6 + 8);
                        bVar3 = *midiPlayerMainThread != nullptr;
                        if (bVar3) {
                            puVar14 = (uint64_t*)(*local_68).operator->();
                            local_60 = shared_ptr(midiPlayerMainThread);
                            (**(void (**)(...))*puVar14)(puVar14);
                            midiPlayerMainThread->reset();
                        }
                        bVar3 = (*((piVar6 + 22))) != nullptr;
                        if (bVar3) {
                            puVar14 = (uint64_t*)(*local_68).operator->();
                            local_60 = shared_ptr((piVar6 + 22));
                            (**(void (**)(...))*puVar14)(puVar14);
                        LAB_1000c0f60:
                            ((piVar6 + 22))->reset();
                        }
                    } else {
                        if (iVar16 < 0) {
                            iVar16 = 0;
                        }
                        iVar4 = piVar6[5];
                        iVar5 = local_50->GetFinalAmbientVolume();
                        iVar16 = (iVar5 * (iVar4 - iVar16)) / piVar6[5];
                        psVar1 = (shared_ptr<configdecoder::ObjType>*)(piVar6 + 8);
                        bVar3 = *psVar1 == nullptr;
                        local_34 = iVar16;
                        if (bVar3) {
                            if (-1 < piVar6[6]) {
                                pJVar8 = local_50->GetJagFx();
                                local_70 = sound::JagFX::Load(*pJVar8, piVar6[6], 0);
                                bVar3 = &local_70 != pJVar8;
                                if (bVar3) {
                                    pJVar9 = (JagFX*)local_70.operator->();
                                    local_48 = pJVar9->ToWave();
                                    pWVar10 = (Wave*)std::unique_ptr<sound::Wave>::release();
                                    local_60.shared_ptr<sound::Wave, void>(pWVar10);
                                    pWVar10 = (Wave*)local_60.operator->();
                                    pDVar11 = (Decimator*)**this_00;
                                    pWVar10->Decimate(*pDVar11);
                                    local_80 = sound::WaveStream::NewRatePercent(local_60, 100, local_34);
                                    pWVar12 = (WaveStream*)std::unique_ptr<sound::WaveStream>::release();
                                    local_48.shared_ptr<sound::WaveStream, void>(pWVar12);
                                    pWVar12 = (WaveStream*)local_48.operator->();
                                    pWVar12->SetLoopCount(-1);
                                    plVar13 = (long*)(*local_68).operator->();
                                    local_80 = shared_ptr(&local_48);
                                    (**(void (**)(...))(*plVar13 + 8))(plVar13, &local_80);
                                    *psVar1 = local_48;
                                }
                            }
                        } else {
                            pWVar12 = (WaveStream*)(*psVar1).operator->();
                            pWVar12->QueueVolume(iVar16);
                        }
                        psVar1 = (shared_ptr<configdecoder::ObjType>*)(piVar6 + 22);
                        bVar3 = *psVar1 == nullptr;
                        if (bVar3) {
                            array = (Array<game::VarValue>*)(piVar6 + 14);
                            cVar2 = array->empty();
                            if (!cVar2) {
                                piVar15 = piVar6 + 20;
                                iVar16 = *piVar15;
                                *piVar15 = *piVar15 - arg4;
                                if (*piVar15 == 0 || SBORROW4(iVar16, arg4) != *piVar15 < 0) {
                                    iVar16 = array->end();
                                    iVar16 = ((Random*)&jag::math::g_Rand)->Rand(iVar16);
                                    pJVar8 = local_50->GetJagFx();
                                    piVar15 = (int*)(*array)[(long)iVar16];
                                    local_70 = sound::JagFX::Load(*pJVar8, *piVar15, 0);
                                    bVar3 = &local_70 != pJVar8;
                                    if (bVar3) {
                                        pJVar9 = (JagFX*)local_70.operator->();
                                        local_48 = pJVar9->ToWave();
                                        pWVar10 = (Wave*)std::unique_ptr<sound::Wave>::release();
                                        local_60.shared_ptr<sound::Wave, void>(pWVar10);
                                        pWVar10 = (Wave*)local_60.operator->();
                                        pDVar11 = (Decimator*)**this_00;
                                        pWVar10->Decimate(*pDVar11);
                                        local_80 = sound::WaveStream::NewRatePercent(local_60, 100, local_34);
                                        pWVar12 = (WaveStream*)std::unique_ptr<sound::WaveStream>::release();
                                        local_48.shared_ptr<sound::WaveStream, void>(pWVar12);
                                        pWVar12 = (WaveStream*)local_48.operator->();
                                        pWVar12->SetLoopCount(0);
                                        plVar13 = (long*)(*local_68).operator->();
                                        local_80 = shared_ptr(&local_48);
                                        (**(void (**)(...))(*plVar13 + 8))(plVar13, &local_80);
                                        *psVar1 = local_48;
                                        iVar16 = piVar6[12];
                                        iVar4 = ((Random*)&jag::math::g_Rand)->Rand(piVar6[13] - iVar16);
                                        piVar6[20] = iVar4 + iVar16;
                                    }
                                }
                            }
                        } else {
                            pWVar12 = (WaveStream*)(*psVar1).operator->();
                            pWVar12->QueueVolume(local_34);
                            cVar2 = ((Linkable<sound::MixerController>*)(*psVar1).operator->())->IsLinked();
                            if (!cVar2)
                                goto LAB_1000c0f60;
                        }
                    }
                }
                piVar6 = piVar6 + 30;
            } while (piVar6 != piVar7);
        }
    }

} // namespace jag::oldscape
