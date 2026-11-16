// libs/oldscape/jagex3/midi2/miditask/LoadSongTask.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "LoadSongTask.h"

namespace jag::oldscape::midi2 {
    // 0x100292230
    LoadSongTask::LoadSongTask(
        const shared_ptr<MidiTask>& midiTask,
        eastl::fixed_vector<shared_ptr<MidiRequest>, 4ul, false, eastl::dummy_allocator>& midiRequests,
        jagex3::Js5* js51, jagex3::Js5* js52, jagex3::Js5* js53)
        : MidiTask(midiTask), field_96(midiRequests), field_104(js51), field_112(js52), field_120(js53) {
        (&field_56)->assign("LoadSongTask");
    }

    // 0x1002922b0
    unsigned long LoadSongTask::Execute() {
        bool bVar1;
        bool cVar2;
        shared_ptr<MidiPlayerMainThread>* midiPlayerMainThread;
        long lVar4;
        long* plVar5;
        eastl::string* str;
        long lVar8;
        eastl::string local_60;

        ErrorCapture local_3b0(true);
        Layout* this_00 = (Layout*)field_96;
        midiPlayerMainThread = (shared_ptr<MidiPlayerMainThread>*)this_00->HeapBeginPtr();
        auto psVar3 = this_00->end();
        int iVar6 = 2;
        if (midiPlayerMainThread == psVar3) {
            lVar8 = 0;
        } else {
            lVar8 = 0;
            do {
                bVar1 = *midiPlayerMainThread != nullptr;
                if (bVar1) {
                    lVar4 = (*midiPlayerMainThread).operator->();
                    lVar4 = (*((lVar4 + 32))).operator->();
                    if (*(int*)(lVar4 + 8) < 2)
                        goto LAB_1002923b0;
                    lVar4 = (*midiPlayerMainThread).operator->();
                    plVar5 = (long*)(*((lVar4 + 32))).operator->();
                    cVar2 = (**(void (**)(...))(*plVar5 + 88))(plVar5);
                    if (!cVar2)
                        goto LAB_1002923b0;
                    local_60 = eastl::string("Attempted to load patches of already loading midiplayer!");
                    RaiseError(local_60);
                    iVar6 = 1;
                    bVar1 = false;
                } else {
                LAB_1002923b0:
                    bVar1 = *midiPlayerMainThread == nullptr;
                    if (((bVar1) || (lVar4 = (*midiPlayerMainThread).operator->(), *(char*)(lVar4 + 25) != '\0')) ||
                        (cVar2 = LoadRequest(local_3b0, *midiPlayerMainThread), cVar2)) {
                        cVar2 = local_3b0.IsRaised();
                        if (cVar2) {
                            iVar6 = 2;
                            bVar1 = false;
                            goto LAB_100292416;
                        }
                        lVar8 = lVar8 + 1;
                    }
                    iVar6 = 0;
                    bVar1 = true;
                }
            LAB_100292416:
                if (!bVar1)
                    goto LAB_100292437;
                midiPlayerMainThread = midiPlayerMainThread + 16;
            } while (midiPlayerMainThread != psVar3);
            iVar6 = 2;
        }
    LAB_100292437:
        unsigned long uVar7 = (((uint64_t)((int64_t)((unsigned long)midiPlayerMainThread >> 8)) << 8) | (uint8_t)1);
        if ((iVar6 == 2) && (lVar4 = field_96->size(), lVar8 != lVar4)) {
            cVar2 = local_3b0.IsRaised();
            if (!cVar2) {
                uVar7 = 0;
            } else {
                str = (eastl::string*)local_3b0.second();
                RaiseError(*str);
            }
        }
        return uVar7 & 4294967295;
    }

