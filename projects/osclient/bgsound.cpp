// projects/osclient/bgsound.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "bgsound.h"

namespace jag::oldscape {
    // 0x100d3d5bc, 28 bytes, __const
    bgsound::m_verbose = {0, 16776960, 16711680, 65280, 65535, 16711935, 16777215};

    // 0x100f8a760, 32 bytes, __common; set at startup by ___cxx_global_var_init.112
    eastl::vector<bgsound, eastl::allocator> bgsound::m_soundlist = vector<bgsound, eastl::allocator>();

    // 0x1000c0930, 288 bytes, placed by class name and debug map
    // bgsound::Reset()
    void bgsound::Reset() {
        bool bVar1;
        long lVar2;
        long lVar3;
        long lVar4;
        undefined8* puVar5;
        shared_ptr<RSevenDebugPresetProvider> local_40[16];

        lVar2 = m_soundlist.HeapBeginPtr();
        lVar3 = m_soundlist.end();
        if (lVar2 != lVar3) {
            do {
                bVar1 = operator!=((shared_ptr*)(lVar2 + 32), (_func_decltype_nullptr*)0);
                if (bVar1) {
                    lVar4 = Client::Instance();
                    puVar5 = (undefined8*)shared_ptr<sound::MixerMainThread>::operator->(
                        (shared_ptr<sound::MixerMainThread>*)(lVar4 + 54184));
                    new (local_40) shared_ptr<dash3d::Decor>((shared_ptr*)(lVar2 + 32));
                    (**(code**)*puVar5)(puVar5);
                    local_40->~shared_ptr();
                    shared_ptr<sound::WaveStream>::reset();
                }
                bVar1 = operator!=((shared_ptr*)(lVar2 + 88), (_func_decltype_nullptr*)0);
                if (bVar1) {
                    lVar4 = Client::Instance();
                    puVar5 = (undefined8*)shared_ptr<sound::MixerMainThread>::operator->(
                        (shared_ptr<sound::MixerMainThread>*)(lVar4 + 54184));
                    new (local_40) shared_ptr<dash3d::Decor>((shared_ptr*)(lVar2 + 88));
                    (**(code**)*puVar5)(puVar5);
                    local_40->~shared_ptr();
                    shared_ptr<sound::WaveStream>::reset();
                }
                lVar2 = lVar2 + 120;
            } while (lVar2 != lVar3);
        }
        m_soundlist.clear();
    }

    // 0x1000c0b10, 96 bytes, placed by class name and debug map
    // bgsound::RecalculateMultilocs()
    void bgsound::RecalculateMultilocs() {
        bgsound* pbVar2;
        bgsound* this;

        this = (bgsound*)m_soundlist.HeapBeginPtr();
        pbVar2 = (bgsound*)m_soundlist.end();
        for (; this != pbVar2; this = (bgsound*)&this[1].field_8) {
            if (operator!=((shared_ptr*)&field_104, (_func_decltype_nullptr*)0)) {
                RecalcSound(this);
            }
        }
    }

