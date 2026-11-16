// libs/oldscape/jagex3/midi2/miditask/AddRequestTask.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

namespace jag::oldscape::midi2 {
    class AddRequestTask {
    public:
        // virtual methods in vtable order
        virtual ~AddRequestTask();
        virtual uint64_t Execute();
        AddRequestTask(const shared_ptr<MidiTask>& midiTask,
                       eastl::fixed_vector<shared_ptr<MidiRequest>, 4ul, false, eastl::dummy_allocator>& midiRequests,
                       eastl::fixed_queue<shared_ptr<MidiRequest>, 4ul, false>& fixed_queue,
                       std::array<shared_ptr<MidiPlayerMainThread>, 3ul>& midiPlayerMainThreads);
        auto GetFreeMidiPlayer() const;

    private:
        uint8_t _unknown_8[80];
        uint8_t field_88;
        uint8_t field_89;
        uint8_t _unknown_90[6];
        fixed_vector<shared_ptr<MidiRequest>, 4ul, false, eastl::dummy_allocator>* field_96;
        fixed_queue<shared_ptr<MidiRequest>, 4ul, false>* field_104;
        array<shared_ptr<MidiPlayerMainThread>, 3ul>* field_112;
    };

    // 0x1002a85c0: AddRequestTask::~AddRequestTask() has the same machine code as LoadSongTask::~LoadSongTask()

    // 0x1002d8d50
    AddRequestTask::AddRequestTask(
        const shared_ptr<MidiTask>& midiTask,
        eastl::fixed_vector<shared_ptr<MidiRequest>, 4ul, false, eastl::dummy_allocator>& midiRequests,
        eastl::fixed_queue<shared_ptr<MidiRequest>, 4ul, false>& fixed_queue,
        std::array<shared_ptr<MidiPlayerMainThread>, 3ul>& midiPlayerMainThreads)
        : MidiTask(midiTask), field_96(midiRequests), field_104(fixed_queue), field_112(midiPlayerMainThreads) {
        (&field_56)->assign("AddRequestTask");
    }

    // 0x1002d8ef0
    uint64_t AddRequestTask::Execute() {
        shared_ptr<configdecoder::ObjType>* objType;
        long lVar3;
        ReturnValue local_30;

        bool cVar1 = field_104->empty();
        if (!cVar1) {
            do {
                objType = (shared_ptr<configdecoder::ObjType>*)eastl::queue<
                    shared_ptr<MidiRequest>, eastl::fixed_list<shared_ptr<MidiRequest>, 4ul, false>>::front();
                if (!*objType == nullptr) {
                    GetFreeMidiPlayer(&local_30, this);
                    lVar3 = (*objType).operator->();
                    (*((lVar3 + 32))) = local_30;
                    field_96->push_back(*objType);
                }
                eastl::queue<shared_ptr<MidiRequest>, eastl::fixed_list<shared_ptr<MidiRequest>, 4ul, false>>::pop();
                cVar1 = field_104->empty();
            } while (!cVar1);
        }
        return 1;
    }

    // 0x1002d8fb0
    auto AddRequestTask::GetFreeMidiPlayer() const {
        bool bVar1;
        bool cVar2;
        int iVar3;
        shared_ptr<MidiPlayerMainThread>* midiPlayerMainThread;
        long lVar5;
        long* plVar6;
        uint64_t* puVar7;

        auto result;
        midiPlayerMainThread =
            (shared_ptr<MidiPlayerMainThread>*)std::array<shared_ptr<MidiPlayerMainThread>, 3ul>::begin();
        shared_ptr<MidiPlayerMainThread>* psVar4 =
            (shared_ptr<MidiPlayerMainThread>*)std::array<shared_ptr<MidiPlayerMainThread>, 3ul>::end();
        do {
            if (midiPlayerMainThread == psVar4) {
                bVar1 = result != nullptr;
                if (bVar1) {
                    lVar5 = (result).operator->();
                    *(int*)(lVar5 + 8) = *(int*)(lVar5 + 8) + 1;
                    plVar6 = (long*)(result).operator->();
                    iVar3 = (**(void (**)(...))(*plVar6 + 8))(plVar6);
                    if (iVar3 == 0) {
                        plVar6 = (long*)(result).operator->();
                        cVar2 = (**(void (**)(...))(*plVar6 + 32))(plVar6);
                        if (cVar2) {
                            plVar6 = (long*)(result).operator->();
                            (**(void (**)(...))(*plVar6 + 24))(plVar6);
                            plVar6 = (long*)(result).operator->();
                            (**(void (**)(...))(*plVar6 + 64))(plVar6);
                            puVar7 = (uint64_t*)(result).operator->();
                            (**(void (**)(...))*puVar7)(puVar7, 0);
                        }
                    }
                }
                return result;
            }
            bVar1 = *midiPlayerMainThread != nullptr;
            if (!bVar1)
                goto LAB_1002d8ffb;
            bVar1 = result == nullptr;
            if (bVar1) {
            LAB_1002d8ff0:
                result = *midiPlayerMainThread;
            } else {
                lVar5 = (result).operator->();
                iVar3 = *(int*)(lVar5 + 8);
                lVar5 = (*midiPlayerMainThread).operator->();
                if (*(int*)(lVar5 + 8) < iVar3)
                    goto LAB_1002d8ff0;
                plVar6 = (long*)(*midiPlayerMainThread).operator->();
                iVar3 = (**(void (**)(...))(*plVar6 + 8))(plVar6);
                if (iVar3 == 0) {
                    plVar6 = (long*)(*midiPlayerMainThread).operator->();
                    cVar2 = (**(void (**)(...))(*plVar6 + 32))(plVar6);
                    if (cVar2)
                        goto LAB_1002d8ff0;
                }
            }
        LAB_1002d8ffb:
            midiPlayerMainThread = midiPlayerMainThread + 16;
        } while (true);
    }

} // namespace jag::oldscape::midi2
