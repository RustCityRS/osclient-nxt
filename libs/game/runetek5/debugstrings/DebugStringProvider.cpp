// libs/game/runetek5/debugstrings/DebugStringProvider.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "DebugStringProvider.h"

namespace jag::game {
    // 0x1039bb6c0
    uint8_t DebugStringProvider::DISABLED[48];

    // 0x100009e70: DebugStringProvider::IStringPool::~IStringPool() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x1004c1c20
    DebugStringProvider::DebugStringProvider(
        std::function<DataStatus const*(shared_ptr<PacketT<Array<unsigned char>>>&, int)>& callback) {
        new (this) std::function<DataStatus const*(shared_ptr<PacketT<Array<unsigned char>>>&, int)>(callback);
        new (&field_48) eastl::vector_map<int, shared_ptr<DebugStringProvider::IStringPool>>();
    }

    // 0x1004c1c80
    uint8_t* DebugStringProvider::Fetch(int arg1, int arg2, const char** arg3) {
        uint64_t* puVar4;
        char* pcVar5;
        shared_ptr<DebugStringProvider::IStringPool>* this_01;
        uint8_t* puVar7;
        uint32_t in_register_00000034;
        ReturnValue local_48;

        if (arg3 == nullptr) {
            LogAssert("out != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "debugstrings/DebugStringProvider.cpp",
                      28, nullptr);
        }
        if (this == ((void*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1))) {
            return DataStatus::MISSING;
        }
        int* this_00 = &field_48;
        long lVar2 = eastl::vector_map<int, shared_ptr<graphics::AnimationStateMachineProvider>>::find(*this_00);
        long lVar3 = this_00->end();
        if (lVar2 != lVar3) {
            puVar4 = (uint64_t*)(*((lVar2 + 8))).operator->();
            pcVar5 = (char*)(**(void (**)(...))*puVar4)(puVar4, arg2);
            *arg3 = pcVar5;
            if (pcVar5 == nullptr) {
                return DataStatus::MISSING;
            }
            return DataStatus::READY;
        }
        shared_ptr<PacketT<Array<unsigned char> _> _> local_58;
        uint8_t* puVar6 =
            (uint8_t*)std::function<DataStatus const*(shared_ptr<PacketT<Array<unsigned char>>>&, int)>::operator()(
                (function<DataStatus const*(shared_ptr<PacketT<Array<unsigned char>>>&, int)>*)this,
                (shared_ptr<PacketT<Array<unsigned char> _> _>*)&local_58, arg1);
        if (puVar6 == DataStatus::READY) {
            LoadPool(&local_48, &local_58, &local_58);
            this_01 = (shared_ptr<DebugStringProvider::IStringPool>*)(*this_00)[arg1];
            *this_01 = local_48;
            puVar4 = (uint64_t*)local_48.operator->();
            pcVar5 = (char*)(**(void (**)(...))*puVar4)(puVar4, arg2);
            *arg3 = pcVar5;
            puVar7 = DataStatus::MISSING;
            if (pcVar5 == nullptr)
                goto LAB_1004c1db5;
        } else {
            *arg3 = nullptr;
        }
        puVar7 = puVar6;
    LAB_1004c1db5:
        return puVar7;
    }

    // 0x1004c1e70
    auto DebugStringProvider::LoadPool(shared_ptr<PacketT<Array<unsigned char>>>& arg1) {
        ReturnValue local_30;

        auto result;
        int iVar1 = ((PacketReaderMixin<PacketT<Array<unsigned char>>>*)arg1.operator->())->g4();
        if (iVar1 == 1) {
            make_shared<NonSparseStringPool, shared_ptr<PacketT<Array<unsigned char>>>&>(&local_30, arg1);
            result = local_30;
        } else {
            if (iVar1 != 2) {
                (logger::default_logger())
                    ->Log(false, 2,
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                          "debugstrings/DebugStringProvider.cpp",
                          78, "Unrecognised string pool type: %d", iVar1);
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "debugstrings/DebugStringProvider.cpp",
                                79, nullptr);
            }
            make_shared<SparseStringPool, shared_ptr<PacketT<Array<unsigned char>>>&>(&local_30, arg1);
            result = local_30;
        }
        return result;
    }

} // namespace jag::game

namespace jag {
    // 0x1004c2070
    shared_ptr_if_not_array<game::NonSparseStringPool>::type
    make_shared<game::NonSparseStringPool, shared_ptr<PacketT<Array<unsigned char>>>&>(
        shared_ptr<PacketT<Array<unsigned char>>>& arg1) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_34;
        NonSparseStringPool* local_30[2];

        auto arg1_00 = aligned_alloc(88, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<game::NonSparseStringPool>::type result;
        } else {
            local_30[0] = placement_new<game::NonSparseStringPool, shared_ptr<PacketT<Array<unsigned char>>>&>(
                (void*)((long)arg1_00 + 32), arg1);
            local_34 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<game::NonSparseStringPool>, int, game::NonSparseStringPool*&>(
                    arg1_00, &local_34, local_30);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_30[0]);
        }
        return result;
    }

    // 0x1004c2150
    shared_ptr_if_not_array<game::SparseStringPool>::type
    make_shared<game::SparseStringPool, shared_ptr<PacketT<Array<unsigned char>>>&>(
        shared_ptr<PacketT<Array<unsigned char>>>& arg1) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_34;
        SparseStringPool* local_30[2];

        auto arg1_00 = aligned_alloc(88, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<game::SparseStringPool>::type result;
        } else {
            local_30[0] = placement_new<game::SparseStringPool, shared_ptr<PacketT<Array<unsigned char>>>&>(
                (void*)((long)arg1_00 + 32), arg1);
            local_34 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<game::SparseStringPool>, int, game::SparseStringPool*&>(
                    arg1_00, &local_34, local_30);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_30[0]);
        }
        return result;
    }

} // namespace jag
