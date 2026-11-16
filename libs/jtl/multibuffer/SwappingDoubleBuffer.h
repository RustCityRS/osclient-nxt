// libs/jtl/multibuffer/SwappingDoubleBuffer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    template <typename...> // 1 instantiations, e.g. <render::DeferredFrameData>
    class SwappingDoubleBuffer {
    public:
        // virtual methods in vtable order
        virtual ~SwappingDoubleBuffer();
        virtual void ConsumerLockBuffer();
        virtual uint64_t ConsumerTryLockBuffer();
        virtual void ProducerLockBuffer();
        virtual void ProducerUnlockBuffer();
        virtual void PreemptConsumer();
        virtual void GetBufferUnsafe(unsigned long arg1);
        virtual void Terminate();
        SwappingDoubleBuffer();
    };

    // 0x100c3e750
    SwappingDoubleBuffer<render::DeferredFrameData>::SwappingDoubleBuffer() : MultiBuffer<render::DeferredFrameData>() {
        DefaultBarrierCompletionFunction defaultBarrierCompletionFunction;

        new ((this + 1)) std::array<render::DeferredFrameData, 2ul>();
        new ((this + 105)) BarrierWithCompletion<DefaultBarrierCompletionFunction>(2, defaultBarrierCompletionFunction);
        *(uint32_t*)((long)&this[124]._vptr + 7) = 0;
    }

    // 0x100c3e850
    void SwappingDoubleBuffer<render::DeferredFrameData>::ConsumerLockBuffer() {

        if (!(((this + 125))->operator_cast_to_bool())) {
            ((this + 105))->Wait();
            if (!(((this + 125))->operator_cast_to_bool())) {
                *(uint8_t*)((long)&this[125]._vptr + 2) = 1;
                ((this + 105))->Wait();
            }
        }
        (*((this + 1)))[(long)*(int*)&this[124]._vptr];
    }

    // 0x100c3e8c0
    uint64_t SwappingDoubleBuffer<render::DeferredFrameData>::ConsumerTryLockBuffer() {
        BarrierWithCompletion<DefaultBarrierCompletionFunction>* this_00;

        bool cVar1 = ((this + 125))->operator_cast_to_bool();
        if (!cVar1) {
            this_00 = (BarrierWithCompletion<DefaultBarrierCompletionFunction>*)(this + 105);
            this_00->Wait();
            *(uint8_t*)((long)&this[125]._vptr + 2) = 0;
            if ((*(char*)((long)&this[125]._vptr + 1) == '\0') &&
                (cVar1 = ((this + 125))->operator_cast_to_bool(), !cVar1)) {
                this_00->Wait();
                return (*((this + 1)))[(long)*(int*)&this[124]._vptr];
            }
            this_00->Wait();
        }
        return 0;
    }

    // 0x100c3e950
    void SwappingDoubleBuffer<render::DeferredFrameData>::ProducerLockBuffer() {
        (*((this + 1)))[(long)*(int*)((long)&this[124]._vptr + 4)];
    }

    // 0x100c3e970
    void SwappingDoubleBuffer<render::DeferredFrameData>::ProducerUnlockBuffer() {

        if (!(((this + 125))->operator_cast_to_bool())) {
            ((this + 105))->Wait();
            eastl::swap<unsigned int>(*((int*)((long)&this[124]._vptr + 4)), *((this + 124)));
            if (!(((this + 125))->operator_cast_to_bool())) {
                ((this + 105))->Wait();
            }
        }
    }

    // 0x100c3e9e0
    void SwappingDoubleBuffer<render::DeferredFrameData>::PreemptConsumer() {

        if (*(char*)((long)&this[125]._vptr + 2) == '\0') {
            if (!(((this + 125))->operator_cast_to_bool())) {
                *(uint8_t*)((long)&this[125]._vptr + 1) = 1;
                ((this + 105))->Wait();
                if (!(((this + 125))->operator_cast_to_bool())) {
                    ((this + 105))->Wait();
                    *(uint8_t*)((long)&this[125]._vptr + 1) = 0;
                }
            }
        }
    }

    // 0x100c3ea50
    void SwappingDoubleBuffer<render::DeferredFrameData>::GetBufferUnsafe(unsigned long arg1) {
        (*((this + 1)))[arg1];
    }

    // 0x100c3ea60
    void SwappingDoubleBuffer<render::DeferredFrameData>::Terminate() {
        (*((this + 125))) = true;
        ((this + 105))->ForceOpen();
    }

    // 0x100c3ec00
    SwappingDoubleBuffer<render::DeferredFrameData>::~SwappingDoubleBuffer() {
        ((this + 105))->~BarrierWithCompletion();
        ((this + 1))->~array();
    }

} // namespace jag
