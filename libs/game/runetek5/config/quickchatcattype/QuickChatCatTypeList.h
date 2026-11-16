// libs/game/runetek5/config/quickchatcattype/QuickChatCatTypeList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    // 0x100570c90, 48 bytes, inline, placed by debug map only (low confidence)
    // game::ConfigProviderMultiGroupSingleFileLoader* placement_new<game::ConfigProviderMultiGroupSingleFileLoader, game::ConfigProvider*, Js5ResourceProvider*&, Js5ArchiveSettings*&, Array<PacketT<Array<unsigned char, eastl::allocator> >, eastl::allocator>*>(void*, game::ConfigProvider*&&, Js5ResourceProvider*&, Js5ArchiveSettings*&, Array<PacketT<Array<unsigned char, eastl::allocator> >, eastl::allocator>*&&)
    ConfigProviderMultiGroupSingleFileLoader*
    jag::placement_new<game::ConfigProviderMultiGroupSingleFileLoader, game::ConfigProvider*, Js5ResourceProvider*&,
                       Js5ArchiveSettings*&, Array<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>*>(
        void* param_1, ConfigProvider** param_2, Js5ResourceProvider** param_3, Js5ArchiveSettings** param_4,
        Array** param_5) {
        game::ConfigProviderMultiGroupSingleFileLoader::ConfigProviderMultiGroupSingleFileLoader(
            param_1, *param_2, *param_3, *param_4, *param_5);
        return param_1;
    }

    // 0x100570cc0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::ConfigProviderMultiGroupSingleFileLoader>* placement_new<ref_counter_shared<game::ConfigProviderMultiGroupSingleFileLoader>, int, game::ConfigProviderMultiGroupSingleFileLoader*&>(void*, int&&, game::ConfigProviderMultiGroupSingleFileLoader*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<game::ConfigProviderMultiGroupSingleFileLoader>, int,
                                           game::ConfigProviderMultiGroupSingleFileLoader*&>(
        void* param_1, int* param_2, ConfigProviderMultiGroupSingleFileLoader** param_3) {
        ref_counter_shared<game::ConfigProviderMultiGroupSingleFileLoader>::ref_counter_shared(param_1, (long)*param_2,
                                                                                               *param_3);
        return param_1;
    }

    // 0x100570ce0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::ConfigProviderMultiGroupSingleFileLoader>::ref_counter_shared(unsigned long, game::ConfigProviderMultiGroupSingleFileLoader*): jumps straight to the base-object constructor

    // 0x100570cf0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::ConfigProviderMultiGroupSingleFileLoader>::ref_counter_shared(unsigned long, game::ConfigProviderMultiGroupSingleFileLoader*)
    void ref_counter_shared<game::ConfigProviderMultiGroupSingleFileLoader>::ref_counter_shared(
        ulong param_1, ConfigProviderMultiGroupSingleFileLoader* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7398 + 16;
        *(ulong*)(this + 16) = param_1;
        *(ConfigProviderMultiGroupSingleFileLoader**)(this + 24) = param_2;
    }

    // 0x100570ec0, 48 bytes, inline, placed by debug map only (low confidence)
    // game::ConfigProviderMultiGroupMultiFileLoader* placement_new<game::ConfigProviderMultiGroupMultiFileLoader, game::ConfigProvider*, Js5ResourceProvider*&, Js5ArchiveSettings*&, Array<eastl::vector<PacketT<Array<unsigned char, eastl::allocator> >, eastl::allocator>, eastl::allocator>*>(void*, game::ConfigProvider*&&, Js5ResourceProvider*&, Js5ArchiveSettings*&, Array<eastl::vector<PacketT<Array<unsigned char, eastl::allocator> >, eastl::allocator>, eastl::allocator>*&&)
    ConfigProviderMultiGroupMultiFileLoader* jag::placement_new<
        game::ConfigProviderMultiGroupMultiFileLoader, game::ConfigProvider*, Js5ResourceProvider*&,
        Js5ArchiveSettings*&,
        Array<eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>, eastl::allocator>*>(
        void* param_1, ConfigProvider** param_2, Js5ResourceProvider** param_3, Js5ArchiveSettings** param_4,
        Array** param_5) {
        game::ConfigProviderMultiGroupMultiFileLoader::ConfigProviderMultiGroupMultiFileLoader(
            param_1, *param_2, *param_3, *param_4, *param_5);
        return param_1;
    }

    // 0x100570ef0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::ConfigProviderMultiGroupMultiFileLoader>* placement_new<ref_counter_shared<game::ConfigProviderMultiGroupMultiFileLoader>, int, game::ConfigProviderMultiGroupMultiFileLoader*&>(void*, int&&, game::ConfigProviderMultiGroupMultiFileLoader*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<game::ConfigProviderMultiGroupMultiFileLoader>, int,
                                           game::ConfigProviderMultiGroupMultiFileLoader*&>(
        void* param_1, int* param_2, ConfigProviderMultiGroupMultiFileLoader** param_3) {
        ref_counter_shared<game::ConfigProviderMultiGroupMultiFileLoader>::ref_counter_shared(param_1, (long)*param_2,
                                                                                              *param_3);
        return param_1;
    }

    // 0x100570f10, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::ConfigProviderMultiGroupMultiFileLoader>::ref_counter_shared(unsigned long, game::ConfigProviderMultiGroupMultiFileLoader*): jumps straight to the base-object constructor

    // 0x100570f20, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::ConfigProviderMultiGroupMultiFileLoader>::ref_counter_shared(unsigned long, game::ConfigProviderMultiGroupMultiFileLoader*)
    void ref_counter_shared<game::ConfigProviderMultiGroupMultiFileLoader>::ref_counter_shared(
        ulong param_1, ConfigProviderMultiGroupMultiFileLoader* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7390 + 16;
        *(ulong*)(this + 16) = param_1;
        *(ConfigProviderMultiGroupMultiFileLoader**)(this + 24) = param_2;
    }

    // 0x100570f60, 48 bytes, inline, placed by debug map only (low confidence)
    // game::ConfigProviderMultiGroupSingleFileLoader* placement_new<game::ConfigProviderMultiGroupSingleFileLoader, game::ConfigProvider*, Js5ResourceProvider*&, Js5ArchiveSettings*&>(void*, game::ConfigProvider*&&, Js5ResourceProvider*&, Js5ArchiveSettings*&)
    ConfigProviderMultiGroupSingleFileLoader*
    jag::placement_new<game::ConfigProviderMultiGroupSingleFileLoader, game::ConfigProvider*, Js5ResourceProvider*&,
                       Js5ArchiveSettings*&>(void* param_1, ConfigProvider** param_2, Js5ResourceProvider** param_3,
                                             Js5ArchiveSettings** param_4) {
        game::ConfigProviderMultiGroupSingleFileLoader::ConfigProviderMultiGroupSingleFileLoader(param_1, *param_2,
                                                                                                 *param_3, *param_4);
        return param_1;
    }

    // 0x100570f90, 48 bytes, inline, placed by debug map only (low confidence)
    // game::ConfigProviderMultiGroupMultiFileLoader* placement_new<game::ConfigProviderMultiGroupMultiFileLoader, game::ConfigProvider*, Js5ResourceProvider*&, Js5ArchiveSettings*&>(void*, game::ConfigProvider*&&, Js5ResourceProvider*&, Js5ArchiveSettings*&)
    ConfigProviderMultiGroupMultiFileLoader*
    jag::placement_new<game::ConfigProviderMultiGroupMultiFileLoader, game::ConfigProvider*, Js5ResourceProvider*&,
                       Js5ArchiveSettings*&>(void* param_1, ConfigProvider** param_2, Js5ResourceProvider** param_3,
                                             Js5ArchiveSettings** param_4) {
        game::ConfigProviderMultiGroupMultiFileLoader::ConfigProviderMultiGroupMultiFileLoader(param_1, *param_2,
                                                                                               *param_3, *param_4);
        return param_1;
    }

    // 0x100570fc0, 48 bytes, inline, placed by debug map only (low confidence)
    // game::ConfigProviderFontMetricsLoader* placement_new<game::ConfigProviderFontMetricsLoader, game::ConfigProvider*, Js5ResourceProvider*&, Js5ArchiveSettings*&>(void*, game::ConfigProvider*&&, Js5ResourceProvider*&, Js5ArchiveSettings*&)
    ConfigProviderFontMetricsLoader*
    jag::placement_new<game::ConfigProviderFontMetricsLoader, game::ConfigProvider*, Js5ResourceProvider*&,
                       Js5ArchiveSettings*&>(void* param_1, ConfigProvider** param_2, Js5ResourceProvider** param_3,
                                             Js5ArchiveSettings** param_4) {
        param_1->ConfigProviderBatchInterface(*param_2, *param_3, *param_4);
        return param_1;
    }

    // 0x100570ff0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::ConfigProviderFontMetricsLoader>* placement_new<ref_counter_shared<game::ConfigProviderFontMetricsLoader>, int, game::ConfigProviderFontMetricsLoader*&>(void*, int&&, game::ConfigProviderFontMetricsLoader*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<game::ConfigProviderFontMetricsLoader>, int,
                       game::ConfigProviderFontMetricsLoader*&>(void* param_1, int* param_2,
                                                                ConfigProviderFontMetricsLoader** param_3) {
        ref_counter_shared<game::ConfigProviderFontMetricsLoader>::ref_counter_shared(param_1, (long)*param_2,
                                                                                      *param_3);
        return param_1;
    }

    // 0x100571100, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::ConfigProviderFontMetricsLoader>::ref_counter_shared(unsigned long, game::ConfigProviderFontMetricsLoader*): jumps straight to the base-object constructor

    // 0x100571110, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::ConfigProviderFontMetricsLoader>::ref_counter_shared(unsigned long, game::ConfigProviderFontMetricsLoader*)
    void ref_counter_shared<game::ConfigProviderFontMetricsLoader>::ref_counter_shared(
        ulong param_1, ConfigProviderFontMetricsLoader* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7388 + 16;
        *(ulong*)(this + 16) = param_1;
        *(ConfigProviderFontMetricsLoader**)(this + 24) = param_2;
    }

    // 0x100571150, 48 bytes, inline, placed by debug map only (low confidence)
    // game::ConfigProviderAnimationStateMachineLoader* placement_new<game::ConfigProviderAnimationStateMachineLoader, game::ConfigProvider*, Js5ResourceProvider*&, Js5ArchiveSettings*&>(void*, game::ConfigProvider*&&, Js5ResourceProvider*&, Js5ArchiveSettings*&)
    ConfigProviderAnimationStateMachineLoader*
    jag::placement_new<game::ConfigProviderAnimationStateMachineLoader, game::ConfigProvider*, Js5ResourceProvider*&,
                       Js5ArchiveSettings*&>(void* param_1, ConfigProvider** param_2, Js5ResourceProvider** param_3,
                                             Js5ArchiveSettings** param_4) {
        param_1->ConfigProviderBatchInterface(*param_2, *param_3, *param_4);
        return param_1;
    }

    // 0x100571180, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::ConfigProviderAnimationStateMachineLoader>* placement_new<ref_counter_shared<game::ConfigProviderAnimationStateMachineLoader>, int, game::ConfigProviderAnimationStateMachineLoader*&>(void*, int&&, game::ConfigProviderAnimationStateMachineLoader*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<game::ConfigProviderAnimationStateMachineLoader>, int,
                                           game::ConfigProviderAnimationStateMachineLoader*&>(
        void* param_1, int* param_2, ConfigProviderAnimationStateMachineLoader** param_3) {
        ref_counter_shared<game::ConfigProviderAnimationStateMachineLoader>::ref_counter_shared(param_1, (long)*param_2,
                                                                                                *param_3);
        return param_1;
    }

    // 0x100571200, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::ConfigProviderAnimationStateMachineLoader>::ref_counter_shared(unsigned long, game::ConfigProviderAnimationStateMachineLoader*): jumps straight to the base-object constructor

    // 0x100571210, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::ConfigProviderAnimationStateMachineLoader>::ref_counter_shared(unsigned long, game::ConfigProviderAnimationStateMachineLoader*)
    void ref_counter_shared<game::ConfigProviderAnimationStateMachineLoader>::ref_counter_shared(
        ulong param_1, ConfigProviderAnimationStateMachineLoader* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee73a0 + 16;
        *(ulong*)(this + 16) = param_1;
        *(ConfigProviderAnimationStateMachineLoader**)(this + 24) = param_2;
    }

    // 0x100571250, 48 bytes, inline, placed by debug map only (low confidence)
    // game::ConfigProviderDefaultsLoader* placement_new<game::ConfigProviderDefaultsLoader, game::ConfigProvider*, Js5ResourceProvider*&, Js5ArchiveSettings*&>(void*, game::ConfigProvider*&&, Js5ResourceProvider*&, Js5ArchiveSettings*&)
    ConfigProviderDefaultsLoader*
    jag::placement_new<game::ConfigProviderDefaultsLoader, game::ConfigProvider*, Js5ResourceProvider*&,
                       Js5ArchiveSettings*&>(void* param_1, ConfigProvider** param_2, Js5ResourceProvider** param_3,
                                             Js5ArchiveSettings** param_4) {
        param_1->ConfigProviderBatchInterface(*param_2, *param_3, *param_4);
        return param_1;
    }

    // 0x100571280, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::ConfigProviderDefaultsLoader>* placement_new<ref_counter_shared<game::ConfigProviderDefaultsLoader>, int, game::ConfigProviderDefaultsLoader*&>(void*, int&&, game::ConfigProviderDefaultsLoader*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<game::ConfigProviderDefaultsLoader>, int,
                       game::ConfigProviderDefaultsLoader*&>(void* param_1, int* param_2,
                                                             ConfigProviderDefaultsLoader** param_3) {
        ref_counter_shared<game::ConfigProviderDefaultsLoader>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

} // namespace jag

namespace jag::game {
    class QuickChatCatTypeList {
    public:
        QuickChatCatTypeList(
            Array<eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>, eastl::allocator>&);
        GetQuickChatCatType(unsigned int);
        ~QuickChatCatTypeList();

        // data members, from how the methods use this: 3344 bytes
        char _unknown_0[3336];
        Array* field_3336; // offset 3336
    };

    // 0x10056f440, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // QuickChatCatTypeList::~QuickChatCatTypeList(): jumps straight to the base-object destructor

    // 0x10056f450, 16 bytes, base-object destructor, inline, placed by class name and debug map
    // QuickChatCatTypeList::~QuickChatCatTypeList()
    void QuickChatCatTypeList::~QuickChatCatTypeList() {
        ~LRUCache();
    }

    // 0x100570870, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // ServerSyncingCycle::~ServerSyncingCycle(): jumps straight to the base-object destructor

    // 0x100570880, 16 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // ServerSyncingCycle::~ServerSyncingCycle()
    void ServerSyncingCycle::~ServerSyncingCycle() {
        (&field_8)->~fixed_map();
    }

} // namespace jag::game
