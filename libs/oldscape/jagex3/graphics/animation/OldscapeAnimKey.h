// libs/oldscape/jagex3/graphics/animation/OldscapeAnimKey.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    // 0x100337660, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::graphics::animation::OldscapeAnimKey>::ref_counter_shared(unsigned long, oldscape::graphics::animation::OldscapeAnimKey*): jumps straight to the base-object constructor

    // 0x100337670, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::graphics::animation::OldscapeAnimKey>::ref_counter_shared(unsigned long, oldscape::graphics::animation::OldscapeAnimKey*)
    void
    ref_counter_shared<oldscape::graphics::animation::OldscapeAnimKey>::ref_counter_shared(ulong param_1,
                                                                                           OldscapeAnimKey* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7958 + 16;
        *(ulong*)(this + 16) = param_1;
        *(OldscapeAnimKey**)(this + 24) = param_2;
    }

    // 0x1003376b0, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::graphics::animation::OldscapeAnimKey>::DeleteData()
    void ref_counter_shared<oldscape::graphics::animation::OldscapeAnimKey>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~LRUHashCacheWrapper();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 40;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100339d10, 32 bytes, inline, placed by debug map only (low confidence)
    // SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(oldscape::jagex3::Js5&, oldscape::jagex3::Js5&, bool)::$_6>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()> >::allocate(unsigned long, std::__packaged_task_func<std::__bind<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(oldscape::jagex3::Js5&, oldscape::jagex3::Js5&, bool)::$_6>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*)
    /* SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(oldscape::jagex3::Js5&,
   oldscape::jagex3::Js5&, bool)::$_6>, SafeBucketAllocatorSTL<std::packaged_task<void ()>
   >, void ()> >::allocate(unsigned long,
   std::__packaged_task_func<std::__bind<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(oldscape::jagex3::Js5&,
   oldscape::jagex3::Js5&, bool)::$_6>, SafeBucketAllocatorSTL<std::packaged_task<void ()>
   >, void ()>*) */

    void jag::SafeBucketAllocatorSTL<std::__packaged_task_func<
        std::__bind<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(oldscape::jagex3::Js5&,
                                                                                    oldscape::jagex3::Js5&, bool)::$_6>,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::allocate(ulong param_1,
                                                                               __packaged_task_func* param_2) {
        BucketManager::Allocate(48, 4, 8);
    }

    // 0x10033a0f0, 32 bytes, inline, placed by debug map only (low confidence)
    // SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(oldscape::jagex3::Js5&, oldscape::jagex3::Js5&, bool)::$_6>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()> >::deallocate(std::__packaged_task_func<std::__bind<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(oldscape::jagex3::Js5&, oldscape::jagex3::Js5&, bool)::$_6>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*, unsigned long)
    /* SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(oldscape::jagex3::Js5&,
   oldscape::jagex3::Js5&, bool)::$_6>, SafeBucketAllocatorSTL<std::packaged_task<void ()>
   >, void ()>
   >::deallocate(std::__packaged_task_func<std::__bind<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(oldscape::jagex3::Js5&,
   oldscape::jagex3::Js5&, bool)::$_6>, SafeBucketAllocatorSTL<std::packaged_task<void ()>
   >, void ()>*, unsigned long) */

    void jag::SafeBucketAllocatorSTL<std::__packaged_task_func<
        std::__bind<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(oldscape::jagex3::Js5&,
                                                                                    oldscape::jagex3::Js5&, bool)::$_6>,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::deallocate(__packaged_task_func* param_1,
                                                                                 ulong param_2) {
        BucketManager::DeAllocate(param_1, param_2 * 48);
    }

    // 0x10033c110, 64 bytes, inline, placed by debug map only (low confidence)
    // oldscape::graphics::animation::OldscapeAnimCurve* placement_new<oldscape::graphics::animation::OldscapeAnimCurve>(void*)
    OldscapeAnimCurve* placement_new<oldscape::graphics::animation::OldscapeAnimCurve>(void* param_1) {
        *(undefined8*)((long)param_1 + 112) = 0;
        *(undefined8*)((long)param_1 + 120) = 0;
        *(undefined8*)((long)param_1 + 96) = 0;
        *(undefined8*)((long)param_1 + 104) = 0;
        *(undefined8*)((long)param_1 + 80) = 0;
        *(undefined8*)((long)param_1 + 88) = 0;
        *(undefined8*)((long)param_1 + 64) = 0;
        *(undefined8*)((long)param_1 + 72) = 0;
        *(undefined8*)((long)param_1 + 48) = 0;
        *(undefined8*)((long)param_1 + 56) = 0;
        *(undefined8*)((long)param_1 + 32) = 0;
        *(undefined8*)((long)param_1 + 40) = 0;
        *(undefined8*)((long)param_1 + 16) = 0;
        *(undefined8*)((long)param_1 + 24) = 0;
        *(undefined8*)param_1 = 0;
        *(undefined8*)((long)param_1 + 8) = 0;
        oldscape::graphics::animation::OldscapeAnimCurve::OldscapeAnimCurve(param_1);
        return param_1;
    }

    // 0x10033c150, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::graphics::animation::OldscapeAnimCurve>* placement_new<ref_counter_shared<oldscape::graphics::animation::OldscapeAnimCurve>, int, oldscape::graphics::animation::OldscapeAnimCurve*&>(void*, int&&, oldscape::graphics::animation::OldscapeAnimCurve*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::graphics::animation::OldscapeAnimCurve>, int,
                       oldscape::graphics::animation::OldscapeAnimCurve*&>(void* param_1, int* param_2,
                                                                           OldscapeAnimCurve** param_3) {
        ref_counter_shared<oldscape::graphics::animation::OldscapeAnimCurve>::ref_counter_shared(
            param_1, (long)*param_2, *param_3);
        return param_1;
    }

} // namespace jag

namespace jag::oldscape::graphics::animation {
    class OldscapeAnimKey {
    public:
        ~OldscapeAnimKey();
        void LoadFromPacket(PacketJ<Array<unsigned char, eastl::allocator>>&, int);
        OldscapeAnimKey();

        // data members, from how the methods use this: 40 bytes
        char _unknown_0[24];
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
    };

    // 0x100337630, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // OldscapeAnimKey::OldscapeAnimKey(): jumps straight to the base-object constructor

    // 0x100337640, 32 bytes, base-object constructor, inline, placed by class name and debug map
    // OldscapeAnimKey::OldscapeAnimKey()
    void OldscapeAnimKey::OldscapeAnimKey() {
        _func_decltype_nullptr* in_RSI;

        new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(in_RSI);
        field_24 = 9187343237679939583;
        field_32 = 9187343237679939583;
    }

} // namespace jag::oldscape::graphics::animation
