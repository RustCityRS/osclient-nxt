// libs/game/runetek5/config/quickchatcattype/QuickChatCatTypeList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x100570c90
    game::ConfigProviderMultiGroupSingleFileLoader*
    placement_new<game::ConfigProviderMultiGroupSingleFileLoader, game::ConfigProvider*, Js5ResourceProvider*&,
                  Js5ArchiveSettings*&, Array<PacketT<Array<unsigned char>>>*>(
        void* arg1, game::ConfigProvider*&& arg2, Js5ResourceProvider*& arg3, Js5ArchiveSettings*& arg4,
        Array<PacketT<Array<unsigned char>>>*&& arg5) {
        new (arg1) game::ConfigProviderMultiGroupSingleFileLoader(arg2, arg3, arg4, arg5);
        return arg1;
    }

    // 0x100570cc0
    ref_counter_shared<game::ConfigProviderMultiGroupSingleFileLoader>*
    placement_new<ref_counter_shared<game::ConfigProviderMultiGroupSingleFileLoader>, int,
                  game::ConfigProviderMultiGroupSingleFileLoader*&>(
        void* arg1, int&& arg2, game::ConfigProviderMultiGroupSingleFileLoader*& arg3) {
        new (arg1) ref_counter_shared<game::ConfigProviderMultiGroupSingleFileLoader>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100570cf0
    ref_counter_shared<game::ConfigProviderMultiGroupSingleFileLoader>::ref_counter_shared(
        unsigned long arg1, game::ConfigProviderMultiGroupSingleFileLoader* configProviderMultiGroupSingleFileLoader)
        : ref_counter_base() {}

    // 0x100570ec0
    game::ConfigProviderMultiGroupMultiFileLoader*
    placement_new<game::ConfigProviderMultiGroupMultiFileLoader, game::ConfigProvider*, Js5ResourceProvider*&,
                  Js5ArchiveSettings*&, Array<eastl::vector<PacketT<Array<unsigned char>>>>*>(
        void* arg1, game::ConfigProvider*&& arg2, Js5ResourceProvider*& arg3, Js5ArchiveSettings*& arg4,
        Array<eastl::vector<PacketT<Array<unsigned char>>>>*&& arg5) {
        new (arg1) game::ConfigProviderMultiGroupMultiFileLoader(arg2, arg3, arg4, arg5);
        return arg1;
    }

    // 0x100570ef0
    ref_counter_shared<game::ConfigProviderMultiGroupMultiFileLoader>*
    placement_new<ref_counter_shared<game::ConfigProviderMultiGroupMultiFileLoader>, int,
                  game::ConfigProviderMultiGroupMultiFileLoader*&>(
        void* arg1, int&& arg2, game::ConfigProviderMultiGroupMultiFileLoader*& arg3) {
        new (arg1) ref_counter_shared<game::ConfigProviderMultiGroupMultiFileLoader>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100570f20
    ref_counter_shared<game::ConfigProviderMultiGroupMultiFileLoader>::ref_counter_shared(
        unsigned long arg1, game::ConfigProviderMultiGroupMultiFileLoader* configProviderMultiGroupMultiFileLoader)
        : ref_counter_base() {}

    // 0x100570f60
    game::ConfigProviderMultiGroupSingleFileLoader*
    placement_new<game::ConfigProviderMultiGroupSingleFileLoader, game::ConfigProvider*, Js5ResourceProvider*&,
                  Js5ArchiveSettings*&>(void* arg1, game::ConfigProvider*&& arg2, Js5ResourceProvider*& arg3,
                                        Js5ArchiveSettings*& arg4) {
        new (arg1) game::ConfigProviderMultiGroupSingleFileLoader(arg2, arg3, arg4);
        return arg1;
    }

    // 0x100570f90
    game::ConfigProviderMultiGroupMultiFileLoader*
    placement_new<game::ConfigProviderMultiGroupMultiFileLoader, game::ConfigProvider*, Js5ResourceProvider*&,
                  Js5ArchiveSettings*&>(void* arg1, game::ConfigProvider*&& arg2, Js5ResourceProvider*& arg3,
                                        Js5ArchiveSettings*& arg4) {
        new (arg1) game::ConfigProviderMultiGroupMultiFileLoader(arg2, arg3, arg4);
        return arg1;
    }

    // 0x100570fc0
    game::ConfigProviderFontMetricsLoader*
    placement_new<game::ConfigProviderFontMetricsLoader, game::ConfigProvider*, Js5ResourceProvider*&,
                  Js5ArchiveSettings*&>(void* arg1, game::ConfigProvider*&& arg2, Js5ResourceProvider*& arg3,
                                        Js5ArchiveSettings*& arg4) {
        arg1->ConfigProviderBatchInterface(arg2, arg3, arg4);
        return arg1;
    }

    // 0x100570ff0
    ref_counter_shared<game::ConfigProviderFontMetricsLoader>*
    placement_new<ref_counter_shared<game::ConfigProviderFontMetricsLoader>, int,
                  game::ConfigProviderFontMetricsLoader*&>(void* arg1, int&& arg2,
                                                           game::ConfigProviderFontMetricsLoader*& arg3) {
        new (arg1) ref_counter_shared<game::ConfigProviderFontMetricsLoader>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100571110
    ref_counter_shared<game::ConfigProviderFontMetricsLoader>::ref_counter_shared(
        unsigned long arg1, game::ConfigProviderFontMetricsLoader* configProviderFontMetricsLoader)
        : ref_counter_base() {}

    // 0x100571150
    game::ConfigProviderAnimationStateMachineLoader*
    placement_new<game::ConfigProviderAnimationStateMachineLoader, game::ConfigProvider*, Js5ResourceProvider*&,
                  Js5ArchiveSettings*&>(void* arg1, game::ConfigProvider*&& arg2, Js5ResourceProvider*& arg3,
                                        Js5ArchiveSettings*& arg4) {
        arg1->ConfigProviderBatchInterface(arg2, arg3, arg4);
        return arg1;
    }

    // 0x100571180
    ref_counter_shared<game::ConfigProviderAnimationStateMachineLoader>*
    placement_new<ref_counter_shared<game::ConfigProviderAnimationStateMachineLoader>, int,
                  game::ConfigProviderAnimationStateMachineLoader*&>(
        void* arg1, int&& arg2, game::ConfigProviderAnimationStateMachineLoader*& arg3) {
        new (arg1) ref_counter_shared<game::ConfigProviderAnimationStateMachineLoader>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100571210
    ref_counter_shared<game::ConfigProviderAnimationStateMachineLoader>::ref_counter_shared(
        unsigned long arg1, game::ConfigProviderAnimationStateMachineLoader* configProviderAnimationStateMachineLoader)
        : ref_counter_base() {}

    // 0x100571250
    game::ConfigProviderDefaultsLoader*
    placement_new<game::ConfigProviderDefaultsLoader, game::ConfigProvider*, Js5ResourceProvider*&,
                  Js5ArchiveSettings*&>(void* arg1, game::ConfigProvider*&& arg2, Js5ResourceProvider*& arg3,
                                        Js5ArchiveSettings*& arg4) {
        arg1->ConfigProviderBatchInterface(arg2, arg3, arg4);
        return arg1;
    }

    // 0x100571280
    ref_counter_shared<game::ConfigProviderDefaultsLoader>*
    placement_new<ref_counter_shared<game::ConfigProviderDefaultsLoader>, int, game::ConfigProviderDefaultsLoader*&>(
        void* arg1, int&& arg2, game::ConfigProviderDefaultsLoader*& arg3) {
        new (arg1) ref_counter_shared<game::ConfigProviderDefaultsLoader>((long)*arg2, arg3);
        return arg1;
    }

} // namespace jag

namespace jag::game {
    class QuickChatCatTypeList {
    public:
        QuickChatCatTypeList(Array<eastl::vector<PacketT<Array<unsigned char>>>>& arg1);
        auto GetQuickChatCatType(unsigned int arg1);
        ~QuickChatCatTypeList();

    private:
        unsigned int field_0;
        unsigned int field_4;
        uint8_t _unknown_8[3304];
        LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>* field_3312;
        LRUCache<QuickChatCatType>* field_3320;
        unsigned long long field_3328;
        Array<eastl::vector<PacketT<Array<unsigned char>>>>* field_3336;
    };

    // 0x10056f450
    QuickChatCatTypeList::~QuickChatCatTypeList() {}

    // 0x100570880
    ServerSyncingCycle::~ServerSyncingCycle() {
        field_8.~fixed_map();
    }

} // namespace jag::game
