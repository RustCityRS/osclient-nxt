// libs/jtl/multibuffer/SwappingDoubleBuffer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    template <typename...> // 1 instantiations, e.g. <render::DeferredFrameData>
    class SwappingDoubleBuffer {
    public:
        // virtual methods in vtable order
        virtual ~SwappingDoubleBuffer();
        virtual void ConsumerLockBuffer();
        virtual ConsumerTryLockBuffer();
        virtual void ProducerLockBuffer();
        virtual void ProducerUnlockBuffer();
        virtual void PreemptConsumer();
        virtual void GetBufferUnsafe(unsigned long);
        virtual void Terminate();
        SwappingDoubleBuffer();
    };

    // 0x100c3e730, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // SwappingDoubleBuffer<render::DeferredFrameData>::SwappingDoubleBuffer(): jumps straight to the base-object constructor

    // 0x100c3e750, 128 bytes, base-object constructor, inline, placed by class name and debug map
    // SwappingDoubleBuffer<render::DeferredFrameData>::SwappingDoubleBuffer()
    void SwappingDoubleBuffer<render::DeferredFrameData>::SwappingDoubleBuffer() {
        new (this) MultiBuffer<render::DeferredFrameData>();
        *(undefined**)this = PTR_vtable_100ee79a8 + 16;
        new ((this + 8)) std::array<render::DeferredFrameData, 2ul>();
        new ((this + 840)) BarrierWithCompletion<DefaultBarrierCompletionFunction>(2);
        *(undefined8*)(this + 992) = 1;
        *(undefined4*)(this + 999) = 0;
    }

    // 0x100c3e820, 16 bytes, complete-object destructor, inline, placed by class name
    // SwappingDoubleBuffer<render::DeferredFrameData>::~SwappingDoubleBuffer(): jumps straight to the base-object destructor

    // 0x100c3e830, 32 bytes, deleting destructor, inline, placed by class name
    // SwappingDoubleBuffer<render::DeferredFrameData>::~SwappingDoubleBuffer()
    void SwappingDoubleBuffer<render::DeferredFrameData>::~SwappingDoubleBuffer() {
        ~SwappingDoubleBuffer(this);
        operator_delete(this);
    }

    // 0x100c3e850, 112 bytes, inline, placed by class name
    // SwappingDoubleBuffer<render::DeferredFrameData>::ConsumerLockBuffer()
    void SwappingDoubleBuffer<render::DeferredFrameData>::ConsumerLockBuffer() {
        bool bVar1;

        bVar1 = ((this + 1000))->operator_cast_to_bool();
        if (!bVar1) {
            ((this + 840))->Wait();
            bVar1 = ((this + 1000))->operator_cast_to_bool();
            if (!bVar1) {
                this[1002] = (SwappingDoubleBuffer<render::DeferredFrameData>)1;
                ((this + 840))->Wait();
            }
        }
        std::array<render::DeferredFrameData, 2ul>::operator[]((array<render::DeferredFrameData, 2ul>*)(this + 8),
                                                               (long)*(int*)(this + 992));
    }

    // 0x100c3e8c0, 144 bytes, inline, placed by class name
    // SwappingDoubleBuffer<render::DeferredFrameData>::ConsumerTryLockBuffer()
    undefined8 SwappingDoubleBuffer<render::DeferredFrameData>::ConsumerTryLockBuffer() {
        BarrierWithCompletion<DefaultBarrierCompletionFunction>* this_00;
        bool bVar1;
        undefined8 uVar2;

        bVar1 = ((this + 1000))->operator_cast_to_bool();
        if (!bVar1) {
            this_00 = (BarrierWithCompletion<DefaultBarrierCompletionFunction>*)(this + 840);
            this_00->Wait();
            this[1002] = (SwappingDoubleBuffer<render::DeferredFrameData>)0;
            if ((this[1001] == (SwappingDoubleBuffer<render::DeferredFrameData>)0) &&
                (bVar1 = ((this + 1000))->operator_cast_to_bool(), !bVar1)) {
                this_00->Wait();
                uVar2 = std::array<render::DeferredFrameData, 2ul>::operator[](
                    (array<render::DeferredFrameData, 2ul>*)(this + 8), (long)*(int*)(this + 992));
                return uVar2;
            }
            this_00->Wait();
        }
        return 0;
    }

    // 0x100c3e950, 32 bytes, inline, placed by class name
    // SwappingDoubleBuffer<render::DeferredFrameData>::ProducerLockBuffer()
    void SwappingDoubleBuffer<render::DeferredFrameData>::ProducerLockBuffer() {
        std::array<render::DeferredFrameData, 2ul>::operator[]((array<render::DeferredFrameData, 2ul>*)(this + 8),
                                                               (long)*(int*)(this + 996));
    }

    // 0x100c3e970, 112 bytes, inline, placed by class name
    // SwappingDoubleBuffer<render::DeferredFrameData>::ProducerUnlockBuffer()
    void SwappingDoubleBuffer<render::DeferredFrameData>::ProducerUnlockBuffer() {
        bool bVar1;

        bVar1 = ((this + 1000))->operator_cast_to_bool();
        if (!bVar1) {
            ((this + 840))->Wait();
            eastl::swap<unsigned int>((uint*)(this + 996), (uint*)(this + 992));
            bVar1 = ((this + 1000))->operator_cast_to_bool();
            if (!bVar1) {
                ((this + 840))->Wait();
            }
        }
    }

    // 0x100c3e9e0, 112 bytes, inline, placed by class name
    // SwappingDoubleBuffer<render::DeferredFrameData>::PreemptConsumer()
    void SwappingDoubleBuffer<render::DeferredFrameData>::PreemptConsumer() {
        bool bVar1;

        if (this[1002] == (SwappingDoubleBuffer<render::DeferredFrameData>)0) {
            bVar1 = ((this + 1000))->operator_cast_to_bool();
            if (!bVar1) {
                this[1001] = (SwappingDoubleBuffer<render::DeferredFrameData>)1;
                ((this + 840))->Wait();
                bVar1 = ((this + 1000))->operator_cast_to_bool();
                if (!bVar1) {
                    ((this + 840))->Wait();
                    this[1001] = (SwappingDoubleBuffer<render::DeferredFrameData>)0;
                }
            }
        }
    }

    // 0x100c3ea50, 16 bytes, inline, placed by class name
    // SwappingDoubleBuffer<render::DeferredFrameData>::GetBufferUnsafe(unsigned long)
    void SwappingDoubleBuffer<render::DeferredFrameData>::GetBufferUnsafe(ulong param_1) {
        std::array<render::DeferredFrameData, 2ul>::operator[]((array<render::DeferredFrameData, 2ul>*)(this + 8),
                                                               param_1);
    }

    // 0x100c3ea60, 48 bytes, inline, placed by class name
    // SwappingDoubleBuffer<render::DeferredFrameData>::Terminate()
    void SwappingDoubleBuffer<render::DeferredFrameData>::Terminate() {
        std::atomic<bool>::operator=((atomic<bool>*)(this + 1000), true);
        ((this + 840))->ForceOpen();
    }

    // 0x100c3ec00, 64 bytes, base-object destructor, inline, placed by class name
    // SwappingDoubleBuffer<render::DeferredFrameData>::~SwappingDoubleBuffer()
    void SwappingDoubleBuffer<render::DeferredFrameData>::~SwappingDoubleBuffer() {
        *(undefined**)this = PTR_vtable_100ee79a8 + 16;
        ((this + 840))->~BarrierWithCompletion();
        ((this + 8))->~array();
        ~AutoSingleton();
    }

} // namespace jag