    // 0x1000c0b70, 352 bytes, placed by class name and debug map
    // bgsound::RecalcSound()
    void bgsound::RecalcSound() {
        int iVar1;
        bool bVar2;
        LocType* this_00;
        shared_ptr* psVar3;
        long lVar4;
        undefined8* puVar5;
        shared_ptr<dash3d::Decor> local_40[16];
        shared_ptr local_30;

        iVar1 = field_24;
        this_00 =
            (LocType*)shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&field_104);
        psVar3 = (shared_ptr*)this_00->GetMultiLoc();
        new (&local_30) shared_ptr<dash3d::Decor>(psVar3);
        bVar2 = operator!=(&local_30, (_func_decltype_nullptr*)0);
        if (bVar2) {
            lVar4 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_30);
            field_24 = *(int*)(lVar4 + 520);
            lVar4 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_30);
            field_20 = *(int*)(lVar4 + 524) << 7;
            lVar4 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_30);
            field_48 = *(undefined4*)(lVar4 + 528);
            lVar4 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_30);
            field_52 = *(undefined4*)(lVar4 + 532);
            lVar4 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_30);
            Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)&field_56, (Array*)(lVar4 + 536));
        } else {
            field_20 = 0;
            field_24 = -1;
            field_48 = 0;
            field_52 = 0;
            (&field_56)->clear();
        }
        if (field_24 != iVar1) {
            bVar2 = operator!=((shared_ptr*)field_32, (_func_decltype_nullptr*)0);
            if (bVar2) {
                lVar4 = Client::Instance();
                puVar5 = (undefined8*)shared_ptr<sound::MixerMainThread>::operator->(
                    (shared_ptr<sound::MixerMainThread>*)(lVar4 + 54184));
                shared_ptr<dash3d::Decor>::shared_ptr(local_40, (shared_ptr*)field_32);
                (**(code**)*puVar5)(puVar5, local_40);
                local_40->~shared_ptr();
                shared_ptr<sound::WaveStream>::reset();
            }
        }
        local_30.~shared_ptr();
    }

    // 0x1000c0cd0, 352 bytes, placed by class name and debug map
    // bgsound::AddSound(int, int, int, shared_ptr<configdecoder::LocType> const&, int)
    void bgsound::AddSound(int param_1, int param_2, int param_3, shared_ptr* param_4, int param_5) {
        int iVar1;
        char cVar3;
        int iVar4;
        long lVar5;
        bgsound* this;
        reverse_iterator<bgsound*> local_48[8];

        if (operator!=(param_4, (_func_decltype_nullptr*)0)) {
            lVar5 = shared_ptr<configdecoder::LocType>::operator*((shared_ptr<configdecoder::LocType>*)param_4);
            eastl::vector<bgsound, eastl::allocator>::emplace_back<>((vector<bgsound, eastl::allocator>*)&m_soundlist);
            eastl::vector<unsigned long,
                          eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::rbegin();
            this = (bgsound*)eastl::reverse_iterator<bgsound*>::operator*(local_48);
            *(int*)&field_0 = param_1;
            *(int*)((long)&field_0 + 4) = param_2 << 7;
            *(int*)&field_8 = param_3 << 7;
            iVar4 = *(int*)(lVar5 + 188);
            iVar1 = *(int*)(lVar5 + 184);
            if ((param_5 & 4294967293U) == 1) {
                iVar4 = *(int*)(lVar5 + 184);
                iVar1 = *(int*)(lVar5 + 188);
            }
            *(int*)&field_12 = (iVar1 + param_2) * 128;
            *(int*)((long)&field_12 + 4) = (iVar4 + param_3) * 128;
            field_24 = *(int*)(lVar5 + 520);
            field_20 = *(int*)(lVar5 + 524) << 7;
            field_48 = *(undefined4*)(lVar5 + 528);
            field_52 = *(undefined4*)(lVar5 + 532);
            Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)&field_56, (Array*)(lVar5 + 536));
            cVar3 = ((lVar5 + 488))->empty();
            if (cVar3 == '\0') {
                shared_ptr<configdecoder::LocType>::operator=((shared_ptr<configdecoder::LocType>*)&field_104, param_4);
                RecalcSound(this);
            }
            cVar3 = (&field_56)->empty();
            if (cVar3 == '\0') {
                iVar1 = field_48;
                iVar4 = (&jag::math::g_Rand)->Rand(field_52 - iVar1);
                field_80 = iVar4 + iVar1;
            }
        }
    }

    // 0x1000c0ee0, 1488 bytes, placed by class name and debug map
    // bgsound::DoMix(int, int, int, int)
    void bgsound::DoMix(int param_1, int param_2, int param_3, int param_4) {
        shared_ptr* psVar1;
        Array<game::VarValue, eastl::allocator>* this;
        undefined1* this_00;
        char cVar2;
        bool bVar3;
        int iVar4;
        int iVar5;
        int* piVar6;
        int* piVar7;
        Js5* pJVar8;
        Wave* pWVar9;
        Decimator* pDVar10;
        WaveStream* pWVar11;
        long* plVar12;
        undefined8* puVar13;
        int* piVar14;
        Linkable<sound::MixerController>* this_01;
        int iVar15;
        unique_ptr<sound::WaveStream, std::default_delete<sound::WaveStream>> local_80[16];
        unique_ptr<sound::JagFX, std::default_delete<sound::JagFX>> local_70[8];
        shared_ptr<sound::MixerMainThread>* local_68;
        shared_ptr local_60;
        Client* local_50;
        shared_ptr local_48;
        int local_34;

        local_50 = (Client*)Client::Instance();
        piVar6 = (int*)m_soundlist.HeapBeginPtr();
        piVar7 = (int*)m_soundlist.end();
        if (piVar6 != piVar7) {
            this_00 = &local_50->field_54200;
            local_68 = (shared_ptr<sound::MixerMainThread>*)&local_50->field_54184;
            do {
                if ((piVar6[6] != -1) || (cVar2 = ((piVar6 + 14))->empty(), cVar2 == '\0')) {
                    if (piVar6[3] < param_2) {
                        iVar15 = param_2 - piVar6[3];
                    } else {
                        iVar15 = piVar6[1] - param_2;
                        if (iVar15 == 0 || piVar6[1] < param_2) {
                            iVar15 = 0;
                        }
                    }
                    if (piVar6[4] < param_3) {
                        iVar15 = (iVar15 + param_3) - piVar6[4];
                    } else if (param_3 < piVar6[2]) {
                        iVar15 = (iVar15 - param_3) + piVar6[2];
                    }
                    iVar15 = iVar15 + -64;
                    if (((piVar6[5] < iVar15) || (iVar4 = local_50->GetFinalAmbientVolume(), iVar4 == 0)) ||
                        (*piVar6 != param_1)) {
                        bVar3 = operator!=((shared_ptr*)(piVar6 + 8), (_func_decltype_nullptr*)0);
                        if (bVar3) {
                            puVar13 = (undefined8*)shared_ptr<sound::MixerMainThread>::operator->(local_68);
                            new (&local_60) shared_ptr<dash3d::Decor>((shared_ptr*)(piVar6 + 8));
                            (**(code**)*puVar13)(puVar13);
                            local_60.~shared_ptr();
                            shared_ptr<sound::WaveStream>::reset();
                        }
                        bVar3 = operator!=((shared_ptr*)(piVar6 + 22), (_func_decltype_nullptr*)0);
                        if (bVar3) {
                            puVar13 = (undefined8*)shared_ptr<sound::MixerMainThread>::operator->(local_68);
                            new (&local_60) shared_ptr<dash3d::Decor>((shared_ptr*)(piVar6 + 22));
                            (**(code**)*puVar13)(puVar13);
                            local_60.~shared_ptr();
                        LAB_1000c0f60:
                            shared_ptr<sound::WaveStream>::reset();
                        }
                    } else {
                        if (iVar15 < 0) {
                            iVar15 = 0;
                        }
                        iVar4 = piVar6[5];
                        iVar5 = local_50->GetFinalAmbientVolume();
                        iVar15 = (iVar5 * (iVar4 - iVar15)) / piVar6[5];
                        psVar1 = (shared_ptr*)(piVar6 + 8);
                        bVar3 = operator==(psVar1, (_func_decltype_nullptr*)0);
                        local_34 = iVar15;
                        if (bVar3) {
                            if (-1 < piVar6[6]) {
                                pJVar8 = (Js5*)local_50->GetJagFx();
                                local_70->Load(pJVar8, piVar6[6], 0);
                                bVar3 = std::operator!=((unique_ptr*)local_70, (_func_decltype_nullptr*)pJVar8);
                                if (bVar3) {
                                    std::unique_ptr<sound::JagFX, std::default_delete<sound::JagFX>>::operator->(
                                        local_70);
                                    local_48.ToWave();
                                    pWVar9 = (Wave*)local_48.release();
                                    shared_ptr<sound::Wave>::shared_ptr<sound::Wave, void>(
                                        (shared_ptr<sound::Wave>*)&local_60, pWVar9);
                                    local_48.~unique_ptr();
                                    pWVar9 =
                                        (Wave*)shared_ptr<sound::Wave>::operator->((shared_ptr<sound::Wave>*)&local_60);
                                    pDVar10 = (Decimator*)shared_ptr<sound::Decimator>::operator*(
                                        (shared_ptr<sound::Decimator>*)this_00);
                                    pWVar9->Decimate(pDVar10);
                                    local_80->NewRatePercent(&local_60, 100, local_34);
                                    pWVar11 = (WaveStream*)std::unique_ptr<
                                        sound::WaveStream, std::default_delete<sound::WaveStream>>::release(local_80);
                                    shared_ptr<sound::WaveStream>::shared_ptr<sound::WaveStream, void>(
                                        (shared_ptr<sound::WaveStream>*)&local_48, pWVar11);
                                    std::unique_ptr<sound::WaveStream,
                                                    std::default_delete<sound::WaveStream>>::~unique_ptr(local_80);
                                    pWVar11 = (WaveStream*)shared_ptr<sound::WaveStream>::operator->(
                                        (shared_ptr<sound::WaveStream>*)&local_48);
                                    pWVar11->SetLoopCount(-1);
                                    plVar12 = (long*)shared_ptr<sound::MixerMainThread>::operator->(local_68);
                                    new (local_80) shared_ptr<dash3d::Decor>(&local_48);
                                    (**(code**)(*plVar12 + 8))(plVar12,
                                                               (shared_ptr<RSevenDebugPresetProvider>*)local_80);
                                    local_80->~shared_ptr();
                                    shared_ptr<sound::WaveStream>::operator=((shared_ptr<sound::WaveStream>*)psVar1,
                                                                             &local_48);
                                    local_48.~shared_ptr();
                                    local_60.~shared_ptr();
                                }
                                std::unique_ptr<sound::JagFX, std::default_delete<sound::JagFX>>::~unique_ptr(local_70);
                            }
                        } else {
                            pWVar11 = (WaveStream*)shared_ptr<sound::WaveStream>::operator->(
                                (shared_ptr<sound::WaveStream>*)psVar1);
                            pWVar11->QueueVolume(iVar15);
                        }
                        psVar1 = (shared_ptr*)(piVar6 + 22);
                        bVar3 = operator==(psVar1, (_func_decltype_nullptr*)0);
                        if (bVar3) {
                            this = (Array<game::VarValue, eastl::allocator>*)(piVar6 + 14);
                            cVar2 = empty();
                            if (cVar2 == '\0') {
                                piVar14 = piVar6 + 20;
                                iVar15 = *piVar14;
                                *piVar14 = *piVar14 - param_4;
                                if (*piVar14 == 0 || SBORROW4(iVar15, param_4) != *piVar14 < 0) {
                                    iVar15 = end();
                                    iVar15 = (&jag::math::g_Rand)->Rand(iVar15);
                                    pJVar8 = (Js5*)local_50->GetJagFx();
                                    piVar14 = (int*)Array<int, eastl::allocator>::operator[](
                                        (Array<int, eastl::allocator>*)this, (long)iVar15);
                                    local_70->Load(pJVar8, *piVar14, 0);
                                    bVar3 = std::operator!=((unique_ptr*)local_70, (_func_decltype_nullptr*)pJVar8);
                                    if (bVar3) {
                                        std::unique_ptr<sound::JagFX, std::default_delete<sound::JagFX>>::operator->(
                                            local_70);
                                        local_48.ToWave();
                                        pWVar9 = (Wave*)local_48.release();
                                        shared_ptr<sound::Wave>::shared_ptr<sound::Wave, void>(
                                            (shared_ptr<sound::Wave>*)&local_60, pWVar9);
                                        local_48.~unique_ptr();
                                        pWVar9 = (Wave*)shared_ptr<sound::Wave>::operator->(
                                            (shared_ptr<sound::Wave>*)&local_60);
                                        pDVar10 = (Decimator*)shared_ptr<sound::Decimator>::operator*(
                                            (shared_ptr<sound::Decimator>*)this_00);
                                        pWVar9->Decimate(pDVar10);
                                        local_80->NewRatePercent(&local_60, 100, local_34);
                                        pWVar11 = (WaveStream*)
                                            std::unique_ptr<sound::WaveStream,
                                                            std::default_delete<sound::WaveStream>>::release(local_80);
                                        shared_ptr<sound::WaveStream>::shared_ptr<sound::WaveStream, void>(
                                            (shared_ptr<sound::WaveStream>*)&local_48, pWVar11);
                                        std::unique_ptr<sound::WaveStream,
                                                        std::default_delete<sound::WaveStream>>::~unique_ptr(local_80);
                                        pWVar11 = (WaveStream*)shared_ptr<sound::WaveStream>::operator->(
                                            (shared_ptr<sound::WaveStream>*)&local_48);
                                        pWVar11->SetLoopCount(0);
                                        plVar12 = (long*)shared_ptr<sound::MixerMainThread>::operator->(local_68);
                                        new (local_80) shared_ptr<dash3d::Decor>(&local_48);
                                        (**(code**)(*plVar12 + 8))(plVar12, (WaveStream*)local_80);
                                        local_80->~shared_ptr();
                                        shared_ptr<sound::WaveStream>::operator=((shared_ptr<sound::WaveStream>*)psVar1,
                                                                                 &local_48);
                                        iVar15 = piVar6[12];
                                        iVar4 = (&jag::math::g_Rand)->Rand(piVar6[13] - iVar15);
                                        piVar6[20] = iVar4 + iVar15;
                                        local_48.~shared_ptr();
                                        local_60.~shared_ptr();
                                    }
                                    std::unique_ptr<sound::JagFX, std::default_delete<sound::JagFX>>::~unique_ptr(
                                        local_70);
                                }
                            }
                        } else {
                            pWVar11 = (WaveStream*)shared_ptr<sound::WaveStream>::operator->(
                                (shared_ptr<sound::WaveStream>*)psVar1);
                            pWVar11->QueueVolume(local_34);
                            this_01 = (Linkable<sound::MixerController>*)shared_ptr<sound::WaveStream>::operator->(
                                (shared_ptr<sound::WaveStream>*)psVar1);
                            cVar2 = this_01->IsLinked();
                            if (cVar2 == '\0')
                                goto LAB_1000c0f60;
                        }
                    }
                }
                piVar6 = piVar6 + 30;
            } while (piVar6 != piVar7);
        }
    }

    // 0x1001578a0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.112
    void ___cxx_global_var_init_112() {
        new (&bgsound::m_soundlist) eastl::vector<bgsound, eastl::allocator>();
        ___cxa_atexit(PTR__vector_100ee6d40, &bgsound::m_soundlist, 4294967296);
    }

} // namespace jag::oldscape