    // 0x1002924d0
    unsigned long LoadSongTask::LoadRequest(ErrorCapture& errorCapture, const shared_ptr<MidiRequest>& midiRequest) {
        int arg2;
        Js5* pJVar1;
        bool bVar2;
        unsigned int uVar3;
        long lVar5;
        uint64_t* puVar6;
        uint64_t uVar7;
        uint64_t uVar8;
        uint64_t uVar9;
        uint64_t unaff_RBX;
        ReturnValue local_40;

        auto plVar4 = midiRequest.operator->();
        unsigned long uVar10 = (((uint64_t)((int64_t)((unsigned long)unaff_RBX >> 8)) << 8) | (uint8_t)1);
        if (*plVar4 != 0) {
            lVar5 = midiRequest.operator->();
            if (*(int*)(lVar5 + 8) != -1) {
                lVar5 = midiRequest.operator->();
                if (*(int*)(lVar5 + 12) != -1) {
                    lVar5 = midiRequest.operator->();
                    bVar2 = (*((lVar5 + 48))) == nullptr;
                    if (bVar2) {
                        puVar6 = (uint64_t*)midiRequest.operator->();
                        pJVar1 = (Js5*)*puVar6;
                        lVar5 = midiRequest.operator->();
                        arg2 = *(int*)(lVar5 + 8);
                        lVar5 = midiRequest.operator->();
                        local_40 = MidiFile::Load(pJVar1, arg2, *(int*)(lVar5 + 12));
                        lVar5 = midiRequest.operator->();
                        (*((lVar5 + 48))) = local_40;
                        lVar5 = midiRequest.operator->();
                        uVar10 = 0;
                        bVar2 = (*((lVar5 + 48))) == nullptr;
                        if (bVar2)
                            goto LAB_1002926a6;
                    }
                    lVar5 = midiRequest.operator->();
                    bVar2 = (*((lVar5 + 64))) == nullptr;
                    if (bVar2) {
                        make_shared<sound::WaveCache, jagex3::Js5&, jagex3::Js5&>(&local_40, field_120, field_112);
                        lVar5 = midiRequest.operator->();
                        (*((lVar5 + 64))) = local_40;
                    }
                    make_shared<eastl::priority_queue<MidiPlayerMainThread::QueuedLazyWave,
                                                      eastl::vector<MidiPlayerMainThread::QueuedLazyWave>>>(&local_40);
                    lVar5 = midiRequest.operator->();
                    plVar4 = (long*)(*((lVar5 + 32))).operator->();
                    lVar5 = midiRequest.operator->();
                    uVar7 = *(*((lVar5 + 48)));
                    pJVar1 = field_104;
                    lVar5 = midiRequest.operator->();
                    uVar8 = *(*((lVar5 + 64)));
                    uVar9 = local_40.end();
                    uVar3 = (**(void (**)(...))(*plVar4 + 40))(plVar4, uVar7, pJVar1, uVar8, uVar9, errorCapture);
                    uVar10 = (unsigned long)uVar3;
                    if ((char)uVar3 != '\0') {
                        lVar5 = midiRequest.operator->();
                        *(uint8_t*)(lVar5 + 25) = 1;
                        lVar5 = midiRequest.operator->();
                        plVar4 = (long*)(*((lVar5 + 32))).operator->();
                        (**(void (**)(...))(*plVar4 + 80))(plVar4, &local_40);
                    }
                }
            }
        }
    LAB_1002926a6:
        return uVar10 & 4294967295;
    }

} // namespace jag::oldscape::midi2

namespace jag {
    // 0x100292740
    shared_ptr_if_not_array<oldscape::sound::WaveCache>::type
    make_shared<oldscape::sound::WaveCache, oldscape::jagex3::Js5&, oldscape::jagex3::Js5&>(
        oldscape::jagex3::Js5& js51, oldscape::jagex3::Js5& js52) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_3c;
        WaveCache* local_38[2];

        auto arg1 = aligned_alloc(184, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::sound::WaveCache>::type result;
        } else {
            local_38[0] = placement_new<oldscape::sound::WaveCache, oldscape::jagex3::Js5&, oldscape::jagex3::Js5&>(
                (void*)((long)arg1 + 32), js51, js52);
            local_3c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::sound::WaveCache>, int, oldscape::sound::WaveCache*&>(
                    arg1, &local_3c, local_38);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_38[0]);
        }
        return result;
    }

    // 0x100292830
    shared_ptr_if_not_array<
        eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                              eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>::type
    make_shared<eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                                      eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>() {
        ref_counter_shared<eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                                                 eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>,
                                                 eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave> _>
                               _>* ref_counter_shared;
        int local_2c;
        priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                       eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>,
                       eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave> _>* local_28[2];

        auto arg1 = aligned_alloc(72, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<
                eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                                      eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>::type
                result;
        } else {
            local_28[0] = placement_new<
                eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                                      eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>(
                (void*)((long)arg1 + 32));
            local_2c = 1;
            ref_counter_shared = placement_new<
                ref_counter_shared<
                    eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                                          eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>,
                int,
                eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                                      eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>*&>(
                arg1, &local_2c, local_28);
            ref_counter_shared->~AutoSingleton();
            ref_counter_shared->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_shared, (unsigned long)local_28[0]);
        }
        return result;
    }

} // namespace jag
