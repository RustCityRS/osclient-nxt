// libs/hal/thread/Barrier.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    template <
        typename...> // 2 instantiations, e.g. <DefaultBarrierCompletionFunction>, <oldscape::dash3d::NXTRenderer::FrameBarrierCallback>
    class BarrierWithCompletion {
    public:
        void ArriveAndDrop();
        bool WaitInner(std::unique_lock<std::mutex>& unique_lock);
        void Wait();
        BarrierWithCompletion(unsigned long arg1,
                              oldscape::dash3d::NXTRenderer::FrameBarrierCallback frameBarrierCallback);
        ~BarrierWithCompletion();
        void ForceOpen();
        BarrierWithCompletion(unsigned long arg1, DefaultBarrierCompletionFunction defaultBarrierCompletionFunction);
    };

    // 0x1003722e0
    void BarrierWithCompletion<oldscape::dash3d::NXTRenderer::FrameBarrierCallback>::ArriveAndDrop() {

        unique_lock<std::mutex> local_20(*this);
        if (1 < *(unsigned long*)(this + 112)) {
            *(unsigned long*)(this + 112) = *(unsigned long*)(this + 112) - 1;
        }
        if (WaitInner(this, &local_20) == '\0') {
            *(long*)(this + 120) = *(long*)(this + 120) - 1;
        }
    }

    // 0x100372360
    bool BarrierWithCompletion<oldscape::dash3d::NXTRenderer::FrameBarrierCallback>::WaitInner(
        std::unique_lock<std::mutex>& unique_lock) {
        long lVar1 = *(long*)(this + 120);
        if (lVar1 == 1) {
            *(long*)(this + 128) = *(long*)(this + 128) + 1;
            *(uint64_t*)(this + 120) = *(uint64_t*)(this + 112);
            oldscape::dash3d::NXTRenderer::FrameBarrierCallback::operator()((FrameBarrierCallback*)(this + 136));
            unique_lock.unlock();
            std::condition_variable::notify_all();
        }
        return lVar1 == 1;
    }

    // 0x100372420
    void BarrierWithCompletion<oldscape::dash3d::NXTRenderer::FrameBarrierCallback>::Wait() {
        uint64_t local_20;

        unique_lock<std::mutex> local_30(*this);
        if (WaitInner(this, &local_30) == '\0') {
            *(long*)(this + 120) = *(long*)(this + 120) - 1;
            local_20 = *(uint64_t*)(this + 128);
            ((this + 64))
                ->wait<BarrierWithCompletion<oldscape::dash3d::NXTRenderer::FrameBarrierCallback>::Wait()::_lambda()
                           _1_>(&local_30, &local_20);
        }
    }

    // 0x100372500
    uint64_t BarrierWithCompletion<oldscape::dash3d::NXTRenderer::FrameBarrierCallback>::Wait()::{
        lambda() #1
    }
    ::operator()() const {
        return **(long**)this != *(long*)(*(long*)(this + 8) + 128);
    }

    // 0x100372580
    BarrierWithCompletion<oldscape::dash3d::NXTRenderer::FrameBarrierCallback>::BarrierWithCompletion(
        unsigned long arg1, oldscape::dash3d::NXTRenderer::FrameBarrierCallback frameBarrierCallback)
        : std::mutex() {
        uint64_t in_RDX;

        new ((this + 64)) std::condition_variable();
        *(unsigned long*)(this + 112) = arg1;
        *(unsigned long*)(this + 120) = arg1;
        *(uint64_t*)(this + 128) = 0;
        *(uint64_t*)(this + 136) = in_RDX;
        *(uint64_t*)(this + 144) = 0;
    }

    // 0x1003726f0
    BarrierWithCompletion<oldscape::dash3d::NXTRenderer::FrameBarrierCallback>::~BarrierWithCompletion() {
        ForceOpen();
        ((this + 64))->~condition_variable();
    }

    // 0x100372740
    void BarrierWithCompletion<oldscape::dash3d::NXTRenderer::FrameBarrierCallback>::ForceOpen() {

        scoped_lock<std::mutex> local_20(*this);
        *(long*)(this + 128) = *(long*)(this + 128) + 1;
        std::condition_variable::notify_all();
    }

} // namespace jag

namespace jag::oldscape::dash3d {
    // 0x100372800
    OperationRecordEntry::OperationRecordEntry(const shared_ptr<Operation>& operation,
                                               const ResolvedModel& resolvedModel1, const ResolvedModel& resolvedModel2)
        : shared_ptr(operation), m_inputModel(resolvedModel1), m_outputModel(resolvedModel2) {
        if (operator_cast_to_bool() == '\0') {
            LogAssert("m_operation",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "Operation.h",
                      140, "Operation may not be null.");
        }
    }

    // 0x1003728b0
    OperationRecordEntry::~OperationRecordEntry() {
        m_outputModel->~ResolvedModel();
        m_inputModel->~ResolvedModel();
    }

    // 0x1003728e0
    ResolvedModel::ResolvedModel(const shared_ptr<jag::graphics::Model>& model1,
                                 const shared_ptr<jag::graphics::Model>& model2,
                                 const shared_ptr<PoseStateRSeven>& poseStateRSeven,
                                 jag::math::Matrix44T<float> matrix44)
        : field_16(model1), m_animationState(model2) {
        uint64_t in_stack_00000008;
        uint64_t in_stack_00000010;
        uint64_t in_stack_00000018;
        uint64_t in_stack_00000020;
        uint64_t in_stack_00000028;
        uint64_t in_stack_00000030;
        uint64_t in_stack_00000038;
        uint64_t in_stack_00000040;

        *(uint64_t*)field_96 = in_stack_00000038;
        *(uint64_t*)field_104 = in_stack_00000040;
        *(uint64_t*)field_80 = in_stack_00000028;
        *(uint64_t*)field_88 = in_stack_00000030;
        *(uint64_t*)field_64 = in_stack_00000018;
        *(uint64_t*)field_72 = in_stack_00000020;
        *(uint64_t*)field_48 = in_stack_00000008;
        *(uint64_t*)field_56 = in_stack_00000010;
    }

    // 0x100372960
    ResolvedModel::ResolvedModel(const ResolvedModel& resolvedModel)
        : shared_ptr(resolvedModel), field_16(resolvedModel.field_16),
          m_animationState(resolvedModel.m_animationState) {
        uint64_t uVar1 = *(uint64_t*)resolvedModel.field_48;
        uint64_t uVar2 = *(uint64_t*)resolvedModel.field_56;
        uint64_t uVar3 = *(uint64_t*)resolvedModel.field_64;
        uint64_t uVar4 = *(uint64_t*)resolvedModel.field_72;
        uint64_t uVar5 = *(uint64_t*)resolvedModel.field_80;
        uint64_t uVar6 = *(uint64_t*)resolvedModel.field_88;
        uint64_t uVar7 = *(uint64_t*)resolvedModel.field_104;
        *(uint64_t*)field_96 = *(uint64_t*)resolvedModel.field_96;
        *(uint64_t*)field_104 = uVar7;
        *(uint64_t*)field_80 = uVar5;
        *(uint64_t*)field_88 = uVar6;
        *(uint64_t*)field_64 = uVar3;
        *(uint64_t*)field_72 = uVar4;
        *(uint64_t*)field_48 = uVar1;
        *(uint64_t*)field_56 = uVar2;
    }

} // namespace jag::oldscape::dash3d
