// libs/oldscape/jagex3/midi2/miditask/StartSongTask.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

namespace jag::oldscape::midi2 {
    class StartSongTask {
    public:
        // virtual methods in vtable order
        virtual ~StartSongTask();
        virtual Execute();
        StartSongTask(shared_ptr<MidiTask> const&,
                      eastl::fixed_vector<shared_ptr<MidiRequest>, 4ul, false, eastl::dummy_allocator>&);

        // data members, from how the methods use this: 104 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[80];
        undefined1 field_88; // offset 88
        undefined1 field_89; // offset 89
        char _unknown_90[6];
        fixed_vector* field_96; // offset 96
    };

    // 0x100292940, 80 bytes, base-object constructor, placed by class name and debug map
    // StartSongTask::StartSongTask(shared_ptr<MidiTask> const&, eastl::fixed_vector<shared_ptr<MidiRequest>, 4ul, false, eastl::dummy_allocator>&)
    void StartSongTask::StartSongTask(shared_ptr* param_1, fixed_vector* param_2) {
        new (this) MidiTask(param_1);
        field_0 = &PTR__StartSongTask_100ef9460;
        field_96 = param_2;
        (&field_56, "StartSongTask")->assign();
    }

    // 0x100292990, 16 bytes, complete-object constructor, placed by class name and debug map
    // StartSongTask::StartSongTask(shared_ptr<MidiTask> const&, eastl::fixed_vector<shared_ptr<MidiRequest>, 4ul, false, eastl::dummy_allocator>&): jumps straight to the base-object constructor

    // 0x1002929a0, 640 bytes, placed by class name and debug map
    // StartSongTask::Execute()
    undefined8 StartSongTask::Execute() {
        Layout* this_00;
        bool bVar1;
        byte bVar2;
        shared_ptr* this_01;
        shared_ptr* psVar4;
        long lVar5;
        long* plVar6;
        undefined8 uVar7;
        undefined8* puVar8;
        basic_string* pbVar9;
        int iVar10;
        ErrorCapture local_398[17];
        shared_ptr local_48;

        ErrorCapture::ErrorCapture(local_398, true);
        this_00 = (Layout*)field_96;
        this_01 = (shared_ptr*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(this_00);
        psVar4 = (shared_ptr*)this_00->end();
        for (; this_01 != psVar4; this_01 = this_01 + 1) {
            bVar1 = operator==(this_01, (_func_decltype_nullptr*)0);
            iVar10 = 3;
            if ((!bVar1) && (lVar5 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this_01),
                             *(char*)(lVar5 + 26) == '\0')) {
                lVar5 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this_01);
                bVar1 = operator==((shared_ptr*)(lVar5 + 32), (_func_decltype_nullptr*)0);
                if (!bVar1) {
                    lVar5 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this_01);
                    plVar6 = (long*)shared_ptr<MidiPlayerMainThread>::operator->(
                        (shared_ptr<MidiPlayerMainThread>*)(lVar5 + 32));
                    (**(code**)(*plVar6 + 56))(plVar6);
                    lVar5 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this_01);
                    bVar1 = operator!=((shared_ptr*)(lVar5 + 48), (_func_decltype_nullptr*)0);
                    if (bVar1) {
                        lVar5 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this_01);
                        plVar6 = (long*)shared_ptr<MidiPlayerMainThread>::operator->(
                            (shared_ptr<MidiPlayerMainThread>*)(lVar5 + 32));
                        lVar5 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this_01);
                        uVar7 = shared_ptr<MidiFile>::operator*((shared_ptr<MidiFile>*)(lVar5 + 48));
                        lVar5 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this_01);
                        (**(code**)(*plVar6 + 16))(plVar6, uVar7, *(undefined1*)(lVar5 + 24), local_398);
                    }
                    lVar5 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this_01);
                    puVar8 = (undefined8*)shared_ptr<MidiPlayerMainThread>::operator->(
                        (shared_ptr<MidiPlayerMainThread>*)(lVar5 + 32));
                    (**(code**)*puVar8)(puVar8);
                    new (&local_48) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                    lVar5 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this_01);
                    shared_ptr<MidiFile>::operator=((shared_ptr<MidiFile>*)(lVar5 + 48), &local_48);
                    local_48.~shared_ptr();
                    new (&local_48) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                    lVar5 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this_01);
                    shared_ptr<sound::WaveCache>::operator=((shared_ptr<sound::WaveCache>*)(lVar5 + 64), &local_48);
                    local_48.~shared_ptr();
                    puVar8 = (undefined8*)shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this_01);
                    *puVar8 = 0;
                    lVar5 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this_01);
                    *(undefined1*)(lVar5 + 26) = 1;
                    bVar2 = local_398->IsRaised();
                    iVar10 = (uint)bVar2 * 2;
                }
            }
            if ((iVar10 != 3) && (iVar10 != 0))
                break;
        }
        if (local_398->IsRaised() == '\0') {
            ((StartSongTask*)this)->field_89 = 1;
        } else {
            pbVar9 = (basic_string*)local_398->second();
            ((StartSongTask*)this)->RaiseError(pbVar9);
        }
        local_398->~LanguageMessage();
        return 1;
    }

    // 0x1002a7560: the linker folded this into LoadSongTask::~LoadSongTask(), which has identical code
    StartSongTask::~StartSongTask();

    // 0x1002a7570: the linker folded this into LoadSongTask::~LoadSongTask(), which has identical code
    StartSongTask::~StartSongTask();

    // 0x1002a85c0: the linker folded this into LoadSongTask::~LoadSongTask(), which has identical code
    StartSongTask::~StartSongTask();

} // namespace jag::oldscape::midi2
