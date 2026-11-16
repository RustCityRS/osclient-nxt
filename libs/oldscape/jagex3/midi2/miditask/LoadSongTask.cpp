// libs/oldscape/jagex3/midi2/miditask/LoadSongTask.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "LoadSongTask.h"

namespace jag::oldscape::midi2 {
    // 0x100292230, 112 bytes, base-object constructor, placed by class name and debug map
    // LoadSongTask::LoadSongTask(shared_ptr<MidiTask> const&, eastl::fixed_vector<shared_ptr<MidiRequest>, 4ul, false, eastl::dummy_allocator>&, jagex3::Js5*, jagex3::Js5*, jagex3::Js5*)
    void LoadSongTask::LoadSongTask(shared_ptr* param_1, fixed_vector* param_2, Js5* param_3, Js5* param_4,
                                    Js5* param_5) {
        new (this) MidiTask(param_1);
        field_0 = &PTR__StartSongTask_100ef9430;
        field_96 = param_2;
        field_104 = param_3;
        field_112 = param_4;
        field_120 = param_5;
        (&field_56, "LoadSongTask")->assign();
    }

    // 0x1002922a0, 16 bytes, complete-object constructor, placed by class name and debug map
    // LoadSongTask::LoadSongTask(shared_ptr<MidiTask> const&, eastl::fixed_vector<shared_ptr<MidiRequest>, 4ul, false, eastl::dummy_allocator>&, jagex3::Js5*, jagex3::Js5*, jagex3::Js5*): jumps straight to the base-object constructor

    // 0x1002922b0, 544 bytes, placed by class name and debug map
    // LoadSongTask::Execute()
    ulong LoadSongTask::Execute() {
        Layout* this_00;
        bool bVar1;
        char cVar2;
        shared_ptr* this_01;
        shared_ptr* psVar3;
        long lVar4;
        long* plVar5;
        basic_string* pbVar6;
        int iVar7;
        ulong uVar8;
        long lVar9;
        ErrorCapture local_3b0[17];
        eastl::string local_60[32];
        allocator local_40[8];

        ErrorCapture::ErrorCapture(local_3b0, true);
        this_00 = (Layout*)field_96;
        this_01 = (shared_ptr*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(this_00);
        psVar3 = (shared_ptr*)this_00->end();
        iVar7 = 2;
        if (this_01 == psVar3) {
            lVar9 = 0;
        } else {
            lVar9 = 0;
            do {
                bVar1 = operator!=(this_01, (_func_decltype_nullptr*)0);
                if (bVar1) {
                    lVar4 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this_01);
                    lVar4 =
                        shared_ptr<MidiPlayerMainThread>::operator->((shared_ptr<MidiPlayerMainThread>*)(lVar4 + 32));
                    if (*(int*)(lVar4 + 8) < 2)
                        goto LAB_1002923b0;
                    lVar4 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this_01);
                    plVar5 = (long*)shared_ptr<MidiPlayerMainThread>::operator->(
                        (shared_ptr<MidiPlayerMainThread>*)(lVar4 + 32));
                    cVar2 = (**(code**)(*plVar5 + 88))(plVar5);
                    if (cVar2 == '\0')
                        goto LAB_1002923b0;
                    eastl::allocator::allocator(local_40, "EASTL basic_string");
                    eastl::string::basic_string(local_60, "Attempted to load patches of already loading midiplayer!",
                                                local_40);
                    ((LoadSongTask*)this)->RaiseError(local_60);
                    eastl::string::~basic_string(local_60);
                    iVar7 = 1;
                    bVar1 = false;
                } else {
                LAB_1002923b0:
                    bVar1 = operator==(this_01, (_func_decltype_nullptr*)0);
                    if (((bVar1) || (lVar4 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this_01),
                                     *(char*)(lVar4 + 25) != '\0')) ||
                        (cVar2 = LoadRequest((LoadSongTask*)this, local_3b0, this_01), cVar2 != '\0')) {
                        cVar2 = local_3b0->IsRaised();
                        if (cVar2 != '\0') {
                            iVar7 = 2;
                            bVar1 = false;
                            goto LAB_100292416;
                        }
                        lVar9 = lVar9 + 1;
                    }
                    iVar7 = 0;
                    bVar1 = true;
                }
            LAB_100292416:
                if (!bVar1)
                    goto LAB_100292437;
                this_01 = this_01 + 1;
            } while (this_01 != psVar3);
            iVar7 = 2;
        }
    LAB_100292437:
        uVar8 = CONCAT71((int7)((ulong)this_01 >> 8), 1);
        if ((iVar7 == 2) && (lVar4 = (((LoadSongTask*)this)->field_96)->size(), lVar9 != lVar4)) {
            cVar2 = local_3b0->IsRaised();
            if (cVar2 == '\0') {
                uVar8 = 0;
            } else {
                pbVar6 = (basic_string*)local_3b0->second();
                ((LoadSongTask*)this)->RaiseError(pbVar6);
            }
        }
        local_3b0->~LanguageMessage();
        return uVar8 & 4294967295;
    }

    // 0x1002924d0, 560 bytes, placed by class name and debug map
    // LoadSongTask::LoadRequest(ErrorCapture&, shared_ptr<MidiRequest> const&)
    ulong LoadSongTask::LoadRequest(ErrorCapture* param_1, shared_ptr* param_2) {
        int iVar1;
        Js5* pJVar2;
        bool bVar3;
        uint uVar4;
        long* plVar5;
        long lVar6;
        undefined8* puVar7;
        undefined8 uVar8;
        undefined8 uVar9;
        undefined8 uVar10;
        undefined8 unaff_RBX;
        ulong uVar11;
        shared_ptr local_40;

        plVar5 = (long*)shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)param_2);
        uVar11 = CONCAT71((int7)((ulong)unaff_RBX >> 8), 1);
        if (*plVar5 != 0) {
            lVar6 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)param_2);
            if (*(int*)(lVar6 + 8) != -1) {
                lVar6 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)param_2);
                if (*(int*)(lVar6 + 12) != -1) {
                    lVar6 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)param_2);
                    bVar3 = operator==((shared_ptr*)(lVar6 + 48), (_func_decltype_nullptr*)0);
                    if (bVar3) {
                        puVar7 = (undefined8*)shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)param_2);
                        pJVar2 = (Js5*)*puVar7;
                        lVar6 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)param_2);
                        iVar1 = *(int*)(lVar6 + 8);
                        lVar6 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)param_2);
                        local_40.Load(pJVar2, iVar1, *(int*)(lVar6 + 12));
                        lVar6 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)param_2);
                        shared_ptr<MidiFile>::operator=((shared_ptr<MidiFile>*)(lVar6 + 48), &local_40);
                        local_40.~shared_ptr();
                        lVar6 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)param_2);
                        uVar11 = 0;
                        bVar3 = operator==((shared_ptr*)(lVar6 + 48), (_func_decltype_nullptr*)0);
                        if (bVar3)
                            goto LAB_1002926a6;
                    }
                    lVar6 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)param_2);
                    bVar3 = operator==((shared_ptr*)(lVar6 + 64), (_func_decltype_nullptr*)0);
                    if (bVar3) {
                        make_shared<sound::WaveCache, jagex3::Js5&, jagex3::Js5&>((jag*)&local_40, field_120,
                                                                                  field_112);
                        lVar6 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)param_2);
                        shared_ptr<sound::WaveCache>::operator=((shared_ptr<sound::WaveCache>*)(lVar6 + 64), &local_40);
                        local_40.~shared_ptr();
                    }
                    make_shared<
                        eastl::priority_queue<MidiPlayerMainThread::QueuedLazyWave,
                                              eastl::vector<MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
                                              eastl::less<MidiPlayerMainThread::QueuedLazyWave>>>((jag*)&local_40);
                    lVar6 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)param_2);
                    plVar5 = (long*)shared_ptr<MidiPlayerMainThread>::operator->(
                        (shared_ptr<MidiPlayerMainThread>*)(lVar6 + 32));
                    lVar6 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)param_2);
                    uVar8 = shared_ptr<MidiFile>::operator*((shared_ptr<MidiFile>*)(lVar6 + 48));
                    pJVar2 = field_104;
                    lVar6 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)param_2);
                    uVar9 = shared_ptr<sound::WaveCache>::operator*((shared_ptr<sound::WaveCache>*)(lVar6 + 64));
                    uVar10 = local_40.end();
                    uVar4 = (**(code**)(*plVar5 + 40))(plVar5, uVar8, pJVar2, uVar9, uVar10, param_1);
                    uVar11 = (ulong)uVar4;
                    if ((char)uVar4 != '\0') {
                        lVar6 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)param_2);
                        *(undefined1*)(lVar6 + 25) = 1;
                        lVar6 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)param_2);
                        plVar5 = (long*)shared_ptr<MidiPlayerMainThread>::operator->(
                            (shared_ptr<MidiPlayerMainThread>*)(lVar6 + 32));
                        (**(code**)(*plVar5 + 80))(plVar5, &local_40);
                    }
                    local_40.~shared_ptr();
                }
            }
        }
    LAB_1002926a6:
        return uVar11 & 4294967295;
    }

} // namespace jag::oldscape::midi2

