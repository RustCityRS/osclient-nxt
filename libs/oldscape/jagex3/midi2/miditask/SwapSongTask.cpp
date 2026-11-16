// libs/oldscape/jagex3/midi2/miditask/SwapSongTask.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

namespace jag::oldscape::midi2 {
    class SwapSongTask {
    public:
        // virtual methods in vtable order
        virtual ~SwapSongTask();
        virtual uint8_t Execute();
        SwapSongTask(const shared_ptr<MidiTask>& midiTask,
                     eastl::fixed_vector<shared_ptr<MidiRequest>, 4ul, false, eastl::dummy_allocator>& midiRequests);

    private:
        uint8_t _unknown_8[80];
        uint8_t field_88;
        uint8_t field_89;
        uint8_t _unknown_90[6];
        fixed_vector<shared_ptr<MidiRequest>, 4ul, false, eastl::dummy_allocator>* field_96;
    };

    // 0x100292c20
    SwapSongTask::SwapSongTask(
        const shared_ptr<MidiTask>& midiTask,
        eastl::fixed_vector<shared_ptr<MidiRequest>, 4ul, false, eastl::dummy_allocator>& midiRequests)
        : MidiTask(midiTask), field_96(midiRequests) {
        (&field_56)->assign("SwapSongTask");
    }

    // 0x100292c80
    uint8_t SwapSongTask::Execute() {
        shared_ptr<MidiPlayerMainThread>* psVar2;
        shared_ptr<MidiRequest>* psVar3;
        long lVar4;
        shared_ptr<MidiRequest>* midiRequest;
        long* plVar7;

        unsigned long uVar1 = field_96->size();
        if (1 < uVar1) {
            psVar2 = (shared_ptr<MidiPlayerMainThread>*)(*field_96)[0];
            if (*psVar2 != nullptr) {
                psVar3 = (shared_ptr<MidiRequest>*)(*field_96)[0];
                lVar4 = (*psVar3).operator->();
                plVar7 = (long*)(*((lVar4 + 32))).operator->();
                if ((**(void (**)(...))(*plVar7 + 32))(plVar7)) {
                    psVar2 = (shared_ptr<MidiPlayerMainThread>*)(*field_96)[1];
                    if (*psVar2 != nullptr) {
                        psVar3 = (shared_ptr<MidiRequest>*)(*field_96)[1];
                        lVar4 = (*psVar3).operator->();
                        plVar7 = (long*)(*((lVar4 + 32))).operator->();
                        if ((**(void (**)(...))(*plVar7 + 32))(plVar7)) {
                            psVar3 = (shared_ptr<MidiRequest>*)(*field_96)[0];
                            midiRequest = (shared_ptr<MidiRequest>*)(*field_96)[1];
                            psVar3->swap(*midiRequest);
                        }
                    }
                }
            }
        }
        return 1;
    }

    // 0x1002a85c0: SwapSongTask::~SwapSongTask() has the same machine code as LoadSongTask::~LoadSongTask()

} // namespace jag::oldscape::midi2
