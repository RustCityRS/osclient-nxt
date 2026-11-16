// libs/game/runetek5/config/ConfigProviderAnimationStateMachineLoader.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class ConfigProviderAnimationStateMachineLoader {
    public:
        // virtual methods in vtable order
        virtual ~ConfigProviderAnimationStateMachineLoader();
        virtual ulong Service();
        void ConfigProviderBatchInterface(ConfigProvider*, Js5ResourceProvider*, Js5ArchiveSettings*);

        // data members, from how the methods use this: 104 bytes
        undefined** field_0;           // offset 0, vtable pointer
        ConfigProvider* field_8;       // offset 8
        Js5ResourceProvider* field_16; // offset 16
        Js5ArchiveSettings* field_24;  // offset 24
        undefined8 field_32;           // offset 32
        undefined8 field_40;           // offset 40
        char _unknown_48[48];
        AnimationParameters* field_96; // offset 96
    };

    // 0x10056c800, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // ConfigProviderAnimationStateMachineLoader::~ConfigProviderAnimationStateMachineLoader(): jumps straight to the base-object destructor

    // 0x10056c810, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // ConfigProviderAnimationStateMachineLoader::~ConfigProviderAnimationStateMachineLoader()
    void ConfigProviderAnimationStateMachineLoader::~ConfigProviderAnimationStateMachineLoader() {
        ~ConfigProviderAnimationStateMachineLoader(this);
        operator_delete(this);
    }

    // 0x10056dde0, 64 bytes, base-object destructor, inline, placed by class name and debug map
    // ConfigProviderAnimationStateMachineLoader::~ConfigProviderAnimationStateMachineLoader()
    void ConfigProviderAnimationStateMachineLoader::~ConfigProviderAnimationStateMachineLoader() {
        field_0 = &PTR__ConfigProviderAnimationStateMachineLoader_100f048a8;
        (&field_88)->~unique_ptr();
        (&field_48)->~vector_map();
        ~AutoSingleton();
    }

    // 0x1005711a0, 16 bytes, inline, placed by class name
    // ConfigProviderAnimationStateMachineLoader::ConfigProviderBatchInterface(ConfigProvider*, Js5ResourceProvider*, Js5ArchiveSettings*)
    void ConfigProviderAnimationStateMachineLoader::ConfigProviderBatchInterface(ConfigProvider* param_1,
                                                                                 Js5ResourceProvider* param_2,
                                                                                 Js5ArchiveSettings* param_3) {
        ConfigProviderBatchInterface(this, param_1, param_2, param_3);
    }

    // 0x1005711b0, 80 bytes, inline, placed by class name
    // ConfigProviderAnimationStateMachineLoader::ConfigProviderBatchInterface(ConfigProvider*, Js5ResourceProvider*, Js5ArchiveSettings*)
    void ConfigProviderAnimationStateMachineLoader::ConfigProviderBatchInterface(ConfigProvider* param_1,
                                                                                 Js5ResourceProvider* param_2,
                                                                                 Js5ArchiveSettings* param_3) {
        new (this) game::ConfigProviderBatchInterface(param_1, param_2, param_3);
        field_0 = &PTR__ConfigProviderAnimationStateMachineLoader_100f048a8;
        new (&field_48) eastl::vector_map<
            int, shared_ptr<graphics::AnimationStateMachineProvider>, eastl::less<int>, eastl::allocator,
            eastl::vector<eastl::pair<int, shared_ptr<graphics::AnimationStateMachineProvider>>, eastl::allocator>>();
        std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::unique_ptr<true, void>(
            (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)&field_88);
        field_96 = (AnimationParameters*)0;
    }

} // namespace jag::game

namespace jag {
    // 0x10056d8a0, 64 bytes, inline, placed by debug map only (low confidence)
    // ConfigDecoderInfo::operator=(ConfigDecoderInfo&&)
    /* ConfigDecoderInfo::TEMPNAMEPLACEHOLDERVALUE(ConfigDecoderInfo&&) */

    ConfigDecoderInfo* ConfigDecoderInfo::operator=(ConfigDecoderInfo* param_1) {
        field_0 = param_1->field_0;
        eastl::function<void(
            unsigned int, unsigned int, unsigned int, unsigned int,
            shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>> const&,
            Array<shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>, eastl::allocator> const*)>::
        operator=((function<void(unsigned int, unsigned int, unsigned int, unsigned int,
                                 shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>> const&,
                                 Array<shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>,
                                       eastl::allocator> const*)>*)&field_8,
                  (function*)&param_1->field_8);
        eastl::function<void()>::operator=((function<void()>*)&field_40, (function*)&param_1->field_40);
        return this;
    }

} // namespace jag
