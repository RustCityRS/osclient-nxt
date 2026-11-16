// projects/osclient/locchange.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape {
    class LocChange {
    public:
        bool IsOpEnabled(int arg1);
        LocChange();

    private:
        uint8_t _unknown_0[44];
        uint8_t field_44;
        uint8_t _unknown_45[3];
        uint64_t field_48;
        uint8_t field_56;
    };

    // 0x1000704f0
    bool LocChange::IsOpEnabled(int arg1) {
        bool bVar1 = true;
        if ((unsigned int)arg1 < 5) {
            bVar1 = (field_44 >> (arg1 & 31U) & 1) != 0;
        }
        return bVar1;
    }

    // 0x100130780
    LocChange::LocChange() : field_44(31), field_48(18446744069414584320), field_56(0) {}

} // namespace jag::oldscape

namespace jag {
    // 0x100071b80
    bool operator!=
        <oldscape::ClientObj>(const shared_ptr<oldscape::ClientObj>& midiPlayerMainThread, decltype(nullptr) arg2) {
        return (bool)midiPlayerMainThread.operator_cast_to_bool();
    }

    // 0x10011b850
    shared_ptr_if_not_array<oldscape::ClientPlayer>::type make_shared<oldscape::ClientPlayer>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        ClientPlayer* local_28[2];

        auto arg1 = aligned_alloc(1280, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::ClientPlayer>::type result;
        } else {
            local_28[0] = placement_new<oldscape::ClientPlayer>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::ClientPlayer>, int, oldscape::ClientPlayer*&>(
                    arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x10011c320
    shared_ptr_if_not_array<oldscape::configdecoder::HeadbarQueue>::type
    make_shared<oldscape::configdecoder::HeadbarQueue, shared_ptr<oldscape::configdecoder::HeadbarType>&>(
        shared_ptr<oldscape::configdecoder::HeadbarType>& headbarType) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_34;
        HeadbarQueue* local_30[2];

        auto arg1 = aligned_alloc(80, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::configdecoder::HeadbarQueue>::type result;
        } else {
            local_30[0] =
                placement_new<oldscape::configdecoder::HeadbarQueue, shared_ptr<oldscape::configdecoder::HeadbarType>&>(
                    (void*)((long)arg1 + 32), headbarType);
            local_34 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::configdecoder::HeadbarQueue>, int,
                              oldscape::configdecoder::HeadbarQueue*&>(arg1, &local_34, local_30);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_30[0]);
        }
        return result;
    }

} // namespace jag
