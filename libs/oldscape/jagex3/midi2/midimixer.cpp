// libs/oldscape/jagex3/midi2/midimixer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "midimixer.h"

namespace jag::oldscape::midi2 {
    // 0x1002ce700, 256 bytes, base-object constructor, placed by class name
    // MidiMixer::MidiMixer(MidiPlayer&)
    void MidiMixer::MidiMixer(MidiPlayer* param_1) {
        undefined8 uVar2;
        undefined8 local_38;

        new (this) sound::PCMStream();
        field_0 = &PTR__MidiMixer_100efa158;
        new (&field_72) SharedPtrList<MidiNote>();
        new (&field_88) jag::math::Vector2T<int>();
        new (field_96) sound::Mixer();
        field_248 = 0;
        field_256 = param_1;
        field_264 = 85899346120;
        uVar2 = std::this_thread::get_id();
        if (std::operator==(uVar2, sound::g_idMainThread) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("std::this_thread::get_id() == sound::g_idMainThread",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                      "midimixer.cpp",
                      16, (char*)0);
        }
        local_38 = (&field_72)->end();
        eastl::rbtree_iterator<
            eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
            eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
            eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
        operator=((rbtree_iterator<
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                      eastl::pair<unsigned int const,
                                  eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&field_88,
                  (rbtree_iterator*)&local_38);
    }

    // 0x1002ce830, 16 bytes, complete-object constructor, placed by class name
    // MidiMixer::MidiMixer(MidiPlayer&): jumps straight to the base-object constructor

    // 0x1002ce840, 160 bytes, placed by class name
    // MidiMixer::SubstreamStart()
    MidiMixer* MidiMixer::SubstreamStart() {
        undefined8 uVar1;
        char cVar2;
        undefined8 uVar3;
        long* in_RSI;
        undefined8 local_30;
        undefined8 local_28;

        uVar3 = std::this_thread::get_id();
        uVar1 = sound::g_idWorkerThread;
        cVar2 = std::operator==(uVar3, sound::g_idWorkerThread);
        if (cVar2 == '\0') {
            new (&local_30) std::__thread_id();
            cVar2 = std::operator==(uVar1, local_30);
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midimixer.cpp",
                          22, (char*)0);
            }
        }
        local_28 = ((in_RSI + 9))->begin_ptrs();
        eastl::rbtree_iterator<
            eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
            eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
            eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
        operator=((rbtree_iterator<
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                      eastl::pair<unsigned int const,
                                  eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)(in_RSI + 11),
                  (rbtree_iterator*)&local_28);
        (**(code**)(*in_RSI + 24))(this);
        return this;
    }

    // 0x1002ce920, 336 bytes, placed by class name
    // MidiMixer::SubstreamNext()
    MidiMixer* MidiMixer::SubstreamNext() {
        eastl* this_00;
        undefined8 uVar1;
        char cVar2;
        bool bVar3;
        undefined8 uVar4;
        long lVar5;
        long in_RSI;
        undefined1 auVar6[16];
        undefined8 local_48;
        shared_ptr local_40;

        uVar4 = std::this_thread::get_id();
        uVar1 = sound::g_idWorkerThread;
        cVar2 = std::operator==(uVar4, sound::g_idWorkerThread);
        if (cVar2 == '\0') {
            new (&local_48) std::__thread_id();
            cVar2 = std::operator==(uVar1, local_48);
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midimixer.cpp",
                          29, (char*)0);
            }
        }
        this_00 = (eastl*)(in_RSI + 88);
        auVar6 = ((in_RSI + 72))->end();
        local_40._0_8_ = auVar6._0_8_;
        bVar3 = eastl::operator==(this_00, (hashtable_iterator_base*)&local_40, auVar6._8_8_);
        if (!bVar3) {
            do {
                lVar5 = this_00->HeapBeginPtr();
                new (&local_40) shared_ptr<dash3d::Decor>((shared_ptr*)(lVar5 + 152));
                SharedPtrList<rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>::obj_iterator::operator++(
                    (obj_iterator*)this_00);
                bVar3 = operator!=(&local_40, (_func_decltype_nullptr*)0);
                if (bVar3) {
                    new (this) shared_ptr<dash3d::Decor>(&local_40);
                    local_40.~shared_ptr();
                    if (bVar3) {
                        return this;
                    }
                } else {
                    local_40.~shared_ptr();
                }
                auVar6 = ((in_RSI + 72))->end();
                local_40._0_8_ = auVar6._0_8_;
                bVar3 = eastl::operator==(this_00, (hashtable_iterator_base*)&local_40, auVar6._8_8_);
            } while (!bVar3);
        }
        new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        return this;
    }

    // 0x1002cea70, 16 bytes, placed by class name
    // MidiMixer::SelfMixCost()
    undefined8 MidiMixer::SelfMixCost() {
        return 0;
    }

    // 0x1002cea80, 832 bytes, placed by class name
    // MidiMixer::DoMix(Array<int, eastl::allocator>&, int, int)
    void MidiMixer::DoMix(Array* param_1, int param_2, int param_3) {
        MidiPlayer* pMVar1;
        MidiMixer* pMVar2;
        char cVar3;
        bool bVar4;
        undefined4 uVar5;
        undefined8 uVar6;
        MidiNote* pMVar7;
        long lVar8;
        int* piVar9;
        undefined8 uVar10;
        eastl* this_00;
        int iVar11;
        int iVar12;
        SharedPtrList<rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>* this_01;
        int iVar13;
        undefined1 auVar14[16];
        undefined8 local_88;
        SharedPtrList<rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>* local_80;
        Vector2T<int> local_78[8];
        Mixer* local_70;
        int local_64;
        undefined8 local_60;
        undefined8 local_48;
        int local_3c;
        MidiMixer* local_38;

        local_38 = this;
        uVar6 = std::this_thread::get_id();
        uVar10 = sound::g_idWorkerThread;
        cVar3 = std::operator==(uVar6, sound::g_idWorkerThread);
        if (cVar3 == '\0') {
            new (&local_88) std::__thread_id();
            cVar3 = std::operator==(uVar10, local_88);
            if (cVar3 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midimixer.cpp",
                          54, (char*)0);
            }
        }
        pMVar2 = local_38;
        local_70 = (Mixer*)local_38->field_96;
        local_70->DoMix(param_1, param_2, param_3);
        local_3c = 0;
        this_01 = (SharedPtrList<rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>*)&pMVar2->field_72;
        local_60 = this_01->begin_ptrs();
        jag::math::Vector2T<int>::Vector2T(local_78);
        auVar14 = this_01->end();
        local_48 = auVar14._0_8_;
        this_00 = (eastl*)&local_60;
        bVar4 = eastl::operator!=(this_00, (hashtable_iterator_base*)&local_48, auVar14._8_8_);
        if (bVar4) {
            local_80 = this_01;
            do {
                local_3c = local_3c + 1;
                local_48 = local_60.next();
                eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator=(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)local_78,
                    (rbtree_iterator*)&local_48);
                pMVar1 = local_38->field_256;
                pMVar7 = (MidiNote*)local_60.HeapBeginPtr();
                cVar3 = pMVar1->UpdateStreamlessNote(pMVar7);
                if (cVar3 == '\0') {
                    iVar12 = param_3;
                    iVar13 = param_2;
                    do {
                        iVar11 = iVar12;
                        lVar8 = local_60.HeapBeginPtr();
                        local_64 = *(int*)(lVar8 + 168);
                        if (iVar11 <= local_64) {
                            iVar12 = iVar11;
                            break;
                        }
                        pMVar7 = (MidiNote*)local_60.HeapBeginPtr();
                        lVar8 = local_60.HeapBeginPtr();
                        pMVar2 = local_38;
                        DoMix2(local_38, pMVar7, param_1, iVar13, *(int*)(lVar8 + 168), iVar13 + iVar11);
                        lVar8 = local_60.HeapBeginPtr();
                        iVar13 = iVar13 + *(int*)(lVar8 + 168);
                        lVar8 = local_60.HeapBeginPtr();
                        iVar12 = iVar11 - *(int*)(lVar8 + 168);
                        pMVar1 = pMVar2->field_256;
                        pMVar7 = (MidiNote*)local_60.HeapBeginPtr();
                        cVar3 = pMVar1->UpdateNote(pMVar7, param_1, iVar13, iVar12);
                    } while (cVar3 == '\0');
                    this_01 = local_80;
                    if (iVar11 <= local_64) {
                        pMVar7 = (MidiNote*)local_60.HeapBeginPtr();
                        DoMix2(local_38, pMVar7, param_1, iVar13, iVar12, iVar13 + iVar12);
                        lVar8 = local_60.HeapBeginPtr();
                        *(int*)(lVar8 + 168) = *(int*)(lVar8 + 168) - iVar12;
                    }
                }
                eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator=(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_60,
                    (rbtree_iterator*)local_78);
                auVar14 = this_01->end();
                local_48 = auVar14._0_8_;
                this_00 = (eastl*)&local_60;
                bVar4 = eastl::operator!=((eastl*)&local_60, (hashtable_iterator_base*)&local_48, auVar14._8_8_);
            } while (bVar4);
        }
        lVar8 = this_00->CurrentTimeMillis();
        if ((local_38->field_248 + 1000 <= lVar8) &&
            ((local_38->field_248 = lVar8,
              *(int*)&local_38->field_264 < local_3c ||
                  (iVar12 = local_70->GetStreamCountLastMix(), *(int*)((long)&local_38->field_264 + 4) < iVar12)))) {
            pMVar2 = local_38;
            piVar9 = std::max<int>(&local_3c, (int*)&local_38->field_264);
            *(int*)&pMVar2->field_264 = *piVar9;
            uVar5 = local_70->GetStreamCountLastMix();
            local_60 = CONCAT44(local_60._4_4_, uVar5);
            piVar9 = std::max<int>((int*)&local_60, (int*)((long)&pMVar2->field_264 + 4));
            *(int*)((long)&pMVar2->field_264 + 4) = *piVar9;
            uVar10 = logger::default_logger();
            logger::Logger::Log(
                uVar10, 0, 5,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                "midimixer.cpp",
                106, "MIDI: notes=%d dead=%i - if either value is growing uncontrollably, the MIDI player is leaking!",
                *(undefined4*)&pMVar2->field_264, *(undefined4*)((long)&pMVar2->field_264 + 4));
        }
    }

    // 0x1002ceef0, 1168 bytes, placed by class name
    // MidiMixer::DoMix2(MidiNote&, Array<int, eastl::allocator>&, int, int, int)
    void MidiMixer::DoMix2(MidiNote* param_1, Array* param_2, int param_3, int param_4, int param_5) {
        MidiPlayer* pMVar1;
        ulong uVar2;
        undefined8 uVar3;
        shared_ptr* psVar4;
        char cVar5;
        int iVar6;
        int iVar7;
        int iVar8;
        undefined8 uVar9;
        byte* pbVar10;
        int* piVar11;
        long* plVar12;
        WaveStream* pWVar13;
        long lVar14;
        undefined2* puVar15;
        WaveStream* this_00;
        short* psVar16;
        int iVar17;
        ulong uVar18;
        shared_ptr local_b8;
        undefined8 local_a8;
        ulong local_a0;
        Mixer* local_98;
        shared_ptr local_90;
        shared_ptr<Patch>* local_80;
        shared_ptr* local_78;
        int local_70;
        int local_6c;
        int local_64;
        MidiNote* local_58;
        MidiMixer* local_50;
        int local_44;
        shared_ptr* local_40;
        uint local_34;

        local_50 = this;
        local_34 = param_3;
        uVar9 = std::this_thread::get_id();
        uVar3 = sound::g_idWorkerThread;
        cVar5 = std::operator==(uVar9, sound::g_idWorkerThread);
        if (cVar5 == '\0') {
            new (&local_a8) std::__thread_id();
            cVar5 = std::operator==(uVar3, local_a8);
            if (cVar5 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midimixer.cpp",
                          156, (char*)0);
            }
        }
        pMVar1 = local_50->field_256;
        iVar17 = param_1->field_32;
        pbVar10 = (byte*)std::array<int, 16ul>::operator[]((array<int, 16ul>*)&pMVar1->field_104, (long)iVar17);
        if (((*pbVar10 & 4) != 0) && (*(int*)&param_1->field_132 < 0)) {
            piVar11 = (int*)std::array<int, 16ul>::operator[]((array<int, 16ul>*)&pMVar1->field_232, (long)iVar17);
            uVar18 = (long)*piVar11 / (long)sound::PCMPlayer::m_frequency & 4294967295;
            iVar17 = (int)((long)*piVar11 / (long)sound::PCMPlayer::m_frequency) + 1048575;
            local_40 = (shared_ptr*)&param_1->field_152;
            local_78 = (shared_ptr*)&param_1->field_56;
            local_80 = (shared_ptr<Patch>*)&param_1->field_40;
            local_98 = (Mixer*)local_50->field_96;
            local_a0 = uVar18;
            local_64 = iVar17;
            local_58 = param_1;
            do {
                psVar4 = local_40;
                iVar7 = (int)uVar18;
                uVar2 = (long)(iVar17 - *(int*)((long)&param_1->field_168 + 4)) / (long)iVar7;
                iVar6 = (int)uVar2;
                if (param_4 < iVar6) {
                    iVar7 = param_4;
                } else {
                    local_70 = param_4;
                    local_6c = param_4 - iVar6;
                    plVar12 =
                        (long*)shared_ptr<sound::WaveStream>::operator->((shared_ptr<sound::WaveStream>*)local_40);
                    (**(code**)(*plVar12 + 40))(plVar12, param_2, local_34, uVar2 & 4294967295);
                    *(int*)((long)&param_1->field_168 + 4) =
                        iVar6 * iVar7 + *(int*)((long)&param_1->field_168 + 4) + -1048576;
                    iVar7 = (int)(262144 / (long)iVar7);
                    iVar17 = sound::PCMPlayer::m_frequency / 100;
                    if (iVar7 < sound::PCMPlayer::m_frequency / 100) {
                        iVar17 = iVar7;
                    }
                    local_44 = iVar6;
                    new (&local_b8) shared_ptr<dash3d::Decor>(psVar4);
                    piVar11 = (int*)std::array<int, 16ul>::operator[](
                        (array<int, 16ul>*)&local_50->field_256->field_168, (long)(int)param_1->field_32);
                    if (*piVar11 == 0) {
                        pWVar13 = (WaveStream*)shared_ptr<sound::WaveStream>::operator->(
                            (shared_ptr<sound::WaveStream>*)&local_b8);
                        iVar6 = pWVar13->GetRateRaw();
                        pWVar13 = (WaveStream*)shared_ptr<sound::WaveStream>::operator->(
                            (shared_ptr<sound::WaveStream>*)&local_b8);
                        iVar7 = pWVar13->GetVolumeFine();
                        pWVar13 = (WaveStream*)shared_ptr<sound::WaveStream>::operator->(
                            (shared_ptr<sound::WaveStream>*)&local_b8);
                        iVar8 = pWVar13->GetPanFine();
                        local_90.NewRateRawFineVolPan(local_78, iVar6, iVar7, iVar8);
                        pWVar13 = (WaveStream*)local_90.release();
                        shared_ptr<sound::WaveStream>::reset<sound::WaveStream, void>(
                            (shared_ptr<sound::WaveStream>*)local_40, pWVar13);
                        local_90.~unique_ptr();
                    } else {
                        pWVar13 = (WaveStream*)shared_ptr<sound::WaveStream>::operator->(
                            (shared_ptr<sound::WaveStream>*)&local_b8);
                        iVar6 = pWVar13->GetRateRaw();
                        pWVar13 = (WaveStream*)shared_ptr<sound::WaveStream>::operator->(
                            (shared_ptr<sound::WaveStream>*)&local_b8);
                        iVar7 = pWVar13->GetPanFine();
                        local_90.NewRateRawFineVolPan(local_78, iVar6, 0, iVar7);
                        pWVar13 = (WaveStream*)local_90.release();
                        shared_ptr<sound::WaveStream>::reset<sound::WaveStream, void>(
                            (shared_ptr<sound::WaveStream>*)local_40, pWVar13);
                        pMVar1 = local_50->field_256;
                        lVar14 = shared_ptr<Patch>::operator->(local_80);
                        puVar15 = (undefined2*)Array<short, eastl::allocator>::operator[](
                            (Array<short, eastl::allocator>*)(lVar14 + 32),
                            (long)*(int*)((long)&local_58->field_88 + 4));
                        pMVar1->SetSampleOffset(local_58, SUB21((ushort)*puVar15 >> 15, 0));
                        pWVar13 = (WaveStream*)shared_ptr<sound::WaveStream>::operator->(
                            (shared_ptr<sound::WaveStream>*)local_40);
                        this_00 = (WaveStream*)shared_ptr<sound::WaveStream>::operator->(
                            (shared_ptr<sound::WaveStream>*)&local_b8);
                        iVar6 = this_00->GetVolumeFine();
                        pWVar13->RampVolumeFine(iVar17, iVar6);
                        local_90.~unique_ptr();
                    }
                    lVar14 = shared_ptr<Patch>::operator->(local_80);
                    psVar16 = (short*)Array<short, eastl::allocator>::operator[](
                        (Array<short, eastl::allocator>*)(lVar14 + 32), (long)*(int*)((long)&local_58->field_88 + 4));
                    if (*psVar16 < 0) {
                        pWVar13 = (WaveStream*)shared_ptr<sound::WaveStream>::operator->(
                            (shared_ptr<sound::WaveStream>*)local_40);
                        pWVar13->SetLoopCount(-1);
                    }
                    pWVar13 = (WaveStream*)shared_ptr<sound::WaveStream>::operator->(
                        (shared_ptr<sound::WaveStream>*)&local_b8);
                    pWVar13->RampOut(iVar17);
                    plVar12 =
                        (long*)shared_ptr<sound::WaveStream>::operator->((shared_ptr<sound::WaveStream>*)&local_b8);
                    local_34 = local_34 + local_44;
                    (**(code**)(*plVar12 + 40))(plVar12, param_2, local_34, param_5 - local_34);
                    pWVar13 = (WaveStream*)shared_ptr<sound::WaveStream>::operator->(
                        (shared_ptr<sound::WaveStream>*)&local_b8);
                    cVar5 = pWVar13->Isramping();
                    param_1 = local_58;
                    if (cVar5 != '\0') {
                        new (&local_90) shared_ptr<dash3d::Decor>(&local_b8);
                        local_98->PlayStream(&local_90);
                        local_90.~shared_ptr();
                    }
                    local_b8.~shared_ptr();
                    uVar18 = local_a0;
                    iVar7 = local_70;
                    iVar17 = local_64;
                    param_4 = local_6c;
                    iVar6 = local_44;
                }
            } while (iVar6 <= iVar7);
            piVar11 = (int*)((long)&param_1->field_168 + 4);
            *piVar11 = *piVar11 + (int)uVar18 * param_4;
        }
        plVar12 = (long*)shared_ptr<sound::WaveStream>::operator->((shared_ptr<sound::WaveStream>*)&param_1->field_152);
        (**(code**)(*plVar12 + 40))(plVar12, param_2, local_34, param_4);
    }

    // 0x1002cf9c0, 608 bytes, placed by class name
    // MidiMixer::PretendToMix(int)
    void MidiMixer::PretendToMix(int param_1) {
        MidiPlayer* pMVar1;
        undefined8 uVar2;
        MidiMixer* pMVar3;
        char cVar4;
        bool bVar5;
        undefined8 uVar6;
        MidiNote* pMVar7;
        long lVar8;
        int iVar9;
        SharedPtrList<rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>* this_00;
        undefined1 auVar10[16];
        undefined8 local_78;
        SharedPtrList<rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>* local_70;
        undefined8 local_68[3];
        Vector2T<int> local_50[8];
        undefined8 local_38;

        uVar6 = std::this_thread::get_id();
        uVar2 = sound::g_idWorkerThread;
        cVar4 = std::operator==(uVar6, sound::g_idWorkerThread);
        if (cVar4 == '\0') {
            new (&local_78) std::__thread_id();
            cVar4 = std::operator==(uVar2, local_78);
            if (cVar4 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midimixer.cpp",
                          114, (char*)0);
            }
        }
        pMVar3 = (MidiMixer*)this;
        (((MidiMixer*)this)->field_96, param_1)->PretendToMix();
        this_00 = (SharedPtrList<rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>*)&pMVar3->field_72;
        local_38 = this_00->begin_ptrs();
        jag::math::Vector2T<int>::Vector2T(local_50);
        auVar10 = this_00->end();
        local_68[0] = auVar10._0_8_;
        bVar5 = eastl::operator!=((eastl*)&local_38, (hashtable_iterator_base*)local_68, auVar10._8_8_);
        if (bVar5) {
            local_70 = this_00;
            do {
                local_68[0] = local_38.next();
                eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator=(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)local_50,
                    (rbtree_iterator*)local_68);
                pMVar1 = ((MidiMixer*)this)->field_256;
                pMVar7 = (MidiNote*)local_38.HeapBeginPtr();
                cVar4 = pMVar1->UpdateStreamlessNote(pMVar7);
                if (cVar4 == '\0') {
                    iVar9 = param_1;
                    do {
                        lVar8 = local_38.HeapBeginPtr();
                        bVar5 = false;
                        if (iVar9 <= *(int*)(lVar8 + 168))
                            break;
                        pMVar7 = (MidiNote*)local_38.HeapBeginPtr();
                        lVar8 = local_38.HeapBeginPtr();
                        pMVar3 = (MidiMixer*)this;
                        PretendToMix2((MidiMixer*)this, pMVar7, *(int*)(lVar8 + 168));
                        lVar8 = local_38.HeapBeginPtr();
                        iVar9 = iVar9 - *(int*)(lVar8 + 168);
                        new (local_68) Array<int, eastl::allocator>();
                        pMVar1 = pMVar3->field_256;
                        pMVar7 = (MidiNote*)local_38.HeapBeginPtr();
                        cVar4 = pMVar1->UpdateNote(pMVar7, local_68, 0, iVar9);
                        local_68->~Array();
                        bVar5 = true;
                    } while (cVar4 == '\0');
                    this_00 = local_70;
                    if (!bVar5) {
                        pMVar7 = (MidiNote*)local_38.HeapBeginPtr();
                        PretendToMix2((MidiMixer*)this, pMVar7, iVar9);
                        lVar8 = local_38.HeapBeginPtr();
                        *(int*)(lVar8 + 168) = *(int*)(lVar8 + 168) - iVar9;
                    }
                }
                eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator=(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_38,
                    (rbtree_iterator*)local_50);
                auVar10 = this_00->end();
                local_68[0] = auVar10._0_8_;
                bVar5 = eastl::operator!=((eastl*)&local_38, (hashtable_iterator_base*)local_68, auVar10._8_8_);
            } while (bVar5);
        }
    }

    // 0x1002cfc20, 672 bytes, placed by class name
    // MidiMixer::PretendToMix2(MidiNote&, int)
    void MidiMixer::PretendToMix2(MidiNote* param_1, int param_2) {
        undefined1* puVar1;
        MidiPlayer* pMVar2;
        undefined8 uVar3;
        char cVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        undefined8 uVar8;
        byte* pbVar9;
        int* piVar10;
        WaveStream* pWVar11;
        long lVar12;
        undefined2* puVar13;
        short* psVar14;
        long* plVar15;
        ulong uVar16;
        undefined8 local_50;
        int local_44;
        shared_ptr* local_40;
        unique_ptr<sound::WaveStream, std::default_delete<sound::WaveStream>> local_38[8];

        uVar8 = std::this_thread::get_id();
        uVar3 = sound::g_idWorkerThread;
        cVar4 = std::operator==(uVar8, sound::g_idWorkerThread);
        if (cVar4 == '\0') {
            new (&local_50) std::__thread_id();
            cVar4 = std::operator==(uVar3, local_50);
            if (cVar4 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midimixer.cpp",
                          217, (char*)0);
            }
        }
        pMVar2 = field_256;
        uVar16 = (ulong)(int)param_1->field_32;
        pbVar9 = (byte*)std::array<int, 16ul>::operator[]((array<int, 16ul>*)&pMVar2->field_104, uVar16);
        if (((*pbVar9 & 4) != 0) && (*(int*)&param_1->field_132 < 0)) {
            piVar10 = (int*)std::array<int, 16ul>::operator[]((array<int, 16ul>*)&pMVar2->field_232, uVar16);
            iVar5 = *piVar10 / sound::PCMPlayer::m_frequency;
            iVar6 = *(int*)((long)&param_1->field_168 + 4);
            *(uint*)((long)&param_1->field_168 + 4) = iVar5 * param_2 + iVar6 & 1048575;
            if (((iVar5 - iVar6) + 1048575) / iVar5 <= param_2) {
                local_44 = iVar5;
                piVar10 = (int*)std::array<int, 16ul>::operator[]((array<int, 16ul>*)&pMVar2->field_168, uVar16);
                if (*piVar10 == 0) {
                    local_40 = (shared_ptr*)&param_1->field_56;
                    puVar1 = &param_1->field_152;
                    pWVar11 =
                        (WaveStream*)shared_ptr<sound::WaveStream>::operator->((shared_ptr<sound::WaveStream>*)puVar1);
                    iVar6 = pWVar11->GetRateRaw();
                    pWVar11 =
                        (WaveStream*)shared_ptr<sound::WaveStream>::operator->((shared_ptr<sound::WaveStream>*)puVar1);
                    iVar5 = pWVar11->GetVolumeFine();
                    pWVar11 =
                        (WaveStream*)shared_ptr<sound::WaveStream>::operator->((shared_ptr<sound::WaveStream>*)puVar1);
                    iVar7 = pWVar11->GetPanFine();
                    local_38->NewRateRawFineVolPan(local_40, iVar6, iVar5, iVar7);
                    pWVar11 = (WaveStream*)
                        std::unique_ptr<sound::WaveStream, std::default_delete<sound::WaveStream>>::release(local_38);
                    shared_ptr<sound::WaveStream>::reset<sound::WaveStream, void>(
                        (shared_ptr<sound::WaveStream>*)puVar1, pWVar11);
                } else {
                    local_40 = (shared_ptr*)&param_1->field_56;
                    puVar1 = &param_1->field_152;
                    pWVar11 =
                        (WaveStream*)shared_ptr<sound::WaveStream>::operator->((shared_ptr<sound::WaveStream>*)puVar1);
                    iVar6 = pWVar11->GetRateRaw();
                    pWVar11 =
                        (WaveStream*)shared_ptr<sound::WaveStream>::operator->((shared_ptr<sound::WaveStream>*)puVar1);
                    iVar5 = pWVar11->GetPanFine();
                    local_38->NewRateRawFineVolPan(local_40, iVar6, 0, iVar5);
                    pWVar11 = (WaveStream*)
                        std::unique_ptr<sound::WaveStream, std::default_delete<sound::WaveStream>>::release(local_38);
                    shared_ptr<sound::WaveStream>::reset<sound::WaveStream, void>(
                        (shared_ptr<sound::WaveStream>*)puVar1, pWVar11);
                    pMVar2 = field_256;
                    lVar12 = shared_ptr<Patch>::operator->((shared_ptr<Patch>*)&param_1->field_40);
                    puVar13 = (undefined2*)Array<short, eastl::allocator>::operator[](
                        (Array<short, eastl::allocator>*)(lVar12 + 32), (long)*(int*)((long)&param_1->field_88 + 4));
                    pMVar2->SetSampleOffset(param_1, SUB21((ushort)*puVar13 >> 15, 0));
                }
                std::unique_ptr<sound::WaveStream, std::default_delete<sound::WaveStream>>::~unique_ptr(local_38);
                lVar12 = shared_ptr<Patch>::operator->((shared_ptr<Patch>*)&param_1->field_40);
                psVar14 = (short*)Array<short, eastl::allocator>::operator[](
                    (Array<short, eastl::allocator>*)(lVar12 + 32), (long)*(int*)((long)&param_1->field_88 + 4));
                if (*psVar14 < 0) {
                    pWVar11 = (WaveStream*)shared_ptr<sound::WaveStream>::operator->(
                        (shared_ptr<sound::WaveStream>*)&param_1->field_152);
                    pWVar11->SetLoopCount(-1);
                }
                param_2 = *(int*)((long)&param_1->field_168 + 4) / local_44;
            }
        }
        plVar15 = (long*)shared_ptr<sound::WaveStream>::operator->((shared_ptr<sound::WaveStream>*)&param_1->field_152);
        (**(code**)(*plVar15 + 48))(plVar15, param_2);
    }

} // namespace jag::oldscape::midi2
