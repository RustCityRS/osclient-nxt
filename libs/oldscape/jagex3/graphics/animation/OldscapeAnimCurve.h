// libs/oldscape/jagex3/graphics/animation/OldscapeAnimCurve.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x10033c1e0
    ref_counter_shared<oldscape::graphics::animation::OldscapeAnimCurve>::ref_counter_shared(
        unsigned long arg1, oldscape::graphics::animation::OldscapeAnimCurve* oldscapeAnimCurve)
        : ref_counter_base() {}

    // 0x10033c220
    void ref_counter_shared<oldscape::graphics::animation::OldscapeAnimCurve>::DeleteData() {
        ref_counter_shared<oldscape::graphics::animation::OldscapeAnimCurve> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((OldscapeAnimCurve*)((long)&(this[3]._vptr)->_dtor + lVar2))->~OldscapeAnimCurve();
                    prVar1 = (ref_counter_shared<oldscape::graphics::animation::OldscapeAnimCurve> _vtbl*)((long)&prVar1
                                                                                                               ->_dtor +
                                                                                                           1);
                    lVar2 = lVar2 + 128;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x10033c420
    oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob*
    placement_new<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>(void* arg1) {
        *(uint64_t*)arg1 = 0;
        *(uint64_t*)((long)arg1 + 8) = 0;
        *(uint64_t*)((long)arg1 + 16) = 0;
        new (arg1) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        return arg1;
    }

    // 0x10033c450
    ref_counter_shared<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>*
    placement_new<ref_counter_shared<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>,
                  int, oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob*&>(
        void* arg1, int&& arg2,
        oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob*& arg3) {
        new (arg1) ref_counter_shared<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>(
            (long)*arg2, arg3);
        return arg1;
    }

    // 0x10033c480
    ref_counter_shared<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>::
        ref_counter_shared(
            unsigned long arg1,
            oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob* oldscapeAnimCurveLoadJob)
        : ref_counter_base() {}

    // 0x10033c4c0
    void
    ref_counter_shared<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>::DeleteData() {
        ref_counter_shared<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob> _vtbl*
            prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((LRUHashCacheWrapper<oldscape::configdecoder::VarBitType,
                                          unsigned long long>*)((long)&(this[3]._vptr)->_dtor + lVar2))
                        ->~LRUHashCacheWrapper();
                    prVar1 = (ref_counter_shared<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::
                                                     OldscapeAnimCurveLoadJob> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 24;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x10033c9a0
    void SafeBucketAllocatorSTL<
        std::__packaged_task_func<std::__bind<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(
                                      oldscape::PacketJ<Array<unsigned char>>&, int)::$_7>,
                                  SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::
        allocate(unsigned long arg1,
                 std::__packaged_task_func<
                     std::__bind<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(
                         oldscape::PacketJ<Array<unsigned char>>&, int)::$_7>,
                     SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func) {
        BucketManager::Allocate(72, 4, 8);
    }

    // 0x10033cd90
    void SafeBucketAllocatorSTL<
        std::__packaged_task_func<std::__bind<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(
                                      oldscape::PacketJ<Array<unsigned char>>&, int)::$_7>,
                                  SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::
        deallocate(std::__packaged_task_func<
                       std::__bind<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(
                           oldscape::PacketJ<Array<unsigned char>>&, int)::$_7>,
                       SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func,
                   unsigned long arg2) {
        DeAllocate((void*)((long)packaged_task_func * 72), arg2);
    }

} // namespace jag

namespace jag::oldscape::graphics::animation {
    class OldscapeAnimCurve {
    public:
        unsigned long LoadFromPacket(PacketJ<Array<unsigned char>>& packetJ, int arg2);
        void ConvertKeysToFrames();
        uint64_t GetNumKeys() const;
        int GetDuration();
        uint32_t GetStart() const;
        uint32_t GetEnd() const;
        uint32_t GetValue(int arg1);
        int GetKeyIndexAtTime(float arg1);
        auto GetKeyAtTime(float arg1);
        OldscapeAnimCurve();
        ~OldscapeAnimCurve();

    private:
        uint8_t _unknown_0[76];
        uint8_t field_76;
        uint8_t _unknown_77[3];
        int field_80;
        uint8_t _unknown_84[28];
        uint32_t m_start;
        uint32_t m_end;
        uint32_t field_120;
        uint32_t field_124;
        uint8_t _unknown_128[4];
    };

    // 0x10033c180
    OldscapeAnimCurve::OldscapeAnimCurve() : field_76(1), field_80(0) {}

    // 0x10033c280
    OldscapeAnimCurve::~OldscapeAnimCurve() {
        field_88.~Array();
        field_8.~Array();
    }

} // namespace jag::oldscape::graphics::animation
