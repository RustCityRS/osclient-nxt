// libs/game/runetek5/group/PlayerGroupResourceProvider.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x100567bc0
    shared_ptr_if_not_array<game::ConfigProviderMultiGroupSingleFileLoader>::type
    make_shared<game::ConfigProviderMultiGroupSingleFileLoader, game::ConfigProvider*, Js5ResourceProvider*&,
                Js5ArchiveSettings*&, Array<PacketT<Array<unsigned char>>>*>(
        game::ConfigProvider*&& arg1, Js5ResourceProvider*& arg2, Js5ArchiveSettings*& arg3,
        Array<PacketT<Array<unsigned char>>>*&& arg4) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_44;
        ConfigProviderMultiGroupSingleFileLoader* local_40[2];

        auto arg1_00 = aligned_alloc(104, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<game::ConfigProviderMultiGroupSingleFileLoader>::type result;
        } else {
            local_40[0] =
                placement_new<game::ConfigProviderMultiGroupSingleFileLoader, game::ConfigProvider*,
                              Js5ResourceProvider*&, Js5ArchiveSettings*&, Array<PacketT<Array<unsigned char>>>*>(
                    (void*)((long)arg1_00 + 32), arg1, arg2, arg3, arg4);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<game::ConfigProviderMultiGroupSingleFileLoader>, int,
                              game::ConfigProviderMultiGroupSingleFileLoader*&>(arg1_00, &local_44, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return result;
    }

    // 0x100567c80
    shared_ptr_if_not_array<game::ConfigProviderMultiGroupMultiFileLoader>::type
    make_shared<game::ConfigProviderMultiGroupMultiFileLoader, game::ConfigProvider*, Js5ResourceProvider*&,
                Js5ArchiveSettings*&, Array<eastl::vector<PacketT<Array<unsigned char>>>>*>(
        game::ConfigProvider*&& arg1, Js5ResourceProvider*& arg2, Js5ArchiveSettings*& arg3,
        Array<eastl::vector<PacketT<Array<unsigned char>>>>*&& arg4) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_44;
        ConfigProviderMultiGroupMultiFileLoader* local_40[2];

        auto arg1_00 = aligned_alloc(104, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<game::ConfigProviderMultiGroupMultiFileLoader>::type result;
        } else {
            local_40[0] = placement_new<game::ConfigProviderMultiGroupMultiFileLoader, game::ConfigProvider*,
                                        Js5ResourceProvider*&, Js5ArchiveSettings*&,
                                        Array<eastl::vector<PacketT<Array<unsigned char>>>>*>(
                (void*)((long)arg1_00 + 32), arg1, arg2, arg3, arg4);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<game::ConfigProviderMultiGroupMultiFileLoader>, int,
                              game::ConfigProviderMultiGroupMultiFileLoader*&>(arg1_00, &local_44, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return result;
    }

    // 0x100567d40
    shared_ptr_if_not_array<game::ConfigProviderMultiGroupSingleFileLoader>::type
    make_shared<game::ConfigProviderMultiGroupSingleFileLoader, game::ConfigProvider*, Js5ResourceProvider*&,
                Js5ArchiveSettings*&>(game::ConfigProvider*&& arg1, Js5ResourceProvider*& arg2,
                                      Js5ArchiveSettings*& arg3) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_44;
        ConfigProviderMultiGroupSingleFileLoader* local_40[2];

        auto arg1_00 = aligned_alloc(104, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<game::ConfigProviderMultiGroupSingleFileLoader>::type result;
        } else {
            local_40[0] = placement_new<game::ConfigProviderMultiGroupSingleFileLoader, game::ConfigProvider*,
                                        Js5ResourceProvider*&, Js5ArchiveSettings*&>((void*)((long)arg1_00 + 32), arg1,
                                                                                     arg2, arg3);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<game::ConfigProviderMultiGroupSingleFileLoader>, int,
                              game::ConfigProviderMultiGroupSingleFileLoader*&>(arg1_00, &local_44, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return result;
    }

    // 0x100567df0
    shared_ptr_if_not_array<game::ConfigProviderMultiGroupMultiFileLoader>::type
    make_shared<game::ConfigProviderMultiGroupMultiFileLoader, game::ConfigProvider*, Js5ResourceProvider*&,
                Js5ArchiveSettings*&>(game::ConfigProvider*&& arg1, Js5ResourceProvider*& arg2,
                                      Js5ArchiveSettings*& arg3) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_44;
        ConfigProviderMultiGroupMultiFileLoader* local_40[2];

        auto arg1_00 = aligned_alloc(104, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<game::ConfigProviderMultiGroupMultiFileLoader>::type result;
        } else {
            local_40[0] = placement_new<game::ConfigProviderMultiGroupMultiFileLoader, game::ConfigProvider*,
                                        Js5ResourceProvider*&, Js5ArchiveSettings*&>((void*)((long)arg1_00 + 32), arg1,
                                                                                     arg2, arg3);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<game::ConfigProviderMultiGroupMultiFileLoader>, int,
                              game::ConfigProviderMultiGroupMultiFileLoader*&>(arg1_00, &local_44, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return result;
    }

    // 0x100567ea0
    shared_ptr_if_not_array<game::ConfigProviderFontMetricsLoader>::type
    make_shared<game::ConfigProviderFontMetricsLoader, game::ConfigProvider*, Js5ResourceProvider*&,
                Js5ArchiveSettings*&>(game::ConfigProvider*&& arg1, Js5ResourceProvider*& arg2,
                                      Js5ArchiveSettings*& arg3) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_44;
        ConfigProviderFontMetricsLoader* local_40[2];

        auto arg1_00 = aligned_alloc(168, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<game::ConfigProviderFontMetricsLoader>::type result;
        } else {
            local_40[0] =
                placement_new<game::ConfigProviderFontMetricsLoader, game::ConfigProvider*, Js5ResourceProvider*&,
                              Js5ArchiveSettings*&>((void*)((long)arg1_00 + 32), arg1, arg2, arg3);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<game::ConfigProviderFontMetricsLoader>, int,
                              game::ConfigProviderFontMetricsLoader*&>(arg1_00, &local_44, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return result;
    }

    // 0x100567f50
    shared_ptr_if_not_array<game::ConfigProviderAnimationStateMachineLoader>::type
    make_shared<game::ConfigProviderAnimationStateMachineLoader, game::ConfigProvider*, Js5ResourceProvider*&,
                Js5ArchiveSettings*&>(game::ConfigProvider*&& arg1, Js5ResourceProvider*& arg2,
                                      Js5ArchiveSettings*& arg3) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_44;
        ConfigProviderAnimationStateMachineLoader* local_40[2];

        auto arg1_00 = aligned_alloc(136, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<game::ConfigProviderAnimationStateMachineLoader>::type result;
        } else {
            local_40[0] = placement_new<game::ConfigProviderAnimationStateMachineLoader, game::ConfigProvider*,
                                        Js5ResourceProvider*&, Js5ArchiveSettings*&>((void*)((long)arg1_00 + 32), arg1,
                                                                                     arg2, arg3);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<game::ConfigProviderAnimationStateMachineLoader>, int,
                              game::ConfigProviderAnimationStateMachineLoader*&>(arg1_00, &local_44, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return result;
    }

    // 0x100568000
    shared_ptr_if_not_array<game::ConfigProviderDefaultsLoader>::type
    make_shared<game::ConfigProviderDefaultsLoader, game::ConfigProvider*, Js5ResourceProvider*&, Js5ArchiveSettings*&>(
        game::ConfigProvider*&& arg1, Js5ResourceProvider*& arg2, Js5ArchiveSettings*& arg3) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_44;
        ConfigProviderDefaultsLoader* local_40[2];

        auto arg1_00 = aligned_alloc(120, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<game::ConfigProviderDefaultsLoader>::type result;
        } else {
            local_40[0] =
                placement_new<game::ConfigProviderDefaultsLoader, game::ConfigProvider*, Js5ResourceProvider*&,
                              Js5ArchiveSettings*&>((void*)((long)arg1_00 + 32), arg1, arg2, arg3);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<game::ConfigProviderDefaultsLoader>, int,
                              game::ConfigProviderDefaultsLoader*&>(arg1_00, &local_44, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return result;
    }

} // namespace jag

namespace jag::game {
    class PlayerGroupResourceProvider {
    public:
        PlayerGroupResourceProvider();
    };

    // 0x1005647d0
    PlayerGroupResourceProvider::PlayerGroupResourceProvider() {
        field_0 = PTR_vtable_100ee82e8 + 16;
    }

} // namespace jag::game
