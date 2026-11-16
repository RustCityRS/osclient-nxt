// libs/oldscape/jagex3/midi2/miditask/AddRequestTask.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

namespace jag::oldscape::midi2 {
    class AddRequestTask {
    public:
        // virtual methods in vtable order
        virtual ~AddRequestTask();
        virtual Execute();
        AddRequestTask(shared_ptr<MidiTask> const&,
                       eastl::fixed_vector<shared_ptr<MidiRequest>, 4ul, false, eastl::dummy_allocator>&,
                       eastl::fixed_queue<shared_ptr<MidiRequest>, 4ul, false>&,
                       std::array<shared_ptr<MidiPlayerMainThread>, 3ul>&);
        GetFreeMidiPlayer() const;

        // data members, from how the methods use this: 120 bytes
        undefined** field_0; // offset 0, vtable pointer
        long field_8;        // offset 8
        char _unknown_16[72];
        undefined1 field_88; // offset 88
        undefined1 field_89; // offset 89
        char _unknown_90[6];
        fixed_vector* field_96; // offset 96
        fixed_queue* field_104; // offset 104
        array* field_112;       // offset 112
    };

    // 0x1002a7560: the linker folded this into LoadSongTask::~LoadSongTask(), which has identical code
    AddRequestTask::~AddRequestTask();

    // 0x1002a7570: the linker folded this into LoadSongTask::~LoadSongTask(), which has identical code
    AddRequestTask::~AddRequestTask();

    // 0x1002a85c0: the linker folded this into LoadSongTask::~LoadSongTask(), which has identical code
    AddRequestTask::~AddRequestTask();

    // 0x1002d8d50, 96 bytes, base-object constructor, placed by class name and debug map
    // AddRequestTask::AddRequestTask(shared_ptr<MidiTask> const&, eastl::fixed_vector<shared_ptr<MidiRequest>, 4ul, false, eastl::dummy_allocator>&, eastl::fixed_queue<shared_ptr<MidiRequest>, 4ul, false>&, std::array<shared_ptr<MidiPlayerMainThread>, 3ul>&)
    /* AddRequestTask::AddRequestTask(shared_ptr<MidiTask>
   const&, eastl::fixed_vector<shared_ptr<MidiRequest>, 4ul, false,
   eastl::dummy_allocator>&, eastl::fixed_queue<shared_ptr<MidiRequest>,
   4ul, false>&, std::array<shared_ptr<MidiPlayerMainThread>, 3ul>&) */

    void AddRequestTask::AddRequestTask(shared_ptr* param_1, fixed_vector* param_2, fixed_queue* param_3,
                                        array* param_4) {
        new (this) MidiTask(param_1);
        field_0 = &PTR__StartSongTask_100efa2b8;
        field_96 = param_2;
        field_104 = param_3;
        field_112 = param_4;
        (&field_56, "AddRequestTask")->assign();
    }

    // 0x1002d8ee0, 16 bytes, complete-object constructor, placed by class name and debug map
    // AddRequestTask::AddRequestTask(shared_ptr<MidiTask> const&, eastl::fixed_vector<shared_ptr<MidiRequest>, 4ul, false, eastl::dummy_allocator>&, eastl::fixed_queue<shared_ptr<MidiRequest>, 4ul, false>&, std::array<shared_ptr<MidiPlayerMainThread>, 3ul>&): jumps straight to the base-object constructor

    // 0x1002d8ef0, 176 bytes, placed by class name and debug map
    // AddRequestTask::Execute()
    undefined8 AddRequestTask::Execute() {
        char cVar1;
        shared_ptr* this_00;
        long lVar3;
        undefined1 local_30[16];

        cVar1 = field_104->empty();
        if (cVar1 == '\0') {
            do {
                this_00 = (shared_ptr*)
                    eastl::queue<shared_ptr<MidiRequest>,
                                 eastl::fixed_list<shared_ptr<MidiRequest>, 4ul, false, eastl::allocator>>::front();
                if (!operator==(this_00, (_func_decltype_nullptr*)0)) {
                    GetFreeMidiPlayer((AddRequestTask*)local_30);
                    lVar3 = shared_ptr<MidiRequest>::operator->((shared_ptr<MidiRequest>*)this_00);
                    shared_ptr<MidiPlayerMainThread>::operator=((shared_ptr<MidiPlayerMainThread>*)(lVar3 + 32),
                                                                (shared_ptr*)local_30);
                    local_30->~shared_ptr();
                    eastl::fixed_vector<shared_ptr<MidiRequest>, 4ul, false, eastl::dummy_allocator>::push_back(
                        (shared_ptr*)field_96);
                }
                field_104->pop();
                cVar1 = field_104->empty();
            } while (cVar1 == '\0');
        }
        return 1;
    }

