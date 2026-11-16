// libs/hal/thread/Barrier.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    template <
        typename...> // 2 instantiations, e.g. <DefaultBarrierCompletionFunction>, <oldscape::dash3d::NXTRenderer::FrameBarrierCallback>
    class BarrierWithCompletion {
    public:
        void ArriveAndDrop();
        bool WaitInner(std::unique_lock<std::mutex>&);
        void Wait();
        BarrierWithCompletion(unsigned long, oldscape::dash3d::NXTRenderer::FrameBarrierCallback);
        ~BarrierWithCompletion();
        void ForceOpen();
        BarrierWithCompletion(unsigned long, DefaultBarrierCompletionFunction);
    };

    // 0x1003722e0, 112 bytes, inline, placed by debug map only (low confidence)
    // BarrierWithCompletion<oldscape::dash3d::NXTRenderer::FrameBarrierCallback>::ArriveAndDrop()
    void BarrierWithCompletion<oldscape::dash3d::NXTRenderer::FrameBarrierCallback>::ArriveAndDrop() {
        unique_lock<std::mutex> local_20[16];

        std::unique_lock<std::mutex>::unique_lock(local_20, (mutex*)this);
        if (1 < *(ulong*)(this + 112)) {
            *(ulong*)(this + 112) = *(ulong*)(this + 112) - 1;
        }
        if (WaitInner(this, (unique_lock*)local_20) == '\0') {
            *(long*)(this + 120) = *(long*)(this + 120) + -1;
        }
        std::unique_lock<std::mutex>::~unique_lock(local_20);
    }

    // 0x100372360, 96 bytes, inline, placed by debug map only (low confidence)
    // BarrierWithCompletion<oldscape::dash3d::NXTRenderer::FrameBarrierCallback>::WaitInner(std::unique_lock<std::mutex>&)
    /* BarrierWithCompletion<oldscape::dash3d::NXTRenderer::FrameBarrierCallback>::WaitInner(std::unique_lock<std::mutex>&)
    */

    bool BarrierWithCompletion<oldscape::dash3d::NXTRenderer::FrameBarrierCallback>::WaitInner(unique_lock* param_1) {
        long lVar1;

        lVar1 = *(long*)(this + 120);
        if (lVar1 == 1) {
            *(long*)(this + 128) = *(long*)(this + 128) + 1;
            *(undefined8*)(this + 120) = *(undefined8*)(this + 112);
            oldscape::dash3d::NXTRenderer::FrameBarrierCallback::operator()((FrameBarrierCallback*)(this + 136));
            param_1->unlock();
            std::condition_variable::notify_all();
        }
        return lVar1 == 1;
    }

    // 0x100372420, 128 bytes, inline, placed by debug map only (low confidence)
    // BarrierWithCompletion<oldscape::dash3d::NXTRenderer::FrameBarrierCallback>::Wait()
    void BarrierWithCompletion<oldscape::dash3d::NXTRenderer::FrameBarrierCallback>::Wait() {
        unique_lock<std::mutex> local_30[16];
        undefined8 local_20;

        std::unique_lock<std::mutex>::unique_lock(local_30, (mutex*)this);
        if (WaitInner(this, (unique_lock*)local_30) == '\0') {
            *(long*)(this + 120) = *(long*)(this + 120) + -1;
            local_20 = *(undefined8*)(this + 128);
            std::condition_variable::wait<
                BarrierWithCompletion<oldscape::dash3d::NXTRenderer::FrameBarrierCallback>::Wait()::_lambda() _1_>(
                this + 64, local_30, &local_20, this);
        }
        std::unique_lock<std::mutex>::~unique_lock(local_30);
    }

    // 0x100372500, 32 bytes, inline, placed by debug map only (low confidence)
    // BarrierWithCompletion<oldscape::dash3d::NXTRenderer::FrameBarrierCallback>::Wait()::{lambda()#1}::operator()() const
    /* BarrierWithCompletion<DefaultBarrierCompletionFunction>::Wait()::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE()
   const */

    undefined8 BarrierWithCompletion<DefaultBarrierCompletionFunction>::Wait()::{
        lambda() #1
    }
    ::operator()() {
        return CONCAT71((int7)((ulong) * *(long**)this >> 8), **(long**)this != *(long*)(*(long*)(this + 8) + 128));
    }

    // 0x100372570, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // BarrierWithCompletion<oldscape::dash3d::NXTRenderer::FrameBarrierCallback>::BarrierWithCompletion(unsigned long, oldscape::dash3d::NXTRenderer::FrameBarrierCallback): jumps straight to the base-object constructor

    // 0x100372580, 96 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // BarrierWithCompletion<oldscape::dash3d::NXTRenderer::FrameBarrierCallback>::BarrierWithCompletion(unsigned long, oldscape::dash3d::NXTRenderer::FrameBarrierCallback)
    void BarrierWithCompletion<oldscape::dash3d::NXTRenderer::FrameBarrierCallback>::BarrierWithCompletion(
        ulong param_1, FrameBarrierCallback param_2) {
        new (this) std::mutex();
        new ((this + 64)) std::condition_variable();
        *(ulong*)(this + 112) = param_1;
        *(ulong*)(this + 120) = param_1;
        *(undefined8*)(this + 128) = 0;
        *(NXTRenderer**)(this + 136) = param_2.field_0;
        *(undefined8*)(this + 144) = 0;
    }

    // 0x1003726e0, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // BarrierWithCompletion<oldscape::dash3d::NXTRenderer::FrameBarrierCallback>::~BarrierWithCompletion(): jumps straight to the base-object destructor

    // 0x1003726f0, 80 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // BarrierWithCompletion<oldscape::dash3d::NXTRenderer::FrameBarrierCallback>::~BarrierWithCompletion()
    void BarrierWithCompletion<oldscape::dash3d::NXTRenderer::FrameBarrierCallback>::~BarrierWithCompletion() {
        ForceOpen();
        ((this + 64))->~condition_variable();
        ~mutex();
    }

    // 0x100372740, 80 bytes, inline, placed by debug map only (low confidence)
    // BarrierWithCompletion<oldscape::dash3d::NXTRenderer::FrameBarrierCallback>::ForceOpen()
    /* BarrierWithCompletion<DefaultBarrierCompletionFunction>::ForceOpen() */

    void BarrierWithCompletion<DefaultBarrierCompletionFunction>::ForceOpen() {
        scoped_lock<std::mutex> local_20[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_20, (mutex*)this);
        *(long*)(this + 128) = *(long*)(this + 128) + 1;
        std::scoped_lock<std::mutex>::~scoped_lock(local_20);
        std::condition_variable::notify_all();
    }

} // namespace jag

