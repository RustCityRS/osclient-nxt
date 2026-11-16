// libs/graphics/runetek7/animation/asm/AnimationStateMachineProvider.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "AnimationStateMachineProvider.h"
#include "AnimationStateSystem.h"

namespace jag::graphics {
    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    AnimationStateMachineProvider::~AnimationStateMachineProvider();

    // 0x100958d00: the linker folded this into AnimationStateMachineProvider::AnimationStateMachineProvider(), which has identical code
    AnimationStateMachineProvider::AnimationStateMachineProvider(AnimationStateMachineProvider const&);

    // 0x10095a4c0, 224 bytes, placed by debug map only (low confidence)
    // AnimationStateSystemDescriptor::FromPacket(PacketT<Array<unsigned char, eastl::allocator> >&)
    AnimationStateSystemDescriptor* AnimationStateSystemDescriptor::FromPacket(PacketT* param_1) {
        byte bVar1;
        shared_ptr local_30;

        param_1->g1();
        bVar1 = param_1->g1();
        if (bVar1 == 1) {
            make_shared<LayeredAnimationStateMachineDescriptor, PacketT<Array<unsigned char, eastl::allocator>>&>(
                (jag*)&local_30, param_1);
            shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
                (shared_ptr<oldscape::RSevenDebugPresetProvider>*)this, &local_30);
            local_30.~shared_ptr();
        } else {
            if (bVar1 != 0) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/animation/asm/AnimationStateMachineProvider.cpp",
                                30, "Unknown state system type: %c", (ulong)bVar1);
            }
            make_shared<AnimationStateMachineDescriptor, PacketT<Array<unsigned char, eastl::allocator>>&>(
                (jag*)&local_30, param_1);
            shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
                (shared_ptr<oldscape::RSevenDebugPresetProvider>*)this, &local_30);
            local_30.~shared_ptr();
        }
        return this;
    }

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    AnimationStateMachineProvider::~AnimationStateMachineProvider();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    AnimationStateMachineProvider::~AnimationStateMachineProvider();

} // namespace jag::graphics

namespace jag {
    // 0x10095a5a0, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<graphics::AnimationStateMachineDescriptor>::type make_shared<graphics::AnimationStateMachineDescriptor, PacketT<Array<unsigned char, eastl::allocator> >&>(PacketT<Array<unsigned char, eastl::allocator> >&)
    jag* jag::make_shared<graphics::AnimationStateMachineDescriptor, PacketT<Array<unsigned char, eastl::allocator>>&>(
        PacketT* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        AnimationStateMachineDescriptor* local_30[2];

        pvVar1 = (void*)aligned_alloc(136, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] =
                placement_new<graphics::AnimationStateMachineDescriptor,
                              PacketT<Array<unsigned char, eastl::allocator>>&>((void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared<graphics::AnimationStateMachineDescriptor>, int,
                                   graphics::AnimationStateMachineDescriptor*&>(pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

    // 0x10095a640, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<graphics::LayeredAnimationStateMachineDescriptor>::type make_shared<graphics::LayeredAnimationStateMachineDescriptor, PacketT<Array<unsigned char, eastl::allocator> >&>(PacketT<Array<unsigned char, eastl::allocator> >&)
    jag* jag::make_shared<graphics::LayeredAnimationStateMachineDescriptor,
                          PacketT<Array<unsigned char, eastl::allocator>>&>(PacketT* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        LayeredAnimationStateMachineDescriptor* local_30[2];

        pvVar1 = (void*)aligned_alloc(72, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] =
                placement_new<graphics::LayeredAnimationStateMachineDescriptor,
                              PacketT<Array<unsigned char, eastl::allocator>>&>((void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared<graphics::LayeredAnimationStateMachineDescriptor>, int,
                                   graphics::LayeredAnimationStateMachineDescriptor*&>(pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

} // namespace jag
