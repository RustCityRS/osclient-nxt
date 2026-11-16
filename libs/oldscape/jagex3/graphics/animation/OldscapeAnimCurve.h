// libs/oldscape/jagex3/graphics/animation/OldscapeAnimCurve.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    // 0x10033c1d0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::graphics::animation::OldscapeAnimCurve>::ref_counter_shared(unsigned long, oldscape::graphics::animation::OldscapeAnimCurve*): jumps straight to the base-object constructor

    // 0x10033c1e0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::graphics::animation::OldscapeAnimCurve>::ref_counter_shared(unsigned long, oldscape::graphics::animation::OldscapeAnimCurve*)
    void ref_counter_shared<oldscape::graphics::animation::OldscapeAnimCurve>::ref_counter_shared(
        ulong param_1, OldscapeAnimCurve* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7960 + 16;
        *(ulong*)(this + 16) = param_1;
        *(OldscapeAnimCurve**)(this + 24) = param_2;
    }

    // 0x10033c220, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::graphics::animation::OldscapeAnimCurve>::DeleteData()
    void ref_counter_shared<oldscape::graphics::animation::OldscapeAnimCurve>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~OldscapeAnimCurve();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 128;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x10033c420, 48 bytes, inline, placed by debug map only (low confidence)
    // oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob* placement_new<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>(void*)
    OldscapeAnimCurveLoadJob*
    jag::placement_new<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>(
        void* param_1) {
        *(undefined8*)param_1 = 0;
        *(undefined8*)((long)param_1 + 8) = 0;
        *(undefined8*)((long)param_1 + 16) = 0;
        oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob::OldscapeAnimCurveLoadJob(
            param_1);
        return param_1;
    }

    // 0x10033c450, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>* placement_new<ref_counter_shared<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>, int, oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob*&>(void*, int&&, oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob*&)
    ref_counter_shared* jag::placement_new<
        ref_counter_shared<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>, int,
        oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob*&>(
        void* param_1, int* param_2, OldscapeAnimCurveLoadJob** param_3) {
        ref_counter_shared<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>::
            ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10033c470, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>::ref_counter_shared(unsigned long, oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob*): jumps straight to the base-object constructor

    // 0x10033c480, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>::ref_counter_shared(unsigned long, oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob*)
    void jag::ref_counter_shared<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>::
        ref_counter_shared(ulong param_1, OldscapeAnimCurveLoadJob* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7968 + 16;
        *(ulong*)(this + 16) = param_1;
        *(OldscapeAnimCurveLoadJob**)(this + 24) = param_2;
    }

    // 0x10033c4c0, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>::DeleteData()
    void jag::ref_counter_shared<
        oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~LRUHashCacheWrapper();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 24;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x10033c9a0, 32 bytes, inline, placed by debug map only (low confidence)
    // SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(oldscape::PacketJ<Array<unsigned char, eastl::allocator> >&, int)::$_7>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()> >::allocate(unsigned long, std::__packaged_task_func<std::__bind<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(oldscape::PacketJ<Array<unsigned char, eastl::allocator> >&, int)::$_7>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*)
    /* SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(oldscape::PacketJ<Array<unsigned
   char, eastl::allocator> >&, int)::$_7>, SafeBucketAllocatorSTL<std::packaged_task<void ()>
   >, void ()> >::allocate(unsigned long,
   std::__packaged_task_func<std::__bind<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(oldscape::PacketJ<Array<unsigned
   char, eastl::allocator> >&, int)::$_7>, SafeBucketAllocatorSTL<std::packaged_task<void ()>
   >, void ()>*) */

    void jag::SafeBucketAllocatorSTL<std::__packaged_task_func<
        std::__bind<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(
            oldscape::PacketJ<Array<unsigned char, eastl::allocator>>&, int)::$_7>,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::allocate(ulong param_1,
                                                                               __packaged_task_func* param_2) {
        BucketManager::Allocate(72, 4, 8);
    }

    // 0x10033cd90, 32 bytes, inline, placed by debug map only (low confidence)
    // SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(oldscape::PacketJ<Array<unsigned char, eastl::allocator> >&, int)::$_7>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()> >::deallocate(std::__packaged_task_func<std::__bind<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(oldscape::PacketJ<Array<unsigned char, eastl::allocator> >&, int)::$_7>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*, unsigned long)
    /* SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(oldscape::PacketJ<Array<unsigned
   char, eastl::allocator> >&, int)::$_7>, SafeBucketAllocatorSTL<std::packaged_task<void ()>
   >, void ()>
   >::deallocate(std::__packaged_task_func<std::__bind<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(oldscape::PacketJ<Array<unsigned
   char, eastl::allocator> >&, int)::$_7>, SafeBucketAllocatorSTL<std::packaged_task<void ()>
   >, void ()>*, unsigned long) */

    void jag::SafeBucketAllocatorSTL<std::__packaged_task_func<
        std::__bind<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(
            oldscape::PacketJ<Array<unsigned char, eastl::allocator>>&, int)::$_7>,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::deallocate(__packaged_task_func* param_1,
                                                                                 ulong param_2) {
        BucketManager::DeAllocate(param_1, param_2 * 72);
    }

} // namespace jag

namespace jag::oldscape::graphics::animation {
    class OldscapeAnimCurve {
    public:
        ulong LoadFromPacket(PacketJ<Array<unsigned char, eastl::allocator>>&, int);
        void ConvertKeysToFrames();
        GetNumKeys() const;
        int GetDuration();
        GetStart() const;
        GetEnd() const;
        GetValue(int);
        int GetKeyIndexAtTime(float);
        GetKeyAtTime(float);
        OldscapeAnimCurve();
        ~OldscapeAnimCurve();

        // data members, from how the methods use this: 132 bytes
        char _unknown_0[76];
        undefined1 field_76; // offset 76
        char _unknown_77[3];
        int field_80; // offset 80
        char _unknown_84[28];
        undefined4 m_start;   // offset 112
        undefined4 m_end;     // offset 116
        undefined4 field_120; // offset 120
        undefined4 field_124; // offset 124
        char _unknown_128[4];
    };

    // 0x10033c170, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // OldscapeAnimCurve::OldscapeAnimCurve(): jumps straight to the base-object constructor

    // 0x10033c180, 80 bytes, base-object constructor, inline, placed by class name and debug map
    // OldscapeAnimCurve::OldscapeAnimCurve()
    void OldscapeAnimCurve::OldscapeAnimCurve() {
        new (&field_8) Array<shared_ptr<OldscapeAnimKey>, eastl::allocator>();
        field_76 = 1;
        field_80 = 0;
        new (&field_88) Array<float, eastl::allocator>();
    }

    // 0x10033c270, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // OldscapeAnimCurve::~OldscapeAnimCurve(): jumps straight to the base-object destructor

    // 0x10033c280, 48 bytes, base-object destructor, inline, placed by class name and debug map
    // OldscapeAnimCurve::~OldscapeAnimCurve()
    void OldscapeAnimCurve::~OldscapeAnimCurve() {
        (&field_88)->~Array();
        (&field_8)->~Array();
    }

} // namespace jag::oldscape::graphics::animation
