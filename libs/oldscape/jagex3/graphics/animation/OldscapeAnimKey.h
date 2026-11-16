// libs/oldscape/jagex3/graphics/animation/OldscapeAnimKey.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x100337670
    ref_counter_shared<oldscape::graphics::animation::OldscapeAnimKey>::ref_counter_shared(
        unsigned long arg1, oldscape::graphics::animation::OldscapeAnimKey* oldscapeAnimKey)
        : ref_counter_base() {}

    // 0x1003376b0
    void ref_counter_shared<oldscape::graphics::animation::OldscapeAnimKey>::DeleteData() {
        ref_counter_shared<oldscape::graphics::animation::OldscapeAnimKey> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((LRUHashCacheWrapper<oldscape::configdecoder::VarBitType,
                                          unsigned long long>*)((long)&(this[3]._vptr)->_dtor + lVar2))
                        ->~LRUHashCacheWrapper();
                    prVar1 = (ref_counter_shared<oldscape::graphics::animation::OldscapeAnimKey> _vtbl*)((long)&prVar1
                                                                                                             ->_dtor +
                                                                                                         1);
                    lVar2 = lVar2 + 40;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x100339d10
    void SafeBucketAllocatorSTL<
        std::__packaged_task_func<std::__bind<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(
                                      oldscape::jagex3::Js5&, oldscape::jagex3::Js5&, bool)::$_6>,
                                  SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::
        allocate(
            unsigned long arg1,
            std::__packaged_task_func<std::__bind<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(
                                          oldscape::jagex3::Js5&, oldscape::jagex3::Js5&, bool)::$_6>,
                                      SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func) {
        BucketManager::Allocate(48, 4, 8);
    }

    // 0x10033a0f0
    void SafeBucketAllocatorSTL<
        std::__packaged_task_func<std::__bind<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(
                                      oldscape::jagex3::Js5&, oldscape::jagex3::Js5&, bool)::$_6>,
                                  SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::
        deallocate(
            std::__packaged_task_func<std::__bind<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(
                                          oldscape::jagex3::Js5&, oldscape::jagex3::Js5&, bool)::$_6>,
                                      SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func,
            unsigned long arg2) {
        DeAllocate((void*)((long)packaged_task_func * 48), arg2);
    }

    // 0x10033c110
    oldscape::graphics::animation::OldscapeAnimCurve*
    placement_new<oldscape::graphics::animation::OldscapeAnimCurve>(void* arg1) {
        *(uint64_t*)((long)arg1 + 112) = 0;
        *(uint64_t*)((long)arg1 + 120) = 0;
        *(uint64_t*)((long)arg1 + 96) = 0;
        *(uint64_t*)((long)arg1 + 104) = 0;
        *(uint64_t*)((long)arg1 + 80) = 0;
        *(uint64_t*)((long)arg1 + 88) = 0;
        *(uint64_t*)((long)arg1 + 64) = 0;
        *(uint64_t*)((long)arg1 + 72) = 0;
        *(uint64_t*)((long)arg1 + 48) = 0;
        *(uint64_t*)((long)arg1 + 56) = 0;
        *(uint64_t*)((long)arg1 + 32) = 0;
        *(uint64_t*)((long)arg1 + 40) = 0;
        *(uint64_t*)((long)arg1 + 16) = 0;
        *(uint64_t*)((long)arg1 + 24) = 0;
        *(uint64_t*)arg1 = 0;
        *(uint64_t*)((long)arg1 + 8) = 0;
        new (arg1) oldscape::graphics::animation::OldscapeAnimCurve();
        return arg1;
    }

    // 0x10033c150
    ref_counter_shared<oldscape::graphics::animation::OldscapeAnimCurve>*
    placement_new<ref_counter_shared<oldscape::graphics::animation::OldscapeAnimCurve>, int,
                  oldscape::graphics::animation::OldscapeAnimCurve*&>(
        void* arg1, int&& arg2, oldscape::graphics::animation::OldscapeAnimCurve*& arg3) {
        new (arg1) ref_counter_shared<oldscape::graphics::animation::OldscapeAnimCurve>((long)*arg2, arg3);
        return arg1;
    }

} // namespace jag

namespace jag::oldscape::graphics::animation {
    class OldscapeAnimKey {
    public:
        ~OldscapeAnimKey();
        void LoadFromPacket(PacketJ<Array<unsigned char>>& packetJ, int arg2);
        OldscapeAnimKey();

    private:
        uint8_t _unknown_0[24];
        uint64_t field_24;
        uint64_t field_32;
    };

    // 0x100337640
    OldscapeAnimKey::OldscapeAnimKey() : shared_ptr(), field_24(9187343237679939583), field_32(9187343237679939583) {}

} // namespace jag::oldscape::graphics::animation
