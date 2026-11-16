// libs/game/runetek5/assetbuilder/jobs/buildanimation/BuildAnimationWorker.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

namespace jag::game {
    class BuildAnimationWorker {
    public:
        // virtual methods in vtable order
        virtual ~BuildAnimationWorker();
        virtual GetWorkerJobType() const;
        virtual Service(int);
        BuildAnimationWorker();

        // data members, from how the methods use this: 32 bytes
        undefined** field_0; // offset 0, vtable pointer
        shared_ptr field_8;  // offset 8
        char _unknown_24[8];
    };

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    BuildAnimationWorker::GetWorkerJobType() const;

    // 0x1006333d0: the linker folded this into BuildSingleLocationWorker::~BuildSingleLocationWorker(), which has identical code
    BuildAnimationWorker::~BuildAnimationWorker();

    // 0x1006333e0: the linker folded this into BuildSingleLocationWorker::~BuildSingleLocationWorker(), which has identical code
    BuildAnimationWorker::~BuildAnimationWorker();

    // 0x1006339a0: the linker folded this into BuildSingleLocationWorker::~BuildSingleLocationWorker(), which has identical code
    BuildAnimationWorker::~BuildAnimationWorker();

    // 0x10064a280, 32 bytes, base-object constructor, placed by class name and debug map
    // BuildAnimationWorker::BuildAnimationWorker()
    void BuildAnimationWorker::BuildAnimationWorker() {
        new (this) AssetWorker();
        field_0 = &PTR__BuildFunctionWorker_100f0d7d8;
    }

    // 0x10064a2a0, 16 bytes, complete-object constructor, placed by class name and debug map
    // BuildAnimationWorker::BuildAnimationWorker(): jumps straight to the base-object constructor

    // 0x10064a2b0, 448 bytes, placed by class name and debug map
    // BuildAnimationWorker::Service(int)
    undefined* BuildAnimationWorker::Service(int param_1) {
        shared_ptr* this_00;
        bool bVar1;
        mutex* pmVar2;
        Animation* this_01;
        shared_ptr<graphics::Animation>* this_02;
        shared_ptr* extraout_RDX;
        undefined* puVar3;
        shared_ptr in_stack_ffffffffffffff88;
        shared_ptr<oldscape::dash3d::Decor> asStack_66[6];
        shared_ptr local_60;
        scoped_lock<std::mutex> local_48[8];
        shared_ptr local_40;

        bVar1 = field_8->operator_cast_to_bool();
        if (bVar1) {
            pmVar2 = (mutex*)field_8->end();
            std::scoped_lock<std::mutex>::scoped_lock(local_48, pmVar2);
            this_00 = (shared_ptr*)(pmVar2 + 64);
            bVar1 = shared_ptr::operator_cast_to_bool(this_00);
            if (bVar1) {
                this_01 =
                    (Animation*)shared_ptr<graphics::Animation>::operator->((shared_ptr<graphics::Animation>*)this_00);
                Array<shared_ptr<graphics::AnimationFrameRT5>, eastl::allocator>::Array<BucketAllocatorEASTL>(
                    (Array<shared_ptr<graphics::AnimationFrameRT5>, eastl::allocator>*)&local_40,
                    (Array*)(pmVar2 + 80));
                Array<unsigned int, eastl::allocator>::Array<BucketAllocatorEASTL>(
                    (Array<unsigned int, eastl::allocator>*)&local_60, (Array*)(pmVar2 + 104));
                shared_ptr<oldscape::dash3d::Decor>::shared_ptr(asStack_66 + -10, (shared_ptr*)(pmVar2 + 152));
                this_01->ConstructAnimation((Array*)&local_40, (Array*)&local_60, (Array*)(pmVar2 + 128),
                                            in_stack_ffffffffffffff88);
                ((asStack_66 + -10))->~shared_ptr();
                local_60.~Array();
                local_40.~Array();
                MakeSharedPool<BuildAnimationResultData, 96>::MakeShared<>(
                    &local_40, (MakeSharedPool<BuildAnimationResultData, 96>*)&local_40);
                this_02 = (shared_ptr<graphics::Animation>*)shared_ptr<BuildAnimationResultData>::operator->(
                    (shared_ptr<BuildAnimationResultData>*)&local_40);
                shared_ptr<graphics::Animation>::operator=(this_02, this_00);
                static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(&local_60, (jag*)&local_40,
                                                                                             extraout_RDX);
                shared_ptr<void>::operator=((shared_ptr<void>*)&field_24, &local_60);
                local_60.~shared_ptr();
                puVar3 = DataStatus::READY;
                local_40.~shared_ptr();
            } else {
                shared_ptr<void>::reset();
                puVar3 = DataStatus::READY;
            }
            std::scoped_lock<std::mutex>::~scoped_lock(local_48);
        } else {
            shared_ptr<void>::reset();
            puVar3 = DataStatus::READY;
        }
        return puVar3;
    }

} // namespace jag::game