namespace jag {
    // 0x100292740, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::sound::WaveCache>::type make_shared<oldscape::sound::WaveCache, oldscape::jagex3::Js5&, oldscape::jagex3::Js5&>(oldscape::jagex3::Js5&, oldscape::jagex3::Js5&)
    jag* jag::make_shared<oldscape::sound::WaveCache, oldscape::jagex3::Js5&, oldscape::jagex3::Js5&>(Js5* param_1,
                                                                                                      Js5* param_2) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_3c;
        WaveCache* local_38[2];

        pvVar1 = (void*)aligned_alloc(184, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_38[0] = placement_new<oldscape::sound::WaveCache, oldscape::jagex3::Js5&, oldscape::jagex3::Js5&>(
                (void*)((long)pvVar1 + 32), param_1, param_2);
            local_3c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::sound::WaveCache>, int, oldscape::sound::WaveCache*&>(
                pvVar1, &local_3c, local_38);
            prVar2->~AutoSingleton(local_38[0]);
            prVar2->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_38[0]);
        }
        return this;
    }

    // 0x100292830, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>, eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave> > >::type make_shared<eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>, eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave> >>()
    jag* jag::make_shared<
        eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                              eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
                              eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        priority_queue* local_28[2];

        pvVar1 = (void*)aligned_alloc(72, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<eastl::priority_queue<
                oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
                eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<
                ref_counter_shared<eastl::priority_queue<
                    oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                    eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
                    eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>,
                int,
                eastl::priority_queue<
                    oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                    eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
                    eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>*&>(pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

} // namespace jag
