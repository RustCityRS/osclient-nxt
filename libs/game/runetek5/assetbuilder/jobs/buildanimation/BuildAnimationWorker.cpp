// libs/game/runetek5/assetbuilder/jobs/buildanimation/BuildAnimationWorker.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

namespace jag::game {
    class BuildAnimationWorker {
    public:
        // virtual methods in vtable order
        virtual ~BuildAnimationWorker();
        virtual uint64_t GetWorkerJobType() const;
        virtual uint8_t* Service(int arg1);
        BuildAnimationWorker();

    private:
        shared_ptr field_8;
        uint8_t _unknown_24[8];
    };

    // 0x100029ea0: BuildAnimationWorker::GetWorkerJobType() const has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x1006339a0: BuildAnimationWorker::~BuildAnimationWorker() has the same machine code as BuildSingleLocationWorker::~BuildSingleLocationWorker()

    // 0x10064a280
    BuildAnimationWorker::BuildAnimationWorker() : AssetWorker() {}

    // 0x10064a2b0
    uint8_t* BuildAnimationWorker::Service(int arg1) {
        shared_ptr* this_00;
        mutex* mutex;
        Animation* this_01;
        shared_ptr<graphics::Animation>* this_02;
        uint8_t* puVar2;
        shared_ptr<oldscape::dash3d::Decor> local_70;
        Array<unsigned int> local_60;
        scoped_lock<std::mutex> local_48;
        Array<shared_ptr<graphics::AnimationFrameRT5>> local_40;

        if (!(field_8->operator_cast_to_bool())) {
            field_24.reset();
            puVar2 = DataStatus::READY;
        } else {
            mutex = (mutex*)field_8->end();
            local_48 = std::scoped_lock(*mutex);
            this_00 = (shared_ptr*)(mutex + 64);
            if (!(shared_ptr::operator_cast_to_bool(this_00))) {
                field_24.reset();
                puVar2 = DataStatus::READY;
            } else {
                this_01 = (Animation*)(*this_00).operator->();
                local_40.Array<BucketAllocatorEASTL>(*((mutex + 80)));
                local_60.Array<BucketAllocatorEASTL>(*((mutex + 104)));
                local_70 = shared_ptr((mutex + 152));
                this_01->ConstructAnimation(local_40, local_60, *((mutex + 128)), &local_70);
                MakeSharedPool<BuildAnimationResultData, 96>::MakeShared<>();
                this_02 = (shared_ptr<graphics::Animation>*)local_40.operator->();
                *this_02 = *this_00;
                static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(&local_60);
                field_24 = local_60;
                puVar2 = DataStatus::READY;
            }
        }
        return puVar2;
    }

} // namespace jag::game
