// libs/oldscape/jagex3/midi2/miditask/SwapSongTask.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

namespace jag::oldscape::midi2 {
    class SwapSongTask {
    public:
        // virtual methods in vtable order
        virtual ~SwapSongTask();
        virtual Execute();
        SwapSongTask(shared_ptr<MidiTask> const&,
                     eastl::fixed_vector<shared_ptr<MidiRequest>, 4ul, false, eastl::dummy_allocator>&);

        // data members, from how the methods use this: 104 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[80];
        undefined1 field_88; // offset 88
        undefined1 field_89; // offset 89
        char _unknown_90[6];
        fixed_vector* field_96; // offset 96
    };

    // 0x100292c20, 80 bytes, base-object constructor, placed by class name and debug map
    // SwapSongTask::SwapSongTask(shared_ptr<MidiTask> const&, eastl::fixed_vector<shared_ptr<MidiRequest>, 4ul, false, eastl::dummy_allocator>&)
    void SwapSongTask::SwapSongTask(shared_ptr* param_1, fixed_vector* param_2) {
        new (this) MidiTask(param_1);
        field_0 = &PTR__StartSongTask_100ef9490;
        field_96 = param_2;
        (&field_56, "SwapSongTask")->assign();
    }

    // 0x100292c70, 16 bytes, complete-object constructor, placed by class name and debug map
    // SwapSongTask::SwapSongTask(shared_ptr<MidiTask> const&, eastl::fixed_vector<shared_ptr<MidiRequest>, 4ul, false, eastl::dummy_allocator>&): jumps straight to the base-object constructor

    // 0x100292c80, 224 bytes, placed by class name and debug map
    // SwapSongTask::Execute()
    undefined1 SwapSongTask::Execute() {
        ulong uVar1;
        shared_ptr* psVar2;
        shared_ptr<MidiRequest>* psVar3;
        long lVar4;
        bool bVar5;
        char cVar6;
        long* plVar7;

        uVar1 = field_96->size();
        if (1 < uVar1) {
            psVar2 = (shared_ptr*)
                eastl::vector<shared_ptr<MidiRequest>,
                              eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, false, eastl::dummy_allocator>>::
                operator[]((vector<shared_ptr<MidiRequest>,
                                   eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, false, eastl::dummy_allocator>>*)
                               field_96,
                           0);
            bVar5 = operator!=(psVar2, (_func_decltype_nullptr*)0);
            if (bVar5) {
                psVar3 = (shared_ptr<MidiRequest>*)
                    eastl::vector<shared_ptr<MidiRequest>,
                                  eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, false, eastl::dummy_allocator>>::
                    operator[](
                        (vector<shared_ptr<MidiRequest>,
                                eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, false, eastl::dummy_allocator>>*)
                            field_96,
                        0);
                lVar4 = shared_ptr<MidiRequest>::operator->(psVar3);
                plVar7 = (long*)shared_ptr<MidiPlayerMainThread>::operator->(
                    (shared_ptr<MidiPlayerMainThread>*)(lVar4 + 32));
                cVar6 = (**(code**)(*plVar7 + 32))(plVar7);
                if (cVar6 != '\0') {
                    psVar2 = (shared_ptr*)
                        eastl::vector<shared_ptr<MidiRequest>, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, false,
                                                                                             eastl::dummy_allocator>>::
                        operator[](
                            (vector<shared_ptr<MidiRequest>,
                                    eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, false, eastl::dummy_allocator>>*)
                                field_96,
                            1);
                    bVar5 = operator!=(psVar2, (_func_decltype_nullptr*)0);
                    if (bVar5) {
                        psVar3 = (shared_ptr<MidiRequest>*)eastl::vector<
                            shared_ptr<MidiRequest>,
                            eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, false, eastl::dummy_allocator>>::
                        operator[](
                            (vector<shared_ptr<MidiRequest>,
                                    eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, false, eastl::dummy_allocator>>*)
                                field_96,
                            1);
                        lVar4 = shared_ptr<MidiRequest>::operator->(psVar3);
                        plVar7 = (long*)shared_ptr<MidiPlayerMainThread>::operator->(
                            (shared_ptr<MidiPlayerMainThread>*)(lVar4 + 32));
                        cVar6 = (**(code**)(*plVar7 + 32))(plVar7);
                        if (cVar6 != '\0') {
                            psVar3 = (shared_ptr<MidiRequest>*)eastl::vector<
                                shared_ptr<MidiRequest>,
                                eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, false, eastl::dummy_allocator>>::
                            operator[]((vector<shared_ptr<MidiRequest>,
                                               eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, false,
                                                                             eastl::dummy_allocator>>*)field_96,
                                       0);
                            psVar2 = (shared_ptr*)eastl::vector<
                                shared_ptr<MidiRequest>,
                                eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, false, eastl::dummy_allocator>>::
                            operator[]((vector<shared_ptr<MidiRequest>,
                                               eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, false,
                                                                             eastl::dummy_allocator>>*)field_96,
                                       1);
                            psVar3->swap(psVar2);
                        }
                    }
                }
            }
        }
        return 1;
    }

    // 0x1002a7560: the linker folded this into LoadSongTask::~LoadSongTask(), which has identical code
    SwapSongTask::~SwapSongTask();

    // 0x1002a7570: the linker folded this into LoadSongTask::~LoadSongTask(), which has identical code
    SwapSongTask::~SwapSongTask();

    // 0x1002a85c0: the linker folded this into LoadSongTask::~LoadSongTask(), which has identical code
    SwapSongTask::~SwapSongTask();

} // namespace jag::oldscape::midi2
