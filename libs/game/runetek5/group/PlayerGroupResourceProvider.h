// libs/game/runetek5/group/PlayerGroupResourceProvider.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    // 0x100567bc0, 192 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<game::ConfigProviderMultiGroupSingleFileLoader>::type make_shared<game::ConfigProviderMultiGroupSingleFileLoader, game::ConfigProvider*, Js5ResourceProvider*&, Js5ArchiveSettings*&, Array<PacketT<Array<unsigned char, eastl::allocator> >, eastl::allocator>*>(game::ConfigProvider*&&, Js5ResourceProvider*&, Js5ArchiveSettings*&, Array<PacketT<Array<unsigned char, eastl::allocator> >, eastl::allocator>*&&)
    jag*
    jag::make_shared<game::ConfigProviderMultiGroupSingleFileLoader, game::ConfigProvider*, Js5ResourceProvider*&,
                     Js5ArchiveSettings*&, Array<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>*>(
        ConfigProvider** param_1, Js5ResourceProvider** param_2, Js5ArchiveSettings** param_3, Array** param_4) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        ConfigProviderMultiGroupSingleFileLoader* local_40[2];

        pvVar1 = (void*)aligned_alloc(104, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] = placement_new<game::ConfigProviderMultiGroupSingleFileLoader, game::ConfigProvider*,
                                        Js5ResourceProvider*&, Js5ArchiveSettings*&,
                                        Array<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>*>(
                (void*)((long)pvVar1 + 32), param_1, param_2, param_3, param_4);
            local_44 = 1;
            prVar2 = placement_new<ref_counter_shared<game::ConfigProviderMultiGroupSingleFileLoader>, int,
                                   game::ConfigProviderMultiGroupSingleFileLoader*&>(pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

    // 0x100567c80, 192 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<game::ConfigProviderMultiGroupMultiFileLoader>::type make_shared<game::ConfigProviderMultiGroupMultiFileLoader, game::ConfigProvider*, Js5ResourceProvider*&, Js5ArchiveSettings*&, Array<eastl::vector<PacketT<Array<unsigned char, eastl::allocator> >, eastl::allocator>, eastl::allocator>*>(game::ConfigProvider*&&, Js5ResourceProvider*&, Js5ArchiveSettings*&, Array<eastl::vector<PacketT<Array<unsigned char, eastl::allocator> >, eastl::allocator>, eastl::allocator>*&&)
    jag* jag::make_shared<
        game::ConfigProviderMultiGroupMultiFileLoader, game::ConfigProvider*, Js5ResourceProvider*&,
        Js5ArchiveSettings*&,
        Array<eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>, eastl::allocator>*>(
        ConfigProvider** param_1, Js5ResourceProvider** param_2, Js5ArchiveSettings** param_3, Array** param_4) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        ConfigProviderMultiGroupMultiFileLoader* local_40[2];

        pvVar1 = (void*)aligned_alloc(104, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] =
                placement_new<game::ConfigProviderMultiGroupMultiFileLoader, game::ConfigProvider*,
                              Js5ResourceProvider*&, Js5ArchiveSettings*&,
                              Array<eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>,
                                    eastl::allocator>*>((void*)((long)pvVar1 + 32), param_1, param_2, param_3, param_4);
            local_44 = 1;
            prVar2 = placement_new<ref_counter_shared<game::ConfigProviderMultiGroupMultiFileLoader>, int,
                                   game::ConfigProviderMultiGroupMultiFileLoader*&>(pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

    // 0x100567d40, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<game::ConfigProviderMultiGroupSingleFileLoader>::type make_shared<game::ConfigProviderMultiGroupSingleFileLoader, game::ConfigProvider*, Js5ResourceProvider*&, Js5ArchiveSettings*&>(game::ConfigProvider*&&, Js5ResourceProvider*&, Js5ArchiveSettings*&)
    jag* jag::make_shared<game::ConfigProviderMultiGroupSingleFileLoader, game::ConfigProvider*, Js5ResourceProvider*&,
                          Js5ArchiveSettings*&>(ConfigProvider** param_1, Js5ResourceProvider** param_2,
                                                Js5ArchiveSettings** param_3) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        ConfigProviderMultiGroupSingleFileLoader* local_40[2];

        pvVar1 = (void*)aligned_alloc(104, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] = placement_new<game::ConfigProviderMultiGroupSingleFileLoader, game::ConfigProvider*,
                                        Js5ResourceProvider*&, Js5ArchiveSettings*&>((void*)((long)pvVar1 + 32),
                                                                                     param_1, param_2, param_3);
            local_44 = 1;
            prVar2 = placement_new<ref_counter_shared<game::ConfigProviderMultiGroupSingleFileLoader>, int,
                                   game::ConfigProviderMultiGroupSingleFileLoader*&>(pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

    // 0x100567df0, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<game::ConfigProviderMultiGroupMultiFileLoader>::type make_shared<game::ConfigProviderMultiGroupMultiFileLoader, game::ConfigProvider*, Js5ResourceProvider*&, Js5ArchiveSettings*&>(game::ConfigProvider*&&, Js5ResourceProvider*&, Js5ArchiveSettings*&)
    jag* jag::make_shared<game::ConfigProviderMultiGroupMultiFileLoader, game::ConfigProvider*, Js5ResourceProvider*&,
                          Js5ArchiveSettings*&>(ConfigProvider** param_1, Js5ResourceProvider** param_2,
                                                Js5ArchiveSettings** param_3) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        ConfigProviderMultiGroupMultiFileLoader* local_40[2];

        pvVar1 = (void*)aligned_alloc(104, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] = placement_new<game::ConfigProviderMultiGroupMultiFileLoader, game::ConfigProvider*,
                                        Js5ResourceProvider*&, Js5ArchiveSettings*&>((void*)((long)pvVar1 + 32),
                                                                                     param_1, param_2, param_3);
            local_44 = 1;
            prVar2 = placement_new<ref_counter_shared<game::ConfigProviderMultiGroupMultiFileLoader>, int,
                                   game::ConfigProviderMultiGroupMultiFileLoader*&>(pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

    // 0x100567ea0, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<game::ConfigProviderFontMetricsLoader>::type make_shared<game::ConfigProviderFontMetricsLoader, game::ConfigProvider*, Js5ResourceProvider*&, Js5ArchiveSettings*&>(game::ConfigProvider*&&, Js5ResourceProvider*&, Js5ArchiveSettings*&)
    jag* jag::make_shared<game::ConfigProviderFontMetricsLoader, game::ConfigProvider*, Js5ResourceProvider*&,
                          Js5ArchiveSettings*&>(ConfigProvider** param_1, Js5ResourceProvider** param_2,
                                                Js5ArchiveSettings** param_3) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        ConfigProviderFontMetricsLoader* local_40[2];

        pvVar1 = (void*)aligned_alloc(168, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] =
                placement_new<game::ConfigProviderFontMetricsLoader, game::ConfigProvider*, Js5ResourceProvider*&,
                              Js5ArchiveSettings*&>((void*)((long)pvVar1 + 32), param_1, param_2, param_3);
            local_44 = 1;
            prVar2 = placement_new<ref_counter_shared<game::ConfigProviderFontMetricsLoader>, int,
                                   game::ConfigProviderFontMetricsLoader*&>(pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

    // 0x100567f50, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<game::ConfigProviderAnimationStateMachineLoader>::type make_shared<game::ConfigProviderAnimationStateMachineLoader, game::ConfigProvider*, Js5ResourceProvider*&, Js5ArchiveSettings*&>(game::ConfigProvider*&&, Js5ResourceProvider*&, Js5ArchiveSettings*&)
    jag* jag::make_shared<game::ConfigProviderAnimationStateMachineLoader, game::ConfigProvider*, Js5ResourceProvider*&,
                          Js5ArchiveSettings*&>(ConfigProvider** param_1, Js5ResourceProvider** param_2,
                                                Js5ArchiveSettings** param_3) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        ConfigProviderAnimationStateMachineLoader* local_40[2];

        pvVar1 = (void*)aligned_alloc(136, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] = placement_new<game::ConfigProviderAnimationStateMachineLoader, game::ConfigProvider*,
                                        Js5ResourceProvider*&, Js5ArchiveSettings*&>((void*)((long)pvVar1 + 32),
                                                                                     param_1, param_2, param_3);
            local_44 = 1;
            prVar2 = placement_new<ref_counter_shared<game::ConfigProviderAnimationStateMachineLoader>, int,
                                   game::ConfigProviderAnimationStateMachineLoader*&>(pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

    // 0x100568000, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<game::ConfigProviderDefaultsLoader>::type make_shared<game::ConfigProviderDefaultsLoader, game::ConfigProvider*, Js5ResourceProvider*&, Js5ArchiveSettings*&>(game::ConfigProvider*&&, Js5ResourceProvider*&, Js5ArchiveSettings*&)
    jag* jag::make_shared<game::ConfigProviderDefaultsLoader, game::ConfigProvider*, Js5ResourceProvider*&,
                          Js5ArchiveSettings*&>(ConfigProvider** param_1, Js5ResourceProvider** param_2,
                                                Js5ArchiveSettings** param_3) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        ConfigProviderDefaultsLoader* local_40[2];

        pvVar1 = (void*)aligned_alloc(120, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] =
                placement_new<game::ConfigProviderDefaultsLoader, game::ConfigProvider*, Js5ResourceProvider*&,
                              Js5ArchiveSettings*&>((void*)((long)pvVar1 + 32), param_1, param_2, param_3);
            local_44 = 1;
            prVar2 = placement_new<ref_counter_shared<game::ConfigProviderDefaultsLoader>, int,
                                   game::ConfigProviderDefaultsLoader*&>(pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

} // namespace jag

namespace jag::game {
    class PlayerGroupResourceProvider {
    public:
        PlayerGroupResourceProvider();

        // data members, from how the methods use this: 8 bytes
        undefined* field_0; // offset 0, vtable pointer
    };

    // 0x1005647d0, 32 bytes, base-object constructor, inline, placed by class name and debug map
    // PlayerGroupResourceProvider::PlayerGroupResourceProvider()
    void PlayerGroupResourceProvider::PlayerGroupResourceProvider() {
        field_0 = PTR_vtable_100ee82e8 + 16;
    }

} // namespace jag::game
