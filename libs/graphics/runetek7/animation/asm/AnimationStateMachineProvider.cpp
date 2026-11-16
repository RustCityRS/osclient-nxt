// libs/graphics/runetek7/animation/asm/AnimationStateMachineProvider.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "AnimationStateMachineProvider.h"
#include "AnimationStateSystem.h"

namespace jag::graphics {
    // 0x100009e70: AnimationStateMachineProvider::~AnimationStateMachineProvider() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100958d00: AnimationStateMachineProvider::AnimationStateMachineProvider(AnimationStateMachineProvider const&) has the same machine code as AnimationStateMachineProvider::AnimationStateMachineProvider()

    // 0x10095a4c0
    auto AnimationStateSystemDescriptor::FromPacket(PacketT<Array<unsigned char>>& arg1) {
        auto result;
        ReturnValue local_30;

        arg1.g1();
        uint8_t bVar1 = arg1.g1();
        if (bVar1 == 1) {
            make_shared<LayeredAnimationStateMachineDescriptor, PacketT<Array<unsigned char>>&>(&local_30, arg1);
            result.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(local_30);
        } else {
            if (bVar1 != 0) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/animation/asm/AnimationStateMachineProvider.cpp",
                                30, "Unknown state system type: %c", (unsigned long)bVar1);
            }
            make_shared<AnimationStateMachineDescriptor, PacketT<Array<unsigned char>>&>(&local_30, arg1);
            result.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(local_30);
        }
        return result;
    }

} // namespace jag::graphics

namespace jag {
    // 0x10095a5a0
    shared_ptr_if_not_array<graphics::AnimationStateMachineDescriptor>::type
    make_shared<graphics::AnimationStateMachineDescriptor, PacketT<Array<unsigned char>>&>(
        PacketT<Array<unsigned char>>& arg1) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_34;
        AnimationStateMachineDescriptor* local_30[2];

        auto arg1_00 = aligned_alloc(136, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<graphics::AnimationStateMachineDescriptor>::type result;
        } else {
            local_30[0] = placement_new<graphics::AnimationStateMachineDescriptor, PacketT<Array<unsigned char>>&>(
                (void*)((long)arg1_00 + 32), arg1);
            local_34 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<graphics::AnimationStateMachineDescriptor>, int,
                              graphics::AnimationStateMachineDescriptor*&>(arg1_00, &local_34, local_30);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_30[0]);
        }
        return result;
    }

    // 0x10095a640
    shared_ptr_if_not_array<graphics::LayeredAnimationStateMachineDescriptor>::type
    make_shared<graphics::LayeredAnimationStateMachineDescriptor, PacketT<Array<unsigned char>>&>(
        PacketT<Array<unsigned char>>& arg1) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_34;
        LayeredAnimationStateMachineDescriptor* local_30[2];

        auto arg1_00 = aligned_alloc(72, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<graphics::LayeredAnimationStateMachineDescriptor>::type result;
        } else {
            local_30[0] =
                placement_new<graphics::LayeredAnimationStateMachineDescriptor, PacketT<Array<unsigned char>>&>(
                    (void*)((long)arg1_00 + 32), arg1);
            local_34 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<graphics::LayeredAnimationStateMachineDescriptor>, int,
                              graphics::LayeredAnimationStateMachineDescriptor*&>(arg1_00, &local_34, local_30);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_30[0]);
        }
        return result;
    }

} // namespace jag