namespace jag::oldscape::dash3d {
    // 0x100372800, 176 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // OperationRecordEntry::OperationRecordEntry(shared_ptr<Operation> const&, ResolvedModel const&, ResolvedModel const&)
    void OperationRecordEntry::OperationRecordEntry(shared_ptr* param_1, ResolvedModel* param_2,
                                                    ResolvedModel* param_3) {
        new (this) shared_ptr<Decor>(param_1);
        new (m_inputModel, param_2) ResolvedModel();
        new (m_outputModel, param_3) ResolvedModel();
        if (!operator_cast_to_bool()) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_operation",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "Operation.h",
                      140, "Operation may not be null.");
        }
    }

    // 0x1003728b0, 48 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // OperationRecordEntry::~OperationRecordEntry()
    void OperationRecordEntry::~OperationRecordEntry() {
        m_outputModel->~ResolvedModel();
        m_inputModel->~ResolvedModel();
        ~shared_ptr();
    }

    // 0x1003728e0, 128 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ResolvedModel::ResolvedModel(shared_ptr<jag::graphics::Model> const&, shared_ptr<jag::graphics::Model> const&, shared_ptr<PoseStateRSeven> const&, jag::math::Matrix44T<float>)
    void ResolvedModel::ResolvedModel(shared_ptr* param_1, shared_ptr* param_2, shared_ptr* param_3,
                                      Matrix44T param_4) {
        undefined8 in_stack_00000040;

        new (this) shared_ptr<Decor>(param_1);
        new (&field_16, param_2) shared_ptr<Decor>();
        new (&m_animationState, param_3) shared_ptr<Decor>();
        field_96 = param_4._48_8_;
        field_104 = in_stack_00000040;
        field_80 = param_4._32_8_;
        field_88 = param_4._40_8_;
        field_64 = param_4._16_8_;
        field_72 = param_4._24_8_;
        field_48 = param_4._0_8_;
        field_56 = param_4._8_8_;
    }

    // 0x100372960, 144 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ResolvedModel::ResolvedModel(ResolvedModel const&)
    void ResolvedModel::ResolvedModel(ResolvedModel* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;

        new (this) shared_ptr<Decor>(param_1);
        new (&field_16, (shared_ptr*)&param_1->field_16) shared_ptr<Decor>();
        new (&m_animationState, (shared_ptr*)&param_1->m_animationState) shared_ptr<Decor>();
        uVar1 = param_1->field_48;
        uVar2 = param_1->field_56;
        uVar3 = param_1->field_64;
        uVar4 = param_1->field_72;
        uVar5 = param_1->field_80;
        uVar6 = param_1->field_88;
        uVar7 = param_1->field_104;
        field_96 = param_1->field_96;
        field_104 = uVar7;
        field_80 = uVar5;
        field_88 = uVar6;
        field_64 = uVar3;
        field_72 = uVar4;
        field_48 = uVar1;
        field_56 = uVar2;
    }

} // namespace jag::oldscape::dash3d
