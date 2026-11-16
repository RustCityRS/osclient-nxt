// libs/hal/thread/ThreadPool.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.hal.system.osclient

namespace jag {
    class ThreadPool {
    public:
        class TaskInfo;
        ~ThreadPool();
        ThreadPool(unsigned int arg1, const char* str);
        std::future<std::invoke_result<oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(
            shared_ptr<eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                                             eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>&&)::
                                           $_3>::type>
        AddTask<oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(
            shared_ptr<eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                                             eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>&&)::
                    $_3>(const char* str,
                         oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(
                             shared_ptr<eastl::priority_queue<
                                 oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                                 eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>&&)::$_3&& arg2);
        std::future<std::invoke_result<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(
            oldscape::jagex3::Js5&, oldscape::jagex3::Js5&, bool)::$_6>::type>
        AddTask<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(oldscape::jagex3::Js5&,
                                                                                oldscape::jagex3::Js5&, bool)::$_6>(
            const char* str,
            oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(oldscape::jagex3::Js5&,
                                                                            oldscape::jagex3::Js5&, bool)::$_6&& arg2);
        std::future<std::invoke_result<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(
            oldscape::PacketJ<Array<unsigned char>>&, int)::$_7>::type>
        AddTask<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(
            oldscape::PacketJ<Array<unsigned char>>&, int)::$_7>(
            const char* str, oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(
                                 oldscape::PacketJ<Array<unsigned char>>&, int)::$_7&& arg2);
        void GetNumberOfThreads();
        std::future < std::invoke_result <
            graphicutils::BatchDestroyHelper<
                std::unique_ptr<graphics::GeometryBatchInstance,
                                MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>::Flush()::{
            lambda() #1
        }
        > ::type > AddTask <
            graphicutils::BatchDestroyHelper<
                std::unique_ptr<graphics::GeometryBatchInstance,
                                MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>::Flush()::{
            lambda() #1
        }
        >(const char* str, graphicutils::BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>::Flush()::{lambda()#1}&& arg2);
        std::future<std::invoke_result<game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5>::type>
        AddTask<game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5>(
            const char* str, game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5&& arg2);
        std::future<std::invoke_result<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul>&,
                                                             unsigned int, game::World&, int, int, int, int, int,
                                                             render::Viewport const&, bool)::$_7>::type>
        AddTask<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul>&, unsigned int, game::World&,
                                      int, int, int, int, int, render::Viewport const&, bool)::$_7>(
            const char* str,
            game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul>&, unsigned int, game::World&,
                                  int, int, int, int, int, render::Viewport const&, bool)::$_7&& arg2);
        std::future<std::invoke_result<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul>&,
                                                             unsigned int, game::World&, int, int, int, int, int,
                                                             render::Viewport const&, bool)::$_8>::type>
        AddTask<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul>&, unsigned int, game::World&,
                                      int, int, int, int, int, render::Viewport const&, bool)::$_8>(
            const char* str,
            game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul>&, unsigned int, game::World&,
                                  int, int, int, int, int, render::Viewport const&, bool)::$_8&& arg2);
        std::future<std::invoke_result<game::SeqType::GetAnimation(
            game::AssetBuilder&, game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&, unsigned int,
            shared_ptr<graphics::Model> const&)::$_0>::type>
        AddTask<game::SeqType::GetAnimation(game::AssetBuilder&,
                                            game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&,
                                            unsigned int, shared_ptr<graphics::Model> const&)::$_0>(
            const char* str,
            game::SeqType::GetAnimation(game::AssetBuilder&,
                                        game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&,
                                        unsigned int, shared_ptr<graphics::Model> const&)::$_0&& arg2);
        void RunOnceOnAllThreads < game::RegisterCommonCommandsDebug(console::Console*, BaseApp*,
                                                                     graphics::RT7Core*)::$_4::operator()() const ::{
            lambda() #1
        }
        >(const char* str, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const::{lambda()#1}&& arg2);
        void RunOnceOnAllThreads < game::RegisterCommonCommandsDebug(console::Console*, BaseApp*,
                                                                     graphics::RT7Core*)::$_5::operator()() const ::{
            lambda() #1
        }
        >(const char* str, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const::{lambda()#1}&& arg2);
        std::future < std::invoke_result <
            game::RegisterCommonCommandsDebug(console::Console*, BaseApp*,
                                              graphics::RT7Core*)::$_19::operator()() const ::{
            lambda() #1
        }
        > ::type > AddTask < game::RegisterCommonCommandsDebug(console::Console*, BaseApp*,
                                                               graphics::RT7Core*)::$_19::operator()() const ::{
            lambda() #1
        }
        >(const char* str, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_19::operator()() const::{lambda()#1}&& arg2);
        std::future<std::invoke_result<graphics::ParticleSystemRenderer::AddDrawableToBatch(
            graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&,
            graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_10>::type>
        AddTask<graphics::ParticleSystemRenderer::AddDrawableToBatch(
            graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&,
            graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_10>(
            const char* str,
            graphics::ParticleSystemRenderer::AddDrawableToBatch(
                graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&,
                graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_10&& arg2);
        std::future<std::invoke_result<graphics::ParticleSystemRenderer::AddDrawableToBatch(
            graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&,
            graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_12>::type>
        AddTask<graphics::ParticleSystemRenderer::AddDrawableToBatch(
            graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&,
            graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_12>(
            const char* str,
            graphics::ParticleSystemRenderer::AddDrawableToBatch(
                graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&,
                graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_12&& arg2);
        std::future<std::invoke_result<graphics::DrawableQueue::RenderGroupWithAsyncTest(
            graphics::RT7Core&, render::DrawCallState const&, graphics::SceneViewData const&,
            graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&,
            std::function<bool(math::OBB const&, graphics::SceneViewData const&)> const&,
            graphics::SceneViewData const&)::$_19>::type>
        AddTask<graphics::DrawableQueue::RenderGroupWithAsyncTest(
            graphics::RT7Core&, render::DrawCallState const&, graphics::SceneViewData const&,
            graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&,
            std::function<bool(math::OBB const&, graphics::SceneViewData const&)> const&,
            graphics::SceneViewData const&)::$_19>(
            const char* str, graphics::DrawableQueue::RenderGroupWithAsyncTest(
                                 graphics::RT7Core&, render::DrawCallState const&, graphics::SceneViewData const&,
                                 graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&,
                                 std::function<bool(math::OBB const&, graphics::SceneViewData const&)> const&,
                                 graphics::SceneViewData const&)::$_19&& arg2);
        std::future<std::invoke_result<graphics::DrawableQueue::FilterAsync(
            graphics::DrawableGroupType, graphics::RenderPassType,
            std::function<bool(graphics::Drawable*,
                               std::unique_ptr<graphics::DrawableElement,
                                               graphics::DrawableElementDeleter> const&)> const&)::$_21>::type>
        AddTask<graphics::DrawableQueue::FilterAsync(
            graphics::DrawableGroupType, graphics::RenderPassType,
            std::function<bool(
                graphics::Drawable*,
                std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_21>(
            const char* str,
            graphics::DrawableQueue::FilterAsync(
                graphics::DrawableGroupType, graphics::RenderPassType,
                std::function<bool(graphics::Drawable*,
                                   std::unique_ptr<graphics::DrawableElement,
                                                   graphics::DrawableElementDeleter> const&)> const&)::$_21&& arg2);
        std::future<std::invoke_result<graphics::DrawableQueue::FilterMultiAsync(
            graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType,
            std::function<bool(graphics::Drawable*,
                               std::unique_ptr<graphics::DrawableElement,
                                               graphics::DrawableElementDeleter> const&)> const&)::$_23>::type>
        AddTask<graphics::DrawableQueue::FilterMultiAsync(
            graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType,
            std::function<bool(
                graphics::Drawable*,
                std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_23>(
            const char* str,
            graphics::DrawableQueue::FilterMultiAsync(
                graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType,
                std::function<bool(graphics::Drawable*,
                                   std::unique_ptr<graphics::DrawableElement,
                                                   graphics::DrawableElementDeleter> const&)> const&)::$_23&& arg2);
        std::future < std::invoke_result <
            graphics::(anonymous namespace)::UpdateParticleSystemsImpl<eastl::vector<graphics::ParticleSystem*>>(
                std::vector<std::future<void>>&, unsigned long, eastl::vector<graphics::ParticleSystem*>&, ThreadPool&,
                float)::{
            lambda() #1
        }
        > ::type > AddTask <
            graphics::(anonymous namespace)::UpdateParticleSystemsImpl<eastl::vector<graphics::ParticleSystem*>>(
                std::vector<std::future<void>>&, unsigned long, eastl::vector<graphics::ParticleSystem*>&, ThreadPool&,
                float)::{
            lambda() #1
        }
        > (const char* str, eastl::vector<graphics::ParticleSystem*>&& particleSystems);
        std::future < std::invoke_result < graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
                                               eastl::vector<shared_ptr<graphics::ModularParticleSystem>>>(
                                               std::vector<std::future<void>>&, unsigned long,
                                               eastl::vector<shared_ptr<graphics::ModularParticleSystem>>&, ThreadPool&,
                                               float)::{
            lambda() #1
        }
        > ::type > AddTask < graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
                                 eastl::vector<shared_ptr<graphics::ModularParticleSystem>>>(
                                 std::vector<std::future<void>>&, unsigned long,
                                 eastl::vector<shared_ptr<graphics::ModularParticleSystem>>&, ThreadPool&, float)::{
            lambda() #1
        }
        > (const char* str, eastl::vector<shared_ptr<graphics::ModularParticleSystem>>&& modularParticleSystems);
        std::future<std::invoke_result<graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*,
                                                                                         render::Format)::$_5>::type>
        AddTask<graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::$_5>(
            const char* str,
            graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::$_5&& arg2);
        std::future<std::invoke_result<graphics::OcclusionReprojection::ReprojectOcclusionBuffer(
            graphics::OcclusionManager const&, ThreadPool&, graphics::SceneViewData const&,
            graphics::SceneViewData const&, bool, graphics::SceneViewData*)::$_6&>::type>
        AddTask<graphics::OcclusionReprojection::ReprojectOcclusionBuffer(
            graphics::OcclusionManager const&, ThreadPool&, graphics::SceneViewData const&,
            graphics::SceneViewData const&, bool, graphics::SceneViewData*)::$_6&>(
            const char* str, graphics::OcclusionReprojection::ReprojectOcclusionBuffer(
                                 graphics::OcclusionManager const&, ThreadPool&, graphics::SceneViewData const&,
                                 graphics::SceneViewData const&, bool, graphics::SceneViewData*)::$_6& arg2);
        std::future < std::invoke_result <
            graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::Flush()::{
            lambda() #1
        }
        > ::type > AddTask < graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::Flush()::{
            lambda() #1
        }
        >(const char* str, graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::Flush()::{lambda()#1}&& arg2);
        std::future < std::invoke_result <
            graphicutils::BatchDestroyHelper<
                std::unique_ptr<graphics::BillboardBatchInstance,
                                MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>::Flush()::{
            lambda() #1
        }
        > ::type > AddTask <
            graphicutils::BatchDestroyHelper<
                std::unique_ptr<graphics::BillboardBatchInstance,
                                MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>::Flush()::{
            lambda() #1
        }
        >(const char* str, graphicutils::BatchDestroyHelper<std::unique_ptr<graphics::BillboardBatchInstance, MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>::Flush()::{lambda()#1}&& arg2);
        void SetAffinity(unsigned int arg1);
        std::future<std::invoke_result<
            graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2>::type>
        AddTask<graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2>(
            const char* str, graphics::Animation::ConstructFromAnimKeyFrameSet(
                                 shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2&& arg2);
        std::future<std::invoke_result<graphics::AnimationStateProvider::BeginAsyncTasks(
            ThreadPool&, unsigned int, Array<graphics::LabelData> const&, math::Matrix44T<float> const&)::$_8>::type>
        AddTask<graphics::AnimationStateProvider::BeginAsyncTasks(
            ThreadPool&, unsigned int, Array<graphics::LabelData> const&, math::Matrix44T<float> const&)::$_8>(
            const char* str,
            graphics::AnimationStateProvider::BeginAsyncTasks(ThreadPool&, unsigned int,
                                                              Array<graphics::LabelData> const&,
                                                              math::Matrix44T<float> const&)::$_8&& arg2);
        void RunOnceOnAllThreads < SetAffinity(unsigned int)::{
            lambda() #1
        }
        > (const char* str, SetAffinity(unsigned int)::{ lambda() #1 } && arg2);
        std::future<std::invoke_result<Js5ResourceProvider::Js5ResourceProvider(
            Array<eastl::string> const&, SystemSettings*, Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*,
            math::BigInteger*, eastl::string, bool)::$_1>::type>
        AddTask<Js5ResourceProvider::Js5ResourceProvider(Array<eastl::string> const&, SystemSettings*,
                                                         Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*,
                                                         math::BigInteger*, eastl::string, bool)::$_1>(
            const char* str,
            Js5ResourceProvider::Js5ResourceProvider(Array<eastl::string> const&, SystemSettings*,
                                                     Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*,
                                                     math::BigInteger*, eastl::string, bool)::$_1&& arg2);
        std::future<std::invoke_result<http::HTTPRequest::Post(char const*, char const*)::$_0>::type>
        AddTask<http::HTTPRequest::Post(char const*, char const*)::$_0>(
            const char* str, http::HTTPRequest::Post(char const*, char const*)::$_0&& arg2);
        void RunOnceOnAllThreads<GraphicsApp::MainShutdown()::$_0>(const char* str,
                                                                   GraphicsApp::MainShutdown()::$_0&& arg2);
        std::future<std::invoke_result<FileSystem::DeleteDirectory(Filename const&)::$_0>::type>
        AddTask<FileSystem::DeleteDirectory(Filename const&)::$_0>(
            const char* str, FileSystem::DeleteDirectory(Filename const&)::$_0&& arg2);
        std::future<std::invoke_result<render::ShaderProgram::CreateFromSourceString()::$_16>::type>
        AddTask<render::ShaderProgram::CreateFromSourceString()::$_16>(
            const char* str, render::ShaderProgram::CreateFromSourceString()::$_16&& arg2);
        std::future<std::invoke_result<render::ShaderProgram::PreRender()::$_43>::type>
        AddTask<render::ShaderProgram::PreRender()::$_43>(const char* str,
                                                          render::ShaderProgram::PreRender()::$_43&& arg2);
        void RunOnceOnAllThreads<render::RenderDevice::~RenderDevice()::$_106>(
            const char* str, render::RenderDevice::~RenderDevice()::$_106&& arg2);
        void RunOnceOnAllThreadsAsync<render::RenderDevice::CreateSecondaryRenderContexts()::$_108>(
            const char* str, render::RenderDevice::CreateSecondaryRenderContexts()::$_108&& arg2);
        void RunOnceOnAllThreads<render::RenderDevice::DestroySecondaryRenderContexts()::$_109>(
            const char* str, render::RenderDevice::DestroySecondaryRenderContexts()::$_109&& arg2);
        void RunOnceOnAllThreads<render::RenderDevice::RunWithThreadPoolRenderContexts(
            fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                    (fixedfunction::Methods)0> const&)::$_110>(
            const char* str, render::RenderDevice::RunWithThreadPoolRenderContexts(
                                 fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                                         (fixedfunction::Methods)0> const&)::$_110&& arg2);
        std::future<std::invoke_result<render::RenderDevice::RunOnThreadPoolRenderContext(
            char const*, fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                                 (fixedfunction::Methods)0> const&)::$_111>::type>
        AddTask<render::RenderDevice::RunOnThreadPoolRenderContext(
            char const*, fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                                 (fixedfunction::Methods)0> const&)::$_111>(
            const char* str, render::RenderDevice::RunOnThreadPoolRenderContext(
                                 char const*, fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                                                      (fixedfunction::Methods)0> const&)::$_111&& arg2);
        ThreadPool* InitialiseWorkGroups(unsigned long arg1, unsigned long arg2);
        void Init(unsigned int arg1, const char* str);
        void ThreadFunc(int arg1, const char* str);
        unsigned long TrySteal(TaskInfo& taskInfo, int arg2);

    private:
        long field_0;
        uint8_t _unknown_8[192];
    };

    class ThreadPool::TaskInfo {
    public:
        ~TaskInfo();
        TaskInfo(std::function<void()>&& callback, const char* str, TaskPriority taskPriority, bool arg4);
        TaskInfo();
        TaskInfo* operator=(TaskInfo&& taskInfo);

    private:
        uint8_t _unknown_0[48];
        uint32_t field_48;
        uint8_t field_52;
        uint8_t _unknown_53[11];
    };

    class ThreadPoolSingleton {
    public:
        void GetThreadPool();
        ~ThreadPoolSingleton();
        ThreadPoolSingleton(unsigned int arg1);
        ThreadPoolSingleton();

        uint8_t _unknown_0[200];
    };

    // 0x100009e40
    ThreadPoolSingleton::~ThreadPoolSingleton() {}

    // 0x100009e40: ShaderThreadPoolSingleton::~ShaderThreadPoolSingleton() has the same machine code as ThreadPoolSingleton::~ThreadPoolSingleton()

    // 0x100009e80
    ThreadPool::~ThreadPool() {
        unsigned long uVar2;
        unsigned int uVar3;
        unsigned long arg1;

        *(uint8_t*)&field_0 = 1;
        std::condition_variable::notify_all();
        uint8_t* this_00 = &field_8;
        if (this_00->size() != 0) {
            uVar3 = 1;
            arg1 = 0;
            do {
                (*this_00)[arg1];
                std::thread::join();
                arg1 = (unsigned long)uVar3;
                uVar2 = this_00->size();
                uVar3 = uVar3 + 1;
            } while (arg1 < uVar2);
        }
        (&field_128)->~mutex();
        field_96.~vector();
        (&field_48)->~condition_variable();
        ((unique_ptr<std::mutex[]>*)&field_40)->~unique_ptr();
        this_00->~vector();
    }

    // 0x10000a4c0
    ThreadPool::TaskInfo::~TaskInfo() {
        field_56.~fixed_string();
    }

    // 0x1001b07a0
    ThreadPoolSingleton::ThreadPoolSingleton(unsigned int arg1)
        : AutoSingleton<ThreadPoolSingleton>(), ThreadPool(arg1, "TPSingleton") {}

    // 0x1001b0860
    ThreadPool::ThreadPool(unsigned int arg1, const char* str) {
        *(uint8_t*)&field_0 = 0;
        new (&field_8) eastl::vector<std::thread>();
        ((unique_ptr<std::mutex[]>*)&field_40)->unique_ptr<true, void>();
        new (&field_48) std::condition_variable();
        new (&field_96) eastl::vector<std::deque<ThreadPool::TaskInfo>>();
        new (&field_128) std::mutex();
        new (&field_196) std::atomic<unsigned int>(arg1);
        Init(arg1, str);
    }

    // 0x1002d2230
    std::future<std::invoke_result<oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(
        shared_ptr<
            eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                                  eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>&&)::$_3>::type>
    ThreadPool::AddTask<oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(
        shared_ptr<
            eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                                  eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>&&)::$_3>(
        const char* str,
        oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(
            shared_ptr<eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                                             eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>&&)::
            $_3&& arg2) {
        std::future<std::invoke_result<oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(
            shared_ptr<eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                                             eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>&&)::
                                           $_3>::type>
            result;
        mutex* mutex;
        deque<ThreadPool::TaskInfo>* deque;
        SafeBucketAllocatorSTL<std::packaged_task<void_()> _> local_58[16];
        eastl local_38;

        char* local_60 = "OSRS WAV Load";
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_38);
        std::bind<oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(
            shared_ptr<
                eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                                      eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>&&)::__3>(
            &local_88);
        std::allocate_shared<std::packaged_task<void()>, SafeBucketAllocatorSTL<std::packaged_task<void()>>,
                             std::allocator_arg_t const&, SafeBucketAllocatorSTL<std::packaged_task<void()>>&,
                             std::__bind<oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(
                                 shared_ptr<eastl::priority_queue<
                                     oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                                     eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>&&)::__3>,
                             void>(
            local_58, &local_38, (SafeBucketAllocatorSTL<std::packaged_task<void_()> _>*)&local_38,
            (__bind<oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(
                 shared_ptr<eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                                                  eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>,
                                                  eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave> _>
                                _>&&)::__3>*)&local_88);
        int arg1 = (*local_58).operator->();
        result.get_future();
        unsigned int uVar1 = (*((str + 196)))++;
        unsigned long uVar2 = ((str + 8))->size();
        mutex = (mutex*)(*((unique_ptr<std::mutex[]>*)(str + 40)))[(unsigned long)uVar1 % uVar2];
        scoped_lock<std::mutex> local_48(*mutex);
        if (*str != '\0') {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h", 166,
                "Cannot add tasks to the threadpool after stopping it");
        }
        deque = (deque<ThreadPool::TaskInfo>*)(*((str + 96)))[(unsigned long)uVar1 % uVar2];
        __3 local_88() >> (*local_58);
        TaskPriority local_3c = 1;
        std::deque<ThreadPool::TaskInfo>::emplace_back<
            ThreadPool::AddTask<oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(
                shared_ptr<eastl::priority_queue<
                    oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                    eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>&&)::__3>(
                char const*, (shared_ptr<eastl::priority_queue<
                                  oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                                  eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>&&)
                                 ->SpawnWaveLoadingTask()::__3&&)::_lambda() _1_,
            char const*&, ThreadPool::TaskPriority>(deque, &local_88, &local_60, &local_3c);
        AddTask<oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(
            shared_ptr<
                eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                                      eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>&&)::$_3>(
            char const*,
            (shared_ptr<eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                                              eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>&&)
                ->SpawnWaveLoadingTask()::$_3&&)::{
            lambda() #1
        }
        ::~future(&local_88);
        std::__atomic_base<unsigned int, true>::operator++();
        std::condition_variable::notify_one();
        return result;
    }

    // 0x1002e77d0
    void ThreadPool::AddTask<oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(
        shared_ptr<
            eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                                  eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>&&)::$_3>(
        char const*,
        oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(
            shared_ptr<eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                                             eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>&&)::
            $_3&&)::{
        lambda() #1
    }
    ::~future() {
        ~future(this);
    }

    // 0x1002e91f0
    void ThreadPool::AddTask<oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(
        shared_ptr<
            eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                                  eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>&&)::$_3>(
        char const*,
        oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(
            shared_ptr<eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                                             eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>&&)::
            $_3&&)::{
        lambda() #1
    }
    ::future({ lambda() #1 } && arg1) {
        future(arg1);
    }

    // 0x1002e9210
    void ThreadPool::AddTask<oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(
        shared_ptr<
            eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                                  eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>&&)::$_3>(
        char const*,
        oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(
            shared_ptr<eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                                             eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>&&)::
            $_3&&)::{
        lambda() #1
    }
    ::future({ lambda() #1 } && arg1) {
        new (this) std::shared_ptr<std::packaged_task<void()>>(arg1);
    }

    // 0x1002e99a0
    void ThreadPool::AddTask<oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(
        shared_ptr<
            eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                                  eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>&&)::$_3>(
        char const*,
        oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(
            shared_ptr<eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                                             eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>&&)::
            $_3&&)::{
        lambda() #1
    }
    ::future(const { lambda() #1 } & arg1) {
        future(arg1);
    }

    // 0x1002e99c0
    void ThreadPool::AddTask<oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(
        shared_ptr<
            eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                                  eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>&&)::$_3>(
        char const*,
        oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(
            shared_ptr<eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                                             eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>&&)::
            $_3&&)::{
        lambda() #1
    }
    ::future(const { lambda() #1 } & arg1) {
        new (this) std::shared_ptr<std::packaged_task<void()>>(arg1);
    }

    // 0x1002e9c30
    void ThreadPool::AddTask<oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(
        shared_ptr<
            eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                                  eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>&&)::$_3>(
        char const*,
        oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(
            shared_ptr<eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                                             eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>&&)::
            $_3&&)::{
        lambda() #1
    }
    ::operator()() const {
        packaged_task<void()>* this_00;

        this_00 = (packaged_task<void()>*)**this;
        std::packaged_task<void()>::operator()(this_00);
    }

    // 0x1002e9e00
    void ThreadPool::AddTask<oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(
        shared_ptr<
            eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                                  eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>&&)::$_3>(
        char const*,
        oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(
            shared_ptr<eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                                             eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>&&)::
            $_3&&)::{
        lambda() #1
    }
    ::~future() {
        ~shared_ptr();
    }

    // 0x1003230f0
    std::future<std::invoke_result<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(
        oldscape::jagex3::Js5&, oldscape::jagex3::Js5&, bool)::$_6>::type>
    ThreadPool::AddTask<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(
        oldscape::jagex3::Js5&, oldscape::jagex3::Js5&, bool)::$_6>(
        const char* str,
        oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(oldscape::jagex3::Js5&, oldscape::jagex3::Js5&,
                                                                        bool)::$_6&& arg2) {
        std::future<std::invoke_result<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(
            oldscape::jagex3::Js5&, oldscape::jagex3::Js5&, bool)::$_6>::type>
            result;
        mutex* mutex;
        deque<ThreadPool::TaskInfo>* deque;
        SafeBucketAllocatorSTL<std::packaged_task<void_()> _> local_58[16];
        eastl local_38;

        char* local_60 = "OSRS Maya Anim Load";
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_38);
        std::bind<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(
            oldscape::jagex3::Js5&, oldscape::jagex3::Js5&, bool)::__6>(&local_88);
        std::allocate_shared<std::packaged_task<void()>, SafeBucketAllocatorSTL<std::packaged_task<void()>>,
                             std::allocator_arg_t const&, SafeBucketAllocatorSTL<std::packaged_task<void()>>&,
                             std::__bind<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(
                                 oldscape::jagex3::Js5&, oldscape::jagex3::Js5&, bool)::__6>,
                             void>(local_58, &local_38,
                                   (SafeBucketAllocatorSTL<std::packaged_task<void_()> _>*)&local_38,
                                   (__bind<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(
                                        oldscape::jagex3::Js5&, oldscape::jagex3::Js5&, bool)::__6>*)&local_88);
        int arg1 = (*local_58).operator->();
        result.get_future();
        unsigned int uVar1 = (*((str + 196)))++;
        unsigned long uVar2 = ((str + 8))->size();
        mutex = (mutex*)(*((unique_ptr<std::mutex[]>*)(str + 40)))[(unsigned long)uVar1 % uVar2];
        scoped_lock<std::mutex> local_48(*mutex);
        if (*str != '\0') {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h", 166,
                "Cannot add tasks to the threadpool after stopping it");
        }
        deque = (deque<ThreadPool::TaskInfo>*)(*((str + 96)))[(unsigned long)uVar1 % uVar2];
        __6 local_88() >> (*local_58);
        TaskPriority local_3c = 1;
        std::deque<ThreadPool::TaskInfo>::emplace_back<
            ThreadPool::AddTask<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(
                oldscape::jagex3::Js5&, oldscape::jagex3::Js5&, bool)::__6>(
                char const*, (oldscape::jagex3::Js5&)->TryLoad(oldscape::jagex3::Js5&, bool)::__6&&)::_lambda() _1_,
            char const*&, ThreadPool::TaskPriority>(deque, &local_88, &local_60, &local_3c);
        AddTask<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(oldscape::jagex3::Js5&,
                                                                                oldscape::jagex3::Js5&, bool)::$_6>(
            char const*, (oldscape::jagex3::Js5&)->TryLoad(oldscape::jagex3::Js5&, bool)::$_6&&)::{
            lambda() #1
        }
        ::~future(&local_88);
        std::__atomic_base<unsigned int, true>::operator++();
        std::condition_variable::notify_one();
        return result;
    }

    // 0x100323af0
    std::future<std::invoke_result<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(
        oldscape::PacketJ<Array<unsigned char>>&, int)::$_7>::type>
    ThreadPool::AddTask<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(
        oldscape::PacketJ<Array<unsigned char>>&, int)::$_7>(
        const char* str,
        oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(oldscape::PacketJ<Array<unsigned char>>&,
                                                                               int)::$_7&& arg2) {
        std::future<std::invoke_result<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(
            oldscape::PacketJ<Array<unsigned char>>&, int)::$_7>::type>
            result;
        mutex* mutex;
        deque<ThreadPool::TaskInfo>* deque;
        SafeBucketAllocatorSTL<std::packaged_task<void_()> _> local_58[16];
        eastl local_38;

        char* local_60 = "OSRS Maya Curve Load";
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_38);
        std::bind<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(
            oldscape::PacketJ<Array<unsigned char>>&, int)::__7>(&local_a0);
        std::allocate_shared<std::packaged_task<void()>, SafeBucketAllocatorSTL<std::packaged_task<void()>>,
                             std::allocator_arg_t const&, SafeBucketAllocatorSTL<std::packaged_task<void()>>&,
                             std::__bind<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(
                                 oldscape::PacketJ<Array<unsigned char>>&, int)::__7>,
                             void>(local_58, &local_38,
                                   (SafeBucketAllocatorSTL<std::packaged_task<void_()> _>*)&local_38,
                                   (__bind<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(
                                        oldscape::PacketJ<Array<unsigned char> _>&, int)::__7>*)&local_a0);
        int arg1 = (*local_58).operator->();
        result.get_future();
        unsigned int uVar1 = (*((str + 196)))++;
        unsigned long uVar2 = ((str + 8))->size();
        mutex = (mutex*)(*((unique_ptr<std::mutex[]>*)(str + 40)))[(unsigned long)uVar1 % uVar2];
        scoped_lock<std::mutex> local_48(*mutex);
        if (*str != '\0') {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h", 166,
                "Cannot add tasks to the threadpool after stopping it");
        }
        deque = (deque<ThreadPool::TaskInfo>*)(*((str + 96)))[(unsigned long)uVar1 % uVar2];
        __7 local_a0() >> (*local_58);
        TaskPriority local_3c = 1;
        std::deque<ThreadPool::TaskInfo>::emplace_back<
            ThreadPool::AddTask<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(
                oldscape::PacketJ<Array<unsigned char>>&, int)::__7>(
                char const*, (oldscape::PacketJ<Array<unsigned char>>&)->LoadFromPacket(int)::__7&&)::_lambda() _1_,
            char const*&, ThreadPool::TaskPriority>(deque, &local_a0, &local_60, &local_3c);
        AddTask<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(
            oldscape::PacketJ<Array<unsigned char>>&, int)::$_7>(
            char const*, (oldscape::PacketJ<Array<unsigned char>>&)->LoadFromPacket(int)::$_7&&)::{
            lambda() #1
        }
        ::~future(&local_a0);
        std::__atomic_base<unsigned int, true>::operator++();
        std::condition_variable::notify_one();
        return result;
    }

    // 0x100339a00
    void ThreadPool::AddTask<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(
        oldscape::jagex3::Js5&, oldscape::jagex3::Js5&, bool)::$_6>(
        char const*,
        oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(oldscape::jagex3::Js5&, oldscape::jagex3::Js5&,
                                                                        bool)::$_6&&)::{
        lambda() #1
    }
    ::~future() {
        ~future(this);
    }

    // 0x10033aef0
    void ThreadPool::AddTask<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(
        oldscape::jagex3::Js5&, oldscape::jagex3::Js5&, bool)::$_6>(
        char const*,
        oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(oldscape::jagex3::Js5&, oldscape::jagex3::Js5&,
                                                                        bool)::$_6&&)::{
        lambda() #1
    }
    ::future({ lambda() #1 } && arg1) {
        future(arg1);
    }

    // 0x10033af10
    void ThreadPool::AddTask<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(
        oldscape::jagex3::Js5&, oldscape::jagex3::Js5&, bool)::$_6>(
        char const*,
        oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(oldscape::jagex3::Js5&, oldscape::jagex3::Js5&,
                                                                        bool)::$_6&&)::{
        lambda() #1
    }
    ::future({ lambda() #1 } && arg1) {
        new (this) std::shared_ptr<std::packaged_task<void()>>(arg1);
    }

    // 0x10033b6a0
    void ThreadPool::AddTask<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(
        oldscape::jagex3::Js5&, oldscape::jagex3::Js5&, bool)::$_6>(
        char const*,
        oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(oldscape::jagex3::Js5&, oldscape::jagex3::Js5&,
                                                                        bool)::$_6&&)::{
        lambda() #1
    }
    ::future(const { lambda() #1 } & arg1) {
        future(arg1);
    }

    // 0x10033b6c0
    void ThreadPool::AddTask<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(
        oldscape::jagex3::Js5&, oldscape::jagex3::Js5&, bool)::$_6>(
        char const*,
        oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(oldscape::jagex3::Js5&, oldscape::jagex3::Js5&,
                                                                        bool)::$_6&&)::{
        lambda() #1
    }
    ::future(const { lambda() #1 } & arg1) {
        new (this) std::shared_ptr<std::packaged_task<void()>>(arg1);
    }

    // 0x10033b930
    void ThreadPool::AddTask<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(
        oldscape::jagex3::Js5&, oldscape::jagex3::Js5&, bool)::$_6>(
        char const*,
        oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(oldscape::jagex3::Js5&, oldscape::jagex3::Js5&,
                                                                        bool)::$_6&&)::{
        lambda() #1
    }
    ::operator()() const {
        packaged_task<void()>* this_00;

        this_00 = (packaged_task<void()>*)**this;
        std::packaged_task<void()>::operator()(this_00);
    }

    // 0x10033bb00
    void ThreadPool::AddTask<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(
        oldscape::jagex3::Js5&, oldscape::jagex3::Js5&, bool)::$_6>(
        char const*,
        oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(oldscape::jagex3::Js5&, oldscape::jagex3::Js5&,
                                                                        bool)::$_6&&)::{
        lambda() #1
    }
    ::~future() {
        ~shared_ptr();
    }

    // 0x10033c800
    void ThreadPool::AddTask<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(
        oldscape::PacketJ<Array<unsigned char>>&, int)::$_7>(
        char const*,
        oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(oldscape::PacketJ<Array<unsigned char>>&,
                                                                               int)::$_7&&)::{
        lambda() #1
    }
    ::~future() {
        ~future(this);
    }

    // 0x10033d1a0
    void ThreadPool::AddTask<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(
        oldscape::PacketJ<Array<unsigned char>>&, int)::$_7>(
        char const*,
        oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(oldscape::PacketJ<Array<unsigned char>>&,
                                                                               int)::$_7&&)::{
        lambda() #1
    }
    ::future({ lambda() #1 } && arg1) {
        future(arg1);
    }

    // 0x10033d1c0
    void ThreadPool::AddTask<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(
        oldscape::PacketJ<Array<unsigned char>>&, int)::$_7>(
        char const*,
        oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(oldscape::PacketJ<Array<unsigned char>>&,
                                                                               int)::$_7&&)::{
        lambda() #1
    }
    ::future({ lambda() #1 } && arg1) {
        new (this) std::shared_ptr<std::packaged_task<void()>>(arg1);
    }

    // 0x10033d8e0
    void ThreadPool::AddTask<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(
        oldscape::PacketJ<Array<unsigned char>>&, int)::$_7>(
        char const*,
        oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(oldscape::PacketJ<Array<unsigned char>>&,
                                                                               int)::$_7&&)::{
        lambda() #1
    }
    ::future(const { lambda() #1 } & arg1) {
        future(arg1);
    }

    // 0x10033d900
    void ThreadPool::AddTask<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(
        oldscape::PacketJ<Array<unsigned char>>&, int)::$_7>(
        char const*,
        oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(oldscape::PacketJ<Array<unsigned char>>&,
                                                                               int)::$_7&&)::{
        lambda() #1
    }
    ::future(const { lambda() #1 } & arg1) {
        new (this) std::shared_ptr<std::packaged_task<void()>>(arg1);
    }

    // 0x10033db70
    void ThreadPool::AddTask<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(
        oldscape::PacketJ<Array<unsigned char>>&, int)::$_7>(
        char const*,
        oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(oldscape::PacketJ<Array<unsigned char>>&,
                                                                               int)::$_7&&)::{
        lambda() #1
    }
    ::operator()() const {
        packaged_task<void()>* this_00;

        this_00 = (packaged_task<void()>*)**this;
        std::packaged_task<void()>::operator()(this_00);
    }

    // 0x10033dba0
    void ThreadPool::AddTask<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(
        oldscape::PacketJ<Array<unsigned char>>&, int)::$_7>(
        char const*,
        oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(oldscape::PacketJ<Array<unsigned char>>&,
                                                                               int)::$_7&&)::{
        lambda() #1
    }
    ::~future() {
        ~shared_ptr();
    }

    // 0x1003871f0
    std::future < std::invoke_result <
        graphicutils::BatchDestroyHelper<
            std::unique_ptr<graphics::GeometryBatchInstance,
                            MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>::Flush()::{
        lambda() #1
    }
    > ::type > ThreadPool::AddTask <
        graphicutils::BatchDestroyHelper<
            std::unique_ptr<graphics::GeometryBatchInstance,
                            MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>::Flush()::{
        lambda() #1
    }
    >(const char* str, graphicutils::BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>::Flush()::{lambda()#1}&& arg2)
{
        std::future < std::invoke_result <
            graphicutils::BatchDestroyHelper<
                std::unique_ptr<graphics::GeometryBatchInstance,
                                MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>::Flush()::{
            lambda() #1
        }
        > ::type > result;
        mutex* mutex;
        SafeBucketAllocatorSTL<std::packaged_task<void_()> _> local_60[16];
        uint64_t local_50[2];
        eastl local_30;

        char* local_68 = str;
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_30);
        local_50[0] = std::bind<graphicutils::BatchDestroyHelper<std::unique_ptr<
            graphics::GeometryBatchInstance,
            MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>::Flush()::_lambda() _1_>(arg2);
        std::allocate_shared<
            std::packaged_task<void()>, SafeBucketAllocatorSTL<std::packaged_task<void()>>, std::allocator_arg_t const&,
            SafeBucketAllocatorSTL<std::packaged_task<void()>>&,
            std::__bind<graphicutils::BatchDestroyHelper<std::unique_ptr<
                graphics::GeometryBatchInstance,
                MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>::Flush()::_lambda() _1_>,
            void>(local_60, &local_30, (SafeBucketAllocatorSTL<std::packaged_task<void_()> _>*)&local_30,
                  (__bind<graphicutils::BatchDestroyHelper<
                       std::unique_ptr<graphics::GeometryBatchInstance,
                                       MakeUniquePool<graphics::GeometryBatchInstance, _3072>::UniquePoolDeleter>
                           _>::Flush()::_lambda() _1_>*)local_50);
        int arg1 = (*local_60).operator->();
        result.get_future();
        unsigned int uVar1 = field_196++;
        unsigned long uVar2 = field_8.size();
        mutex = (mutex*)(*((unique_ptr<std::mutex[]>*)&field_40))[(unsigned long)uVar1 % uVar2];
        scoped_lock<std::mutex> local_40(*mutex);
        if ((char)field_0 != '\0') {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h", 166,
                "Cannot add tasks to the threadpool after stopping it");
        }
        deque<ThreadPool::TaskInfo>* this_00 = &field_96[(unsigned long)uVar1 % uVar2];
        new (local_50) std::shared_ptr<std::packaged_task<void()>>(*local_60);
        TaskPriority local_34 = 1;
        std::deque<ThreadPool::TaskInfo>::emplace_back<
            ThreadPool::AddTask<graphicutils::BatchDestroyHelper<std::unique_ptr<
                graphics::GeometryBatchInstance,
                MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>::Flush()::_lambda() _1_>(
                char const*,
                graphicutils::BatchDestroyHelper<std::unique_ptr<
                    graphics::GeometryBatchInstance,
                    MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>::Flush()::_lambda()
                    _1_&&)::_lambda() _1_,
            char const*&, ThreadPool::TaskPriority>(this_00, (_lambda___1_*)local_50, &local_68, &local_34);
        AddTask < graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::Flush()::{
            lambda() #1
        }
        () #1
    }>(char const*,graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::Flush()::{
        lambda() #1}()#1
}&&)::{
    lambda() #1
}
::~future((_lambda___1_*)local_50);
std::__atomic_base<unsigned int, true>::operator++();
std::condition_variable::notify_one();
return result;
}

// 0x1003876b0
void ThreadPool::AddTask <
    graphicutils::BatchDestroyHelper<
        std::unique_ptr<graphics::GeometryBatchInstance,
                        MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>::Flush()::{
    lambda() #1
}
>(char const*, graphicutils::BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>::Flush()::{lambda()#1}&&)::{
    lambda() #1
}
::~future() {
    ~future(this);
}

// 0x100389840
void ThreadPool::AddTask <
    graphicutils::BatchDestroyHelper<
        std::unique_ptr<graphics::GeometryBatchInstance,
                        MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>::Flush()::{
    lambda() #1
}
>(char const*, graphicutils::BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>::Flush()::{lambda()#1}&&)::{
    lambda() #1
}
::future({ lambda() #1 } && arg1) {
    future(arg1);
}

// 0x100389860
void ThreadPool::AddTask <
    graphicutils::BatchDestroyHelper<
        std::unique_ptr<graphics::GeometryBatchInstance,
                        MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>::Flush()::{
    lambda() #1
}
>(char const*, graphicutils::BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>::Flush()::{lambda()#1}&&)::{
    lambda() #1
}
::future({ lambda() #1 } && arg1) {
    new (this) std::shared_ptr<std::packaged_task<void()>>(arg1);
}

// 0x100389fd0
void ThreadPool::AddTask <
    graphicutils::BatchDestroyHelper<
        std::unique_ptr<graphics::GeometryBatchInstance,
                        MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>::Flush()::{
    lambda() #1
}
>(char const*, graphicutils::BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>::Flush()::{lambda()#1}&&)::{
    lambda() #1
}
::future(const { lambda() #1 } & arg1) {
    future(arg1);
}

// 0x100389ff0
void ThreadPool::AddTask <
    graphicutils::BatchDestroyHelper<
        std::unique_ptr<graphics::GeometryBatchInstance,
                        MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>::Flush()::{
    lambda() #1
}
>(char const*, graphicutils::BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>::Flush()::{lambda()#1}&&)::{
    lambda() #1
}
::future(const { lambda() #1 } & arg1) {
    new (this) std::shared_ptr<std::packaged_task<void()>>(arg1);
}

// 0x10038a270
void ThreadPool::AddTask <
    graphicutils::BatchDestroyHelper<
        std::unique_ptr<graphics::GeometryBatchInstance,
                        MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>::Flush()::{
    lambda() #1
}
>(char const*, graphicutils::BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>::Flush()::{lambda()#1}&&)::{
    lambda() #1
}
::operator()() const {
    packaged_task<void()>* this_00;

    this_00 = (packaged_task<void()>*)**this;
    std::packaged_task<void()>::operator()(this_00);
}

// 0x10038a3d0
void ThreadPool::AddTask <
    graphicutils::BatchDestroyHelper<
        std::unique_ptr<graphics::GeometryBatchInstance,
                        MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>::Flush()::{
    lambda() #1
}
>(char const*, graphicutils::BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>::Flush()::{lambda()#1}&&)::{
    lambda() #1
}
::~future() {
    ~shared_ptr();
}

// 0x10047ac30
std::future<std::invoke_result<game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5>::type>
ThreadPool::AddTask<game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5>(
    const char* str, game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5&& arg2) {
    std::future<std::invoke_result<game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5>::type> result;
    packaged_task<game::MapSquareEnvIrradianceInfo()>* this;
    mutex* mutex;
    SafeBucketAllocatorSTL<std::packaged_task<game::MapSquareEnvIrradianceInfo_()> _> local_58[16];
    eastl local_38;

    char* local_60 = "SHCalculate";
    eastl::destruct<oldscape::highlight::NpcUID*>(&local_38);
    std::bind<game::LightProbeManager::UpdatePendingLightProbeSHAsync()::__5>(&local_90);
    std::allocate_shared<std::packaged_task<game::MapSquareEnvIrradianceInfo()>,
                         SafeBucketAllocatorSTL<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>,
                         std::allocator_arg_t const&,
                         SafeBucketAllocatorSTL<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>&,
                         std::__bind<game::LightProbeManager::UpdatePendingLightProbeSHAsync()::__5>, void>(
        local_58, &local_38,
        (SafeBucketAllocatorSTL<std::packaged_task<game::MapSquareEnvIrradianceInfo_()> _>*)&local_38,
        (__bind<game::LightProbeManager::UpdatePendingLightProbeSHAsync()::__5>*)&local_90);
    this = (packaged_task<game::MapSquareEnvIrradianceInfo()>*)(*local_58).operator->();
    result = get_future();
    unsigned int uVar1 = (*((str + 196)))++;
    unsigned long uVar2 = ((str + 8))->size();
    mutex = (mutex*)(*((unique_ptr<std::mutex[]>*)(str + 40)))[(unsigned long)uVar1 % uVar2];
    scoped_lock<std::mutex> local_48(*mutex);
    if (*str != '\0') {
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h",
                        166, "Cannot add tasks to the threadpool after stopping it");
    }
    deque<ThreadPool::TaskInfo>* this_00 = (deque<ThreadPool::TaskInfo>*)(*((str + 96)))[(unsigned long)uVar1 % uVar2];
    __5 local_90() >> (*local_58);
    TaskPriority local_3c = 1;
    std::deque<ThreadPool::TaskInfo>::emplace_back<
        ThreadPool::AddTask<game::LightProbeManager::UpdatePendingLightProbeSHAsync()::__5>(
            char const*, game::LightProbeManager::UpdatePendingLightProbeSHAsync()::__5&&)::_lambda() _1_,
        char const*&, ThreadPool::TaskPriority>(this_00, (_lambda___1_*)&local_90, &local_60, &local_3c);
    AddTask<game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5>(
        char const*, game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5&&)::{
        lambda() #1
    }
    ::~future((_lambda___1_*)&local_90);
    std::__atomic_base<unsigned int, true>::operator++();
    std::condition_variable::notify_one();
    return result;
}

// 0x10047c950
std::future<std::invoke_result<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul>&,
                                                     unsigned int, game::World&, int, int, int, int, int,
                                                     render::Viewport const&, bool)::$_7>::type>
ThreadPool::AddTask<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul>&, unsigned int,
                                          game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_7>(
    const char* str,
    game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul>&, unsigned int, game::World&, int, int,
                          int, int, int, render::Viewport const&, bool)::$_7&& arg2) {
    std::future<std::invoke_result<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul>&,
                                                         unsigned int, game::World&, int, int, int, int, int,
                                                         render::Viewport const&, bool)::$_7>::type>
        result;
    mutex* mutex;
    deque<ThreadPool::TaskInfo>* deque;
    SafeBucketAllocatorSTL<std::packaged_task<void_()> _> local_58[16];
    eastl local_38;

    char* local_60 = "Picking";
    eastl::destruct<oldscape::highlight::NpcUID*>(&local_38);
    std::bind<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul>&, unsigned int, game::World&,
                                    int, int, int, int, int, render::Viewport const&, bool)::__7>(&local_b8);
    std::allocate_shared<
        std::packaged_task<void()>, SafeBucketAllocatorSTL<std::packaged_task<void()>>, std::allocator_arg_t const&,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>&,
        std::__bind<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul>&, unsigned int,
                                          game::World&, int, int, int, int, int, render::Viewport const&, bool)::__7>,
        void>(local_58, &local_38, (SafeBucketAllocatorSTL<std::packaged_task<void_()> _>*)&local_38,
              (__bind<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, _128ul>&, unsigned int,
                                            game::World&, int, int, int, int, int, render::Viewport const&,
                                            bool)::__7>*)&local_b8);
    int arg1 = (*local_58).operator->();
    result.get_future();
    unsigned int uVar1 = (*((str + 196)))++;
    unsigned long uVar2 = ((str + 8))->size();
    mutex = (mutex*)(*((unique_ptr<std::mutex[]>*)(str + 40)))[(unsigned long)uVar1 % uVar2];
    scoped_lock<std::mutex> local_48(*mutex);
    if (*str != '\0') {
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h",
                        166, "Cannot add tasks to the threadpool after stopping it");
    }
    deque = (deque<ThreadPool::TaskInfo>*)(*((str + 96)))[(unsigned long)uVar1 % uVar2];
    __7 local_b8() >> (*local_58);
    TaskPriority local_3c = 1;
    std::deque<ThreadPool::TaskInfo>::emplace_back<
        ThreadPool::AddTask<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul>&, unsigned int,
                                                  game::World&, int, int, int, int, int, render::Viewport const&,
                                                  bool)::__7>(
            char const*, game::DoEntityPicking(*(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul>&), unsigned int,
                                               *(game::World&), int, int, int, int, int, *(render::Viewport const&),
                                               bool)::__7&&)::_lambda() _1_,
        char const*&, ThreadPool::TaskPriority>(deque, &local_b8, &local_60, &local_3c);
    AddTask<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul>&, unsigned int, game::World&,
                                  int, int, int, int, int, render::Viewport const&, bool)::$_7>(
        char const*,
        game::DoEntityPicking(*(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul>&), unsigned int, *(game::World&),
                              int, int, int, int, int, *(render::Viewport const&), bool)::$_7&&)::{
        lambda() #1
    }
    ::~future(&local_b8);
    std::__atomic_base<unsigned int, true>::operator++();
    std::condition_variable::notify_one();
    return result;
}

// 0x10047cda0
std::future<std::invoke_result<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul>&,
                                                     unsigned int, game::World&, int, int, int, int, int,
                                                     render::Viewport const&, bool)::$_8>::type>
ThreadPool::AddTask<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul>&, unsigned int,
                                          game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_8>(
    const char* str,
    game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul>&, unsigned int, game::World&, int, int,
                          int, int, int, render::Viewport const&, bool)::$_8&& arg2) {
    std::future<std::invoke_result<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul>&,
                                                         unsigned int, game::World&, int, int, int, int, int,
                                                         render::Viewport const&, bool)::$_8>::type>
        result;
    mutex* mutex;
    deque<ThreadPool::TaskInfo>* deque;
    SafeBucketAllocatorSTL<std::packaged_task<void_()> _> local_58[16];
    eastl local_38;

    char* local_60 = "PickingTriangle";
    eastl::destruct<oldscape::highlight::NpcUID*>(&local_38);
    std::bind<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul>&, unsigned int, game::World&,
                                    int, int, int, int, int, render::Viewport const&, bool)::__8>(&local_b0);
    std::allocate_shared<
        std::packaged_task<void()>, SafeBucketAllocatorSTL<std::packaged_task<void()>>, std::allocator_arg_t const&,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>&,
        std::__bind<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul>&, unsigned int,
                                          game::World&, int, int, int, int, int, render::Viewport const&, bool)::__8>,
        void>(local_58, &local_38, (SafeBucketAllocatorSTL<std::packaged_task<void_()> _>*)&local_38,
              (__bind<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, _128ul>&, unsigned int,
                                            game::World&, int, int, int, int, int, render::Viewport const&,
                                            bool)::__8>*)&local_b0);
    int arg1 = (*local_58).operator->();
    result.get_future();
    unsigned int uVar1 = (*((str + 196)))++;
    unsigned long uVar2 = ((str + 8))->size();
    mutex = (mutex*)(*((unique_ptr<std::mutex[]>*)(str + 40)))[(unsigned long)uVar1 % uVar2];
    scoped_lock<std::mutex> local_48(*mutex);
    if (*str != '\0') {
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h",
                        166, "Cannot add tasks to the threadpool after stopping it");
    }
    deque = (deque<ThreadPool::TaskInfo>*)(*((str + 96)))[(unsigned long)uVar1 % uVar2];
    __8 local_b0() >> (*local_58);
    TaskPriority local_3c = 1;
    std::deque<ThreadPool::TaskInfo>::emplace_back<
        ThreadPool::AddTask<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul>&, unsigned int,
                                                  game::World&, int, int, int, int, int, render::Viewport const&,
                                                  bool)::__8>(
            char const*, game::DoEntityPicking(*(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul>&), unsigned int,
                                               *(game::World&), int, int, int, int, int, *(render::Viewport const&),
                                               bool)::__8&&)::_lambda() _1_,
        char const*&, ThreadPool::TaskPriority>(deque, &local_b0, &local_60, &local_3c);
    AddTask<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul>&, unsigned int, game::World&,
                                  int, int, int, int, int, render::Viewport const&, bool)::$_8>(
        char const*,
        game::DoEntityPicking(*(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul>&), unsigned int, *(game::World&),
                              int, int, int, int, int, *(render::Viewport const&), bool)::$_8&&)::{
        lambda() #1
    }
    ::~future(&local_b0);
    std::__atomic_base<unsigned int, true>::operator++();
    std::condition_variable::notify_one();
    return result;
}

// 0x100482a10
void ThreadPool::AddTask<game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5>(
    char const*, game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5&&)::{
    lambda() #1
}
::~future() {
    ~future(this);
}

// 0x100484930
void ThreadPool::AddTask<game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5>(
    char const*, game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5&&)::{
    lambda() #1
}
::future({ lambda() #1 } && arg1) {
    future(arg1);
}

// 0x100484950
void ThreadPool::AddTask<game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5>(
    char const*, game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5&&)::{
    lambda() #1
}
::future({ lambda() #1 } && arg1) {
    new (this) std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>(arg1);
}

// 0x1004850e0
void ThreadPool::AddTask<game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5>(
    char const*, game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5&&)::{
    lambda() #1
}
::future(const { lambda() #1 } & arg1) {
    future(arg1);
}

// 0x100485100
void ThreadPool::AddTask<game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5>(
    char const*, game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5&&)::{
    lambda() #1
}
::future(const { lambda() #1 } & arg1) {
    new (this) std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>(arg1);
}

// 0x100485370
void ThreadPool::AddTask<game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5>(
    char const*, game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5&&)::{
    lambda() #1
}
::operator()() const {
    packaged_task<game::MapSquareEnvIrradianceInfo()>* this_00;

    this_00 = (packaged_task<game::MapSquareEnvIrradianceInfo()>*)**this;
    std::packaged_task<game::MapSquareEnvIrradianceInfo()>::operator()(this_00);
}

// 0x100485620
void ThreadPool::AddTask<game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5>(
    char const*, game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5&&)::{
    lambda() #1
}
::~future() {
    ~shared_ptr();
}

// 0x100488530
void ThreadPool::AddTask<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul>&, unsigned int,
                                               game::World&, int, int, int, int, int, render::Viewport const&,
                                               bool)::$_7>(
    char const*, game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul>&, unsigned int,
                                       game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_7&&)::{
    lambda() #1
}
::~future() {
    ~future(this);
}

// 0x1004891b0
void ThreadPool::AddTask<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul>&, unsigned int,
                                               game::World&, int, int, int, int, int, render::Viewport const&,
                                               bool)::$_7>(
    char const*, game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul>&, unsigned int,
                                       game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_7&&)::{
    lambda() #1
}
::future({ lambda() #1 } && arg1) {
    future(arg1);
}

// 0x1004891d0
void ThreadPool::AddTask<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul>&, unsigned int,
                                               game::World&, int, int, int, int, int, render::Viewport const&,
                                               bool)::$_7>(
    char const*, game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul>&, unsigned int,
                                       game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_7&&)::{
    lambda() #1
}
::future({ lambda() #1 } && arg1) {
    new (this) std::shared_ptr<std::packaged_task<void()>>(arg1);
}

// 0x100489920
void ThreadPool::AddTask<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul>&, unsigned int,
                                               game::World&, int, int, int, int, int, render::Viewport const&,
                                               bool)::$_7>(
    char const*, game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul>&, unsigned int,
                                       game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_7&&)::{
    lambda() #1
}
::future(const { lambda() #1 } & arg1) {
    future(arg1);
}

// 0x100489940
void ThreadPool::AddTask<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul>&, unsigned int,
                                               game::World&, int, int, int, int, int, render::Viewport const&,
                                               bool)::$_7>(
    char const*, game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul>&, unsigned int,
                                       game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_7&&)::{
    lambda() #1
}
::future(const { lambda() #1 } & arg1) {
    new (this) std::shared_ptr<std::packaged_task<void()>>(arg1);
}

// 0x100489bb0
void ThreadPool::AddTask<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul>&, unsigned int,
                                               game::World&, int, int, int, int, int, render::Viewport const&,
                                               bool)::$_7>(
    char const*, game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul>&, unsigned int,
                                       game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_7&&)::{
    lambda() #1
}
::operator()() const {
    packaged_task<void()>* this_00;

    this_00 = (packaged_task<void()>*)**this;
    std::packaged_task<void()>::operator()(this_00);
}

// 0x100489c30
void ThreadPool::AddTask<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul>&, unsigned int,
                                               game::World&, int, int, int, int, int, render::Viewport const&,
                                               bool)::$_7>(
    char const*, game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul>&, unsigned int,
                                       game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_7&&)::{
    lambda() #1
}
::~future() {
    ~shared_ptr();
}

// 0x10048a430
void ThreadPool::AddTask<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul>&, unsigned int,
                                               game::World&, int, int, int, int, int, render::Viewport const&,
                                               bool)::$_8>(
    char const*, game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul>&, unsigned int,
                                       game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_8&&)::{
    lambda() #1
}
::~future() {
    ~future(this);
}

// 0x10048ae10
void ThreadPool::AddTask<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul>&, unsigned int,
                                               game::World&, int, int, int, int, int, render::Viewport const&,
                                               bool)::$_8>(
    char const*, game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul>&, unsigned int,
                                       game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_8&&)::{
    lambda() #1
}
::future({ lambda() #1 } && arg1) {
    future(arg1);
}

// 0x10048ae30
void ThreadPool::AddTask<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul>&, unsigned int,
                                               game::World&, int, int, int, int, int, render::Viewport const&,
                                               bool)::$_8>(
    char const*, game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul>&, unsigned int,
                                       game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_8&&)::{
    lambda() #1
}
::future({ lambda() #1 } && arg1) {
    new (this) std::shared_ptr<std::packaged_task<void()>>(arg1);
}

// 0x10048b550
void ThreadPool::AddTask<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul>&, unsigned int,
                                               game::World&, int, int, int, int, int, render::Viewport const&,
                                               bool)::$_8>(
    char const*, game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul>&, unsigned int,
                                       game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_8&&)::{
    lambda() #1
}
::future(const { lambda() #1 } & arg1) {
    future(arg1);
}

// 0x10048b570
void ThreadPool::AddTask<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul>&, unsigned int,
                                               game::World&, int, int, int, int, int, render::Viewport const&,
                                               bool)::$_8>(
    char const*, game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul>&, unsigned int,
                                       game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_8&&)::{
    lambda() #1
}
::future(const { lambda() #1 } & arg1) {
    new (this) std::shared_ptr<std::packaged_task<void()>>(arg1);
}

// 0x10048b7e0
void ThreadPool::AddTask<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul>&, unsigned int,
                                               game::World&, int, int, int, int, int, render::Viewport const&,
                                               bool)::$_8>(
    char const*, game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul>&, unsigned int,
                                       game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_8&&)::{
    lambda() #1
}
::operator()() const {
    packaged_task<void()>* this_00;

    this_00 = (packaged_task<void()>*)**this;
    std::packaged_task<void()>::operator()(this_00);
}

// 0x10048b810
void ThreadPool::AddTask<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul>&, unsigned int,
                                               game::World&, int, int, int, int, int, render::Viewport const&,
                                               bool)::$_8>(
    char const*, game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul>&, unsigned int,
                                       game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_8&&)::{
    lambda() #1
}
::~future() {
    ~shared_ptr();
}

// 0x1004df810
std::future<std::invoke_result<
    game::SeqType::GetAnimation(game::AssetBuilder&, game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&,
                                unsigned int, shared_ptr<graphics::Model> const&)::$_0>::type>
ThreadPool::AddTask<game::SeqType::GetAnimation(game::AssetBuilder&,
                                                game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&,
                                                unsigned int, shared_ptr<graphics::Model> const&)::$_0>(
    const char* str,
    game::SeqType::GetAnimation(game::AssetBuilder&, game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&,
                                unsigned int, shared_ptr<graphics::Model> const&)::$_0&& arg2) {
    std::future<std::invoke_result<game::SeqType::GetAnimation(
        game::AssetBuilder&, game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&, unsigned int,
        shared_ptr<graphics::Model> const&)::$_0>::type>
        result;
    mutex* mutex;
    deque<ThreadPool::TaskInfo>* deque;
    SafeBucketAllocatorSTL<std::packaged_task<void_()> _> local_58[16];
    eastl local_38;

    char* local_60 = "Maya Anim Sample";
    eastl::destruct<oldscape::highlight::NpcUID*>(&local_38);
    std::bind<game::SeqType::GetAnimation(game::AssetBuilder&,
                                          game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&,
                                          unsigned int, shared_ptr<graphics::Model> const&)::__0>(&local_98);
    std::allocate_shared<std::packaged_task<void()>, SafeBucketAllocatorSTL<std::packaged_task<void()>>,
                         std::allocator_arg_t const&, SafeBucketAllocatorSTL<std::packaged_task<void()>>&,
                         std::__bind<game::SeqType::GetAnimation(
                             game::AssetBuilder&, game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&,
                             unsigned int, shared_ptr<graphics::Model> const&)::__0>,
                         void>(
        local_58, &local_38, (SafeBucketAllocatorSTL<std::packaged_task<void_()> _>*)&local_38,
        (__bind<game::SeqType::GetAnimation(game::AssetBuilder&,
                                            game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&,
                                            unsigned int, shared_ptr<graphics::Model> const&)::__0>*)&local_98);
    int arg1 = (*local_58).operator->();
    result.get_future();
    unsigned int uVar1 = (*((str + 196)))++;
    unsigned long uVar2 = ((str + 8))->size();
    mutex = (mutex*)(*((unique_ptr<std::mutex[]>*)(str + 40)))[(unsigned long)uVar1 % uVar2];
    scoped_lock<std::mutex> local_48(*mutex);
    if (*str != '\0') {
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h",
                        166, "Cannot add tasks to the threadpool after stopping it");
    }
    deque = (deque<ThreadPool::TaskInfo>*)(*((str + 96)))[(unsigned long)uVar1 % uVar2];
    __0 local_98() >> (*local_58);
    TaskPriority local_3c = 1;
    std::deque<ThreadPool::TaskInfo>::emplace_back<
        ThreadPool::AddTask<game::SeqType::GetAnimation(
            game::AssetBuilder&, game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&, unsigned int,
            shared_ptr<graphics::Model> const&)::__0>(
            char const*, (game::AssetBuilder&)
                             ->GetAnimation(game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&,
                                            unsigned int, shared_ptr<graphics::Model> const&)::__0&&)::_lambda() _1_,
        char const*&, ThreadPool::TaskPriority>(deque, &local_98, &local_60, &local_3c);
    AddTask<game::SeqType::GetAnimation(game::AssetBuilder&,
                                        game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&,
                                        unsigned int, shared_ptr<graphics::Model> const&)::$_0>(
        char const*, (game::AssetBuilder&)
                         ->GetAnimation(game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&,
                                        unsigned int, shared_ptr<graphics::Model> const&)::$_0&&)::{
        lambda() #1
    }
    ::~future(&local_98);
    std::__atomic_base<unsigned int, true>::operator++();
    std::condition_variable::notify_one();
    return result;
}

// 0x1004e7160
void ThreadPool::AddTask<game::SeqType::GetAnimation(game::AssetBuilder&,
                                                     game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&,
                                                     unsigned int, shared_ptr<graphics::Model> const&)::$_0>(
    char const*,
    game::SeqType::GetAnimation(game::AssetBuilder&, game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&,
                                unsigned int, shared_ptr<graphics::Model> const&)::$_0&&)::{
    lambda() #1
}
::~future() {
    ~future(this);
}

// 0x1004e8aa0
void ThreadPool::AddTask<game::SeqType::GetAnimation(game::AssetBuilder&,
                                                     game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&,
                                                     unsigned int, shared_ptr<graphics::Model> const&)::$_0>(
    char const*,
    game::SeqType::GetAnimation(game::AssetBuilder&, game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&,
                                unsigned int, shared_ptr<graphics::Model> const&)::$_0&&)::{
    lambda() #1
}
::future({ lambda() #1 } && arg1) {
    future(arg1);
}

// 0x1004e8ac0
void ThreadPool::AddTask<game::SeqType::GetAnimation(game::AssetBuilder&,
                                                     game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&,
                                                     unsigned int, shared_ptr<graphics::Model> const&)::$_0>(
    char const*,
    game::SeqType::GetAnimation(game::AssetBuilder&, game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&,
                                unsigned int, shared_ptr<graphics::Model> const&)::$_0&&)::{
    lambda() #1
}
::future({ lambda() #1 } && arg1) {
    new (this) std::shared_ptr<std::packaged_task<void()>>(arg1);
}

// 0x1004e9250
void ThreadPool::AddTask<game::SeqType::GetAnimation(game::AssetBuilder&,
                                                     game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&,
                                                     unsigned int, shared_ptr<graphics::Model> const&)::$_0>(
    char const*,
    game::SeqType::GetAnimation(game::AssetBuilder&, game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&,
                                unsigned int, shared_ptr<graphics::Model> const&)::$_0&&)::{
    lambda() #1
}
::future(const { lambda() #1 } & arg1) {
    future(arg1);
}

// 0x1004e9270
void ThreadPool::AddTask<game::SeqType::GetAnimation(game::AssetBuilder&,
                                                     game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&,
                                                     unsigned int, shared_ptr<graphics::Model> const&)::$_0>(
    char const*,
    game::SeqType::GetAnimation(game::AssetBuilder&, game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&,
                                unsigned int, shared_ptr<graphics::Model> const&)::$_0&&)::{
    lambda() #1
}
::future(const { lambda() #1 } & arg1) {
    new (this) std::shared_ptr<std::packaged_task<void()>>(arg1);
}

// 0x1004e94e0
void ThreadPool::AddTask<game::SeqType::GetAnimation(game::AssetBuilder&,
                                                     game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&,
                                                     unsigned int, shared_ptr<graphics::Model> const&)::$_0>(
    char const*,
    game::SeqType::GetAnimation(game::AssetBuilder&, game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&,
                                unsigned int, shared_ptr<graphics::Model> const&)::$_0&&)::{
    lambda() #1
}
::operator()() const {
    packaged_task<void()>* this_00;

    this_00 = (packaged_task<void()>*)**this;
    std::packaged_task<void()>::operator()(this_00);
}

// 0x1004e96b0
void ThreadPool::AddTask<game::SeqType::GetAnimation(game::AssetBuilder&,
                                                     game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&,
                                                     unsigned int, shared_ptr<graphics::Model> const&)::$_0>(
    char const*,
    game::SeqType::GetAnimation(game::AssetBuilder&, game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&,
                                unsigned int, shared_ptr<graphics::Model> const&)::$_0&&)::{
    lambda() #1
}
::~future() {
    ~shared_ptr();
}

// 0x1006f2780
void ThreadPool::RunOnceOnAllThreads <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const ::{
    lambda() #1
}
>(const char* str, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const::{lambda()#1}&& arg2)
{
    unsigned long uVar3;
    mutex* mutex;
    deque<ThreadPool::TaskInfo>* this_01;
    shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>> local_b0[16];
    packaged_task<void()> local_a0[16];
    unique_ptr<std::mutex[]>* local_68;
    vector<std::deque<ThreadPool::TaskInfo>>* local_60;
    uint8_t* local_58;
    scoped_lock<std::mutex> local_50;
    TaskPriority local_44;
    _lambda___1_ local_40;
    bool local_39;
    eastl local_38;

    char* local_78 = "printbucketmetrics";
    eastl::destruct<oldscape::highlight::NpcUID*>(&local_38);
    vector<std::future<void>, BucketAllocatorEASTL> local_90;
    uint8_t* this_00 = &field_8;
    unsigned long uVar1 = this_00->size();
    local_90.reserve(uVar1);
    vector<eastl::pair<int, int>>* local_70 = (vector<eastl::pair<int, int>>*)this_00;
    long lVar2 = this_00->size();
    if (lVar2 != 0) {
        local_68 = (unique_ptr<std::mutex[]>*)&field_40;
        local_60 = (vector<std::deque<ThreadPool::TaskInfo>>*)&field_96;
        local_58 = &field_192;
        uVar1 = 0;
        do {
            std::operator()((SafeBucketAllocatorSTL<std::packaged_task<void_()> _>*)local_b0, &local_38,
                            (SafeBucketAllocatorSTL<std::packaged_task<void_()> _>*)&local_38, &local_40);
            (*local_b0).operator->();
            local_a0->get_future();
            local_90.emplace_back<std::future<void>>(*local_a0);
            mutex = (mutex*)(*local_68)[uVar1];
            local_50 = std::scoped_lock(*mutex);
            if ((char)field_0 != '\0') {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h",
                    214, "Cannot add tasks to the threadpool after stopping it");
            }
            this_01 = (deque<ThreadPool::TaskInfo>*)(*local_60)[uVar1];
            new (local_a0) std::shared_ptr<std::packaged_task<void()>>(*local_b0);
            local_44 = 1;
            local_39 = false;
            std::deque<ThreadPool::TaskInfo>::operator()(this_01, (_lambda___2_*)local_a0, &local_78, &local_44,
                                                         &local_39);
            RunOnceOnAllThreads < game::RegisterCommonCommandsDebug(console::Console*, BaseApp*,
                                                                    graphics::RT7Core*)::$_4::operator()() const ::{
                lambda() #2
            }
            () #1
        }>(char const*,game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()()const::{
            lambda() #2}()#1
    }&&)::{
        lambda() #2
    }
    ::~RunOnceOnAllThreads((_lambda___2_*)local_a0);
    std::__atomic_base<unsigned int, true>::operator++();
    uVar1 = uVar1 + 1;
    uVar3 = local_70->size();
}
while (uVar1 < uVar3)
    ;
}
std::condition_variable::notify_all();
lVar2 = local_90.HeapBeginPtr();
long lVar4 = local_90.end();
for (; lVar2 != lVar4; lVar2 = lVar2 + 8) {
    std::future<void>::get();
}
return;
}

// 0x1006f2e10
void ThreadPool::RunOnceOnAllThreads <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const ::{
    lambda() #1
}
>(char const*, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const::{lambda()#1}&&)::{
    lambda() #2
}
::~RunOnceOnAllThreads() {
    ~RunOnceOnAllThreads(this);
}

// 0x1006f3340
void ThreadPool::RunOnceOnAllThreads <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const ::{
    lambda() #1
}
>(char const*, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const::{lambda()#1}&&)::{
    lambda() #1
}
::operator()() const {
    const ::{
        lambda() #1
    }
    ::operator()((_lambda___1_*)this);
}

// 0x1006f3ff0
void ThreadPool::RunOnceOnAllThreads <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const ::{
    lambda() #1
}
>(char const*, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const::{lambda()#1}&&)::{
    lambda() #2
}
::RunOnceOnAllThreads({ lambda() #2 } && arg1) {
    RunOnceOnAllThreads(arg1);
}

// 0x1006f4010
void ThreadPool::RunOnceOnAllThreads <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const ::{
    lambda() #1
}
>(char const*, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const::{lambda()#1}&&)::{
    lambda() #2
}
::RunOnceOnAllThreads({ lambda() #2 } && arg1) {
    new (this) std::shared_ptr<std::packaged_task<void()>>(arg1);
}

// 0x1006f47a0
void ThreadPool::RunOnceOnAllThreads <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const ::{
    lambda() #1
}
>(char const*, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const::{lambda()#1}&&)::{
    lambda() #2
}
::RunOnceOnAllThreads(const { lambda() #2 } & arg1) {
    RunOnceOnAllThreads(arg1);
}

// 0x1006f47c0
void ThreadPool::RunOnceOnAllThreads <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const ::{
    lambda() #1
}
>(char const*, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const::{lambda()#1}&&)::{
    lambda() #2
}
::RunOnceOnAllThreads(const { lambda() #2 } & arg1) {
    new (this) std::shared_ptr<std::packaged_task<void()>>(arg1);
}

// 0x1006f4a30
void ThreadPool::RunOnceOnAllThreads <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const ::{
    lambda() #1
}
>(char const*, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const::{lambda()#1}&&)::{
    lambda() #2
}
::operator()() const {
    packaged_task<void()>* this_00;

    this_00 = (packaged_task<void()>*)**this;
    std::packaged_task<void()>::operator()(this_00);
}

// 0x1006f4c00
void ThreadPool::RunOnceOnAllThreads <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const ::{
    lambda() #1
}
>(char const*, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const::{lambda()#1}&&)::{
    lambda() #2
}
::~RunOnceOnAllThreads() {
    ~shared_ptr();
}

// 0x1006f5850
void ThreadPool::RunOnceOnAllThreads <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const ::{
    lambda() #1
}
>(const char* str, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const::{lambda()#1}&& arg2)
{
    unsigned long uVar3;
    mutex* mutex;
    deque<ThreadPool::TaskInfo>* this_01;
    shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>> local_b0[16];
    packaged_task<void()> local_a0[16];
    unique_ptr<std::mutex[]>* local_68;
    vector<std::deque<ThreadPool::TaskInfo>>* local_60;
    uint8_t* local_58;
    scoped_lock<std::mutex> local_50;
    TaskPriority local_44;
    _lambda___1_ local_40;
    bool local_39;
    eastl local_38;

    char* local_78 = "printbucketmetrics";
    eastl::destruct<oldscape::highlight::NpcUID*>(&local_38);
    vector<std::future<void>, BucketAllocatorEASTL> local_90;
    uint8_t* this_00 = &field_8;
    unsigned long uVar1 = this_00->size();
    local_90.reserve(uVar1);
    vector<eastl::pair<int, int>>* local_70 = (vector<eastl::pair<int, int>>*)this_00;
    long lVar2 = this_00->size();
    if (lVar2 != 0) {
        local_68 = (unique_ptr<std::mutex[]>*)&field_40;
        local_60 = (vector<std::deque<ThreadPool::TaskInfo>>*)&field_96;
        local_58 = &field_192;
        uVar1 = 0;
        do {
            std::operator()((SafeBucketAllocatorSTL<std::packaged_task<void_()> _>*)local_b0, &local_38,
                            (SafeBucketAllocatorSTL<std::packaged_task<void_()> _>*)&local_38, &local_40);
            (*local_b0).operator->();
            local_a0->get_future();
            local_90.emplace_back<std::future<void>>(*local_a0);
            mutex = (mutex*)(*local_68)[uVar1];
            local_50 = std::scoped_lock(*mutex);
            if ((char)field_0 != '\0') {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h",
                    214, "Cannot add tasks to the threadpool after stopping it");
            }
            this_01 = (deque<ThreadPool::TaskInfo>*)(*local_60)[uVar1];
            new (local_a0) std::shared_ptr<std::packaged_task<void()>>(*local_b0);
            local_44 = 1;
            local_39 = false;
            std::deque<ThreadPool::TaskInfo>::operator()(this_01, (_lambda___2_*)local_a0, &local_78, &local_44,
                                                         &local_39);
            RunOnceOnAllThreads < game::RegisterCommonCommandsDebug(console::Console*, BaseApp*,
                                                                    graphics::RT7Core*)::$_5::operator()() const ::{
                lambda() #2
            }
            () #1
        }>(char const*,game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()()const::{
            lambda() #2}()#1
    }&&)::{
        lambda() #2
    }
    ::~RunOnceOnAllThreads((_lambda___2_*)local_a0);
    std::__atomic_base<unsigned int, true>::operator++();
    uVar1 = uVar1 + 1;
    uVar3 = local_70->size();
}
while (uVar1 < uVar3)
    ;
}
std::condition_variable::notify_all();
lVar2 = local_90.HeapBeginPtr();
long lVar4 = local_90.end();
for (; lVar2 != lVar4; lVar2 = lVar2 + 8) {
    std::future<void>::get();
}
return;
}

// 0x1006f5c90
void ThreadPool::RunOnceOnAllThreads <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const ::{
    lambda() #1
}
>(char const*, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const::{lambda()#1}&&)::{
    lambda() #2
}
::~RunOnceOnAllThreads() {
    ~RunOnceOnAllThreads(this);
}

// 0x1006f5fc0
void ThreadPool::RunOnceOnAllThreads <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const ::{
    lambda() #1
}
>(char const*, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const::{lambda()#1}&&)::{
    lambda() #1
}
::operator()() const {
    const ::{
        lambda() #1
    }
    ::operator()((_lambda___1_*)this);
}

// 0x1006f60a0
void ThreadPool::RunOnceOnAllThreads <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const ::{
    lambda() #1
}
>(char const*, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const::{lambda()#1}&&)::{
    lambda() #2
}
::RunOnceOnAllThreads({ lambda() #2 } && arg1) {
    RunOnceOnAllThreads(arg1);
}

// 0x1006f60c0
void ThreadPool::RunOnceOnAllThreads <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const ::{
    lambda() #1
}
>(char const*, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const::{lambda()#1}&&)::{
    lambda() #2
}
::RunOnceOnAllThreads({ lambda() #2 } && arg1) {
    new (this) std::shared_ptr<std::packaged_task<void()>>(arg1);
}

// 0x1006f67e0
void ThreadPool::RunOnceOnAllThreads <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const ::{
    lambda() #1
}
>(char const*, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const::{lambda()#1}&&)::{
    lambda() #2
}
::RunOnceOnAllThreads(const { lambda() #2 } & arg1) {
    RunOnceOnAllThreads(arg1);
}

// 0x1006f6800
void ThreadPool::RunOnceOnAllThreads <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const ::{
    lambda() #1
}
>(char const*, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const::{lambda()#1}&&)::{
    lambda() #2
}
::RunOnceOnAllThreads(const { lambda() #2 } & arg1) {
    new (this) std::shared_ptr<std::packaged_task<void()>>(arg1);
}

// 0x1006f6a70
void ThreadPool::RunOnceOnAllThreads <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const ::{
    lambda() #1
}
>(char const*, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const::{lambda()#1}&&)::{
    lambda() #2
}
::operator()() const {
    packaged_task<void()>* this_00;

    this_00 = (packaged_task<void()>*)**this;
    std::packaged_task<void()>::operator()(this_00);
}

// 0x1006f6aa0
void ThreadPool::RunOnceOnAllThreads <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const ::{
    lambda() #1
}
>(char const*, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const::{lambda()#1}&&)::{
    lambda() #2
}
::~RunOnceOnAllThreads() {
    ~shared_ptr();
}

// 0x100703190
std::future < std::invoke_result <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_19::operator()() const ::{
    lambda() #1
}
> ::type > ThreadPool::AddTask <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_19::operator()() const ::{
    lambda() #1
}
>(const char* str, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_19::operator()() const::{lambda()#1}&& arg2)
{
    mutex* mutex;
    deque<ThreadPool::TaskInfo>* deque;
    SafeBucketAllocatorSTL<std::packaged_task<void_()> _> local_60[16];
    __bind<game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::__19::operator()()
               _const::_lambda() _1_>
        local_50[16];
    eastl local_30;

    char* local_68 = "Crash";
    eastl::destruct<oldscape::highlight::NpcUID*>(&local_30);
    std::operator()(local_60, &local_30, (SafeBucketAllocatorSTL<std::packaged_task<void_()> _>*)&local_30, local_50);
    int arg1 = (*local_60).operator->();
    str->get_future();
    unsigned int uVar1 = (*((arg2 + 196)))++;
    unsigned long uVar2 = ((arg2 + 8))->size();
    mutex = (mutex*)(*((unique_ptr<std::mutex[]>*)(arg2 + 40)))[(unsigned long)uVar1 % uVar2];
    scoped_lock<std::mutex> local_40(*mutex);
    if (arg2 != (_lambda___1_)0) {
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h",
                        166, "Cannot add tasks to the threadpool after stopping it");
    }
    deque = (deque<ThreadPool::TaskInfo>*)(*((arg2 + 96)))[(unsigned long)uVar1 % uVar2];
    new (local_50) std::shared_ptr<std::packaged_task<void()>>(*local_60);
    TaskPriority local_34 = 1;
    std::deque<ThreadPool::TaskInfo>::operator()(deque, (_lambda___1_*)local_50, &local_68, &local_34);
    AddTask < game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_19::operator()()
                  const ::{
        lambda() #1
    }
    () #1
}>(char const*,game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_19::operator()()const::{
    lambda() #1}()#1
}&&)::{
    lambda() #1
}
::~future((_lambda___1_*)local_50);
std::__atomic_base<unsigned int, true>::operator++();
std::condition_variable::notify_one();
return str;
}

// 0x100703470
void ThreadPool::AddTask <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_19::operator()() const ::{
    lambda() #1
}
>(char const*, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_19::operator()() const::{lambda()#1}&&)::{
    lambda() #1
}
::~future() {
    ~future(this);
}

// 0x1007038a0
void ThreadPool::AddTask <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_19::operator()() const ::{
    lambda() #1
}
>(char const*, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_19::operator()() const::{lambda()#1}&&)::{
    lambda() #1
}
::future({ lambda() #1 } && arg1) {
    future(arg1);
}

// 0x1007038c0
void ThreadPool::AddTask <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_19::operator()() const ::{
    lambda() #1
}
>(char const*, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_19::operator()() const::{lambda()#1}&&)::{
    lambda() #1
}
::future({ lambda() #1 } && arg1) {
    new (this) std::shared_ptr<std::packaged_task<void()>>(arg1);
}

// 0x100703fe0
void ThreadPool::AddTask <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_19::operator()() const ::{
    lambda() #1
}
>(char const*, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_19::operator()() const::{lambda()#1}&&)::{
    lambda() #1
}
::future(const { lambda() #1 } & arg1) {
    future(arg1);
}

// 0x100704000
void ThreadPool::AddTask <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_19::operator()() const ::{
    lambda() #1
}
>(char const*, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_19::operator()() const::{lambda()#1}&&)::{
    lambda() #1
}
::future(const { lambda() #1 } & arg1) {
    new (this) std::shared_ptr<std::packaged_task<void()>>(arg1);
}

// 0x100704270
void ThreadPool::AddTask <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_19::operator()() const ::{
    lambda() #1
}
>(char const*, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_19::operator()() const::{lambda()#1}&&)::{
    lambda() #1
}
::operator()() const {
    packaged_task<void()>* this_00;

    this_00 = (packaged_task<void()>*)**this;
    std::packaged_task<void()>::operator()(this_00);
}

// 0x1007042a0
void ThreadPool::AddTask <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_19::operator()() const ::{
    lambda() #1
}
>(char const*, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_19::operator()() const::{lambda()#1}&&)::{
    lambda() #1
}
::~future() {
    ~shared_ptr();
}

// 0x1007d4fc0
std::future<std::invoke_result<graphics::ParticleSystemRenderer::AddDrawableToBatch(
    graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&,
    graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_10>::type>
ThreadPool::AddTask<graphics::ParticleSystemRenderer::AddDrawableToBatch(
    graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&,
    graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_10>(
    const char* str,
    graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE const&, render::RenderContext&,
                                                         render::DrawCallState const&, graphics::SceneViewData const&,
                                                         graphics::RenderPassType,
                                                         graphics::EffectManager&)::$_10&& arg2) {
    std::future<std::invoke_result<graphics::ParticleSystemRenderer::AddDrawableToBatch(
        graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&,
        graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_10>::type>
        result;
    mutex* mutex;
    deque<ThreadPool::TaskInfo>* deque;
    SafeBucketAllocatorSTL<std::packaged_task<void_()> _> local_c0[16];
    eastl local_a0;
    long local_38;

    char* local_c8 = "Particle Sorting";
    eastl::destruct<oldscape::highlight::NpcUID*>(&local_a0);
    std::bind<graphics::ParticleSystemRenderer::AddDrawableToBatch(
        graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&,
        graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::__10>(&local_98);
    std::allocate_shared<std::packaged_task<void()>, SafeBucketAllocatorSTL<std::packaged_task<void()>>,
                         std::allocator_arg_t const&, SafeBucketAllocatorSTL<std::packaged_task<void()>>&,
                         std::__bind<graphics::ParticleSystemRenderer::AddDrawableToBatch(
                             graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&,
                             graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::__10>,
                         void>(
        local_c0, &local_a0, (SafeBucketAllocatorSTL<std::packaged_task<void_()> _>*)&local_a0,
        (__bind<graphics::ParticleSystemRenderer::AddDrawableToBatch(
             graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&,
             graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::__10>*)&local_98);
    int arg1 = (*local_c0).operator->();
    result.get_future();
    unsigned int uVar1 = (*((str + 196)))++;
    unsigned long uVar2 = ((str + 8))->size();
    mutex = (mutex*)(*((unique_ptr<std::mutex[]>*)(str + 40)))[(unsigned long)uVar1 % uVar2];
    scoped_lock<std::mutex> local_b0(*mutex);
    if (*str != '\0') {
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h",
                        166, "Cannot add tasks to the threadpool after stopping it");
    }
    deque = (deque<ThreadPool::TaskInfo>*)(*((str + 96)))[(unsigned long)uVar1 % uVar2];
    __10 local_98() >> (*local_c0);
    TaskPriority local_a4 = 1;
    std::deque<ThreadPool::TaskInfo>::emplace_back<
        ThreadPool::AddTask<graphics::ParticleSystemRenderer::AddDrawableToBatch(
            graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&,
            graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::__10>(
            char const*, graphics::ParticleSystemRenderer::AddDrawableToBatch(
                             *(graphics::ParticleSystem_DE const&), *(render::RenderContext&),
                             *(render::DrawCallState const&), *(graphics::SceneViewData const&),
                             graphics::RenderPassType, *(graphics::EffectManager&))::__10&&)::_lambda() _1_,
        char const*&, ThreadPool::TaskPriority>(deque, &local_98, &local_c8, &local_a4);
    AddTask<graphics::ParticleSystemRenderer::AddDrawableToBatch(
        graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&,
        graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_10>(
        char const*,
        graphics::ParticleSystemRenderer::AddDrawableToBatch(
            *(graphics::ParticleSystem_DE const&), *(render::RenderContext&), *(render::DrawCallState const&),
            *(graphics::SceneViewData const&), graphics::RenderPassType, *(graphics::EffectManager&))::$_10&&)::{
        lambda() #1
    }
    ::~future(&local_98);
    std::__atomic_base<unsigned int, true>::operator++();
    std::condition_variable::notify_one();
    return result;
}

// 0x1007d5390
std::future<std::invoke_result<graphics::ParticleSystemRenderer::AddDrawableToBatch(
    graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&,
    graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_12>::type>
ThreadPool::AddTask<graphics::ParticleSystemRenderer::AddDrawableToBatch(
    graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&,
    graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_12>(
    const char* str,
    graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE const&, render::RenderContext&,
                                                         render::DrawCallState const&, graphics::SceneViewData const&,
                                                         graphics::RenderPassType,
                                                         graphics::EffectManager&)::$_12&& arg2) {
    std::future<std::invoke_result<graphics::ParticleSystemRenderer::AddDrawableToBatch(
        graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&,
        graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_12>::type>
        result;
    mutex* mutex;
    deque<ThreadPool::TaskInfo>* deque;
    SafeBucketAllocatorSTL<std::packaged_task<void_()> _> local_c0[16];
    eastl local_a0;
    long local_38;

    char* local_c8 = "Particle Sorting";
    eastl::destruct<oldscape::highlight::NpcUID*>(&local_a0);
    std::bind<graphics::ParticleSystemRenderer::AddDrawableToBatch(
        graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&,
        graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::__12>(&local_98);
    std::allocate_shared<std::packaged_task<void()>, SafeBucketAllocatorSTL<std::packaged_task<void()>>,
                         std::allocator_arg_t const&, SafeBucketAllocatorSTL<std::packaged_task<void()>>&,
                         std::__bind<graphics::ParticleSystemRenderer::AddDrawableToBatch(
                             graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&,
                             graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::__12>,
                         void>(
        local_c0, &local_a0, (SafeBucketAllocatorSTL<std::packaged_task<void_()> _>*)&local_a0,
        (__bind<graphics::ParticleSystemRenderer::AddDrawableToBatch(
             graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&,
             graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::__12>*)&local_98);
    int arg1 = (*local_c0).operator->();
    result.get_future();
    unsigned int uVar1 = (*((str + 196)))++;
    unsigned long uVar2 = ((str + 8))->size();
    mutex = (mutex*)(*((unique_ptr<std::mutex[]>*)(str + 40)))[(unsigned long)uVar1 % uVar2];
    scoped_lock<std::mutex> local_b0(*mutex);
    if (*str != '\0') {
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h",
                        166, "Cannot add tasks to the threadpool after stopping it");
    }
    deque = (deque<ThreadPool::TaskInfo>*)(*((str + 96)))[(unsigned long)uVar1 % uVar2];
    __12 local_98() >> (*local_c0);
    TaskPriority local_a4 = 1;
    std::deque<ThreadPool::TaskInfo>::emplace_back<
        ThreadPool::AddTask<graphics::ParticleSystemRenderer::AddDrawableToBatch(
            graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&,
            graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::__12>(
            char const*, graphics::ParticleSystemRenderer::AddDrawableToBatch(
                             *(graphics::ParticleSystem_DE const&), *(render::RenderContext&),
                             *(render::DrawCallState const&), *(graphics::SceneViewData const&),
                             graphics::RenderPassType, *(graphics::EffectManager&))::__12&&)::_lambda() _1_,
        char const*&, ThreadPool::TaskPriority>(deque, &local_98, &local_c8, &local_a4);
    AddTask<graphics::ParticleSystemRenderer::AddDrawableToBatch(
        graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&,
        graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_12>(
        char const*,
        graphics::ParticleSystemRenderer::AddDrawableToBatch(
            *(graphics::ParticleSystem_DE const&), *(render::RenderContext&), *(render::DrawCallState const&),
            *(graphics::SceneViewData const&), graphics::RenderPassType, *(graphics::EffectManager&))::$_12&&)::{
        lambda() #1
    }
    ::~future(&local_98);
    std::__atomic_base<unsigned int, true>::operator++();
    std::condition_variable::notify_one();
    return result;
}

// 0x1007e24f0
std::future<std::invoke_result<graphics::DrawableQueue::RenderGroupWithAsyncTest(
    graphics::RT7Core&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::DrawableGroupType,
    graphics::RenderPassType, graphics::EffectManager&,
    std::function<bool(math::OBB const&, graphics::SceneViewData const&)> const&,
    graphics::SceneViewData const&)::$_19>::type>
ThreadPool::AddTask<graphics::DrawableQueue::RenderGroupWithAsyncTest(
    graphics::RT7Core&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::DrawableGroupType,
    graphics::RenderPassType, graphics::EffectManager&,
    std::function<bool(math::OBB const&, graphics::SceneViewData const&)> const&,
    graphics::SceneViewData const&)::$_19>(
    const char* str, graphics::DrawableQueue::RenderGroupWithAsyncTest(
                         graphics::RT7Core&, render::DrawCallState const&, graphics::SceneViewData const&,
                         graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&,
                         std::function<bool(math::OBB const&, graphics::SceneViewData const&)> const&,
                         graphics::SceneViewData const&)::$_19&& arg2) {
    std::future<std::invoke_result<graphics::DrawableQueue::RenderGroupWithAsyncTest(
        graphics::RT7Core&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::DrawableGroupType,
        graphics::RenderPassType, graphics::EffectManager&,
        std::function<bool(math::OBB const&, graphics::SceneViewData const&)> const&,
        graphics::SceneViewData const&)::$_19>::type>
        result;
    mutex* mutex;
    deque<ThreadPool::TaskInfo>* deque;
    SafeBucketAllocatorSTL<std::packaged_task<void_()> _> local_58[16];
    eastl local_38;

    char* local_60 = "Occlusion";
    eastl::destruct<oldscape::highlight::NpcUID*>(&local_38);
    std::bind<graphics::DrawableQueue::RenderGroupWithAsyncTest(
        graphics::RT7Core&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::DrawableGroupType,
        graphics::RenderPassType, graphics::EffectManager&,
        std::function<bool(math::OBB const&, graphics::SceneViewData const&)> const&,
        graphics::SceneViewData const&)::__19>(&local_98);
    std::allocate_shared<std::packaged_task<void()>, SafeBucketAllocatorSTL<std::packaged_task<void()>>,
                         std::allocator_arg_t const&, SafeBucketAllocatorSTL<std::packaged_task<void()>>&,
                         std::__bind<graphics::DrawableQueue::RenderGroupWithAsyncTest(
                             graphics::RT7Core&, render::DrawCallState const&, graphics::SceneViewData const&,
                             graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&,
                             std::function<bool(math::OBB const&, graphics::SceneViewData const&)> const&,
                             graphics::SceneViewData const&)::__19>,
                         void>(local_58, &local_38, (SafeBucketAllocatorSTL<std::packaged_task<void_()> _>*)&local_38,
                               (__bind<graphics::DrawableQueue::RenderGroupWithAsyncTest(
                                    graphics::RT7Core&, render::DrawCallState const&, graphics::SceneViewData const&,
                                    graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&,
                                    std::function<bool_(math::OBB const&, graphics::SceneViewData const&)> const&,
                                    graphics::SceneViewData const&)::__19>*)&local_98);
    int arg1 = (*local_58).operator->();
    result.get_future();
    unsigned int uVar1 = (*((str + 196)))++;
    unsigned long uVar2 = ((str + 8))->size();
    mutex = (mutex*)(*((unique_ptr<std::mutex[]>*)(str + 40)))[(unsigned long)uVar1 % uVar2];
    scoped_lock<std::mutex> local_48(*mutex);
    if (*str != '\0') {
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h",
                        166, "Cannot add tasks to the threadpool after stopping it");
    }
    deque = (deque<ThreadPool::TaskInfo>*)(*((str + 96)))[(unsigned long)uVar1 % uVar2];
    __19 local_98() >> (*local_58);
    TaskPriority local_3c = 1;
    std::deque<ThreadPool::TaskInfo>::emplace_back<
        ThreadPool::AddTask<graphics::DrawableQueue::RenderGroupWithAsyncTest(
            graphics::RT7Core&, render::DrawCallState const&, graphics::SceneViewData const&,
            graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&,
            std::function<bool(math::OBB const&, graphics::SceneViewData const&)> const&,
            graphics::SceneViewData const&)::__19>(
            char const*, (graphics::RT7Core&)
                             ->RenderGroupWithAsyncTest(
                                 render::DrawCallState const&, graphics::SceneViewData const&,
                                 graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&,
                                 std::function<bool(math::OBB const&, graphics::SceneViewData const&)> const&,
                                 graphics::SceneViewData const&)::__19&&)::_lambda() _1_,
        char const*&, ThreadPool::TaskPriority>(deque, &local_98, &local_60, &local_3c);
    AddTask<graphics::DrawableQueue::RenderGroupWithAsyncTest(
        graphics::RT7Core&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::DrawableGroupType,
        graphics::RenderPassType, graphics::EffectManager&,
        std::function<bool(math::OBB const&, graphics::SceneViewData const&)> const&,
        graphics::SceneViewData const&)::$_19>(
        char const*,
        (graphics::RT7Core&)
            ->RenderGroupWithAsyncTest(render::DrawCallState const&, graphics::SceneViewData const&,
                                       graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&,
                                       std::function<bool(math::OBB const&, graphics::SceneViewData const&)> const&,
                                       graphics::SceneViewData const&)::$_19&&)::{
        lambda() #1
    }
    ::~future(&local_98);
    std::__atomic_base<unsigned int, true>::operator++();
    std::condition_variable::notify_one();
    return result;
}

// 0x1007e2cb0
std::future<std::invoke_result<graphics::DrawableQueue::FilterAsync(
    graphics::DrawableGroupType, graphics::RenderPassType,
    std::function<
        bool(graphics::Drawable*,
             std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_21>::type>
ThreadPool::AddTask<graphics::DrawableQueue::FilterAsync(
    graphics::DrawableGroupType, graphics::RenderPassType,
    std::function<bool(graphics::Drawable*, std::unique_ptr<graphics::DrawableElement,
                                                            graphics::DrawableElementDeleter> const&)> const&)::$_21>(
    const char* str,
    graphics::DrawableQueue::FilterAsync(
        graphics::DrawableGroupType, graphics::RenderPassType,
        std::function<bool(graphics::Drawable*,
                           std::unique_ptr<graphics::DrawableElement,
                                           graphics::DrawableElementDeleter> const&)> const&)::$_21&& arg2) {
    std::future<std::invoke_result<graphics::DrawableQueue::FilterAsync(
        graphics::DrawableGroupType, graphics::RenderPassType,
        std::function<bool(
            graphics::Drawable*,
            std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_21>::type>
        result;
    mutex* mutex;
    deque<ThreadPool::TaskInfo>* deque;
    SafeBucketAllocatorSTL<std::packaged_task<void_()> _> local_58[16];
    eastl local_38;

    char* local_60 = "Occlusion";
    eastl::destruct<oldscape::highlight::NpcUID*>(&local_38);
    std::bind<graphics::DrawableQueue::FilterAsync(
        graphics::DrawableGroupType, graphics::RenderPassType,
        std::function<bool(
            graphics::Drawable*,
            std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::__21>(
        &local_90);
    std::allocate_shared<
        std::packaged_task<void()>, SafeBucketAllocatorSTL<std::packaged_task<void()>>, std::allocator_arg_t const&,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>&,
        std::__bind<graphics::DrawableQueue::FilterAsync(
            graphics::DrawableGroupType, graphics::RenderPassType,
            std::function<bool(
                graphics::Drawable*,
                std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::__21>,
        void>(
        local_58, &local_38, (SafeBucketAllocatorSTL<std::packaged_task<void_()> _>*)&local_38,
        (__bind<graphics::DrawableQueue::FilterAsync(
             graphics::DrawableGroupType, graphics::RenderPassType,
             std::function<bool_(graphics::Drawable*,
                                 std::unique_ptr<graphics::DrawableElement,
                                                 graphics::DrawableElementDeleter> const&)> const&)::__21>*)&local_90);
    int arg1 = (*local_58).operator->();
    result.get_future();
    unsigned int uVar1 = (*((str + 196)))++;
    unsigned long uVar2 = ((str + 8))->size();
    mutex = (mutex*)(*((unique_ptr<std::mutex[]>*)(str + 40)))[(unsigned long)uVar1 % uVar2];
    scoped_lock<std::mutex> local_48(*mutex);
    if (*str != '\0') {
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h",
                        166, "Cannot add tasks to the threadpool after stopping it");
    }
    deque = (deque<ThreadPool::TaskInfo>*)(*((str + 96)))[(unsigned long)uVar1 % uVar2];
    __21 local_90() >> (*local_58);
    TaskPriority local_3c = 1;
    std::deque<ThreadPool::TaskInfo>::emplace_back<
        ThreadPool::AddTask<graphics::DrawableQueue::FilterAsync(
            graphics::DrawableGroupType, graphics::RenderPassType,
            std::function<bool(
                graphics::Drawable*,
                std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::__21>(
            char const*,
            (graphics::DrawableGroupType)
                ->FilterAsync(graphics::RenderPassType,
                              std::function<bool(graphics::Drawable*,
                                                 std::unique_ptr<graphics::DrawableElement,
                                                                 graphics::DrawableElementDeleter> const&)> const&)::
                    __21&&)::_lambda() _1_,
        char const*&, ThreadPool::TaskPriority>(deque, &local_90, &local_60, &local_3c);
    AddTask<graphics::DrawableQueue::FilterAsync(
        graphics::DrawableGroupType, graphics::RenderPassType,
        std::function<bool(
            graphics::Drawable*,
            std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_21>(
        char const*,
        (graphics::DrawableGroupType)
            ->FilterAsync(
                graphics::RenderPassType,
                std::function<bool(graphics::Drawable*,
                                   std::unique_ptr<graphics::DrawableElement,
                                                   graphics::DrawableElementDeleter> const&)> const&)::$_21&&)::{
        lambda() #1
    }
    ::~future(&local_90);
    std::__atomic_base<unsigned int, true>::operator++();
    std::condition_variable::notify_one();
    return result;
}

// 0x1007e3480
std::future<std::invoke_result<graphics::DrawableQueue::FilterMultiAsync(
    graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType,
    std::function<
        bool(graphics::Drawable*,
             std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_23>::type>
ThreadPool::AddTask<graphics::DrawableQueue::FilterMultiAsync(
    graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType,
    std::function<bool(graphics::Drawable*, std::unique_ptr<graphics::DrawableElement,
                                                            graphics::DrawableElementDeleter> const&)> const&)::$_23>(
    const char* str,
    graphics::DrawableQueue::FilterMultiAsync(
        graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType,
        std::function<bool(graphics::Drawable*,
                           std::unique_ptr<graphics::DrawableElement,
                                           graphics::DrawableElementDeleter> const&)> const&)::$_23&& arg2) {
    std::future<std::invoke_result<graphics::DrawableQueue::FilterMultiAsync(
        graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType,
        std::function<bool(
            graphics::Drawable*,
            std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_23>::type>
        result;
    mutex* mutex;
    deque<ThreadPool::TaskInfo>* deque;
    SafeBucketAllocatorSTL<std::packaged_task<void_()> _> local_58[16];
    eastl local_38;

    char* local_60 = "Occlusion";
    eastl::destruct<oldscape::highlight::NpcUID*>(&local_38);
    std::bind<graphics::DrawableQueue::FilterMultiAsync(
        graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType,
        std::function<bool(
            graphics::Drawable*,
            std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::__23>(
        &local_90);
    std::allocate_shared<
        std::packaged_task<void()>, SafeBucketAllocatorSTL<std::packaged_task<void()>>, std::allocator_arg_t const&,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>&,
        std::__bind<graphics::DrawableQueue::FilterMultiAsync(
            graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType,
            std::function<bool(
                graphics::Drawable*,
                std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::__23>,
        void>(
        local_58, &local_38, (SafeBucketAllocatorSTL<std::packaged_task<void_()> _>*)&local_38,
        (__bind<graphics::DrawableQueue::FilterMultiAsync(
             graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType,
             std::function<bool_(graphics::Drawable*,
                                 std::unique_ptr<graphics::DrawableElement,
                                                 graphics::DrawableElementDeleter> const&)> const&)::__23>*)&local_90);
    int arg1 = (*local_58).operator->();
    result.get_future();
    unsigned int uVar1 = (*((str + 196)))++;
    unsigned long uVar2 = ((str + 8))->size();
    mutex = (mutex*)(*((unique_ptr<std::mutex[]>*)(str + 40)))[(unsigned long)uVar1 % uVar2];
    scoped_lock<std::mutex> local_48(*mutex);
    if (*str != '\0') {
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h",
                        166, "Cannot add tasks to the threadpool after stopping it");
    }
    deque = (deque<ThreadPool::TaskInfo>*)(*((str + 96)))[(unsigned long)uVar1 % uVar2];
    __23 local_90() >> (*local_58);
    TaskPriority local_3c = 1;
    std::deque<ThreadPool::TaskInfo>::emplace_back<
        ThreadPool::AddTask<graphics::DrawableQueue::FilterMultiAsync(
            graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType,
            std::function<bool(
                graphics::Drawable*,
                std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::__23>(
            char const*, (graphics::DrawableGroupType)
                             ->FilterMultiAsync(
                                 graphics::RenderPassType, graphics::RenderPassType,
                                 std::function<bool(graphics::Drawable*,
                                                    std::unique_ptr<graphics::DrawableElement,
                                                                    graphics::DrawableElementDeleter> const&)> const&)::
                                 __23&&)::_lambda() _1_,
        char const*&, ThreadPool::TaskPriority>(deque, &local_90, &local_60, &local_3c);
    AddTask<graphics::DrawableQueue::FilterMultiAsync(
        graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType,
        std::function<bool(
            graphics::Drawable*,
            std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_23>(
        char const*,
        (graphics::DrawableGroupType)
            ->FilterMultiAsync(
                graphics::RenderPassType, graphics::RenderPassType,
                std::function<bool(graphics::Drawable*,
                                   std::unique_ptr<graphics::DrawableElement,
                                                   graphics::DrawableElementDeleter> const&)> const&)::$_23&&)::{
        lambda() #1
    }
    ::~future(&local_90);
    std::__atomic_base<unsigned int, true>::operator++();
    std::condition_variable::notify_one();
    return result;
}

// 0x1007edaa0
std::future < std::invoke_result <
    graphics::(anonymous namespace)::UpdateParticleSystemsImpl<eastl::vector<graphics::ParticleSystem*>>(
        std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
        eastl::vector<graphics::ParticleSystem*>&, ThreadPool&, float)::{
    lambda() #1
}
> ::type > ThreadPool::AddTask <
    graphics::(anonymous namespace)::UpdateParticleSystemsImpl<eastl::vector<graphics::ParticleSystem*>>(
        std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
        eastl::vector<graphics::ParticleSystem*>&, ThreadPool&, float)::{
    lambda() #1
}
> (const char* str, eastl::vector<graphics::ParticleSystem*>&& particleSystems) {
    std::future < std::invoke_result <
        graphics::(anonymous namespace)::UpdateParticleSystemsImpl<eastl::vector<graphics::ParticleSystem*>>(
            std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
            eastl::vector<graphics::ParticleSystem*>&, ThreadPool&, float)::{
        lambda() #1
    }
    > ::type > result;
    mutex* mutex;
    deque<ThreadPool::TaskInfo>* deque;
    vector<graphics::ParticleSystem*> local_88[40];
    SafeBucketAllocatorSTL<std::packaged_task<void_()> _> local_58[16];
    eastl local_38;

    char* local_60 = "ParticleSystem";
    eastl::destruct<oldscape::highlight::NpcUID*>(&local_38);
    std::bind<graphics::(anonymous namespace)::UpdateParticleSystemsImpl<eastl::vector<graphics::ParticleSystem*>>(
        std::vector<std::future<void>>&, unsigned long, eastl::vector<graphics::ParticleSystem*>&, ThreadPool&,
        float)::_lambda() _1_>(local_88);
    std::allocate_shared<std::packaged_task<void()>, SafeBucketAllocatorSTL<std::packaged_task<void()>>,
                         std::allocator_arg_t const&, SafeBucketAllocatorSTL<std::packaged_task<void()>>&,
                         std::__bind<graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
                             eastl::vector<graphics::ParticleSystem*>>(std::vector<std::future<void>>&, unsigned long,
                                                                       eastl::vector<graphics::ParticleSystem*>&,
                                                                       ThreadPool&, float)::_lambda() _1_>,
                         void>(
        local_58, &local_38, (SafeBucketAllocatorSTL<std::packaged_task<void_()> _>*)&local_38,
        (__bind<graphics::(anonymous namespace)::UpdateParticleSystemsImpl<eastl::vector<graphics::ParticleSystem*> _>(
             std::vector<std::future<void>, std::allocator<std::future<void> _> _>&, unsigned long,
             eastl::vector<graphics::ParticleSystem*>&, ThreadPool&, float)::_lambda() _1_>*)local_88);
    int arg1 = (*local_58).operator->();
    result.get_future();
    unsigned int uVar1 = (*((str + 196)))++;
    unsigned long uVar2 = ((str + 8))->size();
    mutex = (mutex*)(*((unique_ptr<std::mutex[]>*)(str + 40)))[(unsigned long)uVar1 % uVar2];
    scoped_lock<std::mutex> local_48(*mutex);
    if (*str != '\0') {
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h",
                        166, "Cannot add tasks to the threadpool after stopping it");
    }
    deque = (deque<ThreadPool::TaskInfo>*)(*((str + 96)))[(unsigned long)uVar1 % uVar2];
    new (local_88) std::shared_ptr<std::packaged_task<void()>>(*local_58);
    TaskPriority local_3c = 1;
    std::deque<ThreadPool::TaskInfo>::emplace_back<
        ThreadPool::AddTask<
            graphics::(anonymous namespace)::UpdateParticleSystemsImpl<eastl::vector<graphics::ParticleSystem*>>(
                std::vector<std::future<void>>&, unsigned long, eastl::vector<graphics::ParticleSystem*>&, ThreadPool&,
                float)::_lambda() _1_>(char const*, eastl::vector<graphics::ParticleSystem*>&&)::_lambda() _1_,
        char const*&, ThreadPool::TaskPriority>(deque, (_lambda___1_*)local_88, &local_60, &local_3c);
    AddTask < graphics::(anonymous namespace)::UpdateParticleSystemsImpl<eastl::vector<graphics::ParticleSystem*>>(
                  std::vector<std::future<void>>&, unsigned long, eastl::vector<graphics::ParticleSystem*>&,
                  ThreadPool&, float)::{
        lambda() #1
    }
    () #1
}
> (char const*, eastl::vector<graphics::ParticleSystem*>&&)::{
    lambda() #1
}
::~AddTask((_lambda___1_*)local_88);
std::__atomic_base<unsigned int, true>::operator++();
std::condition_variable::notify_one();
return result;
}

// 0x1007eded0
void ThreadPool::AddTask <
    graphics::(anonymous namespace)::UpdateParticleSystemsImpl<eastl::vector<graphics::ParticleSystem*>>(
        std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
        eastl::vector<graphics::ParticleSystem*>&, ThreadPool&, float)::{
    lambda() #1
}
> (char const*, eastl::vector<graphics::ParticleSystem*>&&)::{
    lambda() #1
}
::~AddTask() {
    ~AddTask(this);
}

// 0x1007ef380
void ThreadPool::AddTask <
    graphics::(anonymous namespace)::UpdateParticleSystemsImpl<eastl::vector<graphics::ParticleSystem*>>(
        std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
        eastl::vector<graphics::ParticleSystem*>&, ThreadPool&, float)::{
    lambda() #1
}
> (char const*, eastl::vector<graphics::ParticleSystem*>&&)::{
    lambda() #1
}
::AddTask({ lambda() #1 } && arg1) {
    AddTask(arg1);
}

// 0x1007ef3a0
void ThreadPool::AddTask <
    graphics::(anonymous namespace)::UpdateParticleSystemsImpl<eastl::vector<graphics::ParticleSystem*>>(
        std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
        eastl::vector<graphics::ParticleSystem*>&, ThreadPool&, float)::{
    lambda() #1
}
> (char const*, eastl::vector<graphics::ParticleSystem*>&&)::{
    lambda() #1
}
::AddTask({ lambda() #1 } && arg1) {
    new (this) std::shared_ptr<std::packaged_task<void()>>(arg1);
}

// 0x1007efb30
void ThreadPool::AddTask <
    graphics::(anonymous namespace)::UpdateParticleSystemsImpl<eastl::vector<graphics::ParticleSystem*>>(
        std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
        eastl::vector<graphics::ParticleSystem*>&, ThreadPool&, float)::{
    lambda() #1
}
> (char const*, eastl::vector<graphics::ParticleSystem*>&&)::{
    lambda() #1
}
::AddTask(const { lambda() #1 } & arg1) {
    AddTask(arg1);
}

// 0x1007efb50
void ThreadPool::AddTask <
    graphics::(anonymous namespace)::UpdateParticleSystemsImpl<eastl::vector<graphics::ParticleSystem*>>(
        std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
        eastl::vector<graphics::ParticleSystem*>&, ThreadPool&, float)::{
    lambda() #1
}
> (char const*, eastl::vector<graphics::ParticleSystem*>&&)::{
    lambda() #1
}
::AddTask(const { lambda() #1 } & arg1) {
    new (this) std::shared_ptr<std::packaged_task<void()>>(arg1);
}

// 0x1007efdc0
void ThreadPool::AddTask <
    graphics::(anonymous namespace)::UpdateParticleSystemsImpl<eastl::vector<graphics::ParticleSystem*>>(
        std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
        eastl::vector<graphics::ParticleSystem*>&, ThreadPool&, float)::{
    lambda() #1
}
> (char const*, eastl::vector<graphics::ParticleSystem*>&&)::{
    lambda() #1
}
::operator()() const {
    packaged_task<void()>* this_00;

    this_00 = (packaged_task<void()>*)**this;
    std::packaged_task<void()>::operator()(this_00);
}

// 0x1007eff90
void ThreadPool::AddTask <
    graphics::(anonymous namespace)::UpdateParticleSystemsImpl<eastl::vector<graphics::ParticleSystem*>>(
        std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
        eastl::vector<graphics::ParticleSystem*>&, ThreadPool&, float)::{
    lambda() #1
}
> (char const*, eastl::vector<graphics::ParticleSystem*>&&)::{
    lambda() #1
}
::~AddTask() {
    ~shared_ptr();
}

// 0x1007f03c0
std::future < std::invoke_result < graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
                                       eastl::vector<shared_ptr<graphics::ModularParticleSystem>>>(
                                       std::vector<std::future<void>, std::allocator<std::future<void>>>&,
                                       unsigned long, eastl::vector<shared_ptr<graphics::ModularParticleSystem>>&,
                                       ThreadPool&, float)::{
    lambda() #1
}
> ::type > ThreadPool::AddTask < graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
                                     eastl::vector<shared_ptr<graphics::ModularParticleSystem>>>(
                                     std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
                                     eastl::vector<shared_ptr<graphics::ModularParticleSystem>>&, ThreadPool&, float)::{
    lambda() #1
}
> (const char* str, eastl::vector<shared_ptr<graphics::ModularParticleSystem>>&& modularParticleSystems) {
    std::future < std::invoke_result < graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
                                           eastl::vector<shared_ptr<graphics::ModularParticleSystem>>>(
                                           std::vector<std::future<void>, std::allocator<std::future<void>>>&,
                                           unsigned long, eastl::vector<shared_ptr<graphics::ModularParticleSystem>>&,
                                           ThreadPool&, float)::{
        lambda() #1
    }
    > ::type > result;
    mutex* mutex;
    deque<ThreadPool::TaskInfo>* deque;
    SafeBucketAllocatorSTL<std::packaged_task<void_()> _> local_58[16];
    eastl local_38;

    char* local_60 = "ParticleSystem";
    eastl::destruct<oldscape::highlight::NpcUID*>(&local_38);
    std::bind<graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
        eastl::vector<shared_ptr<graphics::ModularParticleSystem>>>(
        std::vector<std::future<void>>&, unsigned long, eastl::vector<shared_ptr<graphics::ModularParticleSystem>>&,
        ThreadPool&, float)::_lambda() _1_>(&local_88);
    std::allocate_shared<
        std::packaged_task<void()>, SafeBucketAllocatorSTL<std::packaged_task<void()>>, std::allocator_arg_t const&,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>&,
        std::__bind<graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
            eastl::vector<shared_ptr<graphics::ModularParticleSystem>>>(
            std::vector<std::future<void>>&, unsigned long, eastl::vector<shared_ptr<graphics::ModularParticleSystem>>&,
            ThreadPool&, float)::_lambda() _1_>,
        void>(local_58, &local_38, (SafeBucketAllocatorSTL<std::packaged_task<void_()> _>*)&local_38,
              (__bind<graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
                   eastl::vector<shared_ptr<graphics::ModularParticleSystem>> _>(
                   std::vector<std::future<void>, std::allocator<std::future<void> _> _>&, unsigned long,
                   eastl::vector<shared_ptr<graphics::ModularParticleSystem>>&, ThreadPool&, float)::_lambda()
                          _1_>*)&local_88);
    int arg1 = (*local_58).operator->();
    result.get_future();
    unsigned int uVar1 = (*((str + 196)))++;
    unsigned long uVar2 = ((str + 8))->size();
    mutex = (mutex*)(*((unique_ptr<std::mutex[]>*)(str + 40)))[(unsigned long)uVar1 % uVar2];
    scoped_lock<std::mutex> local_48(*mutex);
    if (*str != '\0') {
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h",
                        166, "Cannot add tasks to the threadpool after stopping it");
    }
    deque = (deque<ThreadPool::TaskInfo>*)(*((str + 96)))[(unsigned long)uVar1 % uVar2];
    vector<shared_ptr<graphics::ModularParticleSystem>> local_88() >> (*local_58);
    TaskPriority local_3c = 1;
    std::deque<ThreadPool::TaskInfo>::emplace_back<
        ThreadPool::AddTask<graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
            eastl::vector<shared_ptr<graphics::ModularParticleSystem>>>(
            std::vector<std::future<void>>&, unsigned long, eastl::vector<shared_ptr<graphics::ModularParticleSystem>>&,
            ThreadPool&, float)::_lambda() _1_>(
            char const*, eastl::vector<shared_ptr<graphics::ModularParticleSystem>>&&)::_lambda() _1_,
        char const*&, ThreadPool::TaskPriority>(deque, &local_88, &local_60, &local_3c);
    AddTask < graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
                  eastl::vector<shared_ptr<graphics::ModularParticleSystem>>>(
                  std::vector<std::future<void>>&, unsigned long,
                  eastl::vector<shared_ptr<graphics::ModularParticleSystem>>&, ThreadPool&, float)::{
        lambda() #1
    }
    () #1
}
> (char const*, eastl::vector<shared_ptr<graphics::ModularParticleSystem>>&&)::{
    lambda() #1
}
::~AddTask(&local_88);
std::__atomic_base<unsigned int, true>::operator++();
std::condition_variable::notify_one();
return result;
}

// 0x1007f0700
void ThreadPool::AddTask < graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
                               eastl::vector<shared_ptr<graphics::ModularParticleSystem>>>(
                               std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
                               eastl::vector<shared_ptr<graphics::ModularParticleSystem>>&, ThreadPool&, float)::{
    lambda() #1
}
> (char const*, eastl::vector<shared_ptr<graphics::ModularParticleSystem>>&&)::{
    lambda() #1
}
::~AddTask() {
    ~AddTask(this);
}

// 0x1007f0dc0
void ThreadPool::AddTask < graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
                               eastl::vector<shared_ptr<graphics::ModularParticleSystem>>>(
                               std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
                               eastl::vector<shared_ptr<graphics::ModularParticleSystem>>&, ThreadPool&, float)::{
    lambda() #1
}
> (char const*, eastl::vector<shared_ptr<graphics::ModularParticleSystem>>&&)::{
    lambda() #1
}
::AddTask({ lambda() #1 } && arg1) {
    AddTask(arg1);
}

// 0x1007f0de0
void ThreadPool::AddTask < graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
                               eastl::vector<shared_ptr<graphics::ModularParticleSystem>>>(
                               std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
                               eastl::vector<shared_ptr<graphics::ModularParticleSystem>>&, ThreadPool&, float)::{
    lambda() #1
}
> (char const*, eastl::vector<shared_ptr<graphics::ModularParticleSystem>>&&)::{
    lambda() #1
}
::AddTask({ lambda() #1 } && arg1) {
    new (this) std::shared_ptr<std::packaged_task<void()>>(arg1);
}

// 0x1007f1500
void ThreadPool::AddTask < graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
                               eastl::vector<shared_ptr<graphics::ModularParticleSystem>>>(
                               std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
                               eastl::vector<shared_ptr<graphics::ModularParticleSystem>>&, ThreadPool&, float)::{
    lambda() #1
}
> (char const*, eastl::vector<shared_ptr<graphics::ModularParticleSystem>>&&)::{
    lambda() #1
}
::AddTask(const { lambda() #1 } & arg1) {
    AddTask(arg1);
}

// 0x1007f1520
void ThreadPool::AddTask < graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
                               eastl::vector<shared_ptr<graphics::ModularParticleSystem>>>(
                               std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
                               eastl::vector<shared_ptr<graphics::ModularParticleSystem>>&, ThreadPool&, float)::{
    lambda() #1
}
> (char const*, eastl::vector<shared_ptr<graphics::ModularParticleSystem>>&&)::{
    lambda() #1
}
::AddTask(const { lambda() #1 } & arg1) {
    new (this) std::shared_ptr<std::packaged_task<void()>>(arg1);
}

// 0x1007f1790
void ThreadPool::AddTask < graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
                               eastl::vector<shared_ptr<graphics::ModularParticleSystem>>>(
                               std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
                               eastl::vector<shared_ptr<graphics::ModularParticleSystem>>&, ThreadPool&, float)::{
    lambda() #1
}
> (char const*, eastl::vector<shared_ptr<graphics::ModularParticleSystem>>&&)::{
    lambda() #1
}
::operator()() const {
    packaged_task<void()>* this_00;

    this_00 = (packaged_task<void()>*)**this;
    std::packaged_task<void()>::operator()(this_00);
}

// 0x1007f17c0
void ThreadPool::AddTask < graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
                               eastl::vector<shared_ptr<graphics::ModularParticleSystem>>>(
                               std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
                               eastl::vector<shared_ptr<graphics::ModularParticleSystem>>&, ThreadPool&, float)::{
    lambda() #1
}
> (char const*, eastl::vector<shared_ptr<graphics::ModularParticleSystem>>&&)::{
    lambda() #1
}
::~AddTask() {
    ~shared_ptr();
}

// 0x1007f7ef0
void ThreadPool::AddTask<graphics::ParticleSystemRenderer::AddDrawableToBatch(
    graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&,
    graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_10>(
    char const*,
    graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE const&, render::RenderContext&,
                                                         render::DrawCallState const&, graphics::SceneViewData const&,
                                                         graphics::RenderPassType, graphics::EffectManager&)::$_10&&)::{
    lambda() #1
}
::~future() {
    ~future(this);
}

// 0x1007f85a0
void ThreadPool::AddTask<graphics::ParticleSystemRenderer::AddDrawableToBatch(
    graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&,
    graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_10>(
    char const*,
    graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE const&, render::RenderContext&,
                                                         render::DrawCallState const&, graphics::SceneViewData const&,
                                                         graphics::RenderPassType, graphics::EffectManager&)::$_10&&)::{
    lambda() #1
}
::future({ lambda() #1 } && arg1) {
    future(arg1);
}

// 0x1007f85c0
void ThreadPool::AddTask<graphics::ParticleSystemRenderer::AddDrawableToBatch(
    graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&,
    graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_10>(
    char const*,
    graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE const&, render::RenderContext&,
                                                         render::DrawCallState const&, graphics::SceneViewData const&,
                                                         graphics::RenderPassType, graphics::EffectManager&)::$_10&&)::{
    lambda() #1
}
::future({ lambda() #1 } && arg1) {
    new (this) std::shared_ptr<std::packaged_task<void()>>(arg1);
}

// 0x1007f8ce0
void ThreadPool::AddTask<graphics::ParticleSystemRenderer::AddDrawableToBatch(
    graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&,
    graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_10>(
    char const*,
    graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE const&, render::RenderContext&,
                                                         render::DrawCallState const&, graphics::SceneViewData const&,
                                                         graphics::RenderPassType, graphics::EffectManager&)::$_10&&)::{
    lambda() #1
}
::future(const { lambda() #1 } & arg1) {
    future(arg1);
}

// 0x1007f8d00
void ThreadPool::AddTask<graphics::ParticleSystemRenderer::AddDrawableToBatch(
    graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&,
    graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_10>(
    char const*,
    graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE const&, render::RenderContext&,
                                                         render::DrawCallState const&, graphics::SceneViewData const&,
                                                         graphics::RenderPassType, graphics::EffectManager&)::$_10&&)::{
    lambda() #1
}
::future(const { lambda() #1 } & arg1) {
    new (this) std::shared_ptr<std::packaged_task<void()>>(arg1);
}

// 0x1007f8f70
void ThreadPool::AddTask<graphics::ParticleSystemRenderer::AddDrawableToBatch(
    graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&,
    graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_10>(
    char const*,
    graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE const&, render::RenderContext&,
                                                         render::DrawCallState const&, graphics::SceneViewData const&,
                                                         graphics::RenderPassType, graphics::EffectManager&)::$_10&&)::{
    lambda() #1
}
::operator()() const {
    packaged_task<void()>* this_00;

    this_00 = (packaged_task<void()>*)**this;
    std::packaged_task<void()>::operator()(this_00);
}

// 0x1007f8fa0
void ThreadPool::AddTask<graphics::ParticleSystemRenderer::AddDrawableToBatch(
    graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&,
    graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_10>(
    char const*,
    graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE const&, render::RenderContext&,
                                                         render::DrawCallState const&, graphics::SceneViewData const&,
                                                         graphics::RenderPassType, graphics::EffectManager&)::$_10&&)::{
    lambda() #1
}
::~future() {
    ~shared_ptr();
}

// 0x1007f91d0
void ThreadPool::AddTask<graphics::ParticleSystemRenderer::AddDrawableToBatch(
    graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&,
    graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_12>(
    char const*,
    graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE const&, render::RenderContext&,
                                                         render::DrawCallState const&, graphics::SceneViewData const&,
                                                         graphics::RenderPassType, graphics::EffectManager&)::$_12&&)::{
    lambda() #1
}
::~future() {
    ~future(this);
}

// 0x1007f9950
void ThreadPool::AddTask<graphics::ParticleSystemRenderer::AddDrawableToBatch(
    graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&,
    graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_12>(
    char const*,
    graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE const&, render::RenderContext&,
                                                         render::DrawCallState const&, graphics::SceneViewData const&,
                                                         graphics::RenderPassType, graphics::EffectManager&)::$_12&&)::{
    lambda() #1
}
::future({ lambda() #1 } && arg1) {
    future(arg1);
}

// 0x1007f9970
void ThreadPool::AddTask<graphics::ParticleSystemRenderer::AddDrawableToBatch(
    graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&,
    graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_12>(
    char const*,
    graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE const&, render::RenderContext&,
                                                         render::DrawCallState const&, graphics::SceneViewData const&,
                                                         graphics::RenderPassType, graphics::EffectManager&)::$_12&&)::{
    lambda() #1
}
::future({ lambda() #1 } && arg1) {
    new (this) std::shared_ptr<std::packaged_task<void()>>(arg1);
}

// 0x1007fa090
void ThreadPool::AddTask<graphics::ParticleSystemRenderer::AddDrawableToBatch(
    graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&,
    graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_12>(
    char const*,
    graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE const&, render::RenderContext&,
                                                         render::DrawCallState const&, graphics::SceneViewData const&,
                                                         graphics::RenderPassType, graphics::EffectManager&)::$_12&&)::{
    lambda() #1
}
::future(const { lambda() #1 } & arg1) {
    future(arg1);
}

// 0x1007fa0b0
void ThreadPool::AddTask<graphics::ParticleSystemRenderer::AddDrawableToBatch(
    graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&,
    graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_12>(
    char const*,
    graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE const&, render::RenderContext&,
                                                         render::DrawCallState const&, graphics::SceneViewData const&,
                                                         graphics::RenderPassType, graphics::EffectManager&)::$_12&&)::{
    lambda() #1
}
::future(const { lambda() #1 } & arg1) {
    new (this) std::shared_ptr<std::packaged_task<void()>>(arg1);
}

// 0x1007fa320
void ThreadPool::AddTask<graphics::ParticleSystemRenderer::AddDrawableToBatch(
    graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&,
    graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_12>(
    char const*,
    graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE const&, render::RenderContext&,
                                                         render::DrawCallState const&, graphics::SceneViewData const&,
                                                         graphics::RenderPassType, graphics::EffectManager&)::$_12&&)::{
    lambda() #1
}
::operator()() const {
    packaged_task<void()>* this_00;

    this_00 = (packaged_task<void()>*)**this;
    std::packaged_task<void()>::operator()(this_00);
}

// 0x1007fa350
void ThreadPool::AddTask<graphics::ParticleSystemRenderer::AddDrawableToBatch(
    graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&,
    graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_12>(
    char const*,
    graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE const&, render::RenderContext&,
                                                         render::DrawCallState const&, graphics::SceneViewData const&,
                                                         graphics::RenderPassType, graphics::EffectManager&)::$_12&&)::{
    lambda() #1
}
::~future() {
    ~shared_ptr();
}

// 0x1007fffc0
void ThreadPool::AddTask<graphics::DrawableQueue::RenderGroupWithAsyncTest(
    graphics::RT7Core&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::DrawableGroupType,
    graphics::RenderPassType, graphics::EffectManager&,
    std::function<bool(math::OBB const&, graphics::SceneViewData const&)> const&,
    graphics::SceneViewData const&)::$_19>(
    char const*, graphics::DrawableQueue::RenderGroupWithAsyncTest(
                     graphics::RT7Core&, render::DrawCallState const&, graphics::SceneViewData const&,
                     graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&,
                     std::function<bool(math::OBB const&, graphics::SceneViewData const&)> const&,
                     graphics::SceneViewData const&)::$_19&&)::{
    lambda() #1
}
::~future() {
    ~future(this);
}

// 0x100800720
void ThreadPool::AddTask<graphics::DrawableQueue::RenderGroupWithAsyncTest(
    graphics::RT7Core&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::DrawableGroupType,
    graphics::RenderPassType, graphics::EffectManager&,
    std::function<bool(math::OBB const&, graphics::SceneViewData const&)> const&,
    graphics::SceneViewData const&)::$_19>(
    char const*, graphics::DrawableQueue::RenderGroupWithAsyncTest(
                     graphics::RT7Core&, render::DrawCallState const&, graphics::SceneViewData const&,
                     graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&,
                     std::function<bool(math::OBB const&, graphics::SceneViewData const&)> const&,
                     graphics::SceneViewData const&)::$_19&&)::{
    lambda() #1
}
::future({ lambda() #1 } && arg1) {
    future(arg1);
}

// 0x100800740
void ThreadPool::AddTask<graphics::DrawableQueue::RenderGroupWithAsyncTest(
    graphics::RT7Core&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::DrawableGroupType,
    graphics::RenderPassType, graphics::EffectManager&,
    std::function<bool(math::OBB const&, graphics::SceneViewData const&)> const&,
    graphics::SceneViewData const&)::$_19>(
    char const*, graphics::DrawableQueue::RenderGroupWithAsyncTest(
                     graphics::RT7Core&, render::DrawCallState const&, graphics::SceneViewData const&,
                     graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&,
                     std::function<bool(math::OBB const&, graphics::SceneViewData const&)> const&,
                     graphics::SceneViewData const&)::$_19&&)::{
    lambda() #1
}
::future({ lambda() #1 } && arg1) {
    new (this) std::shared_ptr<std::packaged_task<void()>>(arg1);
}

// 0x100800e60
void ThreadPool::AddTask<graphics::DrawableQueue::RenderGroupWithAsyncTest(
    graphics::RT7Core&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::DrawableGroupType,
    graphics::RenderPassType, graphics::EffectManager&,
    std::function<bool(math::OBB const&, graphics::SceneViewData const&)> const&,
    graphics::SceneViewData const&)::$_19>(
    char const*, graphics::DrawableQueue::RenderGroupWithAsyncTest(
                     graphics::RT7Core&, render::DrawCallState const&, graphics::SceneViewData const&,
                     graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&,
                     std::function<bool(math::OBB const&, graphics::SceneViewData const&)> const&,
                     graphics::SceneViewData const&)::$_19&&)::{
    lambda() #1
}
::future(const { lambda() #1 } & arg1) {
    future(arg1);
}

// 0x100800e80
void ThreadPool::AddTask<graphics::DrawableQueue::RenderGroupWithAsyncTest(
    graphics::RT7Core&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::DrawableGroupType,
    graphics::RenderPassType, graphics::EffectManager&,
    std::function<bool(math::OBB const&, graphics::SceneViewData const&)> const&,
    graphics::SceneViewData const&)::$_19>(
    char const*, graphics::DrawableQueue::RenderGroupWithAsyncTest(
                     graphics::RT7Core&, render::DrawCallState const&, graphics::SceneViewData const&,
                     graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&,
                     std::function<bool(math::OBB const&, graphics::SceneViewData const&)> const&,
                     graphics::SceneViewData const&)::$_19&&)::{
    lambda() #1
}
::future(const { lambda() #1 } & arg1) {
    new (this) std::shared_ptr<std::packaged_task<void()>>(arg1);
}

// 0x1008010f0
void ThreadPool::AddTask<graphics::DrawableQueue::RenderGroupWithAsyncTest(
    graphics::RT7Core&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::DrawableGroupType,
    graphics::RenderPassType, graphics::EffectManager&,
    std::function<bool(math::OBB const&, graphics::SceneViewData const&)> const&,
    graphics::SceneViewData const&)::$_19>(
    char const*, graphics::DrawableQueue::RenderGroupWithAsyncTest(
                     graphics::RT7Core&, render::DrawCallState const&, graphics::SceneViewData const&,
                     graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&,
                     std::function<bool(math::OBB const&, graphics::SceneViewData const&)> const&,
                     graphics::SceneViewData const&)::$_19&&)::{
    lambda() #1
}
::operator()() const {
    packaged_task<void()>* this_00;

    this_00 = (packaged_task<void()>*)**this;
    std::packaged_task<void()>::operator()(this_00);
}

// 0x100801120
void ThreadPool::AddTask<graphics::DrawableQueue::RenderGroupWithAsyncTest(
    graphics::RT7Core&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::DrawableGroupType,
    graphics::RenderPassType, graphics::EffectManager&,
    std::function<bool(math::OBB const&, graphics::SceneViewData const&)> const&,
    graphics::SceneViewData const&)::$_19>(
    char const*, graphics::DrawableQueue::RenderGroupWithAsyncTest(
                     graphics::RT7Core&, render::DrawCallState const&, graphics::SceneViewData const&,
                     graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&,
                     std::function<bool(math::OBB const&, graphics::SceneViewData const&)> const&,
                     graphics::SceneViewData const&)::$_19&&)::{
    lambda() #1
}
::~future() {
    ~shared_ptr();
}

// 0x100801510
void ThreadPool::AddTask<graphics::DrawableQueue::FilterAsync(
    graphics::DrawableGroupType, graphics::RenderPassType,
    std::function<bool(graphics::Drawable*, std::unique_ptr<graphics::DrawableElement,
                                                            graphics::DrawableElementDeleter> const&)> const&)::$_21>(
    char const*,
    graphics::DrawableQueue::FilterAsync(
        graphics::DrawableGroupType, graphics::RenderPassType,
        std::function<bool(
            graphics::Drawable*,
            std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_21&&)::{
    lambda() #1
}
::~future() {
    ~future(this);
}

// 0x100801c10
void ThreadPool::AddTask<graphics::DrawableQueue::FilterAsync(
    graphics::DrawableGroupType, graphics::RenderPassType,
    std::function<bool(graphics::Drawable*, std::unique_ptr<graphics::DrawableElement,
                                                            graphics::DrawableElementDeleter> const&)> const&)::$_21>(
    char const*,
    graphics::DrawableQueue::FilterAsync(
        graphics::DrawableGroupType, graphics::RenderPassType,
        std::function<bool(
            graphics::Drawable*,
            std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_21&&)::{
    lambda() #1
}
::future({ lambda() #1 } && arg1) {
    future(arg1);
}

// 0x100801c30
void ThreadPool::AddTask<graphics::DrawableQueue::FilterAsync(
    graphics::DrawableGroupType, graphics::RenderPassType,
    std::function<bool(graphics::Drawable*, std::unique_ptr<graphics::DrawableElement,
                                                            graphics::DrawableElementDeleter> const&)> const&)::$_21>(
    char const*,
    graphics::DrawableQueue::FilterAsync(
        graphics::DrawableGroupType, graphics::RenderPassType,
        std::function<bool(
            graphics::Drawable*,
            std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_21&&)::{
    lambda() #1
}
::future({ lambda() #1 } && arg1) {
    new (this) std::shared_ptr<std::packaged_task<void()>>(arg1);
}

// 0x100802350
void ThreadPool::AddTask<graphics::DrawableQueue::FilterAsync(
    graphics::DrawableGroupType, graphics::RenderPassType,
    std::function<bool(graphics::Drawable*, std::unique_ptr<graphics::DrawableElement,
                                                            graphics::DrawableElementDeleter> const&)> const&)::$_21>(
    char const*,
    graphics::DrawableQueue::FilterAsync(
        graphics::DrawableGroupType, graphics::RenderPassType,
        std::function<bool(
            graphics::Drawable*,
            std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_21&&)::{
    lambda() #1
}
::future(const { lambda() #1 } & arg1) {
    future(arg1);
}

// 0x100802370
void ThreadPool::AddTask<graphics::DrawableQueue::FilterAsync(
    graphics::DrawableGroupType, graphics::RenderPassType,
    std::function<bool(graphics::Drawable*, std::unique_ptr<graphics::DrawableElement,
                                                            graphics::DrawableElementDeleter> const&)> const&)::$_21>(
    char const*,
    graphics::DrawableQueue::FilterAsync(
        graphics::DrawableGroupType, graphics::RenderPassType,
        std::function<bool(
            graphics::Drawable*,
            std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_21&&)::{
    lambda() #1
}
::future(const { lambda() #1 } & arg1) {
    new (this) std::shared_ptr<std::packaged_task<void()>>(arg1);
}

// 0x1008025e0
void ThreadPool::AddTask<graphics::DrawableQueue::FilterAsync(
    graphics::DrawableGroupType, graphics::RenderPassType,
    std::function<bool(graphics::Drawable*, std::unique_ptr<graphics::DrawableElement,
                                                            graphics::DrawableElementDeleter> const&)> const&)::$_21>(
    char const*,
    graphics::DrawableQueue::FilterAsync(
        graphics::DrawableGroupType, graphics::RenderPassType,
        std::function<bool(
            graphics::Drawable*,
            std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_21&&)::{
    lambda() #1
}
::operator()() const {
    packaged_task<void()>* this_00;

    this_00 = (packaged_task<void()>*)**this;
    std::packaged_task<void()>::operator()(this_00);
}

// 0x100802610
void ThreadPool::AddTask<graphics::DrawableQueue::FilterAsync(
    graphics::DrawableGroupType, graphics::RenderPassType,
    std::function<bool(graphics::Drawable*, std::unique_ptr<graphics::DrawableElement,
                                                            graphics::DrawableElementDeleter> const&)> const&)::$_21>(
    char const*,
    graphics::DrawableQueue::FilterAsync(
        graphics::DrawableGroupType, graphics::RenderPassType,
        std::function<bool(
            graphics::Drawable*,
            std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_21&&)::{
    lambda() #1
}
::~future() {
    ~shared_ptr();
}

// 0x100802930
void ThreadPool::AddTask<graphics::DrawableQueue::FilterMultiAsync(
    graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType,
    std::function<bool(graphics::Drawable*, std::unique_ptr<graphics::DrawableElement,
                                                            graphics::DrawableElementDeleter> const&)> const&)::$_23>(
    char const*,
    graphics::DrawableQueue::FilterMultiAsync(
        graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType,
        std::function<bool(
            graphics::Drawable*,
            std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_23&&)::{
    lambda() #1
}
::~future() {
    ~future(this);
}

// 0x100803030
void ThreadPool::AddTask<graphics::DrawableQueue::FilterMultiAsync(
    graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType,
    std::function<bool(graphics::Drawable*, std::unique_ptr<graphics::DrawableElement,
                                                            graphics::DrawableElementDeleter> const&)> const&)::$_23>(
    char const*,
    graphics::DrawableQueue::FilterMultiAsync(
        graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType,
        std::function<bool(
            graphics::Drawable*,
            std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_23&&)::{
    lambda() #1
}
::future({ lambda() #1 } && arg1) {
    future(arg1);
}

// 0x100803050
void ThreadPool::AddTask<graphics::DrawableQueue::FilterMultiAsync(
    graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType,
    std::function<bool(graphics::Drawable*, std::unique_ptr<graphics::DrawableElement,
                                                            graphics::DrawableElementDeleter> const&)> const&)::$_23>(
    char const*,
    graphics::DrawableQueue::FilterMultiAsync(
        graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType,
        std::function<bool(
            graphics::Drawable*,
            std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_23&&)::{
    lambda() #1
}
::future({ lambda() #1 } && arg1) {
    new (this) std::shared_ptr<std::packaged_task<void()>>(arg1);
}

// 0x100803770
void ThreadPool::AddTask<graphics::DrawableQueue::FilterMultiAsync(
    graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType,
    std::function<bool(graphics::Drawable*, std::unique_ptr<graphics::DrawableElement,
                                                            graphics::DrawableElementDeleter> const&)> const&)::$_23>(
    char const*,
    graphics::DrawableQueue::FilterMultiAsync(
        graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType,
        std::function<bool(
            graphics::Drawable*,
            std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_23&&)::{
    lambda() #1
}
::future(const { lambda() #1 } & arg1) {
    future(arg1);
}

// 0x100803790
void ThreadPool::AddTask<graphics::DrawableQueue::FilterMultiAsync(
    graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType,
    std::function<bool(graphics::Drawable*, std::unique_ptr<graphics::DrawableElement,
                                                            graphics::DrawableElementDeleter> const&)> const&)::$_23>(
    char const*,
    graphics::DrawableQueue::FilterMultiAsync(
        graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType,
        std::function<bool(
            graphics::Drawable*,
            std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_23&&)::{
    lambda() #1
}
::future(const { lambda() #1 } & arg1) {
    new (this) std::shared_ptr<std::packaged_task<void()>>(arg1);
}

// 0x100803a00
void ThreadPool::AddTask<graphics::DrawableQueue::FilterMultiAsync(
    graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType,
    std::function<bool(graphics::Drawable*, std::unique_ptr<graphics::DrawableElement,
                                                            graphics::DrawableElementDeleter> const&)> const&)::$_23>(
    char const*,
    graphics::DrawableQueue::FilterMultiAsync(
        graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType,
        std::function<bool(
            graphics::Drawable*,
            std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_23&&)::{
    lambda() #1
}
::operator()() const {
    packaged_task<void()>* this_00;

    this_00 = (packaged_task<void()>*)**this;
    std::packaged_task<void()>::operator()(this_00);
}

// 0x100803a30
void ThreadPool::AddTask<graphics::DrawableQueue::FilterMultiAsync(
    graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType,
    std::function<bool(graphics::Drawable*, std::unique_ptr<graphics::DrawableElement,
                                                            graphics::DrawableElementDeleter> const&)> const&)::$_23>(
    char const*,
    graphics::DrawableQueue::FilterMultiAsync(
        graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType,
        std::function<bool(
            graphics::Drawable*,
            std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_23&&)::{
    lambda() #1
}
::~future() {
    ~shared_ptr();
}

// 0x100824b70
std::future<std::invoke_result<graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*,
                                                                                 render::Format)::$_5>::type>
ThreadPool::AddTask<graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::$_5>(
    const char* str,
    graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::$_5&& arg2) {
    std::future<std::invoke_result<graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*,
                                                                                     render::Format)::$_5>::type>
        result;
    mutex* mutex;
    deque<ThreadPool::TaskInfo>* deque;
    SafeBucketAllocatorSTL<std::packaged_task<void_()> _> local_58[16];
    eastl local_38;

    char* local_60 = "LoadPackedDepthBuffer";
    eastl::destruct<oldscape::highlight::NpcUID*>(&local_38);
    std::bind<graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::__5>(&local_98);
    std::allocate_shared<
        std::packaged_task<void()>, SafeBucketAllocatorSTL<std::packaged_task<void()>>, std::allocator_arg_t const&,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>&,
        std::__bind<graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::__5>,
        void>(local_58, &local_38, (SafeBucketAllocatorSTL<std::packaged_task<void_()> _>*)&local_38,
              (__bind<graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*,
                                                                        render::Format)::__5>*)&local_98);
    int arg1 = (*local_58).operator->();
    result.get_future();
    unsigned int uVar1 = (*((str + 196)))++;
    unsigned long uVar2 = ((str + 8))->size();
    mutex = (mutex*)(*((unique_ptr<std::mutex[]>*)(str + 40)))[(unsigned long)uVar1 % uVar2];
    scoped_lock<std::mutex> local_48(*mutex);
    if (*str != '\0') {
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h",
                        166, "Cannot add tasks to the threadpool after stopping it");
    }
    deque = (deque<ThreadPool::TaskInfo>*)(*((str + 96)))[(unsigned long)uVar1 % uVar2];
    __5 local_98() >> (*local_58);
    TaskPriority local_3c = 1;
    std::deque<ThreadPool::TaskInfo>::emplace_back<
        ThreadPool::AddTask<graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*,
                                                                              render::Format)::__5>(
            char const*, (unsigned char const*)->LoadPackedDepthBuffer(render::Format)::__5&&)::_lambda() _1_,
        char const*&, ThreadPool::TaskPriority>(deque, &local_98, &local_60, &local_3c);
    AddTask<graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::$_5>(
        char const*, (unsigned char const*)->LoadPackedDepthBuffer(render::Format)::$_5&&)::{
        lambda() #1
    }
    ::~future(&local_98);
    std::__atomic_base<unsigned int, true>::operator++();
    std::condition_variable::notify_one();
    return result;
}

// 0x1008277b0
std::future<std::invoke_result<graphics::OcclusionReprojection::ReprojectOcclusionBuffer(
    graphics::OcclusionManager const&, ThreadPool&, graphics::SceneViewData const&, graphics::SceneViewData const&,
    bool, graphics::SceneViewData*)::$_6&>::type>
ThreadPool::AddTask<graphics::OcclusionReprojection::ReprojectOcclusionBuffer(
    graphics::OcclusionManager const&, ThreadPool&, graphics::SceneViewData const&, graphics::SceneViewData const&,
    bool, graphics::SceneViewData*)::$_6&>(const char* str,
                                           graphics::OcclusionReprojection::ReprojectOcclusionBuffer(
                                               graphics::OcclusionManager const&, ThreadPool&,
                                               graphics::SceneViewData const&, graphics::SceneViewData const&, bool,
                                               graphics::SceneViewData*)::$_6& arg2) {
    std::future<std::invoke_result<graphics::OcclusionReprojection::ReprojectOcclusionBuffer(
        graphics::OcclusionManager const&, ThreadPool&, graphics::SceneViewData const&, graphics::SceneViewData const&,
        bool, graphics::SceneViewData*)::$_6&>::type>
        result;
    mutex* mutex;
    deque<ThreadPool::TaskInfo>* deque;
    SafeBucketAllocatorSTL<std::packaged_task<void_()> _> local_58[16];
    eastl local_38;

    char* local_60 = "OcclusionReprojection";
    eastl::destruct<oldscape::highlight::NpcUID*>(&local_38);
    std::bind<graphics::OcclusionReprojection::ReprojectOcclusionBuffer(
        graphics::OcclusionManager const&, ThreadPool&, graphics::SceneViewData const&, graphics::SceneViewData const&,
        bool, graphics::SceneViewData*)::__6&>(&local_110);
    std::allocate_shared<std::packaged_task<void()>, SafeBucketAllocatorSTL<std::packaged_task<void()>>,
                         std::allocator_arg_t const&, SafeBucketAllocatorSTL<std::packaged_task<void()>>&,
                         std::__bind<graphics::OcclusionReprojection::ReprojectOcclusionBuffer(
                             graphics::OcclusionManager const&, ThreadPool&, graphics::SceneViewData const&,
                             graphics::SceneViewData const&, bool, graphics::SceneViewData*)::__6&>,
                         void>(local_58, &local_38, (SafeBucketAllocatorSTL<std::packaged_task<void_()> _>*)&local_38,
                               (__bind<graphics::OcclusionReprojection::ReprojectOcclusionBuffer(
                                    graphics::OcclusionManager const&, ThreadPool&, graphics::SceneViewData const&,
                                    graphics::SceneViewData const&, bool, graphics::SceneViewData*)::__6&>*)&local_110);
    int arg1 = (*local_58).operator->();
    result.get_future();
    unsigned int uVar1 = (*((str + 196)))++;
    unsigned long uVar2 = ((str + 8))->size();
    mutex = (mutex*)(*((unique_ptr<std::mutex[]>*)(str + 40)))[(unsigned long)uVar1 % uVar2];
    scoped_lock<std::mutex> local_48(*mutex);
    if (*str != '\0') {
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h",
                        166, "Cannot add tasks to the threadpool after stopping it");
    }
    deque = (deque<ThreadPool::TaskInfo>*)(*((str + 96)))[(unsigned long)uVar1 % uVar2];
    __6 local_110() >> (*local_58);
    TaskPriority local_3c = 1;
    std::deque<ThreadPool::TaskInfo>::emplace_back<
        ThreadPool::AddTask<graphics::OcclusionReprojection::ReprojectOcclusionBuffer(
            graphics::OcclusionManager const&, ThreadPool&, graphics::SceneViewData const&,
            graphics::SceneViewData const&, bool, graphics::SceneViewData*)::__6&>(
            char const*, graphics::OcclusionReprojection::ReprojectOcclusionBuffer(
                             *(graphics::OcclusionManager const&), *(ThreadPool&), *(graphics::SceneViewData const&),
                             *(graphics::SceneViewData const&), bool, graphics::SceneViewData*)::__6&)::_lambda() _1_,
        char const*&, ThreadPool::TaskPriority>(deque, &local_110, &local_60, &local_3c);
    AddTask<graphics::OcclusionReprojection::ReprojectOcclusionBuffer(
        graphics::OcclusionManager const&, ThreadPool&, graphics::SceneViewData const&, graphics::SceneViewData const&,
        bool, graphics::SceneViewData*)::$_6&>(
        char const*, graphics::OcclusionReprojection::ReprojectOcclusionBuffer(
                         *(graphics::OcclusionManager const&), *(ThreadPool&), *(graphics::SceneViewData const&),
                         *(graphics::SceneViewData const&), bool, graphics::SceneViewData*)::$_6&)::{
        lambda() #1
    }
    ::~future(&local_110);
    std::__atomic_base<unsigned int, true>::operator++();
    std::condition_variable::notify_one();
    return result;
}

// 0x10083c300
std::future < std::invoke_result <
    graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::Flush()::{
    lambda() #1
}
> ::type > ThreadPool::AddTask <
    graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::Flush()::{
    lambda() #1
}
>(const char* str, graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::Flush()::{lambda()#1}&& arg2)
{
    std::future < std::invoke_result <
        graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::Flush()::{
        lambda() #1
    }
    > ::type > result;
    mutex* mutex;
    SafeBucketAllocatorSTL<std::packaged_task<void_()> _> local_60[16];
    uint64_t local_50[2];
    eastl local_30;

    char* local_68 = str;
    eastl::destruct<oldscape::highlight::NpcUID*>(&local_30);
    local_50[0] =
        std::bind<graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::Flush()::_lambda()
                      _1_>(arg2);
    std::allocate_shared<std::packaged_task<void()>, SafeBucketAllocatorSTL<std::packaged_task<void()>>,
                         std::allocator_arg_t const&, SafeBucketAllocatorSTL<std::packaged_task<void()>>&,
                         std::__bind<graphicutils::BatchDestroyHelper<
                             shared_ptr<graphics::TextureAtlasReference>>::Flush()::_lambda() _1_>,
                         void>(
        local_60, &local_30, (SafeBucketAllocatorSTL<std::packaged_task<void_()> _>*)&local_30,
        (__bind<graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference> _>::Flush()::_lambda()
                    _1_>*)local_50);
    int arg1 = (*local_60).operator->();
    result.get_future();
    unsigned int uVar1 = field_196++;
    unsigned long uVar2 = field_8.size();
    mutex = (mutex*)(*((unique_ptr<std::mutex[]>*)&field_40))[(unsigned long)uVar1 % uVar2];
    scoped_lock<std::mutex> local_40(*mutex);
    if ((char)field_0 != '\0') {
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h",
                        166, "Cannot add tasks to the threadpool after stopping it");
    }
    deque<ThreadPool::TaskInfo>* this_00 = &field_96[(unsigned long)uVar1 % uVar2];
    new (local_50) std::shared_ptr<std::packaged_task<void()>>(*local_60);
    TaskPriority local_34 = 1;
    std::deque<ThreadPool::TaskInfo>::emplace_back<
        ThreadPool::AddTask<
            graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::Flush()::_lambda() _1_>(
            char const*,
            graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::Flush()::_lambda()
                _1_&&)::_lambda() _1_,
        char const*&, ThreadPool::TaskPriority>(this_00, (_lambda___1_*)local_50, &local_68, &local_34);
    AddTask < graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::Flush()::{
        lambda() #1
    }
    () #1
}>(char const*,graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::Flush()::{
    lambda() #1}()#1
}&&)::{
    lambda() #1
}
::~future((_lambda___1_*)local_50);
std::__atomic_base<unsigned int, true>::operator++();
std::condition_variable::notify_one();
return result;
}

// 0x100842390
std::future < std::invoke_result <
    graphicutils::BatchDestroyHelper<
        std::unique_ptr<graphics::BillboardBatchInstance,
                        MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>::Flush()::{
    lambda() #1
}
> ::type > ThreadPool::AddTask <
    graphicutils::BatchDestroyHelper<
        std::unique_ptr<graphics::BillboardBatchInstance,
                        MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>::Flush()::{
    lambda() #1
}
>(const char* str, graphicutils::BatchDestroyHelper<std::unique_ptr<graphics::BillboardBatchInstance, MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>::Flush()::{lambda()#1}&& arg2)
{
    std::future < std::invoke_result <
        graphicutils::BatchDestroyHelper<
            std::unique_ptr<graphics::BillboardBatchInstance,
                            MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>::Flush()::{
        lambda() #1
    }
    > ::type > result;
    mutex* mutex;
    SafeBucketAllocatorSTL<std::packaged_task<void_()> _> local_60[16];
    uint64_t local_50[2];
    eastl local_30;

    char* local_68 = str;
    eastl::destruct<oldscape::highlight::NpcUID*>(&local_30);
    local_50[0] = std::bind<graphicutils::BatchDestroyHelper<std::unique_ptr<
        graphics::BillboardBatchInstance,
        MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>::Flush()::_lambda() _1_>(arg2);
    std::allocate_shared<
        std::packaged_task<void()>, SafeBucketAllocatorSTL<std::packaged_task<void()>>, std::allocator_arg_t const&,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>&,
        std::__bind<graphicutils::BatchDestroyHelper<std::unique_ptr<
            graphics::BillboardBatchInstance,
            MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>::Flush()::_lambda() _1_>,
        void>(
        local_60, &local_30, (SafeBucketAllocatorSTL<std::packaged_task<void_()> _>*)&local_30,
        (__bind<graphicutils::BatchDestroyHelper<std::unique_ptr<
             graphics::BillboardBatchInstance, MakeUniquePool<graphics::BillboardBatchInstance, _64>::UniquePoolDeleter>
                                                     _>::Flush()::_lambda() _1_>*)local_50);
    int arg1 = (*local_60).operator->();
    result.get_future();
    unsigned int uVar1 = field_196++;
    unsigned long uVar2 = field_8.size();
    mutex = (mutex*)(*((unique_ptr<std::mutex[]>*)&field_40))[(unsigned long)uVar1 % uVar2];
    scoped_lock<std::mutex> local_40(*mutex);
    if ((char)field_0 != '\0') {
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h",
                        166, "Cannot add tasks to the threadpool after stopping it");
    }
    deque<ThreadPool::TaskInfo>* this_00 = &field_96[(unsigned long)uVar1 % uVar2];
    new (local_50) std::shared_ptr<std::packaged_task<void()>>(*local_60);
    TaskPriority local_34 = 1;
    std::deque<ThreadPool::TaskInfo>::emplace_back<
        ThreadPool::AddTask<graphicutils::BatchDestroyHelper<std::unique_ptr<
            graphics::BillboardBatchInstance,
            MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>::Flush()::_lambda() _1_>(
            char const*, graphicutils::BatchDestroyHelper<
                             std::unique_ptr<graphics::BillboardBatchInstance,
                                             MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>::
                             Flush()::_lambda() _1_&&)::_lambda() _1_,
        char const*&, ThreadPool::TaskPriority>(this_00, (_lambda___1_*)local_50, &local_68, &local_34);
    AddTask < graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::Flush()::{
        lambda() #1
    }
    () #1
}>(char const*,graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::Flush()::{
    lambda() #1}()#1
}&&)::{
    lambda() #1
}
::~future((_lambda___1_*)local_50);
std::__atomic_base<unsigned int, true>::operator++();
std::condition_variable::notify_one();
return result;
}

// 0x10084d040
void ThreadPool::AddTask<graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::$_5>(
    char const*, graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::$_5&&)::{
    lambda() #1
}
::~future() {
    ~future(this);
}

// 0x10084d730
void ThreadPool::AddTask<graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::$_5>(
    char const*, graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::$_5&&)::{
    lambda() #1
}
::future({ lambda() #1 } && arg1) {
    future(arg1);
}

// 0x10084d750
void ThreadPool::AddTask<graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::$_5>(
    char const*, graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::$_5&&)::{
    lambda() #1
}
::future({ lambda() #1 } && arg1) {
    new (this) std::shared_ptr<std::packaged_task<void()>>(arg1);
}

// 0x10084de70
void ThreadPool::AddTask<graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::$_5>(
    char const*, graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::$_5&&)::{
    lambda() #1
}
::future(const { lambda() #1 } & arg1) {
    future(arg1);
}

// 0x10084de90
void ThreadPool::AddTask<graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::$_5>(
    char const*, graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::$_5&&)::{
    lambda() #1
}
::future(const { lambda() #1 } & arg1) {
    new (this) std::shared_ptr<std::packaged_task<void()>>(arg1);
}

// 0x10084e100
void ThreadPool::AddTask<graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::$_5>(
    char const*, graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::$_5&&)::{
    lambda() #1
}
::operator()() const {
    packaged_task<void()>* this_00;

    this_00 = (packaged_task<void()>*)**this;
    std::packaged_task<void()>::operator()(this_00);
}

// 0x10084e130
void ThreadPool::AddTask<graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::$_5>(
    char const*, graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::$_5&&)::{
    lambda() #1
}
::~future() {
    ~shared_ptr();
}

// 0x10084e460
void ThreadPool::AddTask<graphics::OcclusionReprojection::ReprojectOcclusionBuffer(
    graphics::OcclusionManager const&, ThreadPool&, graphics::SceneViewData const&, graphics::SceneViewData const&,
    bool, graphics::SceneViewData*)::$_6&>(
    char const*, graphics::OcclusionReprojection::ReprojectOcclusionBuffer(graphics::OcclusionManager const&,
                                                                           ThreadPool&, graphics::SceneViewData const&,
                                                                           graphics::SceneViewData const&, bool,
                                                                           graphics::SceneViewData*)::$_6&)::{
    lambda() #1
}
::~future() {
    ~future(this);
}

// 0x10084eab0
void ThreadPool::AddTask<graphics::OcclusionReprojection::ReprojectOcclusionBuffer(
    graphics::OcclusionManager const&, ThreadPool&, graphics::SceneViewData const&, graphics::SceneViewData const&,
    bool, graphics::SceneViewData*)::$_6&>(
    char const*, graphics::OcclusionReprojection::ReprojectOcclusionBuffer(graphics::OcclusionManager const&,
                                                                           ThreadPool&, graphics::SceneViewData const&,
                                                                           graphics::SceneViewData const&, bool,
                                                                           graphics::SceneViewData*)::$_6&)::{
    lambda() #1
}
::future({ lambda() #1 } && arg1) {
    future(arg1);
}

// 0x10084ead0
void ThreadPool::AddTask<graphics::OcclusionReprojection::ReprojectOcclusionBuffer(
    graphics::OcclusionManager const&, ThreadPool&, graphics::SceneViewData const&, graphics::SceneViewData const&,
    bool, graphics::SceneViewData*)::$_6&>(
    char const*, graphics::OcclusionReprojection::ReprojectOcclusionBuffer(graphics::OcclusionManager const&,
                                                                           ThreadPool&, graphics::SceneViewData const&,
                                                                           graphics::SceneViewData const&, bool,
                                                                           graphics::SceneViewData*)::$_6&)::{
    lambda() #1
}
::future({ lambda() #1 } && arg1) {
    new (this) std::shared_ptr<std::packaged_task<void()>>(arg1);
}

// 0x10084f1f0
void ThreadPool::AddTask<graphics::OcclusionReprojection::ReprojectOcclusionBuffer(
    graphics::OcclusionManager const&, ThreadPool&, graphics::SceneViewData const&, graphics::SceneViewData const&,
    bool, graphics::SceneViewData*)::$_6&>(
    char const*, graphics::OcclusionReprojection::ReprojectOcclusionBuffer(graphics::OcclusionManager const&,
                                                                           ThreadPool&, graphics::SceneViewData const&,
                                                                           graphics::SceneViewData const&, bool,
                                                                           graphics::SceneViewData*)::$_6&)::{
    lambda() #1
}
::future(const { lambda() #1 } & arg1) {
    future(arg1);
}

// 0x10084f210
void ThreadPool::AddTask<graphics::OcclusionReprojection::ReprojectOcclusionBuffer(
    graphics::OcclusionManager const&, ThreadPool&, graphics::SceneViewData const&, graphics::SceneViewData const&,
    bool, graphics::SceneViewData*)::$_6&>(
    char const*, graphics::OcclusionReprojection::ReprojectOcclusionBuffer(graphics::OcclusionManager const&,
                                                                           ThreadPool&, graphics::SceneViewData const&,
                                                                           graphics::SceneViewData const&, bool,
                                                                           graphics::SceneViewData*)::$_6&)::{
    lambda() #1
}
::future(const { lambda() #1 } & arg1) {
    new (this) std::shared_ptr<std::packaged_task<void()>>(arg1);
}

// 0x10084f480
void ThreadPool::AddTask<graphics::OcclusionReprojection::ReprojectOcclusionBuffer(
    graphics::OcclusionManager const&, ThreadPool&, graphics::SceneViewData const&, graphics::SceneViewData const&,
    bool, graphics::SceneViewData*)::$_6&>(
    char const*, graphics::OcclusionReprojection::ReprojectOcclusionBuffer(graphics::OcclusionManager const&,
                                                                           ThreadPool&, graphics::SceneViewData const&,
                                                                           graphics::SceneViewData const&, bool,
                                                                           graphics::SceneViewData*)::$_6&)::{
    lambda() #1
}
::operator()() const {
    packaged_task<void()>* this_00;

    this_00 = (packaged_task<void()>*)**this;
    std::packaged_task<void()>::operator()(this_00);
}

// 0x10084f4b0
void ThreadPool::AddTask<graphics::OcclusionReprojection::ReprojectOcclusionBuffer(
    graphics::OcclusionManager const&, ThreadPool&, graphics::SceneViewData const&, graphics::SceneViewData const&,
    bool, graphics::SceneViewData*)::$_6&>(
    char const*, graphics::OcclusionReprojection::ReprojectOcclusionBuffer(graphics::OcclusionManager const&,
                                                                           ThreadPool&, graphics::SceneViewData const&,
                                                                           graphics::SceneViewData const&, bool,
                                                                           graphics::SceneViewData*)::$_6&)::{
    lambda() #1
}
::~future() {
    ~shared_ptr();
}

// 0x10097ed50
void ThreadPool::SetAffinity(unsigned int arg1) {
    unsigned int local_10[2];

    local_10[0] = arg1;
    RunOnceOnAllThreads<ThreadPool::SetAffinity(unsigned int)::_lambda() _1_>(this, "SetAffinity",
                                                                              (_lambda___1_*)local_10);
}

// 0x100987170
std::future<std::invoke_result<
    graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2>::type>
ThreadPool::AddTask<
    graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2>(
    const char* str,
    graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2&& arg2) {
    std::future<std::invoke_result<graphics::Animation::ConstructFromAnimKeyFrameSet(
        shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2>::type>
        result;
    mutex* mutex;
    deque<ThreadPool::TaskInfo>* deque;
    SafeBucketAllocatorSTL<std::packaged_task<void_()> _> local_58[16];
    eastl local_38;

    char* local_60 = "Maya Anim Sample";
    eastl::destruct<oldscape::highlight::NpcUID*>(&local_38);
    std::bind<graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet> const&)::__2>(
        &local_90);
    std::allocate_shared<std::packaged_task<void()>, SafeBucketAllocatorSTL<std::packaged_task<void()>>,
                         std::allocator_arg_t const&, SafeBucketAllocatorSTL<std::packaged_task<void()>>&,
                         std::__bind<graphics::Animation::ConstructFromAnimKeyFrameSet(
                             shared_ptr<graphics::AnimKeyFrameSet> const&)::__2>,
                         void>(local_58, &local_38, (SafeBucketAllocatorSTL<std::packaged_task<void_()> _>*)&local_38,
                               (__bind<graphics::Animation::ConstructFromAnimKeyFrameSet(
                                    shared_ptr<graphics::AnimKeyFrameSet> const&)::__2>*)&local_90);
    int arg1 = (*local_58).operator->();
    result.get_future();
    unsigned int uVar1 = (*((str + 196)))++;
    unsigned long uVar2 = ((str + 8))->size();
    mutex = (mutex*)(*((unique_ptr<std::mutex[]>*)(str + 40)))[(unsigned long)uVar1 % uVar2];
    scoped_lock<std::mutex> local_48(*mutex);
    if (*str != '\0') {
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h",
                        166, "Cannot add tasks to the threadpool after stopping it");
    }
    deque = (deque<ThreadPool::TaskInfo>*)(*((str + 96)))[(unsigned long)uVar1 % uVar2];
    __2 local_90() >> (*local_58);
    TaskPriority local_3c = 1;
    std::deque<ThreadPool::TaskInfo>::emplace_back<
        ThreadPool::AddTask<graphics::Animation::ConstructFromAnimKeyFrameSet(
            shared_ptr<graphics::AnimKeyFrameSet> const&)::__2>(
            char const*,
            (shared_ptr<graphics::AnimKeyFrameSet> const&)->ConstructFromAnimKeyFrameSet()::__2&&)::_lambda() _1_,
        char const*&, ThreadPool::TaskPriority>(deque, &local_90, &local_60, &local_3c);
    AddTask<graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2>(
        char const*, (shared_ptr<graphics::AnimKeyFrameSet> const&)->ConstructFromAnimKeyFrameSet()::$_2&&)::{
        lambda() #1
    }
    ::~future(&local_90);
    std::__atomic_base<unsigned int, true>::operator++();
    std::condition_variable::notify_one();
    return result;
}

// 0x10098d050
std::future<std::invoke_result<graphics::AnimationStateProvider::BeginAsyncTasks(
    ThreadPool&, unsigned int, Array<graphics::LabelData> const&, math::Matrix44T<float> const&)::$_8>::type>
ThreadPool::AddTask<graphics::AnimationStateProvider::BeginAsyncTasks(
    ThreadPool&, unsigned int, Array<graphics::LabelData> const&, math::Matrix44T<float> const&)::$_8>(
    const char* str,
    graphics::AnimationStateProvider::BeginAsyncTasks(ThreadPool&, unsigned int, Array<graphics::LabelData> const&,
                                                      math::Matrix44T<float> const&)::$_8&& arg2) {
    std::future<std::invoke_result<graphics::AnimationStateProvider::BeginAsyncTasks(
        ThreadPool&, unsigned int, Array<graphics::LabelData> const&, math::Matrix44T<float> const&)::$_8>::type>
        result;
    mutex* mutex;
    deque<ThreadPool::TaskInfo>* deque;
    SafeBucketAllocatorSTL<std::packaged_task<void_()> _> local_58[16];
    eastl local_38;

    char* local_60 = "AnimUpdate";
    eastl::destruct<oldscape::highlight::NpcUID*>(&local_38);
    std::bind<graphics::AnimationStateProvider::BeginAsyncTasks(
        ThreadPool&, unsigned int, Array<graphics::LabelData> const&, math::Matrix44T<float> const&)::__8>(&local_80);
    std::allocate_shared<
        std::packaged_task<void()>, SafeBucketAllocatorSTL<std::packaged_task<void()>>, std::allocator_arg_t const&,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>&,
        std::__bind<graphics::AnimationStateProvider::BeginAsyncTasks(
            ThreadPool&, unsigned int, Array<graphics::LabelData> const&, math::Matrix44T<float> const&)::__8>,
        void>(local_58, &local_38, (SafeBucketAllocatorSTL<std::packaged_task<void_()> _>*)&local_38,
              (__bind<graphics::AnimationStateProvider::BeginAsyncTasks(
                   ThreadPool&, unsigned int, Array<graphics::LabelData> const&,
                   math::Matrix44T<float> const&)::__8>*)&local_80);
    int arg1 = (*local_58).operator->();
    result.get_future();
    unsigned int uVar1 = (*((str + 196)))++;
    unsigned long uVar2 = ((str + 8))->size();
    mutex = (mutex*)(*((unique_ptr<std::mutex[]>*)(str + 40)))[(unsigned long)uVar1 % uVar2];
    scoped_lock<std::mutex> local_48(*mutex);
    if (*str != '\0') {
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h",
                        166, "Cannot add tasks to the threadpool after stopping it");
    }
    deque = (deque<ThreadPool::TaskInfo>*)(*((str + 96)))[(unsigned long)uVar1 % uVar2];
    __8 local_80() >> (*local_58);
    TaskPriority local_3c = 1;
    std::deque<ThreadPool::TaskInfo>::emplace_back<
        ThreadPool::AddTask<graphics::AnimationStateProvider::BeginAsyncTasks(
            ThreadPool&, unsigned int, Array<graphics::LabelData> const&, math::Matrix44T<float> const&)::__8>(
            char const*, (ThreadPool&)
                             ->BeginAsyncTasks(unsigned int, Array<graphics::LabelData> const&,
                                               math::Matrix44T<float> const&)::__8&&)::_lambda() _1_,
        char const*&, ThreadPool::TaskPriority>(deque, &local_80, &local_60, &local_3c);
    AddTask<graphics::AnimationStateProvider::BeginAsyncTasks(
        ThreadPool&, unsigned int, Array<graphics::LabelData> const&, math::Matrix44T<float> const&)::$_8>(
        char const*,
        (ThreadPool&)
            ->BeginAsyncTasks(unsigned int, Array<graphics::LabelData> const&, math::Matrix44T<float> const&)::$_8&&)::{
        lambda() #1
    }
    ::~future(&local_80);
    std::__atomic_base<unsigned int, true>::operator++();
    std::condition_variable::notify_one();
    return result;
}

// 0x10098eb30
void ThreadPool::RunOnceOnAllThreads < ThreadPool::SetAffinity(unsigned int)::{
    lambda() #1
}
> (const char* str, ThreadPool::SetAffinity(unsigned int)::{ lambda() #1 } && arg2) {
    unsigned long uVar3;
    mutex* mutex;
    deque<ThreadPool::TaskInfo>* this_01;
    shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>> local_b0[16];
    packaged_task<void()> local_a0[16];
    unique_ptr<std::mutex[]>* local_68;
    vector<std::deque<ThreadPool::TaskInfo>>* local_60;
    uint8_t* local_58;
    scoped_lock<std::mutex> local_50;
    TaskPriority local_44;
    bool local_39;
    eastl local_38;

    char* local_78 = str;
    eastl::destruct<oldscape::highlight::NpcUID*>(&local_38);
    vector<std::future<void>, BucketAllocatorEASTL> local_90;
    uint8_t* this_00 = &field_8;
    unsigned long uVar1 = this_00->size();
    local_90.reserve(uVar1);
    uint32_t local_40 = *(uint32_t*)arg2;
    vector<eastl::pair<int, int>>* local_70 = (vector<eastl::pair<int, int>>*)this_00;
    long lVar2 = this_00->size();
    if (lVar2 != 0) {
        local_68 = (unique_ptr<std::mutex[]>*)&field_40;
        local_60 = (vector<std::deque<ThreadPool::TaskInfo>>*)&field_96;
        local_58 = &field_192;
        uVar1 = 0;
        do {
            std::allocate_shared<std::packaged_task<void()>, SafeBucketAllocatorSTL<std::packaged_task<void()>>,
                                 std::allocator_arg_t const&, SafeBucketAllocatorSTL<std::packaged_task<void()>>&,
                                 ThreadPool::RunOnceOnAllThreads<ThreadPool::SetAffinity(unsigned int)::_lambda() _1_>(
                                     char const*, unsigned int->SetAffinity()::_lambda() _1_&&)::_lambda() _1_&,
                                 void>((SafeBucketAllocatorSTL<std::packaged_task<void_()> _>*)local_b0, &local_38,
                                       (SafeBucketAllocatorSTL<std::packaged_task<void_()> _>*)&local_38,
                                       (_lambda___1_*)&local_40);
            (*local_b0).operator->();
            local_a0->get_future();
            local_90.emplace_back<std::future<void>>(*local_a0);
            mutex = (mutex*)(*local_68)[uVar1];
            local_50 = std::scoped_lock(*mutex);
            if ((char)field_0 != '\0') {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h",
                    214, "Cannot add tasks to the threadpool after stopping it");
            }
            this_01 = (deque<ThreadPool::TaskInfo>*)(*local_60)[uVar1];
            new (local_a0) std::shared_ptr<std::packaged_task<void()>>(*local_b0);
            local_44 = 1;
            local_39 = false;
            std::deque<ThreadPool::TaskInfo>::emplace_back<
                ThreadPool::RunOnceOnAllThreads<ThreadPool::SetAffinity(unsigned int)::_lambda() _1_>(
                    char const*, unsigned int->SetAffinity()::_lambda() _1_&&)::_lambda() _2_,
                char const*&, ThreadPool::TaskPriority, bool>(this_01, (_lambda___2_*)local_a0, &local_78, &local_44,
                                                              &local_39);
            AddTask < graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::Flush()::{
                lambda() #1
            }
            () #1
        }>(char const*,graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::Flush()::{
            lambda() #1}()#1
    }&&)::{
        lambda() #1
    }
    ::~future((_lambda___1_*)local_a0);
    std::__atomic_base<unsigned int, true>::operator++();
    uVar1 = uVar1 + 1;
    uVar3 = local_70->size();
}
while (uVar1 < uVar3)
    ;
}
std::condition_variable::notify_all();
lVar2 = local_90.HeapBeginPtr();
long lVar4 = local_90.end();
for (; lVar2 != lVar4; lVar2 = lVar2 + 8) {
    std::future<void>::get();
}
return;
}

// 0x10098f4b0
void ThreadPool::RunOnceOnAllThreads < ThreadPool::SetAffinity(unsigned int)::{
    lambda() #1
}
> (char const*, ThreadPool::SetAffinity(unsigned int)::{ lambda() #1 }&&)::{
    lambda() #1
}
::operator()() const {
    SetAffinity(unsigned int)::{
        lambda() #1
    }
    ::operator()((_lambda___1_*)this);
}

// 0x10098f4c0
void ThreadPool::SetAffinity(unsigned int)::{
    lambda() #1
}
::operator()() const {
    this_thread::SetAffinity(field_0);
}

// 0x1009a01f0
void ThreadPool::AddTask<
    graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2>(
    char const*,
    graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2&&)::{
    lambda() #1
}
::~future() {
    ~future(this);
}

// 0x1009a1780
void ThreadPool::AddTask<
    graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2>(
    char const*,
    graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2&&)::{
    lambda() #1
}
::future({ lambda() #1 } && arg1) {
    future(arg1);
}

// 0x1009a17a0
void ThreadPool::AddTask<
    graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2>(
    char const*,
    graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2&&)::{
    lambda() #1
}
::future({ lambda() #1 } && arg1) {
    new (this) std::shared_ptr<std::packaged_task<void()>>(arg1);
}

// 0x1009a1ec0
void ThreadPool::AddTask<
    graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2>(
    char const*,
    graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2&&)::{
    lambda() #1
}
::future(const { lambda() #1 } & arg1) {
    future(arg1);
}

// 0x1009a1ee0
void ThreadPool::AddTask<
    graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2>(
    char const*,
    graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2&&)::{
    lambda() #1
}
::future(const { lambda() #1 } & arg1) {
    new (this) std::shared_ptr<std::packaged_task<void()>>(arg1);
}

// 0x1009a2150
void ThreadPool::AddTask<
    graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2>(
    char const*,
    graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2&&)::{
    lambda() #1
}
::operator()() const {
    packaged_task<void()>* this_00;

    this_00 = (packaged_task<void()>*)**this;
    std::packaged_task<void()>::operator()(this_00);
}

// 0x1009a2180
void ThreadPool::AddTask<
    graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2>(
    char const*,
    graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2&&)::{
    lambda() #1
}
::~future() {
    ~shared_ptr();
}

// 0x1009a5f00
void ThreadPool::AddTask<graphics::AnimationStateProvider::BeginAsyncTasks(
    ThreadPool&, unsigned int, Array<graphics::LabelData> const&, math::Matrix44T<float> const&)::$_8>(
    char const*,
    graphics::AnimationStateProvider::BeginAsyncTasks(ThreadPool&, unsigned int, Array<graphics::LabelData> const&,
                                                      math::Matrix44T<float> const&)::$_8&&)::{
    lambda() #1
}
::~future() {
    ~future(this);
}

// 0x1009a6590
void ThreadPool::AddTask<graphics::AnimationStateProvider::BeginAsyncTasks(
    ThreadPool&, unsigned int, Array<graphics::LabelData> const&, math::Matrix44T<float> const&)::$_8>(
    char const*,
    graphics::AnimationStateProvider::BeginAsyncTasks(ThreadPool&, unsigned int, Array<graphics::LabelData> const&,
                                                      math::Matrix44T<float> const&)::$_8&&)::{
    lambda() #1
}
::future({ lambda() #1 } && arg1) {
    future(arg1);
}

// 0x1009a65b0
void ThreadPool::AddTask<graphics::AnimationStateProvider::BeginAsyncTasks(
    ThreadPool&, unsigned int, Array<graphics::LabelData> const&, math::Matrix44T<float> const&)::$_8>(
    char const*,
    graphics::AnimationStateProvider::BeginAsyncTasks(ThreadPool&, unsigned int, Array<graphics::LabelData> const&,
                                                      math::Matrix44T<float> const&)::$_8&&)::{
    lambda() #1
}
::future({ lambda() #1 } && arg1) {
    new (this) std::shared_ptr<std::packaged_task<void()>>(arg1);
}

// 0x1009a6cd0
void ThreadPool::AddTask<graphics::AnimationStateProvider::BeginAsyncTasks(
    ThreadPool&, unsigned int, Array<graphics::LabelData> const&, math::Matrix44T<float> const&)::$_8>(
    char const*,
    graphics::AnimationStateProvider::BeginAsyncTasks(ThreadPool&, unsigned int, Array<graphics::LabelData> const&,
                                                      math::Matrix44T<float> const&)::$_8&&)::{
    lambda() #1
}
::future(const { lambda() #1 } & arg1) {
    future(arg1);
}

// 0x1009a6cf0
void ThreadPool::AddTask<graphics::AnimationStateProvider::BeginAsyncTasks(
    ThreadPool&, unsigned int, Array<graphics::LabelData> const&, math::Matrix44T<float> const&)::$_8>(
    char const*,
    graphics::AnimationStateProvider::BeginAsyncTasks(ThreadPool&, unsigned int, Array<graphics::LabelData> const&,
                                                      math::Matrix44T<float> const&)::$_8&&)::{
    lambda() #1
}
::future(const { lambda() #1 } & arg1) {
    new (this) std::shared_ptr<std::packaged_task<void()>>(arg1);
}

// 0x1009a6f60
void ThreadPool::AddTask<graphics::AnimationStateProvider::BeginAsyncTasks(
    ThreadPool&, unsigned int, Array<graphics::LabelData> const&, math::Matrix44T<float> const&)::$_8>(
    char const*,
    graphics::AnimationStateProvider::BeginAsyncTasks(ThreadPool&, unsigned int, Array<graphics::LabelData> const&,
                                                      math::Matrix44T<float> const&)::$_8&&)::{
    lambda() #1
}
::operator()() const {
    packaged_task<void()>* this_00;

    this_00 = (packaged_task<void()>*)**this;
    std::packaged_task<void()>::operator()(this_00);
}

// 0x1009a6f90
void ThreadPool::AddTask<graphics::AnimationStateProvider::BeginAsyncTasks(
    ThreadPool&, unsigned int, Array<graphics::LabelData> const&, math::Matrix44T<float> const&)::$_8>(
    char const*,
    graphics::AnimationStateProvider::BeginAsyncTasks(ThreadPool&, unsigned int, Array<graphics::LabelData> const&,
                                                      math::Matrix44T<float> const&)::$_8&&)::{
    lambda() #1
}
::~future() {
    ~shared_ptr();
}

// 0x1009e31a0
std::future<std::invoke_result<Js5ResourceProvider::Js5ResourceProvider(
    Array<eastl::string> const&, SystemSettings*, Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*,
    math::BigInteger*, eastl::string, bool)::$_1>::type>
ThreadPool::AddTask<Js5ResourceProvider::Js5ResourceProvider(
    Array<eastl::string> const&, SystemSettings*, Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*,
    math::BigInteger*, eastl::string, bool)::$_1>(
    const char* str,
    Js5ResourceProvider::Js5ResourceProvider(Array<eastl::string> const&, SystemSettings*, Js5ArchiveSetSettings&,
                                             math::BigInteger*, math::BigInteger*, math::BigInteger*, eastl::string,
                                             bool)::$_1&& arg2) {
    std::future<std::invoke_result<Js5ResourceProvider::Js5ResourceProvider(
        Array<eastl::string> const&, SystemSettings*, Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*,
        math::BigInteger*, eastl::string, bool)::$_1>::type>
        result;
    mutex* mutex;
    deque<ThreadPool::TaskInfo>* deque;
    SafeBucketAllocatorSTL<std::packaged_task<void_()> _> local_1b8[16];
    eastl local_198;
    long local_38;

    char* local_1c0 = "Js5ResourceProvider";
    eastl::destruct<oldscape::highlight::NpcUID*>(&local_198);
    std::bind<Js5ResourceProvider::Js5ResourceProvider(Array<eastl::string> const&, SystemSettings*,
                                                       Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*,
                                                       math::BigInteger*, eastl::string, bool)::__1>(&local_190);
    std::allocate_shared<std::packaged_task<void()>, SafeBucketAllocatorSTL<std::packaged_task<void()>>,
                         std::allocator_arg_t const&, SafeBucketAllocatorSTL<std::packaged_task<void()>>&,
                         std::__bind<Js5ResourceProvider::Js5ResourceProvider(
                             Array<eastl::string> const&, SystemSettings*, Js5ArchiveSetSettings&, math::BigInteger*,
                             math::BigInteger*, math::BigInteger*, eastl::string, bool)::__1>,
                         void>(
        local_1b8, &local_198, (SafeBucketAllocatorSTL<std::packaged_task<void_()> _>*)&local_198,
        (__bind<Js5ResourceProvider::Js5ResourceProvider(Array<eastl::string> const&, SystemSettings*,
                                                         Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*,
                                                         math::BigInteger*, eastl::string, bool)::__1>*)&local_190);
    int arg1 = (*local_1b8).operator->();
    result.get_future();
    unsigned int uVar1 = (*((str + 196)))++;
    unsigned long uVar2 = ((str + 8))->size();
    mutex = (mutex*)(*((unique_ptr<std::mutex[]>*)(str + 40)))[(unsigned long)uVar1 % uVar2];
    scoped_lock<std::mutex> local_1a8(*mutex);
    if (*str != '\0') {
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h",
                        166, "Cannot add tasks to the threadpool after stopping it");
    }
    deque = (deque<ThreadPool::TaskInfo>*)(*((str + 96)))[(unsigned long)uVar1 % uVar2];
    __1 local_190() >> (*local_1b8);
    TaskPriority local_19c = 1;
    std::deque<ThreadPool::TaskInfo>::emplace_back<
        ThreadPool::AddTask<Js5ResourceProvider::Js5ResourceProvider(
            Array<eastl::string> const&, SystemSettings*, Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*,
            math::BigInteger*, eastl::string, bool)::__1>(
            char const*, Js5ResourceProvider::Js5ResourceProvider(
                             Array<eastl::string> const&, SystemSettings*, Js5ArchiveSetSettings&, math::BigInteger*,
                             math::BigInteger*, math::BigInteger*, eastl::string, bool)::__1&&)::_lambda() _1_,
        char const*&, ThreadPool::TaskPriority>(deque, &local_190, &local_1c0, &local_19c);
    AddTask<Js5ResourceProvider::Js5ResourceProvider(Array<eastl::string> const&, SystemSettings*,
                                                     Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*,
                                                     math::BigInteger*, eastl::string, bool)::$_1>(
        char const*, Js5ResourceProvider::Js5ResourceProvider(
                         Array<eastl::string> const&, SystemSettings*, Js5ArchiveSetSettings&, math::BigInteger*,
                         math::BigInteger*, math::BigInteger*, eastl::string, bool)::$_1&&)::{
        lambda() #1
    }
    ::~future(&local_190);
    std::__atomic_base<unsigned int, true>::operator++();
    std::condition_variable::notify_one();
    return result;
}

// 0x1009fe2a0
void ThreadPool::AddTask<Js5ResourceProvider::Js5ResourceProvider(
    Array<eastl::string> const&, SystemSettings*, Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*,
    math::BigInteger*, eastl::string, bool)::$_1>(
    char const*, Js5ResourceProvider::Js5ResourceProvider(Array<eastl::string> const&, SystemSettings*,
                                                          Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*,
                                                          math::BigInteger*, eastl::string, bool)::$_1&&)::{
    lambda() #1
}
::~future() {
    ~future(this);
}

// 0x1009ffaf0
void ThreadPool::AddTask<Js5ResourceProvider::Js5ResourceProvider(
    Array<eastl::string> const&, SystemSettings*, Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*,
    math::BigInteger*, eastl::string, bool)::$_1>(
    char const*, Js5ResourceProvider::Js5ResourceProvider(Array<eastl::string> const&, SystemSettings*,
                                                          Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*,
                                                          math::BigInteger*, eastl::string, bool)::$_1&&)::{
    lambda() #1
}
::future({ lambda() #1 } && arg1) {
    future(arg1);
}

// 0x1009ffb10
void ThreadPool::AddTask<Js5ResourceProvider::Js5ResourceProvider(
    Array<eastl::string> const&, SystemSettings*, Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*,
    math::BigInteger*, eastl::string, bool)::$_1>(
    char const*, Js5ResourceProvider::Js5ResourceProvider(Array<eastl::string> const&, SystemSettings*,
                                                          Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*,
                                                          math::BigInteger*, eastl::string, bool)::$_1&&)::{
    lambda() #1
}
::future({ lambda() #1 } && arg1) {
    new (this) std::shared_ptr<std::packaged_task<void()>>(arg1);
}

// 0x100a002a0
void ThreadPool::AddTask<Js5ResourceProvider::Js5ResourceProvider(
    Array<eastl::string> const&, SystemSettings*, Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*,
    math::BigInteger*, eastl::string, bool)::$_1>(
    char const*, Js5ResourceProvider::Js5ResourceProvider(Array<eastl::string> const&, SystemSettings*,
                                                          Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*,
                                                          math::BigInteger*, eastl::string, bool)::$_1&&)::{
    lambda() #1
}
::future(const { lambda() #1 } & arg1) {
    future(arg1);
}

// 0x100a002c0
void ThreadPool::AddTask<Js5ResourceProvider::Js5ResourceProvider(
    Array<eastl::string> const&, SystemSettings*, Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*,
    math::BigInteger*, eastl::string, bool)::$_1>(
    char const*, Js5ResourceProvider::Js5ResourceProvider(Array<eastl::string> const&, SystemSettings*,
                                                          Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*,
                                                          math::BigInteger*, eastl::string, bool)::$_1&&)::{
    lambda() #1
}
::future(const { lambda() #1 } & arg1) {
    new (this) std::shared_ptr<std::packaged_task<void()>>(arg1);
}

// 0x100a00530
void ThreadPool::AddTask<Js5ResourceProvider::Js5ResourceProvider(
    Array<eastl::string> const&, SystemSettings*, Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*,
    math::BigInteger*, eastl::string, bool)::$_1>(
    char const*, Js5ResourceProvider::Js5ResourceProvider(Array<eastl::string> const&, SystemSettings*,
                                                          Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*,
                                                          math::BigInteger*, eastl::string, bool)::$_1&&)::{
    lambda() #1
}
::operator()() const {
    packaged_task<void()>* this_00;

    this_00 = (packaged_task<void()>*)**this;
    std::packaged_task<void()>::operator()(this_00);
}

// 0x100a00700
void ThreadPool::AddTask<Js5ResourceProvider::Js5ResourceProvider(
    Array<eastl::string> const&, SystemSettings*, Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*,
    math::BigInteger*, eastl::string, bool)::$_1>(
    char const*, Js5ResourceProvider::Js5ResourceProvider(Array<eastl::string> const&, SystemSettings*,
                                                          Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*,
                                                          math::BigInteger*, eastl::string, bool)::$_1&&)::{
    lambda() #1
}
::~future() {
    ~shared_ptr();
}

// 0x100ad9ce0
std::future<std::invoke_result<http::HTTPRequest::Post(char const*, char const*)::$_0>::type>
ThreadPool::AddTask<http::HTTPRequest::Post(char const*, char const*)::$_0>(
    const char* str, http::HTTPRequest::Post(char const*, char const*)::$_0&& arg2) {
    std::future<std::invoke_result<http::HTTPRequest::Post(char const*, char const*)::$_0>::type> result;
    mutex* mutex;
    SafeBucketAllocatorSTL<std::packaged_task<void_()> _> local_60[16];
    uint64_t local_50[2];
    eastl local_30;

    char* local_68 = str;
    eastl::destruct<oldscape::highlight::NpcUID*>(&local_30);
    local_50[0] = std::bind<http::HTTPRequest::Post(char const*, char const*)::__0>(arg2);
    std::allocate_shared<std::packaged_task<void()>, SafeBucketAllocatorSTL<std::packaged_task<void()>>,
                         std::allocator_arg_t const&, SafeBucketAllocatorSTL<std::packaged_task<void()>>&,
                         std::__bind<http::HTTPRequest::Post(char const*, char const*)::__0>, void>(
        local_60, &local_30, (SafeBucketAllocatorSTL<std::packaged_task<void_()> _>*)&local_30,
        (__bind<http::HTTPRequest::Post(char const*, char const*)::__0>*)local_50);
    int arg1 = (*local_60).operator->();
    result.get_future();
    unsigned int uVar1 = field_196++;
    unsigned long uVar2 = field_8.size();
    mutex = (mutex*)(*((unique_ptr<std::mutex[]>*)&field_40))[(unsigned long)uVar1 % uVar2];
    scoped_lock<std::mutex> local_40(*mutex);
    if ((char)field_0 != '\0') {
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h",
                        166, "Cannot add tasks to the threadpool after stopping it");
    }
    deque<ThreadPool::TaskInfo>* this_00 = &field_96[(unsigned long)uVar1 % uVar2];
    new (local_50) std::shared_ptr<std::packaged_task<void()>>(*local_60);
    TaskPriority local_34 = 1;
    std::deque<ThreadPool::TaskInfo>::emplace_back<
        ThreadPool::AddTask<http::HTTPRequest::Post(char const*, char const*)::__0>(
            char const*, (char const*)->Post(char const*)::__0&&)::_lambda() _1_,
        char const*&, ThreadPool::TaskPriority>(this_00, (_lambda___1_*)local_50, &local_68, &local_34);
    AddTask<http::HTTPRequest::Post(char const*, char const*)::$_0>(char const*,
                                                                    (char const*)->Post(char const*)::$_0&&)::{
        lambda() #1
    }
    ::~future((_lambda___1_*)local_50);
    std::__atomic_base<unsigned int, true>::operator++();
    std::condition_variable::notify_one();
    return result;
}

// 0x100adde00
void ThreadPool::AddTask<http::HTTPRequest::Post(char const*, char const*)::$_0>(
    char const*, http::HTTPRequest::Post(char const*, char const*)::$_0&&)::{
    lambda() #1
}
::~future() {
    ~future(this);
}

// 0x100adefd0
void ThreadPool::AddTask<http::HTTPRequest::Post(char const*, char const*)::$_0>(
    char const*, http::HTTPRequest::Post(char const*, char const*)::$_0&&)::{
    lambda() #1
}
::future({ lambda() #1 } && arg1) {
    future(arg1);
}

// 0x100adeff0
void ThreadPool::AddTask<http::HTTPRequest::Post(char const*, char const*)::$_0>(
    char const*, http::HTTPRequest::Post(char const*, char const*)::$_0&&)::{
    lambda() #1
}
::future({ lambda() #1 } && arg1) {
    new (this) std::shared_ptr<std::packaged_task<void()>>(arg1);
}

// 0x100adf780
void ThreadPool::AddTask<http::HTTPRequest::Post(char const*, char const*)::$_0>(
    char const*, http::HTTPRequest::Post(char const*, char const*)::$_0&&)::{
    lambda() #1
}
::future(const { lambda() #1 } & arg1) {
    future(arg1);
}

// 0x100adf7a0
void ThreadPool::AddTask<http::HTTPRequest::Post(char const*, char const*)::$_0>(
    char const*, http::HTTPRequest::Post(char const*, char const*)::$_0&&)::{
    lambda() #1
}
::future(const { lambda() #1 } & arg1) {
    new (this) std::shared_ptr<std::packaged_task<void()>>(arg1);
}

// 0x100adfa10
void ThreadPool::AddTask<http::HTTPRequest::Post(char const*, char const*)::$_0>(
    char const*, http::HTTPRequest::Post(char const*, char const*)::$_0&&)::{
    lambda() #1
}
::operator()() const {
    packaged_task<void()>* this_00;

    this_00 = (packaged_task<void()>*)**this;
    std::packaged_task<void()>::operator()(this_00);
}

// 0x100adfbe0
void ThreadPool::AddTask<http::HTTPRequest::Post(char const*, char const*)::$_0>(
    char const*, http::HTTPRequest::Post(char const*, char const*)::$_0&&)::{
    lambda() #1
}
::~future() {
    ~shared_ptr();
}

// 0x100b04490
void ThreadPool::RunOnceOnAllThreads<GraphicsApp::MainShutdown()::$_0>(const char* str,
                                                                       GraphicsApp::MainShutdown()::$_0&& arg2) {
    unsigned long uVar3;
    mutex* mutex;
    deque<ThreadPool::TaskInfo>* this_01;
    shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>> local_b0[16];
    packaged_task<void()> local_a0[16];
    unique_ptr<std::mutex[]>* local_68;
    vector<std::deque<ThreadPool::TaskInfo>>* local_60;
    uint8_t* local_58;
    scoped_lock<std::mutex> local_50;
    TaskPriority local_44;
    _lambda___1_ local_40;
    bool local_39;
    eastl local_38;

    char* local_78 = "Flush";
    eastl::destruct<oldscape::highlight::NpcUID*>(&local_38);
    vector<std::future<void>, BucketAllocatorEASTL> local_90;
    uint8_t* this_00 = &field_8;
    unsigned long uVar1 = this_00->size();
    local_90.reserve(uVar1);
    vector<eastl::pair<int, int>>* local_70 = (vector<eastl::pair<int, int>>*)this_00;
    long lVar2 = this_00->size();
    if (lVar2 != 0) {
        local_68 = (unique_ptr<std::mutex[]>*)&field_40;
        local_60 = (vector<std::deque<ThreadPool::TaskInfo>>*)&field_96;
        local_58 = &field_192;
        uVar1 = 0;
        do {
            std::allocate_shared<std::packaged_task<void()>, SafeBucketAllocatorSTL<std::packaged_task<void()>>,
                                 std::allocator_arg_t const&, SafeBucketAllocatorSTL<std::packaged_task<void()>>&,
                                 ThreadPool::RunOnceOnAllThreads<GraphicsApp::MainShutdown()::__0>(
                                     char const*, GraphicsApp::MainShutdown()::__0&&)::_lambda() _1_&,
                                 void>((SafeBucketAllocatorSTL<std::packaged_task<void_()> _>*)local_b0, &local_38,
                                       (SafeBucketAllocatorSTL<std::packaged_task<void_()> _>*)&local_38, &local_40);
            (*local_b0).operator->();
            local_a0->get_future();
            local_90.emplace_back<std::future<void>>(*local_a0);
            mutex = (mutex*)(*local_68)[uVar1];
            local_50 = std::scoped_lock(*mutex);
            if ((char)field_0 != '\0') {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h",
                    214, "Cannot add tasks to the threadpool after stopping it");
            }
            this_01 = (deque<ThreadPool::TaskInfo>*)(*local_60)[uVar1];
            new (local_a0) std::shared_ptr<std::packaged_task<void()>>(*local_b0);
            local_44 = 1;
            local_39 = false;
            std::deque<ThreadPool::TaskInfo>::emplace_back<
                ThreadPool::RunOnceOnAllThreads<GraphicsApp::MainShutdown()::__0>(
                    char const*, GraphicsApp::MainShutdown()::__0&&)::_lambda() _2_,
                char const*&, ThreadPool::TaskPriority, bool>(this_01, (_lambda___2_*)local_a0, &local_78, &local_44,
                                                              &local_39);
            RunOnceOnAllThreads<GraphicsApp::MainShutdown()::$_0>(char const*, GraphicsApp::MainShutdown()::$_0&&)::{
                lambda() #2
            }
            ::~RunOnceOnAllThreads((_lambda___2_*)local_a0);
            std::__atomic_base<unsigned int, true>::operator++();
            uVar1 = uVar1 + 1;
            uVar3 = local_70->size();
        } while (uVar1 < uVar3);
    }
    std::condition_variable::notify_all();
    lVar2 = local_90.HeapBeginPtr();
    long lVar4 = local_90.end();
    for (; lVar2 != lVar4; lVar2 = lVar2 + 8) {
        std::future<void>::get();
    }
}

// 0x100b08600
void ThreadPool::RunOnceOnAllThreads<GraphicsApp::MainShutdown()::$_0>(char const*,
                                                                       GraphicsApp::MainShutdown()::$_0&&)::{
    lambda() #2
}
::~RunOnceOnAllThreads() {
    ~RunOnceOnAllThreads(this);
}

// 0x100b097b0
void ThreadPool::RunOnceOnAllThreads<GraphicsApp::MainShutdown()::$_0>(char const*,
                                                                       GraphicsApp::MainShutdown()::$_0&&)::{
    lambda() #2
}
::RunOnceOnAllThreads({ lambda() #2 } && arg1) {
    RunOnceOnAllThreads(arg1);
}

// 0x100b097d0
void ThreadPool::RunOnceOnAllThreads<GraphicsApp::MainShutdown()::$_0>(char const*,
                                                                       GraphicsApp::MainShutdown()::$_0&&)::{
    lambda() #2
}
::RunOnceOnAllThreads({ lambda() #2 } && arg1) {
    new (this) std::shared_ptr<std::packaged_task<void()>>(arg1);
}

// 0x100b09f60
void ThreadPool::RunOnceOnAllThreads<GraphicsApp::MainShutdown()::$_0>(char const*,
                                                                       GraphicsApp::MainShutdown()::$_0&&)::{
    lambda() #2
}
::RunOnceOnAllThreads(const { lambda() #2 } & arg1) {
    RunOnceOnAllThreads(arg1);
}

// 0x100b09f80
void ThreadPool::RunOnceOnAllThreads<GraphicsApp::MainShutdown()::$_0>(char const*,
                                                                       GraphicsApp::MainShutdown()::$_0&&)::{
    lambda() #2
}
::RunOnceOnAllThreads(const { lambda() #2 } & arg1) {
    new (this) std::shared_ptr<std::packaged_task<void()>>(arg1);
}

// 0x100b0a1f0
void ThreadPool::RunOnceOnAllThreads<GraphicsApp::MainShutdown()::$_0>(char const*,
                                                                       GraphicsApp::MainShutdown()::$_0&&)::{
    lambda() #2
}
::operator()() const {
    packaged_task<void()>* this_00;

    this_00 = (packaged_task<void()>*)**this;
    std::packaged_task<void()>::operator()(this_00);
}

// 0x100b0a3c0
void ThreadPool::RunOnceOnAllThreads<GraphicsApp::MainShutdown()::$_0>(char const*,
                                                                       GraphicsApp::MainShutdown()::$_0&&)::{
    lambda() #2
}
::~RunOnceOnAllThreads() {
    ~shared_ptr();
}

// 0x100b1f110
std::future<std::invoke_result<FileSystem::DeleteDirectory(Filename const&)::$_0>::type>
ThreadPool::AddTask<FileSystem::DeleteDirectory(Filename const&)::$_0>(
    const char* str, FileSystem::DeleteDirectory(Filename const&)::$_0&& arg2) {
    std::future<std::invoke_result<FileSystem::DeleteDirectory(Filename const&)::$_0>::type> result;
    packaged_task<int()>* this;
    mutex* mutex;
    SafeBucketAllocatorSTL<std::packaged_task<int_()> _> local_198[16];
    eastl local_178;
    long local_38;

    char* local_1a0 = "DeleteDirectory";
    eastl::destruct<oldscape::highlight::NpcUID*>(&local_178);
    std::bind<FileSystem::DeleteDirectory(Filename const&)::__0>(&local_170);
    std::allocate_shared<std::packaged_task<int()>, SafeBucketAllocatorSTL<std::packaged_task<int()>>,
                         std::allocator_arg_t const&, SafeBucketAllocatorSTL<std::packaged_task<int()>>&,
                         std::__bind<FileSystem::DeleteDirectory(Filename const&)::__0>, void>(
        local_198, &local_178, (SafeBucketAllocatorSTL<std::packaged_task<int_()> _>*)&local_178,
        (__bind<FileSystem::DeleteDirectory(Filename const&)::__0>*)&local_170);
    this = (packaged_task<int()>*)(*local_198).operator->();
    result = get_future();
    unsigned int uVar1 = (*((str + 196)))++;
    unsigned long uVar2 = ((str + 8))->size();
    mutex = (mutex*)(*((unique_ptr<std::mutex[]>*)(str + 40)))[(unsigned long)uVar1 % uVar2];
    scoped_lock<std::mutex> local_188(*mutex);
    if (*str != '\0') {
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h",
                        166, "Cannot add tasks to the threadpool after stopping it");
    }
    deque<ThreadPool::TaskInfo>* this_00 = (deque<ThreadPool::TaskInfo>*)(*((str + 96)))[(unsigned long)uVar1 % uVar2];
    __0 local_170() >> (*local_198);
    TaskPriority local_17c = 1;
    std::deque<ThreadPool::TaskInfo>::emplace_back<
        ThreadPool::AddTask<FileSystem::DeleteDirectory(Filename const&)::__0>(
            char const*, FileSystem::DeleteDirectory(*(Filename const&))::__0&&)::_lambda() _1_,
        char const*&, ThreadPool::TaskPriority>(this_00, &local_170, &local_1a0, &local_17c);
    AddTask<FileSystem::DeleteDirectory(Filename const&)::$_0>(
        char const*, FileSystem::DeleteDirectory(*(Filename const&))::$_0&&)::{
        lambda() #1
    }
    ::~future(&local_170);
    std::__atomic_base<unsigned int, true>::operator++();
    std::condition_variable::notify_one();
    return result;
}

// 0x100b258d0
void ThreadPool::AddTask<FileSystem::DeleteDirectory(Filename const&)::$_0>(
    char const*, FileSystem::DeleteDirectory(Filename const&)::$_0&&)::{
    lambda() #1
}
::~future() {
    ~future(this);
}

// 0x100b27490
void ThreadPool::AddTask<FileSystem::DeleteDirectory(Filename const&)::$_0>(
    char const*, FileSystem::DeleteDirectory(Filename const&)::$_0&&)::{
    lambda() #1
}
::future({ lambda() #1 } && arg1) {
    future(arg1);
}

// 0x100b274b0
void ThreadPool::AddTask<FileSystem::DeleteDirectory(Filename const&)::$_0>(
    char const*, FileSystem::DeleteDirectory(Filename const&)::$_0&&)::{
    lambda() #1
}
::future({ lambda() #1 } && arg1) {
    new (this) std::shared_ptr<std::packaged_task<int()>>(arg1);
}

// 0x100b27c40
void ThreadPool::AddTask<FileSystem::DeleteDirectory(Filename const&)::$_0>(
    char const*, FileSystem::DeleteDirectory(Filename const&)::$_0&&)::{
    lambda() #1
}
::future(const { lambda() #1 } & arg1) {
    future(arg1);
}

// 0x100b27c60
void ThreadPool::AddTask<FileSystem::DeleteDirectory(Filename const&)::$_0>(
    char const*, FileSystem::DeleteDirectory(Filename const&)::$_0&&)::{
    lambda() #1
}
::future(const { lambda() #1 } & arg1) {
    new (this) std::shared_ptr<std::packaged_task<int()>>(arg1);
}

// 0x100b27ed0
void ThreadPool::AddTask<FileSystem::DeleteDirectory(Filename const&)::$_0>(
    char const*, FileSystem::DeleteDirectory(Filename const&)::$_0&&)::{
    lambda() #1
}
::operator()() const {
    packaged_task<int()>* this_00;

    this_00 = (packaged_task<int()>*)**this;
    std::packaged_task<int()>::operator()(this_00);
}

// 0x100b280c0
void ThreadPool::AddTask<FileSystem::DeleteDirectory(Filename const&)::$_0>(
    char const*, FileSystem::DeleteDirectory(Filename const&)::$_0&&)::{
    lambda() #1
}
::~future() {
    ~shared_ptr();
}

// 0x100beee90
std::future<std::invoke_result<render::ShaderProgram::CreateFromSourceString()::$_16>::type>
ThreadPool::AddTask<render::ShaderProgram::CreateFromSourceString()::$_16>(
    const char* str, render::ShaderProgram::CreateFromSourceString()::$_16&& arg2) {
    std::future<std::invoke_result<render::ShaderProgram::CreateFromSourceString()::$_16>::type> result;
    mutex* mutex;
    deque<ThreadPool::TaskInfo>* deque;
    SafeBucketAllocatorSTL<std::packaged_task<void_()> _> local_60[16];
    uint64_t local_50[2];
    eastl local_30;

    char* local_68 = "CreateFromSourceString";
    eastl::destruct<oldscape::highlight::NpcUID*>(&local_30);
    local_50[0] = std::bind<render::ShaderProgram::CreateFromSourceString()::__16>(arg2);
    std::allocate_shared<std::packaged_task<void()>, SafeBucketAllocatorSTL<std::packaged_task<void()>>,
                         std::allocator_arg_t const&, SafeBucketAllocatorSTL<std::packaged_task<void()>>&,
                         std::__bind<render::ShaderProgram::CreateFromSourceString()::__16>, void>(
        local_60, &local_30, (SafeBucketAllocatorSTL<std::packaged_task<void_()> _>*)&local_30,
        (__bind<render::ShaderProgram::CreateFromSourceString()::__16>*)local_50);
    int arg1 = (*local_60).operator->();
    result.get_future();
    unsigned int uVar1 = (*((str + 196)))++;
    unsigned long uVar2 = ((str + 8))->size();
    mutex = (mutex*)(*((unique_ptr<std::mutex[]>*)(str + 40)))[(unsigned long)uVar1 % uVar2];
    scoped_lock<std::mutex> local_40(*mutex);
    if (*str != '\0') {
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h",
                        166, "Cannot add tasks to the threadpool after stopping it");
    }
    deque = (deque<ThreadPool::TaskInfo>*)(*((str + 96)))[(unsigned long)uVar1 % uVar2];
    new (local_50) std::shared_ptr<std::packaged_task<void()>>(*local_60);
    TaskPriority local_34 = 1;
    std::deque<ThreadPool::TaskInfo>::emplace_back<
        ThreadPool::AddTask<render::ShaderProgram::CreateFromSourceString()::__16>(
            char const*, render::ShaderProgram::CreateFromSourceString()::__16&&)::_lambda() _1_,
        char const*&, ThreadPool::TaskPriority>(deque, (_lambda___1_*)local_50, &local_68, &local_34);
    AddTask<render::ShaderProgram::CreateFromSourceString()::$_16>(
        char const*, render::ShaderProgram::CreateFromSourceString()::$_16&&)::{
        lambda() #1
    }
    ::~future((_lambda___1_*)local_50);
    std::__atomic_base<unsigned int, true>::operator++();
    std::condition_variable::notify_one();
    return result;
}

// 0x100bf2280
std::future<std::invoke_result<render::ShaderProgram::PreRender()::$_43>::type>
ThreadPool::AddTask<render::ShaderProgram::PreRender()::$_43>(const char* str,
                                                              render::ShaderProgram::PreRender()::$_43&& arg2) {
    std::future<std::invoke_result<render::ShaderProgram::PreRender()::$_43>::type> result;
    mutex* mutex;
    deque<ThreadPool::TaskInfo>* deque;
    SafeBucketAllocatorSTL<std::packaged_task<void_()> _> local_60[16];
    uint64_t local_50[2];
    eastl local_30;

    char* local_68 = "PreRender";
    eastl::destruct<oldscape::highlight::NpcUID*>(&local_30);
    local_50[0] = std::bind<render::ShaderProgram::PreRender()::__43>(arg2);
    std::allocate_shared<std::packaged_task<void()>, SafeBucketAllocatorSTL<std::packaged_task<void()>>,
                         std::allocator_arg_t const&, SafeBucketAllocatorSTL<std::packaged_task<void()>>&,
                         std::__bind<render::ShaderProgram::PreRender()::__43>, void>(
        local_60, &local_30, (SafeBucketAllocatorSTL<std::packaged_task<void_()> _>*)&local_30,
        (__bind<render::ShaderProgram::PreRender()::__43>*)local_50);
    int arg1 = (*local_60).operator->();
    result.get_future();
    unsigned int uVar1 = (*((str + 196)))++;
    unsigned long uVar2 = ((str + 8))->size();
    mutex = (mutex*)(*((unique_ptr<std::mutex[]>*)(str + 40)))[(unsigned long)uVar1 % uVar2];
    scoped_lock<std::mutex> local_40(*mutex);
    if (*str != '\0') {
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h",
                        166, "Cannot add tasks to the threadpool after stopping it");
    }
    deque = (deque<ThreadPool::TaskInfo>*)(*((str + 96)))[(unsigned long)uVar1 % uVar2];
    new (local_50) std::shared_ptr<std::packaged_task<void()>>(*local_60);
    TaskPriority local_34 = 1;
    std::deque<ThreadPool::TaskInfo>::emplace_back<ThreadPool::AddTask<render::ShaderProgram::PreRender()::__43>(
                                                       char const*,
                                                       render::ShaderProgram::PreRender()::__43&&)::_lambda() _1_,
                                                   char const*&, ThreadPool::TaskPriority>(
        deque, (_lambda___1_*)local_50, &local_68, &local_34);
    AddTask<render::ShaderProgram::PreRender()::$_43>(char const*, render::ShaderProgram::PreRender()::$_43&&)::{
        lambda() #1
    }
    ::~future((_lambda___1_*)local_50);
    std::__atomic_base<unsigned int, true>::operator++();
    std::condition_variable::notify_one();
    return result;
}

// 0x100c015e0
void ThreadPool::AddTask<render::ShaderProgram::CreateFromSourceString()::$_16>(
    char const*, render::ShaderProgram::CreateFromSourceString()::$_16&&)::{
    lambda() #1
}
::~future() {
    ~future(this);
}

// 0x100c027f0
void ThreadPool::AddTask<render::ShaderProgram::CreateFromSourceString()::$_16>(
    char const*, render::ShaderProgram::CreateFromSourceString()::$_16&&)::{
    lambda() #1
}
::future({ lambda() #1 } && arg1) {
    future(arg1);
}

// 0x100c02810
void ThreadPool::AddTask<render::ShaderProgram::CreateFromSourceString()::$_16>(
    char const*, render::ShaderProgram::CreateFromSourceString()::$_16&&)::{
    lambda() #1
}
::future({ lambda() #1 } && arg1) {
    new (this) std::shared_ptr<std::packaged_task<void()>>(arg1);
}

// 0x100c02fa0
void ThreadPool::AddTask<render::ShaderProgram::CreateFromSourceString()::$_16>(
    char const*, render::ShaderProgram::CreateFromSourceString()::$_16&&)::{
    lambda() #1
}
::future(const { lambda() #1 } & arg1) {
    future(arg1);
}

// 0x100c02fc0
void ThreadPool::AddTask<render::ShaderProgram::CreateFromSourceString()::$_16>(
    char const*, render::ShaderProgram::CreateFromSourceString()::$_16&&)::{
    lambda() #1
}
::future(const { lambda() #1 } & arg1) {
    new (this) std::shared_ptr<std::packaged_task<void()>>(arg1);
}

// 0x100c03230
void ThreadPool::AddTask<render::ShaderProgram::CreateFromSourceString()::$_16>(
    char const*, render::ShaderProgram::CreateFromSourceString()::$_16&&)::{
    lambda() #1
}
::operator()() const {
    packaged_task<void()>* this_00;

    this_00 = (packaged_task<void()>*)**this;
    std::packaged_task<void()>::operator()(this_00);
}

// 0x100c03400
void ThreadPool::AddTask<render::ShaderProgram::CreateFromSourceString()::$_16>(
    char const*, render::ShaderProgram::CreateFromSourceString()::$_16&&)::{
    lambda() #1
}
::~future() {
    ~shared_ptr();
}

// 0x100c09dc0
void ThreadPool::AddTask<render::ShaderProgram::PreRender()::$_43>(char const*,
                                                                   render::ShaderProgram::PreRender()::$_43&&)::{
    lambda() #1
}
::~future() {
    ~future(this);
}

// 0x100c0a200
void ThreadPool::AddTask<render::ShaderProgram::PreRender()::$_43>(char const*,
                                                                   render::ShaderProgram::PreRender()::$_43&&)::{
    lambda() #1
}
::future({ lambda() #1 } && arg1) {
    future(arg1);
}

// 0x100c0a220
void ThreadPool::AddTask<render::ShaderProgram::PreRender()::$_43>(char const*,
                                                                   render::ShaderProgram::PreRender()::$_43&&)::{
    lambda() #1
}
::future({ lambda() #1 } && arg1) {
    new (this) std::shared_ptr<std::packaged_task<void()>>(arg1);
}

// 0x100c0a940
void ThreadPool::AddTask<render::ShaderProgram::PreRender()::$_43>(char const*,
                                                                   render::ShaderProgram::PreRender()::$_43&&)::{
    lambda() #1
}
::future(const { lambda() #1 } & arg1) {
    future(arg1);
}

// 0x100c0a960
void ThreadPool::AddTask<render::ShaderProgram::PreRender()::$_43>(char const*,
                                                                   render::ShaderProgram::PreRender()::$_43&&)::{
    lambda() #1
}
::future(const { lambda() #1 } & arg1) {
    new (this) std::shared_ptr<std::packaged_task<void()>>(arg1);
}

// 0x100c0abd0
void ThreadPool::AddTask<render::ShaderProgram::PreRender()::$_43>(char const*,
                                                                   render::ShaderProgram::PreRender()::$_43&&)::{
    lambda() #1
}
::operator()() const {
    packaged_task<void()>* this_00;

    this_00 = (packaged_task<void()>*)**this;
    std::packaged_task<void()>::operator()(this_00);
}

// 0x100c0ac00
void ThreadPool::AddTask<render::ShaderProgram::PreRender()::$_43>(char const*,
                                                                   render::ShaderProgram::PreRender()::$_43&&)::{
    lambda() #1
}
::~future() {
    ~shared_ptr();
}

// 0x100c2b8e0
void ThreadPool::RunOnceOnAllThreads<render::RenderDevice::~RenderDevice()::$_106>(
    const char* str, render::RenderDevice::~RenderDevice()::$_106&& arg2) {
    vector<eastl::pair<int, int>>* vector;
    unsigned long uVar3;
    mutex* mutex;
    deque<ThreadPool::TaskInfo>* this_00;
    shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>> local_b0[16];
    packaged_task<void()> local_a0[16];
    unique_ptr<std::mutex[]>* local_60;
    vector<std::deque<ThreadPool::TaskInfo>>* local_58;
    char* local_50;
    scoped_lock<std::mutex> local_48;
    TaskPriority local_40;
    bool local_39;
    eastl local_38;

    char* local_78 = "~RenderDevice";
    eastl::destruct<oldscape::highlight::NpcUID*>(&local_38);
    vector<std::future<void>, BucketAllocatorEASTL> local_90;
    vector = (vector<eastl::pair<int, int>>*)(str + 8);
    unsigned long uVar1 = vector->size();
    local_90.reserve(uVar1);
    long local_70 = arg2.field_0;
    vector<eastl::pair<int, int>>* local_68 = vector;
    long lVar2 = vector->size();
    if (lVar2 != 0) {
        local_60 = (unique_ptr<std::mutex[]>*)(str + 40);
        local_58 = (vector<std::deque<ThreadPool::TaskInfo>>*)(str + 96);
        local_50 = str + 192;
        uVar1 = 0;
        do {
            std::allocate_shared<std::packaged_task<void()>, SafeBucketAllocatorSTL<std::packaged_task<void()>>,
                                 std::allocator_arg_t const&, SafeBucketAllocatorSTL<std::packaged_task<void()>>&,
                                 ThreadPool::RunOnceOnAllThreads<render::RenderDevice::~RenderDevice()::__106>(
                                     char const*, render::RenderDevice::~RenderDevice()::__106&&)::_lambda() _1_&,
                                 void>((SafeBucketAllocatorSTL<std::packaged_task<void_()> _>*)local_b0, &local_38,
                                       (SafeBucketAllocatorSTL<std::packaged_task<void_()> _>*)&local_38,
                                       (_lambda___1_*)&local_70);
            (*local_b0).operator->();
            local_a0->get_future();
            local_90.emplace_back<std::future<void>>(*local_a0);
            mutex = (mutex*)(*local_60)[uVar1];
            local_48 = std::scoped_lock(*mutex);
            if (*str != '\0') {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h",
                    214, "Cannot add tasks to the threadpool after stopping it");
            }
            this_00 = (deque<ThreadPool::TaskInfo>*)(*local_58)[uVar1];
            new (local_a0) std::shared_ptr<std::packaged_task<void()>>(*local_b0);
            local_40 = 1;
            local_39 = false;
            std::deque<ThreadPool::TaskInfo>::emplace_back<
                ThreadPool::RunOnceOnAllThreads<render::RenderDevice::~RenderDevice()::__106>(
                    char const*, render::RenderDevice::~RenderDevice()::__106&&)::_lambda() _2_,
                char const*&, ThreadPool::TaskPriority, bool>(this_00, (_lambda___2_*)local_a0, &local_78, &local_40,
                                                              &local_39);
            RunOnceOnAllThreads<render::RenderDevice::~RenderDevice()::$_106>(
                char const*, render::RenderDevice::~RenderDevice()::$_106&&)::{
                lambda() #2
            }
            ::~RunOnceOnAllThreads((_lambda___2_*)local_a0);
            std::__atomic_base<unsigned int, true>::operator++();
            uVar1 = uVar1 + 1;
            uVar3 = local_68->size();
        } while (uVar1 < uVar3);
    }
    std::condition_variable::notify_all();
    lVar2 = local_90.HeapBeginPtr();
    long lVar4 = local_90.end();
    for (; lVar2 != lVar4; lVar2 = lVar2 + 8) {
        std::future<void>::get();
    }
}

// 0x100c2c400
void ThreadPool::RunOnceOnAllThreadsAsync<render::RenderDevice::CreateSecondaryRenderContexts()::$_108>(
    const char* str, render::RenderDevice::CreateSecondaryRenderContexts()::$_108&& arg2) {
    unsigned long uVar2;
    mutex* mutex;
    deque<ThreadPool::TaskInfo>* deque;
    unsigned long arg1;
    __108 local_b8;
    shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>> local_98[16];
    shared_ptr<std::packaged_task<void()>> local_88[16];
    scoped_lock<std::mutex> local_70;
    unique_ptr<std::mutex[]>* local_60;
    vector<std::deque<ThreadPool::TaskInfo>>* local_58;
    char* local_50;
    char* local_48;
    TaskPriority local_40;
    bool local_39;
    eastl local_38;

    char* local_78 = "CreateSecondaryRenderContexts";
    eastl::destruct<oldscape::highlight::NpcUID*>(&local_38);
    std::bind<render::RenderDevice::CreateSecondaryRenderContexts()::__108>(&local_b8);
    vector<eastl::pair<int, int>>* local_68 = (vector<eastl::pair<int, int>>*)(str + 8);
    long lVar1 = local_68->size();
    if (lVar1 != 0) {
        local_60 = (unique_ptr<std::mutex[]>*)(str + 40);
        local_58 = (vector<std::deque<ThreadPool::TaskInfo>>*)(str + 96);
        local_50 = str + 192;
        arg1 = 0;
        local_48 = str;
        do {
            std::allocate_shared<std::packaged_task<void()>, SafeBucketAllocatorSTL<std::packaged_task<void()>>,
                                 std::allocator_arg_t const&, SafeBucketAllocatorSTL<std::packaged_task<void()>>&,
                                 std::__bind<render::RenderDevice::CreateSecondaryRenderContexts()::__108>&, void>(
                (SafeBucketAllocatorSTL<std::packaged_task<void_()> _>*)local_98, &local_38,
                (SafeBucketAllocatorSTL<std::packaged_task<void_()> _>*)&local_38,
                (__bind<render::RenderDevice::CreateSecondaryRenderContexts()::__108>*)&local_b8);
            mutex = (mutex*)(*local_60)[arg1];
            local_70 = std::scoped_lock(*mutex);
            if (*str != '\0') {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h",
                    258, "Cannot add tasks to the threadpool after stopping it");
            }
            deque = (deque<ThreadPool::TaskInfo>*)(*local_58)[arg1];
            new (local_88) std::shared_ptr<std::packaged_task<void()>>(*local_98);
            local_40 = 1;
            local_39 = false;
            std::deque<ThreadPool::TaskInfo>::emplace_back<
                ThreadPool::RunOnceOnAllThreadsAsync<render::RenderDevice::CreateSecondaryRenderContexts()::__108>(
                    char const*, render::RenderDevice::CreateSecondaryRenderContexts()::__108&&)::_lambda() _1_,
                char const*&, ThreadPool::TaskPriority, bool>(deque, (_lambda___1_*)local_88, &local_78, &local_40,
                                                              &local_39);
            RunOnceOnAllThreadsAsync<render::RenderDevice::CreateSecondaryRenderContexts()::$_108>(
                char const*, render::RenderDevice::CreateSecondaryRenderContexts()::$_108&&)::{
                lambda() #1
            }
            ::~RunOnceOnAllThreadsAsync((_lambda___1_*)local_88);
            std::__atomic_base<unsigned int, true>::operator++();
            str = local_48;
            arg1 = arg1 + 1;
            uVar2 = local_68->size();
        } while (arg1 < uVar2);
    }
    std::condition_variable::notify_all();
}

// 0x100c2c5c0
void ThreadPool::RunOnceOnAllThreads<render::RenderDevice::DestroySecondaryRenderContexts()::$_109>(
    const char* str, render::RenderDevice::DestroySecondaryRenderContexts()::$_109&& arg2) {
    vector<eastl::pair<int, int>>* vector;
    unsigned long uVar3;
    mutex* mutex;
    deque<ThreadPool::TaskInfo>* this_00;
    shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>> local_b0[16];
    packaged_task<void()> local_a0[16];
    unique_ptr<std::mutex[]>* local_60;
    vector<std::deque<ThreadPool::TaskInfo>>* local_58;
    char* local_50;
    scoped_lock<std::mutex> local_48;
    TaskPriority local_40;
    bool local_39;
    eastl local_38;

    char* local_78 = "DestroySecondaryRenderContexts";
    eastl::destruct<oldscape::highlight::NpcUID*>(&local_38);
    vector<std::future<void>, BucketAllocatorEASTL> local_90;
    vector = (vector<eastl::pair<int, int>>*)(str + 8);
    unsigned long uVar1 = vector->size();
    local_90.reserve(uVar1);
    RenderDevice* local_70 = arg2.field_0;
    vector<eastl::pair<int, int>>* local_68 = vector;
    long lVar2 = vector->size();
    if (lVar2 != 0) {
        local_60 = (unique_ptr<std::mutex[]>*)(str + 40);
        local_58 = (vector<std::deque<ThreadPool::TaskInfo>>*)(str + 96);
        local_50 = str + 192;
        uVar1 = 0;
        do {
            std::allocate_shared<
                std::packaged_task<void()>, SafeBucketAllocatorSTL<std::packaged_task<void()>>,
                std::allocator_arg_t const&, SafeBucketAllocatorSTL<std::packaged_task<void()>>&,
                ThreadPool::RunOnceOnAllThreads<render::RenderDevice::DestroySecondaryRenderContexts()::__109>(
                    char const*, render::RenderDevice::DestroySecondaryRenderContexts()::__109&&)::_lambda() _1_&,
                void>((SafeBucketAllocatorSTL<std::packaged_task<void_()> _>*)local_b0, &local_38,
                      (SafeBucketAllocatorSTL<std::packaged_task<void_()> _>*)&local_38, (_lambda___1_*)&local_70);
            (*local_b0).operator->();
            local_a0->get_future();
            local_90.emplace_back<std::future<void>>(*local_a0);
            mutex = (mutex*)(*local_60)[uVar1];
            local_48 = std::scoped_lock(*mutex);
            if (*str != '\0') {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h",
                    214, "Cannot add tasks to the threadpool after stopping it");
            }
            this_00 = (deque<ThreadPool::TaskInfo>*)(*local_58)[uVar1];
            new (local_a0) std::shared_ptr<std::packaged_task<void()>>(*local_b0);
            local_40 = 1;
            local_39 = false;
            std::deque<ThreadPool::TaskInfo>::emplace_back<
                ThreadPool::RunOnceOnAllThreads<render::RenderDevice::DestroySecondaryRenderContexts()::__109>(
                    char const*, render::RenderDevice::DestroySecondaryRenderContexts()::__109&&)::_lambda() _2_,
                char const*&, ThreadPool::TaskPriority, bool>(this_00, (_lambda___2_*)local_a0, &local_78, &local_40,
                                                              &local_39);
            RunOnceOnAllThreads<render::RenderDevice::DestroySecondaryRenderContexts()::$_109>(
                char const*, render::RenderDevice::DestroySecondaryRenderContexts()::$_109&&)::{
                lambda() #2
            }
            ::~RunOnceOnAllThreads((_lambda___2_*)local_a0);
            std::__atomic_base<unsigned int, true>::operator++();
            uVar1 = uVar1 + 1;
            uVar3 = local_68->size();
        } while (uVar1 < uVar3);
    }
    std::condition_variable::notify_all();
    lVar2 = local_90.HeapBeginPtr();
    long lVar4 = local_90.end();
    for (; lVar2 != lVar4; lVar2 = lVar2 + 8) {
        std::future<void>::get();
    }
}

// 0x100c2c8e0
void ThreadPool::RunOnceOnAllThreads<render::RenderDevice::RunWithThreadPoolRenderContexts(
    fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_110>(
    const char* str,
    render::RenderDevice::RunWithThreadPoolRenderContexts(
        fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_110&&
        arg2) {
    vector<eastl::pair<int, int>>* vector;
    unsigned long uVar3;
    mutex* mutex;
    deque<ThreadPool::TaskInfo>* this_00;
    shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>> local_b0[16];
    packaged_task<void()> local_a0[16];
    unique_ptr<std::mutex[]>* local_60;
    vector<std::deque<ThreadPool::TaskInfo>>* local_58;
    char* local_50;
    scoped_lock<std::mutex> local_48;
    TaskPriority local_40;
    bool local_39;
    eastl local_38;

    char* local_78 = "RunWithThreadPoolRenderContexts";
    eastl::destruct<oldscape::highlight::NpcUID*>(&local_38);
    vector<std::future<void>, BucketAllocatorEASTL> local_90;
    vector = (vector<eastl::pair<int, int>>*)(str + 8);
    unsigned long uVar1 = vector->size();
    local_90.reserve(uVar1);
    uint64_t local_70 = *(uint64_t*)arg2;
    vector<eastl::pair<int, int>>* local_68 = vector;
    long lVar2 = vector->size();
    if (lVar2 != 0) {
        local_60 = (unique_ptr<std::mutex[]>*)(str + 40);
        local_58 = (vector<std::deque<ThreadPool::TaskInfo>>*)(str + 96);
        local_50 = str + 192;
        uVar1 = 0;
        do {
            std::allocate_shared<
                std::packaged_task<void()>, SafeBucketAllocatorSTL<std::packaged_task<void()>>,
                std::allocator_arg_t const&, SafeBucketAllocatorSTL<std::packaged_task<void()>>&,
                ThreadPool::RunOnceOnAllThreads<render::RenderDevice::RunWithThreadPoolRenderContexts(
                    fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                            (fixedfunction::Methods)0> const&)::__110>(
                    char const*, render::RenderDevice::RunWithThreadPoolRenderContexts(
                                     *(fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                                               (fixedfunction::Methods)0> const&))::__110&&)::_lambda()
                    _1_&,
                void>((SafeBucketAllocatorSTL<std::packaged_task<void_()> _>*)local_b0, &local_38,
                      (SafeBucketAllocatorSTL<std::packaged_task<void_()> _>*)&local_38, (_lambda___1_*)&local_70);
            (*local_b0).operator->();
            local_a0->get_future();
            local_90.emplace_back<std::future<void>>(*local_a0);
            mutex = (mutex*)(*local_60)[uVar1];
            local_48 = std::scoped_lock(*mutex);
            if (*str != '\0') {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h",
                    214, "Cannot add tasks to the threadpool after stopping it");
            }
            this_00 = (deque<ThreadPool::TaskInfo>*)(*local_58)[uVar1];
            new (local_a0) std::shared_ptr<std::packaged_task<void()>>(*local_b0);
            local_40 = 1;
            local_39 = false;
            std::deque<ThreadPool::TaskInfo>::emplace_back<
                ThreadPool::RunOnceOnAllThreads<render::RenderDevice::RunWithThreadPoolRenderContexts(
                    fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                            (fixedfunction::Methods)0> const&)::__110>(
                    char const*, render::RenderDevice::RunWithThreadPoolRenderContexts(
                                     *(fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                                               (fixedfunction::Methods)0> const&))::__110&&)::_lambda()
                    _2_,
                char const*&, ThreadPool::TaskPriority, bool>(this_00, (_lambda___2_*)local_a0, &local_78, &local_40,
                                                              &local_39);
            RunOnceOnAllThreads<render::RenderDevice::RunWithThreadPoolRenderContexts(
                fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                        (fixedfunction::Methods)0> const&)::$_110>(
                char const*, render::RenderDevice::RunWithThreadPoolRenderContexts(
                                 *(fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                                           (fixedfunction::Methods)0> const&))::$_110&&)::{
                lambda() #2
            }
            ::~RunOnceOnAllThreads((_lambda___2_*)local_a0);
            std::__atomic_base<unsigned int, true>::operator++();
            uVar1 = uVar1 + 1;
            uVar3 = local_68->size();
        } while (uVar1 < uVar3);
    }
    std::condition_variable::notify_all();
    lVar2 = local_90.HeapBeginPtr();
    long lVar4 = local_90.end();
    for (; lVar2 != lVar4; lVar2 = lVar2 + 8) {
        std::future<void>::get();
    }
}

// 0x100c2ccb0
std::future<std::invoke_result<render::RenderDevice::RunOnThreadPoolRenderContext(
    char const*,
    fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_111>::type>
ThreadPool::AddTask<render::RenderDevice::RunOnThreadPoolRenderContext(
    char const*,
    fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_111>(
    const char* str, render::RenderDevice::RunOnThreadPoolRenderContext(
                         char const*, fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                                              (fixedfunction::Methods)0> const&)::$_111&& arg2) {
    std::future<std::invoke_result<render::RenderDevice::RunOnThreadPoolRenderContext(
        char const*, fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                             (fixedfunction::Methods)0> const&)::$_111>::type>
        result;
    mutex* mutex;
    SafeBucketAllocatorSTL<std::packaged_task<void_()> _> local_110[16];
    eastl local_f0;
    long local_38;

    char* local_118 = str;
    eastl::destruct<oldscape::highlight::NpcUID*>(&local_f0);
    std::bind<render::RenderDevice::RunOnThreadPoolRenderContext(
        char const*,
        fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::__111>(
        &local_e8);
    std::allocate_shared<std::packaged_task<void()>, SafeBucketAllocatorSTL<std::packaged_task<void()>>,
                         std::allocator_arg_t const&, SafeBucketAllocatorSTL<std::packaged_task<void()>>&,
                         std::__bind<render::RenderDevice::RunOnThreadPoolRenderContext(
                             char const*, fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                                                  (fixedfunction::Methods)0> const&)::__111>,
                         void>(
        local_110, &local_f0, (SafeBucketAllocatorSTL<std::packaged_task<void_()> _>*)&local_f0,
        (__bind<render::RenderDevice::RunOnThreadPoolRenderContext(
             char const*, fixedfunction::function<void_(render::RenderContext&), _128ul, _16ul,
                                                  _(fixedfunction::Methods) 0> const&)::__111>*)&local_e8);
    int arg1 = (*local_110).operator->();
    result.get_future();
    unsigned int uVar1 = field_196++;
    unsigned long uVar2 = field_8.size();
    mutex = (mutex*)(*((unique_ptr<std::mutex[]>*)&field_40))[(unsigned long)uVar1 % uVar2];
    scoped_lock<std::mutex> local_100(*mutex);
    if ((char)field_0 != '\0') {
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h",
                        166, "Cannot add tasks to the threadpool after stopping it");
    }
    deque<ThreadPool::TaskInfo>* this_00 = &field_96[(unsigned long)uVar1 % uVar2];
    __111 local_e8() >> (*local_110);
    TaskPriority local_f4 = 1;
    std::deque<ThreadPool::TaskInfo>::emplace_back<
        ThreadPool::AddTask<render::RenderDevice::RunOnThreadPoolRenderContext(
            char const*, fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                                 (fixedfunction::Methods)0> const&)::__111>(
            char const*, (char const*)
                             ->RunOnThreadPoolRenderContext(
                                 fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                                         (fixedfunction::Methods)0> const&)::__111&&)::_lambda() _1_,
        char const*&, ThreadPool::TaskPriority>(this_00, &local_e8, &local_118, &local_f4);
    AddTask<render::RenderDevice::RunOnThreadPoolRenderContext(
        char const*,
        fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_111>(
        char const*,
        (char const*)
            ->RunOnThreadPoolRenderContext(fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                                                   (fixedfunction::Methods)0> const&)::$_111&&)::{
        lambda() #1
    }
    ::~future(&local_e8);
    std::__atomic_base<unsigned int, true>::operator++();
    std::condition_variable::notify_one();
    return result;
}

// 0x100c55e50
void ThreadPool::RunOnceOnAllThreads<render::RenderDevice::~RenderDevice()::$_106>(
    char const*, render::RenderDevice::~RenderDevice()::$_106&&)::{
    lambda() #2
}
::~RunOnceOnAllThreads() {
    ~RunOnceOnAllThreads(this);
}

// 0x100c56750
void ThreadPool::RunOnceOnAllThreads<render::RenderDevice::~RenderDevice()::$_106>(
    char const*, render::RenderDevice::~RenderDevice()::$_106&&)::{
    lambda() #1
}
::operator()() const {
    render::RenderDevice::~RenderDevice()::$_106::operator()((__106*)this);
}

// 0x100c580d0
void ThreadPool::RunOnceOnAllThreads<render::RenderDevice::~RenderDevice()::$_106>(
    char const*, render::RenderDevice::~RenderDevice()::$_106&&)::{
    lambda() #2
}
::RunOnceOnAllThreads({ lambda() #2 } && arg1) {
    RunOnceOnAllThreads(arg1);
}

// 0x100c58100
void ThreadPool::RunOnceOnAllThreads<render::RenderDevice::~RenderDevice()::$_106>(
    char const*, render::RenderDevice::~RenderDevice()::$_106&&)::{
    lambda() #2
}
::RunOnceOnAllThreads({ lambda() #2 } && arg1) {
    new (this) std::shared_ptr<std::packaged_task<void()>>(arg1);
}

// 0x100c58890
void ThreadPool::RunOnceOnAllThreads<render::RenderDevice::~RenderDevice()::$_106>(
    char const*, render::RenderDevice::~RenderDevice()::$_106&&)::{
    lambda() #2
}
::RunOnceOnAllThreads(const { lambda() #2 } & arg1) {
    RunOnceOnAllThreads(arg1);
}

// 0x100c588b0
void ThreadPool::RunOnceOnAllThreads<render::RenderDevice::~RenderDevice()::$_106>(
    char const*, render::RenderDevice::~RenderDevice()::$_106&&)::{
    lambda() #2
}
::RunOnceOnAllThreads(const { lambda() #2 } & arg1) {
    new (this) std::shared_ptr<std::packaged_task<void()>>(arg1);
}

// 0x100c58b20
void ThreadPool::RunOnceOnAllThreads<render::RenderDevice::~RenderDevice()::$_106>(
    char const*, render::RenderDevice::~RenderDevice()::$_106&&)::{
    lambda() #2
}
::operator()() const {
    packaged_task<void()>* this_00;

    this_00 = (packaged_task<void()>*)**this;
    std::packaged_task<void()>::operator()(this_00);
}

// 0x100c58c60
ThreadPool::TaskInfo::TaskInfo(std::function<void()>&& callback, const char* str, ThreadPool::TaskPriority taskPriority,
                               bool arg4)
    : std::function<void()>(callback), field_48(taskPriority), field_52(arg4), field_56(str) {}

// 0x100c58da0
void ThreadPool::RunOnceOnAllThreads<render::RenderDevice::~RenderDevice()::$_106>(
    char const*, render::RenderDevice::~RenderDevice()::$_106&&)::{
    lambda() #2
}
::~RunOnceOnAllThreads() {
    ~shared_ptr();
}

// 0x100c59170
void ThreadPool::RunOnceOnAllThreadsAsync<render::RenderDevice::CreateSecondaryRenderContexts()::$_108>(
    char const*, render::RenderDevice::CreateSecondaryRenderContexts()::$_108&&)::{
    lambda() #1
}
::~RunOnceOnAllThreadsAsync() {
    ~RunOnceOnAllThreadsAsync(this);
}

// 0x100c598c0
void ThreadPool::RunOnceOnAllThreadsAsync<render::RenderDevice::CreateSecondaryRenderContexts()::$_108>(
    char const*, render::RenderDevice::CreateSecondaryRenderContexts()::$_108&&)::{
    lambda() #1
}
::RunOnceOnAllThreadsAsync({ lambda() #1 } && arg1) {
    RunOnceOnAllThreadsAsync(arg1);
}

// 0x100c598e0
void ThreadPool::RunOnceOnAllThreadsAsync<render::RenderDevice::CreateSecondaryRenderContexts()::$_108>(
    char const*, render::RenderDevice::CreateSecondaryRenderContexts()::$_108&&)::{
    lambda() #1
}
::RunOnceOnAllThreadsAsync({ lambda() #1 } && arg1) {
    new (this) std::shared_ptr<std::packaged_task<void()>>(arg1);
}

// 0x100c5a000
void ThreadPool::RunOnceOnAllThreadsAsync<render::RenderDevice::CreateSecondaryRenderContexts()::$_108>(
    char const*, render::RenderDevice::CreateSecondaryRenderContexts()::$_108&&)::{
    lambda() #1
}
::RunOnceOnAllThreadsAsync(const { lambda() #1 } & arg1) {
    RunOnceOnAllThreadsAsync(arg1);
}

// 0x100c5a020
void ThreadPool::RunOnceOnAllThreadsAsync<render::RenderDevice::CreateSecondaryRenderContexts()::$_108>(
    char const*, render::RenderDevice::CreateSecondaryRenderContexts()::$_108&&)::{
    lambda() #1
}
::RunOnceOnAllThreadsAsync(const { lambda() #1 } & arg1) {
    new (this) std::shared_ptr<std::packaged_task<void()>>(arg1);
}

// 0x100c5a290
void ThreadPool::RunOnceOnAllThreadsAsync<render::RenderDevice::CreateSecondaryRenderContexts()::$_108>(
    char const*, render::RenderDevice::CreateSecondaryRenderContexts()::$_108&&)::{
    lambda() #1
}
::operator()() const {
    packaged_task<void()>* this_00;

    this_00 = (packaged_task<void()>*)**this;
    std::packaged_task<void()>::operator()(this_00);
}

// 0x100c5a2c0
void ThreadPool::RunOnceOnAllThreadsAsync<render::RenderDevice::CreateSecondaryRenderContexts()::$_108>(
    char const*, render::RenderDevice::CreateSecondaryRenderContexts()::$_108&&)::{
    lambda() #1
}
::~RunOnceOnAllThreadsAsync() {
    ~shared_ptr();
}

// 0x100c5a430
void ThreadPool::RunOnceOnAllThreads<render::RenderDevice::DestroySecondaryRenderContexts()::$_109>(
    char const*, render::RenderDevice::DestroySecondaryRenderContexts()::$_109&&)::{
    lambda() #2
}
::~RunOnceOnAllThreads() {
    ~RunOnceOnAllThreads(this);
}

// 0x100c5a760
void ThreadPool::RunOnceOnAllThreads<render::RenderDevice::DestroySecondaryRenderContexts()::$_109>(
    char const*, render::RenderDevice::DestroySecondaryRenderContexts()::$_109&&)::{
    lambda() #1
}
::operator()() const {
    render::RenderDevice::DestroySecondaryRenderContexts()::$_109::operator()((__109*)this);
}

// 0x100c5a840
void ThreadPool::RunOnceOnAllThreads<render::RenderDevice::DestroySecondaryRenderContexts()::$_109>(
    char const*, render::RenderDevice::DestroySecondaryRenderContexts()::$_109&&)::{
    lambda() #2
}
::RunOnceOnAllThreads({ lambda() #2 } && arg1) {
    RunOnceOnAllThreads(arg1);
}

// 0x100c5a860
void ThreadPool::RunOnceOnAllThreads<render::RenderDevice::DestroySecondaryRenderContexts()::$_109>(
    char const*, render::RenderDevice::DestroySecondaryRenderContexts()::$_109&&)::{
    lambda() #2
}
::RunOnceOnAllThreads({ lambda() #2 } && arg1) {
    new (this) std::shared_ptr<std::packaged_task<void()>>(arg1);
}

// 0x100c5af80
void ThreadPool::RunOnceOnAllThreads<render::RenderDevice::DestroySecondaryRenderContexts()::$_109>(
    char const*, render::RenderDevice::DestroySecondaryRenderContexts()::$_109&&)::{
    lambda() #2
}
::RunOnceOnAllThreads(const { lambda() #2 } & arg1) {
    RunOnceOnAllThreads(arg1);
}

// 0x100c5afa0
void ThreadPool::RunOnceOnAllThreads<render::RenderDevice::DestroySecondaryRenderContexts()::$_109>(
    char const*, render::RenderDevice::DestroySecondaryRenderContexts()::$_109&&)::{
    lambda() #2
}
::RunOnceOnAllThreads(const { lambda() #2 } & arg1) {
    new (this) std::shared_ptr<std::packaged_task<void()>>(arg1);
}

// 0x100c5b210
void ThreadPool::RunOnceOnAllThreads<render::RenderDevice::DestroySecondaryRenderContexts()::$_109>(
    char const*, render::RenderDevice::DestroySecondaryRenderContexts()::$_109&&)::{
    lambda() #2
}
::operator()() const {
    packaged_task<void()>* this_00;

    this_00 = (packaged_task<void()>*)**this;
    std::packaged_task<void()>::operator()(this_00);
}

// 0x100c5b240
void ThreadPool::RunOnceOnAllThreads<render::RenderDevice::DestroySecondaryRenderContexts()::$_109>(
    char const*, render::RenderDevice::DestroySecondaryRenderContexts()::$_109&&)::{
    lambda() #2
}
::~RunOnceOnAllThreads() {
    ~shared_ptr();
}

// 0x100c5b3b0
void ThreadPool::RunOnceOnAllThreads<render::RenderDevice::RunWithThreadPoolRenderContexts(
    fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_110>(
    char const*, render::RenderDevice::RunWithThreadPoolRenderContexts(
                     fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                             (fixedfunction::Methods)0> const&)::$_110&&)::{
    lambda() #2
}
::~RunOnceOnAllThreads() {
    ~RunOnceOnAllThreads(this);
}

// 0x100c5b6e0
void ThreadPool::RunOnceOnAllThreads<render::RenderDevice::RunWithThreadPoolRenderContexts(
    fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_110>(
    char const*, render::RenderDevice::RunWithThreadPoolRenderContexts(
                     fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                             (fixedfunction::Methods)0> const&)::$_110&&)::{
    lambda() #1
}
::operator()() const {
    render::RenderDevice::RunWithThreadPoolRenderContexts(
        *(fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                  (fixedfunction::Methods)0> const&))::$_110::operator()((__110*)this);
}

// 0x100c5b800
void ThreadPool::RunOnceOnAllThreads<render::RenderDevice::RunWithThreadPoolRenderContexts(
    fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_110>(
    char const*, render::RenderDevice::RunWithThreadPoolRenderContexts(
                     fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                             (fixedfunction::Methods)0> const&)::$_110&&)::{
    lambda() #2
}
::RunOnceOnAllThreads({ lambda() #2 } && arg1) {
    RunOnceOnAllThreads(arg1);
}

// 0x100c5b820
void ThreadPool::RunOnceOnAllThreads<render::RenderDevice::RunWithThreadPoolRenderContexts(
    fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_110>(
    char const*, render::RenderDevice::RunWithThreadPoolRenderContexts(
                     fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                             (fixedfunction::Methods)0> const&)::$_110&&)::{
    lambda() #2
}
::RunOnceOnAllThreads({ lambda() #2 } && arg1) {
    new (this) std::shared_ptr<std::packaged_task<void()>>(arg1);
}

// 0x100c5bf40
void ThreadPool::RunOnceOnAllThreads<render::RenderDevice::RunWithThreadPoolRenderContexts(
    fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_110>(
    char const*, render::RenderDevice::RunWithThreadPoolRenderContexts(
                     fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                             (fixedfunction::Methods)0> const&)::$_110&&)::{
    lambda() #2
}
::RunOnceOnAllThreads(const { lambda() #2 } & arg1) {
    RunOnceOnAllThreads(arg1);
}

// 0x100c5bf60
void ThreadPool::RunOnceOnAllThreads<render::RenderDevice::RunWithThreadPoolRenderContexts(
    fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_110>(
    char const*, render::RenderDevice::RunWithThreadPoolRenderContexts(
                     fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                             (fixedfunction::Methods)0> const&)::$_110&&)::{
    lambda() #2
}
::RunOnceOnAllThreads(const { lambda() #2 } & arg1) {
    new (this) std::shared_ptr<std::packaged_task<void()>>(arg1);
}

// 0x100c5c1d0
void ThreadPool::RunOnceOnAllThreads<render::RenderDevice::RunWithThreadPoolRenderContexts(
    fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_110>(
    char const*, render::RenderDevice::RunWithThreadPoolRenderContexts(
                     fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                             (fixedfunction::Methods)0> const&)::$_110&&)::{
    lambda() #2
}
::operator()() const {
    packaged_task<void()>* this_00;

    this_00 = (packaged_task<void()>*)**this;
    std::packaged_task<void()>::operator()(this_00);
}

// 0x100c5c200
void ThreadPool::RunOnceOnAllThreads<render::RenderDevice::RunWithThreadPoolRenderContexts(
    fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_110>(
    char const*, render::RenderDevice::RunWithThreadPoolRenderContexts(
                     fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                             (fixedfunction::Methods)0> const&)::$_110&&)::{
    lambda() #2
}
::~RunOnceOnAllThreads() {
    ~shared_ptr();
}

// 0x100c5c3a0
void ThreadPool::AddTask<render::RenderDevice::RunOnThreadPoolRenderContext(
    char const*,
    fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_111>(
    char const*, render::RenderDevice::RunOnThreadPoolRenderContext(
                     char const*, fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                                          (fixedfunction::Methods)0> const&)::$_111&&)::{
    lambda() #1
}
::~future() {
    ~future(this);
}

// 0x100c5cb50
void ThreadPool::AddTask<render::RenderDevice::RunOnThreadPoolRenderContext(
    char const*,
    fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_111>(
    char const*, render::RenderDevice::RunOnThreadPoolRenderContext(
                     char const*, fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                                          (fixedfunction::Methods)0> const&)::$_111&&)::{
    lambda() #1
}
::future({ lambda() #1 } && arg1) {
    future(arg1);
}

// 0x100c5cb70
void ThreadPool::AddTask<render::RenderDevice::RunOnThreadPoolRenderContext(
    char const*,
    fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_111>(
    char const*, render::RenderDevice::RunOnThreadPoolRenderContext(
                     char const*, fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                                          (fixedfunction::Methods)0> const&)::$_111&&)::{
    lambda() #1
}
::future({ lambda() #1 } && arg1) {
    new (this) std::shared_ptr<std::packaged_task<void()>>(arg1);
}

// 0x100c5d290
void ThreadPool::AddTask<render::RenderDevice::RunOnThreadPoolRenderContext(
    char const*,
    fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_111>(
    char const*, render::RenderDevice::RunOnThreadPoolRenderContext(
                     char const*, fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                                          (fixedfunction::Methods)0> const&)::$_111&&)::{
    lambda() #1
}
::future(const { lambda() #1 } & arg1) {
    future(arg1);
}

// 0x100c5d2b0
void ThreadPool::AddTask<render::RenderDevice::RunOnThreadPoolRenderContext(
    char const*,
    fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_111>(
    char const*, render::RenderDevice::RunOnThreadPoolRenderContext(
                     char const*, fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                                          (fixedfunction::Methods)0> const&)::$_111&&)::{
    lambda() #1
}
::future(const { lambda() #1 } & arg1) {
    new (this) std::shared_ptr<std::packaged_task<void()>>(arg1);
}

// 0x100c5d520
void ThreadPool::AddTask<render::RenderDevice::RunOnThreadPoolRenderContext(
    char const*,
    fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_111>(
    char const*, render::RenderDevice::RunOnThreadPoolRenderContext(
                     char const*, fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                                          (fixedfunction::Methods)0> const&)::$_111&&)::{
    lambda() #1
}
::operator()() const {
    packaged_task<void()>* this_00;

    this_00 = (packaged_task<void()>*)**this;
    std::packaged_task<void()>::operator()(this_00);
}

// 0x100c5d550
void ThreadPool::AddTask<render::RenderDevice::RunOnThreadPoolRenderContext(
    char const*,
    fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_111>(
    char const*, render::RenderDevice::RunOnThreadPoolRenderContext(
                     char const*, fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                                          (fixedfunction::Methods)0> const&)::$_111&&)::{
    lambda() #1
}
::~future() {
    ~shared_ptr();
}

// 0x100c958a0
TaskInfo* ThreadPool::TaskInfo::operator=(ThreadPool::TaskInfo&& taskInfo) {
    *this = taskInfo;
    field_48 = taskInfo.field_48;
    field_52 = taskInfo.field_52;
    field_56 = &taskInfo.field_56;
    return this;
}

// 0x100c968d0
ThreadPool::TaskInfo::TaskInfo() : std::function<void()>(), field_48(1), field_52(1) {}

} // namespace jag
