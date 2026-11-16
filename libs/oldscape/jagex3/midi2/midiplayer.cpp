// libs/oldscape/jagex3/midi2/midiplayer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "midiplayer.h"

namespace jag::oldscape::midi2 {
    // 0x1002cedc0, 304 bytes, placed by class name and debug map
    // MidiPlayer::UpdateStreamlessNote(MidiNote&)
    ulong MidiPlayer::UpdateStreamlessNote(MidiNote* param_1) {
        int iVar1;
        undefined8 uVar2;
        char cVar3;
        bool bVar4;
        undefined8 uVar5;
        undefined7 extraout_var;
        array<shared_ptr<MidiNote>, 128ul>* paVar6;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        MidiNote* pMVar7;
        shared_ptr<MidiNote>* this_01;
        shared_ptr local_40;
        __thread_id local_30[8];

        uVar5 = std::this_thread::get_id();
        uVar2 = sound::g_idWorkerThread;
        cVar3 = std::operator==(uVar5);
        if (cVar3 == '\0') {
            std::__thread_id::__thread_id(local_30);
            cVar3 = std::operator==(uVar2);
            if (cVar3 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midiplayer.cpp",
                          1085, (char*)0);
            }
        }
        bVar4 = operator==((shared_ptr*)&param_1->field_152, (_func_decltype_nullptr*)0);
        if ((bVar4) && (-1 < *(int*)&param_1->field_132)) {
            iVar1 = *(int*)&param_1->field_88;
            if (0 < (long)iVar1) {
                paVar6 = (array<shared_ptr<MidiNote>, 128ul>*)
                    std::array<std::array<shared_ptr<MidiNote>, 128ul>, 16ul>::operator[](
                        (array<std::array<shared_ptr<MidiNote>, 128ul>, 16ul>*)&field_34280,
                        (long)(int)param_1->field_32);
                this_00 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                    std::array<shared_ptr<MidiNote>, 128ul>::operator[](paVar6, (long)iVar1);
                pMVar7 = (MidiNote*)eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
                if (pMVar7 == param_1) {
                    new (&local_40) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                    paVar6 = (array<shared_ptr<MidiNote>, 128ul>*)
                        std::array<std::array<shared_ptr<MidiNote>, 128ul>, 16ul>::operator[](
                            (array<std::array<shared_ptr<MidiNote>, 128ul>, 16ul>*)&field_34280,
                            (long)(int)param_1->field_32);
                    this_01 = (shared_ptr<MidiNote>*)std::array<shared_ptr<MidiNote>, 128ul>::operator[](
                        paVar6, (long)*(int*)&param_1->field_88);
                    shared_ptr<MidiNote>::operator=(this_01, &local_40);
                    local_40.~shared_ptr();
                }
            }
            param_1->Unlink();
        }
        return CONCAT71(extraout_var, bVar4) & 4294967295;
    }

    // 0x1002cf380, 1584 bytes, placed by class name and debug map
    // MidiPlayer::UpdateNote(MidiNote&, Array<int, eastl::allocator>&, int, int)
    bool MidiPlayer::UpdateNote(MidiNote* param_1, Array* param_2, int param_3, int param_4) {
        undefined8 uVar1;
        shared_ptr* this_00;
        char cVar3;
        int iVar5;
        uint uVar6;
        int iVar7;
        undefined8 uVar8;
        WaveStream* pWVar9;
        array<shared_ptr<MidiNote>, 128ul>* paVar10;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar11;
        MidiNote* pMVar12;
        shared_ptr<MidiNote>* psVar13;
        int* piVar14;
        Array<game::VarValue, eastl::allocator>* this_01;
        byte* pbVar15;
        char* pcVar16;
        long* plVar17;
        long lVar18;
        int iVar19;
        undefined1* puVar20;
        Array<game::VarValue, eastl::allocator>* pAVar21;
        double dVar22;
        __thread_id local_78[8];
        shared_ptr* local_68;
        ulong local_60;
        double local_50;
        shared_ptr local_48;
        uint local_34;

        uVar8 = std::this_thread::get_id();
        uVar1 = sound::g_idWorkerThread;
        cVar3 = std::operator==(uVar8);
        if (cVar3 == '\0') {
            std::__thread_id::__thread_id(local_78);
            cVar3 = std::operator==(uVar1);
            if (cVar3 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midiplayer.cpp",
                          1171, (char*)0);
            }
        }
        *(int*)&param_1->field_168 = sound::PCMPlayer::m_frequency / 100;
        if (-1 < *(int*)&param_1->field_132) {
            if (operator==((shared_ptr*)&param_1->field_152, (_func_decltype_nullptr*)0)) {
            LAB_1002cf459:
                param_1->~AutoSingleton();
                iVar19 = *(int*)&param_1->field_88;
                if (0 < (long)iVar19) {
                    paVar10 = (array<shared_ptr<MidiNote>, 128ul>*)
                        std::array<std::array<shared_ptr<MidiNote>, 128ul>, 16ul>::operator[](
                            (array<std::array<shared_ptr<MidiNote>, 128ul>, 16ul>*)&field_34280,
                            (long)(int)param_1->field_32);
                    pvVar11 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                        std::array<shared_ptr<MidiNote>, 128ul>::operator[](paVar10, (long)iVar19);
                    pMVar12 = (MidiNote*)eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar11);
                    if (pMVar12 == param_1) {
                        new (&local_48) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                        paVar10 = (array<shared_ptr<MidiNote>, 128ul>*)
                            std::array<std::array<shared_ptr<MidiNote>, 128ul>, 16ul>::operator[](
                                (array<std::array<shared_ptr<MidiNote>, 128ul>, 16ul>*)&field_34280,
                                (long)(int)param_1->field_32);
                        psVar13 = (shared_ptr<MidiNote>*)std::array<shared_ptr<MidiNote>, 128ul>::operator[](
                            paVar10, (long)*(int*)&param_1->field_88);
                        shared_ptr<MidiNote>::operator=(psVar13, &local_48);
                        local_48.~shared_ptr();
                    }
                }
                param_1->Unlink();
                return true;
            }
            pWVar9 = (WaveStream*)shared_ptr<sound::WaveStream>::operator->(
                (shared_ptr<sound::WaveStream>*)&param_1->field_152);
            cVar3 = pWVar9->Isfinished();
            if (cVar3 != '\0')
                goto LAB_1002cf459;
        }
        iVar19 = *(int*)((long)&param_1->field_112 + 4);
        if (0 < iVar19) {
            puVar20 = &field_940;
            piVar14 = (int*)std::array<int, 16ul>::operator[]((array<int, 16ul>*)puVar20, (long)(int)param_1->field_32);
            dVar22 = (double)pow<int, double>((int)puVar20, (double)*piVar14 * 0.0004921259842519685);
            iVar19 = iVar19 - (int)(dVar22 * 16.0 + 0.5);
            if (iVar19 < 0) {
                iVar19 = 0;
            }
            *(int*)((long)&param_1->field_112 + 4) = iVar19;
        }
        local_68 = (shared_ptr*)&param_1->field_152;
        pWVar9 = (WaveStream*)shared_ptr<sound::WaveStream>::operator->((shared_ptr<sound::WaveStream>*)local_68);
        iVar19 = GetRateRaw(this, param_1);
        pWVar9->SetRateRaw(iVar19);
        puVar20 = &param_1->field_72;
        this_01 = (Array<game::VarValue, eastl::allocator>*)shared_ptr<EnvelopeSet>::operator*(
            (shared_ptr<EnvelopeSet>*)puVar20);
        *(int*)&param_1->field_140 = *(int*)&param_1->field_140 + 1;
        piVar14 = (int*)((long)&param_1->field_140 + 4);
        *piVar14 = *piVar14 + *(int*)(this_01 + 68);
        local_50 = (double)(*(int*)((long)&param_1->field_88 + 4) * 256 +
                            (*(int*)((long)&param_1->field_112 + 4) * *(int*)&param_1->field_112 >> 12) + -15360) *
                   5.086263020833333e-06;
        if (0 < *(int*)(this_01 + 48)) {
            if (*(int*)(this_01 + 60) < 1) {
                iVar19 = 128;
            } else {
                dVar22 = (double)pow<int, double>((int)puVar20, (double)*(int*)(this_01 + 60) * local_50);
                iVar19 = (int)(dVar22 * 128.0 + 0.5);
            }
            *(int*)&param_1->field_120 = *(int*)&param_1->field_120 + iVar19;
        }
        pAVar21 = this_01;
        cVar3 = this_01->empty();
        if (cVar3 == '\0') {
            if (*(int*)(this_01 + 52) < 1) {
                iVar19 = 128;
            } else {
                dVar22 = (double)pow<int, double>((int)pAVar21, (double)*(int*)(this_01 + 52) * local_50);
                iVar19 = (int)(dVar22 * 128.0 + 0.5);
            }
            piVar14 = (int*)((long)&param_1->field_120 + 4);
            *piVar14 = *piVar14 + iVar19;
            iVar19 = *(int*)&param_1->field_128;
            while ((iVar5 = this_01->end(),
                    iVar19 < iVar5 + -2 &&
                        (iVar19 = *(int*)((long)&param_1->field_120 + 4),
                         pbVar15 = (byte*)Array<signed char, eastl::allocator>::operator[](
                             (Array<signed char, eastl::allocator>*)this_01, (long)*(int*)&param_1->field_128 + 2),
                         (int)((uint)*pbVar15 * 256) < iVar19))) {
                iVar19 = *(int*)&param_1->field_128 + 2;
                *(int*)&param_1->field_128 = iVar19;
            }
            iVar19 = *(int*)&param_1->field_128;
            iVar5 = this_01->end();
            if (iVar19 != iVar5 + -2)
                goto LAB_1002cf6bd;
            pcVar16 = (char*)Array<signed char, eastl::allocator>::operator[](
                (Array<signed char, eastl::allocator>*)this_01, (long)*(int*)&param_1->field_128 + 1);
            local_34 = (uint)CONCAT71((int7)((ulong)pcVar16 >> 8), *pcVar16 == '\0');
        } else {
        LAB_1002cf6bd:
            local_34 = 0;
        }
        if (-1 < *(int*)&param_1->field_132) {
            pAVar21 = this_01 + 24;
            cVar3 = pAVar21->empty();
            if (cVar3 == '\0') {
                puVar20 = &field_104;
                iVar19 = param_1->field_32;
                pbVar15 = (byte*)std::array<int, 16ul>::operator[]((array<int, 16ul>*)puVar20, (long)iVar19);
                iVar5 = (int)puVar20;
                if ((*pbVar15 & 1) == 0) {
                    if (-1 < (long)*(int*)&param_1->field_88) {
                        local_60 = (long)*(int*)&param_1->field_88;
                        paVar10 = (array<shared_ptr<MidiNote>, 128ul>*)
                            std::array<std::array<shared_ptr<MidiNote>, 128ul>, 16ul>::operator[](
                                (array<std::array<shared_ptr<MidiNote>, 128ul>, 16ul>*)&field_34280, (long)iVar19);
                        pvVar11 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                            std::array<shared_ptr<MidiNote>, 128ul>::operator[](paVar10, local_60);
                        pMVar12 =
                            (MidiNote*)eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar11);
                        iVar5 = (int)pvVar11;
                        if (pMVar12 == param_1)
                            goto LAB_1002cf7fe;
                    }
                    if (*(int*)(this_01 + 56) < 1) {
                        iVar19 = 128;
                    } else {
                        dVar22 = (double)pow<int, double>(iVar5, local_50 * (double)*(int*)(this_01 + 56));
                        iVar19 = (int)(dVar22 * 128.0 + 0.5);
                    }
                    *(int*)&param_1->field_132 = *(int*)&param_1->field_132 + iVar19;
                    iVar19 = *(int*)((long)&param_1->field_132 + 4);
                    while ((iVar5 = pAVar21->end(),
                            iVar19 < iVar5 + -2 && (iVar19 = *(int*)&param_1->field_132,
                                                    pbVar15 = (byte*)Array<signed char, eastl::allocator>::operator[](
                                                        (Array<signed char, eastl::allocator>*)pAVar21,
                                                        (long)*(int*)((long)&param_1->field_132 + 4) + 2),
                                                    (int)((uint)*pbVar15 * 256) < iVar19))) {
                        iVar19 = *(int*)((long)&param_1->field_132 + 4) + 2;
                        *(int*)((long)&param_1->field_132 + 4) = iVar19;
                    }
                    iVar19 = *(int*)((long)&param_1->field_132 + 4);
                    iVar5 = pAVar21->end();
                    uVar6 = local_34 & 255;
                    local_34 = 1;
                    if (iVar19 != iVar5 + -2) {
                        local_34 = uVar6;
                    }
                }
            }
        }
    LAB_1002cf7fe:
        this_00 = local_68;
        pWVar9 = (WaveStream*)shared_ptr<sound::WaveStream>::operator->((shared_ptr<sound::WaveStream>*)local_68);
        iVar19 = *(int*)&param_1->field_168;
        if ((char)local_34 == '\0') {
            iVar5 = GetVolume(this, param_1);
            iVar7 = GetPan(this, param_1);
            pWVar9->RampVolPanFine(iVar19, iVar5, iVar7);
        } else {
            pWVar9->RampOut(iVar19);
            cVar3 = param_2->empty();
            plVar17 = (long*)shared_ptr<sound::WaveStream>::operator->((shared_ptr<sound::WaveStream>*)this_00);
            if (cVar3 == '\0') {
                (**(code**)(*plVar17 + 40))(plVar17, param_2, param_3, param_4);
            } else {
                (**(code**)(*plVar17 + 48))(plVar17, param_4);
            }
            pWVar9 = (WaveStream*)shared_ptr<sound::WaveStream>::operator->((shared_ptr<sound::WaveStream>*)this_00);
            cVar3 = pWVar9->Isramping();
            if (cVar3 != '\0') {
                lVar18 = shared_ptr<MidiMixer>::operator->((shared_ptr<MidiMixer>*)&field_67264);
                new (&local_48) shared_ptr<dash3d::Decor>(this_00);
                ((lVar18 + 96))->PlayStream(&local_48);
                local_48.~shared_ptr();
            }
            param_1->~AutoSingleton();
            if (-1 < *(int*)&param_1->field_132) {
                iVar19 = *(int*)&param_1->field_88;
                if (0 < (long)iVar19) {
                    paVar10 = (array<shared_ptr<MidiNote>, 128ul>*)
                        std::array<std::array<shared_ptr<MidiNote>, 128ul>, 16ul>::operator[](
                            (array<std::array<shared_ptr<MidiNote>, 128ul>, 16ul>*)&field_34280,
                            (long)(int)param_1->field_32);
                    pvVar11 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                        std::array<shared_ptr<MidiNote>, 128ul>::operator[](paVar10, (long)iVar19);
                    pMVar12 = (MidiNote*)eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar11);
                    if (pMVar12 == param_1) {
                        new (&local_48) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                        paVar10 = (array<shared_ptr<MidiNote>, 128ul>*)
                            std::array<std::array<shared_ptr<MidiNote>, 128ul>, 16ul>::operator[](
                                (array<std::array<shared_ptr<MidiNote>, 128ul>, 16ul>*)&field_34280,
                                (long)(int)param_1->field_32);
                        psVar13 = (shared_ptr<MidiNote>*)std::array<shared_ptr<MidiNote>, 128ul>::operator[](
                            paVar10, (long)*(int*)&param_1->field_88);
                        shared_ptr<MidiNote>::operator=(psVar13, &local_48);
                        local_48.~shared_ptr();
                    }
                }
                param_1->Unlink();
            }
        }
        return (char)local_34 != '\0';
    }

    // 0x1002cff40, 336 bytes, placed by class name and debug map
    // MidiPlayer::SetSampleOffset(MidiNote const&, bool)
    void MidiPlayer::SetSampleOffset(MidiNote* param_1, bool param_2) {
        undefined1* this_00;
        int iVar1;
        undefined8 uVar2;
        char cVar3;
        undefined8 in_RAX;
        undefined8 uVar4;
        long lVar5;
        long lVar6;
        int* piVar7;
        WaveStream* pWVar8;
        ulong uVar9;
        undefined8 local_38;

        local_38 = in_RAX;
        uVar4 = std::this_thread::get_id();
        uVar2 = sound::g_idWorkerThread;
        cVar3 = std::operator==(uVar4, sound::g_idWorkerThread);
        if (cVar3 == '\0') {
            new (&local_38) std::__thread_id();
            cVar3 = std::operator==(uVar2, local_38);
            if (cVar3 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midiplayer.cpp",
                          362, (char*)0);
            }
        }
        this_00 = &param_1->field_56;
        lVar5 = shared_ptr<sound::Wave>::operator->((shared_ptr<sound::Wave>*)this_00);
        lVar5 = ((lVar5 + 8))->end();
        if (param_2) {
            lVar6 = shared_ptr<sound::Wave>::operator->((shared_ptr<sound::Wave>*)this_00);
            if (*(char*)(lVar6 + 40) != '\0') {
                lVar6 = shared_ptr<sound::Wave>::operator->((shared_ptr<sound::Wave>*)this_00);
                iVar1 = *(int*)(lVar6 + 32);
                piVar7 = (int*)std::array<int, 16ul>::operator[]((array<int, 16ul>*)&field_168,
                                                                 (long)(int)param_1->field_32);
                uVar9 = (ulong)((long)*piVar7 * (lVar5 * 2 - (long)iVar1)) >> 6;
                if ((ulong)(lVar5 << 8) <= uVar9) {
                    uVar9 = ~uVar9 + lVar5 * 512;
                    pWVar8 = (WaveStream*)shared_ptr<sound::WaveStream>::operator->(
                        (shared_ptr<sound::WaveStream>*)&param_1->field_152);
                    pWVar8->SetReverse(true);
                }
                goto LAB_1002d005e;
            }
        }
        piVar7 = (int*)std::array<int, 16ul>::operator[]((array<int, 16ul>*)&field_168, (long)(int)param_1->field_32);
        uVar9 = (ulong)(int)((ulong)(lVar5 * *piVar7) >> 6);
    LAB_1002d005e:
        pWVar8 =
            (WaveStream*)shared_ptr<sound::WaveStream>::operator->((shared_ptr<sound::WaveStream>*)&param_1->field_152);
        pWVar8->SetPositionFine((int)uVar9);
    }

    // 0x1002d10c0, 960 bytes, base-object constructor, placed by class name
    // MidiPlayer::MidiPlayer()
    void MidiPlayer::MidiPlayer() {
        undefined8 uVar2;
        undefined8* puVar3;
        shared_ptr local_48;

        new (this) sound::PCMStream();
        new (&field_72) MidiPlayerMainThread();
        field_0 = &PTR__MidiPlayer_100efa1a0;
        field_72 = &PTR_QueueSetGlobalVolume_100efa248;
        new (&local_48) eastl::allocator("EASTL hash_map");
        new (field_296, (allocator*)&local_48)
            eastl::hash_map<int, shared_ptr<Patch>, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>();
        new (&field_352) std::mutex();
        field_416 = 256;
        field_420 = 1000000;
        field_424 = false;
        new (&m_globalVolume) ThreadStateTransfer();
        new (&field_1448) std::mutex();
        std::array<std::array<shared_ptr<MidiNote>, 128ul>, 16ul>::array();
        std::array<std::array<shared_ptr<MidiNote>, 128ul>, 16ul>::array();
        new (field_67048) MidiParser();
        new (&field_67264, (_func_decltype_nullptr*)&local_48) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        uVar2 = std::this_thread::get_id();
        if (std::operator==(uVar2, sound::g_idMainThread) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("std::this_thread::get_id() == sound::g_idMainThread",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                      "midiplayer.cpp",
                      26, (char*)0);
        }
        puVar3 = (undefined8*)(&field_428)->data();
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        puVar3[7] = 0;
        puVar3 = (undefined8*)(&field_492)->data();
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        puVar3[7] = 0;
        puVar3 = (undefined8*)(&field_556)->data();
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        puVar3[7] = 0;
        puVar3 = (undefined8*)(&field_620)->data();
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        puVar3[7] = 0;
        puVar3 = (undefined8*)(&field_684)->data();
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        puVar3[7] = 0;
        puVar3 = (undefined8*)(&field_748)->data();
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        puVar3[7] = 0;
        puVar3 = (undefined8*)(&field_812)->data();
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        puVar3[7] = 0;
        puVar3 = (undefined8*)(&field_876)->data();
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        puVar3[7] = 0;
        puVar3 = (undefined8*)(&field_940)->data();
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        puVar3[7] = 0;
        puVar3 = (undefined8*)(&field_104)->data();
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        puVar3[7] = 0;
        puVar3 = (undefined8*)(&field_168)->data();
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        puVar3[7] = 0;
        puVar3 = (undefined8*)(&field_232)->data();
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        puVar3[7] = 0;
        puVar3 = (undefined8*)(&field_1004)->data();
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        puVar3[7] = 0;
        puVar3 = (undefined8*)(&field_1068)->data();
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        puVar3[7] = 0;
        puVar3 = (undefined8*)(&field_1132)->data();
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        puVar3[7] = 0;
        make_shared<MidiMixer, MidiPlayer&>((jag*)&local_48, this);
        shared_ptr<MidiMixer>::operator=((shared_ptr<MidiMixer>*)&field_67264, &local_48);
        local_48.~shared_ptr();
        Reset2(this);
    }

    // 0x1002d15e0, 256 bytes, placed by class name
    // MidiPlayer::Reset2()
    void MidiPlayer::Reset2() {
        undefined4 uVar1;
        uint uVar2;
        undefined8 uVar3;
        char cVar4;
        undefined8 in_RAX;
        undefined8 uVar5;
        undefined4* puVar6;
        uint* puVar7;
        ulong uVar8;
        undefined8 local_38;

        local_38 = in_RAX;
        uVar5 = std::this_thread::get_id();
        uVar3 = sound::g_idWorkerThread;
        cVar4 = std::operator==(uVar5, sound::g_idWorkerThread);
        if (cVar4 == '\0') {
            new (&local_38) std::__thread_id();
            cVar4 = std::operator==(uVar3, local_38);
            if (cVar4 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midiplayer.cpp",
                          626, (char*)0);
            }
        }
        AllSoundOff2(this, -1);
        AllControllersOff2(this, -1);
        uVar8 = 0;
        do {
            puVar6 = (undefined4*)std::array<int, 16ul>::operator[]((array<int, 16ul>*)&field_620, uVar8);
            uVar1 = *puVar6;
            puVar6 = (undefined4*)std::array<int, 16ul>::operator[]((array<int, 16ul>*)&field_684, uVar8);
            *puVar6 = uVar1;
            uVar8 = uVar8 + 1;
        } while (uVar8 != 16);
        uVar8 = 0;
        do {
            puVar7 = (uint*)std::array<int, 16ul>::operator[]((array<int, 16ul>*)&field_620, uVar8);
            uVar2 = *puVar7;
            puVar7 = (uint*)std::array<int, 16ul>::operator[]((array<int, 16ul>*)&field_748, uVar8);
            *puVar7 = uVar2 & 4294967168;
            uVar8 = uVar8 + 1;
        } while (uVar8 != 16);
    }

    // 0x1002d1730, 16 bytes, complete-object constructor, placed by class name
    // MidiPlayer::MidiPlayer(): jumps straight to the base-object constructor

    // 0x1002d1740, 64 bytes, placed by class name
    // MidiPlayer::SetTempoFactor(int)
    void MidiPlayer::SetTempoFactor(int param_1) {
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                        "midiplayer.cpp",
                        57, "didn\'t think this was used");
    }

    // 0x1002d1780, 64 bytes, placed by class name
    // MidiPlayer::GetTempoFactor()
    void MidiPlayer::GetTempoFactor() {
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                        "midiplayer.cpp",
                        63, "didn\'t think this was used");
    }

    // 0x1002d17c0, 800 bytes, placed by class name
    // MidiPlayer::LoadAndQueuePatches(MidiFile&, jagex3::Js5&, sound::WaveCache&, eastl::priority_queue<MidiPlayerMainThread::QueuedLazyWave, eastl::vector<MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>, eastl::less<MidiPlayerMainThread::QueuedLazyWave> >*, ErrorCapture&)
    byte MidiPlayer::LoadAndQueuePatches(MidiFile* param_1, Js5* param_2, WaveCache* param_3, priority_queue* param_4,
                                         ErrorCapture* param_5) {
        char cVar1;
        bool bVar2;
        undefined8 uVar3;
        undefined8* puVar4;
        shared_ptr<Patch>* psVar5;
        Patch* pPVar6;
        long lVar7;
        OperationBuffer* pOVar8;
        OperationBuffer* pOVar9;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* phVar10;
        hashtable_iterator_base* extraout_RDX_00;
        uint uVar11;
        Js5* pJVar12;
        undefined1* this_00;
        undefined1 auVar13[16];
        hashtable_iterator_base local_c8[16];
        undefined8 local_b8;
        undefined8 uStack_b0;
        undefined8 local_a8;
        undefined8 uStack_a0;
        QueuedLazyWave local_98;
        hashtable_iterator_base local_80[16];
        eastl local_70[16];
        WaveCache* local_60;
        Js5* local_58;
        scoped_lock<std::mutex> local_50[8];
        unique_ptr<Patch, std::default_delete<Patch>> local_48[8];
        ErrorCapture* local_40;
        undefined4 local_38;
        int local_34;

        local_60 = param_3;
        local_58 = param_2;
        local_40 = param_5;
        uVar3 = std::this_thread::get_id();
        cVar1 = std::operator==(uVar3, sound::g_idMainThread);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("std::this_thread::get_id() == sound::g_idMainThread",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                      "midiplayer.cpp",
                      69, (char*)0);
        }
        cVar1 = local_40->IsRaised();
        if (cVar1 == '\0') {
            std::scoped_lock<std::mutex>::scoped_lock(local_50, (mutex*)&field_352);
            eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                             eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
            auVar13 =
                eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                                 eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>,
                                 eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                 eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
            phVar10 = auVar13._8_8_;
            this_00 = field_296;
            local_38 = (undefined4)CONCAT71(auVar13._1_7_, 1);
            while (true) {
                bVar2 = eastl::operator!=(local_70, local_c8, phVar10);
                if (!bVar2)
                    break;
                puVar4 = (undefined8*)local_70->HeapBeginPtr();
                local_b8 = *puVar4;
                uStack_b0 = puVar4[1];
                local_a8 = puVar4[2];
                uStack_a0 = puVar4[3];
                local_34 = (int)local_b8;
                eastl::hashtable<int, eastl::pair<int const, shared_ptr<ChatLine>>, eastl::allocator,
                                 eastl::use_first<eastl::pair<int const, shared_ptr<ChatLine>>>, eastl::equal_to<int>,
                                 eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                 eastl::prime_rehash_policy, false, true, true>::find((int*)&local_98);
                eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                                 eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>,
                                 eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                 eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
                bVar2 = eastl::operator==((eastl*)&local_98, local_80, extraout_RDX_00);
                if (bVar2) {
                    pJVar12 = local_58;
                    local_48->Load(local_58, local_34);
                    bVar2 = std::operator==((unique_ptr*)local_48, (_func_decltype_nullptr*)pJVar12);
                    if (bVar2) {
                        uVar11 = 3;
                        local_38 = 0;
                    } else {
                        pPVar6 = (Patch*)std::unique_ptr<Patch, std::default_delete<Patch>>::release(local_48);
                        shared_ptr<Patch>::shared_ptr<Patch, void>((shared_ptr<Patch>*)local_80, pPVar6);
                        eastl::hashtable<int, eastl::pair<int const, shared_ptr<Patch>>, eastl::allocator,
                                         eastl::use_first<eastl::pair<int const, shared_ptr<Patch>>>,
                                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                         true>::emplace<int&, shared_ptr<Patch>>((int*)&local_98, (shared_ptr*)this_00);
                        local_80->~shared_ptr();
                        uVar11 = 0;
                    }
                    std::unique_ptr<Patch, std::default_delete<Patch>>::~unique_ptr(local_48);
                    if (!bVar2)
                        goto LAB_1002d1972;
                } else {
                LAB_1002d1972:
                    psVar5 = (shared_ptr<Patch>*)eastl::hash_map<
                        int, shared_ptr<Patch>, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                        false>::operator[]((hash_map<int, shared_ptr<Patch>, eastl::hash<int>, eastl::equal_to<int>,
                                                     eastl::allocator, false>*)this_00,
                                           &local_34);
                    pPVar6 = (Patch*)shared_ptr<Patch>::operator->(psVar5);
                    cVar1 = pPVar6->LoadWaves(local_60, (bitset*)&local_a8, local_40);
                    if (cVar1 == '\0') {
                        cVar1 = local_40->IsRaised();
                        uVar11 = 1;
                        if (cVar1 != '\0')
                            goto LAB_1002d1a4b;
                        local_38 = 0;
                    } else if (param_4 != (priority_queue*)0) {
                        psVar5 = (shared_ptr<Patch>*)eastl::hash_map<
                            int, shared_ptr<Patch>, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, shared_ptr<Patch>, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)this_00,
                                               &local_34);
                        lVar7 = shared_ptr<Patch>::operator->(psVar5);
                        pOVar8 = (OperationBuffer*)((lVar7 + 152))->HeapBeginPtr();
                        pOVar9 = (OperationBuffer*)((lVar7 + 152))->end();
                        for (; pOVar8 != pOVar9; pOVar8 = pOVar8 + 1) {
                            local_98.field_0 = (undefined4)uStack_b0;
                            new (local_98.field_8) dash3d::OperationBuffer(pOVar8);
                            param_4->push(&local_98);
                            local_98.~pair();
                        }
                    }
                    uVar11 = 0;
                }
            LAB_1002d1a4b:
                if ((uVar11 != 3) && (uVar11 != 0))
                    goto LAB_1002d1a63;
                eastl::hashtable_iterator<eastl::pair<int const, MidiFile::PatchNoteSet>, false, false>::operator++(
                    (hashtable_iterator<eastl::pair<int const, MidiFile::PatchNoteSet>, false, false>*)local_70);
                phVar10 = extraout_RDX;
            }
            uVar11 = 0;
        LAB_1002d1a63:
            std::scoped_lock<std::mutex>::~scoped_lock(local_50);
            local_38._0_1_ = (uVar11 & 1) == 0 & (byte)local_38;
        } else {
            local_38._0_1_ = 0;
        }
        return (byte)local_38;
    }

    // 0x1002d1ff0, 272 bytes, placed by class name
    // MidiPlayer::SpawnWaveLoadingTask(shared_ptr<eastl::priority_queue<MidiPlayerMainThread::QueuedLazyWave, eastl::vector<MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>, eastl::less<MidiPlayerMainThread::QueuedLazyWave> > >&&)
    void MidiPlayer::SpawnWaveLoadingTask(shared_ptr* param_1) {
        undefined8 uVar2;
        Layout* this_00;
        vector* pvVar3;
        type* this_01;
        future<void> local_58[8];
        shared_ptr local_50;
        shared_ptr<dash3d::Decor> local_40[16];
        shared_ptr local_30;

        this_01 = (type*)field_88;
        if (this_01->operator_cast_to_bool()) {
            uVar2 = shared_ptr<std::atomic<bool>>::operator->((shared_ptr<std::atomic<bool>>*)this_01);
            std::__atomic_base<bool, false>::store(uVar2);
        }
        local_30._0_1_ = 0;
        make_shared<std::atomic<bool>, bool>((jag*)&local_50, (bool*)&local_30);
        shared_ptr<std::atomic<bool>>::operator=((shared_ptr<std::atomic<bool>>*)this_01, &local_50);
        local_50.~shared_ptr();
        new (&local_30) shared_ptr<dash3d::Decor>(this_01);
        this_00 = (Layout*)local_30.Instance();
        pvVar3 = eastl::string::Layout::SSOBeginPtr(this_00, this_01);
        new (&local_50) shared_ptr<dash3d::Decor>(param_1);
        shared_ptr<dash3d::Decor>::shared_ptr(local_40, &local_30);
        ThreadPool::AddTask<MidiPlayer::SpawnWaveLoadingTask(
            shared_ptr<eastl::priority_queue<MidiPlayerMainThread::QueuedLazyWave,
                                             eastl::vector<MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
                                             eastl::less<MidiPlayerMainThread::QueuedLazyWave>>>&&)::__3>(
            (ThreadPool*)local_58, (char*)pvVar3, (__3*)&local_50);
        std::future<void>::~future(local_58);
        SpawnWaveLoadingTask(
            shared_ptr<eastl::priority_queue<MidiPlayerMainThread::QueuedLazyWave,
                                             eastl::vector<MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
                                             eastl::less<MidiPlayerMainThread::QueuedLazyWave>>>&&)::$_3::
            ~__3((__3*)&local_50);
        local_30.~shared_ptr();
    }

    // 0x1002d2400, 144 bytes, placed by class name
    // MidiPlayer::InjectPatch(shared_ptr<Patch>&, int)
    void MidiPlayer::InjectPatch(shared_ptr* param_1, int param_2) {
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                        "midiplayer.cpp",
                        140, "didn\'t think this was used");
    }

    // 0x1002d2490, 176 bytes, placed by class name
    // MidiPlayer::DropPatch(int)
    void MidiPlayer::DropPatch(int param_1) {
        undefined8 uVar1;
        char cVar2;
        undefined8 uVar3;
        undefined8 local_30;
        scoped_lock<std::mutex> local_28[12];
        int local_1c;

        local_1c = param_1;
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
                          "midiplayer.cpp",
                          170, (char*)0);
            }
        }
        std::scoped_lock<std::mutex>::scoped_lock(local_28, (mutex*)&field_352);
        (field_296, &local_1c)->erase();
        std::scoped_lock<std::mutex>::~scoped_lock(local_28);
    }

    // 0x1002d2590, 224 bytes, placed by class name
    // MidiPlayer::QueueDropWaveIds()
    void MidiPlayer::QueueDropWaveIds() {
        undefined8 uVar3;
        long lVar4;
        Patch* this_00;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* phVar5;
        hashtable_iterator_base* extraout_RDX_00;
        eastl local_48[16];
        hashtable_iterator_base local_38[16];
        scoped_lock<std::mutex> local_28[8];

        uVar3 = std::this_thread::get_id();
        if (std::operator==(uVar3, sound::g_idMainThread) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("std::this_thread::get_id() == sound::g_idMainThread",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                      "midiplayer.cpp",
                      156, (char*)0);
        }
        std::scoped_lock<std::mutex>::scoped_lock(local_28, (mutex*)&field_352);
        eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                         eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                         eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
        eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        phVar5 = extraout_RDX;
        while (true) {
            if (!eastl::operator!=(local_48, local_38, phVar5))
                break;
            lVar4 = local_48->HeapBeginPtr();
            this_00 = (Patch*)shared_ptr<Patch>::operator->((shared_ptr<Patch>*)(lVar4 + 8));
            this_00->DropWaveIds();
            eastl::hashtable_iterator<
                eastl::pair<int const, shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>>, true, false>::
            operator++(
                (hashtable_iterator<eastl::pair<int const, shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>>,
                                    true, false>*)local_48);
            phVar5 = extraout_RDX_00;
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_28);
    }

    // 0x1002d26a0, 144 bytes, placed by class name
    // MidiPlayer::QueueDropPatches()
    void MidiPlayer::QueueDropPatches() {
        undefined8 uVar2;
        scoped_lock<std::mutex> local_18[8];

        uVar2 = std::this_thread::get_id();
        if (std::operator==(uVar2, sound::g_idMainThread) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("std::this_thread::get_id() == sound::g_idMainThread",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                      "midiplayer.cpp",
                      181, (char*)0);
        }
        std::scoped_lock<std::mutex>::scoped_lock(local_18, (mutex*)&field_352);
        field_296->clear();
        std::scoped_lock<std::mutex>::~scoped_lock(local_18);
    }

    // 0x1002d2740, 224 bytes, placed by class name
    // MidiPlayer::QueuePlayFile(MidiFile&, bool, ErrorCapture&)
    void MidiPlayer::QueuePlayFile(MidiFile* param_1, bool param_2, ErrorCapture* param_3) {
        char cVar1;
        undefined8 uVar2;
        scoped_lock<std::mutex> local_30[8];

        uVar2 = std::this_thread::get_id();
        cVar1 = std::operator==(uVar2, sound::g_idMainThread);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("std::this_thread::get_id() == sound::g_idMainThread",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                      "midiplayer.cpp",
                      189, (char*)0);
        }
        std::scoped_lock<std::mutex>::scoped_lock(local_30, (mutex*)&field_1448);
        (field_1216, (Array*)&param_1->field_56, param_3)->SetMidi();
        cVar1 = param_3->IsRaised();
        if (cVar1 == '\0') {
            field_1208 = 1;
            field_1404 = 0;
            field_1400 = param_2;
            field_1440 = 1;
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_30);
    }

    // 0x1002d2830, 96 bytes, placed by class name
    // MidiPlayer::QueueStopFile()
    void MidiPlayer::QueueStopFile() {
        undefined8 uVar2;

        uVar2 = std::this_thread::get_id();
        if (std::operator==(uVar2, sound::g_idMainThread) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("std::this_thread::get_id() == sound::g_idMainThread",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                      "midiplayer.cpp",
                      205, (char*)0);
        }
        field_1404 = 1;
        field_1440 = 0;
    }

    // 0x1002d28a0, 96 bytes, placed by class name
    // MidiPlayer::IsPlayingFile()
    bool MidiPlayer::IsPlayingFile() {
        undefined8 uVar2;

        uVar2 = std::this_thread::get_id();
        if (std::operator==(uVar2, sound::g_idMainThread) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("std::this_thread::get_id() == sound::g_idMainThread",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                      "midiplayer.cpp",
                      214, (char*)0);
        }
        return field_1440 != 0;
    }

    // 0x1002d2910, 96 bytes, placed by class name
    // MidiPlayer::HasPatchesLoaded()
    ulong MidiPlayer::HasPatchesLoaded() {
        undefined8 uVar2;
        ulong uVar3;

        uVar2 = std::this_thread::get_id();
        if (std::operator==(uVar2, sound::g_idMainThread) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("std::this_thread::get_id() == sound::g_idMainThread",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                      "midiplayer.cpp",
                      221, (char*)0);
        }
        uVar3 = field_296->empty();
        return uVar3 ^ 1;
    }

    // 0x1002d2980, 512 bytes, placed by class name
    // MidiPlayer::PullXferStateIntoWorker()
    void MidiPlayer::PullXferStateIntoWorker() {
        undefined1* this_00;
        int iVar1;
        int* piVar3;
        int* piVar4;
        int iVar5;
        scoped_lock<std::mutex> local_30[8];

        field_416 = m_globalVolume;
        field_424 = field_1204 != 0;
        if (((field_1208 != 0) || (field_1404 != 0)) || (field_1408 != 0)) {
            std::scoped_lock<std::mutex>::scoped_lock(local_30, (mutex*)&field_1448);
            if (field_1404 == 0) {
                if (field_1208 != 0) {
                    field_1208 = 0;
                    this_00 = field_67048;
                    this_00->DropMidi();
                    Reset2(this);
                    std::swap<MidiParser>((MidiParser*)this_00, (MidiParser*)field_1216);
                    field_67232 = field_1400;
                    field_67248 = 0;
                    iVar1 = this_00->NumTracks();
                    if (0 < iVar1) {
                        iVar5 = 0;
                        do {
                            this_00->SetTrack(iVar5);
                            this_00->ProcessDeltaTime(iVar5);
                            this_00->UnsetTrack(iVar5);
                            iVar5 = iVar5 + 1;
                        } while (iVar1 != iVar5);
                    }
                    iVar1 = this_00->NextTrackToPlay();
                    field_67236 = iVar1;
                    piVar3 = (int*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)(field_67048 + 40), (long)iVar1);
                    iVar1 = *piVar3;
                    field_67240 = iVar1;
                    field_67256 = this_00->TimeFromTick(iVar1);
                }
            } else {
                field_67048->DropMidi();
                Reset2(this);
                field_1208 = 0;
                field_1404 = 0;
            }
            if (field_1408 != 0) {
                piVar3 = (int*)(&field_1416)->HeapBeginPtr();
                piVar4 = (int*)(&field_1416)->end();
                for (; piVar3 != piVar4; piVar3 = piVar3 + 2) {
                    SetDefInst2(this, *piVar3, piVar3[1]);
                }
                eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
                field_1408 = 0;
            }
            std::scoped_lock<std::mutex>::~scoped_lock(local_30);
        }
    }

    // 0x1002d2bf0, 192 bytes, placed by class name
    // MidiPlayer::SetDefInst2(int, int)
    void MidiPlayer::SetDefInst2(int param_1, int param_2) {
        undefined8 uVar1;
        char cVar2;
        undefined8 uVar3;
        int* piVar4;
        uint* puVar5;
        undefined8 local_30;

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
                          "midiplayer.cpp",
                          384, (char*)0);
            }
        }
        piVar4 = (int*)std::array<int, 16ul>::operator[]((array<int, 16ul>*)&field_620, (long)param_1);
        *piVar4 = param_2;
        puVar5 = (uint*)std::array<int, 16ul>::operator[]((array<int, 16ul>*)&field_748, (long)param_1);
        *puVar5 = param_2 & 4294967168;
        SetInst2(this, param_1, param_2);
    }

    // 0x1002d2cb0, 192 bytes, placed by class name
    // MidiPlayer::QueueSetDefInst(int, int)
    void MidiPlayer::QueueSetDefInst(int param_1, int param_2) {
        int iVar2;
        undefined8 uVar3;
        undefined8 local_30;
        scoped_lock<std::mutex> local_28[8];
        int local_20;
        int local_1c;

        local_20 = param_1;
        local_1c = param_2;
        uVar3 = std::this_thread::get_id();
        if (std::operator==(uVar3, sound::g_idMainThread) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("std::this_thread::get_id() == sound::g_idMainThread",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                      "midiplayer.cpp",
                      277, (char*)0);
        }
        std::scoped_lock<std::mutex>::scoped_lock(local_28, (mutex*)&field_1448);
        local_30 = std::make_pair<int&, int&>(&local_20, &local_1c);
        (&field_1416, (pair*)&local_30)->push_back();
        iVar2 = (&field_1416)->size();
        field_1408 = iVar2;
        std::scoped_lock<std::mutex>::~scoped_lock(local_28);
    }

    // 0x1002d2e10, 176 bytes, placed by class name
    // MidiPlayer::SetInst(int, int)
    void MidiPlayer::SetInst(int param_1, int param_2) {
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                        "midiplayer.cpp",
                        285, "didn\'t think this was used");
    }

    // 0x1002d2ec0, 272 bytes, placed by class name
    // MidiPlayer::SetInst2(int, int)
    void MidiPlayer::SetInst2(int param_1, int param_2) {
        undefined8 uVar1;
        char cVar2;
        undefined8 uVar3;
        int* piVar4;
        array<shared_ptr<MidiNote>, 128ul>* this_00;
        shared_ptr<MidiNote>* this_01;
        ulong uVar5;
        shared_ptr local_40;
        undefined8 local_30;

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
                          "midiplayer.cpp",
                          392, (char*)0);
            }
        }
        piVar4 = (int*)std::array<int, 16ul>::operator[]((array<int, 16ul>*)&field_684, (long)param_1);
        if (*piVar4 != param_2) {
            *piVar4 = param_2;
            uVar5 = 0;
            do {
                new (&local_40) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                this_00 = (array<shared_ptr<MidiNote>, 128ul>*)
                    std::array<std::array<shared_ptr<MidiNote>, 128ul>, 16ul>::operator[](
                        (array<std::array<shared_ptr<MidiNote>, 128ul>, 16ul>*)&field_34280, (long)param_1);
                this_01 = (shared_ptr<MidiNote>*)std::array<shared_ptr<MidiNote>, 128ul>::operator[](this_00, uVar5);
                shared_ptr<MidiNote>::operator=(this_01, &local_40);
                local_40.~shared_ptr();
                uVar5 = uVar5 + 1;
            } while (uVar5 != 128);
        }
    }

    // 0x1002d2fd0, 144 bytes, placed by class name
    // MidiPlayer::PlayNote(int, int, int)
    void MidiPlayer::PlayNote(int param_1, int param_2, int param_3) {
        undefined8 uVar1;
        char cVar2;
        undefined8 in_RAX;
        undefined8 uVar3;
        undefined8 local_38;

        local_38 = in_RAX;
        uVar3 = std::this_thread::get_id();
        uVar1 = sound::g_idWorkerThread;
        cVar2 = std::operator==(uVar3, sound::g_idWorkerThread);
        if (cVar2 == '\0') {
            new (&local_38) std::__thread_id();
            cVar2 = std::operator==(uVar1, local_38);
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midiplayer.cpp",
                          293, (char*)0);
            }
        }
        PlayNote2(this, param_1, param_2, param_3);
    }

    // 0x1002d3060, 1616 bytes, placed by class name
    // MidiPlayer::PlayNote2(int, int, int)
    void MidiPlayer::PlayNote2(int param_1, int param_2, int param_3) {
        undefined8 uVar1;
        char cVar2;
        bool bVar3;
        int iVar4;
        int iVar5;
        undefined8 uVar6;
        byte* pbVar7;
        long lVar8;
        shared_ptr* psVar9;
        array<shared_ptr<MidiNote>, 128ul>* paVar10;
        shared_ptr<MidiNote>* psVar11;
        int* piVar12;
        MidiNote* pMVar13;
        char* pcVar14;
        ushort* puVar15;
        WaveStream* pWVar16;
        undefined2* puVar17;
        short* psVar18;
        array<shared_ptr<MidiNote>, 128ul>* this_00;
        int iVar19;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        ulong uVar20;
        Array<short, eastl::allocator>* this_01;
        undefined1 auVar21[16];
        undefined8 local_98;
        undefined1 local_90[16];
        shared_ptr local_80;
        shared_ptr local_70;
        shared_ptr local_58;
        ulong local_40;
        MidiPlayer* local_38;

        uVar6 = std::this_thread::get_id();
        uVar1 = sound::g_idWorkerThread;
        cVar2 = std::operator==(uVar6, sound::g_idWorkerThread);
        if (cVar2 == '\0') {
            new (&local_98) std::__thread_id();
            cVar2 = std::operator==(uVar1, local_98);
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midiplayer.cpp",
                          406, (char*)0);
            }
        }
        iVar4 = param_1;
        StopNote2((int)this, param_1, param_2);
        uVar20 = (ulong)iVar4;
        pbVar7 = (byte*)std::array<int, 16ul>::operator[]((array<int, 16ul>*)&field_104, uVar20);
        if ((*pbVar7 & 2) != 0) {
            local_40 = uVar20;
            local_38 = this;
            lVar8 = shared_ptr<MidiMixer>::operator->((shared_ptr<MidiMixer>*)&field_67264);
            local_90 = ((lVar8 + 72))->ptrs();
            local_70._0_8_ = local_90->begin();
            auVar21 = local_90->second();
            local_58._0_8_ = *auVar21._0_8_;
            bVar3 = eastl::operator!=((eastl*)&local_70, (hashtable_iterator_base*)&local_58, auVar21._8_8_);
            if (bVar3) {
                do {
                    psVar9 = (shared_ptr*)SharedPtrList<MidiNote>::ptr_iterator::operator*((ptr_iterator*)&local_70);
                    lVar8 = psVar9->end();
                    if ((*(int*)(lVar8 + 32) == param_1) && (*(int*)(lVar8 + 132) < 0)) {
                        new (&local_80) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                        paVar10 = (array<shared_ptr<MidiNote>, 128ul>*)
                            std::array<std::array<shared_ptr<MidiNote>, 128ul>, 16ul>::operator[](
                                (array<std::array<shared_ptr<MidiNote>, 128ul>, 16ul>*)&local_38->field_1512, local_40);
                        psVar11 = (shared_ptr<MidiNote>*)std::array<shared_ptr<MidiNote>, 128ul>::operator[](
                            paVar10, (long)*(int*)(lVar8 + 92));
                        shared_ptr<MidiNote>::operator=(psVar11, &local_80);
                        local_80.~shared_ptr();
                        iVar5 = param_2;
                        psVar11 = (shared_ptr<MidiNote>*)std::array<shared_ptr<MidiNote>, 128ul>::operator[](
                            paVar10, (long)param_2);
                        shared_ptr<MidiNote>::operator=(psVar11, psVar9);
                        iVar4 = *(int*)(lVar8 + 108);
                        iVar19 = (iVar5 - *(int*)(lVar8 + 92)) * 256 + iVar4;
                        *(int*)(lVar8 + 108) = iVar19;
                        *(int*)(lVar8 + 112) = ((*(int*)(lVar8 + 116) * *(int*)(lVar8 + 112) >> 12) + iVar4) - iVar19;
                        *(undefined4*)(lVar8 + 116) = 4096;
                        *(int*)(lVar8 + 92) = iVar5;
                        return;
                    }
                    SharedPtrList<rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>::obj_iterator::operator++(
                        (obj_iterator*)&local_70);
                    bVar3 = eastl::operator!=((eastl*)&local_70, (hashtable_iterator_base*)&local_58, extraout_RDX);
                } while (bVar3);
            }
            this = local_38;
            uVar20 = local_40;
        }
        std::array<int, 16ul>::operator[]((array<int, 16ul>*)&field_684, uVar20);
        eastl::hashtable<int, eastl::pair<int const, shared_ptr<ChatLine>>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, shared_ptr<ChatLine>>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::find((int*)local_90);
        eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        bVar3 = eastl::operator==((eastl*)local_90, (hashtable_iterator_base*)&local_80, extraout_RDX_00);
        if (!bVar3) {
            lVar8 = local_90->HeapBeginPtr();
            piVar12 = (int*)shared_ptr<Patch>::operator*((shared_ptr<Patch>*)(lVar8 + 8));
            iVar4 = param_2;
            local_38 = (MidiPlayer*)(long)param_2;
            Array<sound::LazyWave, eastl::allocator>::operator[](
                (Array<sound::LazyWave, eastl::allocator>*)(piVar12 + 2), (ulong)local_38);
            local_80.Get();
            bVar3 = operator==(&local_80, (_func_decltype_nullptr*)0);
            if (!bVar3) {
                local_40 = uVar20;
                make_shared<MidiNote>((jag*)&local_70);
                pMVar13 = (MidiNote*)local_70.end();
                pMVar13->field_32 = param_1;
                lVar8 = local_90->HeapBeginPtr();
                shared_ptr<Patch>::operator=((shared_ptr<Patch>*)&pMVar13->field_40, (shared_ptr*)(lVar8 + 8));
                shared_ptr<sound::Wave>::operator=((shared_ptr<sound::Wave>*)&pMVar13->field_56, &local_80);
                psVar9 = (shared_ptr*)Array<shared_ptr<EnvelopeSet>, eastl::allocator>::operator[](
                    (Array<shared_ptr<EnvelopeSet>, eastl::allocator>*)(piVar12 + 26), (ulong)local_38);
                shared_ptr<EnvelopeSet>::operator=((shared_ptr<EnvelopeSet>*)&pMVar13->field_72, psVar9);
                pcVar14 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)(piVar12 + 32), (ulong)local_38);
                *(int*)&pMVar13->field_88 = (int)*pcVar14;
                *(int*)((long)&pMVar13->field_88 + 4) = iVar4;
                *(int*)&pMVar13->field_96 = param_3;
                iVar5 = *piVar12;
                pcVar14 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)(piVar12 + 14), (ulong)local_38);
                *(int*)((long)&pMVar13->field_96 + 4) = (int)*pcVar14 * param_3 * param_3 * iVar5 + 1024 >> 11;
                pbVar7 = (byte*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)(piVar12 + 20), (ulong)local_38);
                *(uint*)&pMVar13->field_104 = (uint)*pbVar7;
                this_01 = (Array<short, eastl::allocator>*)(piVar12 + 8);
                puVar15 = (ushort*)Array<short, eastl::allocator>::operator[](this_01, (ulong)local_38);
                *(uint*)((long)&pMVar13->field_104 + 4) = iVar4 * 256 - (*puVar15 & 32767);
                pMVar13->field_120 = 0;
                *(undefined8*)&pMVar13->field_128 = 18446744069414584320;
                *(undefined4*)((long)&pMVar13->field_132 + 4) = 0;
                piVar12 = (int*)std::array<int, 16ul>::operator[]((array<int, 16ul>*)&field_168, local_40);
                if (*piVar12 == 0) {
                    iVar4 = GetRateRaw(this, pMVar13);
                    iVar5 = GetVolume(this, pMVar13);
                    iVar19 = GetPan(this, pMVar13);
                    local_58.NewRateRawFineVolPan(&local_80, iVar4, iVar5, iVar19);
                    pWVar16 = (WaveStream*)local_58.release();
                    shared_ptr<sound::WaveStream>::reset<sound::WaveStream, void>(
                        (shared_ptr<sound::WaveStream>*)&pMVar13->field_152, pWVar16);
                    local_58.~unique_ptr();
                } else {
                    iVar4 = GetRateRaw(this, pMVar13);
                    iVar5 = GetPan(this, pMVar13);
                    local_58.NewRateRawFineVolPan(&local_80, iVar4, 0, iVar5);
                    pWVar16 = (WaveStream*)local_58.release();
                    shared_ptr<sound::WaveStream>::reset<sound::WaveStream, void>(
                        (shared_ptr<sound::WaveStream>*)&pMVar13->field_152, pWVar16);
                    puVar17 = (undefined2*)Array<short, eastl::allocator>::operator[](this_01, (ulong)local_38);
                    SetSampleOffset(this, pMVar13, SUB21((ushort)*puVar17 >> 15, 0));
                    local_58.~unique_ptr();
                }
                psVar18 = (short*)Array<short, eastl::allocator>::operator[](this_01, (ulong)local_38);
                if (*psVar18 < 0) {
                    pWVar16 = (WaveStream*)shared_ptr<sound::WaveStream>::operator->(
                        (shared_ptr<sound::WaveStream>*)&pMVar13->field_152);
                    pWVar16->SetLoopCount(-1);
                }
                iVar4 = *(int*)&pMVar13->field_88;
                if (-1 < (long)iVar4) {
                    paVar10 = (array<shared_ptr<MidiNote>, 128ul>*)
                        std::array<std::array<shared_ptr<MidiNote>, 128ul>, 16ul>::operator[](
                            (array<std::array<shared_ptr<MidiNote>, 128ul>, 16ul>*)&field_34280, local_40);
                    psVar9 = (shared_ptr*)std::array<shared_ptr<MidiNote>, 128ul>::operator[](paVar10, (long)iVar4);
                    bVar3 = operator!=(psVar9, (_func_decltype_nullptr*)0);
                    if (bVar3) {
                        lVar8 = shared_ptr<MidiNote>::operator->((shared_ptr<MidiNote>*)psVar9);
                        if (*(int*)(lVar8 + 132) < 0) {
                            new (&local_58) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                            lVar8 = shared_ptr<MidiNote>::operator->((shared_ptr<MidiNote>*)psVar9);
                            this_00 = (array<shared_ptr<MidiNote>, 128ul>*)
                                std::array<std::array<shared_ptr<MidiNote>, 128ul>, 16ul>::operator[](
                                    (array<std::array<shared_ptr<MidiNote>, 128ul>, 16ul>*)&field_1512, local_40);
                            psVar11 = (shared_ptr<MidiNote>*)std::array<shared_ptr<MidiNote>, 128ul>::operator[](
                                this_00, (long)*(int*)(lVar8 + 92));
                            shared_ptr<MidiNote>::operator=(psVar11, &local_58);
                            local_58.~shared_ptr();
                            lVar8 = shared_ptr<MidiNote>::operator->((shared_ptr<MidiNote>*)psVar9);
                            *(undefined4*)(lVar8 + 132) = 0;
                        }
                    }
                    psVar11 = (shared_ptr<MidiNote>*)std::array<shared_ptr<MidiNote>, 128ul>::operator[](
                        paVar10, (long)*(int*)&pMVar13->field_88);
                    shared_ptr<MidiNote>::operator=(psVar11, &local_70);
                }
                lVar8 = shared_ptr<MidiMixer>::operator->((shared_ptr<MidiMixer>*)&field_67264);
                ((lVar8 + 72))->push_back(&local_70);
                paVar10 = (array<shared_ptr<MidiNote>, 128ul>*)
                    std::array<std::array<shared_ptr<MidiNote>, 128ul>, 16ul>::operator[](
                        (array<std::array<shared_ptr<MidiNote>, 128ul>, 16ul>*)&field_1512, local_40);
                psVar11 = (shared_ptr<MidiNote>*)std::array<shared_ptr<MidiNote>, 128ul>::operator[](paVar10,
                                                                                                     (ulong)local_38);
                shared_ptr<MidiNote>::operator=(psVar11, &local_70);
                local_70.~shared_ptr();
            }
            local_80.~shared_ptr();
        }
    }

    // 0x1002d36b0, 144 bytes, placed by class name
    // MidiPlayer::StopNote(int, int, int)
    void MidiPlayer::StopNote(int param_1, int param_2, int param_3) {
        undefined8 uVar1;
        char cVar2;
        undefined8 uVar3;
        undefined8 local_30;

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
                          "midiplayer.cpp",
                          300, (char*)0);
            }
        }
        StopNote2(param_1, param_2, param_3);
    }

    // 0x1002d3740, 464 bytes, placed by class name
    // MidiPlayer::StopNote2(int, int, int)
    void MidiPlayer::StopNote2(int param_1, int param_2, int param_3) {
        undefined8 uVar1;
        char cVar2;
        bool bVar3;
        undefined8 uVar4;
        array<shared_ptr<MidiNote>, 128ul>* this;
        shared_ptr* this_00;
        long lVar5;
        byte* pbVar6;
        long lVar7;
        hashtable_iterator_base* extraout_RDX;
        undefined4 in_register_0000003c;
        undefined1 auVar8[16];
        undefined8 local_60;
        shared_ptr local_58;
        undefined8 local_48;
        shared_ptr local_40;

        lVar7 = CONCAT44(in_register_0000003c, param_1);
        uVar4 = std::this_thread::get_id();
        uVar1 = sound::g_idWorkerThread;
        cVar2 = std::operator==(uVar4, sound::g_idWorkerThread);
        if (cVar2 == '\0') {
            new (&local_60) std::__thread_id();
            cVar2 = std::operator==(uVar1, local_60);
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midiplayer.cpp",
                          501, (char*)0);
            }
        }
        this =
            (array<shared_ptr<MidiNote>, 128ul>*)std::array<std::array<shared_ptr<MidiNote>, 128ul>, 16ul>::operator[](
                (array<std::array<shared_ptr<MidiNote>, 128ul>, 16ul>*)(lVar7 + 1512), (long)param_2);
        this_00 = (shared_ptr*)std::array<shared_ptr<MidiNote>, 128ul>::operator[](this, (long)param_3);
        new (&local_58) shared_ptr<dash3d::Decor>(this_00);
        bVar3 = operator==(&local_58, (_func_decltype_nullptr*)0);
        if (!bVar3) {
            lVar5 = local_58.end();
            new (&local_40) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            shared_ptr<MidiNote>::operator=((shared_ptr<MidiNote>*)this_00, &local_40);
            local_40.~shared_ptr();
            pbVar6 = (byte*)std::array<int, 16ul>::operator[]((array<int, 16ul>*)(lVar7 + 104), (long)param_2);
            if ((*pbVar6 & 2) == 0) {
            LAB_1002d38b6:
                *(undefined4*)(lVar5 + 132) = 0;
            } else {
                lVar7 = shared_ptr<MidiMixer>::operator->((shared_ptr<MidiMixer>*)(lVar7 + 67264));
                local_40._0_8_ = ((lVar7 + 72))->begin_ptrs();
                auVar8 = ((lVar7 + 72))->end();
                local_48 = auVar8._0_8_;
                bVar3 = eastl::operator!=((eastl*)&local_40, (hashtable_iterator_base*)&local_48, auVar8._8_8_);
                if (bVar3) {
                    do {
                        lVar7 = local_40.HeapBeginPtr();
                        if (((*(int*)(lVar7 + 32) == *(int*)(lVar5 + 32)) && (*(int*)(lVar7 + 132) < 0)) &&
                            (lVar7 != lVar5))
                            goto LAB_1002d38b6;
                        SharedPtrList<rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>::obj_iterator::
                        operator++((obj_iterator*)&local_40);
                        bVar3 = eastl::operator!=((eastl*)&local_40, (hashtable_iterator_base*)&local_48, extraout_RDX);
                    } while (bVar3);
                }
            }
        }
        local_58.~shared_ptr();
    }

    // 0x1002d3910, 112 bytes, placed by class name
    // MidiPlayer::AfterTouch(int, int, int)
    void MidiPlayer::AfterTouch(int param_1, int param_2, int param_3) {
        char cVar1;
        int in_EAX;
        int iVar2;
        int extraout_EDX;
        int extraout_EDX_00;
        int iVar3;
        int iVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        int local_18[2];

        local_18[0] = in_EAX;
        iVar2 = std::this_thread::get_id();
        uVar6 = sound::g_idWorkerThread;
        uVar5 = sound::g_idWorkerThread;
        cVar1 = std::operator==();
        iVar4 = (int)uVar5;
        iVar3 = extraout_EDX;
        if (cVar1 == '\0') {
            new (local_18) std::__thread_id();
            iVar4 = local_18[0];
            cVar1 = std::operator==();
            iVar2 = (int)uVar6;
            iVar3 = extraout_EDX_00;
            if (cVar1 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midiplayer.cpp",
                          307, (char*)0);
            }
        }
        AfterTouch2(iVar2, iVar4, iVar3);
    }

    // 0x1002d3980, 112 bytes, placed by class name
    // MidiPlayer::AfterTouch2(int, int, int)
    void MidiPlayer::AfterTouch2(int param_1, int param_2, int param_3) {
        undefined8 uVar1;
        char cVar2;
        undefined8 in_RAX;
        undefined8 uVar3;
        undefined8 local_18;

        local_18 = in_RAX;
        uVar3 = std::this_thread::get_id();
        uVar1 = sound::g_idWorkerThread;
        cVar2 = std::operator==(uVar3, sound::g_idWorkerThread);
        if (cVar2 == '\0') {
            new (&local_18) std::__thread_id();
            cVar2 = std::operator==(uVar1, local_18);
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midiplayer.cpp",
                          534, (char*)0);
            }
        }
    }

    // 0x1002d39f0, 112 bytes, placed by class name
    // MidiPlayer::ChannelPressure(int, int)
    void MidiPlayer::ChannelPressure(int param_1, int param_2) {
        char cVar1;
        int in_EAX;
        int iVar2;
        int iVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        int local_18[2];

        local_18[0] = in_EAX;
        iVar2 = std::this_thread::get_id();
        uVar5 = sound::g_idWorkerThread;
        uVar4 = sound::g_idWorkerThread;
        cVar1 = std::operator==();
        iVar3 = (int)uVar4;
        if (cVar1 == '\0') {
            new (local_18) std::__thread_id();
            iVar3 = local_18[0];
            cVar1 = std::operator==();
            iVar2 = (int)uVar5;
            if (cVar1 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midiplayer.cpp",
                          314, (char*)0);
            }
        }
        ChannelPressure2(iVar2, iVar3);
    }

    // 0x1002d3a60, 112 bytes, placed by class name
    // MidiPlayer::ChannelPressure2(int, int)
    void MidiPlayer::ChannelPressure2(int param_1, int param_2) {
        undefined8 uVar1;
        char cVar2;
        undefined8 in_RAX;
        undefined8 uVar3;
        undefined8 local_18;

        local_18 = in_RAX;
        uVar3 = std::this_thread::get_id();
        uVar1 = sound::g_idWorkerThread;
        cVar2 = std::operator==(uVar3, sound::g_idWorkerThread);
        if (cVar2 == '\0') {
            new (&local_18) std::__thread_id();
            cVar2 = std::operator==(uVar1, local_18);
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midiplayer.cpp",
                          540, (char*)0);
            }
        }
    }

    // 0x1002d3ad0, 144 bytes, placed by class name
    // MidiPlayer::PitchWheel(int, int)
    void MidiPlayer::PitchWheel(int param_1, int param_2) {
        undefined8 uVar1;
        char cVar2;
        undefined8 uVar3;
        undefined8 local_30;

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
                          "midiplayer.cpp",
                          321, (char*)0);
            }
        }
        PitchWheel2(this, param_1, param_2);
    }

    // 0x1002d3b60, 144 bytes, placed by class name
    // MidiPlayer::PitchWheel2(int, int)
    void MidiPlayer::PitchWheel2(int param_1, int param_2) {
        undefined8 uVar1;
        char cVar2;
        undefined8 uVar3;
        int* piVar4;
        undefined8 local_30;

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
                          "midiplayer.cpp",
                          546, (char*)0);
            }
        }
        piVar4 = (int*)std::array<int, 16ul>::operator[]((array<int, 16ul>*)&field_812, (long)param_1);
        *piVar4 = param_2;
    }

    // 0x1002d3bf0, 128 bytes, placed by class name
    // MidiPlayer::AllSoundOff(int)
    void MidiPlayer::AllSoundOff(int param_1) {
        undefined8 uVar1;
        char cVar2;
        undefined8 in_RAX;
        undefined8 uVar3;
        undefined8 local_28;

        local_28 = in_RAX;
        uVar3 = std::this_thread::get_id();
        uVar1 = sound::g_idWorkerThread;
        cVar2 = std::operator==(uVar3, sound::g_idWorkerThread);
        if (cVar2 == '\0') {
            new (&local_28) std::__thread_id();
            cVar2 = std::operator==(uVar1, local_28);
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midiplayer.cpp",
                          328, (char*)0);
            }
        }
        AllSoundOff2(this, param_1);
    }

    // 0x1002d3c70, 624 bytes, placed by class name
    // MidiPlayer::AllSoundOff2(int)
    void MidiPlayer::AllSoundOff2(int param_1) {
        undefined1* this_00;
        undefined8 uVar1;
        char cVar2;
        bool bVar3;
        undefined8 uVar4;
        long lVar5;
        Linkable<MidiNote>* this_01;
        WaveStream* pWVar6;
        array<shared_ptr<MidiNote>, 128ul>* this_02;
        shared_ptr<MidiNote>* this_03;
        hashtable_iterator_base* extraout_RDX;
        shared_ptr* this_04;
        undefined1 auVar7[16];
        undefined8 local_80;
        Vector2T<int> local_78[8];
        shared_ptr local_70;
        Mixer* local_60;
        shared_ptr<MidiMixer>* local_58;
        undefined8 local_50;
        undefined8 local_48;
        MidiPlayer* local_40;

        local_40 = this;
        uVar4 = std::this_thread::get_id();
        uVar1 = sound::g_idWorkerThread;
        cVar2 = std::operator==(uVar4, sound::g_idWorkerThread);
        if (cVar2 == '\0') {
            new (&local_80) std::__thread_id();
            cVar2 = std::operator==(uVar1, local_80);
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midiplayer.cpp",
                          552, (char*)0);
            }
        }
        this_00 = &local_40->field_67264;
        lVar5 = shared_ptr<MidiMixer>::operator->((shared_ptr<MidiMixer>*)this_00);
        local_50 = ((lVar5 + 72))->begin_ptrs();
        jag::math::Vector2T<int>::Vector2T(local_78);
        local_58 = (shared_ptr<MidiMixer>*)this_00;
        lVar5 = shared_ptr<MidiMixer>::operator->((shared_ptr<MidiMixer>*)this_00);
        auVar7 = ((lVar5 + 72))->end();
        local_48 = auVar7._0_8_;
        bVar3 = eastl::operator!=((eastl*)&local_50, (hashtable_iterator_base*)&local_48, auVar7._8_8_);
        if (bVar3) {
            local_40 = (MidiPlayer*)&local_40->field_1512;
            do {
                local_70._0_8_ = local_50.next();
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
                    (rbtree_iterator*)&local_70);
                this_01 = (Linkable<MidiNote>*)local_50.HeapBeginPtr();
                if ((param_1 < 0) || (*(int*)(this_01 + 32) == param_1)) {
                    this_04 = (shared_ptr*)(this_01 + 152);
                    bVar3 = operator!=(this_04, (_func_decltype_nullptr*)0);
                    if (bVar3) {
                        pWVar6 = (WaveStream*)shared_ptr<sound::WaveStream>::operator->(
                            (shared_ptr<sound::WaveStream>*)this_04);
                        pWVar6->RampOut(sound::PCMPlayer::m_frequency / 100);
                        pWVar6 = (WaveStream*)shared_ptr<sound::WaveStream>::operator->(
                            (shared_ptr<sound::WaveStream>*)this_04);
                        cVar2 = pWVar6->Isramping();
                        if (cVar2 != '\0') {
                            lVar5 = shared_ptr<MidiMixer>::operator->(local_58);
                            local_60 = (Mixer*)(lVar5 + 96);
                            new (&local_70) shared_ptr<dash3d::Decor>(this_04);
                            local_60->PlayStream(&local_70);
                            local_70.~shared_ptr();
                        }
                        this_01->~AutoSingleton();
                    }
                    if (*(int*)(this_01 + 132) < 0) {
                        new (&local_70) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                        this_02 = (array<shared_ptr<MidiNote>, 128ul>*)
                            std::array<std::array<shared_ptr<MidiNote>, 128ul>, 16ul>::operator[](
                                (array<std::array<shared_ptr<MidiNote>, 128ul>, 16ul>*)local_40,
                                (long)*(int*)(this_01 + 32));
                        this_03 = (shared_ptr<MidiNote>*)std::array<shared_ptr<MidiNote>, 128ul>::operator[](
                            this_02, (long)*(int*)(this_01 + 92));
                        shared_ptr<MidiNote>::operator=(this_03, &local_70);
                        local_70.~shared_ptr();
                    }
                    this_01->Unlink();
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
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_50,
                    (rbtree_iterator*)local_78);
                bVar3 = eastl::operator!=((eastl*)&local_50, (hashtable_iterator_base*)&local_48, extraout_RDX);
            } while (bVar3);
        }
    }

    // 0x1002d3ee0, 128 bytes, placed by class name
    // MidiPlayer::AllControllersOff(int)
    void MidiPlayer::AllControllersOff(int param_1) {
        undefined8 uVar1;
        char cVar2;
        undefined8 in_RAX;
        undefined8 uVar3;
        undefined8 local_28;

        local_28 = in_RAX;
        uVar3 = std::this_thread::get_id();
        uVar1 = sound::g_idWorkerThread;
        cVar2 = std::operator==(uVar3, sound::g_idWorkerThread);
        if (cVar2 == '\0') {
            new (&local_28) std::__thread_id();
            cVar2 = std::operator==(uVar1, local_28);
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midiplayer.cpp",
                          335, (char*)0);
            }
        }
        AllControllersOff2(this, param_1);
    }

    // 0x1002d3f60, 416 bytes, placed by class name
    // MidiPlayer::AllControllersOff2(int)
    void MidiPlayer::AllControllersOff2(int param_1) {
        undefined8 uVar1;
        char cVar2;
        undefined8 uVar3;
        undefined4* puVar4;
        int iVar5;
        undefined8 local_30;

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
                          "midiplayer.cpp",
                          580, (char*)0);
            }
        }
        if (param_1 < 0) {
            iVar5 = 0;
            do {
                AllControllersOff2(this, iVar5);
                iVar5 = iVar5 + 1;
            } while (iVar5 != 16);
        } else {
            puVar4 = (undefined4*)std::array<int, 16ul>::operator[]((array<int, 16ul>*)&field_428, (ulong)param_1);
            *puVar4 = 12800;
            puVar4 = (undefined4*)std::array<int, 16ul>::operator[]((array<int, 16ul>*)&field_492, (ulong)param_1);
            *puVar4 = 8192;
            puVar4 = (undefined4*)std::array<int, 16ul>::operator[]((array<int, 16ul>*)&field_556, (ulong)param_1);
            *puVar4 = 16383;
            puVar4 = (undefined4*)std::array<int, 16ul>::operator[]((array<int, 16ul>*)&field_812, (ulong)param_1);
            *puVar4 = 8192;
            puVar4 = (undefined4*)std::array<int, 16ul>::operator[]((array<int, 16ul>*)&field_876, (ulong)param_1);
            *puVar4 = 0;
            puVar4 = (undefined4*)std::array<int, 16ul>::operator[]((array<int, 16ul>*)&field_940, (ulong)param_1);
            *puVar4 = 8192;
            CleanPorta(this, param_1);
            CleanRetrig(this, param_1);
            puVar4 = (undefined4*)std::array<int, 16ul>::operator[]((array<int, 16ul>*)&field_104, (ulong)param_1);
            *puVar4 = 0;
            puVar4 = (undefined4*)std::array<int, 16ul>::operator[]((array<int, 16ul>*)&field_1004, (ulong)param_1);
            *puVar4 = 32767;
            puVar4 = (undefined4*)std::array<int, 16ul>::operator[]((array<int, 16ul>*)&field_1068, (ulong)param_1);
            *puVar4 = 256;
            puVar4 = (undefined4*)std::array<int, 16ul>::operator[]((array<int, 16ul>*)&field_168, (ulong)param_1);
            *puVar4 = 0;
            SetRetrigRate(this, param_1, 8192);
        }
    }

    // 0x1002d4100, 128 bytes, placed by class name
    // MidiPlayer::AllNotesOff(int)
    void MidiPlayer::AllNotesOff(int param_1) {
        undefined8 uVar1;
        char cVar2;
        undefined8 in_RAX;
        undefined8 uVar3;
        undefined8 local_28;

        local_28 = in_RAX;
        uVar3 = std::this_thread::get_id();
        uVar1 = sound::g_idWorkerThread;
        cVar2 = std::operator==(uVar3, sound::g_idWorkerThread);
        if (cVar2 == '\0') {
            new (&local_28) std::__thread_id();
            cVar2 = std::operator==(uVar1, local_28);
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midiplayer.cpp",
                          342, (char*)0);
            }
        }
        AllNotesOff2(this, param_1);
    }

    // 0x1002d4180, 432 bytes, placed by class name
    // MidiPlayer::AllNotesOff2(int)
    void MidiPlayer::AllNotesOff2(int param_1) {
        undefined8 uVar1;
        char cVar2;
        bool bVar3;
        undefined8 uVar4;
        long lVar5;
        MidiNote* pMVar6;
        array<shared_ptr<MidiNote>, 128ul>* this_00;
        shared_ptr<MidiNote>* this_01;
        hashtable_iterator_base* extraout_RDX;
        undefined1 auVar7[16];
        MidiNote local_110;
        shared_ptr local_60;
        undefined8 local_50;
        undefined8 local_48;
        undefined8 local_40;
        MidiPlayer* local_38;

        local_38 = this;
        uVar4 = std::this_thread::get_id();
        uVar1 = sound::g_idWorkerThread;
        cVar2 = std::operator==(uVar4, sound::g_idWorkerThread);
        if (cVar2 == '\0') {
            new (&local_50) std::__thread_id();
            cVar2 = std::operator==(uVar1, local_50);
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midiplayer.cpp",
                          607, (char*)0);
            }
        }
        lVar5 = shared_ptr<MidiMixer>::operator->((shared_ptr<MidiMixer>*)&local_38->field_67264);
        local_48 = ((lVar5 + 72))->begin_ptrs();
        auVar7 = ((lVar5 + 72))->end();
        local_40 = auVar7._0_8_;
        bVar3 = eastl::operator!=((eastl*)&local_48, (hashtable_iterator_base*)&local_40, auVar7._8_8_);
        if (bVar3) {
            local_38 = (MidiPlayer*)&local_38->field_1512;
            do {
                pMVar6 = (MidiNote*)local_48.HeapBeginPtr();
                new (&local_110) MidiNote(pMVar6);
                if (((param_1 < 0) || (local_110.field_32 == param_1)) && ((int)local_110.field_132 < 0)) {
                    new (&local_60) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                    this_00 = (array<shared_ptr<MidiNote>, 128ul>*)
                        std::array<std::array<shared_ptr<MidiNote>, 128ul>, 16ul>::operator[](
                            (array<std::array<shared_ptr<MidiNote>, 128ul>, 16ul>*)local_38, (long)local_110.field_32);
                    this_01 = (shared_ptr<MidiNote>*)std::array<shared_ptr<MidiNote>, 128ul>::operator[](
                        this_00, (long)local_110.field_88._4_4_);
                    shared_ptr<MidiNote>::operator=(this_01, &local_60);
                    local_60.~shared_ptr();
                    local_110.field_132._0_4_ = 0;
                }
                local_110.~MidiNote();
                SharedPtrList<rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>::obj_iterator::operator++(
                    (obj_iterator*)&local_48);
                bVar3 = eastl::operator!=((eastl*)&local_48, (hashtable_iterator_base*)&local_40, extraout_RDX);
            } while (bVar3);
        }
    }

    // 0x1002d4330, 128 bytes, placed by class name
    // MidiPlayer::Reset()
    void MidiPlayer::Reset() {
        undefined8 uVar1;
        char cVar2;
        undefined8 uVar3;
        undefined8 local_20;

        uVar3 = std::this_thread::get_id();
        uVar1 = sound::g_idWorkerThread;
        cVar2 = std::operator==(uVar3, sound::g_idWorkerThread);
        if (cVar2 == '\0') {
            new (&local_20) std::__thread_id();
            cVar2 = std::operator==(uVar1, local_20);
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midiplayer.cpp",
                          349, (char*)0);
            }
        }
        Reset2(this);
    }

    // 0x1002d43b0, 128 bytes, placed by class name
    // MidiPlayer::ProcessMidi(int)
    void MidiPlayer::ProcessMidi(int param_1) {
        undefined8 uVar1;
        char cVar2;
        undefined8 in_RAX;
        undefined8 uVar3;
        undefined8 local_28;

        local_28 = in_RAX;
        uVar3 = std::this_thread::get_id();
        uVar1 = sound::g_idWorkerThread;
        cVar2 = std::operator==(uVar3, sound::g_idWorkerThread);
        if (cVar2 == '\0') {
            new (&local_28) std::__thread_id();
            cVar2 = std::operator==(uVar1, local_28);
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midiplayer.cpp",
                          356, (char*)0);
            }
        }
        ProcessMidi2(this, param_1);
    }

    // 0x1002d4430, 4992 bytes, placed by class name
    // MidiPlayer::ProcessMidi2(int)
    void MidiPlayer::ProcessMidi2(int param_1) {
        char cVar1;
        int in_EAX;
        int iVar2;
        int* piVar3;
        byte* pbVar4;
        uint* puVar5;
        int extraout_EDX;
        int extraout_EDX_00;
        int iVar6;
        uint uVar7;
        int iVar8;
        undefined8 uVar9;
        undefined8 uVar10;
        array<int, 16ul>* paVar11;
        uint uVar12;
        uint uVar13;
        int local_38[2];

        local_38[0] = in_EAX;
        iVar2 = std::this_thread::get_id();
        uVar10 = sound::g_idWorkerThread;
        uVar9 = sound::g_idWorkerThread;
        cVar1 = std::operator==();
        iVar8 = (int)uVar9;
        iVar6 = extraout_EDX;
        if (cVar1 == '\0') {
            new (local_38) std::__thread_id();
            iVar8 = local_38[0];
            cVar1 = std::operator==();
            iVar2 = (int)uVar10;
            iVar6 = extraout_EDX_00;
            if (cVar1 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midiplayer.cpp",
                          675, (char*)0);
            }
        }
        switch ((param_1 & 240U) - 128 >> 4) {
        case 0:
            StopNote2((int)this, param_1 & 15, (uint)param_1 >> 8 & 127);
            break;
        case 1:
            uVar7 = (uint)param_1 >> 8 & 127;
            uVar12 = (uint)param_1 >> 16 & 127;
            if (uVar12 == 0) {
                StopNote2((int)this, param_1 & 15U, uVar7);
            } else {
                PlayNote2(this, param_1 & 15U, uVar7, uVar12);
            }
            break;
        case 2:
            AfterTouch2(iVar2, iVar8, iVar6);
            break;
        case 3:
            uVar7 = (uint)param_1 >> 8 & 127;
            if (123 < uVar7) {
                return;
            }
            uVar13 = param_1 & 15;
            uVar12 = (uint)param_1 >> 16 & 127;
            switch (uVar7) {
            case 0:
                puVar5 = (uint*)std::array<int, 16ul>::operator[]((array<int, 16ul>*)&field_748, (ulong)uVar13);
                uVar7 = *puVar5 & 4292886527;
                uVar12 = uVar12 << 14;
                goto LAB_1002d468b;
            case 1:
                paVar11 = (array<int, 16ul>*)&field_876;
                goto LAB_1002d4675;
            case 5:
                puVar5 = (uint*)std::array<int, 16ul>::operator[]((array<int, 16ul>*)&field_940, (ulong)uVar13);
                *puVar5 = uVar12 << 7 | *puVar5 & 4294951039;
                goto LAB_1002d4a85;
            case 6:
                goto switchD_1002d4557_caseD_6;
            case 7:
                puVar5 = (uint*)std::array<int, 16ul>::operator[]((array<int, 16ul>*)&field_428, (ulong)uVar13);
                *puVar5 = uVar12 << 7 | *puVar5 & 4294951039;
                goto LAB_1002d49dd;
            case 10:
                paVar11 = (array<int, 16ul>*)&field_492;
                goto LAB_1002d4650;
            case 11:
                paVar11 = (array<int, 16ul>*)&field_556;
            LAB_1002d4650:
                puVar5 = (uint*)std::array<int, 16ul>::operator[](paVar11, (ulong)uVar13);
                *puVar5 = uVar12 << 7 | *puVar5 & 4294951039;
            LAB_1002d4938:
                switch (uVar7) {
                case 6:
                switchD_1002d4557_caseD_6:
                    piVar3 = (int*)std::array<int, 16ul>::operator[]((array<int, 16ul>*)&field_1004, (ulong)uVar13);
                    if (*piVar3 == 16384) {
                        puVar5 =
                            (uint*)std::array<int, 16ul>::operator[]((array<int, 16ul>*)&field_1068, (ulong)uVar13);
                        *puVar5 = uVar12 << 7 | *puVar5 & 4294951039;
                    }
                LAB_1002d498e:
                    switch (uVar7) {
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
                    puVar5 = (uint*)std::array<int, 16ul>::operator[]((array<int, 16ul>*)&field_168, (ulong)uVar13);
                    *puVar5 = uVar12 << 7 | *puVar5 & 4294951039;
                LAB_1002d4a15:
                    if (48 < uVar7)
                        goto LAB_1002d4a46;
                    if (uVar7 != 17) {
                        if (uVar7 != 48) {
                            return;
                        }
                        goto switchD_1002d4557_caseD_30;
                    }
                case 17:
                switchD_1002d4557_caseD_11:
                    puVar5 = (uint*)std::array<int, 16ul>::operator[]((array<int, 16ul>*)&field_1132, (ulong)uVar13);
                    SetRetrigRate(this, uVar13, uVar12 << 7 | *puVar5 & 4294951039);
                    if (uVar7 != 49) {
                        return;
                    }
                    break;
                case 38:
                switchD_1002d4557_caseD_26:
                    piVar3 = (int*)std::array<int, 16ul>::operator[]((array<int, 16ul>*)&field_1004, (ulong)uVar13);
                    if (*piVar3 == 16384) {
                        puVar5 =
                            (uint*)std::array<int, 16ul>::operator[]((array<int, 16ul>*)&field_1068, (ulong)uVar13);
                        *puVar5 = *puVar5 & 4294967168 | uVar12;
                    }
                LAB_1002d49dd:
                    switch (uVar7) {
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
                    puVar5 = (uint*)std::array<int, 16ul>::operator[]((array<int, 16ul>*)&field_168, (ulong)uVar13);
                    *puVar5 = *puVar5 & 4294967168 | uVar12;
                    if (uVar7 == 17)
                        goto switchD_1002d4557_caseD_11;
                LAB_1002d4a46:
                    if (uVar7 != 49)
                        goto switchD_1002d4952_default;
                    break;
                case 49:
                    break;
                default:
                switchD_1002d4952_default:
                    if (uVar7 != 81) {
                        return;
                    }
                switchD_1002d4557_caseD_51:
                    if (uVar12 < 64) {
                        CleanRetrig(this, uVar13);
                        pbVar4 = (byte*)std::array<int, 16ul>::operator[]((array<int, 16ul>*)&field_104, (ulong)uVar13);
                        *pbVar4 = *pbVar4 & 251;
                    } else {
                        pbVar4 = (byte*)std::array<int, 16ul>::operator[]((array<int, 16ul>*)&field_104, (ulong)uVar13);
                        *pbVar4 = *pbVar4 | 4;
                    }
                LAB_1002d4a85:
                    if (uVar7 != 49) {
                        if (uVar7 != 17) {
                            return;
                        }
                        goto switchD_1002d4557_caseD_11;
                    }
                }
            case 49:
            switchD_1002d4557_caseD_31:
                puVar5 = (uint*)std::array<int, 16ul>::operator[]((array<int, 16ul>*)&field_1132, (ulong)uVar13);
                SetRetrigRate(this, uVar13, *puVar5 & 4294967168 | uVar12);
                break;
            case 16:
                goto switchD_1002d4557_caseD_10;
            case 17:
                goto switchD_1002d4557_caseD_11;
            case 32:
                paVar11 = (array<int, 16ul>*)&field_748;
            LAB_1002d4675:
                puVar5 = (uint*)std::array<int, 16ul>::operator[](paVar11, (ulong)uVar13);
                uVar7 = *puVar5 & 4294951039;
                uVar12 = uVar12 << 7;
            LAB_1002d468b:
                *puVar5 = uVar12 | uVar7;
                break;
            case 33:
                puVar5 = (uint*)std::array<int, 16ul>::operator[]((array<int, 16ul>*)&field_876, (ulong)uVar13);
                *puVar5 = *puVar5 & 4294967168 | uVar12;
                break;
            case 37:
                puVar5 = (uint*)std::array<int, 16ul>::operator[]((array<int, 16ul>*)&field_940, (ulong)uVar13);
                *puVar5 = *puVar5 & 4294967168 | uVar12;
                goto LAB_1002d4a15;
            case 38:
                goto switchD_1002d4557_caseD_26;
            case 39:
                puVar5 = (uint*)std::array<int, 16ul>::operator[]((array<int, 16ul>*)&field_428, (ulong)uVar13);
                *puVar5 = *puVar5 & 4294967168 | uVar12;
                goto LAB_1002d498e;
            case 42:
                paVar11 = (array<int, 16ul>*)&field_492;
                goto LAB_1002d4703;
            case 43:
                paVar11 = (array<int, 16ul>*)&field_556;
            LAB_1002d4703:
                puVar5 = (uint*)std::array<int, 16ul>::operator[](paVar11, (ulong)uVar13);
                *puVar5 = *puVar5 & 4294967168 | uVar12;
                goto LAB_1002d4938;
            case 48:
                goto switchD_1002d4557_caseD_30;
            case 64:
                puVar5 = (uint*)std::array<int, 16ul>::operator[]((array<int, 16ul>*)&field_104, (ulong)uVar13);
                *puVar5 = (uint)(63 < uVar12) | *puVar5 & 4294967294;
                break;
            case 65:
                if (uVar12 < 64) {
                    CleanPorta(this, uVar13);
                    pbVar4 = (byte*)std::array<int, 16ul>::operator[]((array<int, 16ul>*)&field_104, (ulong)uVar13);
                    *pbVar4 = *pbVar4 & 253;
                } else {
                    pbVar4 = (byte*)std::array<int, 16ul>::operator[]((array<int, 16ul>*)&field_104, (ulong)uVar13);
                    *pbVar4 = *pbVar4 | 2;
                }
                switch (uVar7) {
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
                puVar5 = (uint*)std::array<int, 16ul>::operator[]((array<int, 16ul>*)&field_1004, (ulong)uVar13);
                *puVar5 = *puVar5 & 16256 | uVar12;
                switch (uVar7) {
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
                puVar5 = (uint*)std::array<int, 16ul>::operator[]((array<int, 16ul>*)&field_1004, (ulong)uVar13);
                *puVar5 = uVar12 << 7 | *puVar5 & 127;
                switch (uVar7) {
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
                puVar5 = (uint*)std::array<int, 16ul>::operator[]((array<int, 16ul>*)&field_1004, (ulong)uVar13);
                *puVar5 = (*puVar5 & 16256) + uVar12 + 16384;
                if (uVar7 < 81) {
                    switch (uVar7) {
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
                if (uVar7 < 121) {
                    if (uVar7 != 81) {
                        if (uVar7 != 120) {
                            return;
                        }
                        goto switchD_1002d4557_caseD_78;
                    }
                    goto switchD_1002d4557_caseD_51;
                }
                if (uVar7 == 121)
                    goto switchD_1002d4557_caseD_79;
            LAB_1002d4924:
                if (uVar7 != 123) {
                    return;
                }
            case 123:
            switchD_1002d4557_caseD_7b:
                AllNotesOff2(this, uVar13);
                goto LAB_1002d4938;
            case 101:
            switchD_1002d4557_caseD_65:
                puVar5 = (uint*)std::array<int, 16ul>::operator[]((array<int, 16ul>*)&field_1004, (ulong)uVar13);
                *puVar5 = (*puVar5 & 127) + uVar12 * 128 + 16384;
                switch (uVar7) {
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
                    switch (uVar7) {
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
                AllSoundOff2(this, uVar13);
                if (uVar7 < 81) {
                    switch (uVar7) {
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
                if (uVar7 != 81) {
                    if (uVar7 != 123) {
                        if (uVar7 != 121) {
                            return;
                        }
                        goto switchD_1002d4557_caseD_79;
                    }
                    goto switchD_1002d4557_caseD_7b;
                }
                goto switchD_1002d4557_caseD_51;
            case 121:
            switchD_1002d4557_caseD_79:
                AllControllersOff2(this, uVar13);
                switch (uVar7) {
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
                    if (uVar7 != 81)
                        goto LAB_1002d4924;
                    goto switchD_1002d4557_caseD_51;
                }
            }
            break;
        case 4:
            piVar3 = (int*)std::array<int, 16ul>::operator[]((array<int, 16ul>*)&field_748, (ulong)(param_1 & 15U));
            SetInst2(this, param_1 & 15U, ((uint)param_1 >> 8 & 127) + *piVar3);
            break;
        case 5:
            ChannelPressure2(iVar2, iVar8);
            break;
        case 6:
            PitchWheel2(this, param_1 & 15, (uint)param_1 >> 8 & 127 | (uint)param_1 >> 9 & 16256);
            break;
        default:
            if ((char)param_1 == -1) {
                Reset2(this);
            }
        }
    switchD_1002d4557_caseD_2:
    }

    // 0x1002d5b70, 464 bytes, placed by class name
    // MidiPlayer::GetRateRaw(MidiNote const&)
    int MidiPlayer::GetRateRaw(MidiNote* param_1) {
        int iVar1;
        int iVar2;
        int iVar3;
        undefined8 uVar4;
        char cVar5;
        undefined8 uVar6;
        int* piVar7;
        long lVar8;
        undefined1* this_00;
        int iVar9;
        int iVar10;
        float fVar11;
        double dVar12;
        undefined8 local_40;
        double local_38;

        uVar6 = std::this_thread::get_id();
        uVar4 = sound::g_idWorkerThread;
        cVar5 = std::operator==(uVar6, sound::g_idWorkerThread);
        if (cVar5 == '\0') {
            new (&local_40) std::__thread_id();
            cVar5 = std::operator==(uVar4, local_40);
            if (cVar5 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midiplayer.cpp",
                          914, (char*)0);
            }
        }
        iVar9 = *(int*)((long)&param_1->field_112 + 4);
        iVar10 = *(int*)&param_1->field_112;
        iVar1 = *(int*)((long)&param_1->field_104 + 4);
        iVar2 = param_1->field_32;
        piVar7 = (int*)std::array<int, 16ul>::operator[]((array<int, 16ul>*)&field_812, (long)iVar2);
        iVar3 = *piVar7;
        piVar7 = (int*)std::array<int, 16ul>::operator[]((array<int, 16ul>*)&field_1068, (long)iVar2);
        iVar9 = ((iVar3 + -8192) * *piVar7 >> 12) + (iVar9 * iVar10 >> 12) + iVar1;
        lVar8 = shared_ptr<EnvelopeSet>::operator*((shared_ptr<EnvelopeSet>*)&param_1->field_72);
        if (0 < *(int*)(lVar8 + 68)) {
            iVar10 = *(int*)(lVar8 + 64);
            if (iVar10 < 1) {
                piVar7 = (int*)std::array<int, 16ul>::operator[]((array<int, 16ul>*)&field_876,
                                                                 (long)(int)param_1->field_32);
                if (*piVar7 < 1)
                    goto LAB_1002d5cc8;
            }
            iVar10 = iVar10 * 4;
            iVar1 = *(int*)(lVar8 + 72) * 2;
            if (*(int*)&param_1->field_140 < iVar1) {
                iVar10 = (*(int*)&param_1->field_140 * iVar10) / iVar1;
            }
            piVar7 =
                (int*)std::array<int, 16ul>::operator[]((array<int, 16ul>*)&field_876, (long)(int)param_1->field_32);
            iVar1 = *piVar7;
            fVar11 = (float)::sin((float)(*(uint*)((long)&param_1->field_140 + 4) & 511) * 0.012271847);
            iVar9 = iVar9 + (int)((float)((iVar1 >> 7) + iVar10) * fVar11);
        }
    LAB_1002d5cc8:
        this_00 = &param_1->field_56;
        lVar8 = shared_ptr<sound::Wave>::operator->((shared_ptr<sound::Wave>*)this_00);
        local_38 = (double)(*(int*)(lVar8 + 4) << 8);
        dVar12 = (double)pow<int, double>((int)this_00, (double)iVar9 * 0.0003255208333333333);
        iVar10 = (int)((dVar12 * local_38) / (double)sound::PCMPlayer::m_frequency + 0.5);
        iVar9 = 1;
        if (0 < iVar10) {
            iVar9 = iVar10;
        }
        return iVar9;
    }

    // 0x1002d5d40, 672 bytes, placed by class name
    // MidiPlayer::GetVolume(MidiNote const&)
    int MidiPlayer::GetVolume(MidiNote* param_1) {
        byte bVar1;
        int iVar2;
        undefined8 uVar3;
        char cVar4;
        int iVar5;
        undefined8 uVar6;
        Array<game::VarValue, eastl::allocator>* pAVar7;
        int* piVar8;
        char* pcVar9;
        byte* pbVar10;
        int iVar11;
        int iVar12;
        double dVar13;
        undefined8 local_48;
        uint local_3c;
        double local_38;

        uVar6 = std::this_thread::get_id();
        uVar3 = sound::g_idWorkerThread;
        cVar4 = std::operator==(uVar6, sound::g_idWorkerThread);
        if (cVar4 == '\0') {
            new (&local_48) std::__thread_id();
            cVar4 = std::operator==(uVar3, local_48);
            if (cVar4 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midiplayer.cpp",
                          945, (char*)0);
            }
        }
        pAVar7 = (Array<game::VarValue, eastl::allocator>*)shared_ptr<EnvelopeSet>::operator*(
            (shared_ptr<EnvelopeSet>*)&param_1->field_72);
        iVar11 = param_1->field_32;
        piVar8 = (int*)std::array<int, 16ul>::operator[]((array<int, 16ul>*)&field_428, (long)iVar11);
        iVar2 = *piVar8;
        piVar8 = (int*)std::array<int, 16ul>::operator[]((array<int, 16ul>*)&field_556, (long)iVar11);
        iVar11 = iVar2 * *piVar8 + 4096 >> 13;
        iVar11 = ((int)((iVar11 * iVar11 + 16384U >> 15) * *(int*)((long)&param_1->field_96 + 4) + 16384) >> 15) *
                         field_416 +
                     128 >>
                 8;
        if (0 < *(int*)(pAVar7 + 48)) {
            local_38 = (double)iVar11;
            dVar13 = (double)_exp2((double)*(int*)(pAVar7 + 48) * -1.953125e-05 * (double)*(int*)&param_1->field_120);
            iVar11 = (int)(dVar13 * local_38 + 0.5);
        }
        cVar4 = pAVar7->empty();
        if (cVar4 == '\0') {
            local_38 = (double)CONCAT44(local_38._4_4_, *(undefined4*)((long)&param_1->field_120 + 4));
            pcVar9 = (char*)Array<signed char, eastl::allocator>::operator[](
                (Array<signed char, eastl::allocator>*)pAVar7, (long)*(int*)&param_1->field_128 + 1);
            iVar12 = (int)*pcVar9;
            iVar2 = *(int*)&param_1->field_128;
            iVar5 = pAVar7->end();
            if (iVar2 < iVar5 + -2) {
                pbVar10 = (byte*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)pAVar7, (long)*(int*)&param_1->field_128);
                local_3c = (uint)*pbVar10;
                local_38 = (double)CONCAT44(local_38._4_4_, local_38._0_4_ + (uint)*pbVar10 * -256);
                pbVar10 = (byte*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)pAVar7, (long)*(int*)&param_1->field_128 + 2);
                bVar1 = *pbVar10;
                pcVar9 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)pAVar7, (long)*(int*)&param_1->field_128 + 3);
                iVar12 = iVar12 + ((*pcVar9 - iVar12) * local_38._0_4_) / (int)((bVar1 - local_3c) * 256);
            }
            iVar11 = iVar12 * iVar11 + 32 >> 6;
        }
        if (0 < *(int*)&param_1->field_132) {
            pAVar7 = pAVar7 + 24;
            cVar4 = pAVar7->empty();
            if (cVar4 == '\0') {
                local_38._0_4_ = *(int*)&param_1->field_132;
                pcVar9 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)pAVar7, (long)*(int*)((long)&param_1->field_132 + 4) + 1);
                iVar12 = (int)*pcVar9;
                iVar2 = *(int*)((long)&param_1->field_132 + 4);
                iVar5 = pAVar7->end();
                if (iVar2 < iVar5 + -2) {
                    pbVar10 = (byte*)Array<signed char, eastl::allocator>::operator[](
                        (Array<signed char, eastl::allocator>*)pAVar7, (long)*(int*)((long)&param_1->field_132 + 4));
                    local_3c = (uint)*pbVar10;
                    local_38 = (double)CONCAT44(local_38._4_4_, local_38._0_4_ + (uint)*pbVar10 * -256);
                    pbVar10 = (byte*)Array<signed char, eastl::allocator>::operator[](
                        (Array<signed char, eastl::allocator>*)pAVar7,
                        (long)*(int*)((long)&param_1->field_132 + 4) + 2);
                    bVar1 = *pbVar10;
                    pcVar9 = (char*)Array<signed char, eastl::allocator>::operator[](
                        (Array<signed char, eastl::allocator>*)pAVar7,
                        (long)*(int*)((long)&param_1->field_132 + 4) + 3);
                    iVar12 = iVar12 + ((*pcVar9 - iVar12) * local_38._0_4_) / (int)((bVar1 - local_3c) * 256);
                }
                iVar11 = iVar12 * iVar11 + 32 >> 6;
            }
        }
        return iVar11;
    }

    // 0x1002d5fe0, 192 bytes, placed by class name
    // MidiPlayer::GetPan(MidiNote const&)
    int MidiPlayer::GetPan(MidiNote* param_1) {
        undefined8 uVar1;
        char cVar2;
        int iVar3;
        undefined8 in_RAX;
        undefined8 uVar4;
        int* piVar5;
        undefined8 local_28;

        local_28 = in_RAX;
        uVar4 = std::this_thread::get_id();
        uVar1 = sound::g_idWorkerThread;
        cVar2 = std::operator==(uVar4, sound::g_idWorkerThread);
        if (cVar2 == '\0') {
            new (&local_28) std::__thread_id();
            cVar2 = std::operator==(uVar1, local_28);
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midiplayer.cpp",
                          995, (char*)0);
            }
        }
        piVar5 = (int*)std::array<int, 16ul>::operator[]((array<int, 16ul>*)&field_492, (long)(int)param_1->field_32);
        iVar3 = *piVar5;
        if (iVar3 < 8192) {
            iVar3 = iVar3 * *(int*)&param_1->field_104 + 32 >> 6;
        } else {
            iVar3 = 16384 - ((128 - *(int*)&param_1->field_104) * (16384 - iVar3) + 32 >> 6);
        }
        return iVar3;
    }

    // 0x1002d6130, 384 bytes, placed by class name
    // MidiPlayer::CleanPorta(int)
    void MidiPlayer::CleanPorta(int param_1) {
        undefined8 uVar1;
        char cVar2;
        bool bVar3;
        undefined8 uVar4;
        byte* pbVar5;
        long lVar6;
        MidiNote* pMVar7;
        array<shared_ptr<MidiNote>, 128ul>* this_00;
        shared_ptr* psVar8;
        hashtable_iterator_base* extraout_RDX;
        undefined1 auVar9[16];
        MidiNote local_100;
        undefined8 local_50;
        undefined8 local_48;
        undefined8 local_40;
        MidiPlayer* local_38;

        uVar4 = std::this_thread::get_id();
        uVar1 = sound::g_idWorkerThread;
        cVar2 = std::operator==(uVar4, sound::g_idWorkerThread);
        if (cVar2 == '\0') {
            new (&local_50) std::__thread_id();
            cVar2 = std::operator==(uVar1, local_50);
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midiplayer.cpp",
                          641, (char*)0);
            }
        }
        pbVar5 = (byte*)std::array<int, 16ul>::operator[]((array<int, 16ul>*)&field_104, (long)param_1);
        if ((*pbVar5 & 2) != 0) {
            local_38 = this;
            lVar6 = shared_ptr<MidiMixer>::operator->((shared_ptr<MidiMixer>*)&field_67264);
            local_48 = ((lVar6 + 72))->begin_ptrs();
            auVar9 = ((lVar6 + 72))->end();
            local_40 = auVar9._0_8_;
            bVar3 = eastl::operator!=((eastl*)&local_48, (hashtable_iterator_base*)&local_40, auVar9._8_8_);
            if (bVar3) {
                local_38 = (MidiPlayer*)&local_38->field_1512;
                do {
                    pMVar7 = (MidiNote*)local_48.HeapBeginPtr();
                    new (&local_100) MidiNote(pMVar7);
                    if (local_100.field_32 == param_1) {
                        this_00 = (array<shared_ptr<MidiNote>, 128ul>*)
                            std::array<std::array<shared_ptr<MidiNote>, 128ul>, 16ul>::operator[](
                                (array<std::array<shared_ptr<MidiNote>, 128ul>, 16ul>*)local_38, (long)param_1);
                        psVar8 = (shared_ptr*)std::array<shared_ptr<MidiNote>, 128ul>::operator[](
                            this_00, (long)local_100.field_88._4_4_);
                        bVar3 = operator==(psVar8, (_func_decltype_nullptr*)0);
                        if ((bVar3) && ((int)local_100.field_132 < 0)) {
                            local_100.field_132._0_4_ = 0;
                        }
                    }
                    local_100.~MidiNote();
                    SharedPtrList<rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>::obj_iterator::operator++(
                        (obj_iterator*)&local_48);
                    bVar3 = eastl::operator!=((eastl*)&local_48, (hashtable_iterator_base*)&local_40, extraout_RDX);
                } while (bVar3);
            }
        }
    }

    // 0x1002d62b0, 320 bytes, placed by class name
    // MidiPlayer::CleanRetrig(int)
    void MidiPlayer::CleanRetrig(int param_1) {
        undefined8 uVar1;
        char cVar2;
        bool bVar3;
        undefined8 uVar4;
        byte* pbVar5;
        long lVar6;
        MidiNote* pMVar7;
        hashtable_iterator_base* extraout_RDX;
        undefined1 auVar8[16];
        MidiNote local_f0;
        undefined8 local_40;
        undefined8 local_38;
        undefined8 local_30;

        uVar4 = std::this_thread::get_id();
        uVar1 = sound::g_idWorkerThread;
        cVar2 = std::operator==(uVar4, sound::g_idWorkerThread);
        if (cVar2 == '\0') {
            new (&local_40) std::__thread_id();
            cVar2 = std::operator==(uVar1, local_40);
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midiplayer.cpp",
                          660, (char*)0);
            }
        }
        pbVar5 = (byte*)std::array<int, 16ul>::operator[]((array<int, 16ul>*)&field_104, (long)param_1);
        if ((*pbVar5 & 4) != 0) {
            lVar6 = shared_ptr<MidiMixer>::operator->((shared_ptr<MidiMixer>*)&field_67264);
            local_38 = ((lVar6 + 72))->begin_ptrs();
            auVar8 = ((lVar6 + 72))->end();
            local_30 = auVar8._0_8_;
            bVar3 = eastl::operator!=((eastl*)&local_38, (hashtable_iterator_base*)&local_30, auVar8._8_8_);
            if (bVar3) {
                do {
                    pMVar7 = (MidiNote*)local_38.HeapBeginPtr();
                    new (&local_f0) MidiNote(pMVar7);
                    if (local_f0.field_32 == param_1) {
                        local_f0.field_168._4_4_ = 0;
                    }
                    local_f0.~MidiNote();
                    SharedPtrList<rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>::obj_iterator::operator++(
                        (obj_iterator*)&local_38);
                    bVar3 = eastl::operator!=((eastl*)&local_38, (hashtable_iterator_base*)&local_30, extraout_RDX);
                } while (bVar3);
            }
        }
    }

    // 0x1002d63f0, 208 bytes, placed by class name
    // MidiPlayer::SetRetrigRate(int, int)
    void MidiPlayer::SetRetrigRate(int param_1, int param_2) {
        undefined8 uVar1;
        char cVar2;
        undefined8 uVar3;
        int* piVar4;
        undefined1* this_00;
        double dVar5;
        undefined8 local_30;

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
                          "midiplayer.cpp",
                          904, (char*)0);
            }
        }
        this_00 = &field_1132;
        piVar4 = (int*)std::array<int, 16ul>::operator[]((array<int, 16ul>*)this_00, (long)param_1);
        *piVar4 = param_2;
        dVar5 = (double)pow<int, double>((int)this_00, (double)param_2 * 0.00054931640625);
        piVar4 = (int*)std::array<int, 16ul>::operator[]((array<int, 16ul>*)&field_232, (long)param_1);
        *piVar4 = (int)(dVar5 * 2097152.0 + 0.5);
    }

    // 0x1002d6530, 144 bytes, placed by class name
    // MidiPlayer::SubstreamStart()
    MidiPlayer* MidiPlayer::SubstreamStart() {
        undefined8 uVar1;
        char cVar2;
        undefined8 in_RAX;
        undefined8 uVar3;
        long in_RSI;
        undefined8 local_28;

        local_28 = in_RAX;
        uVar3 = std::this_thread::get_id();
        uVar1 = sound::g_idWorkerThread;
        cVar2 = std::operator==(uVar3, sound::g_idWorkerThread);
        if (cVar2 == '\0') {
            new (&local_28) std::__thread_id();
            cVar2 = std::operator==(uVar1, local_28);
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midiplayer.cpp",
                          1010, (char*)0);
            }
        }
        new (this) shared_ptr<dash3d::Decor>((shared_ptr*)(in_RSI + 67264));
        return this;
    }

    // 0x1002d65c0, 32 bytes, placed by class name
    // MidiPlayer::SubstreamNext()
    MidiPlayer* MidiPlayer::SubstreamNext() {
        new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        return this;
    }

    // 0x1002d65e0, 16 bytes, placed by class name
    // MidiPlayer::SelfMixCost()
    undefined8 MidiPlayer::SelfMixCost() {
        return 0;
    }

    // 0x1002d65f0, 432 bytes, placed by class name
    // MidiPlayer::DoMix(Array<int, eastl::allocator>&, int, int)
    void MidiPlayer::DoMix(Array* param_1, int param_2, int param_3) {
        ulong uVar1;
        undefined8 uVar2;
        int iVar3;
        char cVar4;
        byte bVar5;
        int iVar6;
        undefined8 uVar7;
        ulong uVar8;
        long* plVar9;
        undefined8 local_60;
        MidiParser* local_58;
        long local_50;
        shared_ptr<MidiMixer>* local_48;
        int local_34;

        local_34 = param_2;
        uVar7 = std::this_thread::get_id();
        uVar2 = sound::g_idWorkerThread;
        cVar4 = std::operator==(uVar7, sound::g_idWorkerThread);
        if (cVar4 == '\0') {
            new (&local_60) std::__thread_id();
            cVar4 = std::operator==(uVar2, local_60);
            if (cVar4 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midiplayer.cpp",
                          1025, (char*)0);
            }
        }
        PullXferStateIntoWorker(this);
        local_58 = (MidiParser*)field_67048;
        cVar4 = local_58->GotMidi();
        if ((cVar4 != '\0') && (field_424 == false)) {
            local_50 = (long)((*(int*)(field_67048 + 32) * field_420) / sound::PCMPlayer::m_frequency);
            local_48 = (shared_ptr<MidiMixer>*)&field_67264;
            do {
                uVar1 = field_67248;
                uVar8 = param_3 * local_50 + uVar1;
                if ((long)uVar8 <= (long)field_67256) {
                    field_67248 = uVar8;
                    break;
                }
                uVar8 = (long)(~uVar1 + local_50 + field_67256) / local_50;
                iVar6 = (int)uVar8;
                field_67248 = iVar6 * local_50 + uVar1;
                plVar9 = (long*)shared_ptr<MidiMixer>::operator->(local_48);
                iVar3 = local_34;
                (**(code**)(*plVar9 + 40))(plVar9, param_1, local_34, uVar8 & 4294967295);
                local_34 = iVar3 + iVar6;
                param_3 = param_3 - iVar6;
                UpdateMidi(this);
                bVar5 = local_58->GotMidi();
            } while ((uint)(bVar5 ^ 1) * 3 == 0);
        }
        plVar9 = (long*)shared_ptr<MidiMixer>::operator->((shared_ptr<MidiMixer>*)&field_67264);
        (**(code**)(*plVar9 + 40))(plVar9, param_1, local_34, param_3);
    }

    // 0x1002d67a0, 592 bytes, placed by class name
    // MidiPlayer::UpdateMidi()
    void MidiPlayer::UpdateMidi() {
        undefined1* this_00;
        undefined8 uVar1;
        MidiPlayer* pMVar2;
        char cVar3;
        int iVar4;
        int iVar5;
        undefined8 uVar6;
        int* piVar7;
        int iVar8;
        undefined8 local_68;
        scoped_lock<std::mutex> local_60[8];
        mutex* local_58;
        Array<int, eastl::allocator>* local_50;
        undefined1* local_48;
        longlong local_40;
        MidiPlayer* local_38;

        local_38 = this;
        uVar6 = std::this_thread::get_id();
        uVar1 = sound::g_idWorkerThread;
        cVar3 = std::operator==(uVar6, sound::g_idWorkerThread);
        if (cVar3 == '\0') {
            new (&local_68) std::__thread_id();
            cVar3 = std::operator==(uVar1, local_68);
            if (cVar3 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midiplayer.cpp",
                          1104, (char*)0);
            }
        }
        pMVar2 = local_38;
        local_48 = &local_38->field_352;
        std::mutex::lock();
        iVar5 = pMVar2->field_67236;
        iVar8 = pMVar2->field_67240;
        local_40 = pMVar2->field_67256;
        this_00 = pMVar2->field_67048;
        local_50 = (Array<int, eastl::allocator>*)(pMVar2->field_67048 + 40);
        local_58 = (mutex*)&pMVar2->field_1448;
        do {
            do {
                piVar7 = (int*)Array<int, eastl::allocator>::operator[](local_50, (long)iVar5);
                if (*piVar7 != iVar8)
                    goto LAB_1002d6976;
                this_00->SetTrack(iVar5);
                iVar4 = this_00->GetEvent(iVar5);
                if (iVar4 == 1) {
                    this_00->FinishTrack();
                    this_00->UnsetTrack(iVar5);
                    cVar3 = this_00->AllTracksFinished();
                    pMVar2 = local_38;
                    iVar4 = 5;
                    if (cVar3 != '\0') {
                        if ((local_38->field_67232 == false) || (iVar8 == 0)) {
                            Reset2(local_38);
                            this_00->DropMidi();
                            std::mutex::unlock();
                            std::scoped_lock<std::mutex>::scoped_lock(local_60, local_58);
                            if (pMVar2->field_1208 == 0) {
                                local_38->field_1440 = 0;
                            }
                            std::scoped_lock<std::mutex>::~scoped_lock(local_60);
                            iVar4 = 1;
                        } else {
                            this_00->Restart(local_40);
                        }
                    }
                } else {
                    if ((char)iVar4 < '\0') {
                        ProcessMidi2(local_38, iVar4);
                    }
                    this_00->ProcessDeltaTime(iVar5);
                    this_00->UnsetTrack(iVar5);
                    iVar4 = 0;
                }
            } while (iVar4 == 0);
            if (iVar4 != 5) {
                return;
            }
        LAB_1002d6976:
            iVar5 = this_00->NextTrackToPlay();
            piVar7 = (int*)Array<int, eastl::allocator>::operator[](local_50, (long)iVar5);
            iVar8 = *piVar7;
            local_40 = this_00->TimeFromTick(iVar8);
            if (iVar8 != local_38->field_67240) {
                local_38->field_67236 = iVar5;
                local_38->field_67240 = iVar8;
                local_38->field_67256 = local_40;
                std::mutex::unlock();
                return;
            }
        } while (true);
    }

    // 0x1002d69f0, 384 bytes, placed by class name
    // MidiPlayer::PretendToMix(int)
    void MidiPlayer::PretendToMix(int param_1) {
        ulong uVar1;
        undefined8 uVar2;
        char cVar3;
        byte bVar4;
        int iVar5;
        undefined8 uVar6;
        ulong uVar7;
        long* plVar8;
        long lVar9;
        undefined8 local_40;
        shared_ptr<MidiMixer>* local_38;

        uVar6 = std::this_thread::get_id();
        uVar2 = sound::g_idWorkerThread;
        cVar3 = std::operator==(uVar6, sound::g_idWorkerThread);
        if (cVar3 == '\0') {
            new (&local_40) std::__thread_id();
            cVar3 = std::operator==(uVar2, local_40);
            if (cVar3 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("std::this_thread::get_id() == sound::g_idWorkerThread || sound::g_idWorkerThread == "
                          "std::thread::id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                          "midiplayer.cpp",
                          1056, (char*)0);
            }
        }
        PullXferStateIntoWorker(this);
        cVar3 = field_67048->GotMidi();
        if ((cVar3 != '\0') && (field_424 == false)) {
            lVar9 = (long)((*(int*)(field_67048 + 32) * field_420) / sound::PCMPlayer::m_frequency);
            local_38 = (shared_ptr<MidiMixer>*)&field_67264;
            do {
                uVar1 = field_67248;
                uVar7 = param_1 * lVar9 + uVar1;
                if ((long)uVar7 <= (long)field_67256) {
                    field_67248 = uVar7;
                    break;
                }
                uVar7 = (long)(~uVar1 + lVar9 + field_67256) / lVar9;
                iVar5 = (int)uVar7;
                field_67248 = iVar5 * lVar9 + uVar1;
                plVar8 = (long*)shared_ptr<MidiMixer>::operator->(local_38);
                (**(code**)(*plVar8 + 48))(plVar8, uVar7 & 4294967295);
                param_1 = param_1 - iVar5;
                UpdateMidi(this);
                bVar4 = field_67048->GotMidi();
            } while ((uint)(bVar4 ^ 1) * 3 == 0);
        }
        plVar8 = (long*)shared_ptr<MidiMixer>::operator->((shared_ptr<MidiMixer>*)&field_67264);
        (**(code**)(*plVar8 + 48))(plVar8, param_1);
    }

    // 0x1002d6b70, 96 bytes, placed by class name
    // MidiPlayer::QueuePause(bool)
    void MidiPlayer::QueuePause(bool param_1) {
        undefined8 uVar2;

        uVar2 = std::this_thread::get_id();
        if (std::operator==(uVar2, sound::g_idMainThread) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("std::this_thread::get_id() == sound::g_idMainThread",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/midi2/"
                      "midiplayer.cpp",
                      1303, (char*)0);
        }
        field_1204 = (uint)param_1;
    }

} // namespace jag::oldscape::midi2
