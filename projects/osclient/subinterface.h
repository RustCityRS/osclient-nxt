// projects/osclient/subinterface.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x1001170c0
    shared_ptr_if_not_array<game::VarContainerSparse>::type make_shared<game::VarContainerSparse>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        VarContainerSparse* local_28[2];

        auto arg1 = aligned_alloc(96, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<game::VarContainerSparse>::type result;
        } else {
            local_28[0] = placement_new<game::VarContainerSparse>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<game::VarContainerSparse>, int, game::VarContainerSparse*&>(
                    arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x100117430
    shared_ptr_if_not_array<oldscape::ClientObj>::type make_shared<oldscape::ClientObj>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        ClientObj* local_28[2];

        auto arg1 = aligned_alloc(96, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::ClientObj>::type result;
        } else {
            local_28[0] = placement_new<oldscape::ClientObj>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::ClientObj>, int, oldscape::ClientObj*&>(arg1, &local_2c,
                                                                                                   local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x100117580
    void ShuffledPacket3::g3s() {
        g3s_alt2();
    }

    // 0x100117590
    void ShuffledPacket2::g3s() {
        g3s_alt1();
    }

    // 0x1001175a0
    shared_ptr_if_not_array<oldscape::ClientProj>::type
    make_shared<oldscape::ClientProj, int&, int&, int&, int&, int, int, int, int&, int&, int&, int&, int&>(
        int& arg1, int& arg2, int& arg3, int& arg4, int&& arg5, int&& arg6, int&& arg7, int& arg8, int& arg9,
        int& arg10, int& arg11, int& arg12) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int* in_stack_00000038;
        int local_44;
        ClientProj* local_40[2];

        auto arg1_00 = aligned_alloc(224, 8);
        if (arg1_00 == nullptr) {
            new (arg1) shared_ptr();
        } else {
            local_40[0] = placement_new<oldscape::ClientProj, int&, int&, int&, int&, int, int, int, int&, int&, int&,
                                        int&, int&>((void*)((long)arg1_00 + 32), arg2, arg3, arg4, arg5, arg6, arg7,
                                                    arg8, arg9, arg10, arg11, arg12, in_stack_00000038);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::ClientProj>, int, oldscape::ClientProj*&>(arg1_00, &local_44,
                                                                                                     local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (arg1) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return arg1;
    }

    // 0x100119b30
    shared_ptr_if_not_array<oldscape::ClientNpc>::type make_shared<oldscape::ClientNpc, int&>(int& arg1) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_34;
        ClientNpc* local_30[2];

        auto arg1_00 = aligned_alloc(1120, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<oldscape::ClientNpc>::type result;
        } else {
            local_30[0] = placement_new<oldscape::ClientNpc, int&>((void*)((long)arg1_00 + 32), arg1);
            local_34 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::ClientNpc>, int, oldscape::ClientNpc*&>(arg1_00, &local_34,
                                                                                                   local_30);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_30[0]);
        }
        return result;
    }

    // 0x10011a760
    unsigned int PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gSmart2or4s() {
        unsigned short uVar1;
        unsigned int uVar2;

        char* pcVar3 = (char*)(*this)[*(unsigned long*)(this + 24)];
        if (*pcVar3 < '\0') {
            uVar2 = g4(this);
            uVar2 = uVar2 & 2147483647;
        } else {
            uVar1 = g2(this);
            uVar2 = 4294967295;
            if (uVar1 != 32767) {
                uVar2 = (unsigned int)uVar1;
            }
        }
        return uVar2;
    }

    // 0x10011a7f0
    int PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gSmart1Or2Minus1() {
        short sVar2;

        char* pcVar3 = (char*)(*this)[*(unsigned long*)(this + 24)];
        if (*pcVar3 < '\0') {
            sVar2 = g2(this);
            sVar2 = sVar2 + 32767;
        } else {
            sVar2 = g1(this) - 1;
        }
        return (int)sVar2;
    }

} // namespace jag

namespace jag::oldscape {
    class SubInterface {
    public:
        SubInterface();
    };

    // 0x1001303d0
    SubInterface::SubInterface() {
        this[8] = (EnvironmentOverrideParam<game::ColourGradingEnvironmentOverrides::ColourRemap>)0;
    }

} // namespace jag::oldscape