    // 0x1002d8fb0, 336 bytes, placed by class name and debug map
    // AddRequestTask::GetFreeMidiPlayer() const
    AddRequestTask* AddRequestTask::GetFreeMidiPlayer() {
        array<shared_ptr<MidiPlayerMainThread>, 3ul>* this_00;
        bool bVar1;
        char cVar2;
        int iVar3;
        shared_ptr* this_01;
        shared_ptr* psVar4;
        long lVar5;
        long* plVar6;
        undefined8* puVar7;
        long in_RSI;

        new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        this_00 = *(array<shared_ptr<MidiPlayerMainThread>, 3ul>**)(in_RSI + 112);
        this_01 = (shared_ptr*)std::array<shared_ptr<MidiPlayerMainThread>, 3ul>::begin(this_00);
        psVar4 = (shared_ptr*)std::array<shared_ptr<MidiPlayerMainThread>, 3ul>::end(this_00);
        do {
            if (this_01 == psVar4) {
                bVar1 = operator!=((shared_ptr*)this, (_func_decltype_nullptr*)0);
                if (bVar1) {
                    lVar5 = shared_ptr<MidiPlayerMainThread>::operator->((shared_ptr<MidiPlayerMainThread>*)this);
                    *(int*)(lVar5 + 8) = *(int*)(lVar5 + 8) + 1;
                    plVar6 =
                        (long*)shared_ptr<MidiPlayerMainThread>::operator->((shared_ptr<MidiPlayerMainThread>*)this);
                    iVar3 = (**(code**)(*plVar6 + 8))(plVar6);
                    if (iVar3 == 0) {
                        plVar6 = (long*)shared_ptr<MidiPlayerMainThread>::operator->(
                            (shared_ptr<MidiPlayerMainThread>*)this);
                        cVar2 = (**(code**)(*plVar6 + 32))(plVar6);
                        if (cVar2 != '\0') {
                            plVar6 = (long*)shared_ptr<MidiPlayerMainThread>::operator->(
                                (shared_ptr<MidiPlayerMainThread>*)this);
                            (**(code**)(*plVar6 + 24))(plVar6);
                            plVar6 = (long*)shared_ptr<MidiPlayerMainThread>::operator->(
                                (shared_ptr<MidiPlayerMainThread>*)this);
                            (**(code**)(*plVar6 + 64))(plVar6);
                            puVar7 = (undefined8*)shared_ptr<MidiPlayerMainThread>::operator->(
                                (shared_ptr<MidiPlayerMainThread>*)this);
                            (**(code**)*puVar7)(puVar7, 0);
                        }
                    }
                }
                return this;
            }
            bVar1 = operator!=(this_01, (_func_decltype_nullptr*)0);
            if (!bVar1)
                goto LAB_1002d8ffb;
            bVar1 = operator==((shared_ptr*)this, (_func_decltype_nullptr*)0);
            if (bVar1) {
            LAB_1002d8ff0:
                shared_ptr<MidiPlayerMainThread>::operator=((shared_ptr<MidiPlayerMainThread>*)this, this_01);
            } else {
                lVar5 = shared_ptr<MidiPlayerMainThread>::operator->((shared_ptr<MidiPlayerMainThread>*)this);
                iVar3 = *(int*)(lVar5 + 8);
                lVar5 = shared_ptr<MidiPlayerMainThread>::operator->((shared_ptr<MidiPlayerMainThread>*)this_01);
                if (*(int*)(lVar5 + 8) < iVar3)
                    goto LAB_1002d8ff0;
                plVar6 =
                    (long*)shared_ptr<MidiPlayerMainThread>::operator->((shared_ptr<MidiPlayerMainThread>*)this_01);
                iVar3 = (**(code**)(*plVar6 + 8))(plVar6);
                if (iVar3 == 0) {
                    plVar6 =
                        (long*)shared_ptr<MidiPlayerMainThread>::operator->((shared_ptr<MidiPlayerMainThread>*)this_01);
                    cVar2 = (**(code**)(*plVar6 + 32))(plVar6);
                    if (cVar2 != '\0')
                        goto LAB_1002d8ff0;
                }
            }
        LAB_1002d8ffb:
            this_01 = this_01 + 1;
        } while (true);
    }

} // namespace jag::oldscape::midi2
