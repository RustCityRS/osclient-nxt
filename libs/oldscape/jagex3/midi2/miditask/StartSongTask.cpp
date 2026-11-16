// libs/oldscape/jagex3/midi2/miditask/StartSongTask.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

namespace jag::oldscape::midi2 {
    class StartSongTask {
    public:
        // virtual methods in vtable order
        virtual ~StartSongTask();
        virtual uint64_t Execute();
        StartSongTask(const shared_ptr<MidiTask>& midiTask,
                      eastl::fixed_vector<shared_ptr<MidiRequest>, 4ul, false, eastl::dummy_allocator>& midiRequests);

    private:
        uint8_t _unknown_8[80];
        uint8_t field_88;
        uint8_t field_89;
        uint8_t _unknown_90[6];
        fixed_vector<shared_ptr<MidiRequest>, 4ul, false, eastl::dummy_allocator>* field_96;
    };

    // 0x100292940
    StartSongTask::StartSongTask(
        const shared_ptr<MidiTask>& midiTask,
        eastl::fixed_vector<shared_ptr<MidiRequest>, 4ul, false, eastl::dummy_allocator>& midiRequests)
        : MidiTask(midiTask), field_96(midiRequests) {
        (&field_56)->assign("StartSongTask");
    }

    // 0x1002929a0
    uint64_t StartSongTask::Execute() {
        bool bVar1;
        uint8_t bVar2;
        long lVar5;
        long* plVar6;
        uint64_t uVar7;
        uint64_t* puVar8;
        eastl::string* str;
        int iVar9;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_48;

        ErrorCapture local_398(true);
        Layout* this_00 = (Layout*)field_96;
        auto objType = this_00->HeapBeginPtr();
        auto psVar4 = this_00->end();
        for (; objType != psVar4; objType = objType + 16) {
            bVar1 = *objType == nullptr;
            iVar9 = 3;
            if ((!bVar1) && (lVar5 = (*objType).operator->(), *(char*)(lVar5 + 26) == '\0')) {
                lVar5 = (*objType).operator->();
                bVar1 = (*((lVar5 + 32))) == nullptr;
                if (!bVar1) {
                    lVar5 = (*objType).operator->();
                    plVar6 = (long*)(*((lVar5 + 32))).operator->();
                    (**(void (**)(...))(*plVar6 + 56))(plVar6);
                    lVar5 = (*objType).operator->();
                    bVar1 = (*((lVar5 + 48))) != nullptr;
                    if (bVar1) {
                        lVar5 = (*objType).operator->();
                        plVar6 = (long*)(*((lVar5 + 32))).operator->();
                        lVar5 = (*objType).operator->();
                        uVar7 = *(*((lVar5 + 48)));
                        lVar5 = (*objType).operator->();
                        (**(void (**)(...))(*plVar6 + 16))(plVar6, uVar7, *(uint8_t*)(lVar5 + 24), &local_398);
                    }
                    lVar5 = (*objType).operator->();
                    puVar8 = (uint64_t*)(*((lVar5 + 32))).operator->();
                    (**(void (**)(...))*puVar8)(puVar8, 0);
                    local_48 = shared_ptr();
                    lVar5 = (*objType).operator->();
                    (*((lVar5 + 48))) = local_48;
                    local_48 = shared_ptr();
                    lVar5 = (*objType).operator->();
                    (*((lVar5 + 64))) = local_48;
                    puVar8 = (uint64_t*)(*objType).operator->();
                    *puVar8 = 0;
                    lVar5 = (*objType).operator->();
                    *(uint8_t*)(lVar5 + 26) = 1;
                    bVar2 = local_398.IsRaised();
                    iVar9 = (unsigned int)bVar2 * 2;
                }
            }
            if ((iVar9 != 3) && (iVar9 != 0))
                break;
        }
        if (local_398.IsRaised() == '\0') {
            field_89 = 1;
        } else {
            str = (eastl::string*)local_398.second();
            RaiseError(*str);
        }
        return 1;
    }

    // 0x1002a85c0: StartSongTask::~StartSongTask() has the same machine code as LoadSongTask::~LoadSongTask()

} // namespace jag::oldscape::midi2
